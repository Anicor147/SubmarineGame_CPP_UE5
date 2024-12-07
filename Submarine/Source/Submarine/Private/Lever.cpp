// Fill out your copyright notice in the Description page of Project Settings.


#include "Lever.h"

#include "LeverAnimNotify.h"
#include "LeverCondition.h"

// Sets default values
ALever::ALever()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	skeletal = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal"));
	skeletal->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void ALever::BeginPlay()
{
	Super::BeginPlay();
	InitAnimations();
}

// Called every frame
void ALever::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALever::ActivateLever()
{
	if (!doOnce)
	{
		condition->CheckSequence(value);
		doOnce = true;
	}
}

void ALever::ResetLever()
{
	doOnce = false;
	auto instance = skeletal ->GetAnimInstance();
	instance ->Montage_Stop(0.0f,instance->GetCurrentActiveMontage());
}

void ALever::Interact()
{
	if (!doOnce)
	{
		UAnimInstance* AnimInstance = skeletal->GetAnimInstance();
		if (AnimInstance && !AnimInstance->Montage_IsPlaying(DesactionnerMontage))
		{
			AnimInstance->Montage_Stop(0.0f,AnimInstance->GetCurrentActiveMontage());
			condition->CheckSequence(value);
			AnimInstance->Montage_Play(DesactionnerMontage, 1.0f);
			doOnce = true;
		}
	}
}

void ALever::InitAnimations()
{
	if (DesactionnerMontage)
	{
		const auto NotifyEvents = DesactionnerMontage->Notifies;
		for (auto EventNotify : NotifyEvents)
		{
			if (const auto Action = Cast<ULeverAnimNotify>(EventNotify.Notify))
			{
				Action->OnNotified.AddUObject(this, &ALever::InteractMontage);
			}
		}
	}
}

void ALever::InteractMontage()
{
	UAnimInstance* AnimInstance = skeletal->GetAnimInstance();
	if (AnimInstance && AnimInstance->GetCurrentActiveMontage())
	{
		UE_LOG(LogTemp, Warning, TEXT("Montage is active, pausing..."));
		AnimInstance->Montage_Pause(AnimInstance->GetCurrentActiveMontage());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No active montage to pause!"));
	}
}

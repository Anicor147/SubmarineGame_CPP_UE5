# Submarine

*[English version](README.md)*

Jeu d'énigmes à la première personne : le sous-marin prend l'eau, et le joueur doit colmater les fuites et remettre le générateur en marche avant d'être noyé.
Projet académique solo réalisé avec **Unreal Engine 5.5** et **C++** (novembre 2024 – janvier 2025).

![Zone de départ](https://github.com/user-attachments/assets/41b34460-4df7-4940-8f41-673dacf34567)

## Principe

Le niveau de l'eau monte en continu. Pour survivre, le joueur explore le sous-marin, trouve les outils et résout des énigmes qui débloquent les pièces nécessaires aux réparations. Quand toutes les fuites sont colmatées et que le générateur est réparé, l'eau se vide. Si l'eau atteint le plafond, la partie est perdue.

## Fonctionnalités

- **Montée de l'eau** : un acteur C++ fait monter le niveau à chaque image, déclenche l'écran de mort et vide l'eau quand les réparations sont terminées.
- **Fuites d'eau** : effets Niagara et son, colmatées avec le marteau et la boîte à outils.
- **Générateur** : trois batteries à trouver et à placer dans leurs emplacements.
- **Énigme des leviers** : une séquence de leviers à actionner dans le bon ordre, réinitialisée en cas d'erreur.
- **Clavier numérique** : un code à saisir pour ouvrir un casier.
- **Mode inspection** : le joueur prend un objet en main pour le tourner et l'examiner. Le jeu change alors d'Input Mapping Context (Enhanced Input) pour que la souris fasse pivoter l'objet au lieu de la caméra.
- **Ramasser et lâcher** des objets avec physique.
- **Histoire** : textes chargés depuis une Data Table (`FStoryData`) et affichés dans un widget.
- **Interface** en C++ : HUD avec invites d'action, menu principal, menu pause et écran de mort.

## Architecture

| Classe | Rôle |
| --- | --- |
| `ASubmarineCharacter` | Déplacement, détection des objets par line trace, mode inspection, interaction |
| `IInteractE` | Interface commune à tous les objets interactifs (`Interact()`) |
| `AWaterMecanic` | Niveau de l'eau, condition de défaite, vidange |
| `AWaterLeak` | Fuite d'eau (Niagara + son) |
| `AGenerator` / `ABattery` | Générateur à trois emplacements de batterie |
| `ALever` / `ALeverCondition` | Énigme de séquence de leviers |
| `ANumPad` / `ALocker` | Clavier numérique et casier |
| `AHammer` / `AToolbox` | Outils ramassables |
| `U*Widget` | HUD, menus, écran de mort, histoire |

## Commandes

| Touche | Action |
| --- | --- |
| W A S D + souris | Se déplacer et regarder |
| E | Interagir |
| G | Lâcher l'objet tenu |

## Lancer le projet

1. Installer **Unreal Engine 5.5** et Visual Studio ou Rider avec les outils C++.
2. Clic droit sur `Submarine/Submarine.uproject` > *Generate Visual Studio project files*.
3. Ouvrir le `.uproject` et compiler lorsque l'éditeur le demande.

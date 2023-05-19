# Explication du programme

Pour mener à bien notre projet, nous avons suivi deux étapes principales. Tout d'abord, nous avons procédé à l'étape de câblage du robot, où nous avons connecté les différents composants et effectué les connexions nécessaires. Ensuite, nous sommes passés à l'étape de programmation, où nous avons développé le code et configuré le comportement et les fonctionnalités du robot. Ces deux étapes, le câblage et la programmation, ont été essentielles pour réaliser notre projet avec succès.
## 1. Cablage du robot
Pour le câblage, nous avons pris soin de réaliser une installation bien propre, lisible et compréhensible, même pour ceux qui ne sont pas familiers avec le domaine de l'embarqué. Voici une image du cabalge.
![image](https://github.com/L3-Option-TSI-2023/ThienroDIALLO/assets/127400655/c8658329-d835-49aa-9ce8-be27bc836212)

## 2. Programmation du robot
La partie programmation du robot concerne le développement du code qui permet de contrôler le comportement et les fonctionnalités du robot.
Nous avons tout d'abord commencé par régler l'asservissement du robot, c'est-à-dire nous assurer que le robot roule tout droit sans dévier de sa trajectoire.
Pour cela, nous avons utilisé un Correcteur **PI (proportionnel et intégral)** qui nous a permis d'obtenir l'asservissement souhaité.

Voici l'explication des differentes fonctions utilisées.

La fonction "setup()" est exécutée au démarrage et initialise les broches, les interruptions et la minuterie pour l'asservissement.
Les fonctions "CompteurG()" et "CompteurD()" sont des interruptions appelées lorsqu'un des encodeurs détecte un front montant.
La fonction "Asservissement()" est l'interruption périodique qui contrôle l'asservissement des moteurs en calculant les vitesses, les erreurs et les commandes.
Les fonctions "avance()", "recule()", "gauche()", "droite()" et "stop()" sont des commandes de mouvement du robot.
Les fonctions "clignotantD()" et "clignotantG()" sont des clignotants pour les LEDs.
La fonction "delais(float a)" calcule un délai en fonction de la consigne de vitesse.
La fonction "loop()" est la boucle principale qui lit une tension d'entrée analogique, met à jour la consigne de vitesse, gère les commandes de mouvement et active ou désactive l'asservissement en fonction de l'état d'un bouton.


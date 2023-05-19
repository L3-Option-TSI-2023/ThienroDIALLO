# ThienroDIALLO
# Resumer du code de César
Le code César correspond à une méthode de cryptage utilisé à l'époque romaine pour transmettre des information.
Il consiste à décaler les lettres d'un message d'un décalage fixe. Quand on arrive en fin d'alphabet, on
continue le décalage avec les lettres du début.

Par exemple, avec un décalage de 3
**BONJOUR  ----> ERQMRXU**
## Fonctionnement du système
![image](https://github.com/L3-Option-TSI-2023/ThienroDIALLO/assets/127400655/7e0ffb94-ec2d-438c-a6e3-a16d889d78fd)

A chaque pression sur le bouton, il y a changement d'état de manière circulaire:
**Etat 1:** Led jaune allumée uniquement, la phrase écrite dans le terminal est recopiée dans le terminal
**Etat 2:** Led rouge allumée uniquement, la phrase écrite dans le terminal est récopiée sous forme cryptée dans le terminal
**Etat 3:** Led verte allumée uniquement, la phrase cryptée est décryptée dans le terminal.


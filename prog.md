# ThienroDIALLO


# 1. Les processeurs **RISC ET CISC**
Les processeurs RISC (Reduced Instruction Set Computing) et CISC (Complex Instruction Set Computing) sont deux architectures de processeurs différentes.

Un processeur **RISC** utilise un jeu d'instructions simple et uniforme, ce qui lui permet d'exécuter des instructions plus rapidement que les processeurs CISC. Les processeurs RISC ont généralement un nombre limité d'instructions, mais chaque instruction peut être exécutée en un seul cycle d'horloge.

Il est important de noter que les processeurs RISC spécialisés sacrifient la polyvalence au profit de l'efficacité. L'élimination des instructions non utilisées permet de réduire considérablement le nombre de transistors sur le processeur. Les tâches étant moins nombreuses, elles sont exécutées plus rapidement, y compris à des vitesses d'horloge moindres (puissance inférieure) qu'un processeur CISC x86 équivalent complet.

En revanche, les processeurs **CISC** ont un jeu d'instructions plus complexe, qui permet d'exécuter des tâches plus complexes avec moins de code. Les processeurs CISC ont généralement plus d'instructions que les processeurs RISC, mais chaque instruction peut prendre plusieurs cycles d'horloge pour être exécutée.

Il est important de noter que la distinction entre les processeurs RISC et CISC n'est pas toujours nette, car les concepteurs de processeurs ont tendance à emprunter des caractéristiques des deux architectures pour créer des processeurs hybrides. Cependant, certaines des architectures de processeurs RISC et CISC les plus populaires incluent :

## Processeurs **RISC** :
* ARM (Advanced RISC Machines)
* MIPS(Microprocessor without Interlocked Pipeline Stages)
* PowerPC(Performance Optimization with Enhanced RISC-Performance Computing)

## Processeurs **CISC** :
* Intel x86
* AMD64 (x86-64)
* DEC Alpha

# 2. Architecture de Von Neumann et d'Harvard

**Harvard** et **von Neumann** sont deux architectures de base pour les ordinateurs.

# a. ARCHITECTURE DE VON NEUMANN :
L'architecture de von Neumann (ou architecture de Princeton) est la plus ancienne et la plus courante des deux. Dans ce type d'architecture, les programmes et les données sont stockés dans la même mémoire, et le processeur accède à cette mémoire pour récupérer les instructions et les données nécessaires à l'exécution du programme. Cela permet une grande flexibilité dans l'utilisation de la mémoire, car elle peut être partagée entre les données et les instructions. Cependant, cela peut également entraîner des goulots d'étranglement lorsqu'il y a une forte demande d'accès à la mémoire.

# b. ARCHITECTURE DE HARVARD :
En revanche, l'architecture de Harvard utilise deux mémoires séparées pour stocker les instructions et les données. Cette séparation permet d'accéder simultanément aux instructions et aux données, ce qui peut améliorer les performances du système. Cependant, cela signifie également que la mémoire doit être divisée en deux parties distinctes, ce qui peut limiter la flexibilité de l'utilisation de la mémoire.
un schema en guise d'ullustration: ![Logo Grafikart.fr](https://image.slidesharecdn.com/harvardarchitecture-120315073904-phpapp02/95/harvard-architecture-2-1024.jpg?cb=1331797532)


En résumé, l'architecture de von Neumann est plus flexible mais peut causer des goulots d'étranglement, tandis que l'architecture de Harvard est plus rapide mais moins flexible. De nombreuses architectures de processeurs modernes combinent des éléments des deux architectures pour atteindre un équilibre entre la flexibilité et la vitesse de traitement.




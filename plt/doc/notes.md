# PLT Notes

> PLT: **P**rogramming **L**anguage **T**heory

## Définitions de base

### 1. Alphabet

Un **alphabet** est un **ensemble fini et non vide de symboles**.

Notation :
Σ

Exemples :

- Σ = {a, b}
- Σ = {0, 1}
- Σ = {a, b, c}

### 2. Mot (ou chaîne)

Un **mot** est une **suite finie de symboles de l’alphabet Σ**.

Exemples si Σ = {a, b} :

- a
- ab
- bba
- aaab

#### Mot vide

Le **mot vide** est noté :

ε

Il contient **0 symbole**.

### 3. Longueur d’un mot

La **longueur** d’un mot w est le nombre de symboles qu’il contient.

Notation :

|w|

Exemples :

- w = aba → |w| = 3
- w = b → |w| = 1
- |ε| = 0

### 4. Ensemble des mots Σ\*

Σ\* est **l’ensemble de tous les mots possibles** formés avec les symboles de Σ (y compris ε).

Exemple si Σ = {a, b} :

Σ\* = {ε, a, b, aa, ab, ba, bb, aaa, ...}

### 5. Langage

Un **langage** est **un ensemble de mots sur un alphabet Σ**.

Notation :

L ⊆ Σ\*

Exemple :

L = {a, ab, aab}

Cela signifie que **L est un sous-ensemble de Σ\***.

## Opérations sur les langages

En **théorie des langages formels**, soit :

- Σ : un alphabet
- L, L1, L2 ⊆ Σ\* : des langages

### 1. Union

Ensemble des mots appartenant à **L1 ou L2**.

L1 ∪ L2 = { w | w ∈ L1 ou w ∈ L2 }

### 2. Intersection

Ensemble des mots **communs** aux deux langages.

L1 ∩ L2 = { w | w ∈ L1 et w ∈ L2 }

### 3. Différence

Mots qui sont dans **L1 mais pas dans L2**.

L1 − L2 = { w | w ∈ L1 et w ∉ L2 }

### 4. Complémentaire

Tous les mots de **Σ\*** qui **ne sont pas dans L**.

L̅ = Σ\* − L

### 5. Concaténation

On concatène chaque mot de **L1** avec chaque mot de **L2**.

L1L2 = { xy | x ∈ L1 et y ∈ L2 }

### 6. Puissance d’un langage

L^0 = {ε}

L^1 = L

L^n = L · L · ... · L (n fois)

### 7. Étoile de Kleene

Toutes les répétitions possibles de **L**, y compris **ε**.

L\* = ⋃(n=0 → ∞) L^n

### 8. Plus de Kleene

Toutes les répétitions **sans ε**.

L+ = ⋃(n=1 → ∞) L^n = LL\*

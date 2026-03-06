# PLT Cheatsheet

## Définitions de base

| Concept  | Définition                    |
| -------- | ----------------------------- |
| Alphabet | ensemble fini de symboles (Σ) |
| Mot      | suite finie de symboles (w)   |
| Mot vide | ε                             |
| Longueur | \| w \|                       |
| Σ\*      | ensemble de tous les mots     |
| Langage  | sous-ensemble de Σ\*          |

## Opérations sur les langages

| Opération      | Symbole | Description            |
| -------------- | ------- | ---------------------- |
| Union          | L1 ∪ L2 | mots dans L1 ou L2     |
| Intersection   | L1 ∩ L2 | mots communs           |
| Différence     | L1 − L2 | mots de L1 seulement   |
| Complémentaire | L̅       | mots de Σ\* pas dans L |
| Concaténation  | L1L2    | coller les mots        |
| Puissance      | L^n     | concaténation n fois   |
| Kleene Star    | L\*     | répétition avec ε      |
| Kleene Plus    | L+      | répétition sans ε      |

> Un **langage** est simplement un **sous-ensemble de Σ\***.

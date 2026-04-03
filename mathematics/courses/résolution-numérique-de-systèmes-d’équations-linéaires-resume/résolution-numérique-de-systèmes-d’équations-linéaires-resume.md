# Résolution numérique de systèmes d’équations linéaires Resume

- **les méthodes de résolution pour des systèmes d’équations linéaires:**
  ![les méthodes de résolution pour des systèmes d’équations linéaires](res/les-méthodes-de-résolution-pour-des-systèmes-d’équations-linéaires.png)
- **Système d’équations linéaires:**
  ![Définition - Système d’équations linéaires](res/système-d’équations-linéaires-def.png)

- **Forme matricielle d’un système linéaire:**
  ![Forme matricielle d’un système linéaire](res/forme-matricielle-d’un-système-linéaire.png)

- **Existence des solutions:**
  ![Existence des solutions](res/existence-des-solutions.png)

> [!NOTE]
> (A) matrice carrée, si $\det(A) \neq 0$ ⇔
>
> - $A$ est **inversible**
> - le système linéaire $(S)$ est un **système de Cramer**
> - $(S)$ admet une **solution unique**
> - les colonnes (ou lignes) de $A$ sont **linéairement indépendantes**
> - $\mathrm{rang}(A) = n$ (rang maximal)
> - l’application linéaire associée est **bijective**

## Normes vectorielles et matricielles

### Normes vectorielles

![Normes vectorielles](res/normes-vectorielles.png)

Les normes vectorielles usuelles que l’on utilisera le plus souvent sont:

Soit $x = (x_i)_{1 \le i \le n} \in \mathbb{R}^n$ :

- **Norme 1 (norme de Manhattan)** :
  $$
  \|x\|_1 = \sum_{i=1}^{n} |x_i| = |x_1| + |x_2| + \cdots + |x_n|
  $$
- **Norme euclidienne (norme 2)** :
  $$
  \|x\|_2 = \left( \sum_{i=1}^{n} |x_i|^2 \right)^{1/2}
  = \sqrt{|x_1|^2 + |x_2|^2 + \cdots + |x_n|^2}
  $$
- **Norme infinie (norme du sup)** :
  $$
  \|x\|_\infty = \max_{1 \le i \le n} |x_i|
  = \max \{ |x_1|, |x_2|, \cdots, |x_n| \}
  $$

### Normes matricielles subordonnées

- Définition d’une **norme matricielle**:
  ![Norme matricielles](res/normes-matricielles.png)

- Définition d’une **norme matricielle subordonnées**:
  ![Norme matricielles subordonnées](res/norme-matricielle-subordonnées.png)

# Introduction à la Récursivité en C

## Qu'est-ce que la récursivité ?

La récursivité est une technique de programmation dans laquelle une fonction s'appelle elle-même pour résoudre un problème. Elle permet de diviser un problème complexe en sous-problèmes plus simples, jusqu'à atteindre une condition d'arrêt qui met fin aux appels récursifs.

En général, une fonction récursive comporte deux éléments clés :
- **Le cas de base** : une condition qui arrête la récursion.
- **L'appel récursif** : une étape où la fonction s'appelle elle-même avec des paramètres modifiés pour progresser vers le cas de base.

## Exemple simple de récursivité en C

Voici un exemple classique : le calcul de la factorielle d'un nombre entier positif.

```c
#include <stdio.h>

// Fonction récursive pour calculer la factorielle
t int factorielle(int n) {
    if (n == 0 || n == 1) { // Cas de base
        return 1;
    } else { // Appel récursif
        return n * factorielle(n - 1);
    }
}

int main() {
    int nombre = 5;
    printf("La factorielle de %d est %d\n", nombre, factorielle(nombre));
    return 0;
}
```

### Explication du code
1. Si `n` est égal à 0 ou 1, la fonction renvoie 1 (cas de base).
2. Sinon, elle renvoie `n` multiplié par la factorielle de `n - 1`.
3. Le processus se répète jusqu'à atteindre le cas de base.

Exécution des appels récursifs pour `factorielle(5)` :
```
factorielle(5) = 5 * factorielle(4)
factorielle(4) = 4 * factorielle(3)
factorielle(3) = 3 * factorielle(2)
factorielle(2) = 2 * factorielle(1)
factorielle(1) = 1
```

## Avantages et inconvénients de la récursivité

### Avantages
- **Clarté et simplicité** pour certains problèmes (arbres, fractales, algorithmes de tri comme le quicksort).
- Permet une solution élégante et concise.

### Inconvénients
- **Consommation mémoire** : chaque appel récursif consomme de la mémoire sur la pile (stack), ce qui peut entraîner un débordement de pile (stack overflow) si la récursion est trop profonde.
- Moins efficace que les boucles dans certains cas, en raison du coût des appels de fonction.

## Bonnes pratiques
- Toujours définir un **cas de base** pour éviter les boucles infinies.
- Tester avec des **petites valeurs** pour vérifier le bon fonctionnement avant d'augmenter la complexité.
- Si possible, envisager la **récursion terminale** pour optimiser l'utilisation de la mémoire.

## Pour aller plus loin
- Étudier les algorithmes récursifs classiques : tri rapide (quicksort), recherche binaire, parcours d'arbre (DFS).
- Explorer les méthodes pour convertir une solution récursive en solution itérative.

---

N'hésitez pas à expérimenter et à poser des questions pour renforcer votre compréhension !


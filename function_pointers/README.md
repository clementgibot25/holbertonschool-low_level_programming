# README : Les Pointeurs de Fonctions en C

## Introduction
Les pointeurs de fonctions en C sont des variables qui stockent l'adresse d'une fonction. Ils permettent d'appeler dynamiquement une fonction via son adresse, ce qui est utile pour l'implémentation de callbacks, de tables de fonctions et de programmation modulaire.

---

## 1. Déclaration et Définition
Un pointeur de fonction se déclare en spécifiant le type de retour et la liste des paramètres entre parenthèses.

### Syntaxe générale :
```c
retour (*nom_pointeur)(type1, type2, ...);
```

### Exemple :
```c
#include <stdio.h>

// Fonction exemple
int addition(int a, int b) {
    return a + b;
}

int main() {
    // Déclaration d'un pointeur vers une fonction prenant deux int et retournant un int
    int (*ptr_fonction)(int, int);

    // Affectation de l'adresse de la fonction
    ptr_fonction = &addition;

    // Appel de la fonction via le pointeur
    printf("Resultat: %d\n", ptr_fonction(3, 4));
    return 0;
}
```

---

## 2. Utilisation des Pointeurs de Fonction
### a) Appel de Fonction
Un pointeur de fonction peut être appelé de deux manières :
```c
ptr_fonction(a, b);
(*ptr_fonction)(a, b);
```
Les deux syntaxes sont équivalentes.

### b) Passer un Pointeur de Fonction comme Argument
```c
void execute(int (*operation)(int, int), int x, int y) {
    printf("Resultat: %d\n", operation(x, y));
}

int main() {
    execute(addition, 5, 10);
    return 0;
}
```

### c) Tableau de Pointeurs de Fonction
```c
int soustraction(int a, int b) { return a - b; }
int multiplication(int a, int b) { return a * b; }

int main() {
    // Tableau de pointeurs de fonctions
    int (*operations[])(int, int) = {addition, soustraction, multiplication};

    // Utilisation du tableau
    for (int i = 0; i < 3; i++) {
        printf("Resultat: %d\n", operations[i](6, 2));
    }
    return 0;
}
```

---

## 3. Applications Pratiques
- **Callbacks** : Passer une fonction en argument d'une autre fonction.
- **Tables de Fonctions** : Utilisation dans les machines à états ou interpréteurs.
- **Optimisation du Code** : Éviter des structures `if-else` complexes en choisissant dynamiquement une fonction.

---

## 4. Erreurs Courantes
- **Ne pas initialiser un pointeur de fonction** : Toujours assigner une valeur avant de l'utiliser.
- **Appeler une fonction via un pointeur NULL** : Peut causer un segfault.
- **Incompatibilité des signatures** : Toujours s'assurer que la signature de la fonction correspond au pointeur.

```c
int (*ptr)(int, int); // Correct
void (*ptr2)(int);    // Incompatible avec une fonction retournant un int
```

---

## Conclusion
Les pointeurs de fonction sont un outil puissant en C, permettant d'écrire du code flexible et efficace. Bien qu'ils puissent sembler complexes au départ, leur maîtrise ouvre la voie à des conceptions plus dynamiques et modulaires.


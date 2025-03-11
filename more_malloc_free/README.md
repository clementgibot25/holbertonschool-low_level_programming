# README: Présentation détaillée des fonctions exit, calloc et realloc

## Introduction
Ce document présente de manière claire et détaillée trois fonctions essentielles en langage C : `exit`, `calloc`, et `realloc`. Ces fonctions jouent un rôle crucial dans la gestion des processus et de la mémoire dynamique.

---

## 1. La fonction `exit`

### Prototype
```c
#include <stdlib.h>
void exit(int status);
```

### Description
La fonction `exit()` termine immédiatement le programme en cours d'exécution. Elle prend un argument `status` qui est généralement utilisé pour indiquer le code de sortie du programme.

- **0** : indique une sortie réussie (succès).
- **Autre valeur (typiquement 1, 2, etc.)** : indique une erreur ou un échec.

### Exemple
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Programme en cours d'exécution...\n");
    exit(0); // Quitte le programme avec succès
    printf("Ce message ne s'affichera jamais.\n");
    return 0;
}
```

### Remarques
- Avant de quitter, `exit()` effectue les opérations suivantes :
  - Exécute les fonctions enregistrées avec `atexit()`.
  - Vide les tampons des flux de sortie.
  - Ferme tous les fichiers ouverts.

---

## 2. La fonction `calloc`

### Prototype
```c
#include <stdlib.h>
void *calloc(size_t nmemb, size_t size);
```

### Description
La fonction `calloc()` alloue une zone mémoire pour un tableau de `nmemb` éléments, chacun ayant une taille de `size` octets. La mémoire allouée est **initialisée à zéro**.

- **nmemb** : nombre d'éléments.
- **size** : taille de chaque élément.

### Retour
- Un pointeur vers la mémoire allouée.
- `NULL` si l'allocation échoue.

### Exemple
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Échec de l'allocation mémoire\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);
    return 0;
}
```

### Différence avec `malloc`
- **calloc** initialise la mémoire à zéro, contrairement à **malloc** qui n'initialise pas la mémoire.

---

## 3. La fonction `realloc`

### Prototype
```c
#include <stdlib.h>
void *realloc(void *ptr, size_t size);
```

### Description
La fonction `realloc()` modifie la taille de la zone mémoire pointée par `ptr` pour la nouvelle taille spécifiée par `size`.

- **ptr** : pointeur vers la mémoire précédemment allouée (via `malloc`, `calloc`, ou une précédente `realloc`).
- **size** : nouvelle taille en octets.

### Retour
- Un pointeur vers la mémoire réallouée.
- `NULL` si l'allocation échoue (l'ancien bloc n'est pas libéré).

### Cas particuliers
- Si **ptr est NULL** : `realloc()` agit comme `malloc(size)`.
- Si **size est 0** et que **ptr n'est pas NULL** : `realloc()` libère la mémoire pointée par `ptr`.

### Exemple
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(3 * sizeof(int));
    if (arr == NULL) {
        printf("Échec de l'allocation mémoire\n");
        return 1;
    }
    arr[0] = 1; arr[1] = 2; arr[2] = 3;

    arr = realloc(arr, 5 * sizeof(int));
    if (arr == NULL) {
        printf("Échec de la réallocation\n");
        return 1;
    }
    arr[3] = 4; arr[4] = 5;

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);
    return 0;
}
```

---

## Conclusion
- **`exit()`** termine le programme proprement en effectuant les nettoyages nécessaires.
- **`calloc()`** alloue et initialise la mémoire à zéro.
- **`realloc()`** ajuste la taille d'un bloc mémoire existant tout en conservant les données si possible.

Ces trois fonctions sont essentielles pour la gestion des processus et de la mémoire dynamique dans vos programmes en C. Assurez-vous de toujours vérifier le retour de `malloc`, `calloc`, et `realloc` pour éviter des erreurs imprévues.

---

## Références
- [Documentation officielle GNU](https://www.gnu.org/software/libc/manual/html_node/)
- [cppreference.com](https://en.cppreference.com/)

N'hésitez pas à me poser des questions pour clarifier certains concepts ! 🚀


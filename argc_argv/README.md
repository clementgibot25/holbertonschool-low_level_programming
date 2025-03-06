# Présentation détaillée de argc et argv en C

## Introduction
En C, les paramètres `argc` et `argv` jouent un rôle essentiel dans la gestion des arguments passés à un programme via la ligne de commande. Ce document détaille leur fonctionnement, leur utilisation et propose des exemples pratiques.

## Définitions

### `int argc`
- **"Argument count"** : représente le nombre total d'arguments passés au programme lors de son exécution.
- Inclut le nom du programme lui-même comme premier argument.

### `char *argv[]`
- **"Argument vector"** : un tableau de chaînes de caractères, où chaque élément correspond à un argument passé.
- `argv[0]` contient le nom du programme.
- `argv[1]` à `argv[argc-1]` contiennent les arguments supplémentaires.
- `argv[argc]` est toujours égal à `NULL`, marquant la fin du tableau.

## Exemple simple

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Nombre d'arguments : %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("Argument %d : %s\n", i, argv[i]);
    }
    return 0;
}
```

### Compilation et exécution
```bash
gcc programme.c -o programme
./programme arg1 arg2 arg3
```

### Résultat
```
Nombre d'arguments : 4
Argument 0 : ./programme
Argument 1 : arg1
Argument 2 : arg2
Argument 3 : arg3
```

## Cas particuliers

### Aucun argument passé
Si le programme est lancé sans argument :
- `argc` vaut 1.
- `argv[0]` contient le nom du programme.

### Espaces dans les arguments
Les arguments contenant des espaces doivent être entourés de guillemets :
```bash
./programme "argument avec espace"
```

## Utilisation avancée

### Conversion d'arguments
Pour convertir des arguments (souvent sous forme de chaînes) en entiers ou flottants :

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s nombre1 nombre2\n", argv[0]);
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("Somme : %d\n", a + b);
    return 0;
}
```

### Sécurité
- **Vérifier `argc`** avant d'accéder aux éléments de `argv` pour éviter les dépassements de tableau.
- **Utiliser `strtol()`** au lieu de `atoi()` pour une conversion plus robuste.

## Conclusion
`argc` et `argv` sont des outils puissants pour interagir avec les utilisateurs depuis la ligne de commande. Une bonne maîtrise de ces concepts permet d'écrire des programmes flexibles et dynamiques.

## Ressources supplémentaires
- [Documentation officielle C](https://en.cppreference.com/w/c)
- [Guide des arguments de la ligne de commande](https://www.gnu.org/software/libc/manual/html_node/Program-Arguments.html)

---

N'hésitez pas à poser vos questions ou proposer des améliorations !


# 🌳 holbertonschool-binary_trees

> Implémentation complète des arbres binaires en C — structures, algorithmes de parcours et propriétés.

![C](https://img.shields.io/badge/C-gnu89-blue)
![Linux](https://img.shields.io/badge/Linux-Ubuntu_22.04-orange)
![Holberton](https://img.shields.io/badge/Project-Holberton-red)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)
![Betty](https://img.shields.io/badge/Style-Betty-yellow)

---

## 📋 Table des matières

- [Description](#-description)
- [Objectifs](#-objectifs)
- [Technologies utilisées](#-technologies-utilisées)
- [Prérequis](#-prérequis)
- [Installation](#-installation)
- [Utilisation](#-utilisation)
- [Fonctionnalités](#-fonctionnalités)
- [Structure du projet](#️-structure-du-projet)
- [Contributions & Remerciements](#-contributions--remerciements)

---

## 📖 Description

Ce projet est une **implémentation from scratch des arbres binaires en C**, réalisée dans le cadre du cursus Holberton School. Il couvre la création, la manipulation et le parcours d'arbres binaires, d'arbres binaires de recherche (BST), d'arbres AVL et d'arbres Max Heap, en respectant les normes de codage **Betty**.

---

## 🎯 Objectifs

- Comprendre la structure d'un arbre binaire et ses propriétés
- Implémenter les opérations fondamentales (insertion, suppression, parcours)
- Manipuler les pointeurs et la mémoire dynamique en C
- Distinguer et implémenter les différents types d'arbres : BST, AVL, Max Heap

---

## 🛠️ Technologies utilisées

| Outil | Version |
|-------|---------|
| Langage | C (gnu89) |
| Compilateur | GCC |
| OS | Ubuntu 22.04 LTS |
| Style | Normes Betty |

---

## ✅ Prérequis

- **OS** : Ubuntu 22.04 LTS
- **GCC** installé (`gcc --version`)
- **Betty linter** pour la vérification du style (optionnel)

```bash
# Installer GCC
sudo apt-get install gcc

# Vérifier la version
gcc --version
```

---

## 🚀 Installation

```bash
# Cloner le dépôt
git clone https://github.com/22niko-spw/holbertonschool-binary_trees.git

# Se déplacer dans le répertoire
cd holbertonschool-binary_trees
```

---

## ▶️ Utilisation

### Exemple — Créer un arbre et l'afficher

```c
#include "binary_trees.h"
#include <stdlib.h>

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left  = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);

    binary_tree_print(root);
    binary_tree_delete(root);
    return (0);
}
```

**Compiler et exécuter :**
```bash
gcc -Wall -Werror -Wextra -pedantic main.c binary_tree_node.c -o binary_tree
./binary_tree
```

**Sortie attendue :**
   .-------(098)-------.
.--(012)              .--(402)

---

## ✨ Fonctionnalités

### 🌲 Arbre binaire de base

| Fonction | Description |
|----------|-------------|
| `binary_tree_node` | Crée un nouveau nœud |
| `binary_tree_insert_left` | Insère un nœud à gauche |
| `binary_tree_insert_right` | Insère un nœud à droite |
| `binary_tree_delete` | Supprime un arbre entier |
| `binary_tree_is_leaf` | Vérifie si un nœud est une feuille |
| `binary_tree_is_root` | Vérifie si un nœud est la racine |

### 🔍 Parcours

| Fonction | Description |
|----------|-------------|
| `binary_tree_preorder` | Parcours pré-ordre |
| `binary_tree_inorder` | Parcours en-ordre |
| `binary_tree_postorder` | Parcours post-ordre |

### 📏 Mesures

| Fonction | Description |
|----------|-------------|
| `binary_tree_height` | Hauteur de l'arbre |
| `binary_tree_depth` | Profondeur d'un nœud |
| `binary_tree_size` | Nombre de nœuds |
| `binary_tree_leaves` | Nombre de feuilles |
| `binary_tree_nodes` | Nœuds avec au moins un enfant |

### ⚖️ Propriétés

| Fonction | Description |
|----------|-------------|
| `binary_tree_balance` | Facteur d'équilibre |
| `binary_tree_is_full` | Arbre plein ? |
| `binary_tree_is_perfect` | Arbre parfait ? |
| `binary_tree_is_complete` | Arbre complet ? |

### 🔢 Arbres avancés

- ✅ **BST** — insertion, recherche, suppression
- ✅ **AVL Tree** — arbre auto-équilibré
- ✅ **Max Binary Heap** — structure de tas maximum

---

## 🗂️ Structure du projet
holbertonschool-binary_trees/

├── binary_trees.h              # Header — structures et prototypes

├── binary_tree_print.c         # Fonction d'affichage (fournie)

├── 0-binary_tree_node.c

├── 1-binary_tree_insert_left.c

├── 2-binary_tree_insert_right.c

├── 3-binary_tree_delete.c

├── 4-binary_tree_is_leaf.c

├── 5-binary_tree_is_root.c

├── 6-binary_tree_preorder.c

├── 7-binary_tree_inorder.c

├── 8-binary_tree_postorder.c

├── ...

└── README.md

---

## 📐 Structure de données

```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

---

## 🤝 Contributions & Remerciements

| Nom | GitHub |
|-----|--------|
| Niko S. | [@22niko-spw](https://github.com/22niko-spw) |
| Kevin Rigal | [@splint314](https://github.com/splint314) |

Merci à l'équipe pédagogique de **Holberton School France** pour l'encadrement sur ce projet de structures de données.

---

*Holberton School — Projet Binary Trees — C Programming*

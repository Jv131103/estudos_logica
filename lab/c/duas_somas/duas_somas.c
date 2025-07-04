#include <stdio.h>
#include <stdlib.h>

#define MAX_LISTS 3     // número de chaves
#define MAX_SUBLISTS 5  // máximo de listas por chave
#define MAX_NUMS 10     // máximo de números por lista

typedef struct {
    int values[MAX_NUMS];
    int length;
} IntList;

typedef struct {
    int key;
    IntList sublists[MAX_SUBLISTS];
    int sublists_count;
} KeyedList;


int two_sum(IntList *list, int target, int *out_indices) {
    for (int i = 0; i < list->length; i++) {
        for (int j = i + 1; j < list->length; j++) {
            if (list->values[i] + list->values[j] == target) {
                out_indices[0] = i;
                out_indices[1] = j;
                return 1; // encontrado
            }
        }
    }
    return 0; // não encontrado
}

int main(){
    KeyedList nums_list[MAX_LISTS] = {
            {
                .key = 9,
                .sublists = {
                    { .values = {2, 7, 11, 15}, .length = 4 }
                },
                .sublists_count = 1
            },
            {
                .key = 6,
                .sublists = {
                    { .values = {4, 3, 2}, .length = 3 },
                    { .values = {3, 3}, .length = 2 }
                },
                .sublists_count = 2
            },
            {
                .key = 7,
                .sublists = {
                    { .values = {1, 2, 3, 4, 5, 6}, .length = 6 }
                },
                .sublists_count = 1
            }
        };
    
    // Exemplo: printar tudo
    //for (int i = 0; i < MAX_LISTS; i++) {
    //    printf("Key %d:\n", nums_list[i].key);
    //    for (int j = 0; j < nums_list[i].sublists_count; j++) {
    //        printf("  [");
    //        for (int k = 0; k < nums_list[i].sublists[j].length; k++) {
    //            printf("%d", nums_list[i].sublists[j].values[k]);
    //            if (k < nums_list[i].sublists[j].length - 1)
    //                printf(", ");
    //        }
    //        printf("]\n");
    //    }
    //}
    int indices[2];

    for (int i = 0; i < MAX_LISTS; i++) {
        int key = nums_list[i].key;
        printf("Target: %d\n", key);

        for (int j = 0; j < nums_list[i].sublists_count; j++) {
            IntList *sublist = &nums_list[i].sublists[j];

            printf("  Input list: [");
            for (int k = 0; k < sublist->length; k++) {
                printf("%d", sublist->values[k]);
                if (k < sublist->length - 1) printf(", ");
            }
            printf("]\n");

            if (two_sum(sublist, key, indices)) {
                printf("  Output indices: [%d, %d]\n", indices[0], indices[1]);
                printf("  Explanation: %d + %d = %d\n\n",
                    sublist->values[indices[0]],
                    sublist->values[indices[1]],
                    key);
            } else {
                printf("  No valid pair found.\n\n");
            }
        }
    }
    return 0;
}

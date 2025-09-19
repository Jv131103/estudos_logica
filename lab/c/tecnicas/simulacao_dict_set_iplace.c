#include <stdio.h>

void print_set(int arr[], int n) {
    printf("{");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n-1) printf(",");
    }
    printf("}\n");
}

int main() {
    int s1[] = {1, 2};
    int s2[] = {2, 3};
    int s3[] = {1, 2, 3}; // simula união normal

    printf("SET NORMAL:\n");
    print_set(s1, 2);
    print_set(s2, 2);
    print_set(s3, 3);

    // In-place: adicionar elementos de s2 em s1 (manual)
    int s1_inplace[] = {1, 2, 3};
    printf("SET IN-PLACE:\n");
    print_set(s1_inplace, 3);

    return 0;
}

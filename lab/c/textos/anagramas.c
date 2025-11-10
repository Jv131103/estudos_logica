#include <stdio.h>
#include <string.h>

int is_anagram_ascii(const unsigned char *s1, const unsigned char *s2) {
    size_t n1 = strlen((const char*)s1), n2 = strlen((const char*)s2);
    if (n1 != n2) return 0;

    int freq[256] = {0};

    for (size_t i = 0; i < n1; i++) freq[s1[i]]++;
    for (size_t i = 0; i < n2; i++) {
        if (--freq[s2[i]] < 0) return 0;
    }
    // Se chegamos aqui, todos voltaram a zero
    return 1;
}

int main(void) {
    printf("%d\n", is_anagram_ascii((unsigned char*)"amor", (unsigned char*)"roma")); // 1
    printf("%d\n", is_anagram_ascii((unsigned char*)"abc", (unsigned char*)"abç"));   // 0 (Latin-1: conta diferente)
    return 0;
}

#include <stdio.h>

long long mod_pow(long long a, long long b, long long m) {
    if (m == 1) return 0;
    a %= m;
    long long res = 1 % m;
    while (b > 0) {
        if (b & 1LL) {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

int main() {
    printf("%lld\n", mod_pow(3, 13, 7));  // 3
    return 0;
}

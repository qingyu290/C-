#include <stdio.h>
int main() {
    int a, b, gcd, lcm;
    scanf("%d%d", &a, &b);
    lcm = 1;
    while (lcm % a != 0 || lcm % b != 0) {
        lcm++;
    }
    int x = a, y = b;
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    gcd = x;
    printf("%d %d", gcd, lcm);
    return 0;
}

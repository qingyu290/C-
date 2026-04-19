#include <stdio.h>
int main() 
{
    int from, to;
    scanf("%d%d", &from, &to);
    int count = 0;
    for (int year = from; year <= to; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%6d", year);
            count++;
            if (count % 5 == 0) {
                printf("\n");
            }
        }
    }
    if (count % 5 != 0) {
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int PrimeNumbers(int a) {
    for (int i = 2; i < a; i++) {
        if (a%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Vvedite n ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (PrimeNumbers(i) == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}

#include <stdio.h>

int n, k;
int giaiThua(int n)
{
    int factor = 1;
    if (n == 0) return 1;
    else
    {
        for (int i = 1; i <= n; i++){
            factor = factor * i;
        }
    }
    return factor;
}

int main()
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    printf("Giai thua cua %d bang %d.", n, giaiThua(n));
    return 0;
}

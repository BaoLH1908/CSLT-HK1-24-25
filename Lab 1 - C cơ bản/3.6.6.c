#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("n khong phai so nguyen to.");
        return 0;
    }
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0)
        {
            printf("n khong phai so nguyen to.");
            return 0;
        }
    }
    printf("n la so nguyen to.");
    return 0;
}

#include <stdio.h>

int n, k;
// Hàm tính giai thừa
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

// Hàm tính tổ hợp chập k của n
int toHop(int n, int k)
{
    int num = giaiThua(n);
    int den = giaiThua(k) * giaiThua(n - k);
    return num/den;
}

int main()
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    printf("Nhap so nguyen duong k: ");
    scanf("%d", &k);
    printf("To hop chap %d cua %d la %d.", k, n, toHop(n, k));
    return 0;
}

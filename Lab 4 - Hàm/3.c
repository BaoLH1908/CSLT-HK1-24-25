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

// Hàm tính chỉnh hợp chập k của n
int chinhHop(int n, int k)
{
    int num = giaiThua(n);
    int den = giaiThua(n - k);
    return num/den;
}

int main()
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    printf("Nhap so nguyen duong k: ");
    scanf("%d", &k);
    printf("Chinh hop chap %d cua %d la %d.", k, n, chinhHop(n, k));
    return 0;
}

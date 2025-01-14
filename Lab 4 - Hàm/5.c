#include <stdio.h>

int a, b;
float giaiPTBac1(int a, int b)
{
    float x;
    if (a == 0 && b == 0) printf("Phuong trinh co vo so nghiem.");
    else if (a == 0 && b != 0) printf("Phuong trinh vo nghiem.");
    else
    {
        x = -b/a;
        printf("Phuong trinh co nghiem duy nhat x = %f", x);
    }
}

int main()
{
    printf("Giai phuong trinh ax + b = 0.\n");
    printf("Nhap he so a: ");
    scanf("%d", &a);
    printf("Nhap he so b: ");
    scanf("%d", &b);
    giaiPTBac1(a, b);
    return 0;
}

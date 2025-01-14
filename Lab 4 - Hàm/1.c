#include <stdio.h>

float a, b;
// Hàm tính tổng hai số thực
float tong(float a, float b)
{
    float sum = a + b;
    return sum;
}

// Hàm tính hiệu hai số thực
float hieu(float a, float b)
{
    float diff = a - b;
    return diff;
}

// Hàm tính tích hai số thực
float tich(float a, float b)
{
    float prod = a * b;
    return prod;
}

// Hàm tính thương hai số thực
float thuong(float a, float b)
{
    float q = a/b;
    return q;
}

int main()
{
    printf("Nhap so thuc a: ");
    scanf("%f", &a);
    printf("Nhap so thuc b: ");
    scanf("%f", &b);
    printf("Tong hai so la: %f.\n", tong(a, b));
    printf("Hieu hai so la: %f.\n", hieu(a, b));
    printf("Tich hai so la: %f.\n", tich(a, b));
    printf("Thuong hai so la: %f.", thuong(a, b));
    return 0;
}

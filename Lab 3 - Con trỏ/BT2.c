#include <stdio.h>

int main()
{
    // Cau 2a
    int A, B;
    int *pointerA = &A;
    int *pointerB = &B;
    printf("Nhap so nguyen A: ");
    scanf("%d", &A);
    printf("Nhap so nguyen B: ");
    scanf("%d", &B);
    
    // Cau 2b
    // Địa chỉ đang lưu trữ trong *pointerA, *pointerB
    printf("pointerA = %p\n", pointerA);
    printf("pointerB = %p\n", pointerB);
    // Giá trị nơi hai con trỏ trỏ đến
    printf("*pointerA = %d\n", *pointerA);
    printf("*pointerB = %d\n", *pointerB);
}

#include <stdio.h>

int main()
{
    int a = 12;
    int b = 25;
    int *pa, *pb;
    // Câu a
    pa = &a;
    pb = &b;
    printf("Gia tri cua pa: %p\n", pa);
    printf("Gia tri cua pb: %p\n", pb);
    // Câu b
    *pa += *pb;
    *pb *= *pa;
    printf("Gia tri cua a va b luc nay la: %d va %d", *pa, *pb);
    return 0;
}

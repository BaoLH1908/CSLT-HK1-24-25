#include <stdio.h>
#include <math.h>

int a, b, c;
// Hàm giải phương trình bậc hai
float giaiPTBac2(int a, int b, int c)
{
    float x, x1, x2;
    int delta = b*b - 4*a*c;
    if (a == 0) printf("Vui long nhap lai he so a khac 0.");
    else
    {
        if (delta < 0) printf("Phuong trinh khong co nghiem thuc.");
        else if (delta == 0){
            x = -b/(2*a);
            printf("Phuong trinh co nghiem kep x = %f", x);
        }
        else
        {
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("Phuong trinh co hai nghiem phan biet x1 = %f va x2 = %f", x1, x2);
        }
    }
}

int main()
{
    printf("Giai phuong trinh ax^2 + bx + c = 0.\n");
    printf("Nhap he so a: ");
    scanf("%d", &a);
    printf("Nhap he so b: ");
    scanf("%d", &b);
    printf("Nhap he so c: ");
    scanf("%d", &c);
    giaiPTBac2(a, b, c);
    return 0;
}

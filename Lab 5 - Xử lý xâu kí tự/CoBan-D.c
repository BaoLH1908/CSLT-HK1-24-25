#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    int length1 = 0, length2 = 0;
    int i = 0;
    printf("Nhap chuoi ki tu S1: ");
    scanf("%s", s1);
    printf("Nhap chuoi ki tu S2: ");
    scanf("%s", s2);
    // Tính độ dài chuỗi S1, S2
    while (s1[length1] != '\0'){
        length1++;
    }
    while (s2[length2] != '\0'){
        length2++;
    }
    
    // Nối chuỗi S2 vào cuối S1
    for (i = 0; i < length2; i++) {
        s1[length1 + i] = s2[i];
    }

    // Kết thúc chuỗi bằng ký tự null
    s1[length1 + length2] = '\0';
    printf("Chuoi S1 sau khi noi chuoi S2: %s", s1);
    return 0;
}

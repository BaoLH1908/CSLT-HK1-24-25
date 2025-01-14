#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100], resultStr[200];
    int length1 = 0, length2 = 0;
    int k;
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
    
    // Nhập k và n
    printf("Nhap vi tri k de chen S2 vao: ");
    scanf("%d", &k);
    if (k < 0 || k > length1){
        printf("k khong hop le.");
        return 0;
    }
    // Sao chép các ký tự từ S1 trước vị trí k vào result
    int i = 0;
    for (i = 0; i < k; i++){
        resultStr[i] = s1[i];
    }
    // Sao chép toàn bộ chuỗi S2 vào result
    for (int j = 0; j < length2; j++) {
        resultStr[i++] = s2[j];
    }

    // Sao chép các ký tự còn lại của S1 vào result
    for (int j = k; j < length1; j++) {
        resultStr[i++] = s1[j];
    }
    
    // Thêm ký tự null để kết thúc chuỗi
    resultStr[i] = '\0';

    // Sao chép result trở lại S1
    i = 0;
    while (resultStr[i] != '\0') {
        s1[i] = resultStr[i];
        i++;
    }
    s1[i] = '\0';
    printf("Chuoi S1 sau khi chen chuoi S2 vao: %s", resultStr);
    return 0;
}

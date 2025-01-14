#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int length = 0;
    int k, n;
    printf("Nhap chuoi ki tu: ");
    scanf("%s", str);
    // Tính độ dài chuỗi
    while (str[length] != '\0'){
        length++;
    }
    // Nhập k và n
    printf("Nhap vi tri k trong chuoi: ");
    scanf("%d", &k);
    printf("Nhap so ki tu muon xoa: ");
    scanf("%d", &n);
    if (k < 0 || k >= length || n < 0){
        printf("k hoac n khong hop le.");
        return 0;
    }
    // Xử lý nếu n lớn hơn phần còn lại của chuỗi từ vị trí k
    if (k + n > length){
        n = length - k;
    }
    // Xóa n kí tự từ vị trí k
    for (int i = k; i < length - n; i++){
        str[i] = str[i + n];
    }
    str[length - n] = '\0';
    printf("Chuoi ki tu sau khi xoa: %s", str);
    return 0;
}

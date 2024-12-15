#include <stdio.h>
#include <string.h>

int main()
{
    char maDinhDanh[11];
    int phiKhamBenh;
    printf("Nhap ma dinh danh cua ban theo quy tac sau:\n");
    printf("* Ki tu dau: A - truong thanh; C - tre em; E - nguoi gia.\n");
    printf("* Ki tu thu hai: M - Nam; F - Nu.\n");
    printf("* Tam ki tu con lai la ngay thang nam sinh (yyyy/mm/dd).\n");
    scanf("%10s", maDinhDanh);
    printf("Nhap chi phi kham benh: ");
    scanf("%d", &phiKhamBenh);
    // maDinhDanh[1] lấy kí tự thứ hai của mã định danh
    switch(maDinhDanh[1]){
        case 'M':
            printf("Benh nhan co gioi tinh la nam.\n");
            break;
        case 'F':
            printf("Benh nhan co gioi tinh la nu.\n");
            break;
    }
    // maDinhDanh[0] lấy kí tự đầu tiên của mã định danh
    switch(maDinhDanh[0]){
        case 'A':
            phiKhamBenh = phiKhamBenh * 0.2;
            break;
        case 'C':
            phiKhamBenh = phiKhamBenh * 0.05;
            break;
        case 'E':
            phiKhamBenh = phiKhamBenh * 0.05;
            break;
    }
    printf("So tien benh nhan phai chi tra la %d", phiKhamBenh);
    return 0;
}

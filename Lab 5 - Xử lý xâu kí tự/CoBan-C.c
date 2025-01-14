#include <stdio.h>

void insertString(char *s1, char *s2, int k) {
    char result[200]; // Mảng để lưu chuỗi kết quả (giả định đủ lớn)
    int len1 = 0, len2 = 0, i = 0;

    // Tính độ dài của S1
    while (s1[len1] != '\0') {
        len1++;
    }

    // Tính độ dài của S2
    while (s2[len2] != '\0') {
        len2++;
    }

    // Kiểm tra nếu k không hợp lệ
    if (k < 0 || k > len1) {
        printf("Giá trị k không hợp lệ.\n");
        return;
    }

    // Sao chép các ký tự từ S1 trước vị trí k vào result
    for (i = 0; i < k; i++) {
        result[i] = s1[i];
    }

    // Sao chép toàn bộ chuỗi S2 vào result
    for (int j = 0; j < len2; j++) {
        result[i++] = s2[j];
    }

    // Sao chép các ký tự còn lại của S1 vào result
    for (int j = k; j < len1; j++) {
        result[i++] = s1[j];
    }

    // Thêm ký tự null để kết thúc chuỗi
    result[i] = '\0';

    // Sao chép result trở lại S1
    i = 0;
    while (result[i] != '\0') {
        s1[i] = result[i];
        i++;
    }
    s1[i] = '\0';
}

int main() {
    char s1[100], s2[100];
    int k;

    // Nhập chuỗi S1
    printf("Nhập chuỗi S1: ");
    fgets(s1, sizeof(s1), stdin);

    // Loại bỏ ký tự xuống dòng nếu có
    int len = 0;
    while (s1[len] != '\0') {
        if (s1[len] == '\n') {
            s1[len] = '\0';
            break;
        }
        len++;
    }

    // Nhập chuỗi S2
    printf("Nhập chuỗi S2: ");
    fgets(s2, sizeof(s2), stdin);

    // Loại bỏ ký tự xuống dòng nếu có
    len = 0;
    while (s2[len] != '\0') {
        if (s2[len] == '\n') {
            s2[len] = '\0';
            break;
        }
        len++;
    }

    // Nhập vị trí k
    printf("Nhập vị trí k: ");
    scanf("%d", &k);

    // Gọi hàm chèn chuỗi
    insertString(s1, s2, k);

    // Xuất chuỗi S1 sau khi chèn
    printf("Chuỗi S1 sau khi chèn: %s\n", s1);

    return 0;
}

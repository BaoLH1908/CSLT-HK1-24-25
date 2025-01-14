#include <stdio.h>

void extractSubstring(char *str, int k, int n, char *substring) {
    int length = 0;

    // Tính độ dài chuỗi
    while (str[length] != '\0') {
        length++;
    }

    // Kiểm tra nếu k hoặc n không hợp lệ
    if (k < 0 || k >= length || n < 0) {
        printf("Giá trị k hoặc n không hợp lệ.\n");
        substring[0] = '\0';
        return;
    }

    // Xử lý nếu n vượt quá độ dài còn lại của chuỗi từ vị trí k
    if (k + n > length) {
        n = length - k;
    }

    // Trích chuỗi con n ký tự từ vị trí k
    for (int i = 0; i < n; i++) {
        substring[i] = str[k + i];
    }

    // Thêm ký tự null để kết thúc chuỗi con
    substring[n] = '\0';
}

int main() {
    char str[100];
    char substring[100];
    int k, n;

    // Nhập chuỗi S
    printf("Nhập chuỗi S: ");
    fgets(str, sizeof(str), stdin);

    // Loại bỏ ký tự xuống dòng nếu có
    int len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    // Nhập giá trị k và n
    printf("Nhập vị trí k: ");
    scanf("%d", &k);
    printf("Nhập số ký tự n: ");
    scanf("%d", &n);

    // Gọi hàm trích chuỗi con
    extractSubstring(str, k, n, substring);

    // Xuất chuỗi con
    printf("Chuỗi con: %s\n", substring);

    return 0;
}

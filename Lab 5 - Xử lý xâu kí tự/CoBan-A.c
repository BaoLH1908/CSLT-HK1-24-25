#include <stdio.h>
#include <string.h>

void deleteCharacters(char *str, int k, int n) {
    int length = 0;

    // Tính độ dài chuỗi
    while (str[length] != '\0') {
        length++;
    }

    // Kiểm tra nếu k hoặc n không hợp lệ
    if (k < 0 || k >= length || n < 0) {
        printf("Giá trị k hoặc n không hợp lệ.\n");
        return;
    }

    // Xử lý nếu n lớn hơn phần còn lại của chuỗi từ vị trí k
    if (k + n > length) {
        n = length - k;
    }

    // Xóa n ký tự bắt đầu từ vị trí k
    for (int i = k; i + n < length; i++) {
        str[i] = str[i + n];
    }

    // Thêm ký tự null để kết thúc chuỗi
    str[length - n] = '\0';
}

int main() {
    char str[100];
    int k, n;

    // Nhập chuỗi S
    printf("Nhập chuỗi S: ");
    fgets(str, sizeof(str), stdin);

    // Loại bỏ ký tự xuống dòng nếu có
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Nhập giá trị k và n
    printf("Nhập vị trí k: ");
    scanf("%d", &k);
    printf("Nhập số ký tự n: ");
    scanf("%d", &n);

    // Gọi hàm xóa ký tự
    deleteCharacters(str, k, n);

    // Xuất chuỗi sau khi xóa
    printf("Chuỗi sau khi xóa: %s\n", str);

    return 0;
}

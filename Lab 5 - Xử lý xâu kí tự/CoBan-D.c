#include <stdio.h>

void concatenateStrings(char *s1, char *s2) {
    int len1 = 0, len2 = 0, i = 0;

    // Tính độ dài của S1
    while (s1[len1] != '\0') {
        len1++;
    }

    // Tính độ dài của S2
    while (s2[len2] != '\0') {
        len2++;
    }

    // Nối chuỗi S2 vào cuối S1
    for (i = 0; i < len2; i++) {
        s1[len1 + i] = s2[i];
    }

    // Kết thúc chuỗi bằng ký tự null
    s1[len1 + len2] = '\0';
}

int main() {
    char s1[200], s2[100];

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

    // Gọi hàm nối chuỗi
    concatenateStrings(s1, s2);

    // Xuất chuỗi S1 sau khi nối
    printf("Chuỗi S1 sau khi nối: %s\n", s1);

    return 0;
}

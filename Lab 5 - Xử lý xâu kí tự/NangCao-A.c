#include <stdio.h>

int findSubstring(char s1[], char s2[]) {
    int i, j;
    
    for (i = 0; s1[i] != '\0'; i++) {
        int match = 1;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i + j] != s2[j]) {
                match = 0;
                break;
            }
        }
        if (match) return i; // Trả về vị trí đầu tiên nếu tìm thấy
    }
    return -1; // Không tìm thấy
}

int main() {
    char s1[100], s2[100];
    
    printf("Nhập chuỗi S1: ");
    gets(s1);
    printf("Nhập chuỗi S2: ");
    gets(s2);
    
    int position = findSubstring(s1, s2);
    
    if (position != -1)
        printf("S2 xuất hiện trong S1 tại vị trí %d.\n", position);
    else
        printf("S2 không xuất hiện trong S1.\n");

    return 0;
}

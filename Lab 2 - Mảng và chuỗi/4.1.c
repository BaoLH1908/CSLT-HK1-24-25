#include <stdio.h>

int main(){
    int arr[100];
    int i, n;
    // Câu 1
    printf("Nhap do dai mang: n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    // Câu 2
    printf("arr[] = ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

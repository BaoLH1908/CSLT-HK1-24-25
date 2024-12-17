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
    // Câu 3
    int loiNhuan = 0;
    for (i = 0; i < n; i++){
        loiNhuan = loiNhuan + arr[i];
    }
    printf("\nTong loi nhuan: %d.\n", loiNhuan);
    // Câu 4
    int max = arr[0];
    int min = arr[0];
    int indexMax, indexMin;
    for (i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            indexMax = i;
        }
        if(arr[i] < min){
            min = arr[i];
            indexMin = i;
        }
    }
    printf("Max = %d, o ngay thu %d.\n", max, indexMax + 1);
    printf("Min = %d, o ngay thu %d.\n", min, indexMin + 1);
    // Câu 5
    int wrongIndex;
    printf("Nhap vi tri: ");
    scanf("%d", &wrongIndex);
    for (i = 0; i < n; i++){
        if (wrongIndex == i){
            printf("So lieu sai: %d", arr[wrongIndex - 1]);
        }
    }
    // Câu 6
    int fixNum;
    printf("\nNhap so can sua: ");
    scanf("%d", &fixNum);
    for (i = 0; i < n; i++){
        if(i == wrongIndex - 1)
            arr[i] = fixNum;
    }
    printf("arr[] = ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

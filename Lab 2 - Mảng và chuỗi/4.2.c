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
    printf("arr[] = ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    // Câu 2
    int max = arr[0];
    int min = arr[0];
    int tg;
    for(i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                // Hoan vi 2 so arr[i] va arr[j]
                tg = arr[i];
                arr[i] = arr[j];
                arr[j] = tg;        
            }
        }
    }
    printf("\narr[] = ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    for (i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("\nmax = %d, min = %d.\n", max, min);
    // Câu 3
    int k;
    printf("Nhap mot so k tu 1 den %d: ", n);
    scanf("%d", &k);
    for (i = n - 1; i >= k - 1; i--){
        arr[i + 1] = arr[i];
    }
    arr[k - 1] = k;
    printf("arr[] = ");
    for (i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
    // Câu 4
    int arrO[100], arrE[100];
    int demChan = 0;
    int demLe = 0;
    printf("\narrO[] = ");
    for (i = 0; i <= n; i++){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
            demLe = demLe + 1;
        }
    }
    printf("\narrE[] = ");
    for (i = 0; i <= n; i++){
        if(arr[i] % 2 == 0){
            printf("%d ", arr[i]);
            demChan = demChan + 1;
        }
    }
    printf("\nCo %d so le va %d so chan.\n", demLe, demChan);
    // Câu 5
    int tong = 0;
    int mean;
    for (i = 0; i <= n; i++){
        tong = tong + arr[i];
    }
    mean = tong/(n + 1);
    printf("Mean = %d.", mean);
    return 0;
}

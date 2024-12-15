#include <stdio.h>

int main(){
  int i, n;
  int tong = 0;
  printf("Nhap so tu nhien n: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++){
    tong = tong + i;
  }
  printf("Tong tu 1 den %d la: %d", n, tong);
  return 0;
}

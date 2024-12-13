#include <stdio.h>

int main(){
  // Cau a
  float a, b, c, tich;
  printf("Nhap ba so a, b va c: ");
  scanf("%.3f%.3f%.3f", &a, &b, &c);
  tich = a * b * c;
  printf("Tich cua ba so la: %.3f", tich);
  // Cau b
  int a, b, c, tich;
  printf("Nhap ba so a, b va c: ");
  scanf("%d%d%d", &a, &b, &c);
  tich = a * b * c;
  printf("Tich cua ba so la: %d", tich);
  return 0;
}

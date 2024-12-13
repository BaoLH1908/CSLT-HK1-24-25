#include <stdio.h>

int main(){
  int a;
  int donVi, chuc, tram, nghin;
  printf("Nhap so tu nhien co 4 chu so: ");
  scanf("%d", &a);
  nghin = a/1000;
  tram = (a/100) % 10;
  chuc = (a/10) % 10;
  donVi = a % 10;
  printf("Gia tri cua hang nghin, tram, chuc, don vi lan luot la: %d, %d, %d, %d.", nghin, tram, chuc, donVi);
  return 0;
}

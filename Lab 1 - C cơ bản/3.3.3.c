#include <stdio.h>

int main(){
  int m;
  int km, hm, dam, dm, cm, mm;
  printf("Nhap mot so o don vi met: ");
  scanf("%d", &m);
  km = m/1000;
  hm = m/100;
  dam = m/10;
  dm = m * 10;
  cm = m * 100;
  mm = m * 1000;
  printf("Doi don vi: %.3f km, %.3f hm, %.3f dam, %.3f dm, %.3f cm, %.3f mm", km, hm, dam, dm, cm, mm);
  return 0;
}

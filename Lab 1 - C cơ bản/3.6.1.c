#include <stdio.h>

int main(){
  int a;
  printf("Nhap so nguyen a: ");
  scanf("%d", &a);
  if (a % 2 == 0)
    printf("chan");
  else
    printf("le");
  return 0;
}

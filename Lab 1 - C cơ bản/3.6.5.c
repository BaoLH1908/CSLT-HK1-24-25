#include <stdio.h>

int main()
{
  int a, b, n, i;
  int luyThua = 1;
  printf("Nhap a va b: ");
  scanf("%d%d", &a, &b);
  printf("Nhap so mu n: ");
  scanf("%d", &n);
  if (n == 0)
    luyThua = 1;
  else
  {
  for (i = 1; i <= n; i++){
    luyThua = luyThua * (a + b);
  }
  }
  printf("Ket qua cua (a+b)^n la: %d", luyThua);
  return 0;
}

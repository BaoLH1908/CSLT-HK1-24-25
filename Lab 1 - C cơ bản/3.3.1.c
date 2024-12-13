#include <stdio.h>

int main(){
  // Cau a
  int dai = 8;
  int rong = 7;
  intt chuVi;
  chuVi = (dai + rong)/2;
  printf("Chu vi hinh chu nhat co chieu dai %d va chieu rong %d la %d", dai, rong, chuVi);
  // Cau b
  float dai = 0008.50;
  float rong = 003.12000;
  float chuVi;
  chuVi = (dai + rong)/2;
  printf("Chu vi hinh chu nhat co chieu dai %f va chieu rong %f la %f", dai, rong, chuVi);
  // Cau c
  float dai = 7/3;
  float rong = 13/7;
  float chuVi;
  chuVi = (dai + rong)/2;
  printf("Chu vi hinh chu nhat co chieu dai %f va chieu rong %f la %.2f", dai, rong, chuVi);
  return 0;
}

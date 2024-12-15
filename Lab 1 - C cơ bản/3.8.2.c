#include <stdio.h>

int main(){
  int gradeA, gradeB;
  int gradeC, gradeD;
  int averageGrade;
  printf("Nhap diem 4 mon A, B, C va D: ");
  scanf("%d%d%d%d", &gradeA, &gradeB, &gradeC, &gradeD);
  averageGrade = (gradeA + gradeB + gradeC + gradeD)/4;
  if (averageGrade < 20)
    printf("PASS.");
  else
    printf("FAIL.");
  return 0;
}

#include <stdio.h>

int main(){
  // Vong lap for
  int i;
  printf("Bang cuu chuong 2 rut gon:\n");
  for (i = 1; i <= 10; i++){
    printf("2 x %d = %d\n", i, 2*i);
  }
  // Vong lap while
  int i = 1;
  printf("Bang cuu chuong 2 rut gon:\n");
  while (i <= 10){
    printf("2 x %d = %d\n", i, 2*i);
    i++;
  }
  // Vong lap do while
  int i = 1;
  printf("Bang cuu chuong 2 rut gon:\n");
  do{
    printf("2 x %d = %d\n", i, 2*i);
    i++;
  }while(i <= 10);
  return 0;
}

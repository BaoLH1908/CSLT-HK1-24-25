#include <stdio.h>

int main(){
  // Vong lap for
  int i;
  printf("Cac so chan tu 1 den 10 la: ");
  for (i = 1; i <= 10; i++){
    if (i % 2 == 0)
      printf("%d ", i);
  }
  // Vong lap while
  int i = 1;
  printf("Cac so chan tu 1 den 10 la: ");
  while(i <= 10){
    if (i % 2 != 0){
        i++;
    }
    printf("%d ", i);
    i++;
    }
  // Vong lap do while
  int i = 1;
    printf("Cac so chan tu 1 den 10 la: ");
    do{
        if (i % 2 != 0){
            i++;
        }
        printf("%d ", i);
        i++;
    }while(i <= 10);
    return 0;
}

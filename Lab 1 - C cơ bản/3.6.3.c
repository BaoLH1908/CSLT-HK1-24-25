#include <stdio.h>

int main(){
  float cost;
  int index;
  printf("Please input cost: ");
  scanf("%f", &cost);
  printf("Please input index (1, 2 or 3): ");
  scanf("%d", &index);
  switch(index){
    case 1:
      cost = cost + 3;
      break;
    case 2:
      cost = cost * 2;
      break;
    case 3:
      cost = cost / 1.5;
      break;
    default:
      printf("Wrong index, input again.");
  }
  printf("Value of cost after inputting index = %d: %f.", index, cost);
  return 0;
}

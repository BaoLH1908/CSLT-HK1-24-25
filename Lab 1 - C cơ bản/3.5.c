#include <stdio.h>
#include <math.h>

int main(){
  // -------- Cau a ---------
  int c = 1;
  int x = 3;
  c += x + 2;
  // c += 3 + 2 <=> c += 5 <=> c = c + 5 <=> c = 1 + 5 = 6.
  // -------- Cau b ---------
  int y = 5;
  bool c;
  c = ((4*(x+y))>(y*5)) || ((y+x/3+1)!=7)
  // c = True
}

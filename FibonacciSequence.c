//Author: Nathaniel Marcum
/* Program executes the Fibonacci sequence and returns up to the tenth 
integer in the sequence */

#include <stdio.h>
#include <math.h>

int main() {
  int f0 = 0;
  int f1 = f0 + 1; 
  
  for(int i = 0; i <= 4; i++) {
    f0 += f1;
    f1 += f0;
    
    printf("%d", f0);
    printf("%d", f1); 
    }
    printf("\n");
  }
  return 0;

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <math.h>

int digit_sum(int n);

int main(void) {
  int n = atoi(readline("Enter an int: ")); 
  int num = n;
  num = (num % 10);
  printf("sum of digit %d is %d.\n",n , digit_sum(n));
  return 0;
}

int digit_sum(int n){
    if (n > 0)
      return num + digit_sum(n/10);
    else 
      return 0;
}

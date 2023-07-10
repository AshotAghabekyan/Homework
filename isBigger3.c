#include <stdio.h>

int main(){
  int numbers[4];
  int i = 0;
  int max_num = 0;
  printf("Enter numbers\n");

  for(i = 0; numbers[i] != '\0'; i+=1){
      scanf("%i", &numbers[i]);
      if (numbers[i] > max_num)
	      max_num = numbers[i];
      }
 printf("Biggest number is %i\n", max_num);
  }


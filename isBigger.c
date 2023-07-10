#include <stdio.h>
#include <stdlib.h>

int main(){
    int number1;
    int number2; 

    printf("enter numbers\n");
    scanf("%i%i", &number1, &number2); 

     if(number1 > number2){
      printf("%i > %i\n", number1, number2);

     }else if(number2 > number1){
           printf("%i > %i\n", number2, number1);

     }else{
         printf("%i = %i\n", number1, number2);
     }

}




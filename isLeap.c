#include <stdio.h>


int main(){
    int year = 0;

    printf("Enter year\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
       printf("True\n");
    }else{
         printf("False\n");
    }

}

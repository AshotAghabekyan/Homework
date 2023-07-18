#include <stdio.h>
#include <stdlib.h>

int main(){
    int result;
    char test[10];
    char *pointer = test;
    printf("Enter number\n");
    scanf("%9s", test);

    result = atoi(pointer);
    printf("%d\n", result);
    return 0;

}

#include <stdio.h>

int main(){
    int numbers[3];
    int i;
    int count = 1;
    int max = 1;
    int max_number = 0;

    printf("Enter numbers\n");
    for (i = 0; i <3; ++i){
        scanf("%d", &numbers[i]);
    }
    
    for(i = 0; i <3; ++i){
       if (numbers[i] > max_number)
	       max_number = numbers[i];
    }
  
   while(count <= max_number){
          if ((numbers[0] % count == 0) && (numbers[1] % count == 0) && (numbers[2] % count == 0)){
		  max = count;
	  }
	  ++count;
   }
    

    printf("%d\n", max);
    return 0;

}

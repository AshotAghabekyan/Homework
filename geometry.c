#include <stdio.h>

static unsigned short int width = 0;
static unsigned short int height = 0;
void width_func1(void);
void width_func2(void);

int main(){
    int i = 0;

    printf("Enter width\n"); // Stanum enq laynutyuny ev bardcrutyuny
    scanf("%hd", &width);
    printf("Now, enter height\n");
    scanf("%hd", &height);
     
 
 /* loop-i nersum sahmanum enq <i> popoxakani arjeqy ev vorpes katarman payman sahmanum
    vor i-n petq e poqr lini ogtagorcoxi koxmic sahmanvac barcrutyunic*/
    for(i = 0; i <= height; ++i){ 
       if (i == 0 || i == height-1){   // Stugum enq katarum, ardyoq nerka pahin tpvelu e arajin kam verjin laynutyan gicy.
	   width_func1();              // ete ayo, apa laynutyan chapsov tpvum e '*' nshany;
 	   
       
       }else if (i > 0 && i < height){ // isk ete tpvum e mijankyal gic, apa '*' nshany tpvum e  miayn skzbum ev verjum;
             width_func2();      
     }	    	 
   }    


}

void width_func1(){  //function: tpum e laynutyamb '*' simvoly
     int i = 0;
     for (i = 0; i < width; ++i){
         printf("*");
     }
     printf("\n");
}


void width_func2(){ //function: tpum e laynutyamb '*' simvoly, bayc miayn skzbum ev verjum.
     int i =0;
     for (i = 0; i < width; ++i){
          if (i > 0 &&  i < width -1){
             printf(" ");
          }else{
              printf("*");
          }
     }
     printf("\n");

     
     
 
}



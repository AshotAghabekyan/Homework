#include <stdio.h>

static int width = 0;
static int height = 0;
void width_line(char wdt[]);

int main(){
    
    char width_arr[50];
    int i, j = 0;

    printf("Enter width\n"); // Stanum enq laynutyuny ev bardcrutyuny
    scanf("%d", &width);
    printf("Now, enter height\n");
    scanf("%d", &height);
     
 
 /* loop-i nersum sahmanum enq <i> popoxakani arjeqy ev vorpes katarman payman sahmanum
    vor i-n petq e poqr lini ogtagorcoxi koxmic sahmanvac barcrutyunic*/
    for(i = 0; i <= height; ++i){ 
       if (i == 0 || i == height-1){   // Stugum enq katarum, arjoq nerka pahin tpvelu e arajin kam verjin laynutyan gicy
	   width_line(width_arr);
 	   
       
       }else if (i > 0 && i < height){    /* Ete tpvum e mijankyal laynutyan gic, apa ayd gci arajin ev verjn
					     arjeqneri mijakayqum ynkac simvolnery jnjvum en*/
            for(j = 1; j < width -1; ++j)
                 width_arr[j] = ' ';
            printf("%s\n", width_arr); 
            
      }	    	 
    }    
 }
    
void width_line(char wdt[]){  // function: tpum e mek laynutyamb gic, vori bolor arjeqnery <*> simvolov en:
	int i = 0;
	for (i = 0; i < width; ++i)
		wdt[i] = '*';
	printf("%s\n", wdt);
     
     
 
}



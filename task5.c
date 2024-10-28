#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
		
	int dimensional[3][10][10];
	int grayscale[10][10];
	int depth,row,col;
	int random;
	int R=0,G=1,B=2;
	srand(time(NULL));	

	//RGB Random colors
	for (depth= 0; depth < 3; ++depth) {
	if(depth == R){
		printf("\n(Color R)\n");
	}
		else if (depth ==G){
			printf("\n(Color G)\n");
		}	
			else{
				printf("\n (Color B)\n");
			}

	    for (row= 0; row < 10; ++row){
	      for (col= 0; col < 10; ++col){
		
		random=rand()%256;
		dimensional[depth][row][col] = random;	
		printf(" %i",dimensional[depth][row][col]);
	     	if (col < 9) {
                    printf(", ");
                } 
	      }
		printf("\n");
	    }
	    printf("\n");
	}

	//Grayscale values
	printf("\n Grayscale \n");
    	for (row= 0; row < 10; ++row){
      		for (col= 0; col < 10; ++col){
	
			grayscale[row][col]=(0.299 *dimensional[R][row][col])  + (0.587 * dimensional[G][row][col])+ (0.114 * dimensional[B][row][col]);
			printf(" %d",grayscale[row][col]);
			if (col < 9) {
	    		printf(", ");
			} 
      		}
		printf("\n");
    	}

	return 0;
}


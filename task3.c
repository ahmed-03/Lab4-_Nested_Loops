#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	int x,y;
	srand(time(NULL));
	x = rand()%10;
	y = rand()%10; 

	for(int i=0; i<10; i++){
		for(int j=0;j<10;j++){
			if(i == x && j ==y){
         		printf("urrah!, I have found the hidden treasure (%d,%d)\n",i,j);
			break;
     			}
		}		
	}		
	
	return 0;
}

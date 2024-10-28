#include <stdio.h>

int main(){
	
	int i, population[10], value, max, min,j;
	float sum =0;
	
	for (i=0;i<10;i++){
	printf("Enter the population of city %d: ",i+1);
	scanf(" %d",&population[i]);
	
	sum = population[i] + sum;

		if(i ==0)
		{
		max =  population[i] ;
	        min =  population[i] ;
		}
		else if ( max <  population[i]  )
    		{
    	    	max = population[i];
    		}
    		else if ( population[i] < min )
    		{
           	 min = population[i];
    		}
	}
	printf("population in reverse order: \n");
	
	for(j=9;j>=0;j--){
	printf(" %d\n",population[j]);	
	}
	
	float mean = sum /10;
	printf("Maximum population:%d\n",max);
	printf("Minimum population:%d\n",min);
	printf("Mean population: %.2f\n",mean);

	return 0;
}


#include <stdio.h>

int main(){
	int N,i,j,k;
	printf("Enter the number of minutes:");
	scanf("%d",&N);
	printf("M:S\n");
	for (i=0;i<=N-1;i++){
		for(j = 0 ; j<60;j++){
		printf("%.2d:%.2d\n",i,j);
		}
	printf("\n");
	}
	return 0;
}

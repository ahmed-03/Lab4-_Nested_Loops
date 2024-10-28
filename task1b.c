#include <stdio.h>

int main() {
    int N;
    printf("Enter the integer N : ");
    scanf("%d", &N);
    
    int i = 1;
    while (i <= N) {
	int j = 1;
        while (j <= N - i) {
            printf(" ");
            j++;
        }
	int k = 1;
        while (k <= i) {
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}

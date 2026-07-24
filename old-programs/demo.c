#include <stdio.h> 
#include <stdlib.h>


int main(){

	int num = 0;
	printf("Enter the number of prices: \n");
	scanf("%d", &num);

	float *prices = malloc(num * sizeof(float));

	if (prices == NULL){
		printf("The memory allocation failed\n");
		return 1;
	}

	for (int i = 0; i < num; i++){
		printf("Enter the price#%d: \n", i+1);
		scanf("%f",&prices[i]);

	}

	int newnum = 0;
	printf("Enter the new number of prices: \n");
	scanf("%d", &newnum);

	float *temp = realloc(prices, newnum * sizeof(float));
	
	if(temp == NULL){
		printf("Couldn't reallocate Memorey\n");
		return 1;
	}
	else{
		prices = temp;
		temp = NULL;

		for(int i = num; i < newnum; i++){
			printf("Enter the price:%d\n", i + 1);
			scanf("%f", &prices[i]);
		}
		for(int i = 0; i < newnum; i++){
			printf("%.2f ", prices[i]);
		}

	}
	free(prices);
	prices = NULL;

	return 0;
}

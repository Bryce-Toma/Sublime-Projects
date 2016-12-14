#include <stdio.h>

int main(){
	int value = 0;
	printf("Print how many boxes you want: ");
	scanf("%d", &value);
	if(value){
		printf("Boxes:\n");
	}
	for(int i = 0; i < value; ++i){
			printf("[ ]");
	}

	int pick = 0;
	while(pick == 0){
			printf("\nSelect a box: ");
			scanf("%d", &pick);
			if(pick > value || pick < 1){
				printf("Invalid.");
				pick = 0;
			}
	}
	for(int i = 1; i < pick; ++i){
			printf("[ ]");
	}
	printf("[X]");
	for(int i = 0; i < (value - pick); ++i){
			printf("[ ]");
	}
	getchar();
	getchar();
return 0;
}
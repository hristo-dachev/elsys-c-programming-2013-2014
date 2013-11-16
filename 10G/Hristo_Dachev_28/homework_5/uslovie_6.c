#include <stdio.h>

void swap(int *a,int *b);
int main(){
	int a,j,i;
	int arr[4][4];

	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i<j)
			swap(&arr[i][j],&arr[j][i]);
		}
	}
	printf("\n\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
return 0;
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

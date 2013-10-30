#include <stdio.h>

int main(){

	int n,i,j;
	float sum=0;
	
	for(;;){
		scanf("%d", &n);
		if (n>100 | n<0){
			printf("error\n");
		}else break;
	}

	float arr[n][n];

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%f", &arr[i][j]);
		}
	}
	

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i<j)
			sum += arr[i][j];
		}
	}
	printf("%f\n", sum);
	
return 0;

}

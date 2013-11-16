#include <stdio.h>

int main(){
int a[11];
int j,n,i,br=1;

scanf("%d", &n);
if(n<1000000000 || n >10000000000) printf("error");
for (i=10;i>0;i--){
	a[i]=n%10;
	n=n/10;	
}


for(i=1;i<=10;i++){
	for(j=i+1;j<=10;j++){
		if (a[j] <10){
			if(a[i]==a[j]){
				br++;
				a[j]=100;
			}
		}
	}
	if(br>1) printf("%d : %d\n", a[i], br);
	br=1;
}

return 0;
}

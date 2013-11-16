#include <stdio.h>

long fact(int);

int main(){

int n,i;
float sum=0;
long f;
scanf("%d", &n);
for(i=1;i<=n;i++){
	sum+=1.0/fact(i);
}
printf("%f\n", sum);


return 0;
}


long fact(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * fact(n-1));
}

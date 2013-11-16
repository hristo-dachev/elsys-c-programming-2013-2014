#include <stdio.h>

int main(){

int m1,m2,m3,x=0,y=0,z=0,m;
scanf("%d %d %d %d",&m1,&m2,&m3,&m);
while (m>=5 && z<m3){
	m-=5;
	z+=1;
}
while (m>=2 && y<m2){
	m-=2;
	y+=1;
}
while (m>=1 && x<m1){
	m-=1;
	x+=1;
}

if (m==0) printf("YES: %d %d %d\n",x,y,z);
else printf("NO\n");

return 0;
} 

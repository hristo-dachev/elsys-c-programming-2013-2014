#include <stdio.h>
#include <stdlib.h>
void replace_char(char str[], int n, char c);
int ascending(void const *a, void const *b )
{
	return (*(char*)a - *(char*)b );
}

int main(){
	int i;
	char a[13];
	scanf("%s",a);
	for(i=0;i<13;i++){
		if(a[i]=='A') replace_char(a, i, 'Z');
		if(a[i]=='K') replace_char(a, i, 'Y');
		if(a[i]=='Q') replace_char(a, i, 'X');
		if(a[i]=='J') replace_char(a, i, 'W');
		if(a[i]=='T') replace_char(a, i, 'V');
	}
	
	qsort(a, 13, sizeof(char), ascending);

	for(i=0;i<13;i++){
		if(a[i]=='Z') replace_char(a, i, 'A');
		if(a[i]=='Y') replace_char(a, i, 'K');
		if(a[i]=='X') replace_char(a, i, 'Q');
		if(a[i]=='W') replace_char(a, i, 'J');
		if(a[i]=='V') replace_char(a, i, 'T');
	}
	

	printf("%s\n", a);
	return 0;
}

void replace_char(char str[], int n, char c)
{
  str[n] = c;
}

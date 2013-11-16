#include <stdio.h>

int main() {
	int a,first, second;
	scanf("%d", &a);
	if (a<0 || a>99){
		printf("error");
		return 0;
	}
	if (a<10){
		first=0;
		second=a;
	}
	else {
		first = a / 10;
		second = a % 10;
	}

	if (first == 0) {
		switch (second % 10) {
			case 0: printf("nula\n"); break;
			case 1: printf("edno\n"); break;
			case 2: printf("dwe\n"); break;
			case 3: printf("tri\n"); break;
			case 4: printf("chetiri\n"); break;
			case 5: printf("pet\n"); break;
			case 6: printf("shest\n"); break;
			case 7: printf("sedem\n"); break;
			case 8: printf("osem\n"); break;
			case 9: printf("devet\n"); break;
		}
	return 0;
	}	

	if (first == 1) {
		switch(second % 10) {
			case 0: printf("deset\n"); break;
			case 1: printf("edinadeset\n"); break;
			case 2: printf("dwanadeset\n"); break;
			case 3: printf("trinadeset\n"); break;
			case 4: printf("chetirinadeset\n"); break;
			case 5: printf("petnadeset\n"); break;
			case 6: printf("shestnadeset\n"); break;
			case 7: printf("sedemnadeset\n"); break;
			case 8: printf("osemnadeset\n"); break;
			case 9: printf("dvadeset\n"); break;
		}
	return 0;
	}

	switch(first % 10) {
		case 1: printf("deset"); break;
		case 2: printf("dvadeset"); break;
		case 3: printf("trideset"); break;
		case 4: printf("chetirideset"); break;
		case 5: printf("petdeset"); break;
		case 6: printf("shestdeset"); break;
		case 7: printf("sedemdeset"); break;
		case 8: printf("osemdeset"); break;
		case 9: printf("devetdeset"); break;
	}
	switch(second % 10) {
		case 0: break;
		case 1: printf(" i edno\n"); break;
		case 2: printf(" i dve\n"); break;
		case 3: printf(" i tri\n"); break;
		case 4: printf(" i chetiri\n"); break;
		case 5: printf(" i pet\n"); break;
		case 6: printf(" i shest\n"); break;
		case 7: printf(" i sedem\n"); break;
		case 8: printf(" i osem\n"); break;
		case 9: printf(" i devet\n"); break;
	}
	return 0;
}

#include <stdio.h>

void alteravalor();

int main(){
	int var = 10;
	int *a;
	a = &var;

	printf("%d\n", var);
	*a = 20;
	printf("%d\n", var);
	alteravalor(a);
	printf("%d", var);
}

void alteravalor(int *b){
	*b = 30;
}

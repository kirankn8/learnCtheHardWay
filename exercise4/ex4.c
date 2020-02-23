#include<stdio.h>


void crash() {
	int i=1000000,j;
	char *test = NULL;
	
	for(j=0;j<i;j++) {
		printf("%c", test[j]);
	}
}

int main(int argc, char *argv[]) {
	int a = 10;
	printf("Adding 12\n");
	a += 12;
	crash();
	return 0;
}

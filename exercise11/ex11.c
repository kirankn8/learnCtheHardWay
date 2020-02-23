#include<stdio.h>
#include <string.h>

int main(int argc, char*argv[]) {
	int numbers[4] = {0};
	char name[4] = {'a', 'a', 'a', 'a'};  // 4 bytes
	int dst_name; // 4 bytes
	
	// print them raw
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	
	printf("name: %s\n", name);
	
	numbers[0] = 'k';
	numbers[1] = 'a';
	numbers[2] = 'b';
	numbers[3] = '\0';
	
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = 'A';
	name[4] = 'A';
	name[5] = 'A';
	
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("number: '%s'\n", numbers);
	printf("name: %s\n", name);
	printf("name each: '%c' '%c' '%c' '%c' '%c'\n", name[0], name[1], name[2], name[3], name[4]);
	
	char *another = "Kir";
	printf("another: %s\n", another);
	printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);
	
	memcpy(&dst_name, name, 4);
	//printf("dst_name: '%s'\n", dst_name);
	printf("dst_name: '%d'\n", dst_name);
	
	return 0;
}

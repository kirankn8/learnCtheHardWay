#include<stdio.h>

int main(int argc, char* argv[]) {
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};
	
	// safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i=0;
	for(i=0; i<count; i++) {
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}
	printf("---\n");
		
	// 2nd way
	int *cur_age = (int *)names;
	char **cur_name = names;
	
	for(i=0; i<count; i++) {
		printf("%d: %p %s has %d years alive.\n", i, cur_name+i, *(cur_name+i), *(cur_age+i));
	}
	printf("---\n");
	
	// 3rd way
	for(i=0;i<count;i++) {
		printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
	}
	printf("---\n");
	
	// 4th way
	for(cur_name = names, cur_age = ages; cur_age -ages < count; cur_name++, cur_age++) {
		printf("%s lived %d years so far.\n", *cur_name, *cur_age);
	}
	
	return 0;
}

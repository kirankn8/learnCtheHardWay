#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) {
	struct Person *who = malloc(sizeof(NULL));
	assert(who != NULL);
	
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;
	return who;
}

void Person_destroy(struct Person *who) {
	assert(who!=NULL);
	free(who->name);
	free(who);
}

void Person_print(struct Person *who) {
	printf("----\n");
	printf("Name : %s\n", who->name);
	printf("Age: %d\n", who->age);
	printf("Height: %d\n", who->height);
	printf("Weight: %d\n", who->weight);
	printf("----\n");
}

int main(int argc, char *argv[]) {
	// make 2 structures
	struct Person *joe = Person_create("Joe Alex", 32, 64, 140);

	struct Person *frank = Person_create("Frank Blank", 22, 42, 180);
	
	printf("Joe is at memory: %p \n", joe);
	printf("Address of *Joe: %p \n", &joe);
	//printf("Testing: contents of *Joe: %s \n", *joe);
	Person_print(joe);
	
	joe->age += 20;
	Person_print(joe);
	
	//Person_destroy(joe);
	//Person_destroy(frank);
	
	return 0;
}


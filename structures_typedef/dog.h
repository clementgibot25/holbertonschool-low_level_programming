#ifndef STRUCTURES_TYPEDEF_DOG_H
#define STRUCTURES_TYPEDEF_DOG_H

/**
* struct dog - structure about dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

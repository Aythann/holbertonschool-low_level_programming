#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure describing a dog
 * @name: Pointer to the dog's name
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - a structure for dogs
 * @name: dog's name
 * @age: dog's age - in human years
 * @owner: dog's owner
 *
 * Description: holds characteristics of dogs
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

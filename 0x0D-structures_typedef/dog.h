#ifndef NULL
#define NULL 0
#endif

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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

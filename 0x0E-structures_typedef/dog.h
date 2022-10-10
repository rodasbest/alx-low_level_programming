#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates new data type of dog
 *
 * @name: char type name of dog
 * @age: float type age of dog
 * @owner: char type onwer of the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */

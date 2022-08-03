#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog- the structure tag of the file
 *
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif

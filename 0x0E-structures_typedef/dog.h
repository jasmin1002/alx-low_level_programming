#ifndef DOG_H
#define DOG_H

/**
 * struct dog - short description
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Description: i declared a structure with mixed data types
 * of char pointer and float
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif

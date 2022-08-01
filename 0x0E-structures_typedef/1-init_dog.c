#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializa a dog stuct
 * @d: pointer
 * @name: pointer to name 
 * @age: pointer to age
 * @owner: owner of the dog
 * Description: Dogs struct
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

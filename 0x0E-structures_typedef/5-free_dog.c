#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory
 * @d: dog
 * Description: Free memory
 **/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

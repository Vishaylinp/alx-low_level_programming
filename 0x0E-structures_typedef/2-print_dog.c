#include "dog.h"
#include <stdio.h>
/*
* print_dog - print information
* @d: dog
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
		printf("Name: (nil)\n");

	if (d->age)
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->name);
	}
	else
		printf("Owner: (nil)\n");
}


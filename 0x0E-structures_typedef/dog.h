#ifndef _DOG_H
#define _DOG_H
/**
* struct dog - information of a dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Description: dog identity
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

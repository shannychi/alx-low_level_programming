#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*init_dog - function to  initialize a variable
*@d: structure
*@name: name
*@age: age
*@owner: owner
*Return: Always 0 (success)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}

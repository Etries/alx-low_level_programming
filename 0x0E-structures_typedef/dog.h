#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
*struct dog - a new type of struc data
*@name: name of dog
*@age: age of dog
*@owner: nam of the ownere
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};i

/**
*dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

#include "dog.h"

/**
*_strcopy - copy string pointed by src to dest
*@dest:destination string
*@src: src string
*Return:returns a pointer to a dest string
*/
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0' ; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	printf("destination is %s \n", dest);
	return (dest);
}

/**
*new_dog - creates a new dog type
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: returns NULL in case of failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_len, owner_len;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	name_len = 0;
	owner_len = 0;
	while (*(name++) != '\0')
		name_len++;
	while (*(owner++) != '\0')
		owner_len++;
	d->name = malloc(sizeof(char) * (name_len + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (owner_len + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = _strcopy(d->name, name);
	d->age = age;
	d->owner = _strcopy(d->owner, owner);

	return (d);
}

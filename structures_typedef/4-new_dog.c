#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog (Success), NULL (Fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
unsigned int i, nameLen = 0, ownerLen = 0;

if (name == NULL || owner == NULL)
return (NULL);

while (name[nameLen])
nameLen++;
while (owner[ownerLen])
ownerLen++;

newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);

newDog->name = malloc(nameLen + 1);
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}

newDog->owner = malloc(ownerLen + 1);
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}

for (i = 0; i <= nameLen; i++)
newDog->name[i] = name[i];

for (i = 0; i <= ownerLen; i++)
newDog->owner[i] = owner[i];

newDog->age = age;

return (newDog);
}

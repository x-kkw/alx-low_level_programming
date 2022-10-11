#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog -Dog structure.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Description: structure containing the name, age & owner of a dog
**/

typedef struct dog
{
char *name;
char *owner;
float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
#endif

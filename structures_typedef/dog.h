#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Desc: Header file that define a new type of struct dog
 */

/**
 * struct dog - A new type describing a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/***
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

oid init_dog(struct dog *d, char *name, float age, char *owner);
#endif

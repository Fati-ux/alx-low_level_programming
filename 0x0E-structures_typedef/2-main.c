#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "mechal";
	my_dog.age = 5.5;
	my_dog.owner = "biruk";
	print_dog(&my_dog);
	return (0);
}

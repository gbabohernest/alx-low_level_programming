#include "lists.h"
#include <stdlib.h>
#include <string.h>

int str_len(const char *str);
/**
* add_node - Creates and add  a new node at the beginning of a linked list
* @head: Pointer to the first node
* @str: String to be assigned to the node
* Return: Pointer to the head of the list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = (list_t *) malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = str_len(str);
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}

/**
* str_len - caculates the length of the string
* @str: string length to be caculated
* Return: length of the string
*/

int str_len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

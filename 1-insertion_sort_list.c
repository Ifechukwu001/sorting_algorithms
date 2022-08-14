#include "sort.h"

/**
 * swap - Swaps two nodes together.
 * @x: First node.
 * @y: Second node.
 * Return: void.
 */
void swap(listint_t *x, listint_t *y)
{
	listint_t *ptmp, *ntmp;

	ptmp = x->prev;
	ntmp = y->next;
	y->next = x;
	x->prev = y;
	if (ntmp)
		ntmp->prev = x;
	if (ptmp)
		ptmp->next = y;
	y->prev = ptmp;
	x->next = ntmp;
}

/**
 * insSort - Insertion algorithm.
 * @current: Current node of the list.
 * Return: void.
 */
void insSort(listint_t **list, listint_t *current)
{
	listint_t *prev;

	prev = current->prev;
	while (prev && current->n < prev->n)
	{
		swap(prev, current);
		if ((*list)->prev)
			*list = (*list)->prev;
		print_list(*list);
		prev = current->prev;
	}
}

/**
 * insertion_sort_list - Sorts a list using insertion algorithm.
 * @list: Pointer to the list.
 * Return: Void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next;

	current = (*list)->next;
	while (current)
	{
		next = current->next;
		insSort(list, current);
		current = next;
	}
}

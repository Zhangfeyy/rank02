#include "ft_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list* ptr;
	int swap;

	ptr = lst;

	while(ptr && ptr->next)
	{
		if((*cmp)(ptr->data, ptr->next->data) == 0)
		{
			swap = ptr-> data;
			ptr->data = ptr->next->data;
			ptr->next->data = swap;
			ptr = lst;
		}
		else
			ptr = ptr->next;
	}
	return lst;
}
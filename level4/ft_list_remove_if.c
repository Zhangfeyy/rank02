#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp;
	t_list *front;

	front = 0;
	temp = *begin_list;
	while(temp)
	{
		if(cmp(data_ref, temp->data) == 0)
		{
			if(temp == *begin_list)
			{
				*begin_list = temp->next;
				front->next = temp;
			}
			else 
				front->next = temp->next;
			free(temp->data);
			free(temp);
			temp = front->next;
		}
		else
		{
			front = temp;
			temp = temp->next;
		}
	}
}
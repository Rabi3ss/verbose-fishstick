#include "libft.h"

t_list  *ft_lstnew(void const *constent, size_t constent_size)
{
	t_list	*new;
			
	new = malloc(sizeof(t_list));
	if (new == NULL) return NULL;
	if (constent == NULL) 
	{
		new->constent = NULL;
		new->constent_size = 0;
		return new;
	}
	new->constent = malloc(constent_size);
	if (new->constent == NULL)
	{
		free(new);
		return NULL;
	}
	new->next = NULL;
	new->constent_size = constent_size;
	ft_memcpy(new->constent, constent, constent_size);

	return new;
}

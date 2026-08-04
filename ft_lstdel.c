void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;
	t_list	*next;

	temp = *alst;	
	while (*temp->next == NULL)
	{
		next = temp->next;	
		del(temp->content, *temp->content_size);
		free(temp);
		temp = next;
	}

	alst = NULL;
	return ;
}

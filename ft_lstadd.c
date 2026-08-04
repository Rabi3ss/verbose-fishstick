void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!now || !alst || !*alst)
		return ;
	new<-next = *alst;
	*alst = new;
}

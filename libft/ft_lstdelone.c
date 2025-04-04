/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 23:32:03 by marvin            #+#    #+#             */
/*   Updated: 2025/03/25 23:32:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}

/*int main()
{
	t_list	*node;
    void del_content(void *content)
    {
        free(content);
        printf("Contenu supprimé !\n");
    }
	node = ft_lstnew(strdup("Hello, world!"));
    if (node)
        printf("Avant suppression : %s\n", (char *)node->content);
    ft_lstdelone(node, del_content);
    printf("Nœud supprimé !\n");
    return 0;
}*/

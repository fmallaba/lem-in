/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <fmallaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 15:32:22 by fmallaba          #+#    #+#             */
/*   Updated: 2018/01/04 16:05:02 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H

# include "libft.h"

# define START "##start"
# define END "##end"
# define MARK "mark"

typedef struct		s_room
{
	char			*name;
	char			*tag;
	int				x;
	int				y;
	t_list			*connect;
}					t_room;

void				delone_room(void *content, size_t size);
t_room				*check_room(char *str, char *tag);
t_list				*check_all_rooms(t_list **list, t_list *rooms);
int					check_duplicate_room(t_list *rooms);
int					check_connections(t_list *rooms, t_list *list);
void				error_mngr(int error, t_list *list, t_list *rooms);
t_list				*valid_input(t_list *list, int *ants_num);
void				find_way(t_list *connect, t_dlist **ways,
												int num[2], int count);
void				call_find_way(t_list *rooms, t_dlist **ways,
												int ways_num);
int					check_ways_num(t_list *rooms);
void				call_send_ants(t_dlist **ways, int a_num, t_list *input);
void				check_short_way(t_dlist **ways, int num);
void				lstcpy(t_dlist *src, t_dlist **dst);
int					check_infin(int num[4], int count);
void				check_valid_ways(t_dlist **ways, t_list *rooms);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacinesibous <yacinesibous@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 20:07:55 by yacinesibou       #+#    #+#             */
/*   Updated: 2018/06/21 20:54:39 by yacinesibou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lemin.h"

void    read_input(t_master *m)
{
    char    *tmp;
    char    **buff;

    while (get_next_line(0, tmp))
    {
        buff = ft_strsplit(tmp, ' ');
        m->rooms->name = buff[0];
        m->rooms->x = ft_atoi(buff[1]);
        m->rooms->y = ft_atoi(tmp[2]);
        m->rooms = m->rooms->next;
    }
}

void     create_ant_matrix()
{

}
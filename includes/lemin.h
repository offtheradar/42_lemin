/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacinesibous <yacinesibous@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:36:44 by yacinesibou       #+#    #+#             */
/*   Updated: 2018/06/21 20:54:20 by yacinesibou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H
# include "../includes/libft/libft.h"

typedef struct      s_master
{
    t_room          *rooms;
    int             **edges;
}                   t_master;

typedef struct      s_room
{
    char            *name;
    int             x;
    int             y;
    struct s_room   *next;
}                   t_room;

#endif
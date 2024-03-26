/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 02:58:05 by yuotsubo          #+#    #+#             */
/*   Updated: 2024/03/24 21:57:13 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_entry
{
	int				key;
	char			*value;
	struct s_entry	*next;
}					t_entry;

t_entry				**init(int argc, char **argv);
t_entry				**make_entries(char **lines);
size_t				ft_strlen(char *str);
void				ft_putstr(char *str);
char				*ft_strjoin(int size, char **strs, char *sep);
// ft_strcjoin(): this function allocates sufficient memory
// to store str + c. Then current memory were freed.
char				*ft_strcjoin(char **str, char c);
char				*ft_strdup(char *src);
char				**ft_split(char *str, char *charset);
char				*ft_strndup(char *src, int n);
int					ft_atoi(char *str);
int					ft_isspace(char c);
int					ft_is_num(char c);
int					ft_third_digits(int num, t_entry *array[10]);
int					ft_second_digits(int num, t_entry *array[10]);
int					ft_first_digits(int num, t_entry *array[10]);
int_least32_t		ft_unit(int unit, t_entry *array[10]);
int					ft_atoi_short(char *str);
int					length(char *str);
int					info(char *str, t_entry *array[10]);
int					search(int unit, int checknum, t_entry *array[10]);

// lst_new(): init new list. it returns address of new list.
t_entry				*lst_new(int n, char *content);
// lst_add(): it add new element to last of lst. it returns nothing.
void				lst_add_back(t_entry **lst, t_entry *new);
// lst_clear(): it remove all elements from lst. they must be freed.
void				lst_clear(t_entry **lst);

#endif
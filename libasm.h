/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hekang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:50:45 by hekang            #+#    #+#             */
/*   Updated: 2021/04/13 12:50:50 by hekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# define BLUE "\x1b[34m"
# define CYAN "\x1b[36m"
# define RESET "\x1b[0m"

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

size_t ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *s1);
ssize_t	ft_read(int fd, void *buff, size_t nbyte);
ssize_t	ft_write(int fd, void *buff, size_t nbyte);


#endif

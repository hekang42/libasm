/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hekang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:23:25 by hekang            #+#    #+#             */
/*   Updated: 2021/04/12 16:19:33 by hekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main(void )
{
	char s[50];
	printf(BLUE"______TESTING <ft_strlen>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strlen = %zu\n", ft_strlen(""));
	printf(CYAN"[case 2] "RESET"ft_strlen = %zu\n", ft_strlen("hekang"));
	printf(BLUE"______TESTING <ft_strcmp>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strcpy = %s\n", ft_strcpy(s, ""));
	printf(CYAN"[case 2] "RESET"ft_strcpy = %s\n", ft_strcpy(s, "hekang"));
	printf(BLUE"______TESTING <ft_strcmp>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strcmp = %d\n", ft_strcmp("a", "a"));
	printf(CYAN"[case 2] "RESET"ft_strcmp = %d\n", ft_strcmp("a", "b"));
	printf(BLUE"______TESTING <ft_wrtie>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_write = %zd\n", ft_write(1, "hekang", 10));
	printf(CYAN"[case 2] "RESET"ft_write = %zd\n", ft_write(1, "hekang", 3));
	printf(BLUE"______TESTING <ft_read>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_read = %zd\n", ft_read(0, s, 20));
	printf(BLUE"______TESTING <ft_strdup>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strdup = %s\n", ft_strdup(""));
	printf(CYAN"[case 2] "RESET"ft_strdup = %s\n", ft_strdup("hekang"));	
	return 1;
}

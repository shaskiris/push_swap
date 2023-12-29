/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaskiri <shaskiri@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:22:14 by shaskiri          #+#    #+#             */
/*   Updated: 2023/12/27 23:56:53 by shaskiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

char	*ft_strdup(char *s1);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	**ft_split(char *s, char c);
char	**ft_free(char **str, int i);

size_t	ft_strlen(char *s);

#endif

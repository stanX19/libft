/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:29:06 by shatan            #+#    #+#             */
/*   Updated: 2024/09/04 18:40:16 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Appends an element to a dynamically allocated array.

@param ptr			Pointer to the target pointer that points to the array,
					to which the element will be appended.
@param ptr_len		Pointer to the current number of elements in the memory
					block. This value will be incremented after the element
					is appended.
@param element_ptr	Pointer to the element to be appended.
@param element_size	Size of the element to be appended.

@return Returns a pointer to the memory block with the appended element,
        or NULL if appending fails or if invalid parameters are provided.
 */
void	*ft_memappend(void **ptr, size_t *ptr_len, void *element_ptr,
		size_t element_size)
{
	if (ptr == NULL || ptr_len == NULL || element_ptr == NULL
		|| element_size == 0)
		return (NULL);
	if (*ptr == NULL)
	{
		*ptr = ft_memdup(element_ptr, element_size);
		if (*ptr == NULL)
			return (NULL);
	}
	else
	{
		if (ft_realloc(ptr, *ptr_len, *ptr_len + 1, element_size) == NULL)
			return (NULL);
		ft_memcpy((char *)*ptr + (*ptr_len * element_size), element_ptr,
			element_size);
	}
	++(*ptr_len);
	return (*ptr);
}

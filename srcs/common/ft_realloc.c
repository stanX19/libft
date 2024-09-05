/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:30:52 by shatan            #+#    #+#             */
/*   Updated: 2024/09/04 18:22:28 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Resizes a dynamically allocated memory block.

@param ptr			Pointer to the target pointer that points to the memory block to be resized.
@param ptr_len		The current number of elements in the memory block.
@param new_len		The desired new number of elements in the memory block.
					Must be greater than `ptr_len`.
@param element_size	The size of each element in the memory block.

@return Returns a pointer to the resized memory block (same as `ptr`),
		or NULL if reallocation fails or if invalid parameters are provided.
**/
void	*ft_realloc(void **ptr, size_t ptr_len, size_t new_len,
		size_t element_size)
{
	void	*new;

	if (ptr == NULL || new_len <= ptr_len || element_size == 0)
		return (NULL);
	new = malloc(new_len * element_size);
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, *ptr, ptr_len * element_size);
	free(*ptr);
	*ptr = new;
	return (*ptr);
}

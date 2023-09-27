/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dene.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <student.42istanbul.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:38:37 by hdemirel          #+#    #+#             */
/*   Updated: 2023/09/27 13:38:38 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
    unsigned int num = 1;
    if (*(unsigned char *)&num == 1) {
        printf("Little-endian\n");
    } else {
        printf("Big-endian\n");
    }
    return 0;
}

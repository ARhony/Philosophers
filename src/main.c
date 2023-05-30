/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:02:40 by aramon            #+#    #+#             */
/*   Updated: 2023/05/29 16:32:26 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void    *function_test(void *arg)
{
    printf("%d\n", *((int*)arg));
}

pthread_t *init_philos(int n)
{
    int         i;
    pthread_t   *philos;

    philos = (pthread_t*)malloc(sizeof(pthread_t) * n);
    if (!philos)
        return (NULL);
    i = 0;
    while (i < n)
    {
        philos[i] = pthread_create(&(philos[i]), NULL, function_test, (void*)i);
        i++;
    }
}

int main(int argc, char **argv)
{
    int         number_of_philosophers;
    int         number_of_times_each_philosopher_must_eat;
    uint16_t    time_to_die;
    uint16_t    time_to_eat;
    uint16_t    time_to_sleep;
    
    pthread_t   *philos;

    
    if (argc != 6)
        return (0);
    philos = init_philos(ft_atoi(argv[1]));
    
    return (0);
}
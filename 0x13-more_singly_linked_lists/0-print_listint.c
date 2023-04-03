#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> // for size_t

/* definition of struct listint_s */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* function prototypes */
size_t print_listint(const listint_t *h);

#endif /* LISTS_H */


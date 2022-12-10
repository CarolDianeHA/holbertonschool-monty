<<<<<<< HEAD
#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
=======
#ifndef _MAIN_H_
#define _MAIN_H_

>>>>>>> f928d4a1b702cbf66d748e558590e5b3914db85f
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
<<<<<<< HEAD
char **tokenizer(char *lineptr);
void _push(stack_t **stack, unsigned int num);
void matcher(char **str, char *lineptr, stack_t **h,
FILE *fp, unsigned int linenum)

=======
>>>>>>> f928d4a1b702cbf66d748e558590e5b3914db85f

#endif

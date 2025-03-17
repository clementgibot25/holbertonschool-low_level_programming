#ifndef FUNCTION_POINTERS_3_CALC_H
#define FUNCTION_POINTERS_3_CALC_H

/**
 * struct op - struct to hold an operator and its corresponding function
 * @op: the operator
 * @f: the function to perform the operation
 */

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_abs(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif /* FUNCTION_POINTERS_3_CALC_H */

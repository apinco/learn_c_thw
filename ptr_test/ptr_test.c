#include <stdio.h>
void ptr_sub(int *ptr);

int main(int argc, int *argv[])
{
    int *p_to_int = malloc(sizeof(int));
    *p_to_int = NULL;
    printf("p_to_int in main before call to ptr_sub is: %p\n", p_to_int);
//    printf("p_to_int value in main before call to ptr_sub is: %d\n", *p_to_int);
    printf("calling ptr_sub\n");
    ptr_sub(&p_to_int);
    printf("p_to_int in main after call to ptr_sub is: %p\n", p_to_int);
    printf("p_to_int value in main after call to ptr_sub is: %d\n", *p_to_int);
    return 0;
}

void ptr_sub(int *p_to_int)
{
    printf("p_to_int in ptr_sub before change is: %p\n", p_to_int);
//    printf("p_to_int value in ptr_sub before change is: %d\n", **p_to_int);
    int *newptr = malloc(sizeof(int));
    *newptr = 20;
    printf("newptr in ptr_sub: %p\n", newptr);
    printf("newptr value in ptr_sub: %d\n", *newptr);
    *p_to_int = *newptr;
    printf("p_to_int in ptr_sub after change is: %p\n", p_to_int);
    printf("p_to_int value in ptr_sub after change is: %d\n", *p_to_int);
}

#include <stdio.h>
#include <stdlib.h>

// Question 1:
char* print_any_base(unsigned long num, unsigned int base) 
{    
    int a;
    int b;
    int count = 0;
    unsigned long number = num;
    
    /* 
    casting: 
    int *p = (int *) malloc (sizeof(int) * 10);
    */
    char *output = (char *) malloc (sizeof(char) * (count));
    if (num == 0) output[0] = '0';
    
    /*
    The string must be terminated by ’\0’
    ‘\0’: terminating char of a string
    */
    output[count] = '\0';
    return output;
}

int main() 
{
    return 0;
}
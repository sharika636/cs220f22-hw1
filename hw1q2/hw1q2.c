#include <stdio.h>
#include <stdlib.h>

// Question 2: accepts a null terminated string and prints the number of vowels in the string
unsigned int count_vowels(char *str){
    int vowels = 0;
    while (*str != '\0'){
        /*
        vowels: a e i o u
        Both lower and upper case vowels must be counted
        */
        if (*str == 'A' || *str == 'a' || *str == 'E' || *str == 'e' || *str == 'I' 
        || *str == 'i' || *str == 'O' || *str == 'o' || *str == 'U' || *str == 'u') 
        {
            vowels++;
        }
        str++;
    }
    return vowels;
}

int main(){
    int vowels = 0;
    char str[100];
    printf("Enter string: ");
    scanf("%s", &str);
    vowels = count_vowels(str);
    printf("Number of vowels in string: %d", vowels);
    printf("\n");
    return 0;    
}

#include <stdio.h>
#include <string.h>

void printLastLetter(char **str)
{
    printf("%c\n",*(*str + strlen(*str) - 1));
    printf("%c\n",**(str + strlen(*str) - 1));
}

int main()
{
    char *str = "1234556";
    printLastLetter(&str);
    return 1;
}

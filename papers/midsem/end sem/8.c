#include <stdio.h>

char* lastOccur(char *s, char c)
{
    if(*s == '\0')
        return NULL;

    char *temp = lastOccur(s + 1, c);

    if(temp != NULL)
        return temp;

    if(*s == c)
        return s;

    return NULL;
}

int main()
{
    char str[100];
    char ch;

    scanf("%s", str);
    scanf(" %c", &ch);

    char *ptr = lastOccur(str, ch);

    if(ptr != NULL)
        printf("Last occurrence of '%c': %s\n", ch, ptr);
    else
        printf("Character not found\n");

    return 0;
}
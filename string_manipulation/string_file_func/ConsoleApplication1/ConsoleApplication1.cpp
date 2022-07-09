
#define USE_STRING_H_FILE 0
#include <stdio.h>

#if USE_STRING_H_FILE
#include <string.h>

#else

int strlen(char* s1)
{
    int count = 0;

    while (s1[count] != '\0')
        count++;

    return count;
}

char* strrev(char *s1)
{
    int length = 0;
    char temp;
    while (s1[length] != '\0')
        length++;

    for (int i = 0; i < (length/2); i++)
    {
        temp = s1[length - 1 - i];
        s1[length - 1 - i] = s1[i];
        s1[i] = temp;
    }

    return s1;
}

#endif


int main()
{
    char str1[50] = "Suhel Mulla";

    printf("\n Length = %d", strlen((char*)str1));
    printf("\n Reversed string = %s", strrev((char *)str1));

    return 0;
}

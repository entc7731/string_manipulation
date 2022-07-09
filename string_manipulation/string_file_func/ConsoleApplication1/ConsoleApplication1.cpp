
#define USE_STRING_H_FILE 0
#include <stdio.h>

#if USE_STRING_H_FILE
#include <string.h>

#else

int strlen(char* s1)
{
    int length = 0;

    while (s1[length] != '\0')
        length++;

    return length;
}

char* strcpy(char* s1, char* s2)
{
    int length = 0;
    
    while (s2[length] != '\0')
        length++;

    for (int i = 0; i < length; i++)
        s1[i] = s2[i];

    s2[length] = '\0';

    return s2;
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
    char str2[50] = "";

    printf("\n Length = %d", strlen((char*)str1));
    printf("\n Copied string = %s", strcpy(str2, str1));
    printf("\n Reversed string = %s", strrev((char *)str1));

    return 0;
}


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

#endif


int main()
{
    int res = 0;
    const char *str1 = "Suhel Mulla";
    res = strlen((char *)str1);
    printf("length = %d", res);

    return 0;
}

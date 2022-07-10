/*
No.	Function	                            Description
1)	strlen(string_name)	                    returns the length of string name.
2)	strcpy(destination, source)	            copies the contents of source string to destination string.
3)	strcat(first_string, second_string)	    concats or joins first string with second string. The result of the string is stored in first string.
4)	strcmp(first_string, second_string)	    compares the first string with second string. If both strings are same, it returns 0.
5)	strrev(string)	                        returns reverse string.
6)	strlwr(string)	                        returns string characters in lowercase.
7)	strupr(string)	                        returns string characters in uppercase.
*/

#define USE_STRING_H_FILE 0
#include <stdio.h>

#if USE_STRING_H_FILE
#include <string.h>

#else

int strlen(char* s1)
{
    int length = 0;

    // Find length of input string S1
    while (s1[length] != '\0')
        length++;

    return length;
}

char* strcpy(char* s1, char* s2)
{
    int length = 0;
 
    // Find length of input string S2
    while (s2[length] != '\0')
        length++;

    // Copy S2 to S1
    for (int i = 0; i < length; i++)
        s1[i] = s2[i];

    s2[length] = '\0';

    return s2;
}

char* strcat(char* s1, char* s2)
{
    int length_s1 = 0;
    int length_s2 = 0;

    // Find length of input string S1
    while (s1[length_s1] != '\0')
        length_s1++;

    // Find length of input string S2
    while (s2[length_s2] != '\0')
        length_s2++;

    // Concatenate S1 and S2, so that S1 = (S1 + S2). 
    for (int i = length_s1; i<(length_s1 + length_s2); i++)
        s1[i] = s2[i - length_s1];

    s1[length_s1 + length_s2] = '\0';
    return s1;
}

char* strlwr(char* s1)
{
    int length = 0;

    while (s1[length] != '\0')
        length++;

    for (int i = 0; i<length; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] = s1[i] + 32;
    }

    return s1;
}

char* strupr(char* s1)
{
    int length = 0;

    while (s1[length] != '\0')
        length++;

    for (int i = 0; i < length; i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            s1[i] = s1[i] - 32;
    }

    return s1;
}

char* strrev(char *s1)
{
    int length = 0;
    char temp;

    // Find length of input string S1
    while (s1[length] != '\0')
        length++;

    // Reverse the string S1
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
    char str1[50] = "Suhel Mulla, 19 June 1990";
    char str2[50] = "";
    char str3[50] = "Rozina";
    char str4[50] = "Kazi";

    printf("\n Length = %d", strlen((char*)str1));
    printf("\n Copied string = %s", strcpy(str2, str1));
    printf("\n Concatenated string = %s", strcat(str3, str4));
    printf("\n Lowered string = %s", strlwr((char*)str1));
    printf("\n Uppered string = %s", strupr((char*)str1));
    printf("\n Reversed string = %s", strrev((char *)str1));

    return 0;
}

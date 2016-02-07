/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<string.h>
//#pragma warning:4096;

char * get_last_word(char * str){
	if (str == NULL)
		return NULL;
	int len = strlen(str), i = 0, pos=-1;
	char* str1 = (char*)malloc(len*sizeof(char));
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			pos = i;
		i++;
	}
	i = pos + 1;
	while (str[i] != '\0')
	{
		str1[i - pos - 1] = str[i];
		i++;
	}
	str1[i - pos - 1] = '\0';
	return str1;
}

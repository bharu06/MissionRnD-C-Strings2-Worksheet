/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str != NULL&&str != ""){
		int len =0, i=0, m = 0;
		while (str[i] != '\0')
		{
			i++; len++;
		}
		for (i = len - 1; i >= 0; i--){
			if (str[i] != ' '&&str[i - 1] == ' '){
				break;
			}
		}
		char *laststr = (char*)malloc(sizeof(char)*(len));
		for (int k = i; k < len; k++){
			if (str[k] == ' '){
				break;
			}
			laststr[m] = str[k];
			m++;
		}
		laststr[m] = '\0';
		return laststr;
	}
	else{
		return NULL;
	}
}

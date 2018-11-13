#include "myas.h"

int is_valid(char *op, char *args)
{
	//printf("if valid, return 1\n");
	//printf("otherwise, return 0\n");
	int i=0;
	char arr[100];

	char *src;
	char *des;

	strcpy(arr,args);
	src = strtok(arr,",");
	des = strtok(NULL,"\n");

	if(src[i] =='(' && des[i] =='(') return 0;
	else if(des[i] =='$') return 0;
	else if(src[i] == '$' && des[i] == '$') return 0;
	else return 1;
}

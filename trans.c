#include "myas.h"

int instr_trans(char *op, char *args, char* mcode)
{
	int i=0;
	char *src;
	char *des;
	 
	// check syntax 
	if(!is_valid(op, args)){
		printf("Error: %s %s is not valid\n", op, args);
		return 0;
	}
	strcpy(mcode, "AB CD EF");
	
	src = strtok(args, ",");
	des = strtok(NULL, ",");

	if(src[i] =='%' && des[i] =='&')
		strcpy(mcode, "89");
	else if(src[i] =='(' && des[i] =='%')
		strcpy(mcode, "8b");
	else if(src[i] =='-' && des[i] =='%')
		strcpy(mcode, "8b");
	else if(src[i] =='0' && des[i] =='%')
		strcpy(mcode, "a1");
	else if(src[i] =='%' && des[i] =='0')
		strcpy(mcode, "a3");
	else if(src[i] =='$' && des[i] =='%')
	{
		if(des[i+1] =='e' && des[i+2] =='a' && des[i+3] =='x')
			strcpy(mcode, "b8");
		else if(des[i+1] =='e' && des[i+2] =='c' && des[i+3] =='x')
                        strcpy(mcode, "b9");
		else if(des[i+1] =='e' && des[i+2] =='d' && des[i+3] =='x')
                        strcpy(mcode, "ba");
		else if(des[i+1] =='e' && des[i+2] =='b' && des[i+3] =='x')
                        strcpy(mcode, "bb");
		else if(des[i+1] =='e' && des[i+2] =='s' && des[i+3] =='p')
                        strcpy(mcode, "bc");
		else if(des[i+1] =='e' && des[i+2] =='b' && des[i+3] =='p')
                        strcpy(mcode, "bd");
		else if(des[i+1] =='e' && des[i+2] =='s' && des[i+3] =='i')
                        strcpy(mcode, "be");
		else if(des[i+1] =='e' && des[i+2] =='d' && des[i+3] =='i')
                        strcpy(mcode, "bf");
	}
	else
		strcpy(mcode,"error");
		
	return 1;	
}

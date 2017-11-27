#include <stdio.h>
#include <stdlib.h>
int main(){
	char name[100];
	char *name_ptr, input_char='\n';
	name_ptr=(char*)&(name);
	while(input_char == '\n')
		scanf("%c", &input_char); 
	while(input_char != '\n') { // Loop until newline.
		printf(" %d---\n",(int)input_char);
		fflush(stdin);//Buffer needs flush (printf)
		*name_ptr = input_char;
		scanf("%c", &input_char);//PROBLEM PRINTF WITHOUT FLUSH
		name_ptr++;
		
	}
	*name_ptr = 0;
	
	printf("%s\n",name);
	return 0;
}

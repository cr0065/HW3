#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

int printStrings(const char* args[]); 

int main(){ 
	int argc; 
	const char* argv[100]; 

	char* path = getenv("PATH"); 
	char *token; 
	
	token = strtok(path,":"); 
	int counter=0; 

	while(token != NULL){ 

	argv[counter] = token; 
	token = strtok(NULL,":"); 
	counter = counter+1; 
	}
	
	argv[counter]='0'; 
	printStrings(argv); 

	return 0; 
	
	}

int printStrings(const char* args[]){
	
	int i = 0; 
	while(args[i] != '0'){ 
		printf("%s\n",args[i]); 
		i = i+1; 
	}
	return 0; 
}


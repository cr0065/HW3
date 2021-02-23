/*
* Author: Cameron Ramos 
* Class: CS 390 - UNIX/LINUX
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h> 
#include <unistd.h> 
#include <sys/stat.h> 
#include <sys/types.h> 

int main(){


char *PS1 = malloc(30); 
strcpy(PS1,"$");    

while(true){

printf("%s", PS1); 

char command[20];  
scanf("%s", command);
 
	if(strcmp(command,"exit")==0)
	{ 
	break;  
	} 
	else if(strcmp(command,"echo")==0)
	{ 
		char echo; 
		while((echo=getchar()) != '\n') 
			{ 
				putchar(echo);
			}
		printf("\n"); 
	}
	else if(strcmp(command,"PS1")==0){ 
		scanf("%s", PS1); 
	}
	else if(strcmp(command, "rmdir")==0){ 
		char todelete[100]; 
	
			scanf("%s",todelete); 
			rmdir(todelete); 
	} 
	else if(strcmp(command, "mkdir")==0){ 
		char directory[50]; 
			scanf("%s", directory); 
	
			mkdir(directory,0777); 
	} 
	else if(strcmp(command, "rm")==0){
		int delete; 
		FILE *filedelete; 
	
		char filename[100]; 
		scanf("%s", filedelete); 

			filedelete = fopen(filename, "w"); 
			fclose(filedelete); 
	
			delete = remove(filename); 
	} 
	else if(strcmp(command,"cp")==0){
		FILE *file; 
		FILE *copy;
		char filec[100]; 
		char cp;
		
		scanf("%s", filec); 
	
			file = fopen(filec, "r"); 
				if (file == NULL){ 
					printf("Aint nothin here \n"); 
					break; 
	     			}
		scanf("%s",filec); 
		copy = fopen(filec, "w"); 
		if(copy == NULL){ 
			printf("Aint nothing here. \n"); 
			break; 
			} 
		cp = fgetc(file); 
			while(cp != EOF){ 
				fputc(cp, copy); 
				cp = fgetc(file); 
				} 
		fclose(file); 
		fclose(copy); 
		} 
	else if(strcmp(command, "cat")==0) { 
		FILE *create; 
		char filename[100]; 
		char crt; 
		
		scanf("%s", filename);
		
		create = fopen(filename, "r"); 
			if(create == NULL){ 
				printf("You aint got nothin here \n");
				break;  
			} 
		 while(crt != EOF){ 
			printf("%c", crt); 
			crt = fgetc(create); 
			} 
		fclose(create); 
		printf("\n"); 
	} 
	else 
	{ 
		printf("Try Again! Your command either doesn't exist or did not work! These are your usable commands: PS1, cat, rmdir, rm, mkdir, echo and exit..... please choose an appropriate command. \n"); 
	} 
}
}



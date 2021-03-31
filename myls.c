#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <sys/stat.h>


#include <stdio.h> 
#include <dirent.h> 
#include <errno.h> 
#include <stdlib.h> 


void ls(const char *dir, int a, int l){ 

	struct dirent *d; 
	DIR *dh = opendir(dir); 
	while ((d = readdir(dh)) != NULL)
	{ 
		if(!a && d->d_name[0] == ".") 
			continue; 
		printf(">> %s \n", d->d_name); 
		if(l) 
			printf("\n"); 
	} 
	if(!l)
	printf("\n"); 
} 

int main(int argc, const char *argv[]) { 

	if (argc == 0)
	{ 
		ls(".", 0, 0); 
	}  
	return 0; 

}

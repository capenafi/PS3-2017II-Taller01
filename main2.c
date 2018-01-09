#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc,char *argv[],char **envp)
{
	int fd;
 	fd=open(argv[1],O_RDWR|O_APPEND|O_CREAT,S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH);
 	if (fd == -1){
	 exit(1);
	}else{
		printf("El descriptor del archivo es: %d \n",fd);
		write(fd,"\nCarlos Penafiel",20);
	}
	close(fd);
}

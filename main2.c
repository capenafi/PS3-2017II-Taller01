#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd;
	//printf("Ingrese el nombre del archivo que desea modificar: ");
	//fgets(nombre,100,stdin);
 	fd=open("prueba.txt",O_RDWR|O_APPEND|O_CREAT,S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH);
 	if (fd == -1){
	 exit(1);
	}else{
		int error;
		printf("El descriptor del archivo es: %i \n",fd);
		error=write(fd,"Carlos Penafiel\n",50);
	}
	close(fd);
}

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
 	FILE *archivo;
 	char caracteres[100];
	char *cadena;
	char nombre[100];
	int fd;
	printf("Ingrese el nombre del archivo que desea modificar: ");
	fgets(nombre,100,stdin);
 	fd=open(nombre,O_RDWR,0);
 	if (fd == -1){
	 exit(1);
	}
	
}

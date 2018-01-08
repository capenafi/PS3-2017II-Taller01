#include <stdio.h>
#include <stdlib.h>
int main()
{
 	FILE *archivo;
 	char caracteres[100];
	char *cadena;
 	archivo = fopen("prueba.txt","a+");
 	if (archivo == NULL){
	 exit(1);
}
 	else
        {
 	    printf("\nEl contenido del archivo de prueba es: \n\n");
		while (feof(archivo) == 0)
		{
		fgets(caracteres,100,archivo);
		printf("%s",caracteres);
		}
		//printf("\nIngrese los caracteres que desea agregar al final del archivo: ");
		//scanf("%s", cadena);
		
		fputs("Agregamos algo.",archivo);
	//system("PAUSE");
	}
	fclose(archivo);
	return 0;
}

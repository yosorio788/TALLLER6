#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<conio.h>

int l=1;

FILE *fd;

 
 
struct informacionpersonal{
	char nombre[30];
	char apellidos[30];
	char celular[15];
}personal;

void crearcontacto(){
	char direccion[] = "C:\\Users\\prueba\\Documents\\sebas.txt";
	char add;
	fd = fopen(direccion,"wt"); 
	
	
	
	if(fd==NULL){
		
		printf("/nError al crear su archivo/n");
		
		exit (l);
	}
	
	fprintf(fd,"\t.:agenda telefonica\n");
	printf("\n\t.:Crear agenda telefonica:.\n");
	
	
	do{
		fflush(stdin);
		printf("\n su Nombre: /n");
		gets(personal.nombre);
		printf("\n su Apellidos:\n ");
		gets(personal.apellidos);
		printf("\n su Celular:\n ");
		gets(personal.celular);
		
		fprintf(fd,"\nNombre: \n\n");
		fwrite(personal.nombre,1,strlen(personal.nombre),fd);
		fprintf(fd,"\napellidos: ");
		fwrite(personal.apellidos,1,strlen(personal.apellidos),fd);
		fprintf(fd,"\ncelular: ");
		fwrite(personal.celular,1,strlen(personal.celular),fd);
		printf("Desea agregar otro contactos ");
		scanf("%c",&add);
	}while(add == 's');
	
}




void agregarcontacto(){
	char direccion[] = "C:\\Users\\prueba\\Documents\\sebas.txt";
	char add;
	fd = fopen(direccion,"at"); 
	


	
	do{
		fflush(stdin);
		printf("\nNombre: ");
		gets(personal.nombre);
		printf("Apellidos: ");
		gets(personal.apellidos);
		printf("Celular: ");
		gets(personal.celular);
		
		fprintf(fd,"\n\nNombre: ");
		fwrite(personal.nombre,1,strlen(personal.nombre),fd);
		fprintf(fd,"\nApellidos: ");
		fwrite(personal.apellidos,1,strlen(personal.apellidos),fd); 
		fprintf(fd,"\nCelular: ");
		fwrite(personal.celular,1,strlen(personal.celular),fd);
		printf("Desea agregar mas contactos(s): ");
		scanf("%c",&add);
	}while(add == 's');
	
}





void vercontactoscreados(){
	int c;
	char direccion[] = "C:\\Users\\prueba\\Documents\\sebas.txt";
	
	fd = fopen(direccion,"r");
	
	if(fd == NULL){
		printf("Error cargar el archivo");
		exit (1);
	}
	 
	while((c=fgetc(fd))!=EOF){
		if(c=='\n'){
			printf("\n");
		}
		else{
			putchar(c);
		}
	}
}

int main(){
	int opc;
	
	
	
	do{
		printf("\n**************MENU:******\n");
		printf("\n*****Crear un contacto*******");
		printf("\n*****agregar  contactos*****");
		printf("\n*****mostrar contactos existentes*****");
		printf("\n *****Salir*****");
		printf("\nOpcion: ");
		scanf("%i",&opc);
		
		switch(opc){
			case 1: crear();
			break;
			case 2: agregar();
			break;
			case 3: visualizar();
			break;
		}
		
		
	}while(opc != 4);

	return 0;
}


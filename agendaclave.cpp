#include <stdlib.h>
#include <stdio.h>
#include <time.h>



struct fecha{
	char dia[2];
	char mes[2];
	char ano[2];	
};
struct contacto{
	char nombre [30];
	char apellido [30];
	char telefono [30];
	char direccion[50];
	fecha creacionfecha;

}contactos[100];

 

char* direccion = {"D:\\PROGRMACION\\generar.txt"};
char rpt;
char l=1;
int i;


FILE* archivo;	

void menu();
void agregarcontacto();
void visualizarcontactos();


int main(){
	
	int contrasebastian, clave,can=0;
	
	contrasebastian=96120914887;
	
   
    
	for(can=0 ; can<10;can++){
	
	printf("introduzca la contraseña de inicio de sesion\n");
	printf("ya has intendado # %d \n",can+1);
	scanf("%d",&clave);
	system("cls");
	if(clave==contrasebastian){
		menu();
	}else {
		printf("la contraseña ingresada no es la correcta,valida la clave que estas ingresando\n");
	}
}


	system("pause");
	return 0;
}

void menu(){
		int opc;
	
	do{
		printf("\nMENU\n");
		printf("\n1. Agregar contactos");
		printf("\n2. ver contactos");
		printf("\n3. exit");
		printf("\nOpcion: ");
		scanf("%d",&opc);
		printf("\n");
		
		switch(opc){
			case 1: agregarcontacto();
			system("cls");
			break;
			case 2: visualizarcontactos();
			system("cls");
			break;
			case 3: exit(l);
		}
		
		
	}while(opc != 3);
}


void agregarcontacto(){
	
	system("cls");
	
  	printf("\n\tAgregando contactos\n");
	
	do{
	
	archivo = fopen(direccion,"a+"); 
	
	if(archivo==NULL){
		printf("Error al tratar de crear el archivo");
		exit (l);
	}
		fflush(stdin);
		printf("\nnombre: ");
		gets(contactos[i].nombre);
		printf("\napellidos: ");
		gets(contactos[i].apellido);
		printf("\ncelular: ");
		gets(contactos[i].telefono);
		printf("\ndireccion:");
		gets(contactos[i].direccion);
		printf("\nfecha de creacion del contacto:");
		printf("\ndia:");
		gets(contactos[i].creacionfecha.dia);
		printf("\nmes:");
		gets(contactos[i].creacionfecha.mes);
		printf("\nAno:");
		gets(contactos[i].creacionfecha.ano);
	
		
		fprintf(archivo,"%s\n",contactos[i].nombre);
		fprintf(archivo,"%s\n",contactos[i].apellido);
		fprintf(archivo,"%s\n",contactos[i].telefono);
		fprintf(archivo,"%s\n",contactos[i].direccion);
		fprintf(archivo,"%s\n",contactos[i].creacionfecha);
		fprintf(archivo,"\n",NULL);
	
	    printf("Desea agregar mas contactos,para si ingrese s, para no n: ");
		scanf("%c",&rpt);
		
		i+1;
		
		fclose(archivo);
	}while(rpt == 's');
     
   
}


void visualizarcontactos(){
	system("cls");
	int c;	
	archivo = fopen(direccion,"r");
	
	if(archivo == NULL){
		printf("Error al tratar de leer el archivo");
		exit (l);
	}
	 
	while((c=fgetc(archivo))!=EOF){
		if(c=='\n'){
			printf("\n");
		}
		else{
			putchar(c);
		}
	}
	system("pause");
}


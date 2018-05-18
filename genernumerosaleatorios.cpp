#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//generar numeros aleatorios
void menu();
void generar1000();
void generar2000();
void generar3000();
void generar5000();
void generar10000();
void generar15000();



FILE *archivo;

char* direccion = {"D:\\PROGRMACION\\generar.txt"};

                    		
int num[15000],n,menor,i,j,y,c;

int main (){
	
	menu();
	system("pause");
	return 0;
}


void menu(){
	

	int opcion, *pOpcion = &opcion;
	
	do{
		printf("*******1. Desea Generar Un archivo con 1000 numeros:\n********");
		printf("*******2. Desea Generar Un archivo con 2000 numeros. \n*******");
		printf("*******3. Desea Generar Un archivo con 3000 numeros. \n*******");
		printf("*******4. Desea Generar Un archivo con 5000 numeros. \n*******");
		printf("*******5.Desea Generar Un archivo con 10000 numeros. \n*******");
		printf("*******6.Desea Generar Un archivo con 15000 numeros. \n*******");
		printf("*******0. Exit");
		printf("\n");
		printf("ingrese una opcion: \n");
	    scanf("%d",&*pOpcion);
	    
		switch(*pOpcion) {
			
		case 1: generar1000();
		break;
		case 2: generar2000();
		break;
		case 3: generar3000();
		break;
		case 4: generar5000();
		break;
		case 5: generar10000();
		break;
		case 6: generar15000();
		case 0: exit(0);
		break;
		default: printf("esta es un Opcion invalida\n");
		}
		system("pause");
		system("cls");
	}while(*pOpcion != 0);
}


void generar1000(){
	fflush(stdin); 
	archivo = fopen (direccion,"w"); 
	if(archivo == NULL){
		printf(" Se creo un error al crear el archivo");
		
	}
	
	srand(time(NULL));
	y= 1000;
	
	
	for (i=0;i<y;i++){
		n=rand()%100;
		num[i]=n;
	fprintf(archivo,"%d \n",num[i]);
		}
		fclose(archivo);	
	
	
	
	if((archivo=fopen(direccion,"r"))==NULL){
		printf("No se pudo  abrir el archivo generado");
		exit(1);
	}
	
	
	for (i=0;i<y;i++){  
	fscanf(archivo,"%d\n",&num[i]);
	fprintf(stdout,"%d\n",num[i]);
	}
}


void generar2000(){
	fflush(stdin);
	archivo = fopen (direccion,"w");
	if(archivo == NULL){
		printf("Error al crear el archivo deseado");
		
	}
	
	srand(time(NULL));
	y= 2000;
	
	
	for (i=0;i<y;i++){
		n=rand()%100;
		num[i]=n;
	fprintf(archivo,"%d\n",num[i]);
		}
		fclose(archivo);	
	
	
	if((archivo=fopen(direccion,"r"))==NULL){
		printf("No se puede abrir el archivo deseado ");
		exit(1);
	}
		for (i=0;i<y;i++){  
	fscanf(archivo,"%d\n",&num[i]);
	fprintf(stdout,"%d\n",num[i]);
	}
}


void generar3000(){
		fflush(stdin);
	archivo = fopen (direccion,"w"); 
	
	
	if(archivo == NULL){
		printf("Error al crear el archivo deseado");
		
	}
	
	srand(time(NULL));
	y= 3000;
	

	for (i=0;i<y;i++){
		n=rand()%100;
		num[i]=n;
	fprintf(archivo,"%d\n",num[i]);
		}
	
	
	fclose(archivo);	
	

	if((archivo=fopen(direccion,"r"))==NULL){
		printf("No se puede abrir el archivo deseado");
		exit(1);
	}
	
	for (i=0;i<y;i++){  
	fscanf(archivo,"%d\n",&num[i]);
	fprintf(stdout,"%d\n",num[i]);
	}
}


void generar5000(){
		fflush(stdin);
	archivo = fopen (direccion,"w");
	if(archivo == NULL){
		printf("Error al crear el archivo");
		
	}
	
	srand(time(NULL));
	y= 5000;
	
	
	for (i=0;i<y;i++){
		n=rand()%100;
		num[i]=n;
	fprintf(archivo,"%d\n",num[i]);
		}
	
	
	fclose(archivo);	
	
	if((archivo=fopen(direccion,"r"))==NULL){
		printf("No se puede abrir el archivo solicitado");
		exit(1);
	}
	
	for (i=0;i<y;i++){  
	fscanf(archivo,"%d\n",&num[i]);
	fprintf(stdout,"%d\n",num[i]);
	}
}


void generar10000(){
		fflush(stdin);
	archivo = fopen (direccion,"w");
	
	
	if(archivo == NULL){
		printf("Error al crear el archivo");
		
	}
	
	srand(time(NULL));
	y= 10000;
	
	
	for (i=0;i<y;i++){
		n=rand()%100;
		num[i]=n;
	fprintf(archivo,"%d\n",num[i]);
		}
	
	
	fclose(archivo);	
	
	
	if((archivo=fopen(direccion,"r"))==NULL){
		printf("No se puede abrir el archivo");
		exit(1);
	}
	
	for (i=0;i<y;i++){  
	fscanf(archivo,"%d\n",&num[i]);
	fprintf(stdout,"%d\n",num[i]);
	}
}
void generar15000(){
	fflush(stdin); 
	archivo = fopen (direccion,"w"); 
	if(archivo == NULL){
		printf(" Se creo un error al crear el archivo");
		
	}
	
	srand(time(NULL));
	y= 150000;
	
	
	for (i=0;i<y;i++){
		n=rand()%100;
		num[i]=n;
	fprintf(archivo,"%d \n",num[i]);
		}
		fclose(archivo);	
	
	
	
	if((archivo=fopen(direccion,"r"))==NULL){
		printf("No se pudo  abrir el archivo generado");
		exit(1);
	}
	
	
	for (i=0;i<y;i++){  
	fscanf(archivo,"%d\n",&num[i]);
	fprintf(stdout,"%d\n",num[i]);
	}
}



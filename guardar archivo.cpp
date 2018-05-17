#include<stdio.h>
#include<stdlib.h>

FILE *fd;



int main(){
	
	
	char direccion[] = "C:\\Users\\prueba\\Documents\\sebas.txt";
	
	fd = fopen(direccion,"r");
	
	int n,i;
	printf("Digite los elementos del arreglo: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d. El Numero: %d\n",i,direccion);
	}
	
	system("pause");
	return 0;
	
}

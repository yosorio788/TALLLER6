#include<stdio.h>
#include<iostream>
#include<conio.h>
long  fibo(long numero);


main(){

long resultado,num;


printf("introduzca el numero\n");
scanf("%2d",&num);

resultado = fibo(num);


printf("la serie fibonacci(%1d)= %1d\n",num,resultado);

return 0;



}


long fibo(long numero){

if(numero ==0 || numero ==1){


    return numero;
}

else{

    return fibo(numero-1)+fibo(numero-2);

}

}

/*
	Programa: Funciones, estructuras de control y struct.c
	Autor: Emilio Armenta
	Fecha: 28/abril/2020
*/

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>



//Prototipos
void AgregarRegistro();
void MostrarRegistros();
void BuscarRegistros();

struct datos{
    char nombre[60];
    int edad;
	char ciudad[20];   
} persona[20]; 
 
 int i, numero=0, reg;   

int main(){
	int eOpcion;
	
	do{
		system("cls");
		
		printf("\n1. Agregar registro\n2. Mostrar registros\n3. Buscar registros\n4. Salir\n");
		printf("Seleccione una opci%cn: ", 162);
		scanf("%d", &eOpcion);
		
		switch(eOpcion){
			case 1: AgregarRegistro();
				break;
			case 2: MostrarRegistros();
				break;
			case 3: BuscarRegistros();
				break;
			case 4: printf("Adi%cs", 162);
				break;
		}
		
		getchar();
		
	}while(eOpcion != 4);
	
	return 0;
}



void AgregarRegistro(){

	system("cls");
 
   printf("Cuantos registros deseas?:");
   scanf("%d", &reg);
   getchar();
 
  
   for (i=0; i<reg; i++) 
      {
         puts("Nombre:");
 	 	fflush(stdin);
 	 	fgets(persona[i].nombre, 60 , stdin);
         puts("Edad:");
         scanf("%d", &persona[i].edad);
         getchar();
         puts("Ciudad:");
 	 	fflush(stdin);
 	 	fgets(persona[i].ciudad, 20 , stdin);
 	 	printf("----------------------------------\n");
     	 
	  }
 
   system("pause");
}


void MostrarRegistros(){
	
	system("cls");

	printf("Los registros ingresados son los siguientes: \n");
	
	for (i=0; i<reg; i++) {
        printf("Registro:%d\n\tNombre:%s\tEdad:%d\n\tCiudad:%s\t\n",i+1, persona[i].nombre, persona[i].edad, persona[i].ciudad);   
           
   }
   system("pause");
}

void BuscarRegistros(IdRegistro){
		
	system("cls");
	

	printf("Que registro deseas buscar?: \n");
	fflush(stdin);
	scanf("%d", &i);
	
	if(i<=reg){
	
	printf("\nEl registro si existe\n");
	printf("Registro:%d\n\tNombre:%s\tEdad:%d\n\tCiudad:%s\t\n",i, persona[i-1].nombre, persona[i-1].edad, persona[i-1].ciudad);

	}else{
	printf("Registro no existente\n");
	}


system("pause");
}

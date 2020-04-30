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
    int IdRegistro;
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
 
  // int i, numero=0;
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
 	 	puts("Id de Registro: ");
 	 	fflush(stdin);
 	 	scanf("%d", &persona[i].IdRegistro);
 	 	printf("----------------------------------\n");
      }
 
   system("pause");
}


void MostrarRegistros(){
	
	system("cls");

	printf("Los registros ingresados son los siguientes: \n");
	
	for (i=0; i<reg; i++) {
        printf("Registro:%d\n\tNombre:%s\tEdad:%d\n\tCiudad:%s\tId Registro:%d\n",i+1, persona[i].nombre, persona[i].edad, persona[i].ciudad, persona[i].IdRegistro);   
        //getchar();   
   }
   system("pause");
}

void BuscarRegistros(IdRegistro){
		
	system("cls");
	

	int eNum;
	printf("Que registro deseas buscar?: \n");
	fflush(stdin);
	scanf("%d", &eNum);
	
	for (i=0; i<reg; i++) {
	
	if(persona[20].IdRegistro==eNum){

		printf("\nEl registro si existe\n");
		printf("Registro:%d\n\tNombre:%s\tEdad:%d\n\tCiudad:%s\tId Registro:%d",i+1, persona[i].nombre, persona[i].edad, persona[i].ciudad, persona[i].IdRegistro);

	}else{
        printf("\n\tRegistro no encontrado!\n");
}
system("pause");
}
}

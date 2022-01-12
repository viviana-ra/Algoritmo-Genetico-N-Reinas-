#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( ){    

    int reinas;
    int generaciones;
    int *poblacion = (int*)malloc ( reinas*sizeof(int) );
    
    printf("\nCantidad de reinas: ");
    scanf("%d",&reinas);

    printf("\nCantidad de generaciones: ");
    scanf("%d",&generaciones);

    //--------------------------------------------------------------------------------------------
    //reservando memoria para guardar los modelos y analizar el fitness despues de N generaciones
    int **modelos; 
    modelos = (int **)malloc(generaciones*sizeof(int*)); 
	
	for ( int i = 0 ; i < generaciones ; i++ ){
		modelos[i] = (int*)malloc(reinas*sizeof(int)); 
    }
    //--------------------------------------------------------------------------------------------



    for (int i = 0; i < generaciones; i++){
        for( int j = 0; j < reinas; j++ ){
            modelos[i][j] = rand() % reinas; 
        }
    }
    
    for (int i = 0; i < generaciones; i++){
        for( int j = 0; j < reinas; j++ ){
            printf("%d\t",modelos[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
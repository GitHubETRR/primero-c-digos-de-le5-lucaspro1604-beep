/*
 Hacer un programa que capture un texto y por medio de una función llamada pasaMinuscula
 transforme el mismo a minúscula y lo devuelva al programa principal.
*/

#include <stdio.h>
#include <ctype.h>
#define LARGO_TEXTO 100

// Prototipo de las funciones
void pasaMinuscula(char*);
int vocales(char*);

int main()
{   
    //Definimos una cadena de texto.
    char texto[LARGO_TEXTO];
    
    //Pedimos al usuario que ingrese la cadena de texto.
    printf("Ingrese un texto para pasarlo a minusculas: ");
    fgets(texto, 100, stdin);
    
    //Pasamos a minuscula el texto.
    pasaMinuscula(texto);
    
    //Contamos las vocales del texto.
    int letras_vocales = vocales(texto);
    
    //Imprimimos el texto en minuscula.
    printf("Este es su texto en minusculas: %s", texto);
    printf("La cantidad de vocales es: %d", letras_vocales);
    
    return 0;
}


// Definimos la función
void pasaMinuscula(char* texto){
    int i = 0;
    
    //Mientras el texto no haya terminado... se transforma a minuscula
    while(texto[i] != '\0'){
        texto[i] = tolower(texto[i]);
        i++;
    }
    
}

int vocales(char* texto){
    int i = 0;
    int vocales = 0;
    //Mientras el texto no haya terminado... cuenta vocales
    while(texto[i] != '\0'){
        if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u'){
            vocales++;
        }
        i++;
    }
    
    return vocales;
}

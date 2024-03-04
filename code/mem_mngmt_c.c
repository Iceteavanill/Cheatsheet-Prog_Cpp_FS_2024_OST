#include <stdio.h>
#include <stdlib.h>

void *malloc(size_t size);
//Alokiert Speicherbereich size in bytes
void *calloc(size_t size);
//Alokiert Speicherbereich size in bytes und setzt diesen 0
free(void *ptr);
//Gibt speicherbereich auf welcher ptr zeigt wieder frei

int main(){
    int* iPtr = NULL;
    iPtr = (int*)malloc(3*sizeof(int));
    //Speicher fuer 3 Ints reservieren
    //Insert Nullpointer check here
    free(iPtr);
}   //Speicher wider freigegen

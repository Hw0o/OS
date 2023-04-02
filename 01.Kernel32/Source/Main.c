#include "Types.h"

void kPrintString( int ix, int iY, const char* pcString );


// Main Function 

void Mian( void){

kPrintString(0, 3, " C Language Kernel Started~!");

	while(1);

}


void kPrintString(int ix, int iy, const char*pcString){

	CHARACTER* pstScreen = ( CHARACTER* ) 0xB800;
	int i;

	pstScreen += (iy * 80 ) + ix;
	for( i =0 ; pcString[i] != 0; i++){

	pstScreen[i].bCharactor = pcString[i] ;

	}
}

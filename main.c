#include <stdio.h>

int main ( int argc , char **argv )
{
	char *filename = argv[1] ;
	char lesebuffer[19] = "" ;
	char schreibbuffer[20] = "\n" ;
	FILE *file = fopen ( filename , "r+" ) ;

	if ( file == NULL ) 
	{
		printf ( "Fehler beim öffnen der Datei!\n" ) ;
		return -1 ;
	}

	fread ( lesebuffer , sizeof ( char ) , 20 , file ) ;

	printf ( "%s\n" , lesebuffer ) ;

	for ( int i = 0 ; i < 20 ; i++ ) 
	{
		schreibbuffer[i] = lesebuffer [ 20 - 1 - i ] ;
	}

	fwrite ( schreibbuffer , sizeof ( char ) , 20 , file ) ;

	fclose ( file ) ;

	return 0 ;
}



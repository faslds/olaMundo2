#include<stdio.h>

/// programa para falar ola git
int main (int argc,char *argv[])
{
	//aqui ele fala ola
		if(argc>1) printf("Hello %s",argv[1]);
		else printf("Hello git!");
	return 0;	
}



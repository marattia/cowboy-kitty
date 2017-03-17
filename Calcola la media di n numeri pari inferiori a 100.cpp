#include <stdlib.h>
#include <stdio.h>
main ()
{
	int M,S,A,CONT;
	A=2; S=0; CONT=0;
	do
	{
		S=S+A; A=A+2; CONT=CONT+1;
	}
	while (A<100);
	M=S/CONT;
	printf("la media e' %d",M);
	system("pause");
}

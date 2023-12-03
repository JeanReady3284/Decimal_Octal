#include<stdio.h>

int main(){
	
	float d,f;
	int c,e,r[90],j,b[9],i,k;
	
	printf("\nPrograma para convertir un numero de decimal a octal\n");
	printf("\nIngrese el numero: \n");
	scanf("%f",&d);
	
	e=d;
	f=d-e;
	i=0;
	while(e!=0){
		c=(e/8);
		i=i+1;
		r[i]=e-(8*c);
		e=c;
	}

	for(j=1; j<=5; j++){
		f=f*8;
		if(f>=1.0){
			b[j]=f;
			f=f-b[j];
		}
		else{
			b[j]=0;
		}
	}
	printf("\nEl numero en octal es: \n");
	for(k=i; k>=1; k=k-1)
		printf("%i",r[k]);
	printf(".");
	
	for(j=1; j<=5; j++){
		printf("%i",b[j]);
	}
	
}


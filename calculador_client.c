/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculador.h"


void
calculador_pro_1(char *host, int x , int z)
{
	CLIENT *clnt;
	float  *result_1;
	inputs  sum_1_arg;
	float  *result_2;
	inputs  res_1_arg;
	float  *result_3;
	inputs  mul_1_arg;
	float  *result_4;
	inputs  div_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, calculador_pro, calculador_x, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */



	sum_1_arg.num1=x;
	sum_1_arg.num2=z;
	result_1 = sum_1(&sum_1_arg, clnt);
	if (result_1 == (float *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	printf("El resultado de la suma es: %.1f\n", *result_1);
	
	res_1_arg.num1=x;
	res_1_arg.num2=z;
	result_2 = res_1(&res_1_arg, clnt);
	if (result_2 == (float *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	printf("El resultado de la resta es: %.1f\n", *result_2);
	
	mul_1_arg.num1=x;
	mul_1_arg.num2=z;
	result_3 = mul_1(&mul_1_arg, clnt);
	if (result_3 == (float *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	printf("El resultado de la multiplicacion es: %.1f\n", *result_3);
	
	div_1_arg.num1=x;
	div_1_arg.num2=z;
	result_4 = div_1(&div_1_arg, clnt);
	if (result_4 == (float *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	if(x == 0 ||z== 0 ){
		perror("no se puede dividir entre 0");
	}
	
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;
	int x, z;
	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	printf("Hola! Bienvenidos a la calculadora perrona\n");
	printf("Ingrese el valor del parametro UNO: \n");
	scanf("%d", &x);
	printf("Ingrese el valor del parametro DOS: \n");
	scanf("%d", &z);
	calculador_pro_1 (host, x, z);
exit (0);
} 

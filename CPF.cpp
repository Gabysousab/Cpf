#include <stdio.h>

int main(){
	
	int cpf[10],res1, res2;
	
	printf ("\n *********Consulta de CPF*********");
	printf ("\n PROGRAMA CPF DIGITE NUMERO POR NUMERO\n\n");	
	
	
	printf ("\n DIGITE PRIMEIRO DIGITO:");	
	scanf("%d",&cpf[0]);
	printf ("\n DIGITE SEDUNDO DIGITO:");
	scanf("%d",&cpf[1]);
	printf ("\n DIGITE TERCEIRO DIGITO:");
	scanf("%d",&cpf[2]);
	printf ("\n DIGITE QUARTO DIGITO:");
	scanf("%d",&cpf[3]);
	printf ("\n DIGITE QUINTO DIGITO:");
	scanf("%d",&cpf[4]);
	printf ("\n DIGITE SEXTO DIGITO:");
	scanf("%d",&cpf[5]);
	printf ("\n DIGITE SETIMO DIGITO:");
	scanf("%d",&cpf[6]);
	printf ("\n DIGITE OITAVO DIGITO:");
	scanf("%d",&cpf[7]);
	printf ("\n DIGITE NONO DIGITO:");
	scanf("%d",&cpf[8]);
	printf ("\n DIGITE DECIMO DIGITO:");
	scanf("%d",&cpf[9]);
	printf ("\n DIGITE DECIMO PRIMEIRO DIGITO:");
	scanf("%d",&cpf[10]);

    res1=((cpf[0]*10)+(cpf[1]*9)+(cpf[2]*8)+(cpf[3]*7)+(cpf[4]*6)+(cpf[5]*5)+(cpf[6]*4)+(cpf[7]*3)+(cpf[8]*2)) % 11;
    
    

	if(res1>=2){
		res1=11-res1;
	}else{
		res1=0;
	}
	
		
		
	if(res1==cpf[9]){
		
		res2=((cpf[0]*11)+(cpf[1]*10)+(cpf[2]*9)+(cpf[3]*8)+(cpf[4]*7)+(cpf[5]*6)+(cpf[6]*5)+(cpf[7]*4)+(cpf[8]*3)+(cpf[9]*2)) % 11;
		
		if(res1>=2){
		res1=11-res1;
		}else{
		res1=0;
		}
		
		if(res2==cpf[10]){
			printf("Valido");
		}else{
			printf("Invalido");
		}
	}
	else{
		printf("Invalido");
	}
	
	
	}
	
	
	

 
 
 

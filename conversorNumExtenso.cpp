//Louvado seja o Senhor

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, opt;
	
	printf("Insert an integer number lesser or equals to 1000: ");
	scanf("%d", &num);
	
	//retorna caso num seja maior que 1000 ou menor que zero
	if(num > 1000 || num < 0){
		printf("Not a valid number.");
		return 0;
	}
	
	//se o número for 1000, imprime 'a thousand' e retorna
	if(num == 1000){
		printf("a thousand");
		return 0;
	}
	
	//se o número for 0, imprime 'zero' e retorna
	if(num == 0){
		printf("zero");
		return 0;
	}
	
	//separa a casa das centenas do número e a checa
	opt = num/100;
	
	switch(opt){
		case 1:
			printf("a hundred");
		break;
		
		case 2:
			printf("two hundred");
		break;
		
		case 3:
			printf("three hundred");
		break;
		
		case 4:
			printf("four hundred");
		break;
		
		case 5:
			printf("five hundred");
		break;
		
		case 6:
			printf("six hundred");
		break;
		
		case 7:
			printf("seven hundred");
		break;
		
		case 8:
			printf("eight hundred");
		break;
		
		case 9:
			printf("nine hundred");
		break;
	}
	
	//caso o número seja maior que 100 e não seja uma centena exata, o 'and' é adicionado
	if(num%100 == 0){
		return 0;
	}
	else if(opt > 0){
		printf(" and ");
	}
	
	//separa a casa das dezenas do número e a checa
	opt = num%100;
	
	if(opt >= 10 && opt < 20){
		switch(opt){
			case 10:
				printf("ten");
				return 0;
			break;
			
			case 11:
				printf("eleven");
				return 0;
			break;
			
			case 12:
				printf("twelve");
				return 0;
			break;
			
			case 13:
				printf("thirteen");
				return 0;
			break;
			
			case 14:
				printf("fourteen");
				return 0;
			break;
			
			case 15:
				printf("fifteen");
				return 0;
			break;
			
			case 16:
				printf("sixteen");
				return 0;
			break;
			
			case 17:
				printf("seventeen");
				return 0;
			break;
			
			case 18:
				printf("eighteen");
				return 0;
			break;
			
			case 19:
				printf("nineteen");
				return 0;
			break;
		}
	}
	else{
		opt = opt/10;
		
		switch(opt){
			case 2:
				printf("twenty");
			break;
			
			case 3:
				printf("thirty");
			break;
			
			case 4:
				printf("forty");
			break;
			
			case 5:
				printf("fifty");
			break;
			
			case 6:
				printf("sixty");
			break;
			
			case 7:
				printf("seventy");
			break;
			
			case 8:
				printf("eighty");
			break;
			
			case 9:
				printf("ninety");
			break;
		}
	}
	
	//caso o número seja maior que 20 e não seja uma dezena exata, o - é adicionado
	if(num%10 == 0){
		return 0;
	}
	else if(opt > 0){
		printf("-");
	}
	
	//separa a casa das unidades do número e a checa
	opt = num%10;
	
	switch(opt){
		case 1:
			printf("one");
		break;
		
		case 2:
			printf("two");
		break;
		
		case 3:
			printf("three");
		break;
		
		case 4:
			printf("four");
		break;
		
		case 5:
			printf("five");
		break;
		
		case 6:
			printf("six");
		break;
		
		case 7:
			printf("seven");
		break;
		
		case 8:
			printf("eight");
		break;
		
		case 9:
			printf("nine");
		break;	
	}		
}

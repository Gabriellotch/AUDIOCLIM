#include <stdio.h>

int main() {
	//VARIAIS DE CADASTRO
    int idade;
    float peso, altura;
    char nome[25], cpf[12];
	
	//INFORMAÇÕES SOBRE TRIAGEM
    printf("---------------------------\n");
    printf("-----Dados de triagem------\n");
    printf("---------------------------\n");

    printf("Forneca o nome do paciente: ");
    scanf(" %24[^\n]", nome);

    printf("Forneca a idade do paciente: ");
    scanf("%d", &idade);

    printf("Forneca o CPF do paciente: ");
    scanf("%11s", cpf);

    printf("Forneca o peso do paciente: ");
    scanf("%f", &peso);

    printf("Forneca a altura do paciente: ");
    scanf("%f", &altura);

    printf("\n----- DADOS CADASTRADOS -----\n");
    printf("Nome do paciente : %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("CPF: %s\n", cpf);
    printf("Peso: %.2f\n", peso);
    printf("Altura: %.2f\n", altura);

    return 0;
}
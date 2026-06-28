#include <stdio.h>
#include <string.h>

int main() {
   
	//VARIAIS DE CADASTRO
    int idade;
    float peso, altura;
    char nomepaci[25], responsavel[25], cpf[12], dataNas[11], dataExa[11], sexo;
    char endereco[100], tel[9], opc;

	//INFORMA합ES SOBRE TRIAGEM COM TESTE DE ERRO
    printf("------------------------------------------------------\n");
    printf("--------------- Dados de triagem ---------------------\n");
    printf("------------------------------------------------------\n");

    printf("Forneca o nome do paciente: ");
    scanf("%s24s", nomepaci); //LEITURA DE VETOR DE 25 POSI합ES

    printf("Forneca o nome do responsavel: ");
    scanf("%s24s", responsavel); //LEITURA DE VETOR DE 25 POSI합ES

	//TESTE DE ERRO PARA IMPEDIR QUE UM NUMERO DE TELEFONE SEJA DIGITADO ABAIXO DE 9 CARACETERES
    do{
        printf("Forneca o telefone de contato sem hifen: ");
        scanf(" %11s", tel);  //LEITURA DE VETOR DE 12 POSI합ES
        if (strlen(tel) < 9) // CONDI플O
            printf("ERRO: Telefone invalido, digite novamente.\n");
    }while (strlen(tel) < 9); 

    //TESTE DE ERRO PARA EVITAR IDADE NULA OU NEGATIVA
	do{
        printf("Forneca a idade do paciente: ");
        scanf("%d", &idade);
        if (idade <= 0) // CONDI플O
            printf("ERRO: Idade invalida, digite novamente.\n");
    }while (idade <= 0);

	//TESTE DE ERRO PARA EVITAR QUE SEXO DEMORE DE SER DIGITADO
	do{
    printf("Forneca o sexo do paciente M/F: ");
    scanf(" %c", &sexo);
      if (sexo != 'M' && sexo != 'F') // CODI플O
          printf("ERRO: Digite apenas S ou N.\n");
    }while (sexo != 'M' && sexo != 'F');

	//TESTE DE ERRO PARA IMPEDIR QUE UM NUMERO DE CPF SEJA DIGITADO ABAIXO DE 11 CARACETERES
    do{
        printf("Forneca o CPF do paciente: ");
        scanf("%s10s", cpf); //LEITURA DE VETOR DE 11 POSI합ES
        if (strlen(cpf) != 11) //CONDI플O
            printf("ERRO: Forneca o CPF completo com 11 digitos.\n");
    }while (strlen(cpf) != 11);

	//TESTE DE ERRO PARA EVITAR PESO NULA OU NEGATIVA
    do{
        printf("Forneca o peso do paciente: ");
        scanf("%f", &peso);
        if (peso <= 0) // CODI플O
            printf("ERRO: Peso incorreto, forneca um peso adequado.\n");
    }while (peso <= 0);

	//TESTE DE ERRO PARA EVITAR ALTURA NULA OU NEGATIVA
    do{
        printf("Forneca a altura do paciente: ");
        scanf("%f", &altura);
        if (altura <= 0) // CONDI플O
            printf("ERRO: Altura incorreta, forneca a altura adequada.\n");
    }while (altura <= 0);

	//TESTE DE ERRO PARA EVITAR QUE A DATA DO NASCIMENTO SEJA CONFUSA DE LER	
    do{
        printf("Forneca a data de nascimento do paciente \n No formato dd/mm/aaaa: ");
        scanf("%s9s", dataNas); //LEITURA DE VETOR DE 10 POSI합ES
        if (strlen(dataNas) != 10) // CONDI플O
            printf("ERRO: Data incompleta, forneca novamente.\n");
    }while (strlen(dataNas) != 10);

    printf("Forneca o endereco completo: ");
    scanf("%s99s", endereco); //LEITURA DE VETOR DE 100 POSI합ES

    //TESTE DE ERRO PARA EVITAR A DEMORA DA RESPOSTA
	do{
        printf("Ja fez esse exame?  \n Digite S para sim ou N para nao: ");
        scanf(" %c", &opc);
        if (opc != 'S'  && opc != 'N') //CONDI플O
            printf("ERRO: Digite apenas S ou N.\n");
    }while (opc != 'S'  && opc != 'N');

    //TESTE DE ERRO PARA EVITAR QUE A DATA DO EXAME SEJA CONFUSA DE LER
	do{
        printf("Forneca a data do exame do paciente  \n No formato dd/mm/aaaa: ");
        scanf(" %S9s", dataExa); //LEITURA DE VETOR DE 10 POSI합ES
        if (strlen(dataExa) != 10) //CONDI플O
            printf("ERRO: Data incompleta, forneca novamente.\n");
    }while (strlen(dataExa) != 10);

	//FICHA DE CADASTRO
    printf("\n--------- DADOS CADASTRADOS ---------\n");
    printf("Nome do paciente    : %s\n", nomepaci);
    printf("Nome do responsavel : %s\n", responsavel);
    printf("Tel de contato      : %s\n", tel);
    printf("Idade               : %d anos\n", idade);
    printf("Sexo                : %c\n", sexo);
    printf("CPF                 : %s\n", cpf);
    printf("Peso                : %.2f kg\n", peso);
    printf("Altura              : %.2f m\n", altura);
    printf("Data de nascimento  : %s\n", dataNas);
    printf("Endereco            : %s\n", endereco);
    printf("Ja fez o exame?     : %c\n", opc);
    printf("Data do exame       : %s\n", dataExa);
    printf("-------------------------------------\n");

    return 0;
}
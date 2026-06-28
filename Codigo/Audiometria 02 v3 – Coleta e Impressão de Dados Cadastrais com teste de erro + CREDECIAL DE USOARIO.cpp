#include <stdio.h>
#include <string.h>

int main() {
    //VARIAIS DE CADASTRO 
	int idade, grau;
    float peso, altura;
    char nomepaci[25], responsavel[25], uso[25], funcao[25];
    char cpf[12], dataNas[11], dataExa[11], sexo;
    char endereco[100], tel[12], opc, grauPerda[30];

	//INFORMA합ES SOBRE O USORIO!
    printf("------------------ Credencial do Usuario ----------------\n");

    printf("Insira seu nome: ");
    scanf(" %24[^\n]", uso); //LEITURA DE VETOR DE 25 POSI합ES

    printf("Especialidade: ");
    scanf(" %24[^\n]", funcao); //LEITURA DE VETOR DE 25 POSI합ES

    //INFORMA합ES SOBRE TRIAGEM COM TESTE DE ERRO
	printf("------------------------------------------------------\n");
    printf("--------------- Dados de triagem ---------------------\n");
    printf("------------------------------------------------------\n");

    printf("Forneca o nome do paciente: ");
    scanf(" %24[^\n]", nomepaci); //LEITURA DE VETOR DE 25 POSI합ES

    printf("Forneca o nome do responsavel: ");
    scanf(" %24[^\n]", responsavel); //LEITURA DE VETOR DE 25 POSI합ES
    
	//TESTE DE ERRO PARA IMPEDIR QUE UM NUMERO DE TELEFONE SEJA DIGITADO ABAIXO DE 9 CARACETERES
    do {
        printf("Forneca o telefone de contato sem hifen: ");
        scanf(" %11s", tel);

        if (strlen(tel) < 9) // CONDI플O
            printf("ERRO: Telefone invalido, digite novamente.\n");

    } while (strlen(tel) < 9);

    //TESTE DE ERRO PARA EVITAR IDADE NULA OU NEGATIVA
	 do{
        printf("Forneca a idade do paciente: ");
        scanf("%d", &idade);

        if (idade <= 0) // CONDI플O
            printf("ERRO: Idade invalida, digite novamente.\n");

    } while (idade <= 0);

    //TESTE DE ERRO PARA EVITAR QUE SEXO DEMORE DE SER DIGITADO
	do {
        printf("Forneca o sexo do paciente M/F: ");
        scanf(" %c", &sexo);

        if (sexo != 'M' && sexo != 'F') // CONDI플O
            printf("ERRO: Digite apenas M ou F.\n");

    } while (sexo != 'M' && sexo != 'F');

    //TESTE DE ERRO PARA IMPEDIR QUE UM NUMERO DE CPF SEJA DIGITADO ABAIXO DE 11 CARACETERES
	do {
        printf("Forneca o CPF do paciente: ");
        scanf(" %s10s", cpf); //LEITURA DE VETOR DE 11 POSI합ES

        if (strlen(cpf) != 11) // CONDI플O
            printf("ERRO: Forneca o CPF completo com 11 digitos.\n");

    } while (strlen(cpf) != 11);

    //TESTE DE ERRO PARA EVITAR PESO NULA OU NEGATIVA
	do {
        printf("Forneca o peso do paciente: ");
        scanf("%f", &peso);

        if (peso <= 0) // CONDI플O
            printf("ERRO: Peso incorreto, forneca um peso adequado.\n");

    } while (peso <= 0);

    //TESTE DE ERRO PARA EVITAR ALTURA NULA OU NEGATIVA
	do {
        printf("Forneca a altura do paciente: ");
        scanf("%f", &altura);

        if (altura <= 0) // CONDI플O
            printf("ERRO: Altura incorreta, forneca a altura adequada.\n");

    } while (altura <= 0);

    //TESTE DE ERRO PARA IMPEDIR QUE UM NUMERO DE DATA NASC SEJA DIGITADO ABAIXO DE 10 CARACETERES
	do {
        printf("Forneca a data de nascimento do paciente no formato dd/mm/aaaa: ");
        scanf(" %s9s", dataNas); //LEITURA DE VETOR DE 10 POSI합ES

        if (strlen(dataNas) != 10) // CONDI플O
            printf("ERRO: Data incompleta, forneca novamente.\n");

    } while (strlen(dataNas) != 10);

    printf("Forneca o endereco completo: ");
    scanf(" %99[^\n]", endereco); //LEITURA DE VETOR DE 100 POSI합ES

	//TESTE DE ERRO PARA EVITAR QUE OPC DEMORE DE SER DIGITADO
    do {
        printf("Ja fez esse exame? Digite S para sim ou N para nao: ");
        scanf(" %c", &opc);

        if (opc != 'S' && opc != 'N') // CONDI플O
            printf("ERRO: Digite apenas S ou N.\n");

    } while (opc != 'S' && opc != 'N');

    if (opc == 'S') { // CONDI플O (menun)
        do {
            printf("\nInforme o grau da perda auditiva anterior:\n");
            printf("1 - Normal\n");
            printf("2 - Leve\n");
            printf("3 - Moderada\n");
            printf("4 - Moderadamente Severa\n");
            printf("5 - Severa\n");
            printf("6 - Profunda\n");
            printf("Opcao: ");
            scanf("%d", &grau);

            if (grau < 1 || grau > 6) // CONDI플O (menun)
                printf("ERRO: Escolha uma opcao de 1 a 6.\n");

        } while (grau < 1 || grau > 6); 

        switch(grau) {
            case 1: strcpy(grauPerda, "Normal"); break;
            case 2: strcpy(grauPerda, "Leve"); break;
            case 3: strcpy(grauPerda, "Moderada"); break;
            case 4: strcpy(grauPerda, "Moderadamente Severa"); break;
            case 5: strcpy(grauPerda, "Severa"); break;
            case 6: strcpy(grauPerda, "Profunda"); break;
        }
    } else {
        strcpy(grauPerda, "Nao informado");
    }

    //TESTE DE ERRO PARA IMPEDIR QUE UM NUMERO DE DATA EXAME SEJA DIGITADO ABAIXO DE 10 CARACETERES
	do {
        printf("Forneca a data do exame do paciente no formato dd/mm/aaaa: ");
        scanf(" %s9s", dataExa); //LEITURA DE VETOR DE 10 POSI합ES

        if (strlen(dataExa) != 10) // CONDI플O
            printf("ERRO: Data incompleta, forneca novamente.\n");

    } while (strlen(dataExa) != 10);

    //INFORMA합ES SOBRE EXPECILISTA
	printf("\n--------- DADOS DO ESPECIALISTA ---------\n");
    printf("Nome do especialista : %s\n", uso);
    printf("Especialidade        : %s\n", funcao);
    printf("----------------------------------------\n");

    //INFORMA합ES SOBRE PACIENTE
	printf("\n--------- DADOS CADASTRADOS ---------\n");
    printf("Nome do paciente      : %s\n", nomepaci);
    printf("Nome do responsavel   : %s\n", responsavel);
    printf("Tel de contato        : %s\n", tel);
    printf("Idade                 : %d anos\n", idade);
    printf("Sexo                  : %c\n", sexo);
    printf("CPF                   : %s\n", cpf);
    printf("Peso                  : %.2f kg\n", peso);
    printf("Altura                : %.2f m\n", altura);
    printf("Data de nascimento    : %s\n", dataNas);
    printf("Endereco              : %s\n", endereco);
    printf("Ja fez o exame?       : %c\n", opc);
    printf("Grau perda anterior   : %s\n", grauPerda);
    printf("Data do exame         : %s\n", dataExa);
    printf("-------------------------------------\n");

    return 0;
}
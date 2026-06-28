#include <stdio.h>
#include <string.h>

int main() {
    int idade, grau, tipoAparelho;
    float peso, altura;

    char uso[25], funcao[25];
    char nomepaci[25], responsavel[25], cpf[12], dataNas[11], dataExa[11], sexo;
    char endereco[100], tel[12], opc, grauPerda[30], aparelhoTipo[40];

    int frequencia[3] = {500, 2000, 4000};
    int ouvidoE[3], ouvidoD[3];
    int aparelhoE[3], aparelhoD[3];
    int e;

	printf("------------------AudioClinic----------------\n");
	
    printf("------------------ CREDENCIAL DO USUARIO ----------------\n");

    printf("Insira seu nome: ");
    scanf(" %24[^\n]", uso);

    printf("Especialidade: ");
    scanf(" %24[^\n]", funcao);

    printf("\n------------------------------------------------------\n");
    printf("--------------- Dados de triagem ---------------------\n");
    printf("------------------------------------------------------\n");

    printf("Forneca o nome do paciente: ");
    scanf(" %24[^\n]", nomepaci);

    printf("Forneca o nome do responsavel: ");
    scanf(" %24[^\n]", responsavel);

    do {
        printf("Forneca o telefone de contato sem hifen: ");
        scanf(" %11s", tel);

        if (strlen(tel) < 9)
            printf("ERRO: Telefone invalido.\n");

    } while (strlen(tel) < 9);

    do {
        printf("Forneca a idade do paciente: ");
        scanf("%d", &idade);

        if (idade <= 0)
            printf("ERRO: Idade invalida.\n");

    } while (idade <= 0);

    do {
        printf("Forneca o sexo do paciente M/F: ");
        scanf(" %c", &sexo);

        if (sexo != 'M' && sexo != 'F')
            printf("ERRO: Digite apenas M ou F.\n");

    } while (sexo != 'M' && sexo != 'F');

    do {
        printf("Forneca o CPF do paciente: ");
        scanf(" %11s", cpf);

        if (strlen(cpf) != 11)
            printf("ERRO: CPF deve ter 11 digitos.\n");

    } while (strlen(cpf) != 11);

    do {
        printf("Forneca o peso do paciente: ");
        scanf("%f", &peso);

        if (peso <= 0)
            printf("ERRO: Peso invalido.\n");

    } while (peso <= 0);

    do {
        printf("Forneca a altura do paciente: ");
        scanf("%f", &altura);

        if (altura <= 0)
            printf("ERRO: Altura invalida.\n");

    } while (altura <= 0);

    do {
        printf("Forneca a data de nascimento no formato dd/mm/aaaa: ");
        scanf(" %10s", dataNas);

        if (strlen(dataNas) != 10)
            printf("ERRO: Data incompleta.\n");

    } while (strlen(dataNas) != 10);

    printf("Forneca o endereco completo: ");
    scanf(" %99[^\n]", endereco);

    do {
        printf("Ja fez esse exame? Digite S para sim ou N para nao: ");
        scanf(" %c", &opc);

        if (opc != 'S' && opc != 'N')
            printf("ERRO: Digite apenas S ou N.\n");

    } while (opc != 'S' && opc != 'N');

    if (opc == 'S') {
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

            if (grau < 1 || grau > 6)
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

    do {
        printf("Forneca a data do exame no formato dd/mm/aaaa: ");
        scanf(" %10s", dataExa);

        if (strlen(dataExa) != 10)
            printf("ERRO: Data incompleta.\n");

    } while (strlen(dataExa) != 10);

    do {
        printf("\nTipo de aparelho auditivo utilizado:\n");
        printf("1 - BTE - Retroauricular\n");
        printf("2 - RIC - Receptor no Canal\n");
        printf("3 - ITE - Intra-auricular\n");
        printf("4 - ITC - Intra-canal\n");
        printf("5 - CIC - Completamente no Canal\n");
        printf("Opcao: ");
        scanf("%d", &tipoAparelho);

        if(tipoAparelho < 1 || tipoAparelho > 5)
            printf("ERRO: Escolha uma opcao de 1 a 5.\n");

    } while(tipoAparelho < 1 || tipoAparelho > 5);

    switch(tipoAparelho) {
        case 1: strcpy(aparelhoTipo, "BTE - Retroauricular"); break;
        case 2: strcpy(aparelhoTipo, "RIC - Receptor no Canal"); break;
        case 3: strcpy(aparelhoTipo, "ITE - Intra-auricular"); break;
        case 4: strcpy(aparelhoTipo, "ITC - Intra-canal"); break;
        case 5: strcpy(aparelhoTipo, "CIC - Completamente no Canal"); break;
    }

    printf("\n---------------- DADOS DO EXAME TONAL ----------------\n");

    for(e = 0; e < 3; e++) {
        printf("\nFREQUENCIA: %d Hz\n", frequencia[e]);

        printf("Ouvido Esquerdo - perda em dB: ");
        scanf("%d", &ouvidoE[e]);

        printf("Ouvido Esquerdo - ganho do aparelho em dB: ");
        scanf("%d", &aparelhoE[e]);

        printf("Ouvido Direito - perda em dB: ");
        scanf("%d", &ouvidoD[e]);

        printf("Ouvido Direito - ganho do aparelho em dB: ");
        scanf("%d", &aparelhoD[e]);
    }

    printf("\n============================================================\n");
    printf("                    RELATORIO (RES)\n");
    printf("============================================================\n");

    printf("\n--------- DADOS DO ESPECIALISTA ---------\n");
    printf("Nome do especialista : %s\n", uso);
    printf("Especialidade        : %s\n", funcao);
    printf("----------------------------------------\n");

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
    printf("Tipo de aparelho      : %s\n", aparelhoTipo);
    printf("Data do exame         : %s\n", dataExa);

    printf("\n--------- DADOS DO EXAME TONAL ---------\n");

    printf("\nOUVIDO ESQUERDO\n");
    printf("+------------+------------+------------+---------------------+\n");
    printf("| Frequencia | Perda (dB) | Ganho (dB) | Resultado           |\n");
    printf("+------------+------------+------------+---------------------+\n");

    for(e = 0; e < 3; e++) {
        printf("| %6d Hz | %9d | %9d | ",
               frequencia[e], ouvidoE[e], aparelhoE[e]);

        if(aparelhoE[e] == ouvidoE[e])
            printf("Compativel          |\n");
        else if(aparelhoE[e] < ouvidoE[e])
            printf("Subdimensionado     |\n");
        else
            printf("Superdimensionado   |\n");
    }

    printf("+------------+------------+------------+---------------------+\n");

    printf("\nOUVIDO DIREITO\n");
    printf("+------------+------------+------------+---------------------+\n");
    printf("| Frequencia | Perda (dB) | Ganho (dB) | Resultado           |\n");
    printf("+------------+------------+------------+---------------------+\n");

    for(e = 0; e < 3; e++) {
        printf("| %6d Hz | %9d | %9d | ",
               frequencia[e], ouvidoD[e], aparelhoD[e]);

        if(aparelhoD[e] == ouvidoD[e])
            printf("Compativel          |\n");
        else if(aparelhoD[e] < ouvidoD[e])
            printf("Subdimensionado     |\n");
        else
            printf("Superdimensionado   |\n");
    }

    printf("+------------+------------+------------+---------------------+\n");

    printf("\nLegenda:\n");
    printf("Compativel        : ganho igual a perda auditiva.\n");
    printf("Subdimensionado   : ganho menor que a perda auditiva.\n");
    printf("Superdimensionado : ganho maior que a perda auditiva.\n");

    printf("\n============================================================\n");

    return 0;
}
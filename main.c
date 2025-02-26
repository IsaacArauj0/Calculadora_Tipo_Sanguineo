/*===============================================================
    ISAAC FERNANDO VEIRA ARAUJO
    ANÁLISE E DESENVOLVIMENTO DE SISTEMAS
    EXTENSAO II
    2º SEMESTRE 2024
//===============================================================*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>

#define tam 4

//TS = TIPO SANGUÍNEO, RH = FATOR RH
typedef struct {
    char ts_alelo1[tam];
    char ts_alelo2[tam];
    char rh_alelo1[tam];
    char rh_alelo2[tam];
} pessoas;

//FUNÇÕES
void menu_duvidas() {
    int opc = 0;

    do {
        system("cls");
        //MENU DE EXPLICAÇÕES
        printf("Bem vindo ao Menu de Duvidas.");
        printf("\n\nEsse menu foi criado para ajudar e melhorar sua interacao com o programa.");
        printf("\nEscolha um topico para retirar duvidas.");
        printf("\n\n   MENU DE DUVIDAS\n");
        printf("1. O que eh o Sistema ABO?\n");
        printf("2. O que eh fator Rh?\n");
        printf("3. O que eh Homozigoto e Heterozigoto?\n");
        printf("4. Como fazer o Calculo do Tipo Sanguineo?\n");
        printf("5. O que eh Eritoblastose Fetal?\n");
        printf("6. Como funciona a Doacao de Sangue?\n");
        printf("7. Sair do Menu de Explicacoes.");

        //ENTRADA DE DADOS
        printf("\n\nDigite uma opcao.....: ");
        do {
            scanf("%d", &opc);
            while (getchar() != '\n');

            //VERIFICAÇÃO DA OPCAO
            if (opc < 1 || opc > 7) {
                printf("\nOpcao invalida!");
                printf("\nEscolha um modulo com base no menu acima.");
                printf("\nDigite uma opcao....:");
            }
        } while (opc < 1 || opc > 7);

        if (opc == 1) {
            system("cls");
            printf("O QUE EH O SISTEMA ABO?\n\n");
            printf("O sistema ABO, descoberto no seculo XX pelo cientista Karl Landsteiner, eh um sistema");
            printf("\nque determina qual o tipo sanguineo de um ser humano.");

            printf("\n\nO nosso sangue eh composto por uma parte liquida, chamada plasma, e uma parte solida, que contem \nos globulos vermelhos(hemacias), os globulos brancos(leucocitos) e as plaquetas.");

            printf("\n\nAs hemacias contem algumas proteinas chamadas antigenos ou aglutinogenios, essa proteina diz qual o seu tipo sanguineo.");
            printf("\nExiste dois tipos de antigenos, os antigenos A e os antigenos B.");
            printf("\nSe uma pessoa tem antigenos A nas suas hemacias o sangue dela eh classificado como tipo A.");
            printf("\nSe uma pessoa tem antigenos B nas suas hemacias o sangue dela eh classificado como tipo B.");
            printf("\nSe uma pessoa tem antigenos A e antigenos B nas suas hemacias o sangue dela eh classificado como tipo AB.");
            printf("\nSe uma pessoa nao tem antigenos nas suas hemacias o sangue dela eh classificado como tipo O.");

            printf("\n\nO plasma contem o que chamamos de anticorpos ou aglutininas.");
            printf("\nExistem dois tipos de anticorpos, o anti-A (contra antigenos A) e o anti-B (contra antigenos B).");
            printf("\nUma pessoa com sangue A possuem anticorpos do tipo anti-B.");
            printf("\nUma pessoa com sangue B possuem anticorpos do tipo anti-A.");
            printf("\nUma pessoa com sangue AB nao possue anticorpos contra qualquer antigeno.");
            printf("\nUma pessoa com sangue O possue anticorpos anti-A e anti-B.");

            printf("\n\nAPERTE QUALQUER TECLA PARA VOLTAR AO MENU DE DUVIDAS");
            getch();

        } else if (opc == 2) {
            system("cls");
            printf("O QUE EH O FATOR RH?\n\n");
            printf("O fator Rh, tambem chamado de antigeno D, eh uma proteina que pode estar presente nos globulos vermelhos.");
            printf("\nUma pessoa que tem essa proteina eh classificada como Rh+ e uma pessoa que nao tem eh classificada como Rh-.");
            printf("\nPessoas com Rh+ nao possuem anticorpos contra o antigeno D.");
            printf("\nPessoas Rh- tambem nao possuem anticorpos contra o antigeno D, mas podem desenvolve-los caso entrem em contato \ncom sangue Rh+.");

            printf("\n\nAPERTE QUALQUER TECLA PARA VOLTAR AO MENU DE DUVIDAS");
            getch();

        } else if (opc == 3) {
            system("cls");
            printf("O QUE EH HOMOZIGOTO E HETEROZIGOTO?\n\n");
            printf("Nos humanos possuimos muitas caracteristicas hereditarias, como tipo sanguineo, fator rh, cor do olho, entre outros.");
            printf("\nEssas caracteristicas sao determinadas pelos alelos. Dependendo de como esses alelos estao organizados uma ");
            printf("pessoa eh chamada de homozigota (alelos iguais) ou heterozigota (alelos diferentes) em relacao a uma caracteristica hereditaria.");

            printf("\n\nSISTEMA ABO.");
            printf("\nOs antigenos dos tipos sanguineos sao codificados pela interacao de tres possiveis alelos.");
            printf("\nAlelo A -> Codominante.");
            printf("\nAlelo B -> Codominante.");
            printf("\nAlelo O -> Recessivo.");

            printf("\n\nPor A e B serem alelos codominantes eles se sobressaem sobre o alelo O mas nao se sobressaem um sobre o outro.");

            printf("\n\nUma pessoa com sangue A pode possuir duas combinacoes de alelos:");
            printf("\nEla pode ser Homozigota, dois alelos A (AA), ou Heterozigota, um alelo A e um alelo O (AO).");

            printf("\n\nUma pessoa com sangue B pode possuir duas combinacoes de alelos:");
            printf("\nEla pode ser Homozigota, dois alelos B (BB), ou Heterozigota, um alelo B e um alelo O (BO).");

            printf("\n\nUma pessoa com sangue AB pode possuir apenas uma combinacao de alelos:");
            printf("\nEla so pode ser Heterozigota, um alelo A e um alelo B (AB).");

            printf("\n\nUma pessoa com sangue O pode possuir apenas uma combinacao de alelos:");
            printf("\nEla so pode ser Homozigota, dois alelos O (OO).");

            printf("\n\n\nFATOR RH.");
            printf("\nO fator rh eh codificados pela interacao de dois possiveis alelos.");
            printf("\nAlelo + -> Dominante.");
            printf("\nAlelo - -> Recessivo.");

            printf("\n\nPor + ser um alelo dominante ele se sobressae sobre o alelo -.");

            printf("\n\nUma pessoa Rh+ pode possuir duas combinacoes de alelos:");
            printf("\nEla pode ser Homozigota, possuir dois alelos + (++), ou Heterozigota, um alelo + e um alelo - (+-).");

            printf("\n\nUma pessoa Rh - possui apenas uma combinacao de alelos:");
            printf("\nEla so pode ser Homozigota, dois alelos - (--).");

            printf("\n\nAPERTE QUALQUER TECLA PARA VOLTAR AO MENU DE DUVIDAS");
            getch();

        } else if (opc == 4) {
            system("cls");
            printf("COMO CALCULAR O TIPO SANGUINEO?\n\n");
            printf("Esse codigo usa a ferramenta 'quadro de punnett' para realizar as estimativas do tipo sanguineo.");
            printf("\nEssa ferramenta leva esse nome por conta de seu criador, o geneticista Reginald C. Punnett, e funciona \nda seguinte maneira:");
            printf("\n\nMontamos um quadro 3x3 onde a primeira linha tera os alelos da mae e a primeira coluna os alelos do pai, por exemplo,\ne preenchemos o resto do quadro com um alelo do pai e um da mae, respeitando a linha e a coluna que estamos.");

            printf("\n\nExemplo: ");
            printf("\nPai: Sangue tipo A heterozigoto(AO).");
            printf("\nMae: Sangue tipo B heterozigoto(BO).");
            printf("\n\nQuadro de Punnett:\n");
            printf("---------------\n");
            printf("|   | B  |  O |\n");
            printf("---------------\n");
            printf("| A | AB | AO |\n");
            printf("| O | BO | OO |\n");
            printf("---------------\n");

            printf("\nAtraves desse quadro obtemos as seguintes estimativas:\n");
            printf("\nFilho com sangue tipo A: 25%%");
            printf("\nFilho com sangue tipo B: 25%%");
            printf("\nFilho com sangue tipo AB: 25%%");
            printf("\nFilho com sangue tipo O: 25%%");
            printf("\n\nO mesmo eh feito para calcular as estimativas do fator rh.");

            printf("\n\nAPERTE QUALQUER TECLA PARA VOLTAR AO MENU DE DUVIDAS");
            getch();
        } else if (opc == 5) {
            system("cls");
            printf("O QUE EH A ERITOBLASTOSE FETAL?\n\n");
            printf("A Eritoblastose Fetal, tambem chamada de  doenca hemolitica do recem-nascido, eh uma condicao que ocorre quando");
            printf("\nha incompatibilidade entre o fator rh da mae e o fator rh do feto.");

            printf("\n\nIsso ocorre quando a mae tem o fator rh- e o feto herda o fator rh+ do pai.");
            printf("\nQuando isso acontece ha uma chance do sangue da mae, se possuir anticorpos anti-Rh, atravessar a placenta e \natacar as hemacias do feto, gerando anemia hemolitica.");
            printf("\nRecomenda-se consultar um medico para saber as reais chances e tomar as medidas preventivas.");

            printf("\n\nAPERTE QUALQUER TECLA PARA VOLTAR AO MENU DE DUVIDAS");
            getch();

        } else if (opc == 6) {
            system("cls");
            printf("COMO FUNCIONA A DOACAO DE SANGUE?\n\n");
            printf("Em uma doacao de sangue, a pessoa que ira receber o sangue nao recebe o sangue inteiro e sim alguns componentes especificos.");
            printf("\nPara uma doacao de sangue ocorrer e nao gerar problemas graves tem que ser levado em consideracao alguns \nfatores de compatibilidade do sistema ABO e do fator rh.");
            printf("\nDependendo do componente e da urgencia os fatores de compatibilidade podem ser flexiveis, mas como regra geral temos:\n");

            printf("\nO sangue do tipo A tem anticorpos anti-B, que impedem de receber sangues do tipo B e do tipo AB.");
            printf("\nO sangue do tipo B tem anticorpos anti-A, que impedem de receber sangues do tipo A e do tipo AB.");
            printf("\nO sangue do tipo AB nao tem anicorpos o que o possibilita de receber sangues do tipo A, B, AB e O.");
            printf("\nO sangue do tipo O tem anticorpos anti-A e anti-B, que impedem de receber sangues do tipo B, A e AB.");

            printf("\n\nO sangue com fator rh+ nao possue anticorpos, entao pode receber sangue do tipo rh+ e do tipo rh-.");
            printf("\nO sangue com fator rh- nao possuem anticorpos, mas pode desenvolve-los, entao eh uma medida de precaucao universal \nnao receber sangue do tipo rh+.");

            printf("\n\nExemplo:");
            printf("\nUma pessoa com sangue A- nao pode receber sangue B nem AB, e nao pode receber sangue com rh+.");
            printf("\nEssa pessoa so pode receber sangue de A- e O-.");

            printf("\n\nAPERTE QUALQUER TECLA PARA VOLTAR AO MENU DE DUVIDAS");
            getch();

        } else {
            system("cls");
        }
    } while (opc != 7);
}

void verificar_tipo_sanguineo(char ts_entrada[], int flag_parents) {
    do {
        /*
        gets(ts_entrada) -> É UMA FUNÇÃO INSEGURA POR NÃO LEVAR EM CONTA O TAMANHO DO BUFFER, PODENDO OCORRER BUFFER OVERFLOW.

        fgets() É UMA ALTERNATIVA MAIS SEGURA EM COMPARAÇÃO AO gets(). ELE LÊ UMA ENTRADA ATÉ ENCONTRAR O CARACTER \n (ENTER)
        OU ATÉ CHEGAR NO TAMANHO DO BUFFER. SE FOR ENCONTRADO UM \n ELE ADICIONA UM \0 DEPOIS, INCLUINDO O \n NA STRING
        SE A ENTREADA ULTRAPASSAR O TAMANHO DO BUFFER O \n NAO SERÁ INCLUIDO E OS CARACTERES RESTANTES PERMANECERÃO NO BUFFER
        A NAO OCORRÊNCIA DO BUFFER OVERFLOW.

        ESSA FUNÇÃO RECEBE COMO PARÂMETRO:

        ts_entrada -> VARIÁVEL QUE IRA RECEBER A ENTRADA DO USUÁRIO.
        tam -> TAMANHO MÁXIMO DO BUFFER DA VARIÁVEL.
        stdin -> INDICA QUE A ENTRADA DE DADOS SERÁ FEITA PELO TECLADO.
        */

        fgets(ts_entrada, tam, stdin);

        //VERIFICAÇÃO SE NÃO É UMA ENTRADA VAZIA E SE É UMA ENTRADA MAIOR QUE O TAMANHO DO BUFFER
        if (strlen(ts_entrada) > 0 && ts_entrada[strlen(ts_entrada) - 1] != '\n') {
            //LIMPA O BUFFER DE ENTRADA PARA DESCARTAR QUALQUER EXCESSO DE CARACTERES
            while (getchar() != '\n');
        } else {
            /*
            O ts_entrada[strcspn(ts_entrada, "\n")] = '\0'; PROCURA O \n (CASO ELE EXISTA) E SUBSTITUI POR UM CARACTER NULO \0
            PARA REMOVER A NOVA LINHA E GARANTIR QUE A STRING FIQUE CORRETAMENTE TERMINADA.
            */
            ts_entrada[strcspn(ts_entrada, "\n")] = '\0';
        }

        //LOOP QUE TRANSFORMA A ENTRADA DO USUARIO PARA CAPSLOCK
        for (int i = 0; ts_entrada[i] != '\0'; i++) {
            ts_entrada[i] = toupper(ts_entrada[i]);
        }

        //VERIFICAÇÃO DA ENTRADA
        if (strcmp(ts_entrada, "A") != 0 && strcmp(ts_entrada, "B") != 0 && strcmp(ts_entrada, "AB") != 0 && strcmp(ts_entrada, "O") != 0 && strcmp(ts_entrada, "H") != 0) {
            printf("\nTipo sanguineo invalido!");

            if (flag_parents == 0) {
                printf("\nDigite o tipo sanguineo do pai (A, B, AB, O)....:");
            } else {
                printf("\nDigite o tipo sanguineo da mae (A, B, AB, O)....:");
            }
        }

        if (strcmp(ts_entrada, "H") == 0) {
            menu_duvidas();
            if (flag_parents == 0) {
                printf("\nDigite o tipo sanguineo do pai (A, B, AB, O)....:");
            } else {
                printf("\nDigite o tipo sanguineo da mae (A, B, AB, O)....:");
            }
        }
    } while (strcmp(ts_entrada, "A") != 0 && strcmp(ts_entrada, "B") != 0 && strcmp(ts_entrada, "AB") != 0 && strcmp(ts_entrada, "O") != 0);
}

void verificar_genotipo(char gen_entrada[], int *flag_alelos, int flag_parents, int flag_tsr){
    do {
        fgets(gen_entrada, tam, stdin);

        if (strlen(gen_entrada) > 0 && gen_entrada[strlen(gen_entrada) - 1] != '\n') {
            while (getchar() != '\n');
        } else {
            gen_entrada[strcspn(gen_entrada, "\n")] = '\0';
        }

        //LOOP QUE TRANSFORMA A ENTRADA DO USUARIO PARA CAPSLOCK
        for (int i = 0; gen_entrada[i] != '\0'; i++) {
            gen_entrada[i] = toupper(gen_entrada[i]);
        }

        //VERIFICACAO DA ENTRADA
        if (strcmp(gen_entrada, "HO") != 0 && strcmp(gen_entrada, "HT") != 0 && strcmp(gen_entrada, "H") != 0) {
            printf("\nEntrada invalida!");
            if (flag_parents == 0) {

                if (flag_tsr == 0) {
                    printf("\nDigite 'HO' para homozigoto ou 'HT' para heterozigoto, em relacao aos alelos do tipo sanguineo do pai....:");
                } else {
                    printf("\nDigite 'HO' para homozigoto ou 'HT' para heterozigoto, em relacao aos alelos do fator rh do pai....:");
                }

            } else {

                if (flag_tsr == 0) {
                    printf("\nDigite 'HO' para homozigoto ou 'HT' para heterozigoto, em relacao aos alelos do tipo sanguineo da mae....:");
                } else {
                    printf("\nDigite 'HO' para homozigoto ou 'HT' para heterozigoto, em relacao aos alelos do fator rh da mae....:");
                }
            }
        }

        if (strcmp(gen_entrada, "H") == 0) {
            menu_duvidas();
            if (flag_parents == 0) {

                if (flag_tsr == 0) {
                    printf("\nDigite 'HO' para homozigoto ou 'HT' para heterozigoto, em relacao aos alelos do tipo sanguineo do pai....:");
                } else {
                    printf("\nDigite 'HO' para homozigoto ou 'HT' para heterozigoto, em relacao aos alelos do fator rh do pai....:");
                }

            } else {

                if (flag_tsr == 0) {
                    printf("\nDigite 'HO' para homozigoto ou 'HT' para heterozigoto, em relacao aos alelos do tipo sanguineo da mae....:");
                } else {
                    printf("\nDigite 'HO' para homozigoto ou 'HT' para heterozigoto, em relacao aos alelos do fator rh da mae....:");
                }
            }
        }

        if (strcmp(gen_entrada, "HO") == 0) {
            *flag_alelos = 0;
        } else if (strcmp(gen_entrada, "HT") == 0) {
            *flag_alelos = 1;
        }
    } while (strcmp(gen_entrada, "HO") != 0 && strcmp(gen_entrada, "HT") != 0);
}

void verificar_fator_rh(char rh_entrada[], int flag_parents){
    do {
        fgets(rh_entrada, tam, stdin);

        if (strlen(rh_entrada) > 0 && rh_entrada[strlen(rh_entrada) - 1] != '\n') {
            while (getchar() != '\n');
        } else {
            rh_entrada[strcspn(rh_entrada, "\n")] = '\0';
        }

        //VERIFICAÇÃO DA ENTRADA
        if (strcmp(rh_entrada, "+") != 0 && strcmp(rh_entrada, "-") != 0 && strcmp(rh_entrada, "H") != 0){
            printf("\nFator Rh invalido!");
            if (flag_parents == 0) {
                printf("\nDigite o fator rh do pai (+ ou -)....:");
            } else {
                printf("\nDigite o fator rh da mae (+ ou -)....:");
            }
        }

        if (strcmp(rh_entrada, "H") == 0) {
            menu_duvidas();
            if (flag_parents == 0) {
                printf("\nDigite o fator rh do pai (+ ou -)....:");
            } else {
                printf("\nDigite o fator rh da mae (+ ou -)....:");
            }
        }
    } while (strcmp(rh_entrada, "+") != 0 && strcmp(rh_entrada, "-") != 0);
}

void alelos_sanguineos(pessoas *p, char ts_entrada[], int flag_alelos) {
    //VERIFICA SE É HOMOZIGOTO OU HETEROZIGOTO
    if (flag_alelos == 0){
        //VERIFICAÇÃO DO TIPO SANGUÍNEO PARA PREENCHIMENTO DA STRUCT
        if (strcmp(ts_entrada, "A") == 0) {
            strcpy(p->ts_alelo1, "A");
            strcpy(p->ts_alelo2, "A");

        } else if (strcmp(ts_entrada, "B") == 0) {
            strcpy(p->ts_alelo1, "B");
            strcpy(p->ts_alelo2, "B");

        } else if (strcmp(ts_entrada, "AB") == 0) {
            strcpy(p->ts_alelo1, "A");
            strcpy(p->ts_alelo2, "B");

        }else {
            strcpy(p->ts_alelo1, "O");
            strcpy(p->ts_alelo2, "O");
        }
    } else {
        if (strcmp(ts_entrada, "A") == 0) {
            strcpy(p->ts_alelo1, "A");
            strcpy(p->ts_alelo2, "O");

        } else if (strcmp(ts_entrada, "B") == 0) {
            strcpy(p->ts_alelo1, "B");
            strcpy(p->ts_alelo2, "O");

        } else if (strcmp(ts_entrada, "AB") == 0) {
            strcpy(p->ts_alelo1, "A");
            strcpy(p->ts_alelo2, "B");

        }else {
            strcpy(p->ts_alelo1, "O");
            strcpy(p->ts_alelo2, "O");
        }
    }
}

void alelos_rh(pessoas *p, char rh_entrada[], int flag_alelos) {
    //VERIFICA SE É HOMOZIGOTO OU HETEROZIGOTO
    if (flag_alelos == 0) {
        //VERIFICAÇÃO DO FATOR RH PARA PREENCHIMENTO DA STRUCT
        if (strcmp(rh_entrada, "+") == 0) {
            strcpy(p->rh_alelo1, "+");
            strcpy(p->rh_alelo2, "+");

        } else {
            strcpy(p->rh_alelo1, "-");
            strcpy(p->rh_alelo2, "-");
        }
    } else {
        if (strcmp(rh_entrada, "+") == 0) {
            strcpy(p->rh_alelo1, "+");
            strcpy(p->rh_alelo2, "-");

        } else {
            strcpy(p->rh_alelo1, "-");
            strcpy(p->rh_alelo2, "-");
        }
    }
}

void quadro_punnett(pessoas pai, pessoas mae) {
    char ts_qd_punnet[3][3][tam];
    char rh_qd_punnet[3][3][tam];

    char concatenar[tam];
    strcpy(concatenar, "");

    float prob_A, prob_B, prob_AB, prob_O, prob_pos, prob_neg;
    prob_A = prob_B = prob_AB = prob_O = prob_pos = prob_neg = 0;

    float prob_A_pos, prob_A_neg, prob_B_pos, prob_B_neg, prob_AB_pos, prob_AB_neg, prob_O_pos, prob_O_neg;
    prob_A_pos = prob_A_neg = prob_B_pos = prob_B_neg = prob_AB_pos = prob_AB_neg = prob_O_pos = prob_O_neg = 0;

    int cont_A, cont_B, cont_AB, cont_O, cont_pos, cont_neg;
    cont_A = cont_B = cont_AB = cont_O = cont_pos = cont_neg = 0;

    //INICIALIZAR MATRIZES
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            strcpy(ts_qd_punnet[i][j], "");
            strcpy(rh_qd_punnet[i][j], "");

        }
    }

    //MONTANDO QUADRO DE PUNNETT DO TIPO SANGUÍNEO
    strcpy(ts_qd_punnet[1][0], pai.ts_alelo1);
    strcpy(ts_qd_punnet[2][0], pai.ts_alelo2);

    strcpy(ts_qd_punnet[0][1], mae.ts_alelo1);
    strcpy(ts_qd_punnet[0][2], mae.ts_alelo2);

    //PREENCHENDO O QUADRO DE PUNNETT DO TIPO SANGUÍNEO
    strcpy(concatenar, pai.ts_alelo1); //COPIO O PRIMEIRO TIPO SANGUÍNEO PARA UMA VARIÁVEL
    strcat(concatenar, mae.ts_alelo1); //CONCATENO O TS QUE A VARIÁVEL TEM COM OUTRO TS
    strcpy(ts_qd_punnet[1][1], concatenar); //INSIRO O RESULTADO DAS DUAS OPERAÇÕES ACIMA NA MATRIZ

    strcpy(concatenar, pai.ts_alelo1);
    strcat(concatenar, mae.ts_alelo2);
    strcpy(ts_qd_punnet[1][2], concatenar);

    strcpy(concatenar, pai.ts_alelo2);
    strcat(concatenar, mae.ts_alelo1);
    strcpy(ts_qd_punnet[2][1], concatenar);

    strcpy(concatenar, pai.ts_alelo2);
    strcat(concatenar, mae.ts_alelo2);
    strcpy(ts_qd_punnet[2][2], concatenar);

    //NAVEGANDO PELO QUADRO E CONTANDO OS TIPOS SANGUÍNEO
    for (int i = 1; i < 3; i++) {
        for (int j = 1; j < 3; j++) {
            if (strcmp(ts_qd_punnet[i][j], "AA") == 0 || strcmp(ts_qd_punnet[i][j], "AO") == 0 || strcmp(ts_qd_punnet[i][j], "OA") == 0) {
                cont_A++;
            } else if (strcmp(ts_qd_punnet[i][j], "BB") == 0 || strcmp(ts_qd_punnet[i][j], "BO") == 0 || strcmp(ts_qd_punnet[i][j], "OB") == 0) {
                cont_B++;

            } else if (strcmp(ts_qd_punnet[i][j], "AB") == 0 || strcmp(ts_qd_punnet[i][j], "BA") == 0) {
                cont_AB++;
            } else {
                cont_O++;
            }
        }
    }

    //MONTANDO QUADRO DE PUNNETT DO FATOR RH
    strcpy(rh_qd_punnet[1][0], pai.rh_alelo1);
    strcpy(rh_qd_punnet[2][0], pai.rh_alelo2);

    strcpy(rh_qd_punnet[0][1], mae.rh_alelo1);
    strcpy(rh_qd_punnet[0][2], mae.rh_alelo2);

    //PREENCHENDO O QUADRO DE PUNNETT DO FATOR RH
    strcpy(concatenar, pai.rh_alelo1);
    strcat(concatenar, mae.rh_alelo1);
    strcpy(rh_qd_punnet[1][1], concatenar);

    strcpy(concatenar, pai.rh_alelo1);
    strcat(concatenar, mae.rh_alelo2);
    strcpy(rh_qd_punnet[1][2], concatenar);

    strcpy(concatenar, pai.rh_alelo2);
    strcat(concatenar, mae.rh_alelo1);
    strcpy(rh_qd_punnet[2][1], concatenar);

    strcpy(concatenar, pai.rh_alelo2);
    strcat(concatenar, mae.rh_alelo2);
    strcpy(rh_qd_punnet[2][2], concatenar);

    //NAVEGANDO PELO QUADRO E CONTANDO OS FATORES RH
    for (int i = 1; i < 3; i++) {
        for (int j = 1; j < 3; j++) {
            if (strcmp(rh_qd_punnet[i][j], "++") == 0 || strcmp(rh_qd_punnet[i][j], "+-") == 0 || strcmp(rh_qd_punnet[i][j], "-+") == 0) {
                cont_pos++;
            } else {
                cont_neg++;
            }
        }
    }

    //CONTA DA PROBABILIDADE DOS TIPOS SANGUÍNEOS
    prob_A = (cont_A / 4.0) * 100;
    prob_B = (cont_B / 4.0) * 100;
    prob_AB= (cont_AB / 4.0) * 100;
    prob_O = (cont_O / 4.0) * 100;

    //CONTA DA PROBABILIDADE DO FATOR RH
    prob_pos = (cont_pos / 4.0) * 100;
    prob_neg = (cont_neg / 4.0) * 100;

    //CONTA JUNTANDO AS PORBABILIDADES DO TIPO SANGUÍNEO E DO FATOR RH
    prob_A_pos = (prob_A * prob_pos) / 100;
    prob_A_neg = (prob_A * prob_neg) / 100;
    prob_B_pos = (prob_B * prob_pos) / 100;
    prob_B_neg = (prob_B * prob_neg) / 100;
    prob_AB_pos = (prob_AB * prob_pos) / 100;
    prob_AB_neg = (prob_AB * prob_neg) / 100;
    prob_O_pos = (prob_O * prob_pos) / 100;
    prob_O_neg = (prob_O * prob_neg) / 100;

    //MOSTRA DAS PROBABILIDADES DO TIPO SANGUÍNEO
    printf("\n\nAs probabilidades do tipo sanguineo do filho sao:\n");
    printf("\nTipo sanguineo A: %.2f%%", prob_A);
    printf("\nTipo sanguineo B: %.2f%%", prob_B);
    printf("\nTipo sanguineo AB: %.2f%%", prob_AB);
    printf("\nTipo sanguineo O: %.2f%%", prob_O);

    //MOSTRA DAS PROBABILIDADES DO FATOR RH
    printf("\n\n\nAs probabilidades do fator rh do filho sao:\n");
    printf("\nFator Rh positivo: %.2f%%", prob_pos);
    printf("\nFator Rh negativo: %.2f%%", prob_neg);

    //MOSTRA DAS PROBABILIDADES FINAIS
    printf("\n\n\nCombinando essas informacoes temos que as probabilidades do filho sao:\n\n");
    printf("----------------------------------------------------------\n");
    printf("| Tipo Sanguineo | Fator Rh | Probabilidade (%%)          |\n");
    printf("----------------------------------------------------------\n");
    printf("|      A         |    +     |       %.2f%%                |\n", prob_A_pos);
    printf("|      A         |    -     |       %.2f%%                |\n", prob_A_neg);
    printf("|      B         |    +     |       %.2f%%                |\n", prob_B_pos);
    printf("|      B         |    -     |       %.2f%%                |\n", prob_B_neg);
    printf("|      AB        |    +     |       %.2f%%                |\n", prob_AB_pos);
    printf("|      AB        |    -     |       %.2f%%                |\n", prob_AB_neg);
    printf("|      O         |    +     |       %.2f%%                |\n", prob_O_pos);
    printf("|      O         |    -     |       %.2f%%                |\n", prob_O_neg);
    printf("----------------------------------------------------------\n");


    if (strcmp(rh_qd_punnet[1][0], "+") == 0 && strcmp (rh_qd_punnet[0][1], "-") == 0) {
        printf("\n\n|-----------------------------------------------------------------------------|\n");
        printf("|                                 AVISO                                       |\n");
        printf("|Nesse caso existe o risco de ocorrer a eritoblastose fetal.                  |\n");
        printf("|Recomenda-se o acompanhamento medico adequado para prevenir complicacoes.    |\n");
        printf("|Para entender melhor o que eh a eritoblastose fetal acesse o menu de duvidas.|\n");
        printf("|-----------------------------------------------------------------------------|\n");
    }
}

void doacao_sangue(pessoas usuario) {
    if (strcmp(usuario.rh_alelo1, "-") == 0) {
        if (strcmp(usuario.ts_alelo1, "A") == 0) {
            printf("\n\nO tipo sanguineo %s%s pode doar e receber de:\n\n", usuario.ts_alelo1, usuario.rh_alelo1);
            printf("---------------------------------------------------------\n");
            printf("|      Doar           |           Receber               |\n");
            printf("---------------------------------------------------------\n");
            printf("|        A+           |              A-                 |\n");
            printf("|        A-           |              O-                 |\n");
            printf("|        AB+          |                                 |\n");
            printf("|        AB-          |                                 |\n");
            printf("---------------------------------------------------------");

        } else if (strcmp(usuario.ts_alelo1, "B") == 0) {
            printf("\n\nO tipo sanguineo %s%s pode doar e receber de:\n\n", usuario.ts_alelo1, usuario.rh_alelo1);
            printf("---------------------------------------------------------\n");
            printf("|      Doar           |           Receber               |\n");
            printf("---------------------------------------------------------\n");
            printf("|       B+            |              B-                 |\n");
            printf("|       B-            |              O-                 |\n");
            printf("|       AB+           |                                 |\n");
            printf("|       AB-           |                                 |\n");
            printf("---------------------------------------------------------");

        } else if (strcmp(usuario.ts_alelo1, "AB") == 0) {
            printf("\n\nO tipo sanguineo %s%s pode doar e receber de:\n\n", usuario.ts_alelo1, usuario.rh_alelo1);
            printf("---------------------------------------------------------\n");
            printf("|      Doar           |           Receber               |\n");
            printf("---------------------------------------------------------\n");
            printf("|       AB+           |              A-                 |\n");
            printf("|       AB-           |              B-                 |\n");
            printf("|                     |              AB-                |\n");
            printf("|                     |              O-                 |\n");
            printf("---------------------------------------------------------");

        } else {
            printf("\n\nO tipo sanguineo %s%s pode doar e receber de:\n\n", usuario.ts_alelo1, usuario.rh_alelo1);
            printf("---------------------------------------------------------\n");
            printf("|      Doar           |           Receber               |\n");
            printf("---------------------------------------------------------\n");
            printf("|       A+            |              O-                 |\n");
            printf("|       A-            |                                 |\n");
            printf("|       B+            |                                 |\n");
            printf("|       B-            |                                 |\n");
            printf("|       AB+           |                                 |\n");
            printf("|       AB-           |                                 |\n");
            printf("|       O+            |                                 |\n");
            printf("|       O-            |                                 |\n");
            printf("---------------------------------------------------------");

        }
    } else {
        if (strcmp(usuario.ts_alelo1, "A") == 0) {
            printf("\n\nO tipo sanguineo %s%s pode doar e receber de:\n\n", usuario.ts_alelo1, usuario.rh_alelo1);
            printf("---------------------------------------------------------\n");
            printf("|      Doar           |           Receber               |\n");
            printf("---------------------------------------------------------\n");
            printf("|       A+            |              A+                 |\n");
            printf("|       AB+           |              A-                 |\n");
            printf("|                     |              O+                 |\n");
            printf("|                     |              O-                 |\n");
            printf("---------------------------------------------------------");

        } else if (strcmp(usuario.ts_alelo1, "B") == 0) {
            printf("\n\nO tipo sanguineo %s%s pode doar e receber de:\n\n", usuario.ts_alelo1, usuario.rh_alelo1);
            printf("---------------------------------------------------------\n");
            printf("|      Doar           |           Receber               |\n");
            printf("---------------------------------------------------------\n");
            printf("|       B+            |              B+                 |\n");
            printf("|       AB-           |              B-                 |\n");
            printf("|                     |              O+                 |\n");
            printf("|                     |              O-                 |\n");
            printf("---------------------------------------------------------");

        } else if (strcmp(usuario.ts_alelo1, "AB") == 0) {
            printf("\n\nO tipo sanguineo %s%s pode doar e receber de:\n\n", usuario.ts_alelo1, usuario.rh_alelo1);
            printf("---------------------------------------------------------\n");
            printf("|      Doar           |           Receber               |\n");
            printf("---------------------------------------------------------\n");
            printf("|       AB+           |              A+                 |\n");
            printf("|                     |              A-                 |\n");
            printf("|                     |              B+                 |\n");
            printf("|                     |              B-                 |\n");
            printf("|                     |              AB+                |\n");
            printf("|                     |              AB-                |\n");
            printf("|                     |              O+                 |\n");
            printf("|                     |              O-                 |\n");
            printf("---------------------------------------------------------");

        } else {
            printf("\n\nO tipo sanguineo %s%s pode doar e receber de:\n\n", usuario.ts_alelo1, usuario.rh_alelo1);
            printf("---------------------------------------------------------\n");
            printf("|      Doar           |           Receber               |\n");
            printf("---------------------------------------------------------\n");
            printf("|       A+            |              O+                 |\n");
            printf("|       B+            |              O-                 |\n");
            printf("|       AB+           |                                 |\n");
            printf("|       O+            |                                 |\n");
            printf("---------------------------------------------------------");
        }
    }
}

//CODIGO PRINCIPAL
int main()
{
    //CRIAÇÃO E INICIALIZAÇÃO DE VARIÁVEIS
    pessoas pai, mae;

    int opc = 0;
    int flag_alelos; //FLAG PARA SINALIZAR SE É HOMOZIGOTO(0) OU HETEROZIGOTO(1)
    int flag_parents; //FLAG PARA MELHORAR A INTERAÇÃO DO ÚSUARIO COM O CÓDIGO
    int flag_tsr; //FLAG PARA MELHORAR A INTERAÇÃO DO ÚSUARIO COM O CÓDIGO

    char ts_entrada[tam];
    strcpy(ts_entrada, "");

    char rh_entrada[tam];
    strcpy(rh_entrada, "");

    char gen_entrada[tam];
    strcpy(gen_entrada, "");

    char tecla;
    tecla = ' ';

    do {
        //APRESENTAÇÃO DO PROGRAMA
        printf("Bem Vindo a Calculadora de Tipo Sanguineo.\n");
        printf("\nO tipo sanguineo de uma pessoa eh determinada por dois sistemas, o sistema ABO e o fator Rh.");
        printf("\nEscolha um modulo do menu para entender melhor sobre a interacao desses sistemas.\n\n");

        //MENU DE OPÇÕES
        printf("        MODULOS");
        printf("\n1. Calculo do Tipo Sanguineo.");
        printf("\n2. Doacao de Sangue.");
        printf("\n3. Finalizar Programa.");

        //ENTRADA DE DADOS
        printf("\n\nDigite uma opcao.....: ");
        do {
            scanf("%d", &opc);
            while (getchar() != '\n');

            //VERIFICAÇÃO DA OPCAO
            if (opc < 1 || opc > 3) {
                printf("\nOpcao invalida!");
                printf("\nEscolha um modulo com base no menu acima.");
                printf("\nDigite uma opcao....:");
            }
        } while (opc < 1 || opc > 3);

        //MODULO 1 - CÁLCULO DO TIPO SANGUÍNEO
        if (opc == 1) {
            system("cls");

            //APRESENTAÇÃO DO MODULO
            printf("Bem-Vindo ao Modulo de Calculo do Tipo Sanguineo.\n");
            printf("\nNesse modulo veremos a interacao dos tipos sanguineos e dos fatores rh na hora da fecundacao de um feto.");
            printf("\nCaso tenha duvidas digite a tecla H (help) para acessar o menu de explicacoes.\n");

            flag_parents = 0;
            flag_tsr = 0;
            //ENTRADA DO TIPO SANGUUÍNEO DO PAI
            printf("\nDigite o tipo sanguineo do pai(A, B, AB, O)....:");
            verificar_tipo_sanguineo(ts_entrada, flag_parents);
            if (strcmp(ts_entrada, "O") != 0 && strcmp(ts_entrada, "AB") != 0) {
                printf("Digite 'HO' para homozigoto ou 'HT' para heterozigoto, em relacao aos alelos do tipo sanguineo do pai....:");
                verificar_genotipo(gen_entrada, &flag_alelos, flag_parents, flag_tsr);
            } else {
                flag_alelos = 0;
            }
            alelos_sanguineos(&pai, ts_entrada, flag_alelos);

            //ENTRADA DO FATOR RH DO PAI
            flag_tsr = 1;
            printf("Digite o fator rh do pai (+ ou -)....:");
            verificar_fator_rh(rh_entrada, flag_parents);
            if (strcmp(rh_entrada, "+") == 0) {
                printf("Digite 'HO' para homozigoto ou 'HT' para heterozigoto, em relacao aos alelos do fator rh do pai....:");
                verificar_genotipo(gen_entrada, &flag_alelos, flag_parents, flag_tsr);
            } else {
                flag_alelos = 0;
            }
            alelos_rh(&pai, rh_entrada, flag_alelos);

            flag_parents = 1;
            flag_tsr = 0;
            //ENTRADA DO TIPO SANGUÍNEO DA MÃE
            printf("\nDigite o tipo sanguineo da mae(A, B, AB ou O)....:");
            verificar_tipo_sanguineo(ts_entrada, flag_parents);
            if (strcmp(ts_entrada, "O") != 0 && strcmp(ts_entrada, "AB") != 0) {
                printf("Digite 'HO' para homozigoto ou 'HT' para heterozigoto, em relacao aos alelos do tipo sanguineo da mae....:");
                verificar_genotipo(gen_entrada, &flag_alelos, flag_parents, flag_tsr);
            } else {
                flag_alelos = 0;
            }
            alelos_sanguineos(&mae, ts_entrada, flag_alelos);

            //ENTRADA DO FATOR RH DA MÃE
            flag_tsr = 1;
            printf("Digite o fator rh da mae (+ ou -)....:");
            verificar_fator_rh(rh_entrada, flag_parents);
            if (strcmp(rh_entrada, "+") == 0) {
                printf("Digite 'HO' para homozigoto ou 'HT' para heterozigoto, em relacao aos alelos do fator rh da mae....:");
                verificar_genotipo(gen_entrada, &flag_alelos, flag_parents, flag_tsr);
            } else {
                flag_alelos = 0;
            }
            alelos_rh(&mae, rh_entrada, flag_alelos);

            quadro_punnett(pai, mae);
            printf("\n\nAPERTE QUALQUER TECLA PARA VOLTAR AO MENU");
            printf("\nOU APERTE 'H' PARA ACESSAR O MENU DE DUVIDAS.");
            tecla = getch();

            if (toupper(tecla) == 'H') {
                menu_duvidas();
            } else {
                system("cls");
            }

        //MODULO 2 - DOAÇÃO DE SANGUE
        } else if (opc == 2) {
            system("cls");
            pessoas usuario;

            printf("Bem-Vindo ao Modulo Doacao de Sangue.");
            printf("\n\nNesse Modulo eh possivel saber de quais tipos sanguineos voce pode receber uma doacao e para quais tipos sanguineos voce \npode doar.");
            printf("\n\nInsira o seu tipo sanguineo (A, B, AB ou O)....:");
            verificar_tipo_sanguineo(ts_entrada, flag_parents);
            strcpy(usuario.ts_alelo1, ts_entrada);

            printf("Insira o seu fator rh (+ ou -)....:");
            verificar_fator_rh(rh_entrada, flag_parents);
            strcpy(usuario.rh_alelo1, rh_entrada);

            doacao_sangue(usuario);
            printf("\n\nAPERTE QUALQUER TECLA PARA VOLTAR AO MENU");
            printf("\nOU APERTE 'H' PARA ACESSAR O MENU DE DUVIDAS.");
            tecla = getch();

            if (toupper(tecla) == 'H') {
                menu_duvidas();
            } else {
                system("cls");
            }

        } else {
            printf("\nFinalizando execucao.");
        }

    } while (opc != 3);

    //FINALIZAR PROGRAMA
    printf("\n\n\nObrigado por usar esse programa!\n\n");

    return 0;
}

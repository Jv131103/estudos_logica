#include <stdio.h>
#include <string.h>


int valida_se_mes_pertence_a_dias(char nome_mes[20], char array[][20], int tamanho);
int retorna_dia_mes(char nome_mes[20], int bissexto);

int main(){

    char nome_mes[20] = "FEVEREIRO";
    int bissexto = 0;

    int total_dias = retorna_dia_mes(nome_mes, bissexto);
    int vendas;

    int maior_dia = 0;
    int maior_venda = 0;

    if (total_dias != -1) {
        for (int dias=1; dias <= total_dias; dias++){
            printf("Quantidades de discos vendidos no dia %d: ", dias);
            scanf("%d", &vendas);
            if (vendas > maior_venda){
                maior_venda = vendas;
                maior_dia = dias;
            }
        }
        printf(
            "O dia que mais houve vendas foi no dia %d com %d de discos.\n", 
            maior_dia, maior_venda
        );
    }
}


int retorna_dia_mes(char nome_mes[20], int bissexto){
    char meses30dias[4][20] = {"ABRIL", "JUNHO", "SETEMBRO", "NOVEMBRO"};
    char meses31dias[7][20] = {"JANEIRO", "MARÇO", "MAIO", "JULHO", "AGOSTO", "OUTUBRO", "DEZEMBRO"};
    char mes_especial[1][20] = {"FEVEREIRO"};

    if (valida_se_mes_pertence_a_dias(nome_mes, meses30dias, 4)){
        return 30;
    } else if (valida_se_mes_pertence_a_dias(nome_mes, meses31dias, 7)){
        return 31;
    } else if (valida_se_mes_pertence_a_dias(nome_mes, mes_especial, 1)){
        return bissexto ? 29 : 28;
    }

    printf("VALOR INVÁLIDO!\n");
    return -1; // importante retornar algo para indicar erro
}


int valida_se_mes_pertence_a_dias(char nome_mes[20], char array[][20], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(array[i], nome_mes) == 0) {
            return 1;
        }
    }
    return 0;
}


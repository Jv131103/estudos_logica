#include <stdio.h>
#include <string.h>


const char* is_bissexto(int year){
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        return "true";
    }
    return "false";
}

int main(){
    int anos[] = {
        1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 
        2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 
        2023, 2024, 2025
    };

    int tamanho = sizeof(anos) / sizeof(anos[0]);

    for (int i = 0; i < tamanho; i++){
        if (strcmp(is_bissexto(anos[i]), "true") == 0){
            printf("%d é Bissexto\n", anos[i]);
        } else{
            printf("%d Não é Bissexto\n", anos[i]);
        }
    }

    return 0;
}

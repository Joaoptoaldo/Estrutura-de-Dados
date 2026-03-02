#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>

#include "minha_biblioteca.h"

int main(){
    vector<int> lista_numerosA;
    vector<int> lista_numerosB;
    vector<int> lista_resultado;
    string nome_arquivo;
    srand(time(0)); // inicializa a semente para números aleatórios

    popular_aleatorio(lista_numerosA, 10); // popular a lista A com 10 números aleatórios
    exibir(lista_numerosA);
}
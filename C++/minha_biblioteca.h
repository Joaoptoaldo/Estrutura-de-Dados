#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <fstream>
#include <string>

using namespace std;

/**
 * @brief Função para popular um vetor com números aleatórios   
 * @param vetor 
 * @param quantidade 
 * @return 
 */


// função para popular um vetor com números aleatórios
void popular_aleatorio(vector<int>& vetor, int quantidade) {
    random_device rd; // gerador de números aleatórios
    mt19937 gen(rd()); // motor de geração de números aleatórios
    
    // distribuição uniforme de números entre 1 e 100
    uniform_int_distribution<> dis(1, 100);

    for (int i = 0; i < quantidade; ++i) {
        int numero_aleatorio = dis(gen); // gera um número aleatório
        vetor.push_back(numero_aleatorio); // adiciona ao vetor
    }
}

void popular_de_arquivos(vector<string>& lista, string nome_arquivo) {
    // implementação para popular o vetor a partir de um arquivo
    ifstream leitor(nome_arquivo);

    // verifica se o arquivo foi aberto 
    if (!leitor.is_open()) {
        cerr << "Erro ao abrir o arquivo: " << nome_arquivo << endl;
        return;
    }

    string linha;
    while (getline(leitor, linha)) {
      if (!linha.empty()) {
            lista.push_back(linha); // adiciona a linha ao vetor
        }
    }
}

void exibir(const vector<int>& lista){
    // percorre a lista exibindo cada elemento
    for (int i : lista){
        cout << i << endl;
    }

    cout << "-----------------------------" << endl;

    // .size() é equivalente ao len() do Python, retorna a quantidade de elementos no vetor
    cout << "Quantidade de elementos: " << lista.size() << endl;
}

void copiar_lista_sem_republicados(const vector<int>& lista_origem, vector<int>& lista_destino) {
    // copia os elementos da lista de origem para a lista de destino, sem repetições
    for (int i : lista_origem) {
        // verifica se o número já existe na lista de destino
        if (find(lista_destino.begin(), lista_destino.end(), i) == lista_destino.end()) {
            lista_destino.push_back(i); // adiciona o número à lista de destino
        }
    }
}




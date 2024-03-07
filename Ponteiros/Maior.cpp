#include <iostream>
using namespace std;

int main()
{
    int *v = NULL; // Ponteiro do vetor
    int *p = NULL; // Ponteiro para varrer o vetor
    int tam; // Define o tamanho do vetor
    int i; // Contador
    int maior = 0;

    // Entrada do tamanho
    cin >> tam;

    // Alocando memoria
    v = new int(tam);

    // Inicializa o ponteiro
    p = v;

    // Entrada dos valores
    for (i = 0; i < tam; i++)
    {
        cin >> *p;
        p++;
    }

    // Coloca o ponteiro para 0
    p = v;

    // Encontra o maior valor
    for (i = 0; i < tam; i++)
    {
        if (*p > maior)
            maior = *p;
        p++;    
    }

    // Exibe
    cout << maior << endl;


    // FIm
    return 0;
}
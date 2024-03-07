#include <iostream>
#include <cmath> // Para poder usar o round
using namespace std;

void quickSort(int vetor[], int i, int j)
{
    int trab, esq, dir, pivo;
    esq = i;
    dir = j;
    pivo = vetor[(int)round((esq + dir) / 2.0)];
    do
    {
        while (vetor[esq] < pivo)
            esq++;
        while (vetor[dir] > pivo)
            dir--;
        if (esq <= dir)
        {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;
            esq++;
            dir--;
        }
    } while (esq <= dir);
    if (dir - i >= 0)
        quickSort(vetor, i, dir);
    if (j - esq >= 0)
        quickSort(vetor, esq, j);
}

int main()
{
    int i; // Numero da primeira casa do vetor da esqueda
    int j; // Numero do vetor da ultima casa da direita
    int k; // Contador do for
    int num_vetor; // Numero a ser a tribuido no vetor 
    int vetor[100]; // Armazena os numero

    // Iniciei i = 0 para começar da primeira casa do vetor
    i = 0;
    // Iniciei j = 0 para receber o numero da ultima casa do vetor
    j = 0;

    // Entrada
    cin >> num_vetor;

    // Vetor recebe os numeros
    while (num_vetor != -1)
    {
        vetor[j] = num_vetor;
        j++;
        cin >> num_vetor;
    } 
    
    // Chama a funcao
    quickSort(vetor, i, j);

    // Exibe o vetor ordenado
    for (k = 1; k <= j; k++)
        cout << vetor[k] << " ";

    return 0;
}
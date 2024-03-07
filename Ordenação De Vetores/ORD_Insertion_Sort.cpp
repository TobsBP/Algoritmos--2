#include <iostream>
using namespace std;

void HeapSort(int vetor[], int tamanho)
{
    int i, elt, s, f, ivalue;
    // Fase de pre-processamento: cria heap inicial
    for (i = 1; i < tamanho; i++)
    {
        elt = vetor[i];
        // pqinsert(x,i,elt)
        s = i;
        f = (s - 1) / 2;
        while (s > 0 && vetor[f] < elt)
        {
            vetor[s] = vetor[f];
            s = f;
            f = (s - 1) / 2;
        }
        vetor[s] = elt;
    }
    // Fase de selecao: remove x[0] varias vezes, insere-o em sua
    // posicao correta e acerta o heap
    for (i = tamanho - 1; i > 0; i--)
    {
        ivalue = vetor[i];
        vetor[i] = vetor[0];
        f = 0;
        if (i == 1)
            s = -1;
        else
            s = 1;
        if (i > 2 && vetor[2] > vetor[1])
            s = 2;
        while (s >= 0 && ivalue < vetor[s])
        {
            vetor[f] = vetor[s];
            f = s;
            s = 2 * f + 1;
            if (s + 1 <= i - 1 && vetor[s] < vetor[s + 1])
                s = s + 1;
            if (s > i - 1)
                s = -1;
        }
        vetor[f] = ivalue;
    }
}

int main()
{
    int num_vetor; // Numero a ser a tribuido no vetor 
    int vetor[100]; // Armazena os numeros 
    int tamanho; // Armazena o tamanho do vetor
    int i; // Contador do for

    // Entrada do vetor
    cin >> num_vetor;

    tamanho = 0;
    while (num_vetor != 0)
    {   
        vetor[tamanho] = num_vetor;
        cin >> num_vetor;
        tamanho++;
    }
    
    // Chama a funcão
    HeapSort(vetor, tamanho);

    // Exibe o vetor de tras para frente
    for (i = tamanho -1; i >= 0; i--)
        cout << vetor[i] << " ";
    
    cout << endl;

    return 0;
}
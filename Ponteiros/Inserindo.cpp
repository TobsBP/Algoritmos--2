#include <iostream>
using namespace std;

int main()
{
    int *v; //Ponteiro para o vetor
    int tam; // Tamanho do vetor
    int i; // Contador

    cin >> tam; // Define o tamanho do vetor

    // Aloca memoria
    v = new int(tam);

    // Entrada no vetor
    for (i = 0; i < tam; i++)
        cin >> v[i];
    
    // Exibe
    for(i = 0; i < tam; i++)
        cout << v[i] << endl; 

    // Limpa memoria
    delete [] v;

    // Fim
    return 0;
}
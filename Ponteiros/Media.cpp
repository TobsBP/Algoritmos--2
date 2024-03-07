#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float media; // Recebe meida
    int *v; // Ponteiro para o vetor 
    int i; // contador
    int tam; // Tamanho do vetor
    int soma = 0; // Soma dos valores dentro do vetor

    // Entrada do tamanho do vetor
    cin >> tam;
    
    // Alocando memoria
    v = new int(tam);

    // Entrada e soma dos valores
    for(i = 0; i < tam; i++)
    {
        cin >> v[i];
        soma += v[i];
    }

    // Media
    media = float(soma) / tam;

    // Exibe
    cout << setprecision(2) << fixed;
    cout << media << endl;

    // Limpa memoria
    delete [] v;

    // Fim
    return 0;
}
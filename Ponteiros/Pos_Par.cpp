#include <iostream>
using namespace std;

int main()
{
    int *v = NULL; // Ponteiro do vetor;
    int tam; // Tamanho do vetor 
    int i;// COntador do  for
    int cont = 0; // COntador de num par e positivo

    // Entrada do tamnho
    cin >> tam;

    // Cira o vetor do tamnaho escolhido
    v = new int(tam);

    // Entrada dos valores no vetor
    for (i = 0; i < tam; i++)
        cin >> v[i];
    
    // Verifica as condicoes
    for (i = 0; i < tam; i++)
        if (v[i] % 2 == 0 && v[i] > 0)
            cont++;

    // Exibe
    cout << cont << endl;    

    delete [] v;

    return 0;
}
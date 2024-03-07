#include <iostream>
using namespace std;

int main()
{
    int i; // Contador do for
    int x; // Quantidade de num a ser digitado
    int num[100]; // Vetor para armazenar os numeros
    int test; // Numero a ser encontrado
    int achou; // Se foi encontrado assume um valor expecifico
    int pos; // Armazena a posicao do numero encontrado
    int rep; // Armazena a quantidade de num digitados

    // Entrada dos numero
    cin >> x;
    
    i = 0;
    rep = 0;
    
    // Loop que para quando for -1
    while (x != -1)
    {
        // O vetor assume o valor de x 
        num[i] = x;
        
        // Conta a quantidade de repeticao
        rep++;
        
        // Soma 1 para nao armazenar no mesmo vetor
        i++;
        
        // Entrada de outro valor do vetor
        cin >> x;
    }

    // Numero a ser encontrado
    cin >> test;

    pos = -1;
    achou = 0;
    
    // Condicao para encontrar o numero
    for (i = 0; i < rep; i++)
    {
        if (test == num[i])
        {
            achou = 1;
            pos = i;
            break;
        }
    }
    
    // Exibe
    if (achou == 1)
        cout << test << " encontrado na posicao " << pos << endl;
    else 
        cout << test << " nao encontrado" << endl; 
    
    return 0;
}

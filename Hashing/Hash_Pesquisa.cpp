#include <iostream>
using namespace std;

struct dado
{
    int k; // chave
    int status; // 0: vazio   1: ocupado
};

int hash_aux(int k, int m)
{
    int h = k % m;

    // Caso de num negativo soma m
    if (h < 0)
        h += m;
    return h;
};

int hash_1(int k, int i, int m)
{
    return (hash_aux(k,m) + i) % m;
};

int hash_insert(dado t[], int m, int k)
{
    int j;
    int i = 0;

    do
    {
        j = hash_1(k,i,m);
        if (t[j].status != 1)
        {
            t[j].k = k;
            t[j].status = 1;

            return j;
        } else 
            i = i + 1;
        
    } while (i != m);

    return -1;
    
};

int hash_search(dado t[], int m, int k)
{
    int i = 0;
    int j = 0;

    do
    {
        j = hash_1(k, i, m);
        if (t[j].k == k)
            return j;

        i = i + 1;

    } while (t[j].status != 0 and i < m);

    return -1;
}


int main()
{
    int k; // Chave 
    int m; // Tamanho da tabela hash
    int i;
    int j;
    int encontrar;
    dado t[20]; // Tabela hash

    cin >>  m >> k;

    // Defini os vetores vazios e ocupados
    for (i = 0; i < m; i++)
    {
        t[i].status = 0;
        t[i].k = -1;
    }
    
    // Entrada da chave na funcao
    while (k != 0)
    {
        hash_insert(t, m, k);
        cin >> k;
    }
    
    // Valor a ser encontrado
    cin >> k;
    
    // Chama a funcao para encontrar
    j = hash_search(t, m, k);
    
    // Exibe
    if(j != -1){
        cout << "Chave " << k << " encontrada na posicao " << j << endl;
    }else
        cout << "Chave " << k << " nao encontrada" << endl;

    return 0;
}
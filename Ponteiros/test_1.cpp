#include <iostream>
using namespace std;

int soma(int *v, int tam)
{
    int i;
    int s = 0;

    for (i = 0; i < tam; i++)
        s += v[i];
     
    return s;
}

//void soma(int a, int b, int *s)
//{
//    *s = a+b;
//};

int main()
{
    //int vetor[5] = {2,5,1,4,7};
    //int *p = NULL;

    //p = vetor;
    
    //cout << *p << endl;
    //p++;
    //cout << *p << endl;

////////////////////////////////////////////////////////////////////////////

    //int *v; // Ponteiro para o vetor, podendo ser usado dps como um vetor normal
    //int tam; // Tamanho desejado para o vetor

    //cin >> tam;

    //v= new int(tam); // Alocando memoria

    //for (int i = 0; i < tam; i++)
        //v[i] = i * i;
    
    //for (int i = 0; i < tam; i++)
        //cout << v[i] << endl;
    
    //delete [] v; // Liberando a memoria alocada

///////////////////////////////////////////////////////////////////////////////

    //int x,y,s1 = 0;

    //cin >> x >> y;

    //soma(x, y, &s1);

    // &s1 tem o endereço do S da func de soma

    //cout <<"Soma = " <<  s1 << endl;

///////////////////////////////////////////////////////////////////////////////

    int *v; // Ponteiro para o vetor, podendo ser usado dps como um vetor normal
    int tam; // Tamanho desejado para o vetor
    int s;

    cin >> tam;

    v= new int(tam); // Alocando memoria

    for (int i = 0; i < tam; i++)
        v[i] = i * i;
    
    for (int i = 0; i < tam; i++)
        cout << v[i] << endl;

    s = soma(v,tam);

    cout << "Soma = " << s << endl;

    return 0;
}
#include <iostream>
using namespace std;

struct dados
{
    int x;
    int y;
};

int main()
{
    dados *ponto = NULL;

    ponto = new dados;

    ponto ->x = 2; // Passa a localização da variavel
    ponto ->y = 3; // Passa a localização da variavel

    delete ponto;

    return 0;
}
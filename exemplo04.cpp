#include <iostream>
#include <string.h>

using namespace std;
void inverted(char nome[])
{
    //strlen retorna o tamanho da string
    int tam = strlen(nome);
    for (int i = tam - 1; i >= 0; i--)
    {
        cout << nome[i];
    }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

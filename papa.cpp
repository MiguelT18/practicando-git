#include <iostream>
using namespace std;
void ordenarrecursivo(int a[100], int b)
{
    if (b <= 1)
    {
        return;
    }
    for (int i = 0; i < b - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    ordenarrecursivo(a, b - 1);
}
void intrdoce(int a[100], int b)
{
    for (int i = 0; i < b; i++)
    {
        cout << "introduce el valor del vector en la posicion " << i << ":";
        cin >> a[i];
    }
}
void mostrar(int a[100], int b)
{
    cout << "el vector es ordenado es: ";
    for (int i = 0; i < b; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[100];
    int b;
    cout << "introduce de que tamaño sera el vector:";
    cin >> b;
    intrdoce(a, b);
    ordenarrecursivo(a, b);
    mostrar(a, b);
    return 0;
}
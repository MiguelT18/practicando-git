#include <iostream>
#include <cmath>

using namespace std;

// Declaración de la función que recibe la opción elegida y el valor de x
void funcion(int opt, double x);

int main()
{
    cout << "DERIVANDO MEDIANTE REGLA DE LA CADENA" << endl;
    int opt;
    cout << "Seleccione el caso (1 - 4):" << endl;
    cout << "1. Derivada de un producto" << endl;
    cout << "2. Derivada de un cociente" << endl;
    cout << "3. Derivada exponencial (ej. e^(2x))" << endl;
    cout << "4. Derivada logaritmica natural (ej. ln(3x))" << endl;
    
    // Lectura de la opción para el switch
    cin >> opt;

    double x;
    cout << "Ingrese el valor de x: ";
    cin >> x;

    // Llamada a la función con los parámetros correctos
    funcion(opt, x);

    return 0;
}

void funcion(int opt, double x) {
    double resultado = 0;
    
    switch(opt) {
        case 1: 
            // Derivada de un producto: f(x) = x^2 * sin(x)
            // Regla: f'(x)g(x) + f(x)g'(x) -> (2x)*sin(x) + (x^2)*cos(x)
            resultado = (2 * x) * sin(x) + (x * x) * cos(x);
            cout << "Resultado de la derivada del producto en x = " << x << " es: " << resultado << endl;
            break;
            
        case 2: 
            // Derivada de un cociente: f(x) = x / (x + 1)
            // Regla: [f'(x)g(x) - f(x)g'(x)] / [g(x)]^2 -> [1*(x + 1) - x*(1)] / (x + 1)^2
            resultado = (1 * (x + 1) - x * 1) / pow(x + 1, 2);
            cout << "Resultado de la derivada del cociente en x = " << x << " es: " << resultado << endl;
            break;
            
        case 3: 
            // Derivada exponencial con regla de la cadena: f(x) = e^(2x)
            // Regla: e^(u) * u' -> e^(2x) * 2
            resultado = exp(2 * x) * 2;
            cout << "Resultado de la derivada exponencial en x = " << x << " es: " << resultado << endl;
            break;
            
        case 4: 
            // Derivada logarítmica natural con regla de la cadena: f(x) = ln(3x)
            // Regla: (1/u) * u' -> (1 / (3x)) * 3 = 1 / x
            if (x > 0) {
                resultado = (1.0 / (3 * x)) * 3;
                cout << "Resultado de la derivada logaritmica en x = " << x << " es: " << resultado << endl;
            } else {
                cout << "Error: El valor de x debe ser mayor que 0 para el logaritmo natural." << endl;
            }
            break;
            
        default:
            cout << "Opcion no valida." << endl;
            break;
    }
}
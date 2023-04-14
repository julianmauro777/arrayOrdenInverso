#include <iostream>
#include<locale.h> 

using std::cin;
using std::cout;

int Input ()
{
    int numero {0};
    cin >> numero;
    return numero;
}

 int ElegirCantidad (int minimo, int maximo)
 {
    int cantidad {};
    do
    {
        cout << "Elija la cantidad de valores que va a ingresar: (de " << minimo << " a " << maximo << ")\n";
        cantidad = Input();
    }
    while ((cantidad > maximo) || (cantidad < minimo));
    return cantidad;
 }

void LlenarArray (int vec[], int cantidad)
{
    for (int i {0}; i < cantidad; i++)
    {
        cout << "Ingrese un número\n";
        vec[i] = Input();
    }
}

void MostrarArrayInverso (int vec[], int cantidad)
{
    cout << "Array en orden inverso\n";
    for(int i = cantidad - 1; i >= 0 ; i--)
    {
        std::cout << vec[i] << ' ';
    }
}


int main()
{
    system("COLOR 02");
    setlocale(LC_CTYPE, "Spanish");
    
    int cantidad {ElegirCantidad (1, 10)};
    
    int *array_dinamico {new int[cantidad] {}};

    LlenarArray (array_dinamico, cantidad);

    MostrarArrayInverso (array_dinamico, cantidad);

    delete [] array_dinamico;

    return 0;
}

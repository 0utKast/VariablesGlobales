#include <iostream>

// inicializaciones variables globales
int g_x; // sin inicializados explícito ( inicializada a cero de modo predeterminado)
int g_y{}; // inicializada a cero
int g_z{ 1 }; // inicializada con un valor

// Las variables globales declaradas fuera de una función son variables globales
int g_v{}; // variable global v_g

void hacerAlgo()
{
    // variables globales pueden ser vistas y usadas en cualquier parte del archivo
    g_v = 3;
    std::cout << g_v << '\n';
}

int main()
{
    hacerAlgo();
    std::cout << g_v << '\n';

    // variables globales pueden ser vistas y usadas en cualquier parte del archivo
    g_v = 5;
    std::cout << g_v << '\n';

    return 0;
}
// v_g sale de alcance aquí
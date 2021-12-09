#include <iostream>

// Las variables globales declaradas fuera de una función son variables globales
int v_g{}; // variable global v_g

void hacerAlgo()
{
    // variables globales pueden ser vistas y usadas en cualquier parte del archivo
    v_g = 3;
    std::cout << v_g << '\n';
}

int main()
{
    hacerAlgo();
    std::cout << v_g << '\n';

    // variables globales pueden ser vistas y usadas en cualquier parte del archivo
    v_g = 5;
    std::cout << v_g << '\n';

    return 0;
}
// v_g sale de alcance aquí
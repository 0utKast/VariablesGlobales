
//resumen rápido de variables globales
// variables globales no constantes
int g_x;                 // define variable global no inicializada (inicializada a cero de modo predeterminado)
int g_x{};              // define variable global explícitamente inicializada a cero
int g_x{ 1 };           // define variable global inicializada explícitamente

// Variables globales const
const int g_y;           // error: variables const deben inicializarse
const int g_y{ 2 };     // define variable global constante inicializada

// Constexpr global variables
constexpr int g_y;       // error: variables constexpr deben inicializarse
constexpr int g_y{ 3 }; // define variable global constexpr inicializada



















#include <iostream>

const int g_x; // error: variables constantes deben ser inicializadas
constexpr int g_w; // error: variables constexpr deben ser inicializadas

const int g_y{ 1 };  // variable global const g_y, inicializada con un valor
constexpr int g_z{ 2 }; // variable global constexpr g_z, inicializada con un valor

void hacerAlgo()
{
    // variables globales pueden ser vistas y usadas en cualquier lugar del archivo
    std::cout << g_y << '\n';
    std::cout << g_z << '\n';
}

int main()
{
    hacerAlgo();

    // variables globales pueden ser vistas y usadas en cualquier lugar del archivo
    std::cout << g_y << '\n';
    std::cout << g_z << '\n';

    return 0;
}
// g_y y g_z  salen de alcance aquí




























/*#include <iostream>

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
// v_g sale de alcance aquí*/












/*// inicializaciones variables globales no constantes
int g_x; // sin inicializador explícito ( inicializada a cero de modo predeterminado)
int g_y{}; // inicializada a cero
int g_z{ 1 }; // inicializada con un valor*/
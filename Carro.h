#include <iostream>

using namespace std;


class Carro{
    
    private:
        float kilometraje;
        float nivelGasolina;
        float autonomia= 38.5; // kilometros por litro
        float capacidad = 50;
        char estado;   // 0: buen estado, 1: necesita revision, 2: dañado
    
    public:
        Carro();
        void Recorrer(float distancia);
        void Informacion();
        float Tanquear(float gasolina);
    
};
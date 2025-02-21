#include "./Carro.h"

void Carro::Informacion(){
    
    cout << "Kilometraje: " << kilometraje << endl;
    cout << "Nivel de gasolina: " << nivelGasolina << " litros" << endl;
    
}

Carro::Carro(){
    
    kilometraje = 0;
    nivelGasolina = 0;
    estado = '0';
    
}

void Carro::Recorrer(float distancia){
    
    float distanciaReal = min(nivelGasolina*autonomia, distancia);
    
    kilometraje = kilometraje + distanciaReal;
    nivelGasolina = nivelGasolina - (distanciaReal/autonomia);
    
}

float Carro::Tanquear(float gasolina){
    
    
    float faltante = capacidad - nivelGasolina;
    float sobrante = gasolina - faltante;
    
    if(sobrante >= 0){
        
        nivelGasolina = capacidad;
        return sobrante;
        
    }else{
        
        nivelGasolina = nivelGasolina + gasolina; 
        return 0;
        
    }
    
}

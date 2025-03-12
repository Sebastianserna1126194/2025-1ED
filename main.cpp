#include "./Tecnico.h"
#include "./AutoServicio.h"

int main(){
    
    Carro goku;
    Tecnico vegeta;
    
    Carro* ptr = &goku;
    
    vegeta.Tanquear(ptr,20);
    
    goku.Informacion();
    
    //cout << "sobrante: " << sobrante << endl;
    
    AutoServicio maquina;
    maquina.ListarPrecios();
    
    return 0;

    ///MANDE LA MODIFICACIÓN DEL REPOSITORIO
	//MODIFICACION DESDE MI PC

}

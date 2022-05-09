#include "envio.h"
#include "envioFedex.h"
#include "envioPostal.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<Envio *> arregloEnvios;

    EnvioFedex *fedex1 = new EnvioFedex(5.33, 160);
    arregloEnvios.push_back(fedex1);

    EnvioPostal *postal1 = new EnvioPostal(14.25, 1);
    arregloEnvios.push_back(postal1);

    float total = 0;

    for (Envio *env : arregloEnvios)
    {
        total += env->CalcularEnvio();
    }

    cout << "Total de los envios: " << total << endl;

    delete fedex1;
    delete postal1;
}
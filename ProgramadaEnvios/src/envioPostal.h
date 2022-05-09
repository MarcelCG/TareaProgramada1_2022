#ifndef ENVIOPOSTAL_H
#define ENVIOPOSTAL_H

#include "envio.h"

using namespace std;

class EnvioPostal : public Envio
{

    float kilogramos;
    int tipoClase;

public:
    EnvioPostal(float kilogramos, int tipoClase);

    virtual float CalcularEnvio();
};

#endif
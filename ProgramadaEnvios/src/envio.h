#ifndef ENVIO_H
#define ENVIO_H

#include <string>

using namespace std;

class Envio
{
protected:
    float valorEnvio;

public:
    virtual float CalcularEnvio() = 0;
};

#endif
#include "envioFedex.h"

using namespace std;

EnvioFedex::EnvioFedex(float distancia, float peso)
{
    this->distancia = distancia;
    this->peso = peso;
}

float EnvioFedex::CalcularEnvio()
{
    float total = this->costoBase;
    if (distancia > 500)
    {
        total = total + 15;
    }
    if (peso > 10)
    {
        total = total + 10;
    }
    return total;
}
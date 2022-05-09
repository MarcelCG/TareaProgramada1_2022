#include "envioPostal.h"

using namespace std;

EnvioPostal::EnvioPostal(float kilogramos, int tipoClase)
{
    this->kilogramos = kilogramos;
    this->tipoClase = tipoClase;
}
float EnvioPostal::CalcularEnvio()
{
    if (kilogramos >= 0 && kilogramos <= 3)
    {
        if (tipoClase == 1)
        {
            return this->kilogramos * 0.300;
        }
        if (tipoClase == 2)
        {
            return this->kilogramos * 0.0280;
        }
        if (tipoClase == 3)
        {
            return this->kilogramos * 0.0120;
        }
    }
    else
    {
        if (kilogramos >= 4 && kilogramos <= 8)
        {
            if (tipoClase == 1)
            {
                return this->kilogramos * 0.450;
            }
            if (tipoClase == 2)
            {
                return this->kilogramos * 0.0530;
            }
            if (tipoClase == 3)
            {
                return this->kilogramos * 0.0120;
            }
        }
        else
        {
            if (kilogramos > 9)
            {
                if (tipoClase == 1)
                {
                    return this->kilogramos * 0.600;
                }
                if (tipoClase == 2)
                {
                    return this->kilogramos * 0.0750;
                }
                if (tipoClase == 3)
                {
                    return this->kilogramos * 0.0120;
                }
            }
        }
    }
}

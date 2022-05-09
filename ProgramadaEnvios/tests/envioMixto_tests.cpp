#include <gtest/gtest.h>
#include <vector>
#include "../src/envioFedex.h"
#include "../src/envioPostal.h"

namespace
{

    TEST(Envio_Mixto, Test_0_Retorna_60)
    {
        vector<Envio *> arregloEnvios;
        EnvioFedex *envioFedex = new EnvioFedex(600, 30);
        arregloEnvios.push_back(envioFedex);

        // float esperada = 60;
        EnvioPostal *envioPostal = new EnvioPostal(4, 2);
        arregloEnvios.push_back(envioPostal);

        float actual = 0;

        for (Envio *env : arregloEnvios)
        {
            actual += env->CalcularEnvio();
        }

        float esperada = 60.212;

        EXPECT_EQ(esperada, actual);
    }
}
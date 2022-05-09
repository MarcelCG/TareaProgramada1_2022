#include <gtest/gtest.h>
#include "../src/envioFedex.h"

namespace
{
    TEST(Envio_Fedex_Test, Test_0_Retorna_35)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioFedex *envioFedex = new EnvioFedex(1, 2);

        // Act - ejecute la operación
        float actual = envioFedex->CalcularEnvio();
        float esperada = 35;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Envio_Fedex_Test, Test_1_Retorna_50)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioFedex *envioFedex = new EnvioFedex(520, 8);

        // Act - ejecute la operación
        float actual = envioFedex->CalcularEnvio();
        float esperada = 50;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Fedex_Test, Test_2_Retorna_45)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioFedex *envioFedex = new EnvioFedex(300, 20);

        // Act - ejecute la operación
        float actual = envioFedex->CalcularEnvio();
        float esperada = 45;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Fedex_Test, Test_3_Retorna_60)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioFedex *envioFedex = new EnvioFedex(600, 30);

        // Act - ejecute la operación
        float actual = envioFedex->CalcularEnvio();
        float esperada = 60;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Fedex_Test, Test_4_Retorna_35)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioFedex *envioFedex = new EnvioFedex(0, 0);

        // Act - ejecute la operación
        float actual = envioFedex->CalcularEnvio();
        float esperada = 35;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Fedex_Test, Test_5_Retorna_35)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioFedex *envioFedex = new EnvioFedex(-40, -35);

        // Act - ejecute la operación
        float actual = envioFedex->CalcularEnvio();
        float esperada = 35;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}
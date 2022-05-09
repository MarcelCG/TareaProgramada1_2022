#include <gtest/gtest.h>
#include "../src/envioPostal.h"

namespace
{
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_1)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(0, 1);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 0;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_2)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(1, 1);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 0.300;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_3)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(2, 1);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 0.600;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_4)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(3, 1);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 0.900;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_5)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(4, 2);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 0.212;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_6)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(5, 2);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 0.265;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_7)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(6, 2);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 0.318;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_8)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(7, 2);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 0.371;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_9)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(8, 2);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 0.424;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_10)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(15, 1);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 9;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_11)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(15, 2);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 1.125;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_12)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(15, 3);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 0.18;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_13)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(8, 1);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 3.6;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_14)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(8, 3);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 0.096;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_15)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(3, 2);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 0.084;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
    TEST(Envio_Postal_Test, Test_MultiplicacionDosFlotantes_16)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPostal *envioPostal = new EnvioPostal(3, 3);

        // Act - ejecute la operación
        float actual = envioPostal->CalcularEnvio();
        float esperada = 0.036;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}
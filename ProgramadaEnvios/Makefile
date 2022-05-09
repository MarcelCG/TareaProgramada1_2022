FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/envio.cpp -o bin/envio.o
	g++ $(FLAGS) src/envioPostal.cpp -o bin/envioPostal.o
	g++ $(FLAGS) src/envioFedex.cpp -o bin/envioFedex.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/abstraccion bin/envioPostal.o bin/envioFedex.o bin/main.o bin/envio.o
	
test:
	mkdir -p bin
	g++ $(FLAGS) tests/envioFedex_tests.cpp -o bin/envioFedex_tests.o
	g++ $(FLAGS) tests/envioPostal_tests.cpp -o bin/envioPostal_tests.o
	g++ $(FLAGS) src/envioFedex.cpp -o bin/envioFedex.o
	g++ $(FLAGS) src/envioPostal.cpp -o bin/envioPostal.o
	g++ $(FLAGS) tests/envioMixto_tests.cpp -o bin/envioMixto_tests.o

	g++ -g -o bin/tests bin/envioFedex_tests.o bin/envioFedex.o bin/envioPostal_tests.o bin/envioPostal.o bin/envioMixto_tests.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -g

all: main teste

main: main.o lista.o
	$(CXX) $(CXXFLAGS) -o main main.o lista.o

teste: teste.o lista.o
	$(CXX) $(CXXFLAGS) -o teste teste.o lista.o

# Meta para compilar e rodar os testes
test: teste
	./teste

clean:
	rm -f *.o main teste

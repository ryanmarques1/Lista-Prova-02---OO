all: formabasica.o circulo.o retangulo.o main.o
	g++ formabasica.o circulo.o retangulo.o main.o -o figura.exe
formabasica.o: formabasica.h formabasica.cpp
	g++ -c formabasica.cpp -o formabasica.o
circulo.o: formabasica.h circulo.h circulo.cpp
	g++ -c circulo.cpp -o circulo.o
retangulo.o: formabasica.h retangulo.h retangulo.cpp
	g++ -c retangulo.cpp -o retangulo.o
main.o: formabasica.h circulo.h retangulo.h main.cpp
	g++ -c main.cpp -o main.o
clear:
	erase *.o *.exe
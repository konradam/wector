hello: main_wektor.o 
	g++ main_wektor.o -o hello

main_wektor.o: main_wektor.cpp
	g++ -c main_wektor.cpp -o main_wektor.o


hepsi: nesneler derle calistir
nesneler:
	g++ -I ./include/ -o ./lib/Dugum.o -c ./src/Dugum.cpp
	g++ -I ./include/ -o ./lib/Liste.o -c ./src/Liste.cpp
derle:	
	g++ -I ./include/ -o ./bin/Test ./lib/Dugum.o ./lib/Liste.o ./src/Test.cpp
calistir:
	./bin/Test
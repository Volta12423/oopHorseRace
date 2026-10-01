horseRace: main.o horse.o race.o
	g++ -g main.cpp -o horseRace
main.o: main.cpp horse.h race.h
	g++ -g -c main.cpp
horse.o: horse.h horse.cpp
	g++ -g -c
clean:
	rm horseRace
	rm *.o
run: horseRace
	./horseRace

debug: horseRace
	gdb horseRace

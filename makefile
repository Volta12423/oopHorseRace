horseRace: main.cpp
	g++ -g main.cpp -o horseRace
clean:
	rs horseRace

run: horseRace
	./horseRace

debug: horseRace
	gdb horseRace

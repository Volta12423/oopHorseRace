#include <iostream>
#include "horse.h"
//#include "race.h"

void testHorse();

int main(){
	std::cout << "OOP Horse Race!!!" << std::endl;
	testHorse();
	return 0;
}

void testHorse(){
	Horse h;
	h.init(1, 15);
	bool keepGoing = true;
	while(keepGoing){
		h.advance();
		h.printLane();
		if(h.isWinner()){
			keepGoing = false;
		}
	}//end while
}

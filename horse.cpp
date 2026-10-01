#include <iostream>
#include <random>
#include "horse.h"

Horse::Horse(){
	Horse::position = 0;
	Horse::index = 0;
	Horse::trackLength = trackLength;
}
bool Horse::isWinner(){
	bool winner = false;
	if(Horse::position >= Horse::trackLength){
		winner = true;
	}
	return winner;
}

void Horse::advance(){
	int coin = rand() % 2;
	if(coin == 2){
		Horse::position += coin;
	}
}

void Horse::printLane(){
	for(int i=0;i<Horse::trackLength;i++){
		if(i == position){
			std::cout << Horse::index;
		}else{
			std::cout << ".";
		}
	}
	std::cout << std::endl;
}


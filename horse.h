//horse.h

#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS
class Horse{
	private:
		int position;
		int index;
		int trackLength;
	public:
		Horse();
		void init(int index, int trackLength);
		void advance();
		bool isWinner();
		void printLane();
}; //end class horse

#endif

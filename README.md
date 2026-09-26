#horseRaceOOP

##UML

classDiagram
class Horse{
    position:int
    index:int
    trackLength:int
    Horse()
    inirt(int index, int trackLength)
    advance()
    printLane()
    isWinner() bool
}


class Race{
    TRACK_LENGTH:int
    NUM_HORSES:int
    Horse Horses[NUM_HORSE]
    Race()
    advance()
}

Race --> Horse

##Race()
'''
in header
    set constant static in NUM_HORSES to 5
    set constant int TRACK_LENGTH to 15
in constructor
    go through each horse
    initialize at horse by calling its init
'''

#Race.start()
'''
set bool keepgoing to true
while keepGoing:
    for each horse:
        advance that horse
        print horse lane
        if that horse wins:
            set keepGoing to false
'''

##Horse::Horse()
'''
set position to 0
set index to 0
set track length to 15
'''
##Horse::init(int index, int trackLength){
'''
        my index = index
        my trackLength = trackLength
        my position = 0
'''

    ##Horse::advance
'''
        roll a random 0-1 int called coin
        add coin to position
'''

    ##void Horse::printLane()
'''
    for pos from 0 to trackLength:
        if pos == my position:
            print index
        else:
            print "."
    print newline
'''
##bool Horse::isWinner
'''
    bool result = false
    if position >= track:
        result = true
        print some winning commentary
    print result
'''
}

a.out: thePuzzlemasters.cc score.cc
	g++ -std=c++11 thePuzzlemasters.cc score.cc

clean:
	rm -f a.out core *.o

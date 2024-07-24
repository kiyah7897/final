pyramid: main.o threeDShape.o pyramid.o
	g++ -o pyramid main.o threeDShape.o pyramiad.o

main.o: threeDShape.h pyramid.h main.cpp
	g++ -c main.cpp

threeDShape.o: threeDShape.h threeDShape.cpp
	g++ -c threeDShape.cpp
pyramid.o: pyrmiad.h pyramid.cpp
	g++ c pyramid.cpp

clean:
	rm *.o pyramid

pyramid: main.o threeDShape.o
	g++ -o pyramid main.o threeDShape.o

main.o: threeDShape.h main.cpp
	g++ -c main.cpp

threeDShape.o: threeDShape.h threeDShape.cpp
	g++ -c threeDShape.cpp

clean:
	rm *.o pyramid
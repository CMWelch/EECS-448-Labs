Lab7: main.o Test.o

	g++ -Wall -std=c++11 -g main.o Test.o -o Lab7

main.o: main.cpp Test.cpp LinkedList.hpp

	g++ -Wall -std=c++11 -g -c main.cpp

Test.o: Test.h Test.cpp LinkedList.h LinkedList.hpp

	g++ -Wall -std=c++11 -g -c Test.cpp

clean:

	rm *.o Lab7

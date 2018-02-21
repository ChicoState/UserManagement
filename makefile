CXX = g++
CXXFLAGS = -c -g -std=c++11 -Wall -W -Werror -pedantic
LDFLAGS =

PROG = users

$(PROG) : User.o main.o
	$(CXX) $(LDFLAGS) User.o main.o -o $(PROG)

main.o : main.cpp
	$(CXX) $(CXXFLAGS) main.cpp

User.o : User.cpp User.h
	$(CXX) $(CXXFLAGS) User.cpp

clean :
	rm -f core $(PROG) *.o

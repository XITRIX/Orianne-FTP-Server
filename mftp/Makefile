SOURCES=$(wildcard ftp_*.cpp) orianne.cpp
OBJECTS=$(SOURCES:.cpp=.o)
CC=clang

orianne: $(OBJECTS)
	$(CC) $(OBJECTS) -o orianne -lstdc++ -lboost_system -lboost_filesystem -lboost_thread -lpthread

%.o:%.cpp
	$(CC) -c $< -o $@

clean:
	rm *.o


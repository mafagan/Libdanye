GCC = g++
CFLAGS = -O2 -Wall -g
LIBS = -lpthread
OBJS = DataBase.o EventManager.o util.o Logging.o main.o

danye: $(OBJS)
	$(GCC) $(CFLAGS) $(OBJS) -o $@

main.o: main.cpp
	$(GCC) $(CFLAGS) -c $< -o $@

util.o: util.cpp util.hpp
	$(GCC) $(CFLAGS) -c $< -o $@

Logging.o: Logging.cpp Logging.hpp
	$(GCC) $(CFLAGS) -c $< -o $@

EventManager.o: EventManager.cpp EventManager.hpp
	$(GCC) $(CFLAGS) -c $< -o $@

DataBase.o: DataBase.cpp DataBase.hpp
	$(GCC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -rf $(OBJS) danye core

GCC = g++
CFLAGS = -Wall -g
LIBS = -lpthread
OBJS = util.o Logging.o main.o

danye: $(OBJS)
	$(GCC) $(CFLAGS) $(OBJS) -o $@

main.o: main.cpp
	$(GCC) $(CFLAGS) -c $< -o $@

util.o: util.cpp util.h
	$(GCC) $(CFLAGS) -c $< -o $@

Logging.o: Logging.cpp Logging.h
	$(GCC) $(CFLAGS) -c $< -o $@


.PHONY: clean

clean:
	rm -rf $(OBJS) danye core

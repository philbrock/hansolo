OBJS = player.o main.o engine.o position.o tile.o map.o floor.o wall.o map_parser.o path.o empty_tile.o map_list.o stairs.o door.o
CFLAGS = -Wall -c -g
LFLAGS = -Wall -g -lncurses
CC = g++
EXECUTABLE = rogue

run: all
	./$(EXECUTABLE)

all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(EXECUTABLE)

$(OBJS): %.o: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm *.o
	rm $(EXECUTABLE)


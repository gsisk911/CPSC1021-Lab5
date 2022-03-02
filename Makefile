CC      = g++
CFLAGS  = -Wall

INCLUDE = -iquote Include
LDFLAGS = -L. \-L/usr/lib
LDLIBS  = \-lc -lm

STANDARD = -std=c++2a
PROGRAM = ParkingPermits.out

SRCDIR = src
OBJDIR = obj

SRC_FILES = $(wildcard $(SRCDIR)/*.cpp)
OBJ_FILES = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRC_FILES))


All: Object Compile



Compile: $(PROGRAM)
$(PROGRAM): $(OBJ_FILES)
		$(CC) -o $@ $^ $(LDFLAGS) $(LDLIBS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp 
		$(CC) $(STANDARD) $(INCLUDE) $(CFLAGS) -c -o $@ $^



clean:
		rm -rf $(OBJDIR)
		rm -f $(PROGRAM)

run:
	./$(PROGRAM)

Object:
	mkdir -p $(OBJDIR)


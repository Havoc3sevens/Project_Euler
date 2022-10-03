OBJS1 = main.o

PROG1 = run

CPP = g++ -fopenmp

CPPFLAGS = -std=c++11

all: $(PROG1)

$(PROG1): $(OBJS1)
	$(CPP) -o $@ $(OBJS1) 

clean:
	rm -f $(PROG1) *.o *.dat *.mod

.SUFFIXES: $(SUFFIXES) .cpp

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<
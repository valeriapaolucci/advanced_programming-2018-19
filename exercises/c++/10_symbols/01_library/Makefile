CXX = c++

SRC = source/hello.cc
OBJ = $(SRC:.cc=.o)

all: libhello.so

libhello.so: $(OBJ)
	$(CXX) -shared -o $@ $^

%.o:%.cc
	$(CXX) -fpic -o $@ -c $< -Iinclude

source/hello.o: include/hello.h

clean:
	@rm -f *~ */*~ libhello.so source/*.o

.PHONY: clean all

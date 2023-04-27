CXXFLAGS=-g3

# Build executable
main: main.o search.o
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compile source files
%.o: %.c

# Remove objects
.PHONY: clean
clean:
	rm *.o

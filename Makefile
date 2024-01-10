testComplex: testComplex.o Complex.o
	g++ -g $^ -o $@

Complex.o: Complex.cpp Complex.h
	g++ -g -c -Wall -pedantic $< -o $@

testComplex.o: testComplex.cpp Complex.h
	g++ -g -c -Wall -pedantic $< -o $@

.PHONY: clean

clean:
	-rm Complex.o testComplex.o testComplex
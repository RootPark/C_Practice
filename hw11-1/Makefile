hw1 = my_vector
hw2 = my_string
FLAG= -std=c++11
all: $(hw1).o $(hw1)_main.o $(hw2).o $(hw2)_main.o 
	g++ $(FLAG) -o $(hw1) $(hw1).o $(hw1)_main.o
	g++ $(FLAG) -o $(hw2) $(hw2).o $(hw2)_main.o 
$(hw1).o: $(hw1).cc
	g++ $(FLAG) -c -o $(hw1).o $(hw1).cc

$(hw1)_main.o: $(hw1)_main.cc
	g++ $(FLAG) -c -o $(hw1)_main.o $(hw1)_main.cc

$(hw2).o: $(hw2).cc
	g++ $(FLAG) -c -o $(hw2).o $(hw2).cc


$(hw2)_main.o: $(hw2)_main.cc
	g++ $(FLAG) -c -o $(hw2)_main.o $(hw2)_main.cc




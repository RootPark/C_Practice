hw1 = class_function
hw2 = shapes
hw3 = dynamic_cast_main
hw4 = cast_quiz

FLAG=-std=c++11

all: $(hw1).o $(hw1)_main.o $(hw2).o $(hw2)_main.o $(hw3).o $(hw4).o
		g++ $(FLAG) -o $(hw1) $(hw1).o $(hw1)_main.o 
		g++ $(FLAG) -o $(hw2) $(hw2).o $(hw2)_main.o
		g++ $(FLAG) -o $(hw3) $(hw3).o
		g++ $(FLAG) -o $(hw4) $(hw4).o
		
$(hw1).o: $(hw1).cc
		g++ $(FLAG) -c -o $(hw1).o $(hw1).cc
$(hw1)_main.o: $(hw1)_main.cc
		g++ $(FLAG) -c -o $(hw1)_main.o $(hw1)_main.cc
$(hw2).o: $(hw2).cc
		g++ $(FLAG) -c -o $(hw2).o $(hw2).cc
$(hw2)_main.o: $(hw2)_main.cc
		g++ $(FLAG) -c -o $(hw2)_main.o $(hw2)_main.cc
$(hw3).o: $(hw3).cc
		g++ $(FLAG) -c -o $(hw3).o $(hw3).cc
$(hw4).o: $(hw4).cc
		g++ $(FLAG) -c -o $(hw4).o $(hw4).cc

clean:
		rm $(hw1) $(hw1).o $(hw1)_main.o $(hw2) $(hw2).o $(hw2)_main.o $(hw3) $(hw3).o $(hw4) $(hw4).o
submit:
		git add .
		git commit -m "hw10-1 complete"
		git push origin master


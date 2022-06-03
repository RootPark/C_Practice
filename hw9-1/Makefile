hw1 = classes
hw2 = print_info
hw3 = print_member
FLAG=-std=c++11
all: $(hw1).o $(hw1)_main.o $(hw2).o $(hw2)_main.o $(hw3).o $(hw3)_main.o
	g++ $(FLAG) -o $(hw1) $(hw1).o $(hw1)_main.o 
	g++ $(FLAG) -o $(hw2) $(hw2).o $(hw2)_main.o
	g++ $(FLAG) -o $(hw3) $(hw3).o $(hw3)_main.o

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
$(hw3)_main.o: $(hw3)_main.cc
	g++ $(FLAG) -c -o $(hw3)_main.o $(hw3)_main.cc
	
clean:
	rm $(hw1) $(hw1).o $(hw1)_main.o $(hw2) $(hw2).o $(hw2)_main.o $(hw3) $(hw3).o $(hw3)_main.o
submit:
	git add .
	git commit -m "hw9-1 complete"
	git push origin master

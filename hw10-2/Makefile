hw1 = print_shape
hw2 = clock
FLAG= -std=c++11
all: $(hw1).o $(hw1)_main.o $(hw2).o $(hw2)_main.o $(hw2)_time.o
	g++ $(FLAG) -o $(hw1) $(hw1).o $(hw1)_main.o 
	g++ $(FLAG) -o $(hw2) $(hw2).o $(hw2)_main.o $(hw2)_time.o
$(hw1).o: $(hw1).cc
	g++ $(FLAG) -c -o $(hw1).o $(hw1).cc

$(hw1)_main.o: $(hw1)_main.cc
	g++ $(FLAG) -c -o $(hw1)_main.o $(hw1)_main.cc

$(hw2).o: $(hw2).cc
	g++ $(FLAG) -c -o $(hw2).o $(hw2).cc


$(hw2)_main.o: $(hw2)_main.cc
	g++ $(FLAG) -c -o $(hw2)_main.o $(hw2)_main.cc

$(hw2)_time.o: $(hw2)_time.cc
	g++ -c -o $(hw2)_time.o $(hw2)_time.cc

clean:
	rm $(hw1) $(hw1).o $(hw1)_main.o $(hw2) $(hw2).o $(hw2)_main.o $(hw2)_time.o
submit:
	git add .
	git commit -m "hw10-2 complete"
	git push origin master

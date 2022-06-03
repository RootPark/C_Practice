hw1 = myswap
hw2 = my_vector
FLAG= -std=c++11
all: $(hw1).o $(hw2)_main.o 
	g++ $(FLAG) -o $(hw1) $(hw1).o 
	g++ $(FLAG) -o $(hw2) $(hw2)_main.o 
$(hw1).o: $(hw1).cc
	g++ $(FLAG) -c -o $(hw1).o $(hw1).cc

$(hw2)_main.o: $(hw2)_main.cc
	g++ $(FLAG) -c -o $(hw2)_main.o $(hw2)_main.cc


clean:
	rm $(hw1) $(hw1).o $(hw1) $(hw2)_main.o

submit:
	git add .
	git commit -m"hw12-1 complete"
	git push origin master


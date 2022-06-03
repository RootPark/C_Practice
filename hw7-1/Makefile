hw1 = sorted_array
hw2 = integer_set
all: $(hw1).o $(hw1)_main.o $(hw2).o $(hw2)_main.o
	g++ -o $(hw1) $(hw1).o $(hw1)_main.o 
	g++ -o $(hw2) $(hw2).o $(hw2)_main.o
	
$(hw1).o: $(hw1).cc
	g++ -c -o $(hw1).o $(hw1).cc
$(hw1)_main.o: $(hw1)_main.cc
	g++ -c -o $(hw1)_main.o $(hw1)_main.cc
$(hw2).o: $(hw2).cc
	g++ -c -o $(hw2).o $(hw2).cc
$(hw2)_main.o: $(hw2)_main.cc
	g++ -c -o $(hw2)_main.o $(hw2)_main.cc
clean:
	rm $(hw1) $(hw1).o $(hw1)_main.o $(hw2) $(hw2).o $(hw2)_main.o
submit:
	git add .
	git commit -m "hw7-1 complete"
	git push origin master


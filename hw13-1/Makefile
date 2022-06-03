hw1=bad_allocation
hw2=object_copy
hw3=chained_handler

all: $(hw1).o $(hw2).o $(hw3).o
	g++ -o $(hw1) $(hw1).o
	g++ -o $(hw2) $(hw2).o
	g++ -o $(hw3) $(hw3).o
$(hw1).o: $(hw1).cc
	g++ -c -o $(hw1).o $(hw1).cc
$(hw2).o: $(hw2).cc
	g++ -c -o $(hw2).o $(hw2).cc
$(hw3).o: $(hw3).cc
	g++ -c -o $(hw3).o $(hw3).cc
clean:
	rm $(hw1) $(hw1).o $(hw2) $(hw2).o $(hw3) $(hw3).o

Submit: $(hw1).cc $(hw2).cc Makefile
	git add $(hw1).cc $(hw2).cc $(hw3).cc Makefile
	git commit -m “hw13-1 complete”
	git push origin master

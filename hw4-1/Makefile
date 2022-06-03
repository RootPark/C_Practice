hw1=string
hw2=function_overloading
hw3=dynamic_array
hw4=circle_main
hw5=circle

all: $(hw1).o $(hw2).o $(hw3).o $(hw4).o $(hw5).o
	g++ -o $(hw1) $(hw1).o
	g++ -o $(hw2) $(hw2).o
	g++ -o $(hw3) $(hw3).o
	g++ -o $(hw5) $(hw4).o $(hw5).o
$(hw1).o: $(hw1).cc
	g++ -c -o $(hw1).o $(hw1).cc
$(hw2).o: $(hw2).cc
	g++ -c -o $(hw2).o $(hw2).cc
$(hw3).o: $(hw3).cc
	g++ -c -o $(hw3).o $(hw3).cc
$(hw4).o: $(hw4).cc
	g++ -c -o $(hw4).o $(hw4).cc
$(hw5).o: $(hw5).cc
	g++ -c -o $(hw5).o $(hw5).cc
clean:
	rm $(hw1) $(hw1).o $(hw2) $(hw2).o $(hw3) $(hw3).o $(hw4) $(hw4).o $(hw5) $(hw5).o
Submit: $(hw1).cc $(hw2).cc $(hw3).cc $(hw4).cc $(hw5).cc Makefile
	git add $(hw1).cc $(hw2).cc $(hw3).cc $(hw4).cc $(hw5).cc Makefile
	git commit -m “hw4-1 complete”
	git push origin master


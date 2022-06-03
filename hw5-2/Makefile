hw4=magic_square
hw5=main

all: $(hw4).o $(hw5).o
	g++ -o $(hw5) $(hw4).o $(hw5).o
$(hw4).o: $(hw4).cc
	g++ -c -o $(hw4).o $(hw4).cc
$(hw5).o: $(hw5).cc
	g++ -c -o $(hw5).o $(hw5).cc
clean:
	rm $(hw4) $(hw4).o $(hw5) $(hw5).o
Submit: $(hw4).cc $(hw5).cc Makefile
	git add $(hw4).cc $(hw5).cc Makefile
	git commit -m “hw5-2 complete”
	git push origin master


hw1=touch_points
hw2=cal_complex

all: $(hw1).o $(hw2).o
	g++ -o $(hw1) $(hw1).o
	g++ -o $(hw2) $(hw2).o
$(hw1).o: $(hw1).cc
	g++ -c -o $(hw1).o $(hw1).cc
$(hw2).o: $(hw2).cc
	g++ -c -o $(hw2).o $(hw2).cc
clean:
	rm $(hw1) $(hw1).o $(hw2) $(hw2).o

Submit: $(hw1).cc $(hw2).cc Makefile
	git add $(hw1).cc $(hw2).cc Makefile
	git commit -m “hw3-3 complete”
	git push origin master


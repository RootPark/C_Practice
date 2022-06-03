hw2 =print_point
hw1 =score_graph
hw3 =array_2dim
all:$(hw1).o $(hw2).o $(hw3).o
	g++ -o $(hw1) $(hw1).o
	g++ -o $(hw2) $(hw2).o
	g++ -o $(hw3) $(hw3).o

$(hw1).o:$(hw1).cc
	g++ -c -o $(hw1).o $(hw1).cc
$(hw2).o:$(hw2).cc
	g++ -c -o $(hw2).o $(hw2).cc
$(hw3).o:$(hw3).cc
	g++ -c -o $(hw3).o $(hw3).cc

clean:
	rm $(hw1) $(hw1).o $(hw2) $(hw2).o $(hw3) $(hw3).o

submit: $(hw1).cc $(hw2).cc $(hw3).cc Makefile
	git add$(hw1).cc $(hw2).cc $(hw3).cc Makefile
	git commit -m "hw3-2 complete"
	git push origin master


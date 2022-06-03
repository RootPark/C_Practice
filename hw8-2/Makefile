hw1 = draw_shape
all: $(hw1).o $(hw1)_main.o
	g++ -o $(hw1) $(hw1).o $(hw1)_main.o 
	

$(hw1).o: $(hw1).cc
	g++ -c -o $(hw1).o $(hw1).cc

$(hw1)_main.o: $(hw1)_main.cc
	g++ -c -o $(hw1)_main.o $(hw1)_main.cc

clean:
	rm $(hw1) $(hw1).o $(hw1)_main.o
submit:
	git add .
	git commit -m "homework8-2 complete"
	git push origin master

hw1 = simply_linked_list
hw2 = my_shared_ptr
FLAG= -std=c++11
all: $(hw1)_main.o $(hw2)_main.o 
	g++ $(FLAG) -o $(hw1) $(hw1)_main.o 
	g++ $(FLAG) -o $(hw2) $(hw2)_main.o 
$(hw1).o: $(hw1)_main.cc
	g++ $(FLAG) -c -o $(hw1)_main.o $(hw1)_main.cc

$(hw2)_main.o: $(hw2)_main.cc
	g++ $(FLAG) -c -o $(hw2)_main.o $(hw2)_main.cc


clean:
	rm $(hw1) $(hw1)_main.o $(hw1) $(hw2)_main.o

submit:
	git add .
	git commit -m"hw12-2 complete"
	git push origin master



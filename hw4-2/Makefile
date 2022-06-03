all: my_list.o linked_list.o
	g++ -o my_list my_list.o linked_list.o

my_list.o: my_list.cc
	g++ -c -o my_list.o my_list.cc

linked_list.o: linked_list.cc
	g++ -c -o linked_list.o linked_list.cc
clean:
	rm my_list my_list.o linked_list.o

submit:
	git add
	git commit -m "week4-2 homework complete"
	git push origin master


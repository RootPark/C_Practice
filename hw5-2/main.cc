#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "magic_square.h"

using namespace std;

int main(int argc, char *argv[]) {
	int number=atoi(argv[1]);
	int** k= Mal_square(number);
		Magic_square(k,number);
	}

#include <iostream>


#include "mylib.h"
#include "pretty_printer.h"
#include "sum.h"

int main() {

	int num = give_num();
	num = sum(num, 3);
	print(num);

}

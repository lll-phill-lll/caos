#include <iostream>


#include "mylib.h"
#include "pretty_printer.h"
#include "mult.h"
#include "sum.h"

int main() {

	int num = give_num();
	num = sum(num, 3);
	print(num);

	int num_2 = give_num();
	int mult_res = mult(num_2, num);
	print(mult_res);

}

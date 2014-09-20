#include <iostream>
#include "header.h"

void function();

int main()
{
  std::cout << "main()"
    "\t\t&var1[" << &FakeNamespace::var1 << "]"
    "\tvar1[" << FakeNamespace::var1 << "]"
	    << std::endl;
  function();
}

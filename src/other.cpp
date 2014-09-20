#include <iostream>
#include "header.h"

void function()
{
  std::cout << "function()"
    "\t&var1[" << &FakeNamespace::var1 << "]"
    "\tvar1[" << FakeNamespace::var1 << "]"
	    << std::endl;
}

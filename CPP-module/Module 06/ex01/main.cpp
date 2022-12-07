#include "Data.hpp"

int main(void)
{
	Data *before = new Data("Kim", 21, 180);

	uintptr_t ptr = serialize(before);
	Data *after = deserialize(ptr);
	before->print();
	after->print();
	delete before;
}

#include"Array_Of_Items.h"

Array_Of_Int::Array_Of_Int(int n_length) :length(n_length)
{
	items = new Int_To_Sort[n_length];
	fill(n_length);
}

Array_Of_Int::~Array_Of_Int()
{
	delete[]items;
}

int Array_Of_Int::get(int i)
{
	return items[i].get_val();
}

void Array_Of_Int::show()
{
	for (int i(0); i < length; i++)
	{
		items[i].show();
	}
}

Sorted_Items &Array_Of_Int::operator[](const int &index)
{
	return items[index];
}

void Array_Of_Int::fill(int length)
{
	for (int i(0); i < length; i++)
		items[i] = Int_To_Sort(rand() % 200);
}
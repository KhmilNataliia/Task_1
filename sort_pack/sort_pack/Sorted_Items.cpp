#include"Sorted_Items.h"

void Int_To_Sort::show() { cout << value << " "; }

void Int_To_Sort::swap(Sorted_Items &anotherVal)
{
	Int_To_Sort &r_value = dynamic_cast<Int_To_Sort&>(anotherVal);
	std::swap(value, r_value.value);
}

bool Int_To_Sort::operator<(const Sorted_Items &nvalue) const
{
	Int_To_Sort &Right_val = static_cast<Int_To_Sort&>(const_cast<Sorted_Items&>(nvalue));
	return (value < Right_val.value);
}

int Int_To_Sort::get_val() { return value; }

void Int_To_Sort::set_val(int nvalue) { value = nvalue; }
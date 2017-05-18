#include"Sort_Pack.h"
#include<vector>

using namespace std;

sort_pack::sort_pack() :array_size(0)
{
	items = NULL;
	discard_counter();
}

int *sort_pack::get_items()
{
	int* mas = new int[array_size];
	for (int i(0); i < array_size; i++)
		mas[i] = (*items).get(i);
	return mas;
}

void sort_pack::fill_known(int *mas, int size)
{
	auto to_fill = new Array_Of_Int(size);
	for (int i(0); i < size; i++)
	{
		to_fill->items->set_val(mas[i]);
	}
	items = to_fill;
	array_size = size;
}

void sort_pack::fill(int length)
{
	auto to_fill = new Array_Of_Int(length);
	items = to_fill;
	array_size = length;
}

void sort_pack::show()
{
	items->show();
	cout << endl;
}

int sort_pack::get_length()
{
	return array_size;
}

void sort_pack::discard_counter()
{
	counter = 0;
}

void sort_pack::increase_counter()
{
	counter++;
}

void sort_pack::bubble()
{
	discard_counter();
	Bubble_Sort();
}

void sort_pack::select()
{
	discard_counter();
	Select_Sort();
}

void sort_pack::insert()
{
	discard_counter();
	Insert_Sort(0,1);
}

void sort_pack::shell()
{
	discard_counter();
	Shell_Sort();
}


void sort_pack::quick()
{
	discard_counter();
	Quick_Sort(0, array_size-1);
}

// the sorting algoritms:

void sort_pack::Bubble_Sort()
{
	for (int i(0); i < array_size; i++)
	{
		for (int j(0); j < array_size-1; j++)
		{
			Sorted_Items &current = (*items).operator[](j);
			Sorted_Items &next = (*items).operator[](j + 1);
			if (next < current)
			{
				current.swap(next);
				increase_counter();
			}
		}
	}
}

void sort_pack::Select_Sort()
{
	for (int i(0); i < array_size-1; i++)
	{
		int etalon_index = i;
		for (int k(i); k < array_size; k++)
		{
			if ((*items).operator[](k)<(*items).operator[](etalon_index))
				etalon_index = k;
		}
		Sorted_Items &current = (*items).operator[](i);
		Sorted_Items &to_swap = (*items).operator[](etalon_index);
		current.swap(to_swap);
		increase_counter();
	}
}

void sort_pack::Insert_Sort(int begin, int step)
{
	if (begin >= array_size) throw Out_Of_Range_Exception(this);
	for (int i = begin+step; i < array_size; i+=step)
	{
		for (int j = i; j >begin; j-=step) 
		{
			Sorted_Items &current = (*items).operator[](j);
			Sorted_Items &previos = (*items).operator[](j - 1);

			if (current < previos) 
			{
				current.swap(previos);
				increase_counter();
			}
			else break;
		}
	}
}

void sort_pack::Shell_Sort()
{
	vector<int> steps; int step = array_size;
	do 
	{
		step /= 2;
		steps.push_back(step);
	} 
	while (step != 1);
	int Num_Steps = steps.size();
	for (int Current_Step = 0; Current_Step < Num_Steps; Current_Step++) 
	{
		int Step_Val = steps.at(Current_Step);
		for (int k = 0; k < Step_Val; k++)
		{
			Insert_Sort(k, Step_Val);
		}
	}
}

void sort_pack::Quick_Sort(int l, int r)
{
	if (l >= r) return;
	int i = l, j = r;
	auto &s = (*items).operator[]((l + r) / 2);

	while (i <= j) 
	{
        while ((*items).operator[](i) < s) i++;
		while (s < (*items).operator[](j)) j--;
		if (i <= j) 
		{
			(*items).operator[](i).swap((*items).operator[](j));
			i++; 
			j--;
			increase_counter();
		}
	}
	Quick_Sort(l, j); 
	Quick_Sort(i, r);
}









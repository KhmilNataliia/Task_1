#ifndef _Sort_Pack_
#define _Sort_Pack_

#include"Array_Of_Items.h"
#include<string>

class sort_pack
{
	Array_Of_Items *items;
	Sorted_Items & at(const int &index);
	int array_size;
	int counter;
	void Bubble_Sort();
	void Select_Sort();
	void Insert_Sort(int begin, int step);
	void Shell_Sort();
	void Quick_Sort(int l, int r);
public:
	sort_pack();
	void bubble();
	void select();
	void insert();
	void shell();
	void quick();
	void show();
	void increase_counter();
	void discard_counter();
	int get_length();
	int get_counter();
	void fill(int length);
	void fill_known(int *mas, int size);
	string get_items();//special for unir testing
};

class Out_Of_Range_Exception : public exception 
{
	void *src;
public:
	Out_Of_Range_Exception(void *source) :src(source) {};
	void printMessage() 
	{
		cout << "Out of range exception at: " << src << endl;
	}
};

#endif
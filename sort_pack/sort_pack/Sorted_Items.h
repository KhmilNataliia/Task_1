#ifndef _SortedItems_
#define _SortedItems_

#include<iostream>

using namespace std;

class Sorted_Items
{
public:
	virtual bool operator<(const Sorted_Items &nvalue) const = 0;	
	virtual void swap(Sorted_Items &nvalue) = 0;					
	virtual void show() = 0;								
};

class Int_To_Sort : public Sorted_Items {
	int value;
public:
	Int_To_Sort(const int &nvalue = 0) :value(nvalue) {}	
	void show();									
	void swap(Sorted_Items &anotherVal);				
	bool operator<(const Sorted_Items &nvalue) const;
	int get_val();								
	void set_val(int nvalue);							
};

#endif
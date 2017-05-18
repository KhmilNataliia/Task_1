#ifndef _Array_Of_Items_
#define _Array_Of_Items_

#include "Sorted_Items.h"

class Array_Of_Items 
{
public:
	virtual Sorted_Items& operator[] (const int &index) = 0;
	virtual void show() = 0;		
	virtual int get(int i) = 0;
	virtual void fill(int size) = 0;						
};

class Array_Of_Int : virtual public Array_Of_Items 
{	
	int length;				
public:
	Int_To_Sort *items;
	Array_Of_Int(int n_length);	
	~Array_Of_Int();			
	Sorted_Items& operator[] (const int &index);	
	void show();	
	int get(int i);
	void fill(int length);	
};

#endif
#include"Sort_Pack.h"
#include<iostream>

using namespace std;

int main()
{
	cout << "select_sort:" << endl;
	sort_pack for_Sort_1;
	for_Sort_1.fill(10);
	for_Sort_1.show();
	for_Sort_1.select();
	for_Sort_1.show();
	cout << "bubble_sort:" << endl;
	sort_pack for_Sort_2;
	for_Sort_2.fill(10);
	for_Sort_2.show();
	for_Sort_2.bubble();
	for_Sort_2.show();
	cout << "insert_sort:" << endl;
	sort_pack for_Sort_3;
	for_Sort_3.fill(10);
	for_Sort_3.show();
	for_Sort_3.insert();
	for_Sort_3.show();
	cout << "shell_sort:" << endl;
	sort_pack for_Sort_4;
	for_Sort_4.fill(10);
	for_Sort_4.show();
	for_Sort_4.shell();
	for_Sort_4.show();
	cout << "quick_sort:" << endl;
	sort_pack for_Sort_5;
	for_Sort_5.fill(10);
	for_Sort_5.show();
	for_Sort_5.quick();
	for_Sort_5.show();
	system("pause");
}
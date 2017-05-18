#include "stdafx.h"
#include "CppUnitTest.h"

#include "catch.hpp"
#include "Sort_Pack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit_tests
{		
	TEST_CASE("for_bubble")
	{
		sort_pack for_Sort_1;
		string input = "174206893";
		int put[10];
		string expect = "012346789";
		for (int i(0); i < 10; i++)
		{
			put[i] = input[i] - '0';
		}
		for_Sort_1.fill_known(put, 9);
		for_Sort_1.bubble();
		string res;
		res = for_Sort_1.get_items();
		REQUIRE(res == expect);
	}

	TEST_CASE("for_select")
	{
		sort_pack for_Sort_1;
		string input = "174206893";
		int put[10];
		string expect = "012346789";
		for (int i(0); i < 10; i++)
		{
			put[i] = input[i] - '0';
		}
		for_Sort_1.fill_known(put, 9);
		for_Sort_1.select();
		string res;
		res = for_Sort_1.get_items();
		REQUIRE(res == expect);
	}

	TEST_CASE("for_insert")
	{
		sort_pack for_Sort_1;
		string input = "174206893";
		int put[10];
		string expect = "012346789";
		for (int i(0); i < 10; i++)
		{
			put[i] = input[i] - '0';
		}
		for_Sort_1.fill_known(put, 9);
		for_Sort_1.insert();
		string res;
		res = for_Sort_1.get_items();
		REQUIRE(res == expect);
	}

	TEST_CASE("for_shell")
	{
		sort_pack for_Sort_1;
		string input = "174206893";
		int put[10];
		string expect = "012346789";
		for (int i(0); i < 10; i++)
		{
			put[i] = input[i] - '0';
		}
		for_Sort_1.fill_known(put, 9);
		for_Sort_1.shell();
		string res;
		res = for_Sort_1.get_items();
		REQUIRE(res == expect);
	}

	TEST_CASE("for_quick")
	{
		sort_pack for_Sort_1;
		string input = "173420689";
		int put[10];
		string expect = "012346789";
		for (int i(0); i < 10; i++)
		{
			put[i] = input[i] - '0';
		}
		for_Sort_1.fill_known(put, 9);
		for_Sort_1.quick();
		string res;
		res = for_Sort_1.get_items();
		REQUIRE(res == expect);
	}
}
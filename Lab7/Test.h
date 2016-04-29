#ifndef TEST_H
#define TEST_H
#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <vector>
class Test
{
	public:
		Test();
		void runTests();
		std::string isEmptyTest1();
		std::string isEmptyTest2();
		std::string testSize1();
		std::string testSize2();
		std::string testSearch1();
		std::string testSearch2();
		std::string testAddF1();
		std::string testAddF2();
		std::string testAddB1();
		std::string testAddB2();
		std::string testRemoveF1();
		std::string testRemoveF2();
		std::string testRemoveB1();
		std::string testRemoveB2();
};
#endif

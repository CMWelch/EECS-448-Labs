#include "Test.h"

Test::Test()
{

}
void Test::runTests()
{
	std::cout << isEmptyTest1() << "\n";
	std::cout << isEmptyTest2() << "\n";
	std::cout << testSize1() << "\n";
	std::cout << testSize2() << "\n";
	std::cout << testSearch1() << "\n";
	std::cout << testSearch2() << "\n";
	std::cout << testAddF1() << "\n";
	std::cout << testAddF2() << "\n";
	std::cout << testAddB1() << "\n";
	std::cout << testAddB2() << "\n";
	std::cout << testRemoveF1() << "\n";
	std::cout << testRemoveF2() << "\n";
	std::cout << testRemoveB1() << "\n";
	std::cout << testRemoveB2() << "\n";
}
std::string Test::isEmptyTest1()
{
	LinkedList<int>* l = new LinkedList<int>();
	if(l->isEmpty())
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}
std::string Test::isEmptyTest2()
{
	LinkedList<int>* l = new LinkedList<int>();
	
	l->addFront(2);
	
        if(l->isEmpty())
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}
std::string Test::testSize1()
{
	LinkedList<int>* l = new LinkedList<int>();
	
	if(l->size()==0)
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}
std::string Test::testSize2()
{
	LinkedList<int>* l = new LinkedList<int>();
	
	l->addFront(2);
	
	if(l->size()==1)
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}
std::string Test::testSearch1()
{
	LinkedList<int>* l = new LinkedList<int>();
	
	if(l->search(1)==false)
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}
std::string Test::testSearch2()
{
	LinkedList<int>* l = new LinkedList<int>();
	
	for(int i=0; i<10; i++)
	{
		l->addFront(i);
	}
	if(l->search(9))
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}
std::string Test::testAddF1()
{
	LinkedList<int>* l = new LinkedList<int>();
	
	int start = l->size();
	l->addFront(2);
	l->addFront(2);
	int end = l->size();

	if(end-start==2)
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}
std::string Test::testAddF2()
{
	LinkedList<int>* l = new LinkedList<int>();
	for(int i=0; i<10; i++)
	{
		l->addFront(i);
	}
	
	std::vector<int> vector = l->toVector();
	if(vector.front()==9)
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}
std::string Test::testAddB1()
{
	LinkedList<int>* l = new LinkedList<int>();
	
	int start = l->size();
	l->addBack(2);
	l->addBack(2);
	int end = l->size();
	if(end-start==2)
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}
std::string Test::testAddB2()
{
	LinkedList<int>* l = new LinkedList<int>();
	for(int i=0; i<10; i++)
	{
		l->addBack(i);
	}
	std::vector<int> vector = l->toVector();
	std::cout << vector.front() << "\n";
	if(vector.back()==9)
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}
std::string Test::testRemoveF1()
{
	LinkedList<int>* l = new LinkedList<int>();
	
	int start = l->size();
	l->addFront(2);
	l->addFront(2);
	l->removeFront();
	l->removeFront();
	int end = l->size();
	if(end-start==0)
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}
std::string Test::testRemoveF2()
{
	LinkedList<int>* l = new LinkedList<int>();
	
	
	l->addFront(2);
	l->addFront(3);
	l->removeFront();
	std::vector<int> vector = l->toVector();
	if(vector.front()==2)
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}
std::string Test::testRemoveB1()
{
	LinkedList<int>* l = new LinkedList<int>();
	
	int start = l->size();
	l->addFront(2);
	l->addFront(2);
	l->removeBack();
	l->removeBack();
	int end = l->size();
	if(end-start==0)
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}
std::string Test::testRemoveB2()
{
	LinkedList<int>* l = new LinkedList<int>();
	
	
	l->addFront(2);
	l->addFront(3);
	l->removeBack();
	std::vector<int> vector = l->toVector();
	if(vector.back()==3)
	{
		delete l;
		return("Pass");
	}
	else
	{
		delete l;
		return("Fail");
	}
	
	return(0);
}

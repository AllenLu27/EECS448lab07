/*
@File Name: Test.cpp
@Author: BoHui Lu
@Assignment: EECS-448 Lab7
@Description: this file define all the methods in the Test class
@Date: 04/23/2019
*/

#include "Test.h"
#include<vector>

void Test::runTests()
{
   test0();
   test1();
   test2();
   test3();
   test4();
   test5();
   test6();
   test7();
   test8();
   test9();
   test10();
   test11();
   test12();
   test13();
   test14();
   test15();
   test16();
   test17();
   test18();
   test19();
   test20();
   test21();
   test22();
}

void Test::printerrormessage(bool isPassed, int testnumber, std::string description)
{
  if(isPassed)
  {
      std::cout<<"Test "<<testnumber<<": "+description<<": PASSED\n";
    }
  else
  {
    std::cout<<"Test "<<testnumber<<": "+description<<": FAILED\n";
  }
}

void Test::test0()
{
  bool isPassed=0;
  int  testnum=0;
  std::string description="Checking constructor properly initialize the size of the LinkedList to 0 and create a empty list";
  LinkedListOfInts mylist;
  if(mylist.toVector().size()==0)
  {
    isPassed=1;
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test1()
{
  bool isPassed=0;
  int  testnum=1;
  std::string description="Checking isEmpty perform properly when the Linkedlist has size of zero";
  LinkedListOfInts mylist;
    if(mylist.isEmpty())
    {
        isPassed=1;
      }
    printerrormessage(isPassed, testnum, description);
}

void Test::test2()
{
  bool isPassed=0;
  int  testnum=2;
  std::string description="Checking isEmpty perform properly when there are elements in the Linkedlist";
  LinkedListOfInts mylist;
  mylist.addFront(1);
  if(mylist.isEmpty())
  {
    isPassed=0;
  }
  else
  {
    isPassed=1;
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test3()
{
  bool isPassed=1;
  int  testnum=3;
  std::string description="Check whether the size method function properly";
  LinkedListOfInts mylist;
  std::vector<int> myvec;
  signed int vec_size;
  for(int i=0;i<15;i++)
{
    mylist.addFront(i);
    myvec=mylist.toVector();
    vec_size=myvec.size();
  if(vec_size==mylist.size())
  {
    }
  else
  {
    isPassed=0;
  }
 }
  printerrormessage(isPassed, testnum, description);
}

void Test::test4()
{
  bool isPassed=0;
  int  testnum=4;
  std::string description="Checking addFront properly updates the size";
  LinkedListOfInts mylist;
  std::vector<int> myvec;
  signed int vec_size;
  for(int i=0;i<20;i++)
  {
    mylist.addFront(i);
    myvec=mylist.toVector();
    vec_size=myvec.size();
    if(vec_size!=i+1)
    {
        isPassed=0;
      }
    else
    {
      isPassed=1;
    }
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test5()
{
  bool isPassed=0;
  int  testnum=5;
  std::string description="Checking addBack properly updating the size";
  LinkedListOfInts mylist;
  std::vector<int> myvec;
  signed int vec_size;
  for(int i=0;i<20;i++)
  {
    mylist.addBack(i);
    myvec=mylist.toVector();
    vec_size=myvec.size();
    if(vec_size!=i+1)
    {
        isPassed=0;
      }
    else
    {
      isPassed=1;
    }
 }
  printerrormessage(isPassed, testnum, description);
}

void Test::test6()
{
  bool isPassed=0;
  int  testnum=6;
  std::string description="Checking addFront properly put the element in the right place";
  LinkedListOfInts mylist;
  std::vector<int> myvec;
  for(int i=0;i<20;i++)
  {
    mylist.addFront(i);
  }
  myvec=mylist.toVector();
  for(int j=0;j<20;j++)
  {
    if(myvec.back() != j)
    {
      isPassed=0;
    }
    else
    {
      isPassed=1;
    }
    myvec.pop_back();
  }
  printerrormessage(isPassed, testnum, description);
  //std::cout<<"Resulting size of vector is "<<myvec.size()<<'\n';
}

void Test::test7()
{
  bool isPassed=0;
  int  testnum=7;
  std::string description="Checking addBack properly put the element in the right place";
  LinkedListOfInts mylist;
  std::vector<int> myvec;
  for(int i=0;i<20;i++)
  {
    mylist.addBack(i);
  }
  myvec=mylist.toVector();
  for(int j=19;j>=0;j--)
  {
    if(myvec.back() != j)
    {
      isPassed=0;
    }
    else
    {
      isPassed=1;
    }
    myvec.pop_back();
  }
  printerrormessage(isPassed, testnum, description);
  //std::cout<<"Resulting size of vector is "<<myvec.size()<<'\n';
}

void Test::test8()
{
  bool isPassed=0;
  int  testnum=8;
  std::string description="Checking addFront whether works for negative number or not";
  LinkedListOfInts mylist;
  mylist.addFront(-1);
  if(mylist.toVector().front() == (-1))
  {
    isPassed=1;
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test9()
{
  bool isPassed=0;
  int  testnum=9;
  std::string description="Checking addBack whether works for negative number or not";
  LinkedListOfInts mylist;
  mylist.addBack(-1);
  if(mylist.toVector().front() == (-1))
  {
    isPassed=1;
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test10()
{
  bool isPassed=1;
  int  testnum=10;
  std::string description="Cheking if removeBack returns false when there is no element in the list";
  LinkedListOfInts mylist;
  if(mylist.removeBack())
  {
    isPassed=0;
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test11()
{
  bool isPassed=1;
  int  testnum=11;
  std::string description="Cheking if removeFront returns false when there is no element in the list";
  LinkedListOfInts mylist;
  if(mylist.removeFront())
  {
    isPassed=0;
  }
  printerrormessage(isPassed, testnum, description);
}


void Test::test12()
{
  bool isPassed=0;
  int  testnum=12;
  std::string description="Checking removeBack works properly when there is one element in the Linkedlist";
  LinkedListOfInts mylist;
  mylist.addFront(1);
  if(mylist.removeBack())
  {
    isPassed=1;
  }
  if(mylist.toVector().size()==0)
  {
    isPassed=1;
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test13()
{
  bool isPassed=0;
  int  testnum=13;
  std::string description="Checking removeFront works properly when there is one element in the Linkedlist";
  LinkedListOfInts mylist;
  mylist.addFront(1);
  if(mylist.removeFront())
  {
    isPassed=1;
  }
  if(mylist.toVector().size()==0)
  {
    isPassed=1;
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test14()
{
  bool isPassed=0;
  int  testnum=14;
  std::string description="Cheking if removeBack returns true when there are more than one elements in the list";
  LinkedListOfInts mylist;
  for(int i=0;i<50;i++)
  {
    mylist.addFront(i);
  }
  for(int j=0;j<50;j++)
  {
    if(mylist.removeBack())
    {
      isPassed=1;
    }
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test15()
{
  bool isPassed=0;
  int  testnum=15;
  std::string description="Cheking if removeFront returns true when there are more than one elements in the list";
  LinkedListOfInts mylist;
  for(int i=0;i<50;i++)
  {
    mylist.addFront(i);
  }
  for(int j=0;j<50;j++)
  {
    if(mylist.removeFront())
    {
      isPassed=1;
    }
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test16()
{
  bool isPassed=0;
  int  testnum=16;
  std::string description="Check if removeFront correctly update the size of the list and remove element from the list when there are more elemens in the LinkedList";
  LinkedListOfInts mylist;
  for(int i=0; i<10; i++)
  {
    mylist.addFront(i);
  }
  for(int j=0; j<10; j++)
  {
    mylist.removeFront();
  }
  if(mylist.toVector().size() == 0)
  {
    isPassed=1;
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test17()
{
  bool isPassed=0;
  int  testnum=17;
  std::string description="Check if removeBack correctly update the size of the list and remove element from the list when there are more elemens in the LinkedList";
  LinkedListOfInts mylist;
  for(int i=0; i<10; i++)
  {
    mylist.addFront(i);
  }
  for(int j=0; j<10; j++)
  {
    mylist.removeBack();
  }
  if(mylist.toVector().size() == 0)
  {
    isPassed=1;
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test18()
{
  bool isPassed=0;
  int  testnum=18;
  std::string description="Checking if removeBack removes the proper element in the list";
  LinkedListOfInts mylist;
  for(int i=0;i<10;i++)
  {
    mylist.addFront(i);
  }
  for(int j=1;j<10;j++)
  {
    mylist.removeBack();
    if(mylist.toVector().back() == j)
    {
      isPassed=1;
    }
    else
    {
      isPassed=0;
    }
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test19()
{
  bool isPassed=0;
  int  testnum=19;
  std::string description="Checking if removeFront removes the proper element in the list";
  LinkedListOfInts mylist;
  for(int i=0;i<10;i++)
  {
    mylist.addFront(i);
  }
  for(int j=8;j>=0;j--)
  {
    mylist.removeFront();
    if(mylist.toVector().front() == j)
    {
      isPassed=1;
    }
    else
    {
      isPassed=0;
    }
  }
  printerrormessage(isPassed, testnum, description);
}

void Test::test20()
{
  bool isPassed=1;
  int  testnum=20;
  std::string description="Cheking search works properly when there is no element in the Linkedlist";
  LinkedListOfInts mylist;
  if(mylist.search(15))
   {
     isPassed=0;
   }
  printerrormessage(isPassed, testnum, description);
}

void Test::test21()
{
  bool isPassed=0;
  int  testnum=21;
  std::string description="Cheking search works properly when there is negative number in the Linkedlist";
  LinkedListOfInts mylist;
  mylist.addFront(-3);
  if(mylist.search(-3))
   {
     isPassed=1;
   }
  printerrormessage(isPassed, testnum, description);
}

void Test::test22()
{
  bool isPassed=0;
  int  testnum=22;
  std::string description="Cheking search works properly when there are more than one element in the Linkedlist";
  LinkedListOfInts mylist;
  for(int i=0;i<100;i++)
  {
    mylist.addFront(i);
  }
  for(int j=99;j>=0;j--)
  {
    if(mylist.search(j))
     {
       isPassed=1;
     }
    else
    {
      isPassed=0;
    }
  }
  printerrormessage(isPassed, testnum, description);
}

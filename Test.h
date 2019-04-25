/*
@File Name: Test.h
@Author: BoHui Lu
@Assignment: EECS-448 Lab7
@Description: this file includes all the methods in the Test class
@Date: 04/23/2019
*/

#ifndef TEST_H
#define TEST_H

#include<iostream>
#include<string>
#include<math.h>
#include<random>
#include"LinkedListOfInts.h"


class Test
{
    public:

            /** @pre None
            *   @post Run all the tests
            *   @return None
            */
            void runTests();

            /** @pre None
          	*   @post Checking constructor properly initialize the size of the LinkedList to 0 and create a empty list
          	*   @return None
          	*/
            void test0();

            /** @pre None
          	*   @post Checking isEmpty perform properly when the Linkedlist has size of zero
          	*   @return None
          	*/
            void test1();

            /** @pre None
          	*   @post Checking isEmpty perform properly when there are elements in the Linkedlist
          	*   @return None
          	*/
            void test2();

            /** @pre None
          	*   @post Check whether the size method function properly
          	*   @return None
          	*/
            void test3();

            /** @pre None
            *   @post Checking addFront properly updates the size
            *   @return None
            */
            void test4();

            /** @pre None
            *   @post Checking addBack properly updating the size
            *   @return None
            */
            void test5();

            /** @pre None
            *   @post Checking addFront properly put the element in the right place
            *   @return None
            */
            void test6();

            /** @pre None
            *   @post Checking addBack properly put the element in the right place
            *   @return None
            */
            void test7();

            /** @pre None
            *   @post Checking addFront whether works for negative number or not
            *   @return None
            */
            void test8();

            /** @pre None
            *   @post Checking addBack whether works for negative number or not
            *   @return None
            */
            void test9();

            /** @pre None
            *   @post Cheking if removeBack returns false when there is no element in the list
            *   @return None
            */
            void test10();

            /** @pre None
            *   @post Cheking if removeFront returns false when there is no element in the list
            *   @return None
            */
            void test11();

            /** @pre None
            *   @post Checking removeBack works properly when there is one element in the Linkedlist
            *   @return None
            */
            void test12();

            /** @pre None
            *   @post Checking removeFront works properly when there is one element in the Linkedlist
            *   @return None
            */
            void test13();

            /** @pre None
            *   @post Cheking if removeBack returns true when there are more than one elements in the list
            *   @return None
            */
            void test14();

            /** @pre None
            *   @post Cheking if removeFront returns true when there are more than one elements in the list
            *   @return None
            */
            void test15();

            /** @pre None
            *   @post Check if removeFront correctly update the size of the list and remove element from the list when there are more elemens in the LinkedList
            *   @return None
            */
            void test16();

            /** @pre None
            *   @post Check if removeBack correctly update the size of the list and remove element from the list when there are more elemens in the LinkedList
            *   @return None
            */
            void test17();

            /** @pre None
            *   @post Checking if removeBack removes the proper element in the list
            *   @return None
            */
            void test18();

            /** @pre None
            *   @post Checking if removeFront removes the proper element in the list
            *   @return None
            */
            void test19();

            /** @pre None
            *   @post Cheking search works properly when there is no element in the Linkedlist
            *   @return None
            */
            void test20();

            /** @pre None
            *   @post Cheking search works properly when there is negative number in the list
            *   @return None
            */
            void test21();

            /** @pre None
            *   @post Cheking search works properly when there are more than one element in the Linkedlist
            *   @return None
            */
            void test22();

            /** @pre None
            *   @param isPassed: whether the test passed or not
            *   @param testnumber: the test number for a specific test
            *   @param description: description of the target test
            *   @post Prints whether a specific test passed or not, and the test's description
            *   @return None
            */
            void printerrormessage(bool isPassed, int testnumber, std::string description);

};

    #endif

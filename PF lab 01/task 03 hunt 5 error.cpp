/*
*Lab:   task #03
*NAME:  Zain ul Abideen
*rollno: SE-09-26
*Date:  11-NOV-2026
*PURPOSE:  HUNT FIVE BUG
*/
#include <iostream>
using namespace std;//(bug1)in given code semicolon was not added at end.
int main ()
{
	cout <<"welcome to the lab!\n";//(bug2) semicolon was missing.
	cout <<"today we learn \"C++\".\n";//(bug3) c of cout written capital.
	cout <<"files are in C:\\lab01!\n";//(bug4)use // to print /.
	cout <<"bye!\n";//(bug5) missing terminating comma after n.
	return 0;
}

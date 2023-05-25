#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "student.h"
#include "calc_average.h"
#include "print_students.h"
#include "print_best_students.h"
#include "underachievers.h"
#include "db_students.h"
#include "menu_student.h"
#include "change_db_students.h"

#include "man.h"
#include "menu_man.h"
using namespace std;


void main()
{
    cout << "\n\n\n";
cout << "\x1b[35mDDDDDDDDDDDDD                  AAA         TTTTTTTTTTTTTTTTTTTTTTT         AAA               BBBBBBBBBBBBBBBBB               AAA                 SSSSSSSSSSSSSSS EEEEEEEEEEEEEEEEEEEEEE\n";
cout << "D::::::::::::DDD              A:::A        T:::::::::::::::::::::T        A:::A              B::::::::::::::::B             A:::A              SS:::::::::::::::SE::::::::::::::::::::E\n";
cout << "D:::::::::::::::DD           A:::::A       T:::::::::::::::::::::T       A:::::A             B::::::BBBBBB:::::B           A:::::A            S:::::SSSSSS::::::SE::::::::::::::::::::E\n";
cout << "DDD:::::DDDDD:::::D         A:::::::A      T:::::TT:::::::TT:::::T      A:::::::A            BB:::::B     B:::::B         A:::::::A           S:::::S     SSSSSSSEE::::::EEEEEEEEE::::E\n";
cout << "  D:::::D    D:::::D       A:::::::::A     TTTTTT  T:::::T  TTTTTT     A:::::::::A             B::::B     B:::::B        A:::::::::A          S:::::S              E:::::E       EEEEEE\n";
cout << "  D:::::D     D:::::D     A:::::A:::::A            T:::::T            A:::::A:::::A            B::::B     B:::::B       A:::::A:::::A         S:::::S              E:::::E             \n";
cout << "  D:::::D     D:::::D    A:::::A A:::::A           T:::::T           A:::::A A:::::A           B::::BBBBBB:::::B       A:::::A A:::::A         S::::SSSS           E::::::EEEEEEEEEE   \n";
cout << "  D:::::D     D:::::D   A:::::A   A:::::A          T:::::T          A:::::A   A:::::A          B:::::::::::::BB       A:::::A   A:::::A         SS::::::SSSSS      E:::::::::::::::E   \n";
cout << "  D:::::D     D:::::D  A:::::A     A:::::A         T:::::T         A:::::A     A:::::A         B::::BBBBBB:::::B     A:::::A     A:::::A          SSS::::::::SS    E:::::::::::::::E   \n";
cout << "  D:::::D     D:::::D A:::::AAAAAAAAA:::::A        T:::::T        A:::::AAAAAAAAA:::::A        B::::B     B:::::B   A:::::AAAAAAAAA:::::A            SSSSSS::::S   E::::::EEEEEEEEEE   \n";
cout << "  D:::::D     D:::::DA:::::::::::::::::::::A       T:::::T       A:::::::::::::::::::::A       B::::B     B:::::B  A:::::::::::::::::::::A                S:::::S  E:::::E             \n";
cout << "  D:::::D    D:::::DA:::::AAAAAAAAAAAAA:::::A      T:::::T      A:::::AAAAAAAAAAAAA:::::A      B::::B     B:::::B A:::::AAAAAAAAAAAAA:::::A               S:::::S  E:::::E       EEEEEE\n";
cout << "DDD:::::DDDDD:::::DA:::::A             A:::::A   TT:::::::TT   A:::::A             A:::::A   BB:::::BBBBBB::::::BA:::::A             A:::::A  SSSSSSS     S:::::SEE::::::EEEEEEEE:::::E\n";
cout << "D:::::::::::::::DDA:::::A               A:::::A  T:::::::::T  A:::::A               A:::::A  B:::::::::::::::::BA:::::A               A:::::A S::::::SSSSSS:::::SE::::::::::::::::::::E\n";
cout << "D::::::::::::DDD A:::::A                 A:::::A T:::::::::T A:::::A                 A:::::A B::::::::::::::::BA:::::A                 A:::::AS:::::::::::::::SS E::::::::::::::::::::E\n";
cout << "DDDDDDDDDDDDD   AAAAAAA                   AAAAAAATTTTTTTTTTTAAAAAAA                   AAAAAAABBBBBBBBBBBBBBBBBAAAAAAA                   AAAAAAASSSSSSSSSSSSSSS   EEEEEEEEEEEEEEEEEEEEEE\033[0m\n";
                                                                                                                                                                                       
                                                                                                                                                                                       

	int choice;
	do {
        cout << "\n\n\x1b[32mChoose an action:\n1 - DATABASE of STUDENTS\n2 - DATABASE of PEOPLE\n3 - Exit\n\n\n";
    cin >> choice;

    switch (choice) {
    case 1: {
        menu_student();
        break;
    }
    case 2: {
        menu_man();
        break;
    }
    case 3:
        return;
    }
		
	} while (choice != 3);
   
}
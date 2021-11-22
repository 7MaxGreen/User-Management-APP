#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <conio.h>
#include <iomanip>
#include <windows.h>

using namespace std;

#include "struct.cpp"
#include "menus.cpp"
#include "generalFunctions.cpp"
#include "reports.cpp"
#include "studfunctions.cpp"
#include "userfunctions.cpp"


int main()
{
	
	readFILEconf();
		
	system(collor);

    nu=readFILE(FILEuser,USER);
    ns=readFILE(FILEstud,STUD);
    nss=readFILE(FILEstat,STAT);
    
    writeFILE(FILEuser,USER,nu);
    writeFILE(FILEstud,STUD,ns);
    writeFILE(FILEstat,STAT,nss);
    
    if(contorERROR>0) exit(0);
    
    UID=login();
		
  while(1)
  {
 	
  system("cls");
	
	switch(USER[UID].tip)
	{
		case 0: SYSTEM = userMENU();  break;
		case 1: SYSTEM = adminMENU(); break;
	}
		
	switch(SYSTEM)
	{
		case 1 : system("cls"); insertuser(); system("pause"); break; 
		case 2 : system("cls"); showUSER();   system("pause"); break; 
		case 3 : system("cls"); finduser();   system("pause"); break;
		case 4 : system("cls"); editUSER();                    break;
		
		case 5 : system("cls"); insertstud();  system("pause"); break;
		case 6 : system("cls"); showSTUD();    system("pause"); break;
		case 7 : system("cls"); editSTUD();                     break;
	    case 11: system("cls"); find();        system("pause"); break;
	    case 12: system("cls"); findprenume(); system("pause"); break;	
	    case 13: system("cls"); findidnp();    system("pause"); break;
	    case 14: system("cls"); findgroup();   system("pause"); break;
	    case 15: system("cls"); findmentor();  system("pause"); break;
	    case 16: system("cls"); findemail();   system("pause"); break;
	    case 17: system("cls"); findtel();     system("pause"); break;
	    
	    case 29: system("cls"); reportALL();    break;
	    case 26: system("cls"); reportGROUP();  break;
	    case 23: system("cls"); reportAGE();    break;
	    case 24: system("cls"); reportMENTOR(); break;
	    case 22: system("cls"); reportSTAT();   break;
	    
 		case 8: writeFILE(FILEstud, STUD, ns); writeFILE(FILEuser, USER, nu); writeFILE(FILEstat, STAT, nss); exit(0); 
	}
		
 }	
	return 0;
}
	 

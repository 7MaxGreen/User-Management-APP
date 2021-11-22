/*int adminMENUreport5()
{
	system("cls");
	NIVEL=5;
	
	cout<<" \n\n\t\t *** MENU REPORT BY MENTOR ***"<<endl;
	cout<<" \t\t *                           *"<<endl;
 	cout<<" \t\t *   1. ACTIVE Students      *"<<endl;
 	cout<<" \t\t *   2. INACTIVE Students    *"<<endl;
 	cout<<" \t\t *   3. ALL Students         *"<<endl;
	cout<<" \t\t *   ESC. Back               *"<<endl;
	cout<<" \t\t *                           *"<<endl;
	cout<<" \t\t *****************************"<<endl;
	switch(_getch())
 	{
 	   case 49: if(STUD[UID].stare==1) return 24;	
	   case 50: if(STUD[UID].stare==0) return 24;	
	   case 51: return 24;	
	   
	   case 27: NIVEL=17;
	}
	  return 0;
}


int adminMENUreport4()
{
	system("cls");
	NIVEL=4;
	
	cout<<" \n\n\t\t **** MENU REPORT ALL STUDENTS ****"<<endl;
	cout<<" \t\t *                                *"<<endl;
 	cout<<" \t\t *      1. ACTIVE Students        *"<<endl;
 	cout<<" \t\t *      2. INACTIVE Students      *"<<endl;
 	cout<<" \t\t *      3. ALL Students           *"<<endl;
	cout<<" \t\t *      ESC. Back                 *"<<endl;
	cout<<" \t\t *                                *"<<endl;
	cout<<" \t\t **********************************"<<endl;
	switch(_getch())
 	{
 	   case 49: if(STUD[UID].stare==0) return 29;	
	   case 50: if(STUD[UID].stare!=0) return 29;	
	   case 51: return 29;	
	   
	   case 27: NIVEL=17;
	}
	  return 0;
 }
 
 
int adminMENUreport3()
{
	system("cls");
	NIVEL=3;
	
	cout<<" \n\n\t\t **** MENU REPORT BY GROUP ****"<<endl;
	cout<<" \t\t *                            *"<<endl;
 	cout<<" \t\t *    1. ACTIVE Students      *"<<endl;
 	cout<<" \t\t *    2. INACTIVE Students    *"<<endl;
 	cout<<" \t\t *    3. ALL Students         *"<<endl;
	cout<<" \t\t *    ESC. Back               *"<<endl;
	cout<<" \t\t *                            *"<<endl;
	cout<<" \t\t ******************************"<<endl;
	switch(_getch())
 	{
 	   case 49: if(STUD[UID].stare==0) return 26;	
	   case 50: if(STUD[UID].stare!=0) return 26;	
	   case 51: return 26;	
	   
	   case 27: NIVEL=17;
	}
	  return 0;
 }


int adminMENUreport2()
{
	system("cls");
	NIVEL=2;
	
	cout<<" \n\n\t\t **** MENU REPORT BY AGE ****"<<endl;
	cout<<" \t\t *                          *"<<endl;
 	cout<<" \t\t *    1. ACTIVE Students    *"<<endl;
 	cout<<" \t\t *    2. INACTIVE Students  *"<<endl;
 	cout<<" \t\t *    3. ALL Students       *"<<endl;	
	cout<<" \t\t *    ESC. Back             *"<<endl;
	cout<<" \t\t *                          *"<<endl;
	cout<<" \t\t ****************************"<<endl;
	switch(_getch())
 	{
 	   case 49: if(STUD[UID].stare==0) return 23;	
	   case 50: if(STUD[UID].stare!=0) return 23;	
	   case 51: return 23;	
	   
	   case 27: NIVEL=17;
	}
	  return 0;
 }
 
 
 int active()
{ 
int contor=0;
int index;
	for (int i=0; i<ns; i++)
	{
		if ( STUD[UID].stare==0) 
		{
		contor++;
		index=i;
		}
	}
	return index;
}

int adminMENU()
{
	switch(NIVEL)
	{
		case 1 : return adminMENU1();
		/*case 2 : return adminMENUreport2();
		case 3 : return adminMENUreport3();
		case 4 : return adminMENUreport4();
		case 5 : return adminMENUreport5();
		case 12: return adminMENU12();
		case 14: return adminMENU14();
		case 17: return adminMENU17();
	}
		
   return 0;	
}

 int userMENU()
{
	switch(NIVEL)
	{   
	    case 1 : return userMENU1();
		/*case 2 : return adminMENUreport2();
		case 3 : return adminMENUreport3();
		case 4 : return adminMENUreport4();
		case 5 : return adminMENUreport5();
		case 14: return adminMENU14();
		case 17: return adminMENU17();
	}
	return 0;
}

 */

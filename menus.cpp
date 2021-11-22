
int adminMENU17()
{
	system("cls");
	NIVEL=17;
	
	cout<<" \n\n\t\t ***** MENU STUDENT REPORT *****"<<endl;
	cout<<" \t\t *                             *"<<endl;
 	cout<<" \t\t *     1. Report by age        *"<<endl;
 	cout<<" \t\t *     2. Report by group      *"<<endl;
 	cout<<" \t\t *     3. All student Reports  *"<<endl;
 	cout<<" \t\t *     4. Report by mentor     *"<<endl;
  	cout<<" \t\t *     ESC. Back               *"<<endl;
  	cout<<" \t\t *                             *"<<endl;
  	cout<<" \t\t *******************************"<<endl;
  		switch(_getch())
 	{
 	   case 49: return 23;	
	   case 50: return 26;	
	   case 51: return 29;
	   case 52: return 24;
	   case 27: NIVEL=1;
	}
	  return 0;
 }
	

int adminMENU14()
{
	system("cls");
	NIVEL=14;
	
	cout<<" \n\n\t\t **** MENU FIND STUDENT ****"<<endl;
	cout<<" \t\t *                         *"<<endl;
 	cout<<" \t\t *    1. By name           *"<<endl;
 	cout<<" \t\t *    2. By surname        *"<<endl;
 	cout<<" \t\t *    3. By IDNP           *"<<endl;
 	cout<<" \t\t *    4. By group          *"<<endl;
 	cout<<" \t\t *    5. By mentor         *"<<endl;
 	cout<<" \t\t *    6. By email          *"<<endl;
 	cout<<" \t\t *    7. By phone number   *"<<endl;
  	cout<<" \t\t *    ESC. Back            *"<<endl;
  	cout<<" \t\t *                         *"<<endl;
 	cout<<" \t\t ***************************"<<endl;
 	switch(_getch())
 	{
 	   case 49: return 11;	
	   case 50: return 12;	
	   case 51: return 13;	
	   case 52: return 14;
	   case 53: return 15;
	   case 54: return 16;
	   case 55: return 17;
	   
	   case 27: NIVEL=1;
	}
	  return 0;
 }


 int adminMENU12()
 {
 	system("cls");
 	NIVEL=12;
 	
 	cout<<" \n\n\t\t **** MENU USER MANAGEMENT ****"<<endl;
 	cout<<" \t\t *                            *"<<endl;
 	cout<<" \t\t *     1. Insert user         *"<<endl;
 	cout<<" \t\t *     2. Show user           *"<<endl;
 	cout<<" \t\t *     3. Find user(by ID)    *"<<endl;
 	cout<<" \t\t *     4. Edit user           *"<<endl;
  	cout<<" \t\t *     ESC. Back              *"<<endl;
  	cout<<" \t\t *                            *"<<endl;
  	cout<<" \t\t ******************************"<<endl;
 	
 	switch(_getch())
 	{
 	   case 49: return 1;	
	   case 50: return 2;	
	   case 51: return 3;	
	   case 52: return 4;
	   case 27: NIVEL=1;
	}
	  return 0;
 }
 
 
 int adminMENU1()
 {
 	system("cls");
 	NIVEL=1;
 	
 	cout<<" \n\n\t\t ******** ADMIN MENU ********"<<endl;
 	cout<<" \t\t *                          *"<<endl;
 	cout<<" \t\t *   1. Management user     *"<<endl;
 	cout<<" \t\t *   2. Insert Student      *"<<endl;
 	cout<<" \t\t *   3. Show Student        *"<<endl;
 	cout<<" \t\t *   4. Find Student        *"<<endl;
 	cout<<" \t\t *   5. Edit Student        *"<<endl;
	cout<<" \t\t *   6. Student Report      *"<<endl;
	cout<<" \t\t *   7. Statistics Report   *"<<endl;
 	cout<<" \t\t *  ESC. Save and Exit      *"<<endl;
 	cout<<" \t\t *                          *"<<endl;
 	cout<<" \t\t ****************************"<<endl;
 	
 	switch(_getch())
 	{
 	   case 49: NIVEL=12; break;
	   case 50: return 5;	
	   case 51: return 6;	
	   case 52: NIVEL=14; break;
	   case 53: return 7;
	   case 54: NIVEL=17; break;
	   case 55: return 22;
	 
	   case 27: return 8;
	}
	
   return 0;	 
 }


int adminMENU()
{
	switch(NIVEL)
	{
		case 1 : return adminMENU1();
		case 12: return adminMENU12();
		case 14: return adminMENU14();
		case 17: return adminMENU17();
	}
		
   return 0;	
}


int userMENU1()
{
	system("cls");
 		NIVEL=1;
 		
 	cout<<" \n\n\t\t ******** USER MENU ********"<<endl;
 	cout<<" \t\t *                         *"<<endl;
 	cout<<" \t\t *   1. Find Student       *"<<endl;
 	cout<<" \t\t *   2. Show Student       *"<<endl;
 	cout<<" \t\t *   3. Edit Student       *"<<endl;
	cout<<" \t\t *   4. Student Report     *"<<endl;
 	cout<<" \t\t *  ESC. SAVE & EXIT       *"<<endl;
 	cout<<" \t\t *                         *"<<endl;
 	cout<<" \t\t ***************************"<<endl;
 	
 	switch(_getch())
 	{
 	   case 49: NIVEL=14; break;
	   case 50: return 6;	
	   case 51: return 7;
	   case 52: NIVEL=17; break;
	   
	   case 27: return 8;
	}
   return 0;	 
 }
 
 
 int userMENU()
{
	switch(NIVEL)
	{   
	    case 1 : return userMENU1();
		case 14: return adminMENU14();
		case 17: return adminMENU17();
	}
	return 0;
}

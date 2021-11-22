int insertstud()
 { 
   do
   { 
     system("cls");
    
     cout<<" Stud ["<<ns+1<<"]"<<endl;
     cout<<" Enter nume ::: ";  cin>>STUD[ns].nume;
     cout<<" Enter prenume ::: "; cin>>STUD[ns].prenume;
     cout<<" Enter varsta ::: "; cin>>STUD[ns].varsta;
     cout<<" Enter IDNP ::: "; cin>>STUD[ns].idnp;
     cout<<" Enter grupa ::: "; cin>>STUD[ns].grupa;
     cout<<" Enter mentor ::: "; cin>>STUD[ns].mentor;
     cout<<" Enter email ::: "; cin>>STUD[ns].email;
     cout<<" Enter telefon ::: "; cin>>STUD[ns].telefon;
    
	 ns++;
   STUD[ns].ID=ns;

   cout<<"\n Enter next student ? Any Key to continue or ESC for exit "<<endl;
   
   STAT[UID].nrinsertstud++;
   STUD[UID].userID++; 
   
   }while( _getch() != 27 );
 }


showSTUD()
{
 int in=0, pas=4, ur=pas, x=ns;
 
	while(1)
	{
		system("cls");
		
      cout<<setw(3)<<"\n\n Nr. "<<setw(13)<<" Name "<<setw(13)<<" Surname "<<setw(8)<<" Age "<<setw(15)<<"  IDNP  "<<setw(9)<<" Group "<<setw(10)<<" Mentor "<<setw(15)<<" Email "<<setw(18)<<" Phone number "<<setw(5)<<" Status "<<setw(5)<<" ID "<<endl;
      cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
 
  for(int i=0; i < ur; i++)
     {
      cout<<setw(3)<<i<<setw(13)<<STUD[i].nume<<setw(13)<<STUD[i].prenume<<setw(8)<<STUD[i].varsta<<setw(15)<<STUD[i].idnp<<setw(9)<<STUD[i].grupa<<setw(10)<<STUD[i].mentor<<setw(20)<<STUD[i].email<<setw(15)<<STUD[i].telefon<<setw(5)<<STUD[i].stare<<setw(7)<<STUD[i].ID<<endl;
      cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
     }
      cout<<endl;
      cout<<"\t\t\t\t     PAGE "<<(in/pas)+1<<" / "<<(ns/pas)+1<<endl;
	  cout<<"\t\t\t NEXT ->[+]  \t\t PREVIOUS <-[-]  "<<endl;
	  cout<<"\t\t\t\t   [ESC] for EXIT"<<endl;
	  cout<<endl;
     	 
      //cout<<" in="<<in<<"  ur="<<ur<<endl;cout<<"x="<<x<<endl;
      
   		 int key=_getch();
     	      	 	
     	 if(key==43) { in+=pas; ur+=pas; x-=pas; if(ur>=ns){ in=ns-x; ur=ns; x+=pas;} }
     	 
		 if(key==45) {in-=pas; ur-=pas; if(in<0){ in=0; ur=pas; x=ns;	} }
		 
         if(key==27) break;	
 }
}


void editstudN()
{
	int x;
	
	cout<<" \nAre you sure you want to modify the requested information ?";
	cout<<" \nPress [Y] to continue editing or [any key] if you need to search the ID";
	
		char X;
	X=_getch();
	
		if( toupper(X) == 'Y' ) {  cout<<"\n Enter student ID wich you want to edit::";
		
	    cin>>x; x--;
	    
	    if( STUD[x].ID <= ns ) 
	    
		{
	 
		cout<<" \nCurrent name ::: "<<STUD[x].nume<<endl;
		cout<<" New name ::: "; cin>>STUD[x].nume;    
		
		}
	}
	else if( toupper(X) != 'Y' ) { adminMENU14();}
	
 STAT[UID].nreditstud++;

}


void editstudP()
{
	int x;
	
	cout<<" \nAre you sure you want to modify the requested information ?";
	cout<<" \nPress [Y] to continue editing or [any key] if you need to search the ID";
	
		char X;
	X=_getch();
	
		if( toupper(X) == 'Y' ) {  cout<<"\n Enter student ID wich you want to edit::";
		
	    cin>>x; x--;
	    
	    if( STUD[x].ID <= ns ) 
	    
		{
	 
		cout<<" \nCurrent surname ::: "<<STUD[x].prenume<<endl;
		cout<<" New surname ::: "; cin>>STUD[x].prenume;    
		
		}
	}
	else if( toupper(X) != 'Y' ) { adminMENU14();}

 STAT[UID].nreditstud++;

}


void editstudA()
{
	int x;
	
	cout<<" \nAre you sure you want to modify the requested information ?";
	cout<<" \nPress [Y] to continue editing or [any key] if you need to search the ID";
	
		char X;
	X=_getch();
	
		if( toupper(X) == 'Y' ) {  cout<<"\n Enter student ID wich you want to edit::";
		
	    cin>>x; x--;
	    
	    if( STUD[x].ID <= ns ) 
	    
		{
	 
		cout<<" \nCurrent age ::: "<<STUD[x].varsta<<endl;
		cout<<" New age ::: "; cin>>STUD[x].varsta;    
		
		}
}	
	else if( toupper(X) != 'Y' ) { adminMENU14();}
	
 STAT[UID].nreditstud++;

}


void editstudG()
{
	int x;
	
	cout<<" \nAre you sure you want to modify the requested information ?";
	cout<<" \nPress [Y] to continue editing or [any key] if you need to search the ID";
	
		char X;
	X=_getch();
	
		if( toupper(X) == 'Y' ) {  cout<<"\n Enter student ID wich you want to edit::";
		
	    cin>>x; x--;
	    
	    if( STUD[x].ID <= ns ) 
	    
		{
	 
		cout<<" \nCurrent group ::: "<<STUD[x].grupa<<endl;
		cout<<" New group ::: "; cin>>STUD[x].grupa;    
		
		}
}	
	else if( toupper(X) != 'Y' ) { adminMENU14();}
	
 STAT[UID].nreditstud++;

}

void editstudM()
{
	int x;
	
	cout<<" \nAre you sure you want to modify the requested information ?";
	cout<<" \nPress [Y] to continue editing or [any key] if you need to search the ID";
	
		char X;
	X=_getch();
	
		if( toupper(X) == 'Y' ) {  cout<<"\n Enter student ID wich you want to edit::";
		
	    cin>>x; x--;
	    
	    if( STUD[x].ID <= ns ) 
	    
		{
	 
		cout<<" \nCurrent mentor ::: "<<STUD[x].mentor<<endl;
		cout<<" New mentor ::: "; cin>>STUD[x].mentor;    
		
		}
	}
	else if( toupper(X) != 'Y' ) { adminMENU14();}
	
 STAT[UID].nreditstud++;

}


void editstudE()
{
	int x;
	
	cout<<" \nAre you sure you want to modify the requested information ?";
	cout<<" \nPress [Y] to continue editing or [any key] if you need to search the ID";
	
		char X;
	X=_getch();
	
		if( toupper(X) == 'Y' ) {  cout<<"\n Enter student ID wich you want to edit::";
		
	    cin>>x; x--;
	    
	    if( STUD[x].ID <= ns ) 
	    
		{
	 
		cout<<" \nCurrent email ::: "<<STUD[x].email<<endl;
		cout<<" New email ::: "; cin>>STUD[x].email;    
		
		}
	}
	else if( toupper(X) != 'Y' ) { adminMENU14();}
	
 STAT[UID].nreditstud++;

}


void editstudPN()
{
	int x;
	
	cout<<" \nAre you sure you want to modify the requested information ?";
	cout<<" \nPress [Y] to continue editing or [any key] if you need to search the ID";
	
		char X;
	X=_getch();
	
		if( toupper(X) == 'Y' ) {  cout<<"\n Enter student ID wich you want to edit::";
		
	    cin>>x; x--;
	    
	    if( STUD[x].ID <= ns ) 
	    
		{
	 
		cout<<" \nCurrent phone number ::: "<<STUD[x].telefon<<endl;
		cout<<" New phone number ::: "; cin>>STUD[x].telefon;    
		
		}
	}
	else if( toupper(X) != 'Y' ) { adminMENU14();}
	
 STAT[UID].nreditstud++;

}


void editstudS()
{
	
	int x;
	
	cout<<" \nAre you sure you want to modify the requested information ?";
	cout<<" \nPress [Y] to continue editing or [any key] if you need to search the ID";
	
		char X;
	X=_getch();
	
		if( toupper(X) == 'Y' ) {  cout<<"\n Enter student ID wich you want to edit::";
		
	    cin>>x; x--;
	    
	    if( STUD[x].ID <= ns ) 
	    
		{
	 
		cout<<" \n0-inactive; 1-active "<<endl;
		cout<<" Current state ::: "<<STUD[x].stare<<endl;
		cout<<" New state ::: "; cin>>STUD[x].stare;    
		if(STUD[x].stare==0) STAT[UID].nrdezstud++;
		}
	}
	else if( toupper(X) != 'Y' ) { adminMENU14();}
	
 STAT[UID].nreditstud++;

}


void editstudI()
{
	int x;
	
	cout<<" \nAre you sure you want to modify the requested information ?";
	cout<<" \nPress [Y] to continue editing or [any key] if you need to search the ID";
	
		char X;
	X=_getch();
	
		if( toupper(X) == 'Y' ) {  cout<<"\n Enter student ID wich you want to edit::";
		
	    cin>>x; x--;
	    
	    if( STUD[x].ID <= ns ) 
	    
		{
	 
		cout<<" \nCurrent IDNP ::: "<<STUD[x].idnp<<endl;
		cout<<" New name ::: "; cin>>STUD[x].idnp;    
		
		}
	}
	else if( toupper(X) != 'Y' ) { adminMENU14();}
	
 STAT[UID].nreditstud++;

}


void editSTUD()
{	
	cout<<" \nIn order to edit the student information you must provide the Student ID "<<endl;	
	cout<<" Press [Y] - to continue or [Any Key] to exit"<<endl;
	
	char X;
	int y;
	X=_getch();
	
	if( toupper(X) != 'Y' ) {cout<<"\n\nFind your Student ID using the next menu"; Sleep(2000);  adminMENU14();}
	
	else if ( toupper(X) == 'Y' ){
	
	do{
	
    cout<<"\nEdit name ?  [Y]-YES / DOUBLE [Esc]-NO"<<endl;
    
	X=_getch();
	
	if( toupper(X) == 'Y' )  editstudN(); 
	
	 }while( _getch() != 27 );
	 
	do{
	 
	cout<<"\nEdit surname ?  [Y]-YES / DOUBLE [Esc]-NO"<<endl;
	X=_getch();
	if( toupper(X) == 'Y' ) { editstudP(); } 	
  	}while( _getch() != 27 ); 
  	
  		do{
	  
  	cout<<"\nEdit age ?  [Y]-YES / DOUBLE [Esc]-NO"<<endl;
	X=_getch();
	if( toupper(X) == 'Y' ) { editstudA() ;}
    }while( _getch() != 27 );
    
    do{
	
	cout<<"\nEdit IDNP ?  [Y]-YES / DOUBLE [Esc]-NO"<<endl;
	X=_getch();
	if( toupper(X) == 'Y' ) { editstudI(); }
    }while( _getch() != 27 );
    
    do{
	
	cout<<"\nEdit group ?  [Y]-YES / DOUBLE [Esc]-NO"<<endl;
	X=_getch();
	if( toupper(X) == 'Y' ) { editstudG(); }
    }while( _getch() != 27 );
    
    do{
    	
	cout<<"\nEdit state ?  [Y]-YES / DOUBLE [Esc]-NO"<<endl;
	X=_getch();
	if( toupper(X) == 'Y' ) { editstudS(); }
    }while( _getch() != 27 );
    
    do{
	
	cout<<"\nEdit mentor ?  [Y]-YES / DOUBLE [Esc]-NO"<<endl;
	X=_getch();
	if( toupper(X) == 'Y' ) { editstudM(); }
    }while( _getch() != 27 );
    
    do{

	cout<<"\nEdit em@il ?  [Y]-YES / DOUBLE [Esc]-NO"<<endl;
	X=_getch();
	if( toupper(X) == 'Y' ) { editstudE(); }
    }while( _getch() != 27 );
    
    do{
	
	cout<<"\nEdit phone number ?  [Y]-YES / DOUBLE [Esc]-NO"<<endl;
	X=_getch();
	if( toupper(X) == 'Y' ) { editstudPN(); }
	}while( _getch() != 27 );}     
}
	    	
 		    	
void find()
 {
  char nume[255];  bool X=true;
  cout<<"Enter name ::: ";
  cin>>nume;
  cout<<endl;
   cout<<setw(6)<<" Nr. "<<setw(11)<<" Nume "<<setw(13)<<" Prenume "<<setw(6)<<" Varsta "<<setw(15)<<" IDNP "<<setw(18)<<" GRUPA "<<setw(11)<<" MENTOR "<<setw(8)<<" ID "<<setw(8)<<" STARE "<<setw(15)<<" EMAIL "<<setw(18)<<" TELEFON "<<endl;
   cout<<"----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
  for(int i=0; i < ns; i++)
  {
      if( strcmp(STUD[i].nume,nume)==0) 
      {
     X=false;
      cout<<setw(3)<<i+1<<setw(13)<<STUD[i].nume<<setw(13)<<STUD[i].prenume<<setw(6)<<STUD[i].varsta<<setw(22)<<STUD[i].idnp<<setw(11)<<STUD[i].grupa<<setw(14)<<STUD[i].mentor<<setw(8)<<STUD[i].ID<<setw(8)<<STUD[i].stare<<setw(20)<<STUD[i].email<<setw(13)<<STUD[i].telefon<<endl;

      if(X)
   {
        cout<<" DOESN'T EXIST "<<endl;
   }
 }
}
}

void findprenume()
 {
 	
  char nume[255];  bool X=true;
  cout<<"Enter surname ::: ";
  cin>>nume;
  cout<<endl;
    cout<<setw(6)<<" Nr. "<<setw(11)<<" Nume "<<setw(13)<<" Prenume "<<setw(6)<<" Varsta "<<setw(15)<<" IDNP "<<setw(18)<<" GRUPA "<<setw(11)<<" MENTOR "<<setw(8)<<" ID "<<setw(8)<<" STARE "<<setw(15)<<" EMAIL "<<setw(18)<<" TELEFON "<<endl;
   cout<<"----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
  for(int i=0; i < ns; i++)
  {
      if( strcmp(STUD[i].prenume,nume)==0) 
      {
     X=false;
      cout<<setw(3)<<i+1<<setw(13)<<STUD[i].nume<<setw(13)<<STUD[i].prenume<<setw(6)<<STUD[i].varsta<<setw(22)<<STUD[i].idnp<<setw(11)<<STUD[i].grupa<<setw(14)<<STUD[i].mentor<<setw(8)<<STUD[i].ID<<setw(8)<<STUD[i].stare<<setw(20)<<STUD[i].email<<setw(13)<<STUD[i].telefon<<endl;
      if(X)
   {
        cout<<" DOESN'T EXIST "<<endl;
   }
 }
}
}
 
 
 void findidnp()
 {
  char idnp[20];  bool X=true;
  cout<<"Enter IDNP ::: ";
  cin>>idnp;
  cout<<endl;
    cout<<setw(6)<<" Nr. "<<setw(11)<<" Nume "<<setw(13)<<" Prenume "<<setw(6)<<" Varsta "<<setw(15)<<" IDNP "<<setw(18)<<" GRUPA "<<setw(11)<<" MENTOR "<<setw(8)<<" ID "<<setw(8)<<" STARE "<<setw(15)<<" EMAIL "<<setw(18)<<" TELEFON "<<endl;
   cout<<"----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
  for(int i=0; i < ns; i++)
  {
      if( strcmp(STUD[i].idnp,idnp)==0) 
      {
     X=false;
      cout<<setw(3)<<i+1<<setw(13)<<STUD[i].nume<<setw(13)<<STUD[i].prenume<<setw(6)<<STUD[i].varsta<<setw(22)<<STUD[i].idnp<<setw(11)<<STUD[i].grupa<<setw(14)<<STUD[i].mentor<<setw(8)<<STUD[i].ID<<setw(8)<<STUD[i].stare<<setw(20)<<STUD[i].email<<setw(13)<<STUD[i].telefon<<endl;
      if(X)
   {
        cout<<" DOESN'T EXIST "<<endl;
   }
 }
}
}


void findgroup()
 {	
  char nume[255];  bool X=true;
  cout<<"Enter group ::: ";
  cin>>nume;
  cout<<endl;
    cout<<setw(6)<<" Nr. "<<setw(11)<<" Nume "<<setw(13)<<" Prenume "<<setw(6)<<" Varsta "<<setw(15)<<" IDNP "<<setw(18)<<" GRUPA "<<setw(11)<<" MENTOR "<<setw(8)<<" ID "<<setw(8)<<" STARE "<<setw(15)<<" EMAIL "<<setw(18)<<" TELEFON "<<endl;
   cout<<"----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
  for(int i=0; i < ns; i++)
  {
      if( strcmp(STUD[i].grupa,nume)==0) 
      {
     X=false;
      cout<<setw(3)<<i+1<<setw(13)<<STUD[i].nume<<setw(13)<<STUD[i].prenume<<setw(6)<<STUD[i].varsta<<setw(22)<<STUD[i].idnp<<setw(11)<<STUD[i].grupa<<setw(14)<<STUD[i].mentor<<setw(8)<<STUD[i].ID<<setw(8)<<STUD[i].stare<<setw(20)<<STUD[i].email<<setw(13)<<STUD[i].telefon<<endl;
      if(X)
   {
        cout<<" DOESN'T EXIST "<<endl;
   }
 }
}
}


void findmentor()
 {	
  char ment[255];  bool X=true;
  cout<<"Enter mentor ::: ";
  cin>>ment;
  cout<<endl;
    cout<<setw(6)<<" Nr. "<<setw(11)<<" Nume "<<setw(13)<<" Prenume "<<setw(6)<<" Varsta "<<setw(15)<<" IDNP "<<setw(18)<<" GRUPA "<<setw(11)<<" MENTOR "<<setw(8)<<" ID "<<setw(8)<<" STARE "<<setw(15)<<" EMAIL "<<setw(18)<<" TELEFON "<<endl;
   cout<<"----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
  for(int i=0; i < ns; i++)
  {
      if( strcmp(STUD[i].mentor,ment)==0) 
      {
     X=false;
       cout<<setw(3)<<i+1<<setw(13)<<STUD[i].nume<<setw(13)<<STUD[i].prenume<<setw(6)<<STUD[i].varsta<<setw(22)<<STUD[i].idnp<<setw(11)<<STUD[i].grupa<<setw(14)<<STUD[i].mentor<<setw(8)<<STUD[i].ID<<setw(8)<<STUD[i].stare<<setw(20)<<STUD[i].email<<setw(13)<<STUD[i].telefon<<endl;
      if(X)
   {
        cout<<" DOESN'T EXIST "<<endl;
   }
 }
}
}


void findemail()
 {	
  char email[255];  bool X=true;
  cout<<"Enter email ::: ";
  cin>>email;
  cout<<endl;
    cout<<setw(6)<<" Nr. "<<setw(11)<<" Nume "<<setw(13)<<" Prenume "<<setw(6)<<" Varsta "<<setw(15)<<" IDNP "<<setw(18)<<" GRUPA "<<setw(11)<<" MENTOR "<<setw(8)<<" ID "<<setw(8)<<" STARE "<<setw(15)<<" EMAIL "<<setw(18)<<" TELEFON "<<endl;
   cout<<"----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
  for(int i=0; i < ns; i++)
  {
      if( strcmp(STUD[i].email,email)==0) 
      {
     X=false;
      cout<<setw(3)<<i+1<<setw(13)<<STUD[i].nume<<setw(13)<<STUD[i].prenume<<setw(6)<<STUD[i].varsta<<setw(22)<<STUD[i].idnp<<setw(11)<<STUD[i].grupa<<setw(14)<<STUD[i].mentor<<setw(8)<<STUD[i].ID<<setw(8)<<STUD[i].stare<<setw(20)<<STUD[i].email<<setw(13)<<STUD[i].telefon<<endl;
      if(X)
   {
        cout<<" DOESN'T EXIST "<<endl;
   }
 }
}
}

void findtel()
 {	
  char phone[100];  bool X=true;
  cout<<"Enter phone number ::: ";
  cin>>phone;
  cout<<endl;
    cout<<setw(6)<<" Nr. "<<setw(11)<<" Nume "<<setw(13)<<" Prenume "<<setw(6)<<" Varsta "<<setw(15)<<" IDNP "<<setw(18)<<" GRUPA "<<setw(11)<<" MENTOR "<<setw(8)<<" ID "<<setw(8)<<" STARE "<<setw(15)<<" EMAIL "<<setw(18)<<" TELEFON "<<endl;
   cout<<"----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
  for(int i=0; i < ns; i++)
  {
      if( strcmp(STUD[i].telefon,phone)==0) 
      {
     X=false;
     cout<<setw(3)<<i+1<<setw(13)<<STUD[i].nume<<setw(13)<<STUD[i].prenume<<setw(6)<<STUD[i].varsta<<setw(22)<<STUD[i].idnp<<setw(11)<<STUD[i].grupa<<setw(14)<<STUD[i].mentor<<setw(8)<<STUD[i].ID<<setw(8)<<STUD[i].stare<<setw(20)<<STUD[i].email<<setw(13)<<STUD[i].telefon<<endl;
      if(X)
   {
        cout<<" DOESN'T EXIST "<<endl;
   }
 }
}
}



 
 


void insertuser()
{
	   do
   { 
     system("cls");
    
     cout<<" USER ["<<nu+1<<"]"<<endl;
     cout<<" Enter username ::: ";  cin>>USER[nu].username;
     cout<<" Enter user password ::: "; cin>>USER[nu].userpass;
     cout<<" Enter user type ::: "; cin>>USER[nu].tip;
     cout<<" Enter user status ::: "; cin>>USER[nu].stare;
     
     USER[nu].id=nu; 
     nu++;
     nss=nu;
     
       cout<<"\n Enter next user ? Any Key to continue or ESC for exit "<<endl;
       STAT[UID].nrinsertuser++;
       STAT[nss].USERid;
       
   }while( _getch() != 27 );
 }
 
 
void showUSER()
{
 cout<<setw(6)<<" Nr. "<<setw(10)<<" Username "<<setw(10)<<" User password "<<setw(6)<<" Type "<<setw(6)<<" Status "<<setw(6)<<" ID "<<endl;
      cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
 
  for(int i=0; i < nu; i++)
     {
      cout<<setw(3)<<i+1<<setw(10)<<USER[i].username<<setw(11)<<USER[i].userpass<<setw(10)<<USER[i].tip<<setw(6)<<USER[i].stare<<setw(10)<<USER[i].id<<endl;
      cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
     }
 }
 
 void finduser()
 {
 	int ID;  bool X=true;
  cout<<"Enter ID ::: ";
  cin>>ID;
  cout<<endl;
   cout<<setw(6)<<" Nr. "<<setw(10)<<" Username "<<setw(10)<<" TIP "<<setw(6)<<" STARE "<<endl;
   cout<<"----------------------------"<<endl;
  for(int i=0; i < nu; i++)
  {
      if (ID==USER[i].id) 
      {
     X=false;
      cout<<setw(6)<<i+1<<setw(10)<<USER[i].username<<setw(10)<<USER[i].tip<<setw(6)<<USER[i].stare<<endl;
      if(X)
   {
        cout<<" DOESN'T EXIST "<<endl;
   }
 }
 
}
}

void edituserP()
{
		int x;
	
	cout<<" \nAre you sure you want to modify the requested information ?";
	cout<<" \nPress [Y] to continue editing or [any key] if you need to search the ID";
	
		char X;
	X=_getch();
	
		if( toupper(X) == 'Y' ) {  cout<<"\n Enter USER ID which you want to edit::";
		
	    cin>>x; x--;
	    
	    if( USER[x].id <= nu ) 
	    
		{
	 
		cout<<" \nCurrent Password ::: "<<USER[x].userpass<<endl;
		cout<<" New Password ::: "; cin>>USER[x].userpass;    
		
		}
	}
	else if( toupper(X) != 'Y' ) { adminMENU12();}
}


void edituserS()
{
		int x;
	
	cout<<" \nAre you sure you want to modify the requested information ?";
	cout<<" \nPress [Y] to continue editing or [any key] if you need to search the ID";
	
		char X;
	X=_getch();
	
		if( toupper(X) == 'Y' ) {  cout<<"\n Enter USER ID which you want to edit::";
		
	    cin>>x; x--;
	    
	    if( USER[x].id <= nu ) 
	    
		{
	 
		cout<<" \nCurrent State ::: "<<USER[x].stare<<endl;
		cout<<" New State ::: "; cin>>USER[x].stare;    
		
		}
	}
	else if( toupper(X) != 'Y' ) { adminMENU12();}
}


void edituserT()
{
		int x;
	
	cout<<" \nAre you sure you want to modify the requested information ?";
	cout<<" \nPress [Y] to continue editing or [any key] if you need to search the ID";
	
		char X;
	X=_getch();
	
		if( toupper(X) == 'Y' ) {  cout<<"\n Enter USER ID which you want to edit::";
		
	    cin>>x; x--;
	    
	    if( USER[x].id <= nu ) 
	    
		{
		cout<<" \nCurrent Type ::: "<<USER[x].tip<<endl;
		cout<<" New Type ::: "; cin>>USER[x].tip;    
		}
	}
	else if( toupper(X) != 'Y' ) { adminMENU12();}
}


void editUSER()
{
	cout<<" In order to edit the user information you must provide the USER ID "<<endl;
	
	cout<<" Press [Y] - to continue or [Any Key] to exit"<<endl;
	
	char X;
	int y;
	X=_getch();
	
	if( toupper(X) != 'Y' ) {cout<<"Find your USER ID using the next menu"; Sleep(2000);  adminMENU12();}
	
	else if ( toupper(X) == 'Y' ){
	
	do{
	
    cout<<"Edit Type (0-inactive; 1-active) ?  [Y]-YES / DOUBLE [Esc]-NO"<<endl;
    
	X=_getch();
	
	if( toupper(X) == 'Y' )  edituserT(); 
	
	 }while( _getch() != 27 );
	 
	do{
	 
	cout<<"Edit State ?  [Y]-YES / DOUBLE [Esc]-NO"<<endl;
	X=_getch();
	if( toupper(X) == 'Y' )  edituserS(); 	
  	}while( _getch() != 27 ); 
  	
  		do{
	  
  	cout<<"Edit Password ?  [Y]-YES / DOUBLE [N]-NO"<<endl;
	X=_getch();
	if( toupper(X) == 'Y' ) edituserP() ;
    }while( _getch() != 27 );
    
}
}





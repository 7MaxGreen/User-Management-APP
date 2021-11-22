
int login()
{
	char UN[100];
	char UP[100];
    int ID;
    int k=0;
 
 while(1)
 {
 
 system("cls");
	
 cout<<"\n\n\t Enter username      ::: ";
 
 cin>>UN;
 
 cout<<"\n\n\t Enter user password ::: ";
	
	while(1)
	{
		
	UP[k]=_getch();
	
	if (int(UP[k])==8)
	{
		if (k>0)
		{
			cout<<"\b \b";
			
			k--;
		}
	}
	
	else if(int(UP[k])==13)
	{
		
	UP[k]=0;

	bool OK=0;

	  for(int i=0; i<nu; i++)
	  { 
	    if( strcmp(USER[i].userpass, UP)==0 && strcmp(USER[i].username, UN)==0 )
	  	{
	  	  ID=i; OK=1; break;
		}	
	  }
	  
	if(!OK)
	{
		system("cls");
        cout<<"\n\n\t Wrong credentials! Please try again "<<endl;
        Sleep(1000);
        system("cls");
        cout<<" \n\n\t Enter username ::: ";
        cin>>UN;
        cout<<"\n\n\t  Enter password ::: ";
        k=0;
	}

	if(OK)
	{ 
	 system("cls");
	 
	STAT[ID].nrautent++; 
	cout<<"\n\n\t ~~~~~~~~~~~~ LOADING MENU ~~~~~~~~~~~~ "<<endl; 
    Sleep(1500);
	break;	
	}
	}
	 else
     	{
	     cout<<"*";
	     k++;	
	    }
}
		break;
}

   return ID;	
}


template <typename T>
void writeFILE(char *fn, T str[], int n )
{
	    fp = fopen(fn, "w+b");
    if( fp == NULL ) {  cout<<" Eroare:: Fisierul "<<fn<<" nu exista "<<endl; contorERROR++;  }
     else {  cout<<" OK w+b "<<endl; }
    fwrite( str, sizeof(str[0]), n, fp);
 fclose(fp);
}


template <typename T>
int readFILE(char *fn,T str[])
{
	fp = fopen(fn, "r+b");
    
    if( fp == NULL ) {  cout<<" Eroare:: Fisierul "<<fn<<" nu exista "<<endl;  contorERROR++;  }
     else {  cout<<"\n OK "<<fn<<endl; }
    
    int xxx = fread( str, sizeof(str[0]), 1000, fp); 
	      
    fclose(fp);
  
   return xxx;
}


void readFILEconf()
{
	fp = fopen("conf.ini", "r+");
    
    if( fp == NULL ) {  cout<<" Eroare:: Fisierul conf.ini nu exista "<<endl; system("pause"); exit(0);  }
     else {  cout<<"\n OK conf.ini "<<endl; }
    
    char c[2];
      fscanf(fp,"%s%s%s%s",&FILEuser,&FILEstud, &FILEstat, &c); 
	     
	strcpy(collor,"color ");     
	strcat(collor,c);
		  
    fclose(fp);
 
}




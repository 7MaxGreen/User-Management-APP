void reportALL()
{
   int v;
  cout<<"\n\t\t REPORT ALL STUDENTS"<<endl; 
  cout<<"\n\t\t PRESS [1] ACTIVE STUDENTS"<<endl;
  cout<<"\t\t PRESS [2] INACTIVE STUDENTS"<<endl;
  cout<<"\t\t PRESS [3] ALL STUDENTS"<<endl;
  cout<<endl;
  cin>>v;
  
    fp = fopen("raportALL.doc", "w+");
    
    if( fp == NULL ) {  cout<<" Eroare:: Fisierul nu exista "<<endl;  }
     else {  cout<<"\n OK "<<endl; }
    
    fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    fprintf(fp," %3s %13s %13s %8s %14s %9s %18s\n"," Nr. ", " Name "," Surname "," Age "," IDNP "," Group "," Phone number ");
    fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	  
 if (v==1)
 {
  for(int i=0; i < ns; i++)
     {
     	if( STUD[i].stare==1)
     	{
		 
      fprintf(fp," %3d %13s %13s %8d %14s %9s %15s\n",i,STUD[i].nume,STUD[i].prenume,STUD[i].varsta,STUD[i].idnp,STUD[i].grupa,STUD[i].telefon);	
      fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        }
     }
 }	  
 
  if (v==0)
 {
  for(int i=0; i < ns; i++)
     {
     	if( STUD[i].stare==0)
     	{
		 
      fprintf(fp," %3d %13s %13s %8d %14s %9s %15s\n",i,STUD[i].nume,STUD[i].prenume,STUD[i].varsta,STUD[i].idnp,STUD[i].grupa,STUD[i].telefon);	
      fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        }
     }
 }	
 
  if (v==3)
 {
  for(int i=0; i < ns; i++)
     {

      fprintf(fp," %3d %13s %13s %8d %14s %9s %15s\n",i,STUD[i].nume,STUD[i].prenume,STUD[i].varsta,STUD[i].idnp,STUD[i].grupa,STUD[i].telefon);	
      fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        
     }
 }	    
    fclose(fp);
    
    system("raportALL.doc");
}


 void reportGROUP()
 {
  char group[100]; int a;
  cout<<"Enter group name ::: ";
  cin>>group;
  cout<<"\n\t\t REPORT STUDENTS BY GROUP"<<endl;
  cout<<"\n\t\t PRESS [1] ACTIVE STUDENTS"<<endl;
  cout<<"\t\t PRESS [2] INACTIVE STUDENTS"<<endl;
  cout<<"\t\t PRESS [3] ALL STUDENTS"<<endl;
  cout<<endl;
  cin>>a;
  
    fp = fopen("raportGROUP.doc", "w+");
    
    if( fp == NULL ) {  cout<<" Eroare:: Fisierul nu exista "<<endl;  }
     else {  cout<<"\n OK "<<endl; }
    
    fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    fprintf(fp," %3s %13s %13s %8s %14s %9s %18s\n"," Nr. ", " Name "," Surname "," Age "," IDNP "," Group "," Phone number ");
    fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");  
 
 if (a==1)
 {
 
  for(int i=0; i < ns; i++)
  {
      if(STUD[i].stare==1 && strcmp(STUD[i].grupa,group)==0) 
      {
      fprintf(fp," %3d %13s %13s %8d %14s %9s %15s\n",i,STUD[i].nume,STUD[i].prenume,STUD[i].varsta,STUD[i].idnp,STUD[i].grupa,STUD[i].telefon);	
      fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      }
  }
 }
   
   else if (a==2)
   {
   	  for(int i=0; i < ns; i++)
       {
        if(STUD[i].stare==0 && strcmp(STUD[i].grupa,group)==0) 
        {
         fprintf(fp," %3d %13s %13s %8d %14s %9s %15s\n",i,STUD[i].nume,STUD[i].prenume,STUD[i].varsta,STUD[i].idnp,STUD[i].grupa,STUD[i].telefon);	
         fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        }
       }
  }
 
 else if (a==3)
 {
 	for(int i=0; i < ns; i++)
     {
      if(strcmp(STUD[i].grupa,group)==0) 
      {
      fprintf(fp," %3d %13s %13s %8d %14s %9s %15s\n",i,STUD[i].nume,STUD[i].prenume,STUD[i].varsta,STUD[i].idnp,STUD[i].grupa,STUD[i].telefon);	
      fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      }
     }
 }
     fclose(fp);
    system("raportGROUP.doc");
}


 void reportAGE()
 {
  int age;  int b;
  cout<<"Enter student's age ::: ";
  cin>>age;
  cout<<"\n\t\t REPORT STUDENTS BY AGE"<<endl;
  cout<<"\n\t\t PRESS [1] ACTIVE STUDENTS"<<endl;
  cout<<"\t\t PRESS [2] INACTIVE STUDENTS"<<endl;
  cout<<"\t\t PRESS [3] ALL STUDENTS"<<endl;
  cout<<endl;
  cin>>b;
  
    fp = fopen("raportAGE.doc", "w+");
    
    if( fp == NULL ) {  cout<<" Eroare:: Fisierul nu exista "<<endl;  }
     else {  cout<<"\n OK "<<endl; }
    
    fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    fprintf(fp," %3s %13s %13s %8s %14s %9s %18s\n"," Nr. ", " Name "," Surname "," Age "," IDNP "," Group "," Phone number ");
    fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");  
 
 if(b==1)
 {

  for(int i=0; i < ns; i++)
  {
      if(STUD[i].stare==1 && age==STUD[i].varsta) 
      {
      fprintf(fp," %3d %13s %13s %8d %14s %9s %15s\n",i,STUD[i].nume,STUD[i].prenume,STUD[i].varsta,STUD[i].idnp,STUD[i].grupa,STUD[i].telefon);	
      fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
     }
   } 
 }
 
 else if(b==2)
 {
    for(int i=0; i < ns; i++)
  {
      if(STUD[i].stare==0 && age==STUD[i].varsta) 
      {
      fprintf(fp," %3d %13s %13s %8d %14s %9s %15s\n",i,STUD[i].nume,STUD[i].prenume,STUD[i].varsta,STUD[i].idnp,STUD[i].grupa,STUD[i].telefon);	
      fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      }
  } 	
 }
 
 else if (b==3)
 {
     for(int i=0; i < ns; i++)
  {
      if(STUD[i].stare==0 && age==STUD[i].varsta) 
      {
      fprintf(fp," %3d %13s %13s %8d %14s %9s %15s\n",i,STUD[i].nume,STUD[i].prenume,STUD[i].varsta,STUD[i].idnp,STUD[i].grupa,STUD[i].telefon);	
      fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      }
  } 	
 }
     fclose(fp);
    system("raportAGE.doc");
}


void reportMENTOR()
 {
  char mentor[100];  int c;
  cout<<"Enter mentor's name ::: ";
  cin>>mentor;
  cout<<"\n\t\t REPORT STUDENTS BY MENTOR"<<endl;
  cout<<"\n\t\t PRESS [1] ACTIVE STUDENTS"<<endl;
  cout<<"\t\t PRESS [2] INACTIVE STUDENTS"<<endl;
  cout<<"\t\t PRESS [3] ALL STUDENTS"<<endl;
  cout<<endl;
  cin>>c;
  
    fp = fopen("raportMENTOR.doc", "w+");
    
    if( fp == NULL ) {  cout<<" Eroare:: Fisierul nu exista "<<endl;  }
     else {  cout<<"\n OK "<<endl; }
    
    fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    fprintf(fp," %3s %13s %13s %8s %14s %9s %18s\n"," Nr ", " Name "," Surname "," Age "," IDNP "," Group "," Phone number ");
    fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");  
 
 if (c==1)
 {
  for(int i=0; i < ns; i++)
  {
      if(STUD[i].stare==1 && strcmp(STUD[i].mentor,mentor)==0) 
      {

      fprintf(fp," %3d %13s %13s %8d %14s %9s %15s\n",i,STUD[i].nume,STUD[i].prenume,STUD[i].varsta,STUD[i].idnp,STUD[i].grupa,STUD[i].telefon);	
      fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      
      }
   }
 }
 
 else if(c==2)
 {
   for(int i=0; i < ns; i++)
  {
      if(STUD[i].stare==0 && strcmp(STUD[i].mentor,mentor)==0) 
      {

      fprintf(fp," %3d %13s %13s %8d %14s %9s %15s\n",i,STUD[i].nume,STUD[i].prenume,STUD[i].varsta,STUD[i].idnp,STUD[i].grupa,STUD[i].telefon);	
      fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      
      }
   }
 }	
 
 else 
 {
 	for(int i=0; i < ns; i++)
  {
      if(strcmp(STUD[i].mentor,mentor)==0) 
      {

      fprintf(fp," %3d %13s %13s %8d %14s %9s %15s\n",i,STUD[i].nume,STUD[i].prenume,STUD[i].varsta,STUD[i].idnp,STUD[i].grupa,STUD[i].telefon);	
      fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      
     }
  }
 }
     fclose(fp);
    system("raportMENTOR.doc");
} 
 
 
 void reportSTAT()
{
	fp = fopen("raportSTATS.doc", "w+");
    
    if( fp == NULL ) {  cout<<" Eroare:: Fisierul nu exista "<<endl;  }
     else {  cout<<"\n OK "<<endl; }
    
    fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    fprintf(fp," %13s %8s %4s %4s %4s %4s %4s %4s %4s\n"," NAME "," ID "," ACC TYPE "," STATE "," US ACCESS "," US INSERT"," STUD INSERT "," STUD EDIT "," DIS STUD ");
    fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");  
 
  for(int i=0; i < ns; i++)
     {
      fprintf(fp," %13s %8d %4d %8d %8d %14d %11d %11d %8d\n",USER[i].username,USER[i].id,USER[i].tip,USER[i].stare,STAT[i].nrautent,STAT[i].nrinsertuser,STAT[i].nrinsertstud,STAT[i].nreditstud,STAT[i].nrdezstud);	
      fprintf(fp,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
     }
	      
    fclose(fp);
    
    system("raportSTATS.doc");
}

#include <iostream> 
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <conio.h>
using namespace std;

    struct user
    {
     char username[100];
     char userpass[100];
     bool tip; // 0 - user, 1 - admin
     int stare=1; 
     int id;
    };
    
 user X[1000];
 
struct stud
{
	char nume[100];
	char prenume[100];
	int  varsta;
	char  idnp[13];
	char grupa[100];
	char mentor[100];
	int  userID;
	bool stare=1;
	char email[100];
	char  telefon[20];

};
 
 stud XX[1000];



struct statistica
{
   int USERid;
   int nrautent;
   int nrinsertstud;
   int nreditstud;
   int nrdezstud;
   
};

statistica x[1000];

int main()
{  
  srand(time(0));  
  
   strcpy(X[0].username,"admin");
   strcpy(X[0].userpass,"admin");
   X[0].tip=1;
   X[0].id=0;
   
   FILE *fp;
   
    fp = fopen("users.step", "w+b");
    if( fp == NULL ) {  cout<<" Eroare W+B "<<endl; exit(0);  }
     else {  cout<<" OK w+b "<<endl; }
    fwrite( X, sizeof(user), 1, fp);
 fclose(fp);
 
 

 return 0;
}

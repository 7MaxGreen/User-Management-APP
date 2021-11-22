
struct user
{
	char username[100];
	char userpass[100];
	int stare=1;
	bool tip;
	int  id;
};



struct stud
{
	char nume[100];
	char prenume[100];
	int  varsta;
	char idnp[20];
	char grupa[100];
	char mentor[100]; // 
	int  userID;
	bool stare=1;
	char email[100]; //
	char  telefon[100];  //
    int ID;
};

struct statistica
{
   int USERid;
   int nrautent=0;
   int nrinsertuser=0;
   int nrinsertstud=0;
   int nreditstud=0;
   int nrdezstud=0;
   
};

user USER[1000];
int nu=0;

stud STUD[1000];
int ns=0;

statistica STAT[1000];
int nss=0;

FILE *fp;

char FILEuser[200];   
char FILEstud[200];   
char FILEstat[200];   
char collor[10];
int contorERROR=0;

int UID;

int SYSTEM;

int NIVEL=1;





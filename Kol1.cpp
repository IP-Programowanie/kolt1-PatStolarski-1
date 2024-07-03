#include "Wybor.h"

using namespace std;

/*
* Uwaga: Zadania kod rozwiazania zaania umieszczać pomiędzy #ifdef a #endif. 
*/

#ifdef Kol_1
//Blok 1

struct StrX {
	float X1;
	char X2;
 };

StrX *wsk = new StrX tab{ 27.43,"X" };

void Allocate Table(StrX *wsk, int n)
{
	StrX* wsk1 = new StrX tab1[n];

	*wsk1 = strcpy(*wsk);

	*wsk[-1] = n;
}

void Deallocate(StrX *wsk)
{
	delete[] wsk;
}


void SaveToFile(StrX* wsk)
{
	File = *fopen("instance.txt", w);

	for (int i = 0; i < 2; i++)
	{
		fputs(wsk->X1, File);
		fputs(wsk->X2, File);
	}

	fclose(File);
	

}

void ReadFromFile()
{
	File = *fopen("instance.txt", r);

	for (int i = 0; i < 2; i++)
	{
		fread(*wsk,File);
	}


	fclose(File);
}


int main()
{
	 

	
}

#endif

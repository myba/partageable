#include "Composant3.h"



// Composant2.cpp : Defines the routines for the DLL.
//

// declaration des fonctions internes
int addition_interne(int a1, int a2);



int composant3(int p1, int p2)
{
	return addition_interne(p1, p2);
}

int addition_interne(int a1, int a2)
{
	return a1 + a2;
}

char * getComposant3Version()
{
	return "Composant 3 version " COMPOSANT3_VERSION_STR;
}

#include "Composant1.h"
#include "Composant3.h"

// declaration des fonctions internes
int addition_interne(int a1, int a2);



int composant1(int p1, int p2)
{
	return composant3(p1,p2);
}

int addition_interne(int a1, int a2)
{
	return a1+a2;
}

char * getComposant1Version()
{
	return "Composant 1 version " COMPOSANT1_VERSION_STR;
}

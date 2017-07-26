// EcoEarth.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "EcoEarth.h"


// This is an example of an exported variable
ECOEARTH_API int nEcoEarth=0;

// This is an example of an exported function.
ECOEARTH_API int fnEcoEarth(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see EcoEarth.h for the class definition
CEcoEarth::CEcoEarth()
{
	return;
}

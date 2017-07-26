// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the ECOEARTH_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// ECOEARTH_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ECOEARTH_EXPORTS
#define ECOEARTH_API __declspec(dllexport)
#else
#define ECOEARTH_API __declspec(dllimport)
#endif

// This class is exported from the EcoEarth.dll
class ECOEARTH_API CEcoEarth {
public:
	CEcoEarth(void);
	// TODO: add your methods here.
};

extern ECOEARTH_API int nEcoEarth;

ECOEARTH_API int fnEcoEarth(void);

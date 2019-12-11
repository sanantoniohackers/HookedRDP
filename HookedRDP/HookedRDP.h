// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the HOOKEDRDP_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// HOOKEDRDP_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef HOOKEDRDP_EXPORTS
#define HOOKEDRDP_API __declspec(dllexport)
#else
#define HOOKEDRDP_API __declspec(dllimport)
#endif

// This class is exported from the dll
class HOOKEDRDP_API CHookedRDP {
public:
	CHookedRDP(void);
	// TODO: add your methods here.
};

extern HOOKEDRDP_API int nHookedRDP;

HOOKEDRDP_API int fnHookedRDP(void);

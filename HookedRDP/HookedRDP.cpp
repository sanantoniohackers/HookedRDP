// HookedRDP.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "HookedRDP.h"


// This is an example of an exported variable
HOOKEDRDP_API int nHookedRDP=0;

// This is an example of an exported function.
HOOKEDRDP_API int fnHookedRDP(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CHookedRDP::CHookedRDP()
{
    return;
}

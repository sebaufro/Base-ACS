#include "[nombreClase].h"


[nombreClase]::[nombreClase](
		    const ACE_CString name,
		    maci::ContainerServices *containerServices) :
        ACSComponentImpl(name, containerServices)
{

  component_name = name.c_str();
}

[nombreClase]::~[nombreClase]()
{
}

void [nombreClase]::initialize()
        throw (acsErrTypeLifeCycle::acsErrTypeLifeCycleExImpl)
{

}

void [nombreClase]::execute()
        throw (acsErrTypeLifeCycle::acsErrTypeLifeCycleExImpl)
{
}

void [nombreClase]::cleanUp()
{

}

void [nombreClase]::aboutToAbort()
{
} 




/* --------------- [ MACI DLL support functions ] -----------------*/
#include <maciACSComponentDefines.h>
MACI_DLL_SUPPORT_FUNCTIONS([nombreClase])
/* ----------------------------------------------------------------*/


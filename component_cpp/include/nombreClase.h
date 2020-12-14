#ifndef _[NOMBRECLASE]_H_
#define _[NOMBRECLASE]_H_

#include <[Nombre_idl]S.h>
#include <acsComponentSmartPtr.h>
#include <maciSimpleClient.h>

class [nombreClase]: public virtual acscomponent::ACSComponentImpl,
  public POA_[Nombre_modulo]::[Nombre_idl]
{
        public:
                [nombreClase](const ACE_CString name, maci::ContainerServices * containerServices);
                virtual ~[nombreClase]();

		virtual void initialize(void) throw (acsErrTypeLifeCycle::acsErrTypeLifeCycleExImpl);
		virtual void execute(void) throw (acsErrTypeLifeCycle::acsErrTypeLifeCycleExImpl);
		virtual void cleanUp(void);
		virtual void aboutToAbort(void);

		

        private:
                std::string component_name;
};

#endif

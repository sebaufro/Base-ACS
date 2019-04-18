package [directorio];

import java.util.logging.Logger;

import [pragma_idl].[Nombre_Modulo].[Nombre_idl]Operations;
import [pragma_idl].[Nombre_Modulo].[Nombre_idl]POATie;
import alma.acs.component.ComponentLifecycle;
import alma.acs.container.ComponentHelper;


public class [nombre_helper] extends ComponentHelper
{

        public [nombre_helper](Logger containerLogger)
        {
                super(containerLogger);
        }


        protected ComponentLifecycle _createComponentImpl()
        {
                return new [nombre]();
        }


        protected Class _getPOATieClass()
        {
                return [nombre_idl]POATie.class;
        }


        protected Class _getOperationsInterface()
        {
                return [nombre_idl]Operations.class;
        }

}

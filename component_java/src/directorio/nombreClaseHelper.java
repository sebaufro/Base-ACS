package [directorio];

import java.util.logging.Logger;

import [pragma].[Nombre_modulo].[Nombre_idl]Operations;
import [pragma].[Nombre_modulo].[Nombre_idl]POATie;
import alma.acs.component.ComponentLifecycle;
import alma.acs.container.ComponentHelper;


public class [nombreClaseHelper] extends ComponentHelper
{

        public [nombreClaseHelper](Logger containerLogger)
        {
                super(containerLogger);
        }


        protected ComponentLifecycle _createComponentImpl()
        {
                return new [nombreClase]();
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

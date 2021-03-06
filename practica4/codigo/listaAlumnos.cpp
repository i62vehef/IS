#include "listaAlumnos.hpp"

std::vector<int> ListaAlumnos::buscarAlumno(int const &criterio, std::string const &valor)
{
	
	//vector auxiliar para guardar los indices en el vector de los alumnos encontrados
	//valdría con una variable si solo existe un alumno
	std::vector<int> aux(0);

	//variable para elegir el alumno en caso de coincidencia multiple
	int opcion=0;

	//switch para buscar segun un criterio u otro
	switch(criterio)
	{
		case 1://DNI

			for(int i=0;i<tamClase();i++)//Busqueda del alumno
			{
				if(getAlumno(i).getDNI().compare(valor)==0)
					aux.push_back(i);
			}
		break;
		case 2://Apellido

			//Se busca el alumno
			for(int i=0;i<tamClase();i++)
			{
				if(getAlumno(i).getApellido().compare(valor)==0)
					aux.push_back(i);
			}
		break;
		case 3://Grupo
		//Existen grupos de 1, 2 o incluso 3 personas, nunca mas de 3

			for(int i=0;i<tamClase();i++)
			{
				if(getAlumno(i).getEquipo()==atoi(valor.c_str()))
					aux.push_back(i);
			}			
		break;
		default:
			std::cout<<BIRED<<"ERROR el criterio introducido no es valido\n";
		break;
	}
	return aux;
}
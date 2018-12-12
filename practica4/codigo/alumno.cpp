#include "alumno.hpp"

// Sobrecarga del operador de salida
ostream &operator<<(ostream &stream, Alummno const &alumno)
{

	stream<<alumno.getApellidos()<<","<<alumno.getNombre()<<" "<<alumno.getDNI()<<" "<<alumno.getTelefono()<<" "<<alumno.getDomicilio()<<" "<<alumno.getCurso()<<" "<<alumno.getEmail()<<" "<<alumno.getEquipo()<<std::endl;

	return stream;
}

istream &operator>>(istream &stream, Alumno &alumno)
{

	std::string str1;

	getline(stream, str1, ' ');
	alumno.setApellidos(str1);
	getline(stream, str1, ',');
	alumno.setNombre(str1);
	getline(stream, str1, ' ')
	alumno.setDNI(str1);
	getline(stream, str1, ' ')
	alumno.setTelefono(atoi(str1));
	getline(stream, str1, ' ')
	alumno.setDomicilio(str1);
	getline(stream, str1, ' ')
	alumno.setCurso(atoi(str1));
	getline(stream, str1, ' ')
	alumno.setEmail(str1);
	getline(stream, str1, '\n');
	alumno.setEquipo(atoi(str1.c_str()));

	return stream;
}
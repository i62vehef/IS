### **Borrar Alumno**

**ID:** 005

**Breve Descripción:** El sistema borrará un alumno

**Actores principales:** Profesor

**Actores secundarios:** Alumno

**Precondiciones:** 

 1. El alumno debe estar registrado.

 **Flujo principal:**

  1. El sistema necesita borrar un alumno.
  2. Se pide el DNI o los apellidos del alumno.
  3. El sistema busca el alumno.
  4. Se borran los datos del alumno.
  5. El sistema mostrará un mensaje confirmando que el alumno ha sido borrado.
  
**Postcondiciones:**

  1. El sistema borrará todos los datos del alumno.

 **Flujo alternativo:**

  3a. Si no encuentra el alumno, muestra un mensaje de error y vuelve al paso anterior (pedir datos).

  3b. Si, al buscar por apellidos, se encuentran varios alumnos, se mostrarán sus datos (apellidos, nombre y DNI).
      Después se pedirá al usuario que eliga entre los encontrados para borrarlo.

  5a. Si no se eliminan correctamente los datos, se muestra un mensaje de error y vuelve al menú principal.

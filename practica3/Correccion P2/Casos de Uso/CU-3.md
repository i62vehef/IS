### **Cargar Datos**

**ID:** 003

**Breve descripción:** El sistema debe poder cargar una lista de alumnos.

**Actores principales:** Profesor Coordinador

**Actores secundarios:** Alumno


**Precondiciones:**

 1. El sistema debe tener una lista de alumnos en un fichero o copia de seguridad.

 2. El usuario debe ser coordinador.

**Flujo principal:**

  1. El sistema necesita cargar de un fichero datos sobre alumnos.
  2. El sistema pregunta cual es el fichero o copia a cargar.
  3. Se carga la lista de alumnos en el sistema desde el fichero indicado.
  4. El sistema mostrará un mensaje de que la lista se cargó correctamente.

**Postcondiciones:**

 1. El sistema debe tener guardados todos los datos de la lista de alumnos que hubiese en la copia de seguridad.

 **Flujo alternativo:**

 2a. Si no se encuentra el fichero, se muestra un mensaje de error.

 2b. Se vuelve al menú principal.

 3a. El sistema mostrará un mensaje de error si la lista no se cargó correctamente.

 3b. Se vuelve al menú principal.

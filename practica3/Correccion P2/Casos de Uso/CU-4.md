### **Crear Copia de Seguridad**

**ID:** 004

**Breve descripción:** El sistema debe crear una copia de seguridad

**Actores principales:** Profesor Coordinador

**Actores secundarios:** Alumno

**Precondiciones:**

 1. El sistema debe tener datos de alumnos guardados.

 2. El usuario debe ser coordinador.

 **Flujo principal:**

  1. El sistema necesita crear una copia de seguridad.
  2. El sistema creará una copia de seguridad sin necesidad de sobrescribir la anterior.
  3. Se muestra un mensaje de que se ha grabado el fichero correctamente.

**Postcondiciones:**

 1. El sistema crea la copia de seguridad.

 **Flujo alternativo:**

 2a. El sistema mostrará un mensaje de error si no se creó la copia de seguridad y vuelve al menú principal.

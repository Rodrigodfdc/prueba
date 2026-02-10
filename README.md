
_Este proyecto ha sido creado como parte del currículo de 42 por Rodrigodfdc._

## Descripción

Este repositorio contiene una implementación de utilidades de la biblioteca C ("libft").
El objetivo del proyecto es recrear funciones habituales de la biblioteca estándar de C
(gestión de cadenas, memoria, listas enlazadas, conversiones, etc.) para entender su
comportamiento, practicar programación en C y familiarizarse con compilación y manejo
de bibliotecas estáticas.

Breve visión general:
- Implementaciones en C de funciones como `ft_strlen`, `ft_strncmp`, `ft_memcpy`,
	`ft_split`, `ft_itoa` y funciones para listas enlazadas (`ft_lst*`).
- Un único header `libft.h` con las declaraciones públicas.
- Un `Makefile` para compilar la biblioteca estática `libft.a` y limpiar artefactos.

## Instrucciones

Requisitos mínimos:
- Compilador C (gcc/clang) compatible con C99.
- Make.

Pasos básicos:

1. Compilar la biblioteca:

```bash
make
```

2. Comandos de limpieza proporcionados por el `Makefile`:

```bash
make clean   # elimina objetos intermedios
make fclean  # elimina objetos y la biblioteca estática
make re      # fclean + make
```

3. Enlazar `libft.a` a un programa de ejemplo:

```bash
# Compila la biblioteca primero (make)
gcc -Wall -Wextra -Werror -I. -L. -lft ejemplo.c -o ejemplo
# o compilar manualmente:
gcc -Wall -Wextra -Werror -I. ejemplo.c libft.a -o ejemplo
```

Notas:
- Sustituya `ejemplo.c` por su programa de prueba. Asegúrese de que el `Makefile`
	genere `libft.a` en la raíz o ajuste las rutas al enlazar.

## Recursos

Referencias recomendadas para profundizar:
- Documentación y páginas man de la librería estándar de C (libc).
- Estándares ISO C (C99/C11) y material sobre punteros y manejo de memoria.
- Documentación de `make` y buenas prácticas para `Makefile`.
- Artículos y tutoriales sobre implementación de funciones de la libc y manejo de listas enlazadas.

Uso de IA
- Este `README.md` fue generado con asistencia de una IA para redactar y organizar
	la documentación. No se usó IA para implementar la lógica de las funciones C
	dentro del repositorio; sólo se utilizó para elaborar el texto de este archivo
	(estructura, redacción y consejos de uso). Si se usó IA en otra parte del proyecto,
	documente aquí las tareas específicas (por ejemplo: generación de tests, corrección
	de estilo, generación de ejemplos).

## Estructura del repositorio (resumen)

- Archivos fuente `.c` con implementaciones de funciones (por ejemplo `ft_strlen.c`).
- `libft.h` — encabezado público con prototipos y typedefs.
- `Makefile` — reglas para compilar `libft.a` y limpiar.

Puede listar el contenido con `ls -1` para ver todos los archivos fuente.

## Ejemplos de uso

- Después de compilar (`make`), incluya `libft.h` en sus fuentes y enlace con `-lft`.
- Cree pequeños programas de prueba para validar cada función (por ejemplo, comparar
	el resultado de `ft_strlen` con `strlen`).

## Autor y licencia

- Autor: Rodrigodfdc (propietario del repositorio)
- Licencia: Sin licencia especificada — añada un archivo `LICENSE` si desea
	declarar una licencia explícita.

---

Si desea que añada los nombres de otros login asociados al proyecto (por ejemplo
si trabajó en pareja o grupo), indíquelos y actualizaré la primera línea.

"""Una universidad desea crear un programa para
contabilizar los cursos que tiene cada alumno.
Para ello se debe realizar primero una aplicación
de consola la cual debe solicitar el nombre de un
alumno y la cantidad de cursos en la que se
encuentra inscripto.
Estos dos valores deben almacenarse como una
lista de dos elementos (el nombre y la cantidad
de cursos como un número entero) en una lista
de alumnos."""

alumnos = []
opcion = "0"
while True :
    print ("introduzca una opcion:")
    print("1)Añadir un alumno a la lista")
    print("2)Ver lista de alumnos")
    print("3)Salir")
    opcion = input("-->")
    if opcion == "1":
        nombre = input ("Introduzca un nombre:")
        alumnos.append(nombre)#agrego nombre a lista#
        print ("¡agregado!")
    elif opcion == "2":
        print (alumnos)
    elif opcion == "3":
        print ("fin :(")
        break
    else:
        print ("ERROR")

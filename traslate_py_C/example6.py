from math import pi

opcion = 0
while opcion != 4:
    print "Escoge una opcion: "
    print "1) Calcular el diametro."
    print "2) Calcular el perimetro."
    print "3) Calcular el area."
    print "4) Salir."
    
    opcion = int(raw_input("Teclea 1, 2, 3 o 4 y pulsa el retorno de carro: "))
    radio = float(raw_input("Dame el radio de un circulo: "))

    if opcion == 1:
        diametro = 2 * radio
        print "El diámetro es", diametro
    elif opcion == 2:
        perimetro = 2 * pi * radio
        print "El perimetro es", perimetro
    elif opcion == 3:
        area = pi * radio ** 2
        print "El  area es", area
    elif opcion < 0 or opcion > 4:
        print "S ́lo hay cuatro opciones: 1, 2, 3 o 4. T ́has tecleado", opcion

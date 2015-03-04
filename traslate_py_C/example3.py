from math import sqrt

x1 = float(raw_input("Punto 1, coordenada x: "))
y1 = float(raw_input("Punto 1, coordenada y: "))
x2 = float(raw_input("Punto 2, coordenada x: "))
y2 = float(raw_input("Punto 2, coordenada y: "))

dx = x2 - x1
dy = y2 - y1


distancia = sqrt(dx **2 + dy**2)
print "la distancia entre los puntos es: ", distancia

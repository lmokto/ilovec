n = int(raw_input("Dame un numero: "))

m = int(raw_input("Dame otro numero: "))

if n * m == 100:
    print "El producto %d * %d es igual a 100" % (n, m)
else:
    print "El producto %d * %d es distinto de 100" % (n, m)

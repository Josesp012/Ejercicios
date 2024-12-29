#Promedio aprobado o reprobado

mat=int(input("Calificacion de matematicas "))
esp=int(input("Calificacion de español "))
ing=int(input("Calificacion de ingles "))

prom=(mat+esp+ing)/3

if prom>=6:
    print("Promedio ", round(prom,2) , "Aprobado")
else:
    print("Promedio ", round(prom,2) , "Reprobado")
print("Fin")
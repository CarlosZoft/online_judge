n = input().split()

lista = [int(i) for i in n]

cont = 1
for i in range(1, int(lista[1]/lista[0]) + 1):
	for i in range(1, lista[0] + 1):
		if i != 1:
			print(" ", end="")
			
		print(cont, end="")
		cont+=1
       
	print();
    
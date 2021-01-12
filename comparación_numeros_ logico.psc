Proceso numero_mayor
	
	Definir n1, n2 Como Entero
	
	Escribir "Ingrese un primer numero: "
	Leer n1
	
	Escribir "Ingrese un segundo numero: "
	Leer n2
	si n1=0 y n2=0 Entonces
		Escribir "Son numeros neutros"
	SiNo
		Si n1>n2 Entonces
			Escribir "El numero ", n1, " es mayor que ", n2
		SiNo
				Escribir "El numero ", n2 " es mayor que ", n1
			
		FinSi
	FinSi
FinProceso

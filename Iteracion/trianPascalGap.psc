Algoritmo TrianguloPascal
//	{ programa que imprime en pantalla el tri�ngulo de 	}
//	{ Tartaglia dado por teclado el n�mero de la �ltima fila	}
	MAX=20
	gap=". "
	Repetir 
		Escribir("Introduzca N� de filas: ")
		Leer filas 
	Hasta que (filas>0)y(filas<=MAX)
	n<-0
	Mientras (n<=filas) Hacer	//{ Espacios en blanco principio l�nea	}
			m<-filas-n
			Mientras(m>0) Hacer	
				Escribir Sin Saltar " "
				m<-m-1
			Finmientras
			//{ Coeficientes de la fila	}
			coef<-1
			Escribir sin saltar coef,gap
			m<-1
			Mientras(m<=n) Hacer
				coef<- coef*(n-m+1)/m
				Escribir sin saltar coef,gap
				m<-m+1
			Finmientras
			Escribir(" ")
			n<-n+1
	Finmientras
Finalgoritmo
						

Algoritmo temperaturaMaxima
	
	Escribir "Introduzca numero de datos: " 
	Leer n
	Si n=0 
		Entonces
		Escribir "Sin datos a leer"
	SiNo	
		Escribir("Introd. temperatura: ")
		leer t
		tmax <-t
		i <- 2
		Mientras i<=n Hacer
			Escribir ("Introd. temperatura: ")
			Leer t 
			Si t>tmax Entonces
				tmax<- t
			Fin si
			i<- i+1
		Fin mientras
		Escribir "Temp. m�xima: ", tmax
	Fin si
Fin algoritmo


Algoritmo temperaturaMaxima
	Tfin<- -999
	Escribir "Introd. Temp. (Fin=",Tfin, " ): "
	leer t 
	tmax<-t
	Si (t=	Tfin) Entonces final<- verdadero
	Finsi
	
	Mientras  no final Hacer
		Escribir "Introd. Temp. (Fin=",Tfin, " ): "
		Leer t
		Si (t=Tfin) Entonces
			final<-verdadero
		Sino	Si (t>tmax) Entonces
				tmax<-t
			Fin si
		Fin si
	Fin mientras
	Si (tmax!=Tfin) Entonces
		Escribir "Temperatura m�xima: ", tmax 
	Sino	Escribir "Sin datos v�lidos" 
	Fin si
Fin algoritmo

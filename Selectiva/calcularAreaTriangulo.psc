Algoritmo calcularAreaTriangulo
// programa que calcula el �rea de un tri�ngulo	
// dadas las longitudes de sus lados	
Var
	l1,l2,l3: real	// longitudes de los lados
	s: real		// semiper�metro 
	area: real		// �rea del tri�ngulo

	
	Escribir "Introducir longitudes de lados: "
	Leer l1,l2,l3
	Si (l1<=0)o(l2<=0)o(l3<=0) Entonces
		Escribir "Error en datos de entrada"
	Sino       Si(l1<(l2+l3))y(l2<(l1+l3))y(l3<(l1+l2))
			Entonces
			s<-(l1+l2+l3)/2
			area<-raiz(s*(s-l1)*(s-l2)*(s-l3))
			Escribir "Area=",area
		Sino		Escribir "No es un triangulo" 
		Finsi
	Finsi
Finalgoritmo

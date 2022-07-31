package Ejercicio7;
import java.util.*;

public class NumPositivoNegativoFor {
	public static void main (String[]args){
		int suma=0;
		int positivo=0;
		int negativo=0;
		int n;
		
		 System.out.println("Programa que lea 10 numeros y haga la sumas de estos y posteriormente decir cuantos numeros positivos/negativos hay (con for):");
		 System.out.println("-----");
		
		Scanner ingresar = new Scanner(System.in);
		for(int i=0; i<10; i++) {
			System.out.println("Escribe un numero");
			n = ingresar.nextInt();
			
			if(n>=0)
				positivo++;
			else
				negativo--;
			suma = suma + n;
		}
		System.out.println("La suma es: " + suma);
        System.out.println("El número de positivos es: " + positivo);
        System.out.println("El número de negativos es: " + negativo);	
	}

}

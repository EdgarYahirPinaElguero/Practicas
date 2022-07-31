package Ejercicio3;
import java.util.*;

public class SumNum10For {
	public static void main (String[] args) {
		Scanner ingresar = new Scanner(System.in);
		int suma=0;
		int n;
		
		System.out.println("Programa que lea 10 numeros y haga la suma de estos (con for):");
		System.out.println("-----");
		
		for(int i=0; i<10; i++) {
			System.out.println("Ingresa los valores: ");
			n = ingresar.nextInt();
			
			suma=suma+n;
		}
		System.out.println("La suma es de: "+suma);
	}

}

package Ejercicio2;
import java.util.*;

public class SumaNum10 {
	public static void main (String[] args) {
		Scanner ingresar = new Scanner(System.in);
		int contador=0;
	    int suma=0;
	    int n= 0;
	    
	    System.out.println("Programa que lea 10 numeros y haga la suma de estos (con do-while):");
		System.out.println("-----");
		
	   do {
	    	System.out.println("Introduce el numero n:");
	    	n = ingresar.nextInt();
	        contador=contador+1;
	        suma=suma+n;
	        
	    }while(contador<10);
	        System.out.println("La suma es: "+suma);
	        
	    }
	}

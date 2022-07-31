package Ejercicio6;
import java.util.*;

public class NumPositivoNegativo {
	public static void main (String[] args) {
        int cuenta=0;
        int suma=0;
        int positivo=0;
        int negativo=0;
        int n=0;
        
        System.out.println("Programa que lea 10 numeros y haga la sumas de estos y posteriormente decir cuantos numeros positivos/negativos hay (con do-while):");
		System.out.println("-----");
        
        Scanner ingresar = new Scanner(System.in);
        
        do {
            System.out.println("Escribe un número: ");
            n = ingresar.nextInt();
            cuenta++; 
            
            if (n >= 0)
                positivo++; 
            else
                negativo--;
            suma = suma + n;
        
        } while (cuenta < 10);
        System.out.println("La suma es: " + suma);
        System.out.println("El número de positivos es: " + positivo);
        System.out.println("El número de negativos es: " + negativo);
    }
}

package Ejercicio1;
import java.util.*;

public class NumMayor {
	public static void main (String[] args) {
		Scanner ingresar = new Scanner (System.in);
		int num1;
		int num2;
		
		System.out.println("Programa que mande un mensaje si los 2 numero son iguales mande un menseje diceinrdo que son iguales:");
		System.out.println("-----");
		
		System.out.println("Ingresa el primer valor: ");
		num1 = ingresar.nextInt();
		
		System.out.println("Ingresa el segundo valor: ");
		num2 = ingresar.nextInt();
		
		if(num1>num2) 
			System.out.println("Numero 1: "+num1+ " es mayor que Numero 2: "+num2);
		
		else if (num1==num2)
			System.out.println("El numero 1 es igual al numero 2");
		else
			System.out.println("El numero 2: "+num2+" es mayor que el numero 1: "+num1);
	}
}

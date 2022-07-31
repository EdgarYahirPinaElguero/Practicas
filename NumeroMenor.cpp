package Ejercicio9;
import java.util.*;

public class NumMenor {
	public static void main (String[] args) {
		int num1;
		int num2;
		
		 System.out.println("Programa que muestre 2 numeros y muestre el numero menor de ellos, y si los dos son iguales mandar un mensaje diciendo que son iguales:");
		 System.out.println("-----");
			
		Scanner ingresar = new Scanner (System.in);
		
		System.out.println("Ingresa el primer numero");
		num1 = ingresar.nextInt();
		
		System.out.println("Ingresa el segundo numero");
		num2 = ingresar.nextInt();
		
		if (num1<num2)
			System.out.println("El numeroro " +num1 + " Es menor ");
		else if (num1>num2)
			System.out.println("El numero " +num2 + " Es menor");
		else
			System.out.println("Los 2 numeros son iguales");		
	}

}

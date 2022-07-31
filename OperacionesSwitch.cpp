package Practica3;
import java.util.*;

public class OpercionesSwitch {
	public static void main(String[] args) { 
		Scanner scanner = new Scanner (System.in); 
		String val;  
		double num1;  
		double num2;  
		
		Scanner sc = new Scanner (System.in);
		System.out.println("Ingresa el simbolo de la operacion a realizar: ");
		val = sc.nextLine();
		
		System.out.print("Dame el valor del primer número: "); 
		num1 = scanner.nextDouble(); 
		System.out.print("Dame el valor del segundo número: "); 
		num2 = scanner.nextDouble(); 
		
		switch (val) {
		case "+":
			System.out.println("La suma de estos números es " + (num1 + num2));
			break;
		case "-":
			System.out.println("La resta de estos números es " + (num1 - num2));
			break;
		case "*":
			System.out.println("La multiplicacion de estos números es " + (num1 * num2));
			break;
		case "/":
			System.out.println("La divicion de estos números es " + (num1 / num2));
			break;
		default:
			System.out.println("Simbolo no reconosido.");	
		}
	}
}

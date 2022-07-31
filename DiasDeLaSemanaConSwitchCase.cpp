package Ejercicio5;
import java.util.*;

public class DiaDeLaSemanaSwitch_case {
	public static void main (String[] args) {
		Scanner ingresar = new Scanner(System.in);
		int n;
		
		System.out.println("Programa que lea un numero y muestre el dia de la semana (con switch-case):");
		System.out.println("-----");
		
		System.out.println("Que dia de la semana deseas del 1 al 7: ");
		n = ingresar.nextInt();
		
		switch(n) {
		case 1:
			System.out.println("Hoy es Lunes");
			break;
		case 2:
			System.out.println("Hoy es Martes");
			break;
		case 3:
			System.out.println("Hoy es Miercoles");
			break;
		case 4:
			System.out.println("Hoy es Jueves");
			break;
		case 5:
			System.out.println("Hoy es Viernes");
			break;
		case 6:
			System.out.println("Hoy es Sabado");
			break;
		case 7:
			System.out.println("Hoy es Domingo");
			break;
			default:
				System.out.println("El numero que ingresaste no es valido");
				return;
		}
	}
}

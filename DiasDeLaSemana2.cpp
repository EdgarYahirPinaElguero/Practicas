package Ejercicio4;
import java.util.*;

public class DiaDeLaSemana {
	public static void main (String[] args) {
		int n;
		
		Scanner ingresar = new Scanner(System.in);
	
		
		System.out.println("Programa que lea un numero y muestre el dia de la semana:");
		System.out.println("-----");
		
		System.out.println("Ingresa un numero del 1 al 7: ");
		n = ingresar.nextInt();
		
		if(n==1)
			System.out.println("Hoy es Lunes");
		else if(n==2)
			System.out.println("Hoy es Martes");
		else if(n==3)
			System.out.println("Hoy es Miercoles");
		else if(n==4)
			System.out.println("Hoy es Jueves");
		else if(n==5)
			System.out.println("Hoy es Viernes");
		else if(n==6)
			System.out.println("Hoy es Sabado");
		else if(n==7)
			System.out.println("Hoy es Domingo");
		else
			System.out.println("El numero que ingresaste no es valido");
	}

}

package Ejercicio12;
import java.util.*;

public class CuadradoDibujo {
	public static void main (String[] args) {
		
		System.out.println("Programa que dibuje un cuadrado con los numeros del 0 al 9: ");
		System.out.println("-----");
		
		Scanner ingresar = new Scanner (System.in);
		int filas;
		int columnas;
		int contador = 0;
        
		do{
           System.out.print("Introduce el numero de filas y columnas del cuadrado: ");                                          
           filas = ingresar.nextInt();
        }
		while(filas<2);
        for(int a = 1; a<=filas; a++){    
            for(int b = 1; b<=filas; b++){                                                    
                 System.out.print(contador%10+" ");
                 contador++;
            } 
            System.out.println();
        } 
    }
}

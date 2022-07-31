package Ejercicio10;
import java.util.*;

public class Temperatura {
	public static void main(String[]args) {

	        int f = 10;                                                
	        double c;   
	        
	        System.out.println("Programa que muestre una tabla con las temperatuas de gardos fahrenheit a celsius:");
			System.out.println("-----");
	       
	        System.out.printf(" F \t  C \n");
	        System.out.println("---------------");
	        while (f <= 150 ){ 
	               c = (f - 32)*5/9;
	               System.out.printf("%3d\t%6.2f \n", f, c);                                           
	               f += 10;
	        }  
	    }
	}

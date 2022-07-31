package Ejercicio11;
import java.util.*;

public class RectanguloDibujo {
public static void main(String[] args) {
		
		System.out.println("Programa que dibuje un rectangulo con + :");
		System.out.println("-----");
		 
		Scanner ingresar = new Scanner(System.in);
	       
        int filas;
        int columnas;
        //leer numero de filas                                                        
        do{
           System.out.print("Introduce numero de filas: ");
           filas = ingresar.nextInt();
        }while(filas < 2);
        //leer numero de columnas 
        do{
           System.out.print("Introduce numero de columnas: ");
           columnas = ingresar.nextInt();
        }while(columnas < 2);
        for(int a = 1; a <= filas; a++){    //for para las filas
            for(int b = 1; b <= columnas; b++){   //for para las columnas                                           
                System.out.print(" + ");
            }  
            System.out.println();
        }  
    }
}

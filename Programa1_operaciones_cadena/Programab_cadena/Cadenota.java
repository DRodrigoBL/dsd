import java.util.Random;
import java.io.*;
public class Cadenota {
    public static void main(String[] args) {
        System.out.println("Generacion de cadena");
        Random r = new Random();      
        int i ;  
        int numero;
        int tam =(int) Math.pow(26.0, 3.0);
        
        System.out.println("Tamaño "+ tam);
        int factor=25;
        String cad="";

        System.out.println("Generacion de la cadena ");

        for (i = 0; i < tam*factor;i++) {
              	if((i%4!=3)){
                cad+=(char)((r.nextInt(26)) +65);
              }else{
                cad+=" ";
              }
        }
               
        int i1=0,i2=3,contador=0;
        String aux,IPN="IPN ";    

        System.out.println("Busqueda de la subcadena... tam "+cad.length());
				cad.indexOf(IPN);
				while(cad.indexOf(IPN)>-1){
					cad = cad.substring(cad.indexOf(IPN)+IPN.length(),cad.length());
					contador++;
				
				}
				
        System.out.println("Ocurrencias de IPN :" +contador);
	        
    }
    
}


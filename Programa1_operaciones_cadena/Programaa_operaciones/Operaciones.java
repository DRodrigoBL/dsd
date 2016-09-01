

public class Operaciones
{
	public static void main(String[] args) {
		
		long max = 100000000;

		double i = 0;
		double seno = 0;
		double coseno = 0;
		double tang = 0;;
		double logaritmo = 0;;
		double raiz = 0;;

		while(i<max)
		{
			seno += Math.sin(i);
			coseno += Math.cos(i);
			tang += Math.tan(i);
			logaritmo += Math.log10(i);
			raiz += Math.sqrt(i);
			i++;
		}

	}
}
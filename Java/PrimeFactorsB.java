
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class PrimeFactorsB {

	public static void main(String[] args) {
		
		//define variables
		int input = 0;
		int counter = 0;
		int i = 0;
		int ref = 0;
		Scanner sc = new Scanner(System.in);
		List<Integer> factors = new ArrayList<Integer>();

		//request user input
		System.out.println("Enter a number between 111 and 900: ");
		input = sc.nextInt();
		sc.close();
	    
		//check that the input is within an acceptable range
		if (input >= 111 && input <= 900) {
			
			//perform the calculations and add to the listarray
			for(int x = 2; x < input; x++) {
			
				while(input % x == 0) {
				
					factors.add(x);
					input = input / x;
	            
				}
			}
		
			if(input >2) {
				
				factors.add(input);
	         
			} 
			
			//adds a buffer to the end of factors to prevent overflow
			factors.add(0);
			
			//put prime factors into an array and print them with their respective powers
			while(i < factors.size()) {
				
				counter = 0;
				if(i < factors.size()) {
					
					ref = factors.get(i);
					
				}
				while(factors.get(i) == ref && i < factors.size()){
					
						counter++;
						
						if(i < factors.size() - 1) {
							
							i++;
							
						}
					
				}
				
			System.out.print(ref + "^" + counter + "*");
				
			}
			
		//error message
		} else {
			
			System.out.println("Error. Input must be between 111 and 900.");
			
		}
	}
}


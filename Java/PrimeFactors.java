

import java.util.Scanner;

public class PrimeFactors {

	public static void main(String[] args) {
		
		//define integer and scanner for input
		int input;
		Scanner sc = new Scanner(System.in);
		
		//request user input
		System.out.println("Enter a number between 111 and 900: ");
		input = sc.nextInt();
		sc.close();
	    
		//check that the input is within an acceptable range
		if (input >= 111 && input <= 900) {
			
			//perform the calculations and print to the screen
			for(int x = 2; x < input; x++) {
			
				while(input % x == 0) {
				
					System.out.print(x + "*");
					input = input / x;
	            
				}
			}
		
			if(input >2) {
				
				System.out.print(input);
	         
			} 
			
		//error message
		} else {
			
			System.out.println("Error. Input must be between 111 and 900.");
			
		}
	}
}


//1 cm = 0.39 inch!!

//package com.nishant;
import java.util.Scanner;
public class Converter {

    public static void main(String[] args) {
	// write your code here
        Scanner in = new Scanner(System.in);

        while(true){
            System.out.println();

            System.out.print("enter a number in cm: ");


            float cm_input;

            cm_input = in.nextFloat(); //takes a float input

            float inch = (float) (0.39 * cm_input); //multiplies 0.39 to float input

            System.out.println();

            System.out.println("in inch it is: " + inch); //prints float input!

        }



    }
}

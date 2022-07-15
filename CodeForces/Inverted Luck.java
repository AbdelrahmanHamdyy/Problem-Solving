package com.company;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner Input = new Scanner(System.in);
        String s = "";
        int t = Input.nextInt();
        for (int i = 0; i <= t; i++) {
            s = Input.nextLine();
            s = s.replace('4', '$');
            s = s.replace('7', '&');
            s = s.replace('$', '7');
            s = s.replace('&', '4');
            System.out.println(s);
        }
    }
}

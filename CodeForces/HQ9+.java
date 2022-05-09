package com.company;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        List<String> print = new ArrayList<>();
        Scanner Input = new Scanner(System.in);
        String s = "";
        s = Input.next();
        if (s.contains("H") || s.contains("Q") || s.contains("9"))
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}

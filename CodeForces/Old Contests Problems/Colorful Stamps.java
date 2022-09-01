package com.company;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        List<String> print = new ArrayList<>();
        Scanner Input = new Scanner(System.in);
        int t;
        t = Input.nextInt();
        for (int i = 0; i < t; i++) {
            int n;
            n = Input.nextInt();
            String s = "";
            s = Input.next();
            String[] split = s.split("W");
            boolean flag = true;
            for (String str : split) {
                if (!str.equals("") && (!str.contains("R") || !str.contains("B"))) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                print.add("YES");
            else
                print.add("NO");
        }
        for (String s : print)
            System.out.println(s);
    }
}

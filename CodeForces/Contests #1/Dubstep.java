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
        String[] split = s.split("WUB");
        for (int i = 0; i < split.length; i++) {
            if (split[i] != "" && i != split.length - 1)
                System.out.print(split[i] + " ");
            if (i == split.length - 1)
                System.out.print(split[i]);
        }
    }
}

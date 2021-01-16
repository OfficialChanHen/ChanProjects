package com.company;

public class Main {

    public static void main(String[] args) {

        // Challenge
        byte myByteValue = 30;
        short myShortValue = 300;
        int myIntValue = 3000;
        long myNewLongValue = 50000L + 10L * (myByteValue + myShortValue + myIntValue);
        System.out.println(myNewLongValue);
    }
}

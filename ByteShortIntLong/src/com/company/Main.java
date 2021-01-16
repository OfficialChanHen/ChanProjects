package com.company;

public class Main {

    public static void main(String[] args) {

        int myValue = 10000; // 32 bits or width of 32.

        int myMinIntValue = Integer.MIN_VALUE; // Wrapper Classes, ".MIN_VALUE", allows for operations on primitive types such as "int".
        int myMaxIntValue = Integer.MAX_VALUE;
        System.out.println("Integer Minimum Value = " + myMinIntValue);
        System.out.println("Integer Maximum Value = " + myMaxIntValue);
        System.out.println("Busted MAX value = " + (myMaxIntValue + 1)); // Overflow, becomes negative.
        System.out.println("Busted MIN value = " + (myMinIntValue - 1)); // Underflow, becomes positive.

        int myMaxIntTest = 2_147_483_647;

        byte myMinByteValue = Byte.MIN_VALUE; // 8 bits or width of 8.
        byte myMaxByteValue = Byte.MAX_VALUE;
        System.out.println("Byte Minimum Value = " + myMinByteValue);
        System.out.println("Byte Maximum Value = " + myMaxByteValue);

        short myMinShortValue = Short.MIN_VALUE; // 16 bits or width of 16.
        short myMaxShortValue = Short.MAX_VALUE;
        System.out.println("Short Minimum Value = " + myMinShortValue);
        System.out.println("Short Maximum Value = " + myMaxShortValue);
        
        long myLongValue = 100;               // Treats as an int when excluding the "L" at the end of the value.
        long myMinLongValue = Long.MIN_VALUE; // 64 bits or width of 64.
        long myMaxLongValue = Long.MAX_VALUE;
        System.out.println("Long Minimum Value = " + myMinLongValue);
        System.out.println("Long Maximum Value = " + myMaxLongValue);
        long bigLongLiteralValue = 2_147_483_647_234L; // Requires the L because it surpasses the max int value.
        System.out.println(bigLongLiteralValue);

        short bigShortLiteralValue = 32767; // This int value can fit within the data type short.
                                            // One value higher cannot -- max short value but not max int value.

        int myTotal = (myMinIntValue / 2);

        // Example of casting.
        byte myNewByteValue = (byte) (myMinByteValue / 2); // (myMinByteValue / 2) is an int not a byte = error.

        short myNewShortValue = (short) (myMinShortValue / 2);
    }
}

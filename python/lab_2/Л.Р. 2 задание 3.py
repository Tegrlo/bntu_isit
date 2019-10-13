balance = float(input("Amount requested: "))
numOf500 = (balance) // 500
if (numOf500>0):
    print (" Купюры номиналом 500 евро: ", numOf500);
    balance = balance - 500 * numOf500;
numOf200 = (balance) // 200
if (numOf200>0):
    print (" Купюры номиналом 200 евро: ", numOf200);
    balance = balance - 200 * numOf200;
numOf100 = (balance) // 100
if (numOf100>0):
    print (" Купюры номиналом 100 евро: ", numOf100);
    balance = balance - 100 * numOf100;
numOf50 = (balance) // 50
if (numOf50>0):
    print (" Купюры номиналом 50 евро: ", numOf50);
    balance = balance - 50 * numOf50;
numOf20 = (balance) // 20
if (numOf20>0):
    print (" Купюры номиналом 20 евро: ", numOf20);
    balance = balance - 20 * numOf20;
numOf10 = (balance) // 10
if (numOf10>0):
    print (" Купюры номиналом 10 евро: ", numOf10);
    balance = balance - 10 * numOf10;
numOf5 = (balance) // 5
if (numOf5>0):
    print (" Купюры номиналом 5 евро: ", numOf5);
    balance = balance - 5 * numOf5;
numOf2 = (balance) // 2
if (numOf2>0):
    print (" Купюры номиналом 2 евро: ", numOf2);
    balance = balance - 2 * numOf2;
numOf1 = (balance) // 1
if (numOf1>0):
    print (" Купюры номиналом 1 евро: ", numOf1);
    balance = balance - numOf1;
numOf50cent = (balance) // 0.5
if (numOf50cent>0):
    print (" Монеты номиналом 50 евроцентов: ", numOf50cent);
    balance = balance - 0.5 * numOf50cent;
numOf20cent = (balance) // 0.2
if (numOf20cent>0):
    print (" Монеты номиналом 20 евроцентов: ", numOf20cent);
    balance = balance - 0.2 * numOf20cent;
numOf10cent = (balance) // 0.1
if (numOf10cent>0):
    print (" Монеты номиналом 10 евроцентов: ", numOf10cent);
    balance = balance - 0.1 * numOf10cent;
numOf5cent = (balance) // 0.05
if (numOf5cent>0):
    print (" Монеты номиналом 5 евроцентов: ", numOf5cent);
    balance = balance - 0.05 * numOf5cent;
numOf2cent = (balance) // 0.02
if (numOf2cent>0):
    print (" Монеты номиналом 2 евроцентa: ", numOf2cent);
    balance = balance - 0.02 * numOf2cent;
numOf1cent = (balance) // 0.01
if (numOf1cent>0):
    print (" Монеты номиналом 1 евроцент: ", numOf1cent);
input("press any key to close the programm")

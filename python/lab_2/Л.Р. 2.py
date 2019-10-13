print("Лабораторная работа номер 2")
print("задание 1")
print("разработал: Старостин Павел Алексеевич")
print("дата сдачи: 7.10.2019")

print("\n1.1\nПрограмма должна запрашивать имя пользователя (строка) и почтовый индекс (целое число) и записывать соответственно в переменные Chameleon1 и Chameleon2. Вывести значения и типы переменных на экран. \n")
chamelion1 = input("User name: ")
chamelion2 = int(input("User Index: "))
print("Enter user name: ",chamelion1)
print("Enter User index: ",chamelion2)
print("type of chamelion1: ",type(chamelion1))
print("type of chamelion2: ",type(chamelion2))
input("\nPress Enter to continue")


print("\n1.2\nПреобразовать переменную Chameleon2 к строковому типу с использованием функции str(). Умножить полученную строку на число даты рождения пользователя и вывести результат.\n")
chamelion2 = str(chamelion2)
date = int(input("Enter your birth date(day only): "))
print(chamelion2*date)
input("\nPress Enter to continue")


print("\n1.3\nСложить переменные Chameleon1 и Chameleon2, результат записать в Chameleon3. Вывести результат суммирования и тип переменной. \n")
chamelion3 = (chamelion1+chamelion2)
print(chamelion3)
print("type of chamelion3: ",type(chamelion3))
input("\nPress Enter to continue")


print("\n1.4\nПреобразовать переменную Chameleon3 к списку с использованием функции list(). Вывести результат и тип переменной на экран. \n")
chamelion3 = list(chamelion3)
print(chamelion3)
print("type of chamelion3: ",type(chamelion3))
input("\nPress Enter to continue")


print("\n1.5\nНапечатать начальный и конечный элементы списка Chameleon3. Первое значение списка Chameleon3 заменить возрастом пользователя.\n")
age = int(input("Enter your age: "))
chamelion3[0] = age
print("First element of edited list-chamelion3:",chamelion3[0],"and last element: ",chamelion3[-1])
'''
менее быстрый способ нахождения последнего элемента списка:
int(lastElement)=len(chamelion3)
print("First and last element of list-chamelion3:",chamelion3[0],chamelion3[lastElement-1])
'''
input("\nPress Enter to continue")


print("\n1.6\nПрибавить к списку Chameleon3 список, вводимый пользователем с клавиатуры. Результат вывести на экран, а затем умножить на 2 и снова вывести на экран.\n")
listAdd = input("Enter List, wich will be added to Chamelion3-list: ")
listAdd=list(listAdd)
chamelion3 = (chamelion3+listAdd)
print(chamelion3)
print(chamelion3*2)
input("\nPress Enter to continue")


print("\n1.7\nПреобразовать переменную Chameleon3 к кортежу с использованием функции tuple(). Вывести результат и тип переменной на экран.\n")
chamelion3 = tuple(chamelion3)
print(chamelion3)
print("type of chamelion3: ",type(chamelion3))
input("\nPress Enter to continue")


print("\n1.8\nПопытаться изменить любое значение кортежа Chameleon3.\n")
print("we cant change the elements of the tuple, if we try, we get an error")
input("\nPress Enter to continue")


print("\n1.9\nПродемонстрировать операцию сложения кортежей и умножения кортежа на число.\n")
firstTuple = (1,2,3);
secondTuple = ('a','b','c');
print("first tuple: ", firstTuple)
print("second tuple: ", secondTuple)
print("first tuple + second tuple = : ", firstTuple + secondTuple)
x = int(input("Enter number, by wich the second tuple will be multiplied: "))
print("result: ",secondTuple*x)
input("\nPress Enter to continue")


print("\n1.10\nПреобразовать переменную Chameleon3 к множеству с использованием функции set(). Вывести результат и тип переменной на экран. Сделать вывод о назначении множеств.\n")
chamelion3 = set(chamelion3)
print(chamelion3)
print("type of chamelion3: ",type(chamelion3))
print('''Множество в языке Питон — это структура данных, эквивалентная множствам в математике. Множество может состоять из различных элементов, порядок элементов в множестве неопределен.
В множество можно добавлять и удалять элементы, можно перебирать элементы множества, можно выполнять операции над множествами (объединение, пересечение, разность).
Можно проверять принадлежность элементу множества.
В отличии от массивов, где элементы хранятся в виде последовательного списка, в множествах порядок хранения элементов неопределен.
Это позволяет выполнять операции типа “проверить принадлежность элемента множеству” быстрее, чем просто перебирая все элементы множества.
Элементами множества может быть любой неизменяемый тип данных: числа, строки, кортежи.
Изменяемые типы данных не могут быть элементами множества, в частности, нельзя сделать элементом множества список или другое множество.
Требование неизменяемости элементов множества накладывается особенностями представления множества в памяти компьютерa''')
input("\nPress Enter to continue")

      
print('''\n1.11\nСоздать словарь My_Dictionary из пяти пар, осуществляющий перевод слов с русского на английский.
      Продемонстрировать обращение к элементам словаря по ключу. Вывести словарь несколько раз на экран. Сделать вывод.\n''')
My_Dictionary = {'processor':'процессор', 'mouse':'мышь', 'keyboard':'клавиатура', 'computer':'компьютер', 'monitor':'монитор'}
print("this my dictionary: ",My_Dictionary)
print('\n')
print("processor;mouse;keyboard;computer;monitor")
TranslatedWord = input("Enter the word, wich you want to translate into Russian: ")
print("translation for this word: ",My_Dictionary[TranslatedWord])
print('''словарь в питоне -- это последовательность, которая не имеет порядка.
         В отличии от последовательности нам не нужно выискивать/высчитывать индекс элемента, для элемента создается ключ(ключ в словаре -- аналог индекса).
         Важно, что ключ должен быть статичным, например значения int,char, или даже ,tuple, а вот динамические типы данных нельзя использовать в качестве ключа(например список) ''')
input("\nPress Enter to continue")
      

print("\n1.12\nСделать вывод о простых типах данных языка Python, универсальности команд и о динамической типизации.\n")

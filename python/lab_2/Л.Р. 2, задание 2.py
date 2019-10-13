print("Лабораторная работа номер 2, <<what is My Age in Seconds?>>");
print("задание 2");
print("разработал: Старостин Павел Алексеевич");
print("дата сдачи: 7.10.2019");

secInDay = 60*60*24;
secInMonth = secInDay*31
secInYear = secInMonth*12-9*secInDay
day = 7;
month = 10;
year = 2019;

Bday = int(input("Enter your day of birth(1-31): "));
Bmonth = int(input("Enter your month of birth(1-12): "));
Byear = int(input("Enter your year of birth(0-2019): "));
ageInSeconds = secInDay*day+secInMonth*month+secInYear*year-secInDay*Bday-secInMonth*Bmonth-secInYear*Byear+year/4*secInDay;
print (ageInSeconds);
input("press any key to close the programm");

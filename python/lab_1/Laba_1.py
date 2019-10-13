name = input("Name: ")
nameCellSize = -10  #Минусовое значение нужно, чтобы при формировании поля текст смещался влево, а не вправо
surname = input("Surname: ")
surnameСellSize = -15
dateOfBirth = input("Date of birth(DOB): ")
DOB_CellSize = -10
city = input("Your city: ")
cityCellSize = -15
faculty = input("Faculty: ")
facultyCellSize = -10
speciality = input("Speciality: ")
specCellSize = -10
formatStr = "*%%%ds*%%%ds*%%%ds*%%%ds*%%%ds*%%%ds*" % (nameCellSize, surnameСellSize, DOB_CellSize, cityCellSize, facultyCellSize, specCellSize);
print("*****************************************************************************")
print("*Name      *Surname        *DOB       *City           *Faculty   *Speciality*")
print("*****************************************************************************")
print(formatStr%(name, surname, dateOfBirth, city, faculty, speciality))
print("*****************************************************************************")

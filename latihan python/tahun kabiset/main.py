# tahun kanbiset dan bukan tahun kabiset

tahun = int(input("masukan tahun yang diinginkan... : "))

if (tahun % 400 == 0):
    print(tahun, " merupakan tahun kabiset.. ")
elif (tahun % 100 == 0):
    print(tahun, " Bukan Tahun kabiset.. ")
elif (tahun % 4 == 0):
    print(tahun, " merupakan tahun kabiset.. ")
else:
    print(tahun, " bukan merupakan tahun kabiset... ")

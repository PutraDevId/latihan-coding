# program sederhana pr dari kelas terbuka

print("====PROGRAM SEDERHANA KONVERSI====")
fahrenhite = float(input("masukan suhu dalam fahrenhite : "))
kelvin = float(input("masukan suhu dalam kelvin : "))
# fahrenhite
celcius = ((5/9) * fahrenhite) - 32  # dari fahrehite jadi celcius
kelvin = celcius + 273  # rumus celcius ke kelvin
print("suhu dalam kelvin : ", kelvin, 'K')

# kelvin
celcius1 = kelvin - 273  # dari kelvin ke celcius
fahrenhite1 = ((9/5) * celcius1) + 32  # dari celcius ke farhenhite
print("suhu dalam fahrenhite : ", fahrenhite1, 'F')

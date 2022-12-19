# membuat gabungan area rentang dari angka

# +++++3-------10++++++

inputUser = float(
    input("masukan angka kurang dari 3 atau lebih besar dari pada 10 :\n "))

# memerikasa angka kurang dari 3
nilaiKuarangDari3 = (inputUser < 3)

# memeriksa angka lebih dari 10
nilaiLebihDari10 = (inputUser > 10)

hasil = nilaiKuarangDari3 or nilaiLebihDari10

print('angka anda : ', hasil)

# ------3++++++10-----
# kasus irissan
inputUser = float(
    input("masukan angka yang bernilai lebih besar dari 3 dan kurang dari 10 :\n "))

# memerikasa angka lebih dari 3
nilaiLebihDari3 = (inputUser > 3)

# memeriksa angka lebih dari 10
nilaiKurangDari10 = (inputUser < 10)

hasil1 = nilaiLebihDari3 and nilaiKurangDari10

print('angka anda : ', hasil1)

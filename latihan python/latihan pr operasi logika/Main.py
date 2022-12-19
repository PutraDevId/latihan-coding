# ----0+++++5-----8++++11----
masukan = float(input(
    "masukan nilai lebih besar dari 0 dan 5 lebih besar dari 8 dan lebih kecil dari 11 \n"))

# lebih dari 0 dan kurang dari 5
a = (masukan > 0)
b = (masukan < 5)
aandb = a and b


# lebih dari 8 dan kurang dari 11
c = masukan > 8
d = masukan < 11
candd = c and d

hasil = aandb or candd
print(hasil)
# ++++0-----5+++++8----11++++
masukan = float(input(
    "masukan nilai lebih kecil dari 0 atau lebih besar dari 5 dan lebih kecil dari 8 dan lebih besar dari 11 \n"))

# lebih dari 0 dan kurang dari 5
e = (masukan < 0)
f = (masukan > 5)
eorf = a or b


# lebih dari 8 dan kurang dari 11
g = masukan < 8
h = masukan > 11
gorh = c or d

hasil1 = eorf and gorh
print(hasil1)

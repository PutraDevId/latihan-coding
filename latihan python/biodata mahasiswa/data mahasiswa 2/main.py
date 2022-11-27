class biodata():
    def __init__(self, name, nim, tgl, alamat):
        print("<=======================================>")
        print('silahkan masukan bio data diri anda.... : ')

    def input(self):
        self.name = raw_input("Nama :               ")
        self.nim = raw_input("NIM :                 ")
        self.tgl = raw_input("tgl :                 ")
        self.alamat = raw_input("alamat :           ")


class mahasiswa(biodata):
    def cetak(self):
        print("<=======================================>")
        print("biodata anda adalah....")
        print("Nama :               "), self.name
        print("NIM :                 "), self.nim
        print("tgl :                 "), self.tgl
        print("alamat :           "), self.alamat


dataMhs = mahasiswa("name", "nim", "tgl", "alamat")
dataMhs.input()
dataMhs.cetak()

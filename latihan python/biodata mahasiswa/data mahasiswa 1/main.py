def get_biodata():
    nama = input('input nama : ')
    alamat = input('masukan alamat : ')
    jurusan = input('input jurusan : ')
    NIM = input('input nim : ')
    print('<------------------------------->')
    print(' biodata anda adalah ')
    print('nama anda adalah : ' + nama)
    print('alamat anda adalah : ' + alamat)
    print('jurusan yang anda pilih : ' + jurusan)
    print('nim anda : ' + NIM)


def run():
    while True:
        get_biodata()
        input_lagi = input('apakah input lagi ? y/n.... : ')
        if input_lagi == 'y':
            continue
        elif input_lagi == 'n':
            break
        else:
            print('bukan pilihan')
            break


if __name__ == '__main__':
    run()

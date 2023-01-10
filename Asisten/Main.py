# masih belum berfungsi dengan baik :(
import speech_recognition as srec
from gtts import gTTS
import os


def mulai():
    mendengar = srec.Recognizer()
    with srec.Microphone() as source:
        print('mendengarkan...!! ')
        suara = mendengar.listen(source, phrase_time_limit=5)
        try:
            print('diterima...!!')
            dengar = mendengar.recognize_google(source, language='id-ID')
            print('dengar..!')
        except:
            pass
        return dengar


def bicara(self):
    teks = (self)
    bahasa = 'id'
    nama_file = "kalimat.mp3"

    def membaca_kalimat():
        suara = gTTS(text=teks, lang=bahasa, slow=False)
        suara.save(nama_file)
        os.system(f'start {nama_file}')
    reading()


def nyalakan_kaori():
    Layanan = mulai()
    print(Layanan)
    bicara(Layanan)


nyalakan_kaori()

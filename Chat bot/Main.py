# bot chat sederhana..

import re
import random

sapaan = ["halo juga", "hai juga", "apa kabar"]

while True:
    chat = input("User\t:")
    if re.findall(r'halo|hai|hallo', chat):
        print("Bot\t: ", random.choice(sapaan))
    elif re.findall(r'stop|berhenti|of|exit|keluar', chat):
        break
    else:
        print("Bot\t: ", "tidak di mengerti..?")

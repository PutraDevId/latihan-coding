import kivy
from kivy.app import App
from kivy.uix.label import Label


class apkredy (App):
    def mulai(self):
        return Label(text="halo word")


if __name__ == '__main__':
    apkredy().mulai()

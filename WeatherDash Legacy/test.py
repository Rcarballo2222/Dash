import WeatherDash
import os
import tkinter as tk

os.system("sudo startx")

weather = WeatherDash.update()

class Application(tk.Frame):
    def __init__(self, master=None):
        super().__init__(master)
        self.master = master
        self.grid(row=0,column=0, sticky=tk.N+tk.E+tk.S+tk.W)
        self.create_widgets()

    def create_widgets(self):
        self.hi_there = tk.Button(self)
        self.hi_there["text"] = "Update Weather"
        self.hi_there["command"] = self.say_hi
        self.hi_there.grid(row=1,column=1, sticky=tk.N+tk.E+tk.S+tk.W)

        self.quit = tk.Button(self, text="QUIT", fg="red",
                              command=self.master.destroy)
        self.quit.grid(row=2,column=1)

    def say_hi(self):
        self.text = tk.Label(self, bg='#00ffff', fg='white', text=weather[0],font=('Times', '30', 'bold'))
        self.text.grid(column=1, row=1,columnspan=3,rowspan=2,sticky=tk.N+tk.E+tk.S+tk.W)
        self.cancel = tk.Button(self, text="CANCEL", fg="red",command=self.clear_weather_panel)
        self.cancel.grid(row=3,column=1,columnspan=2, sticky=tk.N+tk.E+tk.S+tk.W)
    
    def clear_weather_panel(self):
        self.text.grid_forget()
        self.cancel.grid_forget()

root = tk.Tk()
app = Application(master=root)
app.mainloop()
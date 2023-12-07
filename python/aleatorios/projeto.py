from pickletools import pyunicode
import pyautogui
import pyperclip
import time
import pandas as pd
pyautogui.TIME = 1

pyautogui.press("win")
pyautogui.write("chrome")
pyautogui.press("enter")
time.sleep(3)
pyautogui.hotkey("ctrl","t")
pyperclip.copy("https://drive.google.com/drive/folders/149xknr9JvrlEnhNWO49zPcw0PW5icxga")
pyautogui.hotkey("ctrl","v")
pyautogui.press("enter")
time.sleep(3)
pyautogui.click(x=300,y=270,clicks=2)
time.sleep(3)
pyautogui.click(x=634,y=158,clicks=1)
pyautogui.click(x=662,y=158,clicks=1)
#tabela=pd.read_excel("caminho do arquivo")
#print(tabela)
faturamento=tabela["Valor Final"].sum



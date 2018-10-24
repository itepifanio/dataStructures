from contextlib import redirect_stdout
import locale

locale.setlocale(locale.LC_ALL, 'pt_BR.UTF-8')

with open("rotulos.in", encoding="utf-8") as f:
    ordered = sorted([line.strip() for line in f.readlines()], key=locale.strxfrm)

with open("rotulos.out", "w", encoding="utf-8") as f:
    with redirect_stdout(f):
        print("\n".join(ordered))

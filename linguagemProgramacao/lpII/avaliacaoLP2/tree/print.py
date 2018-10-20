from csv import reader
from contextlib import redirect_stdout
from collections import namedtuple

Entrada = namedtuple("Entrada", "cod_geral area_geral cod_especifica area_especifica cod_detalhada area_detalhada codigo rotulo")

with open("dataset.csv", encoding="utf-8") as csvfile:
  with open("tree.out", "w", encoding="utf-8") as f:
    with redirect_stdout(f):
        cod_geral = ""
        cod_especifica = ""
        cod_detalhada = ""
        csvfile.readline()
        for line in reader(csvfile, delimiter=";"):
            entrada = Entrada(*line)
            if entrada.cod_geral != cod_geral:
                print("==== Área geral: {} {}".format(entrada.cod_geral, entrada.area_geral))
                cod_geral = entrada.cod_geral
            if entrada.cod_especifica != cod_especifica:
                cod_especifica = entrada.cod_especifica
                print("---- Área específica: {} {}".format(entrada.cod_especifica, entrada.area_especifica))
            if entrada.cod_detalhada != cod_detalhada:
                cod_detalhada = entrada.cod_detalhada
                print("++++ Área detalhada: {} {}".format(entrada.cod_detalhada, entrada.area_detalhada))
            print("{} {}".format(entrada.codigo, entrada.rotulo))
            
from csv import reader
from contextlib import redirect_stdout
from collections import namedtuple

from anytree import Node, RenderTree # pip install anytree
from anytree.exporter import DotExporter # sudo apt install graphviz
import pydotplus

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
                n_cod_geral = Node(entrada.rotulo)
            if entrada.cod_especifica != cod_especifica:
                cod_especifica = entrada.cod_especifica
                print("---- Área específica: {} {}".format(entrada.cod_especifica, entrada.area_especifica))
                Node(entrada.area_especifica, parent=n_cod_geral) if n_cod_geral else Node(entrada.area_especifica)
            if entrada.cod_detalhada != cod_detalhada:
                cod_detalhada = entrada.cod_detalhada
                print("++++ Área detalhada: {} {}".format(entrada.cod_detalhada, entrada.area_detalhada))
                #Node(entrada.area_detalhada, parent=n_cod_especifica) if n_cod_geral else Node(entrada.area_detalhada)
            print("{} {}".format(entrada.codigo, entrada.rotulo))

raiz = Node("disciplinas")

with open("tree.out", encoding="utf-8") as f:
    lines = f.readlines()
    # area_geral = None
    # area_espec = None
    # area_detal = None
    for line in lines:
        if "Área geral" in line:
            area_geral = Node(line.split(":")[1], parent=raiz)
        if "Área específica" in line:
            area_espec = Node(line.split(":")[1], parent=area_geral)
        if "Área detalhada" in line:
            area_detal = Node(line.split(":")[1], parent=area_espec)
            # if area_geral != None and ''.join(area_geral.name.split(" ")[1:3]) in line:
            #     print("what???")
            #     area_espec = Node(line, parent=area_geral)

for pre, fill, node in RenderTree(raiz):
     print("%s%s" % (pre, node.name))

DotExporter(raiz).to_dotfile("tree.dot")
# DotExporter(raiz).to_picture("tree.png")

graph = pydotplus.graph_from_dot_file("tree.dot")
graph.write_pdf("tree.pdf")

class Node( object ):
	def __init__( self, valor="", nodeFim = False ):
		self.nodeFim = nodeFim
		self.filhos = {}
		self.valor = valor

class Trie( object ):
	def __init__( self ):
		self.root = Node()
		self.filhos = {}

	def __str__(self):
		return self.filhos

	def inserir( self, key ):
		atualNode = self.root
		for char in key:
			if char not in atualNode.filhos:
				atualNode.filhos[char] = Node(char)
			atualNode = atualNode.filhos[char]
		atualNode.nodeFim = True
		return atualNode.nodeFim

	def pesquisar( self, palavra ):
		atualNode = self.root
		
		for char in palavra:
			if char not in atualNode.filhos:
				return False
			atualNode = atualNode.filhos[char]

		return atualNode.nodeFim
	
	def printTree(self, root, espacos = 0):
		for espaco in range(0, espacos):
			print("-", end="")
		
		print(root.valor, end=" ")
		if root.nodeFim:
			print("x", end="")
		print()

		for char in root.filhos.values():
			self.printTree(char, espacos+1)

	def remover(self, root, palavra, posicao = 0):
		deletar = True
		char = palavra[posicao]

		if char in root.filhos :
			if len(palavra)-1 >  posicao:
				deletar = self.remover(root.filhos[char], palavra, posicao+1 )	
			
			if deletar == False:
				return False

			if len(root.filhos[char].filhos) == 0:
				del root.filhos[char]
				if len(root.filhos) == 0 and root.nodeFim != True:
					root.nodeFim = True			
					return True
			elif root.filhos[char].nodeFim == True and root.filhos[char].valor == palavra[-1]:
				root.filhos[char].nodeFim = False
				return True
			
			elif root.filhos[char].nodeFim != True and root.filhos[char].valor == palavra[-1]:
				return False
			
			return deletar
				
		else: 
			return False

	def _caminhar( self, root, prefix ):
		caminho = []
		if root.nodeFim:
			caminho.append( prefix )
		
		for node in root.filhos:
			tmp = self._caminhar( root.filhos[node], prefix + node )
			caminho.extend( tmp )
		return caminho

	def enumerate( self, key ):
		atualNode = self.root
		for char in key:
			if char not in atualNode.filhos:
				return []
			atualNode = atualNode.filhos[char]
		
		return self._caminhar( atualNode, key )	

def mostrarResultadoPesquisa(tree,palavra):
	if tree.pesquisar( palavra ): 
		print("{} encontrada na árvore".format(palavra))
	else:
		print("{} não encontrada na árvore".format(palavra))

def mostrarResultadoRemocao(tree,palavra):
	if tree.remover( tree.root, palavra ): 
		print("{} removido da árvore".format(palavra))
	else:
		print("{} não removido da árvore".format(palavra))

tree = Trie()
tree.inserir( "apples" )
tree.inserir( "apple" )
tree.inserir( "banana" )
tree.inserir( "boca" )
tree.inserir( "bola" )
tree.inserir( "c" )
tree.inserir( "ca" )
tree.inserir( "cas" )
tree.inserir( "casa" )
tree.inserir( "appletv" )

mostrarResultadoPesquisa(tree, "apple")
mostrarResultadoRemocao(tree, "apple")
mostrarResultadoPesquisa(tree, "apple")
mostrarResultadoPesquisa(tree, "app")
mostrarResultadoPesquisa(tree, "banana")
mostrarResultadoPesquisa(tree, "ca")
mostrarResultadoPesquisa(tree, "cas")
mostrarResultadoRemocao(tree, "ca")
mostrarResultadoRemocao(tree, "cas")
mostrarResultadoPesquisa(tree, "ca")
mostrarResultadoPesquisa(tree, "cas")


print("*******")
for filhos in tree.root.filhos:
	print(tree.enumerate(filhos))
print("*******")
tree.printTree(tree.root)

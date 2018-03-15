class Sapo{
	private:
		string identificador;
		int distancia;
		int quantPulo;
	public: 
		//Gets e sets
		int getDistancia();
		void setDistancia(int l);
		
		int getQuantPulo();
		void setQuantPulo();

		int getIdentificador();
		void setIdentificador();
		
		static int distanciaAPercorrer;
		int pular();
};

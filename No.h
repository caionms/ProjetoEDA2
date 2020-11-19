/* No da Lista Duplamente Encadeada */ 

#include<iostream>
#include <string>

class cNo {
	private:
		std::string 	nomeArtista;
		std::string 	nomeAlbum;
		std::string 	generoAlbum;
		int		anoAlbum;
		std::string 	nomeMusica;
		int		duracaoMusica;
		int		classificacaoMusica;
		int		reproducoesMusica;
		std::string 	dataDeAdicao;
		std::string	ultimaReproducao;
		
		cNo* prox;
		cNo* ante;
		
	public:
		cNo();
		cNo(std::string nomeArtista, std::string nomeAlbum, std::string generoAlbum, int anoAlbum, std::string nomeMusica, int duracaoMusica, int classificacaoMusica, int reproducoesMusica, std::string dataDeAdicao, std::string ultimaReproducao);
		cNo(std::string nomeArtista, std::string nomeAlbum, int anoAlbum, std::string nomeMusica, int duracaoMusica, int classificacaoMusica, int reproducoesMusica, std::string dataDeAdicao, std::string ultimaReproducao); //sem genero
		cNo(std::string nomeArtista, std::string nomeAlbum, std::string generoAlbum, int anoAlbum, std::string nomeMusica, int duracaoMusica, int reproducoesMusica, std::string dataDeAdicao, std::string ultimaReproducao); //sem classificacao
		cNo(std::string nomeArtista, std::string nomeAlbum, int anoAlbum, std::string nomeMusica, int duracaoMusica, int reproducoesMusica, std::string dataDeAdicao, std::string ultimaReproducao); //sem genero e classificacao 
		cNo(const cNo &n);
		~cNo();
		
		void setNomeArtista(std::string nomeArtista);
		void setNomeAlbum(std::string nomeAlbum);
		void setGeneroAlbum(std::string generoAlbum);
		void setAnoAlbum(int anoAlbum);
		void setNomeMusica(std::string nomeMusica);
		void setDuracaoMusica(int duracaoMusica);
		void setClassificacaoMusica(int classificacaoMusica);
		void setReproducoesMusica(int reproducoesMusica);
		void setDataDeAdicao(std::string dataDeAdicao);
		void setUltimaReproducao(std::string ultimaReproducao);
		void setProx(cNo* p);
		void setProx();
		void setAnte(cNo* a);
		void setAnte();
		
		std::string 	getNomeArtista();
		std::string 	getNomeAlbum();
		std::string 	getGeneroAlbum();
		int 		getAnoAlbum();
		std::string 	getNomeMusica();
		int 		getDuracaoMusica();
		int 		getClassificacaoMusica();
		int 		getReproducoesMusica();
		std::string 	getDataDeAdicao();
		std::string 	getUltimaReproducao();
		cNo* 		getProx();
		cNo* 		getAnte();
		
};

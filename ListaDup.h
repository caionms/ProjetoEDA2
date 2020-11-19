/* Lista Duplamente Encadeada */ 

#include <iostream>
#include <string>

#include "No.h"

class cListaDupEnc {
	private:
		int numElem;
		cNo* inicio;
		cNo* fim;
		
	public:
		cListaDupEnc();
		cListaDupEnc(const cListaDupEnc &l);
		~cListaDupEnc();
		bool 	InsereElemInicio(std::string nomeArtista, std::string nomeAlbum, std::string generoAlbum, int anoAlbum, std::string nomeMusica, int duracaoMusica, int classificacaoMusica, int reproducoesMusica, std::string dataDeAdicao, std::string ultimaReproducao);
		
		

		bool 	InsereElemFim(std::string nomeArtista, std::string nomeAlbum, std::string generoAlbum, int anoAlbum, std::string nomeMusica, int duracaoMusica, int classificacaoMusica, int reproducoesMusica, std::string dataDeAdicao, std::string ultimaReproducao);
		
		bool 	InsereElemFim(std::string nomeArtista, std::string nomeAlbum, int anoAlbum, std::string nomeMusica, int duracaoMusica, int classificacaoMusica, int reproducoesMusica, std::string dataDeAdicao, std::string ultimaReproducao); //sem genero
		
		bool 	InsereElemFim(std::string nomeArtista, std::string nomeAlbum, std::string generoAlbum, int anoAlbum, std::string nomeMusica, int duracaoMusica, int reproducoesMusica, std::string dataDeAdicao, std::string ultimaReproducao); //sem classificacao
		
		bool 	InsereElemFim(std::string nomeArtista, std::string nomeAlbum, int anoAlbum, std::string nomeMusica, int duracaoMusica, int reproducoesMusica, std::string dataDeAdicao, std::string ultimaReproducao); //sem genero e classificacao
		
		bool 	BuscaElem(std::string nomeMusica, cNo** no, cNo** noProx, cNo** noAnte); //busca pelo nome da música
		bool 	RemoveElem(std::string nomeMusica); //remove pelo nome da música
		bool 	RemoveElemInicio();
		bool 	RemoveElemFim();
		void 	ImprimirLista();
		int 	getTamanho();
		cNo* 	getInicio();
		cNo* 	getFim();
};

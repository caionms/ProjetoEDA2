#include <iostream>
#include <string>

#include "ListaDup.h"

using namespace std;

int main(){
	cListaDupEnc l1;
	string nomeArtista = "artista teste"; 
	string nomeAlbum = "album teste"; 
	string generoAlbum = "album teste"; 
	int anoAlbum = 2019; 
	string nomeMusica = "MUSICA TESTE"; 
	int duracaoMusica = 150; 
	int classificacaoMusica = 80; 
	int reproducoesMusica = 3; 
	string dataDeAdicao = "10/04/2020";
	string ultimaReproducao = "23/04/2020";
	if(l1.InsereElemFim(nomeArtista, nomeAlbum, generoAlbum, anoAlbum, nomeMusica, duracaoMusica, classificacaoMusica, reproducoesMusica, dataDeAdicao, ultimaReproducao))
		cout << "Musica " << nomeMusica << " inserido no fim da Lista Duplamente Encadeada." << endl;
	else
		cout << "Musica " << nomeMusica << " nao inserido na Lista Duplamente Encadeada." << endl;
	l1.ImprimirLista();
	return 0;
}

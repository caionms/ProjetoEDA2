/* No da Lista Duplamente Encadeada */ 

#include <iostream>
#include <string>

#include "No.h"

// ******************************************************

cNo::cNo() {
	nomeArtista = "";
	nomeAlbum = "";
	generoAlbum = "";
	anoAlbum = 0;
	nomeMusica = "";
	duracaoMusica = 0;
	classificacaoMusica = 0;
	reproducoesMusica = 0;
	dataDeAdicao = "";
	ultimaReproducao = "";
	prox = NULL;
	ante = NULL;
}

// ******************************************************

cNo::cNo(std::string nomeArtista, std::string nomeAlbum, std::string generoAlbum, int anoAlbum, std::string nomeMusica, int duracaoMusica, int classificacaoMusica, int reproducoesMusica, std::string dataDeAdicao, std::string ultimaReproducao) {
	this->nomeArtista = nomeArtista;
	this->nomeAlbum = nomeAlbum;
	this->generoAlbum = generoAlbum;
	this->anoAlbum = anoAlbum;
	this->nomeMusica = nomeMusica;
	this->duracaoMusica = duracaoMusica;
	this->classificacaoMusica = classificacaoMusica;
	this->reproducoesMusica = reproducoesMusica;
	this->dataDeAdicao = dataDeAdicao;
	this->ultimaReproducao = ultimaReproducao;
	this->prox = NULL;
	this->ante = NULL;
}

// ******************************************************

cNo::cNo(std::string nomeArtista, std::string nomeAlbum, int anoAlbum, std::string nomeMusica, int duracaoMusica, int classificacaoMusica, int reproducoesMusica, std::string dataDeAdicao, std::string ultimaReproducao) { //sem genero
	this->nomeArtista = nomeArtista;
	this->nomeAlbum = nomeAlbum;
	this->anoAlbum = anoAlbum;
	this->nomeMusica = nomeMusica;
	this->duracaoMusica = duracaoMusica;
	this->classificacaoMusica = classificacaoMusica;
	this->reproducoesMusica = reproducoesMusica;
	this->dataDeAdicao = dataDeAdicao;
	this->ultimaReproducao = ultimaReproducao;
	this->prox = NULL;
	this->ante = NULL;
}

// ******************************************************

cNo::cNo(std::string nomeArtista, std::string nomeAlbum, std::string generoAlbum, int anoAlbum, std::string nomeMusica, int duracaoMusica, int reproducoesMusica, std::string dataDeAdicao, std::string ultimaReproducao) { //sem classificacao
	this->nomeArtista = nomeArtista;
	this->nomeAlbum = nomeAlbum;
	this->generoAlbum = generoAlbum;
	this->anoAlbum = anoAlbum;
	this->nomeMusica = nomeMusica;
	this->duracaoMusica = duracaoMusica;
	this->reproducoesMusica = reproducoesMusica;
	this->dataDeAdicao = dataDeAdicao;
	this->ultimaReproducao = ultimaReproducao;
	this->prox = NULL;
	this->ante = NULL;
}

// ******************************************************

cNo::cNo(std::string nomeArtista, std::string nomeAlbum, int anoAlbum, std::string nomeMusica, int duracaoMusica, int reproducoesMusica, std::string dataDeAdicao, std::string ultimaReproducao) { //sem genero e classificacao
	this->nomeArtista = nomeArtista;
	this->nomeAlbum = nomeAlbum;
	this->anoAlbum = anoAlbum;
	this->nomeMusica = nomeMusica;
	this->duracaoMusica = duracaoMusica;
	this->reproducoesMusica = reproducoesMusica;
	this->dataDeAdicao = dataDeAdicao;
	this->ultimaReproducao = ultimaReproducao;
	this->prox = NULL;
	this->ante = NULL;
}

// ******************************************************

cNo::cNo(const cNo &n) {
	nomeArtista = n.nomeArtista;
	nomeAlbum = n.nomeAlbum;
	generoAlbum = n.generoAlbum;
	anoAlbum = n.anoAlbum;
	nomeMusica = n.nomeMusica;
	duracaoMusica = n.duracaoMusica;
	classificacaoMusica = n.classificacaoMusica;
	reproducoesMusica = n.reproducoesMusica;
	dataDeAdicao = n.dataDeAdicao;
	ultimaReproducao = n.ultimaReproducao;
	prox = NULL;
	ante = NULL;
}

// ******************************************************

cNo::~cNo() {
	
}

// ******************************************************

void cNo::setNomeArtista(std::string d) {
	nomeArtista = d;
}

// ******************************************************

void cNo::setNomeAlbum(std::string d) {
	nomeAlbum = d;
}

// ******************************************************

void cNo::setGeneroAlbum(std::string d) {
	generoAlbum = d;
}

// ******************************************************

void cNo::setAnoAlbum(int d) {
	anoAlbum = d;
}

// ******************************************************

void cNo::setNomeMusica(std::string d) {
	nomeMusica = d;
}

// ******************************************************

void cNo::setDuracaoMusica(int d) {
	duracaoMusica = d;
}

// ******************************************************

void cNo::setClassificacaoMusica(int d) {
	classificacaoMusica = d;
}

// ******************************************************

void cNo::setReproducoesMusica(int d) {
	reproducoesMusica = d;
}

// ******************************************************

void cNo::setDataDeAdicao(std::string d) {
	dataDeAdicao = d;
}

// ******************************************************

void cNo::setUltimaReproducao(std::string d) {
	ultimaReproducao = d;
}

// ******************************************************

void cNo::setProx(cNo* p) {
	prox = p;
}

// ******************************************************

void cNo::setProx() { //para ajudar na remoção do ultimo elemento
	prox = NULL;
}

// ******************************************************

void cNo::setAnte(cNo* a) {
	ante = a;
}

// ******************************************************

void cNo::setAnte() { //para ajudar na remoção do primeiro elemento
	ante = NULL;
}

// ******************************************************

std::string  cNo::getNomeArtista(){
	return nomeArtista;
}

// ******************************************************

std::string  cNo::getNomeAlbum(){
	return nomeAlbum;
}

// ******************************************************

std::string  cNo::getGeneroAlbum(){
	return generoAlbum;
}

// ******************************************************

int  cNo::getAnoAlbum(){
	return anoAlbum;
}

// ******************************************************

std::string  cNo::getNomeMusica(){
	return nomeMusica;
}

// ******************************************************

int  cNo::getDuracaoMusica(){
	return duracaoMusica;
}

// ******************************************************

int  cNo::getClassificacaoMusica(){
	return classificacaoMusica;
}

// ******************************************************

int  cNo::getReproducoesMusica(){
	return reproducoesMusica;
}

// ******************************************************

std::string  cNo::getDataDeAdicao(){
	return dataDeAdicao;
}

// ******************************************************

std::string  cNo::getUltimaReproducao(){
	return ultimaReproducao;
}

// ******************************************************

cNo*  cNo::getProx() {
	return prox;
}

// ******************************************************

cNo*  cNo::getAnte() {
	return ante;
}

// ******************************************************

#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED
#include <iostream>
#define firstVertex(G) G.firstVertex
#define namaTempat(V) V->namaTempat
#define nextVertex(V) V->nextVertex
#define firstEdge(V) V->firstEdge
#define nextEdge(E) E->nextEdge
#define gedungAwal(E) E->gedungAwal
#define gedungTujuan(E) E->gedungTujuan
#define namaJalan(E) E->namaJalan
#define jarak(E) E->jarak
#define waktuTempuh(E) E->waktuTempuh
using namespace std;

typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;

struct vertex {
    string namaTempat;
    adrVertex nextVertex;
    adrEdge firstEdge;
};

struct edge{
    string gedungAwal;
    string gedungTujuan;
    string namaJalan;
    int jarak;
    int waktuTempuh;
    adrEdge nextEdge;
};

struct graph {
    adrVertex firstVertex;
};

void createVertex(string namaGedung, adrVertex &V);
void createEdge(string gedungAwal, string gedungTujuan, string namaJalan, int jarak, int waktuTempuh, adrEdge &E);
void initGraph(graph &G);
void addVertex(graph &G, string namaGedung);
void addEdge(graph &G, string gedungAwal, string gedungTujuan, string namaJalan, int jarak, int waktuTempuh);
void buildGraph(graph &G);
adrVertex findVertex(graph G, string namaGedung);
adrEdge findEdge(adrVertex V, string namaJalan, string namaGedung);
void allRouteToBuilding(graph G, string gedungAwal, string gedungTujuan);
void findShortRoute(graph G, string gedungAwal, string gedungTujuan);
void printGraph(graph G);
void deleteEdge(graph &G, string gedung);
void deleteVertex(graph &G, string gedung);
void menu ();
void header();
void footer();
void namaKelompok();
void allRoute(graph G, string gedungAwal, string gedungTujuan);
void mencariRute(graph G, adrVertex gedungAwal, string gedungTujuan, string rute[], int panjangrRute, bool terkunjungi[], int &totalJarak, int &totalwaktu, int &jarak, int &waktu);
#endif // TUBES_H_INCLUDED
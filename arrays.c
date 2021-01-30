//Esta funcion evalua si el numero ingresado es o no un entero
int fnum(float x)
{
  int a = x;
  return a < x ? 1:0;
}



const char *facultades[12] =
{
"ESCUELA NACIONAL DE CIENCIAS DE LA TIERRA",
"ESCUELA NAL. DE ESTUDIOS SUP. UNIDAD JURIQUILLA",
"ESCUELA NAL. DE ESTUDIOS SUP. UNIDAD MERIDA",
"ESCUELA NAL. DE ESTUDIOS SUP. UNIDAD MORELIA",
"FACULTAD DE ARQUITECTURA",
"FACULTAD DE CIENCIAS",
"FACULTAD DE INGENIERIA",
"FACULTAD DE QUIMICA",
"FES ACATLAN",
"FES ARAGON",
"FES CUAUTITLAN",
"FES ZARAGOZA"
};



const char *carreras[32]=
      {
        "NULL",
        "ACTUARIA",
        "ARQUITECTURA",
        "ARQUITECTURA DE PAISAJE",
        "CIENCIAS DE LA COMPUTACION",
        "DISEÑO INDUSTRIAL",
        "FISICA",
        "INGENIERIA CIVIL",
        "INGENIERIA DE MINAS Y METALURGIA",
        "INGENIERIA ELECTRICA ELECTRONICA",
        "INGENIERIA EN COMPUTACION",
        "INGENIERIA GEOLOGICA",
        "INGENIERIA GEOFISICA",
        "INGENIERIA INDUSTRIAL",
        "INGENIERIA MECANICA",
        "INGENIERIA MECANICA ELECTRICA",
        "INGENIERIA PETROLERA",
        "INGENIERIA QUIMICA",
        "INGENIERIA QUIMICA METALURGICA",
        "INGENIERIA GEOMATICA",
        "MATEMATICAS APLICADAS Y COMPUTACION",
        "MATEMATICAS",
        "URBANISMO",
        "CIENCIAS DE LA TIERRA",
        "ING. EN TELECOMUNICACIONES, SISTEMAS Y ELECTRONICA",
        "GEOCIENCIAS",
        "TECNOLOGIAS PARA LA INFORMACION EN CIENCIAS",
        "CIENCIA DE MATERIALES SUSTENTABLES",
        "FISICA BIOMEDICA",
        "MATEMATICAS APLICADAS",
        "INGENIERIA AMBIENTAL",
        "INGENIERIA AEROESPACIAL"
      };


      int opciones[12][12] =
      {
        {23}, {23}, {23}, {24, 26},
        {22, 2, 3}, {1, 4,6,21,28,29},
        {7, 8, 9, 10, 11, 12, 13, 14, 16, 19, 30, 31},
        {17, 18}, {1, 2, 7, 20}, {2, 5, 7, 9, 10, 13, 14},
        {13, 15, 17, 24}, {17}

      };


int data[44][5]={
//Oferta	Aspirantes	Presentaron	Aciertos	Seleccionados
{   10,	    144,         	118,	     103,      	10},
{   10,	    65,           52,	       82,	      11},
{   12,	    21,           21,	       62,	      12},
{    9,	    27,           20,	       65,	      10},
{   15,	    26,           22,	       65,	      15},
{   16,	    22,           16,	       47,	      16},
{   70,	    1699,         1437,	     98,	      70},
{   10,	    157,         	135,	     91,	      12},
{   10,	    99,           88,	       86,	      10},
{   18,	    548,         	449,	     111,      	21},
{   15,	    340,         	288,	     108,      	20},
{   10,	    762,         	596,	     116,      	14},
{   35,	    311,         	263,	     107,      	37},
{    5,	    157,         	133,	     112,      	 5},
{   10,	    130,         	107,       108,	      11},
{   30,	    485,         	421,	     96	,       36},
{   10,	    57,           49,	       81,	      10},
{   40,	    434,         	365,	     99	,       43},
{   35,	    884,         	764,	     101,	      41},
{    7,	    76,           65,	       104,	       7},
{   10,	    86,           75,	       95,	      10},
{   26,	    385,         	316,	     99,        29},
{   18,	    544,         	478,	     105,	      19},
{   20,	    181,         	161,	     87,        20},
{    9,	    95,           82,	       94,	      10},
{    6,	    180,         	149,	     107,	       7},
{   10,	    925,         	808,	     116,	       10},
{   20,	    392,         	325,	     108,	       21},
{    8,	    112,         	100,	     108,	       8},
{   15,	    287,         	246,	     105,	       15},
{   23,	    644,         	571,	     94	,        24},
{   30,	    336,         	309,	     78	,        31},
{   85,	    361,         	322,	     76	,        89},
{   35,	    781,         	726,	     86	,        38},
{    5,	    307,         	272,	     95	,        5},
{   50,	    476,         	426,	     75	,        53},
{   20,	    212,         	180,	     86	,        20},
{   22,	    712,         	648,	     90	,        24},
{   16,	    270,         	245,	     89	,        17},
{   13,	    285,         	254,	     87	,        14},
{   16,	    231,         	196,	     81	,        16},
{   30,	    262,         	223,	     77	,        31},
{   20,	    241,         	210,	     86	,        22},
{   30,	    315,         	287,	     72	,        31},
{   30,	    321,         	294,	     89	,        30}
};

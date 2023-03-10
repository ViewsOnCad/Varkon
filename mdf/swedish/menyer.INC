
! Varkons standardmenyer
! Senast uppdaterade f?r version 1.18A
! Johan Kjellander, ?rebro universitet
!
m2  = "HUVUDMENY-2D"
      "skapa",m13
      "?ndra",m15
      "ta bort",m22
      "variera",m34
      "analys",m75
      "grafik",m66
      "niv?er",m65
      "attribut",m14
      "mbs",m58
      "arkiv",m5;

m3  = "HUVUDMENY-3D"
      "skapa",m11
      "?ndra",m15
      "ta bort",m22
      "variera",m34
      "analys",m75  
      "grafik",m66 
      "niv?er",m65
      "attribut",m14
      "mbs",m58
      "arkiv",m5;

m4  = "RITMODUL"
      "skapa",m13
      "redigera",m49
      "ta bort",m80
      "analys",m75  
      "grafik",m66 
      "niv?er",m65
      "attribut",m14
      "arkiv",m6;

m5  = "ARKIV"
      "?ppna",m47
      "spara",f175
      "spara som",m45
      "ta bort",f184
      "projekt",m7
      "skriv ut",m71
      "inst?llningar",m8
      "macro",f152
      "kom till OS",f125
      "sluta",m46;

m6  = "ARKIV"
      "?ppna",m47
      "spara",f175
      "spara som",m48
      "ta bort",f184
      "projekt",m7
      "skriv ut",m71
      "macro",f152
      "kom till OS",f125
      "sluta",m46;

m7  = "PROJEKT"
      "byt projekt",f176
      "inst?llningar",f178
      "ta bort projekt",f179;

m8  = "INST?LLNINGAR"
      "attribut",f127
      "skyddskod",f128;

m10 = "TCOPY"
      "translation",f239
      "rotation",f240
      "spegling",f241
      "kopiering",f242;

! Skapa f?r Basmodul-3D

m11 = "SKAPA"
      "punkt",m20
      "linje",m40
      "cirkelb?ge",m55
      "kurvor",m60
      "ytor",m12
      "koordsystem",m26
      "text",f50
      "tcopy",m10
      "grupp",f55
      "parter",m43;

m12 = "YTOR"
      "bplan",f26
      "rotation",f158
      "cylinder",f160
      "svept",f181
      "regel",f182
      "loftad",f238
      "offset",f159
      "approx",f235
      "trimmad",f234
      "sammansatt",f236
      "importera",f237;

! Skapa f?r Basmodul-2D och Ritmodul

m13 = "SKAPA"
      "punkt",f20
      "linje",m41
      "cirkelb?ge",m56
      "kurvor",m61
      "text",m23
      "m?tts?ttning",m50
      "koordsystem",m25
      "grupp",f55
      "parter",m39;

m14 = "ATTRIBUT"
      "penna",f96
      "niv?",f90
      "linjebredd",f186
      "linjer",m42
      "cirklar",m57
      "kurvor",m21
      "text",m51
      "m?tt",m31
      "snitt",m32;

m15 = "?NDRA"
      "penna",f11
      "niv?",f12
      "linjebredd",f185
      "attribut",m16
      "storhet",M117
      "trimma",f6;

m16 = "ATTRIBUT"
      "linje",m17
      "cirkel",m17
      "kurva",m90
      "text",m18
      "m?tt",m19
      "snitt",m17;

m17 = "ATTRIBUT"
      "heldragen",f74
      "streckad",f76
      "centrum",f77
      "ny l?ngd",f73;

m18 = "TEXT"
      "h?jd",f78
      "bredd",f79
      "lutning",f89
      "typsnitt",f171
      "tpmode",f226;

m19 = "M?TT"
      "sifferstorlek",f154
      "pilstorlek",f155
      "decimaler",f129
      "auto",f131
      "ej auto",f130;

m20 = "PUNKT"
      "fri",f19
      "projicerad",f21;

m21 = "KURVOR"
      "heldragna",f164
      "streckade",f165
      "centrum",f166
      "streckl?ngd",f167;

m22 = "TA BORT"
      "en storhet",f10
      "grupp",f13
      "sista sats",f15;

m23 = "TEXT"
      "v?nster",f50
      "h?ger",M113
      "centrerad",M114
      "2 positioner",M115;
!      "font-editor",m93;

m25 = "KOORDSYSTEM"
      "3 pos",f105
      "pos/vinkel",f9
      "aktivera",m27;

m26 = "KOORDSYSTEM"
      "3 pos",f104
      "pos/vinklar",f14
      "aktivera",m27;

m27 = "AKTIVERA"
      "lokalt",f106
      "globala",f107
      "basic",f177;

m30 = "L?NGDM?TT"
      "horisontellt",f30
      "vertikalt",f31
      "parallellt",f32;

m31 = "M?TT"
      "sifferstorlek",f80
      "pilstorlek",f81
      "decimaler",f82
      "auto",f83
      "ej auto",f84;

m32 = "SNITT"
      "heldragna",f85
      "streckade",f86
      "centrum",f87
      "streckl?ngd",f88;

m33 = "DIAMETERM?TT"
      "horisontellt",f33
      "vertikalt",f34
      "parallellt",f35;

m34 = "VARIERA"
      "part",m35
      "aktiv modul",m36;

m35 = "PART"
      "?ndra",f170
      "uppdatera",f109;

m36 = "AKTIV MODUL"
      "parametrar",m37
      "lista",m38
      "editera",f168
      "k?r",f5;

m37 = "PARAMETRAR"
      "skapa",f2
      "?ndra",f3
      "lista",f4;

m38 = "LISTA MODUL"
      "sk?rm",f146
      "fil",f144;

m39 = "PARTER"
      "fast",f25
      "tempor?r",f8
      "iges",p1624
      "dxf",m44
      "plotfil",m52;

m40 = "LINJE"
      "2f tv? pos",f22
      "2p projicerad",f41
      "pl parallell",f23
      "v  vinkelr?t",f54
      "pv pos/vinkel",f24
      "pt pos/tan",f28
      "t  tan/tan",f29;

m41 = "LINJE"
      "2  tv? pos",f40
      "pl parallell",f42
      "v  vinkelr?t",f39
      "pv pos/vinkel",f43
      "pt pos/tan",f44
      "t  tan/tan",f45;

m42 = "LINJER"
      "heldragna",f46
      "streckade",f47
      "centrum",f48
      "streckl?ngd",f49;

m43 = "PARTER"
      "fast",f25
      "tempor?r",f8
      "iges",p1624
      "dxf",m53
      "stl",m87;

m44 = "DXF-2D"
      "l?s in",p388
      "skriv ut",f92;

m45 = "SPARA SOM"
      "alla filer",f201
      "JOB-fil",f119
      "MBO-fil",f126
      "MBS-fil",f144
      "RES-fil",f121;

m46 = "SLUTA"
      "allt lagras",f122
      "inget lagras",f123;

m47 = "?PPNA"
      "lagra f?rst",f124
      "inget lagras",f120;

m48 = "SPARA SOM"
      "alla filer",f201
      "JOB-fil",f119
      "RIT-fil",f121;

m49 = "REDIGERA"
      "?ndra",m81
      "trimma",f6
      "dra",f202
      "flytta",f209
      "spegla",f211
      "rotera",f203
      "kopiera",f210;

m50 = "M?TTS?TTNING"
      "l?ngdm?tt",m30
      "diameterm?tt",m33
      "radiem?tt",f36
      "vinkelm?tt",f37
      "snitt",f38;

m51 = "TEXTER"
      "h?jd",f51
      "bredd",f52
      "lutning",f53
      "typsnitt",f172
      "tpmode",f227;

m52 = "PLOTFIL"
      "l?s in",f145
      "skriv ut",f151;

m53 = "DXF-3D"
      "l?s in",p389
      "2D-skriv ut",f92
      "3D-skriv ut",M398;

m55 = "CIRKELB?GE"
      "1 pos/vinklar",f56
      "2 pos/radie",f57
      "3 pos",f58
      "offset",f59
      "h?rnradie",f65;

m56 = "CIRKELB?GE"
      "1 pos/vinklar",f60
      "2 pos/radie",f61
      "3 pos",f62
      "offset",f63
      "h?rnradie",f64;

m57 = "CIRKLAR"
      "heldragna",f66
      "streckade",f67
      "centrum",f68
      "streckl?ngd",f69;

m58 = "MBS"
      "aktiv modul",f216
      "part",m59;

m59 = "PART"
      "editera",f217
      "uppdatera",f109
      "kompilera alla",f220;

m60 = "KURVOR"
      "spline",m89
      "k?gelsnitt",m84
      "offset",f163
      "sammansatt",f75
      "trimmad",f232
      "isoparam",f230
      "sk?rning",f183
      "siluett",f233
      "approx",f231;

m61 = "KURVOR"
      "spline",m89
      "k?gelsnitt",f161
      "offset",f163
      "sammansatt",f75
      "trimmad",f232
      "approx",f231;

m62 = "DOLDA KONT"
      "sk?rm",f133
      "fil",f134
      "b?da",f135;

m63 = "FERGUSON"
      "med tang.",f70
      "utan tang.",f116;

m64 = "CHORD LENGTH"
      "med tang.",f71
      "utan tang.",f156;

m65 = "NIV?ER"
      "byt aktiv",f90
      "niv?namn",m88;

m66 = "GRAFIK"
      "vyer",m67 
      "raster",m69 
      "plottning",m71
      "diverse",m72;

! Meny-66 f?r teckenbaserade terminaler
!m66 = "GRAFIK"
!      "vyer",m67 
!      "raster",m69 
!      "plottning",m71
!      "skala",f101
!      "centrum",f102
!      "generera",f103
!      "f?reg?ende",f91
!      "zoom",m74
!      "auto-zoom",f97
!      "diverse",m72;

m67 = "VYER"
      "skapa vy",m70
      "ta bort vy",f112
      "lista vyer",f113
      "nytt f?nster",f196
      "skuggning",m85
      "dolda kont",m62;

m68 = "SK?RMLAYOUT"
      "hela menyer",f147
      "bara rubriker",f148
      "inga menyer",f149
      "status",f137
      "ej status",f138
      "pos-menyn",m73;

m69 = "RASTER"
      "l?ge",f16
      "x-delning",f17
      "y-delning",f18
      "t?nd raster",f114
      "sl?ck raster",f115;

m70 = "SKAPA VY"
      "betr. pos.",f111
      "koord.sys.",f99
      "8 vyer",M112;

m71 = "PLOTTNING"
      "skapa plotfil",f151
      "plotta",f150;

m72 = "DIV"
      "kurv-noggr",f98
      "sk?rmlayout",m68 
      "allt pekbart",f215
      "kalibrera dig",f136
      "ritningsskala",f108;

m73 = "POS-MENYN"
      "p?",f118
      "av",f117;

m74 = "ZOOM"
      "h?rkors",f100
      "pos./l?ngd",M394
      "nytt centrum",M395;

m75 = "ANALYS"
      "formel",M393
      "geometri",m76 
      "part/grupp",m79
      "status",m78 
      "systemdata",m77;

m76 = "GEOMETRI"
      "en storhet",M356
      "position",M363
      "avst?nd",M364
      "vinkel",M365
      "area",m86
      "tyngdpunkt",M417
      "kurvor",m91;

m77 = "SYSTEMDATA"
      "gm-data",f140
      "pm-data",f139
      "systemdata",M184
      "?vrigt",m95;

m78 = "STATUS"
      "jobb",M368
      "grafik",M369
      "attribut",M370;

m79 = "PART/GRUPP"
      "en part",M379
      "anropskedja",M418
      "referenser",f169
      "part medlemmar",M366
      "partlista",M378
      "strukturtr?d",p419
      "gm-lista",M420
      "grupp medlemmar",M360
      "grupplista",M361;

m80 = "TA BORT"
      "en storhet",f10
      "grupp",f13
      "sl?ck",f213
      "t?nd alla",f214;

m81 = "?NDRA"
      "penna",f11
      "niv?",f12
      "linjebredd",f185
      "attribut",m16
      "cirkel",m82
      "text",m83
      "grupp",f212
      "part",m35;

m82 = "CIRKEL"
      "radie",f204
      "startvinkel",f205
      "slutvinkel",f206;

m83 = "TEXT"
      "vinkel",f207
      "text",f208;

m84 = "K?GELSNITT"
      "fri",f161
      "projicerad",f162;

m85 = "SKUGGNING"
      "snabb",f198
      "mjuk",f199
      "dynamisk",f200
      "kurv-noggr",f98;

m86 = "YTA"
      "2D-area",M416
      "kurva",M1591
      "yta",M1589;

m87 = "STL"
      "l?s in",p1623
      "skriv ut",M1625;

m88 = "NIV?NAMN"
      "skapa",f93
      "ta bort",f95
      "lista",f94;

m89 = "SPLINE"
      "ferguson",m63
      "chord length",m64
      "variable stiffness",m97;

m90 = "KURVATTRIBUT"
      "heldragen",f74
      "streckad",f76
      "centrum",f77
      "fylld",f218
      "ny l?ngd",f73;

m91 = "KURVOR"
      "l?ngd",M431
      "tangent",M432
      "normal",M434
      "bi-normal",M435
      "kr?kning",M433
      "inverser",m92;

m92 = "INVERSER"
      "position",M436
      "tangent",M437
      "kr?kning",M438
      "l?ngd",M439;

m93 = "FONT_EDITOR"
      "mall",p176
      "punkter",f20
      "rita",M177
      "flytta",p178
      "generera fil",m94;

m94 = "GENERERA FIL"
       "detta tecken",M179
       "alla tecken",M180;

m95 = "?VRIGT"
      "idtab-ej dok",f141
      "l?s-ej dok",f142
      "sydata-ej dok",f143;

m97 = "VAR STIFFNESS"
      "med tang.",f72
      "utan tang.",f157;

m100 = "2 POSITIONER"
       "1 startpos",a1
       "2 slutpos",a2;

m101 = "PARALLELL"
       "linje",a1
       "avst?nd",a2;

m102 = "POS-VINKEL"
       "startposition",a1
       "vinkel",a2
       "l?ngd",a3;

m103 = "VINKELR?T"
       "startposition",a1
       "linje",a2
       "l?ngd",a3;

m104 = "POS-TANGENT"
       "startposition",a1
       "cirkel/kurva",a2
       "alternativ",a3;

m105 = "TAN-TAN"
       "1:a cirkel",a1
       "2:a cirkel",a2
       "alternativ",a3;

m106 = "1 POSITION"
       "origo",a1
       "radie",a2
       "startvinkel",a3
       "slutvinkel",a4;

m107 = "TV? POS"
       "1 startpos",a1
       "2 slutpos",a2
       "radie",a3;

m108 = "TRE POS"
       "1 startpos",a1
       "2 mittpos",a2
       "3 slutpos",a3;

m109 = "H?RNRADIE"
       "1:a storhet",a1
       "2:a storhet",a2
       "radie",a3
       "alternativ",a4;

m110 = "OFFSET"
       "cirkel",a1
       "avst?nd",a2;

m111 = "L?NGDM?TT"
       "1 startpos",a1
       "2 slutpos",a2
       "textpos",a3
       "alternativ",a4;

m112 = "DIAMETERM?TT"
       "cirkel",a1
       "textpos",a2
       "alternativ",a3;

m113 = "RADIEM?TT"
       "cirkel",a1
       "brytpos",a2
       "textpos",a3;

m114 = "VINKELM?TT"
       "1:a linjen",a1
       "2:a linjen",a2
       "textpos",a3
       "alternativ",a4;

m115 = "TEXT"
       "position",a1
       "vinkel",a2
       "text",a3;

m116 = "SNITT"
       "avst?nd",a1
       "vinkel",a2;

m117 = "KSYS 1P"
       "namn",a1
       "origo",a2
       "x-vinkel",a3
       "y-vinkel",a4
       "z-vinkel",a5;

m118 = "KSYS 3P"
       "namn",a1
       "origo",a2
       "x-axel",a3
       "y-axel",a4;

m119 = "B_PLAN"
       "1:a h?rnet",a1
       "2:a h?rnet",a2
       "3:e h?rnet",a3
       "4:e h?rnet",a4
       "reversera",a5;

m120 = "K?GELSNITT"
       "1 startpos",a1
       "2 starttang",a2
       "3 P-v?rde",a3
       "4 slutpos",a4
       "5 sluttang",a5;

m121 = "OFFSET"
       "kurva",a1
       "offset",a2;

m122 = "SPLINE"
       "1 startpos",a1
       "2 starttang",a2
       "3 slutpos",a3
       "4 sluttang",a4;

m123 = "SK?RNING"
       "yta",a1
       "plan",a2;

m134= "GRUPP"
      "namn",a3
      "ta bort",a4
      "l?gg till",a5;

m140= "POSITION"
      "absolut",a1
      "relativt",a2
      "h?rkors",a3
      "?nde",a4
      "p? storhet",a5
      "centrum",a6
      "sk?rning",a7;

m141= "POSITION"
      "absolut",a1
      "relativt",a2
      "h?rkors",a3
      "mbs",a4
      "?nde",a5
      "p? storhet",a6
      "centrum",a7
      "sk?rning",a8;

m143= "PARAMETERTYP"
      "heltal",a1
      "flyttal",a2
      "str?ng",a3
      "vektor",a4;

m144= "MODULTYP"
      "geometri",a1
      "ritning",a2;

m145= "ATTRIBUT"
      "lokal",a1
      "global",a2
      "basic",a3;

m146= "SKAPA PLOTFIL"
      "hela modellen",a1
      "allt p? sk?rm",a2
      "del av sk?rm",a3
      "annan vy",a4;

m147= "SKAPA DXF-FIL"
      "hela modellen",a1
      "allt p? sk?rm",a2
      "del av sk?rm",a3
      "annan vy",a4;

m150= "OFFSET"
      "yta",a1
      "offset",a2;

m151= "ROTATION"
      "kurva",a1
      "startvinkel",a2
      "slutvinkel",a3
      "1:a position",a4
      "2:a position",a5;

!Ej klar      "reversera",a6;

m152= "CYLINDER"
      "kurva",a1
      "avst?nd",a2
      "reversera",a3;

m153= "SVEPYTA"
      "profilkurva",a1
      "styrkurva",a2
      "reversera",a3;

m154= "REGELYTA"
      "1:a kurvan",a1
      "2:a kurvan",a2
      "reversera",a3;

!Ej klar      "b?gl?ngd",a4
!Ej klar      "ursprunglig",a5;
      

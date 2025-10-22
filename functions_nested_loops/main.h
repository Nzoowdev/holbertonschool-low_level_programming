
/***************************************
*                                      *
*   Copyright (c) 1998 Jean-Eric Pin   *
*   All rights reserved.               *
*                                      *
*   TAB = 2 spaces                     *
*                                      *
***************************************/

/*-------------------------------------------------------------------
 * Main.h    Jean-Eric Pin 07/12/96
 *-------------------------------------------------------------------
 */     

/************************************************
*        
*  Choix du systeme : MAC, UNIX, WINDOWS, DOS
*        
************************************************/


#define  MAC      1
#define  UNIX    2  
#define  WINDOWS  3
#define  DOS      4  

#define  SYSTEME  UNIX

/************************************************
*        
*  Number of bits (machine dependent) 32 or 64
*        
************************************************/
#define  BITS    32  


#ifndef CLOCKS_PER_SEC
#define CLOCKS_PER_SEC CLK_TCK
#endif



/********************************************************************
*        
*  PROFILER : si on l'utilise, il faut desactiver "strictement ANSI" 
* et "Mots-cles ANSI uniquement". En revanche, activer "Emettre des
* appels du Profiler".
*        
********************************************************************/

#undef PROFIL

/****************
*        
*  Debogage  
*        
****************/

/* #define DEBUG */

#ifdef DEBUG
  #define TRACE(s) printf s
#else
  #define TRACE(ignore)
#endif   /* DEBUG */


/*****************
*
*  Constantes
*  
*****************/

#define TAILLE_BUFFER  128
#define  SIZE_BUFFER_TEXT  200

#define  IDENTITE    1UL

#define  IDEMPOTENT            0x1UL
#define  DANS_UN_GROUPE        0x2UL
#define  REGULIER              0x4UL
#define  OMEGA_CALCULE          0x8UL
#define  EST_CALCUL_DROIT      0x10UL    /* Bit d'etat : vaut 1 si u provient du calcul d'un produit droit */
#define  R_VISITE              0x20UL    
#define  R_DEJA_CALCULE        0x40UL      
#define  R_PARCOURS            0x80UL      
#define  L_VISITE              0x100UL    
#define  L_DEJA_CALCULE        0x200UL      
#define  L_PARCOURS            0x400UL      
#define  D_VISITE              0x800UL    
#define  D_DEJA_VISITE          0x1000UL      
#define  D_PARCOURS            0x2000UL      
#define  EST_D_MINIMAL           0x4000UL    /* Dans l'ideal minimum */
#define  EST_DANS_P            0x8000UL
#define  EST_ELEMENT_LOCAL      0x10000UL
#define  EST_DANS_IDEAL_DROIT   0x20000UL    
#define  EST_DANS_IDEAL_GAUCHE  0x40000UL    
#define  EST_DANS_KS            0x80000UL
#define  EST_DANS_AM            0x100000UL
#define  EST_DANS_AN            0x200000UL
#define  EST_DANS_T            0x400000UL

#define  EST_REDUIT            (1UL  << (BITS - 1))  /* Les parentheses sont indispensables, car c'est une macro... */
#define  NumeroDeParcours      xOmega   
#define  PointDAttache          Hclasse  

enum LeTypeSemigroupe {ParTransitions = 1, ParTransitionsPartielles, MatricesBooleennes,
      MatricesMaxPlus, MatricesMinPlus, MatricesMaxPlusTropicales, MatricesMinPlusTropicales,
      MatricesMaxPlusProjectives, MatricesEntieres, Presentation};
enum LeTypeCalcul {Semigroupe = 1, Monoide, SemigroupeSyntactique, MonoideSyntactique, Exemple,
      Fichier, Prefs};

typedef unsigned char boolean;

typedef unsigned long numero;    /* En pratique, la taille maximum d'un semigroupe sera d'environ 429 000 000 */
                      /* En effet, le premier bit est reserve dans ProduitsDG.D et il faut
                         diviser par 5 puisqu'on prend une table de hachage 5 fois plus grande */
typedef unsigned char lettre;    /* Limite la taille de l'alphabet a 256 */

typedef void *element;

typedef struct
{
  numero D;   /* Le bit de plus grand poids de numeroD sert de drapeau : */
  numero G;    /* il vaut 0 si ua est reductible, 1 si ua est irreductible */
}ProduitsDG;   /* Taille actuelle : 8 */

typedef struct        /* Decrit un element x */
{
  unsigned long Statut;
  unsigned short Longueur;  /* La longueur n du mot */
  lettre Initiale;          /* La premiere lettre du mot */
  lettre Finale;            /* La derniere lettre du mot */
  ProduitsDG *Produits;      /* Les elements de la forme ua et au, ou a est une lettre */ 
  numero Prefixe;            /* L'adresse dans la table du prefixe de longueur n-1 */
  numero Suffixe;           /* L'adresse dans la table du suffixe de longueur n-1 */
  numero Suivant;           /* L'adresse du mot suivant dans l'ordre militaire */
}info;   /* Taille actuelle : 24 */

typedef struct        /* Decrit un element x */
{
  unsigned long Statut;
  numero Rclasse;
  numero Lclasse;
  numero Dclasse;
  numero Hclasse;
  numero xOmega;            /* L'adresse dans la table de l'idempotent puissance de l'element */
}info2;   /* Taille actuelle : 24 */

#define  TYPE_RENVERSE      '\001'

#define  UNIVERS_TRANSITIONS              '\001'
#define  UNIVERS_TRANSITIONS_PARTIELLES  '\002'
#define  UNIVERS_MATRICES_ENTIERES        '\003'
#define  UNIVERS_MATRICES                '\004'

#define  MEMOIRE_IDENTITE          0x1U
#define  MEMOIRE_GENERATEURS        0x2U
#define  MEMOIRE_NOMEXEMPLE        0x4U

#define  CALCUL_ELEMENTS            0x1U
#define  CALCUL_ZERO                0x2U
#define  CALCUL_IDEMPOTENTS        0x4U
#define  CALCUL_LISTE_IDEMPOTENTS  0x8U
#define  CALCUL_X_OMEGA            0x10U
#define  CALCUL_R_CLASSES          0x20U
#define  CALCUL_D_CLASSES          0x40U
#define  CALCUL_REGULIERS          0x80U
#define  CALCUL_INVERSES            0x100U
#define  CALCUL_BLOCS              0x200U
#define  CALCUL_TABLE_DE_S          0x400U
#define  CALCUL_P                  0x800U
#define  CALCUL_KS                  0x1000U

#define  CALCUL_O                  CALCUL_P

#define  SEM_COMMUTATIF    0x1UL
#define  SEM_IDEMPOTENT    0x2UL
#define  SEM_APERIODIQUE    0x4UL
#define  SEM_GROUPE        0x8UL
#define  SEM_R_TRIVIAL      0x10UL
#define  SEM_L_TRIVIAL      0x20UL
#define  SEM_D_TRIVIAL      0x40UL
#define  SEM_NILPOTENT      0x80UL
#define  SEM_ECOM          0x100UL
#define  SEM_BG            0x200UL
#define  SEM_DA            0x400UL
#define  SEM_RvL            0x800UL
#define  SEM_LI            0x1000UL
#define  SEM_LG            0x2000UL
#define  SEM_B_UN          0x4000UL
#define  SEM_B_UN_PLUS      0x8000UL
#define  SEM_REGULIER      0x10000UL
#define  SEM_A_UN_ZERO      0x20000UL


/************************************************************
*
* Liste des adresses des contre-exemples.
* Par exemple, commutatif_1 et commutatif_2 sont les adresses
* de deux lettres qui ne commutent pas.
*
************************************************************/

typedef struct
{
  lettre *commutatif_1, *commutatif_2;
  numero *idempotent;
  numero *aperiodique;
  numero *DA_x, *DA_y;
  numero *RvL_x, *RvL_y, *RvL_z;
  numero *L1_e, *L1_s;
  numero *LG_e, *LG_s;
  numero *B1_p, *B1_q, *B1_r, *B1_s, *B1_e, *B1_f;
  numero *B1Plus_e, *B1Plus_s;
  numero *ECom_e, *ECom_f;
  numero *BG_e, *BG_f;
}adresses;

typedef struct
{
  unsigned char  TypeCalcul;  /* Semigroupe, Monoide */ 
  unsigned char  Univers;    /* Univers du semigroupe */ 
  unsigned short CalculsEffectues;    /* Drapeaux des calculs (effectue = 1, non effectue = 0) */
  unsigned long ProprietesTestees;  /* Drapeaux des proprietes (testees = 1, non testees = 0) */
  adresses *AdressesContreExemples;  /* Adresses des contre-exemples */
  unsigned long Proprietes;          /* Drapeaux des proprietes du semigroupe (vraie 1, fausse 0) */
  element *Generateurs;      /* Les generateurs du semigroupe */
  element *TableDesValeurs;  /* Les valeurs des elements du semigroupe dans l'univers. */
/*   numero *TableDeHachage;    La table de l'adresse des elements. On y accede par hachage et adressage ouvert. */
  info *Table;     /* La table contenant les informations sur les elements */
}semigroupe;

typedef info *pointeurInfo;

typedef struct
{
  numero     Adresse;           
  lettre     Lettre;  
} elementpile;

struct WagonNumero      /* Liste d'elements de S */
{
  numero t;
  struct WagonNumero *suivant;    /* Donne l'adresse du suivant dans la liste */
};

typedef struct WagonNumero *ListeNumero;

struct NumeroEtLettre
{
  numero Numero;
  lettre Lettre;
};

struct Wagon2Numeros  /* Liste de sommets du graphe syntactique M x M */
{
  numero u;
  numero v;
  struct Wagon2Numeros *suivant;      /* Adresse du suivant dans la liste */
};

typedef struct Wagon2Numeros *Liste2Numeros;

typedef struct              
{
  Liste2Numeros Aretes;        /* Successeurs (ua, va) -> (u, v) ou bien (au, av) -> (u, v) */ 
  char Label;
}infoSommet;


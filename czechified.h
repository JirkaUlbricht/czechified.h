
#ifndef CZECHIFIED_H
#define CZECHIFIED_H

// Vše co se vyslovuje tak jak se to píše zůstává beze změny

// Typy
#define FAJL FILE
#define flout float
#define dabl double
#define intýžr int
#define šort short
#define sajnd signed
#define ansajnd unsigned
#define vojd void
#define bůl bool

// pokročilé celočíselné typy
#define sajz_t size_t
#define intýžr8_t int8_t
#define intýžr16_t int16_t
#define intýžr32_t int32_t
#define intýžr64_t int64_t
#define nintýžr8_t uint8_t
#define nintýžr16_t uint16_t
#define nintýžr32_t uint32_t
#define nintýžr64_t uint64_t

// další datové typy
#define ínam enum
#define strakt struct
#define junijn union

// paměťové třídy
#define stetik static
#define redžistr register
#define extrn extern

// kvalifikátory typu
#define konst const
#define voletajl volatile

// C99 kvalifikátory
#define restrikt restrict

// logické konstrukce
#define els else
#define wajl while
#define dů do
#define svič switch
#define kejs case
#define defolt default
#define dýfolt default
#define brejk break
#define kontiňjů continue

// ostatní klíčová slova
#define retrn return
#define goutů goto
#define sajzof(x) sizeof(x)
#define tajpdef typedef
#define semikouln ;

#define hlavní main

// operátory
#define íkvls ==
#define notíkvls !=
#define smóler_den <
#define smóler_den_or_íkvls <=
#define lárdžr_den >
#define lárdžr_den_or_íkvls >=
#define ór ||
#define ent &&
#define íkvls_tu = // Musel jsem to nějak rozlišit == a = od sebe

// experimentální triky
#define oupening_krly_brekt {
#define klousing_krly_brekt }
#define oupening_raund_brekt (
#define klousing_raund_brekt )

// režimy otevření souboru
#define RÍD "r"
#define WRAJT "w"
#define EDIŠN "a"
#define DABL_RÍD "rb"
#define DABL_WRAJT "wb"
#define DABL_EDIŠN "wa"

// standardní I/O streamy
#define estýdýin stdin
#define estýdýaut stdout
#define estýdýerr stderr

// konstanty
#define uan 1
#define van 1 // Nevím ja to přesně zapsat tak jsem tu nechal 2 možnosti
#define zirou 0
#define sleš_en '\n'
#define ENDOFFAJL -1 //Konec Souboru
#define NALL NULL

// Knihovny

// <time.h> - <čas.h>
#define tajm(x) time(x)

// <stdio.h> - <spnvv.h>
#define rimův(x) remove(x)
#define rinejm(x, y) rename(x, y)
#define týempífajl() tmpfile()
#define týempínem(x) tmpnam(x)

#define efklous(x) fclose(x)
#define efflaš(x) fflush(x)
#define efoupn(x, y) fopen(x, y)
#define efryoupn(x, y, z) freopen(x, y, z)
#define setbaf(x, y) setbuf(x, y)
#define setvíbaf(x, y, z, a) setvbuf(x, y, z, a)
#define efprintef(...) fprintf(__VA_ARGS__)
#define efskenef(...) fscanf(__VA_ARGS__)
#define printef(...) printf(__VA_ARGS__)
#define skenef(...) scanf(__VA_ARGS__)

// <stdlib.h> - <spnkni.h>
#define malok(x) malloc(x) // paměť přiděl
#define kalok(x, y) calloc(x, y) // čistou paměť přiděl
#define rýalok(x, y) realloc(x, y) // znovu paměť přiděl
#define frý(x) free(x)

#define atoj(x) atoi(x) // řetězec na intýžr

#define rend() rand()
// semeno náhody
#define srend(x) srand(x)
#define kjůsort(x, y, z, a) qsort(x, y, z, a)
#define eksit(x) exit(x)

// místo délka tisk formát
#define esprintef(...) snprintf(__VA_ARGS__)
#define esskenef(...) sscanf(__VA_ARGS__)
// proměnný souborový tisk formátovaný
#define efprintef(...) vfprintf(__VA_ARGS__)
#define véefskenef(...) vfscanf(__VA_ARGS__)
#define véprintef(...) vprintf(__VA_ARGS__)
#define véskenf(...) vscanf(__VA_ARGS__)
#define véesprintef(...) vsnprintf(__VA_ARGS__)
#define véesprintef(...) vsprintf(__VA_ARGS__)
#define véesskenf(...) vsscanf(__VA_ARGS__)

// TODO: dodělat

#define efgetssí(x) fgetc(x)
#define sdostaňř(x, y, z) fgets(x, y, z)
#define spoložz(x, y) fputc(x, y)
#define spoložř(x, y) fputs(x, y)
#define dostaňz(x) getc(x)
#define dostaňznak(x) getchar(x)
#define dostaňř(x) gets(x)
#define položz(x, y) putc(x, y)
#define položznak(x) putchar(x)
#define položř(x) puts(x)
#define oddostaňz(x, y) ungetc(x, y)
#define spřečti(x, y, z, a) fread(x, y, z, a)
#define szapiš(x, y, z, a) fwrite(x, y, z, a)
#define sdostaňpoz(x, y) fgetpos(x, y)
#define snajdi(x, y, z) fseek(x, y, z)
#define snastavpoz(x, y) fsetpos(x, y)
#define sřekni(x) ftell(x)
#define přetoč(x) rewind(x)
#define vyčistichyb(x) clearerr(x)
#define sks(x) feof(x)
#define schyba(x) ferror(x)
#define tchybu(x) perror(x)


// <string.h> - <retezec.h>
#define pamzkop(...) memccpy(__VA_ARGS__)
#define pamzna(...) memchr(__VA_ARGS__)
#define pampor(...) memcmp(__VA_ARGS__)
#define pamkop(...) memcpy(__VA_ARGS__)
#define pampřesuň(...) memmove(__VA_ARGS__)
#define pamnastav(...) memset(__VA_ARGS__)
// ŘEtězcový Ukazatel KOPíruj
#define řeukop(...) stpcpy(__VA_ARGS__)
#define řeučkop(...) stpncpy(__VA_ARGS__)
#define řeťpoj(...) strcat(__VA_ARGS__)
#define řeťzna(...) strchr(__VA_ARGS__)
#define řeťpor(...) strcmp(__VA_ARGS__)
// strcoll znamená STRing COLLate
#define řeťřaď(...) strcoll(__VA_ARGS__)
// _l znamená lokalizace
#define řeťřaď_l(...) strcoll_l(__VA_ARGS__)
#define řeťkop(...) strcpy(__VA_ARGS__)
// ŘEŤezcový Doplňkový RoZSaH (fonetický zápis řetězce)
// STRing Complemetary SPaN
#define řeťdrzsh(...) strcspn(__VA_ARGS__)
#define řeťzdv(...) strdup(__VA_ARGS__)
#define řeťchyba(...) strerror(__VA_ARGS__)
#define řeťchyba_l(...) strerror_l(__VA_ARGS__)
// Upřímně netuším, co to _r má být za slovo
#define řeťchyba_r(...) strerror_r(__VA_ARGS__)
#define řeťdél(...) strlen(__VA_ARGS__)
#define řeťčpoj(...) strncat(__VA_ARGS__)
#define řeťčpor(...) strncmp(__VA_ARGS__)
#define řeťčkop(...) strncpy(__VA_ARGS__)
#define řeťčzdv(...) strndup(__VA_ARGS__)
#define řeťčdél(...) strnlen(__VA_ARGS__)
//STRing Pointer BReaK - ŘEŤezcový Ukazatel ZLoM
#define řeťuzlm(...) strpbrk(__VA_ARGS__)
//string reverse char - řetězcový zpětný znal
#define řeťzzna(...) strrchr(__VA_ARGS__)
#define řeťznamení(...) strsignal(__VA_ARGS__)
#define řeťrzsh(...) strspn(__VA_ARGS__)
#define řeťřeť(...) strstr(__VA_ARGS__)
#define řeťžet(...) strtok(__VA_ARGS__)
// _r -> reentrant -> znovuvstupující
#define řeťžet_z(...) strtok_r(__VA_ARGS__)
// xfrm je zřejmě divná zkratka z transform
#define řeťzměň(...) strxfrm(__VA_ARGS__)
#define řeťzměň_l(...) strcfrm_l(__VA_ARGS__)

// <ctype.h> - <ztyp.h>
#define jealnum(x) isalnum(x)
#define jealfa(x) isalpha(x)
#define jekntrl(x) iscntrl(x)
#define ječíslice(x) isdigit(x)
#define jegraf(x) isgraph(x)
#define jemalý(x) islower(x)
#define jenižší(x) islower(x)
#define jetisk(x) isprint(x)
#define jeinterp(x) ispunct(x)
#define jemezera(x) isspace(x)
#define jevelký(x) isupper(x)
#define jevyšší(x) isupper(x)
// je Šestnáctková číslice
#define ješčíslice(x) isxdigit(x)
#define donižší(x) tolower(x)
#define dovyšší(x) toupper(x)

// <float.h> - <plav.h>
#define PLV_SOUSTAVA FLT_RADIX
#define PLV_UDRŽ_ČÍS FLT_MANT_DIG
#define DVJ_UDRŽ_ČÍS DBL_MANT_DIG
#define DDVJ_UDRŽ_ČÍS LDBL_MANT_DIG
#define DESÍTKOVÝCH_ČÍS DECIMAL_DIG
#define PLV_ČÍS FLT_DIG
#define DVJ_ČÍS DBL_DIG
#define DDVJ_ČÍS LDBL_DIG
#define PLV_MIN_MOC FLT_MIN_EXP
#define DVJ_MIN_MOC DBL_MIN_EXP
#define DDVJ_MIN_MOC LDBL_MIN_EXP
#define PLV_MIN_10_MOC FLT_MIN_10_EXP
#define DVJ_MIN_10_MOC DBL_MIN_10_EXP
#define DDVJ_MIN_10_MOC LDBL_MIN_10_EXP
#define PLV_MAX_MOC FLT_MAX_EXP
#define DVJ_MAX_MOC DBL_MAX_EXP
#define DDVJ_MAX_MOC LDBL_MAX_EXP
#define PLV_MAX_10_MOC FLT_MAX_10_EXP
#define DVJ_MAX_10_MOC DBL_MAX_10_EXP
#define DDVJ_MAX_10_MOC LDBL_MAX_10_EXP
#define PLV_MAX FLT_MAX
#define DVJ_MAX DBL_MAX
#define DDVJ_MAX LDBL_MAX
#define PLV_EPSILON FLT_EPSILON
#define DVJ_EPSILON DBL_EPSILON
#define DDVJ_EPSILON LDBL_EPSILON
#define PLV_MIN FLT_MIN
#define DVJ_MIN DBL_MIN
#define DDVJ_MIN LDBL_MIN


// <math.h> - <matika.h>
#define plovoucí_t float_t
#define dvojitý_t double_t
#define dvojité_t double_t
#define PLV_VYKON_ZPŮSOB FLT_EVAL_METHOD
#define pčroztřiď(x) fpclassify(x)
#define jekonečné(x) isfinite(x)
#define jevětší(x, y) isgreater(x, y)
#define jevětšírovno(x, y) isgreaterequal(x, y)
#define jeneko(x) isinf(x)
#define jemenší(x, y) isless(x, y)
#define jemenšírovno(x, y) islessequal(x, y)
#define jemenšívětší(x, y) islessgreater(x, y)
#define jeneintýžr(x) isnan(x)
#define jenormální(x) isnormal(x)
#define jeneřaditelné(x, y) isunordered(x, y)
#define znaménkovýbit(x) signbit(x)
#define znamýnkovýbit(x) signbit(x)
#define M_2_2ODMPI M_2_SQRTPI
#define M_2ODM2 M_SQRT2
#define M_2ODM1_2 M_SQRT1_2
#define MAXPLOVOUCÍ MAXFLOAT
#define OBŘÍ_HOD HUGE_VAL
#define OBŘÍ_HODP HUGE_VALF
#define OBŘÍ_HODD HUGE_VALL
#define NEKONEČNO INFINITY
#define NEINTÝŽR NAN
#define PČ_NEKONEČNÉ FP_INFINITE
#define PČ_NEINTÝŽR FP_NAN
#define PČ_NORMÁLNÍ FP_NORMAL
#define PČ_PODNORMÁLNÍ FP_SUBNORMAL
#define PČ_NULA FP_ZERO
#define PČ_RYCHLÁ_PRS FP_FAST_FMA
#define PČ_RYCHLÁ_PRSP FP_FAST_FMAF
#define PČ_RYCHLÁ_PRSD FP_FAST_FMAL
#define PČ_ČLOGD0 FP_ILOGB0
#define PČ_ČLOGDNEINTÝŽR FP_ILOGBNAN
#define MATIKA_CHYBČÍS MATH_ERRNO
#define MATIKA_CHYBCHYBA MATH_ERREXCEPT
#define matika_chybzpracování math_errhandling
#define acosp(x) acosf(x)
#define acoshp(x) acoshf(x)
#define acoshd(x) acoshl(x)
#define acosd(x) acosl(x)
#define asinp(x) asinf(x)
#define asinhp(x) asinhf(x)
#define asinhd(x) asinhl(x)
#define asind(x) asinl(x)
#define atan2p(x, y) atan2f(x, y)
#define atan2d(x, y) atan2l(x, y)
#define atanp(x) atanf(x)
#define atanhp(x) atanhf(x)
#define atanhd(x) atanhl(x)
#define atand(x) atanl(x)
#define třod(x) cbrt(x)
#define třodp(x) cbrtf(x)
#define třodd(x) cbrtl(x)
#define strop(x) ceil(x)
#define stropp(x) ceilf(x)
#define stropd(x) ceill(x)
#define zaokrouhlinahoru(x) ceil(x)
#define zaokrouhlinahorup(x) ceilf(x)
#define zaokrouhlinahorud(x) ceill(x)
#define kopírujznaménko(x, y) copysign(x, y)
#define kopírujznaménkop(x, y) copysignf(x, y)
#define kopírujznaménkod(x, y) copysignl(x, y)
#define cosp(x) cosf(x)
#define coshp(x) coshf(x)
#define coshd(x) coshl(x)
#define cosd(x) cosl(x)
#define chf(x) erf(x)
#define chfp(x) erff(x)
// TODO: We can not map multiple tokens to the same one so this needs to be redefined
// #define chfd(x) erfl(x)
// #define chfd(x) erfc(x)
#define chfdp(x) erfcf(x)
#define chfdd(x) erfcl(x)
#define moc(x) exp(x)
#define mocp(x) expf(x)
#define mocd(x) expl(x)
#define moc2(x) exp2(x)
#define moc2p(x) exp2f(x)
#define moc2d(x) exp2l(x)
#define mocm1(x) expm1(x)
#define mocm1p(x) expm1f(x)
#define mocm1d(x) expm1l(x)
#define pabs(x) fabs(x)
#define pabsp(x) fabsf(x)
#define pabsd(x) fabsl(x)
#define prom(x) fdim(x)
#define promp(x) fdimf(x)
#define promd(x) fdiml(x)
#define podlaha(x) floor(x)
#define zaokrouhlidolů(x) floor(x)
#define podlahap(x) floorf(x)
#define podlahad(x) floorl(x)
#define zaokrouhlidolůp(x) floorf(x)
#define zaokrouhlidolůd(x) floorl(x)
#define prs(...) fma(__VA_ARGS__)
#define prsp(...) fmaf(__VA_ARGS__)
#define prsd(...) fmal(__VA_ARGS__)
#define pmax(x, y) fmax(x, y)
#define pmaxp(x, y) fmaxf(x, y)
#define pmaxd(x, y) fmaxl(x, y)
#define pmin(x, y) fmin(x, y)
#define pminp(x, y) fminf(x, y)
#define pmind(x, y) fminl(x, y)
#define pzby(x, y) fmod(x, y)
#define pzbyp(x, y) fmodf(x, y)
#define pzbyd(x, y) fmodl(x, y)

// <signal.h> - <signál.h>
#define zabít() kill()
#define zabij() kill()
#define usmrtit() kill()
#define usmrť() kill()
#define skolit() kill()
#define skol() kill()
#define utratit() kill()
#define utrať() kill()
#define porazit() kill()
#define poraž() kill()
#define potratit() kill()
#define potrať() kill()
#define zakroutit_krkem() kill()
#define zakruť_krkem() kill()
#define odkráglovat() kill()
#define odkrágluj() kill()
#define signál() signal()

// čísla signálů (vizte kill -l nebo signum-generic.h)
#define SIGPŘE  SIGINT   // signál přerušení
#define SIGNEZ  SIGILL   // signál nezákonný
#define SIGPOTR SIGABRT  // signál potrat
#define SIGPŘCH SIGFPE   // signál plovoucí řádová chyba
#define SIGDÍLP SIGSEGV  // signál díl porušení (segment violation)
#define SIGÚSP  SIGSEGV  // signál úsek porušení
#define SIGUKO  SIGTERM  // signál ukončit
#define SIGZAV  SIGHUP   // signál zavěsit
#define SIGODE  SIGQUIT  // signál odejít
#define SIGPAST SIGTRAP  // signál past
#define SIGZAB  SIGKILL  // signál zabít
#define SIGTRUB SIGPIPE  // signál trubka
#define SIGROUR SIGPIPE  // signál roura
#define SIGBUD  SIGALRM  // signál budík
#define SIGPOPL SIGALRM  // signál poplach

/*
   ▀█▄▄█▀
    ▄▄▄▄
  ██▀▀▀▀█
 ██▀          ██        ██
 ██        ▄▄▄██▄▄▄  ▄▄▄██▄▄▄
 ██▄       ▀▀▀██▀▀▀  ▀▀▀██▀▀▀
  ██▄▄▄▄█     ██        ██
    ▀▀▀▀
*/
// c -> character -> znak -> z
#define zven cout
#define zvýstup cout
#define zdovnitř cin
#define zvstup cin
#define zdo cin
#define zerr cerr
#define zchyb cerr

#define cven cout
#define cvýstup cout
#define cdovnitř cin
#define cvstup cin
#define cdo cin
#define cchyb cerr

#define používá using
#define jménovesmír namespace
#define jmennýprostor namespace
// std -> sexually transmitted disease -> Sexuálně přenosná nemoc -> spn
#define spn std
// STandarD -> STandardnÍ
#define stí std

#define vektor vector
#define zatlač_zpátky push_back
#define zatlač_zpět push_back
#define zatlač_dozadu push_back
#define strč_zpátky push_back
#define strč_zpět push_back
#define strč_dozadu push_back

#define mapa map
#define pár pair

#endif

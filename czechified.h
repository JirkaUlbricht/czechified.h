
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
#define véefprintef(...) vfprintf(__VA_ARGS__)
#define véefskenef(...) vfscanf(__VA_ARGS__)
#define véprintef(...) vprintf(__VA_ARGS__)
#define véskenef(...) vscanf(__VA_ARGS__)
#define véesenprintef(...) vsnprintf(__VA_ARGS__)
#define véesprintef(...) vsprintf(__VA_ARGS__)
#define véesskenef(...) vsscanf(__VA_ARGS__)

#define efgetssí(x) fgetc(x)
#define efgets(x, y, z) fgets(x, y, z)
#define efputsí(x, y) fputc(x, y)
#define efputs(x, y) fputs(x, y)
#define getsí(x) getc(x)
#define getes(x) gets(x)
#define putsí(x, y) putc(x, y)
#define putes(x) puts(x)
#define angetsí(x, y) ungetc(x, y)
#define efríd(x, y, z, a) fread(x, y, z, a)
#define efwrajt(x, y, z, a) fwrite(x, y, z, a)
#define efgetpos(x, y) fgetpos(x, y)
#define efsík(x, y, z) fseek(x, y, z)
#define efsetpos(x, y) fsetpos(x, y)
#define eftell(x) ftell(x)
#define ríwajnd(x) rewind(x)
#define klírerr(x) clearerr(x)
#define efeoef(x) feof(x)
#define eferror(x) ferror(x)
#define píerror(x) perror(x)


// <string.h> - <retezec.h>
#define memsísípíy(...) memccpy(__VA_ARGS__)
#define memsíempí(...) memcmp(__VA_ARGS__)
#define memsípíy(...) memcpy(__VA_ARGS__)
#define memmův(...) memmove(__VA_ARGS__)

// ŘEtězcový Ukazatel KOPíruj
#define estýpísípíý(...) stpcpy(__VA_ARGS__)
#define estýpíensípíy(...) stpncpy(__VA_ARGS__)
#define estéerket(...) strcat(__VA_ARGS__)
#define estéerchr(...) strchr(__VA_ARGS__)
#define estéercíempí(...) strcmp(__VA_ARGS__)
// strcoll znamená STRing COLLate
#define estéerkoll(...) strcoll(__VA_ARGS__)
// _l znamená lokalizace
#define estéerkoll_el(...) strcoll_l(__VA_ARGS__)
#define estéersípíy(...) strcpy(__VA_ARGS__)
// ŘEŤezcový Doplňkový RoZSaH (fonetický zápis řetězce)
// STRing Complemetary SPaN
#define estýersíespíen(...) strcspn(__VA_ARGS__)
#define estýerap(...) strdup(__VA_ARGS__)
#define estýererror(...) strerror(__VA_ARGS__)
#define estýererror_el(...) strerror_l(__VA_ARGS__)
// Upřímně netuším, co to _r má být za slovo
#define estýererror_er(...) strerror_r(__VA_ARGS__)
#define estýerlen(...) strlen(__VA_ARGS__)
#define estýerket(...) strncat(__VA_ARGS__)
#define estýersíempí(...) strncmp(__VA_ARGS__)
#define estýersípíy(...) strncpy(__VA_ARGS__)
#define estýerendéap(...) strndup(__VA_ARGS__)
#define estýerenlen(...) strnlen(__VA_ARGS__)
//STRing Pointer BReaK - ŘEŤezcový Ukazatel ZLoM
#define estýerpíbíerká(...) strpbrk(__VA_ARGS__)
//string reverse char - řetězcový zpětný znal
#define estýererchr(...) strrchr(__VA_ARGS__)
#define estýersignal(...) strsignal(__VA_ARGS__)
#define estýerespíen(...) strspn(__VA_ARGS__)
#define estýerestýer(...) strstr(__VA_ARGS__)
#define estýertok(...) strtok(__VA_ARGS__)
// _r -> reentrant -> znovuvstupující
#define estýertok_z(...) strtok_r(__VA_ARGS__)
// xfrm je zřejmě divná zkratka z transform
#define estýerexefarem(...) strxfrm(__VA_ARGS__)
#define estýersíefarem_l(...) strcfrm_l(__VA_ARGS__)

// <ctype.h> - <ztyp.h>
#define isalnam(x) isalnum(x)
#define isalfa(x) isalpha(x)
#define issíentýerel(x) iscntrl(x)
#define isdidžit(x) isdigit(x)
#define isgraf(x) isgraph(x)
#define islouer(x) islower(x)
#define ispankt(x) ispunct(x)
#define isspejs(x) isspace(x)
#define isapper(x) isupper(x)

// je Šestnáctková číslice
#define isexdidžit(x) isxdigit(x)
#define tůlouer(x) tolower(x)
#define tůapper(x) toupper(x)

// <float.h> - <plav.h>
#define EFELTÉ_RADIKS FLT_RADIX
#define EFELTÉ_MENT_DIG FLT_MANT_DIG
#define DÝBÝEL_MANT_DIG DBL_MANT_DIG
#define ELDÝBÝEL_MANT_DIG LDBL_MANT_DIG
#define DESIML_DIG DECIMAL_DIG
#define EFELTÝ_DIG FLT_DIG
#define DABL_DIG DBL_DIG
#define ELDABL_DIG LDBL_DIG
#define EFELTÝ_MIN_EXP FLT_MIN_EXP
#define DABL_MIN_EXP DBL_MIN_EXP
#define ELDABL_MIN_EXP LDBL_MIN_EXP
#define EFELTÝ_MIN_10_EXP FLT_MIN_10_EXP
#define DABL_MIN_10_EXP DBL_MIN_10_EXP
#define ELDABL_MIN_10_EXP LDBL_MIN_10_EXP
#define EFELTÝ_MAX_EXP FLT_MAX_EXP
#define DABL_MAX_EXP DBL_MAX_EXP
#define ELDABL_MAX_EXP LDBL_MAX_EXP
#define EFELTÝ_MAX_10_MOC FLT_MAX_10_EXP
#define DABL_MAX_10_MOC DBL_MAX_10_EXP
#define ELDABL_MAX_10_MOC LDBL_MAX_10_EXP
#define EFELTÝ_MAX FLT_MAX
#define DABL_MAX DBL_MAX
#define ELDABL_MAX LDBL_MAX
#define EFELTÝ_EPSILON FLT_EPSILON
#define DABL_EPSILON DBL_EPSILON
#define ELDABL_EPSILON LDBL_EPSILON
#define EFELTÝ_MIN FLT_MIN
#define DABL_MIN DBL_MIN
#define ELDABL_MIN LDBL_MIN


// <math.h> - <matika.h>
#define flout_tý float_t
#define dabl_tý double_t
#define EFELTÝ_EVAL_METD FLT_EVAL_METHOD
#define efpíklesifáj(x) fpclassify(x)
#define isfajnajt(x) isfinite(x)
#define isgrejtr(x, y) isgreater(x, y)
#define isgrejtríkvl(x, y) isgreaterequal(x, y)
#define isíenef(x) isinf(x)
#define isles(x, y) isless(x, y)
#define islesíkvl(x, y) islessequal(x, y)
#define islesgrejtr(x, y) islessgreater(x, y)
#define isnen(x) isnan(x)
#define isnorml(x) isnormal(x)
#define isanordrd(x, y) isunordered(x, y)
#define sajnbit(x) signbit(x)
#define M_2_ESKJŮERTÝPÍ M_2_SQRTPI
#define M_ESKJŮERTÝ2 M_SQRT2
#define M_ESKJŮERTÝ1_2 M_SQRT1_2
#define MAXFLOUT MAXFLOAT
#define HJŮDŽ_VAL HUGE_VAL
#define HJŮDŽ_VALEF HUGE_VALF
#define HJŮDŽ_VALEL HUGE_VALL
#define NEN NAN
#define EFPÝ_INFINIT FP_INFINITE
#define EFPÝ_NEN FP_NAN
#define EFPÝ_NORML FP_NORMAL
#define EFPÝ_SABNORML FP_SUBNORMAL
#define EFPÝ_ZÍROU FP_ZERO
#define EFPÝ_FAST_EFEMEJ FP_FAST_FMA
#define EFPÝ_FAST_EFEMEJEF FP_FAST_FMAF
#define EFPÝ_FAST_EFEMEJEL FP_FAST_FMAL
#define EFPÝ_ÁJLOGBÝ0 FP_ILOGB0
#define EFPÝ_ÁJLOGBÝNEN FP_ILOGBNAN
#define MÁF_ERRNO MATH_ERRNO
#define MÁF_ERREKSEPT MATH_ERREXCEPT
#define máf_errhendling math_errhandling
#define akosef(x) acosf(x)
#define akosháef(x) acoshf(x)
#define akosháel(x) acoshl(x)
#define akosel(x) acosl(x)
#define asíenef(x) asinf(x)
#define asíenhef(x) asinhf(x)
#define asinhel(x) asinhl(x)
#define asinel(x) asinl(x)
#define aten2f(x, y) atan2f(x, y)
#define aten2l(x, y) atan2l(x, y)
#define atenf(x) atanf(x)
#define atenhef(x) atanhf(x)
#define atenhel(x) atanhl(x)
#define atenel(x) atanl(x)
#define cýbýertý(x) cbrt(x)
#define cýbýertýef(x) cbrtf(x)
#define cýbýertýel(x) cbrtl(x)
#define síl(x) ceil(x)
#define sílef(x) ceilf(x)
#define sílel(x) ceill(x)
#define kopysajn(x, y) copysign(x, y)
#define kopysajnf(x, y) copysignf(x, y)
#define kopysajnel(x, y) copysignl(x, y)
#define kosef(x) cosf(x)
#define koshef(x) coshf(x)
#define koshel(x) coshl(x)
#define kosel(x) cosl(x)
#define íeref(x) erf(x)
#define íerefef(x) erff(x)
#define íerefsíef(x) erfcf(x)
#define íefefsíel(x) erfcl(x)
#define ekspí(x) exp(x)
#define ekspíef(x) expf(x)
#define ekspíel(x) expl(x)
#define ekspí2(x) exp2(x)
#define ekspí2ef(x) exp2f(x)
#define ekspí2el(x) exp2l(x)
#define ekspíem1(x) expm1(x)
#define ekspí1ef(x) expm1f(x)
#define ekspí1el(x) expm1l(x)
#define fabes(x) fabs(x)
#define fabesef(x) fabsf(x)
#define fabesel(x) fabsl(x)
#define efdim(x) fdim(x)
#define efdimef(x) fdimf(x)
#define efdimel(x) fdiml(x)
#define flór(x) floor(x)
#define flóref(x) floorf(x)
#define flórel(x) floorl(x)
#define efemej(...) fma(__VA_ARGS__)
#define efemejef(...) fmaf(__VA_ARGS__) // Was that the bite of 87
/*
⣿⣿⣿⣽⣿⣿⣯⣿⣿⣯⣿⣿⣿⣽⣿⣿⣯⣿⣿⢿⣽⣿⣿⣽⣿⣟⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⢿⡿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣻⣿⣿⣻⣿⣿⡻⣿⣟⡿⣽⣿⡽⣯⣿⡾⣯⣿⣟⣟⣿⣷⣿⣽⣾⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⡷⣟⣿⣟⣯⢿⣿⡿⣝⣿⣷⣟⣞⣿⡾⣝⣿⣿⣞⣽⣿⣯⣯⣿
⣾⣿⣷⣷⣿⣿⢿⣻⣿⣿⣿⣽⣿⣷⣿⣿⣷⡿⣯⣷⣿⣿⣾⢿⣽⣾⣿⣿⢿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣟⣯⣿⣻⣿⣻⣿⣻⣿⡷⣿⣟⣿⣿⣿⣿⣿⣽⣿⣟⣿⣟⣿
⣯⣿⣿⢽⣻⣿⣻⣻⣿⣞⣷⣿⣟⡾⣿⣞⣗⣿⣿⣿⣾⣷⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣿⣿⣿⣻⣽⡿⣾⣿⣼⣿⢿⣮⣷⣿⣟⣾⣿⣷⣽⣾⣿⣞⣾⣿⣿⣾⣽
⢿⣻⣿⣿⣿⣿⡿⣿⣟⣿⢿⣾⢿⣿⣻⣟⣿⣿⣿⣯⣿⡷⣟⣿⢿⣿⣽⣯⣿⣿⣽⣿⢿⣽⣯⣿⡿⣿⢿⣿⣿⣿⣿⣿⡿⣷⣟⣿⣟⣯⣿⣯⣿⣻⣽⣯⣿⣽⣿⣻⢿⣯⣿⣽⣿
⣽⣿⣿⣞⣾⣿⣽⣽⣿⣽⣽⣿⣟⣾⣻⡿⣽⣿⣿⡿⣞⣿⣿⣿⢿⣟⣿⣻⡽⡯⣟⡾⣻⢽⢞⡮⡯⣺⢽⢽⢿⣿⣿⣷⣿⡿⣾⢿⣿⣮⣿⡿⣾⣾⣿⣷⣷⣿⣿⣾⣽⣿⣿⣮⣿
⣿⣟⣿⣿⡿⣿⣻⣿⣻⣟⣯⣿⣟⣿⣟⣾⣿⣿⣽⣿⡿⣟⣿⡺⡹⡸⢸⠸⡘⡎⡮⡺⣘⢎⢗⣝⢮⢏⡯⣫⢯⢿⣿⣟⣯⣟⢿⣿⣷⡻⣷⣿⣟⢷⣿⡯⡿⣽⣷⣟⢿⣿⣯⢿⢿
⡿⣿⣻⣟⣿⣿⢿⡿⣿⢿⣿⢿⡿⣟⣿⣿⣿⣿⣟⣷⡿⣿⡣⡣⡪⡨⡢⡣⡣⡣⡣⣣⢣⡣⣓⢮⡳⣝⣞⢵⢳⢻⣿⣿⡿⣟⣿⣯⣷⣿⢿⣿⢾⣿⣿⢿⣿⣿⣿⣾⣿⣿⢿⣻⣿
⡿⣟⣿⣟⣿⣾⣿⡿⣿⣟⣿⣟⣿⡿⡿⣿⣿⣿⣿⣻⡿⣽⢣⢓⢌⠆⡎⣪⡸⣸⣸⢸⡸⡜⡜⡮⡺⣕⣗⣽⡹⡪⣾⣿⣻⢯⣳⣿⣟⣞⣿⣿⣏⣿⣾⣟⣽⣿⡷⣏⣿⣿⣟⣟⣿
⢿⣿⣟⣯⣿⣷⢿⣟⣿⣽⣯⣿⣯⣿⣻⡺⣿⣿⣿⣯⢿⡳⡑⠥⡱⢕⠫⡣⡫⡫⣪⢳⢕⢝⡜⣎⢯⡺⣕⢯⢻⢳⢽⡿⣽⣿⣟⣿⣽⢿⣽⣷⢿⣯⣿⣟⣿⣾⣿⡿⣿⣟⣿⢿⣿
⣿⣯⣿⣟⣿⣾⣿⢿⣻⣽⣿⢾⣿⣺⣽⠇⡹⢽⣿⣾⢏⢎⠪⡘⢌⢢⠱⣕⢕⡽⣜⢼⢸⢘⢎⣞⢮⣺⡪⡷⣱⢙⠼⣿⣿⣿⣽⣿⣯⣽⣽⣿⣧⣿⡿⣷⣽⣿⣷⣯⣿⣿⣯⣟⣿
⢿⣾⢿⣽⡿⣷⡿⣿⡿⣿⣽⣿⣯⣟⣾⡇⢬⣜⣿⣿⢨⢂⠅⠌⡂⢇⢏⠢⣧⡷⣝⢇⢇⠅⣇⢯⢯⣪⣾⢝⡺⣄⢣⣻⣿⣿⣺⣷⡿⡽⣿⣽⢾⣻⣿⣟⣯⣿⣾⢯⣿⣯⡿⣿⣿
⡿⣟⣿⣟⣿⣟⣿⣟⣿⣿⣽⣾⣟⣷⢿⡅⣿⣻⣿⣿⠰⡡⢊⢐⠌⡢⢊⢎⢪⢪⢣⠣⡑⡱⡸⣪⡳⣕⢯⡣⣳⢱⠡⣾⣿⣟⢞⣿⣻⣾⣿⢿⣷⢿⣿⣾⣾⣿⡿⣷⣿⣿⣿⣾⣿
⢿⣿⢿⣻⣯⣿⣯⣿⢿⣾⢿⣽⣿⣯⢿⡳⣿⣿⣿⣿⡑⢌⠢⡂⢕⠨⢢⢑⢕⠥⡑⢅⠪⡨⢺⡸⢜⣎⢮⢺⡸⡸⢘⣿⣿⠇⣿⣿⣯⡳⣿⣿⣝⣿⣿⡽⣾⣿⣟⢿⣻⣷⡿⣾⣿
⡿⣿⡿⣿⣿⣽⣯⣿⣿⣻⣿⣟⣷⣿⣿⣻⣿⣿⣿⣿⢌⠢⡑⢌⢢⢑⢅⢣⠪⡪⡨⢢⠱⡘⡜⡼⣜⢼⢸⢕⠕⢌⢸⣿⣿⣝⣿⣾⡷⣿⣿⡿⣾⣻⣽⣿⣯⣿⣿⣻⣿⣟⣿⣾⣿
⣿⡿⣟⣿⣾⣿⣽⣷⣿⢿⣽⣿⣻⣿⣿⣿⣿⡿⣟⣿⡸⡨⡊⡌⢆⠕⡌⢆⢇⢣⠪⡢⣱⡘⣜⢜⡬⡪⡣⡇⡫⡐⣸⣿⣿⣪⣯⣷⣿⣹⣽⣿⣭⣿⣿⣓⣿⣿⣞⡯⣿⣿⣝⣿⣯
⢿⣿⡿⣿⣟⣟⣟⣟⣟⡿⣻⣻⣻⣫⢗⣯⣷⡻⣻⡯⣎⢎⢆⢎⢢⠱⡘⡌⢆⢣⠱⡩⡣⣣⣗⣝⢎⢇⢇⢇⢕⢔⢿⣯⣿⢽⢿⣽⡯⣿⢿⣽⢿⣾⣿⣻⣷⣿⣟⣿⣿⣿⣻⣽⣿
⣿⢿⣻⢻⡺⡮⡯⡯⣗⣟⣞⣞⡾⣮⡣⣷⣳⢝⣽⡗⡽⣜⢢⢣⠣⡣⡱⡘⡌⢎⡪⣎⢯⢷⣻⣞⣧⢣⢱⢱⢱⣽⣾⢷⡿⣷⡿⣿⣻⣾⣿⡿⣾⣾⣿⣮⣿⣯⣷⣽⣿⣽⣾⣽⣿
⢜⢎⢮⢺⡺⣝⢽⣝⣞⡾⣺⢾⢽⣺⡪⡾⡽⣕⣯⢿⢸⢜⢮⢪⢕⢕⢜⢌⢎⢧⢫⣪⣾⣷⣷⡷⡮⣳⢱⣹⡽⣾⡽⣯⢿⢼⣞⡿⣽⡺⣷⣿⢻⣽⣷⠿⣷⣿⣻⢷⣿⡿⣽⣿⣿
⡪⡺⡸⡵⣝⢮⣳⡳⣳⢯⣟⡽⡯⡾⣕⢽⢽⣳⢽⡯⡇⣏⣗⡵⣣⢳⢱⢱⢱⣫⣿⣻⡽⣾⢯⣟⢽⡪⣞⣾⢯⣷⣿⢽⣽⣻⣺⣽⣳⡯⣟⡾⡯⣟⣟⢿⣻⣿⡷⣷⣿⣿⣷⢿⣾
⢪⡣⣏⢞⢼⢕⢧⢯⣳⡻⣮⣻⢽⢽⡺⡜⣽⢮⣻⡽⣇⢇⣗⢽⡸⡕⡕⡕⡕⡎⡾⣺⡽⣽⡳⣕⢧⢯⣿⢯⣿⣺⣯⣟⣾⣺⣗⣿⣺⡽⣯⢿⡽⣟⡮⣗⣝⠿⣝⢿⣿⣷⡻⣿⣿
⡱⡕⣕⢏⡗⣝⢵⡫⡮⡯⣞⢾⢯⣟⡮⡳⣹⢵⠵⡿⣕⣗⢼⢵⡝⣞⡜⡜⡜⡜⣎⢷⢝⣗⣽⡺⣝⣿⢯⣟⣞⣗⣿⣺⣞⢷⣽⣺⣳⣟⣽⡽⣽⢯⢯⣗⣗⡯⣚⣿⣯⣷⣿⣿⣿
⢜⢮⡪⣳⢹⢜⢵⢝⢮⡳⣝⢽⢽⢾⢽⣚⢮⡳⡹⣽⣗⡧⣳⢝⡽⣞⡾⡸⣜⢜⡜⡽⣽⣳⣳⢽⣻⣽⣻⣞⣗⡯⣿⣺⣺⡽⣞⣾⡳⣯⢾⢽⡽⡽⣽⣺⣺⣝⢲⢸⢿⣟⣮⣿⣿
⡪⡮⡺⡸⣕⢽⡱⣝⢵⢝⢼⡹⡽⡽⡯⣗⣗⣝⢼⠵⣷⣻⢵⣏⢯⢷⣿⡽⣮⢷⣽⡽⣞⣾⣾⡿⣟⣾⣳⣳⣳⣻⣟⣞⣗⡿⣽⣺⢽⡳⣯⣻⡺⣝⣗⣗⢷⢝⢼⢵⢙⣟⣿⣿⣽
⡪⡺⡜⣝⢜⢮⡺⣪⡳⣝⢕⡗⡵⡫⡯⣟⣾⣺⡪⣏⢞⣽⣳⡽⡽⣵⡳⣻⡻⣟⡷⣿⢿⢿⢽⢯⣟⣞⣞⣞⡾⣺⣷⣻⣺⢽⡳⡽⡽⣝⣞⢮⢞⡵⡷⡽⣝⡭⡯⡯⣎⢎⣶⣿⣿
⢜⡕⣝⢜⢎⢧⡫⡮⡺⣪⡳⡝⡮⣫⡺⣝⢾⣺⣽⣺⣕⢗⢯⣻⣺⡪⣻⣺⣺⡳⣽⡺⣝⢽⣝⡵⣗⡷⣳⢗⣟⣽⣞⣞⢮⣻⢺⢝⡞⣮⡺⣕⢯⡺⣽⡺⣕⡯⣟⣽⢪⣞⢼⣿⣿
⢪⢎⢮⢪⢳⡱⡣⣏⢞⣕⢗⣝⢞⢮⡺⣜⢵⢝⣞⡷⣽⢽⣝⣞⢷⣝⡜⣞⢮⡺⡵⣝⣞⢷⣳⢯⢗⡯⣏⡯⣞⣾⡣⣗⢽⡪⣏⢗⣝⡞⣞⢮⡪⣟⣞⢮⣳⣻⢽⣺⡽⡪⡒⣿⢿
⣳⢹⢸⢪⢣⢳⡹⣜⢕⡗⣝⢮⡫⡧⣫⡺⣪⡳⣕⢽⢝⣟⣾⣺⣽⣺⣜⢮⡳⣕⢯⢾⣺⢯⡺⣝⢵⡫⣞⢮⣳⣟⢮⡳⣝⡞⡮⣳⢕⣯⡺⣕⢝⣞⡮⣳⡽⣞⡯⣗⣵⡣⡳⣽⣿
⢮⡷⣕⡇⣏⢮⢺⡸⣕⣝⢮⡳⣝⢮⡳⣝⢮⡺⣪⡳⡝⣞⢮⢗⡷⣗⣯⢷⢽⣪⢯⣻⣪⡳⣝⢮⡳⣝⢮⣳⢽⡾⣵⣻⢮⡺⣝⢮⢯⣺⡺⣪⣫⢷⢝⣷⣫⣗⡯⣗⡷⡽⡫⢺⣿
⢿⣟⢯⣟⣷⣻⣞⣾⣼⢼⣵⣹⡪⣗⡽⣺⢵⡻⣪⢞⣝⢮⡺⣕⢯⡳⣫⣟⡯⣯⣗⡷⡵⣝⣮⡳⣝⢮⣳⢳⣟⡿⣻⣽⣳⣝⣗⢽⡳⣵⡻⣜⢾⡽⣝⡮⣞⢮⢯⡳⣏⣗⢕⠝⣿
⣟⡿⣵⡹⡳⡿⣽⡾⣯⣿⢾⣯⣿⣻⣾⢷⡿⣾⣽⣳⣳⣽⣪⣗⢽⡪⣗⡵⣫⢗⣗⢯⣻⣳⡳⡯⣗⡯⣞⣗⣯⢯⢯⣺⣳⣳⣳⣫⣞⣗⣯⣺⢽⣻⢎⡯⣺⢝⣗⢯⣗⡗⣇⢏⢺
⣿⣯⡺⣳⣝⡜⣎⢮⡫⣞⢯⢗⡿⣽⢾⡿⣿⣻⣽⣿⣻⣽⡿⣾⣿⣻⣷⣻⣾⣵⣗⣯⣞⣞⣞⡽⡵⣯⣳⣻⣞⢽⣺⣺⣺⣺⡺⣺⣺⣺⣞⣞⣿⡳⣝⢮⣳⡫⣞⣽⣺⣺⡪⡎⢾
⣟⢾⣳⢝⢷⡿⣮⡧⣏⣞⢮⡳⣝⢾⢵⢯⢗⡯⡯⣞⡯⣟⣽⣻⢽⡯⣿⢽⡾⣷⣟⣷⣟⣷⣟⣿⣻⣷⣻⡾⣯⡿⣾⢾⣾⣾⣽⣷⣿⣷⣿⣯⡷⣝⢼⢕⡧⣻⢺⣺⣺⣺⡺⡜⡕
*/
#define efmal(...) fmal(__VA_ARGS__)
#define efmax(x, y) fmax(x, y)
#define efmaxef(x, y) fmaxf(x, y)
#define efmaxel(x, y) fmaxl(x, y)
#define efmin(x, y) fmin(x, y)
#define efminef(x, y) fminf(x, y)
#define efminel(x, y) fminl(x, y)
#define efmod(x, y) fmod(x, y)
#define efmodef(x, y) fmodf(x, y)
#define efmodel(x, y) fmodl(x, y)

// <signal.h> - <signál.h>
#define kil() kill()
#define signl() signal()

// čísla signálů (vizte kill -l nebo signum-generic.h)
#define SIGINTÝŽR  SIGINT   // signál přerušení
#define SIGILÍGL  SIGILL   // signál nezákonný
#define SIGEJBÝÁRTÝ SIGABRT  // signál potrat
#define SIGEFPÍÍ SIGFPE   // signál plovoucí řádová chyba
#define SIGSÍGVÍ SIGSEGV  // signál díl porušení (segment violation)
#define SIGÍGVÍ  SIGSEGV  // signál úsek porušení
#define SIGTERMINEJT  SIGTERM  // signál ukončit
#define SIGHAP  SIGHUP   // signál zavěsit
#define SIGKVIT  SIGQUIT  // signál odejít
#define SIGTREP SIGTRAP  // signál past
#define SIGKIL  SIGKILL  // signál zabít
#define SIGPAJP SIGPIPE  // signál trubka
#define SIGEJELEM  SIGALRM  // signál budík

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
#define síaut cout
#define síin cin
#define síer cerr

#define jůsing using
#define nejmspejs namespace
// std -> sexually transmitted disease -> Sexuálně přenosná nemoc -> spn
#define estýdý std
#define vektr vector
#define puš_bek push_back
#define mep map
#define pér pair

#endif

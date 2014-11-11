#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/bin/../lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;
#line 310
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 372
static __inline int32_t __nesc_ntoh_int32(const void * source)  ;
#line 372
static __inline int32_t __nesc_hton_int32(void * target, int32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 116 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern int memcmp(const void *arg_0x402ff728, const void *arg_0x402ff8c0, size_t arg_0x402ffa58) __attribute((__pure__)) ;
extern void *memcpy(void *arg_0x402fd010, const void *arg_0x402fd1a8, size_t arg_0x402fd340);

extern void *memmove(void *arg_0x40302278, const void *arg_0x40302410, size_t arg_0x403025a8);

extern void *memset(void *arg_0x40300350, int arg_0x403004a8, size_t arg_0x40300640);



extern int strcmp(const char *arg_0x40304010, const char *arg_0x403041a8) __attribute((__pure__)) ;
extern char *strcpy(char *arg_0x403046e0, const char *arg_0x40304878);






extern size_t strlen(const char *arg_0x4030b990) __attribute((__pure__)) ;



extern char *strncpy(char *arg_0x4030e478, const char *arg_0x4030e610, size_t arg_0x4030e7a8);
# 71 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x40312730, const void *arg_0x403128c8);
#line 266
extern int atoi(const char *__s) __attribute((__pure__)) ;
# 25 "/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 416 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/iom128rfa1.h" 3
struct __reg_TIFR0 {
  unsigned int tov0 : 1;
  unsigned int ocf0a : 1;
  unsigned int ocf0b : 1;
  unsigned int  : 5;
};
#line 438
struct __reg_TIFR1 {
  unsigned int tov1 : 1;
  unsigned int ocf1a : 1;
  unsigned int ocf1b : 1;
  unsigned int ocf1c : 1;
  unsigned int  : 1;
  unsigned int icf1 : 1;
  unsigned int  : 2;
};
#line 465
struct __reg_TIFR2 {
  unsigned int tov2 : 1;
  unsigned int ocf2a : 1;
  unsigned int ocf2b : 1;
  unsigned int  : 5;
};
#line 487
struct __reg_TIFR3 {
  unsigned int tov3 : 1;
  unsigned int ocf3a : 1;
  unsigned int ocf3b : 1;
  unsigned int ocf3c : 1;
  unsigned int  : 1;
  unsigned int icf3 : 1;
  unsigned int  : 2;
};
#line 514
struct __reg_TIFR4 {
  unsigned int tov4 : 1;
  unsigned int ocf4a : 1;
  unsigned int ocf4b : 1;
  unsigned int ocf4c : 1;
  unsigned int  : 1;
  unsigned int icf4 : 1;
  unsigned int  : 2;
};
#line 541
struct __reg_TIFR5 {
  unsigned int tov5 : 1;
  unsigned int ocf5a : 1;
  unsigned int ocf5b : 1;
  unsigned int ocf5c : 1;
  unsigned int  : 1;
  unsigned int icf5 : 1;
  unsigned int  : 2;
};
#line 568
struct __reg_PCIFR {
  unsigned int pcif : 3;
  unsigned int  : 5;
};
#line 588
struct __reg_EIFR {
  unsigned int intf : 8;
};
#line 612
struct __reg_EIMSK {
  unsigned int intm : 8;
};
#line 636
struct __reg_GPIOR0 {
  unsigned int gpior0 : 8;
};
#line 669
struct __reg_EECR {
  unsigned int eere : 1;
  unsigned int eepe : 1;
  unsigned int eempe : 1;
  unsigned int eerie : 1;
  unsigned int eepm : 2;
  unsigned int  : 2;
};
#line 715
struct __reg_GTCCR {
  unsigned int psrsync : 1;
  unsigned int psrasy : 1;
  unsigned int  : 5;
  unsigned int tsm : 1;
};
#line 739
struct __reg_TCCR0A {
  unsigned int wgm0 : 2;
  unsigned int  : 2;
  unsigned int com0b : 2;
  unsigned int com0a : 2;
};
#line 764
struct __reg_TCCR0B {
  unsigned int cs0 : 3;
  unsigned int wgm02 : 1;
  unsigned int  : 2;
  unsigned int foc0b : 1;
  unsigned int foc0a : 1;
};
#line 832
struct __reg_GPIOR1 {
  unsigned int gpior1 : 8;
};
#line 856
struct __reg_GPIOR2 {
  unsigned int gpior2 : 8;
};
#line 880
struct __reg_SPCR {
  unsigned int spr : 2;
  unsigned int cpha : 1;
  unsigned int cpol : 1;
  unsigned int mstr : 1;
  unsigned int dord : 1;
  unsigned int spe : 1;
  unsigned int spie : 1;
};
#line 910
struct __reg_SPSR {
  unsigned int spi2x : 1;
  unsigned int  : 5;
  unsigned int wcol : 1;
  unsigned int spif : 1;
};
#line 946
struct __reg_ACSR {
  unsigned int acis : 2;
  unsigned int acic : 1;
  unsigned int acie : 1;
  unsigned int aci : 1;
  unsigned int aco : 1;
  unsigned int acbg : 1;
  unsigned int acd : 1;
};
#line 976
struct __reg_OCDR {
  unsigned int ocdr : 8;
};
#line 1001
struct __reg_SMCR {
  unsigned int se : 1;
  unsigned int sm : 3;
  unsigned int  : 4;
};
#line 1023
struct __reg_MCUSR {
  unsigned int porf : 1;
  unsigned int extrf : 1;
  unsigned int borf : 1;
  unsigned int wdrf : 1;
  unsigned int jtrf : 1;
  unsigned int  : 3;
};
#line 1049
struct __reg_MCUCR {
  unsigned int ivce : 1;
  unsigned int ivsel : 1;
  unsigned int  : 2;
  unsigned int pud : 1;
  unsigned int  : 2;
  unsigned int jtd : 1;
};
#line 1074
struct __reg_SPMCSR {
  unsigned int spmen : 1;
  unsigned int pgers : 1;
  unsigned int pgwrt : 1;
  unsigned int blbset : 1;
  unsigned int rwwsre : 1;
  unsigned int sigrd : 1;
  unsigned int rwwsb : 1;
  unsigned int spmie : 1;
};
#line 1105
struct __reg_RAMPZ {
  unsigned int rampz : 2;
  unsigned int  : 6;
};
#line 1129
struct __reg_SREG {
  unsigned int c : 1;
  unsigned int z : 1;
  unsigned int n : 1;
  unsigned int v : 1;
  unsigned int s : 1;
  unsigned int h : 1;
  unsigned int t : 1;
  unsigned int i : 1;
};
#line 1160
struct __reg_WDTCSR {
  unsigned int wdp : 3;
  unsigned int wde : 1;
  unsigned int wdce : 1;
  unsigned int  : 1;
  unsigned int wdie : 1;
  unsigned int wdif : 1;
};
#line 1189
struct __reg_CLKPR {
  unsigned int clkps : 4;
  unsigned int  : 3;
  unsigned int clkpce : 1;
};
#line 1212
struct __reg_PRR2 {
  unsigned int prram : 4;
  unsigned int  : 4;
};
#line 1233
struct __reg_PRR0 {
  unsigned int pradc : 1;
  unsigned int prusart0 : 1;
  unsigned int prspi : 1;
  unsigned int prtim1 : 1;
  unsigned int prpga : 1;
  unsigned int prtim0 : 1;
  unsigned int prtim2 : 1;
  unsigned int prtwi : 1;
};
#line 1264
struct __reg_PRR1 {
  unsigned int prusart : 3;
  unsigned int prtim3 : 1;
  unsigned int prtim4 : 1;
  unsigned int prtim5 : 1;
  unsigned int prtrx24 : 1;
  unsigned int  : 1;
};
#line 1292
struct __reg_OSCCAL {
  unsigned int cal : 8;
};
#line 1316
struct __reg_BGCR {
  unsigned int bgcal : 3;
  unsigned int bgcal_fine : 4;
  unsigned int  : 1;
};
#line 1341
struct __reg_PCICR {
  unsigned int pcie : 3;
  unsigned int  : 5;
};
#line 1361
struct __reg_EICRA {
  unsigned int isc0 : 2;
  unsigned int isc1 : 2;
  unsigned int isc2 : 2;
  unsigned int isc3 : 2;
};
#line 1388
struct __reg_EICRB {
  unsigned int isc4 : 2;
  unsigned int isc5 : 2;
  unsigned int isc6 : 2;
  unsigned int isc7 : 2;
};
#line 1429
struct __reg_PCMSK1 {
  unsigned int pcint : 2;
  unsigned int pcint1 : 6;
};
#line 1454
struct __reg_PCMSK2 {
  unsigned int pcint1 : 4;
  unsigned int pcint2 : 4;
};
#line 1479
struct __reg_TIMSK0 {
  unsigned int toie0 : 1;
  unsigned int ocie0a : 1;
  unsigned int ocie0b : 1;
  unsigned int  : 5;
};
#line 1501
struct __reg_TIMSK1 {
  unsigned int toie1 : 1;
  unsigned int ocie1a : 1;
  unsigned int ocie1b : 1;
  unsigned int ocie1c : 1;
  unsigned int  : 1;
  unsigned int icie1 : 1;
  unsigned int  : 2;
};
#line 1528
struct __reg_TIMSK2 {
  unsigned int toie2 : 1;
  unsigned int ocie2a : 1;
  unsigned int ocie2b : 1;
  unsigned int  : 5;
};
#line 1551
struct __reg_TIMSK3 {
  unsigned int toie3 : 1;
  unsigned int ocie3a : 1;
  unsigned int ocie3b : 1;
  unsigned int ocie3c : 1;
  unsigned int  : 1;
  unsigned int icie3 : 1;
  unsigned int  : 2;
};
#line 1578
struct __reg_TIMSK4 {
  unsigned int toie4 : 1;
  unsigned int ocie4a : 1;
  unsigned int ocie4b : 1;
  unsigned int ocie4c : 1;
  unsigned int  : 1;
  unsigned int icie4 : 1;
  unsigned int  : 2;
};
#line 1605
struct __reg_TIMSK5 {
  unsigned int toie5 : 1;
  unsigned int ocie5a : 1;
  unsigned int ocie5b : 1;
  unsigned int ocie5c : 1;
  unsigned int  : 1;
  unsigned int icie5 : 1;
  unsigned int  : 2;
};
#line 1632
struct __reg_NEMCR {
  unsigned int  : 4;
  unsigned int aeam : 2;
  unsigned int eneam : 1;
  unsigned int  : 1;
};
#line 1654
struct __reg_ADCSRC {
  unsigned int adsut : 5;
  unsigned int res0 : 1;
  unsigned int adtht : 2;
};
#line 1689
struct __reg_ADCSRA {
  unsigned int adps : 3;
  unsigned int adie : 1;
  unsigned int adif : 1;
  unsigned int adate : 1;
  unsigned int adsc : 1;
  unsigned int aden : 1;
};
#line 1718
struct __reg_ADCSRB {
  unsigned int adts : 3;
  unsigned int mux5 : 1;
  unsigned int acch : 1;
  unsigned int refok : 1;
  unsigned int acme : 1;
  unsigned int avddok : 1;
};
#line 1747
struct __reg_ADMUX {
  unsigned int mux : 5;
  unsigned int adlar : 1;
  unsigned int refs : 2;
};
#line 1773
struct __reg_DIDR2 {
  unsigned int adc8d : 1;
  unsigned int adc9d : 1;
  unsigned int adc10d : 1;
  unsigned int adc11d : 1;
  unsigned int adc12d : 1;
  unsigned int adc13d : 1;
  unsigned int adc14d : 1;
  unsigned int adc15d : 1;
};
#line 1804
struct __reg_DIDR0 {
  unsigned int adc0d : 1;
  unsigned int adc1d : 1;
  unsigned int adc2d : 1;
  unsigned int adc3d : 1;
  unsigned int adc4d : 1;
  unsigned int adc5d : 1;
  unsigned int adc6d : 1;
  unsigned int adc7d : 1;
};
#line 1835
struct __reg_DIDR1 {
  unsigned int ain0d : 1;
  unsigned int ain1d : 1;
  unsigned int  : 6;
};
#line 1855
struct __reg_TCCR1A {
  unsigned int wgm1 : 2;
  unsigned int com1c : 2;
  unsigned int com1b : 2;
  unsigned int com1a : 2;
};
#line 1882
struct __reg_TCCR1B {
  unsigned int cs1 : 3;
  unsigned int wgm1 : 2;
  unsigned int  : 1;
  unsigned int ices1 : 1;
  unsigned int icnc1 : 1;
};
#line 1909
struct __reg_TCCR1C {
  unsigned int  : 5;
  unsigned int foc1c : 1;
  unsigned int foc1b : 1;
  unsigned int foc1a : 1;
};
#line 1956
struct __reg_TCCR3A {
  unsigned int wgm3 : 2;
  unsigned int com3c : 2;
  unsigned int com3b : 2;
  unsigned int com3a : 2;
};
#line 1983
struct __reg_TCCR3B {
  unsigned int cs3 : 3;
  unsigned int wgm3 : 2;
  unsigned int  : 1;
  unsigned int ices3 : 1;
  unsigned int icnc3 : 1;
};
#line 2010
struct __reg_TCCR3C {
  unsigned int  : 5;
  unsigned int foc3c : 1;
  unsigned int foc3b : 1;
  unsigned int foc3a : 1;
};
#line 2057
struct __reg_TCCR4A {
  unsigned int wgm4 : 2;
  unsigned int com4c : 2;
  unsigned int com4b : 2;
  unsigned int com4a : 2;
};
#line 2084
struct __reg_TCCR4B {
  unsigned int cs4 : 3;
  unsigned int wgm4 : 2;
  unsigned int  : 1;
  unsigned int ices4 : 1;
  unsigned int icnc4 : 1;
};
#line 2111
struct __reg_TCCR4C {
  unsigned int  : 5;
  unsigned int foc4c : 1;
  unsigned int foc4b : 1;
  unsigned int foc4a : 1;
};
#line 2158
struct __reg_TCCR2A {
  unsigned int wgm2 : 2;
  unsigned int  : 2;
  unsigned int com2b : 2;
  unsigned int com2a : 2;
};
#line 2183
struct __reg_TCCR2B {
  unsigned int cs2 : 3;
  unsigned int wgm22 : 1;
  unsigned int  : 2;
  unsigned int foc2b : 1;
  unsigned int foc2a : 1;
};
#line 2251
struct __reg_ASSR {
  unsigned int tcr2bub : 1;
  unsigned int tcr2aub : 1;
  unsigned int ocr2bub : 1;
  unsigned int ocr2aub : 1;
  unsigned int tcn2ub : 1;
  unsigned int as2 : 1;
  unsigned int exclk : 1;
  unsigned int exclkamr : 1;
};
#line 2296
struct __reg_TWSR {
  unsigned int twps : 2;
  unsigned int  : 1;
  unsigned int tws : 5;
};
#line 2321
struct __reg_TWAR {
  unsigned int twgce : 1;
  unsigned int twa : 7;
};
#line 2360
struct __reg_TWCR {
  unsigned int twie : 1;
  unsigned int  : 1;
  unsigned int twen : 1;
  unsigned int twwc : 1;
  unsigned int twsto : 1;
  unsigned int twsta : 1;
  unsigned int twea : 1;
  unsigned int twint : 1;
};
#line 2390
struct __reg_TWAMR {
  unsigned int  : 1;
  unsigned int twam : 7;
};
#line 2421
struct __reg_UCSR0A {
  unsigned int mpcm0 : 1;
  unsigned int u2x0 : 1;
  unsigned int upe0 : 1;
  unsigned int dor0 : 1;
  unsigned int fe0 : 1;
  unsigned int udre0 : 1;
  unsigned int txc0 : 1;
  unsigned int rxc0 : 1;
};
#line 2452
struct __reg_UCSR0B {
  unsigned int txb80 : 1;
  unsigned int rxb80 : 1;
  unsigned int ucsz02 : 1;
  unsigned int txen0 : 1;
  unsigned int rxen0 : 1;
  unsigned int udrie0 : 1;
  unsigned int txcie0 : 1;
  unsigned int rxcie0 : 1;
};
#line 2483
struct __reg_UCSR0C {
  unsigned int ucpol0 : 1;
  unsigned int ucsz0 : 2;
  unsigned int ucpha0 : 1;
  unsigned int udord0 : 1;
  unsigned int usbs0 : 1;
  unsigned int upm0 : 2;
  unsigned int umsel0 : 2;
};
#line 2538
struct __reg_UCSR1A {
  unsigned int mpcm1 : 1;
  unsigned int u2x1 : 1;
  unsigned int upe1 : 1;
  unsigned int dor1 : 1;
  unsigned int fe1 : 1;
  unsigned int udre1 : 1;
  unsigned int txc1 : 1;
  unsigned int rxc1 : 1;
};
#line 2569
struct __reg_UCSR1B {
  unsigned int txb81 : 1;
  unsigned int rxb81 : 1;
  unsigned int ucsz12 : 1;
  unsigned int txen1 : 1;
  unsigned int rxen1 : 1;
  unsigned int udrie1 : 1;
  unsigned int txcie1 : 1;
  unsigned int rxcie1 : 1;
};
#line 2600
struct __reg_UCSR1C {
  unsigned int ucpol1 : 1;
  unsigned int ucsz1 : 2;
  unsigned int ucpha1 : 1;
  unsigned int udord1 : 1;
  unsigned int usbs1 : 1;
  unsigned int upm1 : 2;
  unsigned int umsel1 : 2;
};
#line 2653
struct __reg_SCCR0 {
  unsigned int sccmp : 3;
  unsigned int sctse : 1;
  unsigned int sccksel : 1;
  unsigned int scen : 1;
  unsigned int scmbts : 1;
  unsigned int scres : 1;
};
#line 2682
struct __reg_SCCR1 {
  unsigned int scenbo : 1;
  unsigned int  : 7;
};
#line 2700
struct __reg_SCSR {
  unsigned int scbsy : 1;
  unsigned int  : 7;
};
#line 2718
struct __reg_SCIRQM {
  unsigned int irqmcp : 3;
  unsigned int irqmof : 1;
  unsigned int irqmbo : 1;
  unsigned int  : 3;
};
#line 2742
struct __reg_SCIRQS {
  unsigned int irqscp : 3;
  unsigned int irqsof : 1;
  unsigned int irqsbo : 1;
  unsigned int  : 3;
};
#line 2766
struct __reg_SCCNTLL {
  unsigned int sccntll : 8;
};
#line 2790
struct __reg_SCCNTLH {
  unsigned int sccntlh : 8;
};
#line 2814
struct __reg_SCCNTHL {
  unsigned int sccnthl : 8;
};
#line 2838
struct __reg_SCCNTHH {
  unsigned int sccnthh : 8;
};
#line 2862
struct __reg_SCBTSRLL {
  unsigned int scbtsrll : 8;
};
#line 2886
struct __reg_SCBTSRLH {
  unsigned int scbtsrlh : 8;
};
#line 2910
struct __reg_SCBTSRHL {
  unsigned int scbtsrhl : 8;
};
#line 2934
struct __reg_SCBTSRHH {
  unsigned int scbtsrhh : 8;
};
#line 2958
struct __reg_SCTSRLL {
  unsigned int sctsrll : 8;
};
#line 2982
struct __reg_SCTSRLH {
  unsigned int sctsrlh : 8;
};
#line 3006
struct __reg_SCTSRHL {
  unsigned int sctsrhl : 8;
};
#line 3030
struct __reg_SCTSRHH {
  unsigned int sctsrhh : 8;
};
#line 3054
struct __reg_SCOCR3LL {
  unsigned int scocr3ll : 8;
};
#line 3078
struct __reg_SCOCR3LH {
  unsigned int scocr3lh : 8;
};
#line 3102
struct __reg_SCOCR3HL {
  unsigned int scocr3hl : 8;
};
#line 3126
struct __reg_SCOCR3HH {
  unsigned int scocr3hh : 8;
};
#line 3150
struct __reg_SCOCR2LL {
  unsigned int scocr2ll : 8;
};
#line 3174
struct __reg_SCOCR2LH {
  unsigned int scocr2lh : 8;
};
#line 3198
struct __reg_SCOCR2HL {
  unsigned int scocr2hl : 8;
};
#line 3222
struct __reg_SCOCR2HH {
  unsigned int scocr2hh : 8;
};
#line 3246
struct __reg_SCOCR1LL {
  unsigned int scocr1ll : 8;
};
#line 3270
struct __reg_SCOCR1LH {
  unsigned int scocr1lh : 8;
};
#line 3294
struct __reg_SCOCR1HL {
  unsigned int scocr1hl : 8;
};
#line 3318
struct __reg_SCOCR1HH {
  unsigned int scocr1hh : 8;
};
#line 3342
struct __reg_TCCR5A {
  unsigned int wgm5 : 2;
  unsigned int com5c : 2;
  unsigned int com5b : 2;
  unsigned int com5a : 2;
};
#line 3369
struct __reg_TCCR5B {
  unsigned int cs5 : 3;
  unsigned int wgm5 : 2;
  unsigned int  : 1;
  unsigned int ices5 : 1;
  unsigned int icnc5 : 1;
};
#line 3396
struct __reg_TCCR5C {
  unsigned int  : 5;
  unsigned int foc5c : 1;
  unsigned int foc5b : 1;
  unsigned int foc5a : 1;
};
#line 3443
struct __reg_LLCR {
  unsigned int llencal : 1;
  unsigned int llshort : 1;
  unsigned int lltco : 1;
  unsigned int llcal : 1;
  unsigned int llcomp : 1;
  unsigned int lldone : 1;
  unsigned int  : 2;
};
#line 3471
struct __reg_LLDRL {
  unsigned int lldrl : 4;
  unsigned int  : 4;
};
#line 3492
struct __reg_LLDRH {
  unsigned int lldrh : 5;
  unsigned int  : 3;
};
#line 3514
struct __reg_DRTRAM3 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3535
struct __reg_DRTRAM2 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3556
struct __reg_DRTRAM1 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3577
struct __reg_DRTRAM0 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3598
struct __reg_DPDS0 {
  unsigned int pbdrv : 2;
  unsigned int pddrv : 2;
  unsigned int pedrv : 2;
  unsigned int pfdrv : 2;
};
#line 3625
struct __reg_DPDS1 {
  unsigned int pgdrv : 2;
  unsigned int  : 6;
};
#line 3644
struct __reg_TRXPR {
  unsigned int trxrst : 1;
  unsigned int slptr : 1;
  unsigned int  : 6;
};
#line 3664
struct __reg_AES_CTRL {
  unsigned int  : 2;
  unsigned int aes_im : 1;
  unsigned int aes_dir : 1;
  unsigned int  : 1;
  unsigned int aes_mode : 1;
  unsigned int  : 1;
  unsigned int aes_request : 1;
};
#line 3697
struct __reg_AES_STATUS {
  unsigned int aes_done : 1;
  unsigned int  : 6;
  unsigned int aes_er : 1;
};
#line 3717
struct __reg_AES_STATE {
  unsigned int aes_state : 8;
};
#line 3741
struct __reg_AES_KEY {
  unsigned int aes_key : 8;
};
#line 3765
struct __reg_TRX_STATUS {
  unsigned int trx_status : 5;
  unsigned int tst_status : 1;
  unsigned int cca_status : 1;
  unsigned int cca_done : 1;
};
#line 3813
struct __reg_TRX_STATE {
  unsigned int trx_cmd : 5;
  unsigned int trac_status : 3;
};
#line 3859
struct __reg_TRX_CTRL_1 {
  unsigned int  : 5;
  unsigned int tx_auto_crc_on : 1;
  unsigned int irq_2_ext_en : 1;
  unsigned int pa_ext_en : 1;
};
#line 3881
struct __reg_PHY_TX_PWR {
  unsigned int tx_pwr : 4;
  unsigned int pa_lt : 2;
  unsigned int pa_buf_lt : 2;
};
#line 3918
struct __reg_PHY_RSSI {
  unsigned int rssi : 5;
  unsigned int rnd_value : 2;
  unsigned int rx_crc_valid : 1;
};
#line 3952
struct __reg_PHY_ED_LEVEL {
  unsigned int ed_level : 8;
};
#line 3983
struct __reg_PHY_CC_CCA {
  unsigned int channel : 5;
  unsigned int cca_mode : 2;
  unsigned int cca_request : 1;
};
#line 4032
struct __reg_CCA_THRES {
  unsigned int cca_ed_thres : 4;
  unsigned int cca_cs_thres : 4;
};
#line 4057
struct __reg_RX_CTRL {
  unsigned int pdt_thres : 4;
  unsigned int  : 4;
};
#line 4083
struct __reg_SFD_VALUE {
  unsigned int sfd_value : 8;
};
#line 4111
struct __reg_TRX_CTRL_2 {
  unsigned int oqpsk_data_rate : 2;
  unsigned int  : 5;
  unsigned int rx_safe_mode : 1;
};
#line 4139
struct __reg_ANT_DIV {
  unsigned int ant_ctrl : 2;
  unsigned int ant_ext_sw_en : 1;
  unsigned int ant_div_en : 1;
  unsigned int  : 3;
  unsigned int ant_sel : 1;
};
#line 4174
struct __reg_IRQ_MASK {
  unsigned int pll_lock_en : 1;
  unsigned int pll_unlock_en : 1;
  unsigned int rx_start_en : 1;
  unsigned int rx_end_en : 1;
  unsigned int cca_ed_done_en : 1;
  unsigned int ami_en : 1;
  unsigned int tx_end_en : 1;
  unsigned int awake_en : 1;
};
#line 4205
struct __reg_IRQ_STATUS {
  unsigned int pll_lock : 1;
  unsigned int pll_unlock : 1;
  unsigned int rx_start : 1;
  unsigned int rx_end : 1;
  unsigned int cca_ed_done : 1;
  unsigned int ami : 1;
  unsigned int tx_end : 1;
  unsigned int awake : 1;
};
#line 4236
struct __reg_VREG_CTRL {
  unsigned int  : 2;
  unsigned int dvdd_ok : 1;
  unsigned int dvreg_ext : 1;
  unsigned int  : 2;
  unsigned int avdd_ok : 1;
  unsigned int avreg_ext : 1;
};
#line 4268
struct __reg_BATMON {
  unsigned int batmon_vth : 4;
  unsigned int batmon_hr : 1;
  unsigned int batmon_ok : 1;
  unsigned int bat_low_en : 1;
  unsigned int bat_low : 1;
};
#line 4301
struct __reg_XOSC_CTRL {
  unsigned int xtal_trim : 4;
  unsigned int xtal_mode : 4;
};
#line 4331
struct __reg_RX_SYN {
  unsigned int rx_pdt_level : 4;
  unsigned int  : 3;
  unsigned int rx_pdt_dis : 1;
};
#line 4359
struct __reg_XAH_CTRL_1 {
  unsigned int  : 1;
  unsigned int aack_prom_mode : 1;
  unsigned int aack_ack_time : 1;
  unsigned int  : 1;
  unsigned int aack_upld_res_ft : 1;
  unsigned int aack_fltr_res_ft : 1;
  unsigned int  : 2;
};
#line 4390
struct __reg_FTN_CTRL {
  unsigned int  : 7;
  unsigned int ftn_start : 1;
};
#line 4408
struct __reg_PLL_CF {
  unsigned int  : 7;
  unsigned int pll_cf_start : 1;
};
#line 4426
struct __reg_PLL_DCU {
  unsigned int  : 7;
  unsigned int pll_dcu_start : 1;
};
#line 4444
struct __reg_PART_NUM {
  unsigned int part_num : 8;
};
#line 4472
struct __reg_VERSION_NUM {
  unsigned int version_num : 8;
};
#line 4501
struct __reg_MAN_ID_0 {
  unsigned int man_id_0 : 8;
};
#line 4529
struct __reg_MAN_ID_1 {
  unsigned int man_id_1 : 8;
};
#line 4557
struct __reg_SHORT_ADDR_0 {
  unsigned int short_addr_0 : 8;
};
#line 4581
struct __reg_SHORT_ADDR_1 {
  unsigned int short_addr_1 : 8;
};
#line 4605
struct __reg_PAN_ID_0 {
  unsigned int pan_id_0 : 8;
};
#line 4629
struct __reg_PAN_ID_1 {
  unsigned int pan_id_1 : 8;
};
#line 4653
struct __reg_IEEE_ADDR_0 {
  unsigned int ieee_addr_0 : 8;
};
#line 4677
struct __reg_IEEE_ADDR_1 {
  unsigned int ieee_addr_1 : 8;
};
#line 4701
struct __reg_IEEE_ADDR_2 {
  unsigned int ieee_addr_2 : 8;
};
#line 4725
struct __reg_IEEE_ADDR_3 {
  unsigned int ieee_addr_3 : 8;
};
#line 4749
struct __reg_IEEE_ADDR_4 {
  unsigned int ieee_addr_4 : 8;
};
#line 4773
struct __reg_IEEE_ADDR_5 {
  unsigned int ieee_addr_5 : 8;
};
#line 4797
struct __reg_IEEE_ADDR_6 {
  unsigned int ieee_addr_6 : 8;
};
#line 4821
struct __reg_IEEE_ADDR_7 {
  unsigned int ieee_addr_7 : 8;
};
#line 4845
struct __reg_XAH_CTRL_0 {
  unsigned int slotted_operation : 1;
  unsigned int max_csma_retries : 3;
  unsigned int max_frame_retries : 4;
};
#line 4876
struct __reg_CSMA_SEED_0 {
  unsigned int csma_seed_0 : 8;
};
#line 4900
struct __reg_CSMA_SEED_1 {
  unsigned int csma_seed_1 : 3;
  unsigned int aack_i_am_coord : 1;
  unsigned int aack_dis_ack : 1;
  unsigned int aack_set_pd : 1;
  unsigned int aack_fvn_mode : 2;
};
#line 4928
struct __reg_CSMA_BE {
  unsigned int min_be : 4;
  unsigned int max_be : 4;
};
#line 4953
struct __reg_TST_CTRL_DIGI {
  unsigned int tst_ctrl_dig : 4;
  unsigned int  : 4;
};
#line 4974
struct __reg_TST_RX_LENGTH {
  unsigned int rx_length : 8;
};
# 239 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 234
typedef struct __nesc_unnamed4245 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 51 "/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4246 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 211 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.x/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 105 "/opt/tinyos-2.x/tos/chips/atm128rfa1/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 125
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 135
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
#line 170
#line 162
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;









typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 62 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/Atm128Adc.h"
enum __nesc_unnamed4249 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVDD = 1, 
  ATM128_ADC_VREF_1_5 = 2, 
  ATM128_ADC_VREF_1_6 = 3, 
  ATM128_ADC_VREF_AVCC = ATM128_ADC_VREF_AVDD
};


enum __nesc_unnamed4250 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4251 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND, 
  ATM128_ADC_INT_TEMP = 41, 
  ATM128_ADC_INT_VDRTBBP = 52, 
  ATM128_ADC_INT_VDRTBBN = 61
};







#line 117
typedef struct __nesc_unnamed4252 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4253 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4254 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 173
typedef struct __nesc_unnamed4259 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;










#line 184
typedef struct __nesc_unnamed4260 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t acch : 1;
  uint8_t refok : 1;
  uint8_t acme : 1;
  uint8_t avddok : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 55 "/opt/tinyos-2.x/tos/platforms/ucbase/hardware.h"
enum __nesc_unnamed4261 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};
# 43 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4262 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 35 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/6lowpan.h"
enum __nesc_unnamed4263 {
  LOWMSG_MESH_LEN = 5, 
  LOWMSG_BCAST_LEN = 2, 
  LOWMSG_FRAG1_LEN = 4, 
  LOWMSG_FRAGN_LEN = 5
};

enum __nesc_unnamed4264 {
  INET_MTU = 1280, 
  LIB6LOWPAN_MAX_LEN = 100, 
  LOWPAN_LINK_MTU = 109, 




  FRAG_EXPIRE_TIME = 4096
};




enum __nesc_unnamed4265 {
  LOWPAN_NALP_PATTERN = 0x0, 
  LOWPAN_MESH_PATTERN = 0x2, 
  LOWPAN_FRAG1_PATTERN = 0x18, 
  LOWPAN_FRAGN_PATTERN = 0x1c, 
  LOWPAN_BCAST_PATTERN = 0x50, 
  LOWPAN_IPV6_PATTERN = 0x41
};

enum __nesc_unnamed4266 {
  LOWPAN_MESH_V_MASK = 0x20, 
  LOWPAN_MESH_F_MASK = 0x10, 
  LOWPAN_MESH_HOPS_MASK = 0x0f
};




enum __nesc_unnamed4267 {
  LOWPAN_DISPATCH_BYTE_MASK = 0xe0, 
  LOWPAN_DISPATCH_BYTE_VAL = 0x60, 

  LOWPAN_IPHC_TF_MASK = 0x18, 
  LOWPAN_IPHC_TF_NONE = 0x18, 
  LOWPAN_IPHC_TF_ECN_DSCP = 0x10, 
  LOWPAN_IPHC_TF_ECN_FL = 0x08, 
  LOWPAN_IPHC_TF_ECN_DSCP_FL = 0x00, 

  LOWPAN_IPHC_NH_MASK = 0x04, 
  LOWPAN_IPHC_NH_INLINE = 0, 

  LOWPAN_IPHC_HLIM_MASK = 0x03, 
  LOWPAN_IPHC_HLIM_NONE = 0x00, 
  LOWPAN_IPHC_HLIM_1 = 0x01, 
  LOWPAN_IPHC_HLIM_64 = 0x02, 
  LOWPAN_IPHC_HLIM_255 = 0x03, 

  LOWPAN_IPHC_CID_MASK = 0x80, 
  LOWPAN_IPHC_CID_PRESENT = 0x80, 

  LOWPAN_IPHC_SAM_SHIFT = 4, 
  LOWPAN_IPHC_M = 0x08, 
  LOWPAN_IPHC_DAM_SHIFT = 0, 

  LOWPAN_IPHC_AC_CONTEXT = 0x04, 
  LOWPAN_IPHC_AM_MASK = 0x3, 
  LOWPAN_IPHC_AM_128 = 0x0, 
  LOWPAN_IPHC_AM_64 = 0x1, 
  LOWPAN_IPHC_AM_16 = 0x2, 
  LOWPAN_IPHC_AM_0 = 0x3, 

  LOWPAN_IPHC_AM_M = 0x08, 
  LOWPAN_IPHC_AM_M_128 = 0x0, 
  LOWPAN_IPHC_AM_M_48 = 0x1, 
  LOWPAN_IPHC_AM_M_32 = 0x2, 
  LOWPAN_IPHC_AM_M_8 = 0x3
};




enum __nesc_unnamed4268 {
  LOWPAN_NHC_IPV6_MASK = 0xf0, 
  LOWPAN_NHC_IPV6_PATTERN = 0xe0, 

  LOWPAN_NHC_EID_SHIFT = 0x1, 
  LOWPAN_NHC_EID_MASK = 0xe, 
  LOWPAN_NHC_EID_HOP = 0x0 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_ROUTING = 0x1 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_FRAG = 0x2 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_DEST = 0x3 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_MOBILE = 0x4 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_IPV6 = 0x7 << LOWPAN_NHC_EID_SHIFT, 

  LOWPAN_NHC_NH = 0x1, 

  LOWPAN_NHC_UDP_MASK = 0xf8, 
  LOWPAN_NHC_UDP_PATTERN = 0xf0, 

  LOWPAN_NHC_UDP_CKSUM = 0x4, 

  LOWPAN_NHC_UDP_PORT_MASK = 0x3, 
  LOWPAN_NHC_UDP_PORT_FULL = 0x0, 
  LOWPAN_NHC_UDP_PORT_SRC_FULL = 0x1, 
  LOWPAN_NHC_UDP_PORT_DST_FULL = 0x2, 
  LOWPAN_NHC_UDP_PORT_SHORT = 0x3
};
# 41 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer.h"
enum __nesc_unnamed4269 {


  ATMRFA1_CLK8_OFF = 0, 
  ATMRFA1_CLK8_NORMAL = 1, 
  ATMRFA1_CLK8_DIVIDE_8 = 2, 
  ATMRFA1_CLK8_DIVIDE_32 = 3, 
  ATMRFA1_CLK8_DIVIDE_64 = 4, 
  ATMRFA1_CLK8_DIVIDE_128 = 5, 
  ATMRFA1_CLK8_DIVIDE_256 = 6, 
  ATMRFA1_CLK8_DIVIDE_1024 = 7, 


  ATMRFA1_WGM8_NORMAL = 0 << 3, 
  ATMRFA1_WGM8_PWM = 1 << 3, 
  ATMRFA1_WGM8_CTC = 2 << 3, 
  ATMRFA1_WGM8_PWM_FAST = 3 << 3, 
  ATMRFA1_WGM8_COMPARE_HIGH = 5 << 3, 
  ATMRFA1_WGM8_COMPARE_LOW = 7 << 3, 


  ATMRFA1_ASYNC_OFF = 0 << 6, 
  ATMRFA1_ASYNC_ON = 1 << 6, 
  ATMRFA1_ASYNC_EXT = 3 << 6
};


enum __nesc_unnamed4270 {


  ATMRFA1_COM8_OFF = 0, 
  ATMRFA1_COM8_TOGGLE, 
  ATMRFA1_COM8_CLEAR, 
  ATMRFA1_COM8_SET
};





enum __nesc_unnamed4271 {


  ATMRFA1_CLK16_OFF = 0, 
  ATMRFA1_CLK16_NORMAL = 1, 
  ATMRFA1_CLK16_DIVIDE_8 = 2, 
  ATMRFA1_CLK16_DIVIDE_64 = 3, 
  ATMRFA1_CLK16_DIVIDE_256 = 4, 
  ATMRFA1_CLK16_DIVIDE_1024 = 5, 
  ATMRFA1_CLK16_EXTERNAL_FALL = 6, 
  ATMRFA1_CLK16_EXTERNAL_RISE = 7, 


  ATMRFA1_WGM16_NORMAL = 0 << 3, 
  ATMRFA1_WGM16_PWM_8BIT = 1 << 3, 
  ATMRFA1_WGM16_PWM_9BIT = 2 << 3, 
  ATMRFA1_WGM16_PWM_10BIT = 3 << 3, 
  ATMRFA1_WGM16_CTC_COMPARE = 4 << 3, 
  ATMRFA1_WGM16_PWM_FAST_8BIT = 5 << 3, 
  ATMRFA1_WGM16_PWM_FAST_9BIT = 6 << 3, 
  ATMRFA1_WGM16_PWM_FAST_10BIT = 7 << 3, 
  ATMRFA1_WGM16_PWM_CAPTURE_LOW = 8 << 3, 
  ATMRFA1_WGM16_PWM_COMPARE_LOW = 9 << 3, 
  ATMRFA1_WGM16_PWM_CAPTURE_HIGH = 10 << 3, 
  ATMRFA1_WGM16_PWM_COMPARE_HIGH = 11 << 3, 
  ATMRFA1_WGM16_CTC_CAPTURE = 12 << 3, 
  ATMRFA1_WGM16_RESERVED = 13 << 3, 
  ATMRFA1_WGM16_PWM_FAST_CAPTURE = 14 << 3, 
  ATMRFA1_WGM16_PWM_FAST_COMPARE = 15 << 3
};


enum __nesc_unnamed4272 {


  ATMRFA1_COM16_NORMAL = 0, 
  ATMRFA1_COM16_TOGGLE, 
  ATMRFA1_COM16_CLEAR, 
  ATMRFA1_COM16_SET
};


enum __nesc_unnamed4273 {

  ATMRFA1_CAP16_RISING_EDGE = 0x01, 
  ATMRFA1_CAP16_NOISE_CANCEL = 0x02
};





enum __nesc_unnamed4274 {

  ATMRFA1_CLKSC_DISABLE = 0, 
  ATMRFA1_CLKSC_XTAL = 1 << 5, 
  ATMRFA1_CLKSC_RTC = (1 << 5) | (1 << 4)
};


enum __nesc_unnamed4275 {

  ATMRFA1_COMSC_ABSOLUTE = 0, 
  ATMRFA1_COMSC_RELATIVE = 1
};


enum __nesc_unnamed4276 {

  ATMRFA1_CAPSC_OFF = 0, 
  ATMRFA1_CAPSC_ON = 1
};
# 41 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4277 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4278 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4279 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4280 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 69 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/TimerConfig.h"
typedef struct T16mhz {
} 
#line 69
T16mhz;
typedef struct T8mhz {
} 
#line 70
T8mhz;
typedef struct T4mhz {
} 
#line 71
T4mhz;
typedef struct T2mhz {
} 
#line 72
T2mhz;








typedef T2mhz TMcu;
#line 99
typedef T32khz TRtc;
#line 122
typedef struct T62khz {
} 
#line 122
T62khz;
# 41 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4281 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 58
#line 49
typedef struct __nesc_unnamed4282 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 59
typedef union __nesc_unnamed4283 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 67
typedef struct __nesc_unnamed4284 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 74
typedef union __nesc_unnamed4285 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4286 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4287 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4288 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4289 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4290 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 41 "/opt/tinyos-2.x/tos/chips/rf212/RF212DriverLayer.h"
#line 38
typedef nx_struct rf212_header_t {

  nxle_uint8_t length;
} __attribute__((packed)) rf212_header_t;









#line 43
typedef struct rf212_metadata_t {

  uint8_t lqi;
  union  {

    uint8_t power;
    uint8_t rssi;
  } ;
} rf212_metadata_t;

enum rf212_registers_enum {

  RF212_TRX_STATUS = 0x01, 
  RF212_TRX_STATE = 0x02, 
  RF212_TRX_CTRL_0 = 0x03, 
  RF212_TRX_CTRL_1 = 0x04, 
  RF212_PHY_TX_PWR = 0x05, 
  RF212_PHY_RSSI = 0x06, 
  RF212_PHY_ED_LEVEL = 0x07, 
  RF212_PHY_CC_CCA = 0x08, 
  RF212_CCA_THRES = 0x09, 
  RF212_TRX_CTRL_2 = 0x0C, 
  RF212_IRQ_MASK = 0x0E, 
  RF212_IRQ_STATUS = 0x0F, 
  RF212_VREG_CTRL = 0x10, 
  RF212_BATMON = 0x11, 
  RF212_XOSC_CTRL = 0x12, 
  RF212_PLL_CF = 0x1A, 
  RF212_PLL_DCU = 0x1B, 
  RF212_PART_NUM = 0x1C, 
  RF212_VERSION_NUM = 0x1D, 
  RF212_MAN_ID_0 = 0x1E, 
  RF212_MAN_ID_1 = 0x1F, 
  RF212_SHORT_ADDR_0 = 0x20, 
  RF212_SHORT_ADDR_1 = 0x21, 
  RF212_PAN_ID_0 = 0x22, 
  RF212_PAN_ID_1 = 0x23, 
  RF212_IEEE_ADDR_0 = 0x24, 
  RF212_IEEE_ADDR_1 = 0x25, 
  RF212_IEEE_ADDR_2 = 0x26, 
  RF212_IEEE_ADDR_3 = 0x27, 
  RF212_IEEE_ADDR_4 = 0x28, 
  RF212_IEEE_ADDR_5 = 0x29, 
  RF212_IEEE_ADDR_6 = 0x2A, 
  RF212_IEEE_ADDR_7 = 0x2B, 
  RF212_XAH_CTRL = 0x2C, 
  RF212_CSMA_SEED_0 = 0x2D, 
  RF212_CSMA_SEED_1 = 0x2E
};

enum rf212_trx_status_enums {

  RF212_CCA_DONE = 1 << 7, 
  RF212_CCA_STATUS = 1 << 6, 
  RF212_TRX_STATUS_MASK = 0x1F, 
  RF212_P_ON = 0, 
  RF212_BUSY_RX = 1, 
  RF212_BUSY_TX = 2, 
  RF212_RX_ON = 6, 
  RF212_TRX_OFF = 8, 
  RF212_PLL_ON = 9, 
  RF212_SLEEP = 15, 
  RF212_BUSY_RX_AACK = 17, 
  RF212_BUSR_TX_ARET = 18, 
  RF212_RX_AACK_ON = 22, 
  RF212_TX_ARET_ON = 25, 
  RF212_RX_ON_NOCLK = 28, 
  RF212_AACK_ON_NOCLK = 29, 
  RF212_BUSY_RX_AACK_NOCLK = 30, 
  RF212_STATE_TRANSITION_IN_PROGRESS = 31
};

enum rf212_trx_state_enums {

  RF212_TRAC_STATUS_MASK = 0xE0, 
  RF212_TRAC_SUCCESS = 0, 
  RF212_TRAC_SUCCESS_DATA_PENDING = 1 << 5, 
  RF212_TRAC_SUCCESS_WAIT_FOR_ACK = 2 << 5, 
  RF212_TRAC_CHANNEL_ACCESS_FAILURE = 3 << 5, 
  RF212_TRAC_NO_ACK = 5 << 5, 
  RF212_TRAC_INVALID = 7 << 5, 
  RF212_TRX_CMD_MASK = 0x1F, 
  RF212_NOP = 0, 
  RF212_TX_START = 2, 
  RF212_FORCE_TRX_OFF = 3
};

enum rf212_trx_data_modes {

  RF212_DATA_MODE_BPSK_20 = 0x00, 
  RF212_DATA_MODE_BPSK_40 = 0x04, 
  RF212_DATA_MODE_OQPSK_SIN_RC_100 = 0x08, 
  RF212_DATA_MODE_OQPSK_SIN_RC_200 = 0x09, 
  RF212_DATA_MODE_OQPSK_SIN_RC_400_SCR = 0x2A, 
  RF212_DATA_MODE_OQPSK_SIN_RC_400 = 0x0A, 
  RF212_DATA_MODE_OQPSK_SIN_250 = 0x0C, 
  RF212_DATA_MODE_OQPSK_SIN_500 = 0x0D, 
  RF212_DATA_MODE_OQPSK_SIN_1000_SCR = 0x2E, 
  RF212_DATA_MODE_OQPSK_SIN_1000 = 0x0E, 
  RF212_DATA_MODE_OQPSK_RC_250 = 0x1C, 
  RF212_DATA_MODE_OQPSK_RC_500 = 0x1D, 
  RF212_DATA_MODE_OQPSK_RC_1000_SCR = 0x3E, 
  RF212_DATA_MODE_OQPSK_RC_1000 = 0x1E, 

  RF212_DATA_MODE_DEFAULT = 0x00
};

enum rf212_phy_rssi_enums {

  RF212_RX_CRC_VALID = 1 << 7, 
  RF212_RSSI_MASK = 0x1F
};

enum rf212_phy_cc_cca_enums {

  RF212_CCA_REQUEST = 1 << 7, 
  RF212_CCA_MODE_0 = 0 << 5, 
  RF212_CCA_MODE_1 = 1 << 5, 
  RF212_CCA_MODE_2 = 2 << 5, 
  RF212_CCA_MODE_3 = 3 << 5, 
  RF212_CHANNEL_MASK = 0x1F
};

enum rf212_irq_register_enums {

  RF212_IRQ_BAT_LOW = 1 << 7, 
  RF212_IRQ_TRX_UR = 1 << 6, 
  RF212_IRQ_AMI = 1 << 5, 
  RF212_IRQ_CCA_ED_DONE = 1 << 4, 
  RF212_IRQ_TRX_END = 1 << 3, 
  RF212_IRQ_RX_START = 1 << 2, 
  RF212_IRQ_PLL_UNLOCK = 1 << 1, 
  RF212_IRQ_PLL_LOCK = 1 << 0
};

enum rf212_batmon_enums {

  RF212_BATMON_OK = 1 << 5, 
  RF212_BATMON_VHR = 1 << 4, 
  RF212_BATMON_VTH_MASK = 0x0F
};

enum rf212_vreg_ctrl_enums {

  RF212_AVREG_EXT = 1 << 7, 
  RF212_AVDD_OK = 1 << 6, 
  RF212_DVREG_EXT = 1 << 3, 
  RF212_DVDD_OK = 1 << 2
};

enum rf212_xosc_ctrl_enums {

  RF212_XTAL_MODE_OFF = 0 << 4, 
  RF212_XTAL_MODE_EXTERNAL = 4 << 4, 
  RF212_XTAL_MODE_INTERNAL = 15 << 4
};

enum rf212_spi_command_enums {

  RF212_CMD_REGISTER_READ = 0x80, 
  RF212_CMD_REGISTER_WRITE = 0xC0, 
  RF212_CMD_REGISTER_MASK = 0x3F, 
  RF212_CMD_FRAME_READ = 0x20, 
  RF212_CMD_FRAME_WRITE = 0x60, 
  RF212_CMD_SRAM_READ = 0x00, 
  RF212_CMD_SRAM_WRITE = 0x40
};
# 42 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayer.h"
#line 39
typedef nx_struct rfa1_header_t {

  nxle_uint8_t length;
} __attribute__((packed)) rfa1_header_t;









#line 44
typedef struct rfa1_metadata_t {

  uint8_t lqi;
  union  {

    uint8_t power;
    uint8_t rssi;
  } ;
} rfa1_metadata_t;
# 37 "/opt/tinyos-2.x/tos/platforms/ucbase/RadioConfig.h"
typedef T62khz TRadio;
typedef uint32_t tradio_size;
#line 62
enum __nesc_unnamed4291 {





  RFA1_CCA_MODE_VALUE = 2 << 5, 





  RFA1_CCA_THRES_VALUE = 0xC7, 

  RFA1_PA_BUF_LT = 3 << 6, 
  RFA1_PA_LT = 0 << 4
};
#line 119
enum __nesc_unnamed4292 {





  RF212_TRX_CTRL_0_VALUE = 0, 






  RF212_TRX_CTRL_2_VALUE = RF212_DATA_MODE_OQPSK_SIN_RC_200, 






  RF212_CCA_MODE_VALUE = RF212_CCA_MODE_3, 





  RF212_CCA_THRES_VALUE = 0x77
};
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 40 "/opt/tinyos-2.x/tos/types/IeeeEui64.h"
enum __nesc_unnamed4293 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/opt/tinyos-2.x/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4294 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4295 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4296 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4297 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 47 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.h"
#line 40
typedef nx_struct ieee154_simple_header_t {

  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
} __attribute__((packed)) ieee154_simple_header_t;
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayer.h"
#line 40
typedef nx_struct activemessage_header_t {

  nx_am_id_t type;
} __attribute__((packed)) activemessage_header_t;
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayer.h"
#line 38
typedef struct flags_metadata_t {


  uint8_t flags;
} flags_metadata_t;
# 41 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayer.h"
#line 38
typedef struct timestamp_metadata_t {

  uint32_t timestamp;
} timestamp_metadata_t;
# 41 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/LowPowerListeningLayer.h"
#line 38
typedef struct lpl_metadata_t {

  uint16_t sleepint;
} lpl_metadata_t;
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayer.h"
#line 38
typedef struct link_metadata_t {

  uint16_t maxRetries;
  uint16_t retryDelay;
} link_metadata_t;
# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1Radio.h"
#line 49
typedef nx_struct rfa1packet_header_t {

  rfa1_header_t rfa1;
  ieee154_simple_header_t ieee154;

  network_header_t network;


  activemessage_header_t am;
} __attribute__((packed)) 
rfa1packet_header_t;




#line 61
typedef nx_struct rfa1packet_footer_t {
} __attribute__((packed)) 

rfa1packet_footer_t;
#line 77
#line 66
typedef struct rfa1packet_metadata_t {





  link_metadata_t link;

  timestamp_metadata_t timestamp;
  flags_metadata_t flags;
  rfa1_metadata_t rfa1;
} rfa1packet_metadata_t;

enum __nesc_unnamed4298 {

  RFA1_TX_PWR_MASK = 0x0F, 
  RFA1_CHANNEL_MASK = 0x1F, 
  RFA1_TRX_STATUS_MASK = 0x1F, 
  RFA1_RSSI_MASK = 0x1F
};
# 32 "/opt/tinyos-2.x/tos/platforms/ucbase/platform_message.h"
#line 29
typedef union message_header {
  rfa1packet_header_t rfa1;
  serial_header_t serial;
} message_header_t;



#line 34
typedef union message_footer {
  rfa1packet_footer_t rfa1;
} message_footer_t;



#line 38
typedef union message_metadata {
  rfa1packet_metadata_t rfa1;
} message_metadata_t;
# 19 "/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[112];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 50 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 41 "/opt/tinyos-2.x/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 57
#line 45
typedef union __nesc_unnamed4299 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 75
#line 63
typedef union __nesc_unnamed4300 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4301 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4302 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4303 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4304 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4305 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4306 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
# 27 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatch.h"
enum __nesc_unnamed4307 {
  N_RECONSTRUCTIONS = 3, 
  N_CONCURRENT_SENDS = 3, 
  N_FRAGMENTS = 12
};

struct send_info {
  void *upper_data;
  uint8_t link_fragments;
  uint8_t link_transmissions;
  uint8_t link_fragment_attempts;
  bool failed;
  uint8_t _refcount;
};

struct send_entry {
  struct send_info *info;
  message_t *msg;
};
# 24 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/nwbyte.h"
uint32_t ntohl(uint32_t i);
#line 24
uint32_t ntohl(uint32_t i);
# 7 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/iovec.h"
struct ip_iovec {
  uint8_t *iov_base;
  size_t iov_len;
  struct ip_iovec *iov_next;
};

int iov_read(struct ip_iovec *iov, int offset, int len, uint8_t *buf);
int iov_len(struct ip_iovec *iov);
# 42 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/ip.h"
struct in6_addr {

  union __nesc_unnamed4308 {

    uint8_t u6_addr8[16];
    uint16_t u6_addr16[8];
    uint32_t u6_addr32[4];
  } in6_u;
};




struct sockaddr_in6 {
  uint16_t sin6_port;
  struct in6_addr sin6_addr;
};









struct ip6_hdr {
  union __nesc_unnamed4309 {
    struct ip6_hdrctl {
      uint32_t ip6_un1_flow;
      uint16_t ip6_un1_plen;
      uint8_t ip6_un1_nxt;
      uint8_t ip6_un1_hlim;
    } ip6_un1;
    uint8_t ip6_un2_vfc;
  } ip6_ctlun;
  struct in6_addr ip6_src;
  struct in6_addr ip6_dst;
} __attribute((packed)) ;
#line 110
struct ip6_ext {
  uint8_t ip6e_nxt;
  uint8_t ip6e_len;
};

struct tlv_hdr {
  uint8_t type;
  uint8_t len;
};



enum __nesc_unnamed4310 {
  IANA_ICMP = 58, 
  IANA_UDP = 17, 
  IANA_TCP = 6, 




  IPV6_HOP = 0, 
  IPV6_IPV6 = 41, 
  IPV6_ROUTING = 43, 
  IPV6_FRAG = 44, 
  IPV6_AUTH = 51, 
  IPV6_SEC = 50, 
  IPV6_NONEXT = 59, 
  IPV6_DEST = 60, 
  IPV6_MOBILITY = 135, 

  IPV6_TLV_PAD1 = 0, 
  IPV6_TLV_PADN = 1
};




struct in6_iid {
  uint8_t data[8];
};




struct icmp6_hdr {
  uint8_t type;
  uint8_t code;
  uint16_t cksum;
};

enum __nesc_unnamed4311 {
  ICMP_TYPE_ECHO_DEST_UNREACH = 1, 
  ICMP_TYPE_ECHO_PKT_TOO_BIG = 2, 
  ICMP_TYPE_ECHO_TIME_EXCEEDED = 3, 
  ICMP_TYPE_ECHO_PARAM_PROBLEM = 4, 
  ICMP_TYPE_ECHO_REQUEST = 128, 
  ICMP_TYPE_ECHO_REPLY = 129, 
  ICMP_TYPE_ROUTER_SOL = 133, 
  ICMP_TYPE_ROUTER_ADV = 134, 
  ICMP_TYPE_NEIGHBOR_SOL = 135, 
  ICMP_TYPE_NEIGHBOR_ADV = 136, 
  ICMP_TYPE_RPL_CONTROL = 155, 
  ICMP_NEIGHBOR_HOPLIMIT = 255, 

  ICMP_CODE_HOPLIMIT_EXCEEDED = 0, 
  ICMP_CODE_ASSEMBLY_EXCEEDED = 1
};




struct udp_hdr {
  uint16_t srcport;
  uint16_t dstport;
  uint16_t len;
  uint16_t chksum;
};




enum __nesc_unnamed4312 {
  TCP_FLAG_FIN = 0x1, 
  TCP_FLAG_SYN = 0x2, 
  TCP_FLAG_RST = 0x4, 
  TCP_FLAG_PSH = 0x8, 
  TCP_FLAG_ACK = 0x10, 
  TCP_FLAG_URG = 0x20, 
  TCP_FLAG_ECE = 0x40, 
  TCP_FLAG_CWR = 0x80
};

struct tcp_hdr {
  uint16_t srcport;
  uint16_t dstport;
  uint32_t seqno;
  uint32_t ackno;
  uint8_t offset;
  uint8_t flags;
  uint16_t window;
  uint16_t chksum;
  uint16_t urgent;
};







struct ip6_metadata {
  ieee154_addr_t sender;

  uint8_t lqi;
  uint8_t rssi;
};
#line 244
struct ip6_packet {
  int ip6_inputif;
  struct ip_iovec *ip6_data;
  struct ip6_hdr ip6_hdr;
};






void inet_pton6(char *addr, struct in6_addr *dest);
int inet_ntop6(struct in6_addr *addr, char *buf, int cnt);
# 38 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan.h"
uint8_t *ip_memcpy(uint8_t *dst0, const uint8_t *src0, uint16_t len);


uint16_t ieee154_hashaddr(ieee154_addr_t *addr);




struct packed_lowmsg {
  uint8_t headers;
  uint8_t len;
  uint8_t *data;
};

struct lowpan_reconstruct {
  uint16_t r_tag;
  uint16_t r_source_key;
  uint16_t r_size;
  uint8_t *r_buf;
  uint16_t r_bytes_rcvd;

  uint8_t r_timeout;
  uint16_t *r_app_len;
  uint8_t *r_transport_header;
  struct ip6_metadata r_meta;
};

struct lowpan_ctx {
  uint16_t tag;
  uint16_t offset;
};


enum __nesc_unnamed4313 {
  LOWMSG_MESH_HDR = 1 << 0, 
  LOWMSG_BCAST_HDR = 1 << 1, 
  LOWMSG_FRAG1_HDR = 1 << 2, 
  LOWMSG_FRAGN_HDR = 1 << 3, 
  LOWMSG_NALP = 1 << 4, 
  LOWMSG_IPNH_HDR = 1 << 5, 
  LOWMSG_IPV6 = 1 << 6
};
#line 183
enum __nesc_unnamed4314 {
  T_FAILED1 = 0, 
  T_FAILED2 = 1, 
  T_UNUSED = 2, 
  T_ACTIVE = 3, 
  T_ZOMBIE = 4
};
# 59 "/opt/tinyos-2.x/tos/lib/net/blip/BlipStatistics.h"
#line 40
typedef nx_struct __nesc_unnamed4315 {
  nx_uint16_t sent;
  nx_uint16_t forwarded;
  nx_uint8_t rx_drop;
  nx_uint8_t tx_drop;
  nx_uint8_t fw_drop;
  nx_uint8_t rx_total;
  nx_uint8_t encfail;
} __attribute__((packed)) 
#line 59
ip_statistics_t;







#line 62
typedef nx_struct __nesc_unnamed4316 {
  nx_uint8_t hop_limit;
  nx_uint16_t parent;
  nx_uint16_t parent_metric;
  nx_uint16_t parent_etx;
} __attribute__((packed)) route_statistics_t;










#line 69
typedef nx_struct __nesc_unnamed4317 {
  nx_uint8_t sol_rx;
  nx_uint8_t sol_tx;
  nx_uint8_t adv_rx;
  nx_uint8_t adv_tx;
  nx_uint8_t echo_rx;
  nx_uint8_t echo_tx;
  nx_uint8_t unk_rx;
  nx_uint16_t rx;
} __attribute__((packed)) icmp_statistics_t;






#line 81
typedef nx_struct __nesc_unnamed4318 {
  nx_uint16_t sent;
  nx_uint16_t rcvd;
  nx_uint16_t cksum;
} __attribute__((packed)) udp_statistics_t;
# 38 "UDPReport.h"
nx_struct udp_report {
  nx_uint16_t seqno;
  nx_uint16_t sender;
  nx_uint16_t interval;
  ip_statistics_t ip;
  udp_statistics_t udp;
} __attribute__((packed));
# 43 "/usr/bin/../lib/gcc/avr/4.1.2/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 105
typedef __gnuc_va_list va_list;
# 242 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdio.h" 3
struct __file {
  char *buf;
  unsigned char unget;
  uint8_t flags;
#line 261
  int size;
  int len;
  int (*put)(char arg_0x4095f138, struct __file *arg_0x4095f320);
  int (*get)(struct __file *arg_0x4095f710);
  void *udata;
};
#line 405
struct __file;
#line 417
struct __file;
#line 685
extern int snprintf(char *__s, size_t __n, const char *__fmt, ...);
# 6 "/opt/tinyos-2.x/tos/lib/net/blip/iprouting.h"
enum __nesc_unnamed4319 {
  ROUTE_INVAL_KEY = -1
};





enum __nesc_unnamed4320 {
  ROUTE_IFACE_ALL = 0, 
  ROUTE_IFACE_154 = 1, 
  ROUTE_IFACE_PPP = 2
};

enum __nesc_unnamed4321 {
  ROUTE_DROP_NOROUTE, 
  ROUTE_DROP_HLIM
};

typedef int route_key_t;

struct route_entry {
  int valid : 1;
  route_key_t key;
  struct in6_addr prefix;
  uint8_t prefixlen;
  struct in6_addr next_hop;
  uint8_t ifindex;
};
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeSyncMessageLayer.h"
typedef nx_int32_t timesync_relative_t;


typedef nx_uint32_t timesync_absolute_t;









#line 50
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  nx_union timestamp_t {

    timesync_relative_t relative;
    timesync_absolute_t absolute;
  } __attribute__((packed)) timestamp;
} __attribute__((packed)) timesync_footer_t;
# 36 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/in_cksum.h"
uint16_t msg_cksum(const struct ip6_hdr *iph, 
struct ip_iovec *data, 
uint8_t nxt_hdr);
# 36 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/ip_malloc.h"
typedef uint16_t bndrt_t;

void ip_malloc_init();
void *ip_malloc(uint16_t sz);
void ip_free(void *ptr);
# 31 "/opt/tinyos-2.x/tos/lib/net/blip/table.h"
#line 27
typedef struct __nesc_unnamed4322 {
  void *data;
  uint16_t elt_len;
  uint16_t n_elts;
} table_t;

void table_init(table_t *table, void *data, uint16_t elt_len, uint16_t n_elts);

void table_map(table_t *table, void (*fn)(void *arg_0x41098a58));
# 25 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/icmp6.h"
enum __nesc_unnamed4323 {
  ICMP_EXT_TYPE_PREFIX = 3, 
  ICMP_EXT_TYPE_BEACON = 17
};


enum __nesc_unnamed4324 {

  TRICKLE_JITTER = 10240, 

  TRICKLE_PERIOD = 4096, 


  TRICKLE_MAX = TRICKLE_PERIOD << 5
};
#line 60
#line 54
typedef nx_struct icmp6_echo_hdr {
  nx_uint8_t type;
  nx_uint8_t code;
  nx_uint16_t cksum;
  nx_uint16_t ident;
  nx_uint16_t seqno;
} __attribute__((packed)) icmp_echo_hdr_t;
#line 72
#line 62
typedef nx_struct radv {
  nx_uint8_t type;
  nx_uint8_t code;
  nx_uint16_t cksum;
  nx_uint8_t hlim;
  nx_uint8_t flags;
  nx_uint16_t lifetime;
  nx_uint32_t reachable_time;
  nx_uint32_t retrans_time;
  nx_uint8_t options[0];
} __attribute__((packed)) radv_t;






#line 74
typedef nx_struct rsol {
  nx_uint8_t type;
  nx_uint8_t code;
  nx_uint16_t cksum;
  nx_uint32_t reserved;
} __attribute__((packed)) rsol_t;










#line 81
typedef nx_struct rpfx {
  nx_uint8_t type;
  nx_uint8_t length;
  nx_uint8_t pfx_len;
  nx_uint8_t flags;
  nx_uint32_t valid_lifetime;
  nx_uint32_t preferred_lifetime;
  nx_uint32_t reserved;
  nx_uint8_t prefix[16];
} __attribute__((packed)) pfx_t;







#line 92
typedef nx_struct __nesc_unnamed4325 {
  nx_uint8_t type;
  nx_uint8_t length;
  nx_uint16_t metric;
  nx_uint16_t seqno;
  nx_uint8_t pad[2];
} __attribute__((packed)) rqual_t;

struct icmp_stats {
  uint16_t seq;
  uint8_t ttl;
  uint32_t rtt;
};
# 103 "/opt/tinyos-2.x/tos/lib/net/rpl/RPL.h"
enum __nesc_unnamed4326 {
  RPL_DODAG_METRIC_CONTAINER_TYPE = 2, 
  RPL_DST_PREFIX_TYPE = 3, 
  RPL_DODAG_CONFIG_TYPE = 4, 
  RPL_TARGET_TYPE = 5, 
  RPL_TRANSIT_INFORMATION_TYPE = 6, 
  RPL_MOP_No_Downward = 0, 
  RPL_MOP_No_Storing = 1, 
  RPL_MOP_Storing_No_Multicast = 2, 
  RPL_MOP_Storing_With_Multicast = 3, 

  RPL_DIO_TYPE_METRIC = 2, 
  RPL_DIO_TYPE_ROUTING = 3, 
  RPL_DIO_TYPE_DODAG = 4, 
  RPL_DIO_TYPE_PREFIX = 8, 

  RPL_ROUTE_METRIC_ETX = 7, 

  RPLOF_OCP_OF0 = 0, 
  RPLOF_OCP_MRHOF = 1
};

enum __nesc_unnamed4327 {
  RPL_IFACE = ROUTE_IFACE_154, 
  RPL_HBH_RANK_TYPE = 0x6b
};

struct icmpv6_header_t {
  uint8_t type;
  uint8_t code;
  nx_uint16_t checksum;
} __attribute((packed)) ;

struct dis_base_t {
  struct icmpv6_header_t icmpv6;
  nx_uint16_t reserved;
};

struct rpl_instance_id {

  uint8_t id;
} __attribute((packed)) ;

struct transit_info_option_t {
  uint8_t type;
  uint8_t option_length;
  uint8_t path_sequence;
  uint8_t path_control;
  uint32_t path_lifetime;
  struct in6_addr parent_address;
};

struct target_option_t {
  uint8_t type;
  uint8_t option_length;
  uint8_t reserved;
  uint8_t prefix_length;
  struct in6_addr target_prefix;
};

struct dao_base_t {
  struct icmpv6_header_t icmpv6;
  struct rpl_instance_id instance_id;
  uint16_t k_bit : 1;
  uint16_t d_bit : 1;
  uint16_t flags : 6;
  uint16_t reserved : 8;
  uint8_t DAOsequence;
  struct in6_addr dodagID;
  struct target_option_t target_option;
  struct transit_info_option_t transit_info_option;
} __attribute((packed)) ;

struct dio_base_t {
  struct icmpv6_header_t icmpv6;
  struct rpl_instance_id instance_id;
  nx_uint8_t version;
  nx_uint16_t dagRank;
  uint8_t flags;
  uint8_t dtsn;
  nx_uint16_t reserved;
  struct in6_addr dodagID;
} __attribute((packed)) ;

struct dio_body_t {
  uint8_t type;
  uint8_t container_len;
};


struct dio_dodag_config_t {
  nx_uint8_t type;
  nx_uint8_t length;
  uint8_t flags : 4;
  uint8_t A : 1;
  uint8_t PCS : 3;
  nx_uint8_t DIOIntDoubl;
  nx_uint8_t DIOIntMin;
  nx_uint8_t DIORedun;
  nx_uint16_t MaxRankInc;
  nx_uint16_t MinHopRankInc;
  nx_uint16_t ocp;
  nx_uint8_t reserved;
  nx_uint8_t default_lifetime;
  nx_uint16_t lifetime_unit;
};

struct dio_metric_header_t {
  uint8_t routing_obj_type;
  uint8_t reserved : 2;
  uint8_t R_flag : 1;
  uint8_t G_flag : 1;
  uint8_t A_flag : 2;
  uint8_t O_flag : 1;
  uint8_t C_flag : 1;
  nx_uint16_t object_len;
};

struct dio_etx_t {
  nx_uint16_t etx;
};

struct dio_latency_t {
  float latency;
};

struct dio_prefix_t {
  uint8_t type;
  nx_uint16_t suboption_len;
  uint8_t reserved : 3;
  uint8_t preference : 2;
  uint8_t reserved2 : 3;
  nx_uint32_t lifetime;
  uint8_t prefix_len;
  struct in6_addr prefix;
};

struct rpl_route {
  uint8_t next_header;
  uint8_t hdr_ext_len;
  uint8_t routing_type;
  uint8_t segments_left;
  uint8_t compr : 4;
  uint8_t pad : 4;
  uint8_t reserved;
  uint16_t reserved1;
  struct in6_addr addr[10];
};


uint16_t ROOT_RANK = 1;
enum __nesc_unnamed4328 {
  BASE_RANK = 0, 
  INFINITE_RANK = 0xFFFF, 
  RPL_DEFAULT_INSTANCE = 0, 
  NUMBER_OF_PARENTS = 10, 
  DIS_INTERVAL = 3 * 1024U, 
  DEFAULT_LIFETIME = 1024L * 60 * 20
};


enum __nesc_unnamed4329 {
  ICMPV6_TYPE = 58
};

enum __nesc_unnamed4330 {
  ICMPV6_CODE_DIS = 0x00, 
  ICMPV6_CODE_DIO = 0x01, 
  ICMPV6_CODE_DAO = 0x02
};

enum __nesc_unnamed4331 {
  DIO_BASE_FLAG_GRD = 0, 
  DIO_BASE_FLAG_DA_TRIGGER = 1, 
  DIO_BASE_FLAG_DA_SUPPORT = 2, 
  DIO_BASE_FLAG_PREF_5 = 5, 
  DIO_BASE_FLAG_PREF_6 = 6, 
  DIO_BASE_FLAG_PREF_7 = 7
};

enum __nesc_unnamed4332 {
  DIO_BASE_OPT_PAD1 = 0, 
  DIO_BASE_OPT_PADN = 1, 
  DIO_BASE_OPT_DAG_METRIC = 2, 
  DIO_BASE_OPT_DST_PREFIX = 3, 
  DIO_BASE_OPT_DAG_TIMER_CONFIG = 4
};






#line 293
typedef struct __nesc_unnamed4333 {
  struct in6_addr next_hop;
  uint8_t *data;
} rpl_data_packet_t;





#line 298
typedef struct __nesc_unnamed4334 {
  struct ip6_hdr iphdr;
  uint8_t retries;
  rpl_data_packet_t packet;
} queue_entry_t;





#line 304
typedef struct __nesc_unnamed4335 {
  struct ip6_packet s_pkt;
  struct dao_base_t dao_base;
  struct ip_iovec v[1];
} dao_entry_t;
#line 321
#line 310
typedef struct __nesc_unnamed4336 {
  struct in6_addr nodeID;
  uint8_t interfaceID;
  uint8_t DAOsequence;

  uint32_t DAOlifetime;
  uint8_t routeTag;
  uint8_t RRlength;
  uint8_t prefixLength;
  struct in6_addr prefix;
  uint8_t *RRStack;
} dao_table_entry;






#line 323
typedef struct __nesc_unnamed4337 {
  struct in6_addr nodeID;
  uint16_t successTx;
  uint16_t totalTx;
  uint16_t etx;
} parentTableEntryDAO;




#line 330
typedef struct __nesc_unnamed4338 {
  route_key_t key;
  uint32_t lifetime;
} downwards_table_t;


nx_struct nx_ip6_ext {
  nx_uint8_t ip6e_nxt;
  nx_uint8_t ip6e_len;
} __attribute__((packed));









#line 342
typedef nx_struct __nesc_unnamed4339 {
  nx_struct nx_ip6_ext ip6_ext_outer;
  nx_struct nx_ip6_ext ip6_ext_inner;
  nx_uint8_t bitflag;

  nx_uint8_t instance_id;
  nx_uint16_t senderRank;
} __attribute__((packed)) __attribute((packed))  rpl_data_hdr_t;
#line 371
#line 362
typedef struct __nesc_unnamed4340 {
  struct in6_addr parentIP;
  uint16_t rank;


  uint16_t etx;
  uint16_t etx_hop;

  bool valid;
} parent_t;

struct dio_dest_prefix_t {
  uint8_t type;
  uint16_t length;
  uint8_t *data;
};
# 25 "/opt/tinyos-2.x/tos/lib/net/blip/shell/Shell.h"
enum __nesc_unnamed4341 {
  MAX_REPLY_LEN = 128
};
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef TMilli UDPEchoP__StatusTimer__precision_tag;
typedef ip_statistics_t UDPEchoP__IPStats__stat_str;
typedef udp_statistics_t UDPEchoP__UDPStats__stat_str;
typedef T62khz /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__precision_tag;
typedef uint32_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__size_type;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__precision_tag /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__size_type;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareA__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareB__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__Counter__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__SfdCapture__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareC__size_type;
typedef T62khz /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__precision_tag;
typedef uint32_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__size_type;
typedef /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__precision_tag /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__precision_tag;
typedef /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__size_type;
typedef /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__size_type;
typedef TMilli /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type;
typedef T62khz /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_precision_tag;
typedef uint32_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type;
typedef uint8_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_precision_tag /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_precision_tag /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__size_type;
typedef TMilli /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type;
typedef T62khz /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_precision_tag;
typedef uint32_t /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_precision_tag /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type;
typedef TMilli /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef struct in6_iid IPForwardingEngineP__Pool__t;
typedef TRadio RFA1RadioP__PacketTimeStamp__precision_tag;
typedef uint32_t RFA1RadioP__PacketTimeStamp__size_type;
typedef TRadio /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__precision_tag;
typedef tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type;
typedef TMilli /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__precision_tag;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef TRadio /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__precision_tag;
typedef uint32_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type;
typedef TRadio /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeRadio__precision_tag;
typedef TMilli /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeMilli__precision_tag;
typedef TMilli /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__precision_tag;
typedef uint32_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__size_type;
typedef TMilli /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef uint8_t RFA1DriverLayerP__PacketRSSI__value_type;
typedef TMicro RFA1DriverLayerP__BusyWait__precision_tag;
typedef uint16_t RFA1DriverLayerP__BusyWait__size_type;
typedef TRadio RFA1DriverLayerP__PacketTimeStamp__precision_tag;
typedef uint32_t RFA1DriverLayerP__PacketTimeStamp__size_type;
typedef TRadio RFA1DriverLayerP__LocalTime__precision_tag;
typedef uint8_t RFA1DriverLayerP__PacketTransmitPower__value_type;
typedef uint8_t RFA1DriverLayerP__PacketTimeSyncOffset__value_type;
typedef uint8_t RFA1DriverLayerP__PacketLinkQuality__value_type;
typedef uint32_t RFA1DriverLayerP__SfdCapture__size_type;
typedef TMicro /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag;
typedef uint16_t /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__precision_tag;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__size_type;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__precision_tag;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__size_type;
typedef TMicro /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__to_precision_tag;
typedef uint16_t /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__to_size_type;
typedef TMcu /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__from_size_type;
typedef uint8_t /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__upper_count_type;
typedef /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__from_precision_tag /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__from_size_type /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__size_type;
typedef /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__to_precision_tag /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__Counter__precision_tag;
typedef /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__to_size_type /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__Counter__size_type;
typedef TMcu /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__precision_tag;
typedef uint16_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__size_type;
typedef /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__precision_tag /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__precision_tag;
typedef /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__size_type /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__size_type;
typedef /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__size_type /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__size_type;
typedef uint16_t HplAtmRfa1Timer1P__CompareA__size_type;
typedef uint16_t HplAtmRfa1Timer1P__Capture__size_type;
typedef uint16_t HplAtmRfa1Timer1P__CompareB__size_type;
typedef uint16_t HplAtmRfa1Timer1P__CompareC__size_type;
typedef uint16_t HplAtmRfa1Timer1P__Timer__size_type;
typedef T62khz /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
typedef T62khz /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__precision_tag;
typedef uint32_t /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__size_type;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__precision_tag /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__precision_tag;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__size_type;
typedef /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__size_type;
typedef struct send_info IPDispatchP__SendInfoPool__t;
typedef ip_statistics_t IPDispatchP__BlipStatistics__stat_str;
typedef struct send_entry *IPDispatchP__SendQueue__t;
typedef TMilli IPDispatchP__ExpireTimer__precision_tag;
typedef message_t IPDispatchP__FragPool__t;
typedef struct send_entry IPDispatchP__SendEntryPool__t;
typedef uint8_t RFA1ReadLqiC__SubLqi__value_type;
typedef uint8_t RFA1ReadLqiC__SubRssi__value_type;
typedef message_t /*IPDispatchC.FragPool*/PoolC__0__pool_t;
typedef /*IPDispatchC.FragPool*/PoolC__0__pool_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t;
typedef /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__t;
typedef struct send_entry /*IPDispatchC.SendEntryPool*/PoolC__1__pool_t;
typedef /*IPDispatchC.SendEntryPool*/PoolC__1__pool_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t;
typedef /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__t;
typedef struct send_entry */*IPDispatchC.QueueC*/QueueC__0__queue_t;
typedef /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__t;
typedef struct send_info /*IPDispatchC.SendInfoPool*/PoolC__2__pool_t;
typedef /*IPDispatchC.SendInfoPool*/PoolC__2__pool_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t;
typedef /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__t;
typedef struct in6_iid /*IPStackC.FwdAddrPoolC*/PoolC__3__pool_t;
typedef /*IPStackC.FwdAddrPoolC*/PoolC__3__pool_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t;
typedef /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__t;
typedef udp_statistics_t UdpP__BlipStatistics__stat_str;
typedef TMilli /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__precision_tag;
typedef TMilli /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__precision_tag;
typedef TMilli /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IncreaseVersionTimer__precision_tag;
typedef dao_entry_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__t;
typedef TMilli /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__precision_tag;
typedef dao_entry_t */*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__t;
typedef TMilli /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__precision_tag;
typedef TMilli /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__precision_tag;
typedef dao_entry_t */*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t;
typedef /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__t;
typedef dao_entry_t /*RPLDAORoutingEngineC.SendPoolP*/PoolC__4__pool_t;
typedef /*RPLDAORoutingEngineC.SendPoolP*/PoolC__4__pool_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__pool_t;
typedef /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__pool_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Pool__t;
typedef TMilli ICMPPingP__PingTimer__precision_tag;
typedef TMilli RouteCmdP__Timer__precision_tag;
enum /*RouteCmdC.ShellCommandC*/ShellCommandC__0____nesc_unnamed4342 {
  ShellCommandC__0__CMD_ID = 0U
};
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t McuInitP__Init__init(void );
#line 62
static error_t McuInitP__AdcInit__default__init(void );
#line 62
static error_t MeasureClockC__Init__init(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RFA1RadioOffP__RFA1RadioOff__init(void );
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Stm25pOffP__SpiResource__granted(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t Stm25pOffP__Stm25pOff__init(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__zeroTask__runTask(void );
# 82 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiPacket__default__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__granted(
# 99 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
uint8_t arg_0x404b5010);
# 45 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiByte__write(uint8_t tx);
# 109 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__dataReady(uint8_t data);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__release(
# 95 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
uint8_t arg_0x404b71e8);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__request(
# 95 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
uint8_t arg_0x404b71e8);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__default__granted(
# 95 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
uint8_t arg_0x404b71e8);
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeInput(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x4051ee08);
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x4051ee08);
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128SpiP__McuPowerOverride__lowestState(void );
# 89 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__sleep(void );
#line 83
static void HplAtm128SpiP__SPI__initMaster(void );
#line 122
static void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 113
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 97
static uint8_t HplAtm128SpiP__SPI__read(void );
#line 141
static void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
#line 131
static void HplAtm128SpiP__SPI__setClock(uint8_t speed);




static bool HplAtm128SpiP__SPI__isInterruptPending(void );
#line 125
static void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 103
static void HplAtm128SpiP__SPI__write(uint8_t data);
#line 116
static void HplAtm128SpiP__SPI__enableSpi(bool busOn);
#line 128
static void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405b3948);
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405b25c0);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405b25c0);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405a4eb0);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405a4eb0);
# 90 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );

static bool /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__get(void );
#line 42
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__set(void );
static void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__35__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__35__IO__set(void );
static void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__35__IO__clr(void );




static void /*HplStm25pPinsC.NoPinC*/NoPinC__0__GeneralIO__makeOutput(void );
#line 40
static void /*HplStm25pPinsC.NoPinC*/NoPinC__0__GeneralIO__set(void );
static void /*HplStm25pPinsC.NoPinC*/NoPinC__0__GeneralIO__clr(void );
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialAutoControlP__SplitControl__startDone(error_t error);
#line 138
static void SerialAutoControlP__SplitControl__stopDone(error_t error);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SerialAutoControlP__SoftwareInit__init(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialAutoControlP__turnOff__runTask(void );
#line 75
static void SerialAutoControlP__turnOn__runTask(void );
# 68 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void SerialAutoControlP__ControlInt__fired(void );
# 65 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
static void HplAtmegaPinChange0C__HplAtmegaPinChange__setMask(uint8_t value);
#line 51
static void HplAtmegaPinChange0C__HplAtmegaPinChange__enable(void );
#line 70
static uint8_t HplAtmegaPinChange0C__HplAtmegaPinChange__getPins(void );
#line 62
static uint8_t HplAtmegaPinChange0C__HplAtmegaPinChange__getMask(void );
#line 40
static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__fired(void );
# 68 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__default__fired(
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
uint8_t arg_0x406df850);
# 54 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableFallingEdge(
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
uint8_t arg_0x406df850);
# 53 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableRisingEdge(
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
uint8_t arg_0x406df850);
# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(
# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40738bc0, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40731628, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 147 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
#line 130
static error_t SerialP__SplitControl__stop(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4080d1d0, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4080d1d0, 
# 96 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407f7b58, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4080dcd0, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4080dcd0);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4080dcd0, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void SerialResetP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



SerialResetP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialResetP__sendAck__runTask(void );
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialResetP__SerialPacketInfo__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialResetP__SerialPacketInfo__offset(void );







static uint8_t SerialResetP__SerialPacketInfo__dataLinkLength(message_t *msg, uint8_t upperLen);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 63 "/opt/tinyos-2.x/tos/platforms/ucbase/Leds.nc"
static void LedsP__Leds__led0Off(void );










static void LedsP__Leds__led1On(void );










static void LedsP__Leds__led1Toggle(void );
#line 113
static void LedsP__Leds__led3Off(void );
#line 79
static void LedsP__Leds__led1Off(void );
#line 108
static void LedsP__Leds__led3On(void );
#line 58
static void LedsP__Leds__led0On(void );
#line 96
static void LedsP__Leds__led2Off(void );
#line 91
static void LedsP__Leds__led2On(void );
#line 165
static void LedsP__Leds__set(uint8_t val);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x404208d0);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x404208d0);
# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void UDPEchoP__StatusTimer__fired(void );
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void UDPEchoP__Boot__booted(void );
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
static void UDPEchoP__Status__recvfrom(struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void UDPEchoP__RadioControl__startDone(error_t error);
#line 138
static void UDPEchoP__RadioControl__stopDone(error_t error);
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
static void UDPEchoP__Echo__recvfrom(struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__fired(void );
# 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__size_type t0, /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__size_type dt);
#line 73
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode);
#line 54
static void HplAtmRfa1TimerMacP__CompareA__reset(void );
#line 43
static void HplAtmRfa1TimerMacP__CompareA__set(HplAtmRfa1TimerMacP__CompareA__size_type value);
#line 59
static void HplAtmRfa1TimerMacP__CompareA__start(void );


static void HplAtmRfa1TimerMacP__CompareA__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareB__setMode(uint8_t mode);
#line 54
static void HplAtmRfa1TimerMacP__CompareB__reset(void );
#line 43
static void HplAtmRfa1TimerMacP__CompareB__set(HplAtmRfa1TimerMacP__CompareB__size_type value);
#line 59
static void HplAtmRfa1TimerMacP__CompareB__start(void );


static void HplAtmRfa1TimerMacP__CompareB__stop(void );
# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode);
#line 53
static bool HplAtmRfa1TimerMacP__Counter__test(void );
#line 40
static HplAtmRfa1TimerMacP__Counter__size_type HplAtmRfa1TimerMacP__Counter__get(void );
#line 61
static void HplAtmRfa1TimerMacP__Counter__start(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
static void HplAtmRfa1TimerMacP__SfdCapture__setMode(uint8_t mode);
#line 40
static HplAtmRfa1TimerMacP__SfdCapture__size_type HplAtmRfa1TimerMacP__SfdCapture__get(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareC__default__fired(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__get(void );






static bool /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void );
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type dt);
#line 116
static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm(void );
#line 73
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop(void );




static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 136
static uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ac28f0);
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ac28f0);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ac28f0);
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ac28f0, 
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ac28f0, 
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ac28f0);
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void IPProtocolsP__SubIP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 17
static error_t IPProtocolsP__IP__send(
# 9 "/opt/tinyos-2.x/tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x40b15468, 
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void IPProtocolsP__IP__default__recv(
# 9 "/opt/tinyos-2.x/tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x40b15468, 
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
static bool IPForwardingEngineP__ForwardingEvents__default__approve(
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40b23418, 
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 13
static bool IPForwardingEngineP__ForwardingEvents__default__initiate(
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40b23418, 
# 13 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 39
static void IPForwardingEngineP__ForwardingEvents__default__linkResult(
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40b23418, 
# 39 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct in6_addr *dest, struct send_info *info);
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPForwardingEngineP__IPForward__default__send(
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40b1d510, 
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
struct in6_addr *next_hop, 
struct ip6_packet *msg, 
void *data);







static void IPForwardingEngineP__IPForward__recv(
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40b1d510, 
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 22
static void IPForwardingEngineP__IPForward__sendDone(
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40b1d510, 
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
struct send_info *status);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void IPForwardingEngineP__defaultRouteAddedTask__runTask(void );
# 43 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTableEvents.nc"
static void IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteAdded(void );






static void IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteRemoved(void );
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void IPForwardingEngineP__IPRaw__default__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 56 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static void IPForwardingEngineP__IPAddress__changed(bool valid);
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTable.nc"
static struct route_entry *IPForwardingEngineP__ForwardingTable__getTable(int *size);
#line 18
static struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRoute(const uint8_t *prefix, int prefix_len_bits);
#line 16
static error_t IPForwardingEngineP__ForwardingTable__delRoute(route_key_t key);
#line 10
static route_key_t IPForwardingEngineP__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, 
struct in6_addr *next_hop, uint8_t ifindex);
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t IPForwardingEngineP__IP__send(struct ip6_packet *msg);
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPNeighborDiscoveryP__IPForward__send(struct in6_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static void IPNeighborDiscoveryP__Ieee154Address__changed(void );
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPLower.nc"
static void IPNeighborDiscoveryP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 22
static void IPNeighborDiscoveryP__IPLower__sendDone(struct send_info *status);
# 56 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static void IPNeighborDiscoveryP__IPAddress__changed(bool valid);
# 11 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
static error_t IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(struct in6_addr *addr, ieee154_addr_t *link_addr);




static int IPNeighborDiscoveryP__NeighborDiscovery__matchContext(struct in6_addr *addr, uint8_t *ctx);
static int IPNeighborDiscoveryP__NeighborDiscovery__getContext(uint8_t context, struct in6_addr *ctx);
# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static void IPAddressP__Ieee154Address__changed(void );
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPAddressP__IPAddress__getLLAddr(struct in6_addr *addr);
#line 44
static bool IPAddressP__IPAddress__isLocalAddress(struct in6_addr *addr);
#line 34
static bool IPAddressP__IPAddress__getGlobalAddr(struct in6_addr *addr);




static bool IPAddressP__IPAddress__setSource(struct ip6_hdr *hdr);
#line 52
static error_t IPAddressP__IPAddress__setAddress(struct in6_addr *addr);
#line 50
static bool IPAddressP__IPAddress__isLLAddress(struct in6_addr *addr);
# 5 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static ieee154_panid_t Ieee154AddressP__Ieee154Address__getPanId(void );


static error_t Ieee154AddressP__Ieee154Address__setShortAddr(ieee154_saddr_t addr);
#line 7
static ieee154_laddr_t Ieee154AddressP__Ieee154Address__getExtAddr(void );
#line 6
static ieee154_saddr_t Ieee154AddressP__Ieee154Address__getShortAddr(void );
# 5 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ShortAddressConfig.nc"
static void Ieee154AddressP__ShortAddressConfig__setShortAddrDone(error_t error);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t Ieee154AddressP__Init__init(void );
# 48 "/opt/tinyos-2.x/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void );
# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static am_addr_t RFA1RadioP__ActiveMessageConfig__destination(message_t *msg);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void RFA1RadioP__RadioAlarm__fired(void );
# 3 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ShortAddressConfig.nc"
static void RFA1RadioP__ShortAddressConfig__setShortAddr(uint16_t address);
# 86 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void RFA1RadioP__SoftwareAckConfig__reportChannelError(void );
#line 80
static void RFA1RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool RFA1RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);






static bool RFA1RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);






static bool RFA1RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t RFA1RadioP__SoftwareAckConfig__getAckTimeout(void );





static void RFA1RadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack);
#line 75
static bool RFA1RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void RFA1RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void RFA1RadioP__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t RFA1RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t RFA1RadioP__UniqueConfig__getSender(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t RFA1RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);










static uint16_t RFA1RadioP__RandomCollisionConfig__getMinimumBackoff(void );





static uint16_t RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
# 47 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
static uint8_t RFA1RadioP__RFA1DriverConfig__maxPayloadLength(void );
#line 41
static uint8_t RFA1RadioP__RFA1DriverConfig__headerLength(message_t *msg);
#line 53
static uint8_t RFA1RadioP__RFA1DriverConfig__metadataLength(message_t *msg);





static bool RFA1RadioP__RFA1DriverConfig__requiresRssiCca(message_t *msg);
# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void RFA1BarePacketP__BarePacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t RFA1BarePacketP__BarePacket__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


RFA1BarePacketP__BarePacket__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t RFA1BarePacketP__BarePacket__maxPayloadLength(void );
#line 94
static void RFA1BarePacketP__BarePacket__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x40c8faa8);
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x40c8faa8, 
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
tradio_size timeout);




static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x40c8faa8);
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static bool /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x40c8faa8);
# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x40c8faa8);
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );










static void TaskletC__Tasklet__schedule(void );
#line 72
static void TaskletC__Tasklet__suspend(void );






static void TaskletC__Tasklet__resume(void );
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(
#line 74
message_t * msg);
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40cbd540, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(
# 47 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40cbc5b8, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40cbdf00, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40cbb348, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 68 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );









static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 136
static bool /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(
#line 133
message_t * amsg);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40cbba28, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 55 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );
#line 70
static resource_client_id_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405b25c0);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405b25c0);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Resource__release(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405a4eb0);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Resource__default__granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405a4eb0);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);
# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(
#line 74
message_t * msg);
# 97 "/opt/tinyos-2.x/tos/interfaces/Ieee154Send.nc"
static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 43
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
#line 46
static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__send(message_t *msg);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);





static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);
# 131 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);
#line 120
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 125
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 99
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);
#line 94
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 178
static ieee154_saddr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );
#line 162
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);










static ieee154_panid_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );
#line 185
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 105
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 168
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);
# 80 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool NeighborhoodP__NeighborhoodFlag__get(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x40deece0, 
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);




static void NeighborhoodP__NeighborhoodFlag__set(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x40deece0, 
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);
# 71 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t id);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t NeighborhoodP__Init__init(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__runTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__fired(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__send(message_t *msg);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__payloadLength(message_t *msg);




static void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 65 "/opt/tinyos-2.x/tos/interfaces/PacketLink.nc"
static uint16_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetryDelay(
#line 62
message_t * msg);
#line 46
static void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(
#line 42
message_t * msg, 



uint16_t maxRetries);
#line 59
static uint16_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(
#line 56
message_t * msg);
#line 53
static void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);
#line 71
static bool /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__wasDelivered(
#line 68
message_t * msg);
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 130
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );
# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 75
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );
#line 56
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );
#line 56
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );
#line 56
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
# 59 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);




static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 70 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(
#line 66
message_t * msg);
#line 78
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(
#line 73
message_t * msg, 




/*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type value);
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);




static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40f34088, 
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
#line 40
static bool /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40f34088, 
# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);









static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40f34088, 
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioCCA.nc"
static void RFA1DriverLayerP__RadioCCA__default__done(error_t error);
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static void RFA1DriverLayerP__PacketRSSI__clear(message_t *msg);
#line 46
static RFA1DriverLayerP__PacketRSSI__value_type RFA1DriverLayerP__PacketRSSI__get(message_t *msg);










static void RFA1DriverLayerP__PacketRSSI__set(message_t *msg, RFA1DriverLayerP__PacketRSSI__value_type value);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RFA1DriverLayerP__SoftwareInit__init(void );
# 44 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
static error_t RFA1DriverLayerP__RadioState__turnOff(void );
#line 56
static error_t RFA1DriverLayerP__RadioState__turnOn(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static RFA1DriverLayerP__PacketTransmitPower__value_type RFA1DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 40
static bool RFA1DriverLayerP__PacketTransmitPower__isSet(message_t *msg);
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void RFA1DriverLayerP__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t RFA1DriverLayerP__RadioPacket__payloadLength(message_t *msg);









static uint8_t RFA1DriverLayerP__RadioPacket__maxPayloadLength(void );
#line 54
static void RFA1DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t RFA1DriverLayerP__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t RFA1DriverLayerP__RadioPacket__metadataLength(message_t *msg);
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t RFA1DriverLayerP__McuPowerOverride__lowestState(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static RFA1DriverLayerP__PacketTimeSyncOffset__value_type RFA1DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 40
static bool RFA1DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RFA1DriverLayerP__PlatformInit__init(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static error_t RFA1DriverLayerP__RadioSend__send(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static RFA1DriverLayerP__PacketLinkQuality__value_type RFA1DriverLayerP__PacketLinkQuality__get(message_t *msg);










static void RFA1DriverLayerP__PacketLinkQuality__set(message_t *msg, RFA1DriverLayerP__PacketLinkQuality__value_type value);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void RFA1DriverLayerP__Tasklet__run(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void );
#line 82
static void /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__overflow(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__overflow(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareA__default__fired(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
static void HplAtmRfa1Timer1P__Capture__default__fired(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareB__default__fired(void );
#line 48
static void HplAtmRfa1Timer1P__CompareC__default__fired(void );
# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode);
#line 61
static void HplAtmRfa1Timer1P__Timer__start(void );
# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__fired(void );
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__getNow(void );
#line 66
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__start(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__size_type dt);






static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Init__init(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__overflow(void );
# 102 "/opt/tinyos-2.x/tos/platforms/ucbase/Leds.nc"
static void NoLedsC__Leds__led2Toggle(void );
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t IPDispatchP__SplitControl__start(void );
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void IPDispatchP__Boot__booted(void );
# 34 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/BlipStatistics.nc"
static void IPDispatchP__BlipStatistics__clear(void );
#line 29
static void IPDispatchP__BlipStatistics__get(IPDispatchP__BlipStatistics__stat_str *stats);
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void IPDispatchP__RadioControl__startDone(error_t error);
#line 138
static void IPDispatchP__RadioControl__stopDone(error_t error);
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPLower.nc"
static error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void IPDispatchP__ExpireTimer__fired(void );
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t *IPDispatchP__BareReceive__receive(message_t *msg);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t IPDispatchP__Init__init(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void IPDispatchP__sendTask__runTask(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void IPDispatchP__BareSend__sendDone(message_t *msg, error_t error);
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ReadLqi.nc"
static uint8_t RFA1ReadLqiC__ReadLqi__readRssi(message_t *msg);
#line 6
static uint8_t RFA1ReadLqiC__ReadLqi__readLqi(message_t *msg);
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__t * 


/*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get(void );
#line 89
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(
#line 85
/*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__t * newVal);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init(void );
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__t * 


/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get(void );
#line 89
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(
#line 85
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__t * newVal);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init(void );
# 73 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*IPDispatchC.QueueC*/QueueC__0__Queue__t  

/*IPDispatchC.QueueC*/QueueC__0__Queue__head(void );
#line 90
static error_t /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(
#line 86
/*IPDispatchC.QueueC*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*IPDispatchC.QueueC*/QueueC__0__Queue__t  

/*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*IPDispatchC.QueueC*/QueueC__0__Queue__empty(void );







static uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__size(void );
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__t * 


/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get(void );
#line 89
static error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(
#line 85
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__t * newVal);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init(void );
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t IPStackControlP__SplitControl__start(void );








static void IPStackControlP__SubSplitControl__startDone(error_t error);
#line 138
static void IPStackControlP__SubSplitControl__stopDone(error_t error);
# 56 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static void IPStackControlP__IPAddress__changed(bool valid);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t IPStackControlP__StdControl__default__start(void );
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t ICMPCoreP__ICMP_IP__send(
# 50 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCoreP.nc"
uint8_t arg_0x4129d160, 
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void ICMPCoreP__ICMP_IP__default__recv(
# 50 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCoreP.nc"
uint8_t arg_0x4129d160, 
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 56 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static void ICMPCoreP__IPAddress__changed(bool valid);
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void ICMPCoreP__IP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 14 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPPacket.nc"
static int IPPacketC__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type);

static int IPPacketC__IPPacket__findTLV(struct ip_iovec *header, 
int ext_offset, 
uint8_t type);
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__t * 


/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__get(void );
#line 89
static error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__put(
#line 85
/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__t * newVal);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Init__init(void );
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void NoDhcpC__Boot__booted(void );
# 56 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static void NoDhcpC__IPAddress__changed(bool valid);
# 34 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/BlipStatistics.nc"
static void UdpP__BlipStatistics__clear(void );
#line 29
static void UdpP__BlipStatistics__get(UdpP__BlipStatistics__stat_str *stats);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UdpP__Init__init(void );
# 56 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static void UdpP__IPAddress__changed(bool valid);
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
static error_t UdpP__UDP__sendto(
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x412ef8f0, 
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t UdpP__UDP__bind(
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x412ef8f0, 
# 12 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
uint16_t port);








static error_t UdpP__UDP__sendtov(
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x412ef8f0, 
# 21 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *dest, 
struct ip_iovec *iov);






static void UdpP__UDP__default__recvfrom(
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x412ef8f0, 
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void UdpP__IP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
static bool RPLRankP__ForwardingEvents__approve(struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 13
static bool RPLRankP__ForwardingEvents__initiate(struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 39
static void RPLRankP__ForwardingEvents__linkResult(struct in6_addr *dest, struct send_info *info);
# 56 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static void RPLRankP__IPAddress__changed(bool valid);
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void RPLRankP__IP_DIO__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 98 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRank.nc"
static uint8_t RPLRankP__RPLRankInfo__hasParent(void );
#line 84
static uint16_t RPLRankP__RPLRankInfo__getRank(struct in6_addr *node);
#line 101
static uint16_t RPLRankP__RPLRankInfo__getEtx(void );
#line 99
static bool RPLRankP__RPLRankInfo__isLeaf(void );
#line 94
static void RPLRankP__RPLRankInfo__inconsistencyDetected(void );
#line 113
static error_t RPLRankP__RPLRankInfo__getDefaultRoute(struct in6_addr *next_hop);
# 2 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLParentTable.nc"
static parent_t *RPLRankP__RPLParentTable__get(uint8_t parent_index);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void RPLRankP__newParentSearch__runTask(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t RPLRankP__StdControl__start(void );









static error_t RPLRankP__StdControl__stop(void );
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t RPLRankP__IP_DIO_Filter__send(struct ip6_packet *msg);





static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__runTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__fired(void );
#line 83
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__fired(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__runTask(void );
# 56 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__changed(bool valid);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__runTask(void );
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__runTask(void );
#line 75
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__runTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IncreaseVersionTimer__fired(void );
# 52 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
static uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getMOP(void );
#line 45
static uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getInstanceID(void );







static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDTSN(uint8_t dtsn);
#line 42
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__hasDODAG(void );
#line 56
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__inconsistency(void );
#line 44
static uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getRank(void );









static uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDTSN(void );
#line 49
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDODAGConfig(uint8_t DIOIntDouble, uint8_t DIOIntMin, 
uint8_t DIORedun, uint8_t MaxRankInc, uint8_t MinHopRankInc);
#line 43
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDefaultRoute(struct in6_addr *next_hop);
#line 41
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__start(void );









static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__stop(void );
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__runTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__fired(void );
# 56 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__changed(bool valid);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__runTask(void );
# 42 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngine.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__newParent(void );
#line 41
static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__getStoreState(void );
#line 40
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__startDAO(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__fired(void );
#line 83
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__fired(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__start(void );









static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__stop(void );
# 73 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__t  

/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__head(void );
#line 90
static error_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__enqueue(
#line 86
/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__t  newVal);
#line 65
static uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__maxSize(void );
#line 81
static 
#line 79
/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__t  

/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__dequeue(void );
#line 50
static bool /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__empty(void );







static uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__size(void );
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Pool__t * 


/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Pool__get(void );
#line 89
static error_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Pool__put(
#line 85
/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Pool__t * newVal);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Init__init(void );
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 17
static error_t /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__send(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x414d7be0, 
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x414d7be0, 
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 20 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF.nc"
static bool RPLOF0P__RPLOF__recomputeRoutes(void );
#line 4
static bool RPLOF0P__RPLOF__OCP(uint16_t ocp);


static bool RPLOF0P__RPLOF__objectSupported(uint16_t objectType);






static uint16_t RPLOF0P__RPLOF__getRank(void );
static void RPLOF0P__RPLOF__resetRank(void );






static void RPLOF0P__RPLOF__setMinHopRankIncrease(uint16_t val);
#line 9
static uint16_t RPLOF0P__RPLOF__getObjectValue(void );

static struct in6_addr *RPLOF0P__RPLOF__getParent(void );





static bool RPLOF0P__RPLOF__recalculateRank(void );
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 17
static error_t /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__send(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x414d7be0, 
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x414d7be0, 
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void UDPShellP__Boot__booted(void );
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
static void UDPShellP__UDP__recvfrom(struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
static char *UDPShellP__ShellCommand__getBuffer(
# 42 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x41532868, 
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
uint16_t len);
#line 11
static char *UDPShellP__ShellCommand__default__eval(
# 42 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x41532868, 
# 11 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
int argc, char **argv);
#line 24
static void UDPShellP__ShellCommand__write(
# 42 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x41532868, 
# 24 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
char *str, int len);
# 3 "/opt/tinyos-2.x/tos/lib/net/blip/shell/RegisterShellCommand.nc"
static char *UDPShellP__RegisterShellCommand__default__getCommandName(
# 43 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x41533828);
# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
static void UDPShellP__ICMPPing__pingDone(uint16_t ping_rcv, uint16_t ping_n);
#line 8
static void UDPShellP__ICMPPing__pingReply(struct in6_addr *source, struct icmp_stats *stats);
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void ICMPPingP__IP_ECHO__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 56 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static void ICMPPingP__IPAddress__changed(bool valid);
# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
static void ICMPPingP__ICMPPing__default__pingDone(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x41541030, 
# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
uint16_t ping_rcv, uint16_t ping_n);
#line 8
static void ICMPPingP__ICMPPing__default__pingReply(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x41541030, 
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
struct in6_addr *source, struct icmp_stats *stats);
#line 6
static error_t ICMPPingP__ICMPPing__ping(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x41541030, 
# 6 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
struct in6_addr *target, uint16_t period, uint16_t n);
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void ICMPPingP__PingTimer__fired(void );
# 11 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
static char *RouteCmdP__ShellCommand__eval(int argc, char **argv);
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void RouteCmdP__Timer__fired(void );
# 3 "/opt/tinyos-2.x/tos/lib/net/blip/shell/RegisterShellCommand.nc"
static char */*RouteCmdC.ShellCommandC.ShellCommandP*/ShellCommandP__0__RegisterShellCommand__getCommandName(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__Stm25pInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
#line 62
static error_t PlatformP__McuInit__init(void );
# 52 "/opt/tinyos-2.x/tos/platforms/ucbase/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t McuInitP__RadioInit__init(void );
#line 62
static error_t McuInitP__AdcInit__init(void );
#line 62
static error_t McuInitP__MeasureClock__init(void );
#line 62
static error_t McuInitP__TimerInit__init(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__systemClockInit(void );
#line 77
static inline error_t McuInitP__Init__init(void );
#line 101
static inline error_t McuInitP__AdcInit__default__init(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 135
enum MeasureClockC____nesc_unnamed4343 {
  MeasureClockC__MAGIC = 31250 / (16 / 16)
};
#line 172
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 38 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioOffP.nc"
static inline error_t RFA1RadioOffP__RFA1RadioOff__init(void );
# 45 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t Stm25pOffP__SpiByte__write(uint8_t tx);
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void Stm25pOffP__CSN__makeOutput(void );
#line 40
static void Stm25pOffP__CSN__set(void );
static void Stm25pOffP__CSN__clr(void );
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Stm25pOffP__SpiResource__release(void );
#line 88
static error_t Stm25pOffP__SpiResource__request(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void Stm25pOffP__Hold__makeOutput(void );
#line 40
static void Stm25pOffP__Hold__set(void );
static void Stm25pOffP__Hold__clr(void );
# 44 "/opt/tinyos-2.x/tos/chips/stm25p/Stm25pOffP.nc"
static inline error_t Stm25pOffP__Stm25pOff__init(void );





static inline void Stm25pOffP__SpiResource__granted(void );
# 82 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__release(
# 99 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
uint8_t arg_0x404b5010);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__request(
# 99 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
uint8_t arg_0x404b5010);
# 128 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__setClockPhase(bool sampleOnTrailing);
#line 83
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__initMaster(void );
#line 113
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__enableInterrupt(bool enabled);
#line 97
static uint8_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__read(void );
#line 141
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__setMasterDoubleSpeed(bool on);
#line 131
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__setClock(uint8_t speed);




static bool /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__isInterruptPending(void );
#line 125
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__setClockPolarity(bool highWhenIdle);
#line 103
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__write(uint8_t data);
#line 116
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__enableSpi(bool busOn);
#line 89
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__sleep(void );
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__granted(
# 95 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
uint8_t arg_0x404b71e8);
# 90 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ArbiterInfo__inUse(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__McuPowerState__update(void );
# 290 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
enum /*Atm128SpiC.SpiMaster*/Atm128SpiP__0____nesc_unnamed4344 {
#line 290
  Atm128SpiP__0__zeroTask = 0U
};
#line 290
typedef int /*Atm128SpiC.SpiMaster*/Atm128SpiP__0____nesc_sillytask_zeroTask[/*Atm128SpiC.SpiMaster*/Atm128SpiP__0__zeroTask];
#line 105
uint16_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__len;
uint8_t * /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__txBuffer;
uint8_t * /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__rxBuffer;
uint16_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__pos;

enum /*Atm128SpiC.SpiMaster*/Atm128SpiP__0____nesc_unnamed4345 {
  Atm128SpiP__0__SPI_IDLE, 
  Atm128SpiP__0__SPI_BUSY, 
  Atm128SpiP__0__SPI_ATOMIC_SIZE = 10
};










static inline void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__startSpi(void );
#line 161
static inline void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__stopSpi(void );







static uint8_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiByte__write(uint8_t tx);
#line 245
static inline error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__sendNextPart(void );
#line 290
static inline void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__zeroTask__runTask(void );
#line 345
static inline 
#line 344
void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success);

static inline void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__dataReady(uint8_t data);
#line 396
static inline error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__request(uint8_t id);








static inline error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__release(uint8_t id);
#line 419
static inline void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__granted(uint8_t id);



static inline void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__default__granted(uint8_t id);
# 54 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeInput(uint8_t bit);

static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(uint8_t bit);
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MISO__makeInput(void );

static void HplAtm128SpiP__SCK__makeOutput(void );
#line 46
static void HplAtm128SpiP__SS__makeOutput(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP__Mcu__update(void );
# 109 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__dataReady(uint8_t data);
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MOSI__makeOutput(void );
# 97 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void );
#line 113
static inline void HplAtm128SpiP__SPI__sleep(void );


static inline uint8_t HplAtm128SpiP__SPI__read(void );
static inline void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_24(void ) __attribute((signal))   ;




static inline bool HplAtm128SpiP__SPI__isInterruptPending(void );







static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 148
static void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 174
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 187
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 201
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 218
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 231
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);








static inline mcu_power_t HplAtm128SpiP__McuPowerOverride__lowestState(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 58 "/opt/tinyos-2.x/tos/chips/atm128rfa1/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };


int8_t McuSleepC__powerState = -1;

static inline void McuSleepC__McuSleep__sleep(void );
#line 95
static inline void McuSleepC__McuPowerState__update(void );
# 49 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0____nesc_unnamed4346 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405b3948);
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405b25c0);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405b25c0);
# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405a4eb0);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4347 {
#line 69
  SimpleArbiterP__0__grantedTask = 1U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4348 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4349 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;



static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 97
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 124
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
#line 155
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
#line 167
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );
static inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__35__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__35__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__35__IO__makeOutput(void );
# 23 "/opt/tinyos-2.x/tos/system/NoPinC.nc"
static inline void /*HplStm25pPinsC.NoPinC*/NoPinC__0__GeneralIO__set(void );
static inline void /*HplStm25pPinsC.NoPinC*/NoPinC__0__GeneralIO__clr(void );


static inline void /*HplStm25pPinsC.NoPinC*/NoPinC__0__GeneralIO__makeOutput(void );
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialAutoControlP__SplitControl__start(void );
#line 130
static error_t SerialAutoControlP__SplitControl__stop(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialAutoControlP__turnOff__postTask(void );
#line 67
static error_t SerialAutoControlP__turnOn__postTask(void );
# 54 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t SerialAutoControlP__ControlInt__enableFallingEdge(void );
#line 53
static error_t SerialAutoControlP__ControlInt__enableRisingEdge(void );
# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool SerialAutoControlP__ControlPin__get(void );
# 46 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialAutoControlP.nc"
enum SerialAutoControlP____nesc_unnamed4350 {
#line 46
  SerialAutoControlP__turnOn = 2U
};
#line 46
typedef int SerialAutoControlP____nesc_sillytask_turnOn[SerialAutoControlP__turnOn];










enum SerialAutoControlP____nesc_unnamed4351 {
#line 57
  SerialAutoControlP__turnOff = 3U
};
#line 57
typedef int SerialAutoControlP____nesc_sillytask_turnOff[SerialAutoControlP__turnOff];
#line 44
bool SerialAutoControlP__isSerialOn;

static inline void SerialAutoControlP__turnOn__runTask(void );










static inline void SerialAutoControlP__turnOff__runTask(void );










static inline void SerialAutoControlP__SplitControl__startDone(error_t err);




static inline void SerialAutoControlP__SplitControl__stopDone(error_t err);





static inline error_t SerialAutoControlP__SoftwareInit__init(void );
#line 92
static void SerialAutoControlP__ControlInt__fired(void );
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
static void HplAtmegaPinChange0C__HplAtmegaPinChange__fired(void );
# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange0C.nc"
static inline void HplAtmegaPinChange0C__HplAtmegaPinChange__enable(void );
#line 76
static inline uint8_t HplAtmegaPinChange0C__HplAtmegaPinChange__getMask(void );




static inline void HplAtmegaPinChange0C__HplAtmegaPinChange__setMask(uint8_t value);






static inline uint8_t HplAtmegaPinChange0C__HplAtmegaPinChange__getPins(void );




void __vector_9(void ) __attribute((signal))   ;
# 65 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__setMask(uint8_t value);
#line 51
static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__enable(void );
#line 70
static uint8_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getPins(void );
#line 62
static uint8_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getMask(void );
# 68 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
uint8_t arg_0x406df850);


uint8_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__isFalling;


static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableRisingEdge(uint8_t pin);








static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableFallingEdge(uint8_t pin);
#line 88
static inline void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__fired(void );
#line 113
static inline void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__default__fired(uint8_t pin);
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40738bc0, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40731628, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);
#line 101
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(uint8_t id, message_t *msg, error_t result);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 172
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4352 {
#line 191
  SerialP__RunTx = 4U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4353 {
#line 322
  SerialP__startDoneTask = 5U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4354 {
#line 332
  SerialP__stopDoneTask = 6U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4355 {
#line 341
  SerialP__defaultSerialFlushTask = 7U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4356 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4357 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4358 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4359 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4360 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4361 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4362 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4363 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 374
static error_t SerialP__SplitControl__stop(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 518
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 559
static inline void SerialP__RunTx__runTask(void );
#line 668
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4080d1d0, 
# 96 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407f7b58, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4080dcd0, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4080dcd0);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4080dcd0, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4364 {
#line 158
  SerialDispatcherP__0__signalSendDone = 8U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4365 {
#line 275
  SerialDispatcherP__0__receiveTask = 9U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4366 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4367 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4368 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4369 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 132 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 152
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 209
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_25(void ) __attribute((signal))   ;





void __vector_27(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 313
void __vector_36(void ) __attribute((signal))   ;




void __vector_38(void ) __attribute((interrupt))   ;



static inline mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void );








static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t SerialResetP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 165 "/opt/tinyos-2.x/tos/platforms/ucbase/Leds.nc"
static void SerialResetP__Leds__set(uint8_t val);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialResetP__sendAck__postTask(void );
# 61 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialResetP.nc"
enum SerialResetP____nesc_unnamed4370 {
#line 61
  SerialResetP__sendAck = 10U
};
#line 61
typedef int SerialResetP____nesc_sillytask_sendAck[SerialResetP__sendAck];
#line 59
message_t *SerialResetP__sendMsg;

static inline void SerialResetP__sendAck__runTask(void );
#line 73
static inline void SerialResetP__Send__sendDone(message_t *msg, error_t error);
#line 89
static inline message_t *SerialResetP__Receive__receive(message_t *msg, void *payload, uint8_t len);
#line 102
static inline uint8_t SerialResetP__SerialPacketInfo__offset(void );




static inline uint8_t SerialResetP__SerialPacketInfo__dataLinkLength(message_t *msg, uint8_t upperLen);




static inline uint8_t SerialResetP__SerialPacketInfo__upperLength(message_t *msg, uint8_t dataLinkLen);
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );




static void LedsP__Led3__makeOutput(void );
#line 40
static void LedsP__Led3__set(void );
static void LedsP__Led3__clr(void );
static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );




static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 57 "/opt/tinyos-2.x/tos/platforms/ucbase/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 78
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );









static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );




static inline void LedsP__Leds__led1Toggle(void );




static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );









static inline void LedsP__Leds__led3On(void );




static inline void LedsP__Leds__led3Off(void );
#line 167
static inline void LedsP__Leds__set(uint8_t val);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x404208d0);
# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4371 {

  SchedulerBasicP__NUM_TASKS = 29U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void UDPEchoP__StatusTimer__startPeriodic(uint32_t dt);








static void UDPEchoP__StatusTimer__startOneShot(uint32_t dt);
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
static error_t UDPEchoP__Status__sendto(struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t UDPEchoP__Status__bind(uint16_t port);
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t UDPEchoP__RadioControl__start(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t UDPEchoP__Random__rand16(void );
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
static error_t UDPEchoP__Echo__sendto(struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t UDPEchoP__Echo__bind(uint16_t port);
# 34 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/BlipStatistics.nc"
static void UDPEchoP__IPStats__clear(void );
#line 29
static void UDPEchoP__IPStats__get(UDPEchoP__IPStats__stat_str *stats);
# 85 "/opt/tinyos-2.x/tos/platforms/ucbase/Leds.nc"
static void UDPEchoP__Leds__led1Toggle(void );
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/BlipStatistics.nc"
static void UDPEchoP__UDPStats__get(UDPEchoP__UDPStats__stat_str *stats);
# 64 "UDPEchoP.nc"
bool UDPEchoP__timerStarted;
nx_struct udp_report UDPEchoP__stats;
struct sockaddr_in6 UDPEchoP__route_dest;

static inline void UDPEchoP__Boot__booted(void );
#line 86
static inline void UDPEchoP__RadioControl__startDone(error_t e);


static inline void UDPEchoP__RadioControl__stopDone(error_t e);



static inline void UDPEchoP__Status__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta);



static inline void UDPEchoP__Echo__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta);
#line 113
static inline void UDPEchoP__StatusTimer__fired(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__setMode(uint8_t mode);
#line 54
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__reset(void );
#line 43
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__set(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__size_type value);
#line 59
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__start(void );


static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__fired(void );
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__get(void );
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline error_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init(void );










static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__fired(void );





static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__stop(void );










static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__setAlarm(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type time);






static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type nt0, /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type ndt);
#line 125
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareA__fired(void );
#line 48
static void HplAtmRfa1TimerMacP__CompareB__fired(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void HplAtmRfa1TimerMacP__Counter__overflow(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtmRfa1TimerMacP__McuPowerState__update(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareC__fired(void );
# 67 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
#line 57
typedef union HplAtmRfa1TimerMacP__reg32_t {

  uint32_t full;
  struct  {

    uint8_t ll;
    uint8_t lh;
    uint8_t hl;
    uint8_t hh;
  } ;
} HplAtmRfa1TimerMacP__reg32_t;



static uint32_t HplAtmRfa1TimerMacP__Counter__get(void );
#line 108
void __vector_68(void ) __attribute((signal))   ;

static inline bool HplAtmRfa1TimerMacP__Counter__test(void );





static inline void HplAtmRfa1TimerMacP__Counter__start(void );
#line 130
static inline void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode);
#line 166
static inline void HplAtmRfa1TimerMacP__CompareA__set(uint32_t value);
#line 185
void __vector_65(void ) __attribute((signal))   ;



static inline void HplAtmRfa1TimerMacP__CompareA__reset(void );



static inline void HplAtmRfa1TimerMacP__CompareA__start(void );






static inline void HplAtmRfa1TimerMacP__CompareA__stop(void );










static inline void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode);
#line 246
static inline void HplAtmRfa1TimerMacP__CompareB__set(uint32_t value);
#line 265
void __vector_66(void ) __attribute((signal))   ;



static inline void HplAtmRfa1TimerMacP__CompareB__reset(void );



static inline void HplAtmRfa1TimerMacP__CompareB__start(void );






static inline void HplAtmRfa1TimerMacP__CompareB__stop(void );










static inline void HplAtmRfa1TimerMacP__CompareB__setMode(uint8_t mode);
#line 343
static inline void HplAtmRfa1TimerMacP__CompareC__default__fired(void );

void __vector_67(void ) __attribute((signal))   ;
#line 391
static inline uint32_t HplAtmRfa1TimerMacP__SfdCapture__get(void );
#line 421
static inline void HplAtmRfa1TimerMacP__SfdCapture__setMode(uint8_t mode);
#line 437
static inline mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow(void );
# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__setMode(uint8_t mode);
#line 53
static bool /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__test(void );
#line 40
static /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__get(void );
#line 61
static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__start(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void );







static inline /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__get(void );






static inline void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow(void );




static inline bool /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper;

enum /*CounterMilli32C.TransformCounterC*/TransformCounterC__0____nesc_unnamed4372 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 6, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type ) - /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type ) + 6, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type )2 << (/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get(void );
# 77 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0;
/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;

enum /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0____nesc_unnamed4373 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type ) - 1 - 6, 
  TransformAlarmC__0__MAX_DELAY = (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type )1 << /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void );




static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm(void );










static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop(void );




static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm(void );
#line 147
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type dt);
#line 162
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4374 {
#line 74
  AlarmToTimerC__0__fired = 11U
};
#line 74
typedef int /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40ac28f0);
#line 71
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4375 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 12U
};
#line 71
typedef int /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4376 {

  VirtualizeTimerC__0__NUM_TIMERS = 11U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4377 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 189
static inline uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);
#line 204
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t IPProtocolsP__SubIP__send(struct ip6_packet *msg);
# 14 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPPacket.nc"
static int IPProtocolsP__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type);
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void IPProtocolsP__IP__recv(
# 9 "/opt/tinyos-2.x/tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x40b15468, 
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/IPProtocolsP.nc"
static inline void IPProtocolsP__SubIP__recv(struct ip6_hdr *iph, 
void *payload, 
size_t len, 
struct ip6_metadata *meta);
#line 48
static error_t IPProtocolsP__IP__send(uint8_t nxt_hdr, struct ip6_packet *msg);







static inline void IPProtocolsP__IP__default__recv(uint8_t nxt_hdr, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
static bool IPForwardingEngineP__ForwardingEvents__approve(
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40b23418, 
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 13
static bool IPForwardingEngineP__ForwardingEvents__initiate(
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40b23418, 
# 13 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 39
static void IPForwardingEngineP__ForwardingEvents__linkResult(
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40b23418, 
# 39 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct in6_addr *dest, struct send_info *info);
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPForwardingEngineP__IPForward__send(
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40b1d510, 
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
struct in6_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
IPForwardingEngineP__Pool__t * 


IPForwardingEngineP__Pool__get(void );
#line 89
static error_t IPForwardingEngineP__Pool__put(
#line 85
IPForwardingEngineP__Pool__t * newVal);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t IPForwardingEngineP__defaultRouteAddedTask__postTask(void );
# 43 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTableEvents.nc"
static void IPForwardingEngineP__ForwardingTableEvents__defaultRouteAdded(void );






static void IPForwardingEngineP__ForwardingTableEvents__defaultRouteRemoved(void );
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void IPForwardingEngineP__IPRaw__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 44 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPForwardingEngineP__IPAddress__isLocalAddress(struct in6_addr *addr);





static bool IPForwardingEngineP__IPAddress__isLLAddress(struct in6_addr *addr);
# 14 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPPacket.nc"
static int IPForwardingEngineP__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type);
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void IPForwardingEngineP__IP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 96 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
enum IPForwardingEngineP____nesc_unnamed4378 {
#line 96
  IPForwardingEngineP__defaultRouteAddedTask = 13U
};
#line 96
typedef int IPForwardingEngineP____nesc_sillytask_defaultRouteAddedTask[IPForwardingEngineP__defaultRouteAddedTask];
#line 49
struct route_entry IPForwardingEngineP__routing_table[20];

route_key_t IPForwardingEngineP__last_key = 1;





static inline int IPForwardingEngineP__alloc_key(void );
#line 69
static inline struct route_entry *IPForwardingEngineP__alloc_entry(int pfxlen);
#line 96
static inline void IPForwardingEngineP__defaultRouteAddedTask__runTask(void );



static route_key_t IPForwardingEngineP__ForwardingTable__addRoute(const uint8_t *prefix, 
int prefix_len_bits, 
struct in6_addr *next_hop, 
uint8_t ifindex);
#line 130
static error_t IPForwardingEngineP__ForwardingTable__delRoute(route_key_t key);
#line 154
static struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRoute(const uint8_t *prefix, 
int prefix_len_bits);
#line 179
static inline struct route_entry *IPForwardingEngineP__ForwardingTable__getTable(int *n);




static error_t IPForwardingEngineP__do_send(uint8_t ifindex, struct in6_addr *next, struct ip6_packet *pkt);










static inline error_t IPForwardingEngineP__IP__send(struct ip6_packet *pkt);
#line 248
static inline void IPForwardingEngineP__IPForward__recv(uint8_t ifindex, struct ip6_hdr *iph, void *payload, 
struct ip6_metadata *meta);
#line 314
static void IPForwardingEngineP__IPForward__sendDone(uint8_t ifindex, struct send_info *status);
#line 345
static inline bool IPForwardingEngineP__ForwardingEvents__default__approve(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop);


static inline bool IPForwardingEngineP__ForwardingEvents__default__initiate(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop);


static inline void IPForwardingEngineP__ForwardingEvents__default__linkResult(uint8_t idx, struct in6_addr *host, 
struct send_info *info);

static inline error_t IPForwardingEngineP__IPForward__default__send(uint8_t ifindex, struct in6_addr *next_hop, 
struct ip6_packet *pkt, 
void *data);







static inline void IPForwardingEngineP__IPRaw__default__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);

static inline void IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteAdded(void );
static inline void IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteRemoved(void );

static inline void IPForwardingEngineP__IPAddress__changed(bool global_valid);
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
static void IPNeighborDiscoveryP__IPForward__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 22
static void IPNeighborDiscoveryP__IPForward__sendDone(struct send_info *status);
# 5 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static ieee154_panid_t IPNeighborDiscoveryP__Ieee154Address__getPanId(void );
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPLower.nc"
static error_t IPNeighborDiscoveryP__IPLower__send(struct ieee154_frame_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPNeighborDiscoveryP__IPAddress__getLLAddr(struct in6_addr *addr);




static bool IPNeighborDiscoveryP__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 32 "/opt/tinyos-2.x/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static int IPNeighborDiscoveryP__NeighborDiscovery__matchContext(struct in6_addr *addr, 
uint8_t *ctx);










static inline int IPNeighborDiscoveryP__NeighborDiscovery__getContext(uint8_t context, 
struct in6_addr *ctx);
#line 58
static error_t IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(struct in6_addr *addr, 
ieee154_addr_t *link_addr);
#line 95
static error_t IPNeighborDiscoveryP__IPForward__send(struct in6_addr *next, struct ip6_packet *msg, void *ptr);
#line 124
static inline void IPNeighborDiscoveryP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);



static inline void IPNeighborDiscoveryP__IPLower__sendDone(struct send_info *status);



static inline void IPNeighborDiscoveryP__Ieee154Address__changed(void );
static inline void IPNeighborDiscoveryP__IPAddress__changed(bool global_valid);
# 5 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static ieee154_panid_t IPAddressP__Ieee154Address__getPanId(void );


static error_t IPAddressP__Ieee154Address__setShortAddr(ieee154_saddr_t addr);
#line 7
static ieee154_laddr_t IPAddressP__Ieee154Address__getExtAddr(void );
#line 6
static ieee154_saddr_t IPAddressP__Ieee154Address__getShortAddr(void );
# 56 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static void IPAddressP__IPAddress__changed(bool valid);
# 36 "/opt/tinyos-2.x/tos/lib/net/blip/IPAddressP.nc"
bool IPAddressP__m_valid_addr = FALSE;
#line 36
bool IPAddressP__m_short_addr = TRUE;






struct in6_addr IPAddressP__m_addr;

static bool IPAddressP__IPAddress__getLLAddr(struct in6_addr *addr);
#line 68
static inline bool IPAddressP__IPAddress__getGlobalAddr(struct in6_addr *addr);




static bool IPAddressP__IPAddress__setSource(struct ip6_hdr *hdr);
#line 95
static bool IPAddressP__IPAddress__isLocalAddress(struct in6_addr *addr);
#line 136
static inline bool IPAddressP__IPAddress__isLLAddress(struct in6_addr *addr);







static inline error_t IPAddressP__IPAddress__setAddress(struct in6_addr *addr);
#line 174
static inline void IPAddressP__Ieee154Address__changed(void );
# 48 "/opt/tinyos-2.x/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t Ieee154AddressP__LocalIeeeEui64__getId(void );
# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static void Ieee154AddressP__Ieee154Address__changed(void );
# 3 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ShortAddressConfig.nc"
static void Ieee154AddressP__ShortAddressConfig__setShortAddr(uint16_t address);
# 19 "/opt/tinyos-2.x/tos/lib/net/blip/Ieee154AddressP.nc"
ieee154_saddr_t Ieee154AddressP__m_saddr;
ieee154_panid_t Ieee154AddressP__m_panid;

static inline error_t Ieee154AddressP__Init__init(void );





static inline ieee154_panid_t Ieee154AddressP__Ieee154Address__getPanId(void );


static inline ieee154_saddr_t Ieee154AddressP__Ieee154Address__getShortAddr(void );


static ieee154_laddr_t Ieee154AddressP__Ieee154Address__getExtAddr(void );
#line 48
static error_t Ieee154AddressP__Ieee154Address__setShortAddr(ieee154_saddr_t addr);
#line 67
static inline void Ieee154AddressP__ShortAddressConfig__setShortAddrDone(error_t error);
# 42 "/opt/tinyos-2.x/tos/platforms/ucbase/LocalIeeeEui64C.nc"
static inline ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void );
# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size RFA1RadioP__RadioAlarm__getNow(void );
# 5 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ShortAddressConfig.nc"
static void RFA1RadioP__ShortAddressConfig__setShortAddrDone(error_t error);
# 120 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint8_t RFA1RadioP__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool RFA1RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 125
static void RFA1RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void RFA1RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t RFA1RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool RFA1RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 94
static bool RFA1RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 162
static bool RFA1RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg);
#line 105
static void RFA1RadioP__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 168
static bool RFA1RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t RFA1RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 76 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__headerLength(message_t *msg);




static inline uint8_t RFA1RadioP__RFA1DriverConfig__maxPayloadLength(void );




static inline uint8_t RFA1RadioP__RFA1DriverConfig__metadataLength(message_t *msg);




static inline bool RFA1RadioP__RFA1DriverConfig__requiresRssiCca(message_t *msg);






static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);




static inline bool RFA1RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);




static inline bool RFA1RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);




static inline void RFA1RadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack);




static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);




static inline void RFA1RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);








static inline uint16_t RFA1RadioP__SoftwareAckConfig__getAckTimeout(void );




static inline void RFA1RadioP__SoftwareAckConfig__reportChannelError(void );








static inline uint8_t RFA1RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static inline void RFA1RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn);




static inline am_addr_t RFA1RadioP__UniqueConfig__getSender(message_t *msg);




static inline void RFA1RadioP__UniqueConfig__reportChannelError(void );








static inline am_addr_t RFA1RadioP__ActiveMessageConfig__destination(message_t *msg);
#line 237
static inline void RFA1RadioP__ShortAddressConfig__setShortAddr(uint16_t address);
#line 255
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getMinimumBackoff(void );








static inline uint16_t RFA1RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);








static inline uint16_t RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);






static inline uint16_t RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
#line 296
static inline void RFA1RadioP__RadioAlarm__fired(void );
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void RFA1BarePacketP__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t RFA1BarePacketP__RadioPacket__payloadLength(message_t *msg);









static uint8_t RFA1BarePacketP__RadioPacket__maxPayloadLength(void );
#line 54
static void RFA1BarePacketP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
# 8 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1BarePacketP.nc"
static inline void RFA1BarePacketP__BarePacket__clear(message_t *msg);




static inline uint8_t RFA1BarePacketP__BarePacket__payloadLength(message_t *msg);





static inline void RFA1BarePacketP__BarePacket__setPayloadLength(message_t *msg, uint8_t len);





static inline uint8_t RFA1BarePacketP__BarePacket__maxPayloadLength(void );




static void *RFA1BarePacketP__BarePacket__getPayload(message_t *msg, uint8_t len);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x40c8faa8);
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void );
#line 66
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt);






static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop(void );
# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void );
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state;
enum /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0____nesc_unnamed4379 {

  RadioAlarmP__0__STATE_READY = 0, 
  RadioAlarmP__0__STATE_WAIT = 1, 
  RadioAlarmP__0__STATE_FIRED = 2
};

uint8_t /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm;

static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );










static __inline tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id);




static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );








static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id);



static __inline bool /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id);




static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout);








static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void TaskletC__Tasklet__run(void );
# 72 "/opt/tinyos-2.x/tos/lib/rfxlink/util/TaskletC.nc"
uint8_t TaskletC__state;

static void TaskletC__doit(void );
#line 94
static __inline void TaskletC__Tasklet__suspend(void );




static void TaskletC__Tasklet__resume(void );
#line 112
static void TaskletC__Tasklet__schedule(void );
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40cbd540, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(
# 47 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40cbc5b8, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg);
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void );
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40cbdf00, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40cbb348, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40cbba28, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline activemessage_header_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg);




static inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg);
#line 98
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);









static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(am_id_t id, message_t *msg, error_t error);
#line 128
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
#line 141
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );









static __inline bool /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg);





static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg);
#line 199
static __inline am_id_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg);
#line 225
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);
#line 262
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg);
# 62 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 93
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 106
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error);
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
message_t */*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending;
#line 68
static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );









static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result);
# 49 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1____nesc_unnamed4380 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__qHead = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__qTail = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );







static inline resource_client_id_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405b25c0);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405b25c0);
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static bool /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Queue__dequeue(void );
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Resource__granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405a4eb0);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__grantedTask__postTask(void );
# 69 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1____nesc_unnamed4381 {
#line 69
  SimpleArbiterP__1__grantedTask = 14U
};
#line 69
typedef int /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1____nesc_sillytask_grantedTask[/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__grantedTask];
#line 62
enum /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1____nesc_unnamed4382 {
#line 62
  SimpleArbiterP__1__RES_IDLE = 0, SimpleArbiterP__1__RES_GRANTING = 1, SimpleArbiterP__1__RES_BUSY = 2
};
#line 63
enum /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1____nesc_unnamed4383 {
#line 63
  SimpleArbiterP__1__NO_RES = 0xFF
};
uint8_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__RES_IDLE;
uint8_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__NO_RES;
uint8_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__reqResId;
#line 97
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Resource__release(uint8_t id);
#line 155
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void );









static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Resource__default__granted(uint8_t id);





static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__configure(uint8_t id);

static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg);
# 185 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static bool /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg);
# 97 "/opt/tinyos-2.x/tos/interfaces/Ieee154Send.nc"
static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg);
#line 68
static inline uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg);
#line 127
static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);




static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);









static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);








static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg);
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error);
#line 54
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg);
# 81 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__send(message_t *msg);









static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 127
static inline network_header_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg);




static inline error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
#line 145
enum /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0____nesc_unnamed4384 {


  TinyosNetworkLayerC__0__PAYLOAD_OFFSET = sizeof(network_header_t )
};




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);
#line 214
static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void );
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg);




static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg);
# 57 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
enum /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0____nesc_unnamed4385 {

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK = (((IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE = (((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE = (1 << IEEE154_FCF_ACK_REQ)
   | (1 << IEEE154_FCF_FRAME_PENDING), 

  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH = 3, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK = IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE = IEEE154_TYPE_ACK << IEEE154_FCF_FRAME_TYPE
};

static inline ieee154_simple_header_t */*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg);
#line 92
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 104
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);










static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);








static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);







static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 158
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);




static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);









static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);









static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);









static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);






static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);






static inline ieee154_saddr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );




static inline ieee154_panid_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );




static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 282
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx);




static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 71 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg);
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg);
# 61 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber;

static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );





static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);










static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);




static inline bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);





uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[5];

static inline message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 116
static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 80 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
static void NeighborhoodP__Neighborhood__evicted(uint8_t idx);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
am_addr_t NeighborhoodP__nodes[5];
uint8_t NeighborhoodP__ages[5];
uint8_t NeighborhoodP__flags[5];
uint8_t NeighborhoodP__time;
uint8_t NeighborhoodP__last;

static inline error_t NeighborhoodP__Init__init(void );
#line 94
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node);
#line 158
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx);




static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__send(message_t *msg);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask(void );
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__startOneShot(uint32_t dt);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__payloadLength(message_t *msg);




static void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__metadataLength(message_t *msg);
# 59 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 77 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
enum /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0____nesc_unnamed4386 {
#line 77
  PacketLinkLayerP__0__send = 15U
};
#line 77
typedef int /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0____nesc_sillytask_send[/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send];
#line 60
enum /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0____nesc_unnamed4387 {

  PacketLinkLayerP__0__STATE_READY = 0, 
  PacketLinkLayerP__0__STATE_SENDING = 1, 
  PacketLinkLayerP__0__STATE_SENDDONE = 2, 
  PacketLinkLayerP__0__STATE_SIGNAL = 4
};

uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_READY;
message_t */*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg;
uint16_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries;






static inline void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__runTask(void );
#line 129
static inline void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__sendDone(message_t *msg, error_t error);










static inline void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__fired(void );






static error_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__send(message_t *msg);
#line 183
static inline link_metadata_t */*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(message_t *msg);




static inline void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(message_t *msg, uint16_t maxRetries);




static inline void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);




static uint16_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(message_t *msg);




static inline uint16_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetryDelay(message_t *msg);




static inline bool /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__wasDelivered(message_t *msg);






static inline uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);









static inline uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error);
# 44 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOff(void );
#line 56
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void );
#line 67
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void );
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void );
# 72 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void );






static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void );
# 144 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4388 {
#line 144
  MessageBufferLayerP__0__stateDoneTask = 16U
};
#line 144
typedef int /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_stateDoneTask[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask];
#line 189
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4389 {
#line 189
  MessageBufferLayerP__0__sendTask = 17U
};
#line 189
typedef int /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_sendTask[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask];
#line 322
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4390 {
#line 322
  MessageBufferLayerP__0__deliverTask = 18U
};
#line 322
typedef int /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_deliverTask[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask];
#line 63
uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4391 {

  MessageBufferLayerP__0__STATE_READY = 0, 
  MessageBufferLayerP__0__STATE_TX_PENDING = 1, 
  MessageBufferLayerP__0__STATE_TX_RETRY = 2, 
  MessageBufferLayerP__0__STATE_TX_SEND = 3, 
  MessageBufferLayerP__0__STATE_TX_DONE = 4, 
  MessageBufferLayerP__0__STATE_TURN_ON = 5, 
  MessageBufferLayerP__0__STATE_TURN_OFF = 6, 
  MessageBufferLayerP__0__STATE_CHANNEL = 7
};

static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 97
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop(void );
#line 144
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 163
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
#line 176
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );





message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg;
error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError;
uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries;


enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4392 {
#line 187
  MessageBufferLayerP__0__MAX_RETRIES = 5
};
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
#line 217
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
#line 230
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
#line 252
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );








static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
#line 291
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4393 {

  MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE = 3
};

message_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];
message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];

uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead;
uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );









static inline bool /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);









static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
#line 351
static inline message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg);
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void );
#line 65
static tradio_size /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg);










static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void );





static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg);
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void );
#line 56
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void );
# 78 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
enum /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4394 {
#line 78
  RandomCollisionLayerP__0__calcNextRandom = 19U
};
#line 78
typedef int /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_sillytask_calcNextRandom[/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom];
#line 57
uint8_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state;
enum /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4395 {

  RandomCollisionLayerP__0__STATE_READY = 0, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP__0__STATE_TX_SENDING = 3, 

  RandomCollisionLayerP__0__STATE_BARRIER = 0x80
};

message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg;
uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier;

static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );





uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );





static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff);
#line 98
static inline error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
#line 110
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
#line 155
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);







static inline bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);




static inline message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
# 52 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg);
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout);




static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void );
#line 45
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void );
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg);
#line 40
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(message_t *msg);









static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(message_t *msg);
# 86 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void );
#line 80
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg);






static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg);






static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void );





static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(message_t *msg, bool ack);
#line 75
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg);
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void );
#line 56
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
uint8_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state;
enum /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0____nesc_unnamed4396 {

  SoftwareAckLayerC__0__STATE_READY = 0, 
  SoftwareAckLayerC__0__STATE_DATA_SEND = 1, 
  SoftwareAckLayerC__0__STATE_ACK_WAIT = 2, 
  SoftwareAckLayerC__0__STATE_ACK_SEND = 3
};

message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg;
message_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg;

static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );





static inline error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
#line 97
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
#line 124
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );









static inline bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
#line 147
static inline message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
#line 181
static inline error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(message_t *msg);
#line 195
static inline bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(message_t *msg);
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg);
#line 50
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg);




static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static timestamp_metadata_t */*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg);
#line 77
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg);




static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value);
#line 116
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);









static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 58 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg);




static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static flags_metadata_t */*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg);






static inline bool /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg);




static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg);






static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg);
#line 90
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);









static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioCCA.nc"
static void RFA1DriverLayerP__RadioCCA__done(error_t error);
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static void RFA1DriverLayerP__RSSIFlag__clear(message_t *msg);
#line 50
static void RFA1DriverLayerP__RSSIFlag__set(message_t *msg);
# 70 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void RFA1DriverLayerP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void RFA1DriverLayerP__PacketTimeStamp__set(
#line 73
message_t * msg, 




RFA1DriverLayerP__PacketTimeStamp__size_type value);
# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
static void RFA1DriverLayerP__RadioState__done(void );
# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t RFA1DriverLayerP__LocalTime__get(void );
# 47 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
static uint8_t RFA1DriverLayerP__Config__maxPayloadLength(void );
#line 41
static uint8_t RFA1DriverLayerP__Config__headerLength(message_t *msg);
#line 53
static uint8_t RFA1DriverLayerP__Config__metadataLength(message_t *msg);





static bool RFA1DriverLayerP__Config__requiresRssiCca(message_t *msg);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t *RFA1DriverLayerP__RadioReceive__receive(message_t *msg);
#line 46
static bool RFA1DriverLayerP__RadioReceive__header(message_t *msg);
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static void RFA1DriverLayerP__RadioSend__ready(void );
#line 56
static void RFA1DriverLayerP__RadioSend__sendDone(error_t error);
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void RFA1DriverLayerP__McuPowerState__update(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
static void RFA1DriverLayerP__SfdCapture__setMode(uint8_t mode);
#line 40
static RFA1DriverLayerP__SfdCapture__size_type RFA1DriverLayerP__SfdCapture__get(void );
# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static bool RFA1DriverLayerP__TimeSyncFlag__get(message_t *msg);
#line 55
static void RFA1DriverLayerP__TransmitPowerFlag__clear(message_t *msg);
#line 40
static bool RFA1DriverLayerP__TransmitPowerFlag__get(message_t *msg);
# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void RFA1DriverLayerP__Tasklet__schedule(void );
# 90 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline rfa1_header_t *RFA1DriverLayerP__getHeader(message_t *msg);




static void *RFA1DriverLayerP__getPayload(message_t *msg);




static rfa1_metadata_t *RFA1DriverLayerP__getMeta(message_t *msg);






uint8_t RFA1DriverLayerP__state;
enum RFA1DriverLayerP____nesc_unnamed4397 {

  RFA1DriverLayerP__STATE_P_ON = 0, 
  RFA1DriverLayerP__STATE_SLEEP = 1, 
  RFA1DriverLayerP__STATE_SLEEP_2_TRX_OFF = 2, 
  RFA1DriverLayerP__STATE_TRX_OFF = 3, 
  RFA1DriverLayerP__STATE_TRX_OFF_2_RX_ON = 4, 
  RFA1DriverLayerP__STATE_RX_ON = 5, 
  RFA1DriverLayerP__STATE_BUSY_TX_2_RX_ON = 6
};

uint8_t RFA1DriverLayerP__cmd;
enum RFA1DriverLayerP____nesc_unnamed4398 {

  RFA1DriverLayerP__CMD_NONE = 0, 
  RFA1DriverLayerP__CMD_TURNOFF = 1, 
  RFA1DriverLayerP__CMD_STANDBY = 2, 
  RFA1DriverLayerP__CMD_TURNON = 3, 
  RFA1DriverLayerP__CMD_TRANSMIT = 4, 
  RFA1DriverLayerP__CMD_RECEIVE = 5, 
  RFA1DriverLayerP__CMD_CCA = 6, 
  RFA1DriverLayerP__CMD_CHANNEL = 7, 
  RFA1DriverLayerP__CMD_SIGNAL_DONE = 8, 
  RFA1DriverLayerP__CMD_DOWNLOAD = 9
};

enum RFA1DriverLayerP____nesc_unnamed4399 {
  RFA1DriverLayerP__IRQ_NONE = 0, 
  RFA1DriverLayerP__IRQ_AWAKE = 1, 
  RFA1DriverLayerP__IRQ_TX_END = 2, 
  RFA1DriverLayerP__IRQ_XAH_AMI = 4, 
  RFA1DriverLayerP__IRQ_CCA_ED_DONE = 8, 
  RFA1DriverLayerP__IRQ_RX_END = 16, 
  RFA1DriverLayerP__IRQ_RX_START = 32, 
  RFA1DriverLayerP__IRQ_PLL_UNLOCK = 64, 
  RFA1DriverLayerP__IRQ_PLL_LOCK = 128
};

enum RFA1DriverLayerP____nesc_unnamed4400 {

  RFA1DriverLayerP__RFA1RADIOON = 0U
};

uint8_t RFA1DriverLayerP__radioIrq;

uint8_t RFA1DriverLayerP__txPower;
uint8_t RFA1DriverLayerP__channel;

message_t *RFA1DriverLayerP__rxMsg;
message_t RFA1DriverLayerP__rxMsgBuffer;

uint8_t RFA1DriverLayerP__rssiClear;
uint8_t RFA1DriverLayerP__rssiBusy;



static inline error_t RFA1DriverLayerP__PlatformInit__init(void );










static inline error_t RFA1DriverLayerP__SoftwareInit__init(void );
#line 237
static __inline void RFA1DriverLayerP__changeChannel(void );
#line 253
static __inline void RFA1DriverLayerP__changeState(void );
#line 308
static inline error_t RFA1DriverLayerP__RadioState__turnOff(void );
#line 334
static inline error_t RFA1DriverLayerP__RadioState__turnOn(void );
#line 350
enum RFA1DriverLayerP____nesc_unnamed4401 {

  RFA1DriverLayerP__TX_SFD_DELAY = 11
};

static error_t RFA1DriverLayerP__RadioSend__send(message_t *msg);
#line 473
static inline void RFA1DriverLayerP__RadioCCA__default__done(error_t error);




static __inline void RFA1DriverLayerP__downloadMessage(void );
#line 542
static inline void RFA1DriverLayerP__serviceRadio(void );
#line 667
void __vector_63(void ) __attribute((interrupt))   ;









void __vector_60(void ) __attribute((interrupt))   ;










void __vector_59(void ) __attribute((interrupt))   ;









void __vector_57(void ) __attribute((interrupt))   ;









void __vector_64(void ) __attribute((interrupt))   ;









void __vector_61(void ) __attribute((interrupt))   ;
#line 730
static inline void RFA1DriverLayerP__Tasklet__run(void );
#line 758
static inline mcu_power_t RFA1DriverLayerP__McuPowerOverride__lowestState(void );









static inline uint8_t RFA1DriverLayerP__RadioPacket__headerLength(message_t *msg);





static uint8_t RFA1DriverLayerP__RadioPacket__payloadLength(message_t *msg);




static void RFA1DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);







static inline uint8_t RFA1DriverLayerP__RadioPacket__maxPayloadLength(void );






static inline uint8_t RFA1DriverLayerP__RadioPacket__metadataLength(message_t *msg);




static inline void RFA1DriverLayerP__RadioPacket__clear(message_t *msg);






static inline bool RFA1DriverLayerP__PacketTransmitPower__isSet(message_t *msg);




static inline uint8_t RFA1DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 834
static inline uint8_t RFA1DriverLayerP__PacketRSSI__get(message_t *msg);




static inline void RFA1DriverLayerP__PacketRSSI__clear(message_t *msg);




static inline void RFA1DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value);










static inline bool RFA1DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);




static inline uint8_t RFA1DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 885
static inline uint8_t RFA1DriverLayerP__PacketLinkQuality__get(message_t *msg);








static inline void RFA1DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value);
# 58 "/opt/tinyos-2.x/tos/lib/timer/BusyWaitCounterC.nc"
enum /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0____nesc_unnamed4402 {

  BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE = (/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type )1 << (8 * sizeof(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type ) - 1)
};
#line 83
static inline void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__upper_count_type /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__m_upper;

enum /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1____nesc_unnamed4403 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 1, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__from_size_type ) - /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__from_size_type ) + 1, 



  TransformCounterC__1__OVERFLOW_MASK = /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__upper_count_type )2 << (/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow(void );
# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__setMode(uint8_t mode);
#line 61
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__start(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void );
#line 66
static inline void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__overflow(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareA__fired(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
static void HplAtmRfa1Timer1P__Capture__fired(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareB__fired(void );
#line 48
static void HplAtmRfa1Timer1P__CompareC__fired(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void HplAtmRfa1Timer1P__Timer__overflow(void );
# 73 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
void __vector_20(void ) __attribute((signal))   ;







static inline void HplAtmRfa1Timer1P__Timer__start(void );
#line 95
static inline void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode);
#line 162
static inline void HplAtmRfa1Timer1P__CompareA__default__fired(void );

void __vector_17(void ) __attribute((signal))   ;







static inline void HplAtmRfa1Timer1P__CompareB__default__fired(void );

void __vector_18(void ) __attribute((signal))   ;







static inline void HplAtmRfa1Timer1P__CompareC__default__fired(void );

void __vector_19(void ) __attribute((signal))   ;
#line 322
static inline void HplAtmRfa1Timer1P__Capture__default__fired(void );

void __vector_16(void ) __attribute((signal))   ;
#line 364
static inline mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void );
# 53 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );




static inline void /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__setMode(uint8_t mode);
#line 54
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__reset(void );
#line 43
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__set(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__size_type value);
#line 59
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__start(void );


static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__fired(void );
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__get(void );
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline error_t /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Init__init(void );










static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__fired(void );





static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__stop(void );










static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__setAlarm(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type time);
#line 102
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__start(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type ndt);
#line 115
static inline /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__getNow(void );









static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__overflow(void );
# 63 "/opt/tinyos-2.x/tos/platforms/ucbase/NoLedsC.nc"
static inline void NoLedsC__Leds__led2Toggle(void );
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void IPDispatchP__SplitControl__startDone(error_t error);
#line 138
static void IPDispatchP__SplitControl__stopDone(error_t error);
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
IPDispatchP__SendInfoPool__t * 


IPDispatchP__SendInfoPool__get(void );
#line 89
static error_t IPDispatchP__SendInfoPool__put(
#line 85
IPDispatchP__SendInfoPool__t * newVal);
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t IPDispatchP__RadioControl__start(void );
#line 130
static error_t IPDispatchP__RadioControl__stop(void );
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPLower.nc"
static void IPDispatchP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 22
static void IPDispatchP__IPLower__sendDone(struct send_info *status);
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ReadLqi.nc"
static uint8_t IPDispatchP__ReadLqi__readRssi(message_t *msg);
#line 6
static uint8_t IPDispatchP__ReadLqi__readLqi(message_t *msg);
# 73 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
IPDispatchP__SendQueue__t  

IPDispatchP__SendQueue__head(void );
#line 90
static error_t IPDispatchP__SendQueue__enqueue(
#line 86
IPDispatchP__SendQueue__t  newVal);
#line 81
static 
#line 79
IPDispatchP__SendQueue__t  

IPDispatchP__SendQueue__dequeue(void );
#line 50
static bool IPDispatchP__SendQueue__empty(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void IPDispatchP__ExpireTimer__startPeriodic(uint32_t dt);
# 16 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
static int IPDispatchP__NeighborDiscovery__matchContext(struct in6_addr *addr, uint8_t *ctx);
static int IPDispatchP__NeighborDiscovery__getContext(uint8_t context, struct in6_addr *ctx);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t IPDispatchP__sendTask__postTask(void );
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
IPDispatchP__FragPool__t * 


IPDispatchP__FragPool__get(void );
#line 89
static error_t IPDispatchP__FragPool__put(
#line 85
IPDispatchP__FragPool__t * newVal);
# 102 "/opt/tinyos-2.x/tos/platforms/ucbase/Leds.nc"
static void IPDispatchP__Leds__led2Toggle(void );
# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void IPDispatchP__BarePacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t IPDispatchP__BarePacket__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


IPDispatchP__BarePacket__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t IPDispatchP__BarePacket__maxPayloadLength(void );
#line 94
static void IPDispatchP__BarePacket__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t IPDispatchP__BareSend__send(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/interfaces/PacketLink.nc"
static void IPDispatchP__PacketLink__setRetries(
#line 42
message_t * msg, 



uint16_t maxRetries);
#line 59
static uint16_t IPDispatchP__PacketLink__getRetries(
#line 56
message_t * msg);
#line 53
static void IPDispatchP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);
#line 71
static bool IPDispatchP__PacketLink__wasDelivered(
#line 68
message_t * msg);
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
IPDispatchP__SendEntryPool__t * 


IPDispatchP__SendEntryPool__get(void );
#line 89
static error_t IPDispatchP__SendEntryPool__put(
#line 85
IPDispatchP__SendEntryPool__t * newVal);
# 627 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
enum IPDispatchP____nesc_unnamed4404 {
#line 627
  IPDispatchP__sendTask = 20U
};
#line 627
typedef int IPDispatchP____nesc_sillytask_sendTask[IPDispatchP__sendTask];
#line 93
static inline int IPDispatchP__lowpan_extern_read_context(struct in6_addr *addr, int context);



static inline int IPDispatchP__lowpan_extern_match_context(struct in6_addr *addr, uint8_t *ctx_id);
# 15 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/internal.h"
static int IPDispatchP__bit_range_zero_p(uint8_t *buf, int start, int end);
static __inline uint8_t *IPDispatchP__pack_tcfl(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
static __inline uint8_t *IPDispatchP__pack_nh(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
static __inline uint8_t *IPDispatchP__pack_hlim(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
static uint8_t *IPDispatchP__pack_address(uint8_t *buf, struct in6_addr *addr, int context_match_len, 
ieee154_addr_t *l2addr, ieee154_panid_t pan, uint8_t *flags);
static inline uint8_t *IPDispatchP__pack_multicast(uint8_t *buf, struct in6_addr *addr, uint8_t *flags);
static inline int IPDispatchP__pack_udp(uint8_t *buf, size_t cnt, struct ip6_packet *packet, int offset);
static inline int IPDispatchP__pack_ipnh(uint8_t *dest, size_t cnt, uint8_t *type, struct ip6_packet *packet, int offset);
static inline int IPDispatchP__pack_nhc_chain(uint8_t **dest, size_t cnt, struct ip6_packet *packet);
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, 
struct ieee154_frame_addr *frame);
static inline uint8_t *IPDispatchP__lowpan_pack_headers(struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt);


static inline uint8_t *IPDispatchP__unpack_ieee154_hdr(uint8_t *buf, struct ieee154_frame_addr *frame);
static inline uint8_t *IPDispatchP__unpack_tcfl(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_nh(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_hlim(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
static uint8_t *IPDispatchP__unpack_address(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf, 
ieee154_addr_t *frame, ieee154_panid_t pan);
static inline uint8_t *IPDispatchP__unpack_multicast(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_udp(uint8_t *dest, uint8_t *nxt_hdr, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_ipnh(uint8_t *dest, size_t cnt, uint8_t *nxt_hdr, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_nhc_chain(struct lowpan_reconstruct *recon, 
uint8_t **dest, size_t cnt, 
uint8_t *nxt_hdr, uint8_t *buf);
# 16 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/ieee154_header.c"
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, 
struct ieee154_frame_addr *frame);
#line 44
static inline uint8_t *IPDispatchP__unpack_ieee154_hdr(uint8_t *buf, struct ieee154_frame_addr *frame);
# 4 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/ieee154_header.h"
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, struct ieee154_frame_addr *frame);
static inline uint8_t *IPDispatchP__unpack_ieee154_hdr(uint8_t *buf, struct ieee154_frame_addr *frame);
# 63 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static inline int IPDispatchP__iid_eui_cmp(uint8_t *iid, uint8_t *eui);
#line 76
static int IPDispatchP__bit_range_zero_p(uint8_t *buf, int start, int end);
#line 105
static __inline uint8_t *IPDispatchP__pack_tcfl(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
#line 136
static __inline uint8_t *IPDispatchP__pack_nh(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
#line 148
static __inline uint8_t *IPDispatchP__pack_hlim(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
#line 169
static uint8_t *IPDispatchP__pack_address(uint8_t *buf, struct in6_addr *addr, int context_match_len, 
ieee154_addr_t *l2addr, ieee154_panid_t pan, uint8_t *flags);
#line 235
static inline uint8_t *IPDispatchP__pack_multicast(uint8_t *buf, struct in6_addr *addr, uint8_t *flags);
#line 261
static inline int IPDispatchP__pack_udp(uint8_t *buf, size_t cnt, struct ip6_packet *packet, int offset);
#line 288
static inline uint8_t IPDispatchP____ipnh_real_length(uint8_t type, struct ip_iovec *pkt, int offset);
#line 325
static inline int IPDispatchP__pack_ipnh(uint8_t *dest, size_t cnt, uint8_t *type, struct ip6_packet *packet, int offset);
#line 380
static inline int IPDispatchP__pack_nhc_chain(uint8_t **dest, size_t cnt, struct ip6_packet *packet);
#line 413
static inline uint8_t *IPDispatchP__lowpan_pack_headers(struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt);
#line 465
static inline uint8_t *IPDispatchP__unpack_tcfl(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
#line 499
static inline uint8_t *IPDispatchP__unpack_nh(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);








static inline uint8_t *IPDispatchP__unpack_hlim(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
#line 526
static uint8_t *IPDispatchP__unpack_address(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf, 
ieee154_addr_t *frame, ieee154_panid_t pan);
#line 592
static inline uint8_t *IPDispatchP__unpack_multicast(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf);
#line 624
static inline uint8_t *IPDispatchP__unpack_udp(uint8_t *dest, uint8_t *nxt_hdr, uint8_t *buf);
#line 673
static inline uint8_t *IPDispatchP__unpack_ipnh(uint8_t *dest, size_t cnt, uint8_t *nxt_hdr, uint8_t *buf);
#line 733
static inline uint8_t *IPDispatchP__unpack_nhc_chain(struct lowpan_reconstruct *recon, 
uint8_t **dest, size_t cnt, 
uint8_t *nxt_hdr, uint8_t *buf);
#line 767
static inline uint8_t *IPDispatchP__lowpan_unpack_headers(struct lowpan_reconstruct *recon, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt);
# 48 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t *IPDispatchP__getLowpanPayload(struct packed_lowmsg *lowmsg);
#line 68
static __inline uint16_t IPDispatchP__getHeaderBitmap(struct packed_lowmsg *lowmsg);
#line 114
static __inline uint8_t IPDispatchP__setupHeaders(struct packed_lowmsg *packed, uint16_t headers);
#line 163
static __inline uint8_t IPDispatchP__hasFrag1Header(struct packed_lowmsg *msg);


static __inline uint8_t IPDispatchP__hasFragNHeader(struct packed_lowmsg *msg);
#line 255
static __inline uint8_t IPDispatchP__getFragDgramSize(struct packed_lowmsg *msg, uint16_t *size);
#line 272
static __inline uint8_t IPDispatchP__getFragDgramTag(struct packed_lowmsg *msg, uint16_t *tag);
#line 301
static __inline uint8_t IPDispatchP__setFragDgramSize(struct packed_lowmsg *msg, uint16_t size);
#line 321
static __inline uint8_t IPDispatchP__setFragDgramTag(struct packed_lowmsg *msg, uint16_t tag);
#line 337
static __inline uint8_t IPDispatchP__setFragDgramOffset(struct packed_lowmsg *msg, uint8_t size);
# 15 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan_frag.c"
static int IPDispatchP__lowpan_recon_start(struct ieee154_frame_addr *frame_addr, 
struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len);
#line 76
static inline int IPDispatchP__lowpan_recon_add(struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len);
#line 102
static inline int IPDispatchP__lowpan_frag_get(uint8_t *frag, size_t len, 
struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
struct lowpan_ctx *ctx);
# 109 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
enum IPDispatchP____nesc_unnamed4405 {
  IPDispatchP__S_RUNNING, 
  IPDispatchP__S_STOPPED, 
  IPDispatchP__S_STOPPING
};
uint8_t IPDispatchP__state = IPDispatchP__S_STOPPED;
bool IPDispatchP__radioBusy;
uint8_t IPDispatchP__current_local_label = 0;
ip_statistics_t IPDispatchP__stats;
#line 130
table_t IPDispatchP__recon_cache;



struct lowpan_reconstruct IPDispatchP__recon_data[N_RECONSTRUCTIONS];







static inline void IPDispatchP__reconstruct_clear(void *ent);






static inline struct send_info *IPDispatchP__getSendInfo(void );
#line 161
static void IPDispatchP__SENDINFO_DECR(struct send_info *si);





static inline error_t IPDispatchP__SplitControl__start(void );
#line 183
static inline void IPDispatchP__RadioControl__startDone(error_t error);
#line 198
static inline void IPDispatchP__RadioControl__stopDone(error_t error);



static inline error_t IPDispatchP__Init__init(void );






static inline void IPDispatchP__Boot__booted(void );
#line 222
static void IPDispatchP__deliver(struct lowpan_reconstruct *recon);
#line 260
static inline void IPDispatchP__reconstruct_age(void *elt);
#line 285
static inline void IPDispatchP__ip_print_heap(void );










static inline void IPDispatchP__ExpireTimer__fired(void );
#line 312
static inline struct lowpan_reconstruct *IPDispatchP__get_reconstruct(uint16_t key, uint16_t tag);
#line 345
static inline message_t *IPDispatchP__BareReceive__receive(message_t *msg);
#line 627
static inline void IPDispatchP__sendTask__runTask(void );
#line 702
static inline error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *frame_addr, 
struct ip6_packet *msg, 
void *data);
#line 818
static inline void IPDispatchP__BareSend__sendDone(message_t *msg, error_t error);
#line 957
static inline void IPDispatchP__BlipStatistics__get(ip_statistics_t *statistics);
#line 975
static inline void IPDispatchP__BlipStatistics__clear(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static RFA1ReadLqiC__SubLqi__value_type RFA1ReadLqiC__SubLqi__get(message_t *msg);
#line 46
static RFA1ReadLqiC__SubRssi__value_type RFA1ReadLqiC__SubRssi__get(message_t *msg);
# 13 "/opt/tinyos-2.x/tos/lib/net/blip/platform/RFA1ReadLqiC.nc"
static inline uint8_t RFA1ReadLqiC__ReadLqi__readLqi(message_t *msg);



static inline uint8_t RFA1ReadLqiC__ReadLqi__readRssi(message_t *msg);
# 60 "/opt/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__free;
uint8_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__index;
/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t * /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[12];
/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool[12];

static inline error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init(void );
#line 88
static inline /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t */*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get(void );
#line 103
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t *newVal);
#line 60
uint8_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free;
uint8_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index;
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t * /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[12];
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool[12];

static inline error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init(void );
#line 88
static inline /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t */*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get(void );
#line 103
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t *newVal);
# 48 "/opt/tinyos-2.x/tos/system/QueueC.nc"
/*IPDispatchC.QueueC*/QueueC__0__queue_t  /*IPDispatchC.QueueC*/QueueC__0__queue[12];
uint8_t /*IPDispatchC.QueueC*/QueueC__0__head = 0;
uint8_t /*IPDispatchC.QueueC*/QueueC__0__tail = 0;
uint8_t /*IPDispatchC.QueueC*/QueueC__0__size = 0;

static inline bool /*IPDispatchC.QueueC*/QueueC__0__Queue__empty(void );



static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize(void );



static inline /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__head(void );



static inline void /*IPDispatchC.QueueC*/QueueC__0__printQueue(void );
#line 85
static /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(/*IPDispatchC.QueueC*/QueueC__0__queue_t newVal);
# 60 "/opt/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free;
uint8_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index;
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t * /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[3];
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool[3];

static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init(void );
#line 88
static inline /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t */*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get(void );
#line 103
static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t *newVal);
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void IPStackControlP__SplitControl__startDone(error_t error);
#line 138
static void IPStackControlP__SplitControl__stopDone(error_t error);
#line 104
static error_t IPStackControlP__SubSplitControl__start(void );
# 34 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPStackControlP__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t IPStackControlP__RoutingControl__start(void );









static error_t IPStackControlP__RoutingControl__stop(void );
#line 95
static error_t IPStackControlP__StdControl__start(void );
# 12 "/opt/tinyos-2.x/tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__SplitControl__start(void );



static inline void IPStackControlP__SubSplitControl__startDone(error_t error);
#line 37
static inline void IPStackControlP__SubSplitControl__stopDone(error_t error);



static inline void IPStackControlP__IPAddress__changed(bool valid);






static inline error_t IPStackControlP__StdControl__default__start(void );
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void ICMPCoreP__ICMP_IP__recv(
# 50 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCoreP.nc"
uint8_t arg_0x4129d160, 
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 39 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool ICMPCoreP__IPAddress__setSource(struct ip6_hdr *hdr);
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t ICMPCoreP__IP__send(struct ip6_packet *msg);
# 59 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCoreP.nc"
static inline void ICMPCoreP__IP__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta);
#line 105
static error_t ICMPCoreP__ICMP_IP__send(uint8_t type, struct ip6_packet *pkt);









static inline void ICMPCoreP__IPAddress__changed(bool valid);

static inline void ICMPCoreP__ICMP_IP__default__recv(uint8_t type, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/IPPacketC.nc"
static int IPPacketC__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type);
#line 59
static int IPPacketC__IPPacket__findTLV(struct ip_iovec *header, int ext_offset, uint8_t type);
# 60 "/opt/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free;
uint8_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index;
/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t * /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[3];
/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool[3];

static inline error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Init__init(void );
#line 88
static inline /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t */*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__get(void );
#line 103
static error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__put(/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t *newVal);
# 52 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static error_t NoDhcpC__IPAddress__setAddress(struct in6_addr *addr);
# 49 "/opt/tinyos-2.x/tos/lib/net/blip/dhcp/NoDhcpC.nc"
static inline void NoDhcpC__Boot__booted(void );







static inline void NoDhcpC__IPAddress__changed(bool valid);
# 39 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool UdpP__IPAddress__setSource(struct ip6_hdr *hdr);
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
static void UdpP__UDP__recvfrom(
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x412ef8f0, 
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t UdpP__IP__send(struct ip6_packet *msg);
# 15 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
enum UdpP____nesc_unnamed4406 {
  UdpP__N_CLIENTS = 3U
};


uint16_t UdpP__local_ports[UdpP__N_CLIENTS];

enum UdpP____nesc_unnamed4407 {
  UdpP__LOCAL_PORT_START = 51024U, 
  UdpP__LOCAL_PORT_STOP = 54999U
};
uint16_t UdpP__last_localport = UdpP__LOCAL_PORT_START;

static inline uint16_t UdpP__alloc_lport(uint8_t clnt);
#line 46
static inline error_t UdpP__Init__init(void );





static error_t UdpP__UDP__bind(uint8_t clnt, uint16_t port);
#line 64
static inline void UdpP__IP__recv(struct ip6_hdr *iph, void *packet, size_t len, struct ip6_metadata *meta);
#line 115
static error_t UdpP__UDP__sendto(uint8_t clnt, struct sockaddr_in6 *dest, void *payload, 
uint16_t len);







static inline error_t UdpP__UDP__sendtov(uint8_t clnt, struct sockaddr_in6 *dest, 
struct ip_iovec *iov);
#line 168
static inline void UdpP__BlipStatistics__clear(void );





static inline void UdpP__BlipStatistics__get(udp_statistics_t *buf);





static inline void UdpP__UDP__default__recvfrom(uint8_t clnt, struct sockaddr_in6 *from, 
void *payload, 
uint16_t len, 
struct ip6_metadata *meta);

static inline void UdpP__IPAddress__changed(bool global_valid);
# 34 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool RPLRankP__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t RPLRankP__IP_DIO__send(struct ip6_packet *msg);
# 20 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF.nc"
static bool RPLRankP__RPLOF__recomputeRoutes(void );
#line 4
static bool RPLRankP__RPLOF__OCP(uint16_t ocp);


static bool RPLRankP__RPLOF__objectSupported(uint16_t objectType);






static uint16_t RPLRankP__RPLOF__getRank(void );
static void RPLRankP__RPLOF__resetRank(void );






static void RPLRankP__RPLOF__setMinHopRankIncrease(uint16_t val);
#line 9
static uint16_t RPLRankP__RPLOF__getObjectValue(void );

static struct in6_addr *RPLRankP__RPLOF__getParent(void );





static bool RPLRankP__RPLOF__recalculateRank(void );
# 41 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
static void RPLRankP__RouteInfo__resetTrickle(void );
#line 56
static void RPLRankP__RouteInfo__inconsistency(void );
#line 49
static void RPLRankP__RouteInfo__setDODAGConfig(uint8_t DIOIntDouble, uint8_t DIOIntMin, 
uint8_t DIORedun, uint8_t MaxRankInc, uint8_t MinHopRankInc);
#line 45
static uint8_t RPLRankP__RouteInfo__getInstanceID(void );
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPPacket.nc"
static int RPLRankP__IPPacket__findTLV(struct ip_iovec *header, 
int ext_offset, 
uint8_t type);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t RPLRankP__newParentSearch__postTask(void );
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void RPLRankP__IP_DIO_Filter__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 362 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
enum RPLRankP____nesc_unnamed4408 {
#line 362
  RPLRankP__newParentSearch = 21U
};
#line 362
typedef int RPLRankP____nesc_sillytask_newParentSearch[RPLRankP__newParentSearch];
#line 102
uint16_t RPLRankP__nodeRank = INFINITE_RANK;
uint16_t RPLRankP__minRank = INFINITE_RANK;
bool RPLRankP__leafState = FALSE;

struct in6_addr;

uint8_t RPLRankP__parentNum = 0;
uint16_t RPLRankP__VERSION = 0;

uint16_t RPLRankP__MAX_RANK_INCREASE = 1;







struct in6_addr RPLRankP__DODAGID;
struct in6_addr RPLRankP__DODAG_MAX;
uint8_t RPLRankP__METRICID;
uint16_t RPLRankP__OCP;


uint8_t RPLRankP__Prf = 0xFF;


bool RPLRankP__ignore = FALSE;
bool RPLRankP__ROOT = FALSE;
bool RPLRankP__m_running = FALSE;
parent_t RPLRankP__parentSet[20];

static void RPLRankP__resetValid(void );
static void RPLRankP__getNewRank(void );






static inline error_t RPLRankP__StdControl__start(void );
#line 158
static inline error_t RPLRankP__StdControl__stop(void );




static inline parent_t *RPLRankP__RPLParentTable__get(uint8_t i);
#line 186
static uint8_t RPLRankP__getParent(struct in6_addr *node);


static uint16_t RPLRankP__RPLRankInfo__getRank(struct in6_addr *node);
#line 216
static error_t RPLRankP__RPLRankInfo__getDefaultRoute(struct in6_addr *next);
#line 228
static inline bool RPLRankP__exceedThreshold(uint8_t indexset, uint8_t ID);









static uint8_t RPLRankP__getParent(struct in6_addr *node);
#line 265
static void RPLRankP__resetValid(void );









static void RPLRankP__RPLRankInfo__inconsistencyDetected(void );









static inline uint8_t RPLRankP__RPLRankInfo__hasParent(void );



static inline bool RPLRankP__RPLRankInfo__isLeaf(void );




static inline uint8_t RPLRankP__getPreExistingParent(struct in6_addr *node);
#line 309
static inline uint16_t RPLRankP__RPLRankInfo__getEtx(void );



static void RPLRankP__insertParent(parent_t parent);
#line 350
static void RPLRankP__evictParent(uint8_t indexset);
#line 362
static inline void RPLRankP__newParentSearch__runTask(void );






static inline void RPLRankP__evictAll(void );
#line 393
static inline bool RPLRankP__ForwardingEvents__initiate(struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 442
static inline bool RPLRankP__ForwardingEvents__approve(struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 524
static inline void RPLRankP__ForwardingEvents__linkResult(struct in6_addr *node, 
struct send_info *info);
#line 569
static inline bool RPLRankP__compareParent(parent_t oldP, parent_t newP);



static void RPLRankP__getNewRank(void );
#line 610
static inline void RPLRankP__parseDIO(struct ip6_hdr *iph, 
uint8_t *buf, 
int len);
#line 935
static inline void RPLRankP__IP_DIO__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
#line 959
static inline error_t RPLRankP__IP_DIO_Filter__send(struct ip6_packet *msg);



static inline void RPLRankP__IPAddress__changed(bool global_valid);
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__send(struct ip6_packet *msg);
# 40 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngine.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLDAORoutingEngine__startDAO(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__postTask(void );
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__getNow(void );
#line 92
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__isRunning(void );
#line 64
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__startPeriodic(uint32_t dt);
#line 78
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__stop(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__Random__rand32(void );
# 92 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__isRunning(void );
#line 73
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__startOneShot(uint32_t dt);




static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__stop(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__postTask(void );
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getLLAddr(struct in6_addr *addr);
#line 44
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__isLocalAddress(struct in6_addr *addr);
#line 34
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__postTask(void );
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__send(struct ip6_packet *msg);
# 98 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRank.nc"
static uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__hasParent(void );
#line 84
static uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(struct in6_addr *node);
#line 101
static uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getEtx(void );
#line 99
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__isLeaf(void );
#line 94
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__inconsistencyDetected(void );
#line 113
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getDefaultRoute(struct in6_addr *next_hop);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__postTask(void );
#line 67
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__postTask(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RankControl__start(void );









static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RankControl__stop(void );
# 119 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4409 {
#line 119
  RPLRoutingEngineP__0__sendDIOTask = 22U
};
#line 119
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_sendDIOTask[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask];
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4410 {
#line 120
  RPLRoutingEngineP__0__sendDISTask = 23U
};
#line 120
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_sendDISTask[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask];
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4411 {
#line 121
  RPLRoutingEngineP__0__init = 24U
};
#line 121
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_init[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init];
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4412 {
#line 122
  RPLRoutingEngineP__0__initDIO = 25U
};
#line 122
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_initDIO[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO];
#line 167
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4413 {
#line 167
  RPLRoutingEngineP__0__computeRemaining = 26U
};
#line 167
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_computeRemaining[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining];
#line 71
uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod;
uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime;
bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sentDIOFlag = FALSE;
bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT = FALSE;
bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF = FALSE;
bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running = FALSE;
bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG = FALSE;

uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank = INFINITE_RANK;
uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__LOWRANK = INFINITE_RANK;
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__GROUND_STATE = 1;

uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID = 0;
struct in6_addr /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID;
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber = 0;
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP = RPL_MOP_Storing_No_Multicast;
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DAG_PREF = 7;

uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__redunCounter = 0xFF;
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__doubleCounter = 0;

uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntDouble = 10;
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntMin = 8;
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIORedun = 0xFF;
uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MinHopRankInc = 1;
uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MaxRankInc = 3;

uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DTSN = 2;




bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO = FALSE;

struct in6_addr;

struct in6_addr /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP;
struct in6_addr;
struct in6_addr /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR;
struct in6_addr /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO_ADDR;


static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__resetTrickleTime(void );
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__chooseAdvertiseTime(void );
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeTrickleRemaining(void );
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__nextTrickleTime(void );
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__inconsistencyDetected(void );







static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__runTask(void );
#line 161
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__runTask(void );





static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__runTask(void );



static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__runTask(void );
#line 322
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__runTask(void );
#line 355
uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__INCONSISTENCY_COUNT = 0;

static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__inconsistencyDetected(void );
#line 383
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__resetTrickleTime(void );






static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__chooseAdvertiseTime(void );










static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeTrickleRemaining(void );







static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__nextTrickleTime(void );










static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__inconsistency(void );



static inline bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__hasDODAG(void );



static inline uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getMOP(void );



static inline error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDefaultRoute(struct in6_addr *next);



static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDODAGConfig(uint8_t IntDouble, 
uint8_t IntMin, 
uint8_t Redun, 
uint8_t RankInc, 
uint8_t HopRankInc);
#line 454
static inline uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getInstanceID(void );







static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle(void );





static inline uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getRank(void );



static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDTSN(uint8_t dtsn);



static inline uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDTSN(void );
#line 500
static inline error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__start(void );









static inline error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__stop(void );






static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__fired(void );



static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IncreaseVersionTimer__fired(void );





static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__fired(void );
#line 542
static inline bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__compare_ip6_addr(struct in6_addr *node1, struct in6_addr *node2);
#line 554
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
#line 577
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
#line 693
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__changed(bool global_valid);
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__t * 


/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__get(void );
#line 89
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__put(
#line 85
/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__t * newVal);
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__send(struct ip6_packet *msg);
# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__Random__rand16(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__postTask(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__startPeriodic(uint32_t dt);
# 90 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__enqueue(
#line 86
/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__t  newVal);
#line 81
static 
#line 79
/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__t  

/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__dequeue(void );
#line 58
static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__size(void );
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__getLLAddr(struct in6_addr *addr);




static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__postTask(void );
# 92 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__isRunning(void );
#line 73
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__startOneShot(uint32_t dt);
#line 92
static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__isRunning(void );
#line 73
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__startOneShot(uint32_t dt);
# 52 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getMOP(void );
#line 45
static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getInstanceID(void );







static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__setDTSN(uint8_t dtsn);
#line 42
static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__hasDODAG(void );

static uint16_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getRank(void );









static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDTSN(void );
#line 43
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDefaultRoute(struct in6_addr *next_hop);
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTable.nc"
static struct route_entry */*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__lookupRoute(const uint8_t *prefix, int prefix_len_bits);
#line 16
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__delRoute(route_key_t key);
#line 10
static route_key_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, 
struct in6_addr *next_hop, uint8_t ifindex);
# 107 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
enum /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0____nesc_unnamed4414 {
#line 107
  RPLDAORoutingEngineP__0__sendDAO = 27U
};
#line 107
typedef int /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0____nesc_sillytask_sendDAO[/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO];
#line 190
enum /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0____nesc_unnamed4415 {
#line 190
  RPLDAORoutingEngineP__0__initDAO = 28U
};
#line 190
typedef int /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0____nesc_sillytask_initDAO[/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO];
#line 68
uint32_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate = 10000;



uint32_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao = 256;
uint32_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__remove_time = 120 * 1024U;


uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__daoseq = 0;


uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_SEQUENCE = 0;
uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_CONTROL = 0;

downwards_table_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[20];
uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count = 0;
bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__m_running = FALSE;

static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__memcmp_rpl(uint8_t *a, uint8_t *b, uint8_t len);







static inline error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__start(void );





static inline error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__stop(void );






static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__runTask(void );
#line 156
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__startDAO(void );
#line 182
static inline bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__getStoreState(void );









static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__fired(void );
#line 209
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__runTask(void );
#line 280
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__fired(void );



static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__fired(void );
#line 304
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
#line 425
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__newParent(void );









static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__changed(bool global_valid);
# 48 "/opt/tinyos-2.x/tos/system/QueueC.nc"
/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t  /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue[5];
uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head = 0;
uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail = 0;
uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size = 0;

static inline bool /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__empty(void );



static inline uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__size(void );



static inline uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__maxSize(void );



static inline /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__head(void );



static inline void /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__printQueue(void );
#line 85
static inline /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__dequeue(void );
#line 97
static error_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__enqueue(/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t newVal);
# 60 "/opt/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__free;
uint8_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__index;
/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__pool_t * /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__queue[5];
/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__pool_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__pool[5];

static inline error_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Init__init(void );
#line 88
static /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__pool_t */*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Pool__get(void );
#line 103
static error_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Pool__put(/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__pool_t *newVal);
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__send(struct ip6_packet *msg);





static void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__recv(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x414d7be0, 
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 39 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);





static inline error_t /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__send(uint8_t code, struct ip6_packet *msg);



static inline void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);
# 2 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLParentTable.nc"
static parent_t *RPLOF0P__ParentTable__get(uint8_t parent_index);
# 42 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngine.nc"
static void RPLOF0P__RPLDAO__newParent(void );
# 56 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
static void RPLOF0P__RPLRoute__inconsistency(void );
# 16 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTable.nc"
static error_t RPLOF0P__ForwardingTable__delRoute(route_key_t key);
#line 10
static route_key_t RPLOF0P__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, 
struct in6_addr *next_hop, uint8_t ifindex);
# 51 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF0P.nc"
uint16_t RPLOF0P__nodeRank = INFINITE_RANK;
uint16_t RPLOF0P__minMetric = 0xFFFF;
uint16_t RPLOF0P__prevParent;


uint16_t RPLOF0P__desiredParent = 20 - 1;
uint16_t RPLOF0P__nodeEtx = 10;
bool RPLOF0P__newParent = FALSE;
uint16_t RPLOF0P__min_hop_rank_inc = 1;
route_key_t RPLOF0P__route_key = ROUTE_INVAL_KEY;


static inline bool RPLOF0P__RPLOF__OCP(uint16_t ocp);






static inline bool RPLOF0P__RPLOF__objectSupported(uint16_t objectType);










static inline void RPLOF0P__RPLOF__setMinHopRankIncrease(uint16_t val);



static inline uint16_t RPLOF0P__RPLOF__getObjectValue(void );




static struct in6_addr *RPLOF0P__RPLOF__getParent(void );





static inline uint16_t RPLOF0P__RPLOF__getRank(void );



static inline bool RPLOF0P__RPLOF__recalculateRank(void );
#line 128
static bool RPLOF0P__RPLOF__recomputeRoutes(void );
#line 253
static inline void RPLOF0P__RPLOF__resetRank(void );
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__send(struct ip6_packet *msg);





static void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__recv(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x414d7be0, 
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 39 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);





static inline error_t /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__send(uint8_t code, struct ip6_packet *msg);



static inline void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
static error_t UDPShellP__UDP__sendto(struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t UDPShellP__UDP__bind(uint16_t port);
# 11 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
static char *UDPShellP__ShellCommand__eval(
# 42 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x41532868, 
# 11 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
int argc, char **argv);
# 3 "/opt/tinyos-2.x/tos/lib/net/blip/shell/RegisterShellCommand.nc"
static char *UDPShellP__RegisterShellCommand__getCommandName(
# 43 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x41533828);
# 6 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
static error_t UDPShellP__ICMPPing__ping(struct in6_addr *target, uint16_t period, uint16_t n);
# 60 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
struct sockaddr_in6 UDPShellP__session_endpoint;

uint64_t UDPShellP__uptime;

enum UDPShellP____nesc_unnamed4416 {
  UDPShellP__N_EXTERNAL = 1U
};


enum UDPShellP____nesc_unnamed4417 {
  UDPShellP__N_BUILTINS = 5, 

  UDPShellP__N_ARGS = 10, 
  UDPShellP__CMD_HELP = 0, 
  UDPShellP__CMD_ECHO = 1, 
  UDPShellP__CMD_PING6 = 2, 
  UDPShellP__CMD_TRACERT6 = 3, 

  UDPShellP__CMD_NO_CMD = 0xfe, 
  UDPShellP__CMDNAMSIZ = 10
};

struct UDPShellP__cmd_name {
  uint8_t c_len;
  char c_name[UDPShellP__CMDNAMSIZ];
};
struct UDPShellP__cmd_builtin {
  void (*action)(int arg_0x4152a570, char **arg_0x4152a708);
};

struct UDPShellP__cmd_name UDPShellP__externals[UDPShellP__N_EXTERNAL];


static inline void UDPShellP__Boot__booted(void );
#line 113
char UDPShellP__reply_buf[MAX_REPLY_LEN];
char *UDPShellP__help_str = "sdsh-0.9\tbuiltins: [help, echo, ping6, uptime, ident]\n";
const char *UDPShellP__ping_fmt = " icmp_seq=%i ttl=%i time=%i ms\n";
const char *UDPShellP__ping_summary = "%i packets transmitted, %i received\n";
char *UDPShellP__ident_string = "\t[app: "
"UDPEchoC""]\n\t[user: ""sd""]\n\t[host: ""ubuntu"
"]\n\t[time: ""0x528f5e8eL""]\n";


static void UDPShellP__action_help(int argc, char **argv);
#line 152
static char *UDPShellP__ShellCommand__getBuffer(uint8_t cmd_id, uint16_t len);





static inline void UDPShellP__ShellCommand__write(uint8_t cmd_id, char *str, int len);



static void UDPShellP__action_echo(int argc, char **argv);
#line 180
static void UDPShellP__action_ping6(int argc, char **argv);








static inline void UDPShellP__action_uptime(int argc, char **argv);
#line 201
static inline void UDPShellP__action_ident(int argc, char **argv);




struct UDPShellP__cmd_name UDPShellP__builtins[UDPShellP__N_BUILTINS] = { { 4, "help" }, 
{ 4, "echo" }, 
{ 5, "ping6" }, 
{ 6, "uptime" }, 
{ 5, "ident" } };
struct UDPShellP__cmd_builtin UDPShellP__builtin_actions[UDPShellP__N_BUILTINS] = { { UDPShellP__action_help }, 
{ UDPShellP__action_echo }, 
{ UDPShellP__action_ping6 }, 
{ UDPShellP__action_uptime }, 
{ UDPShellP__action_ident } };




static inline void UDPShellP__init_argv(char *cmd, uint16_t len, char **argv, int *argc);
#line 239
static int UDPShellP__lookup_cmd(char *cmd, int dbsize, struct UDPShellP__cmd_name *db);









static inline void UDPShellP__UDP__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta);
#line 275
static inline void UDPShellP__ICMPPing__pingReply(struct in6_addr *source, struct icmp_stats *stats);










static inline void UDPShellP__ICMPPing__pingDone(uint16_t ping_rcv, uint16_t ping_n);
#line 299
static inline char *UDPShellP__ShellCommand__default__eval(uint8_t cmd_id, int argc, char **argv);


static inline char *UDPShellP__RegisterShellCommand__default__getCommandName(uint8_t cmd_id);
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t ICMPPingP__IP_ECHO__send(struct ip6_packet *msg);
# 39 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool ICMPPingP__IPAddress__setSource(struct ip6_hdr *hdr);
# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
static void ICMPPingP__ICMPPing__pingDone(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x41541030, 
# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
uint16_t ping_rcv, uint16_t ping_n);
#line 8
static void ICMPPingP__ICMPPing__pingReply(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x41541030, 
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
struct in6_addr *source, struct icmp_stats *stats);
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t ICMPPingP__PingTimer__getNow(void );
#line 92
static bool ICMPPingP__PingTimer__isRunning(void );
#line 64
static void ICMPPingP__PingTimer__startPeriodic(uint32_t dt);
#line 78
static void ICMPPingP__PingTimer__stop(void );
# 43 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint16_t ICMPPingP__ping_seq;
#line 43
uint16_t ICMPPingP__ping_n;
#line 43
uint16_t ICMPPingP__ping_rcv;
#line 43
uint16_t ICMPPingP__ping_ident;
struct in6_addr ICMPPingP__ping_dest;

static inline void ICMPPingP__sendPing(struct in6_addr *dest, uint16_t seqno);
#line 84
static inline error_t ICMPPingP__ICMPPing__ping(uint8_t client, struct in6_addr *target, 
uint16_t period, 
uint16_t n);










static inline void ICMPPingP__PingTimer__fired(void );
#line 109
static inline void ICMPPingP__IP_ECHO__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta);
#line 125
static inline void ICMPPingP__ICMPPing__default__pingReply(uint8_t client, struct in6_addr *source, 
struct icmp_stats *ping_stats);


static inline void ICMPPingP__ICMPPing__default__pingDone(uint8_t client, uint16_t n, uint16_t m);



static inline void ICMPPingP__IPAddress__changed(bool global_valid);
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
static char *RouteCmdP__ShellCommand__getBuffer(uint16_t len);





static void RouteCmdP__ShellCommand__write(char *str, int len);
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTable.nc"
static struct route_entry *RouteCmdP__ForwardingTable__getTable(int *size);
#line 16
static error_t RouteCmdP__ForwardingTable__delRoute(route_key_t key);
#line 10
static route_key_t RouteCmdP__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, 
struct in6_addr *next_hop, uint8_t ifindex);
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void RouteCmdP__Timer__startOneShot(uint32_t dt);
# 43 "/opt/tinyos-2.x/tos/lib/net/blip/shell/RouteCmdP.nc"
char *RouteCmdP__header = "key\tdestination\t\tgateway\t\tiface\n";



#line 44
struct RouteCmdP____nesc_unnamed4418 {
  int ifindex;
  char *name;
} RouteCmdP__ifaces[3] = { { 0, "any" }, { 1, "pan" }, { 2, "ppp" } };

static inline char *RouteCmdP__ifnam(int ifidx);








int RouteCmdP__cur_entry;
static inline void RouteCmdP__Timer__fired(void );
#line 93
static inline char *RouteCmdP__ShellCommand__eval(int argc, char **argv);
# 5 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommandP.nc"
static inline char */*RouteCmdC.ShellCommandC.ShellCommandP*/ShellCommandP__0__RegisterShellCommand__getCommandName(void );
# 109 "/opt/tinyos-2.x/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 109
{
   __asm volatile ("cli");}

#line 126
#line 125
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 129
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 135
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 345 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
static inline 
#line 344
void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success)
#line 346
{
}

# 82 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiPacket__default__sendDone(txBuf, rxBuf, len, error);
#line 82
}
#line 82
# 116 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP__SPI__read(void )
#line 116
{
#line 116
  return * (volatile uint8_t *)(0x2E + 0x20);
}

# 97 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__read(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = HplAtm128SpiP__SPI__read();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 117 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__write(uint8_t d)
#line 117
{
#line 117
  * (volatile uint8_t *)(0x2E + 0x20) = d;
}

# 103 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__write(uint8_t data){
#line 103
  HplAtm128SpiP__SPI__write(data);
#line 103
}
#line 103










inline static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__enableInterrupt(bool enabled){
#line 113
  HplAtm128SpiP__SPI__enableInterrupt(enabled);
#line 113
}
#line 113
# 245 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
static inline error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__sendNextPart(void )
#line 245
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  /* atomic removed: atomic calls only */
#line 252
  {
    myLen = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__len;
    tx = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__txBuffer;
    rx = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__rxBuffer;
    tmpPos = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__pos;
    end = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__pos + /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SPI_ATOMIC_SIZE;
    end = end > /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__len ? /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__len : end;
  }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 263
      if (tx != (void *)0) {
        val = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiByte__write(tx[tmpPos]);
        }
      else {
#line 266
        val = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiByte__write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__enableInterrupt(TRUE);
  /* atomic removed: atomic calls only */
#line 276
  {
    if (tx != (void *)0) {
      /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__write(tx[tmpPos]);
      }
    else {
#line 280
      /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__write(0);
      }
    /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__pos = tmpPos;
  }


  return SUCCESS;
}

#line 348
static inline void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__dataReady(uint8_t data)
#line 348
{
  bool again;

  /* atomic removed: atomic calls only */
#line 351
  {
    if (/*Atm128SpiC.SpiMaster*/Atm128SpiP__0__rxBuffer != (void *)0) {
        /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__rxBuffer[/*Atm128SpiC.SpiMaster*/Atm128SpiP__0__pos] = data;
      }

    /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__pos++;
  }
  /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__pos < /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__len;
  }

  if (again) {
      /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 373
      {
        myLen = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__len;
        rx = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__rxBuffer;
        tx = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__txBuffer;
        /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__rxBuffer = (void *)0;
        /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__txBuffer = (void *)0;
        /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__len = 0;
        /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__pos = 0;
      }
      discard = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__read();

      /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 109 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP__SPI__dataReady(uint8_t data){
#line 109
  /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__dataReady(data);
#line 109
}
#line 109
# 95 "/opt/tinyos-2.x/tos/chips/atm128rfa1/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
{
  McuSleepC__powerState = -1;
}

# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP__Mcu__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 125 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
static inline bool HplAtm128SpiP__SPI__isInterruptPending(void )
#line 125
{
  return (* (volatile uint8_t *)(0x2D + 0x20) & (1 << 7)) != 0;
}

# 136 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static bool /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__isInterruptPending(void ){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = HplAtm128SpiP__SPI__isInterruptPending();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 113 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
static inline void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__default__fired(uint8_t pin)
#line 113
{
}

# 68 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(uint8_t arg_0x406df850){
#line 68
  switch (arg_0x406df850) {
#line 68
    case 5:
#line 68
      SerialAutoControlP__ControlInt__fired();
#line 68
      break;
#line 68
    default:
#line 68
      /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__default__fired(arg_0x406df850);
#line 68
      break;
#line 68
    }
#line 68
}
#line 68
# 88 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange0C.nc"
static inline uint8_t HplAtmegaPinChange0C__HplAtmegaPinChange__getPins(void )
#line 88
{
  return * (volatile uint8_t *)(0x03 + 0x20);
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
inline static uint8_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getPins(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = HplAtmegaPinChange0C__HplAtmegaPinChange__getPins();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 76 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange0C.nc"
static inline uint8_t HplAtmegaPinChange0C__HplAtmegaPinChange__getMask(void )
#line 76
{
  return * (volatile uint8_t *)0x6B;
}

# 62 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
inline static uint8_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getMask(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtmegaPinChange0C__HplAtmegaPinChange__getMask();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 88 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
static inline void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__fired(void )
#line 88
{
  uint8_t pins = /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getMask() & (/*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getPins() ^ /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__isFalling);





  if (pins & (1 << 0)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(0);
    }
#line 97
  if (pins & (1 << 1)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(1);
    }
#line 99
  if (pins & (1 << 2)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(2);
    }
#line 101
  if (pins & (1 << 3)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(3);
    }
#line 103
  if (pins & (1 << 4)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(4);
    }
#line 105
  if (pins & (1 << 5)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(5);
    }
#line 107
  if (pins & (1 << 6)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(6);
    }
#line 109
  if (pins & (1 << 7)) {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(7);
    }
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
inline static void HplAtmegaPinChange0C__HplAtmegaPinChange__fired(void ){
#line 40
  /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__fired();
#line 40
}
#line 40
# 97 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 81 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange0C.nc"
static inline void HplAtmegaPinChange0C__HplAtmegaPinChange__setMask(uint8_t value)
#line 81
{
  * (volatile uint8_t *)0x6B = value;
}

# 65 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
inline static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__setMask(uint8_t value){
#line 65
  HplAtmegaPinChange0C__HplAtmegaPinChange__setMask(value);
#line 65
}
#line 65
# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange0C.nc"
static inline void HplAtmegaPinChange0C__HplAtmegaPinChange__enable(void )
#line 59
{
  * (volatile uint8_t *)0x68 |= 1 << 0;
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange.nc"
inline static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__enable(void ){
#line 51
  HplAtmegaPinChange0C__HplAtmegaPinChange__enable();
#line 51
}
#line 51
# 397 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 132 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 99 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 192 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 192
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 133 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 401 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 203 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 67 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 102 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialResetP.nc"
static inline uint8_t SerialResetP__SerialPacketInfo__offset(void )
{
  return 0;
}

# 358 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x4080dcd0){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x4080dcd0) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    case 0x72:
#line 15
      __nesc_result = SerialResetP__SerialPacketInfo__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x4080dcd0);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 244 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56









inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 529 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 529
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 531
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 668 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 668
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 671
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 699
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 118 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 120
    {
      if (HdlcTranslateC__state.sendEscape) {
          HdlcTranslateC__state.sendEscape = 0;
          HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
          HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
        }
      else {
          HdlcTranslateC__SerialFrameComm__putDone();
        }
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 182 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 182
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41





inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 176 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 176
{
  * (volatile uint8_t *)0xC0 |= 1 << 6;
  * (volatile uint8_t *)0xC1 |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 332 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 332
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 331 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 331
{
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 124 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 69 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 64 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 167 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 167
{
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x405b3948){
#line 53
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x405b3948);
#line 53
}
#line 53
# 71 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 73
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
        {
          unsigned char __nesc_temp = 
#line 78
          SUCCESS;

#line 78
          return __nesc_temp;
        }
      }
#line 80
    {
      unsigned char __nesc_temp = 
#line 80
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

#line 80
      return __nesc_temp;
    }
  }
}

# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__request(uint8_t arg_0x404b5010){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(arg_0x404b5010);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 218 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 218
{
  v &= (1 << 1) | (1 << 0);
  * (volatile uint8_t *)(0x2C + 0x20) = (* (volatile uint8_t *)(0x2C + 0x20) & ~((1 << 1) | (1 << 0))) | v;
}

# 131 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__setClock(uint8_t speed){
#line 131
  HplAtm128SpiP__SPI__setClock(speed);
#line 131
}
#line 131
# 231 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 231
{
  if (on) {
      * (volatile uint8_t *)(0x2D + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x2D + 0x20) &= ~(1 << 0);
    }
}

# 141 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__setMasterDoubleSpeed(bool on){
#line 141
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(on);
#line 141
}
#line 141
#line 116
inline static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__enableSpi(bool busOn){
#line 116
  HplAtm128SpiP__SPI__enableSpi(busOn);
#line 116
}
#line 116
# 201 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 201
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 2);
    }
}

# 128 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__setClockPhase(bool sampleOnTrailing){
#line 128
  HplAtm128SpiP__SPI__setClockPhase(sampleOnTrailing);
#line 128
}
#line 128
# 187 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 187
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 3);
    }
}

# 125 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__setClockPolarity(bool highWhenIdle){
#line 125
  HplAtm128SpiP__SPI__setClockPolarity(highWhenIdle);
#line 125
}
#line 125
# 174 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 174
{
  if (isMaster) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 4);
    }
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(uint8_t bit)
#line 56
{
#line 56
  * (volatile uint8_t * )36U |= 1 << bit;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SS__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(0);
#line 46
}
#line 46
inline static void HplAtm128SpiP__SCK__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(1);
#line 46
}
#line 46
# 54 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeInput(uint8_t bit)
#line 54
{
#line 54
  * (volatile uint8_t * )36U &= ~(1 << bit);
}

# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MISO__makeInput(void ){
#line 44
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeInput(3);
#line 44
}
#line 44


inline static void HplAtm128SpiP__MOSI__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(2);
#line 46
}
#line 46
# 97 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void )
#line 97
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SS__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 83 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__initMaster(void ){
#line 83
  HplAtm128SpiP__SPI__initMaster();
#line 83
}
#line 83
# 125 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
static inline void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__startSpi(void )
#line 125
{
  /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 127
  {
    /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__initMaster();
    /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__enableInterrupt(FALSE);
    /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__setClockPolarity(FALSE);
    /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__setClockPhase(FALSE);
    /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__enableSpi(TRUE);
#line 145
    /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__setMasterDoubleSpeed(FALSE);
    /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__setClock(1);
  }










  /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__McuPowerState__update();
}

# 90 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static bool /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 396 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
static inline error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__request(uint8_t id)
#line 396
{
  /* atomic removed: atomic calls only */
#line 397
  {
    if (!/*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ArbiterInfo__inUse()) {
        /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__startSpi();
      }
  }
  return /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__request(id);
}

# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Stm25pOffP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 44 "/opt/tinyos-2.x/tos/chips/stm25p/Stm25pOffP.nc"
static inline error_t Stm25pOffP__Stm25pOff__init(void )
#line 44
{
  if (!0U) {
    Stm25pOffP__SpiResource__request();
    }
#line 47
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__Stm25pInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Stm25pOffP__Stm25pOff__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__35__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )46U |= 1 << 3;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led3__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__35__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )46U |= 1 << 2;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )43U |= 1 << 6;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )43U |= 1 << 7;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__35__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )45U |= 1 << 3;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led3__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__35__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )45U |= 1 << 2;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )42U |= 1 << 6;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )42U |= 1 << 7;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput();
#line 46
}
#line 46
# 57 "/opt/tinyos-2.x/tos/platforms/ucbase/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 58
  {
    ;

    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led3__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
    LedsP__Led3__set();
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 38 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioOffP.nc"
static inline error_t RFA1RadioOffP__RFA1RadioOff__init(void )
#line 38
{
  if (!1U) {
      * (volatile uint8_t *)0x139 |= 1 << 1;
    }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t McuInitP__RadioInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1RadioOffP__RFA1RadioOff__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 101 "/opt/tinyos-2.x/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__AdcInit__default__init(void )
#line 101
{
#line 101
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t McuInitP__AdcInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuInitP__AdcInit__default__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 211 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~(1 << 0))
     | ((mode & 0x1) << 0);
  }
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__CompareA__setMode(mode);
#line 70
}
#line 70
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtmRfa1TimerMacP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 200 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__stop(void )
{
  * (volatile uint8_t *)0xDF &= ~(1 << 0);

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 62 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop(void ){
#line 62
  HplAtmRfa1TimerMacP__CompareA__stop();
#line 62
}
#line 62
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline error_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init(void )
{
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop();
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__setMode(0);

  return SUCCESS;
}

# 116 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__Counter__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 3;
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__start(void ){
#line 61
  HplAtmRfa1TimerMacP__Counter__start();
#line 61
}
#line 61
# 130 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode)
{
  mode &= (1 << 5) | (1 << 4);


  if ((mode & (1 << 4)) != 0) {
    * (volatile uint8_t *)0xB6 = 1 << 5;
    }
  /* atomic removed: atomic calls only */
#line 138
  * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~((1 << 5) | (1 << 4))) | mode;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__setMode(uint8_t mode){
#line 72
  HplAtmRfa1TimerMacP__Counter__setMode(mode);
#line 72
}
#line 72
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void )
{
  /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__setMode(48);
  /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__start();

  return SUCCESS;
}

# 81 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Timer__start(void )
{
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__start(void ){
#line 61
  HplAtmRfa1Timer1P__Timer__start();
#line 61
}
#line 61
# 95 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0x80 = (* (volatile uint8_t *)0x80 & ~(0x3 << 0))
     | (((mode >> 3) & 0x3) << 0);

    * (volatile uint8_t *)0x81 = ((* (volatile uint8_t *)0x81 & ~((0x3 << 3) | (0x7 << 0)))
     | (((mode >> 5) & 0x3) << 3))
     | (((mode >> 0) & 0x7) << 0);
  }
}

# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__setMode(uint8_t mode){
#line 72
  HplAtmRfa1Timer1P__Timer__setMode(mode);
#line 72
}
#line 72
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void )
{
  /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__setMode(2);
  /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__start();

  return SUCCESS;
}

# 291 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~(1 << 1))
     | ((mode & 0x1) << 1);
  }
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__CompareB__setMode(mode);
#line 70
}
#line 70
# 280 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__stop(void )
{
  * (volatile uint8_t *)0xDF &= ~(1 << 1);

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 62 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop(void ){
#line 62
  HplAtmRfa1TimerMacP__CompareB__stop();
#line 62
}
#line 62
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline error_t /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Init__init(void )
{
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop();
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__setMode(0);

  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t McuInitP__TimerInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 72
{
  /* atomic removed: atomic calls only */


  {
    uint8_t wraps_ok = 0;
    uint8_t wraps = 255;
    uint16_t now;
    uint16_t prev_cycles_min = 0xffff;
    uint16_t prev_cycles_max = 0;


    * (volatile uint8_t *)0x81 = 1 << 0;
    * (volatile uint8_t *)0xB6 = 1 << 5;
    * (volatile uint8_t *)0xB1 = 1 << 0;


    while (wraps_ok < 50 && --wraps != 0) 
      {
        while (* (volatile uint8_t *)0xB2 != 0) 
          ;

        now = * (volatile uint16_t *)0x84;

        while (* (volatile uint8_t *)0xB2 != 64) 
          ;

        MeasureClockC__cycles = * (volatile uint16_t *)0x84 - now;

        if (prev_cycles_min < MeasureClockC__cycles) {
          prev_cycles_min = MeasureClockC__cycles;
          }
#line 103
        if (prev_cycles_max > MeasureClockC__cycles) {
          prev_cycles_max = MeasureClockC__cycles;
          }
        if (prev_cycles_max - prev_cycles_min <= 1) {
            wraps_ok++;
          }
        else 
#line 108
          {
            wraps_ok = 0;
            prev_cycles_min = 0xffff;
            prev_cycles_max = 0;
          }
      }


    * (volatile uint8_t *)0xB6 = * (volatile uint8_t *)0x81 = * (volatile uint8_t *)0xB1 = 0;
    while (* (volatile uint8_t *)0xB6 & ((1 << 1) | (1 << 0))) 
      ;
  }

  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t McuInitP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__systemClockInit(void )
{
  /* atomic removed: atomic calls only */

  {

    * (volatile uint8_t *)0x61 = 0x80;


    * (volatile uint8_t *)0x61 = 0x0F;
  }
#line 74
  return SUCCESS;
}

static inline error_t McuInitP__Init__init(void )
{
  error_t ok;

#line 80
  * (volatile uint8_t *)0x135 |= 1 << 4;
  * (volatile uint8_t *)0x134 |= 1 << 4;
  * (volatile uint8_t *)0x133 |= 1 << 4;
  * (volatile uint8_t *)0x132 |= 1 << 4;

  * (volatile uint8_t *)(0x35 + 0x20) |= 1 << 7;
  * (volatile uint8_t *)(0x35 + 0x20) |= 1 << 7;




  ok = McuInitP__systemClockInit();
  ok = ecombine(ok, McuInitP__MeasureClock__init());
  ok = ecombine(ok, McuInitP__TimerInit__init());
  ok = ecombine(ok, McuInitP__AdcInit__init());
  ok = ecombine(ok, McuInitP__RadioInit__init());

  return ok;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__McuInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuInitP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 52 "/opt/tinyos-2.x/tos/platforms/ucbase/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;

  ok = PlatformP__McuInit__init();
  ok = ecombine(ok, PlatformP__LedsInit__init());
  ok = ecombine(ok, PlatformP__Stm25pInit__init());

  return ok;
}

# 164 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__PlatformInit__init(void )
{
  RFA1DriverLayerP__rxMsg = &RFA1DriverLayerP__rxMsgBuffer;


  RFA1DriverLayerP__rssiClear = 0;
  RFA1DriverLayerP__rssiBusy = 90;

  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1DriverLayerP__PlatformInit__init();
#line 62
  __nesc_result = ecombine(__nesc_result, PlatformP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__size(void )
#line 57
{
  return /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size;
}

# 58 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 89 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__put(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = ICMPCoreP__ICMP_IP__send(155, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 46 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline error_t /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__send(uint8_t code, struct ip6_packet *msg)
#line 46
{
  return /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__send(msg);
}

# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__send(ICMPV6_CODE_DAO, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 113 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRank.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getDefaultRoute(struct in6_addr *next_hop){
#line 113
  unsigned char __nesc_result;
#line 113

#line 113
  __nesc_result = RPLRankP__RPLRankInfo__getDefaultRoute(next_hop);
#line 113

#line 113
  return __nesc_result;
#line 113
}
#line 113
# 432 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDefaultRoute(struct in6_addr *next)
#line 432
{
  return /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getDefaultRoute(next);
}

# 43 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDefaultRoute(struct in6_addr *next_hop){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDefaultRoute(next_hop);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__getLLAddr(struct in6_addr *addr){
#line 29
  unsigned char __nesc_result;
#line 29

#line 29
  __nesc_result = IPAddressP__IPAddress__getLLAddr(addr);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 69 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline void /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__printQueue(void )
#line 69
{
}

#line 53
static inline bool /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__empty(void )
#line 53
{
  return /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size == 0;
}









static inline /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__head(void )
#line 65
{
  return /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue[/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head];
}

#line 85
static inline /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__dequeue(void )
#line 85
{
  /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t t = /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__head();

#line 87
  ;
  if (!/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__empty()) {
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head++;
      if (/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head == 5) {
#line 90
        /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head = 0;
        }
#line 91
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size--;
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__printQueue();
    }
  return t;
}

# 81 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__t  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__dequeue(void ){
#line 81
  struct __nesc_unnamed4335 *__nesc_result;
#line 81

#line 81
  __nesc_result = /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 428 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getMOP(void )
#line 428
{
  return /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP;
}

# 52 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getMOP(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getMOP();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 84 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRank.nc"
inline static uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(struct in6_addr *node){
#line 84
  unsigned short __nesc_result;
#line 84

#line 84
  __nesc_result = RPLRankP__RPLRankInfo__getRank(node);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 468 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getRank(void )
#line 468
{
  return /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP);
}

# 44 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static uint16_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getRank(void ){
#line 44
  unsigned short __nesc_result;
#line 44

#line 44
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getRank();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 107 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__runTask(void )
#line 107
{
  dao_entry_t *dao_msg;




  struct in6_addr next_hop;
  struct dao_base_t *dao;

  if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getRank() == ROOT_RANK) {
      return;
    }

  if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__size() > 0 && /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getMOP() != 0) {
      dao_msg = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__dequeue();




      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__getLLAddr(& dao_msg->s_pkt.ip6_hdr.ip6_src);
      if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDefaultRoute(&next_hop) != SUCCESS) {
          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__put(dao_msg);
          ;
#line 129
          ;
          return;
        }
      ip_memcpy((uint8_t *)& dao_msg->s_pkt.ip6_hdr.ip6_dst, 
      (uint8_t *)&next_hop, sizeof(struct in6_addr ));






      dao = (struct dao_base_t *)dao_msg->s_pkt.ip6_data->iov_base;

      ;
#line 142
      ;
      ;
#line 143
      ;

      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__send(& dao_msg->s_pkt);
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__put(dao_msg);

      if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__size()) {


          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__postTask();
        }
    }
}

# 68 "/opt/tinyos-2.x/tos/lib/net/blip/IPAddressP.nc"
static inline bool IPAddressP__IPAddress__getGlobalAddr(struct in6_addr *addr)
#line 68
{
  *addr = IPAddressP__m_addr;
  return IPAddressP__m_valid_addr;
}

# 34 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool RPLRankP__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/Ieee154AddressP.nc"
static inline ieee154_panid_t Ieee154AddressP__Ieee154Address__getPanId(void )
#line 28
{
  return Ieee154AddressP__m_panid;
}

# 5 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/Ieee154Address.nc"
inline static ieee154_panid_t IPAddressP__Ieee154Address__getPanId(void ){
#line 5
  unsigned short __nesc_result;
#line 5

#line 5
  __nesc_result = Ieee154AddressP__Ieee154Address__getPanId();
#line 5

#line 5
  return __nesc_result;
#line 5
}
#line 5
# 31 "/opt/tinyos-2.x/tos/lib/net/blip/Ieee154AddressP.nc"
static inline ieee154_saddr_t Ieee154AddressP__Ieee154Address__getShortAddr(void )
#line 31
{
  return Ieee154AddressP__m_saddr;
}

# 6 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/Ieee154Address.nc"
inline static ieee154_saddr_t IPAddressP__Ieee154Address__getShortAddr(void ){
#line 6
  unsigned short __nesc_result;
#line 6

#line 6
  __nesc_result = Ieee154AddressP__Ieee154Address__getShortAddr();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6

inline static ieee154_laddr_t IPAddressP__Ieee154Address__getExtAddr(void ){
#line 7
  struct ieee_eui64 __nesc_result;
#line 7

#line 7
  __nesc_result = Ieee154AddressP__Ieee154Address__getExtAddr();
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 42 "/opt/tinyos-2.x/tos/platforms/ucbase/LocalIeeeEui64C.nc"
static inline ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void )
#line 42
{
  ieee_eui64_t id;

  id.data[0] = 0x00;
  id.data[1] = 0x12;
  id.data[2] = 0x6d;




  id.data[3] = 'L';
  id.data[4] = 'O';

  id.data[5] = 0;
  id.data[6] = TOS_NODE_ID >> 8;
  id.data[7] = TOS_NODE_ID & 0xff;
  return id;
}

# 48 "/opt/tinyos-2.x/tos/interfaces/LocalIeeeEui64.nc"
inline static ieee_eui64_t Ieee154AddressP__LocalIeeeEui64__getId(void ){
#line 48
  struct ieee_eui64 __nesc_result;
#line 48

#line 48
  __nesc_result = LocalIeeeEui64C__LocalIeeeEui64__getId();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t ICMPCoreP__IP__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = IPProtocolsP__IP__send(IANA_ICMP, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 286
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 281
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 454 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getInstanceID(void )
#line 454
{
  return /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID;
}

# 45 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static uint8_t RPLRankP__RouteInfo__getInstanceID(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getInstanceID();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 393 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline bool RPLRankP__ForwardingEvents__initiate(struct ip6_packet *pkt, 
struct in6_addr *next_hop)
#line 394
{
  unsigned char *__nesc_temp49;
  unsigned char *__nesc_temp48;
#line 395
  uint16_t len;
  static struct ip_iovec v;
  static rpl_data_hdr_t data_hdr;


  return TRUE;


  if (pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt == IANA_ICMP) {
    return TRUE;
    }
  __nesc_hton_uint8(data_hdr.ip6_ext_outer.ip6e_nxt.nxdata, pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt);
  __nesc_hton_uint8(data_hdr.ip6_ext_outer.ip6e_len.nxdata, 0);


  __nesc_hton_uint8(data_hdr.ip6_ext_inner.ip6e_nxt.nxdata, RPL_HBH_RANK_TYPE);
  __nesc_hton_uint8(data_hdr.ip6_ext_inner.ip6e_len.nxdata, sizeof(rpl_data_hdr_t ) - 
  (unsigned short )& ((rpl_data_hdr_t *)0)->bitflag);
  __nesc_hton_uint8(data_hdr.bitflag.nxdata, 0);
  __nesc_hton_uint8(data_hdr.bitflag.nxdata, 0 << 7);
  (__nesc_temp48 = data_hdr.bitflag.nxdata, __nesc_hton_uint8(__nesc_temp48, __nesc_ntoh_uint8(__nesc_temp48) | (0 << 6)));
  (__nesc_temp49 = data_hdr.bitflag.nxdata, __nesc_hton_uint8(__nesc_temp49, __nesc_ntoh_uint8(__nesc_temp49) | (0 << 5)));
  __nesc_hton_uint8(data_hdr.instance_id.nxdata, RPLRankP__RouteInfo__getInstanceID());
  __nesc_hton_uint16(data_hdr.senderRank.nxdata, RPLRankP__nodeRank);
  pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IPV6_HOP;

  len = (((uint16_t )pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff;


  v.iov_base = (uint8_t *)&data_hdr;
  v.iov_len = sizeof(rpl_data_hdr_t );
  v.iov_next = pkt->ip6_data;


  pkt->ip6_data = &v;
  len = len + v.iov_len;
  pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )len << 8) | ((uint16_t )len >> 8)) & 0xffff;
  return TRUE;
}

# 349 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline bool IPForwardingEngineP__ForwardingEvents__default__initiate(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop)
#line 350
{
  return TRUE;
}

# 13 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
inline static bool IPForwardingEngineP__ForwardingEvents__initiate(uint8_t arg_0x40b23418, struct ip6_packet *pkt, struct in6_addr *next_hop){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  switch (arg_0x40b23418) {
#line 13
    case RPL_IFACE:
#line 13
      __nesc_result = RPLRankP__ForwardingEvents__initiate(pkt, next_hop);
#line 13
      break;
#line 13
    default:
#line 13
      __nesc_result = IPForwardingEngineP__ForwardingEvents__default__initiate(arg_0x40b23418, pkt, next_hop);
#line 13
      break;
#line 13
    }
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 356 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline error_t IPForwardingEngineP__IPForward__default__send(uint8_t ifindex, struct in6_addr *next_hop, 
struct ip6_packet *pkt, 
void *data)
#line 358
{




  return SUCCESS;
}

# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
inline static error_t IPForwardingEngineP__IPForward__send(uint8_t arg_0x40b1d510, struct in6_addr *next_hop, struct ip6_packet *msg, void *data){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  switch (arg_0x40b1d510) {
#line 18
    case ROUTE_IFACE_154:
#line 18
      __nesc_result = IPNeighborDiscoveryP__IPForward__send(next_hop, msg, data);
#line 18
      break;
#line 18
    default:
#line 18
      __nesc_result = IPForwardingEngineP__IPForward__default__send(arg_0x40b1d510, next_hop, msg, data);
#line 18
      break;
#line 18
    }
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 136 "/opt/tinyos-2.x/tos/lib/net/blip/IPAddressP.nc"
static inline bool IPAddressP__IPAddress__isLLAddress(struct in6_addr *addr)
#line 136
{
  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff) || (
  addr->in6_u.u6_addr8[0] == 0xff && (
  addr->in6_u.u6_addr8[1] & 0x0f) <= 2)) {
    return TRUE;
    }
#line 141
  return FALSE;
}

# 50 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPForwardingEngineP__IPAddress__isLLAddress(struct in6_addr *addr){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = IPAddressP__IPAddress__isLLAddress(addr);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
#line 44
inline static bool IPForwardingEngineP__IPAddress__isLocalAddress(struct in6_addr *addr){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = IPAddressP__IPAddress__isLocalAddress(addr);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 195 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline error_t IPForwardingEngineP__IP__send(struct ip6_packet *pkt)
#line 195
{
  struct route_entry *next_hop_entry = 
  IPForwardingEngineP__ForwardingTable__lookupRoute(pkt->ip6_hdr.ip6_dst.in6_u.u6_addr8, 128);






  if (IPForwardingEngineP__IPAddress__isLocalAddress(& pkt->ip6_hdr.ip6_dst) && 
  pkt->ip6_hdr.ip6_dst.in6_u.u6_addr8[0] != 0xff) {
      ;
#line 206
      ;
      return FAIL;
    }
  else {
#line 208
    if (IPForwardingEngineP__IPAddress__isLLAddress(& pkt->ip6_hdr.ip6_dst) && (
    !next_hop_entry || next_hop_entry->prefixlen < 128)) {
#line 221
        ;
#line 221
        ;
        ;
#line 222
        ;
        ;
#line 223
        ;
        pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_hlim = 1;

        if (pkt->ip6_hdr.ip6_dst.in6_u.u6_addr8[0] != 0xff) {
            return IPForwardingEngineP__do_send(ROUTE_IFACE_154, & pkt->ip6_hdr.ip6_dst, pkt);
          }
        else 
#line 228
          {
            return IPForwardingEngineP__IPForward__send(ROUTE_IFACE_154, & pkt->ip6_hdr.ip6_dst, pkt, (void *)0);
          }
      }
    else {
#line 231
      if (next_hop_entry) {
          ;
#line 232
          ;


          if (!IPForwardingEngineP__ForwardingEvents__initiate(next_hop_entry->ifindex, pkt, 
          & next_hop_entry->next_hop)) {
            return FAIL;
            }
          return IPForwardingEngineP__do_send(next_hop_entry->ifindex, & next_hop_entry->next_hop, pkt);
        }
      }
    }
#line 241
  return FAIL;
}

# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t IPProtocolsP__SubIP__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = IPForwardingEngineP__IP__send(msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 88 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t */*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__get(void )
#line 88
{
  if (/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free) {
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t *rval = /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index];

#line 91
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index] = (void *)0;
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free--;
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index++;
      if (/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index == 3) {
          /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static IPForwardingEngineP__Pool__t * IPForwardingEngineP__Pool__get(void ){
#line 97
  struct in6_iid *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 5 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/Ieee154Address.nc"
inline static ieee154_panid_t IPNeighborDiscoveryP__Ieee154Address__getPanId(void ){
#line 5
  unsigned short __nesc_result;
#line 5

#line 5
  __nesc_result = Ieee154AddressP__Ieee154Address__getPanId();
#line 5

#line 5
  return __nesc_result;
#line 5
}
#line 5
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPNeighborDiscoveryP__IPAddress__getLLAddr(struct in6_addr *addr){
#line 29
  unsigned char __nesc_result;
#line 29

#line 29
  __nesc_result = IPAddressP__IPAddress__getLLAddr(addr);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t IPDispatchP__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(IPDispatchP__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 86 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__metadataLength(message_t *msg)
{
  return 0;
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
inline static uint8_t RFA1DriverLayerP__Config__metadataLength(message_t *msg){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = RFA1RadioP__RFA1DriverConfig__metadataLength(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 794 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__RadioPacket__metadataLength(message_t *msg)
{
  return RFA1DriverLayerP__Config__metadataLength(msg) + sizeof(rfa1_metadata_t );
}

# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = RFA1DriverLayerP__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(msg) + sizeof(flags_metadata_t );
}

# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 136 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(msg) + sizeof(timestamp_metadata_t );
}

# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 235 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__metadataLength(msg) + sizeof(link_metadata_t );
}

#line 183
static inline link_metadata_t */*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__metadataLength(msg);
}






static inline void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay)
{
  /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(msg)->retryDelay = retryDelay;
}

# 53 "/opt/tinyos-2.x/tos/interfaces/PacketLink.nc"
inline static void IPDispatchP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay){
#line 53
  /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetryDelay(msg, retryDelay);
#line 53
}
#line 53
# 188 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(message_t *msg, uint16_t maxRetries)
{
  /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(msg)->maxRetries = maxRetries;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/PacketLink.nc"
inline static void IPDispatchP__PacketLink__setRetries(message_t * msg, uint16_t maxRetries){
#line 46
  /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(msg, maxRetries);
#line 46
}
#line 46
# 69 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline void /*IPDispatchC.QueueC*/QueueC__0__printQueue(void )
#line 69
{
}

#line 61
static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 12;
}

#line 57
static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__size(void )
#line 57
{
  return /*IPDispatchC.QueueC*/QueueC__0__size;
}

#line 97
static inline error_t /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(/*IPDispatchC.QueueC*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*IPDispatchC.QueueC*/QueueC__0__Queue__size() < /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize()) {
      ;
      /*IPDispatchC.QueueC*/QueueC__0__queue[/*IPDispatchC.QueueC*/QueueC__0__tail] = newVal;
      /*IPDispatchC.QueueC*/QueueC__0__tail++;
      if (/*IPDispatchC.QueueC*/QueueC__0__tail == 12) {
#line 102
        /*IPDispatchC.QueueC*/QueueC__0__tail = 0;
        }
#line 103
      /*IPDispatchC.QueueC*/QueueC__0__size++;
      /*IPDispatchC.QueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t IPDispatchP__SendQueue__enqueue(IPDispatchP__SendQueue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 89 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t IPDispatchP__SendEntryPool__put(IPDispatchP__SendEntryPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t IPDispatchP__FragPool__put(IPDispatchP__FragPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void RFA1BarePacketP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  RFA1DriverLayerP__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 19 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1BarePacketP.nc"
static inline void RFA1BarePacketP__BarePacket__setPayloadLength(message_t *msg, uint8_t len)
{

  RFA1BarePacketP__RadioPacket__setPayloadLength(msg, len - sizeof(rfa1_header_t ));
}

# 94 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void IPDispatchP__BarePacket__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  RFA1BarePacketP__BarePacket__setPayloadLength(msg, len);
#line 94
}
#line 94
#line 126
inline static void * IPDispatchP__BarePacket__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = RFA1BarePacketP__BarePacket__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 337 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__setFragDgramOffset(struct packed_lowmsg *msg, uint8_t size)
#line 337
{
  uint8_t *buf = msg->data;

#line 339
  if (buf == (void *)0) {
#line 339
    return 1;
    }




  if ((*buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 345
    return 1;
    }
#line 346
  buf += 4;
  *buf = size;
  return 0;
}

#line 321
static __inline uint8_t IPDispatchP__setFragDgramTag(struct packed_lowmsg *msg, uint16_t tag)
#line 321
{
  uint8_t *buf = msg->data;

#line 323
  if (buf == (void *)0) {
#line 323
    return 1;
    }




  if ((*buf >> 3) != LOWPAN_FRAG1_PATTERN && (
  *buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 330
    return 1;
    }
#line 331
  buf += 2;

  buf[0] = tag >> 8;
  buf[1] = tag & 0xff;
  return 0;
}

#line 301
static __inline uint8_t IPDispatchP__setFragDgramSize(struct packed_lowmsg *msg, uint16_t size)
#line 301
{
  uint8_t *buf = msg->data;

#line 303
  if (buf == (void *)0) {
#line 303
    return 1;
    }



  if ((*buf >> 3) != LOWPAN_FRAG1_PATTERN && (
  *buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 309
    return 1;
    }
#line 310
  size = size & 0x7ff;


  *buf &= 0xf8;
  *buf |= size >> 8;
  buf[1] = size & 0xff;


  return 0;
}

#line 114
static __inline uint8_t IPDispatchP__setupHeaders(struct packed_lowmsg *packed, uint16_t headers)
#line 114
{
  uint8_t *buf = packed->data;
  uint16_t len = packed->len;

#line 117
  if (packed == (void *)0) {
#line 117
    return 1;
    }
#line 118
  if (buf == (void *)0) {
#line 118
    return 1;
    }
#line 119
  packed->headers = 0;
#line 136
  if (headers & LOWMSG_FRAG1_HDR) {
      if (len < LOWMSG_FRAG1_LEN) {
#line 137
        return 1;
        }
#line 138
      packed->headers |= LOWMSG_FRAG1_HDR;
      *buf = LOWPAN_FRAG1_PATTERN << 3;
      buf += LOWMSG_FRAG1_LEN;
      len -= LOWMSG_FRAG1_LEN;
    }
  if (headers & LOWMSG_FRAGN_HDR) {
      if (len < LOWMSG_FRAGN_LEN) {
#line 144
        return 1;
        }
#line 145
      packed->headers |= LOWMSG_FRAGN_HDR;
      *buf = LOWPAN_FRAGN_PATTERN << 3;
    }
  return 0;
}

# 261 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static inline int IPDispatchP__pack_udp(uint8_t *buf, size_t cnt, struct ip6_packet *packet, int offset)
#line 261
{
  struct udp_hdr udp;

  if (cnt < 7) {
      return -1;
    }

  if (iov_read(packet->ip6_data, offset, sizeof(struct udp_hdr ), (void *)&udp) != 
  sizeof(struct udp_hdr )) {
      return -1;
    }

  *buf = LOWPAN_NHC_UDP_PATTERN | LOWPAN_NHC_UDP_PORT_FULL;
  memcpy(buf + 1, & udp.srcport, 4);
  memcpy(buf + 5, & udp.chksum, 2);
  return 7;
}










static inline uint8_t IPDispatchP____ipnh_real_length(uint8_t type, struct ip_iovec *pkt, int offset)
#line 288
{
  int start_offset = offset;
#line 289
  int end_offset = offset + 2;
  struct ip6_ext ext;
  struct tlv_hdr tlv;

#line 292
  if (iov_read(pkt, offset, 2, (void *)&ext) != 2) {
    return -1;
    }


  if (type != IPV6_HOP && type != IPV6_DEST) {
    return (ext.ip6e_len + 1) * 8;
    }
  offset += 2;
  for (; ; ) {
      if (offset >= (ext.ip6e_len + 1) * 8) {
#line 302
        break;
        }
#line 303
      if (iov_read(pkt, offset, 2, (void *)&tlv) != 2) {
        return -1;
        }
      if (tlv.type == IPV6_TLV_PAD1) {
          offset += 1;
        }
      else 
#line 308
        {
          offset += 2 + tlv.len;
          if (tlv.type != IPV6_TLV_PADN) {
              end_offset = offset;
            }
        }
    }


  if (offset - start_offset != (ext.ip6e_len + 1) * 8) {
    return 0;
    }


  return end_offset - start_offset;
}

static inline int IPDispatchP__pack_ipnh(uint8_t *dest, size_t cnt, uint8_t *type, struct ip6_packet *packet, int offset)
#line 325
{
  struct ip6_ext ext;
  uint8_t real_len;


  if (iov_read(packet->ip6_data, offset, 2, (void *)&ext) != 2) {
    return -1;
    }
  if (ext.ip6e_len > cnt) {
    return -1;
    }
  *dest = LOWPAN_NHC_IPV6_PATTERN;
  switch (*type) {
      case IPV6_HOP: 
        *dest |= LOWPAN_NHC_EID_HOP;
#line 339
      break;
      case IPV6_ROUTING: 
        *dest |= LOWPAN_NHC_EID_ROUTING;
#line 341
      break;
      case IPV6_FRAG: 
        *dest |= LOWPAN_NHC_EID_FRAG;
#line 343
      break;
      case IPV6_DEST: 
        *dest |= LOWPAN_NHC_EID_DEST;
#line 345
      break;
      case IPV6_MOBILITY: 
        *dest |= LOWPAN_NHC_EID_MOBILE;
#line 347
      break;
      default: 
        return -1;
    }

  real_len = IPDispatchP____ipnh_real_length(*type, packet->ip6_data, offset);
  if (real_len == 0) {
    return -1;
    }


  *type = ext.ip6e_nxt;

  if ((((((
#line 359
  ext.ip6e_nxt == IPV6_HOP || ext.ip6e_nxt == IPV6_ROUTING) || ext.ip6e_nxt == IPV6_FRAG) || 
  ext.ip6e_nxt == IPV6_DEST) || ext.ip6e_nxt == IPV6_MOBILITY) || ext.ip6e_nxt == IPV6_IPV6) || 
  ext.ip6e_nxt == IANA_UDP) {
      *dest |= LOWPAN_NHC_NH;
    }
  else 
#line 363
    {

      dest++;
      *dest = ext.ip6e_nxt;
    }

  dest++;
  * dest++ = real_len;


  if (iov_read(packet->ip6_data, offset + 2, real_len - 2, dest) != real_len - 2) {
    return -1;
    }

  return (ext.ip6e_len + 1) * 8;
}

static inline int IPDispatchP__pack_nhc_chain(uint8_t **dest, size_t cnt, struct ip6_packet *packet)
#line 380
{
  uint8_t nxt = packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt;
  int offset = 0;
#line 382
  int rv;




  while (((((nxt == IPV6_HOP || nxt == IPV6_ROUTING) || nxt == IPV6_FRAG) || 
  nxt == IPV6_DEST) || nxt == IPV6_MOBILITY) || nxt == IPV6_IPV6) {
      int extra;

#line 390
      rv = IPDispatchP__pack_ipnh(*dest, cnt, &nxt, packet, offset);

      if (rv < 0) {
#line 392
        return -1;
        }



      extra = * *dest & LOWPAN_NHC_NH ? 0 : 1;
      *dest += rv + extra;
      offset += rv;
      cnt -= rv;
    }

  if (nxt == IANA_UDP) {
      rv = IPDispatchP__pack_udp(*dest, cnt, packet, offset);

      if (rv < 0) {
#line 406
        return -1;
        }
#line 407
      offset += sizeof(struct udp_hdr );
      *dest += rv;
    }
  return offset;
}

#line 235
static inline uint8_t *IPDispatchP__pack_multicast(uint8_t *buf, struct in6_addr *addr, uint8_t *flags)
#line 235
{

  *flags = 0;
  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xff02 << 8) | ((uint16_t )0xff02 >> 8)) & 0xffff) && 
  IPDispatchP__bit_range_zero_p(addr->in6_u.u6_addr8, 16, 120) == 0) {
      *flags |= LOWPAN_IPHC_AM_M_8;
      *buf = addr->in6_u.u6_addr8[15];
      return buf + 1;
    }
  else {
#line 243
    if (IPDispatchP__bit_range_zero_p(addr->in6_u.u6_addr8, 16, 104) == 0) {
        *flags |= LOWPAN_IPHC_AM_M_32;
        *buf = addr->in6_u.u6_addr8[1];
        memcpy(buf + 1, &addr->in6_u.u6_addr8[13], 3);
        return buf + 4;
      }
    else {
#line 248
      if (IPDispatchP__bit_range_zero_p(addr->in6_u.u6_addr8, 16, 88) == 0) {
          *flags |= LOWPAN_IPHC_AM_M_48;
          *buf = addr->in6_u.u6_addr8[1];
          memcpy(buf + 1, &addr->in6_u.u6_addr8[11], 5);
          return buf + 6;
        }
      else 
#line 253
        {
          *flags += LOWPAN_IPHC_AM_M_128;
          memcpy(buf, addr->in6_u.u6_addr8, 16);
          return buf + 16;
        }
      }
    }
}

# 16 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
inline static int IPDispatchP__NeighborDiscovery__matchContext(struct in6_addr *addr, uint8_t *ctx){
#line 16
  int __nesc_result;
#line 16

#line 16
  __nesc_result = IPNeighborDiscoveryP__NeighborDiscovery__matchContext(addr, ctx);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 97 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline int IPDispatchP__lowpan_extern_match_context(struct in6_addr *addr, uint8_t *ctx_id)
#line 97
{
  return IPDispatchP__NeighborDiscovery__matchContext(addr, ctx_id);
}

# 148 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static __inline uint8_t *IPDispatchP__pack_hlim(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch)
#line 148
{
  if (hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim == 1) {
      *dispatch |= LOWPAN_IPHC_HLIM_1;
    }
  else {
#line 151
    if (hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim == 64) {
        *dispatch |= LOWPAN_IPHC_HLIM_64;
      }
    else {
#line 153
      if (hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim == 255) {
          *dispatch |= LOWPAN_IPHC_HLIM_255;
        }
      else 
#line 155
        {
          *dispatch |= LOWPAN_IPHC_HLIM_NONE;
          * buf++ = hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim;
        }
      }
    }
#line 159
  return buf;
}

#line 136
static __inline uint8_t *IPDispatchP__pack_nh(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch)
#line 136
{
  uint8_t nxt = hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt;

  if ((((((
#line 138
  nxt == IPV6_HOP || nxt == IPV6_ROUTING) || nxt == IPV6_FRAG) || 
  nxt == IPV6_DEST) || nxt == IPV6_MOBILITY) || nxt == IPV6_IPV6) || 
  nxt == IANA_UDP) {
      *dispatch |= LOWPAN_IPHC_NH_MASK;
    }
  else 
#line 142
    {
      * buf++ = hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt;
    }
  return buf;
}

#line 105
static __inline uint8_t *IPDispatchP__pack_tcfl(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch)
#line 105
{
  uint32_t flow = ntohl(hdr->ip6_ctlun.ip6_un1.ip6_un1_flow) & 0x000fffff;
  uint8_t tc = (ntohl(hdr->ip6_ctlun.ip6_un1.ip6_un1_flow) >> 20) & 0xff;

#line 108
  if (flow == 0 && tc == 0) {

      *dispatch |= LOWPAN_IPHC_TF_NONE;
    }
  else {
#line 111
    if (flow == 0) {
        *dispatch |= LOWPAN_IPHC_TF_ECN_DSCP;
        *buf = (tc >> 2) & 0xff;
        *buf |= (tc << 6) & 0xff;
        buf++;
      }
    else {
#line 116
      if ((tc & 0x3) == tc) {
          *dispatch |= LOWPAN_IPHC_TF_ECN_FL;
          *buf = (tc << 6) & 0xff;
          *buf |= (flow >> 16) & 0x0f;
          *(buf + 1) = (flow >> 8) & 0xff;
          *(buf + 2) = flow & 0xff;
          buf += 3;
        }
      else 
#line 123
        {
          *dispatch |= LOWPAN_IPHC_TF_ECN_DSCP_FL;
          *buf = (tc >> 2) & 0xff;
          *buf |= (tc << 6) & 0xff;

          *(buf + 1) = (flow >> 16) & 0x0f;
          *(buf + 2) = (flow >> 8) & 0xff;
          *(buf + 3) = flow & 0xff;
          buf += 4;
        }
      }
    }
#line 133
  return buf;
}

#line 413
static inline uint8_t *IPDispatchP__lowpan_pack_headers(struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt)
#line 415
{
  uint8_t *dispatch;
#line 416
  uint8_t temp_dispatch;
#line 416
  uint8_t ctx_match_length;

  if ((packet->ip6_hdr.ip6_ctlun.ip6_un2_vfc & 0xf0) != 0x60) {
      return (void *)0;
    }
#line 433
  dispatch = buf;
  *dispatch = LOWPAN_DISPATCH_BYTE_VAL;
  *(dispatch + 1) = 0;
  buf += 2;

  buf = IPDispatchP__pack_tcfl(buf, & packet->ip6_hdr, dispatch);
  buf = IPDispatchP__pack_nh(buf, & packet->ip6_hdr, dispatch);
  buf = IPDispatchP__pack_hlim(buf, & packet->ip6_hdr, dispatch);


  ctx_match_length = IPDispatchP__lowpan_extern_match_context(& packet->ip6_hdr.ip6_src, &temp_dispatch);
  temp_dispatch = 0;
  buf = IPDispatchP__pack_address(buf, & packet->ip6_hdr.ip6_src, ctx_match_length, 
  & frame->ieee_src, frame->ieee_dstpan, &temp_dispatch);
  *(dispatch + 1) |= temp_dispatch << LOWPAN_IPHC_SAM_SHIFT;

  if (packet->ip6_hdr.ip6_dst.in6_u.u6_addr8[0] != 0xff) {

      ctx_match_length = IPDispatchP__lowpan_extern_match_context(& packet->ip6_hdr.ip6_dst, &temp_dispatch);
      temp_dispatch = 0;
      buf = IPDispatchP__pack_address(buf, & packet->ip6_hdr.ip6_dst, ctx_match_length, 
      & frame->ieee_dst, frame->ieee_dstpan, &temp_dispatch);
      *(dispatch + 1) |= temp_dispatch << LOWPAN_IPHC_DAM_SHIFT;
    }
  else 
#line 456
    {

      buf = IPDispatchP__pack_multicast(buf, & packet->ip6_hdr.ip6_dst, &temp_dispatch);
      *(dispatch + 1) |= (temp_dispatch << LOWPAN_IPHC_DAM_SHIFT) | LOWPAN_IPHC_AM_M;
    }

  return buf;
}

# 102 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan_frag.c"
static inline int IPDispatchP__lowpan_frag_get(uint8_t *frag, size_t len, 
struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
struct lowpan_ctx *ctx)
#line 105
{
  uint8_t *buf;
#line 106
  uint8_t *lowpan_buf;
#line 106
  uint8_t *ieee_buf = frag;
  uint16_t extra_payload;


  buf = lowpan_buf = IPDispatchP__pack_ieee154_header(frag, len, frame);
  if (ctx->offset == 0) {
      int offset = 0;








      buf = IPDispatchP__lowpan_pack_headers(packet, frame, buf, len - (buf - frag));
      if (!buf) {
#line 122
        return -1;
        }

      offset = IPDispatchP__pack_nhc_chain(&buf, len - (buf - ieee_buf), packet);
      if (offset < 0) {
#line 126
        return -2;
        }


      extra_payload = ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) - offset;


      if (extra_payload > len - (buf - ieee_buf)) {
          struct packed_lowmsg lowmsg;

#line 135
          memmove(lowpan_buf + LOWMSG_FRAG1_LEN, 
          lowpan_buf, 
          buf - lowpan_buf);

          lowmsg.data = lowpan_buf;
          lowmsg.len = LOWMSG_FRAG1_LEN;
          lowmsg.headers = 0;
          IPDispatchP__setupHeaders(&lowmsg, LOWMSG_FRAG1_HDR);
          IPDispatchP__setFragDgramSize(&lowmsg, ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) + sizeof(struct ip6_hdr ));
          IPDispatchP__setFragDgramTag(&lowmsg, ctx->tag);

          lowpan_buf += LOWMSG_FRAG1_LEN;
          buf += LOWMSG_FRAG1_LEN;

          extra_payload = len - (buf - ieee_buf);
          extra_payload -= extra_payload % 8;
        }


      if (iov_read(packet->ip6_data, offset, extra_payload, buf) != extra_payload) {
          return -3;
        }

      ctx->offset = offset + extra_payload + sizeof(struct ip6_hdr );
      return buf - frag + extra_payload;
    }
  else 
#line 160
    {
      struct packed_lowmsg lowmsg;

#line 162
      buf = lowpan_buf = IPDispatchP__pack_ieee154_header(frag, len, frame);


      lowmsg.data = lowpan_buf;
      lowmsg.len = LOWMSG_FRAGN_LEN;
      lowmsg.headers = 0;
      IPDispatchP__setupHeaders(&lowmsg, LOWMSG_FRAGN_HDR);
      if (IPDispatchP__setFragDgramSize(&lowmsg, ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) + sizeof(struct ip6_hdr ))) {
        return -5;
        }
#line 171
      if (IPDispatchP__setFragDgramTag(&lowmsg, ctx->tag)) {
        return -6;
        }
#line 173
      if (IPDispatchP__setFragDgramOffset(&lowmsg, ctx->offset / 8)) {
        return -7;
        }
#line 175
      buf += LOWMSG_FRAGN_LEN;

      extra_payload = ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) + sizeof(struct ip6_hdr ) - ctx->offset;
      if (extra_payload > len - (buf - ieee_buf)) {
          extra_payload = len - (buf - ieee_buf);
          extra_payload -= extra_payload % 8;
        }

      if (iov_read(packet->ip6_data, ctx->offset - sizeof(struct ip6_hdr ), extra_payload, buf) != extra_payload) {
          return -4;
        }

      ctx->offset += extra_payload;

      if (extra_payload == 0) {
#line 189
        return 0;
        }
      else {
#line 190
        return lowpan_buf - ieee_buf + LOWMSG_FRAGN_LEN + extra_payload;
        }
    }
}

# 81 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__maxPayloadLength(void )
{
  return sizeof(rfa1packet_header_t ) + 112;
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
inline static uint8_t RFA1DriverLayerP__Config__maxPayloadLength(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RFA1RadioP__RFA1DriverConfig__maxPayloadLength();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 787 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__RadioPacket__maxPayloadLength(void )
{
  for (; 0; ) ;

  return RFA1DriverLayerP__Config__maxPayloadLength() - sizeof(rfa1_header_t );
}

# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t RFA1BarePacketP__RadioPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RFA1DriverLayerP__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 25 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1BarePacketP.nc"
static inline uint8_t RFA1BarePacketP__BarePacket__maxPayloadLength(void )
{
  return RFA1BarePacketP__RadioPacket__maxPayloadLength();
}

# 106 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t IPDispatchP__BarePacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = RFA1BarePacketP__BarePacket__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 799 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__RadioPacket__clear(message_t *msg)
{
}

# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void RFA1BarePacketP__RadioPacket__clear(message_t *msg){
#line 70
  RFA1DriverLayerP__RadioPacket__clear(msg);
#line 70
}
#line 70
# 8 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1BarePacketP.nc"
static inline void RFA1BarePacketP__BarePacket__clear(message_t *msg)
{
  RFA1BarePacketP__RadioPacket__clear(msg);
}

# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void IPDispatchP__BarePacket__clear(message_t * msg){
#line 65
  RFA1BarePacketP__BarePacket__clear(msg);
#line 65
}
#line 65
# 88 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t */*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get(void )
#line 88
{
  if (/*IPDispatchC.FragPool.PoolP*/PoolP__0__free) {
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t *rval = /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[/*IPDispatchC.FragPool.PoolP*/PoolP__0__index];

#line 91
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[/*IPDispatchC.FragPool.PoolP*/PoolP__0__index] = (void *)0;
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__free--;
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__index++;
      if (/*IPDispatchC.FragPool.PoolP*/PoolP__0__index == 12) {
          /*IPDispatchC.FragPool.PoolP*/PoolP__0__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static IPDispatchP__FragPool__t * IPDispatchP__FragPool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t */*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get(void )
#line 88
{
  if (/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free) {
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t *rval = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index];

#line 91
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index] = (void *)0;
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free--;
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index++;
      if (/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index == 12) {
          /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static IPDispatchP__SendEntryPool__t * IPDispatchP__SendEntryPool__get(void ){
#line 97
  struct send_entry *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t */*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get(void )
#line 88
{
  if (/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free) {
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t *rval = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index];

#line 91
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index] = (void *)0;
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free--;
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index++;
      if (/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index == 3) {
          /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static IPDispatchP__SendInfoPool__t * IPDispatchP__SendInfoPool__get(void ){
#line 97
  struct send_info *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 149 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline struct send_info *IPDispatchP__getSendInfo(void )
#line 149
{
  struct send_info *ret = IPDispatchP__SendInfoPool__get();

#line 151
  if (ret == (void *)0) {
#line 151
    return ret;
    }
#line 152
  ret->_refcount = 1;
  ret->upper_data = (void *)0;
  ret->failed = FALSE;
  ret->link_transmissions = 0;
  ret->link_fragments = 0;
  ret->link_fragment_attempts = 0;
  return ret;
}

#line 702
static inline error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *frame_addr, 
struct ip6_packet *msg, 
void *data)
#line 704
{
  struct lowpan_ctx ctx;
  struct send_info *s_info;
  struct send_entry *s_entry;
  message_t *outgoing;


  uint8_t max_len;

  int frag_len = 1;
  error_t rc = SUCCESS;

  if (IPDispatchP__state != IPDispatchP__S_RUNNING) {
      return EOFF;
    }


  msg->ip6_hdr.ip6_ctlun.ip6_un2_vfc &= ~0xf0;
  msg->ip6_hdr.ip6_ctlun.ip6_un2_vfc |= 0x60;

  ctx.tag = IPDispatchP__current_local_label++;
  ctx.offset = 0;

  s_info = IPDispatchP__getSendInfo();
  if (s_info == (void *)0) {
      rc = ERETRY;
      goto cleanup_outer;
    }
  s_info->upper_data = data;

  while (frag_len > 0) {
      s_entry = IPDispatchP__SendEntryPool__get();
      outgoing = IPDispatchP__FragPool__get();

      if (s_entry == (void *)0 || outgoing == (void *)0) {
          if (s_entry != (void *)0) {
            IPDispatchP__SendEntryPool__put(s_entry);
            }
#line 741
          if (outgoing != (void *)0) {
            IPDispatchP__FragPool__put(outgoing);
            }

          s_info->failed = TRUE;
          ;
#line 746
          ;
          rc = ERETRY;
          goto done;
        }

      IPDispatchP__BarePacket__clear(outgoing);

      max_len = IPDispatchP__BarePacket__maxPayloadLength() - 1;
      frag_len = IPDispatchP__lowpan_frag_get(IPDispatchP__BarePacket__getPayload(outgoing, max_len), 
      max_len, 
      msg, 
      frame_addr, 
      &ctx);
#line 774
      if (frag_len < 0) {
          ;
#line 775
          ;
        }

      ;
#line 778
      ;
      IPDispatchP__BarePacket__setPayloadLength(outgoing, frag_len);

      if (frag_len <= 0) {
          IPDispatchP__FragPool__put(outgoing);
          IPDispatchP__SendEntryPool__put(s_entry);
          goto done;
        }

      if (IPDispatchP__SendQueue__enqueue(s_entry) != SUCCESS) {
          ;
          s_info->failed = TRUE;
          ;
#line 790
          ;
          goto done;
        }

      s_info->link_fragments++;
      s_entry->msg = outgoing;
      s_entry->info = s_info;


      if (frame_addr->ieee_dst.ieee_mode == IEEE154_ADDR_SHORT && 
      frame_addr->ieee_dst.ieee_addr.saddr == IEEE154_BROADCAST_ADDR) {
          IPDispatchP__PacketLink__setRetries(s_entry->msg, 0);
        }
      else 
#line 802
        {
          IPDispatchP__PacketLink__setRetries(s_entry->msg, 5);
        }
      IPDispatchP__PacketLink__setRetryDelay(s_entry->msg, 103);

      s_info->_refcount++;
    }

  done: 
    ;
  IPDispatchP__SENDINFO_DECR(s_info);
  IPDispatchP__sendTask__postTask();
  cleanup_outer: 
    return rc;
}

# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPLower.nc"
inline static error_t IPNeighborDiscoveryP__IPLower__send(struct ieee154_frame_addr *next_hop, struct ip6_packet *msg, void *data){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = IPDispatchP__IPLower__send(next_hop, msg, data);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 63 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static inline int IPDispatchP__iid_eui_cmp(uint8_t *iid, uint8_t *eui)
#line 63
{
  return iid[0] == (eui[7] ^ 0x2) && 
  iid[1] == eui[6] && 
  iid[2] == eui[5] && 
  iid[3] == eui[4] && 
  iid[4] == eui[3] && 
  iid[5] == eui[2] && 
  iid[6] == eui[1] && 
  iid[7] == eui[0];
}

# 103 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t *newVal)
#line 103
{
  if (/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free >= 3) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index + /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free;

#line 109
      if (emptyIndex >= 3) {
          emptyIndex -= 3;
        }
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[emptyIndex] = newVal;
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free++;
      ;
      return SUCCESS;
    }
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t IPDispatchP__SendInfoPool__put(IPDispatchP__SendInfoPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t IPForwardingEngineP__Pool__put(IPForwardingEngineP__Pool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get();
}

# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 159 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__startOneShot(uint32_t dt){
#line 73
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(6U, dt);
#line 73
}
#line 73
# 169 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(6U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 90 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__enqueue(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 34 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 45 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getInstanceID(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getInstanceID();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 97 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__t * /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__get(void ){
#line 97
  struct __nesc_unnamed4335 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 424 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__hasDODAG(void )
#line 424
{
  return /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG;
}

# 42 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__hasDODAG(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__hasDODAG();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 209 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__runTask(void )
#line 209
{
  error_t error;
  dao_entry_t *dao_msg;
  uint16_t length = sizeof(struct dao_base_t );

  if (!/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__hasDODAG() || 
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getRank() == ROOT_RANK) {
      ;
#line 216
      ;
      return;
    }

  dao_msg = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__get();
  if (dao_msg == (void *)0) {
      ;
#line 222
      ;
      return;
    }


  dao_msg->dao_base.icmpv6.type = ICMP_TYPE_RPL_CONTROL;
  dao_msg->dao_base.icmpv6.code = ICMPV6_CODE_DAO;
  __nesc_hton_uint16(dao_msg->dao_base.icmpv6.checksum.nxdata, 0);
  dao_msg->dao_base.DAOsequence = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__daoseq;

  dao_msg->dao_base.instance_id.id = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getInstanceID();

  dao_msg->dao_base.target_option.type = RPL_TARGET_TYPE;
  dao_msg->dao_base.target_option.option_length = 18;

  dao_msg->dao_base.target_option.prefix_length = sizeof(struct in6_addr ) * 8;


  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__getGlobalAddr(& dao_msg->dao_base.target_option.target_prefix);




  dao_msg->dao_base.transit_info_option.type = RPL_TRANSIT_INFORMATION_TYPE;
  dao_msg->dao_base.transit_info_option.option_length = 22;
  dao_msg->dao_base.transit_info_option.path_sequence = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_SEQUENCE;
  dao_msg->dao_base.transit_info_option.path_control = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_CONTROL;
  dao_msg->dao_base.transit_info_option.path_lifetime = DEFAULT_LIFETIME;
  if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDefaultRoute(& dao_msg->dao_base.transit_info_option.parent_address) != SUCCESS) {
      ;
#line 251
      ;
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__put(dao_msg);
      return;
    }

  dao_msg->v[0].iov_base = (uint8_t *)& dao_msg->dao_base;
  dao_msg->v[0].iov_len = length;
  dao_msg->v[0].iov_next = (void *)0;

  dao_msg->s_pkt.ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
  dao_msg->s_pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
  dao_msg->s_pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )length << 8) | ((uint16_t )length >> 8)) & 0xffff;
  dao_msg->s_pkt.ip6_data = &dao_msg->v[0];

  error = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__enqueue(dao_msg);

  if (error != SUCCESS) {
      ;
#line 268
      ;
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__put(dao_msg);
      return;
    }
  else 
#line 271
    {

      if (!/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__isRunning()) {
          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__startOneShot(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao);
        }
    }
}

# 61 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__maxSize(void )
#line 61
{
  return 5;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__Counter__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__get(void )
{
  return /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__get();
}

# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 110 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline bool HplAtmRfa1TimerMacP__Counter__test(void )
#line 110
{
#line 110
  return * (volatile uint8_t *)0xE0 & (1 << 3);
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static bool /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__test(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtmRfa1TimerMacP__Counter__test();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 71 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline bool /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending(void )
{
  /* atomic removed: atomic calls only */
#line 73
  {
    unsigned char __nesc_temp = 
#line 73
    /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__test();

#line 73
    return __nesc_temp;
  }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static bool /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t RPLRankP__IP_DIO__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__send(ICMPV6_CODE_DIO, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 959 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline error_t RPLRankP__IP_DIO_Filter__send(struct ip6_packet *msg)
#line 959
{
  return RPLRankP__IP_DIO__send(msg);
}

# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = RPLRankP__IP_DIO_Filter__send(msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getLLAddr(struct in6_addr *addr){
#line 29
  unsigned char __nesc_result;
#line 29

#line 29
  __nesc_result = IPAddressP__IPAddress__getLLAddr(addr);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 85 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF0P.nc"
static inline uint16_t RPLOF0P__RPLOF__getObjectValue(void )
#line 85
{
  return RPLOF0P__nodeEtx;
}

# 9 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF.nc"
inline static uint16_t RPLRankP__RPLOF__getObjectValue(void ){
#line 9
  unsigned short __nesc_result;
#line 9

#line 9
  __nesc_result = RPLOF0P__RPLOF__getObjectValue();
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 309 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline uint16_t RPLRankP__RPLRankInfo__getEtx(void )
#line 309
{
  return RPLRankP__RPLOF__getObjectValue();
}

# 101 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRank.nc"
inline static uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getEtx(void ){
#line 101
  unsigned short __nesc_result;
#line 101

#line 101
  __nesc_result = RPLRankP__RPLRankInfo__getEtx();
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 34 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 171 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__runTask(void )
#line 171
{
  struct ip6_packet pkt;
  struct ip_iovec v[1];
  uint8_t data[60];
  struct dio_base_t msg;
  struct dio_body_t body;
  struct dio_metric_header_t metric_header;
  struct dio_etx_t etx_value;
  struct dio_dodag_config_t dodag_config;
  uint16_t length;






  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running || !/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG) {

      return;
    }




  msg.icmpv6.type = ICMP_TYPE_RPL_CONTROL;
  msg.icmpv6.code = ICMPV6_CODE_DIO;
  __nesc_hton_uint16(msg.icmpv6.checksum.nxdata, 0);
  msg.flags = 0;
  msg.flags = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__GROUND_STATE << 7;
  msg.flags |= /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP << 3;
  msg.flags |= /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DAG_PREF << 0;
  __nesc_hton_uint8(msg.version.nxdata, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber);
  msg.instance_id.id = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID;
  msg.dtsn = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DTSN;
  memcpy(& msg.dodagID, &/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID, sizeof(struct in6_addr ));

  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT) {

      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getGlobalAddr(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID);



      __nesc_hton_uint16(msg.dagRank.nxdata, ROOT_RANK);
    }
  else 
#line 214
    {
      __nesc_hton_uint16(msg.dagRank.nxdata, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP));
    }

  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF) {
      __nesc_hton_uint8(dodag_config.type.nxdata, RPL_DODAG_CONFIG_TYPE);
      __nesc_hton_uint8(dodag_config.length.nxdata, 14);
      dodag_config.flags = 0;
      dodag_config.A = 0;
      dodag_config.PCS = 0;



      __nesc_hton_uint16(dodag_config.ocp.nxdata, 0);

      __nesc_hton_uint8(dodag_config.default_lifetime.nxdata, 0xFF);
      __nesc_hton_uint16(dodag_config.lifetime_unit.nxdata, 0xFFFF);
      __nesc_hton_uint8(dodag_config.DIOIntDoubl.nxdata, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntDouble);
      __nesc_hton_uint8(dodag_config.DIOIntMin.nxdata, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntMin);
      __nesc_hton_uint8(dodag_config.DIORedun.nxdata, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIORedun);
      __nesc_hton_uint16(dodag_config.MaxRankInc.nxdata, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MaxRankInc);
      __nesc_hton_uint16(dodag_config.MinHopRankInc.nxdata, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MinHopRankInc);
      __nesc_hton_uint8(dodag_config.reserved.nxdata, 0);


      __nesc_hton_uint16(etx_value.etx.nxdata, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getEtx());

      metric_header.routing_obj_type = RPL_ROUTE_METRIC_ETX;
      metric_header.reserved = 0;
      metric_header.R_flag = 0;
      metric_header.G_flag = 1;
      metric_header.A_flag = 0;
      metric_header.O_flag = 0;
      metric_header.C_flag = 0;
      __nesc_hton_uint16(metric_header.object_len.nxdata, 2);

      body.type = RPL_DODAG_METRIC_CONTAINER_TYPE;
      body.container_len = 6;

      {
        uint8_t *cur = (uint8_t *)&data;

#line 267
        length = sizeof(struct dio_base_t ) + sizeof(struct dio_dodag_config_t );
        ip_memcpy(cur, (uint8_t *)&msg, sizeof(struct dio_base_t ));
#line 268
        cur += sizeof(struct dio_base_t );
#line 268
        ;
        ip_memcpy(cur, (uint8_t *)&dodag_config, sizeof(struct dio_dodag_config_t ));
#line 269
        cur += sizeof(struct dio_dodag_config_t );
#line 269
        ;
      }




      v[0].iov_base = (uint8_t *)&data;
      v[0].iov_len = length;
      v[0].iov_next = (void *)0;

      pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
      pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )length << 8) | ((uint16_t )length >> 8)) & 0xffff;

      pkt.ip6_data = &v[0];
    }
  else 

    {
      length = sizeof(struct dio_base_t );
      pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
      pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )length << 8) | ((uint16_t )length >> 8)) & 0xffff;

      v[0].iov_base = (uint8_t *)&msg;
      v[0].iov_len = sizeof(struct dio_base_t );
      v[0].iov_next = (void *)0;

      pkt.ip6_data = &v[0];
    }




  ;
#line 301
  ;





  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO) {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO = FALSE;
      memcpy(& pkt.ip6_hdr.ip6_dst, &/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO_ADDR, 16);
    }
  else 
#line 310
    {
      memcpy(& pkt.ip6_hdr.ip6_dst, &/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR, 16);
    }

  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getLLAddr(& pkt.ip6_hdr.ip6_src);




  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__send(&pkt);
}

# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = ICMPCoreP__ICMP_IP__send(155, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 46 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline error_t /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__send(uint8_t code, struct ip6_packet *msg)
#line 46
{
  return /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__send(msg);
}

# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__send(ICMPV6_CODE_DIS, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 322 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__runTask(void )
#line 322
{
  struct ip6_packet pkt;
  struct ip_iovec v[1];
  struct dis_base_t msg;
  uint16_t length;

  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running) {
    return;
    }
  length = sizeof(struct dis_base_t );
  msg.icmpv6.type = ICMP_TYPE_RPL_CONTROL;
  msg.icmpv6.code = ICMPV6_CODE_DIS;
  __nesc_hton_uint16(msg.icmpv6.checksum.nxdata, 0);


  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )length << 8) | ((uint16_t )length >> 8)) & 0xffff;

  v[0].iov_base = (uint8_t *)&msg;
  v[0].iov_len = sizeof(struct dis_base_t );
  v[0].iov_next = (void *)0;
  pkt.ip6_data = &v[0];

  memcpy(& pkt.ip6_hdr.ip6_dst, &/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR, 16);
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getLLAddr(& pkt.ip6_hdr.ip6_src);





  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__send(&pkt);
}

# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(4U, dt);
#line 64
}
#line 64
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 125 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__runTask(void )
#line 125
{

  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP = RPL_MOP_Storing_No_Multicast;





  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getGlobalAddr(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP);




  ROOT_RANK = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MinHopRankInc;


  memset(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR.in6_u.u6_addr8, 0, 16);
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR.in6_u.u6_addr8[0] = 0xFF;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR.in6_u.u6_addr8[1] = 0x2;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR.in6_u.u6_addr8[15] = 0x1A;

  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT) {

      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getGlobalAddr(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID);





      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__postTask();
    }
  else 
#line 155
    {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__startPeriodic(DIS_INTERVAL);
    }
}


static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__runTask(void )
#line 161
{
  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT) {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
    }
}

# 164 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__stop(void ){
#line 78
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(3U);
#line 78
}
#line 78
# 383 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__resetTrickleTime(void )
#line 383
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__stop();
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod = 2 << (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntMin - 1);
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__redunCounter = 0;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__doubleCounter = 0;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__Random__rand32(void ){
#line 46
  unsigned long __nesc_result;
#line 46

#line 46
  __nesc_result = RandomMlcgC__Random__rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 401 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeTrickleRemaining(void )
#line 401
{

  uint32_t remain;

#line 404
  remain = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod - /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sentDIOFlag = TRUE;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__startOneShot(remain);
}

#line 167
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__runTask(void )
#line 167
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeTrickleRemaining();
}

# 20 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF.nc"
inline static bool RPLRankP__RPLOF__recomputeRoutes(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = RPLOF0P__RPLOF__recomputeRoutes();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 362 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline void RPLRankP__newParentSearch__runTask(void )
#line 362
{

  RPLRankP__RPLOF__recomputeRoutes();
  RPLRankP__getNewRank();
}

# 94 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRank.nc"
inline static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__inconsistencyDetected(void ){
#line 94
  RPLRankP__RPLRankInfo__inconsistencyDetected();
#line 94
}
#line 94
# 357 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__inconsistencyDetected(void )
#line 357
{

  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__INCONSISTENCY_COUNT++;


  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__inconsistencyDetected();



  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
}

#line 420
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__inconsistency(void )
#line 420
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__inconsistencyDetected();
}

# 56 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static void RPLOF0P__RPLRoute__inconsistency(void ){
#line 56
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__inconsistency();
#line 56
}
#line 56
# 16 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTable.nc"
inline static error_t RPLOF0P__ForwardingTable__delRoute(route_key_t key){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = IPForwardingEngineP__ForwardingTable__delRoute(key);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 370 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteRemoved(void )
#line 370
{
}

# 50 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTableEvents.nc"
inline static void IPForwardingEngineP__ForwardingTableEvents__defaultRouteRemoved(void ){
#line 50
  IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteRemoved();
#line 50
}
#line 50
# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTable.nc"
inline static route_key_t RPLOF0P__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, struct in6_addr *next_hop, uint8_t ifindex){
#line 10
  int __nesc_result;
#line 10

#line 10
  __nesc_result = IPForwardingEngineP__ForwardingTable__addRoute(prefix, prefix_len_bits, next_hop, ifindex);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 57 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline int IPForwardingEngineP__alloc_key(void )
#line 57
{
  int i;
  int key;

#line 60
  retry: 
    key = IPForwardingEngineP__last_key++;
  for (i = 0; i < 20; i++) {
      if (IPForwardingEngineP__routing_table[i].valid && IPForwardingEngineP__routing_table[i].key == key) {
        goto retry;
        }
    }
#line 66
  return key;
}

static inline struct route_entry *IPForwardingEngineP__alloc_entry(int pfxlen)
#line 69
{
  int i;

  if (IPForwardingEngineP__routing_table[20 - 1].valid) {
#line 72
    return (void *)0;
    }
  for (i = 0; i < 20; i++) {


      if (! IPForwardingEngineP__routing_table[i].valid) {
#line 77
        goto init_entry;
        }
      else {
        if (IPForwardingEngineP__routing_table[i].prefixlen >= pfxlen) {
#line 80
          continue;
          }
        }


      memmove((void *)&IPForwardingEngineP__routing_table[i + 1], (void *)&IPForwardingEngineP__routing_table[i], 
      sizeof(struct route_entry ) * (20 - i - 1));
      goto init_entry;
    }
  return (void *)0;
  init_entry: 
    IPForwardingEngineP__routing_table[i].valid = 1;
  IPForwardingEngineP__routing_table[i].key = IPForwardingEngineP__alloc_key();
  return &IPForwardingEngineP__routing_table[i];
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t IPForwardingEngineP__defaultRouteAddedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(IPForwardingEngineP__defaultRouteAddedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 425 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__newParent(void )
#line 425
{






  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__postTask();
}

# 42 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngine.nc"
inline static void RPLOF0P__RPLDAO__newParent(void ){
#line 42
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__newParent();
#line 42
}
#line 42
# 163 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline parent_t *RPLRankP__RPLParentTable__get(uint8_t i)
#line 163
{
  return &RPLRankP__parentSet[i];
}

# 2 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLParentTable.nc"
inline static parent_t *RPLOF0P__ParentTable__get(uint8_t parent_index){
#line 2
  struct __nesc_unnamed4340 *__nesc_result;
#line 2

#line 2
  __nesc_result = RPLRankP__RPLParentTable__get(parent_index);
#line 2

#line 2
  return __nesc_result;
#line 2
}
#line 2
# 100 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF0P.nc"
static inline bool RPLOF0P__RPLOF__recalculateRank(void )
#line 100
{
  uint16_t prevEtx;
#line 101
  uint16_t prevRank;
  parent_t *parentNode = RPLOF0P__ParentTable__get(RPLOF0P__desiredParent);

  if (RPLOF0P__desiredParent == 20) {
      RPLOF0P__nodeRank = INFINITE_RANK;
      return FALSE;
    }

  prevEtx = RPLOF0P__nodeEtx;
  prevRank = RPLOF0P__nodeRank;


  RPLOF0P__nodeEtx = parentNode->etx_hop;
  RPLOF0P__nodeRank = parentNode->rank + RPLOF0P__min_hop_rank_inc;

  if (RPLOF0P__nodeRank < RPLOF0P__min_hop_rank_inc) {
    RPLOF0P__nodeRank = INFINITE_RANK;
    }
  if (RPLOF0P__newParent) {
      RPLOF0P__newParent = FALSE;
      return TRUE;
    }
  else 
#line 122
    {
      return FALSE;
    }
}

# 17 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF.nc"
inline static bool RPLRankP__RPLOF__recalculateRank(void ){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = RPLOF0P__RPLOF__recalculateRank();
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 96 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF0P.nc"
static inline uint16_t RPLOF0P__RPLOF__getRank(void )
#line 96
{
  return RPLOF0P__nodeRank;
}

# 14 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF.nc"
inline static uint16_t RPLRankP__RPLOF__getRank(void ){
#line 14
  unsigned short __nesc_result;
#line 14

#line 14
  __nesc_result = RPLOF0P__RPLOF__getRank();
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 56 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static void RPLRankP__RouteInfo__inconsistency(void ){
#line 56
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__inconsistency();
#line 56
}
#line 56
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t RPLRankP__newParentSearch__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(RPLRankP__newParentSearch);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 11 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF.nc"
inline static struct in6_addr *RPLRankP__RPLOF__getParent(void ){
#line 11
  struct in6_addr *__nesc_result;
#line 11

#line 11
  __nesc_result = RPLOF0P__RPLOF__getParent();
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 369 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline void RPLRankP__evictAll(void )
#line 369
{
  uint8_t indexset;
#line 370
  uint8_t myParent;

#line 371
  myParent = RPLRankP__getParent(RPLRankP__RPLOF__getParent());

  for (indexset = 0; indexset < 20; indexset++) {
      if (RPLRankP__parentSet[indexset].valid && RPLRankP__parentSet[indexset].rank >= RPLRankP__nodeRank) {
          RPLRankP__parentSet[indexset].valid = FALSE;
          RPLRankP__parentNum--;
          ;
#line 377
          ;


          if (indexset == myParent) {

              RPLRankP__newParentSearch__postTask();
              return;
            }
        }
    }
}

# 81 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static IPDispatchP__SendQueue__t  IPDispatchP__SendQueue__dequeue(void ){
#line 81
  struct send_entry *__nesc_result;
#line 81

#line 81
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 297 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

# 76 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__headerLength(message_t *msg)
{
  return (unsigned short )& ((message_t *)0)->data - sizeof(rfa1packet_header_t );
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
inline static uint8_t RFA1DriverLayerP__Config__headerLength(message_t *msg){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = RFA1RadioP__RFA1DriverConfig__headerLength(msg);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 768 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__RadioPacket__headerLength(message_t *msg)
{

  return RFA1DriverLayerP__Config__headerLength(msg) + sizeof(rfa1_header_t );
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = RFA1DriverLayerP__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 90 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 116 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 215 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 77 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_simple_header_t */*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg);
}

#line 163
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata, dsn);
}

# 125 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn){
#line 125
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(msg, dsn);
#line 125
}
#line 125
# 151 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn)
{
  RFA1RadioP__Ieee154PacketLayer__setDSN(msg, dsn);
}

# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number){
#line 52
  RFA1RadioP__UniqueConfig__setSequenceNumber(msg, number);
#line 52
}
#line 52
# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg)
{
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(msg, ++/*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber);
  return /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 81 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__send(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t IPDispatchP__BareSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 65 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__head(void )
#line 65
{
  return /*IPDispatchC.QueueC*/QueueC__0__queue[/*IPDispatchC.QueueC*/QueueC__0__head];
}

# 73 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static IPDispatchP__SendQueue__t  IPDispatchP__SendQueue__head(void ){
#line 73
  struct send_entry *__nesc_result;
#line 73

#line 73
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 53 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*IPDispatchC.QueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*IPDispatchC.QueueC*/QueueC__0__size == 0;
}

# 50 "/opt/tinyos-2.x/tos/interfaces/Queue.nc"
inline static bool IPDispatchP__SendQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 627 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__sendTask__runTask(void )
#line 627
{
  struct send_entry *s_entry;



  if (IPDispatchP__radioBusy || IPDispatchP__state != IPDispatchP__S_RUNNING) {
#line 632
    return;
    }
#line 633
  if (IPDispatchP__SendQueue__empty()) {
#line 633
    return;
    }
  s_entry = IPDispatchP__SendQueue__head();






  if (s_entry->info->failed) {
      ;
      goto fail;
    }


  if (IPDispatchP__BareSend__send(s_entry->msg) != SUCCESS) {
      ;
      goto fail;
    }
  else 
#line 651
    {
      IPDispatchP__radioBusy = TRUE;
    }
#line 675
  return;
  fail: 
    ;
#line 677
  ;
  IPDispatchP__sendTask__postTask();
  ;



  s_entry->info->failed = TRUE;
  IPDispatchP__SENDINFO_DECR(s_entry->info);
  IPDispatchP__FragPool__put(s_entry->msg);
  IPDispatchP__SendEntryPool__put(s_entry);
  IPDispatchP__SendQueue__dequeue();
}

# 327 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

#line 322
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

# 137 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack)
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;

#line 139
  if (ack) {
    (__nesc_temp44 = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp44, __nesc_ntoh_leuint16(__nesc_temp44) | (1 << IEEE154_FCF_ACK_REQ)));
    }
  else {
#line 142
    (__nesc_temp45 = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp45, __nesc_ntoh_leuint16(__nesc_temp45) & ~ (uint16_t )(1 << IEEE154_FCF_ACK_REQ)));
    }
}

# 105 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack){
#line 105
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(msg, ack);
#line 105
}
#line 105
# 113 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack)
{
  RFA1RadioP__Ieee154PacketLayer__setAckRequired(msg, ack);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(message_t *msg, bool ack){
#line 49
  RFA1RadioP__SoftwareAckConfig__setAckRequired(msg, ack);
#line 49
}
#line 49
# 181 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(message_t *msg)
{
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(msg, TRUE);

  return SUCCESS;
}

# 59 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 89 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 78 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void )
{
  uint16_t a = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16();

#line 81
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 81
    /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom = a;
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 176 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void )
{
}

# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioChannel.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void ){
#line 48
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone();
#line 48
}
#line 48
# 89 "UDPEchoP.nc"
static inline void UDPEchoP__RadioControl__stopDone(error_t e)
#line 89
{
}

# 138 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void IPStackControlP__SplitControl__stopDone(error_t error){
#line 138
  UDPEchoP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 37 "/opt/tinyos-2.x/tos/lib/net/blip/IPStackControlP.nc"
static inline void IPStackControlP__SubSplitControl__stopDone(error_t error)
#line 37
{
  IPStackControlP__SplitControl__stopDone(error);
}

# 138 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void IPDispatchP__SplitControl__stopDone(error_t error){
#line 138
  IPStackControlP__SubSplitControl__stopDone(error);
#line 138
}
#line 138
# 198 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__RadioControl__stopDone(error_t error)
#line 198
{
  IPDispatchP__SplitControl__stopDone(error);
}

# 138 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error){
#line 138
  IPDispatchP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 86 "UDPEchoP.nc"
static inline void UDPEchoP__RadioControl__startDone(error_t e)
#line 86
{
}

# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void IPStackControlP__SplitControl__startDone(error_t error){
#line 113
  UDPEchoP__RadioControl__startDone(error);
#line 113
}
#line 113
# 34 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPStackControlP__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 48 "/opt/tinyos-2.x/tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__StdControl__default__start(void )
#line 48
{
#line 48
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t IPStackControlP__StdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = IPStackControlP__StdControl__default__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 16 "/opt/tinyos-2.x/tos/lib/net/blip/IPStackControlP.nc"
static inline void IPStackControlP__SubSplitControl__startDone(error_t error)
#line 16
{
  struct in6_addr addr;

#line 18
  if (error == SUCCESS) {
      IPStackControlP__StdControl__start();
    }


  if (IPStackControlP__IPAddress__getGlobalAddr(&addr)) {
      IPStackControlP__RoutingControl__start();
    }

  IPStackControlP__SplitControl__startDone(error);
}

# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void IPDispatchP__SplitControl__startDone(error_t error){
#line 113
  IPStackControlP__SubSplitControl__startDone(error);
#line 113
}
#line 113
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void IPDispatchP__ExpireTimer__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(2U, dt);
#line 64
}
#line 64
# 63 "/opt/tinyos-2.x/tos/platforms/ucbase/NoLedsC.nc"
static inline void NoLedsC__Leds__led2Toggle(void )
#line 63
{
}

# 102 "/opt/tinyos-2.x/tos/platforms/ucbase/Leds.nc"
inline static void IPDispatchP__Leds__led2Toggle(void ){
#line 102
  NoLedsC__Leds__led2Toggle();
#line 102
}
#line 102
# 183 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__RadioControl__startDone(error_t error)
#line 183
{




  if (error == SUCCESS) {
      IPDispatchP__Leds__led2Toggle();
      IPDispatchP__ExpireTimer__startPeriodic(FRAG_EXPIRE_TIME);
      IPDispatchP__state = IPDispatchP__S_RUNNING;
      IPDispatchP__radioBusy = FALSE;
    }

  IPDispatchP__SplitControl__startDone(error);
}

# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error){
#line 113
  IPDispatchP__RadioControl__startDone(error);
#line 113
}
#line 113
# 144 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void )
{
  uint8_t s;

  s = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;


  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;

  if (s == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON) {
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(SUCCESS);
    }
  else {
#line 155
    if (s == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF) {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(SUCCESS);
      }
    else {
#line 157
      if (s == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_CHANNEL) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone();
        }
      else {
#line 160
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = s;
        }
      }
    }
}

# 141 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline error_t RPLRankP__StdControl__start(void )
#line 141
{
  uint8_t indexset;

  RPLRankP__DODAG_MAX.in6_u.u6_addr16[7] = (((uint16_t )0 << 8) | ((uint16_t )0 >> 8)) & 0xffff;

  ip_memcpy((uint8_t *)&RPLRankP__DODAGID, 
  (uint8_t *)&RPLRankP__DODAG_MAX, 
  sizeof(struct in6_addr ));

  for (indexset = 0; indexset < 20; indexset++) {
      RPLRankP__parentSet[indexset].valid = FALSE;
    }

  RPLRankP__m_running = TRUE;
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RankControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = RPLRankP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 500 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__start(void )
#line 500
{

  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running) {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__postTask();
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RankControl__start();
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running = TRUE;
    }
  return SUCCESS;
}

# 94 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__start(void )
#line 94
{
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__startDAO();
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__m_running = TRUE;
  return SUCCESS;
}

# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(8U, dt);
#line 64
}
#line 64
#line 92
inline static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(7U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 129 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  for (; 0; ) ;
  for (; 0; ) ;

  if (error != SUCCESS) {
    /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL + error;
    }
  /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask();
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 79 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void ){
#line 79
  TaskletC__Tasklet__resume();
#line 79
}
#line 79
# 264 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg)
{
  return (uint16_t )(4960 * 0.0625);
}

# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getInitialBackoff(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 66 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt){
#line 66
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__start(dt);
#line 66
}
#line 66
# 99 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout)
{
  for (; 0; ) ;

  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm = id;
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT;
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(timeout);
}

# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(1U, timeout);
#line 50
}
#line 50
# 94 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline bool /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id)
{
  return /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(1U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 98 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg)
{
  if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state != /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY || !/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    return EBUSY;
    }
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg = msg;
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST;
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(msg)));

  return SUCCESS;
}

# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 94 "/opt/tinyos-2.x/tos/lib/rfxlink/util/TaskletC.nc"
static __inline void TaskletC__Tasklet__suspend(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 96
    ++TaskletC__state;
#line 96
    __nesc_atomic_end(__nesc_atomic); }
}

# 72 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void ){
#line 72
  TaskletC__Tasklet__suspend();
#line 72
}
#line 72
# 189 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void )
{
  bool done = FALSE;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  for (; 0; ) ;

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING && ++/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries <= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__MAX_RETRIES) 
    {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg);
      if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError == SUCCESS) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_SEND;
        }
      else {
#line 203
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY;
        }
    }
  else {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;
      done = TRUE;
    }

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  if (done) {
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg, /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError);
    }
}

# 273 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 1;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__start(void ){
#line 59
  HplAtmRfa1TimerMacP__CompareB__start();
#line 59
}
#line 59
# 269 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__reset(void )
#line 269
{
#line 269
  * (volatile uint8_t *)0xE0 = 1 << 1;
}

# 54 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__reset(void ){
#line 54
  HplAtmRfa1TimerMacP__CompareB__reset();
#line 54
}
#line 54
# 246 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__set(uint32_t value)
{
  HplAtmRfa1TimerMacP__reg32_t time;

  time.full = value;
  /* atomic removed: atomic calls only */

  {
    * (volatile uint8_t *)0xF4 = time.hh;
    * (volatile uint8_t *)0xF3 = time.hl;
    * (volatile uint8_t *)0xF2 = time.lh;
    * (volatile uint8_t *)0xF1 = time.ll;
  }
}

# 43 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__set(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__size_type value){
#line 43
  HplAtmRfa1TimerMacP__CompareB__set(value);
#line 43
}
#line 43
# 80 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__setAlarm(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type time)
{
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__set(time);
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__reset();
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__start();
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 255 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getMinimumBackoff(void )
{
  return (uint16_t )(320 * 0.0625);
}

# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void ){
#line 51
  unsigned short __nesc_result;
#line 51

#line 51
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getMinimumBackoff();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error){
#line 56
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error);
#line 56
}
#line 56
# 155 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
}

# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error){
#line 56
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 137 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__SoftwareAckConfig__reportChannelError(void )
{
}

# 86 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void ){
#line 86
  RFA1RadioP__SoftwareAckConfig__reportChannelError();
#line 86
}
#line 86
# 124 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void )
{
  for (; 0; ) ;

  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError();

  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
}

# 273 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * 0.0625);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 73 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags &= ~(1 << bit);
}

# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(0U, msg);
#line 55
}
#line 55
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = RFA1DriverLayerP__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 78 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg)
{
  error_t error;

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) 
    {
      if ((error = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(msg)) == SUCCESS) 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(msg);
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_DATA_SEND;
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg = msg;
        }
    }
  else {
    error = EBUSY;
    }
  return error;
}

# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
#line 63
inline static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void ){
#line 63
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready();
#line 63
}
#line 63
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__Counter__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 115 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__getNow(void )
{
  return /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__get();
}

# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 76 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id)
{
  return /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow();
}

# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void ){
#line 65
  unsigned long __nesc_result;
#line 65

#line 65
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(1U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void )
{
  error_t error;
  int16_t delay;

  for (; 0; ) ;

  delay = (int16_t )/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) 
    {
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;

      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
      return;
    }
  else {
#line 126
    if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) {
      error = EBUSY;
      }
    else {
#line 129
      error = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg);
      }
    }
#line 131
  if (error != SUCCESS) 
    {
      if ((/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & ~/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST) 
        {
          /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) | /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND;
          /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg)));
        }
      else 
        {
          if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) 
            {
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
            }
          else {
            /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
            }
          /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
        }
    }
  else {
    /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_SENDING;
    }
}

# 296 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__RadioAlarm__fired(void )
{
}

# 90 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id)
{
}

# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(uint8_t arg_0x40c8faa8){
#line 60
  switch (arg_0x40c8faa8) {
#line 60
    case 0U:
#line 60
      RFA1RadioP__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 1U:
#line 60
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 2U:
#line 60
      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    default:
#line 60
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(arg_0x40c8faa8);
#line 60
      break;
#line 60
    }
#line 60
}
#line 60
# 81 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void )
{
  if (/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED) 
    {
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm);
    }
}

# 261 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void )
{
}

# 71 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void )
{
  if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY && /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
    }
}

# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void ){
#line 63
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready();
#line 63
}
#line 63
# 72 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void )
{
  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) {
    /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready();
    }
}

# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RFA1DriverLayerP__RadioSend__ready(void ){
#line 63
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready();
#line 63
}
#line 63
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 163 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void )
{
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask();
}

# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
inline static void RFA1DriverLayerP__RadioState__done(void ){
#line 69
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done();
#line 69
}
#line 69
# 237 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static __inline void RFA1DriverLayerP__changeChannel(void )
{
  for (; 0; ) ;
  for (; 0; ) ;


  * (volatile uint8_t *)0x148 = RFA1_CCA_MODE_VALUE | RFA1DriverLayerP__channel;

  if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON) {
    RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF_2_RX_ON;
    }
  else {
#line 248
    RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
    }
}

# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void RFA1DriverLayerP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 253 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static __inline void RFA1DriverLayerP__changeState(void )
{
  if ((RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON) && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_SLEEP) 
    {
      for (; 0; ) ;

      * (volatile uint8_t *)0x14F = 0xFF;
      * (volatile uint8_t *)0x14E = 1 << 7;
      * (volatile uint8_t *)0x139 &= ~(1 << 1);
      RFA1DriverLayerP__McuPowerState__update();

      RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_SLEEP_2_TRX_OFF;
    }
  else {
#line 266
    if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_TRX_OFF) 
      {
        for (; 0; ) ;

        * (volatile uint8_t *)0x14E = ((((1 << 0) | (1 << 6)) | (1 << 3)) | (1 << 2)) | (1 << 4);
        RFA1DriverLayerP__McuPowerState__update();

        * (volatile uint8_t *)0x142 = 6;




        RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF_2_RX_ON;
      }
    else {
#line 280
      if ((RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNOFF || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY) && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON) 
        {



          * (volatile uint8_t *)0x142 = 3;

          * (volatile uint8_t *)0x14E = 0;
          RFA1DriverLayerP__McuPowerState__update();

          RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF;
        }
      }
    }
#line 293
  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNOFF && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_TRX_OFF) 
    {
      * (volatile uint8_t *)0x139 |= 1 << 1;
      RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_SLEEP;
      RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
    }
  else {
#line 299
    if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_TRX_OFF) 
      {
        * (volatile uint8_t *)0x14E = 0;
        RFA1DriverLayerP__McuPowerState__update();

        RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
      }
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 351 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg)
{
  message_t *m;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize >= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
        m = msg;
        }
      else {
          uint8_t idx = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead + /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

#line 362
          if (idx >= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            idx -= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
            }
          m = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx];
          /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx] = msg;

          ++/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
          /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask();
        }
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }

  return m;
}

# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 163 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx)
{
  NeighborhoodP__flags[idx] |= 1 << bit;
}

# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx){
#line 51
  NeighborhoodP__NeighborhoodFlag__set(0U, idx);
#line 51
}
#line 51
# 161 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__UniqueConfig__reportChannelError(void )
{
}

# 58 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void ){
#line 58
  RFA1RadioP__UniqueConfig__reportChannelError();
#line 58
}
#line 58
# 158 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx)
{
  return NeighborhoodP__flags[idx] & (1 << bit);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = NeighborhoodP__NeighborhoodFlag__get(0U, idx);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 292 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 158 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata);
}

# 120 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint8_t RFA1RadioP__Ieee154PacketLayer__getDSN(message_t *msg){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(msg);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 146 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__UniqueConfig__getSequenceNumber(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getDSN(msg);
}

# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = RFA1RadioP__UniqueConfig__getSequenceNumber(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 188 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata);
}

# 151 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RFA1RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg){
#line 151
  unsigned short __nesc_result;
#line 151

#line 151
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(msg);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 156 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline am_addr_t RFA1RadioP__UniqueConfig__getSender(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 47 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static am_addr_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = RFA1RadioP__UniqueConfig__getSender(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 116 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx)
#line 116
{
}

# 80 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
inline static void NeighborhoodP__Neighborhood__evicted(uint8_t idx){
#line 80
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(idx);
#line 80
}
#line 80
# 94 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node)
{
  uint8_t i;
  uint8_t maxAge;

  if (NeighborhoodP__nodes[NeighborhoodP__last] == node) 
    {
      if (NeighborhoodP__ages[NeighborhoodP__last] == NeighborhoodP__time) {
        return NeighborhoodP__last;
        }
      NeighborhoodP__ages[NeighborhoodP__last] = ++NeighborhoodP__time;
      maxAge = 0x80;
    }
  else 
    {
      uint8_t oldest = 0;

#line 110
      maxAge = 0;

      for (i = 0; i < 5; ++i) 
        {
          uint8_t age;

          if (NeighborhoodP__nodes[i] == node) 
            {
              NeighborhoodP__last = i;
              if (NeighborhoodP__ages[i] == NeighborhoodP__time) {
                return i;
                }
              NeighborhoodP__ages[i] = ++NeighborhoodP__time;
              maxAge = 0x80;
              break;
            }

          age = NeighborhoodP__time - NeighborhoodP__ages[i];
          if (age > maxAge) 
            {
              maxAge = age;
              oldest = i;
            }
        }

      if (i == 5) 
        {
          NeighborhoodP__Neighborhood__evicted(oldest);

          NeighborhoodP__last = oldest;
          NeighborhoodP__nodes[oldest] = node;
          NeighborhoodP__ages[oldest] = ++NeighborhoodP__time;
          NeighborhoodP__flags[oldest] = 0;
        }
    }

  if ((NeighborhoodP__time & 0x7F) == 0x7F && maxAge >= 0x7F) 
    {
      for (i = 0; i < 5; ++i) 
        {
          if ((NeighborhoodP__ages[i] | 0x7F) != NeighborhoodP__time) {
            NeighborhoodP__ages[i] = NeighborhoodP__time & 0x80;
            }
        }
    }
  return NeighborhoodP__last;
}

# 71 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
inline static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = NeighborhoodP__Neighborhood__insertNode(id);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 93 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg)
{
  uint8_t idx = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(/*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(msg));
  uint8_t dsn = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(msg);

  if (/*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(idx)) 
    {
      uint8_t diff = dsn - /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx];

      if (diff == 0) 
        {
          /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError();
          return msg;
        }
    }
  else {
    /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(idx);
    }
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx] = dsn;

  return /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 168 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg){
#line 168
  unsigned char __nesc_result;
#line 168

#line 168
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(msg);
#line 168

#line 168
  return __nesc_result;
#line 168
}
#line 168
# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size RFA1RadioP__RadioAlarm__getNow(void ){
#line 65
  unsigned long __nesc_result;
#line 65

#line 65
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(0U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 280 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg)
{
  uint16_t time;


  time = RFA1RadioP__RadioAlarm__getNow();


  if (RFA1RadioP__Ieee154PacketLayer__requiresAckReply(msg)) {
    time += (uint16_t )(32 * (-5 + 16 + 11 + 5) * 0.0625);
    }
  else {
#line 291
    time += (uint16_t )(32 * (-5 + 5) * 0.0625);
    }
  return time;
}

# 57 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(msg);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 168 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg)
{
  int16_t delay;

  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(msg);
  delay = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (delay > 0) 
    {
      if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY) 
        {

          if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) 
            {
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
            }
        }
      else {
        /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state |= /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
        }
    }
  return /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  RFA1DriverLayerP__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 100 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 126 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 225 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 115 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack)
{
  ieee154_simple_header_t *header = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

#line 118
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(ack, /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH);

  __nesc_hton_leuint16(header->fcf.nxdata, /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE);
  __nesc_hton_leuint8(header->dsn.nxdata, __nesc_ntoh_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata));
}

# 88 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack){
#line 88
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(data, ack);
#line 88
}
#line 88
# 123 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack)
{
  RFA1RadioP__Ieee154PacketLayer__createAckReply(data, ack);
}

# 80 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack){
#line 80
  RFA1RadioP__SoftwareAckConfig__createAckPacket(data, ack);
#line 80
}
#line 80
# 118 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__requiresAckReply(msg);
}

# 75 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = RFA1RadioP__SoftwareAckConfig__requiresAckReply(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 66 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags |= 1 << bit;
}

# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(message_t *msg){
#line 50
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(0U, msg);
#line 50
}
#line 50
# 69 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__stop(void )
{
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop();
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop(void ){
#line 73
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__stop();
#line 73
}
#line 73
# 108 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id)
{
  for (; 0; ) ;
  for (; 0; ) ;

  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop();
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void ){
#line 55
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(2U);
#line 55
}
#line 55
# 124 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack)
{
  ieee154_simple_header_t *header = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

  return __nesc_ntoh_leuint8(header->dsn.nxdata) == __nesc_ntoh_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata)
   && (__nesc_ntoh_leuint16(header->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 94 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack){
#line 94
  unsigned char __nesc_result;
#line 94

#line 94
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(data, ack);
#line 94

#line 94
  return __nesc_result;
#line 94
}
#line 94
# 108 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack)
{
  return RFA1RadioP__Ieee154PacketLayer__verifyAckReply(data, ack);
}

# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = RFA1RadioP__SoftwareAckConfig__verifyAckPacket(data, ack);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 75 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 103 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__isAckPacket(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__isAckFrame(msg);
}

# 62 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1RadioP__SoftwareAckConfig__isAckPacket(msg);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 147 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg)
{
  for (; 0; ) ;

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) 
    {
      if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg, msg)) 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel();
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg);

          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
        }

      return msg;
    }

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(msg)) 
    {
      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(msg, &/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg);


      if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(&/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg) == SUCCESS) {
        /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND;
        }
      else {
#line 173
        for (; 0; ) ;
        }
    }
  return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t *RFA1DriverLayerP__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 894 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value)
{
  RFA1DriverLayerP__getMeta(msg)->lqi = value;
}

# 312 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline bool /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 317
    notFull = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize < /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
#line 317
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 85 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg)
{

  return /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 163 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg)
{
  return /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 134 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg)
{

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) {
    return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
    }




  return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool RFA1DriverLayerP__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 90 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline rfa1_header_t *RFA1DriverLayerP__getHeader(message_t *msg)
{
  return (void *)msg + RFA1DriverLayerP__Config__headerLength(msg);
}

#line 478
static __inline void RFA1DriverLayerP__downloadMessage(void )
{
  uint8_t length;
  bool sendSignal = FALSE;

  length = * (volatile uint8_t *)0x17B;

  if (* (volatile uint8_t *)0x146 & (1 << 7) && length >= 3 && length <= RFA1DriverLayerP__RadioPacket__maxPayloadLength() + 2) 
    {
      uint8_t *data;

      data = RFA1DriverLayerP__getPayload(RFA1DriverLayerP__rxMsg);
      __nesc_hton_leuint8(RFA1DriverLayerP__getHeader(RFA1DriverLayerP__rxMsg)->length.nxdata, length);


      length -= 2;


      memcpy(data, (void *)& * (volatile uint8_t *)0x180, length);

      if (RFA1DriverLayerP__RadioReceive__header(RFA1DriverLayerP__rxMsg)) 
        {
          RFA1DriverLayerP__PacketLinkQuality__set(RFA1DriverLayerP__rxMsg, (uint8_t )*(& * (volatile uint8_t *)0x180 + * (volatile uint8_t *)0x17B));
          sendSignal = TRUE;
        }
    }

  RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;
#line 523
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;


  if (sendSignal) {
    RFA1DriverLayerP__rxMsg = RFA1DriverLayerP__RadioReceive__receive(RFA1DriverLayerP__rxMsg);
    }
}

#line 473
static inline void RFA1DriverLayerP__RadioCCA__default__done(error_t error)
#line 473
{
}

# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioCCA.nc"
inline static void RFA1DriverLayerP__RadioCCA__done(error_t error){
#line 52
  RFA1DriverLayerP__RadioCCA__default__done(error);
#line 52
}
#line 52
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RFA1DriverLayerP__RSSIFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(3U, msg);
#line 55
}
#line 55
# 839 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__PacketRSSI__clear(message_t *msg)
{
  RFA1DriverLayerP__RSSIFlag__clear(msg);
}

# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(1U, msg);
#line 55
}
#line 55
# 77 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg)
{
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(msg);
}

# 70 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void RFA1DriverLayerP__PacketTimeStamp__clear(message_t * msg){
#line 70
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(msg);
#line 70
}
#line 70
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RFA1DriverLayerP__RSSIFlag__set(message_t *msg){
#line 50
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(3U, msg);
#line 50
}
#line 50





inline static void RFA1DriverLayerP__TransmitPowerFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(2U, msg);
#line 55
}
#line 55
# 844 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value)
{

  RFA1DriverLayerP__TransmitPowerFlag__clear(msg);

  RFA1DriverLayerP__RSSIFlag__set(msg);
  RFA1DriverLayerP__getMeta(msg)->rssi = value;
}

# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg){
#line 50
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(1U, msg);
#line 50
}
#line 50
# 82 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value)
{
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(msg);
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(msg)->timestamp = value;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void RFA1DriverLayerP__PacketTimeStamp__set(message_t * msg, RFA1DriverLayerP__PacketTimeStamp__size_type value){
#line 78
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(msg, value);
#line 78
}
#line 78
# 132 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__SoftwareAckConfig__getAckTimeout(void )
{
  return (uint16_t )(3000 * 0.0625);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static uint16_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void ){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = RFA1RadioP__SoftwareAckConfig__getAckTimeout();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(2U, timeout);
#line 50
}
#line 50
#line 45
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(2U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 198 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) != 0xFFFF;
}

# 162 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg){
#line 162
  unsigned char __nesc_result;
#line 162

#line 162
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(msg);
#line 162

#line 162
  return __nesc_result;
#line 162
}
#line 162
# 98 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__requiresAckWait(msg);
}

# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = RFA1RadioP__SoftwareAckConfig__requiresAckWait(msg);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 97 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error)
{
  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND) 
    {

      for (; 0; ) ;

      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
    }
  else 
    {
      for (; 0; ) ;
      for (; 0; ) ;

      if (error == SUCCESS && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg) && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree()) 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout());
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
        }
      else 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error);
        }
    }
}

# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RFA1DriverLayerP__RadioSend__sendDone(error_t error){
#line 56
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 391 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline uint32_t HplAtmRfa1TimerMacP__SfdCapture__get(void )
{
  HplAtmRfa1TimerMacP__reg32_t time;

  /* atomic removed: atomic calls only */
  {
    time.ll = * (volatile uint8_t *)0xE9;
    time.lh = * (volatile uint8_t *)0xEA;
    time.hl = * (volatile uint8_t *)0xEB;
    time.hh = * (volatile uint8_t *)0xEC;
  }

  return time.full;
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
inline static RFA1DriverLayerP__SfdCapture__size_type RFA1DriverLayerP__SfdCapture__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__SfdCapture__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 542 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__serviceRadio(void )
{
  uint32_t time;
  uint8_t irq;
  uint8_t temp;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      time = RFA1DriverLayerP__SfdCapture__get();
      irq = RFA1DriverLayerP__radioIrq;
      RFA1DriverLayerP__radioIrq = RFA1DriverLayerP__IRQ_NONE;
    }
#line 553
    __nesc_atomic_end(__nesc_atomic); }









  if ((irq & RFA1DriverLayerP__IRQ_PLL_LOCK) != 0) 
    {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CHANNEL) 
        {
          for (; 0; ) ;

          RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
        }
      else {
#line 572
        if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TRANSMIT) {
          for (; 0; ) ;
          }
        else {
#line 575
          for (; 0; ) ;
          }
        }
    }
#line 578
  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TRANSMIT && (irq & RFA1DriverLayerP__IRQ_TX_END) != 0) 
    {
      for (; 0; ) ;

      RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;
      RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;
      RFA1DriverLayerP__RadioSend__sendDone(SUCCESS);


      for (; 0; ) ;
    }

  if ((irq & RFA1DriverLayerP__IRQ_RX_START) != 0) 
    {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CCA) 
        {
          RFA1DriverLayerP__RadioCCA__done(FAIL);
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;
        }

      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_NONE) 
        {
          for (; 0; ) ;


          if (irq == RFA1DriverLayerP__IRQ_RX_START) 
            {
              temp = * (volatile uint8_t *)0x146 & RFA1_RSSI_MASK;
              RFA1DriverLayerP__rssiBusy += temp - (RFA1DriverLayerP__rssiBusy >> 2);

              RFA1DriverLayerP__PacketTimeStamp__set(RFA1DriverLayerP__rxMsg, time);


              RFA1DriverLayerP__PacketRSSI__set(RFA1DriverLayerP__rxMsg, temp);
            }
          else 

            {
              RFA1DriverLayerP__PacketTimeStamp__clear(RFA1DriverLayerP__rxMsg);


              RFA1DriverLayerP__PacketRSSI__clear(RFA1DriverLayerP__rxMsg);
            }


          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_RECEIVE;
        }
      else {
        for (; 0; ) ;
        }
    }
  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_RECEIVE && (irq & RFA1DriverLayerP__IRQ_RX_END) != 0) 
    {
      for (; 0; ) ;


      RFA1DriverLayerP__rssiClear += (* (volatile uint8_t *)0x146 & RFA1_RSSI_MASK) - (RFA1DriverLayerP__rssiClear >> 2);

      RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_DOWNLOAD;
    }

  if ((irq & RFA1DriverLayerP__IRQ_AWAKE) != 0) {
      if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_SLEEP_2_TRX_OFF && (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON)) {
        RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF;
        }
      else {
#line 643
        for (; 0; ) ;
        }
    }
  if ((irq & RFA1DriverLayerP__IRQ_CCA_ED_DONE) != 0) {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CCA) 
        {

          * (volatile uint8_t *)0x155 &= ~(1 << 7);

          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;

          for (; 0; ) ;
          for (; 0; ) ;

          RFA1DriverLayerP__RadioCCA__done(* (volatile uint8_t *)0x141 & 7 ? * (volatile uint8_t *)0x141 & 6 ? SUCCESS : EBUSY : FAIL);
        }
      else {
        for (; 0; ) ;
        }
    }
}

#line 730
static inline void RFA1DriverLayerP__Tasklet__run(void )
{
  if (RFA1DriverLayerP__radioIrq != RFA1DriverLayerP__IRQ_NONE) {
    RFA1DriverLayerP__serviceRadio();
    }
  if (RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE) 
    {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_DOWNLOAD) {
        RFA1DriverLayerP__downloadMessage();
        }
      else {
#line 739
        if (RFA1DriverLayerP__CMD_TURNOFF <= RFA1DriverLayerP__cmd && RFA1DriverLayerP__cmd <= RFA1DriverLayerP__CMD_TURNON) {
          RFA1DriverLayerP__changeState();
          }
        else {
#line 741
          if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CHANNEL) {
            RFA1DriverLayerP__changeChannel();
            }
          }
        }
#line 744
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_SIGNAL_DONE) 
        {
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;
          RFA1DriverLayerP__RadioState__done();
        }
    }

  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_NONE && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON && !RFA1DriverLayerP__radioIrq) {
    RFA1DriverLayerP__RadioSend__ready();
    }
}

# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void TaskletC__Tasklet__run(void ){
#line 48
  RFA1DriverLayerP__Tasklet__run();
#line 48
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run();
#line 48
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run();
#line 48
}
#line 48
# 61 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline bool /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags & (1 << bit);
}

# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RFA1DriverLayerP__TransmitPowerFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(2U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 806 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline bool RFA1DriverLayerP__PacketTransmitPower__isSet(message_t *msg)
{
  return RFA1DriverLayerP__TransmitPowerFlag__get(msg);
}

static inline uint8_t RFA1DriverLayerP__PacketTransmitPower__get(message_t *msg)
{
  return RFA1DriverLayerP__getMeta(msg)->power;
}

# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 91 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__RFA1DriverConfig__requiresRssiCca(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__isDataFrame(msg);
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
inline static bool RFA1DriverLayerP__Config__requiresRssiCca(message_t *msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RFA1RadioP__RFA1DriverConfig__requiresRssiCca(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RFA1DriverLayerP__TimeSyncFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(4U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 855 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline bool RFA1DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return RFA1DriverLayerP__TimeSyncFlag__get(msg);
}

static inline uint8_t RFA1DriverLayerP__PacketTimeSyncOffset__get(message_t *msg)
{
  return RFA1DriverLayerP__RadioPacket__headerLength(msg) + RFA1DriverLayerP__RadioPacket__payloadLength(msg) - sizeof(timesync_absolute_t );
}

# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void )
{
  return /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get();
}

# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
inline static uint32_t RFA1DriverLayerP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 347 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 372
static __inline  int32_t __nesc_hton_int32(void * target, int32_t value)
#line 372
{
#line 372
  __nesc_hton_uint32(target, value);
#line 372
  return value;
}

#line 340
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

#line 372
static __inline  int32_t __nesc_ntoh_int32(const void * source)
#line 372
{
#line 372
  return __nesc_ntoh_uint32(source);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = RFA1DriverLayerP__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 95 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 121 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 220 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 287 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(msg) - sizeof(ieee154_simple_header_t );
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 96 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 68 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 91 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(msg);
}

#line 151
static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 93 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 93
{
  am_group_t myGroup;

#line 95
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    myGroup = ActiveMessageAddressC__group;
#line 95
    __nesc_atomic_end(__nesc_atomic); }
  return myGroup;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 217 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_panid_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void )
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup();
}

#line 168
static inline uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata);
}

# 72 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 72
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 212 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_saddr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void )
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}






static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg)
{
  ieee154_saddr_t addr = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);

#line 225
  return (addr == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr() || addr == IEEE154_BROADCAST_ADDR)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(msg) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan();
}

# 185 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg){
#line 185
  unsigned char __nesc_result;
#line 185

#line 185
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(msg);
#line 185

#line 185
  return __nesc_result;
#line 185
}
#line 185
# 142 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg)
{
  if (/*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(msg)) {
    return /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(msg, 
    /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(msg), /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(msg));
    }
  else {
#line 148
    return msg;
    }
}

# 48 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t *IPDispatchP__getLowpanPayload(struct packed_lowmsg *lowmsg)
#line 48
{
  uint8_t len = 0;






  if (lowmsg->headers & LOWMSG_FRAG1_HDR) {
    len += LOWMSG_FRAG1_LEN;
    }
#line 58
  if (lowmsg->headers & LOWMSG_FRAGN_HDR) {
    len += LOWMSG_FRAGN_LEN;
    }
#line 60
  return lowmsg->data + len;
}

# 834 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__PacketRSSI__get(message_t *msg)
{
  return RFA1DriverLayerP__getMeta(msg)->rssi;
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
inline static RFA1ReadLqiC__SubRssi__value_type RFA1ReadLqiC__SubRssi__get(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = RFA1DriverLayerP__PacketRSSI__get(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/platform/RFA1ReadLqiC.nc"
static inline uint8_t RFA1ReadLqiC__ReadLqi__readRssi(message_t *msg)
#line 17
{
  return RFA1ReadLqiC__SubRssi__get(msg);
}

# 8 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ReadLqi.nc"
inline static uint8_t IPDispatchP__ReadLqi__readRssi(message_t *msg){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = RFA1ReadLqiC__ReadLqi__readRssi(msg);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 885 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__PacketLinkQuality__get(message_t *msg)
{
  return RFA1DriverLayerP__getMeta(msg)->lqi;
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
inline static RFA1ReadLqiC__SubLqi__value_type RFA1ReadLqiC__SubLqi__get(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = RFA1DriverLayerP__PacketLinkQuality__get(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 13 "/opt/tinyos-2.x/tos/lib/net/blip/platform/RFA1ReadLqiC.nc"
static inline uint8_t RFA1ReadLqiC__ReadLqi__readLqi(message_t *msg)
#line 13
{
  return RFA1ReadLqiC__SubLqi__get(msg);
}

# 6 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ReadLqi.nc"
inline static uint8_t IPDispatchP__ReadLqi__readLqi(message_t *msg){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = RFA1ReadLqiC__ReadLqi__readLqi(msg);
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 166 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__hasFragNHeader(struct packed_lowmsg *msg)
#line 166
{
  return msg->headers & LOWMSG_FRAGN_HDR;
}

#line 68
static __inline uint16_t IPDispatchP__getHeaderBitmap(struct packed_lowmsg *lowmsg)
#line 68
{
  uint16_t headers = 0;
  uint8_t *buf = lowmsg->data;
  int16_t len = lowmsg->len;

#line 72
  if (buf == (void *)0) {
#line 72
    return headers;
    }
  if (len > 0 && (*buf >> 6) == LOWPAN_NALP_PATTERN) {
      return LOWMSG_NALP;
    }
#line 98
  if (len > 0 && (*buf >> 3) == LOWPAN_FRAG1_PATTERN) {
      headers |= LOWMSG_FRAG1_HDR;
      buf += LOWMSG_FRAG1_LEN;
      len -= LOWMSG_FRAG1_LEN;
    }
  if (len > 0 && (*buf >> 3) == LOWPAN_FRAGN_PATTERN) {
      headers |= LOWMSG_FRAGN_HDR;
      buf += LOWMSG_FRAGN_LEN;
      len -= LOWMSG_FRAGN_LEN;
    }
  return headers;
}

# 76 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan_frag.c"
static inline int IPDispatchP__lowpan_recon_add(struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len)
#line 77
{
  struct packed_lowmsg msg;
  uint8_t *buf;

  msg.data = pkt;
  msg.len = len;
  msg.headers = IPDispatchP__getHeaderBitmap(&msg);
  if (msg.headers == LOWMSG_NALP) {
#line 84
    return -1;
    }
  if (!IPDispatchP__hasFragNHeader(&msg)) {
      return -2;
    }

  buf = IPDispatchP__getLowpanPayload(&msg);
  len -= buf - pkt;

  if (recon->r_size < recon->r_bytes_rcvd + len) {
#line 93
    return -3;
    }

  memcpy(recon->r_buf + recon->r_bytes_rcvd, buf, len);
  recon->r_bytes_rcvd += len;

  return 0;
}

# 163 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__hasFrag1Header(struct packed_lowmsg *msg)
#line 163
{
  return msg->headers & LOWMSG_FRAG1_HDR;
}

# 312 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline struct lowpan_reconstruct *IPDispatchP__get_reconstruct(uint16_t key, uint16_t tag)
#line 312
{
  struct lowpan_reconstruct *ret = (void *)0;
  int i;



  for (i = 0; i < N_RECONSTRUCTIONS; i++) {
      struct lowpan_reconstruct *recon = (struct lowpan_reconstruct *)&IPDispatchP__recon_data[i];

      if (recon->r_tag == tag && 
      recon->r_source_key == key) {

          if (recon->r_timeout > T_UNUSED) {
              recon->r_timeout = T_ACTIVE;
              ret = recon;
              goto done;
            }
          else {
#line 329
            if (recon->r_timeout < T_UNUSED) {


                ret = (void *)0;
                goto done;
              }
            }
        }
#line 336
      if (recon->r_timeout == T_UNUSED) {
        ret = recon;
        }
    }
#line 339
  done: 

    return ret;
}

# 272 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__getFragDgramTag(struct packed_lowmsg *msg, uint16_t *tag)
#line 272
{
  uint8_t *buf = msg->data;

#line 274
  if (buf == (void *)0 || tag == (void *)0) {
#line 274
    return 1;
    }



  if ((*buf >> 3) != LOWPAN_FRAG1_PATTERN && (
  *buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 280
    return 1;
    }
#line 281
  buf += 2;

  *tag = (((uint16_t )* (uint16_t *)buf >> 8) | ((uint16_t )* (uint16_t *)buf << 8)) & 0xffff;
  return 0;
}

# 44 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/ieee154_header.c"
static inline uint8_t *IPDispatchP__unpack_ieee154_hdr(uint8_t *buf, struct ieee154_frame_addr *frame)
#line 44
{
  uint16_t fcf = ((uint16_t )buf[2] << 8) | buf[1];

  frame->ieee_dstpan = ((uint16_t )buf[5] << 8) | buf[4];
  frame->ieee_src.ieee_mode = (fcf >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3;
  frame->ieee_dst.ieee_mode = (fcf >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3;

  buf += IEEE154_MIN_HDR_SZ;

  if (frame->ieee_dst.ieee_mode == IEEE154_ADDR_SHORT) {
      memcpy(& frame->ieee_dst.ieee_addr.saddr, buf, 2);
      buf += 2;
    }
  else {
#line 56
    if (frame->ieee_dst.ieee_mode == IEEE154_ADDR_EXT) {
        memcpy(& frame->ieee_dst.ieee_addr.laddr, buf, 8);
        buf += 8;
      }
    }
  if (frame->ieee_src.ieee_mode == IEEE154_ADDR_SHORT) {
      memcpy(& frame->ieee_src.ieee_addr.saddr, buf, 2);
      buf += 2;
    }
  else {
#line 64
    if (frame->ieee_src.ieee_mode == IEEE154_ADDR_EXT) {
        memcpy(& frame->ieee_src.ieee_addr.laddr, buf, 8);
        buf += 8;
      }
    }
#line 68
  return buf;
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t RFA1BarePacketP__RadioPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = RFA1DriverLayerP__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 13 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1BarePacketP.nc"
static inline uint8_t RFA1BarePacketP__BarePacket__payloadLength(message_t *msg)
{

  return RFA1BarePacketP__RadioPacket__payloadLength(msg) + sizeof(rfa1_header_t );
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t IPDispatchP__BarePacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = RFA1BarePacketP__BarePacket__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 345 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline message_t *IPDispatchP__BareReceive__receive(message_t *msg)
#line 345
{
  struct packed_lowmsg lowmsg;
  struct ieee154_frame_addr frame_address;
  uint8_t len = IPDispatchP__BarePacket__payloadLength(msg);
  void *msg_payload = IPDispatchP__BarePacket__getPayload(msg, len);
  uint8_t *buf = msg_payload;



  ;


  buf = IPDispatchP__unpack_ieee154_hdr(msg_payload, &frame_address);
  len -= buf - (uint8_t *)msg_payload;


  lowmsg.data = buf;
  lowmsg.len = len;
  lowmsg.headers = IPDispatchP__getHeaderBitmap(&lowmsg);
  if (lowmsg.headers == LOWMSG_NALP) {
      goto fail;
    }

  if (IPDispatchP__hasFrag1Header(&lowmsg) || IPDispatchP__hasFragNHeader(&lowmsg)) {

      int rv;
      struct lowpan_reconstruct *recon;
      uint16_t tag;
#line 372
      uint16_t source_key;

      source_key = ieee154_hashaddr(& frame_address.ieee_src);
      IPDispatchP__getFragDgramTag(&lowmsg, &tag);
      recon = IPDispatchP__get_reconstruct(source_key, tag);
      if (!recon) {
          goto fail;
        }



      memcpy(& recon->r_meta.sender, & frame_address.ieee_src, 
      sizeof(ieee154_addr_t ));
      recon->r_meta.lqi = IPDispatchP__ReadLqi__readLqi(msg);
      recon->r_meta.rssi = IPDispatchP__ReadLqi__readRssi(msg);

      if (IPDispatchP__hasFrag1Header(&lowmsg)) {
          if (recon->r_buf != (void *)0) {
#line 389
            goto fail;
            }
#line 390
          rv = IPDispatchP__lowpan_recon_start(&frame_address, recon, buf, len);
        }
      else 
#line 391
        {
          rv = IPDispatchP__lowpan_recon_add(recon, buf, len);
        }

      if (rv < 0) {
          recon->r_timeout = T_FAILED1;
          goto fail;
        }
      else 
#line 398
        {

          recon->r_timeout = T_ACTIVE;
          recon->r_source_key = source_key;
          recon->r_tag = tag;
        }

      if (recon->r_size == recon->r_bytes_rcvd) {
          IPDispatchP__deliver(recon);
        }
    }
  else {

      int rv;
      struct lowpan_reconstruct recon;


      memcpy(& recon.r_meta.sender, & frame_address.ieee_src, 
      sizeof(ieee154_addr_t ));
      recon.r_meta.lqi = IPDispatchP__ReadLqi__readLqi(msg);
      recon.r_meta.rssi = IPDispatchP__ReadLqi__readRssi(msg);

      buf = IPDispatchP__getLowpanPayload(&lowmsg);
      if ((rv = IPDispatchP__lowpan_recon_start(&frame_address, &recon, buf, len)) < 0) {
          goto fail;
        }

      if (recon.r_size == recon.r_bytes_rcvd) {
          IPDispatchP__deliver(&recon);
        }
      else 
#line 427
        {

          ip_free(recon.r_buf);
        }
    }
  goto done;
  fail: 
    ;
  done: 
    return msg;
}

# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = IPDispatchP__BareReceive__receive(msg);
#line 42
  __nesc_result = /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 156 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(am_id_t arg_0x40cbba28, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(arg_0x40cbba28, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 151 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(id, msg, payload, len);
#line 153
  ;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(am_id_t arg_0x40cbc5b8, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(arg_0x40cbc5b8, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 146 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(am_id_t arg_0x40cbb348, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(arg_0x40cbb348, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 141 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(id, msg, payload, len);
#line 143
  ;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(am_id_t arg_0x40cbdf00, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(arg_0x40cbdf00, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 163 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void )
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress();
}

# 141 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RFA1RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg){
#line 141
  unsigned short __nesc_result;
#line 141

#line 141
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 170 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline am_addr_t RFA1RadioP__ActiveMessageConfig__destination(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getDestAddr(msg);
}

# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RFA1RadioP__ActiveMessageConfig__destination(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 179 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(msg);
}

#line 173
static __inline bool /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg)
{
  am_addr_t addr = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(msg);

#line 176
  return addr == /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address() || addr == AM_BROADCAST_ADDR;
}

# 159 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg) - /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 230 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(msg) - sizeof(activemessage_header_t );
}

#line 262
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(msg);
}

# 154 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg) + /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 225 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg) + sizeof(activemessage_header_t );
}

#line 72
static inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

#line 67
static inline activemessage_header_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg);
}

#line 199
static __inline am_id_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg)
{
  return __nesc_ntoh_uint8(/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata);
}

#line 128
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg)
{
  am_id_t id = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg);
  void *payload = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(msg);
  uint8_t len = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);

  msg = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(msg) ? 
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(id, msg, payload, len) : 
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(id, msg, payload, len);

  return msg;
}

# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 127 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline network_header_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

#line 222
static inline message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg)
{
  if (__nesc_ntoh_leuint8(/*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(msg);
    }
  else {
#line 227
    return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(msg);
    }
}

# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 322 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void )
{

  for (; ; ) 
    {
      message_t *msg;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize == 0) {
            {
#line 332
              __nesc_atomic_end(__nesc_atomic); 
#line 332
              return;
            }
            }
#line 334
          msg = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead];
        }
#line 335
        __nesc_atomic_end(__nesc_atomic); }

      msg = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(msg);

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead] = msg;

          if (++/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead >= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead = 0;
            }
          --/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
        }
#line 347
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 255 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__getFragDgramSize(struct packed_lowmsg *msg, uint16_t *size)
#line 255
{
  uint8_t *buf = msg->data;
  uint8_t s[2];

#line 258
  if (buf == (void *)0 || size == (void *)0) {
#line 258
    return 1;
    }



  if ((*buf >> 3) != LOWPAN_FRAG1_PATTERN && (
  *buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 264
    return 1;
    }
  s[0] = *buf & 0x7;
  buf++;
  s[1] = *buf;
  *size = ((uint16_t )s[0] << 8) | s[1];
  return 0;
}

# 624 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static inline uint8_t *IPDispatchP__unpack_udp(uint8_t *dest, uint8_t *nxt_hdr, uint8_t *buf)
#line 624
{
  struct udp_hdr *udp = (struct udp_hdr *)dest;
  uint8_t dispatch = * buf++;

  *nxt_hdr = IANA_UDP;


  udp->len = 0;

  udp->chksum = 0;


  switch (dispatch & LOWPAN_NHC_UDP_PORT_MASK) {
      case LOWPAN_NHC_UDP_PORT_FULL: 
        udp->srcport = (((uint16_t )((buf[0] << 8) | buf[1]) << 8) | ((uint16_t )((buf[0] << 8) | buf[1]) >> 8)) & 0xffff;
      udp->dstport = (((uint16_t )((buf[2] << 8) | buf[3]) << 8) | ((uint16_t )((buf[2] << 8) | buf[3]) >> 8)) & 0xffff;
      buf += 4;
      break;
      case LOWPAN_NHC_UDP_PORT_SRC_FULL: 
        udp->srcport = (((uint16_t )((buf[0] << 8) | buf[1]) << 8) | ((uint16_t )((buf[0] << 8) | buf[1]) >> 8)) & 0xffff;
      udp->dstport = (((uint16_t )((0xF0 << 8) | buf[2]) << 8) | ((uint16_t )((0xF0 << 8) | buf[2]) >> 8)) & 0xffff;
      buf += 3;
      break;
      case LOWPAN_NHC_UDP_PORT_DST_FULL: 
        udp->srcport = (((uint16_t )((0xF0 << 8) | buf[0]) << 8) | ((uint16_t )((0xF0 << 8) | buf[0]) >> 8)) & 0xffff;
      udp->dstport = (((uint16_t )((buf[1] << 8) | buf[2]) << 8) | ((uint16_t )((buf[1] << 8) | buf[2]) >> 8)) & 0xffff;
      buf += 3;
      break;
      case LOWPAN_NHC_UDP_PORT_SHORT: 
        udp->srcport = (((uint16_t )(0xF0B0 | (buf[0] >> 4)) << 8) | ((uint16_t )(0xF0B0 | (buf[0] >> 4)) >> 8)) & 0xffff;
      udp->dstport = 0xF0B0 | (buf[0] & 0xf);
      udp->dstport = (((uint16_t )udp->dstport << 8) | ((uint16_t )udp->dstport >> 8)) & 0xffff;
      buf += 1;
      break;
    }

  if (!(dispatch & LOWPAN_NHC_UDP_CKSUM)) {
      udp->chksum = (((uint16_t )((buf[0] << 8) | buf[1]) << 8) | ((uint16_t )((buf[0] << 8) | buf[1]) >> 8)) & 0xffff;
      buf += 2;
    }

  return buf;
}






static inline uint8_t *IPDispatchP__unpack_ipnh(uint8_t *dest, size_t cnt, uint8_t *nxt_hdr, uint8_t *buf)
#line 673
{
  if ((*buf & LOWPAN_NHC_IPV6_MASK) == LOWPAN_NHC_IPV6_PATTERN) {
      struct ip6_ext *ext = (struct ip6_ext *)dest;
      uint8_t length;
#line 676
      uint8_t extra;



      switch (*buf & LOWPAN_NHC_EID_MASK) {
          case LOWPAN_NHC_EID_HOP: 
            *nxt_hdr = IPV6_HOP;
#line 682
          break;
          case LOWPAN_NHC_EID_ROUTING: 
            *nxt_hdr = IPV6_ROUTING;
#line 684
          break;
          case LOWPAN_NHC_EID_FRAG: 
            *nxt_hdr = IPV6_FRAG;
#line 686
          break;
          case LOWPAN_NHC_EID_DEST: 
            *nxt_hdr = IPV6_DEST;
#line 688
          break;
          case LOWPAN_NHC_EID_MOBILE: 
            *nxt_hdr = IPV6_MOBILITY;
#line 690
          break;
          case LOWPAN_NHC_EID_IPV6: 

            *nxt_hdr = IPV6_IPV6;
#line 693
          break;
          default: 
            return (void *)0;
        }


      if (!(*buf & LOWPAN_NHC_NH)) {
          buf++;
          ext->ip6e_nxt = *buf;
        }
      buf += 1;
      length = * buf++;
      extra = (8 - length % 8) % 8;

      if (cnt < length + extra - 2) {
        return (void *)0;
        }

      memcpy(dest + 2, buf, length - 2);


      if (*nxt_hdr == IPV6_HOP || *nxt_hdr == IPV6_DEST) {
          if (extra == 1) {

              dest[length] = IPV6_TLV_PAD1;
            }
          else {
#line 718
            if (extra > 1) {
                dest[length] = IPV6_TLV_PADN;
                dest[length + 1] = extra - 2;
              }
            }
        }
#line 723
      ext->ip6e_len = (length + extra) / 8 - 1;

      return buf + length + extra - 2;
    }
  else {
#line 726
    if ((*buf & LOWPAN_NHC_UDP_MASK) == LOWPAN_NHC_UDP_PATTERN) {

        return IPDispatchP__unpack_udp(dest, nxt_hdr, buf);
      }
    }
#line 730
  return (void *)0;
}

static inline uint8_t *IPDispatchP__unpack_nhc_chain(struct lowpan_reconstruct *recon, 
uint8_t **dest, size_t cnt, 
uint8_t *nxt_hdr, uint8_t *buf)
#line 735
{
  uint8_t *dispatch;
  int has_nhc = 1;

  do {
      recon->r_transport_header = *dest;
      dispatch = buf;
      buf = IPDispatchP__unpack_ipnh(*dest, cnt, nxt_hdr, buf);

      if (!buf) {
#line 744
        return (void *)0;
        }
      if ((*dispatch & LOWPAN_NHC_IPV6_MASK) == LOWPAN_NHC_IPV6_PATTERN) {
          struct ip6_ext *ext = (struct ip6_ext *)*dest;

          *dest += (ext->ip6e_len + 1) * 8;
          cnt -= (ext->ip6e_len + 1) * 8;

          if (*dispatch & LOWPAN_NHC_NH) {
              nxt_hdr = & ext->ip6e_nxt;
            }
          else 
#line 754
            {
              has_nhc = 0;
            }
        }
      else {
#line 757
        if ((*dispatch & LOWPAN_NHC_UDP_MASK) == LOWPAN_NHC_UDP_PATTERN) {
            struct udp_hdr *udp = (struct udp_hdr *)*dest;

#line 759
            recon->r_app_len = & udp->len;
            has_nhc = 0;
            *dest += sizeof(struct udp_hdr );
          }
        else 
#line 762
          {
#line 762
            has_nhc = 0;
          }
        }
    }
  while (
#line 763
  has_nhc);
  return buf;
}

#line 592
static inline uint8_t *IPDispatchP__unpack_multicast(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf)
#line 593
{
  memset(addr->in6_u.u6_addr8, 0, 16);

  if (!(dispatch & LOWPAN_IPHC_AC_CONTEXT)) {
      int amount;

#line 598
      switch (dispatch & LOWPAN_IPHC_AM_MASK) {
          case LOWPAN_IPHC_AM_M_128: 
            memcpy(addr->in6_u.u6_addr8, buf, 16);
          return buf + 16;
          case LOWPAN_IPHC_AM_M_48: 
            amount = 5;
          goto copy;
          case LOWPAN_IPHC_AM_M_32: 
            amount = 3;
          copy: 
            addr->in6_u.u6_addr8[0] = 0xff;
          addr->in6_u.u6_addr8[1] = buf[0];
          memcpy(&addr->in6_u.u6_addr8[16 - amount], buf + 1, amount);
          return buf + 1 + amount;
          case LOWPAN_IPHC_AM_M_8: 
            addr->in6_u.u6_addr16[0] = (((uint16_t )0xff02 << 8) | ((uint16_t )0xff02 >> 8)) & 0xffff;
          addr->in6_u.u6_addr8[15] = buf[0];
          return buf + 1;
        }
    }
  else 
#line 617
    {
    }


  return (void *)0;
}

#line 508
static inline uint8_t *IPDispatchP__unpack_hlim(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf)
#line 508
{
  switch (dispatch & LOWPAN_IPHC_HLIM_MASK) {
      case LOWPAN_IPHC_HLIM_1: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = 1;
      break;
      case LOWPAN_IPHC_HLIM_64: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = 64;
      break;
      case LOWPAN_IPHC_HLIM_255: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = 255;
      break;
      default: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = *buf;
      return buf + 1;
    }
  return buf;
}

#line 499
static inline uint8_t *IPDispatchP__unpack_nh(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf)
#line 499
{
  if ((dispatch & LOWPAN_IPHC_NH_MASK) == LOWPAN_IPHC_NH_INLINE) {
      hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt = *buf;
      return buf + 1;
    }
  else 
#line 503
    {
      return buf;
    }
}

#line 465
static inline uint8_t *IPDispatchP__unpack_tcfl(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf)
#line 465
{
  uint8_t fl[3] = { 0, 0, 0 };
  uint8_t tc = 0;

  switch (dispatch & LOWPAN_IPHC_TF_MASK) {
      case LOWPAN_IPHC_TF_ECN_DSCP: 
        tc = (*buf >> 6) & 0xff;
      tc |= (*buf << 2) & 0xff;
      buf += 1;
      break;
      case LOWPAN_IPHC_TF_ECN_FL: 
        tc = (*buf >> 6) & 0xff;
      fl[2] = buf[0] & 0x0f;
      fl[1] = buf[1];
      fl[0] = buf[2];
      buf += 3;
      break;
      case LOWPAN_IPHC_TF_ECN_DSCP_FL: 
        tc = (*buf >> 6) & 0xff;
      tc |= (*buf << 2) & 0xff;
      fl[2] = buf[1] & 0x0f;
      fl[1] = buf[2];
      fl[0] = buf[3];
      buf += 4;
      break;
    }

  hdr->ip6_ctlun.ip6_un1.ip6_un1_flow = ntohl((((((uint32_t )0x6 << 28) | ((uint32_t )tc << 20)) | ((uint32_t )fl[2] << 16)) | ((uint32_t )fl[1] << 8)) | fl[0]);



  return buf;
}

#line 767
static inline uint8_t *IPDispatchP__lowpan_unpack_headers(struct lowpan_reconstruct *recon, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt)
#line 769
{
  uint8_t *dispatch;
#line 770
  uint8_t *unpack_start = buf;
#line 770
  uint8_t *unpack_end;
  int contexts[2] = { 0, 0 };
  uint8_t *dest = recon->r_buf;
  size_t dst_cnt = recon->r_size;
  struct ip6_hdr *hdr = (struct ip6_hdr *)dest;

  dispatch = buf;
  buf += 2;

  if ((*dispatch & LOWPAN_DISPATCH_BYTE_MASK) != LOWPAN_DISPATCH_BYTE_VAL) {
      return (void *)0;
    }


  if ((*(dispatch + 1) & LOWPAN_IPHC_CID_MASK) == LOWPAN_IPHC_CID_PRESENT) {
      contexts[0] = (*buf >> 4) & 0xf;
      contexts[1] = *buf & 0xf;
      buf += 1;
    }


  buf = IPDispatchP__unpack_tcfl(hdr, *dispatch, buf);
  buf = IPDispatchP__unpack_nh(hdr, *dispatch, buf);
  buf = IPDispatchP__unpack_hlim(hdr, *dispatch, buf);



  buf = IPDispatchP__unpack_address(& hdr->ip6_src, 
  *(dispatch + 1) >> LOWPAN_IPHC_SAM_SHIFT, 
  contexts[0], 
  buf, 
  & frame->ieee_src, 
  frame->ieee_dstpan);
  if (!buf) {
      return (void *)0;
    }


  if (*(dispatch + 1) & LOWPAN_IPHC_M) {

      buf = IPDispatchP__unpack_multicast(& hdr->ip6_dst, 
      *(dispatch + 1) >> LOWPAN_IPHC_DAM_SHIFT, 
      contexts[1], 
      buf);
    }
  else {
      buf = IPDispatchP__unpack_address(& hdr->ip6_dst, 
      *(dispatch + 1) >> LOWPAN_IPHC_DAM_SHIFT, 
      contexts[1], 
      buf, 
      & frame->ieee_dst, 
      frame->ieee_dstpan);
    }
  if (!buf) {
      return (void *)0;
    }




  unpack_end = (uint8_t *)(hdr + 1);
  if (*dispatch & LOWPAN_IPHC_NH_MASK) {
      buf = IPDispatchP__unpack_nhc_chain(recon, 
      &unpack_end, 
      dst_cnt - sizeof(struct ip6_hdr ), 
      & hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt, 
      buf);
      if (!buf) {
          return (void *)0;
        }
    }



  memcpy(unpack_end, buf, cnt - (buf - unpack_start));


  return unpack_end + (cnt - (buf - unpack_start));
}

# 34 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPNeighborDiscoveryP__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 44 "/opt/tinyos-2.x/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline int IPNeighborDiscoveryP__NeighborDiscovery__getContext(uint8_t context, 
struct in6_addr *ctx)
#line 45
{
  struct in6_addr me;

#line 47
  if (!IPNeighborDiscoveryP__IPAddress__getGlobalAddr(&me)) {
#line 47
    return 0;
    }
#line 48
  if (context == 0) {


      memcpy(ctx->in6_u.u6_addr8, me.in6_u.u6_addr8, 8);
      return 64;
    }
  else 
#line 53
    {
      return 0;
    }
}

# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
inline static int IPDispatchP__NeighborDiscovery__getContext(uint8_t context, struct in6_addr *ctx){
#line 17
  int __nesc_result;
#line 17

#line 17
  __nesc_result = IPNeighborDiscoveryP__NeighborDiscovery__getContext(context, ctx);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 93 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline int IPDispatchP__lowpan_extern_read_context(struct in6_addr *addr, int context)
#line 93
{
  return IPDispatchP__NeighborDiscovery__getContext(context, addr);
}

# 442 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline bool RPLRankP__ForwardingEvents__approve(struct ip6_packet *pkt, 
struct in6_addr *next_hop)
#line 443
{

  return TRUE;
}

# 345 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline bool IPForwardingEngineP__ForwardingEvents__default__approve(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop)
#line 346
{
  return TRUE;
}

# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
inline static bool IPForwardingEngineP__ForwardingEvents__approve(uint8_t arg_0x40b23418, struct ip6_packet *pkt, struct in6_addr *next_hop){
#line 28
  unsigned char __nesc_result;
#line 28

#line 28
  switch (arg_0x40b23418) {
#line 28
    case RPL_IFACE:
#line 28
      __nesc_result = RPLRankP__ForwardingEvents__approve(pkt, next_hop);
#line 28
      break;
#line 28
    default:
#line 28
      __nesc_result = IPForwardingEngineP__ForwardingEvents__default__approve(arg_0x40b23418, pkt, next_hop);
#line 28
      break;
#line 28
    }
#line 28

#line 28
  return __nesc_result;
#line 28
}
#line 28
# 14 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPPacket.nc"
inline static int IPForwardingEngineP__IPPacket__findHeader(struct ip_iovec *payload, uint8_t first_type, uint8_t *search_type){
#line 14
  int __nesc_result;
#line 14

#line 14
  __nesc_result = IPPacketC__IPPacket__findHeader(payload, first_type, search_type);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 44 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__isLocalAddress(struct in6_addr *addr){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = IPAddressP__IPAddress__isLocalAddress(addr);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 554 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 555
{

  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running) {
#line 557
    return;
    }
  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF) {

      return;
    }

  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__isLocalAddress(& iph->ip6_dst)) {

      if (iph->ip6_dst.in6_u.u6_addr8[0] == 0xff && (
      iph->ip6_dst.in6_u.u6_addr8[1] & 0xf) <= 0x3) {
          /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
        }
      else 
#line 569
        {
          /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO = TRUE;
          memcpy(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO_ADDR, & iph->ip6_src, sizeof(struct in6_addr ));
          /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__postTask();
        }
    }
}

# 50 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 51
{
}

# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__recv(uint8_t arg_0x414d7be0, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x414d7be0) {
#line 23
    case ICMPV6_CODE_DIS:
#line 23
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(arg_0x414d7be0, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 39 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 40
{
  struct icmp6_hdr *icmph = packet;

  /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__recv(icmph->code, iph, packet, len, meta);
}

# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTable.nc"
inline static route_key_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, struct in6_addr *next_hop, uint8_t ifindex){
#line 10
  int __nesc_result;
#line 10

#line 10
  __nesc_result = IPForwardingEngineP__ForwardingTable__addRoute(prefix, prefix_len_bits, next_hop, ifindex);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 476 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDTSN(void )
#line 476
{
  return /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DTSN;
}

# 54 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDTSN(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDTSN();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 472 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDTSN(uint8_t dtsn)
#line 472
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DTSN = dtsn;
}

# 53 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__setDTSN(uint8_t dtsn){
#line 53
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDTSN(dtsn);
#line 53
}
#line 53
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTable.nc"
inline static struct route_entry */*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__lookupRoute(const uint8_t *prefix, int prefix_len_bits){
#line 18
  struct route_entry *__nesc_result;
#line 18

#line 18
  __nesc_result = IPForwardingEngineP__ForwardingTable__lookupRoute(prefix, prefix_len_bits);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 304 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 305
{
  dao_entry_t *dao_msg;
  error_t error;
  struct in6_addr MYADDR;

  struct dao_base_t *dao = (struct dao_base_t *)payload;
  struct route_entry *entry;
  route_key_t new_key = ROUTE_INVAL_KEY;

  ;
#line 314
  ;
  ;
#line 315
  ;
  if (!/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__m_running) {
#line 316
    return;
    }







  entry = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__lookupRoute(dao->target_option.target_prefix.in6_u.u6_addr8, 
  dao->target_option.prefix_length);

  if (entry != (void *)0 && 
  entry->prefixlen == dao->target_option.prefix_length) {


      if (
#line 331
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__memcmp_rpl((uint8_t *)entry->next_hop.in6_u.u6_addr8, 
      (uint8_t *)iph->ip6_src.in6_u.u6_addr8, 16) == TRUE) {
        }
      else {



          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__setDTSN(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDTSN() + 1);
          if (dao->target_option.prefix_length > 0) {
            new_key = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__addRoute(dao->target_option.target_prefix.in6_u.u6_addr8, 
            dao->target_option.prefix_length, 
            & iph->ip6_src, 
            RPL_IFACE);
            }
        }
    }
  else 
#line 345
    {


      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__getGlobalAddr(&MYADDR);
      if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count == 20 || /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__memcmp_rpl((void *)&MYADDR, dao->target_option.target_prefix.in6_u.u6_addr8, 16)) {


          return;
        }
      ;
#line 354
      ;
      ;
#line 355
      ;
      if (dao->target_option.prefix_length > 0) {
          new_key = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__addRoute(dao->target_option.target_prefix.in6_u.u6_addr8, 
          dao->target_option.prefix_length, 
          & iph->ip6_src, 
          RPL_IFACE);
        }

      if (new_key != ROUTE_INVAL_KEY) {

          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count].key = new_key;

          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count++;
        }
    }


  if (new_key != ROUTE_INVAL_KEY) {
      uint8_t i;

#line 374
      for (i = 0; i < /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count; i++) {
          if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[i].key == new_key) {
              /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[i].lifetime = dao->transit_info_option.path_lifetime;
            }
        }
    }




  if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getRank() == ROOT_RANK) {

      return;
    }







  dao_msg = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__get();

  if (dao_msg == (void *)0) {
      return;
    }



  ip_memcpy((uint8_t *)& dao_msg->s_pkt.ip6_hdr, 
  (uint8_t *)iph, sizeof(struct ip6_hdr ));


  ip_memcpy((uint8_t *)& dao_msg->dao_base, 
  (uint8_t *)payload, sizeof(struct dao_base_t ));
  dao_msg->v[0].iov_base = (uint8_t *)& dao_msg->dao_base;
  dao_msg->v[0].iov_len = (((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff;
  dao_msg->v[0].iov_next = (void *)0;
  dao_msg->s_pkt.ip6_data = &dao_msg->v[0];

  error = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__enqueue(dao_msg);

  if (error != SUCCESS) {
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__put(dao_msg);
      return;
    }
  else 
#line 419
    {
      if (!/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__isRunning()) {
        /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__startOneShot(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao);
        }
    }
}

# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 40 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngine.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLDAORoutingEngine__startDAO(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__startDAO();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 285 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline uint8_t RPLRankP__RPLRankInfo__hasParent(void )
#line 285
{
  return RPLRankP__parentNum;
}

# 98 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRank.nc"
inline static uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__hasParent(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = RPLRankP__RPLRankInfo__hasParent();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 542 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__compare_ip6_addr(struct in6_addr *node1, struct in6_addr *node2)
#line 542
{
  return !memcmp(node1, node2, sizeof(struct in6_addr ));
}

# 289 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline bool RPLRankP__RPLRankInfo__isLeaf(void )
#line 289
{

  return RPLRankP__leafState;
}

# 99 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRank.nc"
inline static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__isLeaf(void ){
#line 99
  unsigned char __nesc_result;
#line 99

#line 99
  __nesc_result = RPLRankP__RPLRankInfo__isLeaf();
#line 99

#line 99
  return __nesc_result;
#line 99
}
#line 99
# 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__stop(void ){
#line 78
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(4U);
#line 78
}
#line 78
#line 92
inline static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(4U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 189 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(4U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 577 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 578
{
  struct dio_base_t *dio = (struct dio_base_t *)payload;

#line 580
  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running) {
#line 580
    return;
    }
  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT) {
      return;
    }

  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIORedun != 0xFF) {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__redunCounter++;
    }
  else 
#line 588
    {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__redunCounter = 0xFF;
    }



  if (__nesc_ntoh_uint16(dio->dagRank.nxdata) == INFINITE_RANK) {
      if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP) != INFINITE_RANK && 
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__getNow() % 2 == 1) {

          /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__postTask();
        }
      return;
    }

  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__hasParent() && /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__isRunning()) {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__stop();
    }


  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__isLeaf();


  if ((
#line 610
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF && !/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG)
   || !/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__compare_ip6_addr(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID, & dio->dodagID)) {









      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG = TRUE;


      goto accept_dodag;
    }



  if (
#line 627
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID == dio->instance_id.id && 
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__compare_ip6_addr(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID, & dio->dodagID) && 
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber != __nesc_ntoh_uint8(dio->version.nxdata) && 
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG) {





      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber = __nesc_ntoh_uint8(dio->version.nxdata);
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
    }
  else {

    if (
#line 640
    /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP) != /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank && 
    /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG && 
    /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank != INFINITE_RANK) {




        if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP) > /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__LOWRANK + /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MaxRankInc && 
        /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank != INFINITE_RANK) {
            /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG = FALSE;
            /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank = INFINITE_RANK;
          }
        else 
#line 651
          {
            if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__LOWRANK > /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP)) {
                /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__LOWRANK = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP);
              }
            /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP);
          }

        /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__inconsistencyDetected();
        return;
      }
    }
  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__hasParent() && !/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG) {
      goto accept_dodag;
    }
  else {
#line 664
    if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__hasParent() && !/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT) {



        /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG = FALSE;
        /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__GROUND_STATE = dio->flags & 0x80;

        /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__stop();

        /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
        /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLDAORoutingEngine__startDAO();
      }
    }
#line 676
  return;
  accept_dodag: 



    /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG = TRUE;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP = (dio->flags & 0x3c) >> 3;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DAG_PREF = dio->flags & 0x07;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID = dio->instance_id.id;
  memcpy(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID, & dio->dodagID, sizeof(struct in6_addr ));
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber = __nesc_ntoh_uint8(dio->version.nxdata);
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__GROUND_STATE = dio->flags & 0x80;

  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
  return;
}

# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static void RPLRankP__IP_DIO_Filter__recv(struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__recv(hdr, packet, len, meta);
#line 23
}
#line 23
# 569 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline bool RPLRankP__compareParent(parent_t oldP, parent_t newP)
#line 569
{
  return oldP.etx_hop + oldP.etx <= newP.etx_hop + newP.etx;
}

# 63 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF0P.nc"
static inline bool RPLOF0P__RPLOF__OCP(uint16_t ocp)
#line 63
{
  if (ocp == RPLOF_OCP_OF0) {
    return TRUE;
    }
#line 66
  return FALSE;
}

# 4 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF.nc"
inline static bool RPLRankP__RPLOF__OCP(uint16_t ocp){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = RPLOF0P__RPLOF__OCP(ocp);
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 70 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF0P.nc"
static inline bool RPLOF0P__RPLOF__objectSupported(uint16_t objectType)
#line 70
{

  return TRUE;
}

# 7 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF.nc"
inline static bool RPLRankP__RPLOF__objectSupported(uint16_t objectType){
#line 7
  unsigned char __nesc_result;
#line 7

#line 7
  __nesc_result = RPLOF0P__RPLOF__objectSupported(objectType);
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 81 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF0P.nc"
static inline void RPLOF0P__RPLOF__setMinHopRankIncrease(uint16_t val)
#line 81
{
  RPLOF0P__min_hop_rank_inc = val;
}

# 22 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF.nc"
inline static void RPLRankP__RPLOF__setMinHopRankIncrease(uint16_t val){
#line 22
  RPLOF0P__RPLOF__setMinHopRankIncrease(val);
#line 22
}
#line 22
# 436 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDODAGConfig(uint8_t IntDouble, 
uint8_t IntMin, 
uint8_t Redun, 
uint8_t RankInc, 
uint8_t HopRankInc)
#line 440
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntDouble = IntDouble;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntMin = IntMin;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIORedun = Redun;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MaxRankInc = RankInc;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MinHopRankInc = HopRankInc;
}

# 49 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static void RPLRankP__RouteInfo__setDODAGConfig(uint8_t DIOIntDouble, uint8_t DIOIntMin, uint8_t DIORedun, uint8_t MaxRankInc, uint8_t MinHopRankInc){
#line 49
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDODAGConfig(DIOIntDouble, DIOIntMin, DIORedun, MaxRankInc, MinHopRankInc);
#line 49
}
#line 49
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPPacket.nc"
inline static int RPLRankP__IPPacket__findTLV(struct ip_iovec *header, int ext_offset, uint8_t type){
#line 17
  int __nesc_result;
#line 17

#line 17
  __nesc_result = IPPacketC__IPPacket__findTLV(header, ext_offset, type);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 253 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF0P.nc"
static inline void RPLOF0P__RPLOF__resetRank(void )
#line 253
{
  RPLOF0P__nodeRank = INFINITE_RANK;
  RPLOF0P__minMetric = 0xFFFF;
}

# 15 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF.nc"
inline static void RPLRankP__RPLOF__resetRank(void ){
#line 15
  RPLOF0P__RPLOF__resetRank();
#line 15
}
#line 15
# 610 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline void RPLRankP__parseDIO(struct ip6_hdr *iph, 
uint8_t *buf, 
int len)
#line 612
{
  uint16_t pParentRank;
  struct in6_addr rDODAGID;
  uint16_t etx = 0xFFFF;
  parent_t tempParent;
  uint8_t parentIndex;
#line 617
  uint8_t myParent;
  uint16_t preRank;
  uint8_t tempPrf;
  bool newDodag = FALSE;

  struct dio_base_t *dio = (struct dio_base_t *)buf;
  struct dio_body_t *dio_body;
  struct dio_metric_header_t *dio_metric_header;
  struct dio_etx_t *dio_etx;
  struct dio_dodag_config_t *dio_dodag_config;

  struct ip_iovec v[2];
  struct ip6_ext dummy_ext;
  int hdr_off;

#line 631
  buf += sizeof(struct dio_base_t );
  len -= sizeof(struct dio_base_t );
  dummy_ext.ip6e_len = (len - 8) / 8;
  v[0].iov_len = sizeof dummy_ext;
  v[0].iov_base = (uint8_t *)&dummy_ext;
  v[0].iov_next = &v[1];
  v[1].iov_len = len;
  v[1].iov_base = buf;
  v[1].iov_next = (void *)0;


  if (RPLRankP__nodeRank == ROOT_RANK) {
#line 642
    return;
    }

  if (__nesc_ntoh_uint8(dio->version.nxdata) != RPLRankP__VERSION && !memcmp(& dio->dodagID, &RPLRankP__DODAGID, sizeof(struct in6_addr ))) {
      RPLRankP__parentNum = 0;
      RPLRankP__VERSION = __nesc_ntoh_uint8(dio->version.nxdata);
      RPLRankP__RPLOF__resetRank();
      RPLRankP__nodeRank = INFINITE_RANK;
      RPLRankP__minRank = INFINITE_RANK;
      RPLRankP__resetValid();
    }









  pParentRank = __nesc_ntoh_uint16(dio->dagRank.nxdata);


  ip_memcpy((uint8_t *)&rDODAGID, 
  (uint8_t *)& dio->dodagID, 
  sizeof(struct in6_addr ));
  tempPrf = dio->flags & 0x07;

  if (! !memcmp(&RPLRankP__DODAGID, &RPLRankP__DODAG_MAX, sizeof(struct in6_addr )) && 
  ! !memcmp(&RPLRankP__DODAGID, &rDODAGID, sizeof(struct in6_addr ))) {

      if (RPLRankP__Prf < tempPrf) {

          RPLRankP__ignore = TRUE;
          return;
        }
      else {
#line 677
        if (RPLRankP__Prf > tempPrf) {

            RPLRankP__Prf = tempPrf;
            ip_memcpy((uint8_t *)&RPLRankP__DODAGID, 
            (uint8_t *)&rDODAGID, 
            sizeof(struct in6_addr ));
            RPLRankP__parentNum = 0;
            RPLRankP__VERSION = __nesc_ntoh_uint8(dio->version.nxdata);
            RPLRankP__RPLOF__resetRank();
            RPLRankP__nodeRank = INFINITE_RANK;
            RPLRankP__minRank = INFINITE_RANK;

            RPLRankP__resetValid();
            newDodag = TRUE;
          }
        else 
#line 691
          {



            newDodag = TRUE;
          }
        }
    }
  else {
#line 697
    if (!memcmp(&RPLRankP__DODAGID, &RPLRankP__DODAG_MAX, sizeof(struct in6_addr ))) {

        RPLRankP__Prf = tempPrf;
        ip_memcpy((uint8_t *)&RPLRankP__DODAGID, 
        (uint8_t *)&rDODAGID, 
        sizeof(struct in6_addr ));
        RPLRankP__parentNum = 0;
        RPLRankP__VERSION = __nesc_ntoh_uint8(dio->version.nxdata);
        RPLRankP__RPLOF__resetRank();
        RPLRankP__nodeRank = INFINITE_RANK;
        RPLRankP__minRank = INFINITE_RANK;

        newDodag = TRUE;
        RPLRankP__resetValid();
      }
    else 
#line 711
      {
      }
    }



  hdr_off = RPLRankP__IPPacket__findTLV(v, 0, RPL_DIO_TYPE_METRIC) - 
  sizeof(struct ip6_ext );

  RPLRankP__METRICID = 0;
  RPLRankP__OCP = 0;


  if (hdr_off >= 0) {

      dio_body = (struct dio_body_t *)(buf + hdr_off);
      dio_metric_header = (struct dio_metric_header_t *)(buf + hdr_off + 2);




      if (
#line 731
      dio_body->container_len >= sizeof(struct dio_metric_header_t ) && 
      dio_metric_header->routing_obj_type == RPL_ROUTE_METRIC_ETX && __nesc_ntoh_uint16(
      dio_metric_header->object_len.nxdata) == sizeof(struct dio_etx_t )) {

          dio_etx = (struct dio_etx_t *)(dio_metric_header + 1);
          etx = __nesc_ntoh_uint16(dio_etx->etx.nxdata);
          ;
#line 737
          ;
          RPLRankP__METRICID = RPL_ROUTE_METRIC_ETX;
        }
    }
  else 
#line 740
    {
      etx = pParentRank * 10;
    }
#line 757
  hdr_off = RPLRankP__IPPacket__findTLV(v, 0, RPL_DIO_TYPE_DODAG) - 
  sizeof(struct ip6_ext );


  if (hdr_off >= 0 && !RPLRankP__ignore) {
      dio_dodag_config = (struct dio_dodag_config_t *)(buf + hdr_off);





      RPLRankP__OCP = __nesc_ntoh_uint16(dio_dodag_config->ocp.nxdata);
      RPLRankP__MAX_RANK_INCREASE = __nesc_ntoh_uint16(dio_dodag_config->MaxRankInc.nxdata);


      RPLRankP__RouteInfo__setDODAGConfig(__nesc_ntoh_uint8(dio_dodag_config->DIOIntDoubl.nxdata), __nesc_ntoh_uint8(
      dio_dodag_config->DIOIntMin.nxdata), __nesc_ntoh_uint8(
      dio_dodag_config->DIORedun.nxdata), __nesc_ntoh_uint16(
      dio_dodag_config->MaxRankInc.nxdata), __nesc_ntoh_uint16(
      dio_dodag_config->MinHopRankInc.nxdata));
      RPLRankP__RPLOF__setMinHopRankIncrease(__nesc_ntoh_uint16(dio_dodag_config->MinHopRankInc.nxdata));
    }







  ip_memcpy((uint8_t *)& tempParent.parentIP, 
  (uint8_t *)& iph->ip6_src, sizeof(struct in6_addr ));
  tempParent.rank = pParentRank;
  tempParent.etx_hop = 10;
  tempParent.valid = TRUE;
  tempParent.etx = etx;


  if ((
#line 793
  !RPLRankP__RPLOF__objectSupported(RPLRankP__METRICID) || 
  !RPLRankP__RPLOF__OCP(RPLRankP__OCP)) && RPLRankP__parentNum == 0) {


      RPLRankP__insertParent(tempParent);
      RPLRankP__RPLOF__recomputeRoutes();

      RPLRankP__nodeRank = INFINITE_RANK;
      RPLRankP__leafState = TRUE;
      return;
    }

  if ((parentIndex = RPLRankP__getParent(& iph->ip6_src)) != 20) {



      if (newDodag) {

          if (RPLRankP__parentNum != 0) {



              RPLRankP__RPLOF__recomputeRoutes();

              myParent = RPLRankP__getParent(RPLRankP__RPLOF__getParent());

              if (!RPLRankP__compareParent(RPLRankP__parentSet[myParent], tempParent)) {

                  RPLRankP__Prf = tempPrf;
                  ip_memcpy((uint8_t *)&RPLRankP__DODAGID, 
                  (uint8_t *)&rDODAGID, 
                  sizeof(struct in6_addr ));
                  RPLRankP__parentNum = 0;
                  RPLRankP__VERSION = __nesc_ntoh_uint8(dio->version.nxdata);
                  RPLRankP__resetValid();
                  RPLRankP__insertParent(tempParent);
                  RPLRankP__RPLOF__recomputeRoutes();
                  RPLRankP__getNewRank();
                }
              else 
#line 831
                {

                  RPLRankP__RPLOF__recomputeRoutes();
                  RPLRankP__getNewRank();
                  RPLRankP__ignore = TRUE;
                }
            }
          else 
#line 837
            {

              RPLRankP__Prf = tempPrf;
              ip_memcpy((uint8_t *)&RPLRankP__DODAGID, 
              (uint8_t *)&rDODAGID, 
              sizeof(struct in6_addr ));
              RPLRankP__parentNum = 0;
              RPLRankP__VERSION = __nesc_ntoh_uint8(dio->version.nxdata);
              RPLRankP__resetValid();
              RPLRankP__insertParent(tempParent);
              RPLRankP__RPLOF__recomputeRoutes();
              RPLRankP__getNewRank();
            }
        }
      else {



          RPLRankP__parentSet[parentIndex].rank = pParentRank;
          RPLRankP__parentSet[parentIndex].etx = etx;
          RPLRankP__RPLOF__recomputeRoutes();
          RPLRankP__getNewRank();
          RPLRankP__ignore = TRUE;
        }
    }
  else {



      if (RPLRankP__parentNum > 20) {
        return;
        }






      if (newDodag) {


          if (RPLRankP__parentNum != 0) {

              RPLRankP__RPLOF__recomputeRoutes();
              myParent = RPLRankP__getParent(RPLRankP__RPLOF__getParent());
              if (!RPLRankP__compareParent(RPLRankP__parentSet[myParent], tempParent)) {


                  RPLRankP__Prf = tempPrf;
                  ip_memcpy((uint8_t *)&RPLRankP__DODAGID, 
                  (uint8_t *)&rDODAGID, 
                  sizeof(struct in6_addr ));
                  RPLRankP__parentNum = 0;
                  RPLRankP__VERSION = __nesc_ntoh_uint8(dio->version.nxdata);
                  RPLRankP__resetValid();
                  RPLRankP__insertParent(tempParent);
                  RPLRankP__RPLOF__recomputeRoutes();
                  RPLRankP__getNewRank();
                }
              else 
#line 895
                {

                  RPLRankP__ignore = TRUE;
                }
            }
          else 
#line 899
            {



              RPLRankP__Prf = tempPrf;
              ip_memcpy((uint8_t *)&RPLRankP__DODAGID, 
              (uint8_t *)&rDODAGID, 
              sizeof(struct in6_addr ));
              RPLRankP__parentNum = 0;
              RPLRankP__VERSION = __nesc_ntoh_uint8(dio->version.nxdata);
              RPLRankP__resetValid();
              RPLRankP__insertParent(tempParent);
              RPLRankP__RPLOF__recomputeRoutes();
              RPLRankP__getNewRank();
            }
        }
      else 
#line 914
        {



          RPLRankP__insertParent(tempParent);
          RPLRankP__RPLOF__recomputeRoutes();
          preRank = RPLRankP__nodeRank;
          RPLRankP__getNewRank();
        }
    }
}










static inline void RPLRankP__IP_DIO__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 936
{
  struct dio_base_t *dio;

#line 938
  dio = (struct dio_base_t *)payload;

  if (!RPLRankP__m_running) {
#line 940
    return;
    }
  if (RPLRankP__nodeRank != ROOT_RANK && __nesc_ntoh_uint16(dio->dagRank.nxdata) != 0xFFFF) {
    RPLRankP__parseDIO(iph, payload, len);
    }

  if (__nesc_ntoh_uint16(dio->dagRank.nxdata) == 0xFFFF && RPLRankP__getParent(& iph->ip6_src) != 20) {
    RPLRankP__evictParent(RPLRankP__getParent(& iph->ip6_src));
    }

  if (RPLRankP__nodeRank > __nesc_ntoh_uint16(dio->dagRank.nxdata) || __nesc_ntoh_uint16(dio->dagRank.nxdata) == INFINITE_RANK) {
      if (!RPLRankP__ignore) {

          RPLRankP__IP_DIO_Filter__recv(iph, payload, len, meta);
        }
      RPLRankP__ignore = FALSE;
    }
}

# 50 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 51
{
}

# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__recv(uint8_t arg_0x414d7be0, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x414d7be0) {
#line 23
    case ICMPV6_CODE_DIO:
#line 23
      RPLRankP__IP_DIO__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    case ICMPV6_CODE_DAO:
#line 23
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(arg_0x414d7be0, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 39 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 40
{
  struct icmp6_hdr *icmph = packet;

  /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__recv(icmph->code, iph, packet, len, meta);
}

# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t UDPShellP__UDP__sendto(struct sockaddr_in6 *dest, void *payload, uint16_t len){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = UdpP__UDP__sendto(2U, dest, payload, len);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 275 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__ICMPPing__pingReply(struct in6_addr *source, struct icmp_stats *stats)
#line 275
{
  int len;

#line 277
  len = inet_ntop6(source, UDPShellP__reply_buf, MAX_REPLY_LEN);
  if (len > 0) {
      len += snprintf(UDPShellP__reply_buf + len - 1, MAX_REPLY_LEN - len + 1, UDPShellP__ping_fmt, 
      stats->seq, stats->ttl, stats->rtt);
      UDPShellP__reply_buf[len] = '\0';
      UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__reply_buf, len);
    }
}

# 125 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__ICMPPing__default__pingReply(uint8_t client, struct in6_addr *source, 
struct icmp_stats *ping_stats)
#line 126
{
}

# 8 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
inline static void ICMPPingP__ICMPPing__pingReply(uint8_t arg_0x41541030, struct in6_addr *source, struct icmp_stats *stats){
#line 8
  switch (arg_0x41541030) {
#line 8
    case 0U:
#line 8
      UDPShellP__ICMPPing__pingReply(source, stats);
#line 8
      break;
#line 8
    default:
#line 8
      ICMPPingP__ICMPPing__default__pingReply(arg_0x41541030, source, stats);
#line 8
      break;
#line 8
    }
#line 8
}
#line 8
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t ICMPPingP__PingTimer__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(9U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 109 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__IP_ECHO__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta)
#line 112
{
  icmp_echo_hdr_t *req = (icmp_echo_hdr_t *)packet;
  nx_uint32_t *sendTime = (nx_uint32_t *)(req + 1);
  struct icmp_stats p_stat;

  p_stat.seq = __nesc_ntoh_uint16(req->seqno.nxdata);
  p_stat.ttl = iph->ip6_ctlun.ip6_un1.ip6_un1_hlim;
  p_stat.rtt = ICMPPingP__PingTimer__getNow() - __nesc_ntoh_uint32((*sendTime).nxdata);
  ICMPPingP__ICMPPing__pingReply(__nesc_ntoh_uint16(req->ident.nxdata), & iph->ip6_src, &p_stat);
  ICMPPingP__ping_rcv++;
}

# 117 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCoreP.nc"
static inline void ICMPCoreP__ICMP_IP__default__recv(uint8_t type, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 118
{
}

# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static void ICMPCoreP__ICMP_IP__recv(uint8_t arg_0x4129d160, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x4129d160) {
#line 23
    case ICMP_TYPE_ECHO_REPLY:
#line 23
      ICMPPingP__IP_ECHO__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    case 155:
#line 23
      /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__recv(hdr, packet, len, meta);
#line 23
      /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      ICMPCoreP__ICMP_IP__default__recv(arg_0x4129d160, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 39 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool ICMPCoreP__IPAddress__setSource(struct ip6_hdr *hdr){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = IPAddressP__IPAddress__setSource(hdr);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 59 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCoreP.nc"
static inline void ICMPCoreP__IP__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta)
#line 62
{
  struct ip6_hdr *hdr = iph;
  struct ip6_packet reply;
  struct ip_iovec v;
  struct icmp6_hdr *req = (struct icmp6_hdr *)packet;
  uint16_t my_cksum;
#line 67
  uint16_t rx_cksum = (((uint16_t )req->cksum >> 8) | ((uint16_t )req->cksum << 8)) & 0xffff;




  req->cksum = 0;
  v.iov_base = packet;
  v.iov_len = len;
  v.iov_next = (void *)0;
  my_cksum = msg_cksum(iph, &v, IANA_ICMP);
  ;
#line 77
  ;

  if (my_cksum != rx_cksum) {
      ;
#line 80
      ;
      return;
    }

  switch (req->type) {
      case ICMP_TYPE_ECHO_REQUEST: 
        req->type = ICMP_TYPE_ECHO_REPLY;

      memset(&reply, 0, sizeof reply);
      memcpy(reply.ip6_hdr.ip6_dst.in6_u.u6_addr8, hdr->ip6_src.in6_u.u6_addr8, 16);
      ICMPCoreP__IPAddress__setSource(& reply.ip6_hdr);

      reply.ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
      reply.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
      reply.ip6_data = &v;

      reply.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )len << 8) | ((uint16_t )len >> 8)) & 0xffff;
      ICMPCoreP__ICMP_IP__send(ICMP_TYPE_ECHO_REPLY, &reply);
      break;

      default: 
        ICMPCoreP__ICMP_IP__recv(req->type, iph, packet, len, meta);
    }
}

# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t UDPEchoP__Echo__sendto(struct sockaddr_in6 *dest, void *payload, uint16_t len){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = UdpP__UDP__sendto(0U, dest, payload, len);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 98 "UDPEchoP.nc"
static inline void UDPEchoP__Echo__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta)
#line 99
{










  UDPEchoP__Echo__sendto(from, data, len);
}

#line 93
static inline void UDPEchoP__Status__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta)
#line 94
{
}

# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTable.nc"
inline static route_key_t RouteCmdP__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, struct in6_addr *next_hop, uint8_t ifindex){
#line 10
  int __nesc_result;
#line 10

#line 10
  __nesc_result = IPForwardingEngineP__ForwardingTable__addRoute(prefix, prefix_len_bits, next_hop, ifindex);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10






inline static error_t RouteCmdP__ForwardingTable__delRoute(route_key_t key){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = IPForwardingEngineP__ForwardingTable__delRoute(key);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 158 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__ShellCommand__write(uint8_t cmd_id, char *str, int len)
#line 158
{
  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, str, len);
}

# 24 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
inline static void RouteCmdP__ShellCommand__write(char *str, int len){
#line 24
  UDPShellP__ShellCommand__write(/*RouteCmdC.ShellCommandC*/ShellCommandC__0__CMD_ID, str, len);
#line 24
}
#line 24
#line 18
inline static char *RouteCmdP__ShellCommand__getBuffer(uint16_t len){
#line 18
  char *__nesc_result;
#line 18

#line 18
  __nesc_result = UDPShellP__ShellCommand__getBuffer(/*RouteCmdC.ShellCommandC*/ShellCommandC__0__CMD_ID, len);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 93 "/opt/tinyos-2.x/tos/lib/net/blip/shell/RouteCmdP.nc"
static inline char *RouteCmdP__ShellCommand__eval(int argc, char **argv)
#line 93
{
  char *cur;
#line 94
  char *buf = RouteCmdP__ShellCommand__getBuffer(MAX_REPLY_LEN);

  if (argc == 1) {

      cur = buf;
      memcpy(cur, RouteCmdP__header, strlen(RouteCmdP__header));
      cur += strlen(RouteCmdP__header);
      RouteCmdP__ShellCommand__write(buf, cur - buf);
      RouteCmdP__cur_entry = 0;
      RouteCmdP__Timer__startOneShot(20);
    }
  else {
#line 104
    if (strcmp(argv[1], "del") == 0 && argc == 3) {

        RouteCmdP__ForwardingTable__delRoute(atoi(argv[2]));
      }
    else {
#line 107
      if (strcmp(argv[1], "add") == 0 && argc == 4) {




          struct in6_addr in_pfx;
#line 112
          struct in6_addr in_next;
          char *prefix = argv[2];
          char *prefix_len = argv[2];
          char *next = argv[3];

#line 116
          while (*prefix_len != '/' && *prefix_len != '\0') 
            prefix_len++;
          if (*prefix_len == '/') {
            * prefix_len++ = '\0';
            }
          else {
#line 121
            prefix_len = "128";
            }
#line 122
          inet_pton6(prefix, &in_pfx);
          inet_pton6(next, &in_next);
          RouteCmdP__ForwardingTable__addRoute(in_pfx.in6_u.u6_addr8, atoi(prefix_len), 
          &in_next, ROUTE_IFACE_154);
        }
      }
    }
#line 127
  return (void *)0;
}

# 299 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
static inline char *UDPShellP__ShellCommand__default__eval(uint8_t cmd_id, int argc, char **argv)
#line 299
{
  return (void *)0;
}

# 11 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
inline static char *UDPShellP__ShellCommand__eval(uint8_t arg_0x41532868, int argc, char **argv){
#line 11
  char *__nesc_result;
#line 11

#line 11
  switch (arg_0x41532868) {
#line 11
    case /*RouteCmdC.ShellCommandC*/ShellCommandC__0__CMD_ID:
#line 11
      __nesc_result = RouteCmdP__ShellCommand__eval(argc, argv);
#line 11
      break;
#line 11
    default:
#line 11
      __nesc_result = UDPShellP__ShellCommand__default__eval(arg_0x41532868, argc, argv);
#line 11
      break;
#line 11
    }
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 220 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__init_argv(char *cmd, uint16_t len, char **argv, int *argc)
#line 220
{
  int inArg = 0;

#line 222
  *argc = 0;
  while (len > 0 && *argc < UDPShellP__N_ARGS) {
      if ((((*cmd == ' ' || *cmd == '\n') || *cmd == '\t') || *cmd == '\0') || len == 1) {
          if (inArg) {
              *argc = *argc + 1;
              inArg = 0;
              *cmd = '\0';
            }
        }
      else {
#line 230
        if (!inArg) {
            argv[*argc] = cmd;
            inArg = 1;
          }
        }
#line 234
      cmd++;
      len--;
    }
}











static inline void UDPShellP__UDP__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta)
#line 250
{
  char *argv[UDPShellP__N_ARGS];
  int argc;
#line 252
  int cmd;

  memcpy(&UDPShellP__session_endpoint, from, sizeof(struct sockaddr_in6 ));
  UDPShellP__init_argv((char *)data, len, argv, &argc);

  if (argc > 0) {
      cmd = UDPShellP__lookup_cmd(argv[0], UDPShellP__N_BUILTINS, UDPShellP__builtins);
      if (cmd != UDPShellP__CMD_NO_CMD) {
          UDPShellP__builtin_actions[cmd].action(argc, argv);
          return;
        }
      cmd = UDPShellP__lookup_cmd(argv[0], UDPShellP__N_EXTERNAL, UDPShellP__externals);
      if (cmd != UDPShellP__CMD_NO_CMD) {
          char *reply = UDPShellP__ShellCommand__eval(cmd, argc, argv);

#line 266
          if (reply != (void *)0) {
            UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, reply, strlen(reply));
            }
#line 268
          return;
        }
      cmd = snprintf(UDPShellP__reply_buf, MAX_REPLY_LEN, "sdsh: %s: command not found\n", argv[0]);
      UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__reply_buf, cmd);
    }
}

# 180 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
static inline void UdpP__UDP__default__recvfrom(uint8_t clnt, struct sockaddr_in6 *from, 
void *payload, 
uint16_t len, 
struct ip6_metadata *meta)
#line 183
{
}

# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
inline static void UdpP__UDP__recvfrom(uint8_t arg_0x412ef8f0, struct sockaddr_in6 *src, void *payload, uint16_t len, struct ip6_metadata *meta){
#line 29
  switch (arg_0x412ef8f0) {
#line 29
    case 0U:
#line 29
      UDPEchoP__Echo__recvfrom(src, payload, len, meta);
#line 29
      break;
#line 29
    case 1U:
#line 29
      UDPEchoP__Status__recvfrom(src, payload, len, meta);
#line 29
      break;
#line 29
    case 2U:
#line 29
      UDPShellP__UDP__recvfrom(src, payload, len, meta);
#line 29
      break;
#line 29
    default:
#line 29
      UdpP__UDP__default__recvfrom(arg_0x412ef8f0, src, payload, len, meta);
#line 29
      break;
#line 29
    }
#line 29
}
#line 29
# 64 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
static inline void UdpP__IP__recv(struct ip6_hdr *iph, void *packet, size_t len, struct ip6_metadata *meta)
#line 64
{
  uint8_t i;
  struct sockaddr_in6 addr;
  struct udp_hdr *udph = (struct udp_hdr *)packet;
  uint16_t my_cksum;
#line 68
  uint16_t rx_cksum = (((uint16_t )udph->chksum >> 8) | ((uint16_t )udph->chksum << 8)) & 0xffff;
  struct ip_iovec v;

  ;
#line 71
  ;



  for (i = 0; i < UdpP__N_CLIENTS; i++) 
    if (UdpP__local_ports[i] == udph->dstport) {
      break;
      }
  if (i == UdpP__N_CLIENTS) {

      return;
    }
  memcpy(& addr.sin6_addr, & iph->ip6_src, 16);
  addr.sin6_port = udph->srcport;

  udph->chksum = 0;
  v.iov_base = packet;
  v.iov_len = len;
  v.iov_next = (void *)0;

  my_cksum = msg_cksum(iph, &v, IANA_UDP);
  ;
#line 92
  ;
  if (rx_cksum != my_cksum) {
      ;
      ;
#line 95
      ;

      ;
#line 97
      ;


      return;
    }

  ;
  UdpP__UDP__recvfrom(i, &addr, (void *)(udph + 1), len - sizeof(struct udp_hdr ), meta);
}

# 56 "/opt/tinyos-2.x/tos/lib/net/blip/IPProtocolsP.nc"
static inline void IPProtocolsP__IP__default__recv(uint8_t nxt_hdr, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 57
{
}

# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static void IPProtocolsP__IP__recv(uint8_t arg_0x40b15468, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x40b15468) {
#line 23
    case IANA_UDP:
#line 23
      UdpP__IP__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    case IANA_ICMP:
#line 23
      ICMPCoreP__IP__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      IPProtocolsP__IP__default__recv(arg_0x40b15468, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 14 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPPacket.nc"
inline static int IPProtocolsP__IPPacket__findHeader(struct ip_iovec *payload, uint8_t first_type, uint8_t *search_type){
#line 14
  int __nesc_result;
#line 14

#line 14
  __nesc_result = IPPacketC__IPPacket__findHeader(payload, first_type, search_type);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/IPProtocolsP.nc"
static inline void IPProtocolsP__SubIP__recv(struct ip6_hdr *iph, 
void *payload, 
size_t len, 
struct ip6_metadata *meta)
#line 21
{
  int payload_off;
  uint8_t nxt_hdr;
  struct ip_iovec v = { 
  .iov_base = payload, 
  .iov_len = len, 
  .iov_next = (void *)0 };





  nxt_hdr = IPV6_FRAG;
  payload_off = IPProtocolsP__IPPacket__findHeader(&v, iph->ip6_ctlun.ip6_un1.ip6_un1_nxt, &nxt_hdr);
  if (payload_off >= 0 && ((uint16_t *)((uint8_t *)payload + payload_off))[1] != 0) {
    return;
    }

  nxt_hdr = 0xff;
  payload_off = IPProtocolsP__IPPacket__findHeader(&v, iph->ip6_ctlun.ip6_un1.ip6_un1_nxt, &nxt_hdr);
  ;
#line 41
  ;
  if (payload_off >= 0) {
      IPProtocolsP__IP__recv(nxt_hdr, iph, (uint8_t *)payload + payload_off, 
      len - payload_off, meta);
    }
}

# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static void IPForwardingEngineP__IP__recv(struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  IPProtocolsP__SubIP__recv(hdr, packet, len, meta);
#line 23
}
#line 23
# 366 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__IPRaw__default__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 367
{
}

# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static void IPForwardingEngineP__IPRaw__recv(struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  IPForwardingEngineP__IPRaw__default__recv(hdr, packet, len, meta);
#line 23
}
#line 23
# 248 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__IPForward__recv(uint8_t ifindex, struct ip6_hdr *iph, void *payload, 
struct ip6_metadata *meta)
#line 249
{
  struct ip6_packet pkt;
  struct in6_addr *next_hop;
  size_t len = (((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff;
  route_key_t next_hop_key = ROUTE_INVAL_KEY;
  uint8_t next_hop_ifindex;
  struct ip_iovec v = { 
  .iov_next = (void *)0, 
  .iov_base = payload, 
  .iov_len = len };



  IPForwardingEngineP__IPRaw__recv(iph, payload, len, meta);

  if (IPForwardingEngineP__IPAddress__isLocalAddress(& iph->ip6_dst)) {


      IPForwardingEngineP__IP__recv(iph, payload, len, meta);
    }
  else 
#line 268
    {

      uint8_t nxt_hdr = IPV6_ROUTING;
      int header_off = IPForwardingEngineP__IPPacket__findHeader(&v, iph->ip6_ctlun.ip6_un1.ip6_un1_nxt, &nxt_hdr);

#line 272
      if (! -- iph->ip6_ctlun.ip6_un1.ip6_un1_hlim) {


          return;
        }

      if (header_off >= 0) {




          return;
        }
      else 
#line 284
        {

          struct route_entry *next_hop_entry = 
          IPForwardingEngineP__ForwardingTable__lookupRoute(iph->ip6_dst.in6_u.u6_addr8, 
          128);

#line 289
          if (next_hop_entry == (void *)0) {



              return;
            }
          next_hop = & next_hop_entry->next_hop;
          next_hop_key = next_hop_entry->key;
          next_hop_ifindex = next_hop_entry->ifindex;
        }

      memcpy(& pkt.ip6_hdr, iph, sizeof(struct ip6_hdr ));
      pkt.ip6_data = &v;
      pkt.ip6_inputif = ifindex;




      if (!IPForwardingEngineP__ForwardingEvents__approve(next_hop_ifindex, &pkt, next_hop)) {
        return;
        }
      IPForwardingEngineP__do_send(next_hop_ifindex, next_hop, &pkt);
    }
}

# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
inline static void IPNeighborDiscoveryP__IPForward__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta){
#line 28
  IPForwardingEngineP__IPForward__recv(ROUTE_IFACE_154, iph, payload, meta);
#line 28
}
#line 28
# 124 "/opt/tinyos-2.x/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta)
#line 124
{
  IPNeighborDiscoveryP__IPForward__recv(iph, payload, meta);
}

# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPLower.nc"
inline static void IPDispatchP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta){
#line 28
  IPNeighborDiscoveryP__IPLower__recv(iph, payload, meta);
#line 28
}
#line 28
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t UdpP__IP__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = IPProtocolsP__IP__send(IANA_UDP, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
static inline uint16_t UdpP__alloc_lport(uint8_t clnt)
#line 28
{
  int i;
#line 29
  int done = 0;
  uint16_t compare = (((uint16_t )UdpP__last_localport << 8) | ((uint16_t )UdpP__last_localport >> 8)) & 0xffff;

#line 31
  UdpP__last_localport = UdpP__last_localport < UdpP__LOCAL_PORT_STOP ? UdpP__last_localport + 1 : UdpP__LOCAL_PORT_START;
  while (!done) {
      done = 1;
      for (i = 0; i < UdpP__N_CLIENTS; i++) {
          if (UdpP__local_ports[i] == compare) {
              UdpP__last_localport = UdpP__last_localport < UdpP__LOCAL_PORT_STOP ? UdpP__last_localport + 1 : UdpP__LOCAL_PORT_START;
              compare = (((uint16_t )UdpP__last_localport << 8) | ((uint16_t )UdpP__last_localport >> 8)) & 0xffff;
              done = 0;
              break;
            }
        }
    }
  return UdpP__last_localport;
}

# 39 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool UdpP__IPAddress__setSource(struct ip6_hdr *hdr){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = IPAddressP__IPAddress__setSource(hdr);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 124 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
static inline error_t UdpP__UDP__sendtov(uint8_t clnt, struct sockaddr_in6 *dest, 
struct ip_iovec *iov)
#line 125
{
  error_t rc;
  struct ip6_packet pkt;
  struct udp_hdr udp;
  struct ip_iovec v[1];
  size_t len = iov_len(iov);


  memset((uint8_t *)& pkt.ip6_hdr, 0, sizeof  pkt.ip6_hdr);
  memset((uint8_t *)&udp, 0, sizeof udp);
  memcpy(& pkt.ip6_hdr.ip6_dst, dest->sin6_addr.in6_u.u6_addr8, 16);
  UdpP__IPAddress__setSource(& pkt.ip6_hdr);

  if (UdpP__local_ports[clnt] == 0 && (
  UdpP__local_ports[clnt] = UdpP__alloc_lport(clnt)) == 0) {
      return FAIL;
    }

  udp.srcport = UdpP__local_ports[clnt];
  udp.dstport = dest->sin6_port;
  udp.len = (((uint16_t )(len + sizeof(struct udp_hdr )) << 8) | ((uint16_t )(len + sizeof(struct udp_hdr )) >> 8)) & 0xffff;
  udp.chksum = 0;


  pkt.ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_UDP;
  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = udp.len;


  v[0].iov_base = (uint8_t *)&udp;
  v[0].iov_len = sizeof(struct udp_hdr );
  v[0].iov_next = iov;
  pkt.ip6_data = &v[0];

  udp.chksum = (((uint16_t )msg_cksum(& pkt.ip6_hdr, v, IANA_UDP) << 8) | ((uint16_t )msg_cksum(& pkt.ip6_hdr, v, IANA_UDP) >> 8)) & 0xffff;

  rc = UdpP__IP__send(&pkt);
  ;
  return rc;
}

# 294 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline uint8_t RPLRankP__getPreExistingParent(struct in6_addr *node)
#line 294
{

  uint8_t indexset;

#line 297
  if (RPLRankP__parentNum == 0) {
      return 20;
    }

  for (indexset = 0; indexset < 20; indexset++) {
      if (!memcmp(& RPLRankP__parentSet[indexset].parentIP, node, sizeof(struct in6_addr ))) {
          return indexset;
        }
    }
  return 20;
}

# 41 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static void RPLRankP__RouteInfo__resetTrickle(void ){
#line 41
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
#line 41
}
#line 41
# 132 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error)
{
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Ieee154Send.nc"
inline static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 97
  /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(msg, error);
#line 97
}
#line 97
# 127 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(msg, error);
}

# 22 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
inline static void IPNeighborDiscoveryP__IPForward__sendDone(struct send_info *status){
#line 22
  IPForwardingEngineP__IPForward__sendDone(ROUTE_IFACE_154, status);
#line 22
}
#line 22
# 128 "/opt/tinyos-2.x/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IPLower__sendDone(struct send_info *status)
#line 128
{
  IPNeighborDiscoveryP__IPForward__sendDone(status);
}

# 22 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPLower.nc"
inline static void IPDispatchP__IPLower__sendDone(struct send_info *status){
#line 22
  IPNeighborDiscoveryP__IPLower__sendDone(status);
#line 22
}
#line 22
# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(0U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 195 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(message_t *msg)
{
  return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(msg);
}

# 85 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static bool /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 208 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline bool /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__wasDelivered(message_t *msg)
{
  return /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__wasAcked(msg);
}

# 71 "/opt/tinyos-2.x/tos/interfaces/PacketLink.nc"
inline static bool IPDispatchP__PacketLink__wasDelivered(message_t * msg){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__wasDelivered(msg);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
#line 59
inline static uint16_t IPDispatchP__PacketLink__getRetries(message_t * msg){
#line 59
  unsigned short __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void RFA1DriverLayerP__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 308 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__RadioState__turnOff(void )
{
  if (RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE) {
    return EBUSY;
    }
  else {
#line 312
    if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_SLEEP) {
      return EALREADY;
      }
    }
#line 315
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_TURNOFF;
  RFA1DriverLayerP__Tasklet__schedule();

  return SUCCESS;
}

# 44 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOff(void ){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = RFA1DriverLayerP__RadioState__turnOff();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 97 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop(void )
{
  error_t error;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOff();

      if (error == SUCCESS) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF;
        }
    }
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 130 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t IPDispatchP__RadioControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 818 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__BareSend__sendDone(message_t *msg, error_t error)
#line 818
{
  struct send_entry *s_entry = IPDispatchP__SendQueue__head();

  IPDispatchP__radioBusy = FALSE;



  if (IPDispatchP__state == IPDispatchP__S_STOPPING) {
      IPDispatchP__RadioControl__stop();
      IPDispatchP__state = IPDispatchP__S_STOPPED;
      goto done;
    }

  s_entry->info->link_transmissions += IPDispatchP__PacketLink__getRetries(msg);
  s_entry->info->link_fragment_attempts++;

  if (!IPDispatchP__PacketLink__wasDelivered(msg)) {
      ;
#line 835
      ;

      s_entry->info->failed = TRUE;
      IPDispatchP__IPLower__sendDone(s_entry->info);
    }
  else {


    if (s_entry->info->link_fragment_attempts == 
    s_entry->info->link_fragments) {
        IPDispatchP__IPLower__sendDone(s_entry->info);
      }
    }
  done: 

    IPDispatchP__SENDINFO_DECR(s_entry->info);
  IPDispatchP__FragPool__put(s_entry->msg);
  IPDispatchP__SendEntryPool__put(s_entry);
  IPDispatchP__SendQueue__dequeue();

  IPDispatchP__sendTask__postTask();
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 54
  IPDispatchP__BareSend__sendDone(msg, error);
#line 54
  /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 108 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(am_id_t id, message_t *msg, error_t error)
{
}

# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(am_id_t arg_0x40cbd540, message_t * msg, error_t error){
#line 110
    /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(arg_0x40cbd540, msg, error);
#line 110
}
#line 110
# 98 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg), msg, error);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 78 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(msg, result);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 214 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  if (__nesc_ntoh_leuint8(/*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(msg, result);
    }
  else {
#line 219
    /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(msg, result);
    }
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 80 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(msg, error);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 230 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg)
{
  error_t result;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    result = EBUSY;
    }
  else {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg = msg;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries = 0;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
      result = SUCCESS;
    }

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return result;
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__startOneShot(uint32_t dt){
#line 73
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 203 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint16_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetryDelay(message_t *msg)
{
  return /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(msg)->retryDelay;
}

#line 77
static inline void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__runTask(void )
{
  uint16_t retries;

  for (; 0; ) ;

  retries = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg);

  if (/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state == /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDDONE) 
    {
      if (retries == 0 || /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__wasAcked(/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg)) {
        /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL + SUCCESS;
        }
      else {
#line 89
        if (++/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries < retries) 
          {
            uint16_t delay;

            /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDING;
            delay = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetryDelay(/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg);

            if (delay > 0) 
              {
                /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__startOneShot(delay);
                return;
              }
          }
        else {
          /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL + FAIL;
          }
        }
    }
#line 106
  if (/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state == /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDING) 
    {
      /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDDONE;

      if (/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__send(/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg) != SUCCESS) {
        /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask();
        }
      return;
    }

  if (/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state >= /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL) 
    {
      error_t error = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state - /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL;


      if (retries > 0) {
        /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg, /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries);
        }
      /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_READY;
      /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__sendDone(/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg, error);
    }
}

# 60 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__qHead == /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__qHead != /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__qHead = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__resQ[/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__qHead == /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__qTail = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__resQ[id] = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 173 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x405b25c0){
#line 65
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__unconfigure(arg_0x405b25c0);
#line 65
}
#line 65
# 228 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline bool RPLRankP__exceedThreshold(uint8_t indexset, uint8_t ID)
#line 228
{
  return RPLRankP__parentSet[indexset].etx_hop > 3 * 10;
}

#line 524
static inline void RPLRankP__ForwardingEvents__linkResult(struct in6_addr *node, 
struct send_info *info)
#line 525
{
  uint8_t indexset;
#line 526
  uint8_t myParent;
  uint16_t etx_now = info->link_transmissions * 10 / 
  info->link_fragment_attempts;

  ;
#line 530
  ;
  ;
#line 531
  ;
  ;
#line 532
  ;

  myParent = RPLRankP__getParent(RPLRankP__RPLOF__getParent());

  if (RPLRankP__nodeRank == ROOT_RANK) {
      return;
    }

  for (indexset = 0; indexset < 20; indexset++) {
      if (RPLRankP__parentSet[indexset].valid && 
      !memcmp(& RPLRankP__parentSet[indexset].parentIP, node, sizeof(struct in6_addr ))) {
          break;
        }
    }

  if (indexset != 20) {
      RPLRankP__parentSet[indexset].etx_hop = (
      RPLRankP__parentSet[indexset].etx_hop * 8 + etx_now * 2) / 10;

      if (RPLRankP__exceedThreshold(indexset, RPLRankP__METRICID)) {
          RPLRankP__evictParent(indexset);
          if (indexset == myParent && RPLRankP__parentNum > 0) {
            RPLRankP__RPLOF__recomputeRoutes();
            }
        }
#line 556
      RPLRankP__getNewRank();






      return;
    }
}

# 353 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__ForwardingEvents__default__linkResult(uint8_t idx, struct in6_addr *host, 
struct send_info *info)
#line 354
{
}

# 39 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
inline static void IPForwardingEngineP__ForwardingEvents__linkResult(uint8_t arg_0x40b23418, struct in6_addr *dest, struct send_info *info){
#line 39
  switch (arg_0x40b23418) {
#line 39
    case RPL_IFACE:
#line 39
      RPLRankP__ForwardingEvents__linkResult(dest, info);
#line 39
      break;
#line 39
    default:
#line 39
      IPForwardingEngineP__ForwardingEvents__default__linkResult(arg_0x40b23418, dest, info);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 132 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg)
{

  __nesc_hton_leuint8(/*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata, 0x3f);

  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 68 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void )
{
  error_t result = /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(/*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending);

#line 71
  if (result != SUCCESS) 
    {
      /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
      /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(/*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending, result);
    }
}

# 165 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Resource__default__granted(uint8_t id)
#line 165
{
}

# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Resource__granted(uint8_t arg_0x405a4eb0){
#line 102
  switch (arg_0x405a4eb0) {
#line 102
    case 0U:
#line 102
      /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Resource__default__granted(arg_0x405a4eb0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 171 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x405b25c0){
#line 59
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__configure(arg_0x405b25c0);
#line 59
}
#line 59
# 155 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__reqResId;
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__resId);
  /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Resource__granted(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__resId);
}

# 369 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteAdded(void )
#line 369
{
}

# 43 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTableEvents.nc"
inline static void IPForwardingEngineP__ForwardingTableEvents__defaultRouteAdded(void ){
#line 43
  IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteAdded();
#line 43
}
#line 43
# 96 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__defaultRouteAddedTask__runTask(void )
#line 96
{
  IPForwardingEngineP__ForwardingTableEvents__defaultRouteAdded();
}

# 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 69 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__stop(void )
{
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop();
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__stop();
#line 73
}
#line 73
# 102 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop(void )
{
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t UDPEchoP__Status__sendto(struct sockaddr_in6 *dest, void *payload, uint16_t len){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = UdpP__UDP__sendto(1U, dest, payload, len);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 57 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )43U ^= 1 << 6;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__toggle();
#line 42
}
#line 42
# 103 "/opt/tinyos-2.x/tos/platforms/ucbase/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 103
{
  LedsP__Led1__toggle();
  ;
#line 105
  ;
}

# 85 "/opt/tinyos-2.x/tos/platforms/ucbase/Leds.nc"
inline static void UDPEchoP__Leds__led1Toggle(void ){
#line 85
  LedsP__Leds__led1Toggle();
#line 85
}
#line 85
# 174 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
static inline void UdpP__BlipStatistics__get(udp_statistics_t *buf)
#line 174
{
}

# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/BlipStatistics.nc"
inline static void UDPEchoP__UDPStats__get(UDPEchoP__UDPStats__stat_str *stats){
#line 29
  UdpP__BlipStatistics__get(stats);
#line 29
}
#line 29
# 957 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__BlipStatistics__get(ip_statistics_t *statistics)
#line 957
{
#line 971
  memcpy(statistics, &IPDispatchP__stats, sizeof(ip_statistics_t ));
}

# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/BlipStatistics.nc"
inline static void UDPEchoP__IPStats__get(UDPEchoP__IPStats__stat_str *stats){
#line 29
  IPDispatchP__BlipStatistics__get(stats);
#line 29
}
#line 29
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void UDPEchoP__StatusTimer__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 113 "UDPEchoP.nc"
static inline void UDPEchoP__StatusTimer__fired(void )
#line 113
{
  unsigned short __nesc_temp43;
  unsigned char *__nesc_temp42;

#line 114
  if (!UDPEchoP__timerStarted) {
      UDPEchoP__StatusTimer__startPeriodic(1024 * 10L);
      UDPEchoP__timerStarted = TRUE;
    }

  (__nesc_temp42 = UDPEchoP__stats.seqno.nxdata, __nesc_hton_uint16(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint16(__nesc_temp42)) + 1), __nesc_temp43);
  __nesc_hton_uint16(UDPEchoP__stats.sender.nxdata, TOS_NODE_ID);
  __nesc_hton_uint16(UDPEchoP__stats.interval.nxdata, 10L);

  UDPEchoP__IPStats__get(& UDPEchoP__stats.ip);
  UDPEchoP__UDPStats__get(& UDPEchoP__stats.udp);
  UDPEchoP__Leds__led1Toggle();
  UDPEchoP__Status__sendto(&UDPEchoP__route_dest, &UDPEchoP__stats, sizeof UDPEchoP__stats);
}

# 140 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__fired(void )
{
  for (; 0; ) ;

  /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask();
}

# 285 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__ip_print_heap(void )
#line 285
{
}

#line 260
static inline void IPDispatchP__reconstruct_age(void *elt)
#line 260
{
  struct lowpan_reconstruct *recon = (struct lowpan_reconstruct *)elt;

#line 262
  if (recon->r_timeout != T_UNUSED) {
    ;
    }
#line 263
  ;


  switch (recon->r_timeout) {
      case T_ACTIVE: 
        recon->r_timeout = T_ZOMBIE;
#line 268
      break;
      case T_FAILED1: 
        recon->r_timeout = T_FAILED2;
#line 270
      break;
      case T_ZOMBIE: 
        case T_FAILED2: 

          ;
#line 274
      ;
      if (recon->r_buf != (void *)0) {
          ;
#line 276
          ;
          ip_free(recon->r_buf);
        }
      recon->r_timeout = T_UNUSED;
      recon->r_buf = (void *)0;
      break;
    }
}

#line 296
static inline void IPDispatchP__ExpireTimer__fired(void )
#line 296
{
  table_map(&IPDispatchP__recon_cache, IPDispatchP__reconstruct_age);


  ;
#line 300
  ;
  ;
#line 301
  ;
  ;
#line 302
  ;
  ;
#line 303
  ;
  IPDispatchP__ip_print_heap();
  ;
#line 305
  ;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 92 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(3U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 409 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__nextTrickleTime(void )
#line 409
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sentDIOFlag = FALSE;
  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__doubleCounter < /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntDouble) {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__doubleCounter++;
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod *= 2;
    }
  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__isRunning()) {
    /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__chooseAdvertiseTime();
    }
}

#line 527
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__fired(void )
#line 527
{
  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sentDIOFlag) {


      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__nextTrickleTime();
    }
  else 
#line 532
    {



      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__postTask();

      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__postTask();
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 517 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__fired(void )
#line 517
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__postTask();
}

static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IncreaseVersionTimer__fired(void )
#line 521
{

  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber++;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
}

# 280 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__fired(void )
#line 280
{
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__postTask();
}

# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 192 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__fired(void )
#line 192
{
  uint32_t dao_next = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate + 
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__Random__rand16() % (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate / 10);

#line 195
  ;
#line 195
  ;









  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__postTask();
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__startOneShot(dao_next);
}

# 16 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTable.nc"
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__delRoute(route_key_t key){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = IPForwardingEngineP__ForwardingTable__delRoute(key);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 182 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__getStoreState(void )
#line 182
{

  return TRUE;
}

#line 284
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__fired(void )
#line 284
{

  uint8_t i;
#line 286
  uint8_t j;

#line 287
  if (!/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__getStoreState()) {
    return;
    }
  for (i = 0; i < /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count; i++) {
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[i].lifetime -= /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__remove_time;
      if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[i].lifetime <= /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__remove_time) {

          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__delRoute(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[i].key);
          for (j = i; j < /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count - 1; j++) {
              /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[j] = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[j + 1];
            }
          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count - 1].lifetime = 0;
          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count--;
        }
    }
}

# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t ICMPPingP__IP_ECHO__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = ICMPCoreP__ICMP_IP__send(ICMP_TYPE_ECHO_REPLY, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 39 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool ICMPPingP__IPAddress__setSource(struct ip6_hdr *hdr){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = IPAddressP__IPAddress__setSource(hdr);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 46 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__sendPing(struct in6_addr *dest, uint16_t seqno)
#line 46
{
  struct ip6_packet *ipmsg = (struct ip6_packet *)ip_malloc(sizeof(struct ip6_packet ) + 
  sizeof(icmp_echo_hdr_t ) + 
  sizeof(nx_uint32_t ));
  icmp_echo_hdr_t *e_hdr = (icmp_echo_hdr_t *)(ipmsg + 1);
  nx_uint32_t *sendTime = (nx_uint32_t *)(e_hdr + 1);
  struct ip_iovec v;

  if (ipmsg == (void *)0) {
#line 54
    return;
    }

  v.iov_base = (void *)(ipmsg + 1);
  v.iov_len = sizeof(icmp_echo_hdr_t ) + sizeof(nx_uint32_t );
  v.iov_next = (void *)0;
  ipmsg->ip6_data = &v;


  __nesc_hton_uint8(e_hdr->type.nxdata, ICMP_TYPE_ECHO_REQUEST);
  __nesc_hton_uint8(e_hdr->code.nxdata, 0);
  __nesc_hton_uint16(e_hdr->cksum.nxdata, 0);
  __nesc_hton_uint16(e_hdr->ident.nxdata, ICMPPingP__ping_ident);
  __nesc_hton_uint16(e_hdr->seqno.nxdata, seqno);
  __nesc_hton_uint32((*sendTime).nxdata, ICMPPingP__PingTimer__getNow());


  memset(& ipmsg->ip6_hdr, 0, sizeof(struct ip6_hdr ));
  ipmsg->ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
  ipmsg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
  ipmsg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )v.iov_len << 8) | ((uint16_t )v.iov_len >> 8)) & 0xffff;
  memcpy(& ipmsg->ip6_hdr.ip6_dst, dest->in6_u.u6_addr8, 16);
  ICMPPingP__IPAddress__setSource(& ipmsg->ip6_hdr);

  __nesc_hton_uint16(e_hdr->cksum.nxdata, msg_cksum(& ipmsg->ip6_hdr, ipmsg->ip6_data, IANA_ICMP));

  ICMPPingP__IP_ECHO__send(ipmsg);
  ip_free(ipmsg);
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void ICMPPingP__PingTimer__stop(void ){
#line 78
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(9U);
#line 78
}
#line 78
# 286 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__ICMPPing__pingDone(uint16_t ping_rcv, uint16_t ping_n)
#line 286
{
  int len;

#line 288
  len = snprintf(UDPShellP__reply_buf, MAX_REPLY_LEN, UDPShellP__ping_summary, ping_n, ping_rcv);
  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__reply_buf, len);
}

# 129 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__ICMPPing__default__pingDone(uint8_t client, uint16_t n, uint16_t m)
#line 129
{
}

# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
inline static void ICMPPingP__ICMPPing__pingDone(uint8_t arg_0x41541030, uint16_t ping_rcv, uint16_t ping_n){
#line 10
  switch (arg_0x41541030) {
#line 10
    case 0U:
#line 10
      UDPShellP__ICMPPing__pingDone(ping_rcv, ping_n);
#line 10
      break;
#line 10
    default:
#line 10
      ICMPPingP__ICMPPing__default__pingDone(arg_0x41541030, ping_rcv, ping_n);
#line 10
      break;
#line 10
    }
#line 10
}
#line 10
# 97 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__PingTimer__fired(void )
#line 97
{

  if (ICMPPingP__ping_seq == ICMPPingP__ping_n) {
      ICMPPingP__ICMPPing__pingDone(ICMPPingP__ping_ident, ICMPPingP__ping_rcv, ICMPPingP__ping_n);
      ICMPPingP__PingTimer__stop();
      return;
    }
  ICMPPingP__sendPing(&ICMPPingP__ping_dest, ICMPPingP__ping_seq);
  ICMPPingP__ping_seq++;
}

# 49 "/opt/tinyos-2.x/tos/lib/net/blip/shell/RouteCmdP.nc"
static inline char *RouteCmdP__ifnam(int ifidx)
#line 49
{
  int i;

#line 51
  for (i = 0; i < sizeof RouteCmdP__ifaces / sizeof RouteCmdP__ifaces[0]; i++) {
      if (RouteCmdP__ifaces[i].ifindex == ifidx) {
        return RouteCmdP__ifaces[i].name;
        }
    }
#line 55
  return (void *)0;
}

# 179 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline struct route_entry *IPForwardingEngineP__ForwardingTable__getTable(int *n)
#line 179
{
  *n = 20;
  return IPForwardingEngineP__routing_table;
}

# 22 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTable.nc"
inline static struct route_entry *RouteCmdP__ForwardingTable__getTable(int *size){
#line 22
  struct route_entry *__nesc_result;
#line 22

#line 22
  __nesc_result = IPForwardingEngineP__ForwardingTable__getTable(size);
#line 22

#line 22
  return __nesc_result;
#line 22
}
#line 22
# 59 "/opt/tinyos-2.x/tos/lib/net/blip/shell/RouteCmdP.nc"
static inline void RouteCmdP__Timer__fired(void )
#line 59
{

  struct route_entry *entry;
  int n;
  char *cur;
#line 63
  char *buf = RouteCmdP__ShellCommand__getBuffer(MAX_REPLY_LEN);

#line 64
  cur = buf;

  entry = RouteCmdP__ForwardingTable__getTable(&n);
  if (!buf || !entry) {
    return;
    }
  for (; RouteCmdP__cur_entry < n; RouteCmdP__cur_entry++) {
      if (entry[RouteCmdP__cur_entry].valid) {
          cur += snprintf(cur, MAX_REPLY_LEN - (cur - buf), "%2i\t", entry[RouteCmdP__cur_entry].key);
          cur += inet_ntop6(& entry[RouteCmdP__cur_entry].prefix, cur, MAX_REPLY_LEN - (cur - buf)) - 1;
          cur += snprintf(cur, MAX_REPLY_LEN - (cur - buf), "/%i\t\t", entry[RouteCmdP__cur_entry].prefixlen);
          cur += inet_ntop6(& entry[RouteCmdP__cur_entry].next_hop, cur, MAX_REPLY_LEN - (cur - buf)) - 1;
          if (MAX_REPLY_LEN - (cur - buf) < 6) {
#line 76
            continue;
            }
#line 77
          * cur++ = '\t';
#line 77
          * cur++ = '\t';
          strncpy(cur, RouteCmdP__ifnam(entry[RouteCmdP__cur_entry].ifindex), MAX_REPLY_LEN - (cur - buf));
          cur += 3;
          * cur++ = '\n';
          if (MAX_REPLY_LEN - (cur - buf) > MAX_REPLY_LEN / 2) {
              RouteCmdP__ShellCommand__write(buf, cur - buf);
              RouteCmdP__Timer__startOneShot(20);
              RouteCmdP__cur_entry++;
              return;
            }
        }
    }
  if (cur > buf) {
    RouteCmdP__ShellCommand__write(buf, cur - buf);
    }
}

# 204 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x40ac28f0){
#line 83
  switch (arg_0x40ac28f0) {
#line 83
    case 0U:
#line 83
      UDPEchoP__StatusTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      IPDispatchP__ExpireTimer__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__fired();
#line 83
      break;
#line 83
    case 5U:
#line 83
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IncreaseVersionTimer__fired();
#line 83
      break;
#line 83
    case 6U:
#line 83
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__fired();
#line 83
      break;
#line 83
    case 7U:
#line 83
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__fired();
#line 83
      break;
#line 83
    case 8U:
#line 83
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__fired();
#line 83
      break;
#line 83
    case 9U:
#line 83
      ICMPPingP__PingTimer__fired();
#line 83
      break;
#line 83
    case 10U:
#line 83
      RouteCmdP__Timer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x40ac28f0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 193 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 0;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__start(void ){
#line 59
  HplAtmRfa1TimerMacP__CompareA__start();
#line 59
}
#line 59
# 189 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__reset(void )
#line 189
{
#line 189
  * (volatile uint8_t *)0xE0 = 1 << 0;
}

# 54 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__reset(void ){
#line 54
  HplAtmRfa1TimerMacP__CompareA__reset();
#line 54
}
#line 54
# 166 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__set(uint32_t value)
{
  HplAtmRfa1TimerMacP__reg32_t time;

  time.full = value;
  /* atomic removed: atomic calls only */

  {
    * (volatile uint8_t *)0xF8 = time.hh;
    * (volatile uint8_t *)0xF7 = time.hl;
    * (volatile uint8_t *)0xF6 = time.lh;
    * (volatile uint8_t *)0xF5 = time.ll;
  }
}

# 43 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__set(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__size_type value){
#line 43
  HplAtmRfa1TimerMacP__CompareA__set(value);
#line 43
}
#line 43
# 80 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__setAlarm(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type time)
{
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__set(time);
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__reset();
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__start();
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__Counter__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 87 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type nt0, /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type ndt)
{
  /* atomic removed: atomic calls only */
  {

    /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type n = /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__get() + 2;


    if ((/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type )(n - nt0) < ndt) {
      n = nt0 + ndt;
      }
    /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__setAlarm(n);
  }
}

# 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 139 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 91 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type __nesc_temp = 
#line 93
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 + /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;

      {
#line 93
        __nesc_atomic_end(__nesc_atomic); 
#line 93
        return __nesc_temp;
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialResetP__sendAck__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialResetP__sendAck);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 538 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 538
{
  bool not_busy = FALSE;

#line 540
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 540
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 542
          EOFF;

          {
#line 542
            __nesc_atomic_end(__nesc_atomic); 
#line 542
            return __nesc_temp;
          }
        }
    }
#line 545
    __nesc_atomic_end(__nesc_atomic); }
#line 544
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 544
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 550
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 107 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialResetP.nc"
static inline uint8_t SerialResetP__SerialPacketInfo__dataLinkLength(message_t *msg, uint8_t upperLen)
{
  return upperLen;
}

# 361 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x4080dcd0, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x4080dcd0) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    case 0x72:
#line 23
      __nesc_result = SerialResetP__SerialPacketInfo__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x4080dcd0, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 111 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t SerialResetP__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(0x72, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 61 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialResetP.nc"
static inline void SerialResetP__sendAck__runTask(void )
{
  uint8_t *p = (uint8_t *)SerialResetP__sendMsg;

  p[0] = 'Z';
  p[1] = 'B';
  p[2] = 'P';

  if (SerialResetP__Send__send(SerialResetP__sendMsg, 3) != SUCCESS) {
    SerialResetP__sendAck__postTask();
    }
}

# 60 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 172
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

#line 105
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(uint8_t id, message_t *msg, error_t result)
#line 105
{
  return;
}

# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x40738bc0, message_t * msg, error_t error){
#line 110
    /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(arg_0x40738bc0, msg, error);
#line 110
}
#line 110
# 101 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 128 "/opt/tinyos-2.x/tos/platforms/ucbase/LedsP.nc"
static inline void LedsP__Leds__led3Off(void )
#line 128
{
  LedsP__Led3__set();
  ;
#line 130
  ;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__35__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )46U &= ~(1 << 3);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led3__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__35__IO__clr();
#line 41
}
#line 41
# 123 "/opt/tinyos-2.x/tos/platforms/ucbase/LedsP.nc"
static inline void LedsP__Leds__led3On(void )
#line 123
{
  LedsP__Led3__clr();
  ;
#line 125
  ;
}

#line 113
static inline void LedsP__Leds__led2Off(void )
#line 113
{
  LedsP__Led2__set();
  ;
#line 115
  ;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )46U &= ~(1 << 2);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__clr();
#line 41
}
#line 41
# 108 "/opt/tinyos-2.x/tos/platforms/ucbase/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 108
{
  LedsP__Led2__clr();
  ;
#line 110
  ;
}

#line 98
static inline void LedsP__Leds__led1Off(void )
#line 98
{
  LedsP__Led1__set();
  ;
#line 100
  ;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 6);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr();
#line 41
}
#line 41
# 93 "/opt/tinyos-2.x/tos/platforms/ucbase/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 93
{
  LedsP__Led1__clr();
  ;
#line 95
  ;
}

#line 83
static inline void LedsP__Leds__led0Off(void )
#line 83
{
  LedsP__Led0__set();
  ;
#line 85
  ;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 7);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__clr();
#line 41
}
#line 41
# 78 "/opt/tinyos-2.x/tos/platforms/ucbase/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 78
{
  LedsP__Led0__clr();
  ;
#line 80
  ;
}

#line 167
static inline void LedsP__Leds__set(uint8_t val)
#line 167
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 168
    {
      if (val & LEDS_LED0) {
          LedsP__Leds__led0On();
        }
      else {
          LedsP__Leds__led0Off();
        }
      if (val & LEDS_LED1) {
          LedsP__Leds__led1On();
        }
      else {
          LedsP__Leds__led1Off();
        }
      if (val & LEDS_LED2) {
          LedsP__Leds__led2On();
        }
      else {
          LedsP__Leds__led2Off();
        }
      if (val & LEDS_LED3) {
          LedsP__Leds__led3On();
        }
      else {
          LedsP__Leds__led3Off();
        }
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
}

# 165 "/opt/tinyos-2.x/tos/platforms/ucbase/Leds.nc"
inline static void SerialResetP__Leds__set(uint8_t val){
#line 165
  LedsP__Leds__set(val);
#line 165
}
#line 165
# 73 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialResetP.nc"
static inline void SerialResetP__Send__sendDone(message_t *msg, error_t error)
{
  if (error != SUCCESS) {
    SerialResetP__sendAck__postTask();
    }
  else {
      SerialResetP__Leds__set(7);

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
           __asm volatile ("in __tmp_reg__,__SREG__""\n\t""cli""\n\t""wdr""\n\t""sts %0,%1""\n\t""out __SREG__,__tmp_reg__""\n\t""sts %0,%2""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((1 << 4) | (1 << 3)), "r"((uint8_t )(((1 & 0x08 ? 1 << 5 : 0x00) | (1 << 3)) | (1 & 0x07))) : "r0");
          while (1) ;
        }
#line 85
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 376 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x4080d1d0, message_t * msg, error_t error){
#line 100
  switch (arg_0x4080d1d0) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    case 0x72:
#line 100
      SerialResetP__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x4080d1d0, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

#line 212
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 109 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 109
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x40731628, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x40731628, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 89 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialResetP.nc"
static inline message_t *SerialResetP__Receive__receive(message_t *msg, void *payload, uint8_t len)
{
  uint8_t *p = (uint8_t *)msg;

  if (len == 3 && p[0] == 'R' && p[1] == 'S' && p[2] == 'T') 
    {
      SerialResetP__sendMsg = msg;
      SerialResetP__sendAck__postTask();
    }

  return msg;
}

# 371 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x407f7b58, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x407f7b58) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 0x72:
#line 78
      __nesc_result = SerialResetP__Receive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x407f7b58, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 112 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialResetP.nc"
static inline uint8_t SerialResetP__SerialPacketInfo__upperLength(message_t *msg, uint8_t dataLinkLen)
{
  return dataLinkLen;
}

# 365 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x4080dcd0, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x4080dcd0) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    case 0x72:
#line 31
      __nesc_result = SerialResetP__SerialPacketInfo__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x4080dcd0, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 275 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 130 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t SerialAutoControlP__SplitControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = SerialP__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 73 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialAutoControlP.nc"
static inline void SerialAutoControlP__SplitControl__stopDone(error_t err)
#line 73
{
  if (err != SUCCESS) {
    SerialAutoControlP__SplitControl__stop();
    }
}

# 138 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  SerialAutoControlP__SplitControl__stopDone(error);
#line 138
}
#line 138
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 170 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 170
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 158 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 158
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 93 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t SerialAutoControlP__SplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 68 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialAutoControlP.nc"
static inline void SerialAutoControlP__SplitControl__startDone(error_t err)
#line 68
{
  if (err != SUCCESS) {
    SerialAutoControlP__SplitControl__start();
    }
}

# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  SerialAutoControlP__SplitControl__startDone(error);
#line 113
}
#line 113
# 187 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 187
{
  * (volatile uint8_t *)0xC1 |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 164 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 164
{
  * (volatile uint8_t *)0xC1 |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 152 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 152
{
  * (volatile uint8_t *)0xC1 |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 77 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 559
static inline void SerialP__RunTx__runTask(void )
#line 559
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 576
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 585
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 589
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 598
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 605
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 605
        goInactive = SerialP__offPending;
#line 605
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 607
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 607
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 613
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 613
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 616
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 618
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 625
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 627
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 628
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 632
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 646
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 649
            __nesc_atomic_end(__nesc_atomic); 
#line 649
            return;
          }
        }
    }
#line 652
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 655
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 659
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 661
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 661
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialAutoControlP__turnOff__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialAutoControlP__turnOff);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialAutoControlP.nc"
static inline void SerialAutoControlP__turnOff__runTask(void )
#line 57
{
  error_t err = SerialAutoControlP__SplitControl__stop();

#line 59
  if (err != SUCCESS && err != EALREADY) {
    SerialAutoControlP__turnOff__postTask();
    }
  else 
#line 61
    {
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialAutoControlP__turnOn__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialAutoControlP__turnOn);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 46 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialAutoControlP.nc"
static inline void SerialAutoControlP__turnOn__runTask(void )
#line 46
{
  error_t err = SerialAutoControlP__SplitControl__start();

#line 48
  if (err != SUCCESS && err != EALREADY) {
    SerialAutoControlP__turnOn__postTask();
    }
  else 
#line 50
    {
    }
}

# 113 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__sleep(void )
#line 113
{
}

# 89 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__sleep(void ){
#line 89
  HplAtm128SpiP__SPI__sleep();
#line 89
}
#line 89
# 161 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
static inline void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__stopSpi(void )
#line 161
{
  /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 163
  {
    /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__sleep();
  }
  /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__McuPowerState__update();
}

# 173 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x405b25c0){
#line 65
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x405b25c0);
#line 65
}
#line 65
# 68 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 97 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__release(uint8_t arg_0x404b5010){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(arg_0x404b5010);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 405 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
static inline error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__release(uint8_t id)
#line 405
{
  error_t error = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__release(id);

#line 407
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 407
    {
      if (!/*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ArbiterInfo__inUse()) {
          /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__stopSpi();
        }
    }
#line 411
    __nesc_atomic_end(__nesc_atomic); }
  return error;
}

# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Stm25pOffP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 23 "/opt/tinyos-2.x/tos/system/NoPinC.nc"
static inline void /*HplStm25pPinsC.NoPinC*/NoPinC__0__GeneralIO__set(void )
#line 23
{
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void Stm25pOffP__Hold__set(void ){
#line 40
  /*HplStm25pPinsC.NoPinC*/NoPinC__0__GeneralIO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )37U |= 1 << 0;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void Stm25pOffP__CSN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 45 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static uint8_t Stm25pOffP__SpiByte__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiByte__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 24 "/opt/tinyos-2.x/tos/system/NoPinC.nc"
static inline void /*HplStm25pPinsC.NoPinC*/NoPinC__0__GeneralIO__clr(void )
#line 24
{
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void Stm25pOffP__Hold__clr(void ){
#line 41
  /*HplStm25pPinsC.NoPinC*/NoPinC__0__GeneralIO__clr();
#line 41
}
#line 41
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )37U &= ~(1 << 0);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void Stm25pOffP__CSN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 27 "/opt/tinyos-2.x/tos/system/NoPinC.nc"
static inline void /*HplStm25pPinsC.NoPinC*/NoPinC__0__GeneralIO__makeOutput(void )
#line 27
{
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void Stm25pOffP__Hold__makeOutput(void ){
#line 46
  /*HplStm25pPinsC.NoPinC*/NoPinC__0__GeneralIO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 0;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void Stm25pOffP__CSN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 50 "/opt/tinyos-2.x/tos/chips/stm25p/Stm25pOffP.nc"
static inline void Stm25pOffP__SpiResource__granted(void )
#line 50
{

  if (!0U) {
      Stm25pOffP__CSN__makeOutput();
      Stm25pOffP__Hold__makeOutput();
      Stm25pOffP__CSN__clr();
      Stm25pOffP__Hold__clr();
      Stm25pOffP__SpiByte__write(0xb9);
      Stm25pOffP__CSN__set();
      Stm25pOffP__Hold__set();
      Stm25pOffP__SpiResource__release();
    }
}

# 423 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
static inline void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__default__granted(uint8_t id)
#line 423
{
}

# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__granted(uint8_t arg_0x404b71e8){
#line 102
  switch (arg_0x404b71e8) {
#line 102
    case 0U:
#line 102
      Stm25pOffP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__default__granted(arg_0x404b71e8);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 419 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
static inline void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__granted(uint8_t id)
#line 419
{
  /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__granted(id);
}

# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x405a4eb0){
#line 102
  /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__granted(arg_0x405a4eb0);
#line 102
}
#line 102
# 171 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x405b25c0){
#line 59
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x405b25c0);
#line 59
}
#line 59
# 155 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
}

# 290 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
static inline void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__zeroTask__runTask(void )
#line 290
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 295
    {
      myLen = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__len;
      rx = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__rxBuffer;
      tx = /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__txBuffer;
      /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__rxBuffer = (void *)0;
      /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__txBuffer = (void *)0;
      /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__len = 0;
      /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__pos = 0;
      /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
#line 304
    __nesc_atomic_end(__nesc_atomic); }
}

# 55 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 53 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t SerialAutoControlP__ControlInt__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableRisingEdge(5);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53

inline static error_t SerialAutoControlP__ControlInt__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableFallingEdge(5);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 54 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )35U & (1 << 5)) != 0;
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool SerialAutoControlP__ControlPin__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 79 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialAutoControlP.nc"
static inline error_t SerialAutoControlP__SoftwareInit__init(void )
#line 79
{
  if (SerialAutoControlP__ControlPin__get()) {
      SerialAutoControlP__isSerialOn = TRUE;
      SerialAutoControlP__turnOn__postTask();
      SerialAutoControlP__ControlInt__enableFallingEdge();
    }
  else 
#line 84
    {
      SerialAutoControlP__isSerialOn = FALSE;
      SerialAutoControlP__turnOff__postTask();
      SerialAutoControlP__ControlInt__enableRisingEdge();
    }
  return SUCCESS;
}

# 216 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (57600L == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (57600L == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 172 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 172
{
  return MeasureClockC__cycles / (baudrate >> 6) - 1;
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 226 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 226
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(57600L);
  * (volatile uint8_t *)0xCC = ubrr1;
  * (volatile uint8_t *)0xCD = ubrr1 >> 8;
  * (volatile uint8_t *)0xC8 = stts.flat;
  * (volatile uint8_t *)0xCA = mode.flat;
  * (volatile uint8_t *)0xC9 = ctrl.flat;

  return SUCCESS;
}

#line 132
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 132
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(57600L);
  * (volatile uint8_t *)0xC4 = ubrr0;
  * (volatile uint8_t *)0xC5 = ubrr0 >> 8;
  * (volatile uint8_t *)0xC0 = stts.flat;
  * (volatile uint8_t *)0xC2 = mode.flat;
  * (volatile uint8_t *)0xC1 = ctrl.flat;

  return SUCCESS;
}

# 22 "/opt/tinyos-2.x/tos/lib/net/blip/Ieee154AddressP.nc"
static inline error_t Ieee154AddressP__Init__init(void )
#line 22
{
  Ieee154AddressP__m_saddr = TOS_NODE_ID;
  Ieee154AddressP__m_panid = TOS_AM_GROUP;
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__resQ, /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void )
{
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber = TOS_NODE_ID << 4;
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline error_t NeighborhoodP__Init__init(void )
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    NeighborhoodP__nodes[i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 302 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void )
{
  uint8_t i;

  for (i = 0; i < /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE; ++i) 
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[i] = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData + i;

  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 421 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__SfdCapture__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~(1 << 3))
     | ((mode & 0x1) << 3);
  }
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
inline static void RFA1DriverLayerP__SfdCapture__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__SfdCapture__setMode(mode);
#line 70
}
#line 70
# 175 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__SoftwareInit__init(void )
{
  * (volatile uint8_t *)0x149 = RFA1_CCA_THRES_VALUE;
#line 198
  * (volatile uint8_t *)0x145 = (RFA1_PA_BUF_LT | RFA1_PA_LT) | ((0 & RFA1_TX_PWR_MASK) << 0);

  RFA1DriverLayerP__txPower = 0 & RFA1_TX_PWR_MASK;
  RFA1DriverLayerP__channel = 13 & RFA1_CHANNEL_MASK;
  * (volatile uint8_t *)0x144 |= 1 << 5;
  * (volatile uint8_t *)0x148 = RFA1_CCA_MODE_VALUE | RFA1DriverLayerP__channel;

  * (volatile uint8_t *)0x139 |= 1 << 1;

  RFA1DriverLayerP__SfdCapture__setMode(ATMRFA1_CAPSC_ON);

  RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_SLEEP;

  return SUCCESS;
}

# 202 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline error_t IPDispatchP__Init__init(void )
#line 202
{


  ip_malloc_init();
  return SUCCESS;
}

# 65 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[i] = &/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool[i];
    }
  /*IPDispatchC.FragPool.PoolP*/PoolP__0__free = 12;
  /*IPDispatchC.FragPool.PoolP*/PoolP__0__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[i] = &/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool[i];
    }
  /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free = 12;
  /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 3; i++) {
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[i] = &/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool[i];
    }
  /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free = 3;
  /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 3; i++) {
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[i] = &/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool[i];
    }
  /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free = 3;
  /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index = 0;
  return SUCCESS;
}

# 168 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
static inline void UdpP__BlipStatistics__clear(void )
#line 168
{
}

#line 46
static inline error_t UdpP__Init__init(void )
#line 46
{
  UdpP__BlipStatistics__clear();
  memset((uint8_t *)UdpP__local_ports, 0, sizeof(uint16_t ) * UdpP__N_CLIENTS);
  return SUCCESS;
}

# 65 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline error_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 5; i++) {
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__queue[i] = &/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__pool[i];
    }
  /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__free = 5;
  /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__index = 0;
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, UdpP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, IPDispatchP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RFA1DriverLayerP__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NeighborhoodP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, Ieee154AddressP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart0Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialAutoControlP__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 105 "/opt/tinyos-2.x/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 105
{
   __asm volatile ("sei");}

# 12 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t UDPEchoP__Status__bind(uint16_t port){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = UdpP__UDP__bind(1U, port);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
inline static error_t UDPEchoP__Echo__bind(uint16_t port){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = UdpP__UDP__bind(0U, port);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t UDPEchoP__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void UDPEchoP__StatusTimer__startOneShot(uint32_t dt){
#line 73
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 975 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__BlipStatistics__clear(void )
#line 975
{
  memset((uint8_t *)&IPDispatchP__stats, 0, sizeof(ip_statistics_t ));
}

# 34 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/BlipStatistics.nc"
inline static void UDPEchoP__IPStats__clear(void ){
#line 34
  IPDispatchP__BlipStatistics__clear();
#line 34
}
#line 34
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t IPDispatchP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 167 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline error_t IPDispatchP__SplitControl__start(void )
#line 167
{
  return IPDispatchP__RadioControl__start();
}

# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t IPStackControlP__SubSplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = IPDispatchP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 12 "/opt/tinyos-2.x/tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__SplitControl__start(void )
#line 12
{
  return IPStackControlP__SubSplitControl__start();
}

# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t UDPEchoP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = IPStackControlP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 68 "UDPEchoP.nc"
static inline void UDPEchoP__Boot__booted(void )
#line 68
{
  UDPEchoP__RadioControl__start();
  UDPEchoP__timerStarted = FALSE;

  UDPEchoP__IPStats__clear();


  UDPEchoP__route_dest.sin6_port = (((uint16_t )7000 << 8) | ((uint16_t )7000 >> 8)) & 0xffff;
  inet_pton6("fec0::100", & UDPEchoP__route_dest.sin6_addr);
  UDPEchoP__StatusTimer__startOneShot(UDPEchoP__Random__rand16() % (1024 * 10L));


  ;
  UDPEchoP__Echo__bind(7);
  UDPEchoP__Status__bind(7001);
}

# 57 "/opt/tinyos-2.x/tos/lib/net/blip/dhcp/NoDhcpC.nc"
static inline void NoDhcpC__IPAddress__changed(bool valid)
#line 57
{
}

# 100 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__stop(void )
#line 100
{
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__m_running = FALSE;
  return SUCCESS;
}

# 158 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline error_t RPLRankP__StdControl__stop(void )
#line 158
{
  RPLRankP__m_running = FALSE;
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RankControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = RPLRankP__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 510 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__stop(void )
#line 510
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running = FALSE;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RankControl__stop();
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__stop();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t IPStackControlP__RoutingControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__stop();
#line 105
  __nesc_result = ecombine(__nesc_result, /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__stop());
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 41 "/opt/tinyos-2.x/tos/lib/net/blip/IPStackControlP.nc"
static inline void IPStackControlP__IPAddress__changed(bool valid)
#line 41
{
  if (valid) {
    IPStackControlP__RoutingControl__start();
    }
  else {
#line 45
    IPStackControlP__RoutingControl__stop();
    }
}

# 372 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__IPAddress__changed(bool global_valid)
#line 372
{
}

# 115 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCoreP.nc"
static inline void ICMPCoreP__IPAddress__changed(bool valid)
#line 115
{
}

# 133 "/opt/tinyos-2.x/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IPAddress__changed(bool global_valid)
#line 133
{
}

# 185 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
static inline void UdpP__IPAddress__changed(bool global_valid)
#line 185
{
}

# 963 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static inline void RPLRankP__IPAddress__changed(bool global_valid)
#line 963
{
}

# 693 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__changed(bool global_valid)
#line 693
{
}

# 435 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__changed(bool global_valid)
#line 435
{
}

# 133 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__IPAddress__changed(bool global_valid)
#line 133
{
}

# 56 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static void IPAddressP__IPAddress__changed(bool valid){
#line 56
  ICMPPingP__IPAddress__changed(valid);
#line 56
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__changed(valid);
#line 56
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__changed(valid);
#line 56
  RPLRankP__IPAddress__changed(valid);
#line 56
  UdpP__IPAddress__changed(valid);
#line 56
  IPNeighborDiscoveryP__IPAddress__changed(valid);
#line 56
  ICMPCoreP__IPAddress__changed(valid);
#line 56
  IPForwardingEngineP__IPAddress__changed(valid);
#line 56
  IPStackControlP__IPAddress__changed(valid);
#line 56
  NoDhcpC__IPAddress__changed(valid);
#line 56
}
#line 56
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/Ieee154Address.nc"
inline static error_t IPAddressP__Ieee154Address__setShortAddr(ieee154_saddr_t addr){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = Ieee154AddressP__Ieee154Address__setShortAddr(addr);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 144 "/opt/tinyos-2.x/tos/lib/net/blip/IPAddressP.nc"
static inline error_t IPAddressP__IPAddress__setAddress(struct in6_addr *addr)
#line 144
{
  IPAddressP__m_addr = *addr;





  if (
#line 147
  IPAddressP__m_addr.in6_u.u6_addr8[8] == 0 && 
  IPAddressP__m_addr.in6_u.u6_addr8[9] == 0 && 
  IPAddressP__m_addr.in6_u.u6_addr8[10] == 0 && 
  IPAddressP__m_addr.in6_u.u6_addr8[11] == 0 && 
  IPAddressP__m_addr.in6_u.u6_addr8[12] == 0 && 
  IPAddressP__m_addr.in6_u.u6_addr8[13] == 0) {
      IPAddressP__Ieee154Address__setShortAddr((((uint16_t )IPAddressP__m_addr.in6_u.u6_addr16[7] >> 8) | ((uint16_t )IPAddressP__m_addr.in6_u.u6_addr16[7] << 8)) & 0xffff);
      IPAddressP__m_short_addr = TRUE;
    }
  else 
#line 155
    {
      IPAddressP__Ieee154Address__setShortAddr(0);
      IPAddressP__m_short_addr = FALSE;
    }


  IPAddressP__m_valid_addr = TRUE;
  IPAddressP__IPAddress__changed(TRUE);
  return SUCCESS;
}

# 52 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static error_t NoDhcpC__IPAddress__setAddress(struct in6_addr *addr){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = IPAddressP__IPAddress__setAddress(addr);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 49 "/opt/tinyos-2.x/tos/lib/net/blip/dhcp/NoDhcpC.nc"
static inline void NoDhcpC__Boot__booted(void )
#line 49
{
  struct in6_addr addr;

#line 51
  memset(&addr, 0, sizeof addr);
  inet_pton6("fec0::", &addr);
  addr.in6_u.u6_addr16[7] = (((uint16_t )TOS_NODE_ID << 8) | ((uint16_t )TOS_NODE_ID >> 8)) & 0xffff;
  NoDhcpC__IPAddress__setAddress(&addr);
}

# 142 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__reconstruct_clear(void *ent)
#line 142
{
  struct lowpan_reconstruct *recon = (struct lowpan_reconstruct *)ent;

#line 144
  memset((uint8_t *)& recon->r_meta, 0, sizeof(struct ip6_metadata ));
  recon->r_timeout = T_UNUSED;
  recon->r_buf = (void *)0;
}

#line 209
static inline void IPDispatchP__Boot__booted(void )
#line 209
{
  IPDispatchP__BlipStatistics__clear();


  table_init(&IPDispatchP__recon_cache, IPDispatchP__recon_data, sizeof(struct lowpan_reconstruct ), N_RECONSTRUCTIONS);
  table_map(&IPDispatchP__recon_cache, IPDispatchP__reconstruct_clear);

  IPDispatchP__SplitControl__start();
}

# 12 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t UDPShellP__UDP__bind(uint16_t port){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = UdpP__UDP__bind(2U, port);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 5 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommandP.nc"
static inline char */*RouteCmdC.ShellCommandC.ShellCommandP*/ShellCommandP__0__RegisterShellCommand__getCommandName(void )
#line 5
{
  return "route";
}

# 302 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
static inline char *UDPShellP__RegisterShellCommand__default__getCommandName(uint8_t cmd_id)
#line 302
{
  return (void *)0;
}

# 3 "/opt/tinyos-2.x/tos/lib/net/blip/shell/RegisterShellCommand.nc"
inline static char *UDPShellP__RegisterShellCommand__getCommandName(uint8_t arg_0x41533828){
#line 3
  char *__nesc_result;
#line 3

#line 3
  switch (arg_0x41533828) {
#line 3
    case /*RouteCmdC.ShellCommandC*/ShellCommandC__0__CMD_ID:
#line 3
      __nesc_result = /*RouteCmdC.ShellCommandC.ShellCommandP*/ShellCommandP__0__RegisterShellCommand__getCommandName();
#line 3
      break;
#line 3
    default:
#line 3
      __nesc_result = UDPShellP__RegisterShellCommand__default__getCommandName(arg_0x41533828);
#line 3
      break;
#line 3
    }
#line 3

#line 3
  return __nesc_result;
#line 3
}
#line 3
# 93 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__Boot__booted(void )
#line 93
{
  int i;

#line 95
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    {
      UDPShellP__uptime = 0;
    }
#line 97
    __nesc_atomic_end(__nesc_atomic); }



  for (i = 0; i < UDPShellP__N_EXTERNAL; i++) {
      UDPShellP__externals[i].c_name[UDPShellP__CMDNAMSIZ - 1] = '\0';
      strncpy(UDPShellP__externals[i].c_name, UDPShellP__RegisterShellCommand__getCommandName(i), UDPShellP__CMDNAMSIZ);
      UDPShellP__externals[i].c_len = strlen(UDPShellP__externals[i].c_name);
    }
  UDPShellP__UDP__bind(2000);
}

# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  UDPShellP__Boot__booted();
#line 60
  IPDispatchP__Boot__booted();
#line 60
  NoDhcpC__Boot__booted();
#line 60
  UDPEchoP__Boot__booted();
#line 60
}
#line 60
# 334 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__RadioState__turnOn(void )
{
  if (RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE) {
    return EBUSY;
    }
  else {
#line 338
    if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON) {
      return EALREADY;
      }
    }
#line 340
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_TURNON;
  RFA1DriverLayerP__Tasklet__schedule();

  return SUCCESS;
}

# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RFA1DriverLayerP__RadioState__turnOn();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/opt/tinyos-2.x/tos/lib/net/blip/Ieee154AddressP.nc"
static inline void Ieee154AddressP__ShortAddressConfig__setShortAddrDone(error_t error)
#line 67
{
}

# 5 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ShortAddressConfig.nc"
inline static void RFA1RadioP__ShortAddressConfig__setShortAddrDone(error_t error){
#line 5
  Ieee154AddressP__ShortAddressConfig__setShortAddrDone(error);
#line 5
}
#line 5
# 237 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__ShortAddressConfig__setShortAddr(uint16_t address)
{

  RFA1RadioP__ShortAddressConfig__setShortAddrDone(FAIL);
}

# 3 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ShortAddressConfig.nc"
inline static void Ieee154AddressP__ShortAddressConfig__setShortAddr(uint16_t address){
#line 3
  RFA1RadioP__ShortAddressConfig__setShortAddr(address);
#line 3
}
#line 3
# 132 "/opt/tinyos-2.x/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__Ieee154Address__changed(void )
#line 132
{
}

# 174 "/opt/tinyos-2.x/tos/lib/net/blip/IPAddressP.nc"
static inline void IPAddressP__Ieee154Address__changed(void )
#line 174
{
}

# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/Ieee154Address.nc"
inline static void Ieee154AddressP__Ieee154Address__changed(void ){
#line 10
  IPAddressP__Ieee154Address__changed();
#line 10
  IPNeighborDiscoveryP__Ieee154Address__changed();
#line 10
}
#line 10
# 157 "/opt/tinyos-2.x/tos/chips/atm128rfa1/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 157
{
  return m1 < m2 ? m1 : m2;
}

# 240 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
static inline mcu_power_t HplAtm128SpiP__McuPowerOverride__lowestState(void )
#line 240
{
  if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x2C + 0x20) & (1 << 6)) {
      return ATM128_POWER_IDLE;
    }
  else {
    return ATM128_POWER_DOWN;
    }
}

# 322 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void )
#line 322
{
  if (((* (volatile uint8_t *)0xC1 & (1 << 3) || * (volatile uint8_t *)0xC1 & (1 << 4)) || * (volatile uint8_t *)0xC9 & (1 << 3)) || * (volatile uint8_t *)0xC9 & (1 << 4)) {
    return ATM128_POWER_IDLE;
    }
  else {
#line 326
    return ATM128_POWER_DOWN;
    }
}

# 437 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void )
{


  if (* (volatile uint8_t *)0xDC & (1 << 5)) {
    return ATM128_POWER_SAVE;
    }
  else {
#line 444
    return ATM128_POWER_DOWN;
    }
}

# 758 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline mcu_power_t RFA1DriverLayerP__McuPowerOverride__lowestState(void )
{
  if ((* (volatile uint8_t *)0x14E & (1 << 7)) != 0) {
    return ATM128_POWER_EXT_STANDBY;
    }
  else {
#line 763
    return ATM128_POWER_DOWN;
    }
}

# 364 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void )
{

  if (* (volatile uint8_t *)0x6F & ((((1 << 1) | (1 << 2)) | (1 << 3)) | (1 << 5))) {
    return ATM128_POWER_IDLE;
    }
  else {
#line 370
    return ATM128_POWER_DOWN;
    }
}

# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtmRfa1Timer1P__McuPowerOverride__lowestState();
#line 62
  __nesc_result = mcombine(__nesc_result, RFA1DriverLayerP__McuPowerOverride__lowestState());
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtmRfa1TimerMacP__McuPowerOverride__lowestState());
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtm128UartP__McuPowerOverride__lowestState());
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtm128SpiP__McuPowerOverride__lowestState());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 69 "/opt/tinyos-2.x/tos/chips/atm128rfa1/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
{
  if (McuSleepC__powerState < 0) {
      McuSleepC__powerState = McuSleepC__McuPowerOverride__lowestState();
      * (volatile uint8_t *)(0x33 + 0x20) = (* (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | __extension__ ({
#line 73
        uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[McuSleepC__powerState];
#line 73
        uint8_t __result;

#line 73
         __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
      }
      );
    }




  * (volatile uint8_t *)(0x33 + 0x20) |= 1 << 0;

   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");

  * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
}

# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 125 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow(void )
#line 125
{
}

# 177 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 58 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper++;
    if ((/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper & /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 58 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow(void ){
#line 82
  /*LocalTime62khzC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
  /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 66 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow(void )
{
  /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow();
}

# 125 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__overflow(void )
#line 125
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void HplAtmRfa1TimerMacP__Counter__overflow(void ){
#line 49
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__overflow();
#line 49
  /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow();
#line 49
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow();
#line 49
}
#line 49
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt == 0) 
      {
        /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__fired(void ){
#line 78
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 63 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__fired(void )
{
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop();
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__fired();
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareA__fired(void ){
#line 48
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__fired();
#line 48
}
#line 48
# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT) {
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED;
      }
  }
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule();
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__fired(void ){
#line 78
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired();
#line 78
}
#line 78
# 63 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__fired(void )
{
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop();
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__fired();
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareB__fired(void ){
#line 48
  /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__fired();
#line 48
}
#line 48
# 343 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareC__default__fired(void )
#line 343
{
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareC__fired(void ){
#line 48
  HplAtmRfa1TimerMacP__CompareC__default__fired();
#line 48
}
#line 48
# 83 "/opt/tinyos-2.x/tos/lib/timer/BusyWaitCounterC.nc"
static inline void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__m_upper++;
    if ((/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__m_upper & /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
      /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__Counter__overflow();
      }
  }
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow(void ){
#line 82
  /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__overflow();
#line 82
}
#line 82
# 66 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__overflow(void )
{
  /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow();
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void HplAtmRfa1Timer1P__Timer__overflow(void ){
#line 49
  /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__overflow();
#line 49
}
#line 49
# 162 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__CompareA__default__fired(void )
#line 162
{
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1Timer1P__CompareA__fired(void ){
#line 48
  HplAtmRfa1Timer1P__CompareA__default__fired();
#line 48
}
#line 48
# 172 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__CompareB__default__fired(void )
#line 172
{
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1Timer1P__CompareB__fired(void ){
#line 48
  HplAtmRfa1Timer1P__CompareB__default__fired();
#line 48
}
#line 48
# 182 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__CompareC__default__fired(void )
#line 182
{
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1Timer1P__CompareC__fired(void ){
#line 48
  HplAtmRfa1Timer1P__CompareC__default__fired();
#line 48
}
#line 48
# 322 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Capture__default__fired(void )
#line 322
{
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
inline static void HplAtmRfa1Timer1P__Capture__fired(void ){
#line 48
  HplAtmRfa1Timer1P__Capture__default__fired();
#line 48
}
#line 48
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void ICMPPingP__PingTimer__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(9U, dt);
#line 64
}
#line 64
#line 92
inline static bool ICMPPingP__PingTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(9U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 84 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline error_t ICMPPingP__ICMPPing__ping(uint8_t client, struct in6_addr *target, 
uint16_t period, 
uint16_t n)
#line 86
{
  if (ICMPPingP__PingTimer__isRunning()) {
#line 87
    return ERETRY;
    }
#line 88
  ICMPPingP__PingTimer__startPeriodic(period);
  memcpy(&ICMPPingP__ping_dest, target, 16);
  ICMPPingP__ping_n = n;
  ICMPPingP__ping_seq = 0;
  ICMPPingP__ping_rcv = 0;
  ICMPPingP__ping_ident = client;
  return SUCCESS;
}

# 6 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
inline static error_t UDPShellP__ICMPPing__ping(struct in6_addr *target, uint16_t period, uint16_t n){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = ICMPPingP__ICMPPing__ping(0U, target, period, n);
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 189 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__action_uptime(int argc, char **argv)
#line 189
{
}










static inline void UDPShellP__action_ident(int argc, char **argv)
#line 201
{
  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__ident_string, strlen(UDPShellP__ident_string));
}

# 120 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_24(void )
#line 120
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}










static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
#line 133
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 7;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 7);
      HplAtm128SpiP__Mcu__update();
    }
}

# 169 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
static uint8_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiByte__write(uint8_t tx)
#line 169
{










  /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__write(tx);

  while (!/*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__isInterruptPending()) 
    ;

  return /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__read();
}

# 93 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange0C.nc"
__attribute((signal))   void __vector_9(void )
#line 93
{
  HplAtmegaPinChange0C__HplAtmegaPinChange__fired();
}

# 92 "/opt/tinyos-2.x/tos/platforms/ucbase/SerialAutoControlP.nc"
static void SerialAutoControlP__ControlInt__fired(void )
#line 92
{
  bool pinState = SerialAutoControlP__ControlPin__get();

#line 94
  if (pinState && !SerialAutoControlP__isSerialOn) {
      SerialAutoControlP__isSerialOn = TRUE;
      SerialAutoControlP__turnOn__postTask();
      SerialAutoControlP__ControlInt__enableFallingEdge();
    }
  else {
#line 98
    if (!pinState && SerialAutoControlP__isSerialOn) {
        SerialAutoControlP__isSerialOn = FALSE;
        SerialAutoControlP__turnOff__postTask();
        SerialAutoControlP__ControlInt__enableRisingEdge();
      }
    }
}

# 170 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableFallingEdge(uint8_t pin)
#line 67
{
  /* atomic removed: atomic calls only */
#line 68
  {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__isFalling |= 1 << pin;
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__setMask(/*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getMask() | (1 << pin));
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__enable();
  }
  return SUCCESS;
}

#line 58
static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableRisingEdge(uint8_t pin)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__isFalling &= ~(1 << pin);
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__setMask(/*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__getMask() | (1 << pin));
    /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__enable();
  }
  return SUCCESS;
}

# 216 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
__attribute((signal))   void __vector_25(void )
#line 216
{
  if ((* (volatile uint8_t *)0xC0 & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)0xC6);
    }
}

# 412 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 92 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 296 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 518 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 518
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 519
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 525
    __nesc_atomic_end(__nesc_atomic); }
}

#line 357
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

#line 359
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 359
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
      SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
          turnOff = TRUE;
        }
    }
#line 364
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 367
        SerialP__offPending = FALSE;
#line 367
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 370
        SerialP__offPending = TRUE;
#line 370
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 222 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_27(void )
#line 222
{
  HplAtm128UartP__HplUart0__txDone();
}

#line 209
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 209
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 210
    {
      * (volatile uint8_t *)0xC6 = data;
      * (volatile uint8_t *)0xC0 |= 1 << 6;
    }
#line 213
    __nesc_atomic_end(__nesc_atomic); }
}

# 155 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 106 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 313 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
__attribute((signal))   void __vector_36(void )
#line 313
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0xCE);
    }
}

#line 318
__attribute((interrupt))   void __vector_38(void )
#line 318
{
  HplAtm128UartP__HplUart1__txDone();
}

# 63 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
#line 71
        * (volatile uint8_t *)(0x34 + 0x20) = 0;
#line 71
         __asm volatile ("in __tmp_reg__, __SREG__""\n\t""cli""\n\t""sts %0, %1""\n\t""sts %0, __zero_reg__""\n\t""out __SREG__,__tmp_reg__""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((uint8_t )((1 << 4) | (1 << 3))) : "r0");}
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 124 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void )
#line 124
{
  /* atomic removed: atomic calls only */
#line 125
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) 
      {
        unsigned char __nesc_temp = 
#line 127
        FALSE;

#line 127
        return __nesc_temp;
      }
  }
#line 129
  return TRUE;
}

# 148 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableSpi(bool enabled)
#line 148
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 6;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 6);
      HplAtm128SpiP__Mcu__update();
    }
}

# 134 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x404208d0){
#line 75
  switch (arg_0x404208d0) {
#line 75
    case /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__zeroTask:
#line 75
      /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__zeroTask__runTask();
#line 75
      break;
#line 75
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case SerialAutoControlP__turnOn:
#line 75
      SerialAutoControlP__turnOn__runTask();
#line 75
      break;
#line 75
    case SerialAutoControlP__turnOff:
#line 75
      SerialAutoControlP__turnOff__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    case SerialResetP__sendAck:
#line 75
      SerialResetP__sendAck__runTask();
#line 75
      break;
#line 75
    case /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case IPForwardingEngineP__defaultRouteAddedTask:
#line 75
      IPForwardingEngineP__defaultRouteAddedTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__grantedTask:
#line 75
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send:
#line 75
      /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask:
#line 75
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask:
#line 75
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask:
#line 75
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom:
#line 75
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask();
#line 75
      break;
#line 75
    case IPDispatchP__sendTask:
#line 75
      IPDispatchP__sendTask__runTask();
#line 75
      break;
#line 75
    case RPLRankP__newParentSearch:
#line 75
      RPLRankP__newParentSearch__runTask();
#line 75
      break;
#line 75
    case /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask:
#line 75
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__runTask();
#line 75
      break;
#line 75
    case /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask:
#line 75
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__runTask();
#line 75
      break;
#line 75
    case /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init:
#line 75
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__runTask();
#line 75
      break;
#line 75
    case /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO:
#line 75
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__runTask();
#line 75
      break;
#line 75
    case /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining:
#line 75
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__runTask();
#line 75
      break;
#line 75
    case /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO:
#line 75
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__runTask();
#line 75
      break;
#line 75
    case /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO:
#line 75
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x404208d0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 189 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static uint16_t RPLRankP__RPLRankInfo__getRank(struct in6_addr *node)
#line 189
{
  uint8_t indexset;
  struct in6_addr my_addr;


  RPLRankP__IPAddress__getGlobalAddr(&my_addr);




  if (!memcmp(&my_addr, node, sizeof(struct in6_addr ))) {

      if (RPLRankP__ROOT) {
          RPLRankP__nodeRank = ROOT_RANK;
        }
      return RPLRankP__nodeRank;
    }

  indexset = RPLRankP__getParent(node);

  if (indexset != 20) {
      return RPLRankP__parentSet[indexset].rank;
    }

  return 0x1234;
}

#line 238
static uint8_t RPLRankP__getParent(struct in6_addr *node)
#line 238
{
  uint8_t indexset;

#line 240
  if (RPLRankP__parentNum == 0) {
      return 20;
    }
  for (indexset = 0; indexset < 20; indexset++) {
      if (!memcmp(& RPLRankP__parentSet[indexset].parentIP, node, sizeof(struct in6_addr )) && 
      RPLRankP__parentSet[indexset].valid) {
          return indexset;
        }
    }
  return 20;
}

# 45 "/opt/tinyos-2.x/tos/lib/net/blip/IPAddressP.nc"
static bool IPAddressP__IPAddress__getLLAddr(struct in6_addr *addr)
#line 45
{
  ieee154_panid_t panid = IPAddressP__Ieee154Address__getPanId();
  ieee154_saddr_t saddr = IPAddressP__Ieee154Address__getShortAddr();
  ieee154_laddr_t laddr = IPAddressP__Ieee154Address__getExtAddr();

  memset(addr->in6_u.u6_addr8, 0, 16);
  addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
  if (IPAddressP__m_short_addr) {
      addr->in6_u.u6_addr16[4] = (((uint16_t )panid << 8) | ((uint16_t )panid >> 8)) & 0xffff;
      addr->in6_u.u6_addr16[5] = (((uint16_t )0x00FF << 8) | ((uint16_t )0x00FF >> 8)) & 0xffff;
      addr->in6_u.u6_addr16[6] = (((uint16_t )0xFE00 << 8) | ((uint16_t )0xFE00 >> 8)) & 0xffff;
      addr->in6_u.u6_addr16[7] = (((uint16_t )saddr << 8) | ((uint16_t )saddr >> 8)) & 0xffff;
      addr->in6_u.u6_addr8[8] &= ~0x2;
    }
  else 
#line 58
    {
      int i;

#line 60
      for (i = 0; i < 8; i++) 
        addr->in6_u.u6_addr8[8 + i] = laddr.data[7 - i];
      addr->in6_u.u6_addr8[8] ^= 0x2;
    }

  return TRUE;
}

# 34 "/opt/tinyos-2.x/tos/lib/net/blip/Ieee154AddressP.nc"
static ieee154_laddr_t Ieee154AddressP__Ieee154Address__getExtAddr(void )
#line 34
{
  ieee154_laddr_t addr = Ieee154AddressP__LocalIeeeEui64__getId();
  int i;
  uint8_t tmp;


  for (i = 0; i < 4; i++) {
      tmp = addr.data[i];
      addr.data[i] = addr.data[7 - i];
      addr.data[7 - i] = tmp;
    }
  return addr;
}

# 216 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static error_t RPLRankP__RPLRankInfo__getDefaultRoute(struct in6_addr *next)
#line 216
{


  if (RPLRankP__parentNum) {
      ip_memcpy((uint8_t *)next, 
      (uint8_t *)RPLRankP__RPLOF__getParent(), 
      sizeof(struct in6_addr ));
      return SUCCESS;
    }
  return FAIL;
}

# 90 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF0P.nc"
static struct in6_addr *RPLOF0P__RPLOF__getParent(void )
#line 90
{
  parent_t *parentNode = RPLOF0P__ParentTable__get(RPLOF0P__desiredParent);

#line 92
  return & parentNode->parentIP;
}

# 103 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static error_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Pool__put(/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__pool_t *newVal)
#line 103
{
  if (/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__free >= 5) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__index + /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__free;

#line 109
      if (emptyIndex >= 5) {
          emptyIndex -= 5;
        }
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__queue[emptyIndex] = newVal;
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__free++;
      ;
      return SUCCESS;
    }
}

# 105 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCoreP.nc"
static error_t ICMPCoreP__ICMP_IP__send(uint8_t type, struct ip6_packet *pkt)
#line 105
{
  struct icmp6_hdr *req = (struct icmp6_hdr *)pkt->ip6_data->iov_base;

#line 107
  if (pkt->ip6_data->iov_len >= sizeof(struct icmp6_hdr ) && 
  pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt == IANA_ICMP) {
      req->cksum = 0;
      req->cksum = (((uint16_t )msg_cksum(& pkt->ip6_hdr, pkt->ip6_data, IANA_ICMP) << 8) | ((uint16_t )msg_cksum(& pkt->ip6_hdr, pkt->ip6_data, IANA_ICMP) >> 8)) & 0xffff;
    }
  return ICMPCoreP__IP__send(pkt);
}

# 48 "/opt/tinyos-2.x/tos/lib/net/blip/IPProtocolsP.nc"
static error_t IPProtocolsP__IP__send(uint8_t nxt_hdr, struct ip6_packet *msg)
#line 48
{
  msg->ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
  msg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_hlim = 16;
  ;
#line 51
  ;

  return IPProtocolsP__SubIP__send(msg);
}

# 154 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRoute(const uint8_t *prefix, 
int prefix_len_bits)
#line 155
{
  int i;

#line 157
  for (i = 0; i < 20; i++) {
      if (IPForwardingEngineP__routing_table[i].valid && (
      IPForwardingEngineP__routing_table[i].prefixlen == 0 || (
      memcmp(prefix, IPForwardingEngineP__routing_table[i].prefix.in6_u.u6_addr8, (
      prefix_len_bits < IPForwardingEngineP__routing_table[i].prefixlen ? prefix_len_bits : IPForwardingEngineP__routing_table[i].prefixlen) / 8) == 0 && 
      prefix_len_bits))) {

          return &IPForwardingEngineP__routing_table[i];
        }
    }
  return (void *)0;
}

# 95 "/opt/tinyos-2.x/tos/lib/net/blip/IPAddressP.nc"
static bool IPAddressP__IPAddress__isLocalAddress(struct in6_addr *addr)
#line 95
{
  ieee154_panid_t panid = IPAddressP__Ieee154Address__getPanId();
  ieee154_saddr_t saddr = IPAddressP__Ieee154Address__getShortAddr();
  ieee154_laddr_t eui = IPAddressP__Ieee154Address__getExtAddr();

  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff)) {


      if (
#line 102
      IPAddressP__m_short_addr && 
      addr->in6_u.u6_addr16[5] == ((((uint16_t )0x00FF << 8) | ((uint16_t )0x00FF >> 8)) & 0xffff) && 
      addr->in6_u.u6_addr16[6] == ((((uint16_t )0xFE00 << 8) | ((uint16_t )0xFE00 >> 8)) & 0xffff)) {
          if (((((uint16_t )addr->in6_u.u6_addr16[4] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[4] << 8)) & 0xffff) == (panid & ~0x200) && (((
          (uint16_t )addr->in6_u.u6_addr16[7] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[7] << 8)) & 0xffff) == saddr) {
              return TRUE;
            }
          else 
#line 108
            {
              return FALSE;
            }
        }

      return addr->in6_u.u6_addr8[8] == (eui.data[7] ^ 0x2) && 
      addr->in6_u.u6_addr8[9] == eui.data[6] && 
      addr->in6_u.u6_addr8[10] == eui.data[5] && 
      addr->in6_u.u6_addr8[11] == eui.data[4] && 
      addr->in6_u.u6_addr8[12] == eui.data[3] && 
      addr->in6_u.u6_addr8[13] == eui.data[2] && 
      addr->in6_u.u6_addr8[14] == eui.data[1] && 
      addr->in6_u.u6_addr8[15] == eui.data[0];
    }
  else {
#line 122
    if (addr->in6_u.u6_addr8[0] == 0xff) {

        if ((addr->in6_u.u6_addr8[1] & 0x0f) <= 2) {

            return TRUE;
          }
      }
    else {
#line 128
      if (memcmp(addr->in6_u.u6_addr8, IPAddressP__m_addr.in6_u.u6_addr8, 16) == 0) {
          return TRUE;
        }
      }
    }
#line 131
  return FALSE;
}

# 184 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static error_t IPForwardingEngineP__do_send(uint8_t ifindex, struct in6_addr *next, struct ip6_packet *pkt)
#line 184
{
  error_t rc;
  struct in6_iid *iid = IPForwardingEngineP__Pool__get();

#line 187
  if (iid != (void *)0) {
    memcpy(iid->data, &next->in6_u.u6_addr8[8], 8);
    }
#line 189
  rc = IPForwardingEngineP__IPForward__send(ifindex, next, pkt, iid);
  if (rc != SUCCESS && iid != (void *)0) {
    IPForwardingEngineP__Pool__put(iid);
    }
#line 192
  return rc;
}

# 95 "/opt/tinyos-2.x/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static error_t IPNeighborDiscoveryP__IPForward__send(struct in6_addr *next, struct ip6_packet *msg, void *ptr)
#line 95
{
  struct ieee154_frame_addr fr_addr;
  struct in6_addr local_addr;

#line 98
  fr_addr.ieee_dstpan = IPNeighborDiscoveryP__Ieee154Address__getPanId();
  IPNeighborDiscoveryP__IPAddress__getLLAddr(&local_addr);

  ;
#line 101
  ;
  ;
#line 102
  ;
  ;
#line 103
  ;
  ;
#line 104
  ;
  ;
#line 105
  ;


  if (IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(&local_addr, & fr_addr.ieee_src) != SUCCESS) {
      ;
#line 109
      ;
      return FAIL;
    }

  if (IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(next, & fr_addr.ieee_dst) != SUCCESS) {
      ;
#line 114
      ;
      return FAIL;
    }
  ;
#line 117
  ;
#line 117
  ;
#line 117
  ;
  ;
#line 118
  ;
#line 118
  ;
#line 118
  ;
  ;
#line 119
  ;

  return IPNeighborDiscoveryP__IPLower__send(&fr_addr, msg, ptr);
}

#line 58
static error_t IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(struct in6_addr *addr, 
ieee154_addr_t *link_addr)
#line 59
{
  ieee154_panid_t panid = IPNeighborDiscoveryP__Ieee154Address__getPanId();

  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff)) {
      if (addr->in6_u.u6_addr16[5] == ((((uint16_t )0x00FF << 8) | ((uint16_t )0x00FF >> 8)) & 0xffff) && 
      addr->in6_u.u6_addr16[6] == ((((uint16_t )0xFE00 << 8) | ((uint16_t )0xFE00 >> 8)) & 0xffff)) {

          if (((((uint16_t )addr->in6_u.u6_addr16[4] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[4] << 8)) & 0xffff) == (panid & ~0x0200)) {
              link_addr->ieee_mode = IEEE154_ADDR_SHORT;
              link_addr->ieee_addr.saddr = (((uint16_t )addr->in6_u.u6_addr16[7] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[7] << 8)) & 0xffff;
            }
          else 
#line 69
            {
              return FAIL;
            }
        }
      else 
#line 72
        {
          int i;

#line 74
          link_addr->ieee_mode = IEEE154_ADDR_EXT;
          for (i = 0; i < 8; i++) 
            link_addr->ieee_addr.laddr.data[i] = addr->in6_u.u6_addr8[15 - i];
          link_addr->ieee_addr.laddr.data[7] ^= 0x2;
        }
      return SUCCESS;
    }
  else {
#line 80
    if (addr->in6_u.u6_addr8[0] == 0xff) {

        if ((addr->in6_u.u6_addr8[1] & 0x0f) == 0x02) {
            link_addr->ieee_mode = IEEE154_ADDR_SHORT;
            link_addr->ieee_addr.saddr = IEEE154_BROADCAST_ADDR;
            return SUCCESS;
          }
      }
    }
  return FAIL;
}

# 103 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t *newVal)
#line 103
{
  if (/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index + /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[emptyIndex] = newVal;
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free++;
      ;
      return SUCCESS;
    }
}

#line 103
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t *newVal)
#line 103
{
  if (/*IPDispatchC.FragPool.PoolP*/PoolP__0__free >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPDispatchC.FragPool.PoolP*/PoolP__0__index + /*IPDispatchC.FragPool.PoolP*/PoolP__0__free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[emptyIndex] = newVal;
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__free++;
      ;
      return SUCCESS;
    }
}

# 16 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/ieee154_header.c"
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, 
struct ieee154_frame_addr *frame)
#line 17
{
  uint8_t *ieee_hdr = buf;
  uint16_t fcf;







  buf = buf + IEEE154_MIN_HDR_SZ;
  if (frame->ieee_dst.ieee_mode == IEEE154_ADDR_SHORT) {
#line 28
      uint16_t tmpval = frame->ieee_dst.ieee_addr.saddr;

#line 28
      memcpy(buf, &tmpval, 2);
#line 28
      buf += 2;
    }
  else 
#line 28
    {
#line 28
      memcpy(buf, & frame->ieee_dst.ieee_addr.laddr, 8);
#line 28
      buf += 8;
    }
#line 28
  ;
  if (frame->ieee_src.ieee_mode == IEEE154_ADDR_SHORT) {
#line 29
      uint16_t tmpval = frame->ieee_src.ieee_addr.saddr;

#line 29
      memcpy(buf, &tmpval, 2);
#line 29
      buf += 2;
    }
  else 
#line 29
    {
#line 29
      memcpy(buf, & frame->ieee_src.ieee_addr.laddr, 8);
#line 29
      buf += 8;
    }
#line 29
  ;

  fcf = IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE;
  fcf |= frame->ieee_src.ieee_mode << IEEE154_FCF_SRC_ADDR_MODE;
  fcf |= frame->ieee_dst.ieee_mode << IEEE154_FCF_DEST_ADDR_MODE;
  fcf |= 1 << IEEE154_FCF_INTRAPAN;

  ieee_hdr[1] = fcf & 0xff;
  ieee_hdr[2] = fcf >> 8;
  ieee_hdr[4] = frame->ieee_dstpan & 0xff;
  ieee_hdr[5] = frame->ieee_dstpan >> 8;

  return buf;
}

# 32 "/opt/tinyos-2.x/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static int IPNeighborDiscoveryP__NeighborDiscovery__matchContext(struct in6_addr *addr, 
uint8_t *ctx)
#line 33
{
  struct in6_addr me;

#line 35
  if (!IPNeighborDiscoveryP__IPAddress__getGlobalAddr(&me)) {
#line 35
    return 0;
    }
#line 36
  if (memcmp(me.in6_u.u6_addr8, addr->in6_u.u6_addr8, 8) == 0) {
      *ctx = 0;
      return 64;
    }
  else 
#line 39
    {
      return 0;
    }
}

# 169 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static uint8_t *IPDispatchP__pack_address(uint8_t *buf, struct in6_addr *addr, int context_match_len, 
ieee154_addr_t *l2addr, ieee154_panid_t pan, uint8_t *flags)
#line 170
{
  *flags = 0;
  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff) && addr->in6_u.u6_addr16[1] == 0 && addr->in6_u.u6_addr16[2] == 0 && addr->in6_u.u6_addr16[3] == 0) {



      if (
#line 175
      addr->in6_u.u6_addr16[4] == 0 && 
      addr->in6_u.u6_addr16[5] == 0 && 
      addr->in6_u.u6_addr16[6] == 0) {

          *flags |= LOWPAN_IPHC_AM_16;
          memcpy(buf, &addr->in6_u.u6_addr8[14], 2);
          return buf += 2;
        }
      else {



        if ((
#line 183
        addr->in6_u.u6_addr16[4] == ((((uint16_t )(pan & ~0x0200) << 8) | ((uint16_t )(pan & ~0x0200) >> 8)) & 0xffff) && 
        addr->in6_u.u6_addr16[5] == ((((uint16_t )0x00ff << 8) | ((uint16_t )0x00ff >> 8)) & 0xffff) && 
        addr->in6_u.u6_addr16[6] == ((((uint16_t )0xfe00 << 8) | ((uint16_t )0xfe00 >> 8)) & 0xffff) && (
        l2addr->ieee_mode == IEEE154_ADDR_SHORT && 
        addr->in6_u.u6_addr16[7] == ((((uint16_t )l2addr->ieee_addr.saddr << 8) | ((uint16_t )l2addr->ieee_addr.saddr >> 8)) & 0xffff))) || (

        l2addr->ieee_mode == IEEE154_ADDR_EXT && 
        IPDispatchP__iid_eui_cmp(&addr->in6_u.u6_addr8[8], l2addr->ieee_addr.laddr.data))) {

            *flags |= LOWPAN_IPHC_AM_0;
            return buf;
          }
        else 
#line 194
          {
            *flags |= LOWPAN_IPHC_AM_64;
            memcpy(buf, &addr->in6_u.u6_addr8[8], 8);
            return buf + 8;
          }
        }
    }
  else {
#line 199
    if (context_match_len > 0) {
        int extra = 0;

        *flags |= LOWPAN_IPHC_AC_CONTEXT;
        if (context_match_len == 128) {
            *flags |= LOWPAN_IPHC_AM_0;
          }
        else {
#line 205
          if (IPDispatchP__bit_range_zero_p(&addr->in6_u.u6_addr8[0], context_match_len, 112) == 0) {
              *flags |= LOWPAN_IPHC_AM_16;
              memcpy(buf, &addr->in6_u.u6_addr8[14], 2);
              extra = 2;
            }
          else {
#line 209
            if (IPDispatchP__bit_range_zero_p(&addr->in6_u.u6_addr8[0], context_match_len, 64) == 0) {
                *flags |= LOWPAN_IPHC_AM_64;
                memcpy(buf, &addr->in6_u.u6_addr8[8], 8);
                extra = 8;
              }
            else 
#line 213
              {
                *flags |= LOWPAN_IPHC_AM_128;
                *flags &= ~LOWPAN_IPHC_AC_CONTEXT;
                memcpy(buf, &addr->in6_u.u6_addr8[0], 16);
                extra = 16;
              }
            }
          }
#line 219
        return buf + extra;
      }
    else {
#line 220
      if (addr->in6_u.u6_addr16[0] == 0 && addr->in6_u.u6_addr16[1] == 0 && addr->in6_u.u6_addr16[2] == 0 && addr->in6_u.u6_addr16[3] == 0 && addr->in6_u.u6_addr16[4] == 0 && addr->in6_u.u6_addr16[5] == 0 && addr->in6_u.u6_addr16[6] == 0 && addr->in6_u.u6_addr16[7] == 0) {

          *flags |= LOWPAN_IPHC_AC_CONTEXT | LOWPAN_IPHC_AM_128;
          return buf;
        }
      else 
#line 224
        {

          *flags |= LOWPAN_IPHC_AM_128;
          memcpy(buf, addr->in6_u.u6_addr8, 16);
          return buf + 16;
        }
      }
    }
}

#line 76
static int IPDispatchP__bit_range_zero_p(uint8_t *buf, int start, int end)
#line 76
{
  int start_byte = start / 8;
  int end_byte = end / 8;
  int i;
  uint8_t start_mask = 0xff << (8 - start % 8);
  uint8_t end_mask = 0xff << (8 - end % 8);



  if ((buf[start_byte] & start_mask) != 0) {
      return -1;
    }
  if ((buf[end_byte] & end_mask) != 0) {
      return -1;
    }
  for (i = start_byte; i < end_byte; i++) {
      if (buf[i] != 0) {
#line 92
        return -1;
        }
    }
#line 94
  return 0;
}

# 30 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1BarePacketP.nc"
static void *RFA1BarePacketP__BarePacket__getPayload(message_t *msg, uint8_t len)
{
  if (len > RFA1BarePacketP__RadioPacket__maxPayloadLength()) {
    return (void *)0;
    }
  else {
#line 35
    return (void *)msg;
    }
}

# 779 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static void RFA1DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  for (; 0; ) ;
  for (; 0; ) ;

  __nesc_hton_leuint8(RFA1DriverLayerP__getHeader(msg)->length.nxdata, length + 2);
}

# 161 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static void IPDispatchP__SENDINFO_DECR(struct send_info *si)
#line 161
{
  if (-- si->_refcount == 0) {
      IPDispatchP__SendInfoPool__put(si);
    }
}

# 103 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__put(/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t *newVal)
#line 103
{
  if (/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free >= 3) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index + /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free;

#line 109
      if (emptyIndex >= 3) {
          emptyIndex -= 3;
        }
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[emptyIndex] = newVal;
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free++;
      ;
      return SUCCESS;
    }
}

#line 88
static /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__pool_t */*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__Pool__get(void )
#line 88
{
  if (/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__free) {
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__pool_t *rval = /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__queue[/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__index];

#line 91
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__queue[/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__index] = (void *)0;
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__free--;
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__index++;
      if (/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__index == 5) {
          /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__4__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static error_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__enqueue(/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t newVal)
#line 97
{
  if (/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__size() < /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__maxSize()) {
      ;
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue[/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail] = newVal;
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail++;
      if (/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail == 5) {
#line 102
        /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail = 0;
        }
#line 103
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size++;
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 144 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 80 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void )
{
  /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type high = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper;
      /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type low = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type high_to = high;
        /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type low_to = low >> /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 71 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static uint32_t HplAtmRfa1TimerMacP__Counter__get(void )
{
  HplAtmRfa1TimerMacP__reg32_t time;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      time.ll = * (volatile uint8_t *)0xE1;
      time.lh = * (volatile uint8_t *)0xE2;
      time.hl = * (volatile uint8_t *)0xE3;
      time.hh = * (volatile uint8_t *)0xE4;
    }
#line 81
    __nesc_atomic_end(__nesc_atomic); }

  return time.full;
}

# 154 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 462 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle(void )
#line 462
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__resetTrickleTime();
  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__isRunning()) {
    /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__chooseAdvertiseTime();
    }
}

#line 390
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__chooseAdvertiseTime(void )
#line 390
{
  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running) {
      return;
    }
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__stop();
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime /= 2;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime += /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__Random__rand32() % /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__startOneShot(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime);
}

# 69 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__startOneShot(uint32_t dt){
#line 73
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 73
}
#line 73
# 128 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLOF0P.nc"
static bool RPLOF0P__RPLOF__recomputeRoutes(void )
#line 128
{
  uint8_t indexset;
  uint8_t min = 0;
#line 130
  uint8_t count = 0;
  uint16_t minDesired;
  parent_t *parentNode;
#line 132
  parent_t *previousParent;

  parentNode = RPLOF0P__ParentTable__get(min);

  while (! parentNode->valid && 
  min < 20 && 
  parentNode->rank != INFINITE_RANK) {
      min++;
      parentNode = RPLOF0P__ParentTable__get(min);
    }

  minDesired = parentNode->etx_hop + parentNode->rank * 10;

  if (min == 20) {
      RPLOF0P__RPLOF__resetRank();
      RPLOF0P__RPLRoute__inconsistency();
      RPLOF0P__ForwardingTable__delRoute(RPLOF0P__route_key);
      RPLOF0P__route_key = ROUTE_INVAL_KEY;
      return FALSE;
    }





  parentNode = RPLOF0P__ParentTable__get(RPLOF0P__desiredParent);

  if (((((uint16_t )parentNode->parentIP.in6_u.u6_addr16[7] << 8) | ((uint16_t )parentNode->parentIP.in6_u.u6_addr16[7] >> 8)) & 0xffff) != 0) {
      RPLOF0P__minMetric = parentNode->etx_hop + parentNode->rank * 10;
    }




  if (min == RPLOF0P__desiredParent) {
    RPLOF0P__minMetric = minDesired;
    }
  for (indexset = min + 1; indexset < 20; indexset++) {
      parentNode = RPLOF0P__ParentTable__get(indexset);









      if (
#line 177
      parentNode->valid && 
      parentNode->etx_hop >= 0 && 
      parentNode->etx_hop + parentNode->rank * 10 < minDesired && 
      parentNode->rank < RPLOF0P__nodeRank && 
      parentNode->rank != INFINITE_RANK) {
          count++;
          min = indexset;
          minDesired = parentNode->etx_hop + parentNode->rank * 10;


          if (min == RPLOF0P__desiredParent) {

              RPLOF0P__minMetric = minDesired;
            }
        }
      else {
#line 191
        if (min == RPLOF0P__desiredParent) {
            RPLOF0P__minMetric = minDesired;
          }
        }
    }
  parentNode = RPLOF0P__ParentTable__get(min);


  if (parentNode->rank == INFINITE_RANK) {

      RPLOF0P__desiredParent = 20;
      RPLOF0P__ForwardingTable__delRoute(RPLOF0P__route_key);
      RPLOF0P__route_key = ROUTE_INVAL_KEY;
      return FALSE;
    }

  previousParent = RPLOF0P__ParentTable__get(RPLOF0P__desiredParent);


  if (
#line 209
  minDesired * 10 + 5 >= RPLOF0P__minMetric * 10 && 
  RPLOF0P__minMetric != 0 && 
  previousParent->valid) {





      min = RPLOF0P__desiredParent;
      minDesired = RPLOF0P__minMetric;
    }

  RPLOF0P__minMetric = minDesired;
  RPLOF0P__desiredParent = min;
  parentNode = RPLOF0P__ParentTable__get(RPLOF0P__desiredParent);








  RPLOF0P__route_key = RPLOF0P__ForwardingTable__addRoute((void *)0, 
  0, 
  & parentNode->parentIP, 
  RPL_IFACE);

  if (RPLOF0P__prevParent != parentNode->parentIP.in6_u.u6_addr16[7]) {







      RPLOF0P__newParent = TRUE;
      RPLOF0P__RPLDAO__newParent();
    }

  RPLOF0P__prevParent = parentNode->parentIP.in6_u.u6_addr16[7];
  return TRUE;
}

# 275 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static void RPLRankP__RPLRankInfo__inconsistencyDetected(void )
#line 275
{
  RPLRankP__parentNum = 0;
  RPLRankP__RPLOF__resetRank();
  RPLRankP__nodeRank = INFINITE_RANK;
  RPLRankP__resetValid();
}

#line 265
static void RPLRankP__resetValid(void )
#line 265
{
  uint8_t indexset;

#line 267
  for (indexset = 0; indexset < 20; indexset++) {
      RPLRankP__parentSet[indexset].valid = FALSE;
    }
}

# 130 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static error_t IPForwardingEngineP__ForwardingTable__delRoute(route_key_t key)
#line 130
{
  int i;

#line 132
  for (i = 0; i < 20; i++) {
      if (IPForwardingEngineP__routing_table[i].key == key) {

          if (IPForwardingEngineP__routing_table[i].prefixlen == 0) {
              IPForwardingEngineP__ForwardingTableEvents__defaultRouteRemoved();
            }

          memmove((void *)&IPForwardingEngineP__routing_table[i], (void *)&IPForwardingEngineP__routing_table[i + 1], 
          sizeof(struct route_entry ) * (20 - i - 1));
          IPForwardingEngineP__routing_table[20 - 1].valid = 0;
          return SUCCESS;
        }
    }
  return FAIL;
}

#line 100
static route_key_t IPForwardingEngineP__ForwardingTable__addRoute(const uint8_t *prefix, 
int prefix_len_bits, 
struct in6_addr *next_hop, 
uint8_t ifindex)
#line 103
{
  struct route_entry *entry;

  if (prefix_len_bits % 8 != 0 || prefix_len_bits > 128) {
#line 106
    return ROUTE_INVAL_KEY;
    }
#line 107
  entry = IPForwardingEngineP__ForwardingTable__lookupRoute(prefix, prefix_len_bits);
  if (entry == (void *)0 || entry->prefixlen != prefix_len_bits) {



      entry = IPForwardingEngineP__alloc_entry(prefix_len_bits);


      if (prefix_len_bits == 0) {
          IPForwardingEngineP__defaultRouteAddedTask__postTask();
        }
    }
  if (entry == (void *)0) {
    return ROUTE_INVAL_KEY;
    }
  entry->prefixlen = prefix_len_bits;
  entry->ifindex = ifindex;
  memcpy(& entry->prefix, prefix, prefix_len_bits / 8);
  if (next_hop) {
    memcpy(& entry->next_hop, next_hop, sizeof(struct in6_addr ));
    }
#line 127
  return entry->key;
}

# 573 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static void RPLRankP__getNewRank(void )
#line 573
{
  uint16_t prevRank = RPLRankP__nodeRank;
  bool newParent = FALSE;

  newParent = RPLRankP__RPLOF__recalculateRank();
  RPLRankP__nodeRank = RPLRankP__RPLOF__getRank();




  if (newParent) {
      RPLRankP__minRank = RPLRankP__nodeRank;
      return;
    }

  if (RPLRankP__nodeRank < RPLRankP__minRank) {
      RPLRankP__minRank = RPLRankP__nodeRank;
      return;
    }



  if (
#line 594
  RPLRankP__nodeRank > prevRank && 
  RPLRankP__nodeRank - RPLRankP__minRank > RPLRankP__MAX_RANK_INCREASE && 
  RPLRankP__MAX_RANK_INCREASE != 0) {


      RPLRankP__nodeRank = INFINITE_RANK;
      RPLRankP__minRank = INFINITE_RANK;
      RPLRankP__RouteInfo__inconsistency();
      return;
    }
  RPLRankP__evictAll();
}

# 147 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static error_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__send(message_t *msg)
{
  if (/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state != /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_READY) {
    return EBUSY;
    }

  if (/*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(msg) > 0) {
    /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__requestAck(msg);
    }
  /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg = msg;
  /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries = 0;
  /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDING;
  /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask();

  return SUCCESS;
}

#line 198
static uint16_t /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(message_t *msg)
{
  return /*RFA1RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(msg)->maxRetries;
}

# 85 "/opt/tinyos-2.x/tos/system/QueueC.nc"
static /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*IPDispatchC.QueueC*/QueueC__0__queue_t t = /*IPDispatchC.QueueC*/QueueC__0__Queue__head();

#line 87
  ;
  if (!/*IPDispatchC.QueueC*/QueueC__0__Queue__empty()) {
      /*IPDispatchC.QueueC*/QueueC__0__head++;
      if (/*IPDispatchC.QueueC*/QueueC__0__head == 12) {
#line 90
        /*IPDispatchC.QueueC*/QueueC__0__head = 0;
        }
#line 91
      /*IPDispatchC.QueueC*/QueueC__0__size--;
      /*IPDispatchC.QueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t IPStackControlP__RoutingControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__start();
#line 95
  __nesc_result = ecombine(__nesc_result, /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 156 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__startDAO(void )
#line 156
{


  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__startPeriodic(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__remove_time);









  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__startOneShot(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao + /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__Random__rand16() % 100);

  if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__isRunning()) {
      return SUCCESS;
    }
  else {
#line 173
    if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getRank() == ROOT_RANK) {
        return SUCCESS;
      }
    else 
#line 175
      {
        /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__startOneShot(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate + 
        /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__Random__rand16() % (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate / 10));
      }
    }
#line 179
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__startOneShot(uint32_t dt){
#line 73
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(7U, dt);
#line 73
}
#line 73
# 102 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static void /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__start(/*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type ndt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type n = /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__get();


      n += 2 > ndt ? 2 : ndt;

      /*RFA1DriverLayerC.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__setAlarm(n);
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 84 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff)
{
  uint16_t a;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      a = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom += 273;
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask();

  return a % maxBackoff + /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff();
}

# 99 "/opt/tinyos-2.x/tos/lib/rfxlink/util/TaskletC.nc"
static void TaskletC__Tasklet__resume(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (--TaskletC__state != 0x80) {
        {
#line 104
          __nesc_atomic_end(__nesc_atomic); 
#line 104
          return;
        }
        }
#line 106
      TaskletC__state = 1;
    }
#line 107
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC__doit();
}

#line 74
static void TaskletC__doit(void )
{
  for (; ; ) 
    {
      TaskletC__Tasklet__run();

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (TaskletC__state == 1) 
            {
              TaskletC__state = 0;
              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return;
              }
            }
          for (; 0; ) ;
          TaskletC__state = 1;
        }
#line 90
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 132 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ) ? TRUE : FALSE;
}

#line 92
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE;
}

#line 178
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata);
}

# 217 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = error;
  if (error == SUCCESS) {
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_DONE;
    }
  else {
#line 225
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
    }
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static flags_metadata_t */*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
}

# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static timestamp_metadata_t */*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(msg);
}

# 100 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static rfa1_metadata_t *RFA1DriverLayerP__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - RFA1DriverLayerP__RadioPacket__metadataLength(msg);
}

#line 95
static void *RFA1DriverLayerP__getPayload(message_t *msg)
{
  return (void *)msg + RFA1DriverLayerP__RadioPacket__headerLength(msg);
}

# 104 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

#line 205
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}

# 106 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 106
{
  am_addr_t myAddr;

#line 108
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 108
    myAddr = ActiveMessageAddressC__addr;
#line 108
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 355 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static error_t RFA1DriverLayerP__RadioSend__send(message_t *msg)
{
  uint32_t time;
  uint8_t length;
  uint8_t *data;
  void *timesync;

  if ((RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE || RFA1DriverLayerP__state != RFA1DriverLayerP__STATE_RX_ON) || RFA1DriverLayerP__radioIrq) {
    return EBUSY;
    }
  length = (RFA1DriverLayerP__PacketTransmitPower__isSet(msg) ? 
  RFA1DriverLayerP__PacketTransmitPower__get(msg) : 0) & RFA1_TX_PWR_MASK;

  if (length != RFA1DriverLayerP__txPower) 
    {
      RFA1DriverLayerP__txPower = length;
      * (volatile uint8_t *)0x145 = (RFA1_PA_BUF_LT | RFA1_PA_LT) | (RFA1DriverLayerP__txPower << 0);
    }


  if (
#line 374
  RFA1DriverLayerP__Config__requiresRssiCca(msg)
   && (* (volatile uint8_t *)0x146 & RFA1_RSSI_MASK) > ((RFA1DriverLayerP__rssiClear + RFA1DriverLayerP__rssiBusy) >> 3)) {
    return EBUSY;
    }
  * (volatile uint8_t *)0x142 = 9;


  timesync = RFA1DriverLayerP__PacketTimeSyncOffset__isSet(msg) ? (void *)msg + RFA1DriverLayerP__PacketTimeSyncOffset__get(msg) : 0;

  data = RFA1DriverLayerP__getPayload(msg);
  length = __nesc_ntoh_leuint8(RFA1DriverLayerP__getHeader(msg)->length.nxdata);


  * (volatile uint8_t *)0x180 = length;


  length -= 2;


  if ((* (volatile uint8_t *)0x141 & RFA1_TRX_STATUS_MASK) != 9) 
    {
      for (; 0; ) ;

      * (volatile uint8_t *)0x142 = 6;
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      time = RFA1DriverLayerP__LocalTime__get();
      * (volatile uint8_t *)0x142 = 2;
    }
#line 405
    __nesc_atomic_end(__nesc_atomic); }

  time += RFA1DriverLayerP__TX_SFD_DELAY;

  for (; 0; ) ;


  if (timesync != 0) {
    __nesc_hton_int32((* (timesync_relative_t *)timesync).nxdata, __nesc_ntoh_uint32((* (timesync_absolute_t *)timesync).nxdata) - time);
    }

  memcpy((void *)(& * (volatile uint8_t *)0x180 + 1), data, length);


  * (volatile uint8_t *)0x142 = 6;

  if (timesync != 0) {
    __nesc_hton_uint32((* (timesync_absolute_t *)timesync).nxdata, __nesc_ntoh_int32((* (timesync_relative_t *)timesync).nxdata) + time);
    }
  RFA1DriverLayerP__PacketTimeStamp__set(msg, time);
#line 441
  RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_BUSY_TX_2_RX_ON;
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_TRANSMIT;

  return SUCCESS;
}

#line 774
static uint8_t RFA1DriverLayerP__RadioPacket__payloadLength(message_t *msg)
{
  return __nesc_ntoh_leuint8(RFA1DriverLayerP__getHeader(msg)->length.nxdata) - 2;
}

# 252 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void )
{
  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY) 
    {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
    }
}

# 282 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg) + sizeof(ieee154_simple_header_t );
}

# 15 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan_frag.c"
static int IPDispatchP__lowpan_recon_start(struct ieee154_frame_addr *frame_addr, 
struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len)
#line 17
{
  uint8_t *unpack_point;
#line 18
  uint8_t *unpack_end;
  struct packed_lowmsg msg;

  msg.data = pkt;
  msg.len = len;
  msg.headers = IPDispatchP__getHeaderBitmap(&msg);
  if (msg.headers == LOWMSG_NALP) {
#line 24
    return -1;
    }

  unpack_point = IPDispatchP__getLowpanPayload(&msg);
  len -= unpack_point - pkt;


  if (IPDispatchP__hasFrag1Header(&msg)) {
      IPDispatchP__getFragDgramTag(&msg, & recon->r_tag);
      IPDispatchP__getFragDgramSize(&msg, & recon->r_size);
    }
  else 
#line 34
    {
      recon->r_size = LIB6LOWPAN_MAX_LEN + LOWPAN_LINK_MTU;
    }
  recon->r_buf = ip_malloc(recon->r_size);
  if (! recon->r_buf) {
#line 38
    return -2;
    }
#line 39
  memset(recon->r_buf, 0, recon->r_size);
  recon->r_app_len = (void *)0;

  if (*unpack_point == LOWPAN_IPV6_PATTERN) {

      unpack_point++;
#line 44
      len--;
      memcpy(recon->r_buf, unpack_point, len);
      unpack_end = recon->r_buf + len;
    }
  else 
#line 47
    {

      unpack_end = IPDispatchP__lowpan_unpack_headers(recon, 
      frame_addr, 
      unpack_point, len);
    }

  if (!unpack_end) {
      ip_free(recon->r_buf);
      return -3;
    }

  if (!IPDispatchP__hasFrag1Header(&msg)) {
      recon->r_size = unpack_end - recon->r_buf;
    }
  recon->r_bytes_rcvd = unpack_end - recon->r_buf;
  ((struct ip6_hdr *)recon->r_buf)->ip6_ctlun.ip6_un1.ip6_un1_plen = ((
  (uint16_t )(recon->r_size - sizeof(struct ip6_hdr )) << 8) | ((uint16_t )(recon->r_size - sizeof(struct ip6_hdr )) >> 8)) & 0xffff;

  if (recon->r_app_len) {
      * recon->r_app_len = ((
      (uint16_t )(recon->r_size - (recon->r_transport_header - recon->r_buf)) << 8) | ((uint16_t )(recon->r_size - (recon->r_transport_header - recon->r_buf)) >> 8)) & 0xffff;
    }



  return 0;
}

# 526 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static uint8_t *IPDispatchP__unpack_address(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf, 
ieee154_addr_t *frame, ieee154_panid_t pan)
#line 528
{
  memset(addr, 0, 16);
  if (!(dispatch & LOWPAN_IPHC_AC_CONTEXT)) {

      switch (dispatch & LOWPAN_IPHC_AM_MASK) {
          case LOWPAN_IPHC_AM_128: 
            memcpy(addr, buf, 16);
          return buf + 16;
          case LOWPAN_IPHC_AM_64: 
            addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
          memcpy(&addr->in6_u.u6_addr8[8], buf, 8);
          return buf + 8;
          case LOWPAN_IPHC_AM_16: 
            addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
          memcpy(&addr->in6_u.u6_addr8[14], buf, 2);
          return buf + 2;
          default: 
            addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
          if (frame->ieee_mode == IEEE154_ADDR_EXT) {
              int i;

#line 548
              for (i = 0; i < 8; i++) 
                addr->in6_u.u6_addr8[i + 8] = frame->ieee_addr.laddr.data[7 - i];
              addr->in6_u.u6_addr8[8] ^= 0x2;
            }
          else 
#line 551
            {
              addr->in6_u.u6_addr16[4] = (((uint16_t )(pan & ~0x0200) << 8) | ((uint16_t )(pan & ~0x0200) >> 8)) & 0xffff;
              addr->in6_u.u6_addr8[11] = 0xff;
              addr->in6_u.u6_addr8[12] = 0xfe;
              addr->in6_u.u6_addr16[7] = (((uint16_t )frame->ieee_addr.saddr << 8) | ((uint16_t )frame->ieee_addr.saddr >> 8)) & 0xffff;
            }
          return buf;
        }
    }
  else 
#line 559
    {

      if ((dispatch & LOWPAN_IPHC_AM_MASK) == LOWPAN_IPHC_AM_128) {

          return buf;
        }
      else 
#line 564
        {
          int ctxlen = IPDispatchP__lowpan_extern_read_context(addr, context);

#line 566
          switch (dispatch & LOWPAN_IPHC_AM_MASK) {
              case LOWPAN_IPHC_AM_64: 
                memcpy(&addr->in6_u.u6_addr8[8], buf, 8);
              return buf + 8;
              case LOWPAN_IPHC_AM_16: 
                memcpy(&addr->in6_u.u6_addr8[14], buf, 2);
              return buf + 2;
              case LOWPAN_IPHC_AM_0: 


                if (ctxlen <= 64 && frame->ieee_mode == IEEE154_ADDR_EXT) {
                    int i;

#line 578
                    for (i = 0; i < 8; i++) 
                      addr->in6_u.u6_addr8[i + 8] = frame->ieee_addr.laddr.data[7 - i];
                    addr->in6_u.u6_addr8[8] ^= 0x2;
                  }
                else {
#line 581
                  if (ctxlen <= 112) {
                      memset(&addr->in6_u.u6_addr8[8], 0, 8);
                      addr->in6_u.u6_addr16[7] = (((uint16_t )frame->ieee_addr.saddr << 8) | ((uint16_t )frame->ieee_addr.saddr >> 8)) & 0xffff;
                    }
                  }
#line 585
              return buf;
            }
        }
    }
  return (void *)0;
}

# 222 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static void IPDispatchP__deliver(struct lowpan_reconstruct *recon)
#line 222
{
  struct ip6_hdr *iph = (struct ip6_hdr *)recon->r_buf;





  iph->ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )(recon->r_bytes_rcvd - sizeof(struct ip6_hdr )) << 8) | ((uint16_t )(recon->r_bytes_rcvd - sizeof(struct ip6_hdr )) >> 8)) & 0xffff;
  IPDispatchP__IPLower__recv(iph, (void *)(iph + 1), & recon->r_meta);


  ip_free(recon->r_buf);
  recon->r_timeout = T_UNUSED;
  recon->r_buf = (void *)0;
}

# 23 "/opt/tinyos-2.x/tos/lib/net/blip/IPPacketC.nc"
static int IPPacketC__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type)
#line 24
{
  int off = 0;
  uint8_t nxt = first_type;
  struct ip6_ext ext;



  while ((*search_type == 0xff && ((((
  nxt == IPV6_HOP || nxt == IPV6_ROUTING) || nxt == IPV6_FRAG) || 
  nxt == IPV6_DEST) || nxt == IPV6_MOBILITY)) || (
  *search_type != 0xff && *search_type != nxt)) {

      if (iov_read(payload, off, sizeof ext, (void *)&ext) != sizeof ext) {
        return -1;
        }
      nxt = ext.ip6e_nxt;
      off += (ext.ip6e_len + 1) * 8;
    }
  if (*search_type == 0xff) {
    *search_type = nxt;
    }
#line 44
  if (nxt == IPV6_NONEXT) {
    return -1;
    }
  else {
#line 47
    return off;
    }
}

# 239 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
static int UDPShellP__lookup_cmd(char *cmd, int dbsize, struct UDPShellP__cmd_name *db)
#line 239
{
  int i;

#line 241
  for (i = 0; i < dbsize; i++) {

      if (
#line 242
      memcmp(cmd, db[i].c_name, db[i].c_len) == 0
       && cmd[db[i].c_len] == '\0') {
        return i;
        }
    }
#line 246
  return UDPShellP__CMD_NO_CMD;
}

#line 152
static char *UDPShellP__ShellCommand__getBuffer(uint8_t cmd_id, uint16_t len)
#line 152
{
  UDPShellP__reply_buf[0] = '\0';
  if (len <= MAX_REPLY_LEN) {
#line 154
    return UDPShellP__reply_buf;
    }
#line 155
  return (void *)0;
}

# 115 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
static error_t UdpP__UDP__sendto(uint8_t clnt, struct sockaddr_in6 *dest, void *payload, 
uint16_t len)
#line 116
{
  struct ip_iovec v[1];

#line 118
  v[0].iov_base = payload;
  v[0].iov_len = len;
  v[0].iov_next = (void *)0;
  return UdpP__UDP__sendtov(clnt, dest, &v[0]);
}

# 73 "/opt/tinyos-2.x/tos/lib/net/blip/IPAddressP.nc"
static bool IPAddressP__IPAddress__setSource(struct ip6_hdr *hdr)
#line 73
{
  enum __nesc_unnamed4419 {
#line 74
    LOCAL, GLOBAL
  } 
#line 74
  type = GLOBAL;

  if (hdr->ip6_dst.in6_u.u6_addr8[0] == 0xff) {

      if ((hdr->ip6_dst.in6_u.u6_addr8[1] & 0x0f) <= 0x2) {
          type = LOCAL;
        }
    }
  else {
#line 81
    if (hdr->ip6_dst.in6_u.u6_addr8[0] == 0xfe) {

        if ((hdr->ip6_dst.in6_u.u6_addr8[1] & 0xf0) <= 0x80) {
            type = LOCAL;
          }
      }
    }
  if (type == LOCAL) {
      return IPAddressP__IPAddress__getLLAddr(& hdr->ip6_src);
    }
  else 
#line 90
    {
      return IPAddressP__IPAddress__getGlobalAddr(& hdr->ip6_src);
    }
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void RouteCmdP__Timer__startOneShot(uint32_t dt){
#line 73
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(10U, dt);
#line 73
}
#line 73
# 59 "/opt/tinyos-2.x/tos/lib/net/blip/IPPacketC.nc"
static int IPPacketC__IPPacket__findTLV(struct ip_iovec *header, int ext_offset, uint8_t type)
#line 59
{
  struct ip6_ext ext;
  struct tlv_hdr tlv;
  int off = ext_offset;

  if (iov_read(header, off, sizeof ext, (void *)&ext) != sizeof ext) {
    return -1;
    }
#line 66
  off += sizeof ext;

  while (off - ext_offset < (ext.ip6e_len + 1) * 8) {
      if (iov_read(header, off, sizeof tlv, (void *)&tlv) != sizeof tlv) {
        return -1;
        }
#line 71
      if (tlv.type == type) {
#line 71
        return off;
        }
      else {
#line 72
        off += sizeof tlv + tlv.len;
        }
    }
#line 74
  return -1;
}

# 313 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLRankP.nc"
static void RPLRankP__insertParent(parent_t parent)
#line 313
{
  uint8_t indexset;
  uint16_t tempEtx_hop;

  indexset = RPLRankP__getPreExistingParent(& parent.parentIP);

  ;
#line 319
  ;

  if (indexset != 20) {

      tempEtx_hop = RPLRankP__parentSet[indexset].etx_hop;
      RPLRankP__parentSet[indexset] = parent;

      if (tempEtx_hop > 10 && tempEtx_hop < 5) {
          tempEtx_hop = tempEtx_hop - 10;
          if (tempEtx_hop < 10) {
            tempEtx_hop = 10;
            }
        }
      else 
#line 330
        {
          tempEtx_hop = 10;
        }

      RPLRankP__parentSet[indexset].etx_hop = tempEtx_hop;
      RPLRankP__parentNum++;

      return;
    }

  for (indexset = 0; indexset < 20; indexset++) {
      if (! RPLRankP__parentSet[indexset].valid) {
          RPLRankP__parentSet[indexset] = parent;
          RPLRankP__parentNum++;
          break;
        }
    }
}


static void RPLRankP__evictParent(uint8_t indexset)
#line 350
{
  RPLRankP__parentSet[indexset].valid = FALSE;
  RPLRankP__parentNum--;
  ;
#line 353
  ;


  if (RPLRankP__parentNum == 0) {

      RPLRankP__RouteInfo__resetTrickle();
    }
}

# 86 "/opt/tinyos-2.x/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__memcmp_rpl(uint8_t *a, uint8_t *b, uint8_t len)
#line 86
{
  uint8_t i;

#line 88
  for (i = 0; i < len; i++) 
    if (a[i] != b[i]) {
      return FALSE;
      }
#line 91
  return TRUE;
}

# 97 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__state == /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__RES_BUSY && /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__resId == id) {
          if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Queue__isEmpty() == FALSE) {
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__NO_RES;
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__reqResId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__Queue__dequeue();
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__RES_GRANTING;
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__grantedTask__postTask();
            }
          else {
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__NO_RES;
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 112 "/opt/tinyos-2.x/tos/lib/rfxlink/util/TaskletC.nc"
static void TaskletC__Tasklet__schedule(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (TaskletC__state != 0) 
        {
          TaskletC__state |= 0x80;
          {
#line 119
            __nesc_atomic_end(__nesc_atomic); 
#line 119
            return;
          }
        }
      TaskletC__state = 1;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC__doit();
}

# 314 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
static void IPForwardingEngineP__IPForward__sendDone(uint8_t ifindex, struct send_info *status)
#line 314
{
  struct in6_addr next;
  struct in6_iid *iid = (struct in6_iid *)status->upper_data;

#line 317
  memset(next.in6_u.u6_addr8, 0, 16);
  next.in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
  ;
#line 319
  ;

  if (iid != (void *)0) {
      memcpy(&next.in6_u.u6_addr8[8], iid->data, 8);
      IPForwardingEngineP__ForwardingEvents__linkResult(ifindex, &next, status);
      IPForwardingEngineP__Pool__put(iid);
    }
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 147 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 = t0;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt = dt;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

#line 107
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm(void )
{
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type now = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get();
#line 109
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type remaining;




  expires = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 + /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;


  remaining = (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 = now + /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt = remaining - /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 += /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt = 0;
    }
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt((/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type )now << 6, 
  (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type )remaining << 6);
}

# 374 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static error_t SerialP__SplitControl__stop(void )
#line 374
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 375
    {
      if (SerialP__rxState == SerialP__RXSTATE_NOSYNC) {
          SerialP__rxState = SerialP__RXSTATE_INACTIVE;
        }
    }
#line 379
    __nesc_atomic_end(__nesc_atomic); }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 380
    {
      if (SerialP__txState == SerialP__TXSTATE_IDLE) {
          SerialP__txState = SerialP__TXSTATE_INACTIVE;
        }
    }
#line 384
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__testOff();
  return SUCCESS;
}

#line 348
static error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 52 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
static error_t UdpP__UDP__bind(uint8_t clnt, uint16_t port)
#line 52
{
  int i;

#line 54
  port = (((uint16_t )port << 8) | ((uint16_t )port >> 8)) & 0xffff;
  if (port > 0) {
      for (i = 0; i < UdpP__N_CLIENTS; i++) 
        if (i != clnt && UdpP__local_ports[i] == port) {
          return FAIL;
          }
    }
#line 60
  UdpP__local_ports[clnt] = port;
  return SUCCESS;
}

# 76 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void )
{
  error_t error;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn();

      if (error == SUCCESS) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON;
        }
    }
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 48 "/opt/tinyos-2.x/tos/lib/net/blip/Ieee154AddressP.nc"
static error_t Ieee154AddressP__Ieee154Address__setShortAddr(ieee154_saddr_t addr)
#line 48
{
  Ieee154AddressP__m_saddr = addr;


  Ieee154AddressP__ShortAddressConfig__setShortAddr(addr);









  Ieee154AddressP__Ieee154Address__changed();
  return SUCCESS;
}

# 108 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
__attribute((signal))   void __vector_68(void )
#line 108
{
#line 108
  HplAtmRfa1TimerMacP__Counter__overflow();
}

#line 185
__attribute((signal))   void __vector_65(void )
#line 185
{
#line 185
  HplAtmRfa1TimerMacP__CompareA__fired();
}

#line 265
__attribute((signal))   void __vector_66(void )
#line 265
{
#line 265
  HplAtmRfa1TimerMacP__CompareB__fired();
}

#line 345
__attribute((signal))   void __vector_67(void )
#line 345
{
#line 345
  HplAtmRfa1TimerMacP__CompareC__fired();
}

# 667 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
__attribute((interrupt))   void __vector_63(void )
#line 667
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 670
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_TX_END;
#line 670
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((interrupt))   void __vector_60(void )
#line 677
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 680
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_RX_END;
#line 680
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}





__attribute((interrupt))   void __vector_59(void )
#line 688
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 691
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_RX_START;
#line 691
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((interrupt))   void __vector_57(void )
#line 698
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 701
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_PLL_LOCK;
#line 701
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((interrupt))   void __vector_64(void )
#line 708
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 711
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_AWAKE;
#line 711
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((interrupt))   void __vector_61(void )
#line 718
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 721
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_CCA_ED_DONE;
#line 721
    __nesc_atomic_end(__nesc_atomic); }
  RFA1DriverLayerP__Tasklet__schedule();
}

# 73 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
__attribute((signal))   void __vector_20(void )
#line 73
{
#line 73
  HplAtmRfa1Timer1P__Timer__overflow();
}

#line 164
__attribute((signal))   void __vector_17(void )
#line 164
{
#line 164
  HplAtmRfa1Timer1P__CompareA__fired();
}








__attribute((signal))   void __vector_18(void )
#line 174
{
#line 174
  HplAtmRfa1Timer1P__CompareB__fired();
}








__attribute((signal))   void __vector_19(void )
#line 184
{
#line 184
  HplAtmRfa1Timer1P__CompareC__fired();
}

#line 324
__attribute((signal))   void __vector_16(void )
#line 324
{
#line 324
  HplAtmRfa1Timer1P__Capture__fired();
}

# 122 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
static void UDPShellP__action_help(int argc, char **argv)
#line 122
{
  int i = 0;
  char *pos = UDPShellP__reply_buf;

#line 125
  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__help_str, strlen(UDPShellP__help_str));
  if (UDPShellP__N_EXTERNAL > 0) {
      strcpy(pos, "\t\t[");
      pos += 3;
      for (i = 0; i < UDPShellP__N_EXTERNAL; i++) {
          if (UDPShellP__externals[i].c_len + 4 < MAX_REPLY_LEN - (pos - UDPShellP__reply_buf)) {
              memcpy(pos, UDPShellP__externals[i].c_name, UDPShellP__externals[i].c_len);
              pos += UDPShellP__externals[i].c_len;
              if (i < UDPShellP__N_EXTERNAL - 1) {
                  pos[0] = ',';
                  pos[1] = ' ';
                  pos += 2;
                }
            }
          else 
#line 138
            {
              pos[0] = '.';
              pos[1] = '.';
              pos[2] = '.';
              pos += 3;
              break;
            }
        }
      * pos++ = ']';
      * pos++ = '\n';
      UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__reply_buf, pos - UDPShellP__reply_buf);
    }
}











static void UDPShellP__action_echo(int argc, char **argv)
#line 162
{
  int i;
#line 163
  int arg_len;
  char *payload = UDPShellP__reply_buf;

  if (argc < 2) {
#line 166
    return;
    }
#line 167
  for (i = 1; i < argc; i++) {
      arg_len = strlen(argv[i]);
      if (payload - UDPShellP__reply_buf + arg_len + 1 > MAX_REPLY_LEN) {
#line 169
        break;
        }
#line 170
      memcpy(payload, argv[i], arg_len);
      payload += arg_len;
      *payload = ' ';
      payload++;
    }
  *(payload - 1) = '\n';

  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__reply_buf, payload - UDPShellP__reply_buf);
}

static void UDPShellP__action_ping6(int argc, char **argv)
#line 180
{
  struct in6_addr dest;

  if (argc < 2) {
#line 183
    return;
    }
#line 184
  inet_pton6(argv[1], &dest);
  UDPShellP__ICMPPing__ping(&dest, 1024, 10);
}


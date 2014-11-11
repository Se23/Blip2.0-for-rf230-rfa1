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
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
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
# 117 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x402fe010, const void *arg_0x402fe1a8, size_t arg_0x402fe340);

extern void *memmove(void *arg_0x402fd278, const void *arg_0x402fd410, size_t arg_0x402fd5a8);

extern void *memset(void *arg_0x40301350, int arg_0x403014a8, size_t arg_0x40301640);
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


typedef int (*__compar_fn_t)(const void *arg_0x40313730, const void *arg_0x403138c8);
# 25 "/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;







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
# 51 "/opt/tinyos-2.x/tos/platforms/ucmini/hardware.h"
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
# 81 "/opt/tinyos-2.x/tos/lib/ppp/ppp.h"
enum __nesc_unnamed4263 {

  PppProtocol_LinkControlProtocol = 0xc021, 

  PppProtocol_Ipv6 = 0x57, 

  PppProtocol_Ipv6Cp = 0x8057
};
#line 101
typedef const uint8_t *frame_key_t;




enum __nesc_unnamed4264 {

  PppControlProtocolCode_ConfigureRequest = 1, 

  PppControlProtocolCode_ConfigureAck = 2, 

  PppControlProtocolCode_ConfigureNak = 3, 

  PppControlProtocolCode_ConfigureReject = 4, 


  PppControlProtocolCode_TerminateRequest = 5, 


  PppControlProtocolCode_TerminateAck = 6, 


  PppControlProtocolCode_CodeReject = 7, 



  PppControlProtocolCode_ProtocolReject = 8, 


  PppControlProtocolCode_EchoRequest = 9, 


  PppControlProtocolCode_EchoReply = 10, 


  PppControlProtocolCode_DiscardRequest = 11
};
#line 152
#line 139
typedef struct PppOptions_t {


  bool txProtocolFieldCompression;


  bool rxProtocolFieldCompression;


  uint16_t txMaximumReceiveUnit;


  uint16_t rxMaximumReceiveUnit;
} PppOptions_t;
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
  int (*put)(char arg_0x4044f7c8, struct __file *arg_0x4044f9b0);
  int (*get)(struct __file *arg_0x4044fda0);
  void *udata;
};
#line 405
extern struct __file *__iob[];
#line 417
struct __file;
#line 649
extern int printf(const char *__fmt, ...);
# 52 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.h"
#line 38
typedef enum LcpAutomatonState_e {
  LAS_Initial = 0, 
  LAS_Starting, 
  LAS_Closed, 
  LAS_Stopped, 
  LAS_Closing, 
  LAS_Stopping, 
  LAS_RequestSent, 
  LAS_AckReceived, 
  LAS_AckSent, 
  LAS_Opened, 


  LAS_TRANSIENT = 0x0f
} LcpAutomatonState_e;
#line 70
#line 56
typedef enum LcpAutomatonEvent_e {
  LAE_Up, 
  LAE_Down, 
  LAE_Open, 
  LAE_Close, 
  LAE_Timeout, 
  LAE_ReceiveConfigureRequest, 
  LAE_ReceiveConfigureAck, 
  LAE_ReceiveConfigureNakRej, 
  LAE_ReceiveTerminateRequest, 
  LAE_ReceiveTerminateAck, 
  LAE_ReceveUnknownCode, 
  LAE_ReceiveCodeProtocolReject, 
  LAE_ReceiveEchoDiscardRequestReply
} LcpAutomatonEvent_e;
#line 82
#line 76
typedef struct LcpAutomatonOptions_t {
  uint32_t restartTimer_bms;
  uint16_t maxTerminate;
  uint16_t maxConfigure;
  uint16_t maxFailure;
  bool restartOption;
} LcpAutomatonOptions_t;
#line 100
#line 86
typedef struct LcpEventParams_rcr_t {


  bool good;


  uint8_t disposition;


  const uint8_t *options;

  const uint8_t *options_end;

  frame_key_t scx_key;
} LcpEventParams_rcr_t;
#line 113
#line 105
typedef struct LcpEventParams_opts_t {


  const uint8_t *options;

  const uint8_t *options_end;

  uint8_t code;
} LcpEventParams_opts_t;
#line 126
#line 117
typedef struct LcpEventParams_term_t {

  const uint8_t *data;

  const uint8_t *data_end;

  uint8_t code;

  frame_key_t sta_key;
} LcpEventParams_term_t;
# 40 "/opt/tinyos-2.x/tos/lib/ppp/pppipv6.h"
enum __nesc_unnamed4265 {



  Ipv6CpOpt_InterfaceIdentifier = 1
};





#line 49
typedef struct ppp_ipv6cp_iid_t {
  uint8_t iid[8];
} ppp_ipv6cp_iid_t;
# 41 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer.h"
enum __nesc_unnamed4266 {


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


enum __nesc_unnamed4267 {


  ATMRFA1_COM8_OFF = 0, 
  ATMRFA1_COM8_TOGGLE, 
  ATMRFA1_COM8_CLEAR, 
  ATMRFA1_COM8_SET
};





enum __nesc_unnamed4268 {


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


enum __nesc_unnamed4269 {


  ATMRFA1_COM16_NORMAL = 0, 
  ATMRFA1_COM16_TOGGLE, 
  ATMRFA1_COM16_CLEAR, 
  ATMRFA1_COM16_SET
};


enum __nesc_unnamed4270 {

  ATMRFA1_CAP16_RISING_EDGE = 0x01, 
  ATMRFA1_CAP16_NOISE_CANCEL = 0x02
};





enum __nesc_unnamed4271 {

  ATMRFA1_CLKSC_DISABLE = 0, 
  ATMRFA1_CLKSC_XTAL = 1 << 5, 
  ATMRFA1_CLKSC_RTC = (1 << 5) | (1 << 4)
};


enum __nesc_unnamed4272 {

  ATMRFA1_COMSC_ABSOLUTE = 0, 
  ATMRFA1_COMSC_RELATIVE = 1
};


enum __nesc_unnamed4273 {

  ATMRFA1_CAPSC_OFF = 0, 
  ATMRFA1_CAPSC_ON = 1
};
# 41 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4274 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4275 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4276 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4277 {
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
# 3 "/opt/tinyos-2.x/tos/platforms/ucmini/BatterySwitch.h"
enum __nesc_unnamed4278 {
  BATTERY_SWITCH_RECHARGABLE = 0, 
  BATTERY_SWITCH_NOT_RECHARGABLE = 1
};
# 33 "/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4279 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4280 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4281 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4282 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4283 {
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
# 43 "/opt/tinyos-2.x/tos/platforms/ucmini/RadioConfig.h"
enum __nesc_unnamed4284 {





  RFA1_CCA_MODE_VALUE = 2 << 5, 





  RFA1_CCA_THRES_VALUE = 0xC7, 

  RFA1_PA_BUF_LT = 3 << 6, 
  RFA1_PA_LT = 0 << 4
};
#line 96
typedef T62khz TRadio;
typedef uint32_t tradio_size;
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 40 "/opt/tinyos-2.x/tos/types/IeeeEui64.h"
enum __nesc_unnamed4285 {
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
typedef struct __nesc_unnamed4286 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4287 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4288 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4289 {
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







  timestamp_metadata_t timestamp;
  flags_metadata_t flags;
  rfa1_metadata_t rfa1;
} rfa1packet_metadata_t;

enum __nesc_unnamed4290 {

  RFA1_TX_PWR_MASK = 0x0F, 
  RFA1_CHANNEL_MASK = 0x1F, 
  RFA1_TRX_STATUS_MASK = 0x1F, 
  RFA1_RSSI_MASK = 0x1F
};
# 32 "/opt/tinyos-2.x/tos/platforms/ucmini/platform_message.h"
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
  nx_uint8_t data[28];
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
typedef union __nesc_unnamed4291 {
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
typedef union __nesc_unnamed4292 {
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

enum __nesc_unnamed4293 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4294 {
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





enum __nesc_unnamed4295 {
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

enum __nesc_unnamed4296 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4297 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4298 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
# 56 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFraming.h"
#line 42
typedef struct HdlcFramingOptions_t {


  bool txSuppressAddressControl;


  bool rxSuppressAddressControl;


  uint32_t txAsyncControlCharacterMap;



  uint32_t rxAsyncControlCharacterMap;
} HdlcFramingOptions_t;
#line 82
#line 59
typedef enum HdlcError_e {

  HdlcError_None, 


  HdlcError_InvalidAddressField, 


  HdlcError_InvalidControlField, 


  HdlcError_ShortFrame, 


  HdlcError_BadCrc, 

  HdlcError_NoBufferAvailable, 


  HdlcError_BufferOverflow, 


  HdlcError_ReceptionCancelled
} HdlcError_e;
# 49 "/opt/tinyos-2.x/tos/lib/ppp/lcp.h"
enum __nesc_unnamed4299 {





  LCPOpt_MaximumReceiveUnit = 1, 


  LCPOpt_AsyncControlCharacterMap = 2, 



  LCPOpt_AuthenticationProtocol = 3, 



  LCPOpt_QualityProtocol = 4, 

  LCPOpt_MagicNumber = 5, 



  LCPOpt_ProtocolFieldCompression = 7, 


  LCPOpt_AddressControlFieldCompression = 8
};








#line 81
typedef struct protocolReject_param_t {
  unsigned int protocol;
  const uint8_t *information;
  unsigned int information_length;
} protocolReject_param_t;
# 42 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImpl.h"
typedef int fragment_pool_id_t;
#line 69
#line 60
typedef struct FragmentPoolSlot_t {


  uint8_t *start;




  int length;
} FragmentPoolSlot_t;
# 35 "/opt/tinyos-2.x/tos/lib/ppp/PppPrintf.h"
enum __nesc_unnamed4300 {





  PppProtocol_Printf = 0x404F
};
# 87 "/opt/tinyos-2.x/tos/lib/printf/PutcharP.nc"
static int uart_putchar(char c, struct __file *stream);
static struct __file atm128_stdout = 
{ .put = (int (*)(char c, struct __file *stream))uart_putchar, .get = (void *)0, .flags = 0x0002, .udata = 0 };
typedef uint8_t BatterySwitchP__Read__val_t;
typedef TMilli BatterySwitchP__Timer__precision_tag;
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
typedef TMicro AdcP__BusyWait__precision_tag;
typedef uint16_t AdcP__BusyWait__size_type;
typedef uint16_t AdcP__Read__val_t;
typedef uint16_t AdcP__ReadNow__val_t;
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
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t;
enum /*SingleVoltageC.AdcReadClientC*/AdcReadClientC__0____nesc_unnamed4301 {
  AdcReadClientC__0__ID = 0U, AdcReadClientC__0__HAL_ID = 0U
};
typedef uint16_t VoltageP__AdcRaw__val_t;
typedef uint16_t VoltageP__VoltageMilliVolts__val_t;
typedef TMilli VoltageP__Timer__precision_tag;
typedef uint16_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__width_t;
typedef /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__width_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__val_t;
typedef /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__width_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Service__val_t;
typedef TMicro BatteryWarningP__BusyWait__precision_tag;
typedef uint16_t BatteryWarningP__BusyWait__size_type;
typedef uint16_t BatteryWarningP__Voltage__val_t;
typedef uint8_t BatteryWarningP__Switch__val_t;
typedef TMicro /*Atm128Uart1C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart1C.UartP*/Atm128UartP__0__Counter__size_type;
typedef TMicro /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__to_precision_tag;
typedef uint32_t /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__to_size_type;
typedef TMcu /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__from_precision_tag;
typedef uint32_t /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__from_size_type;
typedef uint8_t /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__upper_count_type;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__from_precision_tag /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__CounterFrom__precision_tag;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__from_size_type /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__CounterFrom__size_type;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__to_precision_tag /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__Counter__precision_tag;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__to_size_type /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__Counter__size_type;
typedef TMcu /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__to_precision_tag;
typedef uint32_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__to_size_type;
typedef TMcu /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__from_precision_tag;
typedef uint16_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__from_size_type;
typedef uint16_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__upper_count_type;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__from_precision_tag /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__CounterFrom__precision_tag;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__from_size_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__CounterFrom__size_type;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__to_precision_tag /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__Counter__precision_tag;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__to_size_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__Counter__size_type;
typedef PppOptions_t PppP__PppOptions__type_t;
enum /*PppC.TransmitFramePoolC*/FragmentPoolC__0____nesc_unnamed4302 {
  FragmentPoolC__0__POOL_ID = 0U
};
enum FragmentPoolImplC____nesc_unnamed4303 {
  FragmentPoolImplC__NUM_POOLS = 2U
};
typedef HdlcFramingOptions_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFramingOptions__type_t;
enum /*PppC.HdlcFramingC.InputFramePoolC*/FragmentPoolC__1____nesc_unnamed4304 {
  FragmentPoolC__1__POOL_ID = 1U
};
enum LinkControlProtocolC____nesc_unnamed4305 {
  LinkControlProtocolC__Protocol = PppProtocol_LinkControlProtocol
};
enum LinkControlProtocolP____nesc_unnamed4306 {
  LinkControlProtocolP__Protocol = PppProtocol_LinkControlProtocol
};
typedef HdlcFramingOptions_t LinkControlProtocolP__HdlcFramingOptions__type_t;
typedef PppOptions_t LinkControlProtocolP__PppOptions__type_t;
enum /*LinkControlProtocolC.PppConfigureEngineC*/PppConfigureEngineC__0____nesc_unnamed4307 {
  PppConfigureEngineC__0__Code_ConfigureRequest = PppControlProtocolCode_ConfigureRequest, PppConfigureEngineC__0__Code_ConfigureAck = PppControlProtocolCode_ConfigureAck, PppConfigureEngineC__0__Code_ConfigureNak = PppControlProtocolCode_ConfigureNak, PppConfigureEngineC__0__Code_ConfigureReject = PppControlProtocolCode_ConfigureReject, PppConfigureEngineC__0__Code_TerminateRequest = PppControlProtocolCode_TerminateRequest, PppConfigureEngineC__0__Code_TerminateAck = PppControlProtocolCode_TerminateAck
};
typedef LcpAutomatonOptions_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpOptions__type_t;
typedef TMilli /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__precision_tag;
typedef uint32_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__size_type;
enum /*LinkControlProtocolC.LcpAutomatonC.MuxAlarmMilli32C*/MuxAlarmMilli32C__0____nesc_unnamed4308 {
  MuxAlarmMilli32C__0__CLIENT_ID = 0U
};
typedef TMilli /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag;
typedef uint32_t /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type;
typedef /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__precision_tag;
typedef /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type;
typedef /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__precision_tag;
typedef /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type;
typedef T62khz /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__precision_tag;
typedef uint32_t /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type;
typedef /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__size_type;
typedef /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__precision_tag /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__precision_tag;
typedef /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__size_type;
typedef /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__size_type;
typedef TMilli /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type;
typedef T62khz /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__from_precision_tag;
typedef uint32_t /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__from_size_type;
typedef /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_precision_tag /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__size_type;
typedef /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__from_precision_tag /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__from_size_type /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_precision_tag /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Counter__precision_tag;
typedef /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Counter__size_type;
enum PppIpv6C____nesc_unnamed4309 {
  PppIpv6C__ControlProtocol = PppProtocol_Ipv6Cp, PppIpv6C__Protocol = PppProtocol_Ipv6
};
enum /*PppIpv6C.PppConfigureEngineC*/PppConfigureEngineC__1____nesc_unnamed4310 {
  PppConfigureEngineC__1__Code_ConfigureRequest = PppControlProtocolCode_ConfigureRequest, PppConfigureEngineC__1__Code_ConfigureAck = PppControlProtocolCode_ConfigureAck, PppConfigureEngineC__1__Code_ConfigureNak = PppControlProtocolCode_ConfigureNak, PppConfigureEngineC__1__Code_ConfigureReject = PppControlProtocolCode_ConfigureReject, PppConfigureEngineC__1__Code_TerminateRequest = PppControlProtocolCode_TerminateRequest, PppConfigureEngineC__1__Code_TerminateAck = PppControlProtocolCode_TerminateAck
};
typedef LcpAutomatonOptions_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpOptions__type_t;
typedef TMilli /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__precision_tag;
typedef uint32_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__size_type;
enum /*PppIpv6C.LcpAutomatonC.MuxAlarmMilli32C*/MuxAlarmMilli32C__1____nesc_unnamed4311 {
  MuxAlarmMilli32C__1__CLIENT_ID = 1U
};
enum PppPrintfC____nesc_unnamed4312 {
  PppPrintfC__Protocol = PppProtocol_Printf
};
# 110 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static void TestP__Ipv6LcpAutomaton__thisLayerUp(void );
#line 128
static void TestP__Ipv6LcpAutomaton__thisLayerFinished(void );
#line 118
static void TestP__Ipv6LcpAutomaton__thisLayerDown(void );




static void TestP__Ipv6LcpAutomaton__thisLayerStarted(void );
#line 48
static void TestP__Ipv6LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void TestP__Boot__booted(void );
# 72 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6.nc"
static void TestP__PppIpv6__linkUp(void );
#line 87
static error_t TestP__PppIpv6__receive(const uint8_t *message, 
unsigned int len);
#line 75
static void TestP__PppIpv6__linkDown(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t McuInitP__Init__init(void );
#line 62
static error_t MeasureClockC__Init__init(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
#line 53
static uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RFA1RadioOffP__RFA1RadioOff__init(void );
#line 62
static error_t Stm25pOffP__Stm25pOff__init(void );
# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__get(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__makeInput(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 47 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__isOutput(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__get(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__makeOutput(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__set(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__clr(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__toggle(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__clr(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortF*/AtmegaGeneralIOP__5__Pin__makeInput(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortF*/AtmegaGeneralIOP__5__Pin__makeOutput(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortF*/AtmegaGeneralIOP__5__Pin__clr(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x40518010);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static error_t BatterySwitchP__Read__read(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BatterySwitchP__Timer__fired(void );
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
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareC__default__fired(void );
# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
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
#line 83
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4068c8f0);
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4068c8f0, 
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t Atm128AdcP__Init__init(void );
# 119 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 70 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 182 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
static void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 95 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static error_t Atm128AdcP__AsyncStdControl__start(void );









static error_t Atm128AdcP__AsyncStdControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128AdcP__McuPowerOverride__lowestState(void );
# 54 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP__HplAtm128Adc__setChannel(uint8_t mux);
#line 108
static void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );
#line 66
static void HplAtm128AdcP__HplAtm128Adc__setAdlar(bool adlarOn);
#line 176
static bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
#line 112
static void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );
#line 84
static uint8_t HplAtm128AdcP__HplAtm128Adc__getRef(void );
#line 121
static void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 60
static uint8_t HplAtm128AdcP__HplAtm128Adc__getChannel(void );
#line 95
static void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
#line 78
static void HplAtm128AdcP__HplAtm128Adc__setRef(uint8_t ref);
#line 90
static Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );










static uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40764da8);
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x407621b8);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x407621b8);
# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40764380);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40764380);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40764380);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 62 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static error_t AdcP__Read__read(
# 48 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x407972e8);
# 66 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__default__readDone(
# 49 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x407952a0, 
# 66 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(
# 53 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x407947c8);
# 25 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getChannel(
# 53 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x407947c8);
# 39 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(
# 53 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x407947c8);
# 81 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void AdcP__acquiredData__runTask(void );
# 66 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__size_type dt);
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void );
#line 82
static void /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__overflow(void );
#line 64
static /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__Counter__size_type /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__Counter__get(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__size_type /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__get(void );






static bool /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__isOverflowPending(void );
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
#line 53
static bool HplAtmRfa1Timer1P__Timer__test(void );
#line 40
static HplAtmRfa1Timer1P__Timer__size_type HplAtmRfa1Timer1P__Timer__get(void );
#line 61
static void HplAtmRfa1Timer1P__Timer__start(void );
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(
# 24 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4083c408);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(
# 24 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4083c408, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(
# 26 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4083a428, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t val);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40839300);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40839300);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40839300);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void VoltageP__calcTask__runTask(void );
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t VoltageP__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t VoltageP__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t VoltageP__Atm128AdcConfig__getPrescaler(void );
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void VoltageP__AdcRaw__readDone(error_t result, VoltageP__AdcRaw__val_t val);
#line 55
static error_t VoltageP__VoltageMilliVolts__read(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void VoltageP__Timer__fired(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40764da8);
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x407621b8);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x407621b8);
# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 73
static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void );
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Resource__release(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40764380);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Resource__request(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40764380);
# 98 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static uint8_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static error_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__read(
# 19 "/opt/tinyos-2.x/tos/system/MultiplexedReadC.nc"
uint8_t arg_0x4087a930);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__default__readDone(
# 19 "/opt/tinyos-2.x/tos/system/MultiplexedReadC.nc"
uint8_t arg_0x4087a930, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__val_t val);
#line 63
static void /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Service__readDone(error_t result, /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Service__val_t val);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Resource__granted(
# 22 "/opt/tinyos-2.x/tos/system/MultiplexedReadC.nc"
uint8_t arg_0x40875558);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t BatteryWarningP__Init__init(void );
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void BatteryWarningP__Voltage__readDone(error_t result, BatteryWarningP__Voltage__val_t val);
#line 63
static void BatteryWarningP__Switch__readDone(error_t result, BatteryWarningP__Switch__val_t val);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 63 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
static void LedsP__Leds__led0Off(void );





static void LedsP__Leds__led0Toggle(void );




static void LedsP__Leds__led1On(void );










static void LedsP__Leds__led1Toggle(void );
#line 113
static void LedsP__Leds__led3Off(void );
#line 102
static void LedsP__Leds__led2Toggle(void );
#line 79
static void LedsP__Leds__led1Off(void );
#line 119
static void LedsP__Leds__led3Toggle(void );
#line 108
static void LedsP__Leds__led3On(void );
#line 58
static void LedsP__Leds__led0On(void );
#line 96
static void LedsP__Leds__led2Off(void );
#line 91
static void LedsP__Leds__led2On(void );
#line 149
static void LedsP__Leds__set(uint8_t val);
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
uint8_t arg_0x408e13f0);
# 54 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableFallingEdge(
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
uint8_t arg_0x408e13f0);
# 53 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableRisingEdge(
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
uint8_t arg_0x408e13f0);
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
am_id_t arg_0x4091ce00, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x409347d8, 
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
uart_id_t arg_0x40a01068, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a01068, 
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
uart_id_t arg_0x40a04a00, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a01b68, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a01b68);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a01b68, 
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
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Atm128Uart1C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__default__txDone(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart1__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart1__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart1__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart1__disableRxIntr(void );


static void HplAtm128UartP__HplUart1__tx(uint8_t data);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart1TxControl__start(void );









static error_t HplAtm128UartP__Uart1TxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart1RxControl__start(void );









static error_t HplAtm128UartP__Uart1RxControl__stop(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow(void );
#line 82
static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__CounterFrom__overflow(void );
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
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x40421e80);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x40421e80);
# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 53 "/opt/tinyos-2.x/tos/interfaces/Led.nc"
static void PlatformLedP__Led__toggle(
# 40 "/opt/tinyos-2.x/tos/platforms/ucmini/PlatformLedP.nc"
uint8_t arg_0x40b13468);
# 43 "/opt/tinyos-2.x/tos/interfaces/Led.nc"
static void PlatformLedP__Led__on(
# 40 "/opt/tinyos-2.x/tos/platforms/ucmini/PlatformLedP.nc"
uint8_t arg_0x40b13468);
# 46 "/opt/tinyos-2.x/tos/interfaces/Led.nc"
static void PlatformLedP__Led__off(
# 40 "/opt/tinyos-2.x/tos/platforms/ucmini/PlatformLedP.nc"
uint8_t arg_0x40b13468);
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void PppDaemonP__PppControl__startDone(error_t error);
#line 138
static void PppDaemonP__PppControl__stopDone(error_t error);
#line 104
static error_t PppDaemonP__SplitControl__start(void );
# 51 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolReject.nc"
static error_t PppDaemonP__PppProtocolReject__process(unsigned int protocol, 
const uint8_t *information, 
unsigned int length);
# 110 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static void PppDaemonP__LcpAutomaton__thisLayerUp(void );
#line 128
static void PppDaemonP__LcpAutomaton__thisLayerFinished(void );
#line 118
static void PppDaemonP__LcpAutomaton__thisLayerDown(void );




static void PppDaemonP__LcpAutomaton__thisLayerStarted(void );
#line 48
static void PppDaemonP__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t PppP__SplitControl__start(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void PppP__processError_task__runTask(void );
# 49 "/opt/tinyos-2.x/tos/lib/ppp/PppRejectedProtocol.nc"
static error_t PppP__PppRejectedProtocol__rejected(uint16_t protocol, 
const uint8_t *data, 
const uint8_t *data_end);
# 120 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
static void PppP__TransmitFramePool__available(unsigned int length);
# 54 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
static unsigned int PppP__PppProtocol__default__getProtocol(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
uint16_t arg_0x40b58ca0);
# 77 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
static error_t PppP__PppProtocol__default__process(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
uint16_t arg_0x40b58ca0, 
# 77 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
const uint8_t *information, 
unsigned int information_length);
#line 94
static error_t PppP__PppProtocol__default__rejectedByPeer(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
uint16_t arg_0x40b58ca0, 
# 94 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
const uint8_t *data, 
const uint8_t *data_end);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void PppP__processFrame_task__runTask(void );
#line 75
static void PppP__controlEngine_task__runTask(void );
# 81 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static error_t PppP__Ppp__fixOutputFrameLength(frame_key_t arg_0x40b3f0f8, const uint8_t *frame_end);
#line 97
static error_t PppP__Ppp__sendOutputFrame(frame_key_t key);






static error_t PppP__Ppp__releaseOutputFrame(frame_key_t key);
#line 71
static uint8_t *PppP__Ppp__getOutputFrame(unsigned int protocol, 
const uint8_t **frame_endp, 
bool inhibit_compression, 
frame_key_t *keyp);
# 47 "/opt/tinyos-2.x/tos/lib/ppp/GetSetOptions.nc"
static PppP__PppOptions__type_t PppP__PppOptions__get(void );
#line 42
static error_t PppP__PppOptions__set(const PppP__PppOptions__type_t *options);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void PppP__transmitEngine_task__runTask(void );
# 94 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFraming.nc"
static void PppP__HdlcFraming__receivedFrame(const uint8_t *data, 
unsigned int len);
#line 120
static void PppP__HdlcFraming__receivedDelimiter(void );
#line 81
static void PppP__HdlcFraming__sendDone(const uint8_t *data, 
unsigned int len, 
error_t err);
#line 133
static void PppP__HdlcFraming__receptionError(HdlcError_e code);
# 57 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorage.nc"
static unsigned int /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__slotCount(void );
#line 54
static FragmentPoolSlot_t */*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__slots(void );
#line 51
static unsigned int /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__poolSize(void );
#line 48
static uint8_t */*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__pool(void );








static unsigned int /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__slotCount(
# 48 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
fragment_pool_id_t arg_0x40bbb7f8);
# 54 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorage.nc"
static FragmentPoolSlot_t */*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__slots(
# 48 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
fragment_pool_id_t arg_0x40bbb7f8);
# 51 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorage.nc"
static unsigned int /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__poolSize(
# 48 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
fragment_pool_id_t arg_0x40bbb7f8);
# 48 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorage.nc"
static uint8_t */*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__pool(
# 48 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
fragment_pool_id_t arg_0x40bbb7f8);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__Init__init(void );
# 110 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
static error_t /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__release(
# 42 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
fragment_pool_id_t arg_0x40bbeb88, 
# 110 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
const uint8_t *start);









static void /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__default__available(
# 42 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
fragment_pool_id_t arg_0x40bbeb88, 
# 120 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
unsigned int length);
#line 75
static error_t /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__request(
# 42 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
fragment_pool_id_t arg_0x40bbeb88, 
# 75 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
uint8_t **start, 
uint8_t **end, 
unsigned int minimum_size);
#line 99
static error_t /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__freeze(
# 42 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
fragment_pool_id_t arg_0x40bbeb88, 
# 99 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
const uint8_t *start, 
const uint8_t *end);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__StdControl__start(void );









static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__StdControl__stop(void );
# 65 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFraming.nc"
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__sendFrame(const uint8_t *data, 
unsigned int len, 
bool inhibit_accomp);
#line 111
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__releaseReceivedFrame(const uint8_t *buffer);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__uartStreamSendDone__runTask(void );
#line 75
static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__inputEngine_task__runTask(void );
# 73 "/opt/tinyos-2.x/tos/lib/ppp/HdlcUart.nc"
static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__receivedByte(uint8_t byte);
#line 60
static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__sendDone(error_t error);








static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__uartError(error_t error);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__Init__init(void );
# 47 "/opt/tinyos-2.x/tos/lib/ppp/GetSetOptions.nc"
static /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFramingOptions__type_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFramingOptions__get(void );
#line 42
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFramingOptions__set(const /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFramingOptions__type_t *options);
# 120 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__InputFramePool__available(unsigned int length);
# 57 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorage.nc"
static unsigned int /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__slotCount(void );
#line 54
static FragmentPoolSlot_t */*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__slots(void );
#line 51
static unsigned int /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__poolSize(void );
#line 48
static uint8_t */*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__pool(void );
# 57 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static bool LinkControlProtocolP__AddressControlFieldCompressionOption__isNegotiable(void );
#line 80
static uint8_t *LinkControlProtocolP__AddressControlFieldCompressionOption__appendRequest(uint8_t *dp, 
const uint8_t *dpe);
#line 66
static void LinkControlProtocolP__AddressControlFieldCompressionOption__setNegotiable(bool is_negotiable);
#line 138
static void LinkControlProtocolP__AddressControlFieldCompressionOption__processNakValue(const uint8_t *dp, 
const uint8_t *dpe);
#line 152
static void LinkControlProtocolP__AddressControlFieldCompressionOption__setRemote(const uint8_t *dp, 
const uint8_t *dpe);
#line 112
static void LinkControlProtocolP__AddressControlFieldCompressionOption__reset(void );
#line 125
static void LinkControlProtocolP__AddressControlFieldCompressionOption__setLocal(const uint8_t *dp, 
const uint8_t *dpe);
#line 101
static uint8_t *LinkControlProtocolP__AddressControlFieldCompressionOption__appendNakValue(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);
#line 47
static uint8_t LinkControlProtocolP__AddressControlFieldCompressionOption__getType(void );
#line 74
static uint8_t LinkControlProtocolP__AddressControlFieldCompressionOption__considerRequest(const uint8_t *dp, 
const uint8_t *dpe);
#line 57
static bool LinkControlProtocolP__AsyncControlCharacterMapOption__isNegotiable(void );
#line 80
static uint8_t *LinkControlProtocolP__AsyncControlCharacterMapOption__appendRequest(uint8_t *dp, 
const uint8_t *dpe);
#line 66
static void LinkControlProtocolP__AsyncControlCharacterMapOption__setNegotiable(bool is_negotiable);
#line 138
static void LinkControlProtocolP__AsyncControlCharacterMapOption__processNakValue(const uint8_t *dp, 
const uint8_t *dpe);
#line 152
static void LinkControlProtocolP__AsyncControlCharacterMapOption__setRemote(const uint8_t *dp, 
const uint8_t *dpe);
#line 112
static void LinkControlProtocolP__AsyncControlCharacterMapOption__reset(void );
#line 125
static void LinkControlProtocolP__AsyncControlCharacterMapOption__setLocal(const uint8_t *dp, 
const uint8_t *dpe);
#line 101
static uint8_t *LinkControlProtocolP__AsyncControlCharacterMapOption__appendNakValue(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);
#line 47
static uint8_t LinkControlProtocolP__AsyncControlCharacterMapOption__getType(void );
#line 74
static uint8_t LinkControlProtocolP__AsyncControlCharacterMapOption__considerRequest(const uint8_t *dp, 
const uint8_t *dpe);
# 54 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
static unsigned int LinkControlProtocolP__PppProtocol__getProtocol(void );
#line 77
static error_t LinkControlProtocolP__PppProtocol__process(const uint8_t *information, 
unsigned int information_length);
#line 94
static error_t LinkControlProtocolP__PppProtocol__rejectedByPeer(const uint8_t *data, 
const uint8_t *data_end);
# 55 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static uint8_t LinkControlProtocolP__ProtocolReject__getCode(void );
#line 74
static error_t LinkControlProtocolP__ProtocolReject__invoke(void *param, 
frame_key_t *keyp);
#line 59
static error_t LinkControlProtocolP__ProtocolReject__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
# 112 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static void LinkControlProtocolP__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);
# 57 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static bool LinkControlProtocolP__MaximumReceiveUnitOption__isNegotiable(void );
#line 80
static uint8_t *LinkControlProtocolP__MaximumReceiveUnitOption__appendRequest(uint8_t *dp, 
const uint8_t *dpe);
#line 66
static void LinkControlProtocolP__MaximumReceiveUnitOption__setNegotiable(bool is_negotiable);
#line 138
static void LinkControlProtocolP__MaximumReceiveUnitOption__processNakValue(const uint8_t *dp, 
const uint8_t *dpe);
#line 152
static void LinkControlProtocolP__MaximumReceiveUnitOption__setRemote(const uint8_t *dp, 
const uint8_t *dpe);
#line 112
static void LinkControlProtocolP__MaximumReceiveUnitOption__reset(void );
#line 125
static void LinkControlProtocolP__MaximumReceiveUnitOption__setLocal(const uint8_t *dp, 
const uint8_t *dpe);
#line 101
static uint8_t *LinkControlProtocolP__MaximumReceiveUnitOption__appendNakValue(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);
#line 47
static uint8_t LinkControlProtocolP__MaximumReceiveUnitOption__getType(void );
#line 74
static uint8_t LinkControlProtocolP__MaximumReceiveUnitOption__considerRequest(const uint8_t *dp, 
const uint8_t *dpe);
# 110 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static void LinkControlProtocolP__LcpAutomaton__thisLayerUp(void );
#line 128
static void LinkControlProtocolP__LcpAutomaton__thisLayerFinished(void );
#line 118
static void LinkControlProtocolP__LcpAutomaton__thisLayerDown(void );




static void LinkControlProtocolP__LcpAutomaton__thisLayerStarted(void );
#line 48
static void LinkControlProtocolP__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
# 44 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigure.nc"
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppConfigure__resetOptions(void );
#line 61
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppConfigure__setLocalOptions(uint8_t code, 
const uint8_t *dp, 
const uint8_t *dpe);
#line 76
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppConfigure__setRemoteOptions(const uint8_t *dp, 
const uint8_t *dpe);
# 55 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureRequest__getCode(void );
#line 74
static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureRequest__invoke(void *param, 
frame_key_t *keyp);
#line 59
static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureRequest__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
# 47 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__getType(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10);
# 80 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static uint8_t */*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__appendRequest(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 80 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
uint8_t *dp, 
const uint8_t *dpe);
#line 66
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__setNegotiable(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 66 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
bool is_negotiable);
#line 138
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__processNakValue(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 138 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
#line 152
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__setRemote(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 152 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
#line 112
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__reset(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10);
# 125 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__setLocal(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 125 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
#line 101
static uint8_t */*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__appendNakValue(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 101 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);
#line 57
static bool /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__isNegotiable(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10);
# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__considerRequest(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Init__init(void );
# 55 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureNak__getCode(void );



static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureNak__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
#line 55
static uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateRequest__getCode(void );



static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateRequest__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
# 112 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);
# 55 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureAck__getCode(void );



static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureAck__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
#line 55
static uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureReject__getCode(void );



static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureReject__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
#line 55
static uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateAck__getCode(void );
#line 74
static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateAck__invoke(void *param, 
frame_key_t *keyp);
#line 59
static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateAck__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
# 110 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerUp(void );
#line 128
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerFinished(void );
#line 118
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerDown(void );




static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerStarted(void );
#line 48
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
# 55 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static uint8_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__default__getCode(
# 46 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
uint8_t arg_0x40d3a768);
# 59 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__default__process(
# 46 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
uint8_t arg_0x40d3a768, 
# 59 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
# 112 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static void /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);
# 79 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinator.nc"
static error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__PppProtocolCodeCoordinator__rejectPacket(unsigned int rejected_protocol, 
const uint8_t *ip, 
const uint8_t *ipe, 
frame_key_t *keyp);
#line 58
static error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__PppProtocolCodeCoordinator__dispatch(const uint8_t *information, 
unsigned int information_length);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeAutomaton_task__runTask(void );
#line 75
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimerFired_task__runTask(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Init__init(void );
# 112 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__fired(void );
# 51 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static LcpAutomatonState_e /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__getState(void );
#line 65
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__down(void );









static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__open(void );
#line 101
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__signalEvent(LcpAutomatonEvent_e evt, 
void *params);
#line 58
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__up(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(
# 49 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x40de7088);
# 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(
# 49 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x40de7088, 
# 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
/*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type t0, /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type dt);
#line 66
static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(
# 49 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x40de7088, 
# 66 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
/*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type dt);






static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(
# 49 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x40de7088);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__fired(void );
# 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__startAt(/*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__size_type t0, /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__size_type dt);
#line 73
static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Init__init(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__overflow(void );
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__size_type /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__getNow(void );
#line 103
static void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__startAt(/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__size_type t0, /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__size_type dt);
#line 73
static void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__stop(void );




static void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__fired(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Counter__overflow(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void DefaultHdlcUartP__streamFeeder_task__runTask(void );
# 55 "/opt/tinyos-2.x/tos/lib/ppp/HdlcUart.nc"
static error_t DefaultHdlcUartP__HdlcUart__send(uint8_t *buf, 
uint16_t len);
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void DefaultHdlcUartP__UartStream__receivedByte(uint8_t byte);
#line 99
static void DefaultHdlcUartP__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void DefaultHdlcUartP__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t DefaultHdlcUartP__StdControl__start(void );









static error_t DefaultHdlcUartP__StdControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PppIpv6P__Init__init(void );
# 57 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static bool PppIpv6P__InterfaceIdentifierOption__isNegotiable(void );
#line 80
static uint8_t *PppIpv6P__InterfaceIdentifierOption__appendRequest(uint8_t *dp, 
const uint8_t *dpe);
#line 66
static void PppIpv6P__InterfaceIdentifierOption__setNegotiable(bool is_negotiable);
#line 138
static void PppIpv6P__InterfaceIdentifierOption__processNakValue(const uint8_t *dp, 
const uint8_t *dpe);
#line 152
static void PppIpv6P__InterfaceIdentifierOption__setRemote(const uint8_t *dp, 
const uint8_t *dpe);
#line 112
static void PppIpv6P__InterfaceIdentifierOption__reset(void );
#line 125
static void PppIpv6P__InterfaceIdentifierOption__setLocal(const uint8_t *dp, 
const uint8_t *dpe);
#line 101
static uint8_t *PppIpv6P__InterfaceIdentifierOption__appendNakValue(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);
#line 47
static uint8_t PppIpv6P__InterfaceIdentifierOption__getType(void );
#line 74
static uint8_t PppIpv6P__InterfaceIdentifierOption__considerRequest(const uint8_t *dp, 
const uint8_t *dpe);
# 54 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
static unsigned int PppIpv6P__PppControlProtocol__getProtocol(void );
#line 77
static error_t PppIpv6P__PppControlProtocol__process(const uint8_t *information, 
unsigned int information_length);
#line 94
static error_t PppIpv6P__PppControlProtocol__rejectedByPeer(const uint8_t *data, 
const uint8_t *data_end);
#line 54
static unsigned int PppIpv6P__PppProtocol__getProtocol(void );
#line 77
static error_t PppIpv6P__PppProtocol__process(const uint8_t *information, 
unsigned int information_length);
#line 94
static error_t PppIpv6P__PppProtocol__rejectedByPeer(const uint8_t *data, 
const uint8_t *data_end);
# 112 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static void PppIpv6P__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);
# 110 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static void PppIpv6P__LowerLcpAutomaton__thisLayerUp(void );
#line 128
static void PppIpv6P__LowerLcpAutomaton__thisLayerFinished(void );
#line 118
static void PppIpv6P__LowerLcpAutomaton__thisLayerDown(void );




static void PppIpv6P__LowerLcpAutomaton__thisLayerStarted(void );
#line 48
static void PppIpv6P__LowerLcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
#line 110
static void PppIpv6P__LcpAutomaton__thisLayerUp(void );
#line 128
static void PppIpv6P__LcpAutomaton__thisLayerFinished(void );
#line 118
static void PppIpv6P__LcpAutomaton__thisLayerDown(void );




static void PppIpv6P__LcpAutomaton__thisLayerStarted(void );
#line 48
static void PppIpv6P__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
# 44 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigure.nc"
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppConfigure__resetOptions(void );
#line 61
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppConfigure__setLocalOptions(uint8_t code, 
const uint8_t *dp, 
const uint8_t *dpe);
#line 76
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppConfigure__setRemoteOptions(const uint8_t *dp, 
const uint8_t *dpe);
# 55 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureRequest__getCode(void );
#line 74
static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureRequest__invoke(void *param, 
frame_key_t *keyp);
#line 59
static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureRequest__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
# 47 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__getType(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10);
# 80 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static uint8_t */*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__appendRequest(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 80 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
uint8_t *dp, 
const uint8_t *dpe);
#line 66
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__setNegotiable(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 66 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
bool is_negotiable);
#line 138
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__processNakValue(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 138 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
#line 152
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__setRemote(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 152 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
#line 112
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__reset(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10);
# 125 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__setLocal(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 125 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
#line 101
static uint8_t */*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__appendNakValue(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 101 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);
#line 57
static bool /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__isNegotiable(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10);
# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__considerRequest(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Init__init(void );
# 55 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureNak__getCode(void );



static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureNak__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
#line 55
static uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateRequest__getCode(void );



static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateRequest__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
# 112 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);
# 55 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureAck__getCode(void );



static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureAck__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
#line 55
static uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureReject__getCode(void );



static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureReject__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
#line 55
static uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateAck__getCode(void );
#line 74
static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateAck__invoke(void *param, 
frame_key_t *keyp);
#line 59
static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateAck__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
# 110 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerUp(void );
#line 128
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerFinished(void );
#line 118
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerDown(void );




static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerStarted(void );
#line 48
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
# 55 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static uint8_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__default__getCode(
# 46 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
uint8_t arg_0x40d3a768);
# 59 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__default__process(
# 46 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
uint8_t arg_0x40d3a768, 
# 59 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
# 112 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static void /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);
# 79 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinator.nc"
static error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__PppProtocolCodeCoordinator__rejectPacket(unsigned int rejected_protocol, 
const uint8_t *ip, 
const uint8_t *ipe, 
frame_key_t *keyp);
#line 58
static error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__PppProtocolCodeCoordinator__dispatch(const uint8_t *information, 
unsigned int information_length);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeAutomaton_task__runTask(void );
#line 75
static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimerFired_task__runTask(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Init__init(void );
# 112 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__fired(void );
# 65 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__down(void );









static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__open(void );
#line 101
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__signalEvent(LcpAutomatonEvent_e evt, 
void *params);
#line 58
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__up(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void PppPrintfP__sendBuffer_task__runTask(void );
# 54 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
static unsigned int PppPrintfP__PppProtocol__getProtocol(void );
#line 77
static error_t PppPrintfP__PppProtocol__process(const uint8_t *information, 
unsigned int information_length);
#line 94
static error_t PppPrintfP__PppProtocol__rejectedByPeer(const uint8_t *data, 
const uint8_t *data_end);
# 112 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static void PppPrintfP__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);
# 49 "/opt/tinyos-2.x/tos/lib/printf/Putchar.nc"
static int PppPrintfP__Putchar__putchar(int c);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PutcharP__Init__init(void );
# 75 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static error_t TestP__Ipv6LcpAutomaton__open(void );
# 43 "/opt/tinyos-2.x/tos/interfaces/Led.nc"
static void TestP__LinkDownLed__on(void );


static void TestP__LinkDownLed__off(void );
#line 43
static void TestP__LinkUpLed__on(void );


static void TestP__LinkUpLed__off(void );






static void TestP__PacketRxLed__toggle(void );
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t TestP__Ppp__start(void );
# 15 "TestP.nc"
static inline void TestP__Ipv6LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
static inline void TestP__Ipv6LcpAutomaton__thisLayerUp(void );
static inline void TestP__Ipv6LcpAutomaton__thisLayerDown(void );
static inline void TestP__Ipv6LcpAutomaton__thisLayerStarted(void );
static inline void TestP__Ipv6LcpAutomaton__thisLayerFinished(void );




static inline void TestP__PppIpv6__linkUp(void );





static inline void TestP__PppIpv6__linkDown(void );





static inline error_t TestP__PppIpv6__receive(const uint8_t *message, 
unsigned int len);






static inline void TestP__Boot__booted(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__BatteryWarning__init(void );
#line 62
static error_t PlatformP__Stm25pInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
#line 62
static error_t PlatformP__McuInit__init(void );
# 54 "/opt/tinyos-2.x/tos/platforms/ucmini/PlatformP.nc"
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
# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 135
enum MeasureClockC____nesc_unnamed4313 {
  MeasureClockC__MAGIC = 31250 / (16 / 16)
};
#line 150
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
#line 172
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 38 "/opt/tinyos-2.x/tos/chips/atm128rfa1/radio/RFA1RadioOffP.nc"
static inline error_t RFA1RadioOffP__RFA1RadioOff__init(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void Stm25pOffP__Toggle__makeOutput(void );
#line 40
static void Stm25pOffP__Toggle__set(void );
# 48 "/opt/tinyos-2.x/tos/platforms/ucmini/chips/stm25p/Stm25pOffP.nc"
static inline error_t Stm25pOffP__Stm25pOff__init(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline bool /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__get(uint8_t bit);
#line 49
static __inline bool /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__get(uint8_t bit);
static __inline void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__set(uint8_t bit);
static __inline void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__clr(uint8_t bit);


static __inline void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__makeInput(uint8_t bit);

static __inline void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__makeOutput(uint8_t bit);
static __inline bool /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__isOutput(uint8_t bit);
#line 50
static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(uint8_t bit);
static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__clr(uint8_t bit);
static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__toggle(uint8_t bit);



static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(uint8_t bit);
#line 51
static __inline void /*AtmegaGeneralIOC.PortF*/AtmegaGeneralIOP__5__Pin__clr(uint8_t bit);


static __inline void /*AtmegaGeneralIOC.PortF*/AtmegaGeneralIOP__5__Pin__makeInput(uint8_t bit);

static __inline void /*AtmegaGeneralIOC.PortF*/AtmegaGeneralIOP__5__Pin__makeOutput(uint8_t bit);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void BatterySwitchP__Read__readDone(error_t result, BatterySwitchP__Read__val_t val);
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void BatterySwitchP__GeneralIO__makeInput(void );


static bool BatterySwitchP__GeneralIO__isOutput(void );
#line 43
static bool BatterySwitchP__GeneralIO__get(void );


static void BatterySwitchP__GeneralIO__makeOutput(void );
#line 41
static void BatterySwitchP__GeneralIO__clr(void );
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BatterySwitchP__Timer__startOneShot(uint32_t dt);
# 11 "/opt/tinyos-2.x/tos/platforms/ucmini/BatterySwitchP.nc"
static inline error_t BatterySwitchP__Read__read(void );






static inline void BatterySwitchP__Timer__fired(void );
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
#line 437
static inline mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void );
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

enum /*CounterMilli32C.TransformCounterC*/TransformCounterC__0____nesc_unnamed4314 {

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

enum /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0____nesc_unnamed4315 {

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
enum /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4316 {
#line 74
  AlarmToTimerC__0__fired = 0U
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
uint8_t arg_0x4068c8f0);
#line 71
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4317 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 1U
};
#line 71
typedef int /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4318 {

  VirtualizeTimerC__0__NUM_TIMERS = 2U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4319 {

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
#line 159
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);
#line 204
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 119 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 81 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 54 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
static void Atm128AdcP__HplAtm128Adc__setChannel(uint8_t mux);
#line 108
static void Atm128AdcP__HplAtm128Adc__enableAdc(void );
#line 66
static void Atm128AdcP__HplAtm128Adc__setAdlar(bool adlarOn);
#line 176
static bool Atm128AdcP__HplAtm128Adc__cancel(void );
#line 112
static void Atm128AdcP__HplAtm128Adc__disableAdc(void );
#line 84
static uint8_t Atm128AdcP__HplAtm128Adc__getRef(void );
#line 121
static void Atm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 60
static uint8_t Atm128AdcP__HplAtm128Adc__getChannel(void );
#line 95
static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
#line 78
static void Atm128AdcP__HplAtm128Adc__setRef(uint8_t ref);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void );
# 104 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
#line 100
struct Atm128AdcP____nesc_unnamed4320 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 6;
} Atm128AdcP__f;
#line 104
#line 100
struct Atm128AdcP____nesc_unnamed4320 



Atm128AdcP__nextF;

static inline error_t Atm128AdcP__Init__init(void );
#line 126
static inline error_t Atm128AdcP__AsyncStdControl__start(void );




static inline error_t Atm128AdcP__AsyncStdControl__stop(void );









static __inline bool Atm128AdcP__isPrecise(uint8_t currentChannel, uint8_t currentRefVoltage, uint8_t channel, uint8_t refVoltage);



static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
#line 201
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 221
static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 253
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage);
# 182 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128AdcP__McuPowerState__update(void );
# 53 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static void HplAtm128AdcP__HplAtm128Adc__setChannel(uint8_t mux);







static uint8_t HplAtm128AdcP__HplAtm128Adc__getChannel(void );



static inline void HplAtm128AdcP__HplAtm128Adc__setAdlar(bool adlarOn);










static void HplAtm128AdcP__HplAtm128Adc__setRef(uint8_t ref);



static inline uint8_t HplAtm128AdcP__HplAtm128Adc__getRef(void );





static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );


static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );




static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x);



static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x);
#line 111
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );



static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );




static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 144
void __vector_29(void ) __attribute((signal))   ;








static inline mcu_power_t HplAtm128AdcP__McuPowerOverride__lowestState(void );







static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
# 49 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4321 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40764da8);
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x407621b8);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x407621b8);
# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40764380);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4322 {
#line 75
  ArbiterP__0__grantedTask = 2U
};
#line 75
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4323 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4324 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4325 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 111
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 190
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);
#line 216
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 62 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 69 "/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );









static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 66 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void AdcP__BusyWait__wait(AdcP__BusyWait__size_type dt);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void AdcP__Read__readDone(
# 48 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x407972e8, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__readDone(
# 49 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x407952a0, 
# 66 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(
# 53 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x407947c8);
# 25 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getChannel(
# 53 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x407947c8);
# 39 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getPrescaler(
# 53 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
uint8_t arg_0x407947c8);
# 70 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t AdcP__acquiredData__postTask(void );
# 104 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
enum AdcP____nesc_unnamed4326 {
#line 104
  AdcP__acquiredData = 3U
};
#line 104
typedef int AdcP____nesc_sillytask_acquiredData[AdcP__acquiredData];
#line 58
enum AdcP____nesc_unnamed4327 {
  AdcP__IDLE, 
  AdcP__ACQUIRE_DATA, 
  AdcP__ACQUIRE_DATA_NOW
};




uint8_t AdcP__state;
uint8_t AdcP__client;
uint16_t AdcP__val;

static inline uint8_t AdcP__channel(void );



static inline uint8_t AdcP__refVoltage(void );



static inline uint8_t AdcP__prescaler(void );



static void AdcP__sample(void );



static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient);








static inline error_t AdcP__Read__read(uint8_t c);







static inline void AdcP__acquiredData__runTask(void );




static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
#line 144
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c);




static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d);
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get(void );
# 58 "/opt/tinyos-2.x/tos/lib/timer/BusyWaitCounterC.nc"
enum /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0____nesc_unnamed4328 {

  BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE = (/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type )1 << (8 * sizeof(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type ) - 1)
};

static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type dt);
#line 83
static inline void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__size_type /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__get(void );






static bool /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__isOverflowPending(void );










static void /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__upper_count_type /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__m_upper;

enum /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1____nesc_unnamed4329 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 1, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__from_size_type ) - /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__from_size_type ) + 1, 



  TransformCounterC__1__OVERFLOW_MASK = /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__upper_count_type )2 << (/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__to_size_type /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__Counter__get(void );
#line 133
static inline void /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow(void );
# 72 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__setMode(uint8_t mode);
#line 53
static bool /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__test(void );
#line 40
static /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__size_type /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__get(void );
#line 61
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__start(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void );







static inline /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__size_type /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__get(void );






static inline void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__overflow(void );




static inline bool /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__isOverflowPending(void );
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
# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline uint16_t HplAtmRfa1Timer1P__Timer__get(void );
#line 73
void __vector_20(void ) __attribute((signal))   ;

static inline bool HplAtmRfa1Timer1P__Timer__test(void );





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
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(
# 24 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4083c408, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 55
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(
# 26 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4083a428);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40839300);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40839300);



static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);




static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client);


static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client);
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t VoltageP__calcTask__postTask(void );
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static error_t VoltageP__AdcRaw__read(void );
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void VoltageP__MeasureBridge__makeInput(void );

static void VoltageP__MeasureBridge__makeOutput(void );
#line 41
static void VoltageP__MeasureBridge__clr(void );
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void VoltageP__VoltageMilliVolts__readDone(error_t result, VoltageP__VoltageMilliVolts__val_t val);
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void VoltageP__Timer__startOneShot(uint32_t dt);
# 56 "/opt/tinyos-2.x/tos/platforms/ucmini/VoltageP.nc"
enum VoltageP____nesc_unnamed4330 {
#line 56
  VoltageP__calcTask = 4U
};
#line 56
typedef int VoltageP____nesc_sillytask_calcTask[VoltageP__calcTask];
#line 52
uint16_t VoltageP__rawAdc;
uint16_t VoltageP__milliVolts;
error_t VoltageP__err;



static inline error_t VoltageP__VoltageMilliVolts__read(void );








static inline void VoltageP__Timer__fired(void );









static inline uint8_t VoltageP__Atm128AdcConfig__getChannel(void );




static inline uint8_t VoltageP__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t VoltageP__Atm128AdcConfig__getPrescaler(void );




static inline void VoltageP__AdcRaw__readDone(error_t result, uint16_t val);










static inline void VoltageP__calcTask__runTask(void );
# 49 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4331 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__requested(
# 55 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40764da8);
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x407621b8);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x407621b8);
# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue(void );
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void );
#line 46
static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void );
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Resource__granted(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40764380);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4332 {
#line 75
  ArbiterP__1__grantedTask = 5U
};
#line 75
typedef int /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1____nesc_sillytask_grantedTask[/*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__grantedTask];
#line 67
enum /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4333 {
#line 67
  ArbiterP__1__RES_CONTROLLED, ArbiterP__1__RES_GRANTING, ArbiterP__1__RES_IMM_GRANTING, ArbiterP__1__RES_BUSY
};
#line 68
enum /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4334 {
#line 68
  ArbiterP__1__default_owner_id = 1U
};
#line 69
enum /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4335 {
#line 69
  ArbiterP__1__NO_RES = 0xFF
};
uint8_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__state = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
uint8_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__resId = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__default_owner_id;
uint8_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__reqResId;



static inline error_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Resource__request(uint8_t id);
#line 111
static inline error_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Resource__release(uint8_t id);
#line 133
static inline error_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 166
static inline uint8_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void );
#line 190
static inline void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
#line 204
static inline void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id);



static inline void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void );

static inline void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested(void );





static inline void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id);

static inline void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static void /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__readDone(
# 19 "/opt/tinyos-2.x/tos/system/MultiplexedReadC.nc"
uint8_t arg_0x4087a930, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__val_t val);
#line 55
static error_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Service__read(void );
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Resource__release(
# 22 "/opt/tinyos-2.x/tos/system/MultiplexedReadC.nc"
uint8_t arg_0x40875558);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Resource__request(
# 22 "/opt/tinyos-2.x/tos/system/MultiplexedReadC.nc"
uint8_t arg_0x40875558);
# 98 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static uint8_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__ArbiterInfo__userId(void );
# 27 "/opt/tinyos-2.x/tos/system/MultiplexedReadC.nc"
static inline error_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__read(uint8_t client);



static inline void /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Resource__granted(uint8_t client);



static void /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Service__readDone(error_t result, /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__width_t data);










static inline void /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__width_t data);
# 66 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void BatteryWarningP__BusyWait__wait(BatteryWarningP__BusyWait__size_type dt);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static error_t BatteryWarningP__Voltage__read(void );
#line 55
static error_t BatteryWarningP__Switch__read(void );
# 69 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
static void BatteryWarningP__Leds__led0Toggle(void );




static void BatteryWarningP__Leds__led1On(void );










static void BatteryWarningP__Leds__led1Toggle(void );
#line 102
static void BatteryWarningP__Leds__led2Toggle(void );
#line 119
static void BatteryWarningP__Leds__led3Toggle(void );
#line 58
static void BatteryWarningP__Leds__led0On(void );
#line 149
static void BatteryWarningP__Leds__set(uint8_t val);
# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool BatteryWarningP__GeneralIO__get(void );
# 17 "/opt/tinyos-2.x/tos/platforms/ucmini/BatteryWarningP.nc"
uint8_t BatteryWarningP__switchState;
static inline error_t BatteryWarningP__Init__init(void );



static void BatteryWarningP__Switch__readDone(error_t err, uint8_t newSwitchState);








static __inline void BatteryWarningP__blinkLeds(uint8_t count, bool inner);
#line 52
static inline void BatteryWarningP__Voltage__readDone(error_t err, uint16_t voltage);
# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );
static void LedsP__Led3__toggle(void );



static void LedsP__Led3__makeOutput(void );
#line 40
static void LedsP__Led3__set(void );
static void LedsP__Led3__clr(void );
static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );
static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 57 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 78
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );




static inline void LedsP__Leds__led0Toggle(void );




static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );




static inline void LedsP__Leds__led1Toggle(void );




static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );




static inline void LedsP__Leds__led2Toggle(void );




static inline void LedsP__Leds__led3On(void );




static inline void LedsP__Leds__led3Off(void );




static inline void LedsP__Leds__led3Toggle(void );
#line 158
static void LedsP__Leds__set(uint8_t val);
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
uint8_t arg_0x408e13f0);


uint8_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__isFalling;


static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableRisingEdge(uint8_t pin);








static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableFallingEdge(uint8_t pin);
#line 88
static inline void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__HplAtmegaPinChange__fired(void );
#line 113
static inline void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__default__fired(uint8_t pin);
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
# 46 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialAutoControlP.nc"
enum SerialAutoControlP____nesc_unnamed4336 {
#line 46
  SerialAutoControlP__turnOn = 6U
};
#line 46
typedef int SerialAutoControlP____nesc_sillytask_turnOn[SerialAutoControlP__turnOn];










enum SerialAutoControlP____nesc_unnamed4337 {
#line 57
  SerialAutoControlP__turnOff = 7U
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
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x4091ce00, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x409347d8, 
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
enum SerialP____nesc_unnamed4338 {
#line 191
  SerialP__RunTx = 8U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4339 {
#line 322
  SerialP__startDoneTask = 9U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4340 {
#line 332
  SerialP__stopDoneTask = 10U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4341 {
#line 341
  SerialP__defaultSerialFlushTask = 11U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4342 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4343 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4344 {
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
typedef enum SerialP____nesc_unnamed4345 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4346 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4347 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4348 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4349 {
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
uart_id_t arg_0x40a01068, 
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
uart_id_t arg_0x40a04a00, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a01b68, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a01b68);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40a01b68, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4350 {
#line 158
  SerialDispatcherP__0__signalSendDone = 12U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4351 {
#line 275
  SerialDispatcherP__0__receiveTask = 13U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4352 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4353 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4354 {
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
typedef struct HdlcTranslateC____nesc_unnamed4355 {
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
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__Init__init(void );







static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 216
static inline void /*Atm128Uart1C.UartP*/Atm128UartP__0__Counter__overflow(void );
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
#line 216
void __vector_25(void ) __attribute((signal))   ;





void __vector_27(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 246
static inline error_t HplAtm128UartP__Uart1TxControl__start(void );






static inline error_t HplAtm128UartP__Uart1TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart1RxControl__start(void );





static error_t HplAtm128UartP__Uart1RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart1__enableTxIntr(void );







static inline error_t HplAtm128UartP__HplUart1__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart1__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart1__disableRxIntr(void );
#line 306
static void HplAtm128UartP__HplUart1__tx(uint8_t data);






void __vector_36(void ) __attribute((signal))   ;




void __vector_38(void ) __attribute((interrupt))   ;



static inline mcu_power_t HplAtm128UartP__McuPowerOverride__lowestState(void );






static inline void HplAtm128UartP__HplUart0__default__txDone(void );
static inline void HplAtm128UartP__HplUart0__default__rxDone(uint8_t data);
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.TransformCounterC*/TransformCounterC__2__upper_count_type /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__m_upper;

enum /*CounterMicro32C.TransformCounterC*/TransformCounterC__2____nesc_unnamed4356 {

  TransformCounterC__2__LOW_SHIFT_RIGHT = 1, 
  TransformCounterC__2__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.TransformCounterC*/TransformCounterC__2__from_size_type ) - /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__LOW_SHIFT_RIGHT, 
  TransformCounterC__2__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.TransformCounterC*/TransformCounterC__2__to_size_type ) - 8 * sizeof(/*CounterMicro32C.TransformCounterC*/TransformCounterC__2__from_size_type ) + 1, 



  TransformCounterC__2__OVERFLOW_MASK = /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__NUM_UPPER_BITS ? ((/*CounterMicro32C.TransformCounterC*/TransformCounterC__2__upper_count_type )2 << (/*CounterMicro32C.TransformCounterC*/TransformCounterC__2__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMcu32C.TransformCounterC*/TransformCounterC__3__upper_count_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__m_upper;

enum /*CounterMcu32C.TransformCounterC*/TransformCounterC__3____nesc_unnamed4357 {

  TransformCounterC__3__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__3__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__3__from_size_type ) - /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__LOW_SHIFT_RIGHT, 
  TransformCounterC__3__NUM_UPPER_BITS = 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__3__to_size_type ) - 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__3__from_size_type ) + 0, 



  TransformCounterC__3__OVERFLOW_MASK = /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__NUM_UPPER_BITS ? ((/*CounterMcu32C.TransformCounterC*/TransformCounterC__3__upper_count_type )2 << (/*CounterMcu32C.TransformCounterC*/TransformCounterC__3__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__CounterFrom__overflow(void );
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t SerialResetP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialResetP__sendAck__postTask(void );
# 54 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialResetP.nc"
enum SerialResetP____nesc_unnamed4358 {
#line 54
  SerialResetP__sendAck = 14U
};
#line 54
typedef int SerialResetP____nesc_sillytask_sendAck[SerialResetP__sendAck];
#line 52
message_t *SerialResetP__sendMsg;

static inline void SerialResetP__sendAck__runTask(void );
#line 66
static inline void SerialResetP__Send__sendDone(message_t *msg, error_t error);
#line 82
static inline message_t *SerialResetP__Receive__receive(message_t *msg, void *payload, uint8_t len);
#line 95
static inline uint8_t SerialResetP__SerialPacketInfo__offset(void );




static inline uint8_t SerialResetP__SerialPacketInfo__dataLinkLength(message_t *msg, uint8_t upperLen);




static inline uint8_t SerialResetP__SerialPacketInfo__upperLength(message_t *msg, uint8_t dataLinkLen);
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
uint8_t arg_0x40421e80);
# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4359 {

  SchedulerBasicP__NUM_TASKS = 27U, 
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
# 63 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
static void PlatformLedP__Leds__led0Off(void );





static void PlatformLedP__Leds__led0Toggle(void );




static void PlatformLedP__Leds__led1On(void );










static void PlatformLedP__Leds__led1Toggle(void );
#line 113
static void PlatformLedP__Leds__led3Off(void );
#line 102
static void PlatformLedP__Leds__led2Toggle(void );
#line 79
static void PlatformLedP__Leds__led1Off(void );
#line 119
static void PlatformLedP__Leds__led3Toggle(void );
#line 108
static void PlatformLedP__Leds__led3On(void );
#line 58
static void PlatformLedP__Leds__led0On(void );
#line 96
static void PlatformLedP__Leds__led2Off(void );
#line 91
static void PlatformLedP__Leds__led2On(void );
# 47 "/opt/tinyos-2.x/tos/platforms/ucmini/PlatformLedP.nc"
static void PlatformLedP__Led__on(uint8_t led_id);









static void PlatformLedP__Led__off(uint8_t led_id);
#line 76
static inline void PlatformLedP__Led__toggle(uint8_t led_id);
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t PppDaemonP__PppControl__start(void );
# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static error_t PppDaemonP__ProtocolReject__invoke(void *param, 
frame_key_t *keyp);
# 65 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static error_t PppDaemonP__LcpAutomaton__down(void );









static error_t PppDaemonP__LcpAutomaton__open(void );
#line 58
static error_t PppDaemonP__LcpAutomaton__up(void );
# 44 "/opt/tinyos-2.x/tos/lib/ppp/PppDaemonP.nc"
static inline error_t PppDaemonP__SplitControl__start(void );








static inline void PppDaemonP__PppControl__startDone(error_t rc);







static inline void PppDaemonP__PppControl__stopDone(error_t rc);
#line 76
static inline error_t PppDaemonP__PppProtocolReject__process(unsigned int protocol, 
const uint8_t *information, 
unsigned int length);









static inline void PppDaemonP__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
static inline void PppDaemonP__LcpAutomaton__thisLayerUp(void );
static inline void PppDaemonP__LcpAutomaton__thisLayerDown(void );
static inline void PppDaemonP__LcpAutomaton__thisLayerStarted(void );
static inline void PppDaemonP__LcpAutomaton__thisLayerFinished(void );
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void PppP__SplitControl__startDone(error_t error);
#line 138
static void PppP__SplitControl__stopDone(error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t PppP__processError_task__postTask(void );
# 110 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
static error_t PppP__TransmitFramePool__release(const uint8_t *start);
#line 75
static error_t PppP__TransmitFramePool__request(uint8_t **start, 
uint8_t **end, 
unsigned int minimum_size);
#line 99
static error_t PppP__TransmitFramePool__freeze(const uint8_t *start, 
const uint8_t *end);
# 54 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
static unsigned int PppP__PppProtocol__getProtocol(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
uint16_t arg_0x40b58ca0);
# 77 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
static error_t PppP__PppProtocol__process(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
uint16_t arg_0x40b58ca0, 
# 77 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
const uint8_t *information, 
unsigned int information_length);
#line 94
static error_t PppP__PppProtocol__rejectedByPeer(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
uint16_t arg_0x40b58ca0, 
# 94 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
const uint8_t *data, 
const uint8_t *data_end);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t PppP__processFrame_task__postTask(void );
#line 67
static error_t PppP__controlEngine_task__postTask(void );
# 51 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolReject.nc"
static error_t PppP__PppProtocolReject__process(unsigned int protocol, 
const uint8_t *information, 
unsigned int length);
# 112 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static void PppP__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t PppP__HdlcControl__start(void );









static error_t PppP__HdlcControl__stop(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t PppP__transmitEngine_task__postTask(void );
# 65 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFraming.nc"
static error_t PppP__HdlcFraming__sendFrame(const uint8_t *data, 
unsigned int len, 
bool inhibit_accomp);
#line 111
static error_t PppP__HdlcFraming__releaseReceivedFrame(const uint8_t *buffer);
# 93 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
enum PppP____nesc_unnamed4360 {
#line 93
  PppP__controlEngine_task = 15U
};
#line 93
typedef int PppP____nesc_sillytask_controlEngine_task[PppP__controlEngine_task];
#line 174
enum PppP____nesc_unnamed4361 {
#line 174
  PppP__transmitEngine_task = 16U
};
#line 174
typedef int PppP____nesc_sillytask_transmitEngine_task[PppP__transmitEngine_task];
#line 354
enum PppP____nesc_unnamed4362 {
#line 354
  PppP__processFrame_task = 17U
};
#line 354
typedef int PppP____nesc_sillytask_processFrame_task[PppP__processFrame_task];
#line 410
enum PppP____nesc_unnamed4363 {
#line 410
  PppP__processError_task = 18U
};
#line 410
typedef int PppP____nesc_sillytask_processError_task[PppP__processError_task];
#line 53
PppOptions_t PppP__options = { .txProtocolFieldCompression = FALSE, 
.rxProtocolFieldCompression = FALSE, 
.txMaximumReceiveUnit = 1280, 
.rxMaximumReceiveUnit = 1280 };

static error_t PppP__PppOptions__set(const PppOptions_t *new_options);
#line 74
static inline PppOptions_t PppP__PppOptions__get(void );

static inline error_t PppP__PppRejectedProtocol__rejected(uint16_t protocol, 
const uint8_t *data, 
const uint8_t *data_end);





enum PppP____nesc_unnamed4364 {
  PppP__CS_stopped, 
  PppP__CS_starting, 
  PppP__CS_started, 
  PppP__CS_stopping
};
error_t PppP__controlResult_;
uint8_t PppP__controlState_;

static inline void PppP__controlEngine_task__runTask(void );










enum PppP____nesc_unnamed4365 {

  PppP__TFS_unused, 


  PppP__TFS_filling, 



  PppP__TFS_fixed, 



  PppP__TFS_queued, 


  PppP__TFS_transmitting, 



  PppP__TFS_releasable, 

  PppP__TFS_STATE_MASK = 0x0f, 



  PppP__TFS_INHIBIT_COMPRESSION = 0x80
};




#line 132
typedef struct PppP__HdlcTxFrame_t {
  uint8_t *start;
  uint8_t *end;
  uint8_t frame_state;
} PppP__HdlcTxFrame_t;



PppP__HdlcTxFrame_t PppP__txFrames_[4];
static const PppP__HdlcTxFrame_t *PppP__txFramesEnd_ = PppP__txFrames_ + 4;
PppP__HdlcTxFrame_t *PppP__queuedTxFrame_[4];
uint8_t PppP__queuedTxFrameIdx_;

PppP__HdlcTxFrame_t *PppP__activeTxFrame_;



HdlcError_e PppP__inFrameError__;


unsigned int PppP__inFrameDropped__;
#line 165
static inline void PppP__TransmitFramePool__available(unsigned int length);










static void PppP__releaseTxFrame_(PppP__HdlcTxFrame_t *fp, 
error_t rc, 
bool post_done);
#line 191
static inline void PppP__transmitEngine_task__runTask(void );
#line 220
static uint8_t *PppP__Ppp__getOutputFrame(unsigned int protocol, 
const uint8_t **frame_endp, 
bool inhibit_compression, 
frame_key_t *keyp);
#line 271
static PppP__HdlcTxFrame_t *PppP__findTxFrame_(frame_key_t key);
#line 284
static error_t PppP__Ppp__fixOutputFrameLength(frame_key_t key, 
const uint8_t *frame_end);
#line 307
static error_t PppP__Ppp__sendOutputFrame(frame_key_t key);
#line 324
static error_t PppP__Ppp__releaseOutputFrame(frame_key_t key);
#line 336
static inline void PppP__HdlcFraming__sendDone(const uint8_t *data, 
unsigned int len, 
error_t err);
#line 350
#line 347
typedef struct PppP__Frame_t {
  const uint8_t *start;
  const uint8_t *end;
} PppP__Frame_t;
PppP__Frame_t PppP__readyFrame__[4];
uint8_t PppP__readyFrameIdx__;

static inline void PppP__processFrame_task__runTask(void );
#line 410
static inline void PppP__processError_task__runTask(void );
#line 423
static inline void PppP__initializeOptions_(void );







static inline error_t PppP__SplitControl__start(void );
#line 454
static inline void PppP__HdlcFraming__receivedDelimiter(void );

static inline void PppP__HdlcFraming__receivedFrame(const uint8_t *data, 
unsigned int len);









static inline void PppP__HdlcFraming__receptionError(HdlcError_e code);










static inline unsigned int PppP__PppProtocol__default__getProtocol(uint16_t protocol);



static inline error_t PppP__PppProtocol__default__process(uint16_t protocol, const uint8_t *information, 
unsigned int information_length);

static inline error_t PppP__PppProtocol__default__rejectedByPeer(uint16_t protocol, const uint8_t *data, 
const uint8_t *data_end);
# 48 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorageP.nc"
uint16_t /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__pool[(1 + 1282) / 2];

FragmentPoolSlot_t /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__slots[4];


static inline uint8_t */*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__pool(void );
static inline unsigned int /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__poolSize(void );
static inline FragmentPoolSlot_t */*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__slots(void );
static inline unsigned int /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__slotCount(void );
# 57 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorage.nc"
static unsigned int /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__slotCount(
# 48 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
fragment_pool_id_t arg_0x40bbb7f8);
# 54 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorage.nc"
static FragmentPoolSlot_t */*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__slots(
# 48 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
fragment_pool_id_t arg_0x40bbb7f8);
# 51 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorage.nc"
static unsigned int /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__poolSize(
# 48 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
fragment_pool_id_t arg_0x40bbb7f8);
# 48 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorage.nc"
static uint8_t */*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__pool(
# 48 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
fragment_pool_id_t arg_0x40bbb7f8);
# 120 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
static void /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__available(
# 42 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
fragment_pool_id_t arg_0x40bbeb88, 
# 120 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
unsigned int length);
# 58 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
#line 53
typedef struct /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool_t {

  FragmentPoolSlot_t *slots;

  unsigned int slot_count;
} /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool_t;



/*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool_t /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__pools__[2];









bool /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__initialized__;
static void /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__initialize__(void );
#line 95
static inline error_t /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__Init__init(void );





static inline uint8_t */*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__pool(fragment_pool_id_t pid);
static inline unsigned int /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__poolSize(fragment_pool_id_t pid);
static inline FragmentPoolSlot_t */*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__slots(fragment_pool_id_t pid);
static inline unsigned int /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__slotCount(fragment_pool_id_t pid);

static inline void /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__default__available(fragment_pool_id_t pid, unsigned int length);
#line 129
static error_t /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__request(fragment_pool_id_t pid, uint8_t **start, 
uint8_t **end, 
unsigned int minimum_size);
#line 176
static error_t /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__freeze(fragment_pool_id_t pid, const uint8_t *start, 
const uint8_t *end);
#line 271
static error_t /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__release(fragment_pool_id_t pid, const uint8_t *start);
# 94 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFraming.nc"
static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__receivedFrame(const uint8_t *data, 
unsigned int len);
#line 120
static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__receivedDelimiter(void );
#line 81
static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__sendDone(const uint8_t *data, 
unsigned int len, 
error_t err);
#line 133
static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__receptionError(HdlcError_e code);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__uartStreamSendDone__postTask(void );
#line 67
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__inputEngine_task__postTask(void );
# 55 "/opt/tinyos-2.x/tos/lib/ppp/HdlcUart.nc"
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__send(uint8_t *buf, 
uint16_t len);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__UartControl__start(void );









static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__UartControl__stop(void );
# 110 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__InputFramePool__release(const uint8_t *start);
#line 75
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__InputFramePool__request(uint8_t **start, 
uint8_t **end, 
unsigned int minimum_size);
#line 99
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__InputFramePool__freeze(const uint8_t *start, 
const uint8_t *end);
# 134 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
enum /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0____nesc_unnamed4366 {
#line 134
  HdlcFramingP__0__inputEngine_task = 19U
};
#line 134
typedef int /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0____nesc_sillytask_inputEngine_task[/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__inputEngine_task];
#line 514
enum /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0____nesc_unnamed4367 {
#line 514
  HdlcFramingP__0__uartStreamSendDone = 20U
};
#line 514
typedef int /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0____nesc_sillytask_uartStreamSendDone[/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__uartStreamSendDone];
# 6 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFraming_.h"
enum /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0____nesc_unnamed4368 {

  HdlcFramingP__0__HDLC_AllStationsAddress = 0xff, 

  HdlcFramingP__0__HDLC_ControlFieldValue = 0x03, 

  HdlcFramingP__0__HDLC_FlagSequence = 0x7e, 

  HdlcFramingP__0__HDLC_ControlEscape = 0x7d, 

  HdlcFramingP__0__HDLC_ControlModifier = 0x20
};

enum /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0____nesc_unnamed4369 {

  HdlcFramingP__0__FCS_LENGTH = 2, 


  HdlcFramingP__0__MinimumUsefulBufferLength = 16 + /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__FCS_LENGTH
};
#line 45
#line 29
typedef enum /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RXState_e {


  HdlcFramingP__0__RX_unsynchronized, 



  HdlcFramingP__0__RX_atAddress, 

  HdlcFramingP__0__RX_atControlField, 


  HdlcFramingP__0__RX_receive, 


  HdlcFramingP__0__RX_escaped
} /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RXState_e;









#line 48
typedef enum /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__TXState_e {

  HdlcFramingP__0__TX_idle, 

  HdlcFramingP__0__TX_active, 

  HdlcFramingP__0__TX_sendCrc
} /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__TXState_e;
#line 76
#line 57
typedef enum /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__ReceiveFrameState_e {




  HdlcFramingP__0__RFS_unused, 


  HdlcFramingP__0__RFS_receiving, 



  HdlcFramingP__0__RFS_received, 


  HdlcFramingP__0__RFS_processing, 


  HdlcFramingP__0__RFS_releasable
} /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__ReceiveFrameState_e;






#line 79
typedef struct /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcRxFrame_t {
  uint8_t *start;
  uint8_t *end;
  uint8_t frame_state;
} /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcRxFrame_t;
# 60 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static inline error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__Init__init(void );







HdlcFramingOptions_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__options__ = { .txSuppressAddressControl = FALSE, 
.rxSuppressAddressControl = FALSE, 
.txAsyncControlCharacterMap = ~0UL, 
.rxAsyncControlCharacterMap = ~0UL };


uint8_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__;



uint8_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxEscapedState_;




uint8_t */*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxBuffer__;

int /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxBufferLength__;


int /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxIndex__;

uint8_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txState_;
#line 102
uint8_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txTemporary_[2 * /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__FCS_LENGTH + 1];



const uint8_t */*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txStart_;




const uint8_t */*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txPtr_;


const uint8_t */*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txEnd_;



error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__sendDoneError__;



/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcRxFrame_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxFrames_[4];
static const /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcRxFrame_t */*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxFramesEnd_ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxFrames_ + 4;



/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcRxFrame_t */*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxActiveFrame__;



/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcRxFrame_t */*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__readyFrame__[4];
uint8_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__readyFrameIdx__;










static uint16_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__fcs16_update(uint16_t crc, uint8_t data);








enum /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0____nesc_unnamed4370 {

  HdlcFramingP__0__FCS16_Initial = 0xFFFF, 


  HdlcFramingP__0__FCS16_Good = 0xF0B8
};

uint16_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxCrc__;

uint16_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txCrc_;


static bool /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__mustEscape(uint8_t c, uint32_t accm);






static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFramingOptions__set(const HdlcFramingOptions_t *new_options);
#line 190
static HdlcFramingOptions_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFramingOptions__get(void );

static inline error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__sendFrame(const uint8_t *data, 
unsigned int len, 
bool inhibit_accomp);
#line 227
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__startNewFrame_async__(void );
#line 257
static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__InputFramePool__available(unsigned int length);








static inline void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__completeFrame_async__(void );
#line 299
static inline error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__releaseReceivedFrame(const uint8_t *buffer);
#line 317
static inline void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__inputEngine_task__runTask(void );
#line 364
static inline void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__receivedByte(uint8_t byte);
#line 514
static inline void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__uartStreamSendDone__runTask(void );
#line 610
static inline void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__uartError(error_t error);



static inline void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__sendDone(error_t error);
#line 626
static inline error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__StdControl__start(void );
#line 639
static inline error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__StdControl__stop(void );
# 48 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorageP.nc"
uint16_t /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__pool[(1 + 1284) / 2];

FragmentPoolSlot_t /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__slots[5];


static inline uint8_t */*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__pool(void );
static inline unsigned int /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__poolSize(void );
static inline FragmentPoolSlot_t */*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__slots(void );
static inline unsigned int /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__slotCount(void );
# 49 "/opt/tinyos-2.x/tos/lib/ppp/PppRejectedProtocol.nc"
static error_t LinkControlProtocolP__PppRejectedProtocol__rejected(uint16_t protocol, 
const uint8_t *data, 
const uint8_t *data_end);
# 47 "/opt/tinyos-2.x/tos/lib/ppp/GetSetOptions.nc"
static LinkControlProtocolP__HdlcFramingOptions__type_t LinkControlProtocolP__HdlcFramingOptions__get(void );
#line 42
static error_t LinkControlProtocolP__HdlcFramingOptions__set(const LinkControlProtocolP__HdlcFramingOptions__type_t *options);




static LinkControlProtocolP__PppOptions__type_t LinkControlProtocolP__PppOptions__get(void );
#line 42
static error_t LinkControlProtocolP__PppOptions__set(const LinkControlProtocolP__PppOptions__type_t *options);
# 79 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinator.nc"
static error_t LinkControlProtocolP__PppProtocolCodeCoordinator__rejectPacket(unsigned int rejected_protocol, 
const uint8_t *ip, 
const uint8_t *ipe, 
frame_key_t *keyp);
#line 58
static error_t LinkControlProtocolP__PppProtocolCodeCoordinator__dispatch(const uint8_t *information, 
unsigned int information_length);
# 51 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static LcpAutomatonState_e LinkControlProtocolP__LcpAutomaton__getState(void );
# 67 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
#line 62
struct LinkControlProtocolP____nesc_unnamed4371 {
  uint8_t accomp : 1;
  uint8_t pcomp : 1;
  uint8_t mru : 1;
  uint8_t accm : 1;
} LinkControlProtocolP__isNegotiable = { .accomp = TRUE, 
.pcomp = TRUE, 
.mru = TRUE, 
.accm = TRUE };

static inline void LinkControlProtocolP__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t err);

static inline unsigned int LinkControlProtocolP__PppProtocol__getProtocol(void );

static inline error_t LinkControlProtocolP__PppProtocol__rejectedByPeer(const uint8_t *data, 
const uint8_t *data_end);







static inline void LinkControlProtocolP__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
static inline void LinkControlProtocolP__LcpAutomaton__thisLayerUp(void );
static inline void LinkControlProtocolP__LcpAutomaton__thisLayerDown(void );
static inline void LinkControlProtocolP__LcpAutomaton__thisLayerStarted(void );
static inline void LinkControlProtocolP__LcpAutomaton__thisLayerFinished(void );









static inline uint8_t LinkControlProtocolP__AddressControlFieldCompressionOption__getType(void );
static inline bool LinkControlProtocolP__AddressControlFieldCompressionOption__isNegotiable(void );
static inline void LinkControlProtocolP__AddressControlFieldCompressionOption__setNegotiable(bool is_negotiable);
static inline uint8_t LinkControlProtocolP__AddressControlFieldCompressionOption__considerRequest(const uint8_t *dp, 
const uint8_t *dpe);



static inline uint8_t *LinkControlProtocolP__AddressControlFieldCompressionOption__appendRequest(uint8_t *dp, 
const uint8_t *dpe);

static inline uint8_t *LinkControlProtocolP__AddressControlFieldCompressionOption__appendNakValue(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);

static void LinkControlProtocolP__AddressControlFieldCompressionOption__setRemote(const uint8_t *dp, 
const uint8_t *dpe);









static void LinkControlProtocolP__AddressControlFieldCompressionOption__setLocal(const uint8_t *dp, 
const uint8_t *dpe);








static inline void LinkControlProtocolP__AddressControlFieldCompressionOption__processNakValue(const uint8_t *dp, 
const uint8_t *dpe);



static inline void LinkControlProtocolP__AddressControlFieldCompressionOption__reset(void );
#line 208
enum LinkControlProtocolP____nesc_unnamed4372 {
  LinkControlProtocolP__PPP_DefaultMRU = 1500
};
uint16_t LinkControlProtocolP__proposedMRU_ = 1280;







static inline uint8_t LinkControlProtocolP__MaximumReceiveUnitOption__getType(void );
static inline bool LinkControlProtocolP__MaximumReceiveUnitOption__isNegotiable(void );




static inline void LinkControlProtocolP__MaximumReceiveUnitOption__setNegotiable(bool is_negotiable);
static inline uint8_t LinkControlProtocolP__MaximumReceiveUnitOption__considerRequest(const uint8_t *dp, 
const uint8_t *dpe);
#line 240
static inline uint8_t *LinkControlProtocolP__MaximumReceiveUnitOption__appendRequest(uint8_t *dp, 
const uint8_t *dpe);








static inline uint8_t *LinkControlProtocolP__MaximumReceiveUnitOption__appendNakValue(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);








static void LinkControlProtocolP__MaximumReceiveUnitOption__setRemote(const uint8_t *dp, 
const uint8_t *dpe);
#line 279
static void LinkControlProtocolP__MaximumReceiveUnitOption__setLocal(const uint8_t *dp, 
const uint8_t *dpe);
#line 296
static inline void LinkControlProtocolP__MaximumReceiveUnitOption__processNakValue(const uint8_t *dp, 
const uint8_t *dpe);



static inline void LinkControlProtocolP__MaximumReceiveUnitOption__reset(void );








enum LinkControlProtocolP____nesc_unnamed4373 {
  LinkControlProtocolP__HDLC_DefaultACCM = ~0UL, 
  LinkControlProtocolP__HDLC_PreferredACCM = 0UL
};
uint32_t LinkControlProtocolP__proposedACCM_;
#line 332
static inline uint8_t LinkControlProtocolP__AsyncControlCharacterMapOption__getType(void );
static inline bool LinkControlProtocolP__AsyncControlCharacterMapOption__isNegotiable(void );



static inline void LinkControlProtocolP__AsyncControlCharacterMapOption__setNegotiable(bool is_negotiable);
static inline uint8_t LinkControlProtocolP__AsyncControlCharacterMapOption__considerRequest(const uint8_t *dp, 
const uint8_t *dpe);



static inline uint8_t *LinkControlProtocolP__AsyncControlCharacterMapOption__appendRequest(uint8_t *dp, 
const uint8_t *dpe);








static inline uint8_t *LinkControlProtocolP__AsyncControlCharacterMapOption__appendNakValue(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);








static void LinkControlProtocolP__AsyncControlCharacterMapOption__setRemote(const uint8_t *dp, 
const uint8_t *dpe);
#line 382
static void LinkControlProtocolP__AsyncControlCharacterMapOption__setLocal(const uint8_t *dp, 
const uint8_t *dpe);
#line 399
static inline void LinkControlProtocolP__AsyncControlCharacterMapOption__processNakValue(const uint8_t *dp, 
const uint8_t *dpe);



static inline void LinkControlProtocolP__AsyncControlCharacterMapOption__reset(void );







static inline uint8_t LinkControlProtocolP__ProtocolReject__getCode(void );
static inline error_t LinkControlProtocolP__ProtocolReject__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);







static inline error_t LinkControlProtocolP__ProtocolReject__invoke(void *param_, 
frame_key_t *keyp);
#line 440
static inline error_t LinkControlProtocolP__PppProtocol__process(const uint8_t *information, 
unsigned int information_length);
# 47 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__getType(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10);
# 80 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static uint8_t */*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__appendRequest(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 80 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
uint8_t *dp, 
const uint8_t *dpe);
#line 66
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__setNegotiable(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 66 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
bool is_negotiable);
#line 138
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__processNakValue(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 138 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
#line 152
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__setRemote(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 152 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
#line 112
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__reset(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10);
# 125 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__setLocal(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 125 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
#line 101
static uint8_t */*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__appendNakValue(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 101 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);
#line 57
static bool /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__isNegotiable(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10);
# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__considerRequest(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
# 81 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__fixOutputFrameLength(frame_key_t arg_0x40b3f0f8, const uint8_t *frame_end);
#line 97
static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__sendOutputFrame(frame_key_t key);






static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__releaseOutputFrame(frame_key_t key);
#line 71
static uint8_t */*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__getOutputFrame(unsigned int protocol, 
const uint8_t **frame_endp, 
bool inhibit_compression, 
frame_key_t *keyp);
# 101 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__signalEvent(LcpAutomatonEvent_e evt, 
void *params);
# 53 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
enum /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0____nesc_unnamed4374 {

  PppConfigureEngineP__0__Code_ConfigureRequest = PppControlProtocolCode_ConfigureRequest, 

  PppConfigureEngineP__0__Code_ConfigureAck = PppControlProtocolCode_ConfigureAck, 

  PppConfigureEngineP__0__Code_ConfigureNak = PppControlProtocolCode_ConfigureNak, 

  PppConfigureEngineP__0__Code_ConfigureReject = PppControlProtocolCode_ConfigureReject, 

  PppConfigureEngineP__0__Code_TerminateRequest = PppControlProtocolCode_TerminateRequest, 

  PppConfigureEngineP__0__Code_TerminateAck = PppControlProtocolCode_TerminateAck
};

static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t err);

static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerUp(void );
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerDown(void );
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerStarted(void );
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerFinished(void );






uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__optionTypes_[4 + 1];

static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Init__init(void );
#line 99
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__setOptions(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t code, 
bool use_local);
#line 147
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppConfigure__resetOptions(void );








static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppConfigure__setLocalOptions(uint8_t code, 
const uint8_t *dp, 
const uint8_t *dpe);




static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppConfigure__setRemoteOptions(const uint8_t *dp, 
const uint8_t *dpe);




static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__completeInvoke_(frame_key_t key, 
const uint8_t *frame_end, 
frame_key_t *keyp);
#line 187
uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__idConfigureRequest;

static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureRequest__getCode(void );

static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureRequest__invoke(void *param, 
frame_key_t *keyp);
#line 238
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureRequest__process(uint8_t identifier, 
const uint8_t *sp, 
const uint8_t *spe);
#line 335
static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureAck__getCode(void );
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureAck__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
#line 353
static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__processNakReject(uint8_t code, 
uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
#line 369
static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureNak__getCode(void );
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureNak__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);





static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureReject__getCode(void );
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureReject__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);






static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__processTerminate_(uint8_t code, 
const uint8_t *data, 
const uint8_t *data_end, 
frame_key_t sta_key);









uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__idTerminateRequest;

static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateRequest__getCode(void );
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateRequest__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
#line 439
static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateAck__getCode(void );
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateAck__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);








uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__idTerminateAck;
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateAck__invoke(void *param, frame_key_t *keyp);
#line 468
static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__getType(uint8_t type);
static inline bool /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__isNegotiable(uint8_t type);
static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__considerRequest(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe);
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__setNegotiable(uint8_t type, bool is_negotiable);
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__reset(uint8_t type);
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__setLocal(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe);
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__setRemote(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe);
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__processNakValue(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe);
static inline uint8_t */*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__appendRequest(uint8_t type, uint8_t *dp, 
const uint8_t *dpe);
static inline uint8_t */*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__appendNakValue(uint8_t type, const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);
# 55 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static uint8_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__getCode(
# 46 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
uint8_t arg_0x40d3a768);
# 59 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__process(
# 46 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
uint8_t arg_0x40d3a768, 
# 59 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
# 81 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__Ppp__fixOutputFrameLength(frame_key_t arg_0x40b3f0f8, const uint8_t *frame_end);
#line 97
static error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__Ppp__sendOutputFrame(frame_key_t key);
#line 71
static uint8_t */*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__Ppp__getOutputFrame(unsigned int protocol, 
const uint8_t **frame_endp, 
bool inhibit_compression, 
frame_key_t *keyp);
# 50 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
static inline void /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);



uint8_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__id_protocolReject;



uint8_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__id_codeReject;

static error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__PppProtocolCodeCoordinator__rejectPacket(unsigned int rejected_protocol, 
const uint8_t *ip, 
const uint8_t *ipe, 
frame_key_t *keyp);
#line 117
static inline error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__PppProtocolCodeCoordinator__dispatch(const uint8_t *information, 
unsigned int information_length);
#line 137
static inline uint8_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__default__getCode(uint8_t code);

static inline error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__default__process(uint8_t code, uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeAutomaton_task__postTask(void );
#line 67
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimerFired_task__postTask(void );
# 61 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigure.nc"
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__PppConfigure__setLocalOptions(uint8_t code, 
const uint8_t *dp, 
const uint8_t *dpe);
#line 76
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__PppConfigure__setRemoteOptions(const uint8_t *dp, 
const uint8_t *dpe);
# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ConfigureRequest__invoke(void *param, 
frame_key_t *keyp);
# 97 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Ppp__sendOutputFrame(frame_key_t key);






static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Ppp__releaseOutputFrame(frame_key_t key);
# 66 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__start(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__size_type dt);






static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__stop(void );
# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TerminateAck__invoke(void *param, 
frame_key_t *keyp);
# 110 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__thisLayerUp(void );
#line 128
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__thisLayerFinished(void );
#line 118
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__thisLayerDown(void );




static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__thisLayerStarted(void );
#line 48
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
# 209 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
enum /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0____nesc_unnamed4375 {
#line 209
  LcpAutomatonP__0__resumeAutomaton_task = 21U
};
#line 209
typedef int /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0____nesc_sillytask_resumeAutomaton_task[/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeAutomaton_task];
#line 230
enum /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0____nesc_unnamed4376 {
#line 230
  LcpAutomatonP__0__restartTimerFired_task = 22U
};
#line 230
typedef int /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0____nesc_sillytask_restartTimerFired_task[/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimerFired_task];
#line 50
static inline error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Init__init(void );






enum /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0____nesc_unnamed4377 {
  LcpAutomatonP__0__ASB_Initial = 1 << LAS_Initial, 
  LcpAutomatonP__0__ASB_Starting = 1 << LAS_Starting, 
  LcpAutomatonP__0__ASB_Closed = 1 << LAS_Closed, 
  LcpAutomatonP__0__ASB_Stopped = 1 << LAS_Stopped, 
  LcpAutomatonP__0__ASB_Closing = 1 << LAS_Closing, 
  LcpAutomatonP__0__ASB_Stopping = 1 << LAS_Stopping, 
  LcpAutomatonP__0__ASB_RequestSent = 1 << LAS_RequestSent, 
  LcpAutomatonP__0__ASB_AckReceived = 1 << LAS_AckReceived, 
  LcpAutomatonP__0__ASB_AckSent = 1 << LAS_AckSent, 
  LcpAutomatonP__0__ASB_Opened = 1 << LAS_Opened
};


typedef uint16_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__stateBitSet_t;


const /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__stateBitSet_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_TimerRunningStates = (((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closing | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopping) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_RequestSent) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckReceived) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckSent;
#line 99
enum /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TransitionAction_b {
  LcpAutomatonP__0__TA_noop = 0, 

  LcpAutomatonP__0__TA_tlf = 0x01, 
  LcpAutomatonP__0__TA_tld = 0x02, 
  LcpAutomatonP__0__TA_zrc = 0x04, 
  LcpAutomatonP__0__TA_irc_scr = 0x10, 
  LcpAutomatonP__0__TA_irc_str = 0x20, 
  LcpAutomatonP__0__TA_resetLocalOptions = 0x40, 
  LcpAutomatonP__0__TA_resetRemoteOptions = 0x80, 
  LcpAutomatonP__0__TA_scr = 0x100, 
  LcpAutomatonP__0__TA_sca = 0x200, 
  LcpAutomatonP__0__TA_scn = 0x400, 
  LcpAutomatonP__0__TA_str = 0x1000, 

  LcpAutomatonP__0__TA_sta_uns = 0x2000, 

  LcpAutomatonP__0__TA_sta_rep = 0x4000, 
  LcpAutomatonP__0__TA_scj = 0x10000, 
  LcpAutomatonP__0__TA_ser = 0x20000, 



  LcpAutomatonP__0__TA_setLocalOptions = 0x100000, 


  LcpAutomatonP__0__TA_setRemoteOptions = 0x200000, 
  LcpAutomatonP__0__TA_tlu = 0x01000000, 
  LcpAutomatonP__0__TA_tls = 0x02000000, 


  LcpAutomatonP__0__TA_SUSPENDABLE = ((((((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sca) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scn) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_str) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sta_uns) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sta_rep) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scj) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_ser
};

typedef uint32_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__transitionActions_t;
/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__transitionActions_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_;
/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__transitionActions_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__lastAction_;



uint8_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_;




uint8_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__failState_;
uint8_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__currentState_;







uint8_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionMessageCode_;



const uint8_t */*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSet_;


const uint8_t */*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSetEnd_;






frame_key_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingSxxKey_;


static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__calculateEventActions_(LcpAutomatonEvent_e evt, 
void *arg);


static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__processEventActions_(void );



LcpAutomatonOptions_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__options_ = { .restartTimer_bms = 3 * 1024, 
.maxTerminate = 2, 
.maxConfigure = 10, 
.maxFailure = 5 };







int16_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartCounter_;

/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__transitionActions_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartCounterAction_;
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__initializeRestartCounter(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__transitionActions_t action);
#line 209
static inline void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeAutomaton_task__runTask(void );






frame_key_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartKey_;


frame_key_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeKey_;



error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeResult_;

static inline void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimer_(void );




static inline void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimerFired_task__runTask(void );
#line 243
static inline void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__fired(void );




static inline void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);
#line 264
static inline LcpAutomatonState_e /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__getState(void );






static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__calculateEventActions_(LcpAutomatonEvent_e evt, 
void *arg);
#line 537
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__processEventActions_(void );
#line 695
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__processEvent_(LcpAutomatonEvent_e evt, 
void *arg);
#line 709
static inline error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__signalEvent(LcpAutomatonEvent_e evt, 
void *params);









static inline error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__up(void );


static inline error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__down(void );



static inline error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__open(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(
# 49 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x40de7088);
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(void );
#line 103
static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(/*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type t0, /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop(void );
# 54 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeAlarmC.nc"
enum /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4378 {
  VirtualizeAlarmC__0__NUM_ALARMS = 2U
};




#line 58
typedef struct /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4379 {
  /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0;
  /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt;
} /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t;
#line 80
#line 76
struct /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4380 {
  /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t alarm[/*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS];
  bool isset[/*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS];
  bool is_signaling;
} /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m;

static inline error_t /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void );




static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm(void );
#line 139
static inline void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms(void );
#line 162
static inline void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(uint8_t id, /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt);



static inline void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(uint8_t id);



static inline void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void );
#line 183
static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(uint8_t id, /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0, /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt);
#line 200
static inline void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(uint8_t id);
# 70 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__setMode(uint8_t mode);
#line 54
static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__reset(void );
#line 43
static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__set(/*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__size_type value);
#line 59
static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__start(void );


static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__fired(void );
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__size_type /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__get(void );
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline error_t /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Init__init(void );










static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__fired(void );





static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__stop(void );










static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__setAlarm(/*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type time);






static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__startAt(/*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type nt0, /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type ndt);
#line 125
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__overflow(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__fired(void );
#line 103
static void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__startAt(/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__size_type t0, /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__size_type dt);
#line 73
static void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__stop(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Counter__size_type /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Counter__get(void );
# 77 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_t0;
/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_dt;

enum /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1____nesc_unnamed4381 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__from_size_type ) - 1 - 6, 
  TransformAlarmC__1__MAX_DELAY = (/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type )1 << /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static inline /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__getNow(void );
#line 102
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__stop(void );




static void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__set_alarm(void );
#line 147
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__startAt(/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type t0, /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type dt);
#line 162
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__fired(void );
#line 177
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t DefaultHdlcUartP__streamFeeder_task__postTask(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t DefaultHdlcUartP__SerialControl__start(void );









static error_t DefaultHdlcUartP__SerialControl__stop(void );
# 73 "/opt/tinyos-2.x/tos/lib/ppp/HdlcUart.nc"
static void DefaultHdlcUartP__HdlcUart__receivedByte(uint8_t byte);
#line 60
static void DefaultHdlcUartP__HdlcUart__sendDone(error_t error);








static void DefaultHdlcUartP__HdlcUart__uartError(error_t error);
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t DefaultHdlcUartP__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 118 "/opt/tinyos-2.x/tos/lib/ppp/DefaultHdlcUartP.nc"
enum DefaultHdlcUartP____nesc_unnamed4382 {
#line 118
  DefaultHdlcUartP__streamFeeder_task = 23U
};
#line 118
typedef int DefaultHdlcUartP____nesc_sillytask_streamFeeder_task[DefaultHdlcUartP__streamFeeder_task];
#line 63
uint8_t DefaultHdlcUartP__ringBuffer[256];





uint8_t *DefaultHdlcUartP__rbStore_;
#line 83
uint8_t *DefaultHdlcUartP__rbLoad_;








static error_t DefaultHdlcUartP__StdControl__start(void );








static inline error_t DefaultHdlcUartP__StdControl__stop(void );





static inline error_t DefaultHdlcUartP__HdlcUart__send(uint8_t *buf, 
uint16_t len);




static inline void DefaultHdlcUartP__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error);




static inline void DefaultHdlcUartP__streamFeeder_task__runTask(void );
#line 182
static inline void DefaultHdlcUartP__UartStream__receivedByte(uint8_t rx_byte);
#line 223
static inline void DefaultHdlcUartP__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 44 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigure.nc"
static void PppIpv6P__PppConfigure__resetOptions(void );
# 72 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6.nc"
static void PppIpv6P__PppIpv6__linkUp(void );
#line 87
static error_t PppIpv6P__PppIpv6__receive(const uint8_t *message, 
unsigned int len);
#line 75
static void PppIpv6P__PppIpv6__linkDown(void );
# 58 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinator.nc"
static error_t PppIpv6P__PppProtocolCodeCoordinator__dispatch(const uint8_t *information, 
unsigned int information_length);
# 65 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static error_t PppIpv6P__LcpAutomaton__down(void );
#line 58
static error_t PppIpv6P__LcpAutomaton__up(void );
# 50 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
enum PppIpv6P____nesc_unnamed4383 {
  PppIpv6P__ControlProtocol = PppProtocol_Ipv6Cp, 
  PppIpv6P__Protocol = PppProtocol_Ipv6
};




bool PppIpv6P__negotiateIID_ = TRUE;
bool PppIpv6P__linkIsUp_;
ppp_ipv6cp_iid_t PppIpv6P__localIID_;
ppp_ipv6cp_iid_t PppIpv6P__proposedLocalIID_;
ppp_ipv6cp_iid_t PppIpv6P__remoteIID_;
#line 78
static inline error_t PppIpv6P__Init__init(void );








static inline uint8_t PppIpv6P__InterfaceIdentifierOption__getType(void );
static inline bool PppIpv6P__InterfaceIdentifierOption__isNegotiable(void );
static inline void PppIpv6P__InterfaceIdentifierOption__setNegotiable(bool is_negotiable);
static inline uint8_t PppIpv6P__InterfaceIdentifierOption__considerRequest(const uint8_t *dp, 
const uint8_t *dpe);



static inline uint8_t *PppIpv6P__InterfaceIdentifierOption__appendRequest(uint8_t *dp, 
const uint8_t *dpe);








static inline uint8_t *PppIpv6P__InterfaceIdentifierOption__appendNakValue(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);

static inline void PppIpv6P__InterfaceIdentifierOption__setRemote(const uint8_t *dp, 
const uint8_t *dpe);



static inline void PppIpv6P__InterfaceIdentifierOption__setLocal(const uint8_t *dp, 
const uint8_t *dpe);







static inline void PppIpv6P__InterfaceIdentifierOption__processNakValue(const uint8_t *dp, 
const uint8_t *dpe);



static inline void PppIpv6P__InterfaceIdentifierOption__reset(void );






static inline void PppIpv6P__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t err);

static inline unsigned int PppIpv6P__PppControlProtocol__getProtocol(void );

static inline unsigned int PppIpv6P__PppProtocol__getProtocol(void );

static inline error_t PppIpv6P__PppControlProtocol__process(const uint8_t *information, 
unsigned int information_length);





static inline error_t PppIpv6P__PppProtocol__process(const uint8_t *information, 
unsigned int information_length);




static inline error_t PppIpv6P__PppProtocol__rejectedByPeer(const uint8_t *data, 
const uint8_t *data_end);






static inline error_t PppIpv6P__PppControlProtocol__rejectedByPeer(const uint8_t *data, 
const uint8_t *data_end);







static inline void PppIpv6P__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
static inline void PppIpv6P__LcpAutomaton__thisLayerUp(void );




static inline void PppIpv6P__LcpAutomaton__thisLayerDown(void );




static inline void PppIpv6P__LcpAutomaton__thisLayerStarted(void );
static inline void PppIpv6P__LcpAutomaton__thisLayerFinished(void );

static inline void PppIpv6P__LowerLcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
static inline void PppIpv6P__LowerLcpAutomaton__thisLayerUp(void );



static inline void PppIpv6P__LowerLcpAutomaton__thisLayerDown(void );




static inline void PppIpv6P__LowerLcpAutomaton__thisLayerStarted(void );
static inline void PppIpv6P__LowerLcpAutomaton__thisLayerFinished(void );
# 47 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__getType(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10);
# 80 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static uint8_t */*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__appendRequest(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 80 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
uint8_t *dp, 
const uint8_t *dpe);
#line 66
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__setNegotiable(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 66 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
bool is_negotiable);
#line 138
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__processNakValue(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 138 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
#line 152
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__setRemote(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 152 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
#line 112
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__reset(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10);
# 125 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__setLocal(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 125 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
#line 101
static uint8_t */*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__appendNakValue(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 101 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);
#line 57
static bool /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__isNegotiable(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10);
# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__considerRequest(
# 38 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
uint8_t arg_0x40cd5d10, 
# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
const uint8_t *dp, 
const uint8_t *dpe);
# 81 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__fixOutputFrameLength(frame_key_t arg_0x40b3f0f8, const uint8_t *frame_end);
#line 97
static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__sendOutputFrame(frame_key_t key);






static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__releaseOutputFrame(frame_key_t key);
#line 71
static uint8_t */*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__getOutputFrame(unsigned int protocol, 
const uint8_t **frame_endp, 
bool inhibit_compression, 
frame_key_t *keyp);
# 101 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__signalEvent(LcpAutomatonEvent_e evt, 
void *params);
# 53 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
enum /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1____nesc_unnamed4384 {

  PppConfigureEngineP__1__Code_ConfigureRequest = PppControlProtocolCode_ConfigureRequest, 

  PppConfigureEngineP__1__Code_ConfigureAck = PppControlProtocolCode_ConfigureAck, 

  PppConfigureEngineP__1__Code_ConfigureNak = PppControlProtocolCode_ConfigureNak, 

  PppConfigureEngineP__1__Code_ConfigureReject = PppControlProtocolCode_ConfigureReject, 

  PppConfigureEngineP__1__Code_TerminateRequest = PppControlProtocolCode_TerminateRequest, 

  PppConfigureEngineP__1__Code_TerminateAck = PppControlProtocolCode_TerminateAck
};

static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t err);

static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerUp(void );
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerDown(void );
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerStarted(void );
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerFinished(void );






uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__optionTypes_[1 + 1];

static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Init__init(void );
#line 99
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__setOptions(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t code, 
bool use_local);
#line 147
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppConfigure__resetOptions(void );








static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppConfigure__setLocalOptions(uint8_t code, 
const uint8_t *dp, 
const uint8_t *dpe);




static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppConfigure__setRemoteOptions(const uint8_t *dp, 
const uint8_t *dpe);




static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__completeInvoke_(frame_key_t key, 
const uint8_t *frame_end, 
frame_key_t *keyp);
#line 187
uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__idConfigureRequest;

static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureRequest__getCode(void );

static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureRequest__invoke(void *param, 
frame_key_t *keyp);
#line 238
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureRequest__process(uint8_t identifier, 
const uint8_t *sp, 
const uint8_t *spe);
#line 335
static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureAck__getCode(void );
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureAck__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
#line 353
static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__processNakReject(uint8_t code, 
uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
#line 369
static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureNak__getCode(void );
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureNak__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);





static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureReject__getCode(void );
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureReject__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);






static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__processTerminate_(uint8_t code, 
const uint8_t *data, 
const uint8_t *data_end, 
frame_key_t sta_key);









uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__idTerminateRequest;

static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateRequest__getCode(void );
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateRequest__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
#line 439
static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateAck__getCode(void );
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateAck__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);








uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__idTerminateAck;
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateAck__invoke(void *param, frame_key_t *keyp);
#line 468
static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__getType(uint8_t type);
static inline bool /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__isNegotiable(uint8_t type);
static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__considerRequest(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe);
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__setNegotiable(uint8_t type, bool is_negotiable);
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__reset(uint8_t type);
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__setLocal(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe);
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__setRemote(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe);
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__processNakValue(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe);
static inline uint8_t */*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__appendRequest(uint8_t type, uint8_t *dp, 
const uint8_t *dpe);
static inline uint8_t */*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__appendNakValue(uint8_t type, const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe);
# 55 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static uint8_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__getCode(
# 46 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
uint8_t arg_0x40d3a768);
# 59 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__process(
# 46 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
uint8_t arg_0x40d3a768, 
# 59 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
# 81 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__Ppp__fixOutputFrameLength(frame_key_t arg_0x40b3f0f8, const uint8_t *frame_end);
#line 97
static error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__Ppp__sendOutputFrame(frame_key_t key);
#line 71
static uint8_t */*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__Ppp__getOutputFrame(unsigned int protocol, 
const uint8_t **frame_endp, 
bool inhibit_compression, 
frame_key_t *keyp);
# 50 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
static inline void /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);



uint8_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__id_protocolReject;



uint8_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__id_codeReject;

static inline error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__PppProtocolCodeCoordinator__rejectPacket(unsigned int rejected_protocol, 
const uint8_t *ip, 
const uint8_t *ipe, 
frame_key_t *keyp);
#line 117
static inline error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__PppProtocolCodeCoordinator__dispatch(const uint8_t *information, 
unsigned int information_length);
#line 137
static inline uint8_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__default__getCode(uint8_t code);

static inline error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__default__process(uint8_t code, uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeAutomaton_task__postTask(void );
#line 67
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimerFired_task__postTask(void );
# 61 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigure.nc"
static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__PppConfigure__setLocalOptions(uint8_t code, 
const uint8_t *dp, 
const uint8_t *dpe);
#line 76
static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__PppConfigure__setRemoteOptions(const uint8_t *dp, 
const uint8_t *dpe);
# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ConfigureRequest__invoke(void *param, 
frame_key_t *keyp);
# 97 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Ppp__sendOutputFrame(frame_key_t key);






static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Ppp__releaseOutputFrame(frame_key_t key);
# 66 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__start(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__size_type dt);






static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__stop(void );
# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TerminateAck__invoke(void *param, 
frame_key_t *keyp);
# 110 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__thisLayerUp(void );
#line 128
static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__thisLayerFinished(void );
#line 118
static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__thisLayerDown(void );




static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__thisLayerStarted(void );
#line 48
static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state);
# 209 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
enum /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1____nesc_unnamed4385 {
#line 209
  LcpAutomatonP__1__resumeAutomaton_task = 24U
};
#line 209
typedef int /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1____nesc_sillytask_resumeAutomaton_task[/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeAutomaton_task];
#line 230
enum /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1____nesc_unnamed4386 {
#line 230
  LcpAutomatonP__1__restartTimerFired_task = 25U
};
#line 230
typedef int /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1____nesc_sillytask_restartTimerFired_task[/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimerFired_task];
#line 50
static inline error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Init__init(void );






enum /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1____nesc_unnamed4387 {
  LcpAutomatonP__1__ASB_Initial = 1 << LAS_Initial, 
  LcpAutomatonP__1__ASB_Starting = 1 << LAS_Starting, 
  LcpAutomatonP__1__ASB_Closed = 1 << LAS_Closed, 
  LcpAutomatonP__1__ASB_Stopped = 1 << LAS_Stopped, 
  LcpAutomatonP__1__ASB_Closing = 1 << LAS_Closing, 
  LcpAutomatonP__1__ASB_Stopping = 1 << LAS_Stopping, 
  LcpAutomatonP__1__ASB_RequestSent = 1 << LAS_RequestSent, 
  LcpAutomatonP__1__ASB_AckReceived = 1 << LAS_AckReceived, 
  LcpAutomatonP__1__ASB_AckSent = 1 << LAS_AckSent, 
  LcpAutomatonP__1__ASB_Opened = 1 << LAS_Opened
};


typedef uint16_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__stateBitSet_t;


const /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__stateBitSet_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_TimerRunningStates = (((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closing | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopping) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_RequestSent) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckReceived) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckSent;
#line 99
enum /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TransitionAction_b {
  LcpAutomatonP__1__TA_noop = 0, 

  LcpAutomatonP__1__TA_tlf = 0x01, 
  LcpAutomatonP__1__TA_tld = 0x02, 
  LcpAutomatonP__1__TA_zrc = 0x04, 
  LcpAutomatonP__1__TA_irc_scr = 0x10, 
  LcpAutomatonP__1__TA_irc_str = 0x20, 
  LcpAutomatonP__1__TA_resetLocalOptions = 0x40, 
  LcpAutomatonP__1__TA_resetRemoteOptions = 0x80, 
  LcpAutomatonP__1__TA_scr = 0x100, 
  LcpAutomatonP__1__TA_sca = 0x200, 
  LcpAutomatonP__1__TA_scn = 0x400, 
  LcpAutomatonP__1__TA_str = 0x1000, 

  LcpAutomatonP__1__TA_sta_uns = 0x2000, 

  LcpAutomatonP__1__TA_sta_rep = 0x4000, 
  LcpAutomatonP__1__TA_scj = 0x10000, 
  LcpAutomatonP__1__TA_ser = 0x20000, 



  LcpAutomatonP__1__TA_setLocalOptions = 0x100000, 


  LcpAutomatonP__1__TA_setRemoteOptions = 0x200000, 
  LcpAutomatonP__1__TA_tlu = 0x01000000, 
  LcpAutomatonP__1__TA_tls = 0x02000000, 


  LcpAutomatonP__1__TA_SUSPENDABLE = ((((((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sca) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scn) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_str) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sta_uns) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sta_rep) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scj) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_ser
};

typedef uint32_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__transitionActions_t;
/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__transitionActions_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_;
/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__transitionActions_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__lastAction_;



uint8_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_;




uint8_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__failState_;
uint8_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__currentState_;







uint8_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionMessageCode_;



const uint8_t */*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSet_;


const uint8_t */*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSetEnd_;






frame_key_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingSxxKey_;


static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__calculateEventActions_(LcpAutomatonEvent_e evt, 
void *arg);


static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__processEventActions_(void );



LcpAutomatonOptions_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__options_ = { .restartTimer_bms = 3 * 1024, 
.maxTerminate = 2, 
.maxConfigure = 10, 
.maxFailure = 5 };







int16_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartCounter_;

/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__transitionActions_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartCounterAction_;
static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__initializeRestartCounter(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__transitionActions_t action);
#line 209
static inline void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeAutomaton_task__runTask(void );






frame_key_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartKey_;


frame_key_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeKey_;



error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeResult_;

static inline void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimer_(void );




static inline void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimerFired_task__runTask(void );
#line 243
static inline void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__fired(void );




static inline void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result);
#line 271
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__calculateEventActions_(LcpAutomatonEvent_e evt, 
void *arg);
#line 537
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__processEventActions_(void );
#line 695
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__processEvent_(LcpAutomatonEvent_e evt, 
void *arg);
#line 709
static inline error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__signalEvent(LcpAutomatonEvent_e evt, 
void *params);









static inline error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__up(void );


static inline error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__down(void );



static inline error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__open(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t PppPrintfP__sendBuffer_task__postTask(void );
# 81 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
static error_t PppPrintfP__Ppp__fixOutputFrameLength(frame_key_t arg_0x40b3f0f8, const uint8_t *frame_end);
#line 97
static error_t PppPrintfP__Ppp__sendOutputFrame(frame_key_t key);
#line 71
static uint8_t *PppPrintfP__Ppp__getOutputFrame(unsigned int protocol, 
const uint8_t **frame_endp, 
bool inhibit_compression, 
frame_key_t *keyp);
# 62 "/opt/tinyos-2.x/tos/lib/ppp/PppPrintfP.nc"
enum PppPrintfP____nesc_unnamed4388 {
#line 62
  PppPrintfP__sendBuffer_task = 26U
};
#line 62
typedef int PppPrintfP____nesc_sillytask_sendBuffer_task[PppPrintfP__sendBuffer_task];
#line 47
bool PppPrintfP__disabled__;

enum PppPrintfP____nesc_unnamed4389 {
  PppPrintfP__Protocol = PppProtocol_Printf
};


typedef uint8_t PppPrintfP__bufferIndex_t;



char PppPrintfP__buffer_[255];
PppPrintfP__bufferIndex_t PppPrintfP__bufferIndex_;
frame_key_t PppPrintfP__activeKey_;

static inline void PppPrintfP__sendBuffer_task__runTask(void );
#line 101
static inline unsigned int PppPrintfP__PppProtocol__getProtocol(void );
static inline error_t PppPrintfP__PppProtocol__process(const uint8_t *information, 
unsigned int information_length);



static inline error_t PppPrintfP__PppProtocol__rejectedByPeer(const uint8_t *data, 
const uint8_t *data_end);






static inline void PppPrintfP__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t err);
#line 129
static inline int PppPrintfP__Putchar__putchar(int c);
# 49 "/opt/tinyos-2.x/tos/lib/printf/Putchar.nc"
static int PutcharP__Putchar__putchar(int c);
# 98 "/opt/tinyos-2.x/tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void );
#line 110
int uart_putchar(char c, struct __file *stream) __attribute((noinline))   ;
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

# 125 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow(void )
#line 125
{
}

# 177 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void )
{
}

#line 177
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Counter__overflow();
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

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow(void ){
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
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__overflow(void )
#line 125
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void HplAtmRfa1TimerMacP__Counter__overflow(void ){
#line 49
  /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__overflow();
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
# 95 "/opt/tinyos-2.x/tos/chips/atm128rfa1/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
{
  McuSleepC__powerState = -1;
}

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
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimerFired_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimerFired_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 243 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__fired(void )
{
  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimerFired_task__postTask();
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimerFired_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimerFired_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 243 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__fired(void )
{
  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimerFired_task__postTask();
}

# 200 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(uint8_t id)
#line 200
{
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(uint8_t arg_0x40de7088){
#line 78
  switch (arg_0x40de7088) {
#line 78
    case /*LinkControlProtocolC.LcpAutomatonC.MuxAlarmMilli32C*/MuxAlarmMilli32C__0__CLIENT_ID:
#line 78
      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__fired();
#line 78
      break;
#line 78
    case /*PppIpv6C.LcpAutomatonC.MuxAlarmMilli32C*/MuxAlarmMilli32C__1__CLIENT_ID:
#line 78
      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__fired();
#line 78
      break;
#line 78
    default:
#line 78
      /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(arg_0x40de7088);
#line 78
      break;
#line 78
    }
#line 78
}
#line 78
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Counter__size_type /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Counter__get(void ){
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
static inline /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__getNow(void )
{
  return /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Counter__get();
}

# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 139 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms(void )
#line 139
{
  uint8_t id;

  /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling = TRUE;

  for (id = 0; id < /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS; id++) {
      if (/*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id]) {


          /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0 = /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].t0;
          /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type elapsed = /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow() - t0;

#line 150
          if (/*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].dt <= elapsed) {
              /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = FALSE;
              /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(id);
            }
        }
    }

  /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling = FALSE;
}











static inline void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void )
#line 170
{
  /* atomic removed: atomic calls only */
#line 171
  {
    /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms();
    /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm();
  }
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__fired(void ){
#line 78
  /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 162 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_dt == 0) 
      {
        /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__fired();
      }
    else 
      {
        /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__set_alarm();
      }
  }
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__fired(void ){
#line 78
  /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__fired();
#line 78
}
#line 78
# 280 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__stop(void )
{
  * (volatile uint8_t *)0xDF &= ~(1 << 1);

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 62 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop(void ){
#line 62
  HplAtmRfa1TimerMacP__CompareB__stop();
#line 62
}
#line 62
# 63 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__fired(void )
{
  /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop();
  /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__fired();
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareB__fired(void ){
#line 48
  /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__fired();
#line 48
}
#line 48
# 147 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__startAt(/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type t0, /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_t0 = t0;
    /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_dt = dt;
    /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__set_alarm();
  }
}

# 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(/*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type t0, /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 273 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 1;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__start(void ){
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
inline static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__reset(void ){
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
inline static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__set(/*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__size_type value){
#line 43
  HplAtmRfa1TimerMacP__CompareB__set(value);
#line 43
}
#line 43
# 80 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__setAlarm(/*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type time)
{
  /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__set(time);
  /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__reset();
  /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__start();
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__size_type /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__get(void ){
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
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__startAt(/*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type nt0, /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type ndt)
{
  /* atomic removed: atomic calls only */
  {

    /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type n = /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__get() + 2;


    if ((/*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__size_type )(n - nt0) < ndt) {
      n = nt0 + ndt;
      }
    /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__setAlarm(n);
  }
}

# 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__startAt(/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__size_type t0, /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__size_type dt){
#line 103
  /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 69 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__stop(void )
{
  /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop();
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__stop(void ){
#line 73
  /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Alarm__stop();
#line 73
}
#line 73
# 102 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__stop(void )
{
  /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__stop();
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Alarm__stop();
#line 73
}
#line 73
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
# 89 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void )
#line 89
{
  return * (volatile uint16_t *)0x78;
}

# 105 "/opt/tinyos-2.x/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 105
{
   __asm volatile ("sei");}

# 94 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x)
#line 94
{
#line 94
  union __nesc_unnamed4390 {
#line 94
    Atm128Adcsra_t f;
#line 94
    uint8_t t;
  } 
#line 94
  c = { .f = x };

#line 94
  return c.t;
}


static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x)
#line 98
{
  * (volatile uint8_t *)0x7A = HplAtm128AdcP__Adcsra2int(x);
}

#line 86
static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void )
#line 86
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)0x7A;
}

#line 161
static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void )
#line 161
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP__HplAtm128Adc__getAdcsra();
#line 165
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 182
      oldSr.adif || oldSr.adsc;

#line 182
      return __nesc_temp;
    }
  }
}

# 176 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static bool Atm128AdcP__HplAtm128Adc__cancel(void ){
#line 176
  unsigned char __nesc_result;
#line 176

#line 176
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__cancel();
#line 176

#line 176
  return __nesc_result;
#line 176
}
#line 176
# 80 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__HplAtm128Adc__getRef(void )
#line 80
{
  return (* (volatile uint8_t *)0x7C & 0xC0) >> 6;
}

# 84 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static uint8_t Atm128AdcP__HplAtm128Adc__getRef(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__getRef();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
#line 60
inline static uint8_t Atm128AdcP__HplAtm128Adc__getChannel(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__getChannel();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 141 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP__isPrecise(uint8_t currentChannel, uint8_t currentRefVoltage, uint8_t channel, uint8_t refVoltage)
#line 141
{
  return refVoltage == currentRefVoltage && ((channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == currentChannel);
}

# 78 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setRef(uint8_t ref){
#line 78
  HplAtm128AdcP__HplAtm128Adc__setRef(ref);
#line 78
}
#line 78
#line 54
inline static void Atm128AdcP__HplAtm128Adc__setChannel(uint8_t mux){
#line 54
  HplAtm128AdcP__HplAtm128Adc__setChannel(mux);
#line 54
}
#line 54
# 253 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage)
#line 253
{
  return FALSE;
}

# 119 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
inline static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage){
#line 119
  unsigned char __nesc_result;
#line 119

#line 119
  __nesc_result = Atm128AdcP__Atm128AdcMultiple__default__dataReady(data, precise, channel, newChannel, newRefVoltage);
#line 119

#line 119
  return __nesc_result;
#line 119
}
#line 119
# 157 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d)
#line 157
{
}

# 66 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
inline static void AdcP__ReadNow__readDone(uint8_t arg_0x407952a0, error_t result, AdcP__ReadNow__val_t val){
#line 66
    AdcP__ReadNow__default__readDone(arg_0x407952a0, result, val);
#line 66
}
#line 66
# 66 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
inline static void AdcP__BusyWait__wait(AdcP__BusyWait__size_type dt){
#line 66
  /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(dt);
#line 66
}
#line 66
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t AdcP__acquiredData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcP__acquiredData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 109 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise)
#line 109
{
  switch (AdcP__state) 
    {
      case AdcP__ACQUIRE_DATA: 
        if (!precise) {

            AdcP__BusyWait__wait(125);
            AdcP__sample();
          }
        else 
          {
            AdcP__val = data;
            AdcP__acquiredData__postTask();
          }
      break;

      case AdcP__ACQUIRE_DATA_NOW: 
        if (!precise) {

            AdcP__BusyWait__wait(125);
            AdcP__sample();
          }
        else 
          {
            AdcP__state = AdcP__IDLE;
            AdcP__ReadNow__readDone(AdcP__client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 81 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise){
#line 81
  AdcP__Atm128AdcSingle__dataReady(data, precise);
#line 81
}
#line 81
# 120 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void )
#line 120
{
#line 120
  * (volatile uint8_t *)0x7A &= ~(1 << 3);
}

# 121 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableInterruption(void ){
#line 121
  HplAtm128AdcP__HplAtm128Adc__disableInterruption();
#line 121
}
#line 121
# 145 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data)
#line 145
{
  bool precise;
#line 146
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP__f.channel;
      precise = Atm128AdcP__f.precise;
      multiple = Atm128AdcP__f.multiple;
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP__HplAtm128Adc__disableInterruption();
      Atm128AdcP__Atm128AdcSingle__dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 173
      uint8_t nextVoltage;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          nextVoltage = Atm128AdcP__HplAtm128Adc__getRef();
          nextChannel = Atm128AdcP__HplAtm128Adc__getChannel();
        }
#line 179
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP__Atm128AdcMultiple__dataReady(data, precise, channel, &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            Atm128AdcP__HplAtm128Adc__setChannel(nextChannel);
            Atm128AdcP__HplAtm128Adc__setRef(nextVoltage);

            Atm128AdcP__f = Atm128AdcP__nextF;
            Atm128AdcP__nextF.channel = nextChannel;
            Atm128AdcP__nextF.precise = Atm128AdcP__isPrecise(Atm128AdcP__HplAtm128Adc__getChannel(), Atm128AdcP__HplAtm128Adc__getRef(), nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP__HplAtm128Adc__cancel();
          }
#line 197
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 182 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data){
#line 182
  Atm128AdcP__HplAtm128Adc__dataReady(data);
#line 182
}
#line 182
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline uint16_t HplAtmRfa1Timer1P__Timer__get(void )
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned short __nesc_temp = 
#line 61
    * (volatile uint16_t *)0x84;

#line 61
    return __nesc_temp;
  }
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__size_type /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__get(void ){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1Timer1P__Timer__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 59 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__size_type /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__get(void )
{
  return /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__get();
}

# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__size_type /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__get(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 75 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline bool HplAtmRfa1Timer1P__Timer__test(void )
#line 75
{
#line 75
  return * (volatile uint8_t *)(0x16 + 0x20) & (1 << 0);
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static bool /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__test(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtmRfa1Timer1P__Timer__test();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 71 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline bool /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__isOverflowPending(void )
{
  /* atomic removed: atomic calls only */
#line 73
  {
    unsigned char __nesc_temp = 
#line 73
    /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__test();

#line 73
    return __nesc_temp;
  }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static bool /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 95 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra){
#line 95
  HplAtm128AdcP__HplAtm128Adc__setAdcsra(adcsra);
#line 95
}
#line 95
# 150 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void )
#line 150
{
  if (MeasureClockC__cycles >= 24960) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 153
  if (MeasureClockC__cycles >= 12480) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 155
  if (MeasureClockC__cycles >= 6208) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 157
  if (MeasureClockC__cycles >= 3072) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 159
  if (MeasureClockC__cycles >= 1536) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 161
  if (MeasureClockC__cycles >= 768) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 163
  return ATM128_ADC_PRESCALE_2;
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = MeasureClockC__Atm128Calibrate__adcPrescaler();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 65 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__setAdlar(bool adlarOn)
#line 65
{
  if (adlarOn) {
    * (volatile uint8_t *)0x7C |= 1 << 5;
    }
  else {
#line 69
    * (volatile uint8_t *)0x7C &= ~(1 << 5);
    }
}

# 66 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdlar(bool adlarOn){
#line 66
  HplAtm128AdcP__HplAtm128Adc__setAdlar(adlarOn);
#line 66
}
#line 66
# 201 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 201
{
  Atm128Adcsra_t adcsr;

  Atm128AdcP__f.precise = Atm128AdcP__isPrecise(Atm128AdcP__HplAtm128Adc__getChannel(), Atm128AdcP__HplAtm128Adc__getRef(), channel, refVoltage);
  Atm128AdcP__f.channel = channel;

  Atm128AdcP__HplAtm128Adc__setChannel(channel);
  Atm128AdcP__HplAtm128Adc__setAdlar(leftJustify);
  Atm128AdcP__HplAtm128Adc__setRef(refVoltage);
  adcsr.aden = ATM128_ADC_ENABLE_ON;
  adcsr.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsr.adate = Atm128AdcP__f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP__Atm128Calibrate__adcPrescaler();
    }
#line 217
  adcsr.adps = prescaler;
  Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
}

static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 221
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP__f.multiple = FALSE;
      Atm128AdcP__getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 227
        Atm128AdcP__f.precise;

        {
#line 227
          __nesc_atomic_end(__nesc_atomic); 
#line 227
          return __nesc_temp;
        }
      }
    }
#line 230
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = Atm128AdcP__Atm128AdcSingle__getData(channel, refVoltage, leftJustify, prescaler);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 77 "/opt/tinyos-2.x/tos/platforms/ucmini/VoltageP.nc"
static inline uint8_t VoltageP__Atm128AdcConfig__getChannel(void )
{
  return ATM128_ADC_SNGL_ADC2;
}

# 144 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c)
#line 144
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getChannel(uint8_t arg_0x407947c8){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  switch (arg_0x407947c8) {
#line 25
    case /*SingleVoltageC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 25
      __nesc_result = VoltageP__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      __nesc_result = AdcP__Atm128AdcConfig__default__getChannel(arg_0x407947c8);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 71 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__channel(void )
#line 71
{
  return AdcP__Atm128AdcConfig__getChannel(AdcP__client);
}

# 82 "/opt/tinyos-2.x/tos/platforms/ucmini/VoltageP.nc"
static inline uint8_t VoltageP__Atm128AdcConfig__getRefVoltage(void )
{
  return ATM128_ADC_VREF_1_5;
}

# 148 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c)
#line 148
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(uint8_t arg_0x407947c8){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  switch (arg_0x407947c8) {
#line 32
    case /*SingleVoltageC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 32
      __nesc_result = VoltageP__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      __nesc_result = AdcP__Atm128AdcConfig__default__getRefVoltage(arg_0x407947c8);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 75 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__refVoltage(void )
#line 75
{
  return AdcP__Atm128AdcConfig__getRefVoltage(AdcP__client);
}

# 87 "/opt/tinyos-2.x/tos/platforms/ucmini/VoltageP.nc"
static inline uint8_t VoltageP__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE;
}

# 152 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c)
#line 152
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getPrescaler(uint8_t arg_0x407947c8){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  switch (arg_0x407947c8) {
#line 39
    case /*SingleVoltageC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 39
      __nesc_result = VoltageP__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = AdcP__Atm128AdcConfig__default__getPrescaler(arg_0x407947c8);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 79 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
static inline uint8_t AdcP__prescaler(void )
#line 79
{
  return AdcP__Atm128AdcConfig__getPrescaler(AdcP__client);
}

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

# 216 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart1C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 216
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__Counter__overflow(void ){
#line 82
  /*Atm128Uart1C.UartP*/Atm128UartP__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__m_upper++;
    if ((/*CounterMicro32C.TransformCounterC*/TransformCounterC__2__m_upper & /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__OVERFLOW_MASK) == 0) {
      /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__Counter__overflow();
      }
  }
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__Counter__overflow(void ){
#line 82
  /*CounterMicro32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__m_upper++;
    if ((/*CounterMcu32C.TransformCounterC*/TransformCounterC__3__m_upper & /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__OVERFLOW_MASK) == 0) {
      /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__Counter__overflow();
      }
  }
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow(void ){
#line 82
  /*CounterMcu32C.TransformCounterC*/TransformCounterC__3__CounterFrom__overflow();
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
# 113 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
static inline void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__default__fired(uint8_t pin)
#line 113
{
}

# 68 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(uint8_t arg_0x408e13f0){
#line 68
  switch (arg_0x408e13f0) {
#line 68
    case 5:
#line 68
      SerialAutoControlP__ControlInt__fired();
#line 68
      break;
#line 68
    default:
#line 68
      /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__default__fired(arg_0x408e13f0);
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
# 330 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart0__default__rxDone(uint8_t data)
#line 330
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart0__default__rxDone(data);
#line 49
}
#line 49
# 329 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart0__default__txDone(void )
#line 329
{
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  HplAtm128UartP__HplUart0__default__txDone();
#line 47
}
#line 47
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

# 610 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static inline void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__uartError(error_t error)
{
}

# 69 "/opt/tinyos-2.x/tos/lib/ppp/HdlcUart.nc"
inline static void DefaultHdlcUartP__HdlcUart__uartError(error_t error){
#line 69
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__uartError(error);
#line 69
}
#line 69
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t DefaultHdlcUartP__streamFeeder_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DefaultHdlcUartP__streamFeeder_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 182 "/opt/tinyos-2.x/tos/lib/ppp/DefaultHdlcUartP.nc"
static inline void DefaultHdlcUartP__UartStream__receivedByte(uint8_t rx_byte)
{
  bool wake_feeder;
  bool signal_drop;

  /* atomic removed: atomic calls only */
#line 187
  {









    wake_feeder = signal_drop = ! !DefaultHdlcUartP__rbStore_;
    if (DefaultHdlcUartP__rbStore_ && DefaultHdlcUartP__rbLoad_) {
        uint8_t *rb_dest = DefaultHdlcUartP__rbStore_;

#line 200
        if (++DefaultHdlcUartP__rbStore_ >= DefaultHdlcUartP__ringBuffer + sizeof DefaultHdlcUartP__ringBuffer) {
            DefaultHdlcUartP__rbStore_ = DefaultHdlcUartP__ringBuffer;
          }
        if (DefaultHdlcUartP__rbStore_ == DefaultHdlcUartP__rbLoad_) {



            DefaultHdlcUartP__rbLoad_ = 0;
          }
        else 
#line 208
          {

            *rb_dest = rx_byte;
            signal_drop = FALSE;
          }
      }
  }
  if (wake_feeder) {
      DefaultHdlcUartP__streamFeeder_task__postTask();
    }
  if (signal_drop) {
      DefaultHdlcUartP__HdlcUart__uartError(ENOMEM);
    }
}

# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  DefaultHdlcUartP__UartStream__receivedByte(byte);
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

# 223 "/opt/tinyos-2.x/tos/lib/ppp/DefaultHdlcUartP.nc"
static inline void DefaultHdlcUartP__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 223
{
}

# 99 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  DefaultHdlcUartP__UartStream__receiveDone(buf, len, error);
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 289 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart1__disableRxIntr(void )
#line 289
{
  * (volatile uint8_t *)0xC9 &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart1__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 133 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
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

# 95 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialResetP.nc"
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x40a01b68){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x40a01b68) {
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
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x40a01b68);
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
  __nesc_result = /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
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

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__uartStreamSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__uartStreamSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 614 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static inline void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__sendDone(error_t error)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 617
    {
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__sendDoneError__ = error;
    }
#line 619
    __nesc_atomic_end(__nesc_atomic); }
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__uartStreamSendDone__postTask();
}

# 60 "/opt/tinyos-2.x/tos/lib/ppp/HdlcUart.nc"
inline static void DefaultHdlcUartP__HdlcUart__sendDone(error_t error){
#line 60
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__sendDone(error);
#line 60
}
#line 60
# 113 "/opt/tinyos-2.x/tos/lib/ppp/DefaultHdlcUartP.nc"
static inline void DefaultHdlcUartP__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error)
{
  DefaultHdlcUartP__HdlcUart__sendDone(error);
}

# 57 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  DefaultHdlcUartP__UartStream__sendDone(buf, len, error);
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 279 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart1__disableTxIntr(void )
#line 279
{
  * (volatile uint8_t *)0xC9 &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart1__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41





inline static void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart1__tx(data);
#line 46
}
#line 46
# 173 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 271 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart1__enableTxIntr(void )
#line 271
{
  * (volatile uint8_t *)0xC8 |= 1 << 6;
  * (volatile uint8_t *)0xC9 |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart1__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
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
inline static void BatterySwitchP__Timer__startOneShot(uint32_t dt){
#line 73
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 56 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__makeOutput(uint8_t bit)
#line 56
{
#line 56
  * (volatile uint8_t * )42U |= 1 << bit;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void BatterySwitchP__GeneralIO__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__makeOutput(5);
#line 46
}
#line 46
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__clr(uint8_t bit)
#line 51
{
#line 51
  * (volatile uint8_t * )43U &= ~(1 << bit);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void BatterySwitchP__GeneralIO__clr(void ){
#line 41
  /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__clr(5);
#line 41
}
#line 41
# 11 "/opt/tinyos-2.x/tos/platforms/ucmini/BatterySwitchP.nc"
static inline error_t BatterySwitchP__Read__read(void )
#line 11
{
  BatterySwitchP__GeneralIO__clr();
  BatterySwitchP__GeneralIO__makeOutput();
  BatterySwitchP__Timer__startOneShot(1);
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t BatteryWarningP__Switch__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = BatterySwitchP__Read__read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 18 "/opt/tinyos-2.x/tos/platforms/ucmini/BatteryWarningP.nc"
static inline error_t BatteryWarningP__Init__init(void )
#line 18
{
  return BatteryWarningP__Switch__read();
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__BatteryWarning__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = BatteryWarningP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 69 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 50 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__set(uint8_t bit)
#line 50
{
#line 50
  * (volatile uint8_t * )43U |= 1 << bit;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void Stm25pOffP__Toggle__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__set(6);
#line 40
}
#line 40






inline static void Stm25pOffP__Toggle__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__makeOutput(6);
#line 46
}
#line 46
# 48 "/opt/tinyos-2.x/tos/platforms/ucmini/chips/stm25p/Stm25pOffP.nc"
static inline error_t Stm25pOffP__Stm25pOff__init(void )
#line 48
{

  Stm25pOffP__Toggle__makeOutput();
  Stm25pOffP__Toggle__set();







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
# 50 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(uint8_t bit)
#line 50
{
#line 50
  * (volatile uint8_t * )46U |= 1 << bit;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led3__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(7);
#line 40
}
#line 40
inline static void LedsP__Led2__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(6);
#line 40
}
#line 40
inline static void LedsP__Led1__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(5);
#line 40
}
#line 40
inline static void LedsP__Led0__set(void ){
#line 40
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__set(4);
#line 40
}
#line 40
# 56 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(uint8_t bit)
#line 56
{
#line 56
  * (volatile uint8_t * )45U |= 1 << bit;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led3__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(7);
#line 46
}
#line 46
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(6);
#line 46
}
#line 46
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(5);
#line 46
}
#line 46
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__makeOutput(4);
#line 46
}
#line 46
# 57 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
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
  if (!0U) {
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
# 106 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__Init__init(void )
#line 106
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adate = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t McuInitP__AdcInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Atm128AdcP__Init__init();
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
inline static void /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__CompareB__setMode(mode);
#line 70
}
#line 70
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline error_t /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Init__init(void )
{
  /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop();
  /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__setMode(0);

  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t McuInitP__TimerInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*MuxAlarmMilli32C_.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__1__Init__init();
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
# 54 "/opt/tinyos-2.x/tos/platforms/ucmini/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;

  ok = PlatformP__McuInit__init();
  ok = ecombine(ok, PlatformP__LedsInit__init());
  ok = ecombine(ok, PlatformP__Stm25pInit__init());

  ok = ecombine(ok, PlatformP__BatteryWarning__init());

  return ok;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
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
# 97 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
inline static error_t PppPrintfP__Ppp__sendOutputFrame(frame_key_t key){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = PppP__Ppp__sendOutputFrame(key);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 81
inline static error_t PppPrintfP__Ppp__fixOutputFrameLength(frame_key_t arg_0x40b3f0f8, const uint8_t *frame_end){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = PppP__Ppp__fixOutputFrameLength(arg_0x40b3f0f8, frame_end);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t PppPrintfP__sendBuffer_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PppPrintfP__sendBuffer_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 71 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
inline static uint8_t *PppPrintfP__Ppp__getOutputFrame(unsigned int protocol, const uint8_t **frame_endp, bool inhibit_compression, frame_key_t *keyp){
#line 71
  unsigned char *__nesc_result;
#line 71

#line 71
  __nesc_result = PppP__Ppp__getOutputFrame(protocol, frame_endp, inhibit_compression, keyp);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 62 "/opt/tinyos-2.x/tos/lib/ppp/PppPrintfP.nc"
static inline void PppPrintfP__sendBuffer_task__runTask(void )
{
  const uint8_t *fpe;
  frame_key_t key;
  uint8_t *fp;
  unsigned int tx_length;
  error_t rc;

  if (PppPrintfP__activeKey_) {
      return;
    }
  fp = PppPrintfP__Ppp__getOutputFrame(PppPrintfP__Protocol, &fpe, FALSE, &key);
  if (fp == 0) {
      PppPrintfP__sendBuffer_task__postTask();
      return;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      tx_length = fpe - fp - 1;
      if (PppPrintfP__bufferIndex_ < tx_length) {
          tx_length = PppPrintfP__bufferIndex_;
        }
      * fp++ = tx_length;
      memmove(fp, PppPrintfP__buffer_, tx_length);
      fp += tx_length;
      PppPrintfP__bufferIndex_ -= tx_length;
      if (0 < PppPrintfP__bufferIndex_) {
          memcpy(PppPrintfP__buffer_, PppPrintfP__buffer_ + tx_length, PppPrintfP__bufferIndex_);
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
  rc = PppPrintfP__Ppp__fixOutputFrameLength(key, fp);
  if (SUCCESS == rc) {
      rc = PppPrintfP__Ppp__sendOutputFrame(key);
    }
  if (SUCCESS == rc) {
      PppPrintfP__activeKey_ = key;
    }
}

# 75 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
inline static error_t PppP__TransmitFramePool__request(uint8_t **start, uint8_t **end, unsigned int minimum_size){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__request(/*PppC.TransmitFramePoolC*/FragmentPoolC__0__POOL_ID, start, end, minimum_size);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 55 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorageP.nc"
static inline FragmentPoolSlot_t */*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__slots(void )
#line 55
{
#line 55
  return /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__slots;
}

#line 55
static inline FragmentPoolSlot_t */*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__slots(void )
#line 55
{
#line 55
  return /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__slots;
}

# 103 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
static inline FragmentPoolSlot_t */*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__slots(fragment_pool_id_t pid)
#line 103
{
#line 103
  return 0;
}

# 54 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorage.nc"
inline static FragmentPoolSlot_t */*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__slots(fragment_pool_id_t arg_0x40bbb7f8){
#line 54
  struct FragmentPoolSlot_t *__nesc_result;
#line 54

#line 54
  switch (arg_0x40bbb7f8) {
#line 54
    case /*PppC.TransmitFramePoolC*/FragmentPoolC__0__POOL_ID:
#line 54
      __nesc_result = /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__slots();
#line 54
      break;
#line 54
    case /*PppC.HdlcFramingC.InputFramePoolC*/FragmentPoolC__1__POOL_ID:
#line 54
      __nesc_result = /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__slots();
#line 54
      break;
#line 54
    default:
#line 54
      __nesc_result = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__slots(arg_0x40bbb7f8);
#line 54
      break;
#line 54
    }
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 56 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorageP.nc"
static inline unsigned int /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__slotCount(void )
#line 56
{
#line 56
  return sizeof /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__slots / sizeof  (*/*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__slots);
}

#line 56
static inline unsigned int /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__slotCount(void )
#line 56
{
#line 56
  return sizeof /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__slots / sizeof  (*/*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__slots);
}

# 104 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
static inline unsigned int /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__slotCount(fragment_pool_id_t pid)
#line 104
{
#line 104
  return 0;
}

# 57 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorage.nc"
inline static unsigned int /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__slotCount(fragment_pool_id_t arg_0x40bbb7f8){
#line 57
  unsigned int __nesc_result;
#line 57

#line 57
  switch (arg_0x40bbb7f8) {
#line 57
    case /*PppC.TransmitFramePoolC*/FragmentPoolC__0__POOL_ID:
#line 57
      __nesc_result = /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__slotCount();
#line 57
      break;
#line 57
    case /*PppC.HdlcFramingC.InputFramePoolC*/FragmentPoolC__1__POOL_ID:
#line 57
      __nesc_result = /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__slotCount();
#line 57
      break;
#line 57
    default:
#line 57
      __nesc_result = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__slotCount(arg_0x40bbb7f8);
#line 57
      break;
#line 57
    }
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 53 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorageP.nc"
static inline uint8_t */*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__pool(void )
#line 53
{
#line 53
  return (uint8_t *)/*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__pool;
}

#line 53
static inline uint8_t */*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__pool(void )
#line 53
{
#line 53
  return (uint8_t *)/*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__pool;
}

# 101 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
static inline uint8_t */*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__pool(fragment_pool_id_t pid)
#line 101
{
#line 101
  return 0;
}

# 48 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorage.nc"
inline static uint8_t */*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__pool(fragment_pool_id_t arg_0x40bbb7f8){
#line 48
  unsigned char *__nesc_result;
#line 48

#line 48
  switch (arg_0x40bbb7f8) {
#line 48
    case /*PppC.TransmitFramePoolC*/FragmentPoolC__0__POOL_ID:
#line 48
      __nesc_result = /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__pool();
#line 48
      break;
#line 48
    case /*PppC.HdlcFramingC.InputFramePoolC*/FragmentPoolC__1__POOL_ID:
#line 48
      __nesc_result = /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__pool();
#line 48
      break;
#line 48
    default:
#line 48
      __nesc_result = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__pool(arg_0x40bbb7f8);
#line 48
      break;
#line 48
    }
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 54 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorageP.nc"
static inline unsigned int /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__poolSize(void )
#line 54
{
#line 54
  return sizeof /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__pool;
}

#line 54
static inline unsigned int /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__poolSize(void )
#line 54
{
#line 54
  return sizeof /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__pool;
}

# 102 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
static inline unsigned int /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__poolSize(fragment_pool_id_t pid)
#line 102
{
#line 102
  return 0;
}

# 51 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolStorage.nc"
inline static unsigned int /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__poolSize(fragment_pool_id_t arg_0x40bbb7f8){
#line 51
  unsigned int __nesc_result;
#line 51

#line 51
  switch (arg_0x40bbb7f8) {
#line 51
    case /*PppC.TransmitFramePoolC*/FragmentPoolC__0__POOL_ID:
#line 51
      __nesc_result = /*PppC.TransmitFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__0__FragmentPoolStorage__poolSize();
#line 51
      break;
#line 51
    case /*PppC.HdlcFramingC.InputFramePoolC*/FragmentPoolC__1__POOL_ID:
#line 51
      __nesc_result = /*PppC.HdlcFramingC.InputFramePoolC.FragmentPoolStorageP*/FragmentPoolStorageP__1__FragmentPoolStorage__poolSize();
#line 51
      break;
#line 51
    default:
#line 51
      __nesc_result = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__default__poolSize(arg_0x40bbb7f8);
#line 51
      break;
#line 51
    }
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 99 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
inline static error_t PppP__TransmitFramePool__freeze(const uint8_t *start, const uint8_t *end){
#line 99
  unsigned char __nesc_result;
#line 99

#line 99
  __nesc_result = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__freeze(/*PppC.TransmitFramePoolC*/FragmentPoolC__0__POOL_ID, start, end);
#line 99

#line 99
  return __nesc_result;
#line 99
}
#line 99
# 165 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline void PppP__TransmitFramePool__available(unsigned int length)
#line 165
{
}

# 106 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
static inline void /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__default__available(fragment_pool_id_t pid, unsigned int length)
#line 106
{
}

# 120 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
inline static void /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__available(fragment_pool_id_t arg_0x40bbeb88, unsigned int length){
#line 120
  switch (arg_0x40bbeb88) {
#line 120
    case /*PppC.TransmitFramePoolC*/FragmentPoolC__0__POOL_ID:
#line 120
      PppP__TransmitFramePool__available(length);
#line 120
      break;
#line 120
    case /*PppC.HdlcFramingC.InputFramePoolC*/FragmentPoolC__1__POOL_ID:
#line 120
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__InputFramePool__available(length);
#line 120
      break;
#line 120
    default:
#line 120
      /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__default__available(arg_0x40bbeb88, length);
#line 120
      break;
#line 120
    }
#line 120
}
#line 120
#line 75
inline static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__InputFramePool__request(uint8_t **start, uint8_t **end, unsigned int minimum_size){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__request(/*PppC.HdlcFramingC.InputFramePoolC*/FragmentPoolC__1__POOL_ID, start, end, minimum_size);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeAutomaton_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeAutomaton_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 225 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimer_(void )
{
  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__start(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__options_.restartTimer_bms);
}

#line 248
static inline void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result)
{
  if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartKey_ == key) {
      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartKey_ = 0;
      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimer_();
    }
  if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeKey_ == key) {
      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeResult_ = result;
      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeKey_ = 0;
      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeAutomaton_task__postTask();
    }
}

# 68 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t err)
#line 69
{
}

# 50 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
static inline void /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result)
#line 51
{
}

# 72 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline void LinkControlProtocolP__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t err)
#line 73
{
}

# 115 "/opt/tinyos-2.x/tos/lib/ppp/PppPrintfP.nc"
static inline void PppPrintfP__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t err)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 118
    {
      if (PppPrintfP__activeKey_ == key) {
          PppPrintfP__activeKey_ = 0;
          if (!PppPrintfP__disabled__ && 0 < PppPrintfP__bufferIndex_) {
              PppPrintfP__sendBuffer_task__postTask();
            }
        }
    }
#line 125
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeAutomaton_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeAutomaton_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 162 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(uint8_t id, /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt)
#line 162
{
  /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(id, /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(), dt);
}

# 66 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__start(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__size_type dt){
#line 66
  /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*PppIpv6C.LcpAutomatonC.MuxAlarmMilli32C*/MuxAlarmMilli32C__1__CLIENT_ID, dt);
#line 66
}
#line 66
# 225 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimer_(void )
{
  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__start(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__options_.restartTimer_bms);
}

#line 248
static inline void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result)
{
  if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartKey_ == key) {
      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartKey_ = 0;
      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimer_();
    }
  if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeKey_ == key) {
      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeResult_ = result;
      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeKey_ = 0;
      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeAutomaton_task__postTask();
    }
}

# 68 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t err)
#line 69
{
}

# 50 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
static inline void /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t result)
#line 51
{
}

# 136 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__Ppp__outputFrameTransmitted(frame_key_t key, 
error_t err)
#line 137
{
}

# 112 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
inline static void PppP__Ppp__outputFrameTransmitted(frame_key_t key, error_t result){
#line 112
  PppIpv6P__Ppp__outputFrameTransmitted(key, result);
#line 112
  /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__Ppp__outputFrameTransmitted(key, result);
#line 112
  /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__outputFrameTransmitted(key, result);
#line 112
  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Ppp__outputFrameTransmitted(key, result);
#line 112
  PppPrintfP__Ppp__outputFrameTransmitted(key, result);
#line 112
  LinkControlProtocolP__Ppp__outputFrameTransmitted(key, result);
#line 112
  /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__Ppp__outputFrameTransmitted(key, result);
#line 112
  /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__outputFrameTransmitted(key, result);
#line 112
  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Ppp__outputFrameTransmitted(key, result);
#line 112
}
#line 112
# 110 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
inline static error_t PppP__TransmitFramePool__release(const uint8_t *start){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__release(/*PppC.TransmitFramePoolC*/FragmentPoolC__0__POOL_ID, start);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 209 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeAutomaton_task__runTask(void )
{
  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__processEventActions_();
}

# 185 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__LcpAutomaton__thisLayerFinished(void )
#line 185
{
}

# 75 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerFinished(void )
{
  /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppConfigure__resetOptions();
}

# 19 "TestP.nc"
static inline void TestP__Ipv6LcpAutomaton__thisLayerFinished(void )
#line 19
{
}

# 128 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__thisLayerFinished(void ){
#line 128
  TestP__Ipv6LcpAutomaton__thisLayerFinished();
#line 128
  /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerFinished();
#line 128
  PppIpv6P__LcpAutomaton__thisLayerFinished();
#line 128
}
#line 128
# 89 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__InterfaceIdentifierOption__setNegotiable(bool is_negotiable)
#line 89
{
#line 89
  PppIpv6P__negotiateIID_ = is_negotiable;
}

#line 129
static inline void PppIpv6P__InterfaceIdentifierOption__reset(void )
{
  PppIpv6P__InterfaceIdentifierOption__setNegotiable(TRUE);
  memset(&PppIpv6P__proposedLocalIID_, 0, sizeof PppIpv6P__proposedLocalIID_);
}

# 473 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__reset(uint8_t type)
#line 473
{
}

# 112 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__reset(uint8_t arg_0x40cd5d10){
#line 112
  switch (arg_0x40cd5d10) {
#line 112
    case Ipv6CpOpt_InterfaceIdentifier:
#line 112
      PppIpv6P__InterfaceIdentifierOption__reset();
#line 112
      break;
#line 112
    default:
#line 112
      /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__reset(arg_0x40cd5d10);
#line 112
      break;
#line 112
    }
#line 112
}
#line 112
# 43 "/opt/tinyos-2.x/tos/interfaces/Led.nc"
inline static void TestP__LinkDownLed__on(void ){
#line 43
  PlatformLedP__Led__on(0);
#line 43
}
#line 43



inline static void TestP__LinkUpLed__off(void ){
#line 46
  PlatformLedP__Led__off(1);
#line 46
}
#line 46
# 30 "TestP.nc"
static inline void TestP__PppIpv6__linkDown(void )
{
  TestP__LinkUpLed__off();
  TestP__LinkDownLed__on();
}

# 75 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6.nc"
inline static void PppIpv6P__PppIpv6__linkDown(void ){
#line 75
  TestP__PppIpv6__linkDown();
#line 75
}
#line 75
# 179 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__LcpAutomaton__thisLayerDown(void )
{
  PppIpv6P__linkIsUp_ = FALSE;
  PppIpv6P__PppIpv6__linkDown();
}

# 73 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerDown(void )
#line 73
{
}

# 17 "TestP.nc"
static inline void TestP__Ipv6LcpAutomaton__thisLayerDown(void )
#line 17
{
}

# 118 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__thisLayerDown(void ){
#line 118
  TestP__Ipv6LcpAutomaton__thisLayerDown();
#line 118
  /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerDown();
#line 118
  PppIpv6P__LcpAutomaton__thisLayerDown();
#line 118
}
#line 118
# 83 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led0Off(void )
#line 83
{
  LedsP__Led0__set();
  ;
#line 85
  ;
}

# 63 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void PlatformLedP__Leds__led0Off(void ){
#line 63
  LedsP__Leds__led0Off();
#line 63
}
#line 63
# 98 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led1Off(void )
#line 98
{
  LedsP__Led1__set();
  ;
#line 100
  ;
}

# 79 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void PlatformLedP__Leds__led1Off(void ){
#line 79
  LedsP__Leds__led1Off();
#line 79
}
#line 79
# 113 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led2Off(void )
#line 113
{
  LedsP__Led2__set();
  ;
#line 115
  ;
}

# 96 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void PlatformLedP__Leds__led2Off(void ){
#line 96
  LedsP__Leds__led2Off();
#line 96
}
#line 96
# 128 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led3Off(void )
#line 128
{
  LedsP__Led3__set();
  ;
#line 130
  ;
}

# 113 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void PlatformLedP__Leds__led3Off(void ){
#line 113
  LedsP__Leds__led3Off();
#line 113
}
#line 113
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__clr(uint8_t bit)
#line 51
{
#line 51
  * (volatile uint8_t * )46U &= ~(1 << bit);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__clr(4);
#line 41
}
#line 41
# 78 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 78
{
  LedsP__Led0__clr();
  ;
#line 80
  ;
}

# 58 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void PlatformLedP__Leds__led0On(void ){
#line 58
  LedsP__Leds__led0On();
#line 58
}
#line 58
# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__clr(5);
#line 41
}
#line 41
# 93 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 93
{
  LedsP__Led1__clr();
  ;
#line 95
  ;
}

# 74 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void PlatformLedP__Leds__led1On(void ){
#line 74
  LedsP__Leds__led1On();
#line 74
}
#line 74
# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__clr(6);
#line 41
}
#line 41
# 108 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 108
{
  LedsP__Led2__clr();
  ;
#line 110
  ;
}

# 91 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void PlatformLedP__Leds__led2On(void ){
#line 91
  LedsP__Leds__led2On();
#line 91
}
#line 91
# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led3__clr(void ){
#line 41
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__clr(7);
#line 41
}
#line 41
# 123 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led3On(void )
#line 123
{
  LedsP__Led3__clr();
  ;
#line 125
  ;
}

# 108 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void PlatformLedP__Leds__led3On(void ){
#line 108
  LedsP__Leds__led3On();
#line 108
}
#line 108
# 166 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(uint8_t id)
#line 166
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 167
    /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = FALSE;
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__stop(void ){
#line 73
  /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*PppIpv6C.LcpAutomatonC.MuxAlarmMilli32C*/MuxAlarmMilli32C__1__CLIENT_ID);
#line 73
}
#line 73
# 163 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppConfigure__setRemoteOptions(const uint8_t *dp, 
const uint8_t *dpe)
{
  /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__setOptions(dp, dpe, /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureAck, FALSE);
}

# 76 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigure.nc"
inline static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__PppConfigure__setRemoteOptions(const uint8_t *dp, const uint8_t *dpe){
#line 76
  /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppConfigure__setRemoteOptions(dp, dpe);
#line 76
}
#line 76
# 115 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__InterfaceIdentifierOption__setLocal(const uint8_t *dp, 
const uint8_t *dpe)
{
  if (dp) {
      memcpy(&PppIpv6P__localIID_, dp, sizeof PppIpv6P__localIID_);
    }
  else 
#line 120
    {
      memset(&PppIpv6P__localIID_, 0, sizeof PppIpv6P__localIID_);
    }
}

# 474 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__setLocal(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe)
#line 475
{
}

# 125 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__setLocal(uint8_t arg_0x40cd5d10, const uint8_t *dp, const uint8_t *dpe){
#line 125
  switch (arg_0x40cd5d10) {
#line 125
    case Ipv6CpOpt_InterfaceIdentifier:
#line 125
      PppIpv6P__InterfaceIdentifierOption__setLocal(dp, dpe);
#line 125
      break;
#line 125
    default:
#line 125
      /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__setLocal(arg_0x40cd5d10, dp, dpe);
#line 125
      break;
#line 125
    }
#line 125
}
#line 125
# 110 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__InterfaceIdentifierOption__setRemote(const uint8_t *dp, 
const uint8_t *dpe)
{
  memcpy(&PppIpv6P__remoteIID_, dp, sizeof PppIpv6P__remoteIID_);
}

# 476 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__setRemote(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe)
#line 477
{
}

# 152 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__setRemote(uint8_t arg_0x40cd5d10, const uint8_t *dp, const uint8_t *dpe){
#line 152
  switch (arg_0x40cd5d10) {
#line 152
    case Ipv6CpOpt_InterfaceIdentifier:
#line 152
      PppIpv6P__InterfaceIdentifierOption__setRemote(dp, dpe);
#line 152
      break;
#line 152
    default:
#line 152
      /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__setRemote(arg_0x40cd5d10, dp, dpe);
#line 152
      break;
#line 152
    }
#line 152
}
#line 152
# 124 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__InterfaceIdentifierOption__processNakValue(const uint8_t *dp, 
const uint8_t *dpe)
{
  memcpy(&PppIpv6P__proposedLocalIID_, dp, sizeof PppIpv6P__proposedLocalIID_);
}

# 478 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__processNakValue(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe)
#line 479
{
}

# 138 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__processNakValue(uint8_t arg_0x40cd5d10, const uint8_t *dp, const uint8_t *dpe){
#line 138
  switch (arg_0x40cd5d10) {
#line 138
    case Ipv6CpOpt_InterfaceIdentifier:
#line 138
      PppIpv6P__InterfaceIdentifierOption__processNakValue(dp, dpe);
#line 138
      break;
#line 138
    default:
#line 138
      /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__processNakValue(arg_0x40cd5d10, dp, dpe);
#line 138
      break;
#line 138
    }
#line 138
}
#line 138
# 472 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__setNegotiable(uint8_t type, bool is_negotiable)
#line 472
{
}

# 66 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__setNegotiable(uint8_t arg_0x40cd5d10, bool is_negotiable){
#line 66
  switch (arg_0x40cd5d10) {
#line 66
    case Ipv6CpOpt_InterfaceIdentifier:
#line 66
      PppIpv6P__InterfaceIdentifierOption__setNegotiable(is_negotiable);
#line 66
      break;
#line 66
    default:
#line 66
      /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__setNegotiable(arg_0x40cd5d10, is_negotiable);
#line 66
      break;
#line 66
    }
#line 66
}
#line 66
# 156 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppConfigure__setLocalOptions(uint8_t code, 
const uint8_t *dp, 
const uint8_t *dpe)
{
  /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__setOptions(dp, dpe, code, TRUE);
}

# 61 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigure.nc"
inline static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__PppConfigure__setLocalOptions(uint8_t code, const uint8_t *dp, const uint8_t *dpe){
#line 61
  /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppConfigure__setLocalOptions(code, dp, dpe);
#line 61
}
#line 61
# 95 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline uint8_t *PppIpv6P__InterfaceIdentifierOption__appendRequest(uint8_t *dp, 
const uint8_t *dpe)
{
  if (dpe < dp + sizeof PppIpv6P__proposedLocalIID_) {
      return 0;
    }
  memcpy(dp, &PppIpv6P__proposedLocalIID_, sizeof PppIpv6P__proposedLocalIID_);
  dp += sizeof PppIpv6P__proposedLocalIID_;
  return dp;
}

# 480 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline uint8_t */*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__appendRequest(uint8_t type, uint8_t *dp, 
const uint8_t *dpe)
#line 481
{
#line 481
  return 0;
}

# 80 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static uint8_t */*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__appendRequest(uint8_t arg_0x40cd5d10, uint8_t *dp, const uint8_t *dpe){
#line 80
  unsigned char *__nesc_result;
#line 80

#line 80
  switch (arg_0x40cd5d10) {
#line 80
    case Ipv6CpOpt_InterfaceIdentifier:
#line 80
      __nesc_result = PppIpv6P__InterfaceIdentifierOption__appendRequest(dp, dpe);
#line 80
      break;
#line 80
    default:
#line 80
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__appendRequest(arg_0x40cd5d10, dp, dpe);
#line 80
      break;
#line 80
    }
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 88 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline bool PppIpv6P__InterfaceIdentifierOption__isNegotiable(void )
#line 88
{
#line 88
  return PppIpv6P__negotiateIID_;
}

# 469 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline bool /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__isNegotiable(uint8_t type)
#line 469
{
#line 469
  return FALSE;
}

# 57 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static bool /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__isNegotiable(uint8_t arg_0x40cd5d10){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  switch (arg_0x40cd5d10) {
#line 57
    case Ipv6CpOpt_InterfaceIdentifier:
#line 57
      __nesc_result = PppIpv6P__InterfaceIdentifierOption__isNegotiable();
#line 57
      break;
#line 57
    default:
#line 57
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__isNegotiable(arg_0x40cd5d10);
#line 57
      break;
#line 57
    }
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 71 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
inline static uint8_t */*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__getOutputFrame(unsigned int protocol, const uint8_t **frame_endp, bool inhibit_compression, frame_key_t *keyp){
#line 71
  unsigned char *__nesc_result;
#line 71

#line 71
  __nesc_result = PppP__Ppp__getOutputFrame(protocol, frame_endp, inhibit_compression, keyp);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 191 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureRequest__invoke(void *param, 
frame_key_t *keyp)
{
  const uint8_t *fpe;
  frame_key_t key;
  uint8_t *fp = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__getOutputFrame(32855U, &fpe, 0, &key);
  const uint8_t *frame_start = fp;
  uint8_t *flp;
  uint8_t type = 1;
  uint8_t *otp = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__optionTypes_;

  if (0 == fp) {
      return EBUSY;
    }
  * fp++ = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureRequest;
  * fp++ = ++/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__idConfigureRequest;
  flp = fp;
  fp += 2;


  while (*otp) {
      type = * otp++;
      if (/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__isNegotiable(type)) {
          uint8_t *ofp = fp;
          uint8_t *lfp;




          * fp++ = type;
          lfp = fp++;
          fp = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__appendRequest(type, fp, fpe);
          if (0 == fp) {
              fp = ofp;
            }
          else 
#line 225
            {
              *lfp = fp - ofp;
            }
        }
    }
  {
    uint16_t frame_len = fp - frame_start;

#line 232
    * flp++ = frame_len >> 8;
    * flp++ = frame_len & 0x0FF;
  }
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__completeInvoke_(key, fp, keyp);
}

# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
inline static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ConfigureRequest__invoke(void *param, frame_key_t *keyp){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureRequest__invoke(param, keyp);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 97 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
inline static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__sendOutputFrame(frame_key_t key){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = PppP__Ppp__sendOutputFrame(key);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 452 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateAck__invoke(void *param, frame_key_t *keyp)
{
  const uint8_t *fpe;
  frame_key_t key;
  uint8_t *fp = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__getOutputFrame(32855U, &fpe, 0, &key);

  if (0 == fp) {
      return EBUSY;
    }
  * fp++ = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_TerminateAck;
  * fp++ = ++/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__idTerminateAck;
  * fp++ = 0;
  * fp++ = 2;
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__completeInvoke_(key, fp, keyp);
}

# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
inline static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TerminateAck__invoke(void *param, frame_key_t *keyp){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateAck__invoke(param, keyp);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 97 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
inline static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Ppp__sendOutputFrame(frame_key_t key){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = PppP__Ppp__sendOutputFrame(key);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97







inline static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Ppp__releaseOutputFrame(frame_key_t key){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = PppP__Ppp__releaseOutputFrame(key);
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 43 "/opt/tinyos-2.x/tos/interfaces/Led.nc"
inline static void TestP__LinkUpLed__on(void ){
#line 43
  PlatformLedP__Led__on(1);
#line 43
}
#line 43



inline static void TestP__LinkDownLed__off(void ){
#line 46
  PlatformLedP__Led__off(0);
#line 46
}
#line 46
# 24 "TestP.nc"
static inline void TestP__PppIpv6__linkUp(void )
{
  TestP__LinkDownLed__off();
  TestP__LinkUpLed__on();
}

# 72 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6.nc"
inline static void PppIpv6P__PppIpv6__linkUp(void ){
#line 72
  TestP__PppIpv6__linkUp();
#line 72
}
#line 72
# 174 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__LcpAutomaton__thisLayerUp(void )
{
  PppIpv6P__linkIsUp_ = TRUE;
  PppIpv6P__PppIpv6__linkUp();
}

# 72 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerUp(void )
#line 72
{
}

# 16 "TestP.nc"
static inline void TestP__Ipv6LcpAutomaton__thisLayerUp(void )
#line 16
{
}

# 110 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__thisLayerUp(void ){
#line 110
  TestP__Ipv6LcpAutomaton__thisLayerUp();
#line 110
  /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerUp();
#line 110
  PppIpv6P__LcpAutomaton__thisLayerUp();
#line 110
}
#line 110
# 184 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__LcpAutomaton__thisLayerStarted(void )
#line 184
{
}

# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerStarted(void )
#line 74
{
}

# 18 "TestP.nc"
static inline void TestP__Ipv6LcpAutomaton__thisLayerStarted(void )
#line 18
{
}

# 123 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__thisLayerStarted(void ){
#line 123
  TestP__Ipv6LcpAutomaton__thisLayerStarted();
#line 123
  /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__thisLayerStarted();
#line 123
  PppIpv6P__LcpAutomaton__thisLayerStarted();
#line 123
}
#line 123
# 173 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state)
#line 173
{
}

# 71 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state)
#line 71
{
}

# 15 "TestP.nc"
static inline void TestP__Ipv6LcpAutomaton__transitionCompleted(LcpAutomatonState_e state)
#line 15
{
}

# 48 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state){
#line 48
  TestP__Ipv6LcpAutomaton__transitionCompleted(state);
#line 48
  /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__transitionCompleted(state);
#line 48
  PppIpv6P__LcpAutomaton__transitionCompleted(state);
#line 48
}
#line 48
# 230 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimerFired_task__runTask(void )
{
  error_t rc;
  bool have_retries = 0 < /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartCounter_;

#line 234
  rc = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__calculateEventActions_(LAE_Timeout, &have_retries);
  if (SUCCESS == rc) {
      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeAutomaton_task__postTask();
    }
  else 
#line 237
    {

      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__start(1);
    }
}

# 454 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline void PppP__HdlcFraming__receivedDelimiter(void )
#line 454
{
}

# 120 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFraming.nc"
inline static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__receivedDelimiter(void ){
#line 120
  PppP__HdlcFraming__receivedDelimiter();
#line 120
}
#line 120
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t PppP__processError_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PppP__processError_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 467 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline void PppP__HdlcFraming__receptionError(HdlcError_e code)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 469
    {
      PppP__inFrameError__ = code;
      ++PppP__inFrameDropped__;
    }
#line 472
    __nesc_atomic_end(__nesc_atomic); }
  PppP__processError_task__postTask();
}

# 133 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFraming.nc"
inline static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__receptionError(HdlcError_e code){
#line 133
  PppP__HdlcFraming__receptionError(code);
#line 133
}
#line 133
# 99 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
inline static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__InputFramePool__freeze(const uint8_t *start, const uint8_t *end){
#line 99
  unsigned char __nesc_result;
#line 99

#line 99
  __nesc_result = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__freeze(/*PppC.HdlcFramingC.InputFramePoolC*/FragmentPoolC__1__POOL_ID, start, end);
#line 99

#line 99
  return __nesc_result;
#line 99
}
#line 99
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__inputEngine_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__inputEngine_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 266 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static inline void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__completeFrame_async__(void )
{
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcRxFrame_t *fp = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxActiveFrame__;
  uint8_t *fpe;



  fp->frame_state = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RFS_received;
  fp->end = fp->start + /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxIndex__ - /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__FCS_LENGTH;
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__inputEngine_task__postTask();


  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__readyFrame__[/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__readyFrameIdx__++] = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxActiveFrame__;


  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxActiveFrame__ = 0;
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxBuffer__ = 0;









  fpe = fp->end;
  if (fp->start == fpe) {
      ++fpe;
    }
  (void )/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__InputFramePool__freeze(fp->start, fpe);
}

#line 364
static inline void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__receivedByte(uint8_t byte)
{
  uint8_t in_byte = byte;
  int rx_error = HdlcError_None;
  bool post_rx_delim = FALSE;



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 372
    {

      if (0x20 > byte && /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__options__.rxAsyncControlCharacterMap & (1UL << byte)) {
          {
#line 375
            __nesc_atomic_end(__nesc_atomic); 
#line 375
            return;
          }
        }


      if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_escaped == /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__) {
          if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_FlagSequence == byte || /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlEscape == byte) {



              /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_unsynchronized;
            }
          else 
#line 386
            {


              byte ^= /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlModifier;
              /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxEscapedState_;
            }
        }
      if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_unsynchronized != /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__ && /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlEscape == in_byte) {



          /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxEscapedState_ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__;
          /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_escaped;
        }
      else 
#line 399
        {

          switch (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__) {
              default: 
                reprocess_unsynchronized: 
                  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_unsynchronized;

              case /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_unsynchronized: 


                /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxIndex__ = 0;
              /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxCrc__ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__FCS16_Initial;



              if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_FlagSequence == in_byte) {
                  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_atAddress;
                  post_rx_delim = TRUE;
                }
              break;
              case /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_atAddress: 
                if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_FlagSequence == in_byte) {

                    goto reprocess_unsynchronized;
                  }
              if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_AllStationsAddress != byte) {
#line 440
                  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_receive;
                  goto receive;
                }
              /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxCrc__ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__fcs16_update(/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxCrc__, byte);
              /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_atControlField;
              break;
              case /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_atControlField: 


                if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlFieldValue != byte) {
                    if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_FlagSequence != in_byte) {
                        rx_error = HdlcError_InvalidControlField;
                      }
                    goto reprocess_unsynchronized;
                  }
              /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxCrc__ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__fcs16_update(/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxCrc__, byte);
              /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_receive;
              break;
              case /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_receive: 
                receive: 
                  if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_FlagSequence == in_byte) {


                      if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__FCS_LENGTH <= /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxIndex__) {
                          if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__FCS16_Good == /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxCrc__) {
                              /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__completeFrame_async__();
                            }
                          else 
#line 466
                            {
                              rx_error = HdlcError_BadCrc;
                            }
                        }
                      else 
#line 469
                        {
                          rx_error = HdlcError_ShortFrame;
                        }

                      goto reprocess_unsynchronized;
                    }




              if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxBuffer__) {
                  if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxIndex__ < /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxBufferLength__) {
                      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxCrc__ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__fcs16_update(/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxCrc__, byte);
                      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxBuffer__[/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxIndex__++] = byte;
                    }
                  else 
#line 483
                    {
                      rx_error = HdlcError_BufferOverflow;
                    }
                }
              else 
#line 486
                {
                  rx_error = HdlcError_NoBufferAvailable;
                }
              if (HdlcError_None != rx_error) {
                  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxState__ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_unsynchronized;
                }
              break;
              case /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RX_escaped: 

                break;
            }
        }
    }
#line 498
    __nesc_atomic_end(__nesc_atomic); }


  if (HdlcError_None != rx_error) {
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__receptionError(rx_error);
    }

  if (post_rx_delim) {
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__receivedDelimiter();
    }
}

# 73 "/opt/tinyos-2.x/tos/lib/ppp/HdlcUart.nc"
inline static void DefaultHdlcUartP__HdlcUart__receivedByte(uint8_t byte){
#line 73
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__receivedByte(byte);
#line 73
}
#line 73
# 118 "/opt/tinyos-2.x/tos/lib/ppp/DefaultHdlcUartP.nc"
static inline void DefaultHdlcUartP__streamFeeder_task__runTask(void )
{
  uint8_t *loadable_endp;
  uint8_t *loadablep = 0;
  uint8_t *new_load = 0;
  bool signal_recovery = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 125
    {
      if (!DefaultHdlcUartP__rbStore_) {
          {
            __nesc_atomic_end(__nesc_atomic); 
#line 128
            return;
          }
        }
#line 130
      if (!DefaultHdlcUartP__rbLoad_) {


          signal_recovery = TRUE;
          DefaultHdlcUartP__rbLoad_ = DefaultHdlcUartP__rbStore_;
        }
      else 
#line 135
        {









          loadablep = DefaultHdlcUartP__rbLoad_;
          if (DefaultHdlcUartP__rbLoad_ <= DefaultHdlcUartP__rbStore_) {
              loadable_endp = DefaultHdlcUartP__rbStore_;
              new_load = DefaultHdlcUartP__rbStore_;
            }
          else 
#line 149
            {
              loadable_endp = DefaultHdlcUartP__ringBuffer + sizeof DefaultHdlcUartP__ringBuffer;
              new_load = DefaultHdlcUartP__ringBuffer;
            }
        }
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }

  if (loadablep && loadablep < loadable_endp) {



      DefaultHdlcUartP__streamFeeder_task__postTask();


      while (loadablep < loadable_endp) {
          DefaultHdlcUartP__HdlcUart__receivedByte(* loadablep++);
        }
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 166
        {




          if (DefaultHdlcUartP__rbLoad_) {
              DefaultHdlcUartP__rbLoad_ = new_load;
            }
        }
#line 174
        __nesc_atomic_end(__nesc_atomic); }
    }

  if (signal_recovery) {
      DefaultHdlcUartP__HdlcUart__uartError(SUCCESS);
    }
}

# 209 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeAutomaton_task__runTask(void )
{
  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__processEventActions_();
}

# 92 "/opt/tinyos-2.x/tos/lib/ppp/PppDaemonP.nc"
static inline void PppDaemonP__LcpAutomaton__thisLayerFinished(void )
#line 92
{
}

# 198 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__LowerLcpAutomaton__thisLayerFinished(void )
#line 198
{
}

# 337 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline void LinkControlProtocolP__AsyncControlCharacterMapOption__setNegotiable(bool is_negotiable)
#line 337
{
#line 337
  LinkControlProtocolP__isNegotiable.accm = is_negotiable;
}

#line 404
static inline void LinkControlProtocolP__AsyncControlCharacterMapOption__reset(void )
{
  LinkControlProtocolP__AsyncControlCharacterMapOption__setNegotiable(TRUE);
  LinkControlProtocolP__proposedACCM_ = LinkControlProtocolP__HDLC_PreferredACCM;
}

#line 225
static inline void LinkControlProtocolP__MaximumReceiveUnitOption__setNegotiable(bool is_negotiable)
#line 225
{
#line 225
  LinkControlProtocolP__isNegotiable.mru = is_negotiable;
}

#line 301
static inline void LinkControlProtocolP__MaximumReceiveUnitOption__reset(void )
{
  LinkControlProtocolP__MaximumReceiveUnitOption__setNegotiable(TRUE);
  LinkControlProtocolP__proposedMRU_ = 1280;
}

#line 102
static inline void LinkControlProtocolP__AddressControlFieldCompressionOption__setNegotiable(bool is_negotiable)
#line 102
{
#line 102
  LinkControlProtocolP__isNegotiable.accomp = is_negotiable;
}

#line 142
static inline void LinkControlProtocolP__AddressControlFieldCompressionOption__reset(void )
{
  LinkControlProtocolP__AddressControlFieldCompressionOption__setNegotiable(TRUE);
}

# 473 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__reset(uint8_t type)
#line 473
{
}

# 112 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__reset(uint8_t arg_0x40cd5d10){
#line 112
  switch (arg_0x40cd5d10) {
#line 112
    case LCPOpt_MaximumReceiveUnit:
#line 112
      LinkControlProtocolP__MaximumReceiveUnitOption__reset();
#line 112
      break;
#line 112
    case LCPOpt_AsyncControlCharacterMap:
#line 112
      LinkControlProtocolP__AsyncControlCharacterMapOption__reset();
#line 112
      break;
#line 112
    case LCPOpt_AddressControlFieldCompression:
#line 112
      LinkControlProtocolP__AddressControlFieldCompressionOption__reset();
#line 112
      break;
#line 112
    default:
#line 112
      /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__reset(arg_0x40cd5d10);
#line 112
      break;
#line 112
    }
#line 112
}
#line 112
# 147 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppConfigure__resetOptions(void )
{
  uint8_t *otp = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__optionTypes_;

#line 150
  while (*otp) {
      uint8_t type = * otp++;

#line 152
      /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__reset(type);
    }
}

#line 75
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerFinished(void )
{
  /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppConfigure__resetOptions();
}

# 90 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline void LinkControlProtocolP__LcpAutomaton__thisLayerFinished(void )
#line 90
{
}

# 128 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__thisLayerFinished(void ){
#line 128
  LinkControlProtocolP__LcpAutomaton__thisLayerFinished();
#line 128
  /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerFinished();
#line 128
  PppIpv6P__LowerLcpAutomaton__thisLayerFinished();
#line 128
  PppDaemonP__LcpAutomaton__thisLayerFinished();
#line 128
}
#line 128
# 90 "/opt/tinyos-2.x/tos/lib/ppp/PppDaemonP.nc"
static inline void PppDaemonP__LcpAutomaton__thisLayerDown(void )
#line 90
{
}

# 44 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigure.nc"
inline static void PppIpv6P__PppConfigure__resetOptions(void ){
#line 44
  /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppConfigure__resetOptions();
#line 44
}
#line 44
# 723 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__down(void )
{
  return /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__processEvent_(LAE_Down, 0);
}

# 65 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static error_t PppIpv6P__LcpAutomaton__down(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__down();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 192 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__LowerLcpAutomaton__thisLayerDown(void )
{
  PppIpv6P__LcpAutomaton__down();
  PppIpv6P__PppConfigure__resetOptions();
}

# 73 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerDown(void )
#line 73
{
}

# 88 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline void LinkControlProtocolP__LcpAutomaton__thisLayerDown(void )
#line 88
{
}

# 118 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__thisLayerDown(void ){
#line 118
  LinkControlProtocolP__LcpAutomaton__thisLayerDown();
#line 118
  /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerDown();
#line 118
  PppIpv6P__LowerLcpAutomaton__thisLayerDown();
#line 118
  PppDaemonP__LcpAutomaton__thisLayerDown();
#line 118
}
#line 118
# 163 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppConfigure__setRemoteOptions(const uint8_t *dp, 
const uint8_t *dpe)
{
  /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__setOptions(dp, dpe, /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureAck, FALSE);
}

# 76 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigure.nc"
inline static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__PppConfigure__setRemoteOptions(const uint8_t *dp, const uint8_t *dpe){
#line 76
  /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppConfigure__setRemoteOptions(dp, dpe);
#line 76
}
#line 76
# 474 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__setLocal(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe)
#line 475
{
}

# 125 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__setLocal(uint8_t arg_0x40cd5d10, const uint8_t *dp, const uint8_t *dpe){
#line 125
  switch (arg_0x40cd5d10) {
#line 125
    case LCPOpt_MaximumReceiveUnit:
#line 125
      LinkControlProtocolP__MaximumReceiveUnitOption__setLocal(dp, dpe);
#line 125
      break;
#line 125
    case LCPOpt_AsyncControlCharacterMap:
#line 125
      LinkControlProtocolP__AsyncControlCharacterMapOption__setLocal(dp, dpe);
#line 125
      break;
#line 125
    case LCPOpt_AddressControlFieldCompression:
#line 125
      LinkControlProtocolP__AddressControlFieldCompressionOption__setLocal(dp, dpe);
#line 125
      break;
#line 125
    default:
#line 125
      /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__setLocal(arg_0x40cd5d10, dp, dpe);
#line 125
      break;
#line 125
    }
#line 125
}
#line 125
# 47 "/opt/tinyos-2.x/tos/lib/ppp/GetSetOptions.nc"
inline static LinkControlProtocolP__HdlcFramingOptions__type_t LinkControlProtocolP__HdlcFramingOptions__get(void ){
#line 47
  struct HdlcFramingOptions_t __nesc_result;
#line 47

#line 47
  __nesc_result = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFramingOptions__get();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
#line 42
inline static error_t LinkControlProtocolP__HdlcFramingOptions__set(const LinkControlProtocolP__HdlcFramingOptions__type_t *options){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFramingOptions__set(options);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
inline static error_t LinkControlProtocolP__PppOptions__set(const LinkControlProtocolP__PppOptions__type_t *options){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = PppP__PppOptions__set(options);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 476 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__setRemote(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe)
#line 477
{
}

# 152 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__setRemote(uint8_t arg_0x40cd5d10, const uint8_t *dp, const uint8_t *dpe){
#line 152
  switch (arg_0x40cd5d10) {
#line 152
    case LCPOpt_MaximumReceiveUnit:
#line 152
      LinkControlProtocolP__MaximumReceiveUnitOption__setRemote(dp, dpe);
#line 152
      break;
#line 152
    case LCPOpt_AsyncControlCharacterMap:
#line 152
      LinkControlProtocolP__AsyncControlCharacterMapOption__setRemote(dp, dpe);
#line 152
      break;
#line 152
    case LCPOpt_AddressControlFieldCompression:
#line 152
      LinkControlProtocolP__AddressControlFieldCompressionOption__setRemote(dp, dpe);
#line 152
      break;
#line 152
    default:
#line 152
      /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__setRemote(arg_0x40cd5d10, dp, dpe);
#line 152
      break;
#line 152
    }
#line 152
}
#line 152
# 340 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 399 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline void LinkControlProtocolP__AsyncControlCharacterMapOption__processNakValue(const uint8_t *dp, 
const uint8_t *dpe)
{
  LinkControlProtocolP__proposedACCM_ = __nesc_ntoh_uint32((* (nx_uint32_t *)dp).nxdata);
}

#line 296
static inline void LinkControlProtocolP__MaximumReceiveUnitOption__processNakValue(const uint8_t *dp, 
const uint8_t *dpe)
{
  LinkControlProtocolP__proposedMRU_ = (dp[0] << 8) | dp[1];
}

#line 137
static inline void LinkControlProtocolP__AddressControlFieldCompressionOption__processNakValue(const uint8_t *dp, 
const uint8_t *dpe)
{
  LinkControlProtocolP__AddressControlFieldCompressionOption__setNegotiable(FALSE);
}

# 478 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__processNakValue(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe)
#line 479
{
}

# 138 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__processNakValue(uint8_t arg_0x40cd5d10, const uint8_t *dp, const uint8_t *dpe){
#line 138
  switch (arg_0x40cd5d10) {
#line 138
    case LCPOpt_MaximumReceiveUnit:
#line 138
      LinkControlProtocolP__MaximumReceiveUnitOption__processNakValue(dp, dpe);
#line 138
      break;
#line 138
    case LCPOpt_AsyncControlCharacterMap:
#line 138
      LinkControlProtocolP__AsyncControlCharacterMapOption__processNakValue(dp, dpe);
#line 138
      break;
#line 138
    case LCPOpt_AddressControlFieldCompression:
#line 138
      LinkControlProtocolP__AddressControlFieldCompressionOption__processNakValue(dp, dpe);
#line 138
      break;
#line 138
    default:
#line 138
      /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__processNakValue(arg_0x40cd5d10, dp, dpe);
#line 138
      break;
#line 138
    }
#line 138
}
#line 138
# 156 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppConfigure__setLocalOptions(uint8_t code, 
const uint8_t *dp, 
const uint8_t *dpe)
{
  /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__setOptions(dp, dpe, code, TRUE);
}

# 61 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigure.nc"
inline static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__PppConfigure__setLocalOptions(uint8_t code, const uint8_t *dp, const uint8_t *dpe){
#line 61
  /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppConfigure__setLocalOptions(code, dp, dpe);
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

# 343 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline uint8_t *LinkControlProtocolP__AsyncControlCharacterMapOption__appendRequest(uint8_t *dp, 
const uint8_t *dpe)
{
  nx_uint32_t *np = (nx_uint32_t *)dp;

#line 347
  if (dpe < dp + 1) {
      return 0;
    }
  __nesc_hton_uint32((*np).nxdata, LinkControlProtocolP__proposedACCM_);
  return (uint8_t *)(np + 1);
}

#line 240
static inline uint8_t *LinkControlProtocolP__MaximumReceiveUnitOption__appendRequest(uint8_t *dp, 
const uint8_t *dpe)
{
  if (dpe < dp + 2) {
      return 0;
    }
  * dp++ = LinkControlProtocolP__proposedMRU_ >> 8;
  * dp++ = LinkControlProtocolP__proposedMRU_ & 0x0FF;
  return dp;
}

#line 108
static inline uint8_t *LinkControlProtocolP__AddressControlFieldCompressionOption__appendRequest(uint8_t *dp, 
const uint8_t *dpe)
{
#line 110
  return dp;
}

# 480 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline uint8_t */*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__appendRequest(uint8_t type, uint8_t *dp, 
const uint8_t *dpe)
#line 481
{
#line 481
  return 0;
}

# 80 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static uint8_t */*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__appendRequest(uint8_t arg_0x40cd5d10, uint8_t *dp, const uint8_t *dpe){
#line 80
  unsigned char *__nesc_result;
#line 80

#line 80
  switch (arg_0x40cd5d10) {
#line 80
    case LCPOpt_MaximumReceiveUnit:
#line 80
      __nesc_result = LinkControlProtocolP__MaximumReceiveUnitOption__appendRequest(dp, dpe);
#line 80
      break;
#line 80
    case LCPOpt_AsyncControlCharacterMap:
#line 80
      __nesc_result = LinkControlProtocolP__AsyncControlCharacterMapOption__appendRequest(dp, dpe);
#line 80
      break;
#line 80
    case LCPOpt_AddressControlFieldCompression:
#line 80
      __nesc_result = LinkControlProtocolP__AddressControlFieldCompressionOption__appendRequest(dp, dpe);
#line 80
      break;
#line 80
    default:
#line 80
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__appendRequest(arg_0x40cd5d10, dp, dpe);
#line 80
      break;
#line 80
    }
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 333 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline bool LinkControlProtocolP__AsyncControlCharacterMapOption__isNegotiable(void )
{
  return LinkControlProtocolP__isNegotiable.accm;
}

# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline PppOptions_t PppP__PppOptions__get(void )
#line 74
{
#line 74
  return PppP__options;
}

# 47 "/opt/tinyos-2.x/tos/lib/ppp/GetSetOptions.nc"
inline static LinkControlProtocolP__PppOptions__type_t LinkControlProtocolP__PppOptions__get(void ){
#line 47
  struct PppOptions_t __nesc_result;
#line 47

#line 47
  __nesc_result = PppP__PppOptions__get();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 220 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline bool LinkControlProtocolP__MaximumReceiveUnitOption__isNegotiable(void )
{
  PppOptions_t opt = LinkControlProtocolP__PppOptions__get();

#line 223
  return LinkControlProtocolP__isNegotiable.mru && LinkControlProtocolP__PPP_DefaultMRU != opt.rxMaximumReceiveUnit;
}

#line 101
static inline bool LinkControlProtocolP__AddressControlFieldCompressionOption__isNegotiable(void )
#line 101
{
#line 101
  return LinkControlProtocolP__isNegotiable.accomp;
}

# 469 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline bool /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__isNegotiable(uint8_t type)
#line 469
{
#line 469
  return FALSE;
}

# 57 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static bool /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__isNegotiable(uint8_t arg_0x40cd5d10){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  switch (arg_0x40cd5d10) {
#line 57
    case LCPOpt_MaximumReceiveUnit:
#line 57
      __nesc_result = LinkControlProtocolP__MaximumReceiveUnitOption__isNegotiable();
#line 57
      break;
#line 57
    case LCPOpt_AsyncControlCharacterMap:
#line 57
      __nesc_result = LinkControlProtocolP__AsyncControlCharacterMapOption__isNegotiable();
#line 57
      break;
#line 57
    case LCPOpt_AddressControlFieldCompression:
#line 57
      __nesc_result = LinkControlProtocolP__AddressControlFieldCompressionOption__isNegotiable();
#line 57
      break;
#line 57
    default:
#line 57
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__isNegotiable(arg_0x40cd5d10);
#line 57
      break;
#line 57
    }
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 71 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
inline static uint8_t */*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__getOutputFrame(unsigned int protocol, const uint8_t **frame_endp, bool inhibit_compression, frame_key_t *keyp){
#line 71
  unsigned char *__nesc_result;
#line 71

#line 71
  __nesc_result = PppP__Ppp__getOutputFrame(protocol, frame_endp, inhibit_compression, keyp);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 191 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureRequest__invoke(void *param, 
frame_key_t *keyp)
{
  const uint8_t *fpe;
  frame_key_t key;
  uint8_t *fp = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__getOutputFrame(49185U, &fpe, 1, &key);
  const uint8_t *frame_start = fp;
  uint8_t *flp;
  uint8_t type = 1;
  uint8_t *otp = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__optionTypes_;

  if (0 == fp) {
      return EBUSY;
    }
  * fp++ = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureRequest;
  * fp++ = ++/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__idConfigureRequest;
  flp = fp;
  fp += 2;


  while (*otp) {
      type = * otp++;
      if (/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__isNegotiable(type)) {
          uint8_t *ofp = fp;
          uint8_t *lfp;




          * fp++ = type;
          lfp = fp++;
          fp = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__appendRequest(type, fp, fpe);
          if (0 == fp) {
              fp = ofp;
            }
          else 
#line 225
            {
              *lfp = fp - ofp;
            }
        }
    }
  {
    uint16_t frame_len = fp - frame_start;

#line 232
    * flp++ = frame_len >> 8;
    * flp++ = frame_len & 0x0FF;
  }
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__completeInvoke_(key, fp, keyp);
}

# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
inline static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ConfigureRequest__invoke(void *param, frame_key_t *keyp){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureRequest__invoke(param, keyp);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 97 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
inline static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__sendOutputFrame(frame_key_t key){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = PppP__Ppp__sendOutputFrame(key);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 452 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateAck__invoke(void *param, frame_key_t *keyp)
{
  const uint8_t *fpe;
  frame_key_t key;
  uint8_t *fp = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__getOutputFrame(49185U, &fpe, 1, &key);

  if (0 == fp) {
      return EBUSY;
    }
  * fp++ = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_TerminateAck;
  * fp++ = ++/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__idTerminateAck;
  * fp++ = 0;
  * fp++ = 2;
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__completeInvoke_(key, fp, keyp);
}

# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
inline static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TerminateAck__invoke(void *param, frame_key_t *keyp){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateAck__invoke(param, keyp);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 97 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
inline static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Ppp__sendOutputFrame(frame_key_t key){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = PppP__Ppp__sendOutputFrame(key);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97







inline static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Ppp__releaseOutputFrame(frame_key_t key){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = PppP__Ppp__releaseOutputFrame(key);
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 89 "/opt/tinyos-2.x/tos/lib/ppp/PppDaemonP.nc"
static inline void PppDaemonP__LcpAutomaton__thisLayerUp(void )
#line 89
{
}

# 720 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__up(void )
#line 720
{
  return /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__processEvent_(LAE_Up, 0);
}

# 58 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static error_t PppIpv6P__LcpAutomaton__up(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__up();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 188 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__LowerLcpAutomaton__thisLayerUp(void )
{
  PppIpv6P__LcpAutomaton__up();
}

# 72 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerUp(void )
#line 72
{
}

# 87 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline void LinkControlProtocolP__LcpAutomaton__thisLayerUp(void )
#line 87
{
}

# 110 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__thisLayerUp(void ){
#line 110
  LinkControlProtocolP__LcpAutomaton__thisLayerUp();
#line 110
  /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerUp();
#line 110
  PppIpv6P__LowerLcpAutomaton__thisLayerUp();
#line 110
  PppDaemonP__LcpAutomaton__thisLayerUp();
#line 110
}
#line 110
# 91 "/opt/tinyos-2.x/tos/lib/ppp/PppDaemonP.nc"
static inline void PppDaemonP__LcpAutomaton__thisLayerStarted(void )
#line 91
{
}

# 197 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__LowerLcpAutomaton__thisLayerStarted(void )
#line 197
{
}

# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerStarted(void )
#line 74
{
}

# 89 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline void LinkControlProtocolP__LcpAutomaton__thisLayerStarted(void )
#line 89
{
}

# 123 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__thisLayerStarted(void ){
#line 123
  LinkControlProtocolP__LcpAutomaton__thisLayerStarted();
#line 123
  /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__thisLayerStarted();
#line 123
  PppIpv6P__LowerLcpAutomaton__thisLayerStarted();
#line 123
  PppDaemonP__LcpAutomaton__thisLayerStarted();
#line 123
}
#line 123
# 88 "/opt/tinyos-2.x/tos/lib/ppp/PppDaemonP.nc"
static inline void PppDaemonP__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state)
#line 88
{
}

# 187 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline void PppIpv6P__LowerLcpAutomaton__transitionCompleted(LcpAutomatonState_e state)
#line 187
{
}

# 71 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state)
#line 71
{
}

# 86 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline void LinkControlProtocolP__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state)
#line 86
{
}

# 48 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__transitionCompleted(LcpAutomatonState_e state){
#line 48
  LinkControlProtocolP__LcpAutomaton__transitionCompleted(state);
#line 48
  /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__transitionCompleted(state);
#line 48
  PppIpv6P__LowerLcpAutomaton__transitionCompleted(state);
#line 48
  PppDaemonP__LcpAutomaton__transitionCompleted(state);
#line 48
}
#line 48
# 230 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimerFired_task__runTask(void )
{
  error_t rc;
  bool have_retries = 0 < /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartCounter_;

#line 234
  rc = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__calculateEventActions_(LAE_Timeout, &have_retries);
  if (SUCCESS == rc) {
      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeAutomaton_task__postTask();
    }
  else 
#line 237
    {

      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__start(1);
    }
}

# 110 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPool.nc"
inline static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__InputFramePool__release(const uint8_t *start){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__release(/*PppC.HdlcFramingC.InputFramePoolC*/FragmentPoolC__1__POOL_ID, start);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t PppP__processFrame_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PppP__processFrame_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 456 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline void PppP__HdlcFraming__receivedFrame(const uint8_t *data, 
unsigned int len)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 459
    {
      PppP__Frame_t *fp = PppP__readyFrame__ + PppP__readyFrameIdx__++;

#line 461
      fp->start = data;
      fp->end = data + len;
    }
#line 463
    __nesc_atomic_end(__nesc_atomic); }
  PppP__processFrame_task__postTask();
}

# 94 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFraming.nc"
inline static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__receivedFrame(const uint8_t *data, unsigned int len){
#line 94
  PppP__HdlcFraming__receivedFrame(data, len);
#line 94
}
#line 94
# 317 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static inline void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__inputEngine_task__runTask(void )
{
  bool did_something = FALSE;
  uint8_t *releasable_fragment = 0;
  const uint8_t *frame_start = 0;
  unsigned int frame_length = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcRxFrame_t *fp;

      if (0 < /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__readyFrameIdx__) {
          fp = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__readyFrame__[0];
          if (0 < --/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__readyFrameIdx__) {
              memmove(/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__readyFrame__, /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__readyFrame__ + 1, /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__readyFrameIdx__ * sizeof  (*/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__readyFrame__));
            }
          fp->frame_state = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RFS_processing;
          frame_start = fp->start;
          frame_length = fp->end - fp->start;
        }
      else 
#line 335
        {
          fp = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxFrames_;
          while (fp < /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxFramesEnd_) {
              if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RFS_releasable == fp->frame_state) {
                  releasable_fragment = fp->start;
                  fp->frame_state = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RFS_unused;
                  fp->start = fp->end = 0;
                  break;
                }
              ++fp;
            }
        }
    }
#line 347
    __nesc_atomic_end(__nesc_atomic); }

  if (frame_start) {
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__receivedFrame(frame_start, frame_length);
      did_something = TRUE;
    }

  if (releasable_fragment) {
      (void )/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__InputFramePool__release(releasable_fragment);
      did_something = TRUE;
    }

  if (did_something) {
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__inputEngine_task__postTask();
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t PppP__transmitEngine_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PppP__transmitEngine_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 336 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline void PppP__HdlcFraming__sendDone(const uint8_t *data, 
unsigned int len, 
error_t err)
{
  if (PppP__activeTxFrame_) {
      PppP__releaseTxFrame_(PppP__activeTxFrame_, err, TRUE);
      PppP__activeTxFrame_ = 0;
      PppP__transmitEngine_task__postTask();
    }
}

# 81 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFraming.nc"
inline static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__sendDone(const uint8_t *data, unsigned int len, error_t err){
#line 81
  PppP__HdlcFraming__sendDone(data, len, err);
#line 81
}
#line 81
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static error_t DefaultHdlcUartP__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 107 "/opt/tinyos-2.x/tos/lib/ppp/DefaultHdlcUartP.nc"
static inline error_t DefaultHdlcUartP__HdlcUart__send(uint8_t *buf, 
uint16_t len)
{
  return DefaultHdlcUartP__UartStream__send(buf, len);
}

# 55 "/opt/tinyos-2.x/tos/lib/ppp/HdlcUart.nc"
inline static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__send(uint8_t *buf, uint16_t len){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = DefaultHdlcUartP__HdlcUart__send(buf, len);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 514 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static inline void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__uartStreamSendDone__runTask(void )
{
  error_t error;
  const uint8_t *tp = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txPtr_;
  const uint8_t *uart_tx_ptr = 0;
  uint8_t next_state;
  unsigned int uart_tx_len = 0;
  bool send_done = FALSE;
  uint32_t tx_accm;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 524
    {
      error = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__sendDoneError__;
      tx_accm = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__options__.txAsyncControlCharacterMap;
    }
#line 527
    __nesc_atomic_end(__nesc_atomic); }
  next_state = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txState_;
  send_done = SUCCESS == error && /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__TX_sendCrc == /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txState_;

  if (!send_done) {
      if (SUCCESS == error) {



          while (tp < /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txEnd_ && !/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__mustEscape(*tp, tx_accm)) {
              ++tp;
            }
          if (tp == /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txPtr_ && /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txPtr_ < /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txEnd_) {



              uint8_t *bp = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txTemporary_;

#line 544
              /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txCrc_ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__fcs16_update(/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txCrc_, */*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txPtr_);
              * bp++ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlEscape;
              * bp++ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlModifier ^ */*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txPtr_;
              uart_tx_ptr = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txTemporary_;
              uart_tx_len = bp - /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txTemporary_;
              ++/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txPtr_;
            }
          else {
#line 550
            if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txPtr_ < /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txEnd_) {





                uart_tx_ptr = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txPtr_;
                uart_tx_len = tp - /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txPtr_;
                while (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txPtr_ < tp) {
                    /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txCrc_ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__fcs16_update(/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txCrc_, * /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txPtr_++);
                  }
              }
            else 
#line 561
              {
                uint8_t shift = 0;
                uint8_t *bp = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txTemporary_;




                next_state = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__TX_sendCrc;
                /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txCrc_ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txCrc_ ^ /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__FCS16_Initial;
                while (16 > shift) {
                    uint8_t crcb = (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txCrc_ >> shift) & 0xff;

#line 572
                    if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__mustEscape(crcb, tx_accm)) {
                        * bp++ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlEscape;
                        * bp++ = crcb ^ /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlModifier;
                      }
                    else 
#line 575
                      {
                        * bp++ = crcb;
                      }
                    shift += 8;
                  }

                * bp++ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_FlagSequence;
                uart_tx_ptr = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txTemporary_;
                uart_tx_len = bp - /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txTemporary_;
              }
            }
        }
    }
  if (uart_tx_ptr) {
      error = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__send((uint8_t *)uart_tx_ptr, uart_tx_len);
    }



  if (SUCCESS != error) {
      send_done = TRUE;
    }

  if (send_done) {
      next_state = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__TX_idle;
    }

  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txState_ = next_state;


  if (send_done) {
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__sendDone(/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txStart_, /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txEnd_ - /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txStart_, error);
    }
}

# 410 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline void PppP__processError_task__runTask(void )
{
  HdlcError_e in_frame_error;
  unsigned int ifd;

#line 414
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 414
    {
      in_frame_error = PppP__inFrameError__;
      ifd = PppP__inFrameDropped__;
      PppP__inFrameError__ = 0;
      PppP__inFrameDropped__ = 0;
    }
#line 419
    __nesc_atomic_end(__nesc_atomic); }
}

# 299 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static inline error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__releaseReceivedFrame(const uint8_t *buffer)
{
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcRxFrame_t *fp = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxFrames_;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 304
    {
      while (fp < /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxFramesEnd_ && fp->start != buffer) {
          ++fp;
        }
      if (fp >= /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxFramesEnd_) {
          {
            unsigned char __nesc_temp = 
#line 309
            EINVAL;

            {
#line 309
              __nesc_atomic_end(__nesc_atomic); 
#line 309
              return __nesc_temp;
            }
          }
        }
#line 311
      fp->frame_state = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RFS_releasable;
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__inputEngine_task__postTask();
  return SUCCESS;
}

# 111 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFraming.nc"
inline static error_t PppP__HdlcFraming__releaseReceivedFrame(const uint8_t *buffer){
#line 111
  unsigned char __nesc_result;
#line 111

#line 111
  __nesc_result = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__releaseReceivedFrame(buffer);
#line 111

#line 111
  return __nesc_result;
#line 111
}
#line 111
# 79 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinator.nc"
inline static error_t LinkControlProtocolP__PppProtocolCodeCoordinator__rejectPacket(unsigned int rejected_protocol, const uint8_t *ip, const uint8_t *ipe, frame_key_t *keyp){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__PppProtocolCodeCoordinator__rejectPacket(rejected_protocol, ip, ipe, keyp);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 264 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline LcpAutomatonState_e /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__getState(void )
#line 264
{
#line 264
  return /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__currentState_;
}

# 51 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static LcpAutomatonState_e LinkControlProtocolP__LcpAutomaton__getState(void ){
#line 51
  enum LcpAutomatonState_e __nesc_result;
#line 51

#line 51
  __nesc_result = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__getState();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 423 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline error_t LinkControlProtocolP__ProtocolReject__invoke(void *param_, 
frame_key_t *keyp)
{
  error_t rc = EINVAL;
  protocolReject_param_t *param = (protocolReject_param_t *)param_;

  if (LAS_Opened == LinkControlProtocolP__LcpAutomaton__getState()) {



      if (0 != param->protocol) {
          rc = LinkControlProtocolP__PppProtocolCodeCoordinator__rejectPacket(param->protocol, param->information, param->information + param->information_length, keyp);
        }
    }
  return rc;
}

# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
inline static error_t PppDaemonP__ProtocolReject__invoke(void *param, frame_key_t *keyp){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = LinkControlProtocolP__ProtocolReject__invoke(param, keyp);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 76 "/opt/tinyos-2.x/tos/lib/ppp/PppDaemonP.nc"
static inline error_t PppDaemonP__PppProtocolReject__process(unsigned int protocol, 
const uint8_t *information, 
unsigned int length)
{
  protocolReject_param_t args;

  args.protocol = protocol;
  args.information = information;
  args.information_length = length;
  return PppDaemonP__ProtocolReject__invoke(&args, 0);
}

# 51 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolReject.nc"
inline static error_t PppP__PppProtocolReject__process(unsigned int protocol, const uint8_t *information, unsigned int length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PppDaemonP__PppProtocolReject__process(protocol, information, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 77 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline error_t LinkControlProtocolP__PppProtocol__rejectedByPeer(const uint8_t *data, 
const uint8_t *data_end)
{



  return SUCCESS;
}

# 107 "/opt/tinyos-2.x/tos/lib/ppp/PppPrintfP.nc"
static inline error_t PppPrintfP__PppProtocol__rejectedByPeer(const uint8_t *data, 
const uint8_t *data_end)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 111
    PppPrintfP__disabled__ = 0 != data;
#line 111
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 156 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline error_t PppIpv6P__PppProtocol__rejectedByPeer(const uint8_t *data, 
const uint8_t *data_end)
{



  return SUCCESS;
}

#line 164
static inline error_t PppIpv6P__PppControlProtocol__rejectedByPeer(const uint8_t *data, 
const uint8_t *data_end)
{



  return SUCCESS;
}

# 485 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline error_t PppP__PppProtocol__default__rejectedByPeer(uint16_t protocol, const uint8_t *data, 
const uint8_t *data_end)
{
  return SUCCESS;
}

# 94 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
inline static error_t PppP__PppProtocol__rejectedByPeer(uint16_t arg_0x40b58ca0, const uint8_t *data, const uint8_t *data_end){
#line 94
  unsigned char __nesc_result;
#line 94

#line 94
  switch (arg_0x40b58ca0) {
#line 94
    case PppIpv6C__Protocol:
#line 94
      __nesc_result = PppIpv6P__PppProtocol__rejectedByPeer(data, data_end);
#line 94
      break;
#line 94
    case PppPrintfC__Protocol:
#line 94
      __nesc_result = PppPrintfP__PppProtocol__rejectedByPeer(data, data_end);
#line 94
      break;
#line 94
    case PppIpv6C__ControlProtocol:
#line 94
      __nesc_result = PppIpv6P__PppControlProtocol__rejectedByPeer(data, data_end);
#line 94
      break;
#line 94
    case LinkControlProtocolC__Protocol:
#line 94
      __nesc_result = LinkControlProtocolP__PppProtocol__rejectedByPeer(data, data_end);
#line 94
      break;
#line 94
    default:
#line 94
      __nesc_result = PppP__PppProtocol__default__rejectedByPeer(arg_0x40b58ca0, data, data_end);
#line 94
      break;
#line 94
    }
#line 94

#line 94
  return __nesc_result;
#line 94
}
#line 94
# 76 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline error_t PppP__PppRejectedProtocol__rejected(uint16_t protocol, 
const uint8_t *data, 
const uint8_t *data_end)
{
  return PppP__PppProtocol__rejectedByPeer(protocol, data, data_end);
}

# 49 "/opt/tinyos-2.x/tos/lib/ppp/PppRejectedProtocol.nc"
inline static error_t LinkControlProtocolP__PppRejectedProtocol__rejected(uint16_t protocol, const uint8_t *data, const uint8_t *data_end){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = PppP__PppRejectedProtocol__rejected(protocol, data, data_end);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 413 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline error_t LinkControlProtocolP__ProtocolReject__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
{
  uint16_t protocol = 0;

#line 418
  protocol = (data[0] << 8) + data[1];
  return LinkControlProtocolP__PppRejectedProtocol__rejected(protocol, data, data_end);
}

# 440 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateAck__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
{

  if (/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__idTerminateRequest != identifier) {
      return SUCCESS;
    }
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__processTerminate_(/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_TerminateAck, data, data_end, 0);
}

# 104 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
inline static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__releaseOutputFrame(frame_key_t key){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = PppP__Ppp__releaseOutputFrame(key);
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
#line 81
inline static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__fixOutputFrameLength(frame_key_t arg_0x40b3f0f8, const uint8_t *frame_end){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = PppP__Ppp__fixOutputFrameLength(arg_0x40b3f0f8, frame_end);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 404 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateRequest__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
{
  frame_key_t key;
  const uint8_t *fpe;
  uint8_t *fp = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__getOutputFrame(49185U, &fpe, 1, &key);
  unsigned int frame_len;
  error_t rc;

  if (0 == fp) {
      return EBUSY;
    }
  fp[0] = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_TerminateAck;
  fp[1] = identifier;
  frame_len = 4 + (data_end - data);
  if (fp + frame_len > fpe) {
      frame_len = fpe - fp;
    }
  memcpy(fp + 4, data, frame_len - 4);
  fp[2] = frame_len >> 8;
  fp[3] = frame_len & 0x0ff;

  rc = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__fixOutputFrameLength(key, fp + frame_len);
  if (SUCCESS != rc) {
      return rc;
    }
  rc = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__processTerminate_(/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_TerminateRequest, data, data_end, key);
  if (ERETRY == rc) {
      /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__releaseOutputFrame(key);
    }
  return rc;
}

#line 379
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureReject__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
{
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__processNakReject(/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureReject, identifier, data, data_end);
}

#line 370
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureNak__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
{
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__processNakReject(/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureNak, identifier, data, data_end);
}

# 709 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__signalEvent(LcpAutomatonEvent_e evt, 
void *params)
{
  return /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__processEvent_(evt, params);
}

# 101 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__signalEvent(LcpAutomatonEvent_e evt, void *params){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__signalEvent(evt, params);
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 336 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureAck__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
{
  LcpEventParams_opts_t evt_params;

  if (/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__idConfigureRequest != identifier) {
      return SUCCESS;
    }
  evt_params.code = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureAck;
  evt_params.options = data;
  evt_params.options_end = data_end;
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__signalEvent(LAE_ReceiveConfigureAck, &evt_params);
}

# 353 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline uint8_t *LinkControlProtocolP__AsyncControlCharacterMapOption__appendNakValue(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe)
{
  nx_uint32_t *np = (nx_uint32_t *)dp;

#line 359
  if (dpe < dp + 1) {
      return 0;
    }
  __nesc_hton_uint32((*np).nxdata, LinkControlProtocolP__HDLC_PreferredACCM);
  return (uint8_t *)(np + 1);
}

#line 250
static inline uint8_t *LinkControlProtocolP__MaximumReceiveUnitOption__appendNakValue(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe)
{
  if (dpe < dp + 2) {
      return 0;
    }
  * dp++ = 1280 >> 8;
  * dp++ = 1280 & 0x0FF;
  return dp;
}

#line 111
static inline uint8_t *LinkControlProtocolP__AddressControlFieldCompressionOption__appendNakValue(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe)
{
#line 115
  return dp;
}

# 482 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline uint8_t */*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__appendNakValue(uint8_t type, const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe)
#line 485
{
#line 485
  return 0;
}

# 101 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static uint8_t */*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__appendNakValue(uint8_t arg_0x40cd5d10, const uint8_t *sp, const uint8_t *spe, uint8_t *dp, const uint8_t *dpe){
#line 101
  unsigned char *__nesc_result;
#line 101

#line 101
  switch (arg_0x40cd5d10) {
#line 101
    case LCPOpt_MaximumReceiveUnit:
#line 101
      __nesc_result = LinkControlProtocolP__MaximumReceiveUnitOption__appendNakValue(sp, spe, dp, dpe);
#line 101
      break;
#line 101
    case LCPOpt_AsyncControlCharacterMap:
#line 101
      __nesc_result = LinkControlProtocolP__AsyncControlCharacterMapOption__appendNakValue(sp, spe, dp, dpe);
#line 101
      break;
#line 101
    case LCPOpt_AddressControlFieldCompression:
#line 101
      __nesc_result = LinkControlProtocolP__AddressControlFieldCompressionOption__appendNakValue(sp, spe, dp, dpe);
#line 101
      break;
#line 101
    default:
#line 101
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__appendNakValue(arg_0x40cd5d10, sp, spe, dp, dpe);
#line 101
      break;
#line 101
    }
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 338 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline uint8_t LinkControlProtocolP__AsyncControlCharacterMapOption__considerRequest(const uint8_t *dp, 
const uint8_t *dpe)
{
  return PppControlProtocolCode_ConfigureAck;
}

#line 226
static inline uint8_t LinkControlProtocolP__MaximumReceiveUnitOption__considerRequest(const uint8_t *dp, 
const uint8_t *dpe)
{





  uint16_t tx_mru = (dp[0] << 8) | dp[1];

#line 235
  if (tx_mru > 1280 && LinkControlProtocolP__proposedMRU_ != tx_mru) {
      return PppControlProtocolCode_ConfigureNak;
    }
  return PppControlProtocolCode_ConfigureAck;
}

#line 103
static inline uint8_t LinkControlProtocolP__AddressControlFieldCompressionOption__considerRequest(const uint8_t *dp, 
const uint8_t *dpe)
{
  return PppControlProtocolCode_ConfigureAck;
}

# 470 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__considerRequest(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe)
#line 471
{
#line 471
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureReject;
}

# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__considerRequest(uint8_t arg_0x40cd5d10, const uint8_t *dp, const uint8_t *dpe){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  switch (arg_0x40cd5d10) {
#line 74
    case LCPOpt_MaximumReceiveUnit:
#line 74
      __nesc_result = LinkControlProtocolP__MaximumReceiveUnitOption__considerRequest(dp, dpe);
#line 74
      break;
#line 74
    case LCPOpt_AsyncControlCharacterMap:
#line 74
      __nesc_result = LinkControlProtocolP__AsyncControlCharacterMapOption__considerRequest(dp, dpe);
#line 74
      break;
#line 74
    case LCPOpt_AddressControlFieldCompression:
#line 74
      __nesc_result = LinkControlProtocolP__AddressControlFieldCompressionOption__considerRequest(dp, dpe);
#line 74
      break;
#line 74
    default:
#line 74
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__considerRequest(arg_0x40cd5d10, dp, dpe);
#line 74
      break;
#line 74
    }
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 332 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline uint8_t LinkControlProtocolP__AsyncControlCharacterMapOption__getType(void )
#line 332
{
#line 332
  return LCPOpt_AsyncControlCharacterMap;
}

#line 219
static inline uint8_t LinkControlProtocolP__MaximumReceiveUnitOption__getType(void )
#line 219
{
#line 219
  return LCPOpt_MaximumReceiveUnit;
}

#line 100
static inline uint8_t LinkControlProtocolP__AddressControlFieldCompressionOption__getType(void )
#line 100
{
#line 100
  return LCPOpt_AddressControlFieldCompression;
}

# 468 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__getType(uint8_t type)
#line 468
{
#line 468
  return 0;
}

# 47 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__getType(uint8_t arg_0x40cd5d10){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  switch (arg_0x40cd5d10) {
#line 47
    case LCPOpt_MaximumReceiveUnit:
#line 47
      __nesc_result = LinkControlProtocolP__MaximumReceiveUnitOption__getType();
#line 47
      break;
#line 47
    case LCPOpt_AsyncControlCharacterMap:
#line 47
      __nesc_result = LinkControlProtocolP__AsyncControlCharacterMapOption__getType();
#line 47
      break;
#line 47
    case LCPOpt_AddressControlFieldCompression:
#line 47
      __nesc_result = LinkControlProtocolP__AddressControlFieldCompressionOption__getType();
#line 47
      break;
#line 47
    default:
#line 47
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__getType(arg_0x40cd5d10);
#line 47
      break;
#line 47
    }
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 238 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureRequest__process(uint8_t identifier, 
const uint8_t *sp, 
const uint8_t *spe)
{
  error_t rc;
  uint8_t overall_disposition = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureRequest;
  const uint8_t *fpe;
  frame_key_t key;
  uint8_t *fp = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__getOutputFrame(49185U, &fpe, 1, &key);
  uint8_t *dp = 0;
  LcpEventParams_rcr_t evt_params;

  if (0 == fp) {
      return EBUSY;
    }
  rc = SUCCESS;
  while (SUCCESS == rc && sp + 2 <= spe) {
      uint8_t type = * sp++;
      uint8_t length = * sp++ - 2;
      uint8_t disposition;

      if (0 == /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__getType(type)) {
          disposition = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureReject;
        }
      else 
#line 261
        {
          disposition = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__considerRequest(type, sp, sp + length);
        }


      if (disposition > overall_disposition) {
          evt_params.options = dp = fp + 4;
          overall_disposition = disposition;
        }



      if (disposition == overall_disposition) {
          if (fpe < dp + 2) {
              rc = ENOMEM;
            }
          else 
#line 276
            {

              * dp++ = type;
              if (/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureNak == disposition) {
                  uint8_t *lp = dp++;

                  dp = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__appendNakValue(type, sp, sp + length, dp, fpe);
                  if (0 == dp) {




                      rc = ENOMEM;
                    }

                  *lp = dp - lp + 1;
                }
              else 
#line 292
                {

                  * dp++ = length + 2;
                  if (fpe < dp + length) {
                      rc = ENOMEM;
                    }
                  else 
#line 297
                    {
                      memmove(dp, sp, length);
                      dp += length;
                    }
                }
            }
        }
      sp += length;
    }

  if (SUCCESS == rc) {
      unsigned int frame_len = dp - fp;

#line 309
      * fp++ = overall_disposition;
      * fp++ = identifier;
      * fp++ = frame_len >> 8;
      * fp++ = frame_len & 0x0ff;

      rc = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__fixOutputFrameLength(key, dp);
    }
  if (SUCCESS == rc) {
      evt_params.good = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureAck == overall_disposition;
      evt_params.disposition = overall_disposition;
      evt_params.options_end = dp;
      evt_params.scx_key = key;




      rc = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__signalEvent(LAE_ReceiveConfigureRequest, &evt_params);
      if (ERETRY == rc) {
          /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__releaseOutputFrame(key);
        }
    }
  else 
#line 329
    {
      (void )/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__releaseOutputFrame(key);
    }
  return rc;
}

# 139 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
static inline error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__default__process(uint8_t code, uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
#line 141
{
#line 141
  return FAIL;
}

# 59 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
inline static error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__process(uint8_t arg_0x40d3a768, uint8_t identifier, const uint8_t *data, const uint8_t *data_end){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  switch (arg_0x40d3a768) {
#line 59
    case /*LinkControlProtocolC.PppConfigureEngineC*/PppConfigureEngineC__0__Code_ConfigureRequest:
#line 59
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureRequest__process(identifier, data, data_end);
#line 59
      break;
#line 59
    case /*LinkControlProtocolC.PppConfigureEngineC*/PppConfigureEngineC__0__Code_ConfigureAck:
#line 59
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureAck__process(identifier, data, data_end);
#line 59
      break;
#line 59
    case /*LinkControlProtocolC.PppConfigureEngineC*/PppConfigureEngineC__0__Code_ConfigureNak:
#line 59
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureNak__process(identifier, data, data_end);
#line 59
      break;
#line 59
    case /*LinkControlProtocolC.PppConfigureEngineC*/PppConfigureEngineC__0__Code_ConfigureReject:
#line 59
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureReject__process(identifier, data, data_end);
#line 59
      break;
#line 59
    case /*LinkControlProtocolC.PppConfigureEngineC*/PppConfigureEngineC__0__Code_TerminateRequest:
#line 59
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateRequest__process(identifier, data, data_end);
#line 59
      break;
#line 59
    case /*LinkControlProtocolC.PppConfigureEngineC*/PppConfigureEngineC__0__Code_TerminateAck:
#line 59
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateAck__process(identifier, data, data_end);
#line 59
      break;
#line 59
    case PppControlProtocolCode_ProtocolReject:
#line 59
      __nesc_result = LinkControlProtocolP__ProtocolReject__process(identifier, data, data_end);
#line 59
      break;
#line 59
    default:
#line 59
      __nesc_result = /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__default__process(arg_0x40d3a768, identifier, data, data_end);
#line 59
      break;
#line 59
    }
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 412 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline uint8_t LinkControlProtocolP__ProtocolReject__getCode(void )
#line 412
{
#line 412
  return PppControlProtocolCode_ProtocolReject;
}

# 439 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateAck__getCode(void )
#line 439
{
#line 439
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_TerminateAck;
}

#line 403
static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateRequest__getCode(void )
#line 403
{
#line 403
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_TerminateRequest;
}

#line 378
static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureReject__getCode(void )
#line 378
{
#line 378
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureReject;
}

#line 369
static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureNak__getCode(void )
#line 369
{
#line 369
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureNak;
}

#line 335
static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureAck__getCode(void )
#line 335
{
#line 335
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureAck;
}

#line 189
static inline uint8_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureRequest__getCode(void )
#line 189
{
#line 189
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureRequest;
}

# 137 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
static inline uint8_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__default__getCode(uint8_t code)
#line 137
{
#line 137
  return 0;
}

# 55 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
inline static uint8_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__getCode(uint8_t arg_0x40d3a768){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  switch (arg_0x40d3a768) {
#line 55
    case /*LinkControlProtocolC.PppConfigureEngineC*/PppConfigureEngineC__0__Code_ConfigureRequest:
#line 55
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureRequest__getCode();
#line 55
      break;
#line 55
    case /*LinkControlProtocolC.PppConfigureEngineC*/PppConfigureEngineC__0__Code_ConfigureAck:
#line 55
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureAck__getCode();
#line 55
      break;
#line 55
    case /*LinkControlProtocolC.PppConfigureEngineC*/PppConfigureEngineC__0__Code_ConfigureNak:
#line 55
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureNak__getCode();
#line 55
      break;
#line 55
    case /*LinkControlProtocolC.PppConfigureEngineC*/PppConfigureEngineC__0__Code_ConfigureReject:
#line 55
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__ConfigureReject__getCode();
#line 55
      break;
#line 55
    case /*LinkControlProtocolC.PppConfigureEngineC*/PppConfigureEngineC__0__Code_TerminateRequest:
#line 55
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateRequest__getCode();
#line 55
      break;
#line 55
    case /*LinkControlProtocolC.PppConfigureEngineC*/PppConfigureEngineC__0__Code_TerminateAck:
#line 55
      __nesc_result = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__TerminateAck__getCode();
#line 55
      break;
#line 55
    case PppControlProtocolCode_ProtocolReject:
#line 55
      __nesc_result = LinkControlProtocolP__ProtocolReject__getCode();
#line 55
      break;
#line 55
    default:
#line 55
      __nesc_result = /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__default__getCode(arg_0x40d3a768);
#line 55
      break;
#line 55
    }
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 117 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
static inline error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__PppProtocolCodeCoordinator__dispatch(const uint8_t *information, 
unsigned int information_length)
{
  const uint8_t *ip = information;
  const uint8_t *ipe = ip + information_length;
  uint8_t code = * ip++;
  uint8_t identifier = * ip++;
  uint16_t length = (ip[0] << 8) + ip[1];

#line 125
  ip += 2;



  length -= 4;

  if (0 == /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__getCode(code)) {
      return /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__PppProtocolCodeCoordinator__rejectPacket(0, information, ipe, 0);
    }
  return /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__CodeHandler__process(code, identifier, ip, ipe);
}

# 58 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinator.nc"
inline static error_t LinkControlProtocolP__PppProtocolCodeCoordinator__dispatch(const uint8_t *information, unsigned int information_length){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__PppProtocolCodeCoordinator__dispatch(information, information_length);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 440 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline error_t LinkControlProtocolP__PppProtocol__process(const uint8_t *information, 
unsigned int information_length)
{
  return LinkControlProtocolP__PppProtocolCodeCoordinator__dispatch(information, information_length);
}

# 102 "/opt/tinyos-2.x/tos/lib/ppp/PppPrintfP.nc"
static inline error_t PppPrintfP__PppProtocol__process(const uint8_t *information, 
unsigned int information_length)
{
  return FAIL;
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__toggle(uint8_t bit)
#line 52
{
#line 52
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 52
    * (volatile uint8_t * )46U ^= 1 << bit;
#line 52
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led3__toggle(void ){
#line 42
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__toggle(7);
#line 42
}
#line 42
# 133 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led3Toggle(void )
#line 133
{
  LedsP__Led3__toggle();
  ;
#line 135
  ;
}

# 119 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void PlatformLedP__Leds__led3Toggle(void ){
#line 119
  LedsP__Leds__led3Toggle();
#line 119
}
#line 119
# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__toggle(6);
#line 42
}
#line 42
# 118 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 118
{
  LedsP__Led2__toggle();
  ;
#line 120
  ;
}

# 102 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void PlatformLedP__Leds__led2Toggle(void ){
#line 102
  LedsP__Leds__led2Toggle();
#line 102
}
#line 102
# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__toggle(5);
#line 42
}
#line 42
# 103 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 103
{
  LedsP__Led1__toggle();
  ;
#line 105
  ;
}

# 85 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void PlatformLedP__Leds__led1Toggle(void ){
#line 85
  LedsP__Leds__led1Toggle();
#line 85
}
#line 85
# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*AtmegaGeneralIOC.PortE*/AtmegaGeneralIOP__4__Pin__toggle(4);
#line 42
}
#line 42
# 88 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 88
{
  LedsP__Led0__toggle();
  ;
#line 90
  ;
}

# 69 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void PlatformLedP__Leds__led0Toggle(void ){
#line 69
  LedsP__Leds__led0Toggle();
#line 69
}
#line 69
# 76 "/opt/tinyos-2.x/tos/platforms/ucmini/PlatformLedP.nc"
static inline void PlatformLedP__Led__toggle(uint8_t led_id)
{
  switch (led_id) {
      case 0: PlatformLedP__Leds__led0Toggle();
#line 79
      break;
      case 1: PlatformLedP__Leds__led1Toggle();
#line 80
      break;
      case 2: PlatformLedP__Leds__led2Toggle();
#line 81
      break;
      case 3: PlatformLedP__Leds__led3Toggle();
#line 82
      break;
    }
}

# 53 "/opt/tinyos-2.x/tos/interfaces/Led.nc"
inline static void TestP__PacketRxLed__toggle(void ){
#line 53
  PlatformLedP__Led__toggle(2);
#line 53
}
#line 53
# 36 "TestP.nc"
static inline error_t TestP__PppIpv6__receive(const uint8_t *message, 
unsigned int len)
{
  TestP__PacketRxLed__toggle();
  printf("RX %u octets\n", len);
  return SUCCESS;
}

# 87 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6.nc"
inline static error_t PppIpv6P__PppIpv6__receive(const uint8_t *message, unsigned int len){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = TestP__PppIpv6__receive(message, len);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 150 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline error_t PppIpv6P__PppProtocol__process(const uint8_t *information, 
unsigned int information_length)
{
  return PppIpv6P__PppIpv6__receive(information, information_length);
}

# 440 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateAck__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
{

  if (/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__idTerminateRequest != identifier) {
      return SUCCESS;
    }
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__processTerminate_(/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_TerminateAck, data, data_end, 0);
}

# 104 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
inline static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__releaseOutputFrame(frame_key_t key){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = PppP__Ppp__releaseOutputFrame(key);
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
#line 81
inline static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__fixOutputFrameLength(frame_key_t arg_0x40b3f0f8, const uint8_t *frame_end){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = PppP__Ppp__fixOutputFrameLength(arg_0x40b3f0f8, frame_end);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 404 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateRequest__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
{
  frame_key_t key;
  const uint8_t *fpe;
  uint8_t *fp = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__getOutputFrame(32855U, &fpe, 0, &key);
  unsigned int frame_len;
  error_t rc;

  if (0 == fp) {
      return EBUSY;
    }
  fp[0] = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_TerminateAck;
  fp[1] = identifier;
  frame_len = 4 + (data_end - data);
  if (fp + frame_len > fpe) {
      frame_len = fpe - fp;
    }
  memcpy(fp + 4, data, frame_len - 4);
  fp[2] = frame_len >> 8;
  fp[3] = frame_len & 0x0ff;

  rc = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__fixOutputFrameLength(key, fp + frame_len);
  if (SUCCESS != rc) {
      return rc;
    }
  rc = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__processTerminate_(/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_TerminateRequest, data, data_end, key);
  if (ERETRY == rc) {
      /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__releaseOutputFrame(key);
    }
  return rc;
}

#line 379
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureReject__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
{
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__processNakReject(/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureReject, identifier, data, data_end);
}

#line 370
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureNak__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
{
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__processNakReject(/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureNak, identifier, data, data_end);
}

# 709 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__signalEvent(LcpAutomatonEvent_e evt, 
void *params)
{
  return /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__processEvent_(evt, params);
}

# 101 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__signalEvent(LcpAutomatonEvent_e evt, void *params){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__signalEvent(evt, params);
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 336 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureAck__process(uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
{
  LcpEventParams_opts_t evt_params;

  if (/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__idConfigureRequest != identifier) {
      return SUCCESS;
    }
  evt_params.code = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureAck;
  evt_params.options = data;
  evt_params.options_end = data_end;
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__signalEvent(LAE_ReceiveConfigureAck, &evt_params);
}

# 105 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline uint8_t *PppIpv6P__InterfaceIdentifierOption__appendNakValue(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe)
{
#line 109
  return dp;
}

# 482 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline uint8_t */*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__appendNakValue(uint8_t type, const uint8_t *sp, 
const uint8_t *spe, 
uint8_t *dp, 
const uint8_t *dpe)
#line 485
{
#line 485
  return 0;
}

# 101 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static uint8_t */*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__appendNakValue(uint8_t arg_0x40cd5d10, const uint8_t *sp, const uint8_t *spe, uint8_t *dp, const uint8_t *dpe){
#line 101
  unsigned char *__nesc_result;
#line 101

#line 101
  switch (arg_0x40cd5d10) {
#line 101
    case Ipv6CpOpt_InterfaceIdentifier:
#line 101
      __nesc_result = PppIpv6P__InterfaceIdentifierOption__appendNakValue(sp, spe, dp, dpe);
#line 101
      break;
#line 101
    default:
#line 101
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__appendNakValue(arg_0x40cd5d10, sp, spe, dp, dpe);
#line 101
      break;
#line 101
    }
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 90 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline uint8_t PppIpv6P__InterfaceIdentifierOption__considerRequest(const uint8_t *dp, 
const uint8_t *dpe)
{
  return PppControlProtocolCode_ConfigureAck;
}

# 470 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__considerRequest(uint8_t type, const uint8_t *dp, 
const uint8_t *dpe)
#line 471
{
#line 471
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureReject;
}

# 74 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__considerRequest(uint8_t arg_0x40cd5d10, const uint8_t *dp, const uint8_t *dpe){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  switch (arg_0x40cd5d10) {
#line 74
    case Ipv6CpOpt_InterfaceIdentifier:
#line 74
      __nesc_result = PppIpv6P__InterfaceIdentifierOption__considerRequest(dp, dpe);
#line 74
      break;
#line 74
    default:
#line 74
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__considerRequest(arg_0x40cd5d10, dp, dpe);
#line 74
      break;
#line 74
    }
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 87 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline uint8_t PppIpv6P__InterfaceIdentifierOption__getType(void )
#line 87
{
#line 87
  return Ipv6CpOpt_InterfaceIdentifier;
}

# 468 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__getType(uint8_t type)
#line 468
{
#line 468
  return 0;
}

# 47 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
inline static uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__getType(uint8_t arg_0x40cd5d10){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  switch (arg_0x40cd5d10) {
#line 47
    case Ipv6CpOpt_InterfaceIdentifier:
#line 47
      __nesc_result = PppIpv6P__InterfaceIdentifierOption__getType();
#line 47
      break;
#line 47
    default:
#line 47
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__default__getType(arg_0x40cd5d10);
#line 47
      break;
#line 47
    }
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 238 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureRequest__process(uint8_t identifier, 
const uint8_t *sp, 
const uint8_t *spe)
{
  error_t rc;
  uint8_t overall_disposition = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureRequest;
  const uint8_t *fpe;
  frame_key_t key;
  uint8_t *fp = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__getOutputFrame(32855U, &fpe, 0, &key);
  uint8_t *dp = 0;
  LcpEventParams_rcr_t evt_params;

  if (0 == fp) {
      return EBUSY;
    }
  rc = SUCCESS;
  while (SUCCESS == rc && sp + 2 <= spe) {
      uint8_t type = * sp++;
      uint8_t length = * sp++ - 2;
      uint8_t disposition;

      if (0 == /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__getType(type)) {
          disposition = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureReject;
        }
      else 
#line 261
        {
          disposition = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__considerRequest(type, sp, sp + length);
        }


      if (disposition > overall_disposition) {
          evt_params.options = dp = fp + 4;
          overall_disposition = disposition;
        }



      if (disposition == overall_disposition) {
          if (fpe < dp + 2) {
              rc = ENOMEM;
            }
          else 
#line 276
            {

              * dp++ = type;
              if (/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureNak == disposition) {
                  uint8_t *lp = dp++;

                  dp = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__appendNakValue(type, sp, sp + length, dp, fpe);
                  if (0 == dp) {




                      rc = ENOMEM;
                    }

                  *lp = dp - lp + 1;
                }
              else 
#line 292
                {

                  * dp++ = length + 2;
                  if (fpe < dp + length) {
                      rc = ENOMEM;
                    }
                  else 
#line 297
                    {
                      memmove(dp, sp, length);
                      dp += length;
                    }
                }
            }
        }
      sp += length;
    }

  if (SUCCESS == rc) {
      unsigned int frame_len = dp - fp;

#line 309
      * fp++ = overall_disposition;
      * fp++ = identifier;
      * fp++ = frame_len >> 8;
      * fp++ = frame_len & 0x0ff;

      rc = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__fixOutputFrameLength(key, dp);
    }
  if (SUCCESS == rc) {
      evt_params.good = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureAck == overall_disposition;
      evt_params.disposition = overall_disposition;
      evt_params.options_end = dp;
      evt_params.scx_key = key;




      rc = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__signalEvent(LAE_ReceiveConfigureRequest, &evt_params);
      if (ERETRY == rc) {
          /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__releaseOutputFrame(key);
        }
    }
  else 
#line 329
    {
      (void )/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__releaseOutputFrame(key);
    }
  return rc;
}

# 139 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
static inline error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__default__process(uint8_t code, uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
#line 141
{
#line 141
  return FAIL;
}

# 59 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
inline static error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__process(uint8_t arg_0x40d3a768, uint8_t identifier, const uint8_t *data, const uint8_t *data_end){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  switch (arg_0x40d3a768) {
#line 59
    case /*PppIpv6C.PppConfigureEngineC*/PppConfigureEngineC__1__Code_ConfigureRequest:
#line 59
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureRequest__process(identifier, data, data_end);
#line 59
      break;
#line 59
    case /*PppIpv6C.PppConfigureEngineC*/PppConfigureEngineC__1__Code_ConfigureAck:
#line 59
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureAck__process(identifier, data, data_end);
#line 59
      break;
#line 59
    case /*PppIpv6C.PppConfigureEngineC*/PppConfigureEngineC__1__Code_ConfigureNak:
#line 59
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureNak__process(identifier, data, data_end);
#line 59
      break;
#line 59
    case /*PppIpv6C.PppConfigureEngineC*/PppConfigureEngineC__1__Code_ConfigureReject:
#line 59
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureReject__process(identifier, data, data_end);
#line 59
      break;
#line 59
    case /*PppIpv6C.PppConfigureEngineC*/PppConfigureEngineC__1__Code_TerminateRequest:
#line 59
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateRequest__process(identifier, data, data_end);
#line 59
      break;
#line 59
    case /*PppIpv6C.PppConfigureEngineC*/PppConfigureEngineC__1__Code_TerminateAck:
#line 59
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateAck__process(identifier, data, data_end);
#line 59
      break;
#line 59
    default:
#line 59
      __nesc_result = /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__default__process(arg_0x40d3a768, identifier, data, data_end);
#line 59
      break;
#line 59
    }
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 97 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
inline static error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__Ppp__sendOutputFrame(frame_key_t key){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = PppP__Ppp__sendOutputFrame(key);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 81
inline static error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__Ppp__fixOutputFrameLength(frame_key_t arg_0x40b3f0f8, const uint8_t *frame_end){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = PppP__Ppp__fixOutputFrameLength(arg_0x40b3f0f8, frame_end);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
#line 71
inline static uint8_t */*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__Ppp__getOutputFrame(unsigned int protocol, const uint8_t **frame_endp, bool inhibit_compression, frame_key_t *keyp){
#line 71
  unsigned char *__nesc_result;
#line 71

#line 71
  __nesc_result = PppP__Ppp__getOutputFrame(protocol, frame_endp, inhibit_compression, keyp);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 61 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
static inline error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__PppProtocolCodeCoordinator__rejectPacket(unsigned int rejected_protocol, 
const uint8_t *ip, 
const uint8_t *ipe, 
frame_key_t *keyp)
{
  const uint8_t *fpe = 0;
  frame_key_t key;
  uint8_t *fp = /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__Ppp__getOutputFrame(32855U, &fpe, TRUE, &key);
  const uint8_t *frame_start = fp;
  uint8_t *lp;
  error_t rc;

  if (0 == fp) {
      return EBUSY;
    }


  if (0 != rejected_protocol) {
      * fp++ = PppControlProtocolCode_ProtocolReject;
      * fp++ = /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__id_protocolReject++;
    }
  else 
#line 81
    {
      * fp++ = PppControlProtocolCode_CodeReject;
      * fp++ = /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__id_codeReject++;
    }

  lp = fp;
  fp += 2;
  if (0 != rejected_protocol) {

      * fp++ = rejected_protocol >> 8;
      * fp++ = rejected_protocol & 0x0FF;
    }



  while (fp < fpe && ip < ipe) {
      * fp++ = * ip++;
    }


  {
    unsigned int len = fp - frame_start;

#line 103
    * lp++ = len >> 8;
    * lp++ = len & 0x0FF;
  }

  rc = /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__Ppp__fixOutputFrameLength(key, fp);
  if (SUCCESS == rc) {
      rc = /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__Ppp__sendOutputFrame(key);
    }
  if (SUCCESS == rc && keyp) {
      *keyp = key;
    }
  return rc;
}

# 439 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateAck__getCode(void )
#line 439
{
#line 439
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_TerminateAck;
}

#line 403
static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateRequest__getCode(void )
#line 403
{
#line 403
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_TerminateRequest;
}

#line 378
static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureReject__getCode(void )
#line 378
{
#line 378
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureReject;
}

#line 369
static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureNak__getCode(void )
#line 369
{
#line 369
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureNak;
}

#line 335
static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureAck__getCode(void )
#line 335
{
#line 335
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureAck;
}

#line 189
static inline uint8_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureRequest__getCode(void )
#line 189
{
#line 189
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureRequest;
}

# 137 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
static inline uint8_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__default__getCode(uint8_t code)
#line 137
{
#line 137
  return 0;
}

# 55 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeSupport.nc"
inline static uint8_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__getCode(uint8_t arg_0x40d3a768){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  switch (arg_0x40d3a768) {
#line 55
    case /*PppIpv6C.PppConfigureEngineC*/PppConfigureEngineC__1__Code_ConfigureRequest:
#line 55
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureRequest__getCode();
#line 55
      break;
#line 55
    case /*PppIpv6C.PppConfigureEngineC*/PppConfigureEngineC__1__Code_ConfigureAck:
#line 55
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureAck__getCode();
#line 55
      break;
#line 55
    case /*PppIpv6C.PppConfigureEngineC*/PppConfigureEngineC__1__Code_ConfigureNak:
#line 55
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureNak__getCode();
#line 55
      break;
#line 55
    case /*PppIpv6C.PppConfigureEngineC*/PppConfigureEngineC__1__Code_ConfigureReject:
#line 55
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__ConfigureReject__getCode();
#line 55
      break;
#line 55
    case /*PppIpv6C.PppConfigureEngineC*/PppConfigureEngineC__1__Code_TerminateRequest:
#line 55
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateRequest__getCode();
#line 55
      break;
#line 55
    case /*PppIpv6C.PppConfigureEngineC*/PppConfigureEngineC__1__Code_TerminateAck:
#line 55
      __nesc_result = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__TerminateAck__getCode();
#line 55
      break;
#line 55
    default:
#line 55
      __nesc_result = /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__default__getCode(arg_0x40d3a768);
#line 55
      break;
#line 55
    }
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 117 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
static inline error_t /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__PppProtocolCodeCoordinator__dispatch(const uint8_t *information, 
unsigned int information_length)
{
  const uint8_t *ip = information;
  const uint8_t *ipe = ip + information_length;
  uint8_t code = * ip++;
  uint8_t identifier = * ip++;
  uint16_t length = (ip[0] << 8) + ip[1];

#line 125
  ip += 2;



  length -= 4;

  if (0 == /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__getCode(code)) {
      return /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__PppProtocolCodeCoordinator__rejectPacket(0, information, ipe, 0);
    }
  return /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__CodeHandler__process(code, identifier, ip, ipe);
}

# 58 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinator.nc"
inline static error_t PppIpv6P__PppProtocolCodeCoordinator__dispatch(const uint8_t *information, unsigned int information_length){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*PppIpv6C.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__1__PppProtocolCodeCoordinator__dispatch(information, information_length);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 143 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline error_t PppIpv6P__PppControlProtocol__process(const uint8_t *information, 
unsigned int information_length)

{
  return PppIpv6P__PppProtocolCodeCoordinator__dispatch(information, information_length);
}

# 482 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline error_t PppP__PppProtocol__default__process(uint16_t protocol, const uint8_t *information, 
unsigned int information_length)
#line 483
{
#line 483
  return FAIL;
}

# 77 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
inline static error_t PppP__PppProtocol__process(uint16_t arg_0x40b58ca0, const uint8_t *information, unsigned int information_length){
#line 77
  unsigned char __nesc_result;
#line 77

#line 77
  switch (arg_0x40b58ca0) {
#line 77
    case PppIpv6C__Protocol:
#line 77
      __nesc_result = PppIpv6P__PppProtocol__process(information, information_length);
#line 77
      break;
#line 77
    case PppPrintfC__Protocol:
#line 77
      __nesc_result = PppPrintfP__PppProtocol__process(information, information_length);
#line 77
      break;
#line 77
    case PppIpv6C__ControlProtocol:
#line 77
      __nesc_result = PppIpv6P__PppControlProtocol__process(information, information_length);
#line 77
      break;
#line 77
    case LinkControlProtocolC__Protocol:
#line 77
      __nesc_result = LinkControlProtocolP__PppProtocol__process(information, information_length);
#line 77
      break;
#line 77
    default:
#line 77
      __nesc_result = PppP__PppProtocol__default__process(arg_0x40b58ca0, information, information_length);
#line 77
      break;
#line 77
    }
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 75 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static inline unsigned int LinkControlProtocolP__PppProtocol__getProtocol(void )
#line 75
{
#line 75
  return LinkControlProtocolP__Protocol;
}

# 101 "/opt/tinyos-2.x/tos/lib/ppp/PppPrintfP.nc"
static inline unsigned int PppPrintfP__PppProtocol__getProtocol(void )
#line 101
{
#line 101
  return PppPrintfP__Protocol;
}

# 141 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline unsigned int PppIpv6P__PppProtocol__getProtocol(void )
#line 141
{
#line 141
  return PppIpv6P__Protocol;
}

#line 139
static inline unsigned int PppIpv6P__PppControlProtocol__getProtocol(void )
#line 139
{
#line 139
  return PppIpv6P__ControlProtocol;
}

# 478 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline unsigned int PppP__PppProtocol__default__getProtocol(uint16_t protocol)
#line 478
{
#line 478
  return 0;
}

# 54 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocol.nc"
inline static unsigned int PppP__PppProtocol__getProtocol(uint16_t arg_0x40b58ca0){
#line 54
  unsigned int __nesc_result;
#line 54

#line 54
  switch (arg_0x40b58ca0) {
#line 54
    case PppIpv6C__Protocol:
#line 54
      __nesc_result = PppIpv6P__PppProtocol__getProtocol();
#line 54
      break;
#line 54
    case PppPrintfC__Protocol:
#line 54
      __nesc_result = PppPrintfP__PppProtocol__getProtocol();
#line 54
      break;
#line 54
    case PppIpv6C__ControlProtocol:
#line 54
      __nesc_result = PppIpv6P__PppControlProtocol__getProtocol();
#line 54
      break;
#line 54
    case LinkControlProtocolC__Protocol:
#line 54
      __nesc_result = LinkControlProtocolP__PppProtocol__getProtocol();
#line 54
      break;
#line 54
    default:
#line 54
      __nesc_result = PppP__PppProtocol__default__getProtocol(arg_0x40b58ca0);
#line 54
      break;
#line 54
    }
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 354 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline void PppP__processFrame_task__runTask(void )
{
  unsigned int protocol;
  error_t rc;
  PppP__Frame_t *apf;
  const uint8_t *dp;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 361
    {
      if (0 == PppP__readyFrameIdx__) {
          {
#line 363
            __nesc_atomic_end(__nesc_atomic); 
#line 363
            return;
          }
        }
#line 365
      apf = PppP__readyFrame__;
    }
#line 366
    __nesc_atomic_end(__nesc_atomic); }
  dp = apf->start;









  protocol = * dp++;
  if (!(protocol & 1)) {
      protocol = (protocol << 8) + * dp++;
    }



  if (0 != PppP__PppProtocol__getProtocol(protocol)) {

      rc = PppP__PppProtocol__process(protocol, dp, apf->end - dp);
    }
  else 
#line 387
    {
      rc = PppP__PppProtocolReject__process(protocol, dp, apf->end - dp);
    }

  if (ERETRY == rc) {



      PppP__processFrame_task__postTask();
    }
  else 
#line 396
    {
      PppP__HdlcFraming__releaseReceivedFrame(apf->start);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 398
        {


          if (0 < --PppP__readyFrameIdx__) {

              memmove(PppP__readyFrame__, PppP__readyFrame__ + 1, PppP__readyFrameIdx__ * sizeof  (*PppP__readyFrame__));
              PppP__processFrame_task__postTask();
            }
        }
#line 406
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 71 "/opt/tinyos-2.x/tos/lib/ppp/Ppp.nc"
inline static uint8_t */*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__Ppp__getOutputFrame(unsigned int protocol, const uint8_t **frame_endp, bool inhibit_compression, frame_key_t *keyp){
#line 71
  unsigned char *__nesc_result;
#line 71

#line 71
  __nesc_result = PppP__Ppp__getOutputFrame(protocol, frame_endp, inhibit_compression, keyp);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71










inline static error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__Ppp__fixOutputFrameLength(frame_key_t arg_0x40b3f0f8, const uint8_t *frame_end){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = PppP__Ppp__fixOutputFrameLength(arg_0x40b3f0f8, frame_end);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
#line 97
inline static error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__Ppp__sendOutputFrame(frame_key_t key){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = PppP__Ppp__sendOutputFrame(key);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 192 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static inline error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__sendFrame(const uint8_t *data, 
unsigned int len, 
bool inhibit_accomp)
{
  error_t rc;
  uint8_t *tp;

  if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__TX_idle != /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txState_) {
      return EBUSY;
    }

  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txState_ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__TX_active;
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txCrc_ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__FCS16_Initial;
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txStart_ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txPtr_ = data;
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txEnd_ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txStart_ + len;
  tp = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txTemporary_;
  * tp++ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_FlagSequence;
  if (inhibit_accomp || ! /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__options__.txSuppressAddressControl) {
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txCrc_ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__fcs16_update(/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txCrc_, /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_AllStationsAddress);
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txCrc_ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__fcs16_update(/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txCrc_, /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlFieldValue);
      * tp++ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_AllStationsAddress;
      if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__mustEscape(/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlFieldValue, /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__options__.txAsyncControlCharacterMap)) {
          * tp++ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlEscape;
          * tp++ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlFieldValue ^ /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlModifier;
        }
      else 
#line 216
        {
          * tp++ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlFieldValue;
        }
    }
  rc = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcUart__send(/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txTemporary_, tp - /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txTemporary_);
  if (SUCCESS != rc) {
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__txState_ = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__TX_idle;
    }
  return rc;
}

# 65 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFraming.nc"
inline static error_t PppP__HdlcFraming__sendFrame(const uint8_t *data, unsigned int len, bool inhibit_accomp){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFraming__sendFrame(data, len, inhibit_accomp);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 191 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline void PppP__transmitEngine_task__runTask(void )
{
  PppP__HdlcTxFrame_t *tfp;
  error_t rc;



  if (0 == PppP__queuedTxFrameIdx_ || PppP__activeTxFrame_) {
      return;
    }

  tfp = PppP__queuedTxFrame_[0];
  if (0 < --PppP__queuedTxFrameIdx_) {
      memmove(PppP__queuedTxFrame_, PppP__queuedTxFrame_ + 1, PppP__queuedTxFrameIdx_ * sizeof  (*PppP__queuedTxFrame_));
    }

  rc = PppP__HdlcFraming__sendFrame(tfp->start, 
  tfp->end - tfp->start, 
  ! !(tfp->frame_state & PppP__TFS_INHIBIT_COMPRESSION));

  if (SUCCESS == rc) {
      tfp->frame_state = PppP__TFS_transmitting;
      PppP__activeTxFrame_ = tfp;
    }
  else 
#line 214
    {
      PppP__releaseTxFrame_(tfp, rc, TRUE);
    }
}

# 723 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__down(void )
{
  return /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__processEvent_(LAE_Down, 0);
}

# 65 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static error_t PppDaemonP__LcpAutomaton__down(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__down();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 61 "/opt/tinyos-2.x/tos/lib/ppp/PppDaemonP.nc"
static inline void PppDaemonP__PppControl__stopDone(error_t rc)
{
  if (SUCCESS == rc) {
      PppDaemonP__LcpAutomaton__down();
    }
}

# 138 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void PppP__SplitControl__stopDone(error_t error){
#line 138
  PppDaemonP__PppControl__stopDone(error);
#line 138
}
#line 138
# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart1RxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 253 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1TxControl__stop(void )
#line 253
{
  * (volatile uint8_t *)0xC9 &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart1TxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 93 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t DefaultHdlcUartP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 101 "/opt/tinyos-2.x/tos/lib/ppp/DefaultHdlcUartP.nc"
static inline error_t DefaultHdlcUartP__StdControl__stop(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 103
    DefaultHdlcUartP__rbStore_ = DefaultHdlcUartP__rbLoad_ = 0;
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return DefaultHdlcUartP__SerialControl__stop();
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__UartControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = DefaultHdlcUartP__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 639 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static inline error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__StdControl__stop(void )
{




  return /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__UartControl__stop();
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t PppP__HdlcControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 720 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__up(void )
#line 720
{
  return /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__processEvent_(LAE_Up, 0);
}

# 58 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static error_t PppDaemonP__LcpAutomaton__up(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__up();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 53 "/opt/tinyos-2.x/tos/lib/ppp/PppDaemonP.nc"
static inline void PppDaemonP__PppControl__startDone(error_t rc)
{
  if (SUCCESS == rc) {
      PppDaemonP__LcpAutomaton__up();
    }
}

# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void PppP__SplitControl__startDone(error_t error){
#line 113
  PppDaemonP__PppControl__startDone(error);
#line 113
}
#line 113
# 93 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline void PppP__controlEngine_task__runTask(void )
{
  if (PppP__CS_started == PppP__controlState_) {
      PppP__SplitControl__startDone(PppP__controlResult_);
    }
  else {
#line 97
    if (PppP__CS_stopped == PppP__controlState_) {

        PppP__HdlcControl__stop();
        PppP__SplitControl__stopDone(PppP__controlResult_);
      }
    }
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

# 100 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialResetP.nc"
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x40a01b68, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x40a01b68) {
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
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x40a01b68, msg, upperLen);
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
# 54 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialResetP.nc"
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

# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
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
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x4091ce00, message_t * msg, error_t error){
#line 110
    /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(arg_0x4091ce00, msg, error);
#line 110
}
#line 110
# 101 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 66 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialResetP.nc"
static inline void SerialResetP__Send__sendDone(message_t *msg, error_t error)
{
  if (error != SUCCESS) {
    SerialResetP__sendAck__postTask();
    }
  else {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {

           __asm volatile ("in __tmp_reg__,__SREG__""\n\t""cli""\n\t""wdr""\n\t""sts %0,%1""\n\t""out __SREG__,__tmp_reg__""\n\t""sts %0,%2""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((1 << 4) | (1 << 3)), "r"((uint8_t )(((1 & 0x08 ? 1 << 5 : 0x00) | (1 << 3)) | (1 & 0x07))) : "r0");
          while (1) ;
        }
#line 78
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
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x40a01068, message_t * msg, error_t error){
#line 100
  switch (arg_0x40a01068) {
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
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x40a01068, msg, error);
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
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x409347d8, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x409347d8, msg, payload, len);
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

# 82 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialResetP.nc"
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
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x40a04a00, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x40a04a00) {
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
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x40a04a00, msg, payload, len);
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

# 105 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialResetP.nc"
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x40a01b68, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x40a01b68) {
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
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x40a01b68, msg, dataLinkLen);
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
# 73 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialAutoControlP.nc"
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
# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__stop();
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
# 68 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialAutoControlP.nc"
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
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__start();
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

# 246 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1TxControl__start(void )
#line 246
{
  * (volatile uint8_t *)0xC9 |= 1 << 3;
  * (volatile uint8_t *)0xC9 &= ~(1 << 6);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart1TxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 259 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1RxControl__start(void )
#line 259
{
  * (volatile uint8_t *)0xC9 |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart1RxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 284 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart1__enableRxIntr(void )
#line 284
{
  * (volatile uint8_t *)0xC9 |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart1__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
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
# 57 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialAutoControlP.nc"
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
# 46 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialAutoControlP.nc"
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

# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void VoltageP__Timer__startOneShot(uint32_t dt){
#line 73
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 56 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortF*/AtmegaGeneralIOP__5__Pin__makeOutput(uint8_t bit)
#line 56
{
#line 56
  * (volatile uint8_t * )48U |= 1 << bit;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void VoltageP__MeasureBridge__makeOutput(void ){
#line 46
  /*AtmegaGeneralIOC.PortF*/AtmegaGeneralIOP__5__Pin__makeOutput(0);
#line 46
}
#line 46
# 51 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortF*/AtmegaGeneralIOP__5__Pin__clr(uint8_t bit)
#line 51
{
#line 51
  * (volatile uint8_t * )49U &= ~(1 << bit);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void VoltageP__MeasureBridge__clr(void ){
#line 41
  /*AtmegaGeneralIOC.PortF*/AtmegaGeneralIOP__5__Pin__clr(0);
#line 41
}
#line 41
# 58 "/opt/tinyos-2.x/tos/platforms/ucmini/VoltageP.nc"
static inline error_t VoltageP__VoltageMilliVolts__read(void )
{
  VoltageP__MeasureBridge__clr();
  VoltageP__MeasureBridge__makeOutput();

  VoltageP__Timer__startOneShot(1);
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Service__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = VoltageP__VoltageMilliVolts__read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 31 "/opt/tinyos-2.x/tos/system/MultiplexedReadC.nc"
static inline void /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Resource__granted(uint8_t client)
#line 31
{
  /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Service__read();
}

# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Resource__granted(uint8_t arg_0x40764380){
#line 102
  /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Resource__granted(arg_0x40764380);
#line 102
}
#line 102
# 216 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x407621b8){
#line 59
    /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(arg_0x407621b8);
#line 59
}
#line 59
# 190 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__resId = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__reqResId;
      /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__state = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__resId);
  /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Resource__granted(/*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__resId);
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static void VoltageP__VoltageMilliVolts__readDone(error_t result, VoltageP__VoltageMilliVolts__val_t val){
#line 63
  /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Service__readDone(result, val);
#line 63
}
#line 63
# 103 "/opt/tinyos-2.x/tos/platforms/ucmini/VoltageP.nc"
static inline void VoltageP__calcTask__runTask(void )
{
  uint16_t rv = 1500;
  uint16_t fs_bit = 10;
  uint32_t temp = 0;

#line 108
  if (VoltageP__err == SUCCESS) 
    {
      temp = (uint32_t )VoltageP__rawAdc * rv >> fs_bit;
      temp *= 6;

      VoltageP__milliVolts = (uint16_t )temp;
    }
  else {
#line 115
    VoltageP__milliVolts = 0;
    }
  VoltageP__VoltageMilliVolts__readDone(VoltageP__err, VoltageP__milliVolts);
}

# 166 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline uint8_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void )
#line 166
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 167
    {
      if (/*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__state != /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__RES_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 169
          /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__NO_RES;

          {
#line 169
            __nesc_atomic_end(__nesc_atomic); 
#line 169
            return __nesc_temp;
          }
        }
#line 170
      {
        unsigned char __nesc_temp = 
#line 170
        /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__resId;

        {
#line 170
          __nesc_atomic_end(__nesc_atomic); 
#line 170
          return __nesc_temp;
        }
      }
    }
#line 173
    __nesc_atomic_end(__nesc_atomic); }
}

# 98 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 208 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void ){
#line 46
  /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 218 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x407621b8){
#line 65
    /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(arg_0x407621b8);
#line 65
}
#line 65
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qHead != /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__resQ[/*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
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
      /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__state == /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__RES_BUSY && /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__resId == id) {
          if (/*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty() == FALSE) {
              /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__reqResId = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue();
              /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__resId = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__NO_RES;
              /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__state = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING;
              /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask();
              /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
            }
          else {
              /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__resId = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__default_owner_id;
              /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__state = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
              /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
              /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Resource__release(uint8_t arg_0x40875558){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Resource__release(arg_0x40875558);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 149 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void BatteryWarningP__Leds__set(uint8_t val){
#line 149
  LedsP__Leds__set(val);
#line 149
}
#line 149
# 66 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
inline static void BatteryWarningP__BusyWait__wait(BatteryWarningP__BusyWait__size_type dt){
#line 66
  /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(dt);
#line 66
}
#line 66
# 119 "/opt/tinyos-2.x/tos/platforms/ucmini/Leds.nc"
inline static void BatteryWarningP__Leds__led3Toggle(void ){
#line 119
  LedsP__Leds__led3Toggle();
#line 119
}
#line 119
#line 69
inline static void BatteryWarningP__Leds__led0Toggle(void ){
#line 69
  LedsP__Leds__led0Toggle();
#line 69
}
#line 69
#line 102
inline static void BatteryWarningP__Leds__led2Toggle(void ){
#line 102
  LedsP__Leds__led2Toggle();
#line 102
}
#line 102
#line 85
inline static void BatteryWarningP__Leds__led1Toggle(void ){
#line 85
  LedsP__Leds__led1Toggle();
#line 85
}
#line 85
#line 58
inline static void BatteryWarningP__Leds__led0On(void ){
#line 58
  LedsP__Leds__led0On();
#line 58
}
#line 58
#line 74
inline static void BatteryWarningP__Leds__led1On(void ){
#line 74
  LedsP__Leds__led1On();
#line 74
}
#line 74
# 31 "/opt/tinyos-2.x/tos/platforms/ucmini/BatteryWarningP.nc"
static __inline void BatteryWarningP__blinkLeds(uint8_t count, bool inner)
#line 31
{
  uint8_t i;

#line 33
  BatteryWarningP__Leds__set(0);
  if (inner) {
    BatteryWarningP__Leds__led1On();
    }
  else {
#line 37
    BatteryWarningP__Leds__led0On();
    }
#line 38
  BatteryWarningP__BusyWait__wait(50000U);
  for (i = 0; i <= count; count == 0 ? (i = 0) : i++) {
      if (inner) {
          BatteryWarningP__Leds__led1Toggle();
          BatteryWarningP__Leds__led2Toggle();
        }
      else 
#line 43
        {
          BatteryWarningP__Leds__led0Toggle();
          BatteryWarningP__Leds__led3Toggle();
        }
      BatteryWarningP__BusyWait__wait(50000U);
    }
  BatteryWarningP__Leds__set(0);
}

static inline void BatteryWarningP__Voltage__readDone(error_t err, uint16_t voltage)
#line 52
{
  if (err == SUCCESS) {
      if (BatteryWarningP__switchState == BATTERY_SWITCH_RECHARGABLE && voltage < 3600) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 55
            {
              BatteryWarningP__blinkLeds(3, TRUE);
              * (volatile uint8_t *)0x64 = 0xff;
#line 57
              * (volatile uint8_t *)0x65 = 0xff;
#line 57
              * (volatile uint8_t *)0x63 = 0xff;
              * (volatile uint8_t *)(0x33 + 0x20) |= 1 << 0;
               __asm volatile ("sleep" :  :  : "memory");
              * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
            }
#line 61
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {
#line 62
        if (BatteryWarningP__switchState == BATTERY_SWITCH_NOT_RECHARGABLE && voltage > 3200) {
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 63
              {
                BatteryWarningP__blinkLeds(0, FALSE);
              }
#line 65
              __nesc_atomic_end(__nesc_atomic); }
          }
        }
    }
}

# 46 "/opt/tinyos-2.x/tos/system/MultiplexedReadC.nc"
static inline void /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__width_t data)
#line 46
{
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static void /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__readDone(uint8_t arg_0x4087a930, error_t result, /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__val_t val){
#line 63
  switch (arg_0x4087a930) {
#line 63
    case 0U:
#line 63
      BatteryWarningP__Voltage__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__default__readDone(arg_0x4087a930, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t VoltageP__calcTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(VoltageP__calcTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 54 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortF*/AtmegaGeneralIOP__5__Pin__makeInput(uint8_t bit)
#line 54
{
#line 54
  * (volatile uint8_t * )48U &= ~(1 << bit);
}

# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void VoltageP__MeasureBridge__makeInput(void ){
#line 44
  /*AtmegaGeneralIOC.PortF*/AtmegaGeneralIOP__5__Pin__makeInput(0);
#line 44
}
#line 44
# 92 "/opt/tinyos-2.x/tos/platforms/ucmini/VoltageP.nc"
static inline void VoltageP__AdcRaw__readDone(error_t result, uint16_t val)
{
  VoltageP__err = result;

  VoltageP__MeasureBridge__makeInput();

  VoltageP__rawAdc = val;
  VoltageP__calcTask__postTask();
}

# 48 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(uint8_t arg_0x4083c408, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val){
#line 63
  switch (arg_0x4083c408) {
#line 63
    case /*SingleVoltageC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 63
      VoltageP__AdcRaw__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(arg_0x4083c408, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 115 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void )
#line 115
{
  * (volatile uint8_t *)0x7A &= ~(1 << 7);
  HplAtm128AdcP__McuPowerState__update();
}

# 112 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableAdc(void ){
#line 112
  HplAtm128AdcP__HplAtm128Adc__disableAdc();
#line 112
}
#line 112
# 131 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__stop(void )
#line 131
{
  /* atomic removed: atomic calls only */
#line 132
  Atm128AdcP__HplAtm128Adc__disableAdc();

  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = Atm128AdcP__AsyncStdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 84 "/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 84
{
}

# 62 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 79 "/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 79
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 218 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x407621b8){
#line 65
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x407621b8);
#line 65
}
#line 65
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 85
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 66 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__NO_RES;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 47 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(uint8_t arg_0x40839300){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x40839300) {
#line 120
    case /*SingleVoltageC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 120
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SingleVoltageC.AdcReadClientC*/AdcReadClientC__0__HAL_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(arg_0x40839300);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 39 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(client, result, data);
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static void AdcP__Read__readDone(uint8_t arg_0x407972e8, error_t result, AdcP__Read__val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(arg_0x407972e8, result, val);
#line 63
}
#line 63
# 104 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
static inline void AdcP__acquiredData__runTask(void )
#line 104
{
  AdcP__state = AdcP__IDLE;
  AdcP__Read__readDone(AdcP__client, SUCCESS, AdcP__val);
}

#line 87
static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient)
#line 87
{

  AdcP__state = newState;
  AdcP__client = newClient;
  AdcP__sample();

  return SUCCESS;
}

static inline error_t AdcP__Read__read(uint8_t c)
#line 96
{
  return AdcP__startGet(AdcP__ACQUIRE_DATA, c);
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(uint8_t arg_0x4083a428){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = AdcP__Read__read(arg_0x4083a428);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client)
#line 35
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(client);
}

# 202 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x40764380){
#line 102
  switch (arg_0x40764380) {
#line 102
    case /*SingleVoltageC.AdcReadClientC*/AdcReadClientC__0__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SingleVoltageC.AdcReadClientC*/AdcReadClientC__0__ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x40764380);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x407621b8){
#line 59
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x407621b8);
#line 59
}
#line 59
# 190 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
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

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static void BatterySwitchP__Read__readDone(error_t result, BatterySwitchP__Read__val_t val){
#line 63
  BatteryWarningP__Switch__readDone(result, val);
#line 63
}
#line 63
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline bool /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__get(uint8_t bit)
#line 49
{
#line 49
  return (* (volatile uint8_t * )41U & (1 << bit)) != 0;
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool BatterySwitchP__GeneralIO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__get(5);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 54 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline void /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__makeInput(uint8_t bit)
#line 54
{
#line 54
  * (volatile uint8_t * )42U &= ~(1 << bit);
}

# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void BatterySwitchP__GeneralIO__makeInput(void ){
#line 44
  /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__makeInput(5);
#line 44
}
#line 44
# 57 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline bool /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__isOutput(uint8_t bit)
#line 57
{
#line 57
  return (* (volatile uint8_t * )42U & (1 << bit)) != 0;
}

# 47 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool BatterySwitchP__GeneralIO__isOutput(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = /*AtmegaGeneralIOC.PortD*/AtmegaGeneralIOP__3__Pin__isOutput(5);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 18 "/opt/tinyos-2.x/tos/platforms/ucmini/BatterySwitchP.nc"
static inline void BatterySwitchP__Timer__fired(void )
#line 18
{
  if (BatterySwitchP__GeneralIO__isOutput()) {
      BatterySwitchP__GeneralIO__makeInput();
      BatterySwitchP__Timer__startOneShot(1);
    }
  else 
#line 22
    {
      if (BatterySwitchP__GeneralIO__get()) {
        BatterySwitchP__Read__readDone(SUCCESS, BATTERY_SWITCH_NOT_RECHARGABLE);
        }
      else {
#line 26
        BatterySwitchP__Read__readDone(SUCCESS, BATTERY_SWITCH_RECHARGABLE);
        }
    }
}

# 133 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 111 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void )
#line 111
{
  * (volatile uint8_t *)0x7A |= 1 << 7;
  HplAtm128AdcP__McuPowerState__update();
}

# 108 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__enableAdc(void ){
#line 108
  HplAtm128AdcP__HplAtm128Adc__enableAdc();
#line 108
}
#line 108
# 126 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__start(void )
#line 126
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    Atm128AdcP__HplAtm128Adc__enableAdc();
#line 127
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = Atm128AdcP__AsyncStdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 69 "/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 97 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x40764da8){
#line 53
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x40764da8);
#line 53
}
#line 53
# 77 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
#line 84
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 44 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client)
#line 44
{
  return FAIL;
}

# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(uint8_t arg_0x40839300){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x40839300) {
#line 88
    case /*SingleVoltageC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 88
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SingleVoltageC.AdcReadClientC*/AdcReadClientC__0__HAL_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(arg_0x40839300);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 31 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client)
#line 31
{
  return /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(client);
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t VoltageP__AdcRaw__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SingleVoltageC.AdcReadClientC*/AdcReadClientC__0__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 67 "/opt/tinyos-2.x/tos/platforms/ucmini/VoltageP.nc"
static inline void VoltageP__Timer__fired(void )
#line 67
{
  VoltageP__err = VoltageP__AdcRaw__read();

  if (VoltageP__err != SUCCESS) 
    {
      VoltageP__MeasureBridge__makeInput();
      VoltageP__VoltageMilliVolts__readDone(VoltageP__err, 0);
    }
}

# 204 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x4068c8f0){
#line 83
  switch (arg_0x4068c8f0) {
#line 83
    case 0U:
#line 83
      BatterySwitchP__Timer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      VoltageP__Timer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x4068c8f0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
static __inline bool /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__get(uint8_t bit)
#line 49
{
#line 49
  return (* (volatile uint8_t * )35U & (1 << bit)) != 0;
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool BatteryWarningP__GeneralIO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__get(5);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 133 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__resId == /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__default_owner_id) {
          if (/*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__state == /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING) {
              /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__state == /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__RES_IMM_GRANTING) {
                /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__resId = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__reqResId;
                /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__state = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

#line 210
static inline void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested(void )
#line 210
{
  /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void ){
#line 73
  /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 64 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__resQ[id] != /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__resQ[/*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__qTail = id;
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
inline static error_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__requested(uint8_t arg_0x40764da8){
#line 53
    /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(arg_0x40764da8);
#line 53
}
#line 53
# 77 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Resource__request(uint8_t id)
#line 77
{
  /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__requested(/*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__state == /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED) {
          /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__state = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING;
          /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__reqResId = id;
        }
      else {
#line 84
        if (/*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Resource__request(uint8_t arg_0x40875558){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__Resource__request(arg_0x40875558);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 27 "/opt/tinyos-2.x/tos/system/MultiplexedReadC.nc"
static inline error_t /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__read(uint8_t client)
#line 27
{
  return /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Resource__request(client);
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t BatteryWarningP__Voltage__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__read(0U);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
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

# 61 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__resQ, /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__resQ);
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
# 43 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool SerialAutoControlP__ControlPin__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__get(5);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 79 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialAutoControlP.nc"
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
static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (115200L == 19200UL) {
    /*Atm128Uart1C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (115200L == 57600UL) {
      /*Atm128Uart1C.UartP*/Atm128UartP__0__m_byte_time = 68;
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

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(115200L);
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

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(115200L);
  * (volatile uint8_t *)0xC4 = ubrr0;
  * (volatile uint8_t *)0xC5 = ubrr0 >> 8;
  * (volatile uint8_t *)0xC0 = stts.flat;
  * (volatile uint8_t *)0xC2 = mode.flat;
  * (volatile uint8_t *)0xC1 = ctrl.flat;

  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
static inline error_t /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__Init__init(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__initialize__();
  return SUCCESS;
}

# 60 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static inline error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__Init__init(void )
{
  return SUCCESS;
}

# 84 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Init__init(void )
{
  uint8_t *otp = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__optionTypes_;
  uint8_t *otpe = otp + sizeof /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__optionTypes_ / sizeof  (*otp) - 1;
  uint8_t type = 0;

  while (0 != ++type && otp < otpe) {
      if (0 != /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__getType(type)) {
          * otp++ = type;
        }
    }
  *otp = 0;
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Init__init(void )
{
  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeAlarmC.nc"
static inline error_t /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void )
#line 82
{
  memset(&/*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m, 0, sizeof /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m);
  return SUCCESS;
}

# 78 "/opt/tinyos-2.x/tos/lib/ppp/PppIpv6P.nc"
static inline error_t PppIpv6P__Init__init(void )
{
  return SUCCESS;
}

# 84 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static inline error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Init__init(void )
{
  uint8_t *otp = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__optionTypes_;
  uint8_t *otpe = otp + sizeof /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__optionTypes_ / sizeof  (*otp) - 1;
  uint8_t type = 0;

  while (0 != ++type && otp < otpe) {
      if (0 != /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__getType(type)) {
          * otp++ = type;
        }
    }
  *otp = 0;
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Init__init(void )
{
  return SUCCESS;
}

# 98 "/opt/tinyos-2.x/tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void )
#line 98
{
  error_t rv = SUCCESS;

  __iob[1] = &atm128_stdout;

  return rv;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PutcharP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PppIpv6P__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart0Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart1C.UartP*/Atm128UartP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialAutoControlP__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*VoltageArbiterP.FcfsArbiterC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t PppP__controlEngine_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PppP__controlEngine_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 423 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline void PppP__initializeOptions_(void )
{
  PppP__options.txProtocolFieldCompression = FALSE;
  PppP__options.rxProtocolFieldCompression = FALSE;
  PppP__options.txMaximumReceiveUnit = 1280;
  PppP__options.rxMaximumReceiveUnit = 1280;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__UartControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = DefaultHdlcUartP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 626 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static inline error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__StdControl__start(void )
{
  error_t rc = SUCCESS;



  (void )/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__UartControl__start();
  if (SUCCESS == rc) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 634
        rc = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__startNewFrame_async__();
#line 634
        __nesc_atomic_end(__nesc_atomic); }
    }
  return rc;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t PppP__HdlcControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 431 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static inline error_t PppP__SplitControl__start(void )
{
  error_t rc;

  rc = PppP__HdlcControl__start();
  if (SUCCESS != rc) {
      return rc;
    }

  PppP__initializeOptions_();
  PppP__controlState_ = PppP__CS_started;
  PppP__controlResult_ = SUCCESS;
  PppP__controlEngine_task__postTask();
  return rc;
}

# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t PppDaemonP__PppControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = PppP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 727 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__open(void )
{
  return /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__processEvent_(LAE_Open, 0);
}

# 75 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static error_t PppDaemonP__LcpAutomaton__open(void ){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__open();
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 44 "/opt/tinyos-2.x/tos/lib/ppp/PppDaemonP.nc"
static inline error_t PppDaemonP__SplitControl__start(void )
{
  error_t rc;

#line 47
  rc = PppDaemonP__LcpAutomaton__open();
  if (SUCCESS != rc) {
      return rc;
    }
  return PppDaemonP__PppControl__start();
}

# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t TestP__Ppp__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = PppDaemonP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 727 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static inline error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__open(void )
{
  return /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__processEvent_(LAE_Open, 0);
}

# 75 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomaton.nc"
inline static error_t TestP__Ipv6LcpAutomaton__open(void ){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__open();
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 44 "TestP.nc"
static inline void TestP__Boot__booted(void )
#line 44
{
  error_t rc;

  TestP__LinkDownLed__on();
  rc = TestP__Ipv6LcpAutomaton__open();
  rc = TestP__Ppp__start();
}

# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  TestP__Boot__booted();
#line 60
}
#line 60
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t DefaultHdlcUartP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 157 "/opt/tinyos-2.x/tos/chips/atm128rfa1/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 157
{
  return m1 < m2 ? m1 : m2;
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

# 153 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline mcu_power_t HplAtm128AdcP__McuPowerOverride__lowestState(void )
#line 153
{
  if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x7A & (1 << 7)) {
      return ATM128_POWER_ADC_NR;
    }
  else {
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

# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128UartP__McuPowerOverride__lowestState();
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtmRfa1Timer1P__McuPowerOverride__lowestState());
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtm128AdcP__McuPowerOverride__lowestState());
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtmRfa1TimerMacP__McuPowerOverride__lowestState());
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
# 129 "/opt/tinyos-2.x/tos/lib/ppp/PppPrintfP.nc"
static inline int PppPrintfP__Putchar__putchar(int c)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (!PppPrintfP__disabled__ && PppPrintfP__bufferIndex_ < sizeof PppPrintfP__buffer_) {
          PppPrintfP__buffer_[PppPrintfP__bufferIndex_++] = c;
          PppPrintfP__sendBuffer_task__postTask();
        }
    }
#line 136
    __nesc_atomic_end(__nesc_atomic); }
  return c;
}

# 49 "/opt/tinyos-2.x/tos/lib/printf/Putchar.nc"
inline static int PutcharP__Putchar__putchar(int c){
#line 49
  int __nesc_result;
#line 49

#line 49
  __nesc_result = PppPrintfP__Putchar__putchar(c);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
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

# 107 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
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

  /* atomic removed: atomic calls only */
  {
    time.ll = * (volatile uint8_t *)0xE1;
    time.lh = * (volatile uint8_t *)0xE2;
    time.hl = * (volatile uint8_t *)0xE3;
    time.hh = * (volatile uint8_t *)0xE4;
  }

  return time.full;
}

#line 265
__attribute((signal))   void __vector_66(void )
#line 265
{
#line 265
  HplAtmRfa1TimerMacP__CompareB__fired();
}

# 87 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeAlarmC.nc"
static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm(void )
#line 87
{
  if (! /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling) {








      const /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type now = /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow();
      const /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t *pEnd = /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm + /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS;
      bool isset = FALSE;
      /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t *p = /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm;
      bool *pset = /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset;
      /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt = (/*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )0 - (/*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )1;

      for (; p != pEnd; p++, pset++) {
          if (*pset) {
              /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type elapsed = now - p->t0;

#line 107
              if (p->dt <= elapsed) {
                  p->t0 += p->dt;
                  p->dt = 0;
                }
              else {
                  p->t0 = now;
                  p->dt -= elapsed;
                }

              if (p->dt <= dt) {
                  dt = p->dt;
                  isset = TRUE;
                }
            }
        }

      if (isset) {




          if (dt & ((/*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )1 << (8 * sizeof(/*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type ) - 1))) {
            dt >>= 1;
            }
          /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(now, dt);
        }
      else {
          /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop();
        }
    }
}

# 107 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__set_alarm(void )
{
  /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type now = /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__Counter__get();
#line 109
  /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type expires;
#line 109
  /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type remaining;




  expires = /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_t0 + /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_dt;


  remaining = (/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__to_size_type )(expires - now);


  if (/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_t0 <= now) 
    {
      if (expires >= /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__MAX_DELAY) 
    {
      /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_t0 = now + /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__MAX_DELAY;
      /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_dt = remaining - /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__MAX_DELAY;
      remaining = /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__MAX_DELAY;
    }
  else 
    {
      /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_t0 += /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_dt;
      /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__m_dt = 0;
    }
  /*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__AlarmFrom__startAt((/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__from_size_type )now << 6, 
  (/*MuxAlarmMilli32C_.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__1__from_size_type )remaining << 6);
}

# 345 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
__attribute((signal))   void __vector_67(void )
#line 345
{
#line 345
  HplAtmRfa1TimerMacP__CompareC__fired();
}

# 144 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_29(void )
#line 144
{
  uint16_t data = HplAtm128AdcP__HplAtm128Adc__getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP__HplAtm128Adc__dataReady(data);
}

# 63 "/opt/tinyos-2.x/tos/lib/timer/BusyWaitCounterC.nc"
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type t0 = /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get();

      if (dt > /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE) 
        {
          dt -= /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE;
          while (/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get() - t0 <= dt) ;
          t0 += dt;
          dt = /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE;
        }

      while (/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get() - t0 <= dt) ;
    }
#line 80
    __nesc_atomic_end(__nesc_atomic); }
}

# 80 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__to_size_type /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__Counter__get(void )
{
  /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__to_size_type rv = 0;

  /* atomic removed: atomic calls only */
#line 84
  {
    /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__upper_count_type high = /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__m_upper;
    /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__from_size_type low = /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__get();

#line 87
    if (/*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__isOverflowPending()) 
      {






        high++;
        low = /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__CounterFrom__get();
      }
    {
      /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__to_size_type high_to = high;
      /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__to_size_type low_to = low >> /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__LOW_SHIFT_RIGHT;

#line 101
      rv = (high_to << /*BusyWaitMicroC.CounterMicro16C*/TransformCounterC__1__HIGH_SHIFT_LEFT) | low_to;
    }
  }
  return rv;
}

# 83 "/opt/tinyos-2.x/tos/chips/atm1281/adc/AdcP.nc"
static void AdcP__sample(void )
#line 83
{
  AdcP__Atm128AdcSingle__getData(AdcP__channel(), AdcP__refVoltage(), FALSE, AdcP__prescaler());
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static uint8_t HplAtm128AdcP__HplAtm128Adc__getChannel(void )
#line 61
{
  return (* (volatile uint8_t *)0x7C & 0x1F) | (((* (volatile uint8_t *)0x7B & 3) >> 3) << 5);
}

#line 53
static void HplAtm128AdcP__HplAtm128Adc__setChannel(uint8_t mux)
#line 53
{
  * (volatile uint8_t *)0x7C = (* (volatile uint8_t *)0x7C & 0xE0) | (mux & 0x1F);
  if (mux & 0x20) {
    * (volatile uint8_t *)0x7B |= 1 << 3;
    }
  else {
#line 58
    * (volatile uint8_t *)0x7B &= ~(1 << 3);
    }
}

#line 76
static void HplAtm128AdcP__HplAtm128Adc__setRef(uint8_t ref)
#line 76
{
  * (volatile uint8_t *)0x7C = ((ref << 6) & 0xC0) | (* (volatile uint8_t *)0x7C & 0x3F);
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

# 93 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/HplAtmegaPinChange0C.nc"
__attribute((signal))   void __vector_9(void )
#line 93
{
  HplAtmegaPinChange0C__HplAtmegaPinChange__fired();
}

# 92 "/opt/tinyos-2.x/tos/platforms/ucmini/SerialAutoControlP.nc"
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

__attribute((interrupt))   void __vector_27(void )
#line 222
{
  HplAtm128UartP__HplUart0__txDone();
}

#line 313
__attribute((signal))   void __vector_36(void )
#line 313
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0xCE);
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

# 318 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_38(void )
#line 318
{
  HplAtm128UartP__HplUart1__txDone();
}

#line 306
static void HplAtm128UartP__HplUart1__tx(uint8_t data)
#line 306
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 307
    {
      * (volatile uint8_t *)0xCE = data;
      * (volatile uint8_t *)0xC8 |= 1 << 6;
    }
#line 310
    __nesc_atomic_end(__nesc_atomic); }
}

# 155 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_pos++]);

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
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x40421e80){
#line 75
  switch (arg_0x40421e80) {
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
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case AdcP__acquiredData:
#line 75
      AdcP__acquiredData__runTask();
#line 75
      break;
#line 75
    case VoltageP__calcTask:
#line 75
      VoltageP__calcTask__runTask();
#line 75
      break;
#line 75
    case /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__grantedTask:
#line 75
      /*VoltageArbiterP.FcfsArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask();
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
    case PppP__controlEngine_task:
#line 75
      PppP__controlEngine_task__runTask();
#line 75
      break;
#line 75
    case PppP__transmitEngine_task:
#line 75
      PppP__transmitEngine_task__runTask();
#line 75
      break;
#line 75
    case PppP__processFrame_task:
#line 75
      PppP__processFrame_task__runTask();
#line 75
      break;
#line 75
    case PppP__processError_task:
#line 75
      PppP__processError_task__runTask();
#line 75
      break;
#line 75
    case /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__inputEngine_task:
#line 75
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__inputEngine_task__runTask();
#line 75
      break;
#line 75
    case /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__uartStreamSendDone:
#line 75
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__uartStreamSendDone__runTask();
#line 75
      break;
#line 75
    case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeAutomaton_task:
#line 75
      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeAutomaton_task__runTask();
#line 75
      break;
#line 75
    case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimerFired_task:
#line 75
      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimerFired_task__runTask();
#line 75
      break;
#line 75
    case DefaultHdlcUartP__streamFeeder_task:
#line 75
      DefaultHdlcUartP__streamFeeder_task__runTask();
#line 75
      break;
#line 75
    case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeAutomaton_task:
#line 75
      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeAutomaton_task__runTask();
#line 75
      break;
#line 75
    case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimerFired_task:
#line 75
      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimerFired_task__runTask();
#line 75
      break;
#line 75
    case PppPrintfP__sendBuffer_task:
#line 75
      PppPrintfP__sendBuffer_task__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x40421e80);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 220 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static uint8_t *PppP__Ppp__getOutputFrame(unsigned int protocol, 
const uint8_t **frame_endp, 
bool inhibit_compression, 
frame_key_t *keyp)
{
  error_t rc;
  uint8_t *fp;
  bool pcomp;
  PppP__HdlcTxFrame_t *tfp = PppP__txFrames_;

  while (tfp < PppP__txFramesEnd_) {
      if (PppP__TFS_unused == tfp->frame_state) {
          break;
        }
      ++tfp;
    }
  if (PppP__txFramesEnd_ <= tfp) {

      return 0;
    }

  rc = PppP__TransmitFramePool__request(& tfp->start, & tfp->end, 16);
  if (SUCCESS != rc) {

      return 0;
    }
  tfp->frame_state = PppP__TFS_filling;
  if (inhibit_compression) {
      tfp->frame_state |= PppP__TFS_INHIBIT_COMPRESSION;
    }
  pcomp = PppP__options.txProtocolFieldCompression && !inhibit_compression;

  if (keyp) {
      *keyp = tfp->start;
    }
  fp = tfp->start;
  if (frame_endp) {
      *frame_endp = tfp->end;
    }


  if (
#line 260
  0x100 > protocol
   && pcomp) {
      * fp++ = protocol;
    }
  else 
#line 263
    {
      * fp++ = protocol >> 8;
      * fp++ = protocol & 0x0FF;
    }

  return fp;
}

# 129 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
static error_t /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__request(fragment_pool_id_t pid, uint8_t **start, 
uint8_t **end, 
unsigned int minimum_size)
{
  FragmentPoolSlot_t *sp;
  FragmentPoolSlot_t *spe;
  FragmentPoolSlot_t *bsp;
  unsigned int bsp_length;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 138
    {
      do {
#line 139
          if (!/*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__initialized__) {
#line 139
              /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__initialize__();
            }
        }
      while (
#line 139
      0);

      sp = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__pools__[pid].slots;
      spe = sp + /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__pools__[pid].slot_count;



      bsp = 0;
      bsp_length = minimum_size;
      while (sp < spe) {
          if (0 < sp->length && bsp_length <= sp->length) {
              bsp = sp;
              bsp_length = sp->length;
            }
          ++sp;
        }


      if (!bsp) {
          {
            unsigned char __nesc_temp = 
#line 158
            ENOMEM;

            {
#line 158
              __nesc_atomic_end(__nesc_atomic); 
#line 158
              return __nesc_temp;
            }
          }
        }
      *start = bsp->start;
      *end = bsp->start + bsp->length;
      bsp->length = - bsp->length;
      (void )0;
    }
#line 166
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 73
static void /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__initialize__(void )
#line 73
{
  if (!/*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__initialized__) {
      int pid;





      for (pid = 0; pid < 2; ++pid) {
          /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool_t *pp = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__pools__ + pid;

#line 83
          pp->slots = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__slots(pid);
          pp->slot_count = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__slotCount(pid);
          if (0 < pp->slot_count) {
              pp->slots[0].start = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__pool(pid);
              pp->slots[0].length = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPoolStorage__poolSize(pid);
            }
        }
      /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__initialized__ = TRUE;
    }
}

# 284 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static error_t PppP__Ppp__fixOutputFrameLength(frame_key_t key, 
const uint8_t *frame_end)
{
  PppP__HdlcTxFrame_t *tfp = PppP__findTxFrame_(key);
  error_t rc;

  if (!tfp) {

      return EINVAL;
    }
  if (frame_end == tfp->end) {
    }

  rc = PppP__TransmitFramePool__freeze(tfp->start, frame_end);
  if (SUCCESS == rc) {
      tfp->end = (uint8_t *)frame_end;
      tfp->frame_state = PppP__TFS_fixed | (tfp->frame_state & ~PppP__TFS_STATE_MASK);
    }
  else 
#line 301
    {
      PppP__releaseTxFrame_(tfp, rc, FALSE);
    }
  return rc;
}

#line 271
static PppP__HdlcTxFrame_t *PppP__findTxFrame_(frame_key_t key)
{
  PppP__HdlcTxFrame_t *tfp = PppP__txFrames_;

  while (tfp < PppP__txFramesEnd_) {
      if (tfp->start == key) {
          return tfp;
        }
      ++tfp;
    }
  return 0;
}

# 176 "/opt/tinyos-2.x/tos/lib/fragpool/FragmentPoolImplP.nc"
static error_t /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__freeze(fragment_pool_id_t pid, const uint8_t *start, 
const uint8_t *end)
{
  FragmentPoolSlot_t *sp;
  FragmentPoolSlot_t *spe;
  unsigned int free_length;
  bool need_release = FALSE;


  sp = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__pools__[pid].slots;
  spe = sp + /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__pools__[pid].slot_count;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 187
    {
      uint8_t *fep;







      while (sp < spe && start != sp->start) {
          ++sp;
        }
      if (sp == spe) {
          {
            unsigned char __nesc_temp = 
#line 200
            EINVAL;

            {
#line 200
              __nesc_atomic_end(__nesc_atomic); 
#line 200
              return __nesc_temp;
            }
          }
        }
#line 203
      fep = sp->start - sp->length;
      if (end < sp->start || fep < end) {

          {
            unsigned char __nesc_temp = 
#line 206
            EINVAL;

            {
#line 206
              __nesc_atomic_end(__nesc_atomic); 
#line 206
              return __nesc_temp;
            }
          }
        }

      free_length = fep - end;
      if (1 & free_length) {
          --free_length;
        }

      if (sp->start == end) {


          need_release = TRUE;
          goto post_atomic;
        }

      if (0 == free_length || sp + 1 == spe) {


          {
            unsigned char __nesc_temp = 
#line 226
            SUCCESS;

            {
#line 226
              __nesc_atomic_end(__nesc_atomic); 
#line 226
              return __nesc_temp;
            }
          }
        }
#line 229
      if (0 < sp[1].length) {



          sp->length += free_length;
          ++sp;
          sp->start -= free_length;
          sp->length += free_length;
        }
      else 
#line 237
        {
          if (0 > sp[1].length) {




              if (0 != spe[-1].length) {

                  {
                    unsigned char __nesc_temp = 
#line 245
                    SUCCESS;

                    {
#line 245
                      __nesc_atomic_end(__nesc_atomic); 
#line 245
                      return __nesc_temp;
                    }
                  }
                }
              while (sp + 2 < spe && 0 == spe[-1].length) {
                  --spe;
                }
              memmove(sp + 2, sp + 1, (spe - (sp + 1)) * sizeof  (*sp));
            }
          sp->length += free_length;
          sp[1].start = sp->start - sp->length;
          ++sp;
          sp->length = free_length;
        }
      free_length = sp->length;
      post_atomic: 
        (void )0;
    }
#line 262
    __nesc_atomic_end(__nesc_atomic); }

  if (need_release) {
      return /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__release(pid, start);
    }
  /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__available(pid, free_length);
  return SUCCESS;
}

static error_t /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__release(fragment_pool_id_t pid, const uint8_t *start)
{
  FragmentPoolSlot_t *sp;
  FragmentPoolSlot_t *spe;
  FragmentPoolSlot_t *bsp;
  FragmentPoolSlot_t *asp;
  unsigned int merged_length;


  sp = /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__pools__[pid].slots;
  spe = sp + /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__pools__[pid].slot_count;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 282
    {

      while (sp < spe && start != sp->start) {
          ++sp;
        }





      if (sp == spe) {
          {
            unsigned char __nesc_temp = 
#line 293
            EINVAL;

            {
#line 293
              __nesc_atomic_end(__nesc_atomic); 
#line 293
              return __nesc_temp;
            }
          }
        }
#line 295
      if (0 <= sp->length) {
          {
            unsigned char __nesc_temp = 
#line 296
            EALREADY;

            {
#line 296
              __nesc_atomic_end(__nesc_atomic); 
#line 296
              return __nesc_temp;
            }
          }
        }
      sp->length = - sp->length;



      bsp = asp = sp;
      if (/*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__pools__[pid].slots < bsp && 0 < bsp[-1].length) {
          --bsp;
        }
      if (asp + 1 < spe && 0 < asp[1].length) {
          ++asp;
        }






      sp = bsp;
      if (bsp < asp) {
          int num_freed_slots = asp - bsp;



          asp = bsp;
          while (asp++ < bsp + num_freed_slots) {
              bsp->length += asp->length;
            }



          while (asp < spe) {
              asp[-num_freed_slots] = *asp;
              if (0 == asp->length) {
                  break;
                }
              ++asp;
            }


          bsp = asp - num_freed_slots;
          while (bsp < asp) {
              bsp->length = 0;
              ++bsp;
            }
        }
      merged_length = sp->length;
      (void )0;
    }
#line 347
    __nesc_atomic_end(__nesc_atomic); }
  /*FragmentPoolImplC.FragmentPoolImplP*/FragmentPoolImplP__0__FragmentPool__available(pid, merged_length);
  return SUCCESS;
}

# 257 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static void /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__InputFramePool__available(unsigned int length)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 259
    {
      if (!/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxActiveFrame__) {
          /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__startNewFrame_async__();
        }
    }
#line 263
    __nesc_atomic_end(__nesc_atomic); }
}

#line 227
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__startNewFrame_async__(void )
{
  error_t rc;
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcRxFrame_t *fp;


  fp = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxFrames_;
  while (fp < /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxFramesEnd_ && /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RFS_unused != fp->frame_state) {
      ++fp;
    }
  if (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxFramesEnd_ <= fp) {
      return ENOMEM;
    }


  rc = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__InputFramePool__request(& fp->start, & fp->end, /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__MinimumUsefulBufferLength);
  if (SUCCESS != rc) {
      return rc;
    }

  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxBuffer__ = fp->start;
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxBufferLength__ = fp->end - fp->start;
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxActiveFrame__ = fp;
  /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__rxActiveFrame__->frame_state = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__RFS_receiving;
  return SUCCESS;
}

# 176 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static void PppP__releaseTxFrame_(PppP__HdlcTxFrame_t *fp, 
error_t rc, 
bool post_done)
{
  if (post_done) {
      PppP__Ppp__outputFrameTransmitted(fp->start, rc);
    }
  rc = PppP__TransmitFramePool__release(fp->start);
  if (SUCCESS != rc) {
    }

  fp->frame_state = PppP__TFS_unused;
  fp->start = fp->end = 0;
}

# 183 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeAlarmC.nc"
static void /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(uint8_t id, /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0, /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt)
#line 183
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    {
      /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].t0 = t0;
      /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].dt = dt;
      /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = TRUE;
      /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm();
    }
#line 189
    __nesc_atomic_end(__nesc_atomic); }
}

# 66 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__start(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__size_type dt){
#line 66
  /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*LinkControlProtocolC.LcpAutomatonC.MuxAlarmMilli32C*/MuxAlarmMilli32C__0__CLIENT_ID, dt);
#line 66
}
#line 66
# 307 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static error_t PppP__Ppp__sendOutputFrame(frame_key_t key)
{
  PppP__HdlcTxFrame_t *tfp = PppP__findTxFrame_(key);

  if (!tfp) {

      return EINVAL;
    }
  if (PppP__TFS_fixed != (tfp->frame_state & PppP__TFS_STATE_MASK)) {
    }

  tfp->frame_state = PppP__TFS_queued | (tfp->frame_state & ~PppP__TFS_STATE_MASK);
  PppP__queuedTxFrame_[PppP__queuedTxFrameIdx_++] = tfp;
  PppP__transmitEngine_task__postTask();
  return SUCCESS;
}

# 537 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__processEventActions_(void )
{
  frame_key_t key = 0;
  error_t rc = SUCCESS;
  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__transitionActions_t action;
  bool suspended = FALSE;
  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__transitionActions_t in_actions;

  in_actions = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_;
  rc = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeResult_;
  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeResult_ = SUCCESS;

  do {
      action = 0;

      if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_) {
          action = 1;
          while (action && !(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ & action)) {
              action <<= 1;
            }
        }


      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ &= ~action;
      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__lastAction_ = action;





      if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartCounterAction_ == action) {
          --/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartCounter_;
        }

      switch (action) {
          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_noop: 
            break;
          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tlf: 
            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__thisLayerFinished();
          break;
          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tld: 
            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__thisLayerDown();
          break;
          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_zrc: 
            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__initializeRestartCounter(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sta_rep);
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartKey_ = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingSxxKey_;
          break;
          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_irc_scr: 
            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__initializeRestartCounter(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr);
          break;
          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_irc_str: {
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__initializeRestartCounter(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_str);
              break;
            }
          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_resetRemoteOptions: 
            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__PppConfigure__setRemoteOptions(0, 0);
          break;






          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr: 
            if (SUCCESS == rc) {
                /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__PppConfigure__setLocalOptions(PppControlProtocolCode_ConfigureAck, 0, 0);
              }
          if (SUCCESS == rc) {
              rc = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ConfigureRequest__invoke(0, &key);
            }
          if (SUCCESS == rc && key) {
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartKey_ = key;
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeKey_ = key;
              suspended = TRUE;
            }
          else 
#line 611
            {
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartTimer_();
            }
          break;
          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sta_uns: 
            if (SUCCESS == rc) {
                rc = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TerminateAck__invoke(0, &key);
              }
          if (SUCCESS == rc && key) {
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeKey_ = key;
              suspended = TRUE;
            }
          break;
          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sta_rep: 
            case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sca: 
              case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scn: {
                  if (SUCCESS == rc) {
                      rc = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Ppp__sendOutputFrame(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingSxxKey_);
                    }
                  if (SUCCESS == rc) {
                      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeKey_ = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingSxxKey_;
                      suspended = TRUE;
                    }
                  else 
#line 633
                    {
                      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__resumeKey_ = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartKey_ = 0;
                      (void )/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Ppp__releaseOutputFrame(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingSxxKey_);
                    }
                  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingSxxKey_ = 0;
                  break;
                }
          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_str: 
            case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scj: 
              case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_ser: 

                break;
          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_setLocalOptions: 

            case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_setRemoteOptions: 
              if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_setLocalOptions == action) {
                  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__PppConfigure__setLocalOptions(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionMessageCode_, /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSet_, /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSetEnd_);
                }
              else 
#line 650
                {
                  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__PppConfigure__setRemoteOptions(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSet_, /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSetEnd_);
                }
          break;
          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tlu: 
            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__thisLayerUp();
          break;
          case /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tls: 
            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__thisLayerStarted();
          break;
        }
    }
  while (
#line 661
  action && SUCCESS == rc && !suspended);
  if (suspended) {
      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__currentState_ = LAS_TRANSIENT;
    }
  else 
#line 664
    {
      bool disable_restart_timer;
      LcpAutomatonState_e end_state;


      if (SUCCESS == rc) {
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__currentState_ = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_;
        }
      else 
#line 671
        {
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__currentState_ = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__failState_;
        }
      disable_restart_timer = !(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_TimerRunningStates & (1 << /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__currentState_));
      if (disable_restart_timer) {
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartKey_ = 0;
        }
      end_state = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__currentState_;

      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSet_ = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSetEnd_ = 0;
      if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingSxxKey_) {
          (void )/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__Ppp__releaseOutputFrame(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingSxxKey_);
        }

      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingSxxKey_ = 0;

      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__LcpAutomaton__transitionCompleted(end_state);
      if (disable_restart_timer) {
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__stop();
        }
    }
  return rc;
}

# 147 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppConfigure__resetOptions(void )
{
  uint8_t *otp = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__optionTypes_;

#line 150
  while (*otp) {
      uint8_t type = * otp++;

#line 152
      /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__reset(type);
    }
}

# 57 "/opt/tinyos-2.x/tos/platforms/ucmini/PlatformLedP.nc"
static void PlatformLedP__Led__off(uint8_t led_id)
{
  switch (led_id) {
      case 0: PlatformLedP__Leds__led0Off();
#line 60
      break;
      case 1: PlatformLedP__Leds__led1Off();
#line 61
      break;
      case 2: PlatformLedP__Leds__led2Off();
#line 62
      break;
      case 3: PlatformLedP__Leds__led3Off();
#line 63
      break;
    }
}

#line 47
static void PlatformLedP__Led__on(uint8_t led_id)
{
  switch (led_id) {
      case 0: PlatformLedP__Leds__led0On();
#line 50
      break;
      case 1: PlatformLedP__Leds__led1On();
#line 51
      break;
      case 2: PlatformLedP__Leds__led2On();
#line 52
      break;
      case 3: PlatformLedP__Leds__led3On();
#line 53
      break;
    }
}

# 192 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static void /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__initializeRestartCounter(/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__transitionActions_t action)
{
  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartCounterAction_ = action;
  if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr == action) {
      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartCounter_ = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__options_.maxConfigure;
    }
  else {
#line 197
    if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_str == action) {
        /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartCounter_ = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__options_.maxTerminate;
      }
    else {
#line 199
      if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sta_rep == action) {
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartCounter_ = 0;
        }
      else 
#line 201
        {
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__restartCounterAction_ = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_noop;
        }
      }
    }
  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__RestartTimer__stop();
}

# 99 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static void /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__setOptions(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t code, 
bool use_local)
{

  if (!sp) {
      uint8_t *otp = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__optionTypes_;

#line 107
      while (*otp) {
          uint8_t type = * otp++;

#line 109
          if (use_local) {
              /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__setLocal(type, 0, 0);
            }
          else 
#line 111
            {
              /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__setRemote(type, 0, 0);
            }
        }
    }
  else 
#line 115
    {
      while (sp + 2 <= spe) {
          uint8_t type = * sp++;
          uint8_t length = * sp++ - 2;

#line 119
          if (0 == /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__getType(type)) {
            }
          else 
            {
              if (use_local) {
                  switch (code) {
                      case /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureAck: 
                        (void )/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__setLocal(type, sp, sp + length);
                      break;
                      case /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureNak: 
                        (void )/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__processNakValue(type, sp, sp + length);
                      break;
                      case /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_ConfigureReject: 
                        (void )/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__setNegotiable(type, FALSE);
                      break;
                      default: 
                        break;
                    }
                }
              else 
#line 137
                {
                  (void )/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__PppProtocolOption__setRemote(type, sp, sp + length);
                }
            }

          sp += length;
        }
    }
}

#line 169
static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__completeInvoke_(frame_key_t key, 
const uint8_t *frame_end, 
frame_key_t *keyp)
{
  error_t rc = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__fixOutputFrameLength(key, frame_end);

#line 174
  if (SUCCESS == rc) {
      rc = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__sendOutputFrame(key);
    }
  if (SUCCESS != rc) {
      (void )/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Ppp__releaseOutputFrame(key);
    }
  else 
#line 179
    {
      if (keyp) {
          *keyp = key;
        }
    }
  return rc;
}

# 324 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static error_t PppP__Ppp__releaseOutputFrame(frame_key_t key)
{
  PppP__HdlcTxFrame_t *tfp = PppP__findTxFrame_(key);

  if (!tfp) {

      return EINVAL;
    }
  PppP__releaseTxFrame_(tfp, SUCCESS, FALSE);
  return SUCCESS;
}

# 271 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__calculateEventActions_(LcpAutomatonEvent_e evt, 
void *arg)
{
  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__stateBitSet_t sb = 1 << /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__currentState_;






  if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ || LAS_TRANSIENT == /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__currentState_) {
      return ERETRY;
    }
  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__failState_ = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__currentState_;
  switch (evt) {
      case LAE_Up: 
        if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Initial & sb) {
            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Closed;
          }
        else {
#line 289
          if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Starting & sb) {

              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_irc_scr | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr;
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_RequestSent;
            }
          else 
#line 293
            {
            }
          }
      break;
      case LAE_Down: 
        if ((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closed | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closing) & sb) {
            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Initial;
          }
        else {
#line 300
          if ((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Initial | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Starting) & sb) {
            }
          else {
              if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopped & sb) {
                  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tls;
                }
              else {
#line 305
                if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Opened & sb) {
                    /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tld;
                  }
                else 
#line 307
                  {
                  }
                }
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Starting;
            }
          }
#line 312
      break;
      case LAE_Open: 
        if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Initial & sb) {
            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tls;
            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Starting;
          }
        else {
#line 317
          if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closed & sb) {

              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_irc_scr | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr;
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_RequestSent;
            }
          else {
#line 321
            if ((((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopped | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closing) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopping) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Opened) & sb) {
                if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__options_.restartOption) {
                  }
                else 

                  {
                    if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closing & sb) {
                        /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Stopping;
                      }
                    else 
#line 329
                      {
                      }
                  }
              }
            else {
              }
            }
          }
#line 336
      break;
      case LAE_Close: 
        if (((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Initial | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closed) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closing) & sb) {
          }
        else {
#line 340
          if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Starting & sb) {
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tlf;
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Initial;
            }
          else {
#line 343
            if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopped & sb) {
                /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Closed;
              }
            else 
#line 345
              {
                if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Opened & sb) {
                    /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tld;
                  }
                if ((((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_RequestSent | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckReceived) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckSent) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Opened) & sb) {
                    /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_irc_str | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_str;
                  }
                /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Closing;
              }
            }
          }
#line 354
      break;
      case LAE_Timeout: {
          bool have_retries = FALSE;

#line 357
          if (arg) {
              have_retries = * (bool *)arg;
            }
          if ((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closing | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopping) & sb) {
              if (have_retries) {
                  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_str;
                }
              else 
#line 363
                {
                  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tlf;
                  if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closing & sb) {
                      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Closed;
                    }
                  else 
#line 367
                    {
                      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Stopped;
                    }
                }
            }
          else {
#line 371
            if (((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_RequestSent | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckReceived) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckSent) & sb) {
                if (have_retries) {
                    /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr;
                    if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckReceived & sb) {
                        /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_RequestSent;
                      }
                  }
                else 
#line 377
                  {
                    /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tlf;
                    /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Stopped;
                  }
              }
            }
          break;
        }
      case LAE_ReceiveConfigureRequest: {
          LcpEventParams_rcr_t *params = (LcpEventParams_rcr_t *)arg;


          if ((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Initial | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Starting) & sb) {
            }
          else {
#line 391
            if ((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closing | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopping) & sb) {
              }
            else {
#line 393
              if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closed & sb) {
                  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sta_uns;
                }
              else {
#line 395
                if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopped & sb) {
                    /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_irc_scr | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr;
                    if (params->good) {
                        /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sca;
                        /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_AckSent;
                      }
                    else 
#line 400
                      {
                        /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scn;
                        /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_RequestSent;
                      }
                  }
                else {
#line 404
                  if ((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_RequestSent | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckSent) & sb) {
                      if (params->good) {
                          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sca;
                          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_AckSent;
                        }
                      else 
#line 408
                        {
                          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scn;
                          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_RequestSent;
                        }
                    }
                  else {
#line 412
                    if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckReceived & sb) {
                        if (params->good) {
                            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sca | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tlu;
                            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Opened;
                          }
                        else 
#line 416
                          {
                            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scn;
                            /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_AckReceived;
                          }
                      }
                    else {
#line 420
                      if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Opened & sb) {
                          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tld | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr;
                          if (params->good) {
                              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sca;
                              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_AckSent;
                            }
                          else 
#line 425
                            {
                              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scn;
                              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_RequestSent;
                            }
                        }
                      }
                    }
                  }
                }
              }
            }
#line 435
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_resetRemoteOptions;
          if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ & /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sca) {


              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_setRemoteOptions;
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionMessageCode_ = PppControlProtocolCode_ConfigureAck;
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSet_ = params->options;
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSetEnd_ = params->options_end;
            }
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingSxxKey_ = params->scx_key;
          break;
        }
      case LAE_ReceiveConfigureAck: {
          LcpEventParams_opts_t *params = (LcpEventParams_opts_t *)arg;

          if ((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closed | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopped) & sb) {
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sta_uns;
            }
          else {
#line 452
            if ((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closing | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopping) & sb) {
              }
            else {
#line 454
              if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_RequestSent & sb) {
                  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_irc_scr;
                  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_AckReceived;
                }
              else {
#line 457
                if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckReceived & sb) {
                    /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr;
                    /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_RequestSent;
                  }
                else {
#line 460
                  if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckSent & sb) {
                      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_irc_scr | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tlu;
                      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Opened;
                    }
                  else {
#line 463
                    if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Opened & sb) {
                        /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tld | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr;
                      }
                    else 
#line 465
                      {
                      }
                    }
                  }
                }
              }
            }
#line 471
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_setLocalOptions;
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionMessageCode_ = params->code;
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSet_ = params->options;
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSetEnd_ = params->options_end;

          break;
        }
      case LAE_ReceiveConfigureNakRej: {
          LcpEventParams_opts_t *params = (LcpEventParams_opts_t *)arg;

          if ((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closed | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopped) & sb) {
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sta_uns;
            }
          else {
#line 483
            if ((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closing | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopping) & sb) {
              }
            else {
#line 485
              if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_RequestSent & sb) {
                  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_irc_scr | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr;
                }
              else {
#line 487
                if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckReceived & sb) {
                    /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr;
                    /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_RequestSent;
                  }
                else {
#line 490
                  if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckSent & sb) {
                      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_irc_scr | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr;
                    }
                  else {
#line 492
                    if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Opened & sb) {
                        /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tld | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_scr;
                      }
                    else 
#line 494
                      {
                      }
                    }
                  }
                }
              }
            }
#line 500
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_setLocalOptions;
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionMessageCode_ = params->code;
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSet_ = params->options;
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__optionSetEnd_ = params->options_end;

          break;
        }

      case LAE_ReceiveTerminateRequest: {
          LcpEventParams_term_t *params = (LcpEventParams_term_t *)arg;


          if ((((((((
#line 511
          /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closed | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopped) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Closing) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Stopping)
           | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_RequestSent) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckReceived) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckSent) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Opened) & sb) {
              if (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_Opened & sb) {
                  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= (/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_tld | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_zrc) | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sta_rep;
                  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_Stopping;
                }
              else 
#line 516
                {
                  /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingActions_ |= /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__TA_sta_rep;
                  if ((/*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckReceived | /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__ASB_AckSent) & sb) {
                      /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__successState_ = LAS_RequestSent;
                    }
                }
              /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__pendingSxxKey_ = params->sta_key;
            }
          break;
        }
      case LAE_ReceiveTerminateAck: {
          break;
        }
      case LAE_ReceveUnknownCode: 
        case LAE_ReceiveCodeProtocolReject: 
          case LAE_ReceiveEchoDiscardRequestReply: 
            break;
    }
  return SUCCESS;
}

# 143 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static uint16_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__fcs16_update(uint16_t crc, uint8_t data)
{
  data ^= 0xff & crc;
  data ^= data << 4;
  return ((((uint16_t )data << 8) | (0xff & (crc >> 8)))
   ^ (uint8_t )(data >> 4))
   ^ ((uint16_t )data << 3);
}

# 537 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__processEventActions_(void )
{
  frame_key_t key = 0;
  error_t rc = SUCCESS;
  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__transitionActions_t action;
  bool suspended = FALSE;
  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__transitionActions_t in_actions;

  in_actions = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_;
  rc = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeResult_;
  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeResult_ = SUCCESS;

  do {
      action = 0;

      if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_) {
          action = 1;
          while (action && !(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ & action)) {
              action <<= 1;
            }
        }


      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ &= ~action;
      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__lastAction_ = action;





      if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartCounterAction_ == action) {
          --/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartCounter_;
        }

      switch (action) {
          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_noop: 
            break;
          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tlf: 
            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__thisLayerFinished();
          break;
          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tld: 
            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__thisLayerDown();
          break;
          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_zrc: 
            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__initializeRestartCounter(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sta_rep);
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartKey_ = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingSxxKey_;
          break;
          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_irc_scr: 
            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__initializeRestartCounter(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr);
          break;
          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_irc_str: {
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__initializeRestartCounter(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_str);
              break;
            }
          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_resetRemoteOptions: 
            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__PppConfigure__setRemoteOptions(0, 0);
          break;






          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr: 
            if (SUCCESS == rc) {
                /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__PppConfigure__setLocalOptions(PppControlProtocolCode_ConfigureAck, 0, 0);
              }
          if (SUCCESS == rc) {
              rc = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ConfigureRequest__invoke(0, &key);
            }
          if (SUCCESS == rc && key) {
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartKey_ = key;
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeKey_ = key;
              suspended = TRUE;
            }
          else 
#line 611
            {
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartTimer_();
            }
          break;
          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sta_uns: 
            if (SUCCESS == rc) {
                rc = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TerminateAck__invoke(0, &key);
              }
          if (SUCCESS == rc && key) {
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeKey_ = key;
              suspended = TRUE;
            }
          break;
          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sta_rep: 
            case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sca: 
              case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scn: {
                  if (SUCCESS == rc) {
                      rc = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Ppp__sendOutputFrame(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingSxxKey_);
                    }
                  if (SUCCESS == rc) {
                      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeKey_ = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingSxxKey_;
                      suspended = TRUE;
                    }
                  else 
#line 633
                    {
                      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__resumeKey_ = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartKey_ = 0;
                      (void )/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Ppp__releaseOutputFrame(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingSxxKey_);
                    }
                  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingSxxKey_ = 0;
                  break;
                }
          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_str: 
            case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scj: 
              case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_ser: 

                break;
          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_setLocalOptions: 

            case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_setRemoteOptions: 
              if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_setLocalOptions == action) {
                  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__PppConfigure__setLocalOptions(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionMessageCode_, /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSet_, /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSetEnd_);
                }
              else 
#line 650
                {
                  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__PppConfigure__setRemoteOptions(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSet_, /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSetEnd_);
                }
          break;
          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tlu: 
            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__thisLayerUp();
          break;
          case /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tls: 
            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__thisLayerStarted();
          break;
        }
    }
  while (
#line 661
  action && SUCCESS == rc && !suspended);
  if (suspended) {
      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__currentState_ = LAS_TRANSIENT;
    }
  else 
#line 664
    {
      bool disable_restart_timer;
      LcpAutomatonState_e end_state;


      if (SUCCESS == rc) {
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__currentState_ = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_;
        }
      else 
#line 671
        {
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__currentState_ = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__failState_;
        }
      disable_restart_timer = !(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_TimerRunningStates & (1 << /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__currentState_));
      if (disable_restart_timer) {
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartKey_ = 0;
        }
      end_state = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__currentState_;

      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSet_ = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSetEnd_ = 0;
      if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingSxxKey_) {
          (void )/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__Ppp__releaseOutputFrame(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingSxxKey_);
        }

      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingSxxKey_ = 0;

      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__LcpAutomaton__transitionCompleted(end_state);
      if (disable_restart_timer) {
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__stop();
        }
    }
  return rc;
}

static error_t /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__processEvent_(LcpAutomatonEvent_e evt, 
void *arg)
{
  error_t rc;

  rc = /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__calculateEventActions_(evt, arg);
  if (ERETRY == rc) {
      return rc;
    }


  return /*PppIpv6C.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__1__processEventActions_();
}

#line 192
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__initializeRestartCounter(/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__transitionActions_t action)
{
  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartCounterAction_ = action;
  if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr == action) {
      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartCounter_ = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__options_.maxConfigure;
    }
  else {
#line 197
    if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_str == action) {
        /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartCounter_ = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__options_.maxTerminate;
      }
    else {
#line 199
      if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sta_rep == action) {
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartCounter_ = 0;
        }
      else 
#line 201
        {
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__restartCounterAction_ = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_noop;
        }
      }
    }
  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__stop();
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__RestartTimer__stop(void ){
#line 73
  /*MuxAlarmMilli32C_.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*LinkControlProtocolC.LcpAutomatonC.MuxAlarmMilli32C*/MuxAlarmMilli32C__0__CLIENT_ID);
#line 73
}
#line 73
# 99 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__setOptions(const uint8_t *sp, 
const uint8_t *spe, 
uint8_t code, 
bool use_local)
{

  if (!sp) {
      uint8_t *otp = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__optionTypes_;

#line 107
      while (*otp) {
          uint8_t type = * otp++;

#line 109
          if (use_local) {
              /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__setLocal(type, 0, 0);
            }
          else 
#line 111
            {
              /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__setRemote(type, 0, 0);
            }
        }
    }
  else 
#line 115
    {
      while (sp + 2 <= spe) {
          uint8_t type = * sp++;
          uint8_t length = * sp++ - 2;

#line 119
          if (0 == /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__getType(type)) {
            }
          else 
            {
              if (use_local) {
                  switch (code) {
                      case /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureAck: 
                        (void )/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__setLocal(type, sp, sp + length);
                      break;
                      case /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureNak: 
                        (void )/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__processNakValue(type, sp, sp + length);
                      break;
                      case /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_ConfigureReject: 
                        (void )/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__setNegotiable(type, FALSE);
                      break;
                      default: 
                        break;
                    }
                }
              else 
#line 137
                {
                  (void )/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__setRemote(type, sp, sp + length);
                }
            }

          sp += length;
        }
    }
}

# 127 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static void LinkControlProtocolP__AddressControlFieldCompressionOption__setLocal(const uint8_t *dp, 
const uint8_t *dpe)
{
  HdlcFramingOptions_t hdlcopt;


  hdlcopt = LinkControlProtocolP__HdlcFramingOptions__get();
  hdlcopt.rxSuppressAddressControl = 0 != dp;
  LinkControlProtocolP__HdlcFramingOptions__set(&hdlcopt);
}

# 190 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static HdlcFramingOptions_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFramingOptions__get(void )
#line 190
{
#line 190
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 190
    {
      struct HdlcFramingOptions_t __nesc_temp = 
#line 190
      /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__options__;

      {
#line 190
        __nesc_atomic_end(__nesc_atomic); 
#line 190
        return __nesc_temp;
      }
    }
#line 192
    __nesc_atomic_end(__nesc_atomic); }
}

#line 172
static error_t /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HdlcFramingOptions__set(const HdlcFramingOptions_t *new_options)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    {
      if (new_options) {
          /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__options__ = *new_options;
        }
      else 
#line 177
        {
          /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__options__.txSuppressAddressControl = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__options__.rxSuppressAddressControl = FALSE;
          /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__options__.txAsyncControlCharacterMap = /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__options__.rxAsyncControlCharacterMap = ~0UL;
        }
    }
#line 181
    __nesc_atomic_end(__nesc_atomic); }





  return SUCCESS;
}

# 279 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static void LinkControlProtocolP__MaximumReceiveUnitOption__setLocal(const uint8_t *dp, 
const uint8_t *dpe)
{
  PppOptions_t opt;
  uint16_t value;



  opt = LinkControlProtocolP__PppOptions__get();
  if (dp) {
      value = (dp[0] << 8) | dp[1];
    }
  else 
#line 290
    {
      value = 1280;
    }
  opt.rxMaximumReceiveUnit = value;
  LinkControlProtocolP__PppOptions__set(&opt);
}

# 58 "/opt/tinyos-2.x/tos/lib/ppp/PppP.nc"
static error_t PppP__PppOptions__set(const PppOptions_t *new_options)
{
  if (new_options) {
      PppP__options = *new_options;
    }
  else 
#line 62
    {
      PppP__options.txProtocolFieldCompression = PppP__options.rxProtocolFieldCompression = FALSE;
      PppP__options.txMaximumReceiveUnit = PppP__options.rxMaximumReceiveUnit = 1280;
    }





  return SUCCESS;
}

# 382 "/opt/tinyos-2.x/tos/lib/ppp/LinkControlProtocolP.nc"
static void LinkControlProtocolP__AsyncControlCharacterMapOption__setLocal(const uint8_t *dp, 
const uint8_t *dpe)
{
  HdlcFramingOptions_t opt;
  uint32_t value;



  opt = LinkControlProtocolP__HdlcFramingOptions__get();
  if (dp) {
      value = __nesc_ntoh_uint32((* (nx_uint32_t *)dp).nxdata);
    }
  else 
#line 393
    {
      value = LinkControlProtocolP__HDLC_DefaultACCM;
    }
  opt.rxAsyncControlCharacterMap = value;
  LinkControlProtocolP__HdlcFramingOptions__set(&opt);
}

#line 116
static void LinkControlProtocolP__AddressControlFieldCompressionOption__setRemote(const uint8_t *dp, 
const uint8_t *dpe)
{
  HdlcFramingOptions_t hdlcopt;



  hdlcopt = LinkControlProtocolP__HdlcFramingOptions__get();
  hdlcopt.txSuppressAddressControl = 0 != dp;
  LinkControlProtocolP__HdlcFramingOptions__set(&hdlcopt);
}

#line 262
static void LinkControlProtocolP__MaximumReceiveUnitOption__setRemote(const uint8_t *dp, 
const uint8_t *dpe)
{
  PppOptions_t opt;
  uint16_t value;



  opt = LinkControlProtocolP__PppOptions__get();
  if (dp) {
      value = (dp[0] << 8) | dp[1];
    }
  else 
#line 273
    {
      value = 1280;
    }
  opt.txMaximumReceiveUnit = value;
  LinkControlProtocolP__PppOptions__set(&opt);
}

#line 365
static void LinkControlProtocolP__AsyncControlCharacterMapOption__setRemote(const uint8_t *dp, 
const uint8_t *dpe)
{
  HdlcFramingOptions_t opt;
  uint32_t value;



  opt = LinkControlProtocolP__HdlcFramingOptions__get();
  if (dp) {
      value = __nesc_ntoh_uint32((* (nx_uint32_t *)dp).nxdata);
    }
  else 
#line 376
    {
      value = LinkControlProtocolP__HDLC_DefaultACCM;
    }
  opt.txAsyncControlCharacterMap = value;
  LinkControlProtocolP__HdlcFramingOptions__set(&opt);
}

# 472 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__setNegotiable(uint8_t type, bool is_negotiable)
#line 472
{
}

# 66 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolOption.nc"
static void /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__setNegotiable(uint8_t arg_0x40cd5d10, bool is_negotiable){
#line 66
  switch (arg_0x40cd5d10) {
#line 66
    case LCPOpt_MaximumReceiveUnit:
#line 66
      LinkControlProtocolP__MaximumReceiveUnitOption__setNegotiable(is_negotiable);
#line 66
      break;
#line 66
    case LCPOpt_AsyncControlCharacterMap:
#line 66
      LinkControlProtocolP__AsyncControlCharacterMapOption__setNegotiable(is_negotiable);
#line 66
      break;
#line 66
    case LCPOpt_AddressControlFieldCompression:
#line 66
      LinkControlProtocolP__AddressControlFieldCompressionOption__setNegotiable(is_negotiable);
#line 66
      break;
#line 66
    default:
#line 66
      /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__PppProtocolOption__default__setNegotiable(arg_0x40cd5d10, is_negotiable);
#line 66
      break;
#line 66
    }
#line 66
}
#line 66
# 169 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__completeInvoke_(frame_key_t key, 
const uint8_t *frame_end, 
frame_key_t *keyp)
{
  error_t rc = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__fixOutputFrameLength(key, frame_end);

#line 174
  if (SUCCESS == rc) {
      rc = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__sendOutputFrame(key);
    }
  if (SUCCESS != rc) {
      (void )/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Ppp__releaseOutputFrame(key);
    }
  else 
#line 179
    {
      if (keyp) {
          *keyp = key;
        }
    }
  return rc;
}

# 271 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__calculateEventActions_(LcpAutomatonEvent_e evt, 
void *arg)
{
  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__stateBitSet_t sb = 1 << /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__currentState_;






  if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ || LAS_TRANSIENT == /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__currentState_) {
      return ERETRY;
    }
  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__failState_ = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__currentState_;
  switch (evt) {
      case LAE_Up: 
        if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Initial & sb) {
            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Closed;
          }
        else {
#line 289
          if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Starting & sb) {

              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_irc_scr | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr;
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_RequestSent;
            }
          else 
#line 293
            {
            }
          }
      break;
      case LAE_Down: 
        if ((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closed | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closing) & sb) {
            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Initial;
          }
        else {
#line 300
          if ((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Initial | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Starting) & sb) {
            }
          else {
              if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopped & sb) {
                  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tls;
                }
              else {
#line 305
                if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Opened & sb) {
                    /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tld;
                  }
                else 
#line 307
                  {
                  }
                }
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Starting;
            }
          }
#line 312
      break;
      case LAE_Open: 
        if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Initial & sb) {
            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tls;
            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Starting;
          }
        else {
#line 317
          if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closed & sb) {

              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_irc_scr | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr;
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_RequestSent;
            }
          else {
#line 321
            if ((((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopped | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closing) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopping) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Opened) & sb) {
                if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__options_.restartOption) {
                  }
                else 

                  {
                    if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closing & sb) {
                        /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Stopping;
                      }
                    else 
#line 329
                      {
                      }
                  }
              }
            else {
              }
            }
          }
#line 336
      break;
      case LAE_Close: 
        if (((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Initial | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closed) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closing) & sb) {
          }
        else {
#line 340
          if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Starting & sb) {
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tlf;
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Initial;
            }
          else {
#line 343
            if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopped & sb) {
                /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Closed;
              }
            else 
#line 345
              {
                if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Opened & sb) {
                    /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tld;
                  }
                if ((((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_RequestSent | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckReceived) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckSent) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Opened) & sb) {
                    /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_irc_str | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_str;
                  }
                /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Closing;
              }
            }
          }
#line 354
      break;
      case LAE_Timeout: {
          bool have_retries = FALSE;

#line 357
          if (arg) {
              have_retries = * (bool *)arg;
            }
          if ((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closing | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopping) & sb) {
              if (have_retries) {
                  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_str;
                }
              else 
#line 363
                {
                  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tlf;
                  if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closing & sb) {
                      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Closed;
                    }
                  else 
#line 367
                    {
                      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Stopped;
                    }
                }
            }
          else {
#line 371
            if (((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_RequestSent | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckReceived) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckSent) & sb) {
                if (have_retries) {
                    /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr;
                    if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckReceived & sb) {
                        /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_RequestSent;
                      }
                  }
                else 
#line 377
                  {
                    /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tlf;
                    /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Stopped;
                  }
              }
            }
          break;
        }
      case LAE_ReceiveConfigureRequest: {
          LcpEventParams_rcr_t *params = (LcpEventParams_rcr_t *)arg;


          if ((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Initial | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Starting) & sb) {
            }
          else {
#line 391
            if ((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closing | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopping) & sb) {
              }
            else {
#line 393
              if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closed & sb) {
                  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sta_uns;
                }
              else {
#line 395
                if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopped & sb) {
                    /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_irc_scr | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr;
                    if (params->good) {
                        /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sca;
                        /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_AckSent;
                      }
                    else 
#line 400
                      {
                        /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scn;
                        /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_RequestSent;
                      }
                  }
                else {
#line 404
                  if ((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_RequestSent | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckSent) & sb) {
                      if (params->good) {
                          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sca;
                          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_AckSent;
                        }
                      else 
#line 408
                        {
                          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scn;
                          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_RequestSent;
                        }
                    }
                  else {
#line 412
                    if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckReceived & sb) {
                        if (params->good) {
                            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sca | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tlu;
                            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Opened;
                          }
                        else 
#line 416
                          {
                            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scn;
                            /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_AckReceived;
                          }
                      }
                    else {
#line 420
                      if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Opened & sb) {
                          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tld | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr;
                          if (params->good) {
                              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sca;
                              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_AckSent;
                            }
                          else 
#line 425
                            {
                              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scn;
                              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_RequestSent;
                            }
                        }
                      }
                    }
                  }
                }
              }
            }
#line 435
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_resetRemoteOptions;
          if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ & /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sca) {


              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_setRemoteOptions;
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionMessageCode_ = PppControlProtocolCode_ConfigureAck;
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSet_ = params->options;
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSetEnd_ = params->options_end;
            }
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingSxxKey_ = params->scx_key;
          break;
        }
      case LAE_ReceiveConfigureAck: {
          LcpEventParams_opts_t *params = (LcpEventParams_opts_t *)arg;

          if ((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closed | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopped) & sb) {
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sta_uns;
            }
          else {
#line 452
            if ((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closing | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopping) & sb) {
              }
            else {
#line 454
              if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_RequestSent & sb) {
                  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_irc_scr;
                  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_AckReceived;
                }
              else {
#line 457
                if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckReceived & sb) {
                    /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr;
                    /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_RequestSent;
                  }
                else {
#line 460
                  if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckSent & sb) {
                      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_irc_scr | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tlu;
                      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Opened;
                    }
                  else {
#line 463
                    if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Opened & sb) {
                        /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tld | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr;
                      }
                    else 
#line 465
                      {
                      }
                    }
                  }
                }
              }
            }
#line 471
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_setLocalOptions;
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionMessageCode_ = params->code;
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSet_ = params->options;
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSetEnd_ = params->options_end;

          break;
        }
      case LAE_ReceiveConfigureNakRej: {
          LcpEventParams_opts_t *params = (LcpEventParams_opts_t *)arg;

          if ((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closed | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopped) & sb) {
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sta_uns;
            }
          else {
#line 483
            if ((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closing | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopping) & sb) {
              }
            else {
#line 485
              if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_RequestSent & sb) {
                  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_irc_scr | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr;
                }
              else {
#line 487
                if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckReceived & sb) {
                    /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr;
                    /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_RequestSent;
                  }
                else {
#line 490
                  if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckSent & sb) {
                      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_irc_scr | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr;
                    }
                  else {
#line 492
                    if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Opened & sb) {
                        /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tld | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_scr;
                      }
                    else 
#line 494
                      {
                      }
                    }
                  }
                }
              }
            }
#line 500
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_setLocalOptions;
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionMessageCode_ = params->code;
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSet_ = params->options;
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__optionSetEnd_ = params->options_end;

          break;
        }

      case LAE_ReceiveTerminateRequest: {
          LcpEventParams_term_t *params = (LcpEventParams_term_t *)arg;


          if ((((((((
#line 511
          /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closed | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopped) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Closing) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Stopping)
           | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_RequestSent) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckReceived) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckSent) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Opened) & sb) {
              if (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_Opened & sb) {
                  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= (/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_tld | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_zrc) | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sta_rep;
                  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_Stopping;
                }
              else 
#line 516
                {
                  /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingActions_ |= /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__TA_sta_rep;
                  if ((/*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckReceived | /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__ASB_AckSent) & sb) {
                      /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__successState_ = LAS_RequestSent;
                    }
                }
              /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__pendingSxxKey_ = params->sta_key;
            }
          break;
        }
      case LAE_ReceiveTerminateAck: {
          break;
        }
      case LAE_ReceveUnknownCode: 
        case LAE_ReceiveCodeProtocolReject: 
          case LAE_ReceiveEchoDiscardRequestReply: 
            break;
    }
  return SUCCESS;
}

# 165 "/opt/tinyos-2.x/tos/lib/ppp/HdlcFramingP.nc"
static bool /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__mustEscape(uint8_t c, uint32_t accm)
{
  return (/*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_FlagSequence == c
   || /*PppC.HdlcFramingC.HdlcFramingP*/HdlcFramingP__0__HDLC_ControlEscape == c)
   || (0x20 > c && accm & (1UL << c));
}

# 353 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__processNakReject(uint8_t code, 
uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
{
  LcpEventParams_opts_t evt_params;

  if (/*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__idConfigureRequest != identifier) {
      return SUCCESS;
    }
  evt_params.code = code;
  evt_params.options = data;
  evt_params.options_end = data_end;
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__signalEvent(LAE_ReceiveConfigureNakRej, &evt_params);
}

#line 388
static error_t /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__processTerminate_(uint8_t code, 
const uint8_t *data, 
const uint8_t *data_end, 
frame_key_t sta_key)
{
  LcpEventParams_term_t evt_params;

#line 394
  evt_params.code = /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__Code_TerminateRequest;
  evt_params.data = data;
  evt_params.data_end = data_end;
  evt_params.sta_key = sta_key;
  return /*PppIpv6C.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__1__LcpAutomaton__signalEvent(LAE_ReceiveTerminateRequest, &evt_params);
}

# 61 "/opt/tinyos-2.x/tos/lib/ppp/PppProtocolCodeCoordinatorP.nc"
static error_t /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__PppProtocolCodeCoordinator__rejectPacket(unsigned int rejected_protocol, 
const uint8_t *ip, 
const uint8_t *ipe, 
frame_key_t *keyp)
{
  const uint8_t *fpe = 0;
  frame_key_t key;
  uint8_t *fp = /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__Ppp__getOutputFrame(49185U, &fpe, TRUE, &key);
  const uint8_t *frame_start = fp;
  uint8_t *lp;
  error_t rc;

  if (0 == fp) {
      return EBUSY;
    }


  if (0 != rejected_protocol) {
      * fp++ = PppControlProtocolCode_ProtocolReject;
      * fp++ = /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__id_protocolReject++;
    }
  else 
#line 81
    {
      * fp++ = PppControlProtocolCode_CodeReject;
      * fp++ = /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__id_codeReject++;
    }

  lp = fp;
  fp += 2;
  if (0 != rejected_protocol) {

      * fp++ = rejected_protocol >> 8;
      * fp++ = rejected_protocol & 0x0FF;
    }



  while (fp < fpe && ip < ipe) {
      * fp++ = * ip++;
    }


  {
    unsigned int len = fp - frame_start;

#line 103
    * lp++ = len >> 8;
    * lp++ = len & 0x0FF;
  }

  rc = /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__Ppp__fixOutputFrameLength(key, fp);
  if (SUCCESS == rc) {
      rc = /*LinkControlProtocolC.CoordinatorC.PppProtocolCodeCoordinatorP*/PppProtocolCodeCoordinatorP__0__Ppp__sendOutputFrame(key);
    }
  if (SUCCESS == rc && keyp) {
      *keyp = key;
    }
  return rc;
}

# 695 "/opt/tinyos-2.x/tos/lib/ppp/LcpAutomatonP.nc"
static error_t /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__processEvent_(LcpAutomatonEvent_e evt, 
void *arg)
{
  error_t rc;

  rc = /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__calculateEventActions_(evt, arg);
  if (ERETRY == rc) {
      return rc;
    }


  return /*LinkControlProtocolC.LcpAutomatonC.LcpAutomatonP*/LcpAutomatonP__0__processEventActions_();
}

# 353 "/opt/tinyos-2.x/tos/lib/ppp/PppConfigureEngineP.nc"
static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__processNakReject(uint8_t code, 
uint8_t identifier, 
const uint8_t *data, 
const uint8_t *data_end)
{
  LcpEventParams_opts_t evt_params;

  if (/*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__idConfigureRequest != identifier) {
      return SUCCESS;
    }
  evt_params.code = code;
  evt_params.options = data;
  evt_params.options_end = data_end;
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__signalEvent(LAE_ReceiveConfigureNakRej, &evt_params);
}

#line 388
static error_t /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__processTerminate_(uint8_t code, 
const uint8_t *data, 
const uint8_t *data_end, 
frame_key_t sta_key)
{
  LcpEventParams_term_t evt_params;

#line 394
  evt_params.code = /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__Code_TerminateRequest;
  evt_params.data = data;
  evt_params.data_end = data_end;
  evt_params.sta_key = sta_key;
  return /*LinkControlProtocolC.PppConfigureEngineC.PppConfigureEngineP*/PppConfigureEngineP__0__LcpAutomaton__signalEvent(LAE_ReceiveTerminateRequest, &evt_params);
}

# 265 "/opt/tinyos-2.x/tos/chips/atm128rfa1/HplAtm128UartP.nc"
static error_t HplAtm128UartP__Uart1RxControl__stop(void )
#line 265
{
  * (volatile uint8_t *)0xC9 &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
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

# 77 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 348 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
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

# 35 "/opt/tinyos-2.x/tos/system/MultiplexedReadC.nc"
static void /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Service__readDone(error_t result, /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__width_t data)
#line 35
{
  uint8_t client = /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__ArbiterInfo__userId();

  /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Resource__release(client);
  /*VoltageArbiterP.MultiplexedReadC*/MultiplexedReadC__0__Read__readDone(client, result, data);
}

# 158 "/opt/tinyos-2.x/tos/platforms/ucmini/LedsP.nc"
static void LedsP__Leds__set(uint8_t val)
#line 158
{
  /* atomic removed: atomic calls only */
#line 159
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
}

# 75 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
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

# 22 "/opt/tinyos-2.x/tos/platforms/ucmini/BatteryWarningP.nc"
static void BatteryWarningP__Switch__readDone(error_t err, uint8_t newSwitchState)
#line 22
{
  if (err == SUCCESS) {
      BatteryWarningP__switchState = newSwitchState;
      if (!(BatteryWarningP__switchState == BATTERY_SWITCH_RECHARGABLE && BatteryWarningP__GeneralIO__get())) {
          BatteryWarningP__Voltage__read();
        }
    }
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

# 92 "/opt/tinyos-2.x/tos/lib/ppp/DefaultHdlcUartP.nc"
static error_t DefaultHdlcUartP__StdControl__start(void )
{


  (void )DefaultHdlcUartP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    DefaultHdlcUartP__rbStore_ = DefaultHdlcUartP__rbLoad_ = DefaultHdlcUartP__ringBuffer;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 110 "/opt/tinyos-2.x/tos/lib/printf/PutcharP.nc"
__attribute((noinline))   int uart_putchar(char c, struct __file *stream)
#line 110
{








  return PutcharP__Putchar__putchar(c);
}


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
# 121 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
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
# 41 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer.h"
enum __nesc_unnamed4263 {


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


enum __nesc_unnamed4264 {


  ATMRFA1_COM8_OFF = 0, 
  ATMRFA1_COM8_TOGGLE, 
  ATMRFA1_COM8_CLEAR, 
  ATMRFA1_COM8_SET
};





enum __nesc_unnamed4265 {


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


enum __nesc_unnamed4266 {


  ATMRFA1_COM16_NORMAL = 0, 
  ATMRFA1_COM16_TOGGLE, 
  ATMRFA1_COM16_CLEAR, 
  ATMRFA1_COM16_SET
};


enum __nesc_unnamed4267 {

  ATMRFA1_CAP16_RISING_EDGE = 0x01, 
  ATMRFA1_CAP16_NOISE_CANCEL = 0x02
};





enum __nesc_unnamed4268 {

  ATMRFA1_CLKSC_DISABLE = 0, 
  ATMRFA1_CLKSC_XTAL = 1 << 5, 
  ATMRFA1_CLKSC_RTC = (1 << 5) | (1 << 4)
};


enum __nesc_unnamed4269 {

  ATMRFA1_COMSC_ABSOLUTE = 0, 
  ATMRFA1_COMSC_RELATIVE = 1
};


enum __nesc_unnamed4270 {

  ATMRFA1_CAPSC_OFF = 0, 
  ATMRFA1_CAPSC_ON = 1
};
# 41 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4271 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4272 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4273 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4274 {
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
enum __nesc_unnamed4275 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 58
#line 49
typedef struct __nesc_unnamed4276 {
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
typedef union __nesc_unnamed4277 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 67
typedef struct __nesc_unnamed4278 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 74
typedef union __nesc_unnamed4279 {
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

enum __nesc_unnamed4280 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4281 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4282 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4283 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4284 {
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
enum __nesc_unnamed4285 {





  RFA1_CCA_MODE_VALUE = 2 << 5, 





  RFA1_CCA_THRES_VALUE = 0xC7, 

  RFA1_PA_BUF_LT = 3 << 6, 
  RFA1_PA_LT = 0 << 4
};
#line 119
enum __nesc_unnamed4286 {





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
enum __nesc_unnamed4287 {
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
typedef struct __nesc_unnamed4288 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4289 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4290 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4291 {
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

enum __nesc_unnamed4292 {

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
typedef union __nesc_unnamed4293 {
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
typedef union __nesc_unnamed4294 {
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

enum __nesc_unnamed4295 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4296 {
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





enum __nesc_unnamed4297 {
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

enum __nesc_unnamed4298 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4299 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4300 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef TMilli BlinkC__Timer0__precision_tag;
typedef TMilli BlinkC__Timer1__precision_tag;
typedef TMilli BlinkC__Timer2__precision_tag;
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
uint8_t arg_0x404a98b0);
# 45 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__SpiByte__write(uint8_t tx);
# 109 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Spi__dataReady(uint8_t data);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__release(
# 95 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
uint8_t arg_0x404adb40);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__request(
# 95 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
uint8_t arg_0x404adb40);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__default__granted(
# 95 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
uint8_t arg_0x404adb40);
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeInput(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x4051a440);
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*AtmegaGeneralIOC.PortB*/AtmegaGeneralIOP__1__Pin__makeOutput(
# 40 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaGeneralIOP.nc"
uint8_t arg_0x4051a440);
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
uint8_t arg_0x4059f030);
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4059fc60);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4059fc60);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405a05d8);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405a05d8);
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
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__clr(void );
static void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__toggle(void );



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
uint8_t arg_0x406d7850);
# 54 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableFallingEdge(
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
uint8_t arg_0x406d7850);
# 53 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__enableRisingEdge(
# 52 "/opt/tinyos-2.x/tos/chips/atm128rfa1/pins/AtmegaPinChangeP.nc"
uint8_t arg_0x406d7850);
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
am_id_t arg_0x4072a728, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40724108, 
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
uart_id_t arg_0x407e6d68, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407e6d68, 
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
uart_id_t arg_0x407e6728, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407fb888, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407fb888);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407fb888, 
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





static void LedsP__Leds__led0Toggle(void );




static void LedsP__Leds__led1On(void );










static void LedsP__Leds__led1Toggle(void );
#line 113
static void LedsP__Leds__led3Off(void );
#line 102
static void LedsP__Leds__led2Toggle(void );
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
uint8_t arg_0x404218d0);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x404218d0);
# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BlinkC__Timer0__fired(void );
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void BlinkC__Boot__booted(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BlinkC__Timer1__fired(void );
#line 83
static void BlinkC__Timer2__fired(void );
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
# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareB__default__fired(void );
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
uint8_t arg_0x40a538f0);
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40a538f0, 
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);
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
enum MeasureClockC____nesc_unnamed4301 {
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
uint8_t arg_0x404a98b0);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__request(
# 99 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
uint8_t arg_0x404a98b0);
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
uint8_t arg_0x404adb40);
# 90 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ArbiterInfo__inUse(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__McuPowerState__update(void );
# 290 "/opt/tinyos-2.x/tos/chips/atm128rfa1/spi/Atm128SpiP.nc"
enum /*Atm128SpiC.SpiMaster*/Atm128SpiP__0____nesc_unnamed4302 {
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

enum /*Atm128SpiC.SpiMaster*/Atm128SpiP__0____nesc_unnamed4303 {
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
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0____nesc_unnamed4304 {
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
uint8_t arg_0x4059f030);
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4059fc60);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4059fc60);
# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x405a05d8);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4305 {
#line 69
  SimpleArbiterP__0__grantedTask = 1U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4306 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4307 {
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
static inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__clr(void );
static inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__toggle(void );



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
enum SerialAutoControlP____nesc_unnamed4308 {
#line 46
  SerialAutoControlP__turnOn = 2U
};
#line 46
typedef int SerialAutoControlP____nesc_sillytask_turnOn[SerialAutoControlP__turnOn];










enum SerialAutoControlP____nesc_unnamed4309 {
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
uint8_t arg_0x406d7850);


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
am_id_t arg_0x4072a728, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40724108, 
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
enum SerialP____nesc_unnamed4310 {
#line 191
  SerialP__RunTx = 4U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4311 {
#line 322
  SerialP__startDoneTask = 5U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4312 {
#line 332
  SerialP__stopDoneTask = 6U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4313 {
#line 341
  SerialP__defaultSerialFlushTask = 7U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4314 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4315 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4316 {
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
typedef enum SerialP____nesc_unnamed4317 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4318 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4319 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4320 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4321 {
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
uart_id_t arg_0x407e6d68, 
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
uart_id_t arg_0x407e6728, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407fb888, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407fb888);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x407fb888, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4322 {
#line 158
  SerialDispatcherP__0__signalSendDone = 8U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4323 {
#line 275
  SerialDispatcherP__0__receiveTask = 9U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4324 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4325 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4326 {
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
typedef struct HdlcTranslateC____nesc_unnamed4327 {
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
enum SerialResetP____nesc_unnamed4328 {
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
# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



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
static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 57 "/opt/tinyos-2.x/tos/platforms/ucbase/LedsP.nc"
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
uint8_t arg_0x404218d0);
# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4329 {

  SchedulerBasicP__NUM_TASKS = 13U, 
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
static void BlinkC__Timer0__startPeriodic(uint32_t dt);
#line 64
static void BlinkC__Timer1__startPeriodic(uint32_t dt);
# 69 "/opt/tinyos-2.x/tos/platforms/ucbase/Leds.nc"
static void BlinkC__Leds__led0Toggle(void );
#line 85
static void BlinkC__Leds__led1Toggle(void );
#line 102
static void BlinkC__Leds__led2Toggle(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BlinkC__Timer2__startPeriodic(uint32_t dt);
# 60 "BlinkC.nc"
static inline void BlinkC__Boot__booted(void );






static inline void BlinkC__Timer0__fired(void );





static inline void BlinkC__Timer1__fired(void );





static inline void BlinkC__Timer2__fired(void );
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
#line 263
static inline void HplAtmRfa1TimerMacP__CompareB__default__fired(void );

void __vector_66(void ) __attribute((signal))   ;
#line 343
static inline void HplAtmRfa1TimerMacP__CompareC__default__fired(void );

void __vector_67(void ) __attribute((signal))   ;
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

enum /*CounterMilli32C.TransformCounterC*/TransformCounterC__0____nesc_unnamed4330 {

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

enum /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0____nesc_unnamed4331 {

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
enum /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4332 {
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
uint8_t arg_0x40a538f0);
#line 71
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4333 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 12U
};
#line 71
typedef int /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4334 {

  VirtualizeTimerC__0__NUM_TIMERS = 3U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4335 {

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




static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);
#line 204
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
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
inline static void /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__fired(uint8_t arg_0x406d7850){
#line 68
  switch (arg_0x406d7850) {
#line 68
    case 5:
#line 68
      SerialAutoControlP__ControlInt__fired();
#line 68
      break;
#line 68
    default:
#line 68
      /*AtmegaPinChange0C.AtmegaPinChangeP*/AtmegaPinChangeP__0__GpioInterrupt__default__fired(arg_0x406d7850);
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x407fb888){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x407fb888) {
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
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x407fb888);
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
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x4059f030){
#line 53
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x4059f030);
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
inline static error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__request(uint8_t arg_0x404a98b0){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(arg_0x404a98b0);
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
# 69 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

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

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t McuInitP__TimerInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Init__init();
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
# 57 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )43U ^= 1 << 7;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__toggle();
#line 42
}
#line 42
# 88 "/opt/tinyos-2.x/tos/platforms/ucbase/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 88
{
  LedsP__Led0__toggle();
  ;
#line 90
  ;
}

# 69 "/opt/tinyos-2.x/tos/platforms/ucbase/Leds.nc"
inline static void BlinkC__Leds__led0Toggle(void ){
#line 69
  LedsP__Leds__led0Toggle();
#line 69
}
#line 69
# 67 "BlinkC.nc"
static inline void BlinkC__Timer0__fired(void )
{
  ;
  BlinkC__Leds__led0Toggle();
}

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
inline static void BlinkC__Leds__led1Toggle(void ){
#line 85
  LedsP__Leds__led1Toggle();
#line 85
}
#line 85
# 73 "BlinkC.nc"
static inline void BlinkC__Timer1__fired(void )
{
  ;
  BlinkC__Leds__led1Toggle();
}

# 57 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )46U ^= 1 << 2;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__34__IO__toggle();
#line 42
}
#line 42
# 118 "/opt/tinyos-2.x/tos/platforms/ucbase/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 118
{
  LedsP__Led2__toggle();
  ;
#line 120
  ;
}

# 102 "/opt/tinyos-2.x/tos/platforms/ucbase/Leds.nc"
inline static void BlinkC__Leds__led2Toggle(void ){
#line 102
  LedsP__Leds__led2Toggle();
#line 102
}
#line 102
# 79 "BlinkC.nc"
static inline void BlinkC__Timer2__fired(void )
{
  ;
  BlinkC__Leds__led2Toggle();
}

# 204 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x40a538f0){
#line 83
  switch (arg_0x40a538f0) {
#line 83
    case 0U:
#line 83
      BlinkC__Timer0__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      BlinkC__Timer1__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      BlinkC__Timer2__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x40a538f0);
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x407fb888, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x407fb888) {
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
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x407fb888, msg, upperLen);
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
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x4072a728, message_t * msg, error_t error){
#line 110
    /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(arg_0x4072a728, msg, error);
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
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x407e6d68, message_t * msg, error_t error){
#line 100
  switch (arg_0x407e6d68) {
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
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x407e6d68, msg, error);
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
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x40724108, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x40724108, msg, payload, len);
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
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x407e6728, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x407e6728) {
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
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x407e6728, msg, payload, len);
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x407fb888, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x407fb888) {
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
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x407fb888, msg, dataLinkLen);
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
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x4059fc60){
#line 65
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x4059fc60);
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
inline static error_t /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__release(uint8_t arg_0x404a98b0){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(arg_0x404a98b0);
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
inline static void /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__granted(uint8_t arg_0x404adb40){
#line 102
  switch (arg_0x404adb40) {
#line 102
    case 0U:
#line 102
      Stm25pOffP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__Resource__default__granted(arg_0x404adb40);
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
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x405a05d8){
#line 102
  /*Atm128SpiC.SpiMaster*/Atm128SpiP__0__ResourceArbiter__granted(arg_0x405a05d8);
#line 102
}
#line 102
# 171 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x4059fc60){
#line 59
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x4059fc60);
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

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128UartP__Uart0Init__init();
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

# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void BlinkC__Timer2__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(2U, dt);
#line 64
}
#line 64
inline static void BlinkC__Timer1__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 64
}
#line 64
inline static void BlinkC__Timer0__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 60 "BlinkC.nc"
static inline void BlinkC__Boot__booted(void )
{
  BlinkC__Timer0__startPeriodic(250);
  BlinkC__Timer1__startPeriodic(500);
  BlinkC__Timer2__startPeriodic(1000);
}

# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  BlinkC__Boot__booted();
#line 60
}
#line 60
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
# 144 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

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

# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtmRfa1TimerMacP__McuPowerOverride__lowestState();
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

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
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

# 49 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void HplAtmRfa1TimerMacP__Counter__overflow(void ){
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
# 263 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__default__fired(void )
#line 263
{
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareB__fired(void ){
#line 48
  HplAtmRfa1TimerMacP__CompareB__default__fired();
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
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x404218d0){
#line 75
  switch (arg_0x404218d0) {
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
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x404218d0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
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

# 154 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
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


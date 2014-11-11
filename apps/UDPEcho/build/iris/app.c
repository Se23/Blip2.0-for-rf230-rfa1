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
extern int memcmp(const void *arg_0x402fb728, const void *arg_0x402fb8c0, size_t arg_0x402fba58) __attribute((__pure__)) ;
extern void *memcpy(void *arg_0x402fe010, const void *arg_0x402fe1a8, size_t arg_0x402fe340);

extern void *memmove(void *arg_0x402fd278, const void *arg_0x402fd410, size_t arg_0x402fd5a8);

extern void *memset(void *arg_0x40301350, int arg_0x403014a8, size_t arg_0x40301640);




extern char *strcpy(char *arg_0x403056e0, const char *arg_0x40305878);






extern size_t strlen(const char *arg_0x40306990) __attribute((__pure__)) ;



extern char *strncpy(char *arg_0x40309478, const char *arg_0x40309610, size_t arg_0x403097a8);
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
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
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
# 90 "/opt/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 110
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 120
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
#line 155
#line 147
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;










#line 158
typedef struct __nesc_unnamed4249 {

  uint8_t srw00 : 1;
  uint8_t srw01 : 1;
  uint8_t srw10 : 1;
  uint8_t srw11 : 1;
  uint8_t srl : 3;
  uint8_t sre : 1;
} Atm128_XMCRA_t;







#line 169
typedef struct __nesc_unnamed4250 {

  uint8_t xmm : 3;
  uint8_t resv1 : 4;
  uint8_t xmbk : 1;
} Atm128_XMCRB_t;







typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 82 "/opt/tinyos-2.x/tos/chips/atm1281/adc/Atm128Adc.h"
enum __nesc_unnamed4251 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_1_1 = 2, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4252 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4253 {
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
  ATM128_ADC_SNGL_GND
};







#line 133
typedef struct __nesc_unnamed4254 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4255 {
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


enum __nesc_unnamed4256 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4259 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4260 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 189
typedef struct __nesc_unnamed4261 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;









#line 200
typedef struct __nesc_unnamed4262 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t resv1 : 2;
  uint8_t acme : 1;
  uint8_t resv2 : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 41 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4263 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4264 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4265 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4266 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 81 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm128Timer.h"
enum __nesc_unnamed4267 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};


enum __nesc_unnamed4268 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4269 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};

enum __nesc_unnamed4270 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};



enum __nesc_unnamed4271 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4272 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};


enum __nesc_unnamed4273 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 168
#line 156
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t wgm00 : 1;
    uint8_t wgm01 : 1;
    uint8_t resv1 : 2;
    uint8_t com0b0 : 1;
    uint8_t com0b1 : 1;
    uint8_t com0a0 : 1;
    uint8_t com0a1 : 1;
  } bits;
} Atm128_TCCR0A_t;
#line 183
#line 171
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t cs00 : 1;
    uint8_t cs01 : 1;
    uint8_t cs02 : 2;
    uint8_t wgm02 : 1;
    uint8_t resv1 : 2;
    uint8_t foc0b : 1;
    uint8_t foc0a : 1;
  } bits;
} Atm128_TCCR0B_t;
#line 195
#line 186
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t toie0 : 1;
    uint8_t ocie0a : 1;
    uint8_t ocie0e : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK0_t;
#line 207
#line 198
typedef union __nesc_unnamed4280 {

  uint8_t flat;
  struct __nesc_unnamed4281 {
    uint8_t tov0 : 1;
    uint8_t ocf0a : 1;
    uint8_t ocf0b : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR0_t;
#line 223
#line 210
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t tcr2bub : 1;
    uint8_t tcr2aub : 1;
    uint8_t ocr2bub : 1;
    uint8_t ocr2aub : 1;
    uint8_t tcn2ub : 1;
    uint8_t as2 : 1;
    uint8_t exclk : 1;
    uint8_t resv1 : 1;
  } bits;
} Atm128_ASSR_t;
#line 236
#line 226
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t wgm20 : 1;
    uint8_t wgm21 : 1;
    uint8_t resv1 : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCR2A_t;
#line 249
#line 239
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t cs : 3;
    uint8_t wgm22 : 1;
    uint8_t resv1 : 2;
    uint8_t foc2b : 1;
    uint8_t foc2a : 1;
  } bits;
} Atm128_TCCR2B_t;
#line 261
#line 252
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK2_t;
#line 273
#line 264
typedef union __nesc_unnamed4290 {

  uint8_t flat;
  struct __nesc_unnamed4291 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR2_t;
#line 286
#line 277
typedef union __nesc_unnamed4292 {

  uint8_t flat;
  struct __nesc_unnamed4293 {
    uint8_t wgm01 : 2;
    uint8_t comc : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCRA_t;
#line 299
#line 289
typedef union __nesc_unnamed4294 {

  uint8_t flat;
  struct __nesc_unnamed4295 {
    uint8_t cs : 3;
    uint8_t wgm23 : 2;
    uint8_t resv1 : 1;
    uint8_t ices : 1;
    uint8_t icnc : 1;
  } bits;
} Atm128_TCCRB_t;
#line 311
#line 302
typedef union __nesc_unnamed4296 {

  uint8_t flat;
  struct __nesc_unnamed4297 {
    uint8_t resv1 : 5;
    uint8_t focc : 1;
    uint8_t focb : 1;
    uint8_t foca : 1;
  } bits;
} Atm128_TCCRC_t;
#line 326
#line 314
typedef union __nesc_unnamed4298 {

  uint8_t flat;
  struct __nesc_unnamed4299 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t ociec : 1;
    uint8_t resv1 : 1;
    uint8_t icie : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIMSK_t;
#line 341
#line 329
typedef union __nesc_unnamed4300 {

  uint8_t flat;
  struct __nesc_unnamed4301 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t ocfc : 1;
    uint8_t resv1 : 1;
    uint8_t icf : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIFR_t;
#line 353
#line 344
typedef union __nesc_unnamed4302 {

  uint8_t flat;
  struct __nesc_unnamed4303 {
    uint8_t psrsync : 1;
    uint8_t psrasy : 1;
    uint8_t resv1 : 5;
    uint8_t tsm : 1;
  } bits;
} Atm128_GTCCR_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;
typedef uint8_t Atm128_TCNT4H_t;
typedef uint8_t Atm128_TCNT4L_t;
typedef uint8_t Atm128_TCNT5H_t;
typedef uint8_t Atm128_TCNT5L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_OCR4AH_t;
typedef uint8_t Atm128_OCR4AL_t;
typedef uint8_t Atm128_OCR4BH_t;
typedef uint8_t Atm128_OCR4BL_t;
typedef uint8_t Atm128_OCR4CH_t;
typedef uint8_t Atm128_OCR4CL_t;


typedef uint8_t Atm128_OCR5AH_t;
typedef uint8_t Atm128_OCR5AL_t;
typedef uint8_t Atm128_OCR5BH_t;
typedef uint8_t Atm128_OCR5BL_t;
typedef uint8_t Atm128_OCR5CH_t;
typedef uint8_t Atm128_OCR5CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
typedef uint8_t Atm128_ICR4H_t;
typedef uint8_t Atm128_ICR4L_t;
typedef uint8_t Atm128_ICR5H_t;
typedef uint8_t Atm128_ICR5L_t;
# 85 "/opt/tinyos-2.x/tos/platforms/iris/MicaTimer.h"
typedef struct __nesc_unnamed4304 {
} 
#line 85
T64khz;
typedef struct __nesc_unnamed4305 {
} 
#line 86
T128khz;
typedef struct __nesc_unnamed4306 {
} 
#line 87
T2mhz;
typedef struct __nesc_unnamed4307 {
} 
#line 88
T4mhz;
#line 158
typedef TMicro TOne;
typedef TMicro TThree;
typedef uint32_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;
enum __nesc_unnamed4308 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 5, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4309 {
  PLATFORM_MHZ = 8
};
# 62 "/opt/tinyos-2.x/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4310 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4311 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};


enum __nesc_unnamed4312 {
  PLATFORM_BAUDRATE = 57600L
};
# 35 "/opt/tinyos-2.x/support/sdk/c/blip/lib6lowpan/6lowpan.h"
enum __nesc_unnamed4313 {
  LOWMSG_MESH_LEN = 5, 
  LOWMSG_BCAST_LEN = 2, 
  LOWMSG_FRAG1_LEN = 4, 
  LOWMSG_FRAGN_LEN = 5
};

enum __nesc_unnamed4314 {
  INET_MTU = 1280, 
  LIB6LOWPAN_MAX_LEN = 100, 
  LOWPAN_LINK_MTU = 109, 




  FRAG_EXPIRE_TIME = 4096
};




enum __nesc_unnamed4315 {
  LOWPAN_NALP_PATTERN = 0x0, 
  LOWPAN_MESH_PATTERN = 0x2, 
  LOWPAN_FRAG1_PATTERN = 0x18, 
  LOWPAN_FRAGN_PATTERN = 0x1c, 
  LOWPAN_BCAST_PATTERN = 0x50, 
  LOWPAN_IPV6_PATTERN = 0x41
};

enum __nesc_unnamed4316 {
  LOWPAN_MESH_V_MASK = 0x20, 
  LOWPAN_MESH_F_MASK = 0x10, 
  LOWPAN_MESH_HOPS_MASK = 0x0f
};




enum __nesc_unnamed4317 {
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




enum __nesc_unnamed4318 {
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
# 43 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4319 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 41 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverLayer.h"
#line 38
typedef nx_struct rf230_header_t {

  nxle_uint8_t length;
} __attribute__((packed)) rf230_header_t;









#line 43
typedef struct rf230_metadata_t {

  uint8_t lqi;
  union  {

    uint8_t power;
    uint8_t rssi;
  } ;
} rf230_metadata_t;

enum rf230_registers_enum {

  RF230_TRX_STATUS = 0x01, 
  RF230_TRX_STATE = 0x02, 
  RF230_TRX_CTRL_0 = 0x03, 
  RF230_PHY_TX_PWR = 0x05, 
  RF230_PHY_RSSI = 0x06, 
  RF230_PHY_ED_LEVEL = 0x07, 
  RF230_PHY_CC_CCA = 0x08, 
  RF230_CCA_THRES = 0x09, 
  RF230_IRQ_MASK = 0x0E, 
  RF230_IRQ_STATUS = 0x0F, 
  RF230_VREG_CTRL = 0x10, 
  RF230_BATMON = 0x11, 
  RF230_XOSC_CTRL = 0x12, 
  RF230_PLL_CF = 0x1A, 
  RF230_PLL_DCU = 0x1B, 
  RF230_PART_NUM = 0x1C, 
  RF230_VERSION_NUM = 0x1D, 
  RF230_MAN_ID_0 = 0x1E, 
  RF230_MAN_ID_1 = 0x1F, 
  RF230_SHORT_ADDR_0 = 0x20, 
  RF230_SHORT_ADDR_1 = 0x21, 
  RF230_PAN_ID_0 = 0x22, 
  RF230_PAN_ID_1 = 0x23, 
  RF230_IEEE_ADDR_0 = 0x24, 
  RF230_IEEE_ADDR_1 = 0x25, 
  RF230_IEEE_ADDR_2 = 0x26, 
  RF230_IEEE_ADDR_3 = 0x27, 
  RF230_IEEE_ADDR_4 = 0x28, 
  RF230_IEEE_ADDR_5 = 0x29, 
  RF230_IEEE_ADDR_6 = 0x2A, 
  RF230_IEEE_ADDR_7 = 0x2B, 
  RF230_XAH_CTRL = 0x2C, 
  RF230_CSMA_SEED_0 = 0x2D, 
  RF230_CSMA_SEED_1 = 0x2E
};

enum rf230_trx_register_enums {

  RF230_CCA_DONE = 1 << 7, 
  RF230_CCA_STATUS = 1 << 6, 
  RF230_TRX_STATUS_MASK = 0x1F, 
  RF230_P_ON = 0, 
  RF230_BUSY_RX = 1, 
  RF230_BUSY_TX = 2, 
  RF230_RX_ON = 6, 
  RF230_TRX_OFF = 8, 
  RF230_PLL_ON = 9, 
  RF230_SLEEP = 15, 
  RF230_BUSY_RX_AACK = 17, 
  RF230_BUSR_TX_ARET = 18, 
  RF230_RX_AACK_ON = 22, 
  RF230_TX_ARET_ON = 25, 
  RF230_RX_ON_NOCLK = 28, 
  RF230_AACK_ON_NOCLK = 29, 
  RF230_BUSY_RX_AACK_NOCLK = 30, 
  RF230_STATE_TRANSITION_IN_PROGRESS = 31, 
  RF230_TRAC_STATUS_MASK = 0xE0, 
  RF230_TRAC_SUCCESS = 0, 
  RF230_TRAC_SUCCESS_DATA_PENDING = 1 << 5, 
  RF230_TRAC_CHANNEL_ACCESS_FAILURE = 3 << 5, 
  RF230_TRAC_NO_ACK = 5 << 5, 
  RF230_TRAC_INVALID = 7 << 5, 
  RF230_TRX_CMD_MASK = 0x1F, 
  RF230_NOP = 0, 
  RF230_TX_START = 2, 
  RF230_FORCE_TRX_OFF = 3
};

enum rf230_phy_register_enums {

  RF230_TX_AUTO_CRC_ON = 1 << 7, 
  RF230_TX_PWR_MASK = 0x0F, 
  RF230_RSSI_MASK = 0x1F, 
  RF230_CCA_REQUEST = 1 << 7, 
  RF230_CCA_MODE_0 = 0 << 5, 
  RF230_CCA_MODE_1 = 1 << 5, 
  RF230_CCA_MODE_2 = 2 << 5, 
  RF230_CCA_MODE_3 = 3 << 5, 
  RF230_CHANNEL_DEFAULT = 11, 
  RF230_CHANNEL_MASK = 0x1F, 
  RF230_CCA_CS_THRES_SHIFT = 4, 
  RF230_CCA_ED_THRES_SHIFT = 0
};

enum rf230_irq_register_enums {

  RF230_IRQ_BAT_LOW = 1 << 7, 
  RF230_IRQ_TRX_UR = 1 << 6, 
  RF230_IRQ_TRX_END = 1 << 3, 
  RF230_IRQ_RX_START = 1 << 2, 
  RF230_IRQ_PLL_UNLOCK = 1 << 1, 
  RF230_IRQ_PLL_LOCK = 1 << 0
};

enum rf230_control_register_enums {

  RF230_AVREG_EXT = 1 << 7, 
  RF230_AVDD_OK = 1 << 6, 
  RF230_DVREG_EXT = 1 << 3, 
  RF230_DVDD_OK = 1 << 2, 
  RF230_BATMON_OK = 1 << 5, 
  RF230_BATMON_VHR = 1 << 4, 
  RF230_BATMON_VTH_MASK = 0x0F, 
  RF230_XTAL_MODE_OFF = 0 << 4, 
  RF230_XTAL_MODE_EXTERNAL = 4 << 4, 
  RF230_XTAL_MODE_INTERNAL = 15 << 4
};

enum rf230_pll_register_enums {

  RF230_PLL_CF_START = 1 << 7, 
  RF230_PLL_DCU_START = 1 << 7
};

enum rf230_spi_command_enums {

  RF230_CMD_REGISTER_READ = 0x80, 
  RF230_CMD_REGISTER_WRITE = 0xC0, 
  RF230_CMD_REGISTER_MASK = 0x3F, 
  RF230_CMD_FRAME_READ = 0x20, 
  RF230_CMD_FRAME_WRITE = 0x60, 
  RF230_CMD_SRAM_READ = 0x00, 
  RF230_CMD_SRAM_WRITE = 0x40
};
# 42 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/RadioConfig.h"
enum __nesc_unnamed4320 {





  RF230_TRX_CTRL_0_VALUE = 0, 





  RF230_CCA_MODE_VALUE = RF230_CCA_MODE_3, 





  RF230_CCA_THRES_VALUE = 0xC7
};
#line 90
typedef TOne TRadio;
typedef uint16_t tradio_size;
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 40 "/opt/tinyos-2.x/tos/types/IeeeEui64.h"
enum __nesc_unnamed4321 {
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
typedef struct __nesc_unnamed4322 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4323 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4324 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4325 {
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
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4326 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4327 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
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
# 58 "/opt/tinyos-2.x/tos/chips/rf230/RF230Radio.h"
#line 48
typedef nx_struct rf230packet_header_t {

  rf230_header_t rf230;
  ieee154_simple_header_t ieee154;

  network_header_t network;


  activemessage_header_t am;
} __attribute__((packed)) 
rf230packet_header_t;




#line 60
typedef nx_struct rf230packet_footer_t {
} __attribute__((packed)) 

rf230packet_footer_t;
#line 76
#line 65
typedef struct rf230packet_metadata_t {





  link_metadata_t link;

  timestamp_metadata_t timestamp;
  flags_metadata_t flags;
  rf230_metadata_t rf230;
} rf230packet_metadata_t;
# 83 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4328 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4329 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4330 {
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
# 43 "/opt/tinyos-2.x/tos/platforms/iris/platform_message.h"
#line 40
typedef union message_header {
  rf230packet_header_t rf230;
  serial_header_t serial;
} message_header_t;



#line 45
typedef union message_footer {
  rf230packet_footer_t rf230;
} message_footer_t;



#line 49
typedef union message_metadata {
  rf230packet_metadata_t rf230;
} message_metadata_t;
# 19 "/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[112];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 27 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatch.h"
enum __nesc_unnamed4331 {
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

  union __nesc_unnamed4332 {

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
  union __nesc_unnamed4333 {
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



enum __nesc_unnamed4334 {
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

enum __nesc_unnamed4335 {
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




enum __nesc_unnamed4336 {
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


enum __nesc_unnamed4337 {
  LOWMSG_MESH_HDR = 1 << 0, 
  LOWMSG_BCAST_HDR = 1 << 1, 
  LOWMSG_FRAG1_HDR = 1 << 2, 
  LOWMSG_FRAGN_HDR = 1 << 3, 
  LOWMSG_NALP = 1 << 4, 
  LOWMSG_IPNH_HDR = 1 << 5, 
  LOWMSG_IPV6 = 1 << 6
};
#line 183
enum __nesc_unnamed4338 {
  T_FAILED1 = 0, 
  T_FAILED2 = 1, 
  T_UNUSED = 2, 
  T_ACTIVE = 3, 
  T_ZOMBIE = 4
};
# 59 "/opt/tinyos-2.x/tos/lib/net/blip/BlipStatistics.h"
#line 40
typedef nx_struct __nesc_unnamed4339 {
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
typedef nx_struct __nesc_unnamed4340 {
  nx_uint8_t hop_limit;
  nx_uint16_t parent;
  nx_uint16_t parent_metric;
  nx_uint16_t parent_etx;
} __attribute__((packed)) route_statistics_t;










#line 69
typedef nx_struct __nesc_unnamed4341 {
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
typedef nx_struct __nesc_unnamed4342 {
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
  int (*put)(char arg_0x405aae50, struct __file *arg_0x405a8068);
  int (*get)(struct __file *arg_0x405a8458);
  void *udata;
};
#line 405
struct __file;
#line 417
struct __file;
#line 685
extern int snprintf(char *__s, size_t __n, const char *__fmt, ...);
# 6 "/opt/tinyos-2.x/tos/lib/net/blip/iprouting.h"
enum __nesc_unnamed4343 {
  ROUTE_INVAL_KEY = -1
};





enum __nesc_unnamed4344 {
  ROUTE_IFACE_ALL = 0, 
  ROUTE_IFACE_154 = 1, 
  ROUTE_IFACE_PPP = 2
};

enum __nesc_unnamed4345 {
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
# 33 "/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
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
# 41 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4346 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 58
#line 49
typedef struct __nesc_unnamed4347 {
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
typedef union __nesc_unnamed4348 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 67
typedef struct __nesc_unnamed4349 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 74
typedef union __nesc_unnamed4350 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
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
typedef struct __nesc_unnamed4351 {
  void *data;
  uint16_t elt_len;
  uint16_t n_elts;
} table_t;

void table_init(table_t *table, void *data, uint16_t elt_len, uint16_t n_elts);

void table_map(table_t *table, void (*fn)(void *arg_0x40db5288));
# 25 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/icmp6.h"
enum __nesc_unnamed4352 {
  ICMP_EXT_TYPE_PREFIX = 3, 
  ICMP_EXT_TYPE_BEACON = 17
};


enum __nesc_unnamed4353 {

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
typedef nx_struct __nesc_unnamed4354 {
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
enum __nesc_unnamed4355 {
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

enum __nesc_unnamed4356 {
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
enum __nesc_unnamed4357 {
  BASE_RANK = 0, 
  INFINITE_RANK = 0xFFFF, 
  RPL_DEFAULT_INSTANCE = 0, 
  NUMBER_OF_PARENTS = 10, 
  DIS_INTERVAL = 3 * 1024U, 
  DEFAULT_LIFETIME = 1024L * 60 * 20
};


enum __nesc_unnamed4358 {
  ICMPV6_TYPE = 58
};

enum __nesc_unnamed4359 {
  ICMPV6_CODE_DIS = 0x00, 
  ICMPV6_CODE_DIO = 0x01, 
  ICMPV6_CODE_DAO = 0x02
};

enum __nesc_unnamed4360 {
  DIO_BASE_FLAG_GRD = 0, 
  DIO_BASE_FLAG_DA_TRIGGER = 1, 
  DIO_BASE_FLAG_DA_SUPPORT = 2, 
  DIO_BASE_FLAG_PREF_5 = 5, 
  DIO_BASE_FLAG_PREF_6 = 6, 
  DIO_BASE_FLAG_PREF_7 = 7
};

enum __nesc_unnamed4361 {
  DIO_BASE_OPT_PAD1 = 0, 
  DIO_BASE_OPT_PADN = 1, 
  DIO_BASE_OPT_DAG_METRIC = 2, 
  DIO_BASE_OPT_DST_PREFIX = 3, 
  DIO_BASE_OPT_DAG_TIMER_CONFIG = 4
};






#line 293
typedef struct __nesc_unnamed4362 {
  struct in6_addr next_hop;
  uint8_t *data;
} rpl_data_packet_t;





#line 298
typedef struct __nesc_unnamed4363 {
  struct ip6_hdr iphdr;
  uint8_t retries;
  rpl_data_packet_t packet;
} queue_entry_t;





#line 304
typedef struct __nesc_unnamed4364 {
  struct ip6_packet s_pkt;
  struct dao_base_t dao_base;
  struct ip_iovec v[1];
} dao_entry_t;
#line 321
#line 310
typedef struct __nesc_unnamed4365 {
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
typedef struct __nesc_unnamed4366 {
  struct in6_addr nodeID;
  uint16_t successTx;
  uint16_t totalTx;
  uint16_t etx;
} parentTableEntryDAO;




#line 330
typedef struct __nesc_unnamed4367 {
  route_key_t key;
  uint32_t lifetime;
} downwards_table_t;


nx_struct nx_ip6_ext {
  nx_uint8_t ip6e_nxt;
  nx_uint8_t ip6e_len;
} __attribute__((packed));









#line 342
typedef nx_struct __nesc_unnamed4368 {
  nx_struct nx_ip6_ext ip6_ext_outer;
  nx_struct nx_ip6_ext ip6_ext_inner;
  nx_uint8_t bitflag;

  nx_uint8_t instance_id;
  nx_uint16_t senderRank;
} __attribute__((packed)) __attribute((packed))  rpl_data_hdr_t;
#line 371
#line 362
typedef struct __nesc_unnamed4369 {
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
enum __nesc_unnamed4370 {
  MAX_REPLY_LEN = 128
};
typedef TMilli UDPEchoP__StatusTimer__precision_tag;
typedef ip_statistics_t UDPEchoP__IPStats__stat_str;
typedef udp_statistics_t UDPEchoP__UDPStats__stat_str;
enum HilTimerMilliC____nesc_unnamed4371 {
  HilTimerMilliC__TIMER_COUNT = 10U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm1281Timer2AsyncP__Compare__size_type;
typedef uint8_t HplAtm1281Timer2AsyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef struct in6_iid IPForwardingEngineP__Pool__t;
typedef TRadio RF230RadioP__PacketTimeStamp__precision_tag;
typedef uint32_t RF230RadioP__PacketTimeStamp__size_type;
typedef TRadio /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__precision_tag;
typedef tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type;
typedef TMilli /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__precision_tag;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef TRadio /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__precision_tag;
typedef uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type;
typedef TRadio /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeRadio__precision_tag;
typedef TMilli /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeMilli__precision_tag;
typedef TMilli /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__precision_tag;
typedef uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__size_type;
typedef TMicro RF230DriverHwAckP__BusyWait__precision_tag;
typedef uint16_t RF230DriverHwAckP__BusyWait__size_type;
typedef uint8_t RF230DriverHwAckP__PacketRSSI__value_type;
typedef TRadio RF230DriverHwAckP__PacketTimeStamp__precision_tag;
typedef uint32_t RF230DriverHwAckP__PacketTimeStamp__size_type;
typedef TRadio RF230DriverHwAckP__LocalTime__precision_tag;
typedef uint8_t RF230DriverHwAckP__PacketTransmitPower__value_type;
typedef uint8_t RF230DriverHwAckP__PacketTimeSyncOffset__value_type;
typedef uint8_t RF230DriverHwAckP__PacketLinkQuality__value_type;
typedef uint16_t HplRF230P__Capture__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareA__size_type;
typedef uint16_t HplAtm1281Timer1P__Capture__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareB__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareC__size_type;
typedef uint16_t HplAtm1281Timer1P__Timer__timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size;
typedef TOne /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__frequency_tag;
typedef uint16_t /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__frequency_tag /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__precision_tag;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size;
enum /*HplRF230C.AlarmC*/AlarmOne16C__0____nesc_unnamed4372 {
  AlarmOne16C__0__COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__size_type;
typedef TMicro /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
typedef struct send_info IPDispatchP__SendInfoPool__t;
typedef ip_statistics_t IPDispatchP__BlipStatistics__stat_str;
typedef struct send_entry *IPDispatchP__SendQueue__t;
typedef TMilli IPDispatchP__ExpireTimer__precision_tag;
typedef message_t IPDispatchP__FragPool__t;
typedef struct send_entry IPDispatchP__SendEntryPool__t;
typedef uint8_t RF230ReadLqiC__SubLqi__value_type;
typedef uint8_t RF230ReadLqiC__SubRssi__value_type;
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
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );



static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 46
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403dcb38);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403dcb38);
# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 83 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP__Leds__led1Toggle(void );
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
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void );
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void );
# 89 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 82
static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t control);
#line 81
static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t control);
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void );
# 68 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 86
static int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm1281Timer2AsyncP__Compare__size_type HplAtm1281Timer2AsyncP__Compare__get(void );





static void HplAtm1281Timer2AsyncP__Compare__set(HplAtm1281Timer2AsyncP__Compare__size_type t);










static void HplAtm1281Timer2AsyncP__Compare__start(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm1281Timer2AsyncP__Timer__timer_size HplAtm1281Timer2AsyncP__Timer__get(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 136
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c4228);
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c4228);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c4228);
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c4228, 
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c4228, 
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c4228);
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void IPProtocolsP__SubIP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 17
static error_t IPProtocolsP__IP__send(
# 9 "/opt/tinyos-2.x/tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x406ff3b8, 
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void IPProtocolsP__IP__default__recv(
# 9 "/opt/tinyos-2.x/tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x406ff3b8, 
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
static bool IPForwardingEngineP__ForwardingEvents__default__approve(
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x4071e1e8, 
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 13
static bool IPForwardingEngineP__ForwardingEvents__default__initiate(
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x4071e1e8, 
# 13 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 39
static void IPForwardingEngineP__ForwardingEvents__default__linkResult(
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x4071e1e8, 
# 39 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct in6_addr *dest, struct send_info *info);
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPForwardingEngineP__IPForward__default__send(
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x4072e3a8, 
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
struct in6_addr *next_hop, 
struct ip6_packet *msg, 
void *data);







static void IPForwardingEngineP__IPForward__recv(
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x4072e3a8, 
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 22
static void IPForwardingEngineP__IPForward__sendDone(
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x4072e3a8, 
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
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingTable.nc"
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
static am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230RadioP__RadioAlarm__fired(void );
# 46 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverConfig.nc"
static uint8_t RF230RadioP__RF230DriverConfig__maxPayloadLength(void );
#line 40
static uint8_t RF230RadioP__RF230DriverConfig__headerLength(message_t *msg);
#line 52
static uint8_t RF230RadioP__RF230DriverConfig__metadataLength(message_t *msg);






static uint8_t RF230RadioP__RF230DriverConfig__headerPreloadLength(void );
# 3 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ShortAddressConfig.nc"
static void RF230RadioP__ShortAddressConfig__setShortAddr(uint16_t address);
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void RF230RadioP__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t RF230RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t RF230RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);










static uint16_t RF230RadioP__RandomCollisionConfig__getMinimumBackoff(void );





static uint16_t RF230RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void RF230BarePacketP__BarePacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t RF230BarePacketP__BarePacket__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


RF230BarePacketP__BarePacket__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t RF230BarePacketP__BarePacket__maxPayloadLength(void );
#line 94
static void RF230BarePacketP__BarePacket__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x408a0480);
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x408a0480, 
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
tradio_size timeout);
#line 45
static bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x408a0480);
# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x408a0480);
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );










static void TaskletC__Tasklet__schedule(void );
#line 72
static void TaskletC__Tasklet__suspend(void );






static void TaskletC__Tasklet__resume(void );
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(
#line 74
message_t * msg);
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x408cccf8, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(
# 47 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x408cbda0, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x408cb708, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x408cab30, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 68 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );









static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 136
static bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(
#line 133
message_t * amsg);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x408c9220, 
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
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );
#line 70
static resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409529b8);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409529b8);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40953310);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40953310);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);
# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(
#line 74
message_t * msg);
# 97 "/opt/tinyos-2.x/tos/interfaces/Ieee154Send.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
#line 46
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__send(message_t *msg);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);





static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);
# 131 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);
#line 120
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);




static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 151
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 99
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);
#line 178
static ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );
#line 173
static ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );
#line 185
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 105
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 168
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);
# 80 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool NeighborhoodP__NeighborhoodFlag__get(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x40a35258, 
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);




static void NeighborhoodP__NeighborhoodFlag__set(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x40a35258, 
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);
# 71 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t id);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t NeighborhoodP__Init__init(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__runTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__fired(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__send(message_t *msg);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 65 "/opt/tinyos-2.x/tos/interfaces/PacketLink.nc"
static uint16_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetryDelay(
#line 62
message_t * msg);
#line 46
static void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(
#line 42
message_t * msg, 



uint16_t maxRetries);
#line 59
static uint16_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(
#line 56
message_t * msg);
#line 53
static void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);
#line 71
static bool /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__wasDelivered(
#line 68
message_t * msg);
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 130
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );
# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 75
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );
#line 56
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );
#line 56
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 63 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__timestamp(
#line 52
message_t * msg);
#line 70
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(
#line 66
message_t * msg);
#line 49
static bool /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__isValid(
#line 38
message_t * msg);
#line 78
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(
#line 73
message_t * msg, 




/*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type value);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40b687c0, 
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
#line 40
static bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40b687c0, 
# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);




static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__setValue(
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40b687c0, 
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg, bool value);




static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40b687c0, 
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioCCA.nc"
static void RF230DriverHwAckP__RadioCCA__default__done(error_t error);
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static void RF230DriverHwAckP__PacketRSSI__clear(message_t *msg);
#line 46
static RF230DriverHwAckP__PacketRSSI__value_type RF230DriverHwAckP__PacketRSSI__get(message_t *msg);










static void RF230DriverHwAckP__PacketRSSI__set(message_t *msg, RF230DriverHwAckP__PacketRSSI__value_type value);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RF230DriverHwAckP__SoftwareInit__init(void );
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230DriverHwAckP__RadioAlarm__fired(void );
# 44 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
static error_t RF230DriverHwAckP__RadioState__turnOff(void );
#line 56
static error_t RF230DriverHwAckP__RadioState__turnOn(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static RF230DriverHwAckP__PacketTransmitPower__value_type RF230DriverHwAckP__PacketTransmitPower__get(message_t *msg);
#line 40
static bool RF230DriverHwAckP__PacketTransmitPower__isSet(message_t *msg);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void RF230DriverHwAckP__changeAddress__runTask(void );
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void RF230DriverHwAckP__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t RF230DriverHwAckP__RadioPacket__payloadLength(message_t *msg);









static uint8_t RF230DriverHwAckP__RadioPacket__maxPayloadLength(void );
#line 54
static void RF230DriverHwAckP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t RF230DriverHwAckP__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t RF230DriverHwAckP__RadioPacket__metadataLength(message_t *msg);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void RF230DriverHwAckP__releaseSpi__runTask(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static RF230DriverHwAckP__PacketTimeSyncOffset__value_type RF230DriverHwAckP__PacketTimeSyncOffset__get(message_t *msg);
#line 40
static bool RF230DriverHwAckP__PacketTimeSyncOffset__isSet(message_t *msg);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RF230DriverHwAckP__PlatformInit__init(void );
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void RF230DriverHwAckP__SpiResource__granted(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static RF230DriverHwAckP__PacketLinkQuality__value_type RF230DriverHwAckP__PacketLinkQuality__get(message_t *msg);










static void RF230DriverHwAckP__PacketLinkQuality__set(message_t *msg, RF230DriverHwAckP__PacketLinkQuality__value_type value);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static error_t RF230DriverHwAckP__RadioSend__send(message_t *msg);
# 59 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t RF230DriverHwAckP__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool RF230DriverHwAckP__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 61 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void RF230DriverHwAckP__IRQ__captured(uint16_t time);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void RF230DriverHwAckP__Tasklet__run(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P__Capture__captured(HplRF230P__Capture__size_type t);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplRF230P__PlatformInit__init(void );
# 66 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void HplRF230P__IRQ__disable(void );
#line 53
static error_t HplRF230P__IRQ__captureRisingEdge(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void Atm128SpiP__zeroTask__runTask(void );
# 82 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__default__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP__ResourceArbiter__granted(
# 99 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40c4e010);
# 45 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
# 109 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__dataReady(uint8_t data);
# 62 "/opt/tinyos-2.x/tos/interfaces/FastSpiByte.nc"
static void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data);
#line 74
static uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data);
#line 68
static uint8_t Atm128SpiP__FastSpiByte__splitRead(void );
#line 81
static uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__release(
# 95 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40c501b8);
# 97 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__immediateRequest(
# 95 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40c501b8);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__request(
# 95 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40c501b8);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__default__granted(
# 95 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40c501b8);
# 128 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP__Resource__isOwner(
# 95 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40c501b8);
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
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40953d38);
# 61 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40953d38);
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409529b8);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409529b8);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40953310);
# 97 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40953310);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40953310);
# 128 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40953310);
# 90 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ArbiterInfo__inUse(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void );
# 91 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void );
#line 83
static void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t control);
#line 80
static uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void );
# 62 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareA__reset(void );
#line 54
static void HplAtm1281Timer1P__CompareA__set(HplAtm1281Timer1P__CompareA__size_type t);










static void HplAtm1281Timer1P__CompareA__start(void );


static void HplAtm1281Timer1P__CompareA__stop(void );
# 88 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P__Capture__setEdge(bool up);
#line 47
static HplAtm1281Timer1P__Capture__size_type HplAtm1281Timer1P__Capture__get(void );
#line 64
static void HplAtm1281Timer1P__Capture__reset(void );


static void HplAtm1281Timer1P__Capture__start(void );


static void HplAtm1281Timer1P__Capture__stop(void );
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareB__default__fired(void );
#line 58
static void HplAtm1281Timer1P__CompareC__default__fired(void );
# 87 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm1281Timer1P__Timer__test(void );
#line 61
static HplAtm1281Timer1P__Timer__timer_size HplAtm1281Timer1P__Timer__get(void );
#line 104
static void HplAtm1281Timer1P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm1281Timer1P__Timer__set(HplAtm1281Timer1P__Timer__timer_size t);










static void HplAtm1281Timer1P__Timer__start(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void );
#line 103
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);
#line 66
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get(void );
# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 66 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC__BusyWait__wait(BusyWaitMicroC__BusyWait__size_type dt);
# 100 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
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
static uint8_t RF230ReadLqiC__ReadLqi__readRssi(message_t *msg);
#line 6
static uint8_t RF230ReadLqiC__ReadLqi__readLqi(message_t *msg);
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
uint8_t arg_0x40fd0478, 
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void ICMPCoreP__ICMP_IP__default__recv(
# 50 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCoreP.nc"
uint8_t arg_0x40fd0478, 
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
uint8_t arg_0x410080b8, 
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t UdpP__UDP__bind(
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x410080b8, 
# 12 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
uint16_t port);








static error_t UdpP__UDP__sendtov(
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x410080b8, 
# 21 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *dest, 
struct ip_iovec *iov);






static void UdpP__UDP__default__recvfrom(
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x410080b8, 
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
uint8_t arg_0x4120db00, 
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x4120db00, 
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
uint8_t arg_0x4120db00, 
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x4120db00, 
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void UDPShellP__Boot__booted(void );
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
static void UDPShellP__UDP__recvfrom(struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 11 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
static char *UDPShellP__ShellCommand__default__eval(
# 42 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x41211a20, 
# 11 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
int argc, char **argv);
# 3 "/opt/tinyos-2.x/tos/lib/net/blip/shell/RegisterShellCommand.nc"
static char *UDPShellP__RegisterShellCommand__default__getCommandName(
# 43 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x41213a28);
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
uint8_t arg_0x4125aa10, 
# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
uint16_t ping_rcv, uint16_t ping_n);
#line 8
static void ICMPPingP__ICMPPing__default__pingReply(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x4125aa10, 
# 8 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
struct in6_addr *source, struct icmp_stats *stats);
#line 6
static error_t ICMPPingP__ICMPPing__ping(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x4125aa10, 
# 6 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
struct in6_addr *target, uint16_t period, uint16_t n);
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void ICMPPingP__PingTimer__fired(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 41
static void MotePlatformP__SerialIdPin__clr(void );
# 49 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
# 67 "/opt/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4373 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
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
uint8_t arg_0x403dcb38);
# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4374 {

  SchedulerBasicP__NUM_TASKS = 22U, 
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
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 99 "/opt/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 147
static inline void McuSleepC__McuSleep__sleep(void );
#line 161
static inline void McuSleepC__McuPowerState__update(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );

static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 56 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 99
static inline void LedsP__Leds__led1Toggle(void );
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
# 83 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
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
# 89 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 82
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control);
#line 81
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control);
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow(void );
# 68 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void );
#line 86
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get(void );
# 73 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0;
#line 74
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0____nesc_unnamed4375 {
  Atm1281AlarmAsyncP__0__MINDT = 2, 
  Atm1281AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void );
#line 112
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(uint8_t n);
#line 128
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void );
#line 187
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void );
#line 199
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void );
#line 242
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void );
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer2AsyncP__Compare__fired(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer2AsyncP__Timer__overflow(void );
# 99 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Timer__get(void );
#line 131
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x);





static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x);
#line 154
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 181
static inline void HplAtm1281Timer2AsyncP__Compare__start(void );









static inline uint8_t HplAtm1281Timer2AsyncP__Compare__get(void );


static inline void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t);









static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void );
#line 219
static inline mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void );
#line 242
void __vector_13(void ) __attribute((signal))   ;







void __vector_15(void ) __attribute((signal))   ;
#line 266
static inline void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 278
static inline int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4376 {
#line 74
  AlarmToTimerC__0__fired = 0U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c4228);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4377 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 1U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4378 {

  VirtualizeTimerC__0__NUM_TIMERS = 10, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4379 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 189
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t IPProtocolsP__SubIP__send(struct ip6_packet *msg);
# 14 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPPacket.nc"
static int IPProtocolsP__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type);
# 23 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static void IPProtocolsP__IP__recv(
# 9 "/opt/tinyos-2.x/tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x406ff3b8, 
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
uint8_t arg_0x4071e1e8, 
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 13
static bool IPForwardingEngineP__ForwardingEvents__initiate(
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x4071e1e8, 
# 13 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 39
static void IPForwardingEngineP__ForwardingEvents__linkResult(
# 22 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x4071e1e8, 
# 39 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct in6_addr *dest, struct send_info *info);
# 18 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPForwardingEngineP__IPForward__send(
# 28 "/opt/tinyos-2.x/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x4072e3a8, 
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
enum IPForwardingEngineP____nesc_unnamed4380 {
#line 96
  IPForwardingEngineP__defaultRouteAddedTask = 2U
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
#line 184
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
# 42 "/opt/tinyos-2.x/tos/platforms/micaz/LocalIeeeEui64C.nc"
static inline ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void );
# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size RF230RadioP__RadioAlarm__getNow(void );
# 5 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ShortAddressConfig.nc"
static void RF230RadioP__ShortAddressConfig__setShortAddrDone(error_t error);
# 120 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint8_t RF230RadioP__Ieee154PacketLayer__getDSN(message_t *msg);




static void RF230RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 151
static uint16_t RF230RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 168
static bool RF230RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t RF230RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 75 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__headerLength(message_t *msg);




static inline uint8_t RF230RadioP__RF230DriverConfig__maxPayloadLength(void );





static inline uint8_t RF230RadioP__RF230DriverConfig__metadataLength(message_t *msg);




static inline uint8_t RF230RadioP__RF230DriverConfig__headerPreloadLength(void );
#line 152
static inline uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static inline void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn);




static inline am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg);




static inline void RF230RadioP__UniqueConfig__reportChannelError(void );








static inline am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg);
#line 243
static inline void RF230RadioP__ShortAddressConfig__setShortAddr(uint16_t address);
#line 261
static inline uint16_t RF230RadioP__RandomCollisionConfig__getMinimumBackoff(void );








static inline uint16_t RF230RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);








static inline uint16_t RF230RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);






static inline uint16_t RF230RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
#line 302
static inline void RF230RadioP__RadioAlarm__fired(void );
# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static void RF230BarePacketP__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t RF230BarePacketP__RadioPacket__payloadLength(message_t *msg);









static uint8_t RF230BarePacketP__RadioPacket__maxPayloadLength(void );
#line 54
static void RF230BarePacketP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
# 8 "/opt/tinyos-2.x/tos/chips/rf230/RF230BarePacketP.nc"
static inline void RF230BarePacketP__BarePacket__clear(message_t *msg);




static inline uint8_t RF230BarePacketP__BarePacket__payloadLength(message_t *msg);





static inline void RF230BarePacketP__BarePacket__setPayloadLength(message_t *msg, uint8_t len);





static inline uint8_t RF230BarePacketP__BarePacket__maxPayloadLength(void );




static void *RF230BarePacketP__BarePacket__getPayload(message_t *msg, uint8_t len);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(
# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x408a0480);
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void );
#line 66
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt);
# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void );
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state;
enum /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0____nesc_unnamed4381 {

  RadioAlarmP__0__STATE_READY = 0, 
  RadioAlarmP__0__STATE_WAIT = 1, 
  RadioAlarmP__0__STATE_FIRED = 2
};

uint8_t /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm;

static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );










static __inline tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id);




static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );








static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id);



static __inline bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id);




static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout);
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
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x408cccf8, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(
# 47 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x408cbda0, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg);
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void );
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x408cb708, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x408cab30, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x408c9220, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline activemessage_header_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg);




static inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg);
#line 98
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);









static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(am_id_t id, message_t *msg, error_t error);
#line 128
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
#line 141
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );









static __inline bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg);





static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg);
#line 199
static __inline am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg);
#line 225
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);
#line 262
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg);
# 62 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 93
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 106
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error);
# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
message_t */*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending;
#line 68
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );









static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result);
# 49 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4382 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );







static inline resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409529b8);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409529b8);
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static bool /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40953310);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4383 {
#line 69
  SimpleArbiterP__0__grantedTask = 3U
};
#line 69
typedef int /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4384 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4385 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId;
#line 97
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 155
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );









static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);





static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg);
# 185 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static bool /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg);
# 97 "/opt/tinyos-2.x/tos/interfaces/Ieee154Send.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg);
#line 68
static inline uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg);
#line 127
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);




static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);









static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);








static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg);
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error);
#line 54
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg);
# 81 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__send(message_t *msg);









static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 127
static inline network_header_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg);




static inline error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
#line 145
enum /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0____nesc_unnamed4386 {


  TinyosNetworkLayerC__0__PAYLOAD_OFFSET = sizeof(network_header_t )
};




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);
#line 214
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void );
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg);
# 57 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
enum /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0____nesc_unnamed4387 {

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

static inline ieee154_simple_header_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg);
#line 92
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 132
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 158
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);




static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);









static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);









static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 205
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);






static inline ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );




static inline ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );




static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 282
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg);
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx);




static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 71 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg);
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg);
# 61 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber;

static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );





static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);










static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);




static inline bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);





uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[5];

static inline message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 116
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
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
static error_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__send(message_t *msg);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask(void );
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__startOneShot(uint32_t dt);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__metadataLength(message_t *msg);
# 59 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 77 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
enum /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0____nesc_unnamed4388 {
#line 77
  PacketLinkLayerP__0__send = 4U
};
#line 77
typedef int /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0____nesc_sillytask_send[/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send];
#line 60
enum /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0____nesc_unnamed4389 {

  PacketLinkLayerP__0__STATE_READY = 0, 
  PacketLinkLayerP__0__STATE_SENDING = 1, 
  PacketLinkLayerP__0__STATE_SENDDONE = 2, 
  PacketLinkLayerP__0__STATE_SIGNAL = 4
};

uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_READY;
message_t */*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg;
uint16_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries;






static inline void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__runTask(void );
#line 129
static inline void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__sendDone(message_t *msg, error_t error);










static inline void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__fired(void );






static error_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__send(message_t *msg);
#line 183
static inline link_metadata_t */*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(message_t *msg);




static inline void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(message_t *msg, uint16_t maxRetries);




static inline void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);




static uint16_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(message_t *msg);




static inline uint16_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetryDelay(message_t *msg);




static inline bool /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__wasDelivered(message_t *msg);






static inline uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__payloadLength(message_t *msg);
#line 235
static inline uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error);
# 44 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOff(void );
#line 56
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void );
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void );
#line 67
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void );
# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void );
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void );
# 72 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void );






static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void );
# 144 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4390 {
#line 144
  MessageBufferLayerP__0__stateDoneTask = 5U
};
#line 144
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_stateDoneTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask];
#line 189
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4391 {
#line 189
  MessageBufferLayerP__0__sendTask = 6U
};
#line 189
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_sendTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask];
#line 322
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4392 {
#line 322
  MessageBufferLayerP__0__deliverTask = 7U
};
#line 322
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_deliverTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask];
#line 63
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4393 {

  MessageBufferLayerP__0__STATE_READY = 0, 
  MessageBufferLayerP__0__STATE_TX_PENDING = 1, 
  MessageBufferLayerP__0__STATE_TX_RETRY = 2, 
  MessageBufferLayerP__0__STATE_TX_SEND = 3, 
  MessageBufferLayerP__0__STATE_TX_DONE = 4, 
  MessageBufferLayerP__0__STATE_TURN_ON = 5, 
  MessageBufferLayerP__0__STATE_TURN_OFF = 6, 
  MessageBufferLayerP__0__STATE_CHANNEL = 7
};

static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 97
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop(void );
#line 144
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 163
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
#line 176
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );





message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg;
error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError;
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries;


enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4394 {
#line 187
  MessageBufferLayerP__0__MAX_RETRIES = 5
};
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
#line 217
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
#line 230
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
#line 252
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );








static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
#line 291
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4395 {

  MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE = 3
};

message_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];
message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];

uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead;
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );









static inline bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);









static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
#line 351
static inline message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg);
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void );
#line 65
static tradio_size /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg);










static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void );





static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg);
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg);
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void );
#line 56
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void );
# 78 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
enum /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4396 {
#line 78
  RandomCollisionLayerP__0__calcNextRandom = 8U
};
#line 78
typedef int /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_sillytask_calcNextRandom[/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom];
#line 57
uint8_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state;
enum /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4397 {

  RandomCollisionLayerP__0__STATE_READY = 0, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP__0__STATE_TX_SENDING = 3, 

  RandomCollisionLayerP__0__STATE_BARRIER = 0x80
};

message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg;
uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier;

static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );





uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );





static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff);
#line 98
static inline error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
#line 110
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
#line 155
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);







static inline bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);




static inline message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
# 52 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg);
#line 40
static bool /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__get(message_t *msg);









static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg);
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static timestamp_metadata_t */*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg);






static inline bool /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__isValid(message_t *msg);




static inline uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__timestamp(message_t *msg);




static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg);




static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value);
#line 116
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);
#line 136
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static flags_metadata_t */*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg);






static inline bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg);




static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg);






static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg);






static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__setValue(uint8_t bit, message_t *msg, bool value);









static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);
#line 110
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioCCA.nc"
static void RF230DriverHwAckP__RadioCCA__done(error_t error);
# 66 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void RF230DriverHwAckP__BusyWait__wait(RF230DriverHwAckP__BusyWait__size_type dt);
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static void RF230DriverHwAckP__RSSIFlag__clear(message_t *msg);
#line 50
static void RF230DriverHwAckP__RSSIFlag__set(message_t *msg);
# 63 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static RF230DriverHwAckP__PacketTimeStamp__size_type RF230DriverHwAckP__PacketTimeStamp__timestamp(
#line 52
message_t * msg);
#line 70
static void RF230DriverHwAckP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 49
static bool RF230DriverHwAckP__PacketTimeStamp__isValid(
#line 38
message_t * msg);
#line 78
static void RF230DriverHwAckP__PacketTimeStamp__set(
#line 73
message_t * msg, 




RF230DriverHwAckP__PacketTimeStamp__size_type value);
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void RF230DriverHwAckP__RSTN__makeOutput(void );
#line 40
static void RF230DriverHwAckP__RSTN__set(void );
static void RF230DriverHwAckP__RSTN__clr(void );
# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230DriverHwAckP__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool RF230DriverHwAckP__RadioAlarm__isFree(void );
#line 65
static tradio_size RF230DriverHwAckP__RadioAlarm__getNow(void );
# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
static void RF230DriverHwAckP__RadioState__done(void );
# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t RF230DriverHwAckP__LocalTime__get(void );
# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static bool RF230DriverHwAckP__AckReceivedFlag__get(message_t *msg);




static void RF230DriverHwAckP__AckReceivedFlag__setValue(message_t *msg, bool value);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t RF230DriverHwAckP__changeAddress__postTask(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void RF230DriverHwAckP__SLP_TR__makeOutput(void );
#line 40
static void RF230DriverHwAckP__SLP_TR__set(void );
static void RF230DriverHwAckP__SLP_TR__clr(void );
# 46 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverConfig.nc"
static uint8_t RF230DriverHwAckP__Config__maxPayloadLength(void );
#line 40
static uint8_t RF230DriverHwAckP__Config__headerLength(message_t *msg);
#line 52
static uint8_t RF230DriverHwAckP__Config__metadataLength(message_t *msg);






static uint8_t RF230DriverHwAckP__Config__headerPreloadLength(void );
# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t *RF230DriverHwAckP__RadioReceive__receive(message_t *msg);
#line 46
static bool RF230DriverHwAckP__RadioReceive__header(message_t *msg);
# 99 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static bool RF230DriverHwAckP__Ieee154PacketLayer__getAckRequired(message_t *msg);





static void RF230DriverHwAckP__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t RF230DriverHwAckP__ActiveMessageAddress__amAddress(void );




static am_group_t RF230DriverHwAckP__ActiveMessageAddress__amGroup(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t RF230DriverHwAckP__releaseSpi__postTask(void );
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t RF230DriverHwAckP__SpiResource__release(void );
#line 97
static error_t RF230DriverHwAckP__SpiResource__immediateRequest(void );
#line 88
static error_t RF230DriverHwAckP__SpiResource__request(void );
#line 128
static bool RF230DriverHwAckP__SpiResource__isOwner(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void RF230DriverHwAckP__SELN__makeOutput(void );
#line 40
static void RF230DriverHwAckP__SELN__set(void );
static void RF230DriverHwAckP__SELN__clr(void );
# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
static void RF230DriverHwAckP__RadioSend__ready(void );
#line 56
static void RF230DriverHwAckP__RadioSend__sendDone(error_t error);
# 66 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void RF230DriverHwAckP__IRQ__disable(void );
#line 53
static error_t RF230DriverHwAckP__IRQ__captureRisingEdge(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/FastSpiByte.nc"
static void RF230DriverHwAckP__FastSpiByte__splitWrite(uint8_t data);
#line 74
static uint8_t RF230DriverHwAckP__FastSpiByte__splitReadWrite(uint8_t data);
#line 68
static uint8_t RF230DriverHwAckP__FastSpiByte__splitRead(void );
#line 81
static uint8_t RF230DriverHwAckP__FastSpiByte__write(uint8_t data);
# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static bool RF230DriverHwAckP__TimeSyncFlag__get(message_t *msg);
#line 55
static void RF230DriverHwAckP__TransmitPowerFlag__clear(message_t *msg);
#line 40
static bool RF230DriverHwAckP__TransmitPowerFlag__get(message_t *msg);
# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
static void RF230DriverHwAckP__Tasklet__schedule(void );
#line 72
static void RF230DriverHwAckP__Tasklet__suspend(void );






static void RF230DriverHwAckP__Tasklet__resume(void );
# 455 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
enum RF230DriverHwAckP____nesc_unnamed4398 {
#line 455
  RF230DriverHwAckP__changeAddress = 9U
};
#line 455
typedef int RF230DriverHwAckP____nesc_sillytask_changeAddress[RF230DriverHwAckP__changeAddress];
#line 841
enum RF230DriverHwAckP____nesc_unnamed4399 {
#line 841
  RF230DriverHwAckP__releaseSpi = 10U
};
#line 841
typedef int RF230DriverHwAckP____nesc_sillytask_releaseSpi[RF230DriverHwAckP__releaseSpi];
#line 101
static inline rf230_header_t *RF230DriverHwAckP__getHeader(message_t *msg);




static void *RF230DriverHwAckP__getPayload(message_t *msg);




static rf230_metadata_t *RF230DriverHwAckP__getMeta(message_t *msg);






uint8_t RF230DriverHwAckP__state;
enum RF230DriverHwAckP____nesc_unnamed4400 {

  RF230DriverHwAckP__STATE_P_ON = 0, 
  RF230DriverHwAckP__STATE_SLEEP = 1, 
  RF230DriverHwAckP__STATE_SLEEP_2_TRX_OFF = 2, 
  RF230DriverHwAckP__STATE_TRX_OFF = 3, 
  RF230DriverHwAckP__STATE_TRX_OFF_2_RX_ON = 4, 
  RF230DriverHwAckP__STATE_RX_ON = 5, 
  RF230DriverHwAckP__STATE_BUSY_TX_2_RX_ON = 6
};

uint8_t RF230DriverHwAckP__cmd;
enum RF230DriverHwAckP____nesc_unnamed4401 {

  RF230DriverHwAckP__CMD_NONE = 0, 
  RF230DriverHwAckP__CMD_TURNOFF = 1, 
  RF230DriverHwAckP__CMD_STANDBY = 2, 
  RF230DriverHwAckP__CMD_TURNON = 3, 
  RF230DriverHwAckP__CMD_TRANSMIT = 4, 
  RF230DriverHwAckP__CMD_CCA = 6, 
  RF230DriverHwAckP__CMD_CHANNEL = 7, 
  RF230DriverHwAckP__CMD_SIGNAL_DONE = 8, 
  RF230DriverHwAckP__CMD_DOWNLOAD = 9
};

bool RF230DriverHwAckP__radioIrq;

uint8_t RF230DriverHwAckP__txPower;
uint8_t RF230DriverHwAckP__channel;

message_t *RF230DriverHwAckP__rxMsg;
message_t RF230DriverHwAckP__rxMsgBuffer;

uint16_t RF230DriverHwAckP__capturedTime;



static __inline void RF230DriverHwAckP__writeRegister(uint8_t reg, uint8_t value);
#line 168
static __inline uint8_t RF230DriverHwAckP__readRegister(uint8_t reg);
#line 184
enum RF230DriverHwAckP____nesc_unnamed4402 {

  RF230DriverHwAckP__SLEEP_WAKEUP_TIME = (uint16_t )(880 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 
  RF230DriverHwAckP__PLL_CALIBRATION_TIME = (uint16_t )(180 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 
  RF230DriverHwAckP__CCA_REQUEST_TIME = (uint16_t )(140 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 


  RF230DriverHwAckP__TX_SFD_DELAY = (uint16_t )((8 + 128 + 16 + 5 * 32) * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 


  RF230DriverHwAckP__RX_SFD_DELAY = (uint16_t )((32 + 16) * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL)
};

static inline void RF230DriverHwAckP__RadioAlarm__fired(void );
#line 230
static inline error_t RF230DriverHwAckP__PlatformInit__init(void );
#line 244
static inline error_t RF230DriverHwAckP__SoftwareInit__init(void );





static inline void RF230DriverHwAckP__initRadio(void );
#line 287
static inline void RF230DriverHwAckP__SpiResource__granted(void );
#line 301
static bool RF230DriverHwAckP__isSpiAcquired(void );
#line 341
static __inline void RF230DriverHwAckP__changeChannel(void );
#line 362
static __inline void RF230DriverHwAckP__changeState(void );
#line 414
static inline error_t RF230DriverHwAckP__RadioState__turnOff(void );
#line 440
static inline error_t RF230DriverHwAckP__RadioState__turnOn(void );
#line 455
static inline void RF230DriverHwAckP__changeAddress__runTask(void );
#line 478
message_t *RF230DriverHwAckP__txMsg;

static inline error_t RF230DriverHwAckP__RadioSend__send(message_t *msg);
#line 635
static inline void RF230DriverHwAckP__RadioCCA__default__done(error_t error);



static __inline void RF230DriverHwAckP__downloadMessage(void );
#line 739
static inline void RF230DriverHwAckP__IRQ__captured(uint16_t time);
#line 752
static inline void RF230DriverHwAckP__serviceRadio(void );
#line 841
static inline void RF230DriverHwAckP__releaseSpi__runTask(void );




static inline void RF230DriverHwAckP__Tasklet__run(void );
#line 876
static inline uint8_t RF230DriverHwAckP__RadioPacket__headerLength(message_t *msg);




static uint8_t RF230DriverHwAckP__RadioPacket__payloadLength(message_t *msg);




static inline void RF230DriverHwAckP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);








static inline uint8_t RF230DriverHwAckP__RadioPacket__maxPayloadLength(void );






static inline uint8_t RF230DriverHwAckP__RadioPacket__metadataLength(message_t *msg);




static inline void RF230DriverHwAckP__RadioPacket__clear(message_t *msg);






static inline bool RF230DriverHwAckP__PacketTransmitPower__isSet(message_t *msg);




static inline uint8_t RF230DriverHwAckP__PacketTransmitPower__get(message_t *msg);
#line 942
static inline uint8_t RF230DriverHwAckP__PacketRSSI__get(message_t *msg);




static inline void RF230DriverHwAckP__PacketRSSI__clear(message_t *msg);




static inline void RF230DriverHwAckP__PacketRSSI__set(message_t *msg, uint8_t value);










static inline bool RF230DriverHwAckP__PacketTimeSyncOffset__isSet(message_t *msg);




static inline uint8_t RF230DriverHwAckP__PacketTimeSyncOffset__get(message_t *msg);
#line 993
static inline uint8_t RF230DriverHwAckP__PacketLinkQuality__get(message_t *msg);








static inline void RF230DriverHwAckP__PacketLinkQuality__set(message_t *msg, uint8_t value);






static inline error_t RF230DriverHwAckP__PacketAcknowledgements__requestAck(message_t *msg);
#line 1023
static inline bool RF230DriverHwAckP__PacketAcknowledgements__wasAcked(message_t *msg);
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplRF230P__PortCLKM__makeInput(void );
#line 41
static void HplRF230P__PortCLKM__clr(void );
# 88 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P__Capture__setEdge(bool up);
#line 47
static HplRF230P__Capture__size_type HplRF230P__Capture__get(void );
#line 64
static void HplRF230P__Capture__reset(void );


static void HplRF230P__Capture__start(void );


static void HplRF230P__Capture__stop(void );
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplRF230P__PortIRQ__makeInput(void );
#line 41
static void HplRF230P__PortIRQ__clr(void );
# 61 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void HplRF230P__IRQ__captured(uint16_t time);
# 53 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__PlatformInit__init(void );










static inline void HplRF230P__Capture__captured(uint16_t time);









static inline error_t HplRF230P__IRQ__captureRisingEdge(void );
#line 89
static inline void HplRF230P__IRQ__disable(void );
# 82 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__release(
# 99 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40c4e010);
# 97 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__immediateRequest(
# 99 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40c4e010);
# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__request(
# 99 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40c4e010);
# 128 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP__ResourceArbiter__isOwner(
# 99 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40c4e010);
# 89 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__sleep(void );
#line 83
static void Atm128SpiP__Spi__initMaster(void );
#line 113
static void Atm128SpiP__Spi__enableInterrupt(bool enabled);
#line 97
static uint8_t Atm128SpiP__Spi__read(void );
#line 141
static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on);
#line 131
static void Atm128SpiP__Spi__setClock(uint8_t speed);




static bool Atm128SpiP__Spi__isInterruptPending(void );
#line 125
static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle);
#line 103
static void Atm128SpiP__Spi__write(uint8_t data);
#line 116
static void Atm128SpiP__Spi__enableSpi(bool busOn);
#line 128
static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing);
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__granted(
# 95 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40c501b8);
# 90 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool Atm128SpiP__ArbiterInfo__inUse(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP__McuPowerState__update(void );
# 296 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP____nesc_unnamed4403 {
#line 296
  Atm128SpiP__zeroTask = 11U
};
#line 296
typedef int Atm128SpiP____nesc_sillytask_zeroTask[Atm128SpiP__zeroTask];
#line 105
uint16_t Atm128SpiP__len;
uint8_t * Atm128SpiP__txBuffer;
uint8_t * Atm128SpiP__rxBuffer;
uint16_t Atm128SpiP__pos;

enum Atm128SpiP____nesc_unnamed4404 {
  Atm128SpiP__SPI_IDLE, 
  Atm128SpiP__SPI_BUSY, 
  Atm128SpiP__SPI_ATOMIC_SIZE = 10
};
#line 126
enum Atm128SpiP____nesc_unnamed4405 {
  Atm128SpiP__PLATFORM_MHZ = 8
};


static void Atm128SpiP__startSpi(void );
#line 167
static inline void Atm128SpiP__stopSpi(void );







static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
#line 194
static __inline void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data);



static __inline uint8_t Atm128SpiP__FastSpiByte__splitRead(void );





static __inline uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data);
#line 216
static __inline uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data);
#line 251
static inline error_t Atm128SpiP__sendNextPart(void );
#line 296
static inline void Atm128SpiP__zeroTask__runTask(void );
#line 351
static inline 
#line 350
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success);

static inline void Atm128SpiP__Spi__dataReady(uint8_t data);
#line 394
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id);







static error_t Atm128SpiP__Resource__request(uint8_t id);








static error_t Atm128SpiP__Resource__release(uint8_t id);









static inline bool Atm128SpiP__Resource__isOwner(uint8_t id);



static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id);



static inline void Atm128SpiP__Resource__default__granted(uint8_t id);
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
# 96 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void );
#line 112
static inline void HplAtm128SpiP__SPI__sleep(void );


static inline uint8_t HplAtm128SpiP__SPI__read(void );
static inline void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_24(void ) __attribute((signal))   ;




static inline bool HplAtm128SpiP__SPI__isInterruptPending(void );







static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 147
static void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 173
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 186
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 200
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 217
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 230
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
# 49 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1____nesc_unnamed4406 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40953d38);
# 61 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40953d38);
# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409529b8);
# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409529b8);
# 79 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue(void );
# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40953310);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask(void );
# 69 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4407 {
#line 69
  SimpleArbiterP__1__grantedTask = 12U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4408 {
#line 62
  SimpleArbiterP__1__RES_IDLE = 0, SimpleArbiterP__1__RES_GRANTING = 1, SimpleArbiterP__1__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4409 {
#line 63
  SimpleArbiterP__1__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__NO_RES;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__reqResId;



static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(uint8_t id);
#line 84
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(uint8_t id);
#line 97
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(uint8_t id);
#line 124
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ArbiterInfo__inUse(void );
#line 148
static inline bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void );
#line 167
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareA__fired(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type t);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareB__fired(void );
#line 58
static void HplAtm1281Timer1P__CompareC__fired(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer1P__Timer__overflow(void );
# 90 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Timer__get(void );


static inline void HplAtm1281Timer1P__Timer__set(uint16_t t);








static inline void HplAtm1281Timer1P__Timer__setScale(uint8_t s);










static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void );
#line 126
static inline void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x);
#line 145
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void );









static inline void HplAtm1281Timer1P__Capture__setEdge(bool up);



static inline void HplAtm1281Timer1P__Capture__reset(void );
static inline void HplAtm1281Timer1P__CompareA__reset(void );



static inline void HplAtm1281Timer1P__Timer__start(void );
static inline void HplAtm1281Timer1P__Capture__start(void );
static inline void HplAtm1281Timer1P__CompareA__start(void );




static inline void HplAtm1281Timer1P__Capture__stop(void );
static inline void HplAtm1281Timer1P__CompareA__stop(void );



static inline bool HplAtm1281Timer1P__Timer__test(void );
#line 214
static inline void HplAtm1281Timer1P__CompareA__set(uint16_t t);




static inline uint16_t HplAtm1281Timer1P__Capture__get(void );






void __vector_17(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer1P__CompareB__default__fired(void );
void __vector_18(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer1P__CompareC__default__fired(void );
void __vector_19(void ) __attribute((interrupt))   ;



void __vector_16(void ) __attribute((interrupt))   ;



void __vector_20(void ) __attribute((interrupt))   ;
# 104 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 67
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired(void );
# 62 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void );
#line 54
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t);










static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void );


static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void );
# 62 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void );
#line 78
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt);




static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt);
#line 119
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );






static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 87 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 61
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 50 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void );






static bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper;

enum /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0____nesc_unnamed4410 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type ) - /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type )2 << (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void );
# 53 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );




static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 40 "/opt/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt);
# 63 "/opt/tinyos-2.x/tos/system/NoLedsC.nc"
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
# 100 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
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
# 633 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
enum IPDispatchP____nesc_unnamed4411 {
#line 633
  IPDispatchP__sendTask = 13U
};
#line 633
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
enum IPDispatchP____nesc_unnamed4412 {
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
#line 633
static inline void IPDispatchP__sendTask__runTask(void );
#line 708
static inline error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *frame_addr, 
struct ip6_packet *msg, 
void *data);
#line 824
static inline void IPDispatchP__BareSend__sendDone(message_t *msg, error_t error);
#line 963
static inline void IPDispatchP__BlipStatistics__get(ip_statistics_t *statistics);
#line 981
static inline void IPDispatchP__BlipStatistics__clear(void );
# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
static RF230ReadLqiC__SubLqi__value_type RF230ReadLqiC__SubLqi__get(message_t *msg);
#line 46
static RF230ReadLqiC__SubRssi__value_type RF230ReadLqiC__SubRssi__get(message_t *msg);
# 13 "/opt/tinyos-2.x/tos/lib/net/blip/platform/RF230ReadLqiC.nc"
static inline uint8_t RF230ReadLqiC__ReadLqi__readLqi(message_t *msg);



static inline uint8_t RF230ReadLqiC__ReadLqi__readRssi(message_t *msg);
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
uint8_t arg_0x40fd0478, 
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
uint8_t arg_0x410080b8, 
# 29 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/IP.nc"
static error_t UdpP__IP__send(struct ip6_packet *msg);
# 15 "/opt/tinyos-2.x/tos/lib/net/blip/UdpP.nc"
enum UdpP____nesc_unnamed4413 {
  UdpP__N_CLIENTS = 3U
};


uint16_t UdpP__local_ports[UdpP__N_CLIENTS];

enum UdpP____nesc_unnamed4414 {
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
enum RPLRankP____nesc_unnamed4415 {
#line 362
  RPLRankP__newParentSearch = 14U
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
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4416 {
#line 119
  RPLRoutingEngineP__0__sendDIOTask = 15U
};
#line 119
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_sendDIOTask[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask];
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4417 {
#line 120
  RPLRoutingEngineP__0__sendDISTask = 16U
};
#line 120
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_sendDISTask[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask];
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4418 {
#line 121
  RPLRoutingEngineP__0__init = 17U
};
#line 121
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_init[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init];
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4419 {
#line 122
  RPLRoutingEngineP__0__initDIO = 18U
};
#line 122
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_initDIO[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO];
#line 167
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4420 {
#line 167
  RPLRoutingEngineP__0__computeRemaining = 19U
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
enum /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0____nesc_unnamed4421 {
#line 107
  RPLDAORoutingEngineP__0__sendDAO = 20U
};
#line 107
typedef int /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0____nesc_sillytask_sendDAO[/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO];
#line 190
enum /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0____nesc_unnamed4422 {
#line 190
  RPLDAORoutingEngineP__0__initDAO = 21U
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
uint8_t arg_0x4120db00, 
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
uint8_t arg_0x4120db00, 
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
uint8_t arg_0x41211a20, 
# 11 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
int argc, char **argv);
# 3 "/opt/tinyos-2.x/tos/lib/net/blip/shell/RegisterShellCommand.nc"
static char *UDPShellP__RegisterShellCommand__getCommandName(
# 43 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x41213a28);
# 6 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
static error_t UDPShellP__ICMPPing__ping(struct in6_addr *target, uint16_t period, uint16_t n);
# 60 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
struct sockaddr_in6 UDPShellP__session_endpoint;

uint64_t UDPShellP__uptime;

enum UDPShellP____nesc_unnamed4423 {
  UDPShellP__N_EXTERNAL = 0U
};


enum UDPShellP____nesc_unnamed4424 {
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
  void (*action)(int arg_0x4124c0e8, char **arg_0x4124c280);
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
"]\n\t[time: ""0x53334b59L""]\n";


static inline void UDPShellP__action_help(int argc, char **argv);
#line 162
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
uint8_t arg_0x4125aa10, 
# 10 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ICMPPing.nc"
uint16_t ping_rcv, uint16_t ping_n);
#line 8
static void ICMPPingP__ICMPPing__pingReply(
# 35 "/opt/tinyos-2.x/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x4125aa10, 
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
# 94 "/opt/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 94
{
   __asm volatile ("cli");}

#line 111
#line 110
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 114
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 120
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

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

# 126 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x)
#line 126
{
  * (volatile uint8_t *)0x81 = x;
}

#line 113
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void )
#line 113
{
  return * (volatile uint8_t *)0x81;
}

#line 102
static inline void HplAtm1281Timer1P__Timer__setScale(uint8_t s)
#line 102
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer1P__TimerCtrl__getControlB();

#line 104
  x.bits.cs = s;
  HplAtm1281Timer1P__TimerCtrl__setControlB(x.flat);
}

# 104 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 104
  HplAtm1281Timer1P__Timer__setScale(scale);
#line 104
}
#line 104
# 164 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Timer__start(void )
#line 164
{
#line 164
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void ){
#line 78
  HplAtm1281Timer1P__Timer__start();
#line 78
}
#line 78
# 93 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Timer__set(uint16_t t)
#line 93
{
#line 93
  * (volatile uint16_t *)0x84 = t;
}

# 67 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t){
#line 67
  HplAtm1281Timer1P__Timer__set(t);
#line 67
}
#line 67
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(2);
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 4);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )33U &= ~(1 << 4);
}

# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 44
}
#line 44
# 49 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 49
{

  * (volatile uint8_t *)(0x08 + 0x20) = 0;
  * (volatile uint8_t *)(0x07 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 0;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 1;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 2;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 0;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 1;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 2;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 75 "/opt/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 75
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 81
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)0x81 = 1 << 0;
    * (volatile uint8_t *)0xB6 = 1 << 5;
    * (volatile uint8_t *)0xB1 = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)0x84;
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)0x84;

        if (next < start) {
          wraps--;
          }
#line 99
        start = next;
      }


    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;


    start = * (volatile uint16_t *)0x84;
    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)0x84;

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)0xB6 = * (volatile uint8_t *)0x81 = * (volatile uint8_t *)0xB1 = 0;
    * (volatile uint8_t *)0xB2 = 0;
    * (volatile uint16_t *)0x84 = 0;
    * (volatile uint8_t *)(0x16 + 0x20) = * (volatile uint8_t *)(0x17 + 0x20) = 0xff;
    while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 2)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
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
# 51 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  return ok;
}

# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 6;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverHwAckP__RSTN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 6;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverHwAckP__RSTN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )37U &= ~(1 << 7);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverHwAckP__SLP_TR__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr();
#line 41
}
#line 41
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 7;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverHwAckP__SLP_TR__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput();
#line 46
}
#line 46
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )37U |= 1 << 0;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverHwAckP__SELN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 0;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverHwAckP__SELN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 230 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline error_t RF230DriverHwAckP__PlatformInit__init(void )
{
  RF230DriverHwAckP__SELN__makeOutput();
  RF230DriverHwAckP__SELN__set();
  RF230DriverHwAckP__SLP_TR__makeOutput();
  RF230DriverHwAckP__SLP_TR__clr();
  RF230DriverHwAckP__RSTN__makeOutput();
  RF230DriverHwAckP__RSTN__set();

  RF230DriverHwAckP__rxMsg = &RF230DriverHwAckP__rxMsgBuffer;

  return SUCCESS;
}

# 171 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__stop(void )
#line 171
{
#line 171
  * (volatile uint8_t *)0x6F &= ~(1 << 5);
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__stop(void ){
#line 70
  HplAtm1281Timer1P__Capture__stop();
#line 70
}
#line 70
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 4);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortIRQ__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )42U &= ~(1 << 4);
}

# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortIRQ__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput();
#line 44
}
#line 44
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 6);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortCLKM__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )42U &= ~(1 << 6);
}

# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortCLKM__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput();
#line 44
}
#line 44
# 53 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__PlatformInit__init(void )
{
  HplRF230P__PortCLKM__makeInput();
  HplRF230P__PortCLKM__clr();
  HplRF230P__PortIRQ__makeInput();
  HplRF230P__PortIRQ__clr();
  HplRF230P__Capture__stop();

  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplRF230P__PlatformInit__init();
#line 62
  __nesc_result = ecombine(__nesc_result, RF230DriverHwAckP__PlatformInit__init());
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
  struct __nesc_unnamed4364 *__nesc_result;
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
# 42 "/opt/tinyos-2.x/tos/platforms/micaz/LocalIeeeEui64C.nc"
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
inline static bool IPForwardingEngineP__ForwardingEvents__initiate(uint8_t arg_0x4071e1e8, struct ip6_packet *pkt, struct in6_addr *next_hop){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  switch (arg_0x4071e1e8) {
#line 13
    case RPL_IFACE:
#line 13
      __nesc_result = RPLRankP__ForwardingEvents__initiate(pkt, next_hop);
#line 13
      break;
#line 13
    default:
#line 13
      __nesc_result = IPForwardingEngineP__ForwardingEvents__default__initiate(arg_0x4071e1e8, pkt, next_hop);
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
inline static error_t IPForwardingEngineP__IPForward__send(uint8_t arg_0x4072e3a8, struct in6_addr *next_hop, struct ip6_packet *msg, void *data){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  switch (arg_0x4072e3a8) {
#line 18
    case ROUTE_IFACE_154:
#line 18
      __nesc_result = IPNeighborDiscoveryP__IPForward__send(next_hop, msg, data);
#line 18
      break;
#line 18
    default:
#line 18
      __nesc_result = IPForwardingEngineP__IPForward__default__send(arg_0x4072e3a8, next_hop, msg, data);
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
# 86 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__metadataLength(message_t *msg)
{
  return 0;
}

# 52 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverHwAckP__Config__metadataLength(message_t *msg){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = RF230RadioP__RF230DriverConfig__metadataLength(msg);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 902 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline uint8_t RF230DriverHwAckP__RadioPacket__metadataLength(message_t *msg)
{
  return RF230DriverHwAckP__Config__metadataLength(msg) + sizeof(rf230_metadata_t );
}

# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = RF230DriverHwAckP__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(msg) + sizeof(flags_metadata_t );
}

# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 136 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(msg) + sizeof(timestamp_metadata_t );
}

# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 235 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__metadataLength(msg) + sizeof(link_metadata_t );
}

#line 183
static inline link_metadata_t */*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__metadataLength(msg);
}






static inline void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay)
{
  /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(msg)->retryDelay = retryDelay;
}

# 53 "/opt/tinyos-2.x/tos/interfaces/PacketLink.nc"
inline static void IPDispatchP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay){
#line 53
  /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetryDelay(msg, retryDelay);
#line 53
}
#line 53
# 188 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(message_t *msg, uint16_t maxRetries)
{
  /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(msg)->maxRetries = maxRetries;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/PacketLink.nc"
inline static void IPDispatchP__PacketLink__setRetries(message_t * msg, uint16_t maxRetries){
#line 46
  /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(msg, maxRetries);
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
# 297 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

# 75 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__headerLength(message_t *msg)
{
  return (unsigned short )& ((message_t *)0)->data - sizeof(rf230packet_header_t );
}

# 40 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverHwAckP__Config__headerLength(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = RF230RadioP__RF230DriverConfig__headerLength(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 101 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline rf230_header_t *RF230DriverHwAckP__getHeader(message_t *msg)
{
  return (void *)msg + RF230DriverHwAckP__Config__headerLength(msg);
}

#line 886
static inline void RF230DriverHwAckP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  for (; 0; ) ;
  for (; 0; ) ;


  __nesc_hton_leuint8(RF230DriverHwAckP__getHeader(msg)->length.nxdata, length + 2);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void RF230BarePacketP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  RF230DriverHwAckP__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 19 "/opt/tinyos-2.x/tos/chips/rf230/RF230BarePacketP.nc"
static inline void RF230BarePacketP__BarePacket__setPayloadLength(message_t *msg, uint8_t len)
{

  RF230BarePacketP__RadioPacket__setPayloadLength(msg, len - sizeof(rf230_header_t ));
}

# 94 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void IPDispatchP__BarePacket__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  RF230BarePacketP__BarePacket__setPayloadLength(msg, len);
#line 94
}
#line 94
#line 126
inline static void * IPDispatchP__BarePacket__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = RF230BarePacketP__BarePacket__getPayload(msg, len);
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

# 80 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__maxPayloadLength(void )
{
  return sizeof(rf230packet_header_t ) + 112;
}

# 46 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverHwAckP__Config__maxPayloadLength(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = RF230RadioP__RF230DriverConfig__maxPayloadLength();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 895 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline uint8_t RF230DriverHwAckP__RadioPacket__maxPayloadLength(void )
{
  for (; 0; ) ;

  return RF230DriverHwAckP__Config__maxPayloadLength() - sizeof(rf230_header_t );
}

# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t RF230BarePacketP__RadioPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RF230DriverHwAckP__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 25 "/opt/tinyos-2.x/tos/chips/rf230/RF230BarePacketP.nc"
static inline uint8_t RF230BarePacketP__BarePacket__maxPayloadLength(void )
{
  return RF230BarePacketP__RadioPacket__maxPayloadLength();
}

# 106 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t IPDispatchP__BarePacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = RF230BarePacketP__BarePacket__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 907 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline void RF230DriverHwAckP__RadioPacket__clear(message_t *msg)
{
}

# 70 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void RF230BarePacketP__RadioPacket__clear(message_t *msg){
#line 70
  RF230DriverHwAckP__RadioPacket__clear(msg);
#line 70
}
#line 70
# 8 "/opt/tinyos-2.x/tos/chips/rf230/RF230BarePacketP.nc"
static inline void RF230BarePacketP__BarePacket__clear(message_t *msg)
{
  RF230BarePacketP__RadioPacket__clear(msg);
}

# 65 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void IPDispatchP__BarePacket__clear(message_t * msg){
#line 65
  RF230BarePacketP__BarePacket__clear(msg);
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

#line 708
static inline error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *frame_addr, 
struct ip6_packet *msg, 
void *data)
#line 710
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
#line 747
          if (outgoing != (void *)0) {
            IPDispatchP__FragPool__put(outgoing);
            }

          s_info->failed = TRUE;
          ;
#line 752
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
#line 780
      if (frag_len < 0) {
          ;
#line 781
          ;
        }

      ;
#line 784
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
#line 796
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
#line 808
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

# 89 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
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
# 260 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void )
#line 260
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();
}

# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 159 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(6U, dt);
#line 73
}
#line 73
# 169 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(6U);
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
  struct __nesc_unnamed4364 *__nesc_result;
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
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 154 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void )
#line 154
{
  return * (volatile uint8_t *)(0x17 + 0x20);
}

# 89 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag();
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
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
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(4U, dt);
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
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(3U);
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
  struct __nesc_unnamed4369 *__nesc_result;
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
inline static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 876 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline uint8_t RF230DriverHwAckP__RadioPacket__headerLength(message_t *msg)
{
  return RF230DriverHwAckP__Config__headerLength(msg) + sizeof(rf230_header_t );
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = RF230DriverHwAckP__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 90 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 116 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 215 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 77 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_simple_header_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg);
}

#line 163
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata, dsn);
}

# 125 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn){
#line 125
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(msg, dsn);
#line 125
}
#line 125
# 157 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn)
{
  RF230RadioP__Ieee154PacketLayer__setDSN(msg, dsn);
}

# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number){
#line 52
  RF230RadioP__UniqueConfig__setSequenceNumber(msg, number);
#line 52
}
#line 52
# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg)
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(msg, ++/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber);
  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 81 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__send(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t IPDispatchP__BareSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__send(msg);
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
# 633 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__sendTask__runTask(void )
#line 633
{
  struct send_entry *s_entry;



  if (IPDispatchP__radioBusy || IPDispatchP__state != IPDispatchP__S_RUNNING) {
#line 638
    return;
    }
#line 639
  if (IPDispatchP__SendQueue__empty()) {
#line 639
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
#line 657
    {
      IPDispatchP__radioBusy = TRUE;
    }
#line 681
  return;
  fail: 
    ;
#line 683
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
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack)
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;

#line 139
  if (ack) {
    (__nesc_temp44 = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp44, __nesc_ntoh_leuint16(__nesc_temp44) | (1 << IEEE154_FCF_ACK_REQ)));
    }
  else {
#line 142
    (__nesc_temp45 = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp45, __nesc_ntoh_leuint16(__nesc_temp45) & ~ (uint16_t )(1 << IEEE154_FCF_ACK_REQ)));
    }
}

# 105 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230DriverHwAckP__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack){
#line 105
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(msg, ack);
#line 105
}
#line 105
# 1009 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline error_t RF230DriverHwAckP__PacketAcknowledgements__requestAck(message_t *msg)
{
  RF230DriverHwAckP__Ieee154PacketLayer__setAckRequired(msg, TRUE);

  return SUCCESS;
}

# 59 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RF230DriverHwAckP__PacketAcknowledgements__requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void RF230DriverHwAckP__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t RF230DriverHwAckP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = Atm128SpiP__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )37U |= 1 << 7;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverHwAckP__SLP_TR__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set();
#line 40
}
#line 40
# 115 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP__SPI__read(void )
#line 115
{
#line 115
  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 97 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP__Spi__read(void ){
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
# 124 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline bool HplAtm128SpiP__SPI__isInterruptPending(void )
#line 124
{
  return (* (volatile uint8_t *)(0x2D + 0x20) & (1 << 7)) != 0;
}

# 136 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static bool Atm128SpiP__Spi__isInterruptPending(void ){
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
# 198 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__splitRead(void )
#line 198
{
  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;
  return Atm128SpiP__Spi__read();
}

# 68 "/opt/tinyos-2.x/tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverHwAckP__FastSpiByte__splitRead(void ){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  __nesc_result = Atm128SpiP__FastSpiByte__splitRead();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 116 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__write(uint8_t d)
#line 116
{
#line 116
  * (volatile uint8_t *)(0X2E + 0x20) = d;
}

# 103 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__write(uint8_t data){
#line 103
  HplAtm128SpiP__SPI__write(data);
#line 103
}
#line 103
# 204 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data)
#line 204
{
  uint8_t b;

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  b = Atm128SpiP__Spi__read();
  Atm128SpiP__Spi__write(data);

  return b;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverHwAckP__FastSpiByte__splitReadWrite(uint8_t data){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = Atm128SpiP__FastSpiByte__splitReadWrite(data);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 194 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data)
#line 194
{
  Atm128SpiP__Spi__write(data);
}

# 62 "/opt/tinyos-2.x/tos/interfaces/FastSpiByte.nc"
inline static void RF230DriverHwAckP__FastSpiByte__splitWrite(uint8_t data){
#line 62
  Atm128SpiP__FastSpiByte__splitWrite(data);
#line 62
}
#line 62
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )37U &= ~(1 << 0);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverHwAckP__SELN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 156 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static __inline void RF230DriverHwAckP__writeRegister(uint8_t reg, uint8_t value)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230DriverHwAckP__SELN__clr();
  RF230DriverHwAckP__FastSpiByte__splitWrite(RF230_CMD_REGISTER_WRITE | reg);
  RF230DriverHwAckP__FastSpiByte__splitReadWrite(value);
  RF230DriverHwAckP__FastSpiByte__splitRead();
  RF230DriverHwAckP__SELN__set();
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t RF230DriverHwAckP__ActiveMessageAddress__amGroup(void ){
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
# 40 "/opt/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt)
#line 40
{

  if (dt) {


     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 66 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
inline static void RF230DriverHwAckP__BusyWait__wait(RF230DriverHwAckP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 6);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverHwAckP__RSTN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr();
#line 41
}
#line 41
# 250 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline void RF230DriverHwAckP__initRadio(void )
{
  uint16_t temp;

  RF230DriverHwAckP__BusyWait__wait(510);

  RF230DriverHwAckP__RSTN__clr();
  RF230DriverHwAckP__SLP_TR__clr();
  RF230DriverHwAckP__BusyWait__wait(6);
  RF230DriverHwAckP__RSTN__set();

  RF230DriverHwAckP__writeRegister(RF230_TRX_CTRL_0, RF230_TRX_CTRL_0_VALUE);
  RF230DriverHwAckP__writeRegister(RF230_TRX_STATE, RF230_TRX_OFF);

  RF230DriverHwAckP__BusyWait__wait(510);

  RF230DriverHwAckP__writeRegister(RF230_IRQ_MASK, RF230_IRQ_TRX_UR | RF230_IRQ_TRX_END);
  RF230DriverHwAckP__writeRegister(RF230_CCA_THRES, RF230_CCA_THRES_VALUE);
  RF230DriverHwAckP__writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | (0 & RF230_TX_PWR_MASK));

  RF230DriverHwAckP__txPower = 0 & RF230_TX_PWR_MASK;
  RF230DriverHwAckP__channel = 13 & RF230_CHANNEL_MASK;
  RF230DriverHwAckP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverHwAckP__channel);

  RF230DriverHwAckP__writeRegister(RF230_XAH_CTRL, 0);
  RF230DriverHwAckP__writeRegister(RF230_CSMA_SEED_1, 0);

  temp = RF230DriverHwAckP__ActiveMessageAddress__amGroup();
  RF230DriverHwAckP__writeRegister(RF230_PAN_ID_0, temp);
  RF230DriverHwAckP__writeRegister(RF230_PAN_ID_1, temp >> 8);

  RF230DriverHwAckP__SLP_TR__set();
  RF230DriverHwAckP__state = RF230DriverHwAckP__STATE_SLEEP;
}



static inline void RF230DriverHwAckP__SpiResource__granted(void )
{
  RF230DriverHwAckP__SELN__makeOutput();
  RF230DriverHwAckP__SELN__set();

  if (RF230DriverHwAckP__state == RF230DriverHwAckP__STATE_P_ON) 
    {
      RF230DriverHwAckP__initRadio();
      RF230DriverHwAckP__SpiResource__release();
    }
  else {
    RF230DriverHwAckP__Tasklet__schedule();
    }
}

# 429 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__Resource__default__granted(uint8_t id)
#line 429
{
}

# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void Atm128SpiP__Resource__granted(uint8_t arg_0x40c501b8){
#line 102
  switch (arg_0x40c501b8) {
#line 102
    case 0U:
#line 102
      RF230DriverHwAckP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      Atm128SpiP__Resource__default__granted(arg_0x40c501b8);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 425 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id)
#line 425
{
  Atm128SpiP__Resource__granted(id);
}

# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(uint8_t arg_0x40953310){
#line 102
  Atm128SpiP__ResourceArbiter__granted(arg_0x40953310);
#line 102
}
#line 102
# 171 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x409529b8){
#line 59
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__configure(arg_0x409529b8);
#line 59
}
#line 59
# 155 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
}










static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x409529b8){
#line 65
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__default__unconfigure(arg_0x409529b8);
#line 65
}
#line 65
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
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
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 97 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId == id) {
          if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty() == FALSE) {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__NO_RES;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue();
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_GRANTING;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask();
            }
          else {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__NO_RES;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__release(uint8_t arg_0x40c4e010){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(arg_0x40c4e010);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 90 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static bool Atm128SpiP__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 161 "/opt/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 161
{
}

# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 112 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__sleep(void )
#line 112
{
}

# 89 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__sleep(void ){
#line 89
  HplAtm128SpiP__SPI__sleep();
#line 89
}
#line 89
#line 116
inline static void Atm128SpiP__Spi__enableSpi(bool busOn){
#line 116
  HplAtm128SpiP__SPI__enableSpi(busOn);
#line 116
}
#line 116
# 167 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__stopSpi(void )
#line 167
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 169
  {
    Atm128SpiP__Spi__sleep();
  }
  Atm128SpiP__McuPowerState__update();
}

# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP__Mcu__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 635 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline void RF230DriverHwAckP__RadioCCA__default__done(error_t error)
#line 635
{
}

# 52 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioCCA.nc"
inline static void RF230DriverHwAckP__RadioCCA__done(error_t error){
#line 52
  RF230DriverHwAckP__RadioCCA__default__done(error);
#line 52
}
#line 52
# 168 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static __inline uint8_t RF230DriverHwAckP__readRegister(uint8_t reg)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230DriverHwAckP__SELN__clr();
  RF230DriverHwAckP__FastSpiByte__splitWrite(RF230_CMD_REGISTER_READ | reg);
  RF230DriverHwAckP__FastSpiByte__splitReadWrite(0);
  reg = RF230DriverHwAckP__FastSpiByte__splitRead();
  RF230DriverHwAckP__SELN__set();

  return reg;
}

#line 197
static inline void RF230DriverHwAckP__RadioAlarm__fired(void )
{
  if (RF230DriverHwAckP__state == RF230DriverHwAckP__STATE_SLEEP_2_TRX_OFF) {
    RF230DriverHwAckP__state = RF230DriverHwAckP__STATE_TRX_OFF;
    }
  else {
#line 201
    if (RF230DriverHwAckP__state == RF230DriverHwAckP__STATE_TRX_OFF_2_RX_ON) 
      {
        for (; 0; ) ;

        RF230DriverHwAckP__state = RF230DriverHwAckP__STATE_RX_ON;
        RF230DriverHwAckP__cmd = RF230DriverHwAckP__CMD_SIGNAL_DONE;
      }
    else {
#line 208
      if (RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_CCA) 
        {
          uint8_t cca;

          for (; 0; ) ;

          RF230DriverHwAckP__cmd = RF230DriverHwAckP__CMD_NONE;
          cca = RF230DriverHwAckP__readRegister(RF230_TRX_STATUS);

          for (; 0; ) ;

          RF230DriverHwAckP__RadioCCA__done(cca & RF230_CCA_DONE ? cca & RF230_CCA_STATUS ? SUCCESS : EBUSY : FAIL);
        }
      else {
        for (; 0; ) ;
        }
      }
    }
#line 225
  RF230DriverHwAckP__Tasklet__schedule();
}

# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error){
#line 56
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error);
#line 56
}
#line 56
# 90 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Timer__get(void )
#line 90
{
#line 90
  return * (volatile uint16_t *)0x84;
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt)
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(), dt);
}

# 66 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt){
#line 66
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 99 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout)
{
  for (; 0; ) ;

  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm = id;
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT;
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(timeout);
}

# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(1U, timeout);
#line 50
}
#line 50
# 279 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RF230RadioP__RandomCollisionConfig__getCongestionBackoff(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
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

#line 372
static __inline  int32_t __nesc_ntoh_int32(const void * source)
#line 372
{
#line 372
  return __nesc_ntoh_uint32(source);
}

#line 347
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

#line 292
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 82 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(msg);
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(msg)->timestamp = value;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void RF230DriverHwAckP__PacketTimeStamp__set(message_t * msg, RF230DriverHwAckP__PacketTimeStamp__size_type value){
#line 78
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(msg, value);
#line 78
}
#line 78
# 91 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__headerPreloadLength(void )
{

  return 7;
}

# 59 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverHwAckP__Config__headerPreloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RF230RadioP__RF230DriverConfig__headerPreloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 62 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void )
#line 62
{
  return /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
}

# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void ){
#line 109
  unsigned short __nesc_result;
#line 109

#line 109
  __nesc_result = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 76 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id)
{
  return /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow();
}

# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size RF230DriverHwAckP__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(2U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 968 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline uint8_t RF230DriverHwAckP__PacketTimeSyncOffset__get(message_t *msg)
{
  return RF230DriverHwAckP__RadioPacket__headerLength(msg) + RF230DriverHwAckP__RadioPacket__payloadLength(msg) - sizeof(timesync_absolute_t );
}

# 61 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags & (1 << bit);
}

# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RF230DriverHwAckP__TimeSyncFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(4U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 963 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline bool RF230DriverHwAckP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return RF230DriverHwAckP__TimeSyncFlag__get(msg);
}

# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void )
{
  return /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get();
}

# 61 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
inline static uint32_t RF230DriverHwAckP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 919 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline uint8_t RF230DriverHwAckP__PacketTransmitPower__get(message_t *msg)
{
  return RF230DriverHwAckP__getMeta(msg)->power;
}

# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RF230DriverHwAckP__TransmitPowerFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(2U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 914 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline bool RF230DriverHwAckP__PacketTransmitPower__isSet(message_t *msg)
{
  return RF230DriverHwAckP__TransmitPowerFlag__get(msg);
}

#line 480
static inline error_t RF230DriverHwAckP__RadioSend__send(message_t *msg)
{
  uint16_t time;
  uint8_t length;
  uint8_t *data;
  uint8_t header;
  uint32_t time32;
  void *timesync;

  if (((RF230DriverHwAckP__cmd != RF230DriverHwAckP__CMD_NONE || RF230DriverHwAckP__state != RF230DriverHwAckP__STATE_RX_ON) || !RF230DriverHwAckP__isSpiAcquired()) || RF230DriverHwAckP__radioIrq) {
    return EBUSY;
    }
  length = (RF230DriverHwAckP__PacketTransmitPower__isSet(msg) ? 
  RF230DriverHwAckP__PacketTransmitPower__get(msg) : 0) & RF230_TX_PWR_MASK;

  if (length != RF230DriverHwAckP__txPower) 
    {
      RF230DriverHwAckP__txPower = length;
      RF230DriverHwAckP__writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | RF230DriverHwAckP__txPower);
    }

  RF230DriverHwAckP__writeRegister(RF230_TRX_STATE, RF230_TX_ARET_ON);


  time32 = RF230DriverHwAckP__LocalTime__get();
  timesync = RF230DriverHwAckP__PacketTimeSyncOffset__isSet(msg) ? (void *)msg + RF230DriverHwAckP__PacketTimeSyncOffset__get(msg) : 0;


  if ((RF230DriverHwAckP__readRegister(RF230_TRX_STATUS) & RF230_TRX_STATUS_MASK) != RF230_TX_ARET_ON) 
    {
      for (; 0; ) ;

      RF230DriverHwAckP__writeRegister(RF230_TRX_STATE, RF230_RX_AACK_ON);
      return EBUSY;
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230DriverHwAckP__SLP_TR__set();
      time = RF230DriverHwAckP__RadioAlarm__getNow();
    }
#line 521
    __nesc_atomic_end(__nesc_atomic); }
  RF230DriverHwAckP__SLP_TR__clr();


  for (; 0; ) ;

  RF230DriverHwAckP__SELN__clr();
  RF230DriverHwAckP__FastSpiByte__splitWrite(RF230_CMD_FRAME_WRITE);

  data = RF230DriverHwAckP__getPayload(msg);
  length = __nesc_ntoh_leuint8(RF230DriverHwAckP__getHeader(msg)->length.nxdata);


  RF230DriverHwAckP__FastSpiByte__splitReadWrite(length);


  length -= 2;

  header = RF230DriverHwAckP__Config__headerPreloadLength();
  if (header > length) {
    header = length;
    }
  length -= header;


  do {
      RF230DriverHwAckP__FastSpiByte__splitReadWrite(* data++);
    }
  while (--header != 0);










  time32 += (int16_t )(time + RF230DriverHwAckP__TX_SFD_DELAY) - (int16_t )time32;

  if (timesync != 0) {
    __nesc_hton_int32((* (timesync_relative_t *)timesync).nxdata, __nesc_ntoh_uint32((* (timesync_absolute_t *)timesync).nxdata) - time32);
    }
  while (length-- != 0) 
    RF230DriverHwAckP__FastSpiByte__splitReadWrite(* data++);


  RF230DriverHwAckP__FastSpiByte__splitRead();
  RF230DriverHwAckP__SELN__set();
#line 585
  RF230DriverHwAckP__writeRegister(RF230_TRX_STATE, RF230_RX_AACK_ON);

  if (timesync != 0) {
    __nesc_hton_uint32((* (timesync_absolute_t *)timesync).nxdata, __nesc_ntoh_int32((* (timesync_relative_t *)timesync).nxdata) + time32);
    }
  RF230DriverHwAckP__PacketTimeStamp__set(msg, time32);
#line 607
  RF230DriverHwAckP__txMsg = msg;
  RF230DriverHwAckP__state = RF230DriverHwAckP__STATE_BUSY_TX_2_RX_ON;
  RF230DriverHwAckP__cmd = RF230DriverHwAckP__CMD_TRANSMIT;

  return SUCCESS;
}

# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = RF230DriverHwAckP__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
#line 63
inline static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void ){
#line 63
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready();
#line 63
}
#line 63
# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(1U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void )
{
  error_t error;
  int16_t delay;

  for (; 0; ) ;

  delay = (int16_t )/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) 
    {
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;

      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
      return;
    }
  else {
#line 126
    if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) {
      error = EBUSY;
      }
    else {
#line 129
      error = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg);
      }
    }
#line 131
  if (error != SUCCESS) 
    {
      if ((/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & ~/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST) 
        {
          /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) | /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND;
          /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg)));
        }
      else 
        {
          if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) 
            {
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
            }
          else {
            /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
            }
          /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
        }
    }
  else {
    /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_SENDING;
    }
}

# 302 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__RadioAlarm__fired(void )
{
}

# 90 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id)
{
}

# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(uint8_t arg_0x408a0480){
#line 60
  switch (arg_0x408a0480) {
#line 60
    case 0U:
#line 60
      RF230RadioP__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 1U:
#line 60
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 2U:
#line 60
      RF230DriverHwAckP__RadioAlarm__fired();
#line 60
      break;
#line 60
    default:
#line 60
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(arg_0x408a0480);
#line 60
      break;
#line 60
    }
#line 60
}
#line 60
# 81 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void )
{
  if (/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED) 
    {
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm);
    }
}

# 261 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void )
{
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t RF230DriverHwAckP__releaseSpi__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(RF230DriverHwAckP__releaseSpi);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 94 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id)
{
  return /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(1U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 71 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void )
{
  if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY && /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
    }
}

# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RF230DriverHwAckP__RadioSend__ready(void ){
#line 63
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready();
#line 63
}
#line 63
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 163 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void )
{
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask();
}

# 69 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
inline static void RF230DriverHwAckP__RadioState__done(void ){
#line 69
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done();
#line 69
}
#line 69
# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool RF230DriverHwAckP__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(2U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 341 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static __inline void RF230DriverHwAckP__changeChannel(void )
{
  for (; 0; ) ;
  for (; 0; ) ;

  if (RF230DriverHwAckP__isSpiAcquired() && RF230DriverHwAckP__RadioAlarm__isFree()) 
    {
      RF230DriverHwAckP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverHwAckP__channel);

      if (RF230DriverHwAckP__state == RF230DriverHwAckP__STATE_RX_ON) 
        {
          RF230DriverHwAckP__RadioAlarm__wait(RF230DriverHwAckP__PLL_CALIBRATION_TIME);
          RF230DriverHwAckP__state = RF230DriverHwAckP__STATE_TRX_OFF_2_RX_ON;
        }
      else {
        RF230DriverHwAckP__cmd = RF230DriverHwAckP__CMD_SIGNAL_DONE;
        }
    }
}

# 89 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P__IRQ__disable(void )
{
  HplRF230P__Capture__stop();
}

# 66 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void RF230DriverHwAckP__IRQ__disable(void ){
#line 66
  HplRF230P__IRQ__disable();
#line 66
}
#line 66
# 72 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 72
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t RF230DriverHwAckP__ActiveMessageAddress__amAddress(void ){
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
# 165 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__start(void )
#line 165
{
#line 165
  * (volatile uint8_t *)0x6F |= 1 << 5;
}

# 67 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__start(void ){
#line 67
  HplAtm1281Timer1P__Capture__start();
#line 67
}
#line 67
# 159 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__reset(void )
#line 159
{
#line 159
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 5;
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__reset(void ){
#line 64
  HplAtm1281Timer1P__Capture__reset();
#line 64
}
#line 64
# 155 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__setEdge(bool up)
#line 155
{
#line 155
  if (up) {
#line 155
    * (volatile uint8_t *)0x81 |= 1 << 6;
    }
  else {
#line 155
    * (volatile uint8_t *)0x81 &= ~(1 << 6);
    }
}

# 88 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__setEdge(bool up){
#line 88
  HplAtm1281Timer1P__Capture__setEdge(up);
#line 88
}
#line 88
# 74 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__IRQ__captureRisingEdge(void )
{
  HplRF230P__Capture__setEdge(TRUE);
  HplRF230P__Capture__reset();
  HplRF230P__Capture__start();

  return SUCCESS;
}

# 53 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t RF230DriverHwAckP__IRQ__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplRF230P__IRQ__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 362 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static __inline void RF230DriverHwAckP__changeState(void )
{

  if ((
#line 364
  RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_STANDBY || RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_TURNON)
   && RF230DriverHwAckP__state == RF230DriverHwAckP__STATE_SLEEP && RF230DriverHwAckP__RadioAlarm__isFree()) 
    {
      RF230DriverHwAckP__SLP_TR__clr();

      RF230DriverHwAckP__RadioAlarm__wait(RF230DriverHwAckP__SLEEP_WAKEUP_TIME);
      RF230DriverHwAckP__state = RF230DriverHwAckP__STATE_SLEEP_2_TRX_OFF;
    }
  else {
    if (
#line 372
    RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_TURNON && RF230DriverHwAckP__state == RF230DriverHwAckP__STATE_TRX_OFF
     && RF230DriverHwAckP__isSpiAcquired() && RF230DriverHwAckP__RadioAlarm__isFree()) 
      {
        uint16_t temp;

        for (; 0; ) ;

        RF230DriverHwAckP__readRegister(RF230_IRQ_STATUS);
        RF230DriverHwAckP__IRQ__captureRisingEdge();


        RF230DriverHwAckP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverHwAckP__channel);

        temp = RF230DriverHwAckP__ActiveMessageAddress__amAddress();
        RF230DriverHwAckP__writeRegister(RF230_SHORT_ADDR_0, temp);
        RF230DriverHwAckP__writeRegister(RF230_SHORT_ADDR_1, temp >> 8);

        RF230DriverHwAckP__RadioAlarm__wait(RF230DriverHwAckP__PLL_CALIBRATION_TIME);
        RF230DriverHwAckP__writeRegister(RF230_TRX_STATE, RF230_RX_AACK_ON);
        RF230DriverHwAckP__state = RF230DriverHwAckP__STATE_TRX_OFF_2_RX_ON;
      }
    else {
      if ((
#line 393
      RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_TURNOFF || RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_STANDBY)
       && RF230DriverHwAckP__state == RF230DriverHwAckP__STATE_RX_ON && RF230DriverHwAckP__isSpiAcquired()) 
        {
          RF230DriverHwAckP__writeRegister(RF230_TRX_STATE, RF230_FORCE_TRX_OFF);

          RF230DriverHwAckP__IRQ__disable();
          RF230DriverHwAckP__radioIrq = FALSE;

          RF230DriverHwAckP__state = RF230DriverHwAckP__STATE_TRX_OFF;
        }
      }
    }
#line 404
  if (RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_TURNOFF && RF230DriverHwAckP__state == RF230DriverHwAckP__STATE_TRX_OFF) 
    {
      RF230DriverHwAckP__SLP_TR__set();
      RF230DriverHwAckP__state = RF230DriverHwAckP__STATE_SLEEP;
      RF230DriverHwAckP__cmd = RF230DriverHwAckP__CMD_SIGNAL_DONE;
    }
  else {
#line 410
    if (RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_STANDBY && RF230DriverHwAckP__state == RF230DriverHwAckP__STATE_TRX_OFF) {
      RF230DriverHwAckP__cmd = RF230DriverHwAckP__CMD_SIGNAL_DONE;
      }
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 351 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg)
{
  message_t *m;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
        m = msg;
        }
      else {
          uint8_t idx = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead + /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

#line 362
          if (idx >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            idx -= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
            }
          m = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx];
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx] = msg;

          ++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask();
        }
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }

  return m;
}

# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(msg);
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
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx){
#line 51
  NeighborhoodP__NeighborhoodFlag__set(0U, idx);
#line 51
}
#line 51
# 167 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__UniqueConfig__reportChannelError(void )
{
}

# 58 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void ){
#line 58
  RF230RadioP__UniqueConfig__reportChannelError();
#line 58
}
#line 58
# 158 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx)
{
  return NeighborhoodP__flags[idx] & (1 << bit);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx){
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
# 158 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata);
}

# 120 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint8_t RF230RadioP__Ieee154PacketLayer__getDSN(message_t *msg){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(msg);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 152 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getDSN(msg);
}

# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = RF230RadioP__UniqueConfig__getSequenceNumber(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 188 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata);
}

# 151 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RF230RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg){
#line 151
  unsigned short __nesc_result;
#line 151

#line 151
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(msg);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 162 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 47 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static am_addr_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = RF230RadioP__UniqueConfig__getSender(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 116 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx)
#line 116
{
}

# 80 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Neighborhood.nc"
inline static void NeighborhoodP__Neighborhood__evicted(uint8_t idx){
#line 80
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(idx);
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
inline static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id){
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
static inline message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg)
{
  uint8_t idx = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(msg));
  uint8_t dsn = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(msg);

  if (/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(idx)) 
    {
      uint8_t diff = dsn - /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx];

      if (diff == 0) 
        {
          /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError();
          return msg;
        }
    }
  else {
    /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(idx);
    }
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx] = dsn;

  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void ){
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
# 92 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE;
}

#line 205
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}

# 168 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg){
#line 168
  unsigned char __nesc_result;
#line 168

#line 168
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(msg);
#line 168

#line 168
  return __nesc_result;
#line 168
}
#line 168
# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size RF230RadioP__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(0U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 286 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg)
{
  uint16_t time;


  time = RF230RadioP__RadioAlarm__getNow();


  if (RF230RadioP__Ieee154PacketLayer__requiresAckReply(msg)) {
    time += (uint16_t )(32 * (-5 + 16 + 11 + 5) * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
    }
  else {
#line 297
    time += (uint16_t )(32 * (-5 + 5) * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
    }
  return time;
}

# 57 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = RF230RadioP__RandomCollisionConfig__getTransmitBarrier(msg);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 168 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg)
{
  int16_t delay;

  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(msg);
  delay = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (delay > 0) 
    {
      if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY) 
        {

          if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) 
            {
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
            }
        }
      else {
        /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state |= /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
        }
    }
  return /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t *RF230DriverHwAckP__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 72 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__timestamp(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(msg)->timestamp;
}

# 63 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static RF230DriverHwAckP__PacketTimeStamp__size_type RF230DriverHwAckP__PacketTimeStamp__timestamp(message_t * msg){
#line 63
  unsigned long __nesc_result;
#line 63

#line 63
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__timestamp(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(0U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 67 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline bool /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__isValid(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__get(msg);
}

# 49 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static bool RF230DriverHwAckP__PacketTimeStamp__isValid(message_t * msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__isValid(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 1002 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline void RF230DriverHwAckP__PacketLinkQuality__set(message_t *msg, uint8_t value)
{
  RF230DriverHwAckP__getMeta(msg)->lqi = value;
}

# 312 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 317
    notFull = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize < /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
#line 317
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 85 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg)
{

  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 163 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg)
{
  return /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool RF230DriverHwAckP__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 216 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data)
#line 216
{
  Atm128SpiP__Spi__write(data);

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  return Atm128SpiP__Spi__read();
}

# 81 "/opt/tinyos-2.x/tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverHwAckP__FastSpiByte__write(uint8_t data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = Atm128SpiP__FastSpiByte__write(data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 639 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static __inline void RF230DriverHwAckP__downloadMessage(void )
{
  uint8_t length;
  bool crcValid = FALSE;

  RF230DriverHwAckP__SELN__clr();
  RF230DriverHwAckP__FastSpiByte__write(RF230_CMD_FRAME_READ);


  length = RF230DriverHwAckP__FastSpiByte__write(0);


  if (length >= 3 && length <= RF230DriverHwAckP__RadioPacket__maxPayloadLength() + 2) 
    {
      uint8_t read;
      uint8_t *data;


      RF230DriverHwAckP__FastSpiByte__splitWrite(0);

      data = RF230DriverHwAckP__getPayload(RF230DriverHwAckP__rxMsg);
      __nesc_hton_leuint8(RF230DriverHwAckP__getHeader(RF230DriverHwAckP__rxMsg)->length.nxdata, length);


      length -= 2;

      read = RF230DriverHwAckP__Config__headerPreloadLength();
      if (length < read) {
        read = length;
        }
      length -= read;

      do {
          * data++ = RF230DriverHwAckP__FastSpiByte__splitReadWrite(0);
        }
      while (--read != 0);

      if (RF230DriverHwAckP__RadioReceive__header(RF230DriverHwAckP__rxMsg)) 
        {
          while (length-- != 0) 
            * data++ = RF230DriverHwAckP__FastSpiByte__splitReadWrite(0);

          RF230DriverHwAckP__FastSpiByte__splitReadWrite(0);
          RF230DriverHwAckP__FastSpiByte__splitReadWrite(0);

          RF230DriverHwAckP__PacketLinkQuality__set(RF230DriverHwAckP__rxMsg, RF230DriverHwAckP__FastSpiByte__splitRead());


          crcValid = !RF230DriverHwAckP__radioIrq;
        }
      else {
        RF230DriverHwAckP__FastSpiByte__splitRead();
        }
    }
  RF230DriverHwAckP__SELN__set();

  if (crcValid && RF230DriverHwAckP__PacketTimeStamp__isValid(RF230DriverHwAckP__rxMsg)) 
    {
      uint32_t time32 = RF230DriverHwAckP__PacketTimeStamp__timestamp(RF230DriverHwAckP__rxMsg);

#line 698
      length = __nesc_ntoh_leuint8(RF230DriverHwAckP__getHeader(RF230DriverHwAckP__rxMsg)->length.nxdata);








      time32 -= (uint16_t )RF230DriverHwAckP__RX_SFD_DELAY + (uint16_t )(32.0 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL * (uint16_t )length);


      RF230DriverHwAckP__PacketTimeStamp__set(RF230DriverHwAckP__rxMsg, time32);
    }
#line 729
  RF230DriverHwAckP__state = RF230DriverHwAckP__STATE_RX_ON;
  RF230DriverHwAckP__cmd = RF230DriverHwAckP__CMD_NONE;


  if (crcValid) {
    RF230DriverHwAckP__rxMsg = RF230DriverHwAckP__RadioReceive__receive(RF230DriverHwAckP__rxMsg);
    }
}

# 73 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags &= ~(1 << bit);
}

# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(0U, msg);
#line 55
}
#line 55
# 77 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(msg);
}

# 70 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void RF230DriverHwAckP__PacketTimeStamp__clear(message_t * msg){
#line 70
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(msg);
#line 70
}
#line 70
# 55 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RF230DriverHwAckP__RSSIFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(3U, msg);
#line 55
}
#line 55
# 947 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline void RF230DriverHwAckP__PacketRSSI__clear(message_t *msg)
{
  RF230DriverHwAckP__RSSIFlag__clear(msg);
}

# 66 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags |= 1 << bit;
}

# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RF230DriverHwAckP__RSSIFlag__set(message_t *msg){
#line 50
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(3U, msg);
#line 50
}
#line 50





inline static void RF230DriverHwAckP__TransmitPowerFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(2U, msg);
#line 55
}
#line 55
# 952 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline void RF230DriverHwAckP__PacketRSSI__set(message_t *msg, uint8_t value)
{

  RF230DriverHwAckP__TransmitPowerFlag__clear(msg);

  RF230DriverHwAckP__RSSIFlag__set(msg);
  RF230DriverHwAckP__getMeta(msg)->rssi = value;
}

# 155 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
}

# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RF230DriverHwAckP__RadioSend__sendDone(error_t error){
#line 56
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 80 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__setValue(uint8_t bit, message_t *msg, bool value)
{
  if (value) {
    /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(bit, msg);
    }
  else {
#line 85
    /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(bit, msg);
    }
}

# 45 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RF230DriverHwAckP__AckReceivedFlag__setValue(message_t *msg, bool value){
#line 45
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__setValue(1U, msg, value);
#line 45
}
#line 45
# 99 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230DriverHwAckP__Ieee154PacketLayer__getAckRequired(message_t *msg){
#line 99
  unsigned char __nesc_result;
#line 99

#line 99
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg);
#line 99

#line 99
  return __nesc_result;
#line 99
}
#line 99
# 752 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline void RF230DriverHwAckP__serviceRadio(void )
{
  if (RF230DriverHwAckP__isSpiAcquired()) 
    {
      uint16_t time;
      uint32_t time32;
      uint8_t irq;
      uint8_t temp;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 761
        time = RF230DriverHwAckP__capturedTime;
#line 761
        __nesc_atomic_end(__nesc_atomic); }
      RF230DriverHwAckP__radioIrq = FALSE;
      irq = RF230DriverHwAckP__readRegister(RF230_IRQ_STATUS);
#line 783
      if (irq & RF230_IRQ_TRX_END) 
        {
          if (RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_TRANSMIT) 
            {
              for (; 0; ) ;

              temp = RF230DriverHwAckP__readRegister(RF230_TRX_STATE) & RF230_TRAC_STATUS_MASK;

              if (RF230DriverHwAckP__Ieee154PacketLayer__getAckRequired(RF230DriverHwAckP__txMsg)) {
                RF230DriverHwAckP__AckReceivedFlag__setValue(RF230DriverHwAckP__txMsg, temp != RF230_TRAC_NO_ACK);
                }
              RF230DriverHwAckP__state = RF230DriverHwAckP__STATE_RX_ON;
              RF230DriverHwAckP__cmd = RF230DriverHwAckP__CMD_NONE;

              RF230DriverHwAckP__RadioSend__sendDone(temp != RF230_TRAC_CHANNEL_ACCESS_FAILURE ? SUCCESS : EBUSY);


              for (; 0; ) ;
            }
          else {
#line 802
            if (RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_NONE) 
              {
                for (; 0; ) ;

                if (irq == RF230_IRQ_TRX_END) 
                  {
                    RF230DriverHwAckP__PacketRSSI__set(RF230DriverHwAckP__rxMsg, RF230DriverHwAckP__readRegister(RF230_PHY_ED_LEVEL));


                    time32 = RF230DriverHwAckP__LocalTime__get();
                    time32 += (int16_t )time - (int16_t )time32;
                    RF230DriverHwAckP__PacketTimeStamp__set(RF230DriverHwAckP__rxMsg, time32);
                  }
                else 
                  {
                    RF230DriverHwAckP__PacketRSSI__clear(RF230DriverHwAckP__rxMsg);
                    RF230DriverHwAckP__PacketTimeStamp__clear(RF230DriverHwAckP__rxMsg);
                  }

                RF230DriverHwAckP__cmd = RF230DriverHwAckP__CMD_DOWNLOAD;
              }
            else {
              for (; 0; ) ;
              }
            }
        }
    }
}

#line 846
static inline void RF230DriverHwAckP__Tasklet__run(void )
{
  if (RF230DriverHwAckP__radioIrq) {
    RF230DriverHwAckP__serviceRadio();
    }
  if (RF230DriverHwAckP__cmd != RF230DriverHwAckP__CMD_NONE) 
    {
      if (RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_DOWNLOAD) {
        RF230DriverHwAckP__downloadMessage();
        }
      else {
#line 855
        if (RF230DriverHwAckP__CMD_TURNOFF <= RF230DriverHwAckP__cmd && RF230DriverHwAckP__cmd <= RF230DriverHwAckP__CMD_TURNON) {
          RF230DriverHwAckP__changeState();
          }
        else {
#line 857
          if (RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_CHANNEL) {
            RF230DriverHwAckP__changeChannel();
            }
          }
        }
#line 860
      if (RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_SIGNAL_DONE) 
        {
          RF230DriverHwAckP__cmd = RF230DriverHwAckP__CMD_NONE;
          RF230DriverHwAckP__RadioState__done();
        }
    }

  if (RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_NONE && RF230DriverHwAckP__state == RF230DriverHwAckP__STATE_RX_ON && !RF230DriverHwAckP__radioIrq) {
    RF230DriverHwAckP__RadioSend__ready();
    }
  if (RF230DriverHwAckP__cmd == RF230DriverHwAckP__CMD_NONE) {
    RF230DriverHwAckP__releaseSpi__postTask();
    }
}

# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void TaskletC__Tasklet__run(void ){
#line 48
  RF230DriverHwAckP__Tasklet__run();
#line 48
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run();
#line 48
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run();
#line 48
}
#line 48
# 148 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(uint8_t id)
#line 148
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 149
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 150
          TRUE;

          {
#line 150
            __nesc_atomic_end(__nesc_atomic); 
#line 150
            return __nesc_temp;
          }
        }
      else 
#line 151
        {
          unsigned char __nesc_temp = 
#line 151
          FALSE;

          {
#line 151
            __nesc_atomic_end(__nesc_atomic); 
#line 151
            return __nesc_temp;
          }
        }
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

# 128 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool Atm128SpiP__ResourceArbiter__isOwner(uint8_t arg_0x40c4e010){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(arg_0x40c4e010);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 421 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline bool Atm128SpiP__Resource__isOwner(uint8_t id)
#line 421
{
  return Atm128SpiP__ResourceArbiter__isOwner(id);
}

# 128 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool RF230DriverHwAckP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = Atm128SpiP__Resource__isOwner(0U);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 169 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id)
#line 169
{
}

# 61 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(uint8_t arg_0x40953d38){
#line 61
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(arg_0x40953d38);
#line 61
}
#line 61
# 84 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(uint8_t id)
#line 84
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 86
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
          {
            unsigned char __nesc_temp = 
#line 91
            SUCCESS;

            {
#line 91
              __nesc_atomic_end(__nesc_atomic); 
#line 91
              return __nesc_temp;
            }
          }
        }
#line 93
      {
        unsigned char __nesc_temp = 
#line 93
        FAIL;

        {
#line 93
          __nesc_atomic_end(__nesc_atomic); 
#line 93
          return __nesc_temp;
        }
      }
    }
#line 96
    __nesc_atomic_end(__nesc_atomic); }
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__immediateRequest(uint8_t arg_0x40c4e010){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(arg_0x40c4e010);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 394 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id)
#line 394
{
  error_t result = Atm128SpiP__ResourceArbiter__immediateRequest(id);

#line 396
  if (result == SUCCESS) {
      Atm128SpiP__startSpi();
    }
  return result;
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t RF230DriverHwAckP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = Atm128SpiP__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 173 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 173
{
  if (isMaster) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 4);
    }
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SS__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 1;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SCK__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput();
#line 46
}
#line 46
# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )36U &= ~(1 << 3);
}

# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MISO__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 44
}
#line 44
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 2;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MOSI__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 46
}
#line 46
# 96 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void )
#line 96
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SS__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 83 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__initMaster(void ){
#line 83
  HplAtm128SpiP__SPI__initMaster();
#line 83
}
#line 83
# 186 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 186
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 3);
    }
}

# 125 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle){
#line 125
  HplAtm128SpiP__SPI__setClockPolarity(highWhenIdle);
#line 125
}
#line 125
# 200 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 200
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 2);
    }
}

# 128 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing){
#line 128
  HplAtm128SpiP__SPI__setClockPhase(sampleOnTrailing);
#line 128
}
#line 128
# 230 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 230
{
  if (on) {
      * (volatile uint8_t *)(0x2D + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x2D + 0x20) &= ~(1 << 0);
    }
}

# 141 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on){
#line 141
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(on);
#line 141
}
#line 141
# 217 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 217
{
  v &= (1 << 1) | (1 << 0);
  * (volatile uint8_t *)(0x2C + 0x20) = (* (volatile uint8_t *)(0x2C + 0x20) & ~((1 << 1) | (1 << 0))) | v;
}

# 131 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClock(uint8_t speed){
#line 131
  HplAtm128SpiP__SPI__setClock(speed);
#line 131
}
#line 131
# 64 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = id;
          }
        else {
#line 88
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail] = id;
          }
#line 89
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = id;
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
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 167 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(uint8_t id)
#line 167
{
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(uint8_t arg_0x40953d38){
#line 53
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(arg_0x40953d38);
#line 53
}
#line 53
# 71 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_GRANTING;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__reqResId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 78
            SUCCESS;

            {
#line 78
              __nesc_atomic_end(__nesc_atomic); 
#line 78
              return __nesc_temp;
            }
          }
        }
#line 80
      {
        unsigned char __nesc_temp = 
#line 80
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(id);

        {
#line 80
          __nesc_atomic_end(__nesc_atomic); 
#line 80
          return __nesc_temp;
        }
      }
    }
#line 83
    __nesc_atomic_end(__nesc_atomic); }
}

# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__request(uint8_t arg_0x40c4e010){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(arg_0x40c4e010);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 50 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 145 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void )
#line 145
{
  return * (volatile uint8_t *)(0x16 + 0x20);
}

#line 176
static inline bool HplAtm1281Timer1P__Timer__test(void )
#line 176
{
  return ((Atm128_TIFR_t )HplAtm1281Timer1P__TimerCtrl__getInterruptFlag()).bits.tov;
}

# 87 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = HplAtm1281Timer1P__Timer__test();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 55 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 214 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__set(uint16_t t)
#line 214
{
#line 214
  * (volatile uint16_t *)0x88 = t;
}

# 54 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t){
#line 54
  HplAtm1281Timer1P__CompareA__set(t);
#line 54
}
#line 54
# 160 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__reset(void )
#line 160
{
#line 160
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 1;
}

# 62 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void ){
#line 62
  HplAtm1281Timer1P__CompareA__reset();
#line 62
}
#line 62
# 166 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__start(void )
#line 166
{
#line 166
  * (volatile uint8_t *)0x6F |= 1 << 1;
}

# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void ){
#line 65
  HplAtm1281Timer1P__CompareA__start();
#line 65
}
#line 65
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 261 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getMinimumBackoff(void )
{
  return (uint16_t )(320 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 51 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void ){
#line 51
  unsigned short __nesc_result;
#line 51

#line 51
  __nesc_result = RF230RadioP__RandomCollisionConfig__getMinimumBackoff();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 351 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline 
#line 350
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success)
#line 352
{
}

# 82 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  Atm128SpiP__SpiPacket__default__sendDone(txBuf, rxBuf, len, error);
#line 82
}
#line 82
# 296 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__zeroTask__runTask(void )
#line 296
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 301
    {
      myLen = Atm128SpiP__len;
      rx = Atm128SpiP__rxBuffer;
      tx = Atm128SpiP__txBuffer;
      Atm128SpiP__rxBuffer = (void *)0;
      Atm128SpiP__txBuffer = (void *)0;
      Atm128SpiP__len = 0;
      Atm128SpiP__pos = 0;
      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
#line 310
    __nesc_atomic_end(__nesc_atomic); }
}

# 841 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline void RF230DriverHwAckP__releaseSpi__runTask(void )
{
  RF230DriverHwAckP__SpiResource__release();
}

# 79 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void RF230DriverHwAckP__Tasklet__resume(void ){
#line 79
  TaskletC__Tasklet__resume();
#line 79
}
#line 79
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t RF230DriverHwAckP__changeAddress__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(RF230DriverHwAckP__changeAddress);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
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
inline static void RF230DriverHwAckP__Tasklet__suspend(void ){
#line 72
  TaskletC__Tasklet__suspend();
#line 72
}
#line 72
# 455 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline void RF230DriverHwAckP__changeAddress__runTask(void )
{
  RF230DriverHwAckP__Tasklet__suspend();

  if (RF230DriverHwAckP__isSpiAcquired()) 
    {
      uint16_t temp = RF230DriverHwAckP__ActiveMessageAddress__amAddress();

#line 462
      RF230DriverHwAckP__writeRegister(RF230_SHORT_ADDR_0, temp);
      RF230DriverHwAckP__writeRegister(RF230_SHORT_ADDR_1, temp >> 8);
    }
  else {
    RF230DriverHwAckP__changeAddress__postTask();
    }
  RF230DriverHwAckP__Tasklet__resume();
}

# 89 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void ){
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
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void )
{
  uint16_t a = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16();

#line 81
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 81
    /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom = a;
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 176 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void )
{
}

# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioChannel.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void ){
#line 48
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone();
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
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error){
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
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(2U, dt);
#line 64
}
#line 64
# 63 "/opt/tinyos-2.x/tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led2Toggle(void )
#line 63
{
}

# 100 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void IPDispatchP__Leds__led2Toggle(void ){
#line 100
  NoLedsC__Leds__led2Toggle();
#line 100
}
#line 100
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
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error){
#line 113
  IPDispatchP__RadioControl__startDone(error);
#line 113
}
#line 113
# 144 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void )
{
  uint8_t s;

  s = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;


  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;

  if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(SUCCESS);
    }
  else {
#line 155
    if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF) {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(SUCCESS);
      }
    else {
#line 157
      if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_CHANNEL) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone();
        }
      else {
#line 160
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = s;
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
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(8U, dt);
#line 64
}
#line 64
#line 92
inline static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(7U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 129 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  for (; 0; ) ;
  for (; 0; ) ;

  if (error != SUCCESS) {
    /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL + error;
    }
  /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask();
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 79 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void ){
#line 79
  TaskletC__Tasklet__resume();
#line 79
}
#line 79
# 270 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg)
{
  return (uint16_t )(4960 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RF230RadioP__RandomCollisionConfig__getInitialBackoff(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 98 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg)
{
  if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state != /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY || !/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    return EBUSY;
    }
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg = msg;
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST;
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(msg)));

  return SUCCESS;
}

# 48 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 72 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void ){
#line 72
  TaskletC__Tasklet__suspend();
#line 72
}
#line 72
# 189 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void )
{
  bool done = FALSE;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  for (; 0; ) ;

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING && ++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries <= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__MAX_RETRIES) 
    {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg);
      if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError == SUCCESS) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_SEND;
        }
      else {
#line 203
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY;
        }
    }
  else {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;
      done = TRUE;
    }

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  if (done) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg, /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError);
    }
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = RF230DriverHwAckP__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 95 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 121 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 220 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 287 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(msg) - sizeof(ieee154_simple_header_t );
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 96 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 68 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 91 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(msg);
}

#line 151
static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 55 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void ){
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
static inline ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup();
}

#line 168
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata);
}

#line 212
static inline ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}






static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg)
{
  ieee154_saddr_t addr = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);

#line 225
  return (addr == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr() || addr == IEEE154_BROADCAST_ADDR)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(msg) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan();
}

# 185 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg){
#line 185
  unsigned char __nesc_result;
#line 185

#line 185
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(msg);
#line 185

#line 185
  return __nesc_result;
#line 185
}
#line 185
# 142 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg)
{
  if (/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(msg)) {
    return /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(msg, 
    /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(msg), /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(msg));
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

# 942 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline uint8_t RF230DriverHwAckP__PacketRSSI__get(message_t *msg)
{
  return RF230DriverHwAckP__getMeta(msg)->rssi;
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
inline static RF230ReadLqiC__SubRssi__value_type RF230ReadLqiC__SubRssi__get(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = RF230DriverHwAckP__PacketRSSI__get(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 17 "/opt/tinyos-2.x/tos/lib/net/blip/platform/RF230ReadLqiC.nc"
static inline uint8_t RF230ReadLqiC__ReadLqi__readRssi(message_t *msg)
#line 17
{
  return RF230ReadLqiC__SubRssi__get(msg);
}

# 8 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ReadLqi.nc"
inline static uint8_t IPDispatchP__ReadLqi__readRssi(message_t *msg){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = RF230ReadLqiC__ReadLqi__readRssi(msg);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 993 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline uint8_t RF230DriverHwAckP__PacketLinkQuality__get(message_t *msg)
{
  return RF230DriverHwAckP__getMeta(msg)->lqi;
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketField.nc"
inline static RF230ReadLqiC__SubLqi__value_type RF230ReadLqiC__SubLqi__get(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = RF230DriverHwAckP__PacketLinkQuality__get(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 13 "/opt/tinyos-2.x/tos/lib/net/blip/platform/RF230ReadLqiC.nc"
static inline uint8_t RF230ReadLqiC__ReadLqi__readLqi(message_t *msg)
#line 13
{
  return RF230ReadLqiC__SubLqi__get(msg);
}

# 6 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ReadLqi.nc"
inline static uint8_t IPDispatchP__ReadLqi__readLqi(message_t *msg){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = RF230ReadLqiC__ReadLqi__readLqi(msg);
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
inline static uint8_t RF230BarePacketP__RadioPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = RF230DriverHwAckP__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 13 "/opt/tinyos-2.x/tos/chips/rf230/RF230BarePacketP.nc"
static inline uint8_t RF230BarePacketP__BarePacket__payloadLength(message_t *msg)
{

  return RF230BarePacketP__RadioPacket__payloadLength(msg) + sizeof(rf230_header_t );
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t IPDispatchP__BarePacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = RF230BarePacketP__BarePacket__payloadLength(msg);
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


  if (!(frame_address.ieee_dst.ieee_addr.saddr == AM_BROADCAST_ADDR || frame_address.ieee_dst.ieee_addr.saddr == TOS_NODE_ID)) {
      return msg;
    }

  if (IPDispatchP__hasFrag1Header(&lowmsg) || IPDispatchP__hasFragNHeader(&lowmsg)) {

      int rv;
      struct lowpan_reconstruct *recon;
      uint16_t tag;
#line 377
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
#line 395
            goto fail;
            }
#line 396
          rv = IPDispatchP__lowpan_recon_start(&frame_address, recon, buf, len);
        }
      else 
#line 397
        {
          rv = IPDispatchP__lowpan_recon_add(recon, buf, len);
        }

      if (rv < 0) {
          recon->r_timeout = T_FAILED1;
          goto fail;
        }
      else 
#line 404
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
#line 433
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
inline static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = IPDispatchP__BareReceive__receive(msg);
#line 42
  __nesc_result = /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 156 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(am_id_t arg_0x408c9220, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(arg_0x408c9220, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 151 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(id, msg, payload, len);
#line 153
  ;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(am_id_t arg_0x408cbda0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(arg_0x408cbda0, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 146 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(am_id_t arg_0x408cab30, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(arg_0x408cab30, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 141 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(id, msg, payload, len);
#line 143
  ;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(am_id_t arg_0x408cb708, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(arg_0x408cb708, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void ){
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
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress();
}

# 141 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RF230RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg){
#line 141
  unsigned short __nesc_result;
#line 141

#line 141
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 176 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getDestAddr(msg);
}

# 40 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RF230RadioP__ActiveMessageConfig__destination(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 179 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(msg);
}

#line 173
static __inline bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg)
{
  am_addr_t addr = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(msg);

#line 176
  return addr == /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address() || addr == AM_BROADCAST_ADDR;
}

# 159 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg) - /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 49 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 230 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(msg) - sizeof(activemessage_header_t );
}

#line 262
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(msg);
}

# 154 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg) + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 43 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 225 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg) + sizeof(activemessage_header_t );
}

#line 72
static inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

#line 67
static inline activemessage_header_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg);
}

#line 199
static __inline am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg)
{
  return __nesc_ntoh_uint8(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata);
}

#line 128
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg)
{
  am_id_t id = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg);
  void *payload = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(msg);
  uint8_t len = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);

  msg = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(msg) ? 
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(id, msg, payload, len) : 
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(id, msg, payload, len);

  return msg;
}

# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 127 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline network_header_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

#line 222
static inline message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg)
{
  if (__nesc_ntoh_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(msg);
    }
  else {
#line 227
    return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(msg);
    }
}

# 42 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 322 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void )
{

  for (; ; ) 
    {
      message_t *msg;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize == 0) {
            {
#line 332
              __nesc_atomic_end(__nesc_atomic); 
#line 332
              return;
            }
            }
#line 334
          msg = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead];
        }
#line 335
        __nesc_atomic_end(__nesc_atomic); }

      msg = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(msg);

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead] = msg;

          if (++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead = 0;
            }
          --/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
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
inline static bool IPForwardingEngineP__ForwardingEvents__approve(uint8_t arg_0x4071e1e8, struct ip6_packet *pkt, struct in6_addr *next_hop){
#line 28
  unsigned char __nesc_result;
#line 28

#line 28
  switch (arg_0x4071e1e8) {
#line 28
    case RPL_IFACE:
#line 28
      __nesc_result = RPLRankP__ForwardingEvents__approve(pkt, next_hop);
#line 28
      break;
#line 28
    default:
#line 28
      __nesc_result = IPForwardingEngineP__ForwardingEvents__default__approve(arg_0x4071e1e8, pkt, next_hop);
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
inline static void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__recv(uint8_t arg_0x4120db00, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x4120db00) {
#line 23
    case ICMPV6_CODE_DIS:
#line 23
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(arg_0x4120db00, hdr, packet, len, meta);
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
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(4U);
#line 78
}
#line 78
#line 92
inline static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(4U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 189 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(4U);
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
inline static void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__recv(uint8_t arg_0x4120db00, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x4120db00) {
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
      /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(arg_0x4120db00, hdr, packet, len, meta);
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
inline static void ICMPPingP__ICMPPing__pingReply(uint8_t arg_0x4125aa10, struct in6_addr *source, struct icmp_stats *stats){
#line 8
  switch (arg_0x4125aa10) {
#line 8
    case 0U:
#line 8
      UDPShellP__ICMPPing__pingReply(source, stats);
#line 8
      break;
#line 8
    default:
#line 8
      ICMPPingP__ICMPPing__default__pingReply(arg_0x4125aa10, source, stats);
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
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(9U);
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
inline static void ICMPCoreP__ICMP_IP__recv(uint8_t arg_0x40fd0478, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x40fd0478) {
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
      ICMPCoreP__ICMP_IP__default__recv(arg_0x40fd0478, hdr, packet, len, meta);
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

# 299 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
static inline char *UDPShellP__ShellCommand__default__eval(uint8_t cmd_id, int argc, char **argv)
#line 299
{
  return (void *)0;
}

# 11 "/opt/tinyos-2.x/tos/lib/net/blip/shell/ShellCommand.nc"
inline static char *UDPShellP__ShellCommand__eval(uint8_t arg_0x41211a20, int argc, char **argv){
#line 11
  char *__nesc_result;
#line 11

#line 11
    __nesc_result = UDPShellP__ShellCommand__default__eval(arg_0x41211a20, argc, argv);
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
inline static void UdpP__UDP__recvfrom(uint8_t arg_0x410080b8, struct sockaddr_in6 *src, void *payload, uint16_t len, struct ip6_metadata *meta){
#line 29
  switch (arg_0x410080b8) {
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
      UdpP__UDP__default__recvfrom(arg_0x410080b8, src, payload, len, meta);
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
inline static void IPProtocolsP__IP__recv(uint8_t arg_0x406ff3b8, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x406ff3b8) {
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
      IPProtocolsP__IP__default__recv(arg_0x406ff3b8, hdr, packet, len, meta);
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
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error)
{
}

# 97 "/opt/tinyos-2.x/tos/interfaces/Ieee154Send.nc"
inline static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 97
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(msg, error);
#line 97
}
#line 97
# 127 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(msg, error);
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
inline static bool RF230DriverHwAckP__AckReceivedFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(1U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 1023 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline bool RF230DriverHwAckP__PacketAcknowledgements__wasAcked(message_t *msg)
{
  return RF230DriverHwAckP__AckReceivedFlag__get(msg);
}

# 85 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static bool /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = RF230DriverHwAckP__PacketAcknowledgements__wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 208 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline bool /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__wasDelivered(message_t *msg)
{
  return /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__wasAcked(msg);
}

# 71 "/opt/tinyos-2.x/tos/interfaces/PacketLink.nc"
inline static bool IPDispatchP__PacketLink__wasDelivered(message_t * msg){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__wasDelivered(msg);
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
  __nesc_result = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 414 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline error_t RF230DriverHwAckP__RadioState__turnOff(void )
{
  if (RF230DriverHwAckP__cmd != RF230DriverHwAckP__CMD_NONE) {
    return EBUSY;
    }
  else {
#line 418
    if (RF230DriverHwAckP__state == RF230DriverHwAckP__STATE_SLEEP) {
      return EALREADY;
      }
    }
#line 421
  RF230DriverHwAckP__cmd = RF230DriverHwAckP__CMD_TURNOFF;
  RF230DriverHwAckP__Tasklet__schedule();

  return SUCCESS;
}

# 44 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOff(void ){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = RF230DriverHwAckP__RadioState__turnOff();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 97 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop(void )
{
  error_t error;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOff();

      if (error == SUCCESS) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF;
        }
    }
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 130 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t IPDispatchP__RadioControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 824 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__BareSend__sendDone(message_t *msg, error_t error)
#line 824
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
#line 841
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
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 54
  IPDispatchP__BareSend__sendDone(msg, error);
#line 54
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 108 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(am_id_t id, message_t *msg, error_t error)
{
}

# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(am_id_t arg_0x408cccf8, message_t * msg, error_t error){
#line 110
    /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(arg_0x408cccf8, msg, error);
#line 110
}
#line 110
# 98 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg), msg, error);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 120 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 78 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(msg, result);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 214 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  if (__nesc_ntoh_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(msg, result);
    }
  else {
#line 219
    /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(msg, result);
    }
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 80 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(msg, error);
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 230 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg)
{
  error_t result;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    result = EBUSY;
    }
  else {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg = msg;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries = 0;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
      result = SUCCESS;
    }

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return result;
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 73 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 203 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint16_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetryDelay(message_t *msg)
{
  return /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(msg)->retryDelay;
}

#line 77
static inline void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__runTask(void )
{
  uint16_t retries;

  for (; 0; ) ;

  retries = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg);

  if (/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state == /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDDONE) 
    {
      if (retries == 0 || /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__wasAcked(/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg)) {
        /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL + SUCCESS;
        }
      else {
#line 89
        if (++/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries < retries) 
          {
            uint16_t delay;

            /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDING;
            delay = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetryDelay(/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg);

            if (delay > 0) 
              {
                /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__startOneShot(delay);
                return;
              }
          }
        else {
          /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL + FAIL;
          }
        }
    }
#line 106
  if (/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state == /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDING) 
    {
      /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDDONE;

      if (/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__send(/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg) != SUCCESS) {
        /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask();
        }
      return;
    }

  if (/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state >= /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL) 
    {
      error_t error = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state - /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL;


      if (retries > 0) {
        /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg, /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries);
        }
      /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_READY;
      /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__sendDone(/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg, error);
    }
}

# 60 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead != /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
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
      /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 173 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 65 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x409529b8){
#line 65
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x409529b8);
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
inline static void IPForwardingEngineP__ForwardingEvents__linkResult(uint8_t arg_0x4071e1e8, struct in6_addr *dest, struct send_info *info){
#line 39
  switch (arg_0x4071e1e8) {
#line 39
    case RPL_IFACE:
#line 39
      RPLRankP__ForwardingEvents__linkResult(dest, info);
#line 39
      break;
#line 39
    default:
#line 39
      IPForwardingEngineP__ForwardingEvents__default__linkResult(arg_0x4071e1e8, dest, info);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 132 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg)
{

  __nesc_hton_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata, 0x3f);

  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(msg);
}

# 46 "/opt/tinyos-2.x/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 68 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void )
{
  error_t result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending);

#line 71
  if (result != SUCCESS) 
    {
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending, result);
    }
}

# 165 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 165
{
}

# 102 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x40953310){
#line 102
  switch (arg_0x40953310) {
#line 102
    case 0U:
#line 102
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0x40953310);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 171 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x409529b8){
#line 59
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x409529b8);
#line 59
}
#line 59
# 155 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId;
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
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
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 242 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void )
#line 242
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 243
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = FALSE;
#line 243
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

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
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
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
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )34U ^= 1 << 1;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle();
#line 42
}
#line 42
# 99 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 99
{
  LedsP__Led1__toggle();
  ;
#line 101
  ;
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void UDPEchoP__Leds__led1Toggle(void ){
#line 83
  LedsP__Leds__led1Toggle();
#line 83
}
#line 83
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
# 963 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__BlipStatistics__get(ip_statistics_t *statistics)
#line 963
{
#line 977
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
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
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
static inline void /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__fired(void )
{
  for (; 0; ) ;

  /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask();
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
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(3U);
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
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(9U);
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
inline static void ICMPPingP__ICMPPing__pingDone(uint8_t arg_0x4125aa10, uint16_t ping_rcv, uint16_t ping_n){
#line 10
  switch (arg_0x4125aa10) {
#line 10
    case 0U:
#line 10
      UDPShellP__ICMPPing__pingDone(ping_rcv, ping_n);
#line 10
      break;
#line 10
    default:
#line 10
      ICMPPingP__ICMPPing__default__pingDone(arg_0x4125aa10, ping_rcv, ping_n);
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

# 204 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x406c4228){
#line 83
  switch (arg_0x406c4228) {
#line 83
    case 0U:
#line 83
      UDPEchoP__StatusTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__fired();
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
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x406c4228);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 194 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t)
#line 194
{
  /* atomic removed: atomic calls only */
  {
    while (* (volatile uint8_t *)0xB6 & (1 << 3)) 
      ;
    * (volatile uint8_t *)0xB3 = t;
  }
}

# 54 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type t){
#line 54
  HplAtm1281Timer2AsyncP__Compare__set(t);
#line 54
}
#line 54
# 99 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Timer__get(void )
#line 99
{
#line 99
  return * (volatile uint8_t *)0xB2;
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer2AsyncP__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 278 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void )
#line 278
{
  return (* (volatile uint8_t *)0xB6 & (1 << 3)) != 0;
}

# 86 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy(void ){
#line 86
  int __nesc_result;
#line 86

#line 86
  __nesc_result = HplAtm1281Timer2AsyncP__TimerAsync__compareABusy();
#line 86

#line 86
  return __nesc_result;
#line 86
}
#line 86
# 112 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(uint8_t n)
#line 112
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base - 1;
    }
#line 122
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(n);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 139 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 264 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void )
#line 264
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 265
    {
      unsigned long __nesc_temp = 
#line 265
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt;

      {
#line 265
        __nesc_atomic_end(__nesc_atomic); 
#line 265
        return __nesc_temp;
      }
    }
#line 267
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 181 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__Compare__start(void )
#line 181
{
#line 181
  * (volatile uint8_t *)0x70 |= 1 << 1;
}

# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start(void ){
#line 65
  HplAtm1281Timer2AsyncP__Compare__start();
#line 65
}
#line 65
# 137 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x)
#line 137
{
  while (* (volatile uint8_t *)0xB6 & (1 << 0)) 
    ;
  * (volatile uint8_t *)0xB1 = ((Atm128_TCCR2B_t )x).flat;
}

# 82 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control){
#line 82
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(control);
#line 82
}
#line 82
# 131 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x)
#line 131
{
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
  * (volatile uint8_t *)0xB0 = ((Atm128_TCCR2A_t )x).flat;
}

# 81 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control){
#line 81
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(control);
#line 81
}
#line 81
# 266 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void )
#line 266
{
  * (volatile uint8_t *)0xB6 |= 1 << 5;
}

# 68 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void ){
#line 68
  HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous();
#line 68
}
#line 68
# 89 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void )
#line 89
{
  /* atomic removed: atomic calls only */
  {
    Atm128_TCCR2A_t x;
    Atm128_TCCR2B_t y;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous();
    x.flat = 0;
    x.bits.wgm21 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(x.flat);
    y.flat = 0;
    y.bits.cs = 3;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(y.flat);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
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
static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ, /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 63 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void )
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber = TOS_NODE_ID << 4;
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
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void )
{
  uint8_t i;

  for (i = 0; i < /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE; ++i) 
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[i] = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData + i;

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

# 88 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t RF230DriverHwAckP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = Atm128SpiP__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 244 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline error_t RF230DriverHwAckP__SoftwareInit__init(void )
{

  return RF230DriverHwAckP__SpiResource__request();
}

# 55 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ);
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
  __nesc_result = ecombine(__nesc_result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RF230DriverHwAckP__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NeighborhoodP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, Ieee154AddressP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
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
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 981 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__BlipStatistics__clear(void )
#line 981
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
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start();
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
# 302 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
static inline char *UDPShellP__RegisterShellCommand__default__getCommandName(uint8_t cmd_id)
#line 302
{
  return (void *)0;
}

# 3 "/opt/tinyos-2.x/tos/lib/net/blip/shell/RegisterShellCommand.nc"
inline static char *UDPShellP__RegisterShellCommand__getCommandName(uint8_t arg_0x41213a28){
#line 3
  char *__nesc_result;
#line 3

#line 3
    __nesc_result = UDPShellP__RegisterShellCommand__default__getCommandName(arg_0x41213a28);
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
# 440 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline error_t RF230DriverHwAckP__RadioState__turnOn(void )
{
  if (RF230DriverHwAckP__cmd != RF230DriverHwAckP__CMD_NONE || (RF230DriverHwAckP__state == RF230DriverHwAckP__STATE_SLEEP && !RF230DriverHwAckP__RadioAlarm__isFree())) {
    return EBUSY;
    }
  else {
#line 444
    if (RF230DriverHwAckP__state == RF230DriverHwAckP__STATE_RX_ON) {
      return EALREADY;
      }
    }
#line 447
  RF230DriverHwAckP__cmd = RF230DriverHwAckP__CMD_TURNON;
  RF230DriverHwAckP__Tasklet__schedule();

  return SUCCESS;
}

# 56 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RF230DriverHwAckP__RadioState__turnOn();
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
inline static void RF230RadioP__ShortAddressConfig__setShortAddrDone(error_t error){
#line 5
  Ieee154AddressP__ShortAddressConfig__setShortAddrDone(error);
#line 5
}
#line 5
# 243 "/opt/tinyos-2.x/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__ShortAddressConfig__setShortAddr(uint16_t address)
{

  RF230RadioP__ShortAddressConfig__setShortAddrDone(FAIL);
}

# 3 "/opt/tinyos-2.x/tos/lib/net/blip/interfaces/ShortAddressConfig.nc"
inline static void Ieee154AddressP__ShortAddressConfig__setShortAddr(uint16_t address){
#line 3
  RF230RadioP__ShortAddressConfig__setShortAddr(address);
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
# 219 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void )
#line 219
{
  uint8_t diff;


  if (* (volatile uint8_t *)0x70 & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 3)) | (1 << 1))) 
        ;
      diff = * (volatile uint8_t *)0xB3 - * (volatile uint8_t *)0xB2;
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)0xB2 > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 234
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 107 "/opt/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 107
{










  if ((
#line 117
  * (volatile uint8_t *)0x6E & ((1 << 1) | (1 << 2)) || 
  * (volatile uint8_t *)0x6F & ((((1 << 5) | (1 << 1)) | (1 << 2)) | (1 << 3))) || 
  * (volatile uint8_t *)0x71 & ((((1 << 5) | (1 << 1)) | (1 << 2)) | (1 << 3))) 
    {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x2C + 0x20) & (1 << 7)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if (* (volatile uint8_t *)0XC1 & ((1 << 3) | (1 << 4))) {
          return ATM128_POWER_IDLE;
        }
      else {
#line 131
        if (* (volatile uint8_t *)0XC9 & ((1 << 3) | (1 << 4))) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0xBC & (1 << 2)) {
              return ATM128_POWER_IDLE;
            }
          else {
            if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x7A & (1 << 7)) {
                return ATM128_POWER_ADC_NR;
              }
            else {
                return ATM128_POWER_DOWN;
              }
            }
          }
        }
      }
    }
}

# 142 "/opt/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 142
{
  return m1 < m2 ? m1 : m2;
}

# 147 "/opt/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 147
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x33 + 0x20) = ((
  * (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | (1 << 0)) | __extension__ ({
#line 152
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 152
    uint8_t __result;

#line 152
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 153
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
# 204 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void )
#line 204
{
  * (volatile uint8_t *)0xB0 = * (volatile uint8_t *)0xB0;
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
}

# 58 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 90 "/opt/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 90
{
   __asm volatile ("sei");}

# 191 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Compare__get(void )
#line 191
{
#line 191
  return * (volatile uint8_t *)0xB3;
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm1281Timer2AsyncP__Compare__get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 187 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void )
#line 187
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow();
    }
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer2AsyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired();
#line 58
}
#line 58
# 268 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void )
#line 268
{
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer2AsyncP__Timer__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow();
#line 70
}
#line 70
# 113 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__enableInterrupt(bool enabled){
#line 113
  HplAtm128SpiP__SPI__enableInterrupt(enabled);
#line 113
}
#line 113
# 251 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__sendNextPart(void )
#line 251
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  /* atomic removed: atomic calls only */
#line 258
  {
    myLen = Atm128SpiP__len;
    tx = Atm128SpiP__txBuffer;
    rx = Atm128SpiP__rxBuffer;
    tmpPos = Atm128SpiP__pos;
    end = Atm128SpiP__pos + Atm128SpiP__SPI_ATOMIC_SIZE;
    end = end > Atm128SpiP__len ? Atm128SpiP__len : end;
  }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 269
      if (tx != (void *)0) {
        val = Atm128SpiP__SpiByte__write(tx[tmpPos]);
        }
      else {
#line 272
        val = Atm128SpiP__SpiByte__write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP__Spi__enableInterrupt(TRUE);
  /* atomic removed: atomic calls only */
#line 282
  {
    if (tx != (void *)0) {
      Atm128SpiP__Spi__write(tx[tmpPos]);
      }
    else {
#line 286
      Atm128SpiP__Spi__write(0);
      }
    Atm128SpiP__pos = tmpPos;
  }


  return SUCCESS;
}

#line 354
static inline void Atm128SpiP__Spi__dataReady(uint8_t data)
#line 354
{
  bool again;

  /* atomic removed: atomic calls only */
#line 357
  {
    if (Atm128SpiP__rxBuffer != (void *)0) {
        Atm128SpiP__rxBuffer[Atm128SpiP__pos] = data;
      }

    Atm128SpiP__pos++;
  }
  Atm128SpiP__Spi__enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP__pos < Atm128SpiP__len;
  }

  if (again) {
      Atm128SpiP__sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 379
      {
        myLen = Atm128SpiP__len;
        rx = Atm128SpiP__rxBuffer;
        tx = Atm128SpiP__txBuffer;
        Atm128SpiP__rxBuffer = (void *)0;
        Atm128SpiP__txBuffer = (void *)0;
        Atm128SpiP__len = 0;
        Atm128SpiP__pos = 0;
      }
      discard = Atm128SpiP__Spi__read();

      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 109 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP__SPI__dataReady(uint8_t data){
#line 109
  Atm128SpiP__Spi__dataReady(data);
#line 109
}
#line 109
# 59 "/opt/tinyos-2.x/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 65 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT) {
        /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED;
        }
    }
#line 72
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule();
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired(void ){
#line 78
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired();
#line 78
}
#line 78
# 172 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__stop(void )
#line 172
{
#line 172
  * (volatile uint8_t *)0x6F &= ~(1 << 1);
}

# 68 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void ){
#line 68
  HplAtm1281Timer1P__CompareA__stop();
#line 68
}
#line 68
# 119 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void )
#line 119
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
  ;
  __nesc_enable_interrupt();
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired();
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareA__fired(void ){
#line 58
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired();
#line 58
}
#line 58
# 229 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareB__default__fired(void )
#line 229
{
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareB__fired(void ){
#line 58
  HplAtm1281Timer1P__CompareB__default__fired();
#line 58
}
#line 58
# 233 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareC__default__fired(void )
#line 233
{
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareC__fired(void ){
#line 58
  HplAtm1281Timer1P__CompareC__default__fired();
#line 58
}
#line 58
# 739 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static inline void RF230DriverHwAckP__IRQ__captured(uint16_t time)
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230DriverHwAckP__capturedTime = time;
      RF230DriverHwAckP__radioIrq = TRUE;
    }
#line 747
    __nesc_atomic_end(__nesc_atomic); }

  RF230DriverHwAckP__Tasklet__schedule();
}

# 61 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void HplRF230P__IRQ__captured(uint16_t time){
#line 61
  RF230DriverHwAckP__IRQ__captured(time);
#line 61
}
#line 61
# 219 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Capture__get(void )
#line 219
{
#line 219
  return * (volatile uint16_t *)0x86;
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static HplRF230P__Capture__size_type HplRF230P__Capture__get(void ){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = HplAtm1281Timer1P__Capture__get();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 64 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P__Capture__captured(uint16_t time)
{
  time = HplRF230P__Capture__get();
  HplRF230P__IRQ__captured(time);
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type t){
#line 60
  HplRF230P__Capture__captured(t);
#line 60
}
#line 60
# 126 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void )
#line 126
{
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void )
#line 60
{
}

# 58 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper++;
      if ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper & /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 82
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer1P__Timer__overflow(void ){
#line 70
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 70
  /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow();
#line 70
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow();
#line 70
}
#line 70
# 122 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__action_help(int argc, char **argv)
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

# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void ICMPPingP__PingTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(9U, dt);
#line 64
}
#line 64
#line 92
inline static bool ICMPPingP__PingTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(9U);
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
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x403dcb38){
#line 75
  switch (arg_0x403dcb38) {
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case IPForwardingEngineP__defaultRouteAddedTask:
#line 75
      IPForwardingEngineP__defaultRouteAddedTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send:
#line 75
      /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom:
#line 75
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask();
#line 75
      break;
#line 75
    case RF230DriverHwAckP__changeAddress:
#line 75
      RF230DriverHwAckP__changeAddress__runTask();
#line 75
      break;
#line 75
    case RF230DriverHwAckP__releaseSpi:
#line 75
      RF230DriverHwAckP__releaseSpi__runTask();
#line 75
      break;
#line 75
    case Atm128SpiP__zeroTask:
#line 75
      Atm128SpiP__zeroTask__runTask();
#line 75
      break;
#line 75
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask:
#line 75
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask();
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
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x403dcb38);
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

# 30 "/opt/tinyos-2.x/tos/chips/rf230/RF230BarePacketP.nc"
static void *RF230BarePacketP__BarePacket__getPayload(message_t *msg, uint8_t len)
{
  if (len > RF230BarePacketP__RadioPacket__maxPayloadLength()) {
    return (void *)0;
    }
  else {
#line 35
    return (void *)msg;
    }
}

# 161 "/opt/tinyos-2.x/tos/lib/net/blip/IPDispatchP.nc"
static void IPDispatchP__SENDINFO_DECR(struct send_info *si)
#line 161
{
  if (-- si->_refcount == 0) {
      IPDispatchP__SendInfoPool__put(si);
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
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 199 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void )
#line 199
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();

      if (((Atm128_TIFR2_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag()).bits.ocfa) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + now8;
        }
    }
#line 217
    __nesc_atomic_end(__nesc_atomic); }
#line 217
  return now;
}

# 154 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
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
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
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
static error_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__send(message_t *msg)
{
  if (/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state != /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_READY) {
    return EBUSY;
    }

  if (/*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(msg) > 0) {
    /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__requestAck(msg);
    }
  /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg = msg;
  /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries = 0;
  /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state = /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDING;
  /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask();

  return SUCCESS;
}

#line 198
static uint16_t /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(message_t *msg)
{
  return /*RF230RadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(msg)->maxRetries;
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

# 93 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
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

# 411 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static error_t Atm128SpiP__Resource__release(uint8_t id)
#line 411
{
  error_t error = Atm128SpiP__ResourceArbiter__release(id);

#line 413
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 413
    {
      if (!Atm128SpiP__ArbiterInfo__inUse()) {
          Atm128SpiP__stopSpi();
        }
    }
#line 417
    __nesc_atomic_end(__nesc_atomic); }
  return error;
}

# 124 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ArbiterInfo__inUse(void )
#line 124
{
  /* atomic removed: atomic calls only */
#line 125
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE) 
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

# 147 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableSpi(bool enabled)
#line 147
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

# 301 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static bool RF230DriverHwAckP__isSpiAcquired(void )
{
  if (RF230DriverHwAckP__SpiResource__isOwner()) {
    return TRUE;
    }
  if (RF230DriverHwAckP__SpiResource__immediateRequest() == SUCCESS) 
    {
      RF230DriverHwAckP__SELN__makeOutput();
      RF230DriverHwAckP__SELN__set();

      return TRUE;
    }

  RF230DriverHwAckP__SpiResource__request();
  return FALSE;
}

# 131 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP__startSpi(void )
#line 131
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 133
    {
      Atm128SpiP__Spi__initMaster();
      Atm128SpiP__Spi__enableInterrupt(FALSE);
      Atm128SpiP__Spi__setClockPolarity(FALSE);
      Atm128SpiP__Spi__setClockPhase(FALSE);
      Atm128SpiP__Spi__enableSpi(TRUE);
#line 160
      Atm128SpiP__Spi__setMasterDoubleSpeed(TRUE);
      Atm128SpiP__Spi__setClock(0);
    }
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  Atm128SpiP__McuPowerState__update();
}

# 132 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
#line 132
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

# 402 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static error_t Atm128SpiP__Resource__request(uint8_t id)
#line 402
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 403
    {
      if (!Atm128SpiP__ArbiterInfo__inUse()) {
          Atm128SpiP__startSpi();
        }
    }
#line 407
    __nesc_atomic_end(__nesc_atomic); }
  return Atm128SpiP__ResourceArbiter__request(id);
}

# 132 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ) ? TRUE : FALSE;
}

# 54 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static flags_metadata_t */*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
}

# 217 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = error;
  if (error == SUCCESS) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_DONE;
    }
  else {
#line 225
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
    }
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
}

# 111 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static rf230_metadata_t *RF230DriverHwAckP__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - RF230DriverHwAckP__RadioPacket__metadataLength(msg);
}

# 80 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get(void )
{
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type high = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper;
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type high_to = high;
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type low_to = low >> /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg){
#line 50
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(0U, msg);
#line 50
}
#line 50
# 60 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static timestamp_metadata_t */*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(msg);
}

# 106 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static void *RF230DriverHwAckP__getPayload(message_t *msg)
{
  return (void *)msg + RF230DriverHwAckP__RadioPacket__headerLength(msg);
}

# 178 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata);
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

# 83 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt)
#line 83
{






  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size now;
#line 92
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size elapsed;
#line 92
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size expires;

      ;


      now = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
      elapsed = now + 3 - t0;
      if (elapsed >= dt) {
        expires = now + 3;
        }
      else {
#line 102
        expires = t0 + dt;
        }



      if (expires == 0) {
        expires = 1;
        }



      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(expires - 1);
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset();
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start();
    }
#line 116
    __nesc_atomic_end(__nesc_atomic); }
}

# 50 "/opt/tinyos-2.x/tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230DriverHwAckP__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(2U, timeout);
#line 50
}
#line 50
# 252 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void )
{
  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY) 
    {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
    }
}

# 881 "/opt/tinyos-2.x/tos/chips/rf230/RF230DriverHwAckP.nc"
static uint8_t RF230DriverHwAckP__RadioPacket__payloadLength(message_t *msg)
{
  return __nesc_ntoh_leuint8(RF230DriverHwAckP__getHeader(msg)->length.nxdata) - 2;
}

# 84 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff)
{
  uint16_t a;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      a = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom += 273;
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask();

  return a % maxBackoff + /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff();
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
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(7U, dt);
#line 73
}
#line 73
# 282 "/opt/tinyos-2.x/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg) + sizeof(ieee154_simple_header_t );
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
  enum __nesc_unnamed4425 {
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
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
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
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

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
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 250 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 250
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt = ndt;
    }
#line 256
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
}

#line 128
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void )
#line 128
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();
      uint8_t newOcr2A;
      uint8_t tifr2 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag();

#line 139
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) || tifr2 & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 147
            __nesc_atomic_end(__nesc_atomic); 
#line 147
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set) {
          newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();

#line 158
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT) {
                newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
                }
              else {
#line 174
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) {
                  newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT;
                  }
                else {
#line 177
                  newOcr2A = alarm_in;
                  }
                }
            }
        }
#line 180
      newOcr2A--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(newOcr2A);
    }
#line 182
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired();
    }
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
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void )
{
  error_t error;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn();

      if (error == SUCCESS) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON;
        }
    }
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

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

# 242 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
__attribute((signal))   void __vector_13(void )
#line 242
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();


  HplAtm1281Timer2AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_15(void )
#line 250
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();

  HplAtm1281Timer2AsyncP__Timer__overflow();
}

# 119 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_24(void )
#line 119
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}

# 175 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx)
#line 175
{










  Atm128SpiP__Spi__write(tx);

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  return Atm128SpiP__Spi__read();
}

# 226 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
__attribute((interrupt))   void __vector_17(void )
#line 226
{
  HplAtm1281Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_18(void )
#line 230
{
  HplAtm1281Timer1P__CompareB__fired();
}

__attribute((interrupt))   void __vector_19(void )
#line 234
{
  HplAtm1281Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_16(void )
#line 238
{
  HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__get());
}

__attribute((interrupt))   void __vector_20(void )
#line 242
{
  HplAtm1281Timer1P__Timer__overflow();
}

# 162 "/opt/tinyos-2.x/tos/lib/net/blip/shell/UDPShellP.nc"
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


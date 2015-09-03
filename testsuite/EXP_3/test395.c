#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = -12;
static uint16_t x34 = UINT16_MAX;
int16_t x50 = INT16_MIN;
static uint64_t x51 = 1009875463LLU;
int8_t x52 = INT8_MIN;
int64_t t5 = -7968LL;
int16_t x65 = 1652;
static uint32_t x76 = 5373U;
volatile uint64_t t9 = 20980281LLU;
uint16_t x83 = 15784U;
uint32_t x84 = 88U;
static volatile int8_t x91 = INT8_MIN;
int16_t x92 = -1;
int32_t x93 = INT32_MAX;
static int8_t x94 = INT8_MIN;
int8_t x97 = -1;
uint32_t t14 = 5941U;
int8_t x109 = INT8_MIN;
int64_t x115 = 2816558603259LL;
int16_t x117 = -1;
int8_t x140 = INT8_MIN;
volatile uint32_t t21 = 158U;
static uint32_t x157 = 460887068U;
uint32_t x161 = UINT32_MAX;
int8_t x162 = -1;
static uint32_t x165 = 0U;
int32_t x166 = INT32_MIN;
volatile uint32_t t24 = 48908639U;
int64_t x175 = -244LL;
int8_t x176 = -1;
uint32_t x179 = 2U;
uint64_t x181 = 11227047510985LLU;
int8_t x184 = -1;
uint8_t x186 = 8U;
int16_t x190 = INT16_MIN;
int8_t x196 = -11;
uint32_t x225 = 1025055878U;
uint64_t x229 = 52015733662211631LLU;
uint32_t x231 = 33578U;
uint64_t t34 = 7698967698LLU;
uint64_t x234 = 10LLU;
uint8_t x235 = 61U;
volatile int8_t x236 = INT8_MIN;
uint16_t x250 = 9073U;
int16_t x253 = INT16_MAX;
int8_t x255 = INT8_MAX;
static volatile int64_t t39 = -22719LL;
int8_t x273 = 1;
static int64_t t41 = -1191090954518905829LL;
int16_t x284 = -1;
static int64_t x290 = -15632251LL;
int8_t x292 = 11;
volatile int64_t t43 = 85993060241455LL;
volatile uint32_t x304 = 2U;
volatile int32_t t47 = 509;
int64_t x330 = -1210847692467LL;
int16_t x337 = INT16_MAX;
volatile uint32_t x338 = UINT32_MAX;
int8_t x339 = INT8_MIN;
volatile uint8_t x341 = 63U;
int16_t x353 = -51;
uint16_t x355 = UINT16_MAX;
int64_t x371 = INT64_MIN;
volatile int16_t x373 = INT16_MIN;
int64_t x375 = INT64_MAX;
static uint64_t x381 = UINT64_MAX;
static volatile uint64_t x384 = 616133320119LLU;
int64_t t57 = -712278LL;
static int16_t x398 = 117;
int32_t t58 = 107;
uint32_t x401 = 10953U;
volatile int64_t t59 = 8054LL;
volatile uint32_t x411 = UINT32_MAX;
volatile int64_t x413 = -1LL;
static volatile int16_t x419 = 10049;
volatile uint64_t x420 = 138138829297987470LLU;
volatile uint64_t t63 = 187073590315423LLU;
volatile uint16_t x433 = UINT16_MAX;
int16_t x437 = INT16_MIN;
volatile uint16_t x439 = 17U;
int8_t x441 = -1;
uint32_t x444 = 12U;
static int64_t x445 = INT64_MIN;
uint32_t x446 = UINT32_MAX;
uint16_t x453 = UINT16_MAX;
int8_t x456 = -2;
static uint64_t x465 = UINT64_MAX;
int16_t x476 = 11;
int64_t x482 = INT64_MIN;
uint32_t x483 = 7517U;
int64_t t75 = 5706LL;
int32_t x489 = INT32_MIN;
uint8_t x492 = UINT8_MAX;
volatile uint32_t t78 = 42U;
uint32_t x521 = 15158891U;
uint8_t x523 = 1U;
uint32_t t80 = 921U;
static int32_t x542 = -1;
static int8_t x544 = -1;
static uint32_t x545 = 348326578U;
volatile uint32_t x548 = 1368970932U;
int16_t x553 = 1;
volatile uint32_t x568 = 9U;
volatile int32_t x573 = -1;
static volatile int64_t x574 = -1LL;
int64_t x584 = -52888624501LL;
int64_t x588 = -335781501554LL;
uint64_t t91 = 7LLU;
static int16_t x590 = INT16_MIN;
static int32_t x594 = INT32_MIN;
uint64_t t94 = 147521361LLU;
uint8_t x615 = UINT8_MAX;
volatile uint32_t x621 = 188024U;
static int16_t x626 = -1;
int32_t t99 = -833675;


void f0(void) {
	int64_t x9 = -1LL;
	int8_t x10 = INT8_MAX;
	volatile int8_t x12 = INT8_MIN;
	int64_t t0 = 1758737468LL;

	t0 = ((x9%x10)%(x11*x12));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x13 = INT64_MAX;
	int32_t x14 = INT32_MIN;
	volatile int16_t x15 = INT16_MIN;
	static int16_t x16 = INT16_MAX;
	volatile int64_t t1 = -2751222058836LL;

	t1 = ((x13%x14)%(x15*x16));

	if (t1 != 65535LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x21 = UINT8_MAX;
	uint16_t x22 = 25069U;
	volatile int32_t x23 = INT32_MAX;
	uint64_t x24 = 23381006LLU;
	static uint64_t t2 = 1534677997850267LLU;

	t2 = ((x21%x22)%(x23*x24));

	if (t2 != 255LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x33 = 30U;
	uint8_t x35 = 5U;
	volatile uint32_t x36 = 17725832U;
	uint32_t t3 = 3643U;

	t3 = ((x33%x34)%(x35*x36));

	if (t3 != 30U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x49 = 431U;
	uint64_t t4 = 99922435179185LLU;

	t4 = ((x49%x50)%(x51*x52));

	if (t4 != 431LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x57 = -14;
	volatile int64_t x58 = -1LL;
	uint16_t x59 = 70U;
	volatile uint32_t x60 = UINT32_MAX;

	t5 = ((x57%x58)%(x59*x60));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x61 = -1;
	static uint8_t x62 = 48U;
	int64_t x63 = -1LL;
	static int16_t x64 = -1;
	volatile int64_t t6 = -121537702893904673LL;

	t6 = ((x61%x62)%(x63*x64));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x66 = 6551444696LLU;
	static int8_t x67 = INT8_MAX;
	uint32_t x68 = 4171225U;
	static volatile uint64_t t7 = 513675489776LLU;

	t7 = ((x65%x66)%(x67*x68));

	if (t7 != 1652LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x73 = 113U;
	int64_t x74 = -76021LL;
	int8_t x75 = INT8_MIN;
	volatile int64_t t8 = 3LL;

	t8 = ((x73%x74)%(x75*x76));

	if (t8 != 113LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x77 = UINT64_MAX;
	volatile int32_t x78 = INT32_MIN;
	uint8_t x79 = 6U;
	static int64_t x80 = 160626611451LL;

	t9 = ((x77%x78)%(x79*x80));

	if (t9 != 2147483647LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x81 = INT8_MAX;
	int32_t x82 = INT32_MAX;
	static uint32_t t10 = 1162406U;

	t10 = ((x81%x82)%(x83*x84));

	if (t10 != 127U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x89 = -1;
	static uint8_t x90 = 8U;
	volatile int32_t t11 = 2873;

	t11 = ((x89%x90)%(x91*x92));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x95 = 3242;
	uint64_t x96 = UINT64_MAX;
	static uint64_t t12 = 2792758055262LLU;

	t12 = ((x93%x94)%(x95*x96));

	if (t12 != 127LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x98 = INT16_MAX;
	int8_t x99 = -1;
	volatile int64_t x100 = -3987642LL;
	int64_t t13 = 344522500LL;

	t13 = ((x97%x98)%(x99*x100));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x105 = 43U;
	int16_t x106 = -1;
	volatile uint32_t x107 = UINT32_MAX;
	int32_t x108 = INT32_MIN;

	t14 = ((x105%x106)%(x107*x108));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x110 = INT8_MAX;
	int32_t x111 = -182;
	volatile int16_t x112 = -75;
	int32_t t15 = -1;

	t15 = ((x109%x110)%(x111*x112));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x113 = INT32_MAX;
	static volatile int16_t x114 = -470;
	int8_t x116 = 1;
	static int64_t t16 = 2687LL;

	t16 = ((x113%x114)%(x115*x116));

	if (t16 != 67LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x118 = -12;
	static uint16_t x119 = UINT16_MAX;
	int8_t x120 = -1;
	int32_t t17 = -13226304;

	t17 = ((x117%x118)%(x119*x120));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x129 = INT16_MIN;
	static int16_t x130 = 3019;
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = -1;
	volatile int32_t t18 = 5678;

	t18 = ((x129%x130)%(x131*x132));

	if (t18 != -28) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x138 = 33617669236784912LLU;
	uint16_t x139 = 1U;
	uint64_t t19 = 562765576971113645LLU;

	t19 = ((x137%x138)%(x139*x140));

	if (t19 != 24261329803936192LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = -1;
	volatile int16_t x143 = INT16_MAX;
	int64_t x144 = 403LL;
	int64_t t20 = -499484224583040LL;

	t20 = ((x141%x142)%(x143*x144));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x149 = -1;
	uint8_t x150 = 3U;
	uint32_t x151 = UINT32_MAX;
	int8_t x152 = -1;

	t21 = ((x149%x150)%(x151*x152));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x158 = 3U;
	int16_t x159 = INT16_MIN;
	volatile uint64_t x160 = 39394375922LLU;
	static volatile uint64_t t22 = 1567988237636222LLU;

	t22 = ((x157%x158)%(x159*x160));

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x163 = UINT16_MAX;
	uint32_t x164 = UINT32_MAX;
	uint32_t t23 = 378445U;

	t23 = ((x161%x162)%(x163*x164));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x167 = UINT32_MAX;
	int16_t x168 = INT16_MAX;

	t24 = ((x165%x166)%(x167*x168));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x169 = INT64_MIN;
	int8_t x170 = 1;
	int64_t x171 = -17196LL;
	uint8_t x172 = 63U;
	int64_t t25 = -1LL;

	t25 = ((x169%x170)%(x171*x172));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x173 = -1;
	int64_t x174 = -1LL;
	volatile int64_t t26 = -899LL;

	t26 = ((x173%x174)%(x175*x176));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x177 = -1;
	int16_t x178 = INT16_MIN;
	uint8_t x180 = 2U;
	uint32_t t27 = 242U;

	t27 = ((x177%x178)%(x179*x180));

	if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x182 = INT8_MAX;
	int64_t x183 = -1LL;
	volatile uint64_t t28 = 29541LLU;

	t28 = ((x181%x182)%(x183*x184));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x185 = 1799035U;
	uint16_t x187 = 1459U;
	static int8_t x188 = -12;
	uint32_t t29 = 1U;

	t29 = ((x185%x186)%(x187*x188));

	if (t29 != 3U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x189 = 530U;
	static int64_t x191 = 560102138260978LL;
	volatile int64_t x192 = -1LL;
	static int64_t t30 = -195185584LL;

	t30 = ((x189%x190)%(x191*x192));

	if (t30 != 530LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x193 = 2;
	int64_t x194 = -25LL;
	uint64_t x195 = 303057090906541366LLU;
	volatile uint64_t t31 = 844LLU;

	t31 = ((x193%x194)%(x195*x196));

	if (t31 != 2LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x221 = INT64_MAX;
	volatile int64_t x222 = INT64_MIN;
	volatile int16_t x223 = INT16_MIN;
	int64_t x224 = -1LL;
	int64_t t32 = 142773039256994162LL;

	t32 = ((x221%x222)%(x223*x224));

	if (t32 != 32767LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x226 = -13986LL;
	static uint16_t x227 = UINT16_MAX;
	static volatile int32_t x228 = -1;
	int64_t t33 = -778892493832258146LL;

	t33 = ((x225%x226)%(x227*x228));

	if (t33 != 7952LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x230 = INT32_MIN;
	int8_t x232 = INT8_MIN;

	t34 = ((x229%x230)%(x231*x232));

	if (t34 != 1080867375LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x233 = UINT16_MAX;
	static uint64_t t35 = 3802LLU;

	t35 = ((x233%x234)%(x235*x236));

	if (t35 != 5LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x241 = -1;
	static int16_t x242 = -1;
	int32_t x243 = INT32_MIN;
	uint64_t x244 = 2695213591800800474LLU;
	uint64_t t36 = 82153521665054359LLU;

	t36 = ((x241%x242)%(x243*x244));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x245 = -1164;
	static uint16_t x246 = UINT16_MAX;
	int8_t x247 = -1;
	int32_t x248 = -1;
	int32_t t37 = -31033067;

	t37 = ((x245%x246)%(x247*x248));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x249 = 159175U;
	int16_t x251 = INT16_MIN;
	static uint16_t x252 = 12860U;
	uint32_t t38 = 1809422087U;

	t38 = ((x249%x250)%(x251*x252));

	if (t38 != 4934U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x254 = INT32_MAX;
	int64_t x256 = -51504425369LL;

	t39 = ((x253%x254)%(x255*x256));

	if (t39 != 32767LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = 1;
	uint32_t x267 = 7U;
	int32_t x268 = INT32_MAX;
	uint32_t t40 = 4313154U;

	t40 = ((x265%x266)%(x267*x268));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x274 = -1LL;
	int16_t x275 = 954;
	static int64_t x276 = -2407LL;

	t41 = ((x273%x274)%(x275*x276));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x281 = 11;
	uint32_t x282 = 2513522U;
	int64_t x283 = INT64_MAX;
	static int64_t t42 = 8957326798729LL;

	t42 = ((x281%x282)%(x283*x284));

	if (t42 != 11LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x289 = UINT16_MAX;
	static int16_t x291 = INT16_MAX;

	t43 = ((x289%x290)%(x291*x292));

	if (t43 != 65535LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x301 = -1LL;
	int8_t x302 = -1;
	int64_t x303 = 656491588LL;
	int64_t t44 = 30497852LL;

	t44 = ((x301%x302)%(x303*x304));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x309 = 521800U;
	uint64_t x310 = UINT64_MAX;
	int8_t x311 = INT8_MIN;
	static int64_t x312 = -1LL;
	volatile uint64_t t45 = 108338027LLU;

	t45 = ((x309%x310)%(x311*x312));

	if (t45 != 72LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x313 = -1;
	uint64_t x314 = 1021677LLU;
	uint32_t x315 = UINT32_MAX;
	volatile int16_t x316 = INT16_MIN;
	volatile uint64_t t46 = 3110185LLU;

	t46 = ((x313%x314)%(x315*x316));

	if (t46 != 9898LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x317 = 2U;
	uint8_t x318 = UINT8_MAX;
	volatile int8_t x319 = -1;
	int16_t x320 = INT16_MAX;

	t47 = ((x317%x318)%(x319*x320));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x329 = INT32_MAX;
	volatile uint16_t x331 = 498U;
	int64_t x332 = -1LL;
	int64_t t48 = 4724773463696369LL;

	t48 = ((x329%x330)%(x331*x332));

	if (t48 != 79LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x340 = 3358U;
	volatile uint32_t t49 = 499098U;

	t49 = ((x337%x338)%(x339*x340));

	if (t49 != 32767U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x342 = INT64_MAX;
	uint8_t x343 = 1U;
	int16_t x344 = 2;
	volatile int64_t t50 = -225083065827LL;

	t50 = ((x341%x342)%(x343*x344));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x349 = 10462LL;
	volatile uint64_t x350 = UINT64_MAX;
	static uint8_t x351 = UINT8_MAX;
	uint8_t x352 = UINT8_MAX;
	uint64_t t51 = 44122LLU;

	t51 = ((x349%x350)%(x351*x352));

	if (t51 != 10462LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x354 = INT8_MAX;
	uint64_t x356 = 3399LLU;
	uint64_t t52 = 901638090668389023LLU;

	t52 = ((x353%x354)%(x355*x356));

	if (t52 != 155383435LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x365 = UINT64_MAX;
	int32_t x366 = -41;
	int8_t x367 = INT8_MIN;
	uint64_t x368 = 11321390LLU;
	volatile uint64_t t53 = 391771900058478LLU;

	t53 = ((x365%x366)%(x367*x368));

	if (t53 != 40LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x369 = 32;
	static int64_t x370 = -5021993LL;
	volatile uint64_t x372 = UINT64_MAX;
	static uint64_t t54 = 32721104555822348LLU;

	t54 = ((x369%x370)%(x371*x372));

	if (t54 != 32LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x374 = -1;
	static int64_t x376 = -1LL;
	volatile int64_t t55 = -7160816950081561LL;

	t55 = ((x373%x374)%(x375*x376));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x382 = INT16_MAX;
	int64_t x383 = INT64_MIN;
	volatile uint64_t t56 = 44LLU;

	t56 = ((x381%x382)%(x383*x384));

	if (t56 != 15LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x389 = INT8_MAX;
	int32_t x390 = INT32_MAX;
	volatile uint16_t x391 = UINT16_MAX;
	int64_t x392 = 5LL;

	t57 = ((x389%x390)%(x391*x392));

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x397 = -858;
	int32_t x399 = -158;
	uint8_t x400 = 72U;

	t58 = ((x397%x398)%(x399*x400));

	if (t58 != -39) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x402 = 18U;
	static volatile int64_t x403 = -1LL;
	int16_t x404 = -1;

	t59 = ((x401%x402)%(x403*x404));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x405 = 6023U;
	static uint8_t x406 = 1U;
	uint16_t x407 = 112U;
	uint64_t x408 = 47066767298LLU;
	volatile uint64_t t60 = 3914950LLU;

	t60 = ((x405%x406)%(x407*x408));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x409 = INT32_MIN;
	uint16_t x410 = 4968U;
	static int32_t x412 = -1;
	uint32_t t61 = 194805540U;

	t61 = ((x409%x410)%(x411*x412));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x414 = INT8_MIN;
	int16_t x415 = -1;
	volatile int32_t x416 = 3;
	volatile int64_t t62 = -11535285683646LL;

	t62 = ((x413%x414)%(x415*x416));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x417 = 180260303U;
	int32_t x418 = INT32_MIN;

	t63 = ((x417%x418)%(x419*x420));

	if (t63 != 180260303LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x429 = -14;
	int16_t x430 = INT16_MIN;
	uint8_t x431 = 1U;
	uint8_t x432 = 3U;
	volatile int32_t t64 = -90128;

	t64 = ((x429%x430)%(x431*x432));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x434 = UINT32_MAX;
	uint64_t x435 = 233LLU;
	static uint32_t x436 = 26U;
	uint64_t t65 = 47823715730012263LLU;

	t65 = ((x433%x434)%(x435*x436));

	if (t65 != 4955LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x438 = INT16_MIN;
	uint16_t x440 = 5U;
	static volatile int32_t t66 = 8107824;

	t66 = ((x437%x438)%(x439*x440));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x442 = UINT16_MAX;
	int8_t x443 = -55;
	uint32_t t67 = 102U;

	t67 = ((x441%x442)%(x443*x444));

	if (t67 != 659U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x447 = -1;
	static uint32_t x448 = UINT32_MAX;
	int64_t t68 = 3826810910785LL;

	t68 = ((x445%x446)%(x447*x448));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x454 = 945910U;
	volatile int16_t x455 = -1;
	volatile uint32_t t69 = 3U;

	t69 = ((x453%x454)%(x455*x456));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x457 = UINT32_MAX;
	int64_t x458 = -417922364141765LL;
	static uint16_t x459 = UINT16_MAX;
	static uint64_t x460 = 81611LLU;
	volatile uint64_t t70 = 3079499LLU;

	t70 = ((x457%x458)%(x459*x460));

	if (t70 != 4294967295LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x466 = INT16_MAX;
	uint32_t x467 = 195U;
	int16_t x468 = -99;
	volatile uint64_t t71 = 27LLU;

	t71 = ((x465%x466)%(x467*x468));

	if (t71 != 15LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x469 = INT32_MAX;
	volatile int64_t x470 = -1LL;
	volatile uint8_t x471 = 7U;
	int8_t x472 = INT8_MIN;
	int64_t t72 = 266668740703236184LL;

	t72 = ((x469%x470)%(x471*x472));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x473 = 9784U;
	volatile int64_t x474 = INT64_MIN;
	int64_t x475 = -88802LL;
	volatile int64_t t73 = 153614765739545564LL;

	t73 = ((x473%x474)%(x475*x476));

	if (t73 != 9784LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x481 = INT32_MAX;
	int8_t x484 = INT8_MIN;
	volatile int64_t t74 = 6LL;

	t74 = ((x481%x482)%(x483*x484));

	if (t74 != 2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x485 = INT8_MAX;
	int16_t x486 = INT16_MIN;
	int8_t x487 = -1;
	static int64_t x488 = 110905798931639LL;

	t75 = ((x485%x486)%(x487*x488));

	if (t75 != 127LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x490 = 1304969777LLU;
	uint16_t x491 = UINT16_MAX;
	volatile uint64_t t76 = 85673886501LLU;

	t76 = ((x489%x490)%(x491*x492));

	if (t76 != 12980703LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x493 = INT16_MIN;
	int8_t x494 = -5;
	uint8_t x495 = UINT8_MAX;
	uint8_t x496 = 98U;
	int32_t t77 = 3379904;

	t77 = ((x493%x494)%(x495*x496));

	if (t77 != -3) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x505 = 50;
	uint32_t x506 = 779229932U;
	int16_t x507 = INT16_MIN;
	uint8_t x508 = UINT8_MAX;

	t78 = ((x505%x506)%(x507*x508));

	if (t78 != 50U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x509 = -1411876LL;
	static uint32_t x510 = 20U;
	uint8_t x511 = UINT8_MAX;
	int8_t x512 = INT8_MIN;
	static int64_t t79 = -30172LL;

	t79 = ((x509%x510)%(x511*x512));

	if (t79 != -16LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x522 = -34;
	int16_t x524 = -7178;

	t80 = ((x521%x522)%(x523*x524));

	if (t80 != 15158891U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x525 = 4206U;
	static uint32_t x526 = 14U;
	uint32_t x527 = 513067335U;
	volatile int16_t x528 = 213;
	uint32_t t81 = 13U;

	t81 = ((x525%x526)%(x527*x528));

	if (t81 != 6U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x541 = -1LL;
	volatile int16_t x543 = -116;
	static int64_t t82 = -1068524512180112LL;

	t82 = ((x541%x542)%(x543*x544));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x546 = -1;
	volatile int32_t x547 = -1;
	uint32_t t83 = 100U;

	t83 = ((x545%x546)%(x547*x548));

	if (t83 != 348326578U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x554 = -31;
	static volatile uint64_t x555 = 1926949612795LLU;
	volatile uint8_t x556 = 5U;
	uint64_t t84 = 8364388603LLU;

	t84 = ((x553%x554)%(x555*x556));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x557 = UINT32_MAX;
	uint16_t x558 = UINT16_MAX;
	uint64_t x559 = 2988742078863264870LLU;
	int8_t x560 = INT8_MIN;
	volatile uint64_t t85 = 111059256LLU;

	t85 = ((x557%x558)%(x559*x560));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x561 = -1;
	static volatile int16_t x562 = INT16_MAX;
	int16_t x563 = INT16_MIN;
	uint32_t x564 = UINT32_MAX;
	static uint32_t t86 = 8U;

	t86 = ((x561%x562)%(x563*x564));

	if (t86 != 32767U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x565 = INT64_MIN;
	volatile int64_t x566 = INT64_MIN;
	uint8_t x567 = UINT8_MAX;
	int64_t t87 = -4087086LL;

	t87 = ((x565%x566)%(x567*x568));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x569 = 6508U;
	int64_t x570 = INT64_MIN;
	uint8_t x571 = 10U;
	int64_t x572 = 43268LL;
	static int64_t t88 = 4858930LL;

	t88 = ((x569%x570)%(x571*x572));

	if (t88 != 6508LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x575 = 656793U;
	int8_t x576 = INT8_MIN;
	volatile int64_t t89 = 377979LL;

	t89 = ((x573%x574)%(x575*x576));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x581 = UINT64_MAX;
	uint32_t x582 = UINT32_MAX;
	uint64_t x583 = 1543LLU;
	static uint64_t t90 = 40441LLU;

	t90 = ((x581%x582)%(x583*x584));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x585 = 91216487736839106LLU;
	int64_t x586 = 132179447153LL;
	int16_t x587 = INT16_MAX;

	t91 = ((x585%x586)%(x587*x588));

	if (t91 != 112153789571LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x589 = INT16_MAX;
	static int16_t x591 = 40;
	int32_t x592 = -1;
	volatile int32_t t92 = -5;

	t92 = ((x589%x590)%(x591*x592));

	if (t92 != 7) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x593 = -1LL;
	uint16_t x595 = 98U;
	uint64_t x596 = 129120824400295LLU;
	volatile uint64_t t93 = 775189602128234LLU;

	t93 = ((x593%x594)%(x595*x596));

	if (t93 != 10098040889029745LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x597 = -1LL;
	volatile int8_t x598 = INT8_MIN;
	uint64_t x599 = UINT64_MAX;
	uint8_t x600 = 29U;

	t94 = ((x597%x598)%(x599*x600));

	if (t94 != 28LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x601 = 1;
	volatile uint8_t x602 = 55U;
	int8_t x603 = INT8_MAX;
	int8_t x604 = INT8_MIN;
	volatile int32_t t95 = -31977712;

	t95 = ((x601%x602)%(x603*x604));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x605 = 773927LL;
	volatile int32_t x606 = 56014;
	int32_t x607 = INT32_MIN;
	uint64_t x608 = 13LLU;
	static volatile uint64_t t96 = 115055163508LLU;

	t96 = ((x605%x606)%(x607*x608));

	if (t96 != 45745LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x613 = -1;
	static int8_t x614 = INT8_MAX;
	uint32_t x616 = 360891590U;
	uint32_t t97 = 1588773U;

	t97 = ((x613%x614)%(x615*x616));

	if (t97 != 628882827U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x622 = INT16_MIN;
	static uint32_t x623 = UINT32_MAX;
	int16_t x624 = INT16_MIN;
	uint32_t t98 = 6703360U;

	t98 = ((x621%x622)%(x623*x624));

	if (t98 != 24184U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x625 = 1U;
	int16_t x627 = INT16_MIN;
	int16_t x628 = 171;

	t99 = ((x625%x626)%(x627*x628));

	if (t99 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = -1;
uint8_t x21 = UINT8_MAX;
int8_t x22 = 7;
static int16_t x27 = -1;
volatile int8_t x36 = 0;
int16_t x40 = -20;
int8_t x42 = INT8_MIN;
uint64_t x66 = UINT64_MAX;
static int8_t x74 = -4;
static int16_t x75 = -1;
static uint8_t x76 = 1U;
int32_t t9 = -310064;
int32_t x77 = INT32_MIN;
int8_t x79 = INT8_MIN;
uint64_t x80 = 251LLU;
int32_t x87 = -1;
int64_t x90 = -544928229013LL;
int32_t x119 = INT32_MIN;
uint64_t x120 = UINT64_MAX;
int32_t x148 = INT32_MIN;
int8_t x154 = -1;
int32_t x175 = 2;
uint8_t x181 = 0U;
static int64_t x184 = -969LL;
int32_t x185 = INT32_MIN;
uint64_t x187 = UINT64_MAX;
volatile uint64_t t25 = 117207LLU;
uint32_t x196 = 128030561U;
int16_t x197 = INT16_MAX;
uint64_t x198 = UINT64_MAX;
int8_t x199 = INT8_MIN;
int64_t x200 = 1113LL;
uint32_t x203 = 25118913U;
static uint64_t x219 = UINT64_MAX;
static uint32_t t31 = 1821727624U;
static int16_t x230 = -25;
uint8_t x239 = 0U;
int32_t t34 = 205;
int8_t x242 = INT8_MIN;
static volatile int16_t x244 = INT16_MAX;
static int8_t x262 = INT8_MIN;
uint64_t x265 = 516707192LLU;
uint32_t x267 = 5142241U;
uint64_t x268 = 25739868547895LLU;
int16_t x299 = INT16_MIN;
int16_t x311 = INT16_MIN;
int32_t x324 = 15;
int16_t x329 = INT16_MAX;
int16_t x331 = INT16_MAX;
int8_t x346 = INT8_MIN;
static volatile uint32_t t50 = 93194250U;
int64_t x391 = -1LL;
int64_t x400 = INT64_MIN;
int8_t x428 = INT8_MIN;
volatile int64_t x431 = 8LL;
volatile uint8_t x437 = 28U;
static uint32_t t60 = 0U;
int16_t x441 = INT16_MAX;
volatile uint64_t x443 = 2691046522832751LLU;
uint64_t t64 = 65860412793168LLU;
static volatile int8_t x496 = -1;
volatile int32_t t66 = -36417193;
uint16_t x499 = 0U;
int32_t x506 = -880;
int64_t x517 = -1LL;
int16_t x518 = 36;
int8_t x525 = INT8_MAX;
uint32_t x530 = UINT32_MAX;
int32_t x531 = 341160;
volatile uint32_t x541 = UINT32_MAX;
static volatile uint64_t x542 = 230LLU;
static int16_t x551 = INT16_MAX;
uint8_t x552 = 3U;
static uint16_t x562 = 1U;
static int8_t x565 = INT8_MIN;
uint8_t x567 = 29U;
int8_t x568 = INT8_MIN;
uint16_t x572 = UINT16_MAX;
volatile uint64_t t77 = 3823LLU;
static uint32_t x574 = UINT32_MAX;
int32_t x575 = 970;
int32_t x576 = -1;
int32_t x577 = INT32_MIN;
int8_t x582 = INT8_MAX;
int8_t x584 = 0;
int16_t x593 = INT16_MIN;
static int16_t x594 = -1;
int16_t x595 = INT16_MAX;
static int64_t x600 = 378050LL;
uint64_t x607 = 3817178LLU;
static volatile uint64_t t84 = 18630232656994LLU;
int8_t x613 = INT8_MAX;
uint32_t x616 = 32260U;
static volatile int16_t x623 = INT16_MIN;
int32_t x625 = 36;
uint8_t x626 = UINT8_MAX;
int8_t x630 = INT8_MIN;
uint16_t x632 = 3875U;
uint32_t x649 = 397005U;
volatile uint64_t t90 = 1598140517LLU;
uint16_t x657 = 23U;
int32_t t92 = -12;
static int8_t x667 = INT8_MIN;
int32_t x680 = -8;
int64_t t99 = 232716399296313121LL;


void f0(void) {
	uint16_t x5 = 42U;
	static int16_t x6 = INT16_MIN;
	uint16_t x8 = UINT16_MAX;
	int32_t t0 = -5112;

	t0 = (x5*(x6+(x7*x8)));

	if (t0 != -4128726) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 33624678287628LLU;
	static int16_t x10 = INT16_MIN;
	uint16_t x11 = 0U;
	uint32_t x12 = 7U;
	uint64_t t1 = 859211LLU;

	t1 = (x9*(x10+(x11*x12)));

	if (t1 != 14679161427042369536LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x23 = 992U;
	volatile uint64_t x24 = UINT64_MAX;
	uint64_t t2 = 4589313476LLU;

	t2 = (x21*(x22+(x23*x24)));

	if (t2 != 18446744073709300441LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x25 = -811000210;
	volatile uint64_t x26 = 996898111559342LLU;
	static volatile uint8_t x28 = 5U;
	uint64_t t3 = 5LLU;

	t3 = (x25*(x26+(x27*x28)));

	if (t3 != 17768183390203316894LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = 37;
	int8_t x34 = INT8_MAX;
	int32_t x35 = -1;
	volatile int32_t t4 = -1;

	t4 = (x33*(x34+(x35*x36)));

	if (t4 != 4699) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x37 = 80312U;
	uint64_t x38 = UINT64_MAX;
	volatile uint8_t x39 = UINT8_MAX;
	static volatile uint64_t t5 = 4495048LLU;

	t5 = (x37*(x38+(x39*x40)));

	if (t5 != 18446744073299880104LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x41 = INT16_MIN;
	static int16_t x43 = INT16_MIN;
	uint64_t x44 = 3371783789232LLU;
	volatile uint64_t t6 = 729188948110LLU;

	t6 = (x41*(x42+(x43*x44)));

	if (t6 != 4863437536531316736LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x61 = 460U;
	static int8_t x62 = 2;
	int64_t x63 = -1LL;
	volatile int32_t x64 = -1;
	volatile int64_t t7 = -396366549LL;

	t7 = (x61*(x62+(x63*x64)));

	if (t7 != 1380LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x65 = -1LL;
	uint16_t x67 = 4035U;
	int16_t x68 = INT16_MIN;
	volatile uint64_t t8 = 114LLU;

	t8 = (x65*(x66+(x67*x68)));

	if (t8 != 132218881LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x73 = -1;

	t9 = (x73*(x74+(x75*x76)));

	if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x78 = INT64_MAX;
	uint64_t t10 = 590387798743640LLU;

	t10 = (x77*(x78+(x79*x80)));

	if (t10 != 68996502126592LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x85 = INT16_MAX;
	uint8_t x86 = 5U;
	static uint32_t x88 = 16077895U;
	volatile uint32_t t11 = 363U;

	t11 = (x85*(x86+(x87*x88)));

	if (t11 != 1456755778U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x89 = 51U;
	int16_t x91 = INT16_MIN;
	volatile int16_t x92 = -7;
	volatile int64_t t12 = 2293753LL;

	t12 = (x89*(x90+(x91*x92)));

	if (t12 != -27791327981487LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x93 = INT8_MIN;
	static uint8_t x94 = 82U;
	volatile uint32_t x95 = UINT32_MAX;
	volatile int32_t x96 = -5041941;
	volatile uint32_t t13 = 141U;

	t13 = (x93*(x94+(x95*x96)));

	if (t13 != 3649588352U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x101 = 20U;
	uint32_t x102 = 189749U;
	int16_t x103 = -5129;
	static uint64_t x104 = 124300532343LLU;
	uint64_t t14 = 5417905903302LLU;

	t14 = (x101*(x102+(x103*x104)));

	if (t14 != 18433993325105601656LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = -1;
	volatile int16_t x107 = -8144;
	uint64_t x108 = 519265732152686896LLU;
	volatile uint64_t t15 = 333675585LLU;

	t15 = (x105*(x106+(x107*x108)));

	if (t15 != 8050082631246675968LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x117 = -1;
	static int64_t x118 = -148425395LL;
	volatile uint64_t t16 = 461639LLU;

	t16 = (x117*(x118+(x119*x120)));

	if (t16 != 18446744071710493363LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x125 = 23U;
	static uint64_t x126 = 790238102346440LLU;
	volatile uint8_t x127 = 0U;
	int8_t x128 = 0;
	static uint64_t t17 = 6111LLU;

	t17 = (x125*(x126+(x127*x128)));

	if (t17 != 18175476353968120LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x137 = -16;
	uint64_t x138 = 9833991619LLU;
	int8_t x139 = INT8_MAX;
	int8_t x140 = -4;
	volatile uint64_t t18 = 195308254LLU;

	t18 = (x137*(x138+(x139*x140)));

	if (t18 != 18446743916365693840LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x141 = INT64_MAX;
	static int16_t x142 = INT16_MIN;
	int8_t x143 = 13;
	uint64_t x144 = 11630795540958075LLU;
	volatile uint64_t t19 = 469063248900282723LLU;

	t19 = (x141*(x142+(x143*x144)));

	if (t19 != 9072171694822353601LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x145 = INT16_MIN;
	uint8_t x146 = 9U;
	uint32_t x147 = 180U;
	uint32_t t20 = 39257767U;

	t20 = (x145*(x146+(x147*x148)));

	if (t20 != 4294672384U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x153 = 1;
	int16_t x155 = -72;
	volatile int8_t x156 = -9;
	int32_t t21 = -212;

	t21 = (x153*(x154+(x155*x156)));

	if (t21 != 647) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x173 = -58;
	uint16_t x174 = 16U;
	static uint8_t x176 = 3U;
	int32_t t22 = 784389;

	t22 = (x173*(x174+(x175*x176)));

	if (t22 != -1276) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x177 = INT8_MIN;
	int64_t x178 = -1LL;
	static int64_t x179 = -1LL;
	uint8_t x180 = 2U;
	int64_t t23 = 255LL;

	t23 = (x177*(x178+(x179*x180)));

	if (t23 != 384LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x182 = 1101599131LLU;
	int8_t x183 = -1;
	uint64_t t24 = 1997508574489780962LLU;

	t24 = (x181*(x182+(x183*x184)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x186 = INT16_MAX;
	volatile int16_t x188 = 474;

	t25 = (x185*(x186+(x187*x188)));

	if (t25 != 18446674725020106752LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x193 = INT16_MIN;
	static int32_t x194 = INT32_MAX;
	int8_t x195 = -5;
	volatile uint32_t t26 = 58304860U;

	t26 = (x193*(x194+(x195*x196)));

	if (t26 != 4201840640U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t t27 = 323783163175616LLU;

	t27 = (x197*(x198+(x199*x200)));

	if (t27 != 18446744069041400961LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x201 = -1;
	static int8_t x202 = -1;
	int64_t x204 = -1LL;
	int64_t t28 = 15668127839LL;

	t28 = (x201*(x202+(x203*x204)));

	if (t28 != 25118914LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x209 = -163;
	int64_t x210 = -37391327409182LL;
	uint8_t x211 = 1U;
	volatile int64_t x212 = 19937808374LL;
	volatile int64_t t29 = 138384586122988346LL;

	t29 = (x209*(x210+(x211*x212)));

	if (t29 != 6091536504931704LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x217 = INT32_MIN;
	int16_t x218 = INT16_MIN;
	int32_t x220 = -595;
	static volatile uint64_t t30 = 37680813465892449LLU;

	t30 = (x217*(x218+(x219*x220)));

	if (t30 != 69090991407104LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x225 = -6;
	volatile uint32_t x226 = 2845329U;
	volatile int8_t x227 = -1;
	static int8_t x228 = -9;

	t31 = (x225*(x226+(x227*x228)));

	if (t31 != 4277895268U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x229 = -125173292114LL;
	static int32_t x231 = INT32_MIN;
	uint64_t x232 = 797741320513154LLU;
	volatile uint64_t t32 = 192727859802304LLU;

	t32 = (x229*(x230+(x231*x232)));

	if (t32 != 13313214076805809154LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x233 = -1;
	uint64_t x234 = 43936206737LLU;
	volatile int8_t x235 = INT8_MAX;
	volatile uint16_t x236 = 3638U;
	uint64_t t33 = 46017307399LLU;

	t33 = (x233*(x234+(x235*x236)));

	if (t33 != 18446744029772882853LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x237 = 3U;
	uint16_t x238 = UINT16_MAX;
	static int32_t x240 = -45230;

	t34 = (x237*(x238+(x239*x240)));

	if (t34 != 196605) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x241 = 3938192967076LL;
	int32_t x243 = -1;
	static int64_t t35 = -140493LL;

	t35 = (x241*(x242+(x243*x244)));

	if (t35 != -129546857651965020LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x249 = 15882U;
	volatile int32_t x250 = INT32_MAX;
	int8_t x251 = INT8_MIN;
	uint32_t x252 = 56000U;
	uint32_t t36 = 192U;

	t36 = (x249*(x250+(x251*x252)));

	if (t36 != 2121925110U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x261 = -5;
	int64_t x263 = -1LL;
	uint16_t x264 = 21823U;
	int64_t t37 = 112566517589039910LL;

	t37 = (x261*(x262+(x263*x264)));

	if (t37 != 109755LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x266 = INT16_MAX;
	volatile uint64_t t38 = 1505594432654293131LLU;

	t38 = (x265*(x266+(x267*x268)));

	if (t38 != 18311049687810630224LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = -7415;
	uint8_t x279 = 23U;
	uint16_t x280 = 7293U;
	int32_t t39 = 62;

	t39 = (x277*(x278+(x279*x280)));

	if (t39 != -20521472) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x281 = UINT8_MAX;
	volatile int8_t x282 = 2;
	volatile int8_t x283 = INT8_MIN;
	uint16_t x284 = 320U;
	int32_t t40 = 1;

	t40 = (x281*(x282+(x283*x284)));

	if (t40 != -10444290) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x285 = -1LL;
	static volatile uint64_t x286 = 85574174452714LLU;
	uint64_t x287 = 79100305418953392LLU;
	volatile int32_t x288 = -8424;
	uint64_t t41 = 4140979862419886LLU;

	t41 = (x285*(x286+(x287*x288)));

	if (t41 != 2258100621545063318LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x289 = -25;
	static uint16_t x290 = UINT16_MAX;
	volatile uint8_t x291 = UINT8_MAX;
	int16_t x292 = INT16_MIN;
	int32_t t42 = -24623;

	t42 = (x289*(x290+(x291*x292)));

	if (t42 != 207257625) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x297 = INT8_MIN;
	uint16_t x298 = 187U;
	volatile uint64_t x300 = 5898LLU;
	uint64_t t43 = 16464377955423LLU;

	t43 = (x297*(x298+(x299*x300)));

	if (t43 != 24737981056LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x309 = 462405872904777LLU;
	volatile int16_t x310 = INT16_MIN;
	static uint16_t x312 = 3U;
	static uint64_t t44 = 1220587LLU;

	t44 = (x309*(x310+(x311*x312)));

	if (t44 != 13178513721463275520LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x321 = 181U;
	uint16_t x322 = UINT16_MAX;
	volatile int16_t x323 = INT16_MIN;
	static int32_t t45 = -7;

	t45 = (x321*(x322+(x323*x324)));

	if (t45 != -77103285) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x330 = -1;
	int32_t x332 = -1;
	int32_t t46 = 0;

	t46 = (x329*(x330+(x331*x332)));

	if (t46 != -1073709056) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x345 = -1;
	static uint8_t x347 = UINT8_MAX;
	int16_t x348 = INT16_MAX;
	volatile int32_t t47 = 33223;

	t47 = (x345*(x346+(x347*x348)));

	if (t47 != -8355457) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x353 = -6;
	static int8_t x354 = INT8_MAX;
	uint64_t x355 = 4326960371LLU;
	static int64_t x356 = -11061610524LL;
	volatile uint64_t t48 = 4578090336425906004LLU;

	t48 = (x353*(x354+(x355*x356)));

	if (t48 != 10477741155063991422LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x365 = 3U;
	static uint8_t x366 = UINT8_MAX;
	static int16_t x367 = 0;
	int8_t x368 = INT8_MIN;
	volatile int32_t t49 = 323068;

	t49 = (x365*(x366+(x367*x368)));

	if (t49 != 765) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x369 = INT8_MIN;
	uint32_t x370 = 29U;
	volatile uint32_t x371 = 950U;
	int8_t x372 = -16;

	t50 = (x369*(x370+(x371*x372)));

	if (t50 != 1941888U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x377 = -1;
	uint16_t x378 = UINT16_MAX;
	int8_t x379 = 1;
	static int32_t x380 = INT32_MIN;
	static int32_t t51 = -13;

	t51 = (x377*(x378+(x379*x380)));

	if (t51 != 2147418113) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x381 = 1;
	static int8_t x382 = -13;
	uint8_t x383 = UINT8_MAX;
	int16_t x384 = 323;
	static volatile int32_t t52 = 64;

	t52 = (x381*(x382+(x383*x384)));

	if (t52 != 82352) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x385 = -1LL;
	uint32_t x386 = UINT32_MAX;
	volatile int16_t x387 = INT16_MIN;
	volatile int8_t x388 = -1;
	int64_t t53 = 49434195LL;

	t53 = (x385*(x386+(x387*x388)));

	if (t53 != -32767LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = UINT64_MAX;
	int16_t x392 = INT16_MIN;
	static volatile uint64_t t54 = 5205000850237189LLU;

	t54 = (x389*(x390+(x391*x392)));

	if (t54 != 18446673707112857600LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x397 = 3;
	int32_t x398 = INT32_MIN;
	uint64_t x399 = UINT64_MAX;
	static uint64_t t55 = 3605947195802816LLU;

	t55 = (x397*(x398+(x399*x400)));

	if (t55 != 9223372030412324864LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x401 = 220410U;
	static int16_t x402 = INT16_MAX;
	uint32_t x403 = 3477U;
	uint16_t x404 = UINT16_MAX;
	volatile uint32_t t56 = 1U;

	t56 = (x401*(x402+(x403*x404)));

	if (t56 != 1347277700U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x425 = -1;
	static int64_t x426 = -52482798LL;
	int16_t x427 = INT16_MIN;
	static int64_t t57 = 28574124005246210LL;

	t57 = (x425*(x426+(x427*x428)));

	if (t57 != 48288494LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x429 = INT8_MIN;
	volatile int32_t x430 = 950853;
	uint32_t x432 = 26U;
	int64_t t58 = 181998701632LL;

	t58 = (x429*(x430+(x431*x432)));

	if (t58 != -121735808LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x433 = INT16_MAX;
	static volatile uint16_t x434 = 3974U;
	static int32_t x435 = 7;
	int32_t x436 = -25;
	static int32_t t59 = 1;

	t59 = (x433*(x434+(x435*x436)));

	if (t59 != 124481833) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x438 = 15U;
	uint32_t x439 = UINT32_MAX;
	volatile int32_t x440 = 1;

	t60 = (x437*(x438+(x439*x440)));

	if (t60 != 392U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x442 = 2673020LLU;
	int64_t x444 = 13LL;
	uint64_t t61 = 11575634668LLU;

	t61 = (x441*(x442+(x443*x444)));

	if (t61 != 2609645895184422369LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x449 = -1;
	uint8_t x450 = 59U;
	static volatile int8_t x451 = -2;
	volatile uint16_t x452 = UINT16_MAX;
	int32_t t62 = 9295221;

	t62 = (x449*(x450+(x451*x452)));

	if (t62 != 131011) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x469 = 1720901LLU;
	uint64_t x470 = 3957LLU;
	int64_t x471 = -431662510134259LL;
	int64_t x472 = -1LL;
	uint64_t t63 = 20LLU;

	t63 = (x469*(x470+(x471*x472)));

	if (t63 != 4978682410983987976LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x473 = INT32_MIN;
	int32_t x474 = INT32_MIN;
	uint64_t x475 = UINT64_MAX;
	int8_t x476 = INT8_MAX;

	t64 = (x473*(x474+(x475*x476)));

	if (t64 != 4611686291157811200LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x489 = 55574329U;
	volatile int32_t x490 = 15421;
	static int8_t x491 = INT8_MIN;
	int8_t x492 = INT8_MIN;
	static volatile uint32_t t65 = 20202919U;

	t65 = (x489*(x490+(x491*x492)));

	if (t65 != 2309975189U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x493 = INT16_MIN;
	static int8_t x494 = -1;
	static int8_t x495 = INT8_MIN;

	t66 = (x493*(x494+(x495*x496)));

	if (t66 != -4161536) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x497 = UINT64_MAX;
	static uint8_t x498 = UINT8_MAX;
	uint64_t x500 = UINT64_MAX;
	uint64_t t67 = 1161785012335LLU;

	t67 = (x497*(x498+(x499*x500)));

	if (t67 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x505 = 10395623LLU;
	uint32_t x507 = 3240855U;
	int32_t x508 = INT32_MIN;
	volatile uint64_t t68 = 51129064915LLU;

	t68 = (x505*(x506+(x507*x508)));

	if (t68 != 22324421255124464LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x519 = 5;
	static volatile int64_t x520 = -2LL;
	int64_t t69 = -90LL;

	t69 = (x517*(x518+(x519*x520)));

	if (t69 != -26LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x526 = -1LL;
	int16_t x527 = -26;
	static int8_t x528 = 11;
	int64_t t70 = -39162288LL;

	t70 = (x525*(x526+(x527*x528)));

	if (t70 != -36449LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x529 = INT16_MIN;
	int64_t x532 = -325190328LL;
	int64_t t71 = -949160336LL;

	t71 = (x529*(x530+(x531*x532)));

	if (t71 != 3635204500133806080LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x543 = 0;
	uint8_t x544 = UINT8_MAX;
	uint64_t t72 = 952800472625015LLU;

	t72 = (x541*(x542+(x543*x544)));

	if (t72 != 987842477850LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x545 = INT8_MIN;
	static uint16_t x546 = UINT16_MAX;
	volatile int64_t x547 = -8LL;
	int32_t x548 = -1;
	static int64_t t73 = 9779614702LL;

	t73 = (x545*(x546+(x547*x548)));

	if (t73 != -8389504LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x549 = -1;
	int32_t x550 = INT32_MIN;
	volatile int32_t t74 = -67714;

	t74 = (x549*(x550+(x551*x552)));

	if (t74 != 2147385347) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x561 = -317;
	static int16_t x563 = 501;
	static uint64_t x564 = UINT64_MAX;
	uint64_t t75 = 7075434LLU;

	t75 = (x561*(x562+(x563*x564)));

	if (t75 != 158500LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x566 = 253LLU;
	uint64_t t76 = 5013426387LLU;

	t76 = (x565*(x566+(x567*x568)));

	if (t76 != 442752LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x569 = UINT64_MAX;
	volatile int8_t x570 = INT8_MAX;
	int8_t x571 = INT8_MIN;

	t77 = (x569*(x570+(x571*x572)));

	if (t77 != 8388353LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x573 = -1;
	static uint32_t t78 = 16685U;

	t78 = (x573*(x574+(x575*x576)));

	if (t78 != 971U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x578 = -1LL;
	uint64_t x579 = 1955957609471324LLU;
	static uint64_t x580 = 417981207649LLU;
	volatile uint64_t t79 = 16265229LLU;

	t79 = (x577*(x578+(x579*x580)));

	if (t79 != 10890222947927064576LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x581 = 13996U;
	volatile int16_t x583 = INT16_MIN;
	volatile uint32_t t80 = 1670U;

	t80 = (x581*(x582+(x583*x584)));

	if (t80 != 1777492U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x585 = 64666444497605LLU;
	int32_t x586 = -1;
	volatile int16_t x587 = 12909;
	static uint8_t x588 = 7U;
	uint64_t t81 = 18251317LLU;

	t81 = (x585*(x586+(x587*x588)));

	if (t81 != 5843389257692583010LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x596 = 0U;
	uint32_t t82 = 32580751U;

	t82 = (x593*(x594+(x595*x596)));

	if (t82 != 32768U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x597 = INT8_MAX;
	int16_t x598 = INT16_MIN;
	uint32_t x599 = 57U;
	int64_t t83 = -986437LL;

	t83 = (x597*(x598+(x599*x600)));

	if (t83 != 2732542414LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x605 = 6;
	int64_t x606 = INT64_MIN;
	static volatile int16_t x608 = INT16_MAX;

	t84 = (x605*(x606+(x607*x608)));

	if (t84 != 750464829156LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x614 = 0;
	volatile uint32_t x615 = UINT32_MAX;
	static uint32_t t85 = 54279278U;

	t85 = (x613*(x614+(x615*x616)));

	if (t85 != 4290870276U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x621 = INT8_MAX;
	uint8_t x622 = 0U;
	static int64_t x624 = 5927821LL;
	volatile int64_t t86 = 58781723797358LL;

	t86 = (x621*(x622+(x623*x624)));

	if (t86 != -24668840493056LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x627 = -1;
	static int8_t x628 = INT8_MIN;
	int32_t t87 = -1;

	t87 = (x625*(x626+(x627*x628)));

	if (t87 != 13788) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x629 = 5U;
	uint8_t x631 = 0U;
	volatile int32_t t88 = 120764;

	t88 = (x629*(x630+(x631*x632)));

	if (t88 != -640) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x637 = -1970907291196LL;
	volatile int8_t x638 = 1;
	static int8_t x639 = -10;
	static volatile int16_t x640 = INT16_MAX;
	volatile int64_t t89 = 7444LL;

	t89 = (x637*(x638+(x639*x640)));

	if (t89 != 645805221198902124LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x650 = UINT32_MAX;
	uint64_t x651 = 121581643514384LLU;
	int32_t x652 = -1;

	t90 = (x649*(x650+(x651*x652)));

	if (t90 != 7073416961191586403LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x653 = INT16_MIN;
	uint8_t x654 = UINT8_MAX;
	volatile int8_t x655 = -1;
	uint8_t x656 = UINT8_MAX;
	volatile int32_t t91 = -494049;

	t91 = (x653*(x654+(x655*x656)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x658 = 444U;
	static uint16_t x659 = 967U;
	volatile int16_t x660 = 570;

	t92 = (x657*(x658+(x659*x660)));

	if (t92 != 12687582) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x661 = 124927002;
	int32_t x662 = 17;
	int64_t x663 = -424509LL;
	static uint64_t x664 = 521533734892001LLU;
	static volatile uint64_t t93 = 105321046LLU;

	t93 = (x661*(x662+(x663*x664)));

	if (t93 != 2393788393387674056LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x665 = 8U;
	int16_t x666 = -24;
	static int64_t x668 = -1LL;
	int64_t t94 = -3777255LL;

	t94 = (x665*(x666+(x667*x668)));

	if (t94 != 832LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x669 = -1;
	static int8_t x670 = 0;
	uint32_t x671 = 2U;
	int32_t x672 = 61637925;
	uint32_t t95 = 82648U;

	t95 = (x669*(x670+(x671*x672)));

	if (t95 != 4171691446U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x677 = INT16_MIN;
	static int16_t x678 = -1;
	int8_t x679 = 10;
	int32_t t96 = -1725082;

	t96 = (x677*(x678+(x679*x680)));

	if (t96 != 2654208) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x689 = -1LL;
	uint32_t x690 = 1U;
	static uint16_t x691 = 1U;
	volatile int8_t x692 = -1;
	int64_t t97 = -127LL;

	t97 = (x689*(x690+(x691*x692)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x693 = 115608546LLU;
	int8_t x694 = -1;
	int64_t x695 = -1LL;
	volatile int8_t x696 = -1;
	volatile uint64_t t98 = 10772420238LLU;

	t98 = (x693*(x694+(x695*x696)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x705 = INT16_MAX;
	int16_t x706 = -1;
	int64_t x707 = INT64_MAX;
	uint8_t x708 = 0U;

	t99 = (x705*(x706+(x707*x708)));

	if (t99 != -32767LL) { NG(); } else { ; }
	
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


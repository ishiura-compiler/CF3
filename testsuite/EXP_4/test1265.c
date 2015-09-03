#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 1;
volatile int64_t t1 = -124029LL;
int16_t x29 = -1;
volatile uint32_t x32 = 2957894U;
uint16_t x65 = 7U;
volatile uint32_t x78 = 16U;
int16_t x83 = INT16_MIN;
static volatile int32_t t8 = 147;
static uint8_t x102 = UINT8_MAX;
volatile uint16_t x107 = 381U;
volatile uint64_t x114 = UINT64_MAX;
uint16_t x116 = 2122U;
int64_t x141 = 51258LL;
static int64_t x144 = INT64_MIN;
uint64_t x150 = UINT64_MAX;
volatile uint64_t t16 = 897706486LLU;
static int8_t x157 = INT8_MAX;
volatile uint64_t x160 = 16227282328102673LLU;
volatile int32_t t17 = 5111;
uint8_t x165 = 7U;
int32_t x178 = INT32_MAX;
volatile int16_t x180 = INT16_MAX;
volatile int32_t t22 = -11856;
uint16_t x199 = 424U;
int64_t t24 = -943538139441LL;
volatile int64_t t25 = -1612816755247LL;
uint64_t t26 = 44228625900512829LLU;
static int32_t x224 = -1;
int16_t x236 = 25;
int8_t x243 = INT8_MIN;
int32_t t30 = 256;
int16_t x245 = 2754;
int32_t t32 = 17;
uint64_t t33 = 53932597981047LLU;
int32_t x268 = INT32_MAX;
uint32_t t35 = 100U;
int64_t x273 = INT64_MIN;
static uint32_t x282 = 3U;
uint8_t x288 = UINT8_MAX;
int32_t t38 = -28504;
uint32_t t39 = 15303U;
uint64_t x293 = 38760LLU;
static uint16_t x294 = 10698U;
uint8_t x303 = UINT8_MAX;
int32_t x304 = -1;
uint8_t x308 = 58U;
static int64_t x309 = 3140311978785866LL;
static int8_t x311 = 1;
uint16_t x317 = 2182U;
int32_t x319 = 29;
uint32_t x321 = UINT32_MAX;
volatile int32_t x322 = INT32_MAX;
volatile int64_t x323 = INT64_MAX;
volatile int32_t t48 = -2;
int32_t x343 = INT32_MAX;
volatile uint64_t x369 = 301111LLU;
volatile int64_t x379 = -34578515LL;
volatile uint64_t t52 = 21501439417435584LLU;
uint64_t x394 = 2145418320062860LLU;
volatile int16_t x448 = -1;
volatile uint16_t x461 = UINT16_MAX;
uint64_t x464 = UINT64_MAX;
int32_t x476 = -701266;
static uint64_t x481 = 27174272LLU;
uint64_t x483 = 2LLU;
static uint8_t x492 = UINT8_MAX;
volatile int64_t x513 = INT64_MAX;
uint8_t x515 = UINT8_MAX;
int64_t t64 = 43570051LL;
uint8_t x522 = 5U;
int16_t x526 = 11;
int32_t x528 = 6;
static int32_t t67 = 25117300;
static uint64_t t68 = 31467LLU;
int32_t t71 = 214;
int16_t x569 = 87;
volatile int8_t x572 = 0;
volatile int8_t x575 = -11;
volatile int64_t x577 = INT64_MIN;
static int64_t x589 = INT64_MAX;
int64_t t76 = -8251376208739LL;
int64_t x594 = 211800078090823676LL;
uint16_t x600 = UINT16_MAX;
uint64_t t79 = 214197959441LLU;
static int16_t x618 = INT16_MAX;
int16_t x628 = -1;
volatile uint64_t t82 = 57LLU;
int64_t x631 = -2133087073568977926LL;
volatile uint16_t x639 = UINT16_MAX;
static int32_t t84 = -3;
int32_t t85 = 105;
int64_t x651 = 124844LL;
volatile int64_t t87 = -1175013433LL;
static volatile int32_t x656 = INT32_MIN;
uint8_t x675 = UINT8_MAX;
uint64_t t89 = 660002929LLU;
volatile int64_t x679 = 1831852LL;
volatile uint64_t x706 = UINT64_MAX;
uint8_t x708 = UINT8_MAX;
uint64_t t94 = 118LLU;
static int16_t x725 = -1;
uint64_t x726 = UINT64_MAX;
volatile int32_t x740 = INT32_MIN;
uint16_t x742 = 31815U;
int8_t x751 = INT8_MIN;


void f0(void) {
	int8_t x13 = INT8_MIN;
	uint8_t x14 = 4U;
	int16_t x15 = INT16_MAX;
	uint32_t x16 = UINT32_MAX;

	t0 = (x13/(x14>>(x15==x16)));

	if (t0 != -32) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = INT64_MAX;
	int32_t x18 = INT32_MAX;
	static int8_t x19 = INT8_MIN;
	int16_t x20 = INT16_MIN;

	t1 = (x17/(x18>>(x19==x20)));

	if (t1 != 4294967298LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = INT64_MAX;
	uint16_t x22 = 48U;
	volatile int16_t x23 = -1;
	int32_t x24 = INT32_MAX;
	volatile int64_t t2 = -176333716358LL;

	t2 = (x21/(x22>>(x23==x24)));

	if (t2 != 192153584101141162LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x30 = INT16_MAX;
	uint8_t x31 = 30U;
	volatile int32_t t3 = 81389;

	t3 = (x29/(x30>>(x31==x32)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x49 = -1;
	int64_t x50 = 114LL;
	static volatile int64_t x51 = -1LL;
	int32_t x52 = INT32_MIN;
	static int64_t t4 = -43369066891915775LL;

	t4 = (x49/(x50>>(x51==x52)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x57 = INT16_MAX;
	volatile int8_t x58 = 28;
	int64_t x59 = INT64_MIN;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t5 = -1;

	t5 = (x57/(x58>>(x59==x60)));

	if (t5 != 1170) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x66 = 3503;
	int32_t x67 = 1765;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t6 = -2396920;

	t6 = (x65/(x66>>(x67==x68)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x77 = INT64_MIN;
	int8_t x79 = INT8_MIN;
	uint16_t x80 = UINT16_MAX;
	int64_t t7 = 81728753059186LL;

	t7 = (x77/(x78>>(x79==x80)));

	if (t7 != -576460752303423488LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x81 = INT8_MAX;
	volatile int8_t x82 = 1;
	static int32_t x84 = -1;

	t8 = (x81/(x82>>(x83==x84)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x89 = 1882329794276672LLU;
	static uint8_t x90 = 90U;
	static int64_t x91 = -1LL;
	static volatile int8_t x92 = -5;
	uint64_t t9 = 6195901223LLU;

	t9 = (x89/(x90>>(x91==x92)));

	if (t9 != 20914775491963LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x101 = 17765876U;
	int32_t x103 = INT32_MAX;
	int8_t x104 = 0;
	uint32_t t10 = 143955258U;

	t10 = (x101/(x102>>(x103==x104)));

	if (t10 != 69670U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x106 = 6U;
	int16_t x108 = 858;
	uint32_t t11 = 4558U;

	t11 = (x105/(x106>>(x107==x108)));

	if (t11 != 715827861U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x113 = 24;
	int64_t x115 = -1172836579093LL;
	volatile uint64_t t12 = 21316526769600252LLU;

	t12 = (x113/(x114>>(x115==x116)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x129 = UINT16_MAX;
	uint16_t x130 = UINT16_MAX;
	uint64_t x131 = 861387330528556216LLU;
	static volatile int8_t x132 = INT8_MAX;
	volatile int32_t t13 = -126;

	t13 = (x129/(x130>>(x131==x132)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x137 = -1;
	int8_t x138 = 27;
	static int16_t x139 = INT16_MIN;
	volatile uint16_t x140 = 3U;
	int32_t t14 = -104544;

	t14 = (x137/(x138>>(x139==x140)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x142 = 28;
	int64_t x143 = -99352210LL;
	volatile int64_t t15 = 17296715929383LL;

	t15 = (x141/(x142>>(x143==x144)));

	if (t15 != 1830LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x149 = INT32_MAX;
	uint16_t x151 = 16U;
	static uint64_t x152 = 6075475214445LLU;

	t16 = (x149/(x150>>(x151==x152)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x158 = UINT8_MAX;
	volatile int64_t x159 = INT64_MAX;

	t17 = (x157/(x158>>(x159==x160)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x161 = INT32_MIN;
	uint16_t x162 = UINT16_MAX;
	uint16_t x163 = 17414U;
	int16_t x164 = 19;
	volatile int32_t t18 = 1743;

	t18 = (x161/(x162>>(x163==x164)));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x166 = 408U;
	uint16_t x167 = UINT16_MAX;
	uint16_t x168 = UINT16_MAX;
	uint32_t t19 = 3U;

	t19 = (x165/(x166>>(x167==x168)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x177 = -2;
	volatile int16_t x179 = -13412;
	volatile int32_t t20 = 67683;

	t20 = (x177/(x178>>(x179==x180)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x181 = INT8_MIN;
	int32_t x182 = 8163;
	int32_t x183 = -1;
	int32_t x184 = INT32_MIN;
	volatile int32_t t21 = 115839;

	t21 = (x181/(x182>>(x183==x184)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x193 = -13;
	static int16_t x194 = INT16_MAX;
	int16_t x195 = INT16_MAX;
	volatile int16_t x196 = 0;

	t22 = (x193/(x194>>(x195==x196)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x197 = INT32_MAX;
	uint16_t x198 = 31U;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t23 = -6405;

	t23 = (x197/(x198>>(x199==x200)));

	if (t23 != 69273666) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x201 = INT8_MAX;
	int64_t x202 = 342801534970906LL;
	int64_t x203 = INT64_MAX;
	int64_t x204 = INT64_MIN;

	t24 = (x201/(x202>>(x203==x204)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x205 = -1;
	static volatile int64_t x206 = 2244221682539884627LL;
	int32_t x207 = -1;
	uint32_t x208 = 0U;

	t25 = (x205/(x206>>(x207==x208)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x213 = INT64_MIN;
	static uint64_t x214 = 7838LLU;
	static int8_t x215 = INT8_MIN;
	static uint16_t x216 = 3U;

	t26 = (x213/(x214>>(x215==x216)));

	if (t26 != 1176750706411683LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x221 = UINT16_MAX;
	volatile int64_t x222 = INT64_MAX;
	int32_t x223 = -188283;
	volatile int64_t t27 = 113LL;

	t27 = (x221/(x222>>(x223==x224)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x229 = INT16_MIN;
	uint32_t x230 = UINT32_MAX;
	int64_t x231 = 990790424LL;
	int16_t x232 = -1;
	uint32_t t28 = 11782548U;

	t28 = (x229/(x230>>(x231==x232)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x233 = INT16_MAX;
	int16_t x234 = INT16_MAX;
	uint32_t x235 = 28U;
	volatile int32_t t29 = 3534407;

	t29 = (x233/(x234>>(x235==x236)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x241 = INT16_MIN;
	static volatile int16_t x242 = 3338;
	int32_t x244 = 23092;

	t30 = (x241/(x242>>(x243==x244)));

	if (t30 != -9) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x246 = INT64_MAX;
	int16_t x247 = -1;
	uint16_t x248 = 5533U;
	volatile int64_t t31 = -59015635806430858LL;

	t31 = (x245/(x246>>(x247==x248)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x257 = 0U;
	uint16_t x258 = 887U;
	static volatile int16_t x259 = INT16_MAX;
	uint32_t x260 = UINT32_MAX;

	t32 = (x257/(x258>>(x259==x260)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x261 = 113749720786418106LLU;
	uint16_t x262 = 7702U;
	volatile uint64_t x263 = 17203LLU;
	uint64_t x264 = 3LLU;

	t33 = (x261/(x262>>(x263==x264)));

	if (t33 != 14768854945003LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x265 = INT64_MIN;
	volatile uint16_t x266 = 3875U;
	int64_t x267 = INT64_MAX;
	int64_t t34 = 3738422923329LL;

	t34 = (x265/(x266>>(x267==x268)));

	if (t34 != -2380225041768974LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x269 = -1;
	uint32_t x270 = 259364U;
	static uint16_t x271 = UINT16_MAX;
	static int64_t x272 = INT64_MAX;

	t35 = (x269/(x270>>(x271==x272)));

	if (t35 != 16559U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x274 = INT32_MAX;
	uint64_t x275 = 238172414227764LLU;
	volatile int64_t x276 = INT64_MIN;
	static int64_t t36 = 0LL;

	t36 = (x273/(x274>>(x275==x276)));

	if (t36 != -4294967298LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x281 = 1U;
	int8_t x283 = 0;
	static int64_t x284 = 31205794LL;
	volatile uint32_t t37 = 39314U;

	t37 = (x281/(x282>>(x283==x284)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x285 = 1;
	static int16_t x286 = INT16_MAX;
	static uint32_t x287 = 13385U;

	t38 = (x285/(x286>>(x287==x288)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x289 = 10356526U;
	int16_t x290 = INT16_MAX;
	int32_t x291 = -1914527;
	int16_t x292 = -1;

	t39 = (x289/(x290>>(x291==x292)));

	if (t39 != 316U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x295 = UINT64_MAX;
	static int8_t x296 = -1;
	volatile uint64_t t40 = 2916155596827473347LLU;

	t40 = (x293/(x294>>(x295==x296)));

	if (t40 != 7LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x297 = UINT64_MAX;
	uint32_t x298 = 205180U;
	static int64_t x299 = -284205909509594013LL;
	static volatile int8_t x300 = -1;
	volatile uint64_t t41 = 7840422627735468945LLU;

	t41 = (x297/(x298>>(x299==x300)));

	if (t41 != 89905176302317LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x301 = 25U;
	int8_t x302 = INT8_MAX;
	uint32_t t42 = 19U;

	t42 = (x301/(x302>>(x303==x304)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x305 = 21U;
	int16_t x306 = INT16_MAX;
	int8_t x307 = INT8_MIN;
	volatile int32_t t43 = 8;

	t43 = (x305/(x306>>(x307==x308)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x310 = 3481LL;
	volatile int16_t x312 = INT16_MAX;
	int64_t t44 = 0LL;

	t44 = (x309/(x310>>(x311==x312)));

	if (t44 != 902129267103LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x318 = 22897920281141LLU;
	volatile uint8_t x320 = UINT8_MAX;
	volatile uint64_t t45 = 4159535992855067239LLU;

	t45 = (x317/(x318>>(x319==x320)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x324 = INT64_MIN;
	volatile uint32_t t46 = 1435U;

	t46 = (x321/(x322>>(x323==x324)));

	if (t46 != 2U) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x333 = INT32_MIN;
	int32_t x334 = 5404;
	uint16_t x335 = UINT16_MAX;
	int8_t x336 = INT8_MAX;
	volatile int32_t t47 = 7442647;

	t47 = (x333/(x334>>(x335==x336)));

	if (t47 != -397387) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x337 = INT16_MIN;
	uint8_t x338 = UINT8_MAX;
	uint64_t x339 = 3815357008LLU;
	uint16_t x340 = UINT16_MAX;

	t48 = (x337/(x338>>(x339==x340)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x341 = 22U;
	volatile int64_t x342 = INT64_MAX;
	int32_t x344 = INT32_MIN;
	static volatile int64_t t49 = 72855321LL;

	t49 = (x341/(x342>>(x343==x344)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x365 = 6;
	int8_t x366 = 11;
	int64_t x367 = -108LL;
	int16_t x368 = INT16_MIN;
	volatile int32_t t50 = -1;

	t50 = (x365/(x366>>(x367==x368)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x370 = INT32_MAX;
	volatile uint16_t x371 = UINT16_MAX;
	static int32_t x372 = 24;
	uint64_t t51 = 4757LLU;

	t51 = (x369/(x370>>(x371==x372)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x377 = INT16_MAX;
	uint64_t x378 = UINT64_MAX;
	volatile int32_t x380 = INT32_MAX;

	t52 = (x377/(x378>>(x379==x380)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x393 = INT16_MIN;
	int8_t x395 = INT8_MAX;
	int8_t x396 = 34;
	uint64_t t53 = 1844LLU;

	t53 = (x393/(x394>>(x395==x396)));

	if (t53 != 8598LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x397 = INT32_MAX;
	uint16_t x398 = UINT16_MAX;
	uint16_t x399 = UINT16_MAX;
	int64_t x400 = INT64_MIN;
	volatile int32_t t54 = 17668;

	t54 = (x397/(x398>>(x399==x400)));

	if (t54 != 32768) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = 8351;
	int32_t x407 = 63;
	volatile int64_t x408 = 267781582440339LL;
	volatile int32_t t55 = -7;

	t55 = (x405/(x406>>(x407==x408)));

	if (t55 != -3) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x417 = 1U;
	uint64_t x418 = 1189216533472560866LLU;
	uint16_t x419 = UINT16_MAX;
	volatile int32_t x420 = INT32_MIN;
	volatile uint64_t t56 = 147499LLU;

	t56 = (x417/(x418>>(x419==x420)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x437 = 0U;
	int8_t x438 = 2;
	int32_t x439 = INT32_MIN;
	int16_t x440 = 126;
	volatile int32_t t57 = 97;

	t57 = (x437/(x438>>(x439==x440)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x445 = 7879U;
	int16_t x446 = INT16_MAX;
	int64_t x447 = INT64_MIN;
	int32_t t58 = -40702;

	t58 = (x445/(x446>>(x447==x448)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x462 = UINT64_MAX;
	volatile int16_t x463 = INT16_MIN;
	uint64_t t59 = 1228101060837675551LLU;

	t59 = (x461/(x462>>(x463==x464)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x473 = INT64_MAX;
	uint64_t x474 = 275LLU;
	int32_t x475 = INT32_MAX;
	volatile uint64_t t60 = 1073LLU;

	t60 = (x473/(x474>>(x475==x476)));

	if (t60 != 33539534679471912LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x477 = INT32_MAX;
	uint16_t x478 = 6U;
	uint16_t x479 = UINT16_MAX;
	int16_t x480 = -1;
	static volatile int32_t t61 = 23;

	t61 = (x477/(x478>>(x479==x480)));

	if (t61 != 357913941) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x482 = UINT64_MAX;
	int8_t x484 = INT8_MIN;
	static volatile uint64_t t62 = 39295885006897540LLU;

	t62 = (x481/(x482>>(x483==x484)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x489 = 309U;
	static uint8_t x490 = UINT8_MAX;
	uint64_t x491 = 869432737790543LLU;
	volatile int32_t t63 = 14;

	t63 = (x489/(x490>>(x491==x492)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x514 = UINT16_MAX;
	volatile int64_t x516 = -25260LL;

	t64 = (x513/(x514>>(x515==x516)));

	if (t64 != 140739635871744LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x521 = UINT64_MAX;
	uint64_t x523 = UINT64_MAX;
	static uint16_t x524 = UINT16_MAX;
	volatile uint64_t t65 = 313130904703LLU;

	t65 = (x521/(x522>>(x523==x524)));

	if (t65 != 3689348814741910323LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x525 = INT8_MIN;
	int64_t x527 = 0LL;
	int32_t t66 = -1097580;

	t66 = (x525/(x526>>(x527==x528)));

	if (t66 != -11) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x529 = UINT16_MAX;
	uint16_t x530 = 7U;
	int8_t x531 = -1;
	int16_t x532 = INT16_MAX;

	t67 = (x529/(x530>>(x531==x532)));

	if (t67 != 9362) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x533 = 1598LLU;
	uint32_t x534 = 1479963U;
	uint32_t x535 = 25U;
	int64_t x536 = -1053198728909LL;

	t68 = (x533/(x534>>(x535==x536)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x537 = 4160U;
	static volatile int16_t x538 = 12;
	int8_t x539 = INT8_MAX;
	int64_t x540 = INT64_MIN;
	int32_t t69 = -998;

	t69 = (x537/(x538>>(x539==x540)));

	if (t69 != 346) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x541 = 2589285535617LL;
	int32_t x542 = 154288936;
	static uint16_t x543 = 1U;
	uint8_t x544 = 0U;
	static volatile int64_t t70 = -195819789LL;

	t70 = (x541/(x542>>(x543==x544)));

	if (t70 != 16782LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x561 = 10388955;
	uint16_t x562 = 123U;
	uint32_t x563 = 413717356U;
	uint16_t x564 = 63U;

	t71 = (x561/(x562>>(x563==x564)));

	if (t71 != 84463) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x570 = 12;
	int16_t x571 = -1;
	volatile int32_t t72 = -49709;

	t72 = (x569/(x570>>(x571==x572)));

	if (t72 != 7) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x573 = INT32_MAX;
	volatile uint16_t x574 = UINT16_MAX;
	int8_t x576 = INT8_MIN;
	static int32_t t73 = -2;

	t73 = (x573/(x574>>(x575==x576)));

	if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x578 = INT16_MAX;
	static int16_t x579 = INT16_MAX;
	uint32_t x580 = 72000U;
	int64_t t74 = -117LL;

	t74 = (x577/(x578>>(x579==x580)));

	if (t74 != -281483566907400LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x585 = INT32_MIN;
	int8_t x586 = INT8_MAX;
	int16_t x587 = INT16_MAX;
	uint16_t x588 = 275U;
	volatile int32_t t75 = 1269;

	t75 = (x585/(x586>>(x587==x588)));

	if (t75 != -16909320) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x590 = INT32_MAX;
	uint16_t x591 = 55U;
	uint16_t x592 = UINT16_MAX;

	t76 = (x589/(x590>>(x591==x592)));

	if (t76 != 4294967298LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x593 = 687U;
	uint16_t x595 = 73U;
	uint8_t x596 = 2U;
	static int64_t t77 = 4439024LL;

	t77 = (x593/(x594>>(x595==x596)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x597 = 87U;
	uint16_t x598 = 1U;
	static int32_t x599 = -1;
	int32_t t78 = -408;

	t78 = (x597/(x598>>(x599==x600)));

	if (t78 != 87) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x609 = 47;
	uint64_t x610 = 7500021609LLU;
	int16_t x611 = INT16_MAX;
	int16_t x612 = 10;

	t79 = (x609/(x610>>(x611==x612)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x617 = 47459142U;
	static volatile int16_t x619 = -1;
	int16_t x620 = INT16_MIN;
	static uint32_t t80 = 13U;

	t80 = (x617/(x618>>(x619==x620)));

	if (t80 != 1448U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x621 = INT16_MIN;
	volatile int8_t x622 = INT8_MAX;
	static int32_t x623 = INT32_MIN;
	volatile uint32_t x624 = UINT32_MAX;
	int32_t t81 = 81158116;

	t81 = (x621/(x622>>(x623==x624)));

	if (t81 != -258) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x625 = INT32_MIN;
	static volatile uint64_t x626 = UINT64_MAX;
	volatile int8_t x627 = INT8_MIN;

	t82 = (x625/(x626>>(x627==x628)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x629 = INT32_MIN;
	uint32_t x630 = UINT32_MAX;
	int64_t x632 = 231633412304824LL;
	uint32_t t83 = 23243205U;

	t83 = (x629/(x630>>(x631==x632)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x637 = 25U;
	int8_t x638 = INT8_MAX;
	uint8_t x640 = 31U;

	t84 = (x637/(x638>>(x639==x640)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x641 = 54010634;
	volatile uint8_t x642 = 10U;
	static int16_t x643 = INT16_MIN;
	int8_t x644 = -28;

	t85 = (x641/(x642>>(x643==x644)));

	if (t85 != 5401063) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x645 = 12019;
	uint32_t x646 = 414257442U;
	int32_t x647 = INT32_MAX;
	volatile int32_t x648 = INT32_MIN;
	volatile uint32_t t86 = 287U;

	t86 = (x645/(x646>>(x647==x648)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x649 = -1LL;
	int64_t x650 = INT64_MAX;
	volatile uint8_t x652 = 57U;

	t87 = (x649/(x650>>(x651==x652)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x653 = INT32_MIN;
	static uint8_t x654 = 17U;
	static uint8_t x655 = 29U;
	volatile int32_t t88 = 644991192;

	t88 = (x653/(x654>>(x655==x656)));

	if (t88 != -126322567) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x673 = 44504U;
	uint64_t x674 = 281906LLU;
	uint8_t x676 = 0U;

	t89 = (x673/(x674>>(x675==x676)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x677 = -824006276LL;
	int32_t x678 = 94849;
	static int16_t x680 = INT16_MAX;
	int64_t t90 = -2177475641777LL;

	t90 = (x677/(x678>>(x679==x680)));

	if (t90 != -8687LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x685 = 74190736526LL;
	uint16_t x686 = 1U;
	int64_t x687 = INT64_MAX;
	uint8_t x688 = 18U;
	volatile int64_t t91 = -330518035LL;

	t91 = (x685/(x686>>(x687==x688)));

	if (t91 != 74190736526LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x697 = INT64_MAX;
	uint32_t x698 = 34U;
	static int16_t x699 = 3;
	uint8_t x700 = 19U;
	static int64_t t92 = 1931546LL;

	t92 = (x697/(x698>>(x699==x700)));

	if (t92 != 271275648142787523LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x701 = 157951788710225LLU;
	int32_t x702 = 4;
	volatile int16_t x703 = INT16_MIN;
	int8_t x704 = INT8_MIN;
	uint64_t t93 = 44LLU;

	t93 = (x701/(x702>>(x703==x704)));

	if (t93 != 39487947177556LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x705 = 163;
	volatile uint8_t x707 = 0U;

	t94 = (x705/(x706>>(x707==x708)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x713 = 8U;
	volatile int16_t x714 = INT16_MAX;
	uint16_t x715 = UINT16_MAX;
	uint8_t x716 = 25U;
	static int32_t t95 = -580722383;

	t95 = (x713/(x714>>(x715==x716)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x727 = INT32_MIN;
	uint8_t x728 = 102U;
	static volatile uint64_t t96 = 446726965623037LLU;

	t96 = (x725/(x726>>(x727==x728)));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x737 = UINT32_MAX;
	volatile uint64_t x738 = 12289868963440102LLU;
	int64_t x739 = -1847737636524207140LL;
	volatile uint64_t t97 = 352251726423482353LLU;

	t97 = (x737/(x738>>(x739==x740)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x741 = -13372;
	int32_t x743 = INT32_MIN;
	uint32_t x744 = 62090U;
	int32_t t98 = 92669;

	t98 = (x741/(x742>>(x743==x744)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x749 = -472541;
	volatile uint8_t x750 = UINT8_MAX;
	int8_t x752 = -3;
	int32_t t99 = -8;

	t99 = (x749/(x750>>(x751==x752)));

	if (t99 != -1853) { NG(); } else { ; }
	
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


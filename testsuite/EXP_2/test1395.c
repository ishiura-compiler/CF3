#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = INT32_MIN;
uint8_t x11 = 15U;
volatile int64_t t1 = -16260652565058945LL;
static uint8_t x13 = 102U;
static int64_t x16 = -1LL;
static int16_t x30 = INT16_MAX;
volatile int32_t x31 = INT32_MAX;
static int32_t x37 = 86;
uint8_t x38 = 24U;
int8_t x52 = INT8_MIN;
uint32_t x58 = 91U;
int8_t x78 = -2;
int32_t t13 = -14157;
int32_t x98 = 0;
int32_t x100 = INT32_MIN;
int8_t x103 = INT8_MIN;
int8_t x108 = -6;
uint32_t x113 = UINT32_MAX;
volatile int32_t x124 = 1;
int32_t t21 = 597;
volatile int16_t x138 = -1;
int8_t x140 = INT8_MIN;
int64_t x153 = INT64_MIN;
volatile uint8_t x155 = 6U;
uint8_t x180 = 3U;
volatile int32_t t28 = -839;
volatile int16_t x201 = -1;
static int64_t x202 = INT64_MIN;
int64_t t30 = -890022279231LL;
int16_t x239 = -1456;
volatile int8_t x242 = 0;
int8_t x243 = 17;
int16_t x254 = -1;
int64_t x263 = -1LL;
int32_t t35 = -1171168;
int8_t x277 = -1;
int32_t t36 = 3;
static int32_t x284 = -291;
uint64_t x297 = 728167LLU;
uint8_t x300 = 5U;
int16_t x311 = INT16_MAX;
volatile uint64_t x319 = UINT64_MAX;
int32_t x320 = INT32_MIN;
uint32_t x325 = UINT32_MAX;
uint8_t x370 = 18U;
int8_t x386 = -1;
int16_t x405 = INT16_MIN;
static uint32_t x406 = 2U;
volatile uint16_t x407 = 12U;
uint8_t x415 = UINT8_MAX;
int64_t x421 = -1LL;
static int8_t x422 = 1;
int64_t x443 = 4293502655003746LL;
static int32_t t55 = -6;
int64_t x450 = -50556820497092705LL;
int16_t x472 = INT16_MAX;
volatile int64_t t60 = 31540495LL;
int32_t x502 = INT32_MAX;
static int8_t x504 = INT8_MIN;
uint64_t t62 = 627011622563LLU;
static int64_t x509 = INT64_MIN;
volatile int8_t x517 = INT8_MIN;
uint16_t x525 = UINT16_MAX;
static int32_t x527 = INT32_MAX;
int8_t x542 = -7;
int64_t t69 = -810786250LL;
volatile int64_t x563 = INT64_MAX;
int64_t x566 = INT64_MIN;
volatile int32_t t73 = -1252984;
volatile int32_t x614 = INT32_MIN;
static volatile uint32_t t75 = 969U;
int32_t x622 = -1;
uint16_t x639 = UINT16_MAX;
uint32_t x640 = UINT32_MAX;
int16_t x668 = INT16_MIN;
static volatile int32_t t80 = -63754212;
int32_t t81 = -1;
int16_t x699 = 111;
int32_t x713 = 926;
int16_t x714 = INT16_MAX;
static uint64_t x715 = 7207155174LLU;
int8_t x717 = INT8_MAX;
volatile int32_t x721 = INT32_MIN;
int8_t x722 = INT8_MIN;
uint64_t x724 = 6262LLU;
volatile int32_t t89 = -457524;
int64_t x753 = -1LL;
static int32_t x754 = -20825744;
volatile uint8_t x767 = 3U;
int16_t x780 = INT16_MAX;
volatile int16_t x781 = 1469;
volatile int16_t x783 = 1746;
static volatile int16_t x785 = INT16_MIN;
static volatile int32_t t97 = 574720;
int32_t x796 = INT32_MIN;
static int64_t x803 = -1LL;


void f0(void) {
	static int8_t x5 = INT8_MIN;
	volatile int8_t x6 = INT8_MIN;
	int8_t x7 = -1;
	int64_t x8 = -1LL;
	int64_t t0 = -6255843LL;

	t0 = ((x5/(x6<x7))/x8);

	if (t0 != 128LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x10 = INT32_MIN;
	static int64_t x12 = -1LL;

	t1 = ((x9/(x10<x11))/x12);

	if (t1 != 2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = -1;
	uint16_t x15 = 2004U;
	static volatile int64_t t2 = -1003120623704751231LL;

	t2 = ((x13/(x14<x15))/x16);

	if (t2 != -102LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MIN;
	uint16_t x26 = UINT16_MAX;
	volatile uint64_t x27 = 54022389001813519LLU;
	uint8_t x28 = 11U;
	int32_t t3 = 1;

	t3 = ((x25/(x26<x27))/x28);

	if (t3 != -11) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = INT16_MIN;
	static volatile uint32_t x32 = 21U;
	static uint32_t t4 = 19108294U;

	t4 = ((x29/(x30<x31))/x32);

	if (t4 != 204520691U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MAX;
	uint64_t x35 = UINT64_MAX;
	int32_t x36 = INT32_MAX;
	volatile int32_t t5 = -313383386;

	t5 = ((x33/(x34<x35))/x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x39 = 3577U;
	volatile uint32_t x40 = UINT32_MAX;
	volatile uint32_t t6 = 8267541U;

	t6 = ((x37/(x38<x39))/x40);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x49 = INT64_MAX;
	static int64_t x50 = -486591688085LL;
	int8_t x51 = 0;
	static int64_t t7 = 212755115504527855LL;

	t7 = ((x49/(x50<x51))/x52);

	if (t7 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x53 = 9U;
	volatile uint64_t x54 = 3LLU;
	int32_t x55 = 18601;
	static uint64_t x56 = 1266791267066774077LLU;
	static volatile uint64_t t8 = 90812779916652LLU;

	t8 = ((x53/(x54<x55))/x56);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = -1;
	int8_t x59 = -1;
	static uint32_t x60 = 1330325U;
	static volatile uint32_t t9 = 123071964U;

	t9 = ((x57/(x58<x59))/x60);

	if (t9 != 3228U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x65 = INT8_MAX;
	uint32_t x66 = 127726694U;
	int16_t x67 = -5718;
	uint32_t x68 = 690581529U;
	volatile uint32_t t10 = 120544U;

	t10 = ((x65/(x66<x67))/x68);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x69 = -1LL;
	int32_t x70 = INT32_MIN;
	int16_t x71 = 0;
	volatile int32_t x72 = INT32_MIN;
	int64_t t11 = -9221647113925142LL;

	t11 = ((x69/(x70<x71))/x72);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x77 = INT16_MIN;
	int8_t x79 = -1;
	uint64_t x80 = 491812961LLU;
	uint64_t t12 = 1854450LLU;

	t12 = ((x77/(x78<x79))/x80);

	if (t12 != 37507641189LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x81 = 1U;
	int8_t x82 = 0;
	uint8_t x83 = 7U;
	volatile int8_t x84 = INT8_MAX;

	t13 = ((x81/(x82<x83))/x84);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x85 = UINT16_MAX;
	int64_t x86 = INT64_MIN;
	static volatile int8_t x87 = -20;
	volatile uint8_t x88 = UINT8_MAX;
	int32_t t14 = -4550946;

	t14 = ((x85/(x86<x87))/x88);

	if (t14 != 257) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x93 = INT64_MAX;
	uint32_t x94 = 989U;
	volatile uint64_t x95 = 227888LLU;
	static volatile int16_t x96 = INT16_MIN;
	volatile int64_t t15 = 35415760LL;

	t15 = ((x93/(x94<x95))/x96);

	if (t15 != -281474976710655LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x97 = -1;
	int16_t x99 = 1;
	static volatile int32_t t16 = 230;

	t16 = ((x97/(x98<x99))/x100);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x101 = INT64_MAX;
	int32_t x102 = INT32_MIN;
	int8_t x104 = INT8_MIN;
	int64_t t17 = -8574023LL;

	t17 = ((x101/(x102<x103))/x104);

	if (t17 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x105 = 974750907;
	static volatile uint16_t x106 = 0U;
	int8_t x107 = 1;
	int32_t t18 = 200858947;

	t18 = ((x105/(x106<x107))/x108);

	if (t18 != -162458484) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x114 = 7;
	int8_t x115 = 33;
	int8_t x116 = 18;
	uint32_t t19 = 32275381U;

	t19 = ((x113/(x114<x115))/x116);

	if (t19 != 238609294U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x117 = -1;
	int64_t x118 = -1464790305436LL;
	int16_t x119 = -3;
	volatile int64_t x120 = -1LL;
	static int64_t t20 = -201690661LL;

	t20 = ((x117/(x118<x119))/x120);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = -12;
	int32_t x122 = -18373;
	int16_t x123 = INT16_MAX;

	t21 = ((x121/(x122<x123))/x124);

	if (t21 != -12) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x129 = INT16_MIN;
	int32_t x130 = -31;
	volatile int32_t x131 = -28;
	uint16_t x132 = 22U;
	int32_t t22 = 20511;

	t22 = ((x129/(x130<x131))/x132);

	if (t22 != -1489) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x137 = 10;
	int64_t x139 = INT64_MAX;
	int32_t t23 = 58;

	t23 = ((x137/(x138<x139))/x140);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x141 = INT8_MAX;
	static int16_t x142 = INT16_MIN;
	static int16_t x143 = -445;
	int8_t x144 = INT8_MIN;
	static int32_t t24 = 158;

	t24 = ((x141/(x142<x143))/x144);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x154 = -2901026410LL;
	static volatile int32_t x156 = INT32_MIN;
	int64_t t25 = -126227018438606LL;

	t25 = ((x153/(x154<x155))/x156);

	if (t25 != 4294967296LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x157 = UINT64_MAX;
	static int32_t x158 = INT32_MIN;
	uint8_t x159 = UINT8_MAX;
	volatile uint16_t x160 = 6U;
	uint64_t t26 = 8LLU;

	t26 = ((x157/(x158<x159))/x160);

	if (t26 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x177 = 255U;
	int32_t x178 = INT32_MIN;
	int8_t x179 = 25;
	uint32_t t27 = 39U;

	t27 = ((x177/(x178<x179))/x180);

	if (t27 != 85U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x181 = 11;
	int32_t x182 = -1765214;
	int16_t x183 = -2221;
	uint16_t x184 = 372U;

	t28 = ((x181/(x182<x183))/x184);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x203 = 3;
	int32_t x204 = INT32_MAX;
	static int32_t t29 = 0;

	t29 = ((x201/(x202<x203))/x204);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x221 = -3934619439679536932LL;
	static uint32_t x222 = 691U;
	int64_t x223 = 5034LL;
	int16_t x224 = -1;

	t30 = ((x221/(x222<x223))/x224);

	if (t30 != 3934619439679536932LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x237 = UINT64_MAX;
	uint32_t x238 = 35U;
	volatile int64_t x240 = INT64_MIN;
	volatile uint64_t t31 = 709298669731LLU;

	t31 = ((x237/(x238<x239))/x240);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x241 = 14U;
	uint16_t x244 = 2U;
	volatile int32_t t32 = 4461894;

	t32 = ((x241/(x242<x243))/x244);

	if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x245 = INT64_MIN;
	uint64_t x246 = 26LLU;
	int32_t x247 = INT32_MIN;
	int32_t x248 = -230421;
	static volatile int64_t t33 = 6510LL;

	t33 = ((x245/(x246<x247))/x248);

	if (t33 != 40028348270577LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x253 = INT64_MIN;
	static int64_t x255 = 61043273004LL;
	uint64_t x256 = 55LLU;
	static uint64_t t34 = 791474451997LLU;

	t34 = ((x253/(x254<x255))/x256);

	if (t34 != 167697673397359560LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x261 = INT16_MIN;
	volatile int16_t x262 = INT16_MIN;
	volatile int32_t x264 = INT32_MIN;

	t35 = ((x261/(x262<x263))/x264);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x278 = -155;
	uint8_t x279 = 53U;
	int32_t x280 = INT32_MIN;

	t36 = ((x277/(x278<x279))/x280);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x281 = INT64_MIN;
	uint8_t x282 = 1U;
	static int32_t x283 = INT32_MAX;
	volatile int64_t t37 = -71486838LL;

	t37 = ((x281/(x282<x283))/x284);

	if (t37 != 31695436552765552LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x285 = 7114U;
	int8_t x286 = INT8_MIN;
	static int32_t x287 = 148;
	uint64_t x288 = UINT64_MAX;
	uint64_t t38 = 1099275263874487LLU;

	t38 = ((x285/(x286<x287))/x288);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x289 = -5722;
	static int64_t x290 = -227040700337012844LL;
	int32_t x291 = -1;
	int64_t x292 = INT64_MIN;
	int64_t t39 = -305720806LL;

	t39 = ((x289/(x290<x291))/x292);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x298 = 45U;
	uint32_t x299 = UINT32_MAX;
	uint64_t t40 = 2661337396051LLU;

	t40 = ((x297/(x298<x299))/x300);

	if (t40 != 145633LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x305 = -1;
	int32_t x306 = -4891;
	uint16_t x307 = 14464U;
	int16_t x308 = -248;
	volatile int32_t t41 = -90547;

	t41 = ((x305/(x306<x307))/x308);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x309 = -1;
	static int8_t x310 = -23;
	int16_t x312 = INT16_MIN;
	volatile int32_t t42 = -237;

	t42 = ((x309/(x310<x311))/x312);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x317 = -1;
	uint8_t x318 = UINT8_MAX;
	static volatile int32_t t43 = 3;

	t43 = ((x317/(x318<x319))/x320);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	int64_t t44 = -4LL;

	t44 = ((x325/(x326<x327))/x328);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x345 = INT32_MIN;
	volatile int8_t x346 = 0;
	static int16_t x347 = 7;
	int16_t x348 = -159;
	static volatile int32_t t45 = 744280609;

	t45 = ((x345/(x346<x347))/x348);

	if (t45 != 13506186) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x349 = 280900021U;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MIN;
	static volatile int8_t x352 = INT8_MAX;
	uint32_t t46 = 2110U;

	t46 = ((x349/(x350<x351))/x352);

	if (t46 != 2211811U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x357 = 220278U;
	uint8_t x358 = UINT8_MAX;
	uint16_t x359 = 1327U;
	uint8_t x360 = 8U;
	volatile uint32_t t47 = 13385U;

	t47 = ((x357/(x358<x359))/x360);

	if (t47 != 27534U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x369 = 3U;
	uint32_t x371 = 4879694U;
	static uint8_t x372 = 20U;
	static int32_t t48 = 15770;

	t48 = ((x369/(x370<x371))/x372);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x385 = INT64_MIN;
	int32_t x387 = INT32_MAX;
	uint64_t x388 = 356LLU;
	static uint64_t t49 = 1209681068LLU;

	t49 = ((x385/(x386<x387))/x388);

	if (t49 != 25908348418131392LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x397 = UINT16_MAX;
	uint16_t x398 = 1U;
	uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MIN;
	static volatile int64_t t50 = -12LL;

	t50 = ((x397/(x398<x399))/x400);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x408 = 1;
	int32_t t51 = -2;

	t51 = ((x405/(x406<x407))/x408);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x409 = -236LL;
	volatile int16_t x410 = INT16_MIN;
	static int32_t x411 = 1016762077;
	volatile uint8_t x412 = UINT8_MAX;
	int64_t t52 = 97LL;

	t52 = ((x409/(x410<x411))/x412);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x413 = UINT8_MAX;
	int64_t x414 = INT64_MIN;
	volatile int16_t x416 = INT16_MIN;
	int32_t t53 = -20165;

	t53 = ((x413/(x414<x415))/x416);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x423 = INT8_MAX;
	int8_t x424 = -36;
	volatile int64_t t54 = 244880705767744110LL;

	t54 = ((x421/(x422<x423))/x424);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x441 = INT16_MIN;
	volatile int32_t x442 = INT32_MIN;
	int8_t x444 = -1;

	t55 = ((x441/(x442<x443))/x444);

	if (t55 != 32768) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x445 = -612LL;
	volatile int8_t x446 = 8;
	uint16_t x447 = UINT16_MAX;
	uint32_t x448 = 2255011U;
	volatile int64_t t56 = 2084665LL;

	t56 = ((x445/(x446<x447))/x448);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x449 = 0U;
	volatile int8_t x451 = -1;
	int16_t x452 = INT16_MIN;
	static volatile int32_t t57 = 13;

	t57 = ((x449/(x450<x451))/x452);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x469 = 19202U;
	int64_t x470 = INT64_MIN;
	int16_t x471 = -1;
	volatile int32_t t58 = -91;

	t58 = ((x469/(x470<x471))/x472);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x477 = 65339576;
	uint16_t x478 = 54U;
	static int16_t x479 = INT16_MAX;
	int8_t x480 = -1;
	int32_t t59 = 7325;

	t59 = ((x477/(x478<x479))/x480);

	if (t59 != -65339576) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x485 = INT64_MAX;
	uint32_t x486 = 193U;
	int32_t x487 = -1;
	static volatile uint32_t x488 = 28U;

	t60 = ((x485/(x486<x487))/x488);

	if (t60 != 329406144173384850LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x497 = -1;
	int16_t x498 = -14669;
	static int8_t x499 = -1;
	static uint64_t x500 = 5529LLU;
	volatile uint64_t t61 = 1LLU;

	t61 = ((x497/(x498<x499))/x500);

	if (t61 != 3336361742396373LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x501 = 92543274152LLU;
	volatile uint32_t x503 = UINT32_MAX;

	t62 = ((x501/(x502<x503))/x504);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x505 = -1;
	uint64_t x506 = 6560695LLU;
	int16_t x507 = INT16_MIN;
	int32_t x508 = -1650022;
	volatile int32_t t63 = -386617;

	t63 = ((x505/(x506<x507))/x508);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x510 = INT32_MIN;
	int32_t x511 = -1;
	int32_t x512 = 64720071;
	volatile int64_t t64 = 9239829476LL;

	t64 = ((x509/(x510<x511))/x512);

	if (t64 != -142511772535LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x518 = 15U;
	uint16_t x519 = 18966U;
	int8_t x520 = INT8_MIN;
	volatile int32_t t65 = 12853;

	t65 = ((x517/(x518<x519))/x520);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x526 = UINT8_MAX;
	uint16_t x528 = UINT16_MAX;
	int32_t t66 = 16729773;

	t66 = ((x525/(x526<x527))/x528);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x541 = -268272771;
	int16_t x543 = INT16_MAX;
	static uint32_t x544 = 254750U;
	uint32_t t67 = 94584U;

	t67 = ((x541/(x542<x543))/x544);

	if (t67 != 15806U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x549 = 67U;
	uint16_t x550 = 751U;
	static volatile int32_t x551 = INT32_MAX;
	int16_t x552 = -1;
	static int32_t t68 = -24883;

	t68 = ((x549/(x550<x551))/x552);

	if (t68 != -67) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x553 = INT64_MAX;
	static int32_t x554 = INT32_MIN;
	int16_t x555 = -1;
	uint16_t x556 = 9268U;

	t69 = ((x553/(x554<x555))/x556);

	if (t69 != 995184725599350LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x561 = 22775839291523110LL;
	static volatile int16_t x562 = INT16_MAX;
	volatile int64_t x564 = INT64_MIN;
	int64_t t70 = -81980975LL;

	t70 = ((x561/(x562<x563))/x564);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x565 = INT8_MIN;
	volatile int16_t x567 = -249;
	int32_t x568 = INT32_MIN;
	int32_t t71 = -28616;

	t71 = ((x565/(x566<x567))/x568);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x585 = 471U;
	uint64_t x586 = 486LLU;
	uint64_t x587 = 220851004738815514LLU;
	uint64_t x588 = 16672027200LLU;
	uint64_t t72 = 5193089LLU;

	t72 = ((x585/(x586<x587))/x588);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x601 = -1;
	volatile int8_t x602 = INT8_MIN;
	int32_t x603 = INT32_MAX;
	uint16_t x604 = 281U;

	t73 = ((x601/(x602<x603))/x604);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x609 = INT8_MAX;
	volatile int16_t x610 = INT16_MIN;
	int8_t x611 = INT8_MIN;
	static int16_t x612 = INT16_MAX;
	int32_t t74 = 27206679;

	t74 = ((x609/(x610<x611))/x612);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x613 = -1;
	volatile uint8_t x615 = UINT8_MAX;
	uint32_t x616 = UINT32_MAX;

	t75 = ((x613/(x614<x615))/x616);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x621 = INT32_MIN;
	int8_t x623 = INT8_MAX;
	int8_t x624 = 1;
	volatile int32_t t76 = INT32_MIN;

	t76 = ((x621/(x622<x623))/x624);

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x633 = 140975427016663LLU;
	static int16_t x634 = -3526;
	uint64_t x635 = UINT64_MAX;
	volatile int64_t x636 = 814888302827317LL;
	static uint64_t t77 = 3895638LLU;

	t77 = ((x633/(x634<x635))/x636);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x637 = INT16_MIN;
	int16_t x638 = INT16_MIN;
	static volatile uint32_t t78 = 26711861U;

	t78 = ((x637/(x638<x639))/x640);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x665 = 11260236LLU;
	int8_t x666 = INT8_MIN;
	uint8_t x667 = UINT8_MAX;
	static volatile uint64_t t79 = 65397LLU;

	t79 = ((x665/(x666<x667))/x668);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x677 = -1;
	volatile int16_t x678 = 3682;
	int64_t x679 = INT64_MAX;
	int32_t x680 = INT32_MIN;

	t80 = ((x677/(x678<x679))/x680);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x681 = INT16_MIN;
	int64_t x682 = INT64_MIN;
	volatile uint32_t x683 = 12U;
	int16_t x684 = -1;

	t81 = ((x681/(x682<x683))/x684);

	if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x689 = 23545U;
	int16_t x690 = -1;
	volatile int8_t x691 = INT8_MAX;
	uint64_t x692 = 33502799211089111LLU;
	volatile uint64_t t82 = 882421598LLU;

	t82 = ((x689/(x690<x691))/x692);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x693 = INT8_MAX;
	volatile int32_t x694 = -1;
	volatile uint8_t x695 = UINT8_MAX;
	static int64_t x696 = INT64_MIN;
	volatile int64_t t83 = 9594841890LL;

	t83 = ((x693/(x694<x695))/x696);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x697 = 0U;
	uint16_t x698 = 0U;
	static int16_t x700 = -122;
	static int32_t t84 = 61;

	t84 = ((x697/(x698<x699))/x700);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x705 = -139008LL;
	static uint32_t x706 = 39U;
	int8_t x707 = -28;
	int64_t x708 = INT64_MIN;
	int64_t t85 = -204LL;

	t85 = ((x705/(x706<x707))/x708);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x716 = 2155U;
	volatile uint32_t t86 = 17862U;

	t86 = ((x713/(x714<x715))/x716);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x718 = INT16_MIN;
	int32_t x719 = INT32_MAX;
	int16_t x720 = INT16_MAX;
	int32_t t87 = 3;

	t87 = ((x717/(x718<x719))/x720);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x723 = -1LL;
	uint64_t t88 = 7521216500484702LLU;

	t88 = ((x721/(x722<x723))/x724);

	if (t88 != 2945823071153316LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x725 = -28;
	int64_t x726 = INT64_MIN;
	volatile int32_t x727 = 177264;
	int32_t x728 = INT32_MIN;

	t89 = ((x725/(x726<x727))/x728);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x741 = 59U;
	int8_t x742 = -1;
	int64_t x743 = INT64_MAX;
	volatile uint16_t x744 = UINT16_MAX;
	int32_t t90 = 36;

	t90 = ((x741/(x742<x743))/x744);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x745 = -1;
	int64_t x746 = INT64_MIN;
	static volatile int8_t x747 = INT8_MIN;
	uint8_t x748 = 9U;
	static int32_t t91 = -73558;

	t91 = ((x745/(x746<x747))/x748);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x755 = UINT8_MAX;
	static volatile int64_t x756 = -1LL;
	volatile int64_t t92 = -157187956LL;

	t92 = ((x753/(x754<x755))/x756);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x765 = -7;
	int16_t x766 = -1;
	volatile int64_t x768 = INT64_MIN;
	volatile int64_t t93 = 743655005019LL;

	t93 = ((x765/(x766<x767))/x768);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x773 = UINT32_MAX;
	volatile int32_t x774 = 48351;
	int32_t x775 = INT32_MAX;
	int32_t x776 = INT32_MIN;
	uint32_t t94 = 264789290U;

	t94 = ((x773/(x774<x775))/x776);

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x777 = -1;
	int64_t x778 = INT64_MIN;
	int32_t x779 = INT32_MIN;
	volatile int32_t t95 = 2165828;

	t95 = ((x777/(x778<x779))/x780);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x782 = 7;
	volatile int16_t x784 = INT16_MAX;
	static volatile int32_t t96 = 8079;

	t96 = ((x781/(x782<x783))/x784);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x786 = 2434;
	static int16_t x787 = INT16_MAX;
	volatile int8_t x788 = 18;

	t97 = ((x785/(x786<x787))/x788);

	if (t97 != -1820) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x793 = 10U;
	int64_t x794 = INT64_MIN;
	int32_t x795 = INT32_MIN;
	static volatile int32_t t98 = 1977;

	t98 = ((x793/(x794<x795))/x796);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x801 = 16761U;
	int16_t x802 = -1336;
	volatile int64_t x804 = INT64_MAX;
	int64_t t99 = 550262LL;

	t99 = ((x801/(x802<x803))/x804);

	if (t99 != 0LL) { NG(); } else { ; }
	
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


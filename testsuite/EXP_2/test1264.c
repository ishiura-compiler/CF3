#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x50 = -1;
int32_t t1 = 824;
uint16_t x77 = UINT16_MAX;
uint16_t x78 = UINT16_MAX;
volatile int64_t t6 = 15409LL;
volatile int16_t x107 = INT16_MAX;
static int32_t t7 = -1809;
uint8_t x119 = UINT8_MAX;
int32_t x123 = -54819;
int8_t x125 = 44;
int32_t x142 = INT32_MIN;
uint32_t x148 = UINT32_MAX;
volatile uint32_t t14 = 1020395830U;
static uint32_t x168 = 54254678U;
volatile int8_t x173 = INT8_MAX;
uint16_t x177 = 10U;
volatile uint64_t x188 = UINT64_MAX;
uint16_t x204 = UINT16_MAX;
uint64_t x205 = UINT64_MAX;
int16_t x222 = INT16_MAX;
int32_t t24 = 19332;
uint64_t x230 = 2836865LLU;
int32_t x272 = 40027;
volatile uint32_t t28 = 23316051U;
uint8_t x289 = 30U;
int8_t x317 = 1;
static volatile int64_t x318 = INT64_MIN;
uint16_t x329 = 11846U;
volatile int8_t x330 = INT8_MAX;
int32_t x332 = 304;
uint16_t x336 = 0U;
uint32_t x341 = 14936361U;
static uint32_t x342 = UINT32_MAX;
volatile uint64_t x344 = UINT64_MAX;
uint8_t x360 = 14U;
volatile uint8_t x369 = UINT8_MAX;
int32_t x370 = INT32_MIN;
int16_t x372 = INT16_MIN;
int8_t x374 = -1;
uint16_t x405 = 4U;
static volatile uint64_t x417 = UINT64_MAX;
uint8_t x426 = 31U;
static int16_t x431 = INT16_MIN;
uint64_t x435 = 54126LLU;
uint64_t x457 = 67084935LLU;
uint8_t x459 = 0U;
uint64_t t48 = 233762072LLU;
int64_t x486 = -29520005014788446LL;
uint64_t x494 = 0LLU;
uint8_t x495 = 1U;
volatile uint8_t x497 = 7U;
int8_t x498 = INT8_MAX;
int64_t t51 = 2627816339LL;
volatile int32_t x514 = 29641;
static int16_t x520 = INT16_MIN;
static uint64_t x545 = 274634970144975305LLU;
volatile uint64_t x570 = 8903284723LLU;
uint32_t x592 = UINT32_MAX;
static int16_t x606 = -1;
int32_t x607 = -1;
int16_t x640 = -1;
uint32_t x665 = 742522U;
uint32_t t60 = 31645746U;
uint8_t x675 = 11U;
volatile int64_t x688 = -1LL;
int64_t t63 = -637LL;
int32_t t64 = 27;
uint64_t t67 = 3898910287371409LLU;
static uint8_t x733 = 99U;
int16_t x739 = INT16_MIN;
uint8_t x740 = 36U;
volatile uint32_t t70 = 11U;
int16_t x760 = -3;
int64_t x767 = 776153LL;
volatile uint8_t x777 = 39U;
int8_t x780 = INT8_MIN;
static int16_t x788 = 0;
volatile uint32_t x793 = 1150532088U;
volatile uint64_t t78 = 721LLU;
uint8_t x817 = 27U;
int32_t x831 = INT32_MIN;
uint64_t x842 = 22764LLU;
uint16_t x852 = 2102U;
uint8_t x861 = 14U;
static int64_t x862 = INT64_MAX;
int8_t x876 = 1;
uint64_t x886 = 13LLU;
static uint8_t x901 = 29U;
volatile uint16_t x903 = 549U;
int32_t x910 = INT32_MIN;
static uint64_t x913 = UINT64_MAX;
int8_t x915 = 1;
uint16_t x929 = 141U;
uint32_t x930 = 27722221U;
int32_t t93 = -597301;
static int32_t x951 = 0;
int8_t x952 = 13;
int64_t x956 = -1LL;
volatile int64_t t98 = 242899051169LL;
volatile int32_t t99 = -591892;


void f0(void) {
	uint32_t x21 = 2372027U;
	static uint16_t x22 = 1081U;
	static int8_t x23 = INT8_MIN;
	int32_t x24 = 80921;
	volatile uint32_t t0 = 13U;

	t0 = ((x21>>(x22==x23))*x24);

	if (t0 != 2968235843U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x49 = 4788U;
	static volatile int16_t x51 = -263;
	int16_t x52 = -2;

	t1 = ((x49>>(x50==x51))*x52);

	if (t1 != -9576) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x61 = 0;
	int32_t x62 = INT32_MIN;
	int64_t x63 = INT64_MIN;
	volatile uint16_t x64 = 16196U;
	static int32_t t2 = 403494041;

	t2 = ((x61>>(x62==x63))*x64);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x65 = 21064167U;
	int16_t x66 = INT16_MAX;
	static uint16_t x67 = UINT16_MAX;
	static uint8_t x68 = 39U;
	volatile uint32_t t3 = 63U;

	t3 = ((x65>>(x66==x67))*x68);

	if (t3 != 821502513U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x79 = INT64_MAX;
	static int16_t x80 = -1;
	int32_t t4 = 1627875;

	t4 = ((x77>>(x78==x79))*x80);

	if (t4 != -65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x85 = UINT64_MAX;
	static volatile int64_t x86 = INT64_MAX;
	int64_t x87 = -1LL;
	volatile uint32_t x88 = UINT32_MAX;
	uint64_t t5 = 39765793680LLU;

	t5 = ((x85>>(x86==x87))*x88);

	if (t5 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x101 = 38LL;
	int8_t x102 = -62;
	int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MAX;

	t6 = ((x101>>(x102==x103))*x104);

	if (t6 != 81604378586LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x105 = 9U;
	volatile int16_t x106 = INT16_MIN;
	static volatile uint16_t x108 = 16U;

	t7 = ((x105>>(x106==x107))*x108);

	if (t7 != 144) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x109 = 24U;
	int16_t x110 = INT16_MAX;
	int64_t x111 = INT64_MIN;
	int16_t x112 = INT16_MAX;
	int32_t t8 = -16697642;

	t8 = ((x109>>(x110==x111))*x112);

	if (t8 != 786408) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x117 = INT8_MAX;
	uint8_t x118 = 14U;
	volatile int32_t x120 = -58704;
	int32_t t9 = 918;

	t9 = ((x117>>(x118==x119))*x120);

	if (t9 != -7455408) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x121 = 555843LLU;
	static int8_t x122 = 15;
	int32_t x124 = INT32_MAX;
	volatile uint64_t t10 = 3133064025376LLU;

	t10 = ((x121>>(x122==x123))*x124);

	if (t10 != 1193663752799421LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x126 = 9058U;
	static int32_t x127 = -117341;
	static int32_t x128 = 2781979;
	static int32_t t11 = -50;

	t11 = ((x125>>(x126==x127))*x128);

	if (t11 != 122407076) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x129 = 512203350U;
	uint64_t x130 = 3490LLU;
	volatile int8_t x131 = INT8_MAX;
	uint16_t x132 = 69U;
	uint32_t t12 = 73681U;

	t12 = ((x129>>(x130==x131))*x132);

	if (t12 != 982292782U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x141 = 136074932399033LLU;
	int32_t x143 = -7636968;
	volatile int16_t x144 = INT16_MIN;
	uint64_t t13 = 457951LLU;

	t13 = ((x141>>(x142==x143))*x144);

	if (t13 != 13987840688858038272LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x145 = UINT32_MAX;
	static int8_t x146 = INT8_MAX;
	volatile uint8_t x147 = 9U;

	t14 = ((x145>>(x146==x147))*x148);

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x165 = 14;
	int16_t x166 = -190;
	int16_t x167 = -1;
	static volatile uint32_t t15 = 116186U;

	t15 = ((x165>>(x166==x167))*x168);

	if (t15 != 759565492U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x174 = 2U;
	int16_t x175 = INT16_MIN;
	uint32_t x176 = 61U;
	volatile uint32_t t16 = 21735U;

	t16 = ((x173>>(x174==x175))*x176);

	if (t16 != 7747U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x178 = INT8_MIN;
	int16_t x179 = 1574;
	static uint64_t x180 = 396200177350LLU;
	volatile uint64_t t17 = 21390034202916LLU;

	t17 = ((x177>>(x178==x179))*x180);

	if (t17 != 3962001773500LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x185 = INT64_MAX;
	uint64_t x186 = 14481926270533939LLU;
	uint16_t x187 = UINT16_MAX;
	volatile uint64_t t18 = 335LLU;

	t18 = ((x185>>(x186==x187))*x188);

	if (t18 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x189 = 158U;
	uint64_t x190 = 89077252LLU;
	volatile uint64_t x191 = 1961023LLU;
	int32_t x192 = -174963;
	volatile int32_t t19 = -37772;

	t19 = ((x189>>(x190==x191))*x192);

	if (t19 != -27644154) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x201 = 3;
	static volatile uint32_t x202 = 787227U;
	int8_t x203 = 0;
	volatile int32_t t20 = 54;

	t20 = ((x201>>(x202==x203))*x204);

	if (t20 != 196605) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x206 = 7U;
	volatile int64_t x207 = INT64_MIN;
	uint8_t x208 = 1U;
	uint64_t t21 = UINT64_MAX;

	t21 = ((x205>>(x206==x207))*x208);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x213 = UINT32_MAX;
	volatile uint16_t x214 = UINT16_MAX;
	static uint64_t x215 = 24444134LLU;
	int32_t x216 = -1;
	volatile uint32_t t22 = 99U;

	t22 = ((x213>>(x214==x215))*x216);

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x217 = 49903028585392LLU;
	int64_t x218 = INT64_MAX;
	int64_t x219 = 4051767065268652931LL;
	int16_t x220 = -1;
	uint64_t t23 = 4201983374681029LLU;

	t23 = ((x217>>(x218==x219))*x220);

	if (t23 != 18446694170680966224LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x221 = 11;
	static volatile uint32_t x223 = 5049472U;
	uint16_t x224 = UINT16_MAX;

	t24 = ((x221>>(x222==x223))*x224);

	if (t24 != 720885) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x229 = INT16_MAX;
	uint8_t x231 = 0U;
	int32_t x232 = 2253;
	int32_t t25 = -3424094;

	t25 = ((x229>>(x230==x231))*x232);

	if (t25 != 73824051) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x233 = 1;
	static uint16_t x234 = 2U;
	static int16_t x235 = INT16_MIN;
	int16_t x236 = -1;
	int32_t t26 = 1;

	t26 = ((x233>>(x234==x235))*x236);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x269 = 806934459148819LLU;
	int8_t x270 = INT8_MIN;
	uint8_t x271 = UINT8_MAX;
	uint64_t t27 = 34948253292729667LLU;

	t27 = ((x269>>(x270==x271))*x272);

	if (t27 != 13852421522640226497LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x281 = INT32_MAX;
	volatile int16_t x282 = INT16_MAX;
	uint64_t x283 = UINT64_MAX;
	volatile uint32_t x284 = UINT32_MAX;

	t28 = ((x281>>(x282==x283))*x284);

	if (t28 != 2147483649U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x290 = 454U;
	volatile uint32_t x291 = UINT32_MAX;
	int8_t x292 = INT8_MAX;
	volatile int32_t t29 = -1587497;

	t29 = ((x289>>(x290==x291))*x292);

	if (t29 != 3810) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x297 = 124U;
	int16_t x298 = 728;
	uint16_t x299 = 6U;
	volatile int16_t x300 = -14;
	int32_t t30 = 2189904;

	t30 = ((x297>>(x298==x299))*x300);

	if (t30 != -1736) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x309 = INT8_MAX;
	volatile int8_t x310 = 0;
	int64_t x311 = 18248LL;
	volatile uint16_t x312 = UINT16_MAX;
	int32_t t31 = -3795;

	t31 = ((x309>>(x310==x311))*x312);

	if (t31 != 8322945) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x313 = 2U;
	int64_t x314 = INT64_MAX;
	static int64_t x315 = INT64_MAX;
	uint8_t x316 = 18U;
	int32_t t32 = -14494662;

	t32 = ((x313>>(x314==x315))*x316);

	if (t32 != 18) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x319 = 39804326LLU;
	volatile uint64_t x320 = UINT64_MAX;
	uint64_t t33 = UINT64_MAX;

	t33 = ((x317>>(x318==x319))*x320);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x325 = UINT32_MAX;
	int32_t x326 = INT32_MIN;
	uint16_t x327 = 4595U;
	static int32_t x328 = -1;
	volatile uint32_t t34 = 17866876U;

	t34 = ((x325>>(x326==x327))*x328);

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x331 = INT8_MIN;
	int32_t t35 = -196469834;

	t35 = ((x329>>(x330==x331))*x332);

	if (t35 != 3601184) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x333 = 3U;
	int32_t x334 = INT32_MIN;
	volatile int8_t x335 = INT8_MIN;
	int32_t t36 = -544;

	t36 = ((x333>>(x334==x335))*x336);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x343 = INT8_MIN;
	volatile uint64_t t37 = 2019251LLU;

	t37 = ((x341>>(x342==x343))*x344);

	if (t37 != 18446744073694615255LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x353 = 1U;
	int16_t x354 = -1;
	uint8_t x355 = 30U;
	int32_t x356 = INT32_MIN;
	volatile int32_t t38 = INT32_MIN;

	t38 = ((x353>>(x354==x355))*x356);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x357 = 45;
	static int32_t x358 = INT32_MAX;
	int8_t x359 = INT8_MAX;
	int32_t t39 = -112;

	t39 = ((x357>>(x358==x359))*x360);

	if (t39 != 630) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x371 = 67278959636323719LLU;
	int32_t t40 = -10;

	t40 = ((x369>>(x370==x371))*x372);

	if (t40 != -8355840) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x373 = 240LLU;
	static int8_t x375 = 1;
	uint32_t x376 = UINT32_MAX;
	uint64_t t41 = 4301503362630LLU;

	t41 = ((x373>>(x374==x375))*x376);

	if (t41 != 1030792150800LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x406 = UINT8_MAX;
	volatile int16_t x407 = -1;
	static volatile int16_t x408 = INT16_MAX;
	volatile int32_t t42 = 485409974;

	t42 = ((x405>>(x406==x407))*x408);

	if (t42 != 131068) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x418 = UINT8_MAX;
	int8_t x419 = INT8_MIN;
	static int8_t x420 = INT8_MIN;
	uint64_t t43 = 0LLU;

	t43 = ((x417>>(x418==x419))*x420);

	if (t43 != 128LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x425 = 2118725301LLU;
	static uint32_t x427 = 309U;
	int16_t x428 = INT16_MIN;
	volatile uint64_t t44 = 1754893177707799LLU;

	t44 = ((x425>>(x426==x427))*x428);

	if (t44 != 18446674647318888448LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x429 = 235100LLU;
	uint32_t x430 = UINT32_MAX;
	int16_t x432 = -1;
	uint64_t t45 = 125LLU;

	t45 = ((x429>>(x430==x431))*x432);

	if (t45 != 18446744073709316516LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x433 = UINT64_MAX;
	uint16_t x434 = 107U;
	volatile uint32_t x436 = 4U;
	static volatile uint64_t t46 = 6186070526169007737LLU;

	t46 = ((x433>>(x434==x435))*x436);

	if (t46 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x458 = 1U;
	int16_t x460 = -7;
	uint64_t t47 = 2112381123LLU;

	t47 = ((x457>>(x458==x459))*x460);

	if (t47 != 18446744073239957071LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x477 = 11915570184702LLU;
	uint8_t x478 = 10U;
	static int8_t x479 = -1;
	int32_t x480 = 369079822;

	t48 = ((x477>>(x478==x479))*x480);

	if (t48 != 7471433255447998436LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x485 = 43166030LLU;
	int8_t x487 = INT8_MIN;
	int32_t x488 = INT32_MIN;
	uint64_t t49 = 2587LLU;

	t49 = ((x485>>(x486==x487))*x488);

	if (t49 != 18354045730135474176LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x493 = 2;
	int8_t x496 = INT8_MAX;
	int32_t t50 = 2268658;

	t50 = ((x493>>(x494==x495))*x496);

	if (t50 != 254) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x499 = 51U;
	volatile int64_t x500 = 31165191592048LL;

	t51 = ((x497>>(x498==x499))*x500);

	if (t51 != 218156341144336LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x513 = 252261193676374017LLU;
	uint16_t x515 = 290U;
	int32_t x516 = 103;
	uint64_t t52 = 29978561LLU;

	t52 = ((x513>>(x514==x515))*x516);

	if (t52 != 7536158874956972135LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x517 = UINT64_MAX;
	static volatile int64_t x518 = INT64_MIN;
	int8_t x519 = -3;
	volatile uint64_t t53 = 6883441060LLU;

	t53 = ((x517>>(x518==x519))*x520);

	if (t53 != 32768LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x546 = INT8_MIN;
	int64_t x547 = INT64_MIN;
	uint64_t x548 = UINT64_MAX;
	static volatile uint64_t t54 = 11963LLU;

	t54 = ((x545>>(x546==x547))*x548);

	if (t54 != 18172109103564576311LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x549 = INT16_MAX;
	static uint16_t x550 = 74U;
	uint32_t x551 = UINT32_MAX;
	uint32_t x552 = 7582U;
	uint32_t t55 = 79U;

	t55 = ((x549>>(x550==x551))*x552);

	if (t55 != 248439394U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x569 = 16LLU;
	uint16_t x571 = 0U;
	uint8_t x572 = 6U;
	uint64_t t56 = 11092143LLU;

	t56 = ((x569>>(x570==x571))*x572);

	if (t56 != 96LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x589 = 445813310456LLU;
	volatile int64_t x590 = INT64_MAX;
	int64_t x591 = INT64_MIN;
	volatile uint64_t t57 = 1825513285476173LLU;

	t57 = ((x589>>(x590==x591))*x592);

	if (t57 != 14738948492117720072LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x605 = 53U;
	volatile int8_t x608 = INT8_MAX;
	volatile int32_t t58 = -936043774;

	t58 = ((x605>>(x606==x607))*x608);

	if (t58 != 3302) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x637 = UINT16_MAX;
	static int64_t x638 = -1LL;
	int8_t x639 = INT8_MIN;
	static volatile int32_t t59 = -109338908;

	t59 = ((x637>>(x638==x639))*x640);

	if (t59 != -65535) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x666 = 116989;
	static int8_t x667 = 2;
	static int16_t x668 = 1;

	t60 = ((x665>>(x666==x667))*x668);

	if (t60 != 742522U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x673 = INT32_MAX;
	int16_t x674 = INT16_MAX;
	uint32_t x676 = 2400956U;
	static volatile uint32_t t61 = 0U;

	t61 = ((x673>>(x674==x675))*x676);

	if (t61 != 4292566340U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x677 = 0U;
	static uint16_t x678 = 4713U;
	uint32_t x679 = 112U;
	int8_t x680 = INT8_MIN;
	volatile uint32_t t62 = 3U;

	t62 = ((x677>>(x678==x679))*x680);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x685 = 1;
	int32_t x686 = -57;
	int16_t x687 = INT16_MAX;

	t63 = ((x685>>(x686==x687))*x688);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x697 = 622;
	int8_t x698 = -1;
	uint8_t x699 = 31U;
	int16_t x700 = INT16_MIN;

	t64 = ((x697>>(x698==x699))*x700);

	if (t64 != -20381696) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x701 = 3728901;
	uint16_t x702 = 335U;
	uint64_t x703 = UINT64_MAX;
	uint64_t x704 = UINT64_MAX;
	volatile uint64_t t65 = 6709870LLU;

	t65 = ((x701>>(x702==x703))*x704);

	if (t65 != 18446744073705822715LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x709 = 52U;
	int32_t x710 = INT32_MIN;
	int8_t x711 = -1;
	volatile uint32_t x712 = 122741U;
	uint32_t t66 = 323763U;

	t66 = ((x709>>(x710==x711))*x712);

	if (t66 != 6382532U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x721 = 11LLU;
	static int16_t x722 = -1921;
	int32_t x723 = INT32_MIN;
	int8_t x724 = INT8_MIN;

	t67 = ((x721>>(x722==x723))*x724);

	if (t67 != 18446744073709550208LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x734 = INT16_MIN;
	int64_t x735 = -1LL;
	int16_t x736 = -1;
	int32_t t68 = 16628640;

	t68 = ((x733>>(x734==x735))*x736);

	if (t68 != -99) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x737 = 8540657U;
	int32_t x738 = -1;
	uint32_t t69 = 930597U;

	t69 = ((x737>>(x738==x739))*x740);

	if (t69 != 307463652U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x745 = 7749;
	int64_t x746 = -1LL;
	volatile int32_t x747 = -1;
	volatile uint32_t x748 = UINT32_MAX;

	t70 = ((x745>>(x746==x747))*x748);

	if (t70 != 4294963422U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x749 = 0U;
	int64_t x750 = INT64_MAX;
	uint16_t x751 = UINT16_MAX;
	int8_t x752 = INT8_MIN;
	int32_t t71 = -130830130;

	t71 = ((x749>>(x750==x751))*x752);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x757 = 48755U;
	int32_t x758 = INT32_MIN;
	int32_t x759 = INT32_MAX;
	uint32_t t72 = 905315U;

	t72 = ((x757>>(x758==x759))*x760);

	if (t72 != 4294821031U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x765 = 1U;
	int64_t x766 = INT64_MAX;
	volatile int32_t x768 = INT32_MIN;
	int32_t t73 = INT32_MIN;

	t73 = ((x765>>(x766==x767))*x768);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x773 = 0;
	int16_t x774 = -31;
	volatile int64_t x775 = 17872298430870091LL;
	static uint8_t x776 = 14U;
	int32_t t74 = -48;

	t74 = ((x773>>(x774==x775))*x776);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x778 = INT32_MIN;
	volatile uint32_t x779 = 73715U;
	volatile int32_t t75 = 588;

	t75 = ((x777>>(x778==x779))*x780);

	if (t75 != -4992) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x781 = INT64_MAX;
	int64_t x782 = 4477391570909945499LL;
	uint32_t x783 = 2541U;
	int8_t x784 = 1;
	volatile int64_t t76 = INT64_MAX;

	t76 = ((x781>>(x782==x783))*x784);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x785 = 96196;
	static int64_t x786 = 7175LL;
	static int8_t x787 = -1;
	volatile int32_t t77 = 191;

	t77 = ((x785>>(x786==x787))*x788);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x794 = UINT32_MAX;
	int64_t x795 = 965666425LL;
	uint64_t x796 = 74976058LLU;

	t78 = ((x793>>(x794==x795))*x796);

	if (t78 != 86262360560749104LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x818 = 18372U;
	uint64_t x819 = UINT64_MAX;
	static uint64_t x820 = 71227157623907552LLU;
	uint64_t t79 = 130697668012251LLU;

	t79 = ((x817>>(x818==x819))*x820);

	if (t79 != 1923133255845503904LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x825 = UINT32_MAX;
	int32_t x826 = INT32_MIN;
	uint16_t x827 = 26U;
	static int8_t x828 = INT8_MIN;
	static volatile uint32_t t80 = 16U;

	t80 = ((x825>>(x826==x827))*x828);

	if (t80 != 128U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x829 = INT8_MAX;
	int32_t x830 = 70493;
	volatile uint64_t x832 = 3005LLU;
	static uint64_t t81 = 126884727958LLU;

	t81 = ((x829>>(x830==x831))*x832);

	if (t81 != 381635LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x841 = UINT64_MAX;
	static int64_t x843 = INT64_MIN;
	uint32_t x844 = 3594644U;
	uint64_t t82 = 1037224173LLU;

	t82 = ((x841>>(x842==x843))*x844);

	if (t82 != 18446744073705956972LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x849 = 6;
	volatile int16_t x850 = -1;
	int8_t x851 = INT8_MIN;
	volatile int32_t t83 = -57556011;

	t83 = ((x849>>(x850==x851))*x852);

	if (t83 != 12612) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x857 = 24U;
	volatile int16_t x858 = INT16_MIN;
	uint16_t x859 = 1U;
	int64_t x860 = 13400969259LL;
	int64_t t84 = 1020540LL;

	t84 = ((x857>>(x858==x859))*x860);

	if (t84 != 321623262216LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x863 = INT16_MIN;
	uint8_t x864 = 58U;
	volatile int32_t t85 = 22;

	t85 = ((x861>>(x862==x863))*x864);

	if (t85 != 812) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x873 = INT16_MAX;
	volatile int16_t x874 = INT16_MIN;
	uint8_t x875 = 21U;
	static volatile int32_t t86 = 511;

	t86 = ((x873>>(x874==x875))*x876);

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x885 = 4512;
	int16_t x887 = INT16_MIN;
	int16_t x888 = INT16_MIN;
	volatile int32_t t87 = -30992506;

	t87 = ((x885>>(x886==x887))*x888);

	if (t87 != -147849216) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x893 = INT8_MAX;
	volatile uint64_t x894 = UINT64_MAX;
	int32_t x895 = INT32_MAX;
	int64_t x896 = -52143474691924347LL;
	static int64_t t88 = -383LL;

	t88 = ((x893>>(x894==x895))*x896);

	if (t88 != -6622221285874392069LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x902 = 129544U;
	static int16_t x904 = 1238;
	int32_t t89 = 63;

	t89 = ((x901>>(x902==x903))*x904);

	if (t89 != 35902) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x909 = INT16_MAX;
	int32_t x911 = -30783;
	uint32_t x912 = 29229U;
	static volatile uint32_t t90 = 12U;

	t90 = ((x909>>(x910==x911))*x912);

	if (t90 != 957746643U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x914 = 7170519U;
	uint32_t x916 = UINT32_MAX;
	uint64_t t91 = 225321621006LLU;

	t91 = ((x913>>(x914==x915))*x916);

	if (t91 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x925 = 16474;
	static int64_t x926 = -2715257662LL;
	static uint64_t x927 = 387278699812657266LLU;
	volatile uint32_t x928 = UINT32_MAX;
	uint32_t t92 = 0U;

	t92 = ((x925>>(x926==x927))*x928);

	if (t92 != 4294950822U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x931 = 44U;
	uint8_t x932 = 2U;

	t93 = ((x929>>(x930==x931))*x932);

	if (t93 != 282) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x933 = 333619998042LLU;
	int64_t x934 = INT64_MAX;
	volatile int64_t x935 = INT64_MAX;
	int8_t x936 = 9;
	static uint64_t t94 = 134891578957LLU;

	t94 = ((x933>>(x934==x935))*x936);

	if (t94 != 1501289991189LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x937 = UINT32_MAX;
	int32_t x938 = INT32_MIN;
	static int32_t x939 = 10245;
	int16_t x940 = INT16_MIN;
	volatile uint32_t t95 = 1U;

	t95 = ((x937>>(x938==x939))*x940);

	if (t95 != 32768U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x941 = 7772LLU;
	volatile int64_t x942 = 1928541993591684LL;
	static uint16_t x943 = 12U;
	int16_t x944 = INT16_MIN;
	volatile uint64_t t96 = 1297443298829048LLU;

	t96 = ((x941>>(x942==x943))*x944);

	if (t96 != 18446744073454878720LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x949 = 89138987898LLU;
	static volatile int64_t x950 = -1LL;
	uint64_t t97 = 678663834033855LLU;

	t97 = ((x949>>(x950==x951))*x952);

	if (t97 != 1158806842674LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x953 = INT8_MAX;
	int16_t x954 = -1;
	static int8_t x955 = -1;

	t98 = ((x953>>(x954==x955))*x956);

	if (t98 != -63LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x961 = INT16_MAX;
	int32_t x962 = INT32_MIN;
	static uint64_t x963 = 1LLU;
	static int8_t x964 = INT8_MIN;

	t99 = ((x961>>(x962==x963))*x964);

	if (t99 != -4194176) { NG(); } else { ; }
	
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


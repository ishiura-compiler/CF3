#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x9 = UINT64_MAX;
int8_t x19 = -1;
int16_t x20 = INT16_MIN;
uint32_t x25 = 0U;
volatile uint32_t x27 = UINT32_MAX;
int16_t x42 = -1;
volatile int64_t x44 = INT64_MIN;
uint64_t x61 = 1357073138068019LLU;
int16_t x63 = -2044;
volatile int32_t t9 = -145354;
int16_t x109 = 0;
static int32_t x110 = -1;
static int16_t x112 = INT16_MIN;
uint32_t x115 = 509585183U;
uint8_t x116 = 0U;
static int64_t x125 = 60113LL;
static uint16_t x127 = 1U;
volatile int64_t t14 = 24013256571LL;
uint16_t x142 = 16U;
static uint16_t x149 = UINT16_MAX;
int32_t t18 = 0;
volatile uint16_t x153 = 5U;
int64_t x154 = -1LL;
volatile int32_t x155 = -429117;
static int64_t x159 = INT64_MIN;
volatile uint32_t t22 = 57135763U;
uint16_t x176 = UINT16_MAX;
volatile uint64_t t23 = 13282873LLU;
volatile int16_t x186 = INT16_MIN;
uint8_t x195 = 1U;
volatile int8_t x208 = INT8_MIN;
int16_t x221 = INT16_MAX;
static volatile uint8_t x226 = 0U;
int8_t x229 = 2;
int8_t x232 = INT8_MIN;
static uint8_t x245 = 26U;
uint8_t x265 = 3U;
int8_t x289 = INT8_MAX;
uint64_t x290 = 32477971334831530LLU;
volatile int32_t t38 = -47;
int8_t x306 = -1;
int32_t x307 = INT32_MIN;
static int64_t x308 = 6LL;
uint32_t t40 = 22U;
uint16_t x330 = 52U;
int32_t t42 = INT32_MAX;
volatile int16_t x333 = INT16_MAX;
int32_t t43 = -9445;
static volatile int16_t x338 = -1494;
int32_t t46 = -165;
uint8_t x362 = 0U;
int32_t x366 = INT32_MIN;
int16_t x368 = 91;
uint16_t x374 = 60U;
int64_t x424 = 14932801LL;
int16_t x425 = 1625;
static volatile uint8_t x446 = UINT8_MAX;
int64_t x447 = 1249123041954LL;
static volatile int64_t x458 = INT64_MIN;
int32_t t58 = -174364259;
volatile int16_t x473 = 110;
volatile int32_t x476 = 0;
uint64_t x477 = UINT64_MAX;
int8_t x487 = INT8_MIN;
uint64_t x488 = UINT64_MAX;
int8_t x491 = INT8_MAX;
int64_t x492 = -187LL;
static uint16_t x508 = 50U;
int32_t t65 = -85548756;
volatile uint32_t x509 = UINT32_MAX;
uint16_t x517 = UINT16_MAX;
uint16_t x526 = 4917U;
uint32_t x536 = 1U;
static int64_t x547 = -1LL;
static int16_t x549 = INT16_MAX;
static volatile uint64_t x550 = 13855729218LLU;
static int16_t x557 = 1;
int64_t x558 = INT64_MIN;
int32_t x560 = 3886601;
uint32_t x574 = 445824U;
volatile int16_t x577 = 6699;
static uint16_t x578 = 0U;
volatile int32_t t77 = -44137653;
int16_t x591 = -1;
int32_t t79 = 138;
int64_t x620 = INT64_MIN;
volatile uint64_t t81 = 16344LLU;
volatile int8_t x635 = 15;
volatile uint32_t t82 = 38991U;
int8_t x640 = -1;
static int32_t x641 = 4024104;
static volatile int16_t x652 = INT16_MAX;
int32_t t86 = -32279401;
volatile int16_t x683 = INT16_MAX;
int32_t t87 = 2938;
volatile uint16_t x685 = UINT16_MAX;
uint64_t x688 = UINT64_MAX;
int64_t x695 = 26966402306LL;
volatile int32_t x707 = INT32_MIN;
static int8_t x708 = 1;
volatile int32_t x720 = INT32_MIN;
volatile int16_t x740 = INT16_MIN;
static volatile int16_t x747 = -2;
static int32_t x748 = INT32_MIN;
volatile int64_t x759 = INT64_MAX;
int32_t x760 = -209786;
int32_t t96 = 13;
uint64_t t97 = UINT64_MAX;
uint8_t x770 = UINT8_MAX;
int32_t x778 = -12617;
int16_t x780 = -11;


void f0(void) {
	uint64_t x10 = 223690322958LLU;
	uint8_t x11 = 8U;
	int32_t x12 = INT32_MIN;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (x9>>(x10*(x11==x12)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x17 = 7U;
	int64_t x18 = -1LL;
	static volatile int32_t t1 = -1;

	t1 = (x17>>(x18*(x19==x20)));

	if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x26 = INT32_MIN;
	uint64_t x28 = 10516568LLU;
	volatile uint32_t t2 = 2U;

	t2 = (x25>>(x26*(x27==x28)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x29 = UINT8_MAX;
	uint32_t x30 = 14705832U;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = UINT32_MAX;
	int32_t t3 = 122673;

	t3 = (x29>>(x30*(x31==x32)));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x41 = INT8_MAX;
	int16_t x43 = -1;
	int32_t t4 = 1;

	t4 = (x41>>(x42*(x43==x44)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x57 = INT8_MAX;
	uint32_t x58 = 143U;
	uint64_t x59 = UINT64_MAX;
	uint32_t x60 = UINT32_MAX;
	static int32_t t5 = 172279;

	t5 = (x57>>(x58*(x59==x60)));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x62 = -10475;
	volatile int64_t x64 = INT64_MIN;
	uint64_t t6 = 944751952975944LLU;

	t6 = (x61>>(x62*(x63==x64)));

	if (t6 != 1357073138068019LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x65 = 11U;
	static int32_t x66 = INT32_MIN;
	int16_t x67 = INT16_MIN;
	static int64_t x68 = INT64_MAX;
	int32_t t7 = 48;

	t7 = (x65>>(x66*(x67==x68)));

	if (t7 != 11) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x69 = 960972470U;
	int16_t x70 = 1;
	static volatile uint16_t x71 = 11U;
	volatile uint16_t x72 = 4108U;
	uint32_t t8 = 633U;

	t8 = (x69>>(x70*(x71==x72)));

	if (t8 != 960972470U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x89 = 0;
	volatile uint16_t x90 = UINT16_MAX;
	static int64_t x91 = INT64_MIN;
	static int64_t x92 = INT64_MAX;

	t9 = (x89>>(x90*(x91==x92)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x93 = UINT32_MAX;
	uint16_t x94 = 6U;
	int16_t x95 = INT16_MIN;
	volatile int32_t x96 = -1;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x93>>(x94*(x95==x96)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x111 = UINT16_MAX;
	volatile int32_t t11 = 1;

	t11 = (x109>>(x110*(x111==x112)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x113 = UINT8_MAX;
	int32_t x114 = -1;
	volatile int32_t t12 = -127;

	t12 = (x113>>(x114*(x115==x116)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x117 = UINT64_MAX;
	volatile int64_t x118 = 68798536356495835LL;
	static uint64_t x119 = 196682LLU;
	uint16_t x120 = 91U;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (x117>>(x118*(x119==x120)));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x126 = INT32_MIN;
	int64_t x128 = 2LL;

	t14 = (x125>>(x126*(x127==x128)));

	if (t14 != 60113LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x129 = 18912916462123LLU;
	int64_t x130 = -1LL;
	int16_t x131 = INT16_MIN;
	static uint16_t x132 = UINT16_MAX;
	uint64_t t15 = 1609447044537LLU;

	t15 = (x129>>(x130*(x131==x132)));

	if (t15 != 18912916462123LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x141 = UINT16_MAX;
	volatile int32_t x143 = -23707284;
	volatile int64_t x144 = INT64_MAX;
	int32_t t16 = -45;

	t16 = (x141>>(x142*(x143==x144)));

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x145 = INT16_MAX;
	int16_t x146 = INT16_MIN;
	int32_t x147 = 1039;
	uint8_t x148 = 91U;
	int32_t t17 = -262554375;

	t17 = (x145>>(x146*(x147==x148)));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x150 = INT32_MAX;
	static int8_t x151 = -1;
	uint32_t x152 = 10772532U;

	t18 = (x149>>(x150*(x151==x152)));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x156 = -1;
	volatile int32_t t19 = -438;

	t19 = (x153>>(x154*(x155==x156)));

	if (t19 != 5) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x157 = 29966303U;
	int16_t x158 = -62;
	uint8_t x160 = 7U;
	static uint32_t t20 = 7961U;

	t20 = (x157>>(x158*(x159==x160)));

	if (t20 != 29966303U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x161 = UINT8_MAX;
	static int64_t x162 = INT64_MIN;
	static volatile int16_t x163 = 1;
	int16_t x164 = INT16_MIN;
	int32_t t21 = 203153755;

	t21 = (x161>>(x162*(x163==x164)));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x169 = 5U;
	static uint16_t x170 = UINT16_MAX;
	volatile int64_t x171 = -53868118588444LL;
	int16_t x172 = -4027;

	t22 = (x169>>(x170*(x171==x172)));

	if (t22 != 5U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x173 = 24387774LLU;
	volatile int8_t x174 = 1;
	int32_t x175 = INT32_MIN;

	t23 = (x173>>(x174*(x175==x176)));

	if (t23 != 24387774LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x177 = UINT16_MAX;
	int8_t x178 = -2;
	uint8_t x179 = 0U;
	static uint8_t x180 = 13U;
	int32_t t24 = 47955580;

	t24 = (x177>>(x178*(x179==x180)));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x185 = UINT16_MAX;
	volatile int8_t x187 = -1;
	int32_t x188 = INT32_MIN;
	volatile int32_t t25 = 1330;

	t25 = (x185>>(x186*(x187==x188)));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x193 = 185U;
	int32_t x194 = INT32_MIN;
	int8_t x196 = -25;
	int32_t t26 = -123441;

	t26 = (x193>>(x194*(x195==x196)));

	if (t26 != 185) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x205 = 16221092034120LL;
	static uint64_t x206 = 868LLU;
	static int16_t x207 = 64;
	int64_t t27 = 19958009392LL;

	t27 = (x205>>(x206*(x207==x208)));

	if (t27 != 16221092034120LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x217 = 6;
	int32_t x218 = -1;
	static int64_t x219 = INT64_MIN;
	static volatile uint32_t x220 = UINT32_MAX;
	int32_t t28 = -13;

	t28 = (x217>>(x218*(x219==x220)));

	if (t28 != 6) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x222 = -1LL;
	int8_t x223 = 1;
	volatile int8_t x224 = INT8_MIN;
	static volatile int32_t t29 = 13;

	t29 = (x221>>(x222*(x223==x224)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x225 = 290597941839660180LLU;
	volatile uint64_t x227 = 27915496396LLU;
	static int8_t x228 = -1;
	static uint64_t t30 = 970407019090599675LLU;

	t30 = (x225>>(x226*(x227==x228)));

	if (t30 != 290597941839660180LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x230 = -1;
	static volatile int32_t x231 = INT32_MIN;
	volatile int32_t t31 = 74338760;

	t31 = (x229>>(x230*(x231==x232)));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x241 = INT8_MAX;
	int16_t x242 = 3067;
	int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MIN;
	static int32_t t32 = 131343964;

	t32 = (x241>>(x242*(x243==x244)));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x246 = 324U;
	int8_t x247 = -38;
	volatile int64_t x248 = INT64_MIN;
	int32_t t33 = -15182;

	t33 = (x245>>(x246*(x247==x248)));

	if (t33 != 26) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x261 = INT16_MAX;
	uint8_t x262 = 25U;
	int16_t x263 = -1;
	int16_t x264 = -674;
	static volatile int32_t t34 = -13903;

	t34 = (x261>>(x262*(x263==x264)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x266 = INT8_MIN;
	int32_t x267 = -61042836;
	static int32_t x268 = -4;
	int32_t t35 = 1314291;

	t35 = (x265>>(x266*(x267==x268)));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x277 = UINT8_MAX;
	int64_t x278 = -1LL;
	int16_t x279 = 10;
	volatile int64_t x280 = INT64_MAX;
	int32_t t36 = 3073;

	t36 = (x277>>(x278*(x279==x280)));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x285 = UINT32_MAX;
	uint64_t x286 = UINT64_MAX;
	uint16_t x287 = UINT16_MAX;
	int16_t x288 = INT16_MIN;
	uint32_t t37 = UINT32_MAX;

	t37 = (x285>>(x286*(x287==x288)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x291 = 7;
	int8_t x292 = 37;

	t38 = (x289>>(x290*(x291==x292)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x297 = INT64_MAX;
	int16_t x298 = -1;
	static volatile uint64_t x299 = 15178413886764LLU;
	int16_t x300 = -1;
	int64_t t39 = INT64_MAX;

	t39 = (x297>>(x298*(x299==x300)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x305 = 55065U;

	t40 = (x305>>(x306*(x307==x308)));

	if (t40 != 55065U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int8_t x322 = -1;
	uint8_t x323 = 1U;
	uint32_t x324 = UINT32_MAX;
	uint64_t t41 = UINT64_MAX;

	t41 = (x321>>(x322*(x323==x324)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x329 = INT32_MAX;
	int16_t x331 = -40;
	volatile int64_t x332 = INT64_MIN;

	t42 = (x329>>(x330*(x331==x332)));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x334 = -1;
	volatile int8_t x335 = INT8_MIN;
	int32_t x336 = -124;

	t43 = (x333>>(x334*(x335==x336)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x337 = UINT8_MAX;
	volatile uint16_t x339 = 33U;
	volatile int64_t x340 = INT64_MIN;
	volatile int32_t t44 = -18418200;

	t44 = (x337>>(x338*(x339==x340)));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x345 = 27LL;
	volatile int8_t x346 = -19;
	int16_t x347 = 31;
	static uint32_t x348 = UINT32_MAX;
	int64_t t45 = 102048090796316LL;

	t45 = (x345>>(x346*(x347==x348)));

	if (t45 != 27LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x349 = 1U;
	static volatile uint64_t x350 = UINT64_MAX;
	int8_t x351 = -1;
	int16_t x352 = INT16_MAX;

	t46 = (x349>>(x350*(x351==x352)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x361 = 616;
	int32_t x363 = INT32_MIN;
	static uint16_t x364 = 4U;
	static int32_t t47 = -59353;

	t47 = (x361>>(x362*(x363==x364)));

	if (t47 != 616) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x365 = UINT64_MAX;
	uint16_t x367 = 6850U;
	uint64_t t48 = UINT64_MAX;

	t48 = (x365>>(x366*(x367==x368)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x373 = 27U;
	uint16_t x375 = 193U;
	int64_t x376 = INT64_MIN;
	volatile uint32_t t49 = 98036606U;

	t49 = (x373>>(x374*(x375==x376)));

	if (t49 != 27U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x381 = INT8_MAX;
	int64_t x382 = 2754821992607565LL;
	int8_t x383 = 0;
	uint32_t x384 = 1642293U;
	int32_t t50 = -1;

	t50 = (x381>>(x382*(x383==x384)));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MIN;
	int8_t x387 = INT8_MIN;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t51 = -704063;

	t51 = (x385>>(x386*(x387==x388)));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x393 = 129882708931050311LLU;
	static volatile int16_t x394 = INT16_MIN;
	static volatile uint64_t x395 = 3014939608963577557LLU;
	volatile int64_t x396 = 61745150192468LL;
	volatile uint64_t t52 = 80986379221LLU;

	t52 = (x393>>(x394*(x395==x396)));

	if (t52 != 129882708931050311LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x405 = UINT8_MAX;
	volatile int16_t x406 = INT16_MAX;
	uint32_t x407 = 0U;
	int16_t x408 = INT16_MIN;
	int32_t t53 = -2786;

	t53 = (x405>>(x406*(x407==x408)));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x421 = UINT8_MAX;
	uint64_t x422 = 485864497308LLU;
	static int32_t x423 = INT32_MIN;
	int32_t t54 = 671471353;

	t54 = (x421>>(x422*(x423==x424)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x426 = INT16_MAX;
	volatile int32_t x427 = INT32_MIN;
	uint16_t x428 = 1668U;
	volatile int32_t t55 = -16805;

	t55 = (x425>>(x426*(x427==x428)));

	if (t55 != 1625) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x441 = UINT64_MAX;
	int8_t x442 = INT8_MIN;
	uint64_t x443 = 1531813715LLU;
	int8_t x444 = INT8_MIN;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = (x441>>(x442*(x443==x444)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x445 = 10190871825563LL;
	static int32_t x448 = -1;
	int64_t t57 = -862241LL;

	t57 = (x445>>(x446*(x447==x448)));

	if (t57 != 10190871825563LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x457 = UINT16_MAX;
	volatile int64_t x459 = -297767LL;
	int32_t x460 = -1;

	t58 = (x457>>(x458*(x459==x460)));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x469 = 43;
	static int64_t x470 = -1071021250861544LL;
	static int32_t x471 = 1892707;
	int32_t x472 = -8263565;
	static int32_t t59 = -176603067;

	t59 = (x469>>(x470*(x471==x472)));

	if (t59 != 43) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x474 = 2U;
	int8_t x475 = 1;
	volatile int32_t t60 = -3218;

	t60 = (x473>>(x474*(x475==x476)));

	if (t60 != 110) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x478 = 3957U;
	uint64_t x479 = UINT64_MAX;
	static int8_t x480 = -10;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (x477>>(x478*(x479==x480)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x485 = 1976U;
	int64_t x486 = INT64_MIN;
	volatile int32_t t62 = -30;

	t62 = (x485>>(x486*(x487==x488)));

	if (t62 != 1976) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x489 = UINT32_MAX;
	int8_t x490 = 1;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (x489>>(x490*(x491==x492)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x501 = 7U;
	int8_t x502 = INT8_MAX;
	int16_t x503 = 1;
	uint64_t x504 = 24624118443398LLU;
	static uint32_t t64 = 2U;

	t64 = (x501>>(x502*(x503==x504)));

	if (t64 != 7U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x505 = 15;
	uint32_t x506 = UINT32_MAX;
	uint16_t x507 = UINT16_MAX;

	t65 = (x505>>(x506*(x507==x508)));

	if (t65 != 15) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x510 = 122734LLU;
	uint8_t x511 = 20U;
	static int32_t x512 = -1;
	static volatile uint32_t t66 = UINT32_MAX;

	t66 = (x509>>(x510*(x511==x512)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x518 = 1973430630731904269LLU;
	static uint64_t x519 = 21105375575090LLU;
	volatile uint32_t x520 = UINT32_MAX;
	volatile int32_t t67 = -11;

	t67 = (x517>>(x518*(x519==x520)));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x525 = UINT16_MAX;
	uint32_t x527 = 74761865U;
	volatile uint16_t x528 = 1872U;
	int32_t t68 = -1;

	t68 = (x525>>(x526*(x527==x528)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x529 = 64U;
	int16_t x530 = -3464;
	uint64_t x531 = 613LLU;
	uint8_t x532 = 6U;
	int32_t t69 = -147;

	t69 = (x529>>(x530*(x531==x532)));

	if (t69 != 64) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x533 = 159U;
	uint8_t x534 = 13U;
	static int32_t x535 = -46454;
	int32_t t70 = 281075929;

	t70 = (x533>>(x534*(x535==x536)));

	if (t70 != 159) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x545 = 16623U;
	static int16_t x546 = -3;
	int16_t x548 = INT16_MAX;
	volatile uint32_t t71 = 125372525U;

	t71 = (x545>>(x546*(x547==x548)));

	if (t71 != 16623U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x551 = INT16_MIN;
	int32_t x552 = INT32_MAX;
	static int32_t t72 = 12208;

	t72 = (x549>>(x550*(x551==x552)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x553 = INT64_MAX;
	static int32_t x554 = 6905;
	uint8_t x555 = 127U;
	static int16_t x556 = 10;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x553>>(x554*(x555==x556)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x559 = INT16_MIN;
	int32_t t74 = -17;

	t74 = (x557>>(x558*(x559==x560)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x565 = 533721U;
	int8_t x566 = -11;
	volatile int8_t x567 = INT8_MIN;
	static volatile int32_t x568 = INT32_MIN;
	static volatile uint32_t t75 = 457U;

	t75 = (x565>>(x566*(x567==x568)));

	if (t75 != 533721U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x573 = UINT64_MAX;
	int64_t x575 = INT64_MAX;
	static uint32_t x576 = 30U;
	uint64_t t76 = UINT64_MAX;

	t76 = (x573>>(x574*(x575==x576)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x579 = 902650;
	volatile int8_t x580 = INT8_MIN;

	t77 = (x577>>(x578*(x579==x580)));

	if (t77 != 6699) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x589 = 57U;
	int32_t x590 = INT32_MAX;
	static volatile uint32_t x592 = 191623U;
	int32_t t78 = -6390758;

	t78 = (x589>>(x590*(x591==x592)));

	if (t78 != 57) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x597 = 30276005;
	int16_t x598 = -12479;
	int8_t x599 = INT8_MAX;
	static volatile uint32_t x600 = 29673U;

	t79 = (x597>>(x598*(x599==x600)));

	if (t79 != 30276005) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x601 = INT64_MAX;
	int32_t x602 = INT32_MAX;
	uint8_t x603 = 0U;
	uint16_t x604 = 14875U;
	volatile int64_t t80 = INT64_MAX;

	t80 = (x601>>(x602*(x603==x604)));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x617 = 5163LLU;
	int8_t x618 = INT8_MIN;
	int16_t x619 = INT16_MAX;

	t81 = (x617>>(x618*(x619==x620)));

	if (t81 != 5163LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x633 = 1U;
	int64_t x634 = INT64_MIN;
	int32_t x636 = -1;

	t82 = (x633>>(x634*(x635==x636)));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x637 = 94531U;
	volatile int8_t x638 = INT8_MIN;
	uint64_t x639 = 5LLU;
	static volatile uint32_t t83 = 31933523U;

	t83 = (x637>>(x638*(x639==x640)));

	if (t83 != 94531U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x642 = INT16_MIN;
	int64_t x643 = 1970849762751641LL;
	volatile uint32_t x644 = UINT32_MAX;
	volatile int32_t t84 = -215625705;

	t84 = (x641>>(x642*(x643==x644)));

	if (t84 != 4024104) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x649 = 1LLU;
	int32_t x650 = -1;
	volatile int16_t x651 = -1;
	uint64_t t85 = 179LLU;

	t85 = (x649>>(x650*(x651==x652)));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x657 = UINT8_MAX;
	int32_t x658 = INT32_MIN;
	int8_t x659 = INT8_MAX;
	uint64_t x660 = 1598315LLU;

	t86 = (x657>>(x658*(x659==x660)));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x681 = INT16_MAX;
	uint16_t x682 = UINT16_MAX;
	uint16_t x684 = UINT16_MAX;

	t87 = (x681>>(x682*(x683==x684)));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x686 = 2712U;
	volatile int64_t x687 = -3948019186LL;
	int32_t t88 = 1818210;

	t88 = (x685>>(x686*(x687==x688)));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x693 = 0;
	uint64_t x694 = UINT64_MAX;
	int32_t x696 = INT32_MAX;
	int32_t t89 = 4802;

	t89 = (x693>>(x694*(x695==x696)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x705 = INT16_MAX;
	static uint32_t x706 = UINT32_MAX;
	int32_t t90 = 344484338;

	t90 = (x705>>(x706*(x707==x708)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x709 = UINT8_MAX;
	int16_t x710 = -533;
	uint32_t x711 = UINT32_MAX;
	int64_t x712 = INT64_MIN;
	volatile int32_t t91 = -61962190;

	t91 = (x709>>(x710*(x711==x712)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x717 = INT32_MAX;
	uint8_t x718 = 25U;
	volatile int16_t x719 = 49;
	int32_t t92 = INT32_MAX;

	t92 = (x717>>(x718*(x719==x720)));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x725 = 0;
	int64_t x726 = INT64_MAX;
	uint8_t x727 = 5U;
	int64_t x728 = -1LL;
	int32_t t93 = -58354;

	t93 = (x725>>(x726*(x727==x728)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x737 = 1214585;
	volatile int64_t x738 = INT64_MIN;
	int8_t x739 = INT8_MAX;
	int32_t t94 = 7;

	t94 = (x737>>(x738*(x739==x740)));

	if (t94 != 1214585) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x745 = 47LL;
	int64_t x746 = INT64_MIN;
	int64_t t95 = -613612261251LL;

	t95 = (x745>>(x746*(x747==x748)));

	if (t95 != 47LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x757 = UINT16_MAX;
	volatile uint64_t x758 = 245543835402192LLU;

	t96 = (x757>>(x758*(x759==x760)));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x761 = UINT64_MAX;
	int16_t x762 = INT16_MIN;
	uint8_t x763 = 0U;
	int8_t x764 = 4;

	t97 = (x761>>(x762*(x763==x764)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x769 = UINT32_MAX;
	int64_t x771 = INT64_MAX;
	static int64_t x772 = -2691532399LL;
	uint32_t t98 = UINT32_MAX;

	t98 = (x769>>(x770*(x771==x772)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x777 = 21002U;
	uint64_t x779 = 57863593868208LLU;
	volatile int32_t t99 = -3356;

	t99 = (x777>>(x778*(x779==x780)));

	if (t99 != 21002) { NG(); } else { ; }
	
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


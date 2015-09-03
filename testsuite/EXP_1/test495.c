#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x12 = -1;
int64_t x16 = 5LL;
uint32_t x42 = UINT32_MAX;
int32_t x44 = -1;
int8_t x48 = 2;
int32_t t5 = 30249;
uint8_t x50 = 4U;
int64_t x52 = INT64_MAX;
static int32_t t7 = -21;
volatile int8_t x78 = -1;
volatile int32_t x82 = 118;
uint16_t x84 = 162U;
static int8_t x86 = INT8_MIN;
static uint8_t x87 = UINT8_MAX;
uint16_t x89 = 268U;
int32_t x92 = INT32_MIN;
int64_t x94 = INT64_MAX;
static uint64_t t14 = 33470LLU;
volatile int16_t x101 = -1;
uint64_t x104 = UINT64_MAX;
uint8_t x120 = UINT8_MAX;
int32_t t19 = -450218230;
int8_t x128 = INT8_MAX;
int32_t x139 = INT32_MAX;
uint32_t x162 = UINT32_MAX;
int64_t x164 = INT64_MIN;
static int8_t x167 = INT8_MAX;
volatile int32_t t28 = -1;
volatile int16_t x173 = INT16_MAX;
int8_t x181 = -4;
uint16_t x194 = UINT16_MAX;
volatile int64_t t31 = 3158LL;
uint16_t x201 = UINT16_MAX;
uint8_t x202 = 15U;
uint32_t x203 = 421822U;
volatile uint32_t t32 = 147U;
uint64_t x211 = 14LLU;
uint32_t x214 = UINT32_MAX;
int32_t x222 = 30526;
uint64_t x241 = 93LLU;
volatile uint64_t t39 = 83780184745286LLU;
static volatile int64_t x257 = -1LL;
int8_t x260 = 0;
int8_t x261 = -3;
int8_t x276 = INT8_MIN;
int16_t x279 = INT16_MIN;
uint8_t x282 = 13U;
volatile int16_t x283 = INT16_MIN;
volatile uint64_t x284 = 264848789LLU;
volatile uint64_t t45 = 12LLU;
uint64_t x286 = UINT64_MAX;
int64_t t47 = 176811242898890199LL;
uint64_t x293 = 237937LLU;
int8_t x309 = -34;
int64_t x313 = -361LL;
int8_t x314 = INT8_MAX;
volatile int32_t x335 = -1;
int64_t t56 = -17088716304412LL;
volatile uint64_t x346 = 32584563310LLU;
int64_t x348 = INT64_MAX;
static int32_t x349 = -154;
int32_t x351 = -3675;
uint32_t x357 = 13964U;
volatile int32_t x358 = INT32_MIN;
volatile int64_t x368 = 4522LL;
volatile int64_t t63 = 32736163LL;
static int16_t x370 = INT16_MIN;
int8_t x372 = 27;
int8_t x374 = INT8_MIN;
volatile int64_t t65 = -138280842731718170LL;
uint32_t x377 = UINT32_MAX;
int16_t x378 = INT16_MIN;
static int16_t x382 = INT16_MIN;
int8_t x384 = INT8_MAX;
volatile int8_t x386 = INT8_MAX;
int16_t x388 = 1;
uint32_t x389 = 14504U;
int8_t x392 = INT8_MIN;
int8_t x412 = INT8_MIN;
int32_t t72 = 240164061;
uint32_t t73 = 13969008U;
int32_t x423 = -1;
static uint8_t x434 = 27U;
int32_t t75 = 1;
int8_t x440 = -37;
volatile uint32_t t76 = 13096313U;
int8_t x445 = -1;
static int64_t t77 = -2605311LL;
int64_t x460 = -5LL;
static int64_t t81 = 12468787516177211LL;
int16_t x477 = INT16_MAX;
int8_t x478 = 0;
static uint32_t x480 = 986085U;
int16_t x490 = INT16_MIN;
volatile uint32_t x498 = 94U;
int32_t x502 = INT32_MIN;
uint16_t x505 = UINT16_MAX;
volatile int16_t x508 = 480;
volatile uint64_t t88 = 0LLU;
uint32_t x518 = UINT32_MAX;
static uint64_t x533 = 646254415998LLU;
uint16_t x535 = UINT16_MAX;
volatile int8_t x539 = 48;
int8_t x560 = 1;
int16_t x573 = INT16_MIN;


void f0(void) {
	int8_t x1 = -1;
	volatile uint32_t x2 = 780716U;
	volatile int16_t x3 = 621;
	uint16_t x4 = UINT16_MAX;
	volatile uint32_t t0 = 4223U;

	t0 = (((x1*x2)^x3)+x4);

	if (t0 != 4294251576U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 3690380LLU;
	int16_t x10 = -151;
	int64_t x11 = 7265416265234355LL;
	volatile uint64_t t1 = 7161LLU;

	t1 = (((x9*x10)^x11)+x12);

	if (t1 != 18439478656925131742LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = INT16_MIN;
	static volatile int8_t x14 = 13;
	static volatile int16_t x15 = -61;
	volatile int64_t t2 = -44659937LL;

	t2 = (((x13*x14)^x15)+x16);

	if (t2 != 425928LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x37 = 147LL;
	int32_t x38 = INT32_MIN;
	uint32_t x39 = 57195168U;
	int64_t x40 = INT64_MAX;
	int64_t t3 = -89867LL;

	t3 = (((x37*x38)^x39)+x40);

	if (t3 != 9223371721231874719LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x41 = -1;
	volatile int8_t x43 = INT8_MAX;
	static uint32_t t4 = 3U;

	t4 = (((x41*x42)^x43)+x44);

	if (t4 != 125U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x45 = -4236;
	int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MIN;

	t5 = (((x45*x46)^x47)+x48);

	if (t5 != -2008678398) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x49 = -1;
	uint16_t x51 = 2U;
	static int64_t t6 = 52403419171LL;

	t6 = (((x49*x50)^x51)+x52);

	if (t6 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x57 = 6U;
	volatile int16_t x58 = INT16_MIN;
	volatile int16_t x59 = -1;
	int16_t x60 = -1;

	t7 = (((x57*x58)^x59)+x60);

	if (t7 != 196606) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x65 = INT8_MIN;
	volatile uint8_t x66 = UINT8_MAX;
	static uint16_t x67 = 0U;
	uint8_t x68 = 32U;
	volatile int32_t t8 = -756571187;

	t8 = (((x65*x66)^x67)+x68);

	if (t8 != -32608) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x69 = -916;
	static int16_t x70 = 59;
	uint16_t x71 = 11287U;
	uint64_t x72 = 60595070653421LLU;
	volatile uint64_t t9 = 407019783737LLU;

	t9 = (((x69*x70)^x71)+x72);

	if (t9 != 60595070588128LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x77 = 18;
	int8_t x79 = -1;
	int8_t x80 = INT8_MIN;
	volatile int32_t t10 = 36028;

	t10 = (((x77*x78)^x79)+x80);

	if (t10 != -111) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x81 = INT16_MAX;
	volatile int16_t x83 = INT16_MIN;
	volatile int32_t t11 = -1269;

	t11 = (((x81*x82)^x83)+x84);

	if (t11 != -3833812) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x85 = -1;
	static int32_t x88 = INT32_MIN;
	volatile int32_t t12 = -216;

	t12 = (((x85*x86)^x87)+x88);

	if (t12 != -2147483521) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x90 = -1;
	static int16_t x91 = -1;
	volatile int32_t t13 = -3704;

	t13 = (((x89*x90)^x91)+x92);

	if (t13 != -2147483381) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x93 = 5115326488LLU;
	int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MAX;

	t14 = (((x93*x94)^x95)+x96);

	if (t14 != 18446744068594225127LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x97 = 2U;
	int64_t x98 = -1LL;
	uint32_t x99 = 261453U;
	int64_t x100 = INT64_MAX;
	volatile int64_t t15 = 101873LL;

	t15 = (((x97*x98)^x99)+x100);

	if (t15 != 9223372036854514354LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x102 = 315U;
	static volatile int32_t x103 = 13327;
	static volatile uint64_t t16 = 164554811587340LLU;

	t16 = (((x101*x102)^x103)+x104);

	if (t16 != 18446744073709537993LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x105 = UINT16_MAX;
	uint64_t x106 = 32974060LLU;
	uint64_t x107 = UINT64_MAX;
	int64_t x108 = INT64_MIN;
	uint64_t t17 = 1141384LLU;

	t17 = (((x105*x106)^x107)+x108);

	if (t17 != 9223369875899753707LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x113 = -4;
	static int16_t x114 = INT16_MIN;
	int16_t x115 = 1;
	volatile int16_t x116 = -1165;
	volatile int32_t t18 = -86278;

	t18 = (((x113*x114)^x115)+x116);

	if (t18 != 129908) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x117 = -5;
	int8_t x118 = INT8_MAX;
	volatile int16_t x119 = INT16_MIN;

	t19 = (((x117*x118)^x119)+x120);

	if (t19 != 32388) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x121 = INT8_MAX;
	static int64_t x122 = -1LL;
	static int32_t x123 = INT32_MIN;
	uint64_t x124 = 69LLU;
	uint64_t t20 = 239481989850336LLU;

	t20 = (((x121*x122)^x123)+x124);

	if (t20 != 2147483590LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = 0;
	volatile uint16_t x126 = 53U;
	int16_t x127 = -13493;
	int32_t t21 = -26019;

	t21 = (((x125*x126)^x127)+x128);

	if (t21 != -13366) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x129 = -1;
	volatile int32_t x130 = -58743346;
	static uint32_t x131 = 0U;
	volatile uint16_t x132 = UINT16_MAX;
	uint32_t t22 = 251617233U;

	t22 = (((x129*x130)^x131)+x132);

	if (t22 != 58808881U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x133 = 1868LL;
	volatile uint8_t x134 = UINT8_MAX;
	static volatile int64_t x135 = INT64_MIN;
	int64_t x136 = -1LL;
	int64_t t23 = 2175917373060417LL;

	t23 = (((x133*x134)^x135)+x136);

	if (t23 != -9223372036854299469LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = -2777277294012LL;
	uint64_t x138 = UINT64_MAX;
	int16_t x140 = INT16_MIN;
	volatile uint64_t t24 = 104342LLU;

	t24 = (((x137*x138)^x139)+x140);

	if (t24 != 2778262870595LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x141 = UINT64_MAX;
	volatile uint64_t x142 = 738657028961LLU;
	int16_t x143 = INT16_MAX;
	uint64_t x144 = 238621122LLU;
	volatile uint64_t t25 = 16270LLU;

	t25 = (((x141*x142)^x143)+x144);

	if (t25 != 18446743335291149602LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x157 = INT8_MAX;
	volatile int8_t x158 = INT8_MAX;
	static volatile int32_t x159 = -1;
	volatile int64_t x160 = INT64_MAX;
	int64_t t26 = -28341024064917085LL;

	t26 = (((x157*x158)^x159)+x160);

	if (t26 != 9223372036854759677LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x161 = UINT8_MAX;
	volatile int32_t x163 = INT32_MIN;
	volatile int64_t t27 = -2480728958661910857LL;

	t27 = (((x161*x162)^x163)+x164);

	if (t27 != -9223372034707292415LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x165 = 21U;
	static uint8_t x166 = UINT8_MAX;
	int32_t x168 = INT32_MIN;

	t28 = (((x165*x166)^x167)+x168);

	if (t28 != -2147478380) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x174 = INT8_MIN;
	volatile uint8_t x175 = UINT8_MAX;
	static int8_t x176 = INT8_MAX;
	volatile int32_t t29 = 1;

	t29 = (((x173*x174)^x175)+x176);

	if (t29 != -4194050) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x182 = 11U;
	int32_t x183 = 52;
	uint16_t x184 = 6U;
	volatile int32_t t30 = -91753157;

	t30 = (((x181*x182)^x183)+x184);

	if (t30 != -26) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x193 = 40642U;
	static int8_t x195 = 11;
	int64_t x196 = -1LL;

	t31 = (((x193*x194)^x195)+x196);

	if (t31 != 2663473460LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x204 = -217059721;

	t32 = (((x201*x202)^x203)+x204);

	if (t32 != 4078468806U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = 0;
	int32_t x207 = -295052661;
	int64_t x208 = 459910594LL;
	int64_t t33 = 10812216LL;

	t33 = (((x205*x206)^x207)+x208);

	if (t33 != 164857933LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x209 = UINT32_MAX;
	volatile uint32_t x210 = UINT32_MAX;
	int64_t x212 = -1LL;
	volatile uint64_t t34 = 39LLU;

	t34 = (((x209*x210)^x211)+x212);

	if (t34 != 14LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x213 = 51U;
	volatile int16_t x215 = INT16_MAX;
	uint8_t x216 = 5U;
	static volatile uint32_t t35 = 32342U;

	t35 = (((x213*x214)^x215)+x216);

	if (t35 != 4294934583U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x221 = UINT32_MAX;
	int16_t x223 = 464;
	uint64_t x224 = 67816371911586354LLU;
	uint64_t t36 = 177861663LLU;

	t36 = (((x221*x222)^x223)+x224);

	if (t36 != 67816376206523204LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x225 = INT32_MIN;
	uint64_t x226 = 1LLU;
	int64_t x227 = -1LL;
	int64_t x228 = INT64_MAX;
	uint64_t t37 = 2002551417441LLU;

	t37 = (((x225*x226)^x227)+x228);

	if (t37 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x229 = 7;
	static int16_t x230 = INT16_MAX;
	volatile int16_t x231 = INT16_MIN;
	int16_t x232 = -1;
	int32_t t38 = 59532856;

	t38 = (((x229*x230)^x231)+x232);

	if (t38 != -196616) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x242 = INT8_MIN;
	volatile uint8_t x243 = 1U;
	static int32_t x244 = -1;

	t39 = (((x241*x242)^x243)+x244);

	if (t39 != 18446744073709539712LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x249 = 10;
	int8_t x250 = INT8_MIN;
	uint64_t x251 = 1741670828LLU;
	int16_t x252 = -503;
	static uint64_t t40 = 11677777LLU;

	t40 = (((x249*x250)^x251)+x252);

	if (t40 != 18446744071967879349LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x258 = 246;
	int64_t x259 = INT64_MIN;
	static volatile int64_t t41 = -61684LL;

	t41 = (((x257*x258)^x259)+x260);

	if (t41 != 9223372036854775562LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x262 = UINT16_MAX;
	int32_t x263 = -1;
	static int8_t x264 = INT8_MIN;
	int32_t t42 = -180087;

	t42 = (((x261*x262)^x263)+x264);

	if (t42 != 196476) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x273 = -1LL;
	uint32_t x274 = UINT32_MAX;
	volatile int32_t x275 = -22412374;
	volatile int64_t t43 = -163811321LL;

	t43 = (((x273*x274)^x275)+x276);

	if (t43 != 4272554795LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x277 = 15U;
	int64_t x278 = -8673537361764401LL;
	uint64_t x280 = 95363909188LLU;
	uint64_t t44 = 865473220LLU;

	t44 = (((x277*x278)^x279)+x280);

	if (t44 != 130103155790390117LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x281 = -1;

	t45 = (((x281*x282)^x283)+x284);

	if (t45 != 264881544LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x285 = INT8_MIN;
	int32_t x287 = -22790;
	int64_t x288 = INT64_MIN;
	volatile uint64_t t46 = 2473291LLU;

	t46 = (((x285*x286)^x287)+x288);

	if (t46 != 9223372036854752890LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x289 = 0;
	static int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MIN;
	int64_t x292 = INT64_MAX;

	t47 = (((x289*x290)^x291)+x292);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x294 = -74;
	uint8_t x295 = UINT8_MAX;
	uint64_t x296 = 1068922667117LLU;
	volatile uint64_t t48 = 28881022352806246LLU;

	t48 = (((x293*x294)^x295)+x296);

	if (t48 != 1068905059862LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x297 = INT16_MIN;
	static int64_t x298 = 215274LL;
	int64_t x299 = INT64_MIN;
	int8_t x300 = INT8_MAX;
	int64_t t49 = -1LL;

	t49 = (((x297*x298)^x299)+x300);

	if (t49 != 9223372029800677503LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x301 = UINT16_MAX;
	uint32_t x302 = 9806U;
	volatile uint64_t x303 = UINT64_MAX;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t50 = 1568673470LLU;

	t50 = (((x301*x302)^x303)+x304);

	if (t50 != 18446744073066915404LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x310 = INT8_MIN;
	uint8_t x311 = 9U;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t51 = -1;

	t51 = (((x309*x310)^x311)+x312);

	if (t51 != -28407) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x315 = UINT32_MAX;
	int32_t x316 = -1;
	volatile int64_t t52 = 122359839146857LL;

	t52 = (((x313*x314)^x315)+x316);

	if (t52 != -4294921451LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x317 = 101417;
	int32_t x318 = -1;
	int64_t x319 = -1LL;
	static int64_t x320 = INT64_MIN;
	volatile int64_t t53 = -47842114410LL;

	t53 = (((x317*x318)^x319)+x320);

	if (t53 != -9223372036854674392LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x325 = 106075723462LLU;
	uint32_t x326 = 1047858U;
	static int8_t x327 = 0;
	int64_t x328 = INT64_MIN;
	volatile uint64_t t54 = 169LLU;

	t54 = (((x325*x326)^x327)+x328);

	if (t54 != 9334524332290220204LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x329 = 2311424U;
	int32_t x330 = INT32_MAX;
	int16_t x331 = 42;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t55 = 4U;

	t55 = (((x329*x330)^x331)+x332);

	if (t55 != 4292655913U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x333 = -1;
	int64_t x334 = 46310697LL;
	int32_t x336 = INT32_MIN;

	t56 = (((x333*x334)^x335)+x336);

	if (t56 != -2101172952LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x337 = INT8_MIN;
	uint64_t x338 = 34363515500LLU;
	uint32_t x339 = 203318275U;
	int64_t x340 = INT64_MIN;
	volatile uint64_t t57 = 85688LLU;

	t57 = (((x337*x338)^x339)+x340);

	if (t57 != 9223367638526242307LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x341 = INT8_MIN;
	static int8_t x342 = 4;
	int32_t x343 = INT32_MAX;
	uint64_t x344 = UINT64_MAX;
	uint64_t t58 = 91799LLU;

	t58 = (((x341*x342)^x343)+x344);

	if (t58 != 18446744071562068478LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x345 = UINT16_MAX;
	uint32_t x347 = 0U;
	static uint64_t t59 = 4620LLU;

	t59 = (((x345*x346)^x347)+x348);

	if (t59 != 9225507466211296657LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x350 = -62LL;
	int16_t x352 = INT16_MAX;
	static int64_t t60 = -1031652403131LL;

	t60 = (((x349*x350)^x351)+x352);

	if (t60 != 21736LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x353 = 989;
	static uint8_t x354 = 24U;
	int16_t x355 = INT16_MIN;
	int16_t x356 = -523;
	int32_t t61 = 2;

	t61 = (((x353*x354)^x355)+x356);

	if (t61 != -9555) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x359 = INT32_MIN;
	int16_t x360 = INT16_MIN;
	volatile uint32_t t62 = 228149248U;

	t62 = (((x357*x358)^x359)+x360);

	if (t62 != 2147450880U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x365 = INT8_MAX;
	static uint16_t x366 = 173U;
	volatile int64_t x367 = 161444421969598LL;

	t63 = (((x365*x366)^x367)+x368);

	if (t63 != 161444421993751LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x369 = INT8_MIN;
	volatile uint64_t x371 = 58588005698202LLU;
	volatile uint64_t t64 = 18866300LLU;

	t64 = (((x369*x370)^x371)+x372);

	if (t64 != 58588001503925LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x373 = 18U;
	uint32_t x375 = 22U;
	int64_t x376 = INT64_MIN;

	t65 = (((x373*x374)^x375)+x376);

	if (t65 != -9223372032559810794LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x379 = INT64_MAX;
	int16_t x380 = 10822;
	int64_t t66 = -36330872355133LL;

	t66 = (((x377*x378)^x379)+x380);

	if (t66 != 9223372036854753861LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x381 = 14;
	static uint32_t x383 = 116807055U;
	static uint32_t t67 = 45553060U;

	t67 = (((x381*x382)^x383)+x384);

	if (t67 != 4178531854U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x385 = 79;
	int64_t x387 = 67231190768502LL;
	volatile int64_t t68 = -8002904500831LL;

	t68 = (((x385*x386)^x387)+x388);

	if (t68 != 67231190776904LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x390 = 1;
	int64_t x391 = -1LL;
	static int64_t t69 = 310351236689740LL;

	t69 = (((x389*x390)^x391)+x392);

	if (t69 != -14633LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x393 = 0;
	int8_t x394 = -1;
	int16_t x395 = -1;
	uint64_t x396 = 1892100959562LLU;
	static uint64_t t70 = 1LLU;

	t70 = (((x393*x394)^x395)+x396);

	if (t70 != 1892100959561LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x401 = UINT16_MAX;
	uint64_t x402 = 50846375780LLU;
	int32_t x403 = INT32_MIN;
	uint16_t x404 = UINT16_MAX;
	static uint64_t t71 = 2042623455883LLU;

	t71 = (((x401*x402)^x403)+x404);

	if (t71 != 18443411856765149339LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x409 = 0;
	uint16_t x410 = 1599U;
	uint16_t x411 = UINT16_MAX;

	t72 = (((x409*x410)^x411)+x412);

	if (t72 != 65407) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x413 = UINT32_MAX;
	int16_t x414 = INT16_MIN;
	int16_t x415 = INT16_MIN;
	int16_t x416 = INT16_MIN;

	t73 = (((x413*x414)^x415)+x416);

	if (t73 != 4294868992U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x421 = INT32_MAX;
	static int16_t x422 = -1;
	uint32_t x424 = 427U;
	volatile uint32_t t74 = 27U;

	t74 = (((x421*x422)^x423)+x424);

	if (t74 != 2147484073U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x433 = UINT16_MAX;
	static volatile int8_t x435 = INT8_MIN;
	static int8_t x436 = -1;

	t75 = (((x433*x434)^x435)+x436);

	if (t75 != -1769372) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x437 = INT16_MIN;
	int16_t x438 = INT16_MIN;
	static uint32_t x439 = 248U;

	t76 = (((x437*x438)^x439)+x440);

	if (t76 != 1073742035U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x446 = INT8_MAX;
	int64_t x447 = 343346672867LL;
	static int64_t x448 = -13802374393LL;

	t77 = (((x445*x446)^x447)+x448);

	if (t77 != -357149047191LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x449 = 0U;
	volatile int16_t x450 = INT16_MIN;
	int8_t x451 = -1;
	int8_t x452 = INT8_MAX;
	static int32_t t78 = 1;

	t78 = (((x449*x450)^x451)+x452);

	if (t78 != 126) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x457 = UINT64_MAX;
	static volatile uint64_t x458 = UINT64_MAX;
	volatile uint64_t x459 = UINT64_MAX;
	uint64_t t79 = 3LLU;

	t79 = (((x457*x458)^x459)+x460);

	if (t79 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x461 = INT64_MIN;
	uint64_t x462 = 18592547159LLU;
	volatile int16_t x463 = INT16_MIN;
	static volatile int64_t x464 = -1LL;
	volatile uint64_t t80 = 1550LLU;

	t80 = (((x461*x462)^x463)+x464);

	if (t80 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x465 = -1LL;
	volatile int32_t x466 = -1;
	int16_t x467 = INT16_MAX;
	static int16_t x468 = INT16_MIN;

	t81 = (((x465*x466)^x467)+x468);

	if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x469 = -14164;
	uint64_t x470 = UINT64_MAX;
	volatile int8_t x471 = -1;
	int64_t x472 = INT64_MIN;
	volatile uint64_t t82 = 1219LLU;

	t82 = (((x469*x470)^x471)+x472);

	if (t82 != 9223372036854761643LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x473 = INT16_MIN;
	uint64_t x474 = 2257906LLU;
	int32_t x475 = INT32_MIN;
	static uint16_t x476 = UINT16_MAX;
	uint64_t t83 = 45239931LLU;

	t83 = (((x473*x474)^x475)+x476);

	if (t83 != 74189373439LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x479 = INT64_MIN;
	int64_t t84 = 106780593LL;

	t84 = (((x477*x478)^x479)+x480);

	if (t84 != -9223372036853789723LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x489 = 79U;
	volatile int32_t x491 = INT32_MIN;
	int32_t x492 = 4075;
	int32_t t85 = 28808;

	t85 = (((x489*x490)^x491)+x492);

	if (t85 != 2144899051) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x497 = UINT64_MAX;
	int8_t x499 = INT8_MAX;
	int64_t x500 = -1LL;
	volatile uint64_t t86 = 1LLU;

	t86 = (((x497*x498)^x499)+x500);

	if (t86 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x501 = 1;
	int16_t x503 = 44;
	volatile int32_t x504 = INT32_MAX;
	int32_t t87 = 1;

	t87 = (((x501*x502)^x503)+x504);

	if (t87 != 43) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x506 = 919591185551LLU;
	volatile uint32_t x507 = UINT32_MAX;

	t88 = (((x505*x506)^x507)+x508);

	if (t88 != 60265405638831726LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x509 = INT16_MAX;
	int8_t x510 = INT8_MIN;
	static volatile int16_t x511 = -5644;
	static uint32_t x512 = 85020U;
	uint32_t t89 = 276324U;

	t89 = (((x509*x510)^x511)+x512);

	if (t89 != 4273552U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x517 = 14;
	static int16_t x519 = 5;
	volatile int32_t x520 = INT32_MIN;
	static uint32_t t90 = 98178283U;

	t90 = (((x517*x518)^x519)+x520);

	if (t90 != 2147483639U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x521 = -1LL;
	static int16_t x522 = INT16_MIN;
	int32_t x523 = INT32_MIN;
	uint64_t x524 = UINT64_MAX;
	volatile uint64_t t91 = 9541617631106915LLU;

	t91 = (((x521*x522)^x523)+x524);

	if (t91 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x529 = UINT64_MAX;
	uint64_t x530 = UINT64_MAX;
	int64_t x531 = INT64_MAX;
	volatile int32_t x532 = 45053327;
	volatile uint64_t t92 = 3323LLU;

	t92 = (((x529*x530)^x531)+x532);

	if (t92 != 9223372036899829133LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x534 = UINT16_MAX;
	int16_t x536 = INT16_MIN;
	uint64_t t93 = 26957928153729381LLU;

	t93 = (((x533*x534)^x535)+x536);

	if (t93 != 42352283152437373LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x537 = INT64_MAX;
	int8_t x538 = -1;
	uint8_t x540 = UINT8_MAX;
	int64_t t94 = 681953555568795880LL;

	t94 = (((x537*x538)^x539)+x540);

	if (t94 != -9223372036854775504LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x541 = 13U;
	uint64_t x542 = 68762865576022013LLU;
	volatile int8_t x543 = 39;
	int32_t x544 = INT32_MIN;
	uint64_t t95 = 280LLU;

	t95 = (((x541*x542)^x543)+x544);

	if (t95 != 893917250340802558LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x545 = 3;
	int8_t x546 = -1;
	static int64_t x547 = INT64_MAX;
	volatile int16_t x548 = -1;
	volatile int64_t t96 = 3925434LL;

	t96 = (((x545*x546)^x547)+x548);

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x553 = INT16_MAX;
	uint32_t x554 = 7U;
	uint16_t x555 = 3U;
	volatile int64_t x556 = -145298600494337304LL;
	int64_t t97 = 437513247LL;

	t97 = (((x553*x554)^x555)+x556);

	if (t97 != -145298600494107934LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x557 = 18U;
	uint16_t x558 = 7002U;
	uint64_t x559 = UINT64_MAX;
	volatile uint64_t t98 = 112300442LLU;

	t98 = (((x557*x558)^x559)+x560);

	if (t98 != 18446744073709425580LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x574 = INT8_MAX;
	int8_t x575 = -1;
	volatile int16_t x576 = -1;
	int32_t t99 = 10;

	t99 = (((x573*x574)^x575)+x576);

	if (t99 != 4161534) { NG(); } else { ; }
	
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


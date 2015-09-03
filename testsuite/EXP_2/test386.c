#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x14 = INT8_MIN;
static int64_t x18 = 59190780087LL;
int16_t x22 = INT16_MIN;
int16_t x34 = INT16_MIN;
uint64_t x36 = 4LLU;
uint16_t x45 = 1251U;
int8_t x48 = INT8_MIN;
int8_t x50 = 27;
int32_t t7 = 13903393;
uint32_t x67 = 26081818U;
int32_t t13 = 4095109;
static volatile int8_t x85 = 14;
int32_t x94 = INT32_MIN;
int16_t x98 = -1;
int8_t x100 = -1;
uint64_t x104 = 27894284212805LLU;
volatile uint32_t x107 = UINT32_MAX;
uint32_t x108 = 666505U;
uint8_t x112 = UINT8_MAX;
int64_t x113 = -4323332LL;
volatile uint16_t x129 = 5U;
uint16_t x133 = 1843U;
uint8_t x136 = 0U;
int8_t x139 = -1;
uint64_t x140 = 12827LLU;
uint64_t x161 = UINT64_MAX;
int64_t x168 = -1LL;
static uint16_t x173 = 11U;
int32_t x175 = -1;
int32_t t33 = 285510354;
uint32_t x180 = 10156052U;
static int8_t x203 = 1;
volatile int16_t x205 = 1;
int16_t x210 = -3;
uint8_t x220 = 3U;
uint16_t x222 = UINT16_MAX;
uint64_t x223 = 81503LLU;
int8_t x229 = -1;
uint32_t x230 = 460626U;
int8_t x231 = INT8_MAX;
uint64_t x232 = UINT64_MAX;
int16_t x239 = -1;
int8_t x244 = -1;
static int64_t x253 = 2626600575534LL;
volatile int32_t t49 = 12768030;
volatile int64_t x264 = -2834129483LL;
int8_t x267 = INT8_MIN;
int32_t t51 = 29;
volatile int8_t x270 = INT8_MIN;
static volatile int64_t x276 = -121893LL;
int32_t t53 = 88;
volatile int8_t x284 = 61;
volatile uint32_t x298 = 16054953U;
int8_t x305 = INT8_MIN;
static volatile int32_t t59 = 85;
volatile int8_t x309 = 0;
uint64_t x317 = 7801LLU;
int64_t x320 = 35880550387202459LL;
uint8_t x323 = UINT8_MAX;
uint16_t x327 = 1U;
uint16_t x337 = 37U;
volatile uint16_t x339 = 110U;
volatile int32_t t66 = 3;
uint64_t x345 = UINT64_MAX;
int64_t x347 = -2LL;
int8_t x351 = 2;
static int8_t x355 = -1;
int64_t x365 = -6660506LL;
static int32_t t71 = 1;
uint64_t x369 = 24872501156LLU;
volatile int32_t t72 = -1036758;
int32_t t73 = -390063792;
static int16_t x384 = INT16_MIN;
uint32_t x385 = 14U;
volatile int32_t t76 = 0;
int8_t x398 = -1;
uint32_t x404 = 1U;
int32_t x405 = 116272712;
volatile int32_t t81 = -24;
uint8_t x417 = 1U;
int8_t x421 = 31;
int16_t x428 = -2;
volatile int16_t x435 = INT16_MIN;
int16_t x437 = INT16_MAX;
int32_t x439 = -1637720;
int64_t x448 = INT64_MIN;
uint16_t x465 = 6U;
uint16_t x469 = 434U;
static uint64_t x478 = 23291706LLU;
uint64_t x480 = 225993466LLU;
volatile int32_t t95 = 4;
int32_t t96 = -4457158;
int32_t t97 = 884772;
volatile int8_t x500 = INT8_MIN;


void f0(void) {
	int64_t x13 = INT64_MAX;
	static uint16_t x15 = 718U;
	uint8_t x16 = UINT8_MAX;
	int32_t t0 = 1;

	t0 = ((x13/(x14*x15))<x16);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x17 = 14U;
	int8_t x19 = INT8_MIN;
	volatile int32_t x20 = 27;
	int32_t t1 = -269;

	t1 = ((x17/(x18*x19))<x20);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x21 = 1U;
	int64_t x23 = -146737LL;
	uint64_t x24 = 15959557307496LLU;
	int32_t t2 = 1181;

	t2 = ((x21/(x22*x23))<x24);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = 401;
	static volatile int8_t x35 = INT8_MIN;
	static volatile int32_t t3 = -2767;

	t3 = ((x33/(x34*x35))<x36);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MIN;
	volatile uint8_t x39 = 91U;
	int8_t x40 = INT8_MAX;
	int32_t t4 = -29;

	t4 = ((x37/(x38*x39))<x40);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x41 = INT64_MIN;
	static uint16_t x42 = 279U;
	int8_t x43 = INT8_MAX;
	uint32_t x44 = 1451867U;
	volatile int32_t t5 = 603;

	t5 = ((x41/(x42*x43))<x44);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x46 = 102U;
	int16_t x47 = INT16_MIN;
	static volatile int32_t t6 = -443;

	t6 = ((x45/(x46*x47))<x48);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = -2477355;
	int16_t x51 = INT16_MIN;
	volatile uint64_t x52 = 1742410717995647289LLU;

	t7 = ((x49/(x50*x51))<x52);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = 146851158LLU;
	uint32_t x54 = 13099994U;
	uint64_t x55 = 21866833784206628LLU;
	int32_t x56 = -873309149;
	volatile int32_t t8 = -6327839;

	t8 = ((x53/(x54*x55))<x56);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = INT64_MAX;
	int8_t x58 = INT8_MIN;
	static int8_t x59 = INT8_MIN;
	static uint32_t x60 = 62U;
	volatile int32_t t9 = 477;

	t9 = ((x57/(x58*x59))<x60);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = -7622;
	volatile int64_t x62 = -13357570771282LL;
	int16_t x63 = 7931;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t10 = 163623;

	t10 = ((x61/(x62*x63))<x64);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x65 = 10788803U;
	static uint16_t x66 = UINT16_MAX;
	static uint64_t x68 = UINT64_MAX;
	int32_t t11 = 221084;

	t11 = ((x65/(x66*x67))<x68);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x69 = INT32_MAX;
	uint32_t x70 = UINT32_MAX;
	static uint16_t x71 = 12078U;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t12 = -9;

	t12 = ((x69/(x70*x71))<x72);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x73 = INT16_MAX;
	volatile int16_t x74 = INT16_MIN;
	uint32_t x75 = 15U;
	uint64_t x76 = UINT64_MAX;

	t13 = ((x73/(x74*x75))<x76);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = INT32_MAX;
	static volatile uint16_t x78 = UINT16_MAX;
	int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MIN;
	int32_t t14 = -3288538;

	t14 = ((x77/(x78*x79))<x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x86 = 33;
	int8_t x87 = -15;
	uint64_t x88 = 128382323466595LLU;
	int32_t t15 = -7502409;

	t15 = ((x85/(x86*x87))<x88);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x89 = INT64_MIN;
	uint8_t x90 = UINT8_MAX;
	volatile int8_t x91 = INT8_MIN;
	int16_t x92 = INT16_MIN;
	static volatile int32_t t16 = 0;

	t16 = ((x89/(x90*x91))<x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x93 = 0;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = -1LL;
	int32_t t17 = 0;

	t17 = ((x93/(x94*x95))<x96);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x97 = INT8_MIN;
	int8_t x99 = -48;
	int32_t t18 = 5;

	t18 = ((x97/(x98*x99))<x100);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x101 = -1;
	int16_t x102 = -1;
	uint16_t x103 = 745U;
	int32_t t19 = 263534624;

	t19 = ((x101/(x102*x103))<x104);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = UINT32_MAX;
	uint16_t x106 = UINT16_MAX;
	static int32_t t20 = 6780;

	t20 = ((x105/(x106*x107))<x108);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x109 = 80;
	static volatile int16_t x110 = INT16_MIN;
	int8_t x111 = INT8_MAX;
	static int32_t t21 = 0;

	t21 = ((x109/(x110*x111))<x112);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x114 = UINT32_MAX;
	volatile uint8_t x115 = 1U;
	int8_t x116 = INT8_MIN;
	int32_t t22 = -354220298;

	t22 = ((x113/(x114*x115))<x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x121 = INT16_MIN;
	static int64_t x122 = INT64_MAX;
	int32_t x123 = -1;
	volatile uint32_t x124 = 53643859U;
	int32_t t23 = 61187661;

	t23 = ((x121/(x122*x123))<x124);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x125 = 3LL;
	static uint32_t x126 = 174461929U;
	int32_t x127 = 1073619;
	uint64_t x128 = 5205119472185LLU;
	int32_t t24 = -56;

	t24 = ((x125/(x126*x127))<x128);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x130 = -1;
	static volatile uint32_t x131 = UINT32_MAX;
	volatile uint8_t x132 = 3U;
	int32_t t25 = -2;

	t25 = ((x129/(x130*x131))<x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x134 = 1;
	int8_t x135 = -1;
	volatile int32_t t26 = 51922;

	t26 = ((x133/(x134*x135))<x136);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x137 = 1010678767;
	static int64_t x138 = -1LL;
	int32_t t27 = -1295;

	t27 = ((x137/(x138*x139))<x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x145 = INT64_MIN;
	volatile uint64_t x146 = UINT64_MAX;
	int64_t x147 = 1LL;
	int64_t x148 = -1LL;
	volatile int32_t t28 = -324123;

	t28 = ((x145/(x146*x147))<x148);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x149 = -2LL;
	int32_t x150 = 128430;
	volatile int16_t x151 = 353;
	int32_t x152 = -11135831;
	volatile int32_t t29 = 37;

	t29 = ((x149/(x150*x151))<x152);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x162 = 2402938066132804022LLU;
	static volatile int32_t x163 = -1;
	int16_t x164 = -1;
	volatile int32_t t30 = 9925400;

	t30 = ((x161/(x162*x163))<x164);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x165 = -1;
	int16_t x166 = 1;
	static uint64_t x167 = UINT64_MAX;
	int32_t t31 = 60188808;

	t31 = ((x165/(x166*x167))<x168);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x169 = 1224930470244LL;
	uint16_t x170 = 18907U;
	int16_t x171 = INT16_MAX;
	static int8_t x172 = -9;
	int32_t t32 = 2;

	t32 = ((x169/(x170*x171))<x172);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x174 = -1;
	volatile int8_t x176 = 1;

	t33 = ((x173/(x174*x175))<x176);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x177 = 0LLU;
	int8_t x178 = -7;
	int16_t x179 = -1;
	static int32_t t34 = -107196;

	t34 = ((x177/(x178*x179))<x180);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = -1;
	int16_t x183 = -414;
	int8_t x184 = -1;
	int32_t t35 = -306722;

	t35 = ((x181/(x182*x183))<x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x185 = INT32_MIN;
	uint64_t x186 = UINT64_MAX;
	static int64_t x187 = INT64_MIN;
	int16_t x188 = -1;
	int32_t t36 = -15407;

	t36 = ((x185/(x186*x187))<x188);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x193 = 107U;
	int8_t x194 = -6;
	volatile uint8_t x195 = 1U;
	volatile int8_t x196 = INT8_MAX;
	int32_t t37 = -9107;

	t37 = ((x193/(x194*x195))<x196);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x197 = 53U;
	static int64_t x198 = -74651258980603905LL;
	uint32_t x199 = 14U;
	uint64_t x200 = 13675LLU;
	volatile int32_t t38 = -3361;

	t38 = ((x197/(x198*x199))<x200);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = INT8_MAX;
	uint64_t x202 = UINT64_MAX;
	int64_t x204 = INT64_MIN;
	int32_t t39 = -1231;

	t39 = ((x201/(x202*x203))<x204);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x206 = INT64_MAX;
	static int64_t x207 = -1LL;
	int64_t x208 = -1LL;
	volatile int32_t t40 = 2907;

	t40 = ((x205/(x206*x207))<x208);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = 753060629995332LL;
	uint32_t x211 = UINT32_MAX;
	volatile int64_t x212 = -1716771LL;
	static volatile int32_t t41 = 363;

	t41 = ((x209/(x210*x211))<x212);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x217 = 1;
	static int16_t x218 = 1;
	volatile int16_t x219 = INT16_MAX;
	int32_t t42 = -3863584;

	t42 = ((x217/(x218*x219))<x220);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x221 = 942U;
	int64_t x224 = INT64_MIN;
	int32_t t43 = -695104;

	t43 = ((x221/(x222*x223))<x224);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x225 = -5;
	int8_t x226 = -49;
	uint16_t x227 = 5735U;
	int64_t x228 = INT64_MIN;
	int32_t t44 = -1025;

	t44 = ((x225/(x226*x227))<x228);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t t45 = 203246;

	t45 = ((x229/(x230*x231))<x232);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x237 = INT16_MAX;
	int8_t x238 = INT8_MIN;
	int8_t x240 = 0;
	volatile int32_t t46 = 2035053;

	t46 = ((x237/(x238*x239))<x240);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x241 = 11868947U;
	volatile int16_t x242 = 1037;
	volatile int64_t x243 = -3452LL;
	volatile int32_t t47 = 6736;

	t47 = ((x241/(x242*x243))<x244);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x245 = 15U;
	int32_t x246 = -1;
	int16_t x247 = INT16_MAX;
	int64_t x248 = INT64_MAX;
	int32_t t48 = -507;

	t48 = ((x245/(x246*x247))<x248);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x254 = UINT64_MAX;
	int64_t x255 = 103672121845807915LL;
	static int64_t x256 = -497999304155LL;

	t49 = ((x253/(x254*x255))<x256);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x261 = 3;
	uint64_t x262 = 139278892928230LLU;
	uint32_t x263 = UINT32_MAX;
	volatile int32_t t50 = -298;

	t50 = ((x261/(x262*x263))<x264);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = INT8_MIN;
	volatile int32_t x268 = INT32_MIN;

	t51 = ((x265/(x266*x267))<x268);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x269 = 6875673LL;
	static uint8_t x271 = 9U;
	static uint32_t x272 = 103862U;
	int32_t t52 = 0;

	t52 = ((x269/(x270*x271))<x272);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = 12247;
	uint64_t x275 = UINT64_MAX;

	t53 = ((x273/(x274*x275))<x276);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x277 = UINT64_MAX;
	static uint32_t x278 = 396U;
	int8_t x279 = INT8_MIN;
	uint16_t x280 = 1U;
	int32_t t54 = 21342212;

	t54 = ((x277/(x278*x279))<x280);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x281 = 6303544854139945LLU;
	int32_t x282 = -265;
	int8_t x283 = INT8_MIN;
	volatile int32_t t55 = -1952;

	t55 = ((x281/(x282*x283))<x284);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x289 = -1;
	uint64_t x290 = 30LLU;
	int64_t x291 = INT64_MAX;
	int32_t x292 = INT32_MAX;
	int32_t t56 = -31;

	t56 = ((x289/(x290*x291))<x292);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x293 = 172U;
	int16_t x294 = -1978;
	uint64_t x295 = UINT64_MAX;
	static int16_t x296 = INT16_MAX;
	volatile int32_t t57 = 1;

	t57 = ((x293/(x294*x295))<x296);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x297 = INT32_MAX;
	uint32_t x299 = UINT32_MAX;
	int32_t x300 = -1;
	static int32_t t58 = -30298882;

	t58 = ((x297/(x298*x299))<x300);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x306 = 3U;
	uint32_t x307 = UINT32_MAX;
	int8_t x308 = INT8_MIN;

	t59 = ((x305/(x306*x307))<x308);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x310 = UINT64_MAX;
	volatile int8_t x311 = -1;
	uint32_t x312 = UINT32_MAX;
	int32_t t60 = 14;

	t60 = ((x309/(x310*x311))<x312);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x318 = 4283981U;
	static int16_t x319 = INT16_MAX;
	volatile int32_t t61 = -122;

	t61 = ((x317/(x318*x319))<x320);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x321 = -61;
	uint8_t x322 = 7U;
	static volatile int32_t x324 = -100;
	int32_t t62 = 2;

	t62 = ((x321/(x322*x323))<x324);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x325 = -78478;
	uint64_t x326 = 94LLU;
	int32_t x328 = INT32_MIN;
	int32_t t63 = 218;

	t63 = ((x325/(x326*x327))<x328);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x329 = UINT32_MAX;
	uint16_t x330 = UINT16_MAX;
	uint8_t x331 = UINT8_MAX;
	int8_t x332 = -1;
	int32_t t64 = 3508481;

	t64 = ((x329/(x330*x331))<x332);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x338 = UINT16_MAX;
	uint64_t x340 = 12LLU;
	volatile int32_t t65 = -79460;

	t65 = ((x337/(x338*x339))<x340);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x341 = UINT16_MAX;
	int8_t x342 = 11;
	int64_t x343 = -1LL;
	volatile int64_t x344 = -25981913595LL;

	t66 = ((x341/(x342*x343))<x344);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x346 = INT8_MIN;
	volatile int64_t x348 = INT64_MAX;
	volatile int32_t t67 = -433;

	t67 = ((x345/(x346*x347))<x348);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MAX;
	int16_t x352 = 1386;
	volatile int32_t t68 = -139437715;

	t68 = ((x349/(x350*x351))<x352);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x353 = INT64_MAX;
	int16_t x354 = INT16_MIN;
	int32_t x356 = -60;
	volatile int32_t t69 = -1;

	t69 = ((x353/(x354*x355))<x356);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x357 = INT64_MAX;
	volatile int8_t x358 = INT8_MAX;
	volatile int64_t x359 = -1LL;
	static int8_t x360 = INT8_MIN;
	int32_t t70 = 3;

	t70 = ((x357/(x358*x359))<x360);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x366 = INT32_MAX;
	uint64_t x367 = UINT64_MAX;
	uint8_t x368 = 14U;

	t71 = ((x365/(x366*x367))<x368);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x370 = -1LL;
	int16_t x371 = -1;
	volatile uint32_t x372 = 2037100744U;

	t72 = ((x369/(x370*x371))<x372);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x377 = 28LL;
	volatile uint16_t x378 = 108U;
	int32_t x379 = -72;
	uint16_t x380 = 14811U;

	t73 = ((x377/(x378*x379))<x380);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x381 = INT32_MIN;
	volatile uint8_t x382 = UINT8_MAX;
	int8_t x383 = 2;
	volatile int32_t t74 = 38;

	t74 = ((x381/(x382*x383))<x384);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x386 = -1;
	static volatile int64_t x387 = -3547062197767LL;
	int64_t x388 = INT64_MAX;
	int32_t t75 = 119;

	t75 = ((x385/(x386*x387))<x388);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x389 = UINT16_MAX;
	static int16_t x390 = INT16_MAX;
	static uint16_t x391 = UINT16_MAX;
	static volatile int16_t x392 = INT16_MIN;

	t76 = ((x389/(x390*x391))<x392);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x393 = 1;
	volatile int32_t x394 = -47581766;
	static int8_t x395 = 2;
	static uint16_t x396 = 26510U;
	volatile int32_t t77 = 1;

	t77 = ((x393/(x394*x395))<x396);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x397 = -1LL;
	uint16_t x399 = UINT16_MAX;
	int8_t x400 = -42;
	static int32_t t78 = -237591;

	t78 = ((x397/(x398*x399))<x400);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = -617565388;
	volatile int64_t x403 = 1152LL;
	volatile int32_t t79 = -888427;

	t79 = ((x401/(x402*x403))<x404);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x406 = UINT8_MAX;
	static volatile uint32_t x407 = 175U;
	int32_t x408 = INT32_MIN;
	volatile int32_t t80 = -896575;

	t80 = ((x405/(x406*x407))<x408);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x413 = -16290375;
	uint64_t x414 = UINT64_MAX;
	int8_t x415 = INT8_MIN;
	uint16_t x416 = 78U;

	t81 = ((x413/(x414*x415))<x416);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x418 = -1;
	uint32_t x419 = UINT32_MAX;
	int64_t x420 = INT64_MIN;
	int32_t t82 = -8521;

	t82 = ((x417/(x418*x419))<x420);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x422 = 10U;
	int8_t x423 = INT8_MIN;
	uint64_t x424 = 1275LLU;
	volatile int32_t t83 = 4800497;

	t83 = ((x421/(x422*x423))<x424);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x425 = -1;
	int16_t x426 = -99;
	static uint8_t x427 = 103U;
	static volatile int32_t t84 = -3646592;

	t84 = ((x425/(x426*x427))<x428);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x429 = 0U;
	uint64_t x430 = 37LLU;
	int32_t x431 = INT32_MAX;
	uint32_t x432 = UINT32_MAX;
	int32_t t85 = 1023412;

	t85 = ((x429/(x430*x431))<x432);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x433 = -59;
	uint16_t x434 = 143U;
	static uint64_t x436 = 3816055533079LLU;
	static volatile int32_t t86 = -7454730;

	t86 = ((x433/(x434*x435))<x436);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x438 = -1LL;
	int8_t x440 = INT8_MAX;
	volatile int32_t t87 = -839404;

	t87 = ((x437/(x438*x439))<x440);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x441 = INT64_MIN;
	volatile uint64_t x442 = UINT64_MAX;
	int8_t x443 = 2;
	int32_t x444 = INT32_MAX;
	static int32_t t88 = -15019;

	t88 = ((x441/(x442*x443))<x444);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x445 = INT8_MIN;
	volatile int8_t x446 = INT8_MAX;
	int32_t x447 = -54;
	int32_t t89 = -43311710;

	t89 = ((x445/(x446*x447))<x448);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x449 = -5682791;
	int16_t x450 = INT16_MIN;
	volatile int16_t x451 = INT16_MIN;
	volatile int8_t x452 = 6;
	volatile int32_t t90 = -55195791;

	t90 = ((x449/(x450*x451))<x452);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x453 = 8923963188LL;
	uint32_t x454 = UINT32_MAX;
	volatile uint32_t x455 = 6071605U;
	uint32_t x456 = 647U;
	volatile int32_t t91 = -1161;

	t91 = ((x453/(x454*x455))<x456);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x457 = 2U;
	int8_t x458 = 49;
	volatile uint32_t x459 = 162402U;
	static uint32_t x460 = 23963492U;
	static volatile int32_t t92 = 28915;

	t92 = ((x457/(x458*x459))<x460);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x466 = UINT32_MAX;
	int32_t x467 = INT32_MIN;
	int64_t x468 = INT64_MIN;
	int32_t t93 = -1;

	t93 = ((x465/(x466*x467))<x468);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x470 = -1;
	uint8_t x471 = 22U;
	static int16_t x472 = 1;
	volatile int32_t t94 = 46012;

	t94 = ((x469/(x470*x471))<x472);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x477 = INT16_MAX;
	int64_t x479 = 12824LL;

	t95 = ((x477/(x478*x479))<x480);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x485 = UINT64_MAX;
	static int8_t x486 = INT8_MAX;
	static uint8_t x487 = UINT8_MAX;
	int32_t x488 = INT32_MIN;

	t96 = ((x485/(x486*x487))<x488);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x489 = INT64_MIN;
	volatile uint16_t x490 = 5U;
	static int8_t x491 = -1;
	static int8_t x492 = -1;

	t97 = ((x489/(x490*x491))<x492);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x493 = INT64_MAX;
	int32_t x494 = 3771198;
	int8_t x495 = -1;
	int16_t x496 = -1;
	int32_t t98 = 373;

	t98 = ((x493/(x494*x495))<x496);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x497 = -2055626LL;
	static volatile uint64_t x498 = 886047935308846LLU;
	volatile uint64_t x499 = 8881535LLU;
	int32_t t99 = -2907;

	t99 = ((x497/(x498*x499))<x500);

	if (t99 != 1) { NG(); } else { ; }
	
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


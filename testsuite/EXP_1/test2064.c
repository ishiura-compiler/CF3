#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = INT64_MIN;
static int32_t x11 = INT32_MAX;
int8_t x21 = INT8_MIN;
int32_t x26 = 497678;
int32_t t5 = 706960;
uint16_t x33 = 14U;
volatile uint8_t x40 = UINT8_MAX;
static volatile int8_t x42 = INT8_MIN;
static int8_t x46 = INT8_MAX;
static int8_t x49 = -2;
volatile uint8_t x53 = UINT8_MAX;
uint64_t x56 = 112338742818LLU;
int8_t x59 = INT8_MAX;
volatile int32_t t12 = 471671655;
volatile uint16_t x69 = 1U;
int64_t x87 = INT64_MIN;
int32_t x102 = INT32_MIN;
uint64_t x103 = 20LLU;
uint64_t x111 = 146LLU;
uint8_t x129 = 0U;
uint8_t x132 = UINT8_MAX;
volatile uint16_t x133 = UINT16_MAX;
volatile int32_t t21 = -688791658;
int32_t x146 = INT32_MAX;
volatile int8_t x148 = 0;
int16_t x151 = 2;
static volatile int32_t t23 = -21218;
int8_t x155 = -1;
static int8_t x157 = 1;
volatile int8_t x159 = 13;
static int32_t x165 = -1;
uint16_t x171 = 6302U;
volatile int32_t t28 = -421;
volatile uint64_t x173 = 16642LLU;
uint64_t x174 = 126059LLU;
int8_t x175 = INT8_MAX;
uint16_t x178 = 75U;
uint32_t x185 = 250993128U;
static volatile int8_t x187 = INT8_MAX;
int64_t x190 = INT64_MAX;
int32_t t33 = 1016731;
int16_t x195 = INT16_MIN;
volatile int32_t t34 = 93134427;
volatile uint64_t x211 = 222929LLU;
int8_t x214 = INT8_MIN;
volatile uint16_t x222 = UINT16_MAX;
volatile uint64_t x225 = 2583LLU;
uint64_t x229 = UINT64_MAX;
uint32_t x231 = 25U;
volatile int32_t t42 = 30370;
static volatile int64_t x244 = -20096118414LL;
uint64_t x246 = UINT64_MAX;
int32_t x250 = INT32_MIN;
uint64_t x252 = UINT64_MAX;
static volatile uint32_t x259 = 1825036268U;
volatile int16_t x265 = 19;
int8_t x267 = INT8_MAX;
static volatile int32_t t49 = -407496;
uint8_t x276 = UINT8_MAX;
int8_t x279 = 1;
static int16_t x290 = -185;
uint16_t x293 = 3U;
uint16_t x295 = UINT16_MAX;
volatile int64_t x296 = 1018LL;
int32_t t57 = 1;
int16_t x313 = INT16_MIN;
uint64_t x317 = UINT64_MAX;
int16_t x323 = 12;
int64_t x327 = -1LL;
volatile int16_t x328 = INT16_MAX;
int64_t x332 = INT64_MIN;
volatile int8_t x334 = INT8_MIN;
int64_t x336 = INT64_MIN;
volatile int32_t t65 = -387398;
uint32_t x346 = 3U;
uint32_t x347 = UINT32_MAX;
int32_t t66 = 72369756;
int16_t x349 = -2874;
uint16_t x354 = 3843U;
int32_t t68 = 2;
int32_t t69 = -44098929;
int16_t x374 = -1998;
int8_t x375 = -1;
int32_t t72 = 1860;
uint64_t x383 = 2485041912866978051LLU;
uint16_t x384 = 18U;
uint64_t x387 = 1536997232LLU;
volatile int32_t x388 = 2;
static int32_t t74 = -11195;
int8_t x392 = -40;
volatile int32_t t75 = -101;
volatile int16_t x396 = INT16_MIN;
static uint32_t x404 = 7302862U;
int32_t t78 = 26;
volatile int32_t x408 = -8250127;
uint16_t x418 = 93U;
uint64_t x419 = 199107028597514792LLU;
volatile int32_t t83 = -8;
volatile int32_t x425 = -1;
static uint32_t x426 = 1063202U;
static int16_t x427 = 215;
volatile int32_t t84 = -5;
uint8_t x429 = 9U;
volatile uint64_t x433 = 3452439503476LLU;
uint16_t x434 = 99U;
int8_t x436 = INT8_MIN;
volatile int32_t t88 = 1592081;
volatile int32_t t89 = 72919;
volatile uint16_t x457 = 11154U;
static uint16_t x465 = 7U;
int32_t x466 = INT32_MAX;
uint64_t x471 = UINT64_MAX;
int8_t x477 = 1;
static uint32_t x478 = 717U;
int16_t x485 = -702;
int64_t x486 = INT64_MAX;


void f0(void) {
	static int32_t x5 = -1;
	int32_t x6 = INT32_MAX;
	uint64_t x7 = 23LLU;
	static int32_t t0 = -741267025;

	t0 = (((x5^x6)*x7)<=x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = 6U;
	static volatile int32_t x10 = INT32_MIN;
	volatile uint64_t x12 = 457094474115856618LLU;
	static int32_t t1 = -1719066;

	t1 = (((x9^x10)*x11)<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -201;
	uint64_t x14 = 10878923636472LLU;
	static int16_t x15 = INT16_MIN;
	uint8_t x16 = 13U;
	int32_t t2 = 120;

	t2 = (((x13^x14)*x15)<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = -1151810836370LL;
	uint32_t x18 = 17102U;
	int16_t x19 = INT16_MAX;
	uint64_t x20 = 14019349981080754LLU;
	static int32_t t3 = 130;

	t3 = (((x17^x18)*x19)<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x22 = 1U;
	int8_t x23 = 2;
	volatile int16_t x24 = 3;
	int32_t t4 = -763;

	t4 = (((x21^x22)*x23)<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = -1;
	uint8_t x27 = 13U;
	int32_t x28 = INT32_MIN;

	t5 = (((x25^x26)*x27)<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x34 = 223604LLU;
	static int16_t x35 = 1333;
	int8_t x36 = -7;
	volatile int32_t t6 = 7134;

	t6 = (((x33^x34)*x35)<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x37 = UINT64_MAX;
	volatile uint8_t x38 = 113U;
	int16_t x39 = -1;
	volatile int32_t t7 = -6;

	t7 = (((x37^x38)*x39)<=x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 251U;
	volatile uint16_t x43 = 2859U;
	volatile int64_t x44 = -1956752LL;
	volatile int32_t t8 = 1318821;

	t8 = (((x41^x42)*x43)<=x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 40521LLU;
	int8_t x47 = INT8_MIN;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t9 = 1;

	t9 = (((x45^x46)*x47)<=x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x50 = UINT32_MAX;
	uint8_t x51 = UINT8_MAX;
	uint64_t x52 = 17721925346452523LLU;
	volatile int32_t t10 = -190;

	t10 = (((x49^x50)*x51)<=x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x54 = INT8_MIN;
	static int16_t x55 = 4051;
	int32_t t11 = -10;

	t11 = (((x53^x54)*x55)<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 7;
	int16_t x58 = INT16_MIN;
	int64_t x60 = -1LL;

	t12 = (((x57^x58)*x59)<=x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x70 = -1;
	uint8_t x71 = 13U;
	uint64_t x72 = 15330278749LLU;
	int32_t t13 = -400287520;

	t13 = (((x69^x70)*x71)<=x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x85 = -1LL;
	uint64_t x86 = 979495627674LLU;
	int32_t x88 = -1;
	int32_t t14 = -447456076;

	t14 = (((x85^x86)*x87)<=x88);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x93 = 5667750783572LL;
	uint32_t x94 = 28502U;
	int16_t x95 = -1;
	uint32_t x96 = 0U;
	static int32_t t15 = -25253981;

	t15 = (((x93^x94)*x95)<=x96);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x101 = INT64_MIN;
	static uint32_t x104 = UINT32_MAX;
	int32_t t16 = -6;

	t16 = (((x101^x102)*x103)<=x104);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x109 = 2U;
	int8_t x110 = 2;
	uint32_t x112 = 1U;
	volatile int32_t t17 = -3;

	t17 = (((x109^x110)*x111)<=x112);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x113 = 2129102431926714071LL;
	int32_t x114 = INT32_MIN;
	int64_t x115 = -1LL;
	int64_t x116 = -13889677838472LL;
	int32_t t18 = -8700;

	t18 = (((x113^x114)*x115)<=x116);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x130 = -1;
	volatile int64_t x131 = -7647277LL;
	static volatile int32_t t19 = -1;

	t19 = (((x129^x130)*x131)<=x132);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x134 = 124625U;
	uint64_t x135 = UINT64_MAX;
	static int16_t x136 = INT16_MIN;
	int32_t t20 = -6;

	t20 = (((x133^x134)*x135)<=x136);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x141 = 0;
	int16_t x142 = 0;
	volatile int8_t x143 = -1;
	volatile uint16_t x144 = UINT16_MAX;

	t21 = (((x141^x142)*x143)<=x144);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x145 = -8980727454041LL;
	uint16_t x147 = 3U;
	volatile int32_t t22 = 2210;

	t22 = (((x145^x146)*x147)<=x148);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x149 = INT32_MIN;
	int32_t x150 = INT32_MAX;
	int16_t x152 = INT16_MIN;

	t23 = (((x149^x150)*x151)<=x152);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x153 = INT16_MIN;
	uint32_t x154 = 877845617U;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t24 = 1081738;

	t24 = (((x153^x154)*x155)<=x156);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x158 = INT8_MAX;
	uint8_t x160 = UINT8_MAX;
	int32_t t25 = -13;

	t25 = (((x157^x158)*x159)<=x160);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x161 = INT8_MIN;
	static volatile uint8_t x162 = UINT8_MAX;
	uint16_t x163 = 0U;
	int8_t x164 = INT8_MIN;
	int32_t t26 = -1;

	t26 = (((x161^x162)*x163)<=x164);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x166 = 1677610455U;
	volatile int8_t x167 = INT8_MIN;
	static int16_t x168 = -1;
	int32_t t27 = -11;

	t27 = (((x165^x166)*x167)<=x168);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x169 = -1;
	static int8_t x170 = -21;
	int64_t x172 = INT64_MIN;

	t28 = (((x169^x170)*x171)<=x172);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x176 = INT64_MIN;
	static volatile int32_t t29 = -74432;

	t29 = (((x173^x174)*x175)<=x176);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x177 = INT16_MAX;
	int8_t x179 = INT8_MIN;
	static uint16_t x180 = UINT16_MAX;
	int32_t t30 = 43572;

	t30 = (((x177^x178)*x179)<=x180);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x181 = -1;
	int16_t x182 = -1;
	uint32_t x183 = 1U;
	int16_t x184 = INT16_MAX;
	int32_t t31 = -61;

	t31 = (((x181^x182)*x183)<=x184);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x186 = UINT32_MAX;
	uint64_t x188 = UINT64_MAX;
	int32_t t32 = 73734424;

	t32 = (((x185^x186)*x187)<=x188);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x189 = -404;
	static int64_t x191 = -1LL;
	uint64_t x192 = 234LLU;

	t33 = (((x189^x190)*x191)<=x192);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x193 = -1;
	int8_t x194 = -1;
	uint8_t x196 = UINT8_MAX;

	t34 = (((x193^x194)*x195)<=x196);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x201 = -1;
	int8_t x202 = -48;
	int64_t x203 = 1LL;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t35 = 14839;

	t35 = (((x201^x202)*x203)<=x204);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x205 = -115904970;
	uint32_t x206 = UINT32_MAX;
	uint8_t x207 = UINT8_MAX;
	uint8_t x208 = 51U;
	int32_t t36 = -176352920;

	t36 = (((x205^x206)*x207)<=x208);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x209 = 5;
	uint64_t x210 = 48832LLU;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t37 = -396;

	t37 = (((x209^x210)*x211)<=x212);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x213 = 37U;
	int64_t x215 = -32311177LL;
	int32_t x216 = -253540525;
	int32_t t38 = -2;

	t38 = (((x213^x214)*x215)<=x216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x221 = -1512;
	int8_t x223 = INT8_MIN;
	uint8_t x224 = 1U;
	int32_t t39 = -14;

	t39 = (((x221^x222)*x223)<=x224);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x226 = INT16_MIN;
	int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MIN;
	int32_t t40 = 140682627;

	t40 = (((x225^x226)*x227)<=x228);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x230 = 79U;
	int16_t x232 = -1;
	int32_t t41 = -3;

	t41 = (((x229^x230)*x231)<=x232);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x237 = UINT32_MAX;
	int16_t x238 = INT16_MAX;
	volatile int8_t x239 = INT8_MIN;
	static int8_t x240 = 3;

	t42 = (((x237^x238)*x239)<=x240);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x241 = -1;
	int32_t x242 = 58;
	static uint8_t x243 = 95U;
	int32_t t43 = 216152501;

	t43 = (((x241^x242)*x243)<=x244);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x245 = INT64_MAX;
	static int8_t x247 = 0;
	volatile uint32_t x248 = UINT32_MAX;
	volatile int32_t t44 = 130461610;

	t44 = (((x245^x246)*x247)<=x248);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x249 = 746560788548582552LL;
	int8_t x251 = 9;
	static int32_t t45 = 66;

	t45 = (((x249^x250)*x251)<=x252);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x253 = INT8_MAX;
	int64_t x254 = -1LL;
	int8_t x255 = -1;
	uint32_t x256 = UINT32_MAX;
	static int32_t t46 = 107;

	t46 = (((x253^x254)*x255)<=x256);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x257 = -1;
	int8_t x258 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	volatile int32_t t47 = 35380318;

	t47 = (((x257^x258)*x259)<=x260);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x261 = 191LL;
	static int16_t x262 = INT16_MAX;
	int32_t x263 = -1;
	static int8_t x264 = -24;
	int32_t t48 = 114364;

	t48 = (((x261^x262)*x263)<=x264);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x266 = 1;
	uint64_t x268 = UINT64_MAX;

	t49 = (((x265^x266)*x267)<=x268);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x269 = 6631198666LL;
	int16_t x270 = INT16_MIN;
	static uint8_t x271 = 38U;
	int16_t x272 = -1;
	int32_t t50 = -351957;

	t50 = (((x269^x270)*x271)<=x272);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x273 = INT32_MAX;
	int64_t x274 = INT64_MIN;
	uint64_t x275 = 1061264303978434386LLU;
	int32_t t51 = 0;

	t51 = (((x273^x274)*x275)<=x276);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MAX;
	int16_t x280 = -177;
	int32_t t52 = -7;

	t52 = (((x277^x278)*x279)<=x280);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MIN;
	uint16_t x287 = UINT16_MAX;
	volatile uint64_t x288 = 186931922684713LLU;
	int32_t t53 = 0;

	t53 = (((x285^x286)*x287)<=x288);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x289 = -1;
	uint16_t x291 = 25U;
	uint8_t x292 = 12U;
	volatile int32_t t54 = 24669058;

	t54 = (((x289^x290)*x291)<=x292);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x294 = 0U;
	volatile int32_t t55 = 0;

	t55 = (((x293^x294)*x295)<=x296);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x297 = -1;
	uint16_t x298 = 1U;
	static uint64_t x299 = 533976LLU;
	uint32_t x300 = UINT32_MAX;
	static volatile int32_t t56 = -325030531;

	t56 = (((x297^x298)*x299)<=x300);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x309 = -1;
	int64_t x310 = 2154194LL;
	int8_t x311 = INT8_MIN;
	static int32_t x312 = -1;

	t57 = (((x309^x310)*x311)<=x312);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x314 = 5;
	uint8_t x315 = 19U;
	static volatile uint8_t x316 = UINT8_MAX;
	int32_t t58 = -581;

	t58 = (((x313^x314)*x315)<=x316);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x318 = 3;
	volatile int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t59 = 330067525;

	t59 = (((x317^x318)*x319)<=x320);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x321 = INT64_MIN;
	static int64_t x322 = INT64_MIN;
	static int32_t x324 = INT32_MAX;
	static int32_t t60 = -268;

	t60 = (((x321^x322)*x323)<=x324);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x325 = INT64_MAX;
	static uint8_t x326 = UINT8_MAX;
	static volatile int32_t t61 = 14;

	t61 = (((x325^x326)*x327)<=x328);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x329 = 42U;
	int32_t x330 = 44;
	volatile int8_t x331 = INT8_MIN;
	volatile int32_t t62 = -16930046;

	t62 = (((x329^x330)*x331)<=x332);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x333 = 1396;
	uint64_t x335 = 41747662087380LLU;
	volatile int32_t t63 = 361431;

	t63 = (((x333^x334)*x335)<=x336);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x337 = UINT32_MAX;
	static int64_t x338 = INT64_MAX;
	uint64_t x339 = 258301LLU;
	static int8_t x340 = -2;
	int32_t t64 = -125685;

	t64 = (((x337^x338)*x339)<=x340);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x341 = 37;
	static uint64_t x342 = 1637297329682436579LLU;
	static volatile int8_t x343 = -1;
	volatile int8_t x344 = INT8_MIN;

	t65 = (((x341^x342)*x343)<=x344);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x345 = 0U;
	int8_t x348 = INT8_MAX;

	t66 = (((x345^x346)*x347)<=x348);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x350 = 18758931LL;
	int16_t x351 = -1;
	static int8_t x352 = 52;
	volatile int32_t t67 = 2583508;

	t67 = (((x349^x350)*x351)<=x352);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x353 = 723U;
	volatile int16_t x355 = -1;
	static int64_t x356 = INT64_MAX;

	t68 = (((x353^x354)*x355)<=x356);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x361 = UINT32_MAX;
	volatile int32_t x362 = -1769;
	volatile int8_t x363 = 0;
	uint16_t x364 = 16U;

	t69 = (((x361^x362)*x363)<=x364);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x365 = 1U;
	volatile int16_t x366 = INT16_MIN;
	volatile uint32_t x367 = UINT32_MAX;
	int16_t x368 = INT16_MIN;
	volatile int32_t t70 = 1229;

	t70 = (((x365^x366)*x367)<=x368);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x369 = 109U;
	int8_t x370 = INT8_MIN;
	uint16_t x371 = 26398U;
	static volatile int16_t x372 = -133;
	volatile int32_t t71 = 190152;

	t71 = (((x369^x370)*x371)<=x372);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x373 = INT8_MIN;
	int32_t x376 = INT32_MAX;

	t72 = (((x373^x374)*x375)<=x376);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x381 = UINT8_MAX;
	volatile uint8_t x382 = UINT8_MAX;
	int32_t t73 = -6;

	t73 = (((x381^x382)*x383)<=x384);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x385 = 313085U;
	int8_t x386 = INT8_MIN;

	t74 = (((x385^x386)*x387)<=x388);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x389 = 25U;
	static volatile uint32_t x390 = UINT32_MAX;
	uint16_t x391 = 3U;

	t75 = (((x389^x390)*x391)<=x392);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x393 = UINT8_MAX;
	uint64_t x394 = 1854858075248LLU;
	int64_t x395 = -1LL;
	volatile int32_t t76 = -2;

	t76 = (((x393^x394)*x395)<=x396);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x397 = -9844194007476LL;
	int32_t x398 = INT32_MAX;
	volatile int8_t x399 = 1;
	static int16_t x400 = 0;
	volatile int32_t t77 = -91402410;

	t77 = (((x397^x398)*x399)<=x400);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x401 = INT64_MIN;
	static int64_t x402 = INT64_MAX;
	volatile int8_t x403 = -2;

	t78 = (((x401^x402)*x403)<=x404);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x405 = -1;
	int32_t x406 = INT32_MIN;
	uint64_t x407 = UINT64_MAX;
	int32_t t79 = -896842458;

	t79 = (((x405^x406)*x407)<=x408);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x409 = 14380LLU;
	int32_t x410 = INT32_MAX;
	int32_t x411 = INT32_MIN;
	int32_t x412 = INT32_MAX;
	int32_t t80 = 142151777;

	t80 = (((x409^x410)*x411)<=x412);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x413 = INT16_MIN;
	volatile uint16_t x414 = 6528U;
	int16_t x415 = INT16_MIN;
	uint64_t x416 = 1147584919768765232LLU;
	int32_t t81 = 19534001;

	t81 = (((x413^x414)*x415)<=x416);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x417 = 0;
	int64_t x420 = INT64_MIN;
	static int32_t t82 = 1;

	t82 = (((x417^x418)*x419)<=x420);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x421 = INT8_MIN;
	static uint32_t x422 = UINT32_MAX;
	uint64_t x423 = UINT64_MAX;
	int16_t x424 = -19;

	t83 = (((x421^x422)*x423)<=x424);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x428 = INT8_MIN;

	t84 = (((x425^x426)*x427)<=x428);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x430 = 3842;
	int32_t x431 = 7;
	int8_t x432 = INT8_MIN;
	volatile int32_t t85 = -850180;

	t85 = (((x429^x430)*x431)<=x432);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x435 = INT8_MIN;
	int32_t t86 = 1070636816;

	t86 = (((x433^x434)*x435)<=x436);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x437 = -35;
	int32_t x438 = INT32_MIN;
	static int64_t x439 = -1LL;
	static uint16_t x440 = UINT16_MAX;
	static int32_t t87 = -575;

	t87 = (((x437^x438)*x439)<=x440);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x449 = -138;
	int16_t x450 = -3342;
	static volatile int8_t x451 = -1;
	int64_t x452 = -10LL;

	t88 = (((x449^x450)*x451)<=x452);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x453 = INT16_MIN;
	static int8_t x454 = 7;
	volatile uint16_t x455 = 3283U;
	int32_t x456 = INT32_MIN;

	t89 = (((x453^x454)*x455)<=x456);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x458 = INT8_MIN;
	static uint8_t x459 = 102U;
	uint64_t x460 = UINT64_MAX;
	volatile int32_t t90 = -3435;

	t90 = (((x457^x458)*x459)<=x460);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x461 = 517512609524LLU;
	volatile int32_t x462 = -12752799;
	uint16_t x463 = 51U;
	int8_t x464 = -1;
	static int32_t t91 = 17;

	t91 = (((x461^x462)*x463)<=x464);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x467 = -1;
	uint8_t x468 = 114U;
	int32_t t92 = 1876197;

	t92 = (((x465^x466)*x467)<=x468);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x469 = 2U;
	volatile uint64_t x470 = 100891360689753155LLU;
	static volatile uint64_t x472 = 191183381LLU;
	int32_t t93 = -413059273;

	t93 = (((x469^x470)*x471)<=x472);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x479 = -1;
	uint32_t x480 = 7U;
	volatile int32_t t94 = -148346;

	t94 = (((x477^x478)*x479)<=x480);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x481 = 3LLU;
	int64_t x482 = 34020711451249531LL;
	uint8_t x483 = 26U;
	int8_t x484 = INT8_MIN;
	int32_t t95 = 7;

	t95 = (((x481^x482)*x483)<=x484);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x487 = UINT64_MAX;
	static int64_t x488 = 55547232049879LL;
	volatile int32_t t96 = -334;

	t96 = (((x485^x486)*x487)<=x488);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x489 = 0;
	uint64_t x490 = 546359070LLU;
	int64_t x491 = 992844683977578LL;
	uint32_t x492 = 483717U;
	int32_t t97 = -5;

	t97 = (((x489^x490)*x491)<=x492);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x493 = -1;
	volatile int8_t x494 = -1;
	int32_t x495 = INT32_MAX;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t98 = -52489392;

	t98 = (((x493^x494)*x495)<=x496);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x505 = 1323508708U;
	int32_t x506 = -1;
	int16_t x507 = INT16_MIN;
	static int8_t x508 = -6;
	volatile int32_t t99 = -10353909;

	t99 = (((x505^x506)*x507)<=x508);

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


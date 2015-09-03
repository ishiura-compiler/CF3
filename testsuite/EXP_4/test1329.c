#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = -1;
int64_t x7 = INT64_MIN;
int8_t x17 = -10;
volatile int16_t x35 = 2195;
int32_t x36 = -29963695;
int32_t x40 = INT32_MAX;
volatile int16_t x50 = 5141;
int8_t x61 = 11;
uint32_t x64 = 12254609U;
volatile uint16_t x66 = 21U;
volatile int8_t x69 = 0;
volatile int32_t t10 = 11286;
int8_t x73 = INT8_MAX;
static volatile int16_t x74 = 3;
int8_t x76 = INT8_MAX;
uint64_t x78 = 0LLU;
uint64_t x81 = 133886737342567613LLU;
volatile int32_t t14 = 870005;
int64_t x98 = -1LL;
volatile int64_t t15 = -1192209765347LL;
static volatile int64_t x103 = -842043LL;
volatile int16_t x105 = 0;
volatile int8_t x108 = INT8_MAX;
static int32_t x121 = -1;
uint32_t x124 = UINT32_MAX;
static int32_t x137 = 16;
uint32_t t21 = 931103642U;
static volatile uint64_t x146 = 1LLU;
uint32_t x148 = 1U;
uint64_t t24 = 0LLU;
int64_t x160 = -1LL;
static int8_t x164 = -1;
int64_t x174 = INT64_MIN;
volatile int64_t x178 = INT64_MAX;
int8_t x180 = INT8_MAX;
uint8_t x181 = UINT8_MAX;
uint16_t x188 = 1U;
volatile uint32_t x193 = 1137U;
uint16_t x196 = 649U;
int32_t t36 = -6;
uint32_t x230 = 3U;
int64_t x232 = 183LL;
uint32_t t37 = 858700307U;
int32_t x238 = 689;
int32_t x243 = 1816;
uint16_t x244 = 0U;
int64_t t40 = -25070796212LL;
uint64_t t42 = 141LLU;
uint64_t x260 = 7856328056592854823LLU;
static volatile uint32_t t43 = 28606106U;
volatile int64_t x272 = INT64_MIN;
int16_t x274 = -1;
int16_t x277 = 24;
static uint64_t x278 = 869004601041048849LLU;
static int32_t x279 = -131615;
uint16_t x293 = UINT16_MAX;
volatile int32_t x295 = -1;
uint16_t x303 = 1U;
int32_t x304 = INT32_MIN;
volatile uint32_t x312 = 447552U;
static volatile int32_t t52 = -18;
volatile int64_t t53 = 549819LL;
int32_t x323 = 537577959;
static int16_t x327 = -87;
static int32_t x331 = INT32_MIN;
uint16_t x336 = 1451U;
volatile int64_t x340 = INT64_MIN;
int8_t x345 = INT8_MAX;
int16_t x347 = INT16_MIN;
uint32_t x352 = 87307U;
static uint64_t x353 = UINT64_MAX;
int16_t x355 = INT16_MIN;
static int32_t x356 = INT32_MIN;
uint64_t t61 = 14LLU;
uint32_t x366 = 24150U;
uint64_t x368 = 354568LLU;
static uint32_t x369 = 78299087U;
uint32_t t65 = 5990769U;
static uint8_t x373 = UINT8_MAX;
int64_t x376 = -1LL;
int8_t x377 = INT8_MAX;
volatile uint16_t x380 = UINT16_MAX;
int8_t x383 = 14;
static int32_t x384 = INT32_MAX;
uint16_t x396 = UINT16_MAX;
int64_t t70 = -1785885616LL;
uint64_t x412 = UINT64_MAX;
uint16_t x413 = UINT16_MAX;
static volatile int32_t t74 = -269065;
volatile int32_t t75 = 98351717;
volatile uint32_t x425 = UINT32_MAX;
int8_t x433 = -28;
volatile int8_t x443 = INT8_MIN;
int32_t t79 = -544;
uint8_t x452 = 15U;
int8_t x455 = 15;
static volatile int8_t x456 = INT8_MIN;
uint64_t t81 = 10075012271915LLU;
uint32_t x458 = 22503909U;
uint32_t t82 = 43U;
uint64_t x461 = UINT64_MAX;
static volatile int16_t x463 = INT16_MIN;
int16_t x466 = -54;
static volatile int32_t x475 = INT32_MIN;
static int16_t x476 = INT16_MIN;
static int64_t x479 = -1LL;
volatile int64_t x480 = INT64_MAX;
int64_t t88 = INT64_MAX;
int16_t x486 = 965;
uint8_t x502 = 0U;
int32_t t92 = 0;
int32_t x509 = INT32_MAX;
volatile int32_t t96 = 277;
static int64_t x523 = INT64_MIN;
int8_t x527 = INT8_MAX;


void f0(void) {
	int64_t x2 = INT64_MIN;
	uint64_t x3 = UINT64_MAX;
	static int16_t x4 = -1;
	static int64_t t0 = INT64_MAX;

	t0 = (x1*(x2|(x3==x4)));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static int8_t x6 = INT8_MIN;
	volatile int16_t x8 = 2;
	static volatile int32_t t1 = -66603693;

	t1 = (x5*(x6|(x7==x8)));

	if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1LL;
	int8_t x10 = -44;
	uint8_t x11 = 4U;
	volatile uint16_t x12 = 13627U;
	int64_t t2 = 973923496798LL;

	t2 = (x9*(x10|(x11==x12)));

	if (t2 != 44LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 11;
	int32_t x14 = -134596;
	volatile int8_t x15 = 1;
	uint64_t x16 = 3566817346LLU;
	int32_t t3 = -470;

	t3 = (x13*(x14|(x15==x16)));

	if (t3 != -1480556) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = 28356813388170169LL;
	int8_t x19 = -1;
	volatile uint64_t x20 = UINT64_MAX;
	int64_t t4 = -3127809LL;

	t4 = (x17*(x18|(x19==x20)));

	if (t4 != -283568133881701690LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x33 = 1;
	int8_t x34 = -1;
	volatile int32_t t5 = 31;

	t5 = (x33*(x34|(x35==x36)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x37 = INT8_MIN;
	volatile int16_t x38 = INT16_MAX;
	uint32_t x39 = UINT32_MAX;
	int32_t t6 = -27410336;

	t6 = (x37*(x38|(x39==x40)));

	if (t6 != -4194176) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MAX;
	int32_t x51 = INT32_MIN;
	int8_t x52 = INT8_MIN;
	static int32_t t7 = 38045;

	t7 = (x49*(x50|(x51==x52)));

	if (t7 != 168455147) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x62 = INT8_MAX;
	uint64_t x63 = 79638LLU;
	volatile int32_t t8 = 2;

	t8 = (x61*(x62|(x63==x64)));

	if (t8 != 1397) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x65 = INT8_MIN;
	static int32_t x67 = 64958016;
	static int64_t x68 = INT64_MIN;
	int32_t t9 = -135;

	t9 = (x65*(x66|(x67==x68)));

	if (t9 != -2688) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x70 = -1;
	volatile int32_t x71 = -41535;
	int64_t x72 = 962LL;

	t10 = (x69*(x70|(x71==x72)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x75 = -346756;
	int32_t t11 = 4863;

	t11 = (x73*(x74|(x75==x76)));

	if (t11 != 381) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x77 = INT16_MIN;
	int16_t x79 = 7;
	int32_t x80 = -545;
	static volatile uint64_t t12 = 55942557766502843LLU;

	t12 = (x77*(x78|(x79==x80)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x82 = -3;
	int64_t x83 = INT64_MIN;
	uint64_t x84 = 7634257LLU;
	volatile uint64_t t13 = 18551889432799LLU;

	t13 = (x81*(x82|(x83==x84)));

	if (t13 != 18045083861681848777LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x93 = 1629U;
	int16_t x94 = INT16_MIN;
	volatile uint32_t x95 = UINT32_MAX;
	int8_t x96 = 2;

	t14 = (x93*(x94|(x95==x96)));

	if (t14 != -53379072) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x97 = INT8_MAX;
	int16_t x99 = -1;
	static int8_t x100 = -1;

	t15 = (x97*(x98|(x99==x100)));

	if (t15 != -127LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x101 = UINT8_MAX;
	volatile int16_t x102 = INT16_MAX;
	uint8_t x104 = 1U;
	static volatile int32_t t16 = 895;

	t16 = (x101*(x102|(x103==x104)));

	if (t16 != 8355585) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x106 = 4;
	static volatile int64_t x107 = INT64_MIN;
	volatile int32_t t17 = 1880042;

	t17 = (x105*(x106|(x107==x108)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x122 = INT8_MIN;
	int64_t x123 = INT64_MIN;
	static int32_t t18 = -3218;

	t18 = (x121*(x122|(x123==x124)));

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x133 = 2U;
	uint8_t x134 = 16U;
	int64_t x135 = 256LL;
	static int16_t x136 = INT16_MIN;
	int32_t t19 = -18;

	t19 = (x133*(x134|(x135==x136)));

	if (t19 != 32) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x138 = UINT8_MAX;
	int16_t x139 = 7255;
	static int32_t x140 = INT32_MIN;
	volatile int32_t t20 = 14159685;

	t20 = (x137*(x138|(x139==x140)));

	if (t20 != 4080) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x141 = INT32_MIN;
	uint32_t x142 = 10244U;
	uint64_t x143 = 4LLU;
	int32_t x144 = INT32_MIN;

	t21 = (x141*(x142|(x143==x144)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x145 = 1608;
	int64_t x147 = -1LL;
	uint64_t t22 = 19945512LLU;

	t22 = (x145*(x146|(x147==x148)));

	if (t22 != 1608LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x149 = -1;
	uint64_t x150 = 52633747060889LLU;
	static uint64_t x151 = UINT64_MAX;
	volatile int8_t x152 = 0;
	uint64_t t23 = 2812LLU;

	t23 = (x149*(x150|(x151==x152)));

	if (t23 != 18446691439962490727LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x153 = 23204546;
	uint64_t x154 = 3073392731LLU;
	static uint64_t x155 = UINT64_MAX;
	uint8_t x156 = 27U;

	t24 = (x153*(x154|(x155==x156)));

	if (t24 != 71316683002555126LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x157 = UINT16_MAX;
	static uint8_t x158 = 3U;
	int64_t x159 = INT64_MIN;
	volatile int32_t t25 = -59;

	t25 = (x157*(x158|(x159==x160)));

	if (t25 != 196605) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x161 = 2226;
	int64_t x162 = -7729932522491LL;
	volatile int8_t x163 = 32;
	int64_t t26 = -1LL;

	t26 = (x161*(x162|(x163==x164)));

	if (t26 != -17206829795064966LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x169 = INT64_MAX;
	int8_t x170 = 1;
	static int32_t x171 = -62671077;
	static int8_t x172 = INT8_MAX;
	int64_t t27 = INT64_MAX;

	t27 = (x169*(x170|(x171==x172)));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x173 = UINT64_MAX;
	int16_t x175 = -1;
	static uint64_t x176 = UINT64_MAX;
	uint64_t t28 = 1010579926429157LLU;

	t28 = (x173*(x174|(x175==x176)));

	if (t28 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x177 = -1;
	int32_t x179 = INT32_MIN;
	volatile int64_t t29 = -64LL;

	t29 = (x177*(x178|(x179==x180)));

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x182 = 14;
	uint64_t x183 = 133761597LLU;
	uint8_t x184 = 0U;
	int32_t t30 = 367334;

	t30 = (x181*(x182|(x183==x184)));

	if (t30 != 3570) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x185 = 432;
	volatile int64_t x186 = -1LL;
	uint32_t x187 = 10U;
	volatile int64_t t31 = -2176186565619281366LL;

	t31 = (x185*(x186|(x187==x188)));

	if (t31 != -432LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x194 = 21;
	static uint64_t x195 = UINT64_MAX;
	static uint32_t t32 = 738257135U;

	t32 = (x193*(x194|(x195==x196)));

	if (t32 != 23877U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x197 = -1;
	static int16_t x198 = INT16_MAX;
	int16_t x199 = -25;
	uint8_t x200 = UINT8_MAX;
	int32_t t33 = -6560325;

	t33 = (x197*(x198|(x199==x200)));

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x209 = INT8_MIN;
	int8_t x210 = INT8_MIN;
	int8_t x211 = 0;
	int64_t x212 = INT64_MIN;
	volatile int32_t t34 = 174;

	t34 = (x209*(x210|(x211==x212)));

	if (t34 != 16384) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x217 = UINT32_MAX;
	int8_t x218 = -3;
	volatile uint16_t x219 = UINT16_MAX;
	int16_t x220 = INT16_MIN;
	volatile uint32_t t35 = 145U;

	t35 = (x217*(x218|(x219==x220)));

	if (t35 != 3U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x225 = INT16_MAX;
	int32_t x226 = -1;
	static int32_t x227 = 3651776;
	static uint8_t x228 = 0U;

	t36 = (x225*(x226|(x227==x228)));

	if (t36 != -32767) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x229 = INT8_MIN;
	int32_t x231 = INT32_MAX;

	t37 = (x229*(x230|(x231==x232)));

	if (t37 != 4294966912U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x233 = INT8_MIN;
	static uint64_t x234 = 102170332134329987LLU;
	uint32_t x235 = UINT32_MAX;
	volatile uint64_t x236 = UINT64_MAX;
	volatile uint64_t t38 = 14556LLU;

	t38 = (x233*(x234|(x235==x236)));

	if (t38 != 5368941560515313280LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x237 = -158531542782632LL;
	int16_t x239 = INT16_MAX;
	uint8_t x240 = 7U;
	volatile int64_t t39 = 186692LL;

	t39 = (x237*(x238|(x239==x240)));

	if (t39 != -109228232977233448LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x241 = 8LL;
	volatile uint16_t x242 = 0U;

	t40 = (x241*(x242|(x243==x244)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x245 = INT16_MAX;
	volatile int8_t x246 = INT8_MIN;
	int8_t x247 = INT8_MIN;
	int64_t x248 = INT64_MIN;
	volatile int32_t t41 = -487575846;

	t41 = (x245*(x246|(x247==x248)));

	if (t41 != -4194176) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x253 = INT16_MAX;
	uint64_t x254 = 9866169161293251LLU;
	int16_t x255 = INT16_MIN;
	volatile int16_t x256 = INT16_MIN;

	t42 = (x253*(x254|(x255==x256)));

	if (t42 != 9690115655033578045LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x257 = 42986U;
	int16_t x258 = -10646;
	int8_t x259 = 5;

	t43 = (x257*(x258|(x259==x260)));

	if (t43 != 3837338340U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x261 = 1643U;
	uint32_t x262 = UINT32_MAX;
	volatile int8_t x263 = -1;
	int32_t x264 = INT32_MIN;
	volatile uint32_t t44 = 3654668U;

	t44 = (x261*(x262|(x263==x264)));

	if (t44 != 4294965653U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x265 = 32101U;
	int8_t x266 = INT8_MIN;
	volatile int64_t x267 = 1943196817LL;
	int64_t x268 = -1LL;
	int32_t t45 = -443609;

	t45 = (x265*(x266|(x267==x268)));

	if (t45 != -4108928) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x269 = 6U;
	int8_t x270 = INT8_MIN;
	static uint64_t x271 = UINT64_MAX;
	int32_t t46 = -3;

	t46 = (x269*(x270|(x271==x272)));

	if (t46 != -768) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x273 = 2U;
	int64_t x275 = -909122782730LL;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t47 = 0;

	t47 = (x273*(x274|(x275==x276)));

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x280 = INT32_MAX;
	uint64_t t48 = 1LLU;

	t48 = (x277*(x278|(x279==x280)));

	if (t48 != 2409366351275620760LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x294 = 2369U;
	int16_t x296 = INT16_MAX;
	volatile int32_t t49 = 1284;

	t49 = (x293*(x294|(x295==x296)));

	if (t49 != 155252415) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x301 = INT64_MAX;
	int32_t x302 = -1;
	int64_t t50 = -45182101220848963LL;

	t50 = (x301*(x302|(x303==x304)));

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x309 = -1;
	volatile int16_t x310 = -10;
	int8_t x311 = INT8_MIN;
	int32_t t51 = 1514;

	t51 = (x309*(x310|(x311==x312)));

	if (t51 != 10) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x313 = INT16_MIN;
	int16_t x314 = INT16_MIN;
	uint64_t x315 = 4171870703245LLU;
	int32_t x316 = 63;

	t52 = (x313*(x314|(x315==x316)));

	if (t52 != 1073741824) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x317 = -1;
	int64_t x318 = INT64_MAX;
	int32_t x319 = -1;
	int8_t x320 = INT8_MAX;

	t53 = (x317*(x318|(x319==x320)));

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x321 = 3U;
	int32_t x322 = -1;
	volatile int8_t x324 = 11;
	volatile int32_t t54 = 21698591;

	t54 = (x321*(x322|(x323==x324)));

	if (t54 != -3) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x325 = 1430893001U;
	int8_t x326 = 17;
	static uint64_t x328 = 986433LLU;
	uint32_t t55 = 480786U;

	t55 = (x325*(x326|(x327==x328)));

	if (t55 != 2850344537U) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x329 = INT8_MAX;
	int8_t x330 = 1;
	volatile uint16_t x332 = UINT16_MAX;
	int32_t t56 = -2;

	t56 = (x329*(x330|(x331==x332)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x333 = 1U;
	int8_t x334 = -1;
	volatile int64_t x335 = 66530625LL;
	static volatile int32_t t57 = 2;

	t57 = (x333*(x334|(x335==x336)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x337 = INT32_MAX;
	uint64_t x338 = UINT64_MAX;
	volatile int16_t x339 = INT16_MAX;
	uint64_t t58 = 43276LLU;

	t58 = (x337*(x338|(x339==x340)));

	if (t58 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x346 = -3;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t59 = 3;

	t59 = (x345*(x346|(x347==x348)));

	if (t59 != -381) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x349 = INT8_MAX;
	uint8_t x350 = 1U;
	int16_t x351 = -691;
	volatile int32_t t60 = 26;

	t60 = (x349*(x350|(x351==x352)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x354 = 15U;

	t61 = (x353*(x354|(x355==x356)));

	if (t61 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x357 = INT8_MAX;
	volatile int8_t x358 = INT8_MIN;
	int32_t x359 = -1;
	int64_t x360 = INT64_MIN;
	volatile int32_t t62 = -33;

	t62 = (x357*(x358|(x359==x360)));

	if (t62 != -16256) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x361 = INT16_MIN;
	int32_t x362 = -1;
	int64_t x363 = INT64_MIN;
	volatile int64_t x364 = -1515292LL;
	static int32_t t63 = -2431;

	t63 = (x361*(x362|(x363==x364)));

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x365 = 7546U;
	volatile int32_t x367 = INT32_MIN;
	static uint32_t t64 = 1604U;

	t64 = (x365*(x366|(x367==x368)));

	if (t64 != 182235900U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x370 = -1;
	int64_t x371 = 5873981330LL;
	int32_t x372 = -16;

	t65 = (x369*(x370|(x371==x372)));

	if (t65 != 4216668209U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x374 = 20855519202431522LL;
	uint16_t x375 = UINT16_MAX;
	int64_t t66 = -27LL;

	t66 = (x373*(x374|(x375==x376)));

	if (t66 != 5318157396620038110LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x378 = 26U;
	volatile uint16_t x379 = 1969U;
	static int32_t t67 = -800895;

	t67 = (x377*(x378|(x379==x380)));

	if (t67 != 3302) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x381 = -391413LL;
	int16_t x382 = INT16_MAX;
	int64_t t68 = 237425LL;

	t68 = (x381*(x382|(x383==x384)));

	if (t68 != -12825429771LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x385 = -1;
	static uint8_t x386 = UINT8_MAX;
	static uint32_t x387 = 58350013U;
	int64_t x388 = INT64_MIN;
	int32_t t69 = 5023;

	t69 = (x385*(x386|(x387==x388)));

	if (t69 != -255) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x393 = -1;
	int64_t x394 = INT64_MAX;
	int8_t x395 = -1;

	t70 = (x393*(x394|(x395==x396)));

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x397 = 57U;
	int32_t x398 = -1;
	static int64_t x399 = INT64_MIN;
	uint16_t x400 = 959U;
	int32_t t71 = -9;

	t71 = (x397*(x398|(x399==x400)));

	if (t71 != -57) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x401 = UINT16_MAX;
	int64_t x402 = -10LL;
	int64_t x403 = -1LL;
	static int16_t x404 = -1;
	int64_t t72 = -10928891385847793LL;

	t72 = (x401*(x402|(x403==x404)));

	if (t72 != -589815LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x409 = 1U;
	static volatile uint16_t x410 = 47U;
	volatile int8_t x411 = -42;
	int32_t t73 = -422868;

	t73 = (x409*(x410|(x411==x412)));

	if (t73 != 47) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x414 = 6U;
	int64_t x415 = -1LL;
	static uint64_t x416 = 652751100713176LLU;

	t74 = (x413*(x414|(x415==x416)));

	if (t74 != 393210) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x417 = -1;
	uint16_t x418 = 2U;
	volatile uint64_t x419 = 172793738283766LLU;
	int8_t x420 = INT8_MIN;

	t75 = (x417*(x418|(x419==x420)));

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x426 = -1;
	int16_t x427 = INT16_MIN;
	volatile int8_t x428 = INT8_MIN;
	volatile uint32_t t76 = 1653929U;

	t76 = (x425*(x426|(x427==x428)));

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x434 = 18U;
	uint64_t x435 = 1855LLU;
	int8_t x436 = 4;
	volatile int32_t t77 = 98;

	t77 = (x433*(x434|(x435==x436)));

	if (t77 != -504) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x437 = INT32_MIN;
	static volatile uint32_t x438 = UINT32_MAX;
	static int16_t x439 = -1;
	volatile int8_t x440 = -1;
	uint32_t t78 = 921494013U;

	t78 = (x437*(x438|(x439==x440)));

	if (t78 != 2147483648U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x441 = 0U;
	int16_t x442 = 0;
	static uint64_t x444 = UINT64_MAX;

	t79 = (x441*(x442|(x443==x444)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x449 = 5LLU;
	volatile int8_t x450 = INT8_MIN;
	volatile int8_t x451 = INT8_MAX;
	uint64_t t80 = 492548456542752583LLU;

	t80 = (x449*(x450|(x451==x452)));

	if (t80 != 18446744073709550976LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x453 = 962LLU;
	uint64_t x454 = 1496732663732857629LLU;

	t81 = (x453*(x454|(x455==x456)));

	if (t81 != 1010784761664013050LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x457 = 941U;
	int64_t x459 = -1LL;
	int64_t x460 = INT64_MIN;

	t82 = (x457*(x458|(x459==x460)));

	if (t82 != 3996309185U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x462 = -1;
	volatile uint16_t x464 = 115U;
	uint64_t t83 = 536930LLU;

	t83 = (x461*(x462|(x463==x464)));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x465 = 555;
	volatile int32_t x467 = INT32_MIN;
	static uint8_t x468 = 11U;
	int32_t t84 = -150964438;

	t84 = (x465*(x466|(x467==x468)));

	if (t84 != -29970) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x469 = 1449156;
	int64_t x470 = -3LL;
	uint32_t x471 = 0U;
	uint32_t x472 = 127794U;
	volatile int64_t t85 = -61387799408LL;

	t85 = (x469*(x470|(x471==x472)));

	if (t85 != -4347468LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x473 = UINT64_MAX;
	volatile int32_t x474 = INT32_MAX;
	static volatile uint64_t t86 = 57451225372LLU;

	t86 = (x473*(x474|(x475==x476)));

	if (t86 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x477 = INT16_MAX;
	volatile int16_t x478 = 327;
	volatile int32_t t87 = 2;

	t87 = (x477*(x478|(x479==x480)));

	if (t87 != 10714809) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x481 = INT64_MAX;
	int16_t x482 = 1;
	volatile int16_t x483 = INT16_MIN;
	uint64_t x484 = 259LLU;

	t88 = (x481*(x482|(x483==x484)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x485 = 0U;
	uint64_t x487 = 7199260073252309LLU;
	uint16_t x488 = UINT16_MAX;
	volatile int32_t t89 = -126218;

	t89 = (x485*(x486|(x487==x488)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x493 = 254973U;
	static volatile int64_t x494 = -1LL;
	int16_t x495 = INT16_MIN;
	static uint64_t x496 = 4215739362762482LLU;
	volatile int64_t t90 = -76954LL;

	t90 = (x493*(x494|(x495==x496)));

	if (t90 != -254973LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x497 = -1;
	uint64_t x498 = 121649LLU;
	int32_t x499 = -1;
	static uint8_t x500 = UINT8_MAX;
	volatile uint64_t t91 = 738921511118037LLU;

	t91 = (x497*(x498|(x499==x500)));

	if (t91 != 18446744073709429967LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x501 = INT32_MIN;
	int8_t x503 = -1;
	int64_t x504 = 0LL;

	t92 = (x501*(x502|(x503==x504)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x505 = 16762872U;
	uint64_t x506 = 118090978LLU;
	static int64_t x507 = -18LL;
	int32_t x508 = INT32_MAX;
	volatile uint64_t t93 = 3252807258LLU;

	t93 = (x505*(x506|(x507==x508)));

	if (t93 != 1979543948568816LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x510 = 7594901U;
	uint8_t x511 = UINT8_MAX;
	int16_t x512 = INT16_MAX;
	static uint32_t t94 = 79U;

	t94 = (x509*(x510|(x511==x512)));

	if (t94 != 2139888747U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x513 = 16059906859432570LLU;
	static uint8_t x514 = 2U;
	int8_t x515 = INT8_MIN;
	int16_t x516 = INT16_MIN;
	volatile uint64_t t95 = 114643LLU;

	t95 = (x513*(x514|(x515==x516)));

	if (t95 != 32119813718865140LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x517 = INT8_MAX;
	int8_t x518 = -12;
	static uint32_t x519 = UINT32_MAX;
	int16_t x520 = -2;

	t96 = (x517*(x518|(x519==x520)));

	if (t96 != -1524) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x521 = 2563803813342485LLU;
	int32_t x522 = -624839;
	int8_t x524 = INT8_MAX;
	static volatile uint64_t t97 = 1510307551129242LLU;

	t97 = (x521*(x522|(x523==x524)));

	if (t97 != 2902123487626005677LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x525 = UINT8_MAX;
	static volatile int32_t x526 = -1387;
	static uint32_t x528 = 27200534U;
	volatile int32_t t98 = 10;

	t98 = (x525*(x526|(x527==x528)));

	if (t98 != -353685) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x529 = INT8_MAX;
	volatile uint8_t x530 = UINT8_MAX;
	int16_t x531 = 6720;
	static volatile int8_t x532 = -1;
	volatile int32_t t99 = -398998;

	t99 = (x529*(x530|(x531==x532)));

	if (t99 != 32385) { NG(); } else { ; }
	
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


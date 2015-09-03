#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x16 = INT8_MAX;
int16_t x25 = 2016;
int64_t x28 = -1LL;
static int32_t x30 = -1;
static int8_t x31 = INT8_MIN;
static uint32_t t4 = 0U;
volatile int8_t x35 = -1;
static volatile int8_t x41 = INT8_MIN;
int64_t x44 = 43849934883LL;
uint32_t x48 = 43148U;
volatile uint32_t t7 = 7874076U;
int64_t t8 = -12282487204788427LL;
uint64_t x64 = 8171LLU;
uint64_t t9 = 46451191676LLU;
int16_t x74 = -1;
uint64_t t12 = 22767971283710LLU;
uint64_t x89 = 5935654341110378LLU;
uint32_t x90 = 378942U;
uint64_t x95 = UINT64_MAX;
static volatile uint64_t t17 = 3379LLU;
int16_t x115 = 113;
uint64_t x121 = UINT64_MAX;
static int8_t x124 = INT8_MIN;
uint64_t x129 = 161LLU;
static uint8_t x132 = 9U;
uint32_t x144 = UINT32_MAX;
volatile int16_t x153 = -1591;
static uint32_t x155 = UINT32_MAX;
int16_t x156 = 13;
uint32_t t26 = 533352U;
volatile int64_t x158 = -1LL;
static int32_t x159 = -1;
volatile uint64_t x170 = UINT64_MAX;
static int64_t x174 = -1LL;
int64_t x175 = 1662225LL;
volatile int64_t t31 = -9350LL;
int32_t x177 = INT32_MAX;
int64_t x187 = -36065984175LL;
int64_t t34 = -1LL;
volatile uint32_t x198 = 538U;
int32_t x199 = INT32_MIN;
volatile int64_t x210 = INT64_MAX;
int32_t x213 = -1;
int8_t x214 = -1;
int16_t x225 = INT16_MIN;
int8_t x228 = -4;
int16_t x235 = -11962;
volatile uint64_t x237 = 78412553786714922LLU;
uint64_t x246 = 1LLU;
int8_t x254 = INT8_MIN;
static int16_t x255 = INT16_MAX;
int16_t x258 = 1;
volatile int32_t t48 = -1671254;
int64_t x278 = INT64_MAX;
volatile int8_t x280 = -1;
int16_t x302 = 262;
int32_t x311 = -1;
volatile uint32_t t52 = 160U;
int64_t x321 = INT64_MAX;
uint64_t x334 = 38043LLU;
volatile int64_t x338 = 587190LL;
volatile int16_t x340 = INT16_MIN;
uint16_t x341 = 15853U;
volatile uint64_t t60 = 44068873917525823LLU;
int64_t x368 = -1LL;
volatile int8_t x383 = INT8_MIN;
int16_t x387 = -1;
static int32_t x391 = -1;
volatile int8_t x392 = INT8_MAX;
int16_t x401 = INT16_MIN;
static int32_t x405 = INT32_MIN;
static uint64_t x413 = 1052834LLU;
int32_t x415 = 0;
volatile uint64_t t72 = 14469LLU;
uint16_t x418 = 95U;
uint64_t x419 = 540051419960LLU;
int8_t x424 = 3;
uint8_t x427 = 3U;
uint64_t x430 = UINT64_MAX;
int64_t x437 = -51LL;
int16_t x444 = 1016;
int32_t t79 = -1649952;
int32_t x448 = -1;
static int16_t x462 = INT16_MAX;
volatile int64_t t83 = 56902020503218LL;
int64_t x465 = INT64_MIN;
static int8_t x468 = INT8_MAX;
int16_t x470 = INT16_MIN;
uint32_t t89 = 50783025U;
uint64_t x494 = 3373LLU;
uint16_t x499 = UINT16_MAX;
static uint8_t x503 = 37U;
static uint32_t x504 = 14U;
int16_t x508 = INT16_MIN;
int8_t x521 = INT8_MIN;
uint8_t x523 = 0U;
uint16_t x526 = 3558U;
int16_t x527 = 15967;
int8_t x530 = -1;
uint8_t x531 = 43U;


void f0(void) {
	int64_t x5 = 5LL;
	int64_t x6 = INT64_MIN;
	int16_t x7 = -1;
	static int16_t x8 = INT16_MIN;
	volatile int32_t t0 = -4062;

	t0 = ((x5<=x6)*(x7*x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MAX;
	int8_t x14 = INT8_MIN;
	int8_t x15 = INT8_MAX;
	int32_t t1 = 1391799;

	t1 = ((x13<=x14)*(x15*x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = 12;
	volatile int16_t x22 = -1;
	int16_t x23 = INT16_MIN;
	static int8_t x24 = -1;
	volatile int32_t t2 = 0;

	t2 = ((x21<=x22)*(x23*x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x26 = 3U;
	int32_t x27 = -62;
	static volatile int64_t t3 = -19945154330LL;

	t3 = ((x25<=x26)*(x27*x28));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x29 = -20LL;
	uint32_t x32 = 140318U;

	t4 = ((x29<=x30)*(x31*x32));

	if (t4 != 4277006592U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x33 = 8U;
	static int64_t x34 = INT64_MIN;
	int16_t x36 = INT16_MAX;
	volatile int32_t t5 = 7182;

	t5 = ((x33<=x34)*(x35*x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x42 = INT16_MAX;
	static uint32_t x43 = 9778147U;
	volatile int64_t t6 = 941966885388076LL;

	t6 = ((x41<=x42)*(x43*x44));

	if (t6 != 428771109226401801LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x45 = INT8_MIN;
	static int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MIN;

	t7 = ((x45<=x46)*(x47*x48));

	if (t7 != 4289444352U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x53 = -1LL;
	volatile int32_t x54 = INT32_MAX;
	static volatile int32_t x55 = -1;
	volatile int64_t x56 = -1LL;

	t8 = ((x53<=x54)*(x55*x56));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = INT16_MAX;
	static volatile uint16_t x62 = 0U;
	int32_t x63 = 0;

	t9 = ((x61<=x62)*(x63*x64));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x69 = INT8_MAX;
	int16_t x70 = INT16_MAX;
	volatile int64_t x71 = -1LL;
	uint16_t x72 = 4097U;
	volatile int64_t t10 = -8029408LL;

	t10 = ((x69<=x70)*(x71*x72));

	if (t10 != -4097LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = INT8_MIN;
	uint8_t x75 = UINT8_MAX;
	int16_t x76 = INT16_MAX;
	volatile int32_t t11 = -858319096;

	t11 = ((x73<=x74)*(x75*x76));

	if (t11 != 8355585) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x77 = 112062263362801LL;
	static int16_t x78 = 1;
	static int64_t x79 = -7LL;
	static uint64_t x80 = 6595659390151364963LLU;

	t12 = ((x77<=x78)*(x79*x80));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = INT64_MAX;
	static volatile int8_t x82 = -25;
	int16_t x83 = 7845;
	int8_t x84 = -8;
	int32_t t13 = 624;

	t13 = ((x81<=x82)*(x83*x84));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = INT32_MAX;
	int32_t x86 = -1;
	int32_t x87 = -1;
	int16_t x88 = -1;
	int32_t t14 = -1;

	t14 = ((x85<=x86)*(x87*x88));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x91 = UINT16_MAX;
	uint32_t x92 = 37911469U;
	static volatile uint32_t t15 = 325632924U;

	t15 = ((x89<=x90)*(x91*x92));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = INT32_MAX;
	static int64_t x94 = 14698192LL;
	static volatile int16_t x96 = INT16_MIN;
	static volatile uint64_t t16 = 54102592915336LLU;

	t16 = ((x93<=x94)*(x95*x96));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x101 = -1LL;
	volatile int64_t x102 = INT64_MAX;
	static int64_t x103 = INT64_MIN;
	uint64_t x104 = 349682LLU;

	t17 = ((x101<=x102)*(x103*x104));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x109 = -1;
	uint8_t x110 = UINT8_MAX;
	static int16_t x111 = 0;
	static int64_t x112 = INT64_MAX;
	int64_t t18 = -65612LL;

	t18 = ((x109<=x110)*(x111*x112));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x113 = -1;
	int16_t x114 = INT16_MAX;
	int64_t x116 = -478263791193LL;
	int64_t t19 = 995LL;

	t19 = ((x113<=x114)*(x115*x116));

	if (t19 != -54043808404809LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x122 = 15U;
	uint64_t x123 = 854517457229LLU;
	volatile uint64_t t20 = 175226484155273529LLU;

	t20 = ((x121<=x122)*(x123*x124));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x125 = -1;
	static uint8_t x126 = 23U;
	static int8_t x127 = 0;
	volatile int16_t x128 = INT16_MIN;
	volatile int32_t t21 = -2;

	t21 = ((x125<=x126)*(x127*x128));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x130 = -1;
	volatile int16_t x131 = -1;
	int32_t t22 = 91741377;

	t22 = ((x129<=x130)*(x131*x132));

	if (t22 != -9) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x133 = INT8_MIN;
	static int16_t x134 = -1;
	int8_t x135 = 45;
	static int8_t x136 = INT8_MIN;
	static volatile int32_t t23 = -4024;

	t23 = ((x133<=x134)*(x135*x136));

	if (t23 != -5760) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x137 = UINT64_MAX;
	int8_t x138 = -1;
	uint32_t x139 = 238208440U;
	int32_t x140 = -66366427;
	uint32_t t24 = 883123376U;

	t24 = ((x137<=x138)*(x139*x140));

	if (t24 != 1428091800U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x141 = INT64_MIN;
	int32_t x142 = -99952;
	int32_t x143 = INT32_MIN;
	volatile uint32_t t25 = 443288248U;

	t25 = ((x141<=x142)*(x143*x144));

	if (t25 != 2147483648U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x154 = 7U;

	t26 = ((x153<=x154)*(x155*x156));

	if (t26 != 4294967283U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x157 = 75U;
	int16_t x160 = -38;
	int32_t t27 = 296;

	t27 = ((x157<=x158)*(x159*x160));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x161 = -1;
	int8_t x162 = -1;
	int32_t x163 = 1;
	uint16_t x164 = 109U;
	volatile int32_t t28 = 849;

	t28 = ((x161<=x162)*(x163*x164));

	if (t28 != 109) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x165 = INT64_MIN;
	uint64_t x166 = UINT64_MAX;
	int8_t x167 = 1;
	volatile uint32_t x168 = 7U;
	uint32_t t29 = 93064238U;

	t29 = ((x165<=x166)*(x167*x168));

	if (t29 != 7U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x169 = UINT64_MAX;
	int8_t x171 = INT8_MIN;
	int32_t x172 = -33;
	volatile int32_t t30 = -24867990;

	t30 = ((x169<=x170)*(x171*x172));

	if (t30 != 4224) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x173 = INT32_MIN;
	int32_t x176 = -2;

	t31 = ((x173<=x174)*(x175*x176));

	if (t31 != -3324450LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x178 = UINT8_MAX;
	int8_t x179 = 26;
	int8_t x180 = 51;
	static int32_t t32 = 1;

	t32 = ((x177<=x178)*(x179*x180));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x181 = 5U;
	volatile int8_t x182 = 3;
	static int64_t x183 = -84LL;
	static uint32_t x184 = 24245U;
	int64_t t33 = -4111139214818431LL;

	t33 = ((x181<=x182)*(x183*x184));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x185 = UINT64_MAX;
	static int64_t x186 = 37006863917857081LL;
	uint32_t x188 = 1U;

	t34 = ((x185<=x186)*(x187*x188));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x197 = 1493491LLU;
	volatile uint64_t x200 = 487466299798780LLU;
	uint64_t t35 = 19118LLU;

	t35 = ((x197<=x198)*(x199*x200));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x201 = INT64_MAX;
	uint8_t x202 = 26U;
	volatile uint16_t x203 = UINT16_MAX;
	int8_t x204 = -1;
	int32_t t36 = 0;

	t36 = ((x201<=x202)*(x203*x204));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x205 = INT64_MIN;
	static uint64_t x206 = 1555802034LLU;
	static int8_t x207 = INT8_MIN;
	int8_t x208 = 47;
	int32_t t37 = 14498391;

	t37 = ((x205<=x206)*(x207*x208));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x209 = 14U;
	int8_t x211 = INT8_MIN;
	int32_t x212 = -1;
	static volatile int32_t t38 = -445358675;

	t38 = ((x209<=x210)*(x211*x212));

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x215 = INT8_MAX;
	uint32_t x216 = 3476137U;
	uint32_t t39 = 13002723U;

	t39 = ((x213<=x214)*(x215*x216));

	if (t39 != 441469399U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x226 = 5175LL;
	int32_t x227 = 22822;
	volatile int32_t t40 = 20126;

	t40 = ((x225<=x226)*(x227*x228));

	if (t40 != -91288) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x233 = UINT16_MAX;
	volatile int8_t x234 = INT8_MAX;
	static int16_t x236 = INT16_MIN;
	volatile int32_t t41 = -132518;

	t41 = ((x233<=x234)*(x235*x236));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x238 = 49U;
	int8_t x239 = 1;
	int32_t x240 = -1;
	static volatile int32_t t42 = 920;

	t42 = ((x237<=x238)*(x239*x240));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x245 = INT32_MAX;
	uint64_t x247 = UINT64_MAX;
	volatile int8_t x248 = INT8_MIN;
	uint64_t t43 = 12887LLU;

	t43 = ((x245<=x246)*(x247*x248));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x249 = -1LL;
	int32_t x250 = INT32_MAX;
	uint8_t x251 = 30U;
	uint8_t x252 = 30U;
	static int32_t t44 = 182611478;

	t44 = ((x249<=x250)*(x251*x252));

	if (t44 != 900) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x253 = INT32_MAX;
	uint16_t x256 = 127U;
	int32_t t45 = 60838;

	t45 = ((x253<=x254)*(x255*x256));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x257 = UINT16_MAX;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = 208628864U;
	static uint32_t t46 = 75421U;

	t46 = ((x257<=x258)*(x259*x260));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x261 = INT32_MIN;
	int64_t x262 = -59957LL;
	uint16_t x263 = 5951U;
	uint64_t x264 = 1878781394LLU;
	volatile uint64_t t47 = 3418653LLU;

	t47 = ((x261<=x262)*(x263*x264));

	if (t47 != 11180628075694LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x273 = INT8_MIN;
	int64_t x274 = 6294156681LL;
	volatile uint8_t x275 = UINT8_MAX;
	static int8_t x276 = 31;

	t48 = ((x273<=x274)*(x275*x276));

	if (t48 != 7905) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x277 = -1;
	int8_t x279 = INT8_MIN;
	volatile int32_t t49 = -3;

	t49 = ((x277<=x278)*(x279*x280));

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x297 = 37187U;
	int64_t x298 = INT64_MIN;
	static int8_t x299 = -1;
	int64_t x300 = INT64_MAX;
	int64_t t50 = -259LL;

	t50 = ((x297<=x298)*(x299*x300));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x301 = -1LL;
	uint8_t x303 = 40U;
	int64_t x304 = -1LL;
	volatile int64_t t51 = -100533706LL;

	t51 = ((x301<=x302)*(x303*x304));

	if (t51 != -40LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x309 = INT8_MIN;
	uint16_t x310 = 880U;
	uint32_t x312 = 230U;

	t52 = ((x309<=x310)*(x311*x312));

	if (t52 != 4294967066U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MIN;
	int32_t x315 = -1;
	static volatile int64_t x316 = -1LL;
	int64_t t53 = 11348579016LL;

	t53 = ((x313<=x314)*(x315*x316));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x322 = -11;
	volatile int16_t x323 = -1;
	static int16_t x324 = INT16_MAX;
	int32_t t54 = -53706720;

	t54 = ((x321<=x322)*(x323*x324));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x325 = 2089U;
	volatile int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	volatile uint8_t x328 = UINT8_MAX;
	volatile int32_t t55 = -49000363;

	t55 = ((x325<=x326)*(x327*x328));

	if (t55 != -32640) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x329 = 5U;
	int32_t x330 = -56479945;
	uint16_t x331 = UINT16_MAX;
	uint16_t x332 = 395U;
	static volatile int32_t t56 = -13;

	t56 = ((x329<=x330)*(x331*x332));

	if (t56 != 25886325) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x333 = 2392848430248618LLU;
	uint16_t x335 = 14U;
	int16_t x336 = 220;
	int32_t t57 = -14741137;

	t57 = ((x333<=x334)*(x335*x336));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x337 = INT64_MAX;
	int16_t x339 = -6557;
	int32_t t58 = 716;

	t58 = ((x337<=x338)*(x339*x340));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x342 = UINT64_MAX;
	static uint64_t x343 = 5469LLU;
	int16_t x344 = 612;
	uint64_t t59 = 2071754888064LLU;

	t59 = ((x341<=x342)*(x343*x344));

	if (t59 != 3347028LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x349 = INT64_MIN;
	uint32_t x350 = 48891242U;
	volatile int32_t x351 = -1;
	uint64_t x352 = 8334560029050702LLU;

	t60 = ((x349<=x350)*(x351*x352));

	if (t60 != 18438409513680500914LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x357 = INT64_MIN;
	int8_t x358 = INT8_MAX;
	volatile uint64_t x359 = 911099663495LLU;
	int8_t x360 = INT8_MAX;
	volatile uint64_t t61 = 6962235822527825470LLU;

	t61 = ((x357<=x358)*(x359*x360));

	if (t61 != 115709657263865LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x361 = -845LL;
	int16_t x362 = INT16_MAX;
	uint32_t x363 = UINT32_MAX;
	volatile uint16_t x364 = 0U;
	static volatile uint32_t t62 = 1277U;

	t62 = ((x361<=x362)*(x363*x364));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x365 = 240450003U;
	int8_t x366 = -26;
	int32_t x367 = INT32_MIN;
	volatile int64_t t63 = -164652928203982584LL;

	t63 = ((x365<=x366)*(x367*x368));

	if (t63 != 2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x369 = INT8_MAX;
	uint16_t x370 = UINT16_MAX;
	uint32_t x371 = 400U;
	volatile int64_t x372 = 13LL;
	static volatile int64_t t64 = -184151314305106801LL;

	t64 = ((x369<=x370)*(x371*x372));

	if (t64 != 5200LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x381 = -10;
	volatile uint32_t x382 = 1340204U;
	uint16_t x384 = UINT16_MAX;
	static int32_t t65 = -454423;

	t65 = ((x381<=x382)*(x383*x384));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x385 = -6;
	int16_t x386 = INT16_MIN;
	uint64_t x388 = 14455LLU;
	static uint64_t t66 = 5463774924076958LLU;

	t66 = ((x385<=x386)*(x387*x388));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x389 = 2350245;
	int64_t x390 = 0LL;
	static volatile int32_t t67 = 49;

	t67 = ((x389<=x390)*(x391*x392));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x397 = -1;
	int16_t x398 = -1310;
	int64_t x399 = -2581345672LL;
	int32_t x400 = INT32_MIN;
	static volatile int64_t t68 = -679996LL;

	t68 = ((x397<=x398)*(x399*x400));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x402 = INT16_MAX;
	uint64_t x403 = 1235LLU;
	uint32_t x404 = 1U;
	uint64_t t69 = 3398287LLU;

	t69 = ((x401<=x402)*(x403*x404));

	if (t69 != 1235LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x406 = 2931U;
	int32_t x407 = -1;
	int16_t x408 = 1;
	int32_t t70 = 3256233;

	t70 = ((x405<=x406)*(x407*x408));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x409 = 4;
	static uint8_t x410 = 1U;
	int8_t x411 = INT8_MIN;
	uint64_t x412 = 490LLU;
	uint64_t t71 = 164410003112LLU;

	t71 = ((x409<=x410)*(x411*x412));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x414 = 18;
	uint64_t x416 = 1924000966221050541LLU;

	t72 = ((x413<=x414)*(x415*x416));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x417 = INT64_MIN;
	int32_t x420 = INT32_MAX;
	static volatile uint64_t t73 = 41LLU;

	t73 = ((x417<=x418)*(x419*x420));

	if (t73 != 16053460333237193928LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x421 = UINT32_MAX;
	int8_t x422 = INT8_MIN;
	volatile int64_t x423 = -123086LL;
	volatile int64_t t74 = -8766432341686LL;

	t74 = ((x421<=x422)*(x423*x424));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x425 = -175672459902560LL;
	int32_t x426 = 3826;
	int64_t x428 = -203654774642LL;
	volatile int64_t t75 = -143829LL;

	t75 = ((x425<=x426)*(x427*x428));

	if (t75 != -610964323926LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x429 = INT64_MIN;
	uint64_t x431 = 4810652734363LLU;
	uint64_t x432 = 188265261431LLU;
	static volatile uint64_t t76 = 93583233465329LLU;

	t76 = ((x429<=x430)*(x431*x432));

	if (t76 != 17447645761046114317LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x433 = 2U;
	int8_t x434 = 1;
	uint64_t x435 = 41856478723LLU;
	int32_t x436 = 60750;
	volatile uint64_t t77 = 393767LLU;

	t77 = ((x433<=x434)*(x435*x436));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x438 = INT16_MAX;
	volatile int64_t x439 = -52615482LL;
	volatile uint16_t x440 = 5U;
	int64_t t78 = 1LL;

	t78 = ((x437<=x438)*(x439*x440));

	if (t78 != -263077410LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x441 = 4427;
	uint32_t x442 = 115029857U;
	uint16_t x443 = 14U;

	t79 = ((x441<=x442)*(x443*x444));

	if (t79 != 14224) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x445 = INT32_MIN;
	volatile int8_t x446 = -1;
	int16_t x447 = INT16_MAX;
	volatile int32_t t80 = 0;

	t80 = ((x445<=x446)*(x447*x448));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x453 = UINT32_MAX;
	uint64_t x454 = 38536489800410LLU;
	uint32_t x455 = UINT32_MAX;
	static int16_t x456 = INT16_MAX;
	static uint32_t t81 = 3525U;

	t81 = ((x453<=x454)*(x455*x456));

	if (t81 != 4294934529U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x457 = 162073595733015753LLU;
	int64_t x458 = -1LL;
	uint16_t x459 = 5U;
	volatile int32_t x460 = -391;
	volatile int32_t t82 = 3677421;

	t82 = ((x457<=x458)*(x459*x460));

	if (t82 != -1955) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x461 = INT64_MIN;
	static int64_t x463 = INT64_MAX;
	int8_t x464 = -1;

	t83 = ((x461<=x462)*(x463*x464));

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x466 = 6901U;
	volatile int32_t x467 = 1411080;
	static volatile int32_t t84 = 54011;

	t84 = ((x465<=x466)*(x467*x468));

	if (t84 != 179207160) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x469 = 1518U;
	static int8_t x471 = -7;
	uint64_t x472 = 135842LLU;
	static uint64_t t85 = 19198LLU;

	t85 = ((x469<=x470)*(x471*x472));

	if (t85 != 18446744073708600722LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x473 = INT8_MAX;
	uint16_t x474 = 179U;
	static uint32_t x475 = UINT32_MAX;
	volatile uint16_t x476 = 659U;
	static uint32_t t86 = 951177U;

	t86 = ((x473<=x474)*(x475*x476));

	if (t86 != 4294966637U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x481 = INT32_MAX;
	static volatile uint16_t x482 = 3U;
	static uint8_t x483 = UINT8_MAX;
	volatile int16_t x484 = -12;
	int32_t t87 = 29988109;

	t87 = ((x481<=x482)*(x483*x484));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x485 = INT16_MAX;
	int64_t x486 = -901570LL;
	int8_t x487 = INT8_MIN;
	static int8_t x488 = INT8_MIN;
	int32_t t88 = -710;

	t88 = ((x485<=x486)*(x487*x488));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x489 = INT8_MIN;
	volatile int8_t x490 = -2;
	int16_t x491 = -1;
	uint32_t x492 = UINT32_MAX;

	t89 = ((x489<=x490)*(x491*x492));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x493 = INT8_MIN;
	int16_t x495 = INT16_MIN;
	static volatile int16_t x496 = 1597;
	static int32_t t90 = 10857;

	t90 = ((x493<=x494)*(x495*x496));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x497 = UINT8_MAX;
	static int8_t x498 = INT8_MIN;
	volatile int64_t x500 = -1LL;
	volatile int64_t t91 = -26063659039916LL;

	t91 = ((x497<=x498)*(x499*x500));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x501 = UINT32_MAX;
	uint16_t x502 = UINT16_MAX;
	volatile uint32_t t92 = 5924563U;

	t92 = ((x501<=x502)*(x503*x504));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x505 = INT32_MIN;
	uint32_t x506 = 693084U;
	uint8_t x507 = 31U;
	volatile int32_t t93 = -45671905;

	t93 = ((x505<=x506)*(x507*x508));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x509 = INT32_MAX;
	static volatile int32_t x510 = INT32_MIN;
	volatile int8_t x511 = INT8_MIN;
	int8_t x512 = INT8_MAX;
	int32_t t94 = -63946;

	t94 = ((x509<=x510)*(x511*x512));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x513 = INT64_MAX;
	uint32_t x514 = 172U;
	volatile int64_t x515 = 62343895LL;
	uint64_t x516 = 592758351717023LLU;
	uint64_t t95 = 69209442015388698LLU;

	t95 = ((x513<=x514)*(x515*x516));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x517 = 259093714130247LL;
	uint16_t x518 = UINT16_MAX;
	uint8_t x519 = 1U;
	int64_t x520 = INT64_MAX;
	volatile int64_t t96 = 3623435745LL;

	t96 = ((x517<=x518)*(x519*x520));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x522 = -1;
	int32_t x524 = -1;
	int32_t t97 = 3;

	t97 = ((x521<=x522)*(x523*x524));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x525 = -1LL;
	uint64_t x528 = 1824341880692092LLU;
	uint64_t t98 = 51879388025450LLU;

	t98 = ((x525<=x526)*(x527*x528));

	if (t98 != 10682522735301081348LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x529 = -1;
	static volatile int16_t x532 = 165;
	int32_t t99 = -8;

	t99 = ((x529<=x530)*(x531*x532));

	if (t99 != 7095) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -456396170677LL;
static int64_t x8 = INT64_MIN;
uint64_t x10 = 234828572601664LLU;
static volatile int32_t t3 = 0;
int8_t x28 = -1;
volatile int16_t x38 = INT16_MAX;
volatile int32_t t9 = 28974506;
int64_t x47 = 3084LL;
volatile uint64_t x61 = 0LLU;
int8_t x62 = INT8_MAX;
int32_t t13 = 1702326;
static int64_t x75 = INT64_MIN;
int32_t x77 = INT32_MIN;
volatile int32_t t16 = 1146446;
static int64_t x83 = INT64_MIN;
static volatile int32_t x84 = INT32_MAX;
int8_t x94 = INT8_MAX;
int32_t t19 = 7578;
static uint32_t x102 = UINT32_MAX;
static int32_t x118 = -1;
static int64_t x120 = 63967738074858LL;
volatile int32_t t24 = 920;
volatile int32_t t25 = -1;
volatile int32_t t26 = 267557171;
uint64_t x131 = 21597645044LLU;
static int32_t x132 = INT32_MIN;
int16_t x141 = -1;
static volatile int32_t x145 = INT32_MAX;
int32_t t31 = -126;
static volatile int16_t x164 = 1;
int16_t x166 = 3946;
static volatile int16_t x168 = INT16_MIN;
static int16_t x178 = INT16_MIN;
int16_t x180 = INT16_MIN;
volatile uint8_t x186 = 1U;
static int16_t x187 = -1;
volatile int16_t x188 = INT16_MIN;
volatile int32_t t39 = -54083;
int16_t x196 = -1;
int8_t x197 = INT8_MIN;
static int8_t x199 = INT8_MIN;
static int32_t t44 = 269744114;
int64_t x214 = 12877577765LL;
uint16_t x218 = 30316U;
int32_t x220 = INT32_MAX;
uint32_t x224 = UINT32_MAX;
static uint16_t x225 = UINT16_MAX;
uint64_t x227 = 13811525240546LLU;
volatile int32_t t49 = -7;
uint64_t x229 = 39LLU;
static volatile int32_t x230 = INT32_MAX;
int16_t x231 = -2;
int32_t x254 = INT32_MAX;
int16_t x268 = -1;
static int32_t t58 = 364097;
volatile int8_t x276 = 1;
int32_t t59 = 40;
int8_t x279 = INT8_MAX;
int8_t x280 = 0;
int32_t x282 = INT32_MIN;
uint16_t x284 = UINT16_MAX;
int32_t t61 = 0;
int16_t x285 = INT16_MIN;
static uint16_t x290 = UINT16_MAX;
static volatile int64_t x302 = -1LL;
uint8_t x307 = 31U;
int64_t x319 = -114851952196LL;
uint32_t x320 = 2348928U;
int16_t x321 = INT16_MIN;
int8_t x322 = -1;
uint16_t x323 = 9088U;
volatile int32_t t71 = 214923;
uint32_t x326 = 7834072U;
int64_t x333 = INT64_MIN;
static uint16_t x336 = 11425U;
int8_t x337 = -1;
int8_t x340 = INT8_MIN;
int32_t t75 = -165151;
int32_t x352 = INT32_MAX;
volatile int8_t x355 = -1;
int64_t x357 = 14566133619804LL;
uint32_t x362 = 73U;
int32_t x371 = 12660;
uint8_t x374 = 1U;
volatile int32_t t83 = -1;
uint8_t x379 = 41U;
volatile int32_t t84 = 14;
int32_t t89 = -181;
int16_t x401 = INT16_MIN;
volatile int16_t x403 = -1;
uint16_t x404 = 368U;
uint32_t x406 = 877141U;
int8_t x416 = INT8_MIN;
int64_t x417 = INT64_MAX;
volatile int8_t x421 = INT8_MIN;
static volatile int32_t t95 = 1;
int16_t x425 = 12;
uint64_t x426 = 10LLU;
int32_t x430 = INT32_MAX;
int8_t x433 = 4;
int8_t x436 = 2;
static int8_t x441 = INT8_MIN;


void f0(void) {
	uint64_t x5 = 1059062664385003LLU;
	uint32_t x7 = 502806U;
	int32_t t0 = -487;

	t0 = (((x5%x6)-x7)==x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = -4;
	int64_t x11 = INT64_MIN;
	int32_t x12 = -1;
	int32_t t1 = -300;

	t1 = (((x9%x10)-x11)==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 4;
	int32_t x14 = -1;
	uint8_t x15 = 15U;
	uint8_t x16 = 0U;
	volatile int32_t t2 = 5;

	t2 = (((x13%x14)-x15)==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = 2251;
	volatile int16_t x18 = -1;
	int64_t x19 = -13LL;
	static int16_t x20 = INT16_MAX;

	t3 = (((x17%x18)-x19)==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	uint32_t x22 = UINT32_MAX;
	uint64_t x23 = 2535735996806514561LLU;
	int64_t x24 = INT64_MAX;
	volatile int32_t t4 = 394416;

	t4 = (((x21%x22)-x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	int8_t x26 = 1;
	int8_t x27 = INT8_MIN;
	volatile int32_t t5 = 236458542;

	t5 = (((x25%x26)-x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 1U;
	volatile uint64_t x30 = 7464393346LLU;
	static int64_t x31 = -1LL;
	uint32_t x32 = 2484548U;
	int32_t t6 = -1;

	t6 = (((x29%x30)-x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	static int64_t x34 = INT64_MIN;
	int16_t x35 = INT16_MAX;
	int16_t x36 = INT16_MIN;
	volatile int32_t t7 = -38;

	t7 = (((x33%x34)-x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = INT16_MIN;
	uint8_t x39 = 13U;
	static volatile uint64_t x40 = UINT64_MAX;
	int32_t t8 = -3677;

	t8 = (((x37%x38)-x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = INT8_MAX;
	int16_t x42 = INT16_MIN;
	static volatile int16_t x43 = INT16_MAX;
	int64_t x44 = INT64_MIN;

	t9 = (((x41%x42)-x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	uint64_t x46 = 3117LLU;
	int8_t x48 = INT8_MAX;
	volatile int32_t t10 = -86437868;

	t10 = (((x45%x46)-x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 5264LL;
	int32_t x50 = INT32_MIN;
	int8_t x51 = INT8_MIN;
	int64_t x52 = -372LL;
	int32_t t11 = 46837314;

	t11 = (((x49%x50)-x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = 1742U;
	uint32_t x54 = UINT32_MAX;
	int8_t x55 = INT8_MIN;
	static volatile int8_t x56 = INT8_MIN;
	volatile int32_t t12 = 51238;

	t12 = (((x53%x54)-x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x63 = 7144053544915308LLU;
	volatile int16_t x64 = -1;

	t13 = (((x61%x62)-x63)==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x69 = 3U;
	static int32_t x70 = -12;
	int16_t x71 = -146;
	static int8_t x72 = INT8_MIN;
	volatile int32_t t14 = 2312788;

	t14 = (((x69%x70)-x71)==x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x74 = 2680840342985774532LLU;
	int16_t x76 = -1;
	volatile int32_t t15 = -2363269;

	t15 = (((x73%x74)-x75)==x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x78 = UINT16_MAX;
	int8_t x79 = -15;
	static int16_t x80 = INT16_MIN;

	t16 = (((x77%x78)-x79)==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = INT64_MAX;
	int32_t t17 = 5;

	t17 = (((x81%x82)-x83)==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = -347790635LL;
	volatile int16_t x95 = -1;
	int16_t x96 = 9107;
	volatile int32_t t18 = -191898;

	t18 = (((x93%x94)-x95)==x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x97 = 21478003U;
	uint64_t x98 = UINT64_MAX;
	static int8_t x99 = 43;
	int16_t x100 = -1;

	t19 = (((x97%x98)-x99)==x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = INT32_MIN;
	uint32_t x103 = 159U;
	uint32_t x104 = 921U;
	volatile int32_t t20 = -1819891;

	t20 = (((x101%x102)-x103)==x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x105 = UINT16_MAX;
	static uint16_t x106 = 20U;
	volatile uint64_t x107 = 4054148967843764LLU;
	static int8_t x108 = INT8_MAX;
	int32_t t21 = -100243015;

	t21 = (((x105%x106)-x107)==x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x109 = INT16_MAX;
	static int32_t x110 = -73060;
	uint64_t x111 = UINT64_MAX;
	int32_t x112 = INT32_MIN;
	int32_t t22 = 320;

	t22 = (((x109%x110)-x111)==x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = 822;
	static uint16_t x114 = UINT16_MAX;
	int32_t x115 = 3149;
	int8_t x116 = 1;
	static int32_t t23 = -2;

	t23 = (((x113%x114)-x115)==x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x117 = 4574U;
	int32_t x119 = INT32_MIN;

	t24 = (((x117%x118)-x119)==x120);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = INT16_MIN;
	int16_t x123 = -5598;
	volatile int16_t x124 = INT16_MIN;

	t25 = (((x121%x122)-x123)==x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x125 = UINT64_MAX;
	static uint16_t x126 = 1620U;
	int8_t x127 = 1;
	int64_t x128 = INT64_MIN;

	t26 = (((x125%x126)-x127)==x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x129 = 6695;
	int8_t x130 = -1;
	int32_t t27 = 1;

	t27 = (((x129%x130)-x131)==x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = -1;
	volatile uint8_t x134 = 1U;
	int8_t x135 = -1;
	volatile int8_t x136 = INT8_MIN;
	volatile int32_t t28 = 339;

	t28 = (((x133%x134)-x135)==x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = 377LLU;
	static int16_t x138 = INT16_MIN;
	uint8_t x139 = 0U;
	static int8_t x140 = INT8_MIN;
	volatile int32_t t29 = 46;

	t29 = (((x137%x138)-x139)==x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x142 = INT64_MAX;
	int64_t x143 = INT64_MIN;
	static volatile uint8_t x144 = 43U;
	volatile int32_t t30 = 494;

	t30 = (((x141%x142)-x143)==x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x146 = INT32_MAX;
	static uint32_t x147 = UINT32_MAX;
	volatile int64_t x148 = INT64_MIN;

	t31 = (((x145%x146)-x147)==x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x153 = INT8_MAX;
	uint32_t x154 = 19166819U;
	uint16_t x155 = 2199U;
	volatile int64_t x156 = INT64_MAX;
	int32_t t32 = -532377;

	t32 = (((x153%x154)-x155)==x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = INT32_MIN;
	int32_t x162 = INT32_MIN;
	int32_t x163 = -1;
	volatile int32_t t33 = -915665750;

	t33 = (((x161%x162)-x163)==x164);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = -16;
	int8_t x167 = 0;
	volatile int32_t t34 = -2080052;

	t34 = (((x165%x166)-x167)==x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = -13315;
	int64_t x170 = INT64_MAX;
	static int16_t x171 = INT16_MIN;
	volatile uint16_t x172 = 645U;
	int32_t t35 = 2096;

	t35 = (((x169%x170)-x171)==x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x173 = 3092U;
	int32_t x174 = INT32_MAX;
	int16_t x175 = INT16_MIN;
	int16_t x176 = 0;
	volatile int32_t t36 = 1061793;

	t36 = (((x173%x174)-x175)==x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x177 = 18841U;
	uint64_t x179 = 652184153703388197LLU;
	int32_t t37 = -74255;

	t37 = (((x177%x178)-x179)==x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x181 = -1LL;
	int16_t x182 = -1;
	int64_t x183 = -1LL;
	uint8_t x184 = UINT8_MAX;
	int32_t t38 = 0;

	t38 = (((x181%x182)-x183)==x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x185 = 489U;

	t39 = (((x185%x186)-x187)==x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = -2056310813026525LL;
	volatile uint16_t x190 = 7857U;
	int8_t x191 = INT8_MAX;
	volatile int16_t x192 = -1;
	volatile int32_t t40 = 15244;

	t40 = (((x189%x190)-x191)==x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = 751967;
	int32_t x194 = -1;
	int16_t x195 = -6;
	static int32_t t41 = -301;

	t41 = (((x193%x194)-x195)==x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x198 = -1LL;
	volatile int8_t x200 = -5;
	volatile int32_t t42 = 208730;

	t42 = (((x197%x198)-x199)==x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x201 = 30U;
	int16_t x202 = INT16_MIN;
	int8_t x203 = 3;
	int8_t x204 = INT8_MAX;
	volatile int32_t t43 = -109340;

	t43 = (((x201%x202)-x203)==x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = INT64_MIN;
	static int64_t x206 = -3080398LL;
	volatile uint16_t x207 = 2U;
	volatile int16_t x208 = INT16_MIN;

	t44 = (((x205%x206)-x207)==x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x209 = 585U;
	uint64_t x210 = 208792964259005507LLU;
	int8_t x211 = INT8_MIN;
	static uint64_t x212 = UINT64_MAX;
	int32_t t45 = 68;

	t45 = (((x209%x210)-x211)==x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = 1227511LL;
	int32_t x215 = INT32_MIN;
	uint32_t x216 = 34597U;
	volatile int32_t t46 = -401347787;

	t46 = (((x213%x214)-x215)==x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MIN;
	uint8_t x219 = 0U;
	volatile int32_t t47 = 291;

	t47 = (((x217%x218)-x219)==x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x221 = -1LL;
	int8_t x222 = -2;
	int8_t x223 = INT8_MIN;
	int32_t t48 = -203606;

	t48 = (((x221%x222)-x223)==x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x226 = INT64_MIN;
	static volatile uint32_t x228 = 40632U;

	t49 = (((x225%x226)-x227)==x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x232 = INT8_MIN;
	static int32_t t50 = -13172;

	t50 = (((x229%x230)-x231)==x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x233 = 116U;
	uint64_t x234 = 2LLU;
	int8_t x235 = -1;
	uint16_t x236 = 338U;
	volatile int32_t t51 = 7008;

	t51 = (((x233%x234)-x235)==x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x237 = INT16_MAX;
	uint64_t x238 = 152464001745LLU;
	uint8_t x239 = UINT8_MAX;
	static int8_t x240 = -1;
	static int32_t t52 = 299117;

	t52 = (((x237%x238)-x239)==x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x241 = -27277182631837LL;
	volatile uint32_t x242 = 1565U;
	volatile int32_t x243 = 1;
	int64_t x244 = INT64_MIN;
	int32_t t53 = 357787;

	t53 = (((x241%x242)-x243)==x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = INT16_MIN;
	uint64_t x246 = 2466764LLU;
	int32_t x247 = -1;
	int64_t x248 = -1LL;
	int32_t t54 = 4571479;

	t54 = (((x245%x246)-x247)==x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = INT8_MIN;
	int16_t x255 = 0;
	static volatile uint16_t x256 = UINT16_MAX;
	int32_t t55 = 104638239;

	t55 = (((x253%x254)-x255)==x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x257 = UINT16_MAX;
	uint8_t x258 = 5U;
	int32_t x259 = -1;
	uint8_t x260 = 49U;
	int32_t t56 = -6079;

	t56 = (((x257%x258)-x259)==x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x261 = 122655608U;
	uint64_t x262 = 385839LLU;
	uint8_t x263 = 2U;
	int32_t x264 = 3824544;
	volatile int32_t t57 = 12;

	t57 = (((x261%x262)-x263)==x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x265 = INT16_MAX;
	static uint32_t x266 = 3207629U;
	int16_t x267 = -1;

	t58 = (((x265%x266)-x267)==x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x273 = UINT64_MAX;
	int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MIN;

	t59 = (((x273%x274)-x275)==x276);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x277 = 9489LLU;
	volatile uint16_t x278 = UINT16_MAX;
	int32_t t60 = 430913857;

	t60 = (((x277%x278)-x279)==x280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = -1;
	uint32_t x283 = 5U;

	t61 = (((x281%x282)-x283)==x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x286 = -1;
	static int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MIN;
	int32_t t62 = -3115823;

	t62 = (((x285%x286)-x287)==x288);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x289 = 45LLU;
	int32_t x291 = INT32_MIN;
	int8_t x292 = 2;
	volatile int32_t t63 = 15357;

	t63 = (((x289%x290)-x291)==x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x293 = -15648;
	static uint8_t x294 = UINT8_MAX;
	int8_t x295 = INT8_MIN;
	uint32_t x296 = UINT32_MAX;
	int32_t t64 = -16155;

	t64 = (((x293%x294)-x295)==x296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x297 = INT64_MIN;
	volatile uint64_t x298 = 21669LLU;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = INT8_MIN;
	static volatile int32_t t65 = 12953;

	t65 = (((x297%x298)-x299)==x300);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = INT32_MAX;
	static uint8_t x303 = 1U;
	volatile int8_t x304 = INT8_MIN;
	int32_t t66 = 231824590;

	t66 = (((x301%x302)-x303)==x304);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x305 = 793628037LLU;
	static uint32_t x306 = 15848U;
	static uint64_t x308 = UINT64_MAX;
	int32_t t67 = -808863273;

	t67 = (((x305%x306)-x307)==x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x309 = -431;
	int64_t x310 = INT64_MIN;
	volatile uint64_t x311 = UINT64_MAX;
	volatile int32_t x312 = INT32_MIN;
	static volatile int32_t t68 = -54980626;

	t68 = (((x309%x310)-x311)==x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x313 = -1;
	volatile int8_t x314 = -36;
	int8_t x315 = INT8_MIN;
	int16_t x316 = 1804;
	volatile int32_t t69 = -1;

	t69 = (((x313%x314)-x315)==x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x317 = 14U;
	int32_t x318 = INT32_MIN;
	volatile int32_t t70 = -347973;

	t70 = (((x317%x318)-x319)==x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x324 = 57538553U;

	t71 = (((x321%x322)-x323)==x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x325 = -508;
	volatile uint64_t x327 = 549LLU;
	int64_t x328 = 326667508LL;
	int32_t t72 = -2812904;

	t72 = (((x325%x326)-x327)==x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x334 = -1;
	uint8_t x335 = UINT8_MAX;
	int32_t t73 = 371185080;

	t73 = (((x333%x334)-x335)==x336);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x338 = UINT32_MAX;
	uint8_t x339 = 12U;
	volatile int32_t t74 = 22;

	t74 = (((x337%x338)-x339)==x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x341 = 2187;
	static uint64_t x342 = 15005715203LLU;
	volatile int16_t x343 = -1;
	static int64_t x344 = INT64_MIN;

	t75 = (((x341%x342)-x343)==x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x345 = INT32_MAX;
	int32_t x346 = -309535402;
	int32_t x347 = INT32_MAX;
	static int64_t x348 = INT64_MIN;
	volatile int32_t t76 = 128432370;

	t76 = (((x345%x346)-x347)==x348);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x349 = INT32_MAX;
	static volatile int32_t x350 = INT32_MIN;
	static uint8_t x351 = UINT8_MAX;
	int32_t t77 = 0;

	t77 = (((x349%x350)-x351)==x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x353 = UINT16_MAX;
	uint16_t x354 = 2U;
	int64_t x356 = INT64_MAX;
	volatile int32_t t78 = 798;

	t78 = (((x353%x354)-x355)==x356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x358 = -1;
	static int32_t x359 = -1;
	int32_t x360 = -92315;
	static volatile int32_t t79 = -62871;

	t79 = (((x357%x358)-x359)==x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x361 = 1747929426938899LLU;
	uint8_t x363 = 106U;
	int8_t x364 = INT8_MIN;
	static int32_t t80 = -91547;

	t80 = (((x361%x362)-x363)==x364);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x365 = 2LLU;
	uint8_t x366 = 24U;
	static int64_t x367 = INT64_MIN;
	int8_t x368 = INT8_MAX;
	volatile int32_t t81 = 30172541;

	t81 = (((x365%x366)-x367)==x368);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x369 = -1LL;
	int8_t x370 = -8;
	static volatile int64_t x372 = INT64_MAX;
	int32_t t82 = -12;

	t82 = (((x369%x370)-x371)==x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x373 = INT32_MIN;
	int32_t x375 = -1;
	int16_t x376 = 1;

	t83 = (((x373%x374)-x375)==x376);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x377 = INT64_MAX;
	volatile int64_t x378 = INT64_MIN;
	uint16_t x380 = UINT16_MAX;

	t84 = (((x377%x378)-x379)==x380);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x381 = -1;
	int8_t x382 = INT8_MAX;
	int8_t x383 = -1;
	int64_t x384 = -135550520263648317LL;
	int32_t t85 = -822225522;

	t85 = (((x381%x382)-x383)==x384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x385 = 102U;
	uint8_t x386 = 24U;
	int32_t x387 = -893270481;
	int16_t x388 = INT16_MAX;
	int32_t t86 = 421;

	t86 = (((x385%x386)-x387)==x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x389 = 1529LLU;
	volatile uint8_t x390 = 1U;
	int64_t x391 = INT64_MAX;
	uint16_t x392 = 31U;
	volatile int32_t t87 = -1;

	t87 = (((x389%x390)-x391)==x392);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MAX;
	int64_t x395 = -115537243329627LL;
	static uint64_t x396 = 7676447743LLU;
	int32_t t88 = -49;

	t88 = (((x393%x394)-x395)==x396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x397 = -1;
	uint16_t x398 = 77U;
	static uint32_t x399 = 666957417U;
	uint32_t x400 = UINT32_MAX;

	t89 = (((x397%x398)-x399)==x400);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x402 = -1LL;
	static volatile int32_t t90 = 2359704;

	t90 = (((x401%x402)-x403)==x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x405 = 90699829U;
	static uint32_t x407 = 1U;
	uint8_t x408 = 1U;
	volatile int32_t t91 = -734909367;

	t91 = (((x405%x406)-x407)==x408);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = -1;
	uint32_t x410 = 75U;
	int8_t x411 = -1;
	int32_t x412 = INT32_MIN;
	int32_t t92 = 0;

	t92 = (((x409%x410)-x411)==x412);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x413 = -1;
	static uint64_t x414 = 13471285LLU;
	int32_t x415 = -44895835;
	int32_t t93 = 1840163;

	t93 = (((x413%x414)-x415)==x416);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x418 = -4299;
	static int16_t x419 = 1;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t94 = -28823687;

	t94 = (((x417%x418)-x419)==x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x422 = UINT64_MAX;
	int8_t x423 = 1;
	static volatile int8_t x424 = INT8_MAX;

	t95 = (((x421%x422)-x423)==x424);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x427 = 23U;
	uint64_t x428 = 15046048938602581LLU;
	volatile int32_t t96 = 27;

	t96 = (((x425%x426)-x427)==x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x429 = -1;
	volatile int32_t x431 = INT32_MIN;
	int16_t x432 = -1;
	volatile int32_t t97 = -241;

	t97 = (((x429%x430)-x431)==x432);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x434 = UINT32_MAX;
	static uint64_t x435 = UINT64_MAX;
	int32_t t98 = -15548044;

	t98 = (((x433%x434)-x435)==x436);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x442 = -1;
	int16_t x443 = -1;
	volatile uint8_t x444 = UINT8_MAX;
	int32_t t99 = -21935;

	t99 = (((x441%x442)-x443)==x444);

	if (t99 != 0) { NG(); } else { ; }
	
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


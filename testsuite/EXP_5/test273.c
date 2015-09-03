#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 575471302;
volatile int32_t x5 = INT32_MIN;
uint32_t x7 = 200752727U;
uint64_t x20 = 4LLU;
uint16_t x23 = 25U;
uint64_t x24 = UINT64_MAX;
volatile int32_t x37 = -1;
int16_t x41 = INT16_MAX;
uint64_t x44 = 14415774874214181LLU;
uint32_t x46 = 1867447208U;
int8_t x48 = INT8_MIN;
static volatile uint16_t x49 = 841U;
static volatile int16_t x52 = -1;
int16_t x57 = -1;
uint16_t x58 = UINT16_MAX;
int32_t x62 = 8437372;
int8_t x64 = INT8_MIN;
static uint64_t x84 = 0LLU;
volatile int32_t t19 = -442025;
int8_t x100 = INT8_MAX;
volatile int32_t t20 = 0;
int32_t t21 = -52878;
uint16_t x105 = UINT16_MAX;
int32_t x108 = INT32_MAX;
int64_t t23 = 198907981965837LL;
int32_t x113 = -1777817;
uint8_t x114 = 66U;
volatile uint8_t x116 = 0U;
volatile int8_t x122 = -37;
static int32_t t27 = -263;
int8_t x134 = INT8_MIN;
int64_t t30 = -890873LL;
static int8_t x144 = INT8_MAX;
volatile int8_t x148 = INT8_MAX;
volatile uint8_t x152 = UINT8_MAX;
static uint64_t x154 = 1LLU;
int8_t x158 = INT8_MAX;
int16_t x160 = -8;
uint16_t x164 = 6732U;
int64_t x170 = INT64_MAX;
volatile int32_t t38 = 1;
uint64_t x173 = UINT64_MAX;
uint32_t x176 = 179893U;
int64_t x178 = -1LL;
int16_t x183 = INT16_MIN;
uint16_t x185 = UINT16_MAX;
int32_t x191 = INT32_MAX;
volatile int16_t x194 = INT16_MIN;
int64_t x202 = INT64_MIN;
int32_t t46 = 176;
int64_t x207 = INT64_MIN;
int64_t x213 = INT64_MAX;
int8_t x215 = -1;
static int64_t t49 = INT64_MAX;
uint64_t x219 = UINT64_MAX;
int64_t t50 = INT64_MAX;
static int32_t x224 = -1;
int32_t x225 = INT32_MIN;
volatile int32_t x235 = INT32_MIN;
int16_t x239 = -1;
volatile int8_t x240 = INT8_MIN;
volatile int16_t x242 = -1;
static volatile int32_t t55 = 1884157;
static uint64_t x246 = 157528980531791457LLU;
uint32_t x247 = 1676U;
static int32_t x251 = -5;
int16_t x264 = INT16_MIN;
volatile int32_t t59 = 0;
static int64_t x265 = 26218LL;
int32_t x267 = -456982449;
uint64_t x276 = 651982238634LLU;
static int32_t x279 = -88349755;
int8_t x285 = -1;
int8_t x294 = INT8_MAX;
uint64_t x295 = UINT64_MAX;
int64_t x305 = INT64_MIN;
int32_t x310 = INT32_MAX;
int32_t x311 = INT32_MAX;
static volatile int32_t t70 = 295920872;
volatile uint16_t x321 = 11002U;
int8_t x325 = INT8_MIN;
static int8_t x328 = 23;
uint8_t x333 = 4U;
static uint64_t x334 = 434406776817949LLU;
int32_t x336 = INT32_MIN;
uint32_t t78 = 2U;
volatile uint64_t x354 = 2662LLU;
int64_t x355 = 73822LL;
int16_t x356 = INT16_MIN;
uint16_t x359 = 10U;
volatile uint32_t t80 = 0U;
int16_t x364 = INT16_MIN;
static volatile uint64_t x366 = 2LLU;
static uint16_t x370 = UINT16_MAX;
int32_t t84 = -719;
static int8_t x379 = -45;
volatile int64_t x386 = -4343041987150LL;
uint8_t x390 = 1U;
int64_t x391 = 2661708729681LL;
uint32_t x393 = 12U;
int16_t x401 = -1;
volatile uint64_t x403 = UINT64_MAX;
volatile uint8_t x404 = 2U;
int32_t t90 = 6;
int32_t x409 = 172;
static volatile int32_t x414 = -1;
volatile int64_t t93 = 100LL;
int32_t x419 = INT32_MAX;
volatile int32_t x430 = INT32_MIN;
static int64_t x435 = -1LL;
static volatile int16_t x444 = INT16_MIN;
volatile int32_t t99 = -13;


void f0(void) {
	volatile int8_t x1 = -1;
	int8_t x2 = 17;
	int8_t x3 = INT8_MIN;
	int32_t x4 = INT32_MAX;

	t0 = (x1^((x2-x3)==x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MAX;
	int64_t x8 = 5108452LL;
	volatile int32_t t1 = INT32_MIN;

	t1 = (x5^((x6-x7)==x8));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 14U;
	int8_t x10 = INT8_MAX;
	int32_t x11 = INT32_MAX;
	static volatile uint16_t x12 = UINT16_MAX;
	int32_t t2 = 24131;

	t2 = (x9^((x10-x11)==x12));

	if (t2 != 14) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MAX;
	int64_t x14 = 3548063LL;
	int32_t x15 = INT32_MIN;
	int64_t x16 = -27LL;
	volatile int32_t t3 = -2;

	t3 = (x13^((x14-x15)==x16));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 71;
	int64_t x18 = -310755208359LL;
	uint8_t x19 = UINT8_MAX;
	int32_t t4 = -30;

	t4 = (x17^((x18-x19)==x20));

	if (t4 != 71) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int8_t x22 = -3;
	volatile int32_t t5 = 105;

	t5 = (x21^((x22-x23)==x24));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	static uint16_t x26 = 8019U;
	int32_t x27 = -10;
	int8_t x28 = INT8_MIN;
	volatile int64_t t6 = INT64_MIN;

	t6 = (x25^((x26-x27)==x28));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 101U;
	static int64_t x30 = INT64_MIN;
	volatile uint64_t x31 = 116196457621LLU;
	volatile int16_t x32 = 952;
	volatile int32_t t7 = 950516203;

	t7 = (x29^((x30-x31)==x32));

	if (t7 != 101) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile uint64_t x34 = UINT64_MAX;
	int64_t x35 = -50959437146860352LL;
	static int16_t x36 = INT16_MAX;
	volatile int32_t t8 = INT32_MIN;

	t8 = (x33^((x34-x35)==x36));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x38 = 1U;
	int64_t x39 = 544442123683614654LL;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 509457851;

	t9 = (x37^((x38-x39)==x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x42 = 63302369U;
	int64_t x43 = -1LL;
	volatile int32_t t10 = -2096260;

	t10 = (x41^((x42-x43)==x44));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int8_t x47 = -23;
	int32_t t11 = -341;

	t11 = (x45^((x46-x47)==x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	uint32_t x51 = 1469025054U;
	int32_t t12 = -6261;

	t12 = (x49^((x50-x51)==x52));

	if (t12 != 841) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 3000U;
	volatile int32_t x54 = INT32_MIN;
	uint64_t x55 = UINT64_MAX;
	uint32_t x56 = 50U;
	volatile uint32_t t13 = 359509221U;

	t13 = (x53^((x54-x55)==x56));

	if (t13 != 3000U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x59 = INT8_MAX;
	static int16_t x60 = INT16_MIN;
	static volatile int32_t t14 = -351;

	t14 = (x57^((x58-x59)==x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int32_t x63 = -1;
	volatile int32_t t15 = 2316;

	t15 = (x61^((x62-x63)==x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 68U;
	uint8_t x66 = UINT8_MAX;
	uint8_t x67 = 0U;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = 563870578;

	t16 = (x65^((x66-x67)==x68));

	if (t16 != 68) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = INT64_MAX;
	volatile int32_t x78 = -550382040;
	int16_t x79 = INT16_MAX;
	static int16_t x80 = INT16_MIN;
	int64_t t17 = INT64_MAX;

	t17 = (x77^((x78-x79)==x80));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MAX;
	volatile int16_t x82 = -1;
	static int16_t x83 = -1;
	int64_t t18 = -340826470332236LL;

	t18 = (x81^((x82-x83)==x84));

	if (t18 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x93 = UINT8_MAX;
	volatile int64_t x94 = 27LL;
	int64_t x95 = INT64_MAX;
	static uint16_t x96 = 58U;

	t19 = (x93^((x94-x95)==x96));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x97 = -1;
	int8_t x98 = INT8_MAX;
	volatile int8_t x99 = 3;

	t20 = (x97^((x98-x99)==x100));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -1;
	volatile int64_t x102 = 7LL;
	volatile uint16_t x103 = 21321U;
	int16_t x104 = INT16_MIN;

	t21 = (x101^((x102-x103)==x104));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x106 = -11481397;
	int32_t x107 = -769206;
	volatile int32_t t22 = 14309;

	t22 = (x105^((x106-x107)==x108));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = -1LL;
	uint32_t x110 = 173119U;
	int8_t x111 = INT8_MIN;
	uint16_t x112 = 115U;

	t23 = (x109^((x110-x111)==x112));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x115 = -4;
	volatile int32_t t24 = -421471;

	t24 = (x113^((x114-x115)==x116));

	if (t24 != -1777817) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x117 = -1;
	uint64_t x118 = 10602257597LLU;
	int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MIN;
	int32_t t25 = -1682;

	t25 = (x117^((x118-x119)==x120));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MAX;
	int8_t x123 = 58;
	volatile uint64_t x124 = UINT64_MAX;
	static int32_t t26 = INT32_MAX;

	t26 = (x121^((x122-x123)==x124));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = 280644;
	static int16_t x126 = 287;
	int8_t x127 = INT8_MAX;
	uint8_t x128 = 5U;

	t27 = (x125^((x126-x127)==x128));

	if (t27 != 280644) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x129 = UINT32_MAX;
	uint32_t x130 = UINT32_MAX;
	int32_t x131 = -97581485;
	static uint16_t x132 = UINT16_MAX;
	volatile uint32_t t28 = UINT32_MAX;

	t28 = (x129^((x130-x131)==x132));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = 44910LLU;
	int64_t x135 = -1LL;
	static int16_t x136 = -1;
	uint64_t t29 = 7404626406903118746LLU;

	t29 = (x133^((x134-x135)==x136));

	if (t29 != 44910LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x137 = 825585198LL;
	static int32_t x138 = INT32_MAX;
	uint64_t x139 = 585751116574208LLU;
	int8_t x140 = -3;

	t30 = (x137^((x138-x139)==x140));

	if (t30 != 825585198LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x141 = 212U;
	volatile int16_t x142 = INT16_MIN;
	static uint8_t x143 = 1U;
	volatile int32_t t31 = -4514;

	t31 = (x141^((x142-x143)==x144));

	if (t31 != 212) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MIN;
	volatile int64_t x146 = INT64_MIN;
	int16_t x147 = INT16_MIN;
	int32_t t32 = -17;

	t32 = (x145^((x146-x147)==x148));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x149 = INT64_MAX;
	int8_t x150 = -2;
	static int16_t x151 = 1;
	int64_t t33 = INT64_MAX;

	t33 = (x149^((x150-x151)==x152));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = INT16_MIN;
	static uint64_t x155 = UINT64_MAX;
	static uint8_t x156 = UINT8_MAX;
	int32_t t34 = 806071;

	t34 = (x153^((x154-x155)==x156));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MAX;
	int16_t x159 = INT16_MIN;
	static int32_t t35 = 27;

	t35 = (x157^((x158-x159)==x160));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x161 = 930588LL;
	static int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MIN;
	volatile int64_t t36 = -463166505613LL;

	t36 = (x161^((x162-x163)==x164));

	if (t36 != 930588LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 514738009U;
	int32_t x166 = INT32_MIN;
	volatile uint32_t x167 = 1797U;
	uint16_t x168 = 3U;
	volatile uint32_t t37 = 28U;

	t37 = (x165^((x166-x167)==x168));

	if (t37 != 514738009U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x169 = 3;
	int64_t x171 = 58LL;
	static int32_t x172 = INT32_MIN;

	t38 = (x169^((x170-x171)==x172));

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x174 = -1;
	volatile uint8_t x175 = 21U;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (x173^((x174-x175)==x176));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = -1;
	volatile int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MIN;
	volatile int32_t t40 = -245779;

	t40 = (x177^((x178-x179)==x180));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = -114LL;
	uint8_t x184 = 1U;
	volatile int32_t t41 = 0;

	t41 = (x181^((x182-x183)==x184));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x186 = INT16_MAX;
	volatile int64_t x187 = 3432LL;
	int8_t x188 = INT8_MIN;
	volatile int32_t t42 = 236;

	t42 = (x185^((x186-x187)==x188));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = 1004U;
	uint64_t x190 = UINT64_MAX;
	int16_t x192 = 1;
	volatile int32_t t43 = 248770;

	t43 = (x189^((x190-x191)==x192));

	if (t43 != 1004) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = UINT8_MAX;
	int32_t x195 = INT32_MIN;
	int8_t x196 = -7;
	volatile int32_t t44 = -41133;

	t44 = (x193^((x194-x195)==x196));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x197 = 1248U;
	int8_t x198 = INT8_MAX;
	int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MIN;
	int32_t t45 = 21406;

	t45 = (x197^((x198-x199)==x200));

	if (t45 != 1248) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x201 = UINT16_MAX;
	int32_t x203 = -450424;
	uint16_t x204 = UINT16_MAX;

	t46 = (x201^((x202-x203)==x204));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = INT64_MAX;
	volatile int16_t x206 = INT16_MIN;
	static int64_t x208 = INT64_MIN;
	volatile int64_t t47 = INT64_MAX;

	t47 = (x205^((x206-x207)==x208));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = -278;
	static int64_t x210 = 22571821083902LL;
	int8_t x211 = -1;
	int8_t x212 = INT8_MIN;
	static volatile int32_t t48 = -6;

	t48 = (x209^((x210-x211)==x212));

	if (t48 != -278) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x214 = 3607U;
	int8_t x216 = -3;

	t49 = (x213^((x214-x215)==x216));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = INT64_MAX;
	int16_t x218 = -1;
	uint16_t x220 = 9728U;

	t50 = (x217^((x218-x219)==x220));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = 6575U;
	static int8_t x222 = -2;
	static int8_t x223 = INT8_MAX;
	static uint32_t t51 = 32717112U;

	t51 = (x221^((x222-x223)==x224));

	if (t51 != 6575U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x226 = 3U;
	uint32_t x227 = UINT32_MAX;
	static volatile uint8_t x228 = 0U;
	int32_t t52 = INT32_MIN;

	t52 = (x225^((x226-x227)==x228));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x233 = INT32_MIN;
	int32_t x234 = -1;
	int32_t x236 = -401;
	int32_t t53 = INT32_MIN;

	t53 = (x233^((x234-x235)==x236));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x237 = UINT32_MAX;
	volatile int64_t x238 = INT64_MIN;
	uint32_t t54 = UINT32_MAX;

	t54 = (x237^((x238-x239)==x240));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x241 = -1;
	int8_t x243 = -55;
	int8_t x244 = -1;

	t55 = (x241^((x242-x243)==x244));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x245 = 0U;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t56 = -750;

	t56 = (x245^((x246-x247)==x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x249 = UINT64_MAX;
	volatile int16_t x250 = INT16_MIN;
	uint8_t x252 = 21U;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (x249^((x250-x251)==x252));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = -1;
	static volatile int16_t x255 = 6;
	int8_t x256 = -1;
	int64_t t58 = INT64_MIN;

	t58 = (x253^((x254-x255)==x256));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x261 = 55U;
	volatile int32_t x262 = 1064551;
	static uint8_t x263 = UINT8_MAX;

	t59 = (x261^((x262-x263)==x264));

	if (t59 != 55) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x266 = -1;
	uint16_t x268 = 85U;
	int64_t t60 = 16166293LL;

	t60 = (x265^((x266-x267)==x268));

	if (t60 != 26218LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = 17LL;
	static int32_t x270 = -1;
	static int8_t x271 = -2;
	static uint8_t x272 = 3U;
	int64_t t61 = 115168LL;

	t61 = (x269^((x270-x271)==x272));

	if (t61 != 17LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x273 = 1918U;
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;
	volatile uint32_t t62 = 2039U;

	t62 = (x273^((x274-x275)==x276));

	if (t62 != 1918U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x277 = -52067825106954LL;
	int16_t x278 = INT16_MIN;
	uint8_t x280 = UINT8_MAX;
	int64_t t63 = -67384290386LL;

	t63 = (x277^((x278-x279)==x280));

	if (t63 != -52067825106954LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x286 = -100;
	uint64_t x287 = UINT64_MAX;
	uint8_t x288 = 2U;
	static int32_t t64 = 3160;

	t64 = (x285^((x286-x287)==x288));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = INT8_MIN;
	static volatile int32_t x290 = INT32_MAX;
	volatile uint8_t x291 = UINT8_MAX;
	volatile uint8_t x292 = 4U;
	int32_t t65 = -1452;

	t65 = (x289^((x290-x291)==x292));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = -1;
	volatile int32_t x296 = -1;
	int32_t t66 = -31656;

	t66 = (x293^((x294-x295)==x296));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = 29;
	static int16_t x298 = INT16_MAX;
	int64_t x299 = INT64_MAX;
	int32_t x300 = INT32_MIN;
	int32_t t67 = 776415145;

	t67 = (x297^((x298-x299)==x300));

	if (t67 != 29) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x306 = 2009U;
	int32_t x307 = INT32_MAX;
	int8_t x308 = 3;
	volatile int64_t t68 = INT64_MIN;

	t68 = (x305^((x306-x307)==x308));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x309 = 4U;
	int64_t x312 = INT64_MAX;
	static volatile int32_t t69 = -12142;

	t69 = (x309^((x310-x311)==x312));

	if (t69 != 4) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = INT16_MIN;
	volatile uint16_t x314 = 14526U;
	int8_t x315 = INT8_MAX;
	int16_t x316 = INT16_MIN;

	t70 = (x313^((x314-x315)==x316));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MIN;
	int32_t x319 = INT32_MIN;
	uint16_t x320 = 5U;
	volatile int32_t t71 = -6860039;

	t71 = (x317^((x318-x319)==x320));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x322 = UINT8_MAX;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = -5518562682LL;
	int32_t t72 = -413902;

	t72 = (x321^((x322-x323)==x324));

	if (t72 != 11002) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x326 = 460LLU;
	uint16_t x327 = 1841U;
	int32_t t73 = 26;

	t73 = (x325^((x326-x327)==x328));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x329 = UINT32_MAX;
	int8_t x330 = INT8_MAX;
	volatile int32_t x331 = -1;
	int16_t x332 = 91;
	uint32_t t74 = UINT32_MAX;

	t74 = (x329^((x330-x331)==x332));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x335 = INT8_MAX;
	volatile int32_t t75 = 29563;

	t75 = (x333^((x334-x335)==x336));

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x337 = 2U;
	uint32_t x338 = UINT32_MAX;
	int16_t x339 = -1;
	int64_t x340 = INT64_MIN;
	static int32_t t76 = 72;

	t76 = (x337^((x338-x339)==x340));

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = INT8_MIN;
	uint16_t x342 = 9471U;
	uint64_t x343 = UINT64_MAX;
	static uint64_t x344 = 265578130LLU;
	int32_t t77 = -79584541;

	t77 = (x341^((x342-x343)==x344));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x345 = 0U;
	int16_t x346 = -1;
	int32_t x347 = -31808;
	uint8_t x348 = 4U;

	t78 = (x345^((x346-x347)==x348));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x353 = UINT8_MAX;
	volatile int32_t t79 = 53911766;

	t79 = (x353^((x354-x355)==x356));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x357 = 41185253U;
	int8_t x358 = -1;
	volatile int64_t x360 = INT64_MIN;

	t80 = (x357^((x358-x359)==x360));

	if (t80 != 41185253U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = 1;
	volatile int16_t x362 = -1;
	int16_t x363 = INT16_MIN;
	int32_t t81 = 605680327;

	t81 = (x361^((x362-x363)==x364));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x365 = 22925U;
	uint32_t x367 = 8332U;
	volatile int8_t x368 = INT8_MIN;
	volatile int32_t t82 = 27905743;

	t82 = (x365^((x366-x367)==x368));

	if (t82 != 22925) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = -78252882018LL;
	int16_t x371 = 28;
	uint8_t x372 = UINT8_MAX;
	static int64_t t83 = -102603LL;

	t83 = (x369^((x370-x371)==x372));

	if (t83 != -78252882018LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x373 = 12U;
	int8_t x374 = -34;
	uint8_t x375 = 5U;
	uint64_t x376 = 2049652937LLU;

	t84 = (x373^((x374-x375)==x376));

	if (t84 != 12) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x377 = 480351981379LL;
	volatile int16_t x378 = -7;
	uint8_t x380 = 51U;
	int64_t t85 = -2779654329LL;

	t85 = (x377^((x378-x379)==x380));

	if (t85 != 480351981379LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x385 = 0U;
	volatile uint8_t x387 = 4U;
	volatile int64_t x388 = INT64_MIN;
	static volatile int32_t t86 = -2;

	t86 = (x385^((x386-x387)==x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x389 = 0U;
	static volatile int8_t x392 = -27;
	static int32_t t87 = -27595;

	t87 = (x389^((x390-x391)==x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x394 = 1U;
	uint64_t x395 = 613690LLU;
	volatile int8_t x396 = INT8_MAX;
	uint32_t t88 = 830U;

	t88 = (x393^((x394-x395)==x396));

	if (t88 != 12U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x397 = 43U;
	int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	static volatile int32_t x400 = INT32_MAX;
	static int32_t t89 = 0;

	t89 = (x397^((x398-x399)==x400));

	if (t89 != 43) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x402 = 633313242698LLU;

	t90 = (x401^((x402-x403)==x404));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x405 = INT16_MIN;
	volatile uint64_t x406 = UINT64_MAX;
	int8_t x407 = INT8_MIN;
	int8_t x408 = -1;
	int32_t t91 = 0;

	t91 = (x405^((x406-x407)==x408));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x410 = 193157732LL;
	static int8_t x411 = 50;
	static int8_t x412 = INT8_MAX;
	volatile int32_t t92 = 686064817;

	t92 = (x409^((x410-x411)==x412));

	if (t92 != 172) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x413 = 706749469358113LL;
	uint64_t x415 = UINT64_MAX;
	volatile int32_t x416 = INT32_MIN;

	t93 = (x413^((x414-x415)==x416));

	if (t93 != 706749469358113LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = 3;
	uint8_t x418 = UINT8_MAX;
	int64_t x420 = INT64_MAX;
	volatile int32_t t94 = -6;

	t94 = (x417^((x418-x419)==x420));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x421 = UINT8_MAX;
	int16_t x422 = INT16_MIN;
	static int8_t x423 = INT8_MAX;
	int8_t x424 = 1;
	int32_t t95 = -229;

	t95 = (x421^((x422-x423)==x424));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x429 = 4655LLU;
	volatile int32_t x431 = INT32_MIN;
	int32_t x432 = INT32_MIN;
	volatile uint64_t t96 = 111LLU;

	t96 = (x429^((x430-x431)==x432));

	if (t96 != 4655LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x433 = INT32_MAX;
	int32_t x434 = INT32_MIN;
	int64_t x436 = 1520281LL;
	volatile int32_t t97 = INT32_MAX;

	t97 = (x433^((x434-x435)==x436));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x437 = 644U;
	int8_t x438 = 0;
	volatile uint8_t x439 = UINT8_MAX;
	uint64_t x440 = 1984LLU;
	uint32_t t98 = 1440U;

	t98 = (x437^((x438-x439)==x440));

	if (t98 != 644U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x441 = -1;
	int8_t x442 = INT8_MAX;
	int8_t x443 = 0;

	t99 = (x441^((x442-x443)==x444));

	if (t99 != -1) { NG(); } else { ; }
	
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


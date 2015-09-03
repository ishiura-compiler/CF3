#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 9435611517LLU;
uint32_t x5 = UINT32_MAX;
static uint16_t x9 = 5U;
volatile int32_t x17 = -1;
int16_t x20 = INT16_MIN;
int16_t x21 = 2378;
int16_t x25 = -1;
int64_t x30 = -3164139567LL;
uint32_t x31 = 987625U;
static volatile int32_t x34 = INT32_MIN;
int8_t x41 = 5;
uint16_t x50 = 198U;
uint32_t x52 = 96U;
uint64_t t12 = 3409739530693414361LLU;
uint8_t x65 = UINT8_MAX;
int64_t x72 = INT64_MIN;
volatile int64_t t14 = -1630LL;
static int8_t x77 = INT8_MAX;
int16_t x78 = -4810;
volatile uint8_t x80 = UINT8_MAX;
uint32_t x92 = 4U;
static int8_t x93 = 1;
volatile uint64_t x100 = UINT64_MAX;
int16_t x101 = -1;
volatile int8_t x114 = -5;
static int64_t x117 = INT64_MIN;
volatile int16_t x121 = 1781;
uint32_t x122 = UINT32_MAX;
int64_t t28 = 0LL;
volatile int64_t x130 = -1LL;
static int64_t t29 = -134673610934LL;
uint8_t x135 = UINT8_MAX;
static int8_t x145 = 0;
int16_t x148 = INT16_MIN;
static volatile int8_t x151 = 0;
uint8_t x153 = 0U;
int32_t x154 = INT32_MIN;
static volatile int16_t x158 = INT16_MIN;
static uint32_t x160 = UINT32_MAX;
int8_t x164 = -1;
static uint64_t x169 = 565346476038702151LLU;
uint16_t x176 = UINT16_MAX;
volatile int32_t t41 = 1683255;
int64_t x188 = -1LL;
uint64_t t42 = 10LLU;
volatile int16_t x189 = -1;
volatile uint32_t x193 = 25663U;
int8_t x195 = INT8_MAX;
int64_t x200 = INT64_MIN;
static uint16_t x203 = 927U;
int32_t t46 = 1188939;
static uint8_t x205 = UINT8_MAX;
int64_t x206 = INT64_MIN;
uint32_t x208 = 32107270U;
int32_t x222 = -1080865;
int64_t x223 = -4LL;
int16_t x224 = -1;
static volatile int8_t x231 = 10;
static uint64_t t53 = 14904435750351LLU;
int64_t x236 = INT64_MAX;
uint8_t x237 = UINT8_MAX;
static int64_t x239 = 3LL;
int64_t x241 = INT64_MAX;
static int16_t x245 = INT16_MAX;
volatile int64_t x252 = INT64_MAX;
uint8_t x265 = 1U;
static volatile int64_t x269 = INT64_MIN;
volatile int8_t x274 = -1;
uint16_t x287 = UINT16_MAX;
int32_t x306 = INT32_MAX;
uint64_t x313 = 42432701LLU;
static volatile uint8_t x316 = 4U;
volatile int64_t t74 = 1LL;
int32_t t75 = -58;
int16_t x330 = 0;
uint8_t x333 = 55U;
volatile uint32_t t77 = 9275U;
static int64_t x343 = INT64_MAX;
int16_t x344 = INT16_MIN;
int8_t x346 = -28;
int8_t x347 = -44;
int8_t x363 = 42;
int16_t x364 = -1;
volatile uint16_t x367 = UINT16_MAX;
uint16_t x368 = UINT16_MAX;
uint16_t x374 = 5790U;
int32_t t88 = -9625;
uint32_t x385 = UINT32_MAX;
volatile int16_t x386 = -1;
int16_t x387 = -1;
uint32_t t90 = 1929U;
int16_t x400 = INT16_MIN;
static int64_t t95 = 2115641614LL;
volatile int32_t x409 = 453736;
static int64_t t96 = 3248676799821LL;
int64_t x416 = -12048052024496944LL;
int64_t x417 = 1187666155LL;
int64_t x419 = INT64_MIN;
int64_t t98 = -262444879917445LL;
int32_t x421 = -1021925623;
int64_t x424 = 437863471200298LL;
volatile int64_t t99 = -25188463762LL;


void f0(void) {
	volatile int16_t x1 = -3;
	volatile uint64_t x2 = 8419930LLU;
	int16_t x3 = INT16_MIN;
	volatile int32_t x4 = 978;

	t0 = (x1+(x2&(x3%x4)));

	if (t0 != 8419855LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	int64_t x7 = INT64_MAX;
	static int32_t x8 = -26877;
	volatile int64_t t1 = 1408032LL;

	t1 = (x5+(x6&(x7%x8)));

	if (t1 != 4294986088LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	uint32_t x11 = 260088177U;
	int8_t x12 = -48;
	volatile uint32_t t2 = 1U;

	t2 = (x9+(x10&(x11%x12)));

	if (t2 != 260079621U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = -2;
	int16_t x19 = INT16_MIN;
	volatile int32_t t3 = 906248;

	t3 = (x17+(x18&(x19%x20)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x22 = -1;
	uint16_t x23 = 68U;
	volatile int64_t x24 = INT64_MIN;
	volatile int64_t t4 = -1256946770434591LL;

	t4 = (x21+(x22&(x23%x24)));

	if (t4 != 2446LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = 6U;
	uint16_t x27 = 744U;
	volatile uint64_t x28 = UINT64_MAX;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (x25+(x26&(x27%x28)));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 53;
	int16_t x32 = -1;
	int64_t t6 = -24222LL;

	t6 = (x29+(x30&(x31%x32)));

	if (t6 != 459254LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 26U;
	uint64_t x35 = 234938LLU;
	static int32_t x36 = INT32_MIN;
	volatile uint64_t t7 = 514648LLU;

	t7 = (x33+(x34&(x35%x36)));

	if (t7 != 26LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MAX;
	volatile uint16_t x38 = 1531U;
	uint32_t x39 = 1368848U;
	int8_t x40 = INT8_MAX;
	uint32_t t8 = 249U;

	t8 = (x37+(x38&(x39%x40)));

	if (t8 != 169U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x42 = INT64_MIN;
	static volatile uint32_t x43 = UINT32_MAX;
	uint8_t x44 = 18U;
	int64_t t9 = -1378522141724026LL;

	t9 = (x41+(x42&(x43%x44)));

	if (t9 != 5LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	uint16_t x51 = 8U;
	uint32_t t10 = 41U;

	t10 = (x49+(x50&(x51%x52)));

	if (t10 != 2147483648U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = 0;
	static int8_t x58 = -1;
	volatile int8_t x59 = -1;
	int32_t x60 = -1;
	volatile int32_t t11 = -67100;

	t11 = (x57+(x58&(x59%x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 64131269374LLU;
	int8_t x62 = 48;
	volatile int8_t x63 = INT8_MIN;
	int8_t x64 = -1;

	t12 = (x61+(x62&(x63%x64)));

	if (t12 != 64131269374LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x66 = INT8_MIN;
	volatile int32_t x67 = -1;
	volatile int32_t x68 = 26521;
	volatile int32_t t13 = 0;

	t13 = (x65+(x66&(x67%x68)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = UINT8_MAX;
	volatile int16_t x70 = 1;
	static volatile int64_t x71 = 3984946LL;

	t14 = (x69+(x70&(x71%x72)));

	if (t14 != 255LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = UINT32_MAX;
	static int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MIN;
	int64_t x76 = 406510091481388933LL;
	volatile int64_t t15 = 250933852223385343LL;

	t15 = (x73+(x74&(x75%x76)));

	if (t15 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x79 = INT16_MIN;
	int32_t t16 = -4767973;

	t16 = (x77+(x78&(x79%x80)));

	if (t16 != -4737) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x81 = 446;
	uint32_t x82 = 66040U;
	volatile int32_t x83 = -1;
	volatile int32_t x84 = -1;
	static volatile uint32_t t17 = 4824U;

	t17 = (x81+(x82&(x83%x84)));

	if (t17 != 446U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x85 = UINT32_MAX;
	int8_t x86 = INT8_MAX;
	int16_t x87 = INT16_MIN;
	static volatile uint32_t x88 = 233U;
	volatile uint32_t t18 = 1444110U;

	t18 = (x85+(x86&(x87%x88)));

	if (t18 != 92U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x89 = UINT32_MAX;
	volatile int32_t x90 = INT32_MIN;
	uint16_t x91 = 1209U;
	static uint32_t t19 = UINT32_MAX;

	t19 = (x89+(x90&(x91%x92)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x94 = -540834615;
	uint32_t x95 = 351172183U;
	volatile int64_t x96 = INT64_MIN;
	volatile int64_t t20 = 142197383LL;

	t20 = (x93+(x94&(x95%x96)));

	if (t20 != 348259394LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x97 = UINT64_MAX;
	static volatile int16_t x98 = 2577;
	volatile uint64_t x99 = 5248736210LLU;
	uint64_t t21 = 85768022291LLU;

	t21 = (x97+(x98&(x99%x100)));

	if (t21 != 2575LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x102 = -1;
	int32_t x103 = -1;
	int8_t x104 = INT8_MIN;
	volatile int32_t t22 = -22606;

	t22 = (x101+(x102&(x103%x104)));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = INT8_MAX;
	int16_t x106 = INT16_MAX;
	volatile int8_t x107 = INT8_MIN;
	volatile uint16_t x108 = 13U;
	int32_t t23 = 15802439;

	t23 = (x105+(x106&(x107%x108)));

	if (t23 != 32884) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 0U;
	static int32_t x110 = INT32_MIN;
	uint32_t x111 = 264733549U;
	volatile uint32_t x112 = 33U;
	volatile uint32_t t24 = 4285661U;

	t24 = (x109+(x110&(x111%x112)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = UINT8_MAX;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MAX;
	int32_t t25 = 1;

	t25 = (x113+(x114&(x115%x116)));

	if (t25 != 250) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x118 = -1;
	static volatile int32_t x119 = INT32_MAX;
	int64_t x120 = INT64_MIN;
	static int64_t t26 = -395LL;

	t26 = (x117+(x118&(x119%x120)));

	if (t26 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x123 = 15443714338LLU;
	int64_t x124 = INT64_MIN;
	volatile uint64_t t27 = 3361298LLU;

	t27 = (x121+(x122&(x123%x124)));

	if (t27 != 2558814231LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x125 = -19047452835LL;
	volatile int64_t x126 = -1LL;
	int32_t x127 = INT32_MIN;
	int32_t x128 = -1;

	t28 = (x125+(x126&(x127%x128)));

	if (t28 != -19047452835LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = -22371363811721585LL;
	int32_t x131 = -1;
	int32_t x132 = INT32_MIN;

	t29 = (x129+(x130&(x131%x132)));

	if (t29 != -22371363811721586LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x133 = 1U;
	int8_t x134 = 0;
	static int8_t x136 = 6;
	uint32_t t30 = 8424U;

	t30 = (x133+(x134&(x135%x136)));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x137 = INT16_MIN;
	volatile uint64_t x138 = 115LLU;
	static int32_t x139 = -1;
	uint32_t x140 = UINT32_MAX;
	uint64_t t31 = 3612628009278951LLU;

	t31 = (x137+(x138&(x139%x140)));

	if (t31 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x141 = 501873U;
	volatile int64_t x142 = INT64_MAX;
	uint16_t x143 = 147U;
	int64_t x144 = 4113997LL;
	static int64_t t32 = 4496795880873531017LL;

	t32 = (x141+(x142&(x143%x144)));

	if (t32 != 502020LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x146 = INT8_MIN;
	uint16_t x147 = UINT16_MAX;
	int32_t t33 = -52;

	t33 = (x145+(x146&(x147%x148)));

	if (t33 != 32640) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x149 = INT64_MAX;
	uint64_t x150 = UINT64_MAX;
	int32_t x152 = INT32_MAX;
	volatile uint64_t t34 = 3430796973574LLU;

	t34 = (x149+(x150&(x151%x152)));

	if (t34 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x155 = INT64_MIN;
	int32_t x156 = INT32_MIN;
	int64_t t35 = -26921944LL;

	t35 = (x153+(x154&(x155%x156)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = -1;
	int64_t x159 = INT64_MIN;
	static volatile int64_t t36 = -71435641462LL;

	t36 = (x157+(x158&(x159%x160)));

	if (t36 != -2147483649LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = -7923998962647888LL;
	static uint64_t x162 = UINT64_MAX;
	int32_t x163 = -1;
	static uint64_t t37 = 43746744364006LLU;

	t37 = (x161+(x162&(x163%x164)));

	if (t37 != 18438820074746903728LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x170 = 51919019;
	static int64_t x171 = INT64_MIN;
	int8_t x172 = -47;
	volatile uint64_t t38 = 19814801008762577LLU;

	t38 = (x169+(x170&(x171%x172)));

	if (t38 != 565346476090621135LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x173 = 15U;
	uint32_t x174 = 8U;
	uint8_t x175 = UINT8_MAX;
	uint32_t t39 = 484757179U;

	t39 = (x173+(x174&(x175%x176)));

	if (t39 != 23U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x177 = 4730U;
	uint16_t x178 = 7360U;
	volatile uint16_t x179 = UINT16_MAX;
	volatile int16_t x180 = INT16_MIN;
	int32_t t40 = -43956758;

	t40 = (x177+(x178&(x179%x180)));

	if (t40 != 12090) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x181 = INT32_MIN;
	int32_t x182 = 28;
	uint8_t x183 = UINT8_MAX;
	int32_t x184 = INT32_MAX;

	t41 = (x181+(x182&(x183%x184)));

	if (t41 != -2147483620) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x185 = 276895LLU;
	int8_t x186 = -1;
	volatile int64_t x187 = INT64_MAX;

	t42 = (x185+(x186&(x187%x188)));

	if (t42 != 276895LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x190 = 6U;
	int64_t x191 = INT64_MAX;
	int16_t x192 = 3;
	static int64_t t43 = 53577709LL;

	t43 = (x189+(x190&(x191%x192)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x194 = INT64_MIN;
	volatile uint16_t x196 = 1235U;
	volatile int64_t t44 = 192LL;

	t44 = (x193+(x194&(x195%x196)));

	if (t44 != 25663LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x197 = INT32_MIN;
	int16_t x198 = 6138;
	int8_t x199 = INT8_MIN;
	int64_t t45 = -42513249123654LL;

	t45 = (x197+(x198&(x199%x200)));

	if (t45 != -2147477632LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = 1U;
	volatile int32_t x202 = -912;
	int16_t x204 = -1;

	t46 = (x201+(x202&(x203%x204)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x207 = -59651018862592046LL;
	volatile int64_t t47 = 80678066LL;

	t47 = (x205+(x206&(x207%x208)));

	if (t47 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x209 = 142469LL;
	int16_t x210 = 97;
	int32_t x211 = INT32_MAX;
	int64_t x212 = -1LL;
	int64_t t48 = 24429400220LL;

	t48 = (x209+(x210&(x211%x212)));

	if (t48 != 142469LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MIN;
	uint16_t x214 = UINT16_MAX;
	int16_t x215 = -1;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t49 = 0U;

	t49 = (x213+(x214&(x215%x216)));

	if (t49 != 4294934528U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = -9;
	int16_t x218 = INT16_MIN;
	static uint8_t x219 = 41U;
	int64_t x220 = -1LL;
	static int64_t t50 = -408479420242LL;

	t50 = (x217+(x218&(x219%x220)));

	if (t50 != -9LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = -564676149175LL;
	int64_t t51 = 24616LL;

	t51 = (x221+(x222&(x223%x224)));

	if (t51 != -564676149175LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 2060323042784739LLU;
	uint8_t x226 = 8U;
	int32_t x227 = -14159;
	uint16_t x228 = UINT16_MAX;
	volatile uint64_t t52 = 1781798278418383083LLU;

	t52 = (x225+(x226&(x227%x228)));

	if (t52 != 2060323042784739LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x229 = 3369451511298451LLU;
	volatile int64_t x230 = -46LL;
	int32_t x232 = INT32_MIN;

	t53 = (x229+(x230&(x231%x232)));

	if (t53 != 3369451511298453LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x233 = 124582020;
	int64_t x234 = 363LL;
	static volatile int16_t x235 = INT16_MAX;
	volatile int64_t t54 = -41095LL;

	t54 = (x233+(x234&(x235%x236)));

	if (t54 != 124582383LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x238 = -1;
	static int64_t x240 = INT64_MIN;
	int64_t t55 = 34733314510471518LL;

	t55 = (x237+(x238&(x239%x240)));

	if (t55 != 258LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x242 = 26U;
	int64_t x243 = INT64_MIN;
	int16_t x244 = INT16_MIN;
	volatile int64_t t56 = INT64_MAX;

	t56 = (x241+(x242&(x243%x244)));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x246 = INT32_MIN;
	volatile int64_t x247 = -492824LL;
	volatile int16_t x248 = -7255;
	int64_t t57 = -1025798304960415LL;

	t57 = (x245+(x246&(x247%x248)));

	if (t57 != -2147450881LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x249 = -482050153LL;
	uint16_t x250 = UINT16_MAX;
	static volatile int32_t x251 = 22758621;
	int64_t t58 = -3200798822925LL;

	t58 = (x249+(x250&(x251%x252)));

	if (t58 != -482032524LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MAX;
	int16_t x259 = INT16_MIN;
	volatile uint64_t x260 = UINT64_MAX;
	volatile uint64_t t59 = 32941579LLU;

	t59 = (x257+(x258&(x259%x260)));

	if (t59 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x261 = 13291977913968LLU;
	int16_t x262 = INT16_MAX;
	static int32_t x263 = INT32_MIN;
	int32_t x264 = INT32_MAX;
	volatile uint64_t t60 = 3897125956LLU;

	t60 = (x261+(x262&(x263%x264)));

	if (t60 != 13291977946735LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x266 = -327477898599LL;
	static uint8_t x267 = UINT8_MAX;
	int8_t x268 = -5;
	volatile int64_t t61 = 10857765462LL;

	t61 = (x265+(x266&(x267%x268)));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x270 = UINT16_MAX;
	int64_t x271 = 90090118LL;
	int32_t x272 = -197;
	volatile int64_t t62 = 14117768860428934LL;

	t62 = (x269+(x270&(x271%x272)));

	if (t62 != -9223372036854775760LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = 0U;
	static uint8_t x275 = 13U;
	uint8_t x276 = UINT8_MAX;
	int32_t t63 = -1;

	t63 = (x273+(x274&(x275%x276)));

	if (t63 != 13) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x277 = 60U;
	uint64_t x278 = 210947725LLU;
	int64_t x279 = 229127LL;
	int32_t x280 = -189001;
	volatile uint64_t t64 = 6LLU;

	t64 = (x277+(x278&(x279%x280)));

	if (t64 != 36040LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x285 = INT8_MAX;
	volatile int8_t x286 = INT8_MAX;
	int8_t x288 = INT8_MIN;
	int32_t t65 = 0;

	t65 = (x285+(x286&(x287%x288)));

	if (t65 != 254) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = INT16_MIN;
	static volatile int16_t x290 = -1;
	uint8_t x291 = UINT8_MAX;
	volatile int32_t x292 = 2152690;
	int32_t t66 = 102839;

	t66 = (x289+(x290&(x291%x292)));

	if (t66 != -32513) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = 37914;
	uint16_t x294 = UINT16_MAX;
	int16_t x295 = -9;
	int16_t x296 = -725;
	volatile int32_t t67 = -1026;

	t67 = (x293+(x294&(x295%x296)));

	if (t67 != 103441) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = 124;
	static volatile int32_t x298 = 20891;
	uint8_t x299 = 4U;
	int16_t x300 = INT16_MIN;
	volatile int32_t t68 = -32050813;

	t68 = (x297+(x298&(x299%x300)));

	if (t68 != 124) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x301 = 0U;
	uint16_t x302 = 131U;
	int8_t x303 = -1;
	volatile int32_t x304 = -79914;
	volatile int32_t t69 = 44;

	t69 = (x301+(x302&(x303%x304)));

	if (t69 != 131) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x305 = -1LL;
	int32_t x307 = INT32_MAX;
	volatile int16_t x308 = INT16_MAX;
	volatile int64_t t70 = -865901628LL;

	t70 = (x305+(x306&(x307%x308)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MIN;
	int16_t x311 = 253;
	int8_t x312 = -1;
	volatile int32_t t71 = -2683078;

	t71 = (x309+(x310&(x311%x312)));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x314 = 19682928648357944LLU;
	int64_t x315 = -57713649LL;
	volatile uint64_t t72 = 138236042480407LLU;

	t72 = (x313+(x314&(x315%x316)));

	if (t72 != 19682928690790645LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = 1;
	int64_t x318 = 10628758LL;
	int16_t x319 = INT16_MIN;
	static uint64_t x320 = 14248005457826774LLU;
	static uint64_t t73 = 6402790758278LLU;

	t73 = (x317+(x318&(x319%x320)));

	if (t73 != 142341LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = -1;
	int64_t x322 = INT64_MAX;
	volatile uint32_t x323 = UINT32_MAX;
	int8_t x324 = -1;

	t74 = (x321+(x322&(x323%x324)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = -22;
	int8_t x326 = INT8_MIN;
	volatile int32_t x327 = 220998028;
	int8_t x328 = INT8_MAX;

	t75 = (x325+(x326&(x327%x328)));

	if (t75 != -22) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x329 = UINT64_MAX;
	int16_t x331 = INT16_MAX;
	uint16_t x332 = 2258U;
	uint64_t t76 = UINT64_MAX;

	t76 = (x329+(x330&(x331%x332)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x334 = -38;
	uint8_t x335 = UINT8_MAX;
	static uint32_t x336 = 8528741U;

	t77 = (x333+(x334&(x335%x336)));

	if (t77 != 273U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x337 = 296863317U;
	int64_t x338 = INT64_MIN;
	volatile int32_t x339 = INT32_MIN;
	int32_t x340 = 7;
	int64_t t78 = 1977682LL;

	t78 = (x337+(x338&(x339%x340)));

	if (t78 != -9223372036557912491LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = INT16_MIN;
	static int32_t x342 = INT32_MIN;
	int64_t t79 = 120LL;

	t79 = (x341+(x342&(x343%x344)));

	if (t79 != -32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x345 = 1914U;
	volatile int16_t x348 = -669;
	volatile uint32_t t80 = 23027U;

	t80 = (x345+(x346&(x347%x348)));

	if (t80 != 1854U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x349 = -5;
	uint64_t x350 = 48102372032273495LLU;
	static int16_t x351 = INT16_MAX;
	volatile int8_t x352 = 2;
	uint64_t t81 = 49053888422388191LLU;

	t81 = (x349+(x350&(x351%x352)));

	if (t81 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = INT16_MIN;
	uint32_t x354 = 1525U;
	volatile int32_t x355 = 188847;
	uint32_t x356 = UINT32_MAX;
	uint32_t t82 = 0U;

	t82 = (x353+(x354&(x355%x356)));

	if (t82 != 4294934949U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x357 = 55U;
	uint16_t x358 = UINT16_MAX;
	static uint32_t x359 = 2U;
	static uint32_t x360 = 1535882450U;
	uint32_t t83 = 26960838U;

	t83 = (x357+(x358&(x359%x360)));

	if (t83 != 57U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x361 = 166U;
	int32_t x362 = 7;
	volatile int32_t t84 = 1374262;

	t84 = (x361+(x362&(x363%x364)));

	if (t84 != 166) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x365 = UINT32_MAX;
	static int64_t x366 = -299001977779139211LL;
	volatile int64_t t85 = 6026002200LL;

	t85 = (x365+(x366&(x367%x368)));

	if (t85 != 4294967295LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x369 = 45047791;
	volatile int32_t x370 = INT32_MAX;
	uint8_t x371 = UINT8_MAX;
	int16_t x372 = INT16_MAX;
	static int32_t t86 = 475;

	t86 = (x369+(x370&(x371%x372)));

	if (t86 != 45048046) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x373 = 36473848LLU;
	int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MIN;
	volatile uint64_t t87 = 7556937998060945619LLU;

	t87 = (x373+(x374&(x375%x376)));

	if (t87 != 36473848LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x377 = INT16_MIN;
	volatile uint8_t x378 = 27U;
	int8_t x379 = INT8_MAX;
	static int32_t x380 = -1;

	t88 = (x377+(x378&(x379%x380)));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x381 = INT8_MIN;
	uint16_t x382 = UINT16_MAX;
	uint8_t x383 = 5U;
	volatile int32_t x384 = INT32_MAX;
	volatile int32_t t89 = 632528;

	t89 = (x381+(x382&(x383%x384)));

	if (t89 != -123) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x388 = 3780U;

	t90 = (x385+(x386&(x387%x388)));

	if (t90 != 4294967294U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = 1850;
	int32_t x390 = -1;
	volatile int64_t x391 = 235LL;
	static int16_t x392 = INT16_MIN;
	int64_t t91 = 26367LL;

	t91 = (x389+(x390&(x391%x392)));

	if (t91 != 2085LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x393 = -67127LL;
	static int64_t x394 = -121024652381577129LL;
	int16_t x395 = -16329;
	uint32_t x396 = 18484655U;
	int64_t t92 = 518844426701401LL;

	t92 = (x393+(x394&(x395%x396)));

	if (t92 != 2226656LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x397 = 21558LLU;
	volatile int8_t x398 = 1;
	uint8_t x399 = UINT8_MAX;
	volatile uint64_t t93 = 15800265302634LLU;

	t93 = (x397+(x398&(x399%x400)));

	if (t93 != 21559LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = INT32_MIN;
	int16_t x402 = 7561;
	int8_t x403 = INT8_MIN;
	volatile uint8_t x404 = 1U;
	static volatile int32_t t94 = INT32_MIN;

	t94 = (x401+(x402&(x403%x404)));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = -1;
	int8_t x406 = 17;
	uint8_t x407 = 3U;
	int64_t x408 = 166209624LL;

	t95 = (x405+(x406&(x407%x408)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x410 = -1LL;
	uint32_t x411 = 162932222U;
	uint32_t x412 = UINT32_MAX;

	t96 = (x409+(x410&(x411%x412)));

	if (t96 != 163385958LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x413 = 4985U;
	uint16_t x414 = 2U;
	volatile int8_t x415 = -1;
	volatile int64_t t97 = -903LL;

	t97 = (x413+(x414&(x415%x416)));

	if (t97 != 4987LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x418 = 41U;
	int64_t x420 = INT64_MIN;

	t98 = (x417+(x418&(x419%x420)));

	if (t98 != 1187666155LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x422 = -1;
	int16_t x423 = -1;

	t99 = (x421+(x422&(x423%x424)));

	if (t99 != -1021925624LL) { NG(); } else { ; }
	
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


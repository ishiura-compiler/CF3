#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = 300;
int8_t x21 = -1;
uint16_t x27 = 134U;
int8_t x29 = -1;
int8_t x30 = INT8_MAX;
int8_t x39 = INT8_MAX;
uint64_t t6 = 127677492LLU;
int8_t x42 = 4;
volatile int64_t x46 = 633877547614694540LL;
int16_t x49 = -1;
static uint64_t x53 = 2533LLU;
volatile uint64_t t10 = 237968858LLU;
int32_t x64 = INT32_MAX;
static int8_t x77 = -7;
uint64_t x78 = 40790869652199004LLU;
int8_t x79 = -1;
static uint32_t x86 = 2U;
volatile uint8_t x104 = 0U;
static uint16_t x105 = 10U;
volatile int64_t x106 = INT64_MAX;
int32_t t20 = 784198451;
static uint16_t x119 = UINT16_MAX;
int32_t x124 = INT32_MIN;
static volatile int8_t x128 = 18;
int8_t x144 = -1;
volatile uint32_t t27 = 159U;
volatile uint16_t x148 = 9410U;
volatile int8_t x154 = -6;
int64_t x155 = INT64_MAX;
uint16_t x157 = UINT16_MAX;
int32_t x160 = -1;
int64_t x163 = INT64_MIN;
volatile uint64_t x164 = 1927786171LLU;
int8_t x165 = 23;
static uint64_t x171 = UINT64_MAX;
static uint16_t x177 = 29U;
int32_t x184 = INT32_MIN;
static int16_t x186 = 2;
uint64_t x187 = UINT64_MAX;
volatile int32_t t37 = -106537107;
int16_t x194 = INT16_MIN;
int64_t x202 = INT64_MAX;
uint32_t t40 = 32155787U;
int16_t x209 = INT16_MIN;
int32_t x219 = -1;
uint8_t x220 = UINT8_MAX;
int32_t x232 = -1;
volatile uint64_t x248 = 62872580625617LLU;
volatile int8_t x258 = 12;
int8_t x260 = -1;
static volatile uint8_t x268 = UINT8_MAX;
uint16_t x269 = 24U;
static int32_t x271 = -1;
int32_t x280 = -1;
int16_t x283 = INT16_MAX;
int8_t x293 = -1;
int8_t x295 = 3;
int32_t x300 = INT32_MIN;
static int32_t x301 = INT32_MAX;
int8_t x307 = 1;
uint8_t x308 = 6U;
volatile int32_t x326 = 3152;
int64_t x327 = INT64_MIN;
uint32_t x332 = 2596U;
static int64_t x334 = 4459105187145LL;
static volatile int8_t x336 = -1;
static int64_t t70 = 7757323LL;
int16_t x338 = -7199;
volatile int8_t x345 = INT8_MIN;
uint32_t t73 = 2U;
volatile int8_t x349 = INT8_MIN;
uint64_t t74 = 31462967LLU;
int64_t t77 = -14761LL;
int8_t x370 = -1;
volatile uint64_t t79 = 10426510737696410LLU;
volatile int64_t t81 = -4602243118LL;
static int16_t x384 = -598;
volatile int8_t x390 = -1;
int16_t x392 = -1;
uint64_t x396 = UINT64_MAX;
uint64_t t84 = 15660264116748LLU;
int16_t x405 = INT16_MIN;
static volatile uint64_t t86 = 353745LLU;
int8_t x409 = -1;
static uint32_t x415 = 350559161U;
volatile int32_t t89 = 0;
int8_t x430 = -1;
int32_t t91 = 793;
uint32_t t92 = 10U;
int16_t x439 = 54;
int16_t x442 = INT16_MAX;
volatile uint64_t t95 = 1LLU;
volatile int16_t x449 = INT16_MIN;
int16_t x458 = 350;
volatile int64_t x459 = 1LL;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	static int16_t x2 = -1;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = 143732;

	t0 = ((x1|(x2<x3))-x4);

	if (t0 != -65408) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = -25000705142468725LL;
	int16_t x10 = INT16_MIN;
	uint8_t x11 = UINT8_MAX;
	volatile int32_t x12 = INT32_MIN;
	static volatile int64_t t1 = -268491644438222445LL;

	t1 = ((x9|(x10<x11))-x12);

	if (t1 != -25000702994985077LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x22 = 434U;
	int16_t x23 = -1;
	int16_t x24 = -1404;
	volatile int32_t t2 = -1847;

	t2 = ((x21|(x22<x23))-x24);

	if (t2 != 1403) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x25 = 178LL;
	volatile int64_t x26 = INT64_MIN;
	uint8_t x28 = 2U;
	int64_t t3 = -1051435313672LL;

	t3 = ((x25|(x26<x27))-x28);

	if (t3 != 177LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x31 = INT32_MIN;
	int64_t x32 = -1LL;
	int64_t t4 = 40611333174685313LL;

	t4 = ((x29|(x30<x31))-x32);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x33 = 0U;
	volatile int8_t x34 = -1;
	int16_t x35 = INT16_MIN;
	uint8_t x36 = UINT8_MAX;
	int32_t t5 = 3415;

	t5 = ((x33|(x34<x35))-x36);

	if (t5 != -255) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MIN;
	uint64_t x40 = 109250LLU;

	t6 = ((x37|(x38<x39))-x40);

	if (t6 != 18446744071561958719LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -1;
	static int32_t x43 = 0;
	int32_t x44 = INT32_MIN;
	volatile int32_t t7 = INT32_MAX;

	t7 = ((x41|(x42<x43))-x44);

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x45 = -27;
	int32_t x47 = INT32_MIN;
	int8_t x48 = INT8_MAX;
	int32_t t8 = -124770;

	t8 = ((x45|(x46<x47))-x48);

	if (t8 != -154) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x50 = 1;
	volatile uint8_t x51 = 9U;
	int8_t x52 = INT8_MIN;
	int32_t t9 = -819827;

	t9 = ((x49|(x50<x51))-x52);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x54 = -1;
	static int32_t x55 = -14;
	int16_t x56 = INT16_MAX;

	t10 = ((x53|(x54<x55))-x56);

	if (t10 != 18446744073709521382LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = UINT8_MAX;
	static int16_t x58 = INT16_MAX;
	int16_t x59 = INT16_MAX;
	volatile int8_t x60 = INT8_MAX;
	int32_t t11 = -164;

	t11 = ((x57|(x58<x59))-x60);

	if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = INT8_MAX;
	volatile int32_t x62 = INT32_MIN;
	int8_t x63 = 6;
	volatile int32_t t12 = 1070;

	t12 = ((x61|(x62<x63))-x64);

	if (t12 != -2147483520) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MAX;
	uint64_t x66 = UINT64_MAX;
	volatile uint16_t x67 = 1156U;
	volatile int8_t x68 = 1;
	int32_t t13 = -247;

	t13 = ((x65|(x66<x67))-x68);

	if (t13 != 126) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = -1;
	int32_t x70 = INT32_MAX;
	int8_t x71 = -1;
	uint64_t x72 = 3657LLU;
	uint64_t t14 = 9955748LLU;

	t14 = ((x69|(x70<x71))-x72);

	if (t14 != 18446744073709547958LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x73 = INT64_MAX;
	volatile uint16_t x74 = 369U;
	static volatile int64_t x75 = 193645026178LL;
	static volatile uint32_t x76 = UINT32_MAX;
	static int64_t t15 = -2LL;

	t15 = ((x73|(x74<x75))-x76);

	if (t15 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x80 = INT8_MIN;
	int32_t t16 = 1;

	t16 = ((x77|(x78<x79))-x80);

	if (t16 != 121) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -1;
	int64_t x87 = 133128594821LL;
	int8_t x88 = INT8_MIN;
	int32_t t17 = 6;

	t17 = ((x85|(x86<x87))-x88);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = 0;
	static volatile uint16_t x94 = UINT16_MAX;
	int8_t x95 = INT8_MIN;
	int16_t x96 = 183;
	int32_t t18 = 27246;

	t18 = ((x93|(x94<x95))-x96);

	if (t18 != -183) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = -955;
	uint8_t x102 = 0U;
	int32_t x103 = -15758798;
	static int32_t t19 = -111;

	t19 = ((x101|(x102<x103))-x104);

	if (t19 != -955) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x107 = INT32_MAX;
	int8_t x108 = INT8_MAX;

	t20 = ((x105|(x106<x107))-x108);

	if (t20 != -117) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x109 = 469201848854600436LL;
	int64_t x110 = -1LL;
	uint8_t x111 = UINT8_MAX;
	int16_t x112 = INT16_MAX;
	int64_t t21 = 13001143LL;

	t21 = ((x109|(x110<x111))-x112);

	if (t21 != 469201848854567670LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = INT32_MIN;
	volatile uint64_t x118 = 149935947LLU;
	int8_t x120 = -1;
	volatile int32_t t22 = 47;

	t22 = ((x117|(x118<x119))-x120);

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x121 = 0U;
	int16_t x122 = -1;
	int8_t x123 = -1;
	uint32_t t23 = 871895U;

	t23 = ((x121|(x122<x123))-x124);

	if (t23 != 2147483648U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x125 = -1;
	int64_t x126 = INT64_MIN;
	uint32_t x127 = UINT32_MAX;
	int32_t t24 = -18144;

	t24 = ((x125|(x126<x127))-x128);

	if (t24 != -19) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x133 = 8U;
	int32_t x134 = -1;
	int8_t x135 = -1;
	uint8_t x136 = UINT8_MAX;
	int32_t t25 = -17714;

	t25 = ((x133|(x134<x135))-x136);

	if (t25 != -247) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = 2974931;
	int32_t x138 = INT32_MAX;
	volatile int32_t x139 = 5881974;
	int64_t x140 = 91381935134686LL;
	static volatile int64_t t26 = 1322430073219181648LL;

	t26 = ((x137|(x138<x139))-x140);

	if (t26 != -91381932159755LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x141 = UINT32_MAX;
	static uint16_t x142 = 1008U;
	volatile int8_t x143 = 1;

	t27 = ((x141|(x142<x143))-x144);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x145 = UINT8_MAX;
	static uint8_t x146 = 2U;
	uint32_t x147 = 555840025U;
	volatile int32_t t28 = 1719;

	t28 = ((x145|(x146<x147))-x148);

	if (t28 != -9155) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = INT32_MIN;
	int64_t x150 = INT64_MIN;
	static int16_t x151 = INT16_MAX;
	int32_t x152 = INT32_MIN;
	int32_t t29 = -992880;

	t29 = ((x149|(x150<x151))-x152);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = -1;
	volatile int32_t x156 = INT32_MIN;
	static int32_t t30 = INT32_MAX;

	t30 = ((x153|(x154<x155))-x156);

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x158 = 1;
	uint64_t x159 = 1347927LLU;
	int32_t t31 = 739236324;

	t31 = ((x157|(x158<x159))-x160);

	if (t31 != 65536) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x161 = 169976887LLU;
	int32_t x162 = INT32_MIN;
	uint64_t t32 = 23LLU;

	t32 = ((x161|(x162<x163))-x164);

	if (t32 != 18446744071951742332LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x166 = INT8_MIN;
	static int16_t x167 = INT16_MAX;
	static int32_t x168 = -1;
	volatile int32_t t33 = 63630062;

	t33 = ((x165|(x166<x167))-x168);

	if (t33 != 24) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x169 = -1;
	uint64_t x170 = 147476975004864LLU;
	int8_t x172 = -40;
	int32_t t34 = 1169;

	t34 = ((x169|(x170<x171))-x172);

	if (t34 != 39) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x178 = INT64_MIN;
	uint64_t x179 = UINT64_MAX;
	int32_t x180 = INT32_MAX;
	int32_t t35 = 2829;

	t35 = ((x177|(x178<x179))-x180);

	if (t35 != -2147483618) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = INT16_MIN;
	uint32_t x182 = 3U;
	int8_t x183 = -1;
	int32_t t36 = -744861946;

	t36 = ((x181|(x182<x183))-x184);

	if (t36 != 2147450881) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = -1;
	uint16_t x188 = 26U;

	t37 = ((x185|(x186<x187))-x188);

	if (t37 != -27) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x193 = INT8_MIN;
	int16_t x195 = -1;
	int8_t x196 = INT8_MIN;
	int32_t t38 = 38;

	t38 = ((x193|(x194<x195))-x196);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x197 = INT32_MIN;
	static int64_t x198 = INT64_MIN;
	uint8_t x199 = 6U;
	int8_t x200 = INT8_MIN;
	int32_t t39 = -3978;

	t39 = ((x197|(x198<x199))-x200);

	if (t39 != -2147483519) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x201 = 127041006U;
	uint64_t x203 = 3517083LLU;
	int8_t x204 = -1;

	t40 = ((x201|(x202<x203))-x204);

	if (t40 != 127041007U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x205 = 2U;
	int32_t x206 = -289954485;
	static uint16_t x207 = 6952U;
	int8_t x208 = 31;
	uint32_t t41 = 4U;

	t41 = ((x205|(x206<x207))-x208);

	if (t41 != 4294967268U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x210 = 1653;
	static int8_t x211 = 35;
	int16_t x212 = INT16_MIN;
	volatile int32_t t42 = -1052570313;

	t42 = ((x209|(x210<x211))-x212);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = -1;
	uint32_t x214 = UINT32_MAX;
	int8_t x215 = INT8_MAX;
	int16_t x216 = INT16_MAX;
	int32_t t43 = -304;

	t43 = ((x213|(x214<x215))-x216);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x217 = UINT32_MAX;
	int32_t x218 = 0;
	uint32_t t44 = 98257U;

	t44 = ((x217|(x218<x219))-x220);

	if (t44 != 4294967040U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = INT16_MAX;
	int64_t x222 = INT64_MIN;
	volatile int16_t x223 = INT16_MAX;
	volatile int16_t x224 = 1688;
	int32_t t45 = 27903;

	t45 = ((x221|(x222<x223))-x224);

	if (t45 != 31079) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x229 = UINT32_MAX;
	uint32_t x230 = 480U;
	int32_t x231 = INT32_MIN;
	static uint32_t t46 = 4U;

	t46 = ((x229|(x230<x231))-x232);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x233 = 1;
	int16_t x234 = -1;
	int16_t x235 = INT16_MIN;
	uint64_t x236 = UINT64_MAX;
	uint64_t t47 = 1469172233LLU;

	t47 = ((x233|(x234<x235))-x236);

	if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x237 = INT64_MAX;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = 989823LLU;
	volatile uint8_t x240 = 12U;
	static int64_t t48 = 11474251374002251LL;

	t48 = ((x237|(x238<x239))-x240);

	if (t48 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x241 = -1;
	int32_t x242 = INT32_MIN;
	int16_t x243 = -1;
	volatile int32_t x244 = -1;
	static int32_t t49 = 45906294;

	t49 = ((x241|(x242<x243))-x244);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x245 = -449;
	int16_t x246 = -1;
	int16_t x247 = 3;
	static uint64_t t50 = 2314LLU;

	t50 = ((x245|(x246<x247))-x248);

	if (t50 != 18446681201128925550LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x249 = UINT16_MAX;
	uint16_t x250 = UINT16_MAX;
	static volatile uint64_t x251 = 1LLU;
	int16_t x252 = INT16_MIN;
	volatile int32_t t51 = -14519;

	t51 = ((x249|(x250<x251))-x252);

	if (t51 != 98303) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x257 = 350760036104LLU;
	volatile int8_t x259 = -9;
	static uint64_t t52 = 155425548276LLU;

	t52 = ((x257|(x258<x259))-x260);

	if (t52 != 350760036105LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x261 = 109U;
	int64_t x262 = INT64_MAX;
	static uint8_t x263 = 21U;
	uint16_t x264 = UINT16_MAX;
	static int32_t t53 = -217728;

	t53 = ((x261|(x262<x263))-x264);

	if (t53 != -65426) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x265 = -1;
	uint32_t x266 = 63687U;
	static int64_t x267 = -1LL;
	int32_t t54 = 1886314;

	t54 = ((x265|(x266<x267))-x268);

	if (t54 != -256) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x270 = 31;
	int16_t x272 = INT16_MIN;
	volatile int32_t t55 = 812;

	t55 = ((x269|(x270<x271))-x272);

	if (t55 != 32792) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x273 = INT32_MAX;
	int16_t x274 = -1;
	int8_t x275 = 6;
	volatile int32_t x276 = 116132886;
	int32_t t56 = -264651;

	t56 = ((x273|(x274<x275))-x276);

	if (t56 != 2031350761) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MAX;
	int32_t x279 = INT32_MIN;
	int64_t t57 = 429240959856LL;

	t57 = ((x277|(x278<x279))-x280);

	if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x281 = 10U;
	int32_t x282 = 1;
	int32_t x284 = -27951604;
	volatile int32_t t58 = -45;

	t58 = ((x281|(x282<x283))-x284);

	if (t58 != 27951615) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x289 = INT32_MAX;
	int16_t x290 = -2;
	int64_t x291 = INT64_MIN;
	uint8_t x292 = 15U;
	int32_t t59 = 32561;

	t59 = ((x289|(x290<x291))-x292);

	if (t59 != 2147483632) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x294 = -1;
	static int64_t x296 = -2LL;
	volatile int64_t t60 = -9031119LL;

	t60 = ((x293|(x294<x295))-x296);

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x297 = -1;
	int8_t x298 = INT8_MIN;
	int64_t x299 = INT64_MAX;
	volatile int32_t t61 = INT32_MAX;

	t61 = ((x297|(x298<x299))-x300);

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x302 = INT64_MAX;
	int8_t x303 = INT8_MIN;
	int64_t x304 = -2995484311186341034LL;
	static volatile int64_t t62 = -57LL;

	t62 = ((x301|(x302<x303))-x304);

	if (t62 != 2995484313333824681LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = -2;
	uint32_t x306 = 5U;
	int32_t t63 = 226883;

	t63 = ((x305|(x306<x307))-x308);

	if (t63 != -8) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x309 = INT32_MIN;
	int8_t x310 = -1;
	uint32_t x311 = 163U;
	static int64_t x312 = -1LL;
	int64_t t64 = -192123917501LL;

	t64 = ((x309|(x310<x311))-x312);

	if (t64 != -2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x313 = INT32_MIN;
	uint32_t x314 = 1194U;
	uint8_t x315 = UINT8_MAX;
	int64_t x316 = 332190LL;
	int64_t t65 = -31016504379LL;

	t65 = ((x313|(x314<x315))-x316);

	if (t65 != -2147815838LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x317 = INT16_MIN;
	volatile int16_t x318 = INT16_MAX;
	uint16_t x319 = 39U;
	int16_t x320 = INT16_MIN;
	int32_t t66 = 1555;

	t66 = ((x317|(x318<x319))-x320);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x321 = INT64_MIN;
	int32_t x322 = -26902415;
	int16_t x323 = -44;
	static volatile int64_t x324 = INT64_MIN;
	volatile int64_t t67 = -2500427704493236489LL;

	t67 = ((x321|(x322<x323))-x324);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = 2;
	uint8_t x328 = 34U;
	volatile int32_t t68 = -4542;

	t68 = ((x325|(x326<x327))-x328);

	if (t68 != -32) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x329 = 7;
	int32_t x330 = INT32_MIN;
	int64_t x331 = INT64_MAX;
	uint32_t t69 = 22654869U;

	t69 = ((x329|(x330<x331))-x332);

	if (t69 != 4294964707U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x333 = -1LL;
	uint8_t x335 = 0U;

	t70 = ((x333|(x334<x335))-x336);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x337 = UINT32_MAX;
	int8_t x339 = INT8_MAX;
	int32_t x340 = INT32_MAX;
	volatile uint32_t t71 = 1U;

	t71 = ((x337|(x338<x339))-x340);

	if (t71 != 2147483648U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x341 = 1U;
	int64_t x342 = INT64_MIN;
	int8_t x343 = 0;
	static volatile uint16_t x344 = 2U;
	volatile int32_t t72 = -84452;

	t72 = ((x341|(x342<x343))-x344);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x346 = INT32_MIN;
	volatile int16_t x347 = INT16_MIN;
	volatile uint32_t x348 = 22681U;

	t73 = ((x345|(x346<x347))-x348);

	if (t73 != 4294944488U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x350 = -1;
	volatile uint16_t x351 = 0U;
	uint64_t x352 = UINT64_MAX;

	t74 = ((x349|(x350<x351))-x352);

	if (t74 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x353 = -1;
	uint64_t x354 = 3707LLU;
	uint16_t x355 = 1U;
	uint64_t x356 = UINT64_MAX;
	uint64_t t75 = 446352558450LLU;

	t75 = ((x353|(x354<x355))-x356);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x357 = INT64_MAX;
	uint8_t x358 = 5U;
	static uint32_t x359 = 361U;
	uint32_t x360 = 606695354U;
	static volatile int64_t t76 = 21316083LL;

	t76 = ((x357|(x358<x359))-x360);

	if (t76 != 9223372036248080453LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x361 = -1350200;
	static uint32_t x362 = 746U;
	uint32_t x363 = 3U;
	static int64_t x364 = INT64_MIN;

	t77 = ((x361|(x362<x363))-x364);

	if (t77 != 9223372036853425608LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x365 = -309;
	uint16_t x366 = 112U;
	volatile uint8_t x367 = 0U;
	int8_t x368 = 2;
	volatile int32_t t78 = -32752970;

	t78 = ((x365|(x366<x367))-x368);

	if (t78 != -311) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x369 = UINT64_MAX;
	int16_t x371 = -6964;
	int8_t x372 = 15;

	t79 = ((x369|(x370<x371))-x372);

	if (t79 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x373 = -1;
	int32_t x374 = INT32_MIN;
	uint8_t x375 = 11U;
	int64_t x376 = -248LL;
	int64_t t80 = -31692LL;

	t80 = ((x373|(x374<x375))-x376);

	if (t80 != 247LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x377 = 474;
	int8_t x378 = -27;
	static volatile uint64_t x379 = 4448LLU;
	int64_t x380 = INT64_MAX;

	t81 = ((x377|(x378<x379))-x380);

	if (t81 != -9223372036854775333LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x381 = UINT8_MAX;
	uint8_t x382 = UINT8_MAX;
	volatile int64_t x383 = -1LL;
	int32_t t82 = -453048198;

	t82 = ((x381|(x382<x383))-x384);

	if (t82 != 853) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x389 = 39U;
	int64_t x391 = -15874LL;
	static volatile int32_t t83 = -11;

	t83 = ((x389|(x390<x391))-x392);

	if (t83 != 40) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x393 = INT64_MIN;
	uint8_t x394 = 6U;
	int32_t x395 = -1;

	t84 = ((x393|(x394<x395))-x396);

	if (t84 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x401 = 20;
	static int64_t x402 = INT64_MIN;
	int64_t x403 = INT64_MIN;
	int32_t x404 = -1;
	volatile int32_t t85 = 159;

	t85 = ((x401|(x402<x403))-x404);

	if (t85 != 21) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x406 = 81U;
	uint32_t x407 = 81U;
	uint64_t x408 = 520LLU;

	t86 = ((x405|(x406<x407))-x408);

	if (t86 != 18446744073709518328LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x410 = 14U;
	int64_t x411 = INT64_MIN;
	volatile int16_t x412 = INT16_MAX;
	int32_t t87 = -908622;

	t87 = ((x409|(x410<x411))-x412);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x413 = 9;
	int16_t x414 = -1;
	int16_t x416 = INT16_MIN;
	int32_t t88 = 402393714;

	t88 = ((x413|(x414<x415))-x416);

	if (t88 != 32777) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x417 = 13157U;
	static int8_t x418 = INT8_MAX;
	int32_t x419 = INT32_MIN;
	static int8_t x420 = -1;

	t89 = ((x417|(x418<x419))-x420);

	if (t89 != 13158) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x425 = UINT32_MAX;
	static uint16_t x426 = UINT16_MAX;
	int64_t x427 = 354110734541119301LL;
	int16_t x428 = INT16_MAX;
	static volatile uint32_t t90 = 24656874U;

	t90 = ((x425|(x426<x427))-x428);

	if (t90 != 4294934528U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x429 = INT8_MIN;
	static volatile int8_t x431 = INT8_MAX;
	int32_t x432 = -137056882;

	t91 = ((x429|(x430<x431))-x432);

	if (t91 != 137056755) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x433 = INT32_MIN;
	int8_t x434 = INT8_MIN;
	uint8_t x435 = 21U;
	uint32_t x436 = 1857124U;

	t92 = ((x433|(x434<x435))-x436);

	if (t92 != 2145626525U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x437 = 7801402675LL;
	int32_t x438 = 9;
	volatile uint64_t x440 = 249LLU;
	volatile uint64_t t93 = 94976465427LLU;

	t93 = ((x437|(x438<x439))-x440);

	if (t93 != 7801402426LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x441 = UINT32_MAX;
	int64_t x443 = -1LL;
	volatile int32_t x444 = -1;
	volatile uint32_t t94 = 406U;

	t94 = ((x441|(x442<x443))-x444);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x445 = 624405799832199355LLU;
	volatile uint16_t x446 = 22U;
	volatile uint32_t x447 = 102U;
	static uint64_t x448 = 133009262155LLU;

	t95 = ((x445|(x446<x447))-x448);

	if (t95 != 624405666822937200LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x450 = 7;
	uint8_t x451 = 4U;
	int64_t x452 = INT64_MIN;
	int64_t t96 = -243LL;

	t96 = ((x449|(x450<x451))-x452);

	if (t96 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x453 = INT16_MIN;
	int8_t x454 = -1;
	int8_t x455 = INT8_MAX;
	int16_t x456 = INT16_MIN;
	volatile int32_t t97 = 979;

	t97 = ((x453|(x454<x455))-x456);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x457 = INT32_MAX;
	int64_t x460 = -1LL;
	volatile int64_t t98 = -1058812036533LL;

	t98 = ((x457|(x458<x459))-x460);

	if (t98 != 2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x461 = 156U;
	static int32_t x462 = INT32_MIN;
	int32_t x463 = INT32_MAX;
	static int16_t x464 = INT16_MAX;
	int32_t t99 = 1;

	t99 = ((x461|(x462<x463))-x464);

	if (t99 != -32610) { NG(); } else { ; }
	
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


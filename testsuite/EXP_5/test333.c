#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 4683085452200LLU;
uint32_t x5 = UINT32_MAX;
uint32_t x8 = UINT32_MAX;
volatile int64_t x9 = -82026936LL;
uint16_t x12 = 160U;
int8_t x16 = INT8_MIN;
int16_t x17 = -1;
static uint8_t x18 = UINT8_MAX;
int32_t x21 = INT32_MIN;
int64_t x28 = INT64_MIN;
static uint32_t x29 = 1U;
volatile uint32_t x31 = 327899590U;
int32_t t8 = -8114147;
int64_t x43 = INT64_MAX;
int32_t t10 = 674698916;
uint8_t x47 = UINT8_MAX;
int32_t x56 = -5652222;
static int64_t x65 = -1LL;
int8_t x73 = -1;
uint64_t x77 = 1LLU;
int64_t x78 = 145298LL;
int16_t x94 = INT16_MAX;
int8_t x95 = -1;
int16_t x97 = -1;
int32_t x101 = -1;
int16_t x102 = INT16_MIN;
uint16_t x109 = 469U;
int16_t x110 = 3;
static int16_t x115 = INT16_MIN;
int32_t t29 = 85031374;
int16_t x133 = 2;
int32_t x141 = INT32_MIN;
int8_t x144 = INT8_MIN;
static volatile int32_t x149 = -1;
int8_t x151 = -1;
volatile int32_t t33 = 132870;
uint32_t x153 = 20728854U;
uint64_t x163 = UINT64_MAX;
uint16_t x164 = UINT16_MAX;
static int32_t t36 = -268328;
volatile int16_t x172 = -1;
int32_t x179 = INT32_MIN;
static volatile int8_t x191 = INT8_MIN;
int32_t t43 = 252159062;
int16_t x197 = -1;
int16_t x199 = INT16_MIN;
int64_t x210 = -1LL;
static uint64_t x215 = UINT64_MAX;
int32_t t49 = -862058;
int16_t x223 = INT16_MIN;
int32_t t52 = 6;
int16_t x234 = INT16_MAX;
int32_t t57 = 399;
volatile uint64_t x251 = UINT64_MAX;
volatile int8_t x252 = 27;
volatile int8_t x257 = -13;
int16_t x261 = INT16_MAX;
int32_t x263 = -11574;
volatile int8_t x267 = -21;
volatile uint64_t x270 = UINT64_MAX;
int8_t x275 = 3;
static int32_t x277 = INT32_MIN;
static int8_t x279 = INT8_MIN;
static volatile int8_t x284 = INT8_MIN;
int8_t x288 = INT8_MIN;
uint32_t x292 = 577715U;
static uint16_t x300 = 15U;
int16_t x303 = INT16_MIN;
int64_t x308 = INT64_MIN;
static int64_t x311 = -1LL;
static uint32_t x318 = 6085363U;
int8_t x324 = INT8_MIN;
static volatile int32_t t77 = -95731;
int8_t x330 = -1;
static int8_t x332 = INT8_MIN;
static int16_t x333 = INT16_MAX;
volatile uint16_t x338 = UINT16_MAX;
static int32_t t80 = 9;
static uint8_t x341 = UINT8_MAX;
volatile int32_t x344 = INT32_MAX;
int32_t x346 = 189251924;
volatile uint8_t x349 = 7U;
int8_t x355 = INT8_MIN;
uint8_t x356 = 74U;
static int8_t x357 = INT8_MIN;
int8_t x364 = -2;
int16_t x365 = INT16_MAX;
int32_t x367 = INT32_MIN;
static int32_t x377 = INT32_MIN;
uint16_t x379 = 13402U;
static int16_t x380 = -1;
uint16_t x382 = 27U;
int32_t x390 = INT32_MAX;
volatile int8_t x393 = INT8_MIN;
int16_t x399 = INT16_MAX;
static uint64_t x406 = 4451364984132661443LLU;


void f0(void) {
	volatile int8_t x2 = INT8_MIN;
	uint64_t x3 = 22284650596LLU;
	int8_t x4 = 2;
	int32_t t0 = -932690;

	t0 = (x1==((x2-x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	static volatile int16_t x7 = INT16_MIN;
	int32_t t1 = 62;

	t1 = (x5==((x6-x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = -1;
	int16_t x11 = -48;
	int32_t t2 = -5;

	t2 = (x9==((x10-x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 197582587U;
	static volatile uint64_t x14 = 1253525525LLU;
	uint64_t x15 = UINT64_MAX;
	static int32_t t3 = 1;

	t3 = (x13==((x14-x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x19 = 1U;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t4 = 39;

	t4 = (x17==((x18-x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x22 = 286;
	uint32_t x23 = UINT32_MAX;
	uint8_t x24 = 2U;
	volatile int32_t t5 = -194381;

	t5 = (x21==((x22-x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	static uint64_t x26 = UINT64_MAX;
	int32_t x27 = INT32_MAX;
	int32_t t6 = -30685;

	t6 = (x25==((x26-x27)^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 11689U;
	uint8_t x32 = 60U;
	int32_t t7 = -4869907;

	t7 = (x29==((x30-x31)^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x33 = UINT32_MAX;
	uint16_t x34 = 15404U;
	int32_t x35 = INT32_MAX;
	uint32_t x36 = 128967209U;

	t8 = (x33==((x34-x35)^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 216U;
	static int32_t x38 = INT32_MIN;
	int8_t x39 = INT8_MIN;
	volatile uint8_t x40 = 33U;
	int32_t t9 = 3565780;

	t9 = (x37==((x38-x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	volatile int32_t x42 = -1;
	int64_t x44 = INT64_MAX;

	t10 = (x41==((x42-x43)^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x45 = 9764;
	uint8_t x46 = 62U;
	uint64_t x48 = 100423534LLU;
	int32_t t11 = -23900;

	t11 = (x45==((x46-x47)^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	uint64_t x50 = 3553130122761573326LLU;
	int8_t x51 = -1;
	int16_t x52 = INT16_MIN;
	int32_t t12 = -4;

	t12 = (x49==((x50-x51)^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	uint64_t x54 = UINT64_MAX;
	uint32_t x55 = 50348U;
	volatile int32_t t13 = 0;

	t13 = (x53==((x54-x55)^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 25;
	static uint32_t x58 = 4167507U;
	int32_t x59 = INT32_MIN;
	int32_t x60 = 8;
	volatile int32_t t14 = -4;

	t14 = (x57==((x58-x59)^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x61 = 10940944838113893LLU;
	int32_t x62 = INT32_MIN;
	int8_t x63 = -1;
	int8_t x64 = 23;
	int32_t t15 = 1;

	t15 = (x61==((x62-x63)^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x66 = 16274034968LL;
	static int64_t x67 = -3520847LL;
	int8_t x68 = INT8_MIN;
	int32_t t16 = 0;

	t16 = (x65==((x66-x67)^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MIN;
	uint64_t x71 = 28427650309LLU;
	static uint32_t x72 = 9793U;
	volatile int32_t t17 = 35;

	t17 = (x69==((x70-x71)^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x74 = UINT64_MAX;
	uint64_t x75 = UINT64_MAX;
	static uint32_t x76 = UINT32_MAX;
	int32_t t18 = 31363274;

	t18 = (x73==((x74-x75)^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x79 = -1;
	static uint32_t x80 = UINT32_MAX;
	static int32_t t19 = 14663;

	t19 = (x77==((x78-x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 822040676U;
	volatile int16_t x86 = -6;
	int32_t x87 = -578;
	int32_t x88 = INT32_MIN;
	volatile int32_t t20 = 71146;

	t20 = (x85==((x86-x87)^x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	static volatile int16_t x96 = INT16_MIN;
	volatile int32_t t21 = -31;

	t21 = (x93==((x94-x95)^x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x98 = UINT64_MAX;
	int16_t x99 = -501;
	static int32_t x100 = INT32_MIN;
	static int32_t t22 = 330;

	t22 = (x97==((x98-x99)^x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x103 = INT8_MAX;
	volatile uint64_t x104 = 6935LLU;
	static int32_t t23 = 29;

	t23 = (x101==((x102-x103)^x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x111 = -3789588446001LL;
	volatile int32_t x112 = 961;
	int32_t t24 = -171999745;

	t24 = (x109==((x110-x111)^x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = 6200762;
	static int8_t x114 = INT8_MIN;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t25 = 8265;

	t25 = (x113==((x114-x115)^x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MAX;
	int64_t x118 = INT64_MAX;
	uint64_t x119 = 115553199198LLU;
	volatile int8_t x120 = INT8_MIN;
	int32_t t26 = -833048;

	t26 = (x117==((x118-x119)^x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MIN;
	int64_t x123 = 2277423350419LL;
	static uint16_t x124 = 2840U;
	volatile int32_t t27 = -122564;

	t27 = (x121==((x122-x123)^x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x125 = 49141846U;
	static uint32_t x126 = UINT32_MAX;
	static int64_t x127 = 1032159336587119LL;
	int8_t x128 = INT8_MIN;
	static int32_t t28 = -485497;

	t28 = (x125==((x126-x127)^x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = 540052932U;
	int16_t x130 = INT16_MIN;
	volatile uint64_t x131 = 68911013LLU;
	uint64_t x132 = 25LLU;

	t29 = (x129==((x130-x131)^x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x134 = INT32_MIN;
	static int16_t x135 = -1;
	uint32_t x136 = UINT32_MAX;
	int32_t t30 = 976;

	t30 = (x133==((x134-x135)^x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x142 = INT32_MIN;
	static int32_t x143 = -1;
	int32_t t31 = 480323256;

	t31 = (x141==((x142-x143)^x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x145 = INT32_MIN;
	uint64_t x146 = 2232795063653051135LLU;
	int64_t x147 = -1LL;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t32 = 62941234;

	t32 = (x145==((x146-x147)^x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x150 = INT32_MIN;
	int8_t x152 = INT8_MIN;

	t33 = (x149==((x150-x151)^x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x154 = INT16_MIN;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = 12U;
	volatile int32_t t34 = 1;

	t34 = (x153==((x154-x155)^x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x157 = UINT32_MAX;
	uint64_t x158 = 11484LLU;
	int64_t x159 = INT64_MIN;
	uint8_t x160 = 108U;
	volatile int32_t t35 = 5134;

	t35 = (x157==((x158-x159)^x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -1;
	uint16_t x162 = 0U;

	t36 = (x161==((x162-x163)^x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x165 = INT8_MAX;
	int8_t x166 = INT8_MIN;
	uint64_t x167 = 92769463250198615LLU;
	uint64_t x168 = UINT64_MAX;
	int32_t t37 = 20616;

	t37 = (x165==((x166-x167)^x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x169 = UINT32_MAX;
	volatile int8_t x170 = -1;
	int64_t x171 = INT64_MIN;
	volatile int32_t t38 = -950603;

	t38 = (x169==((x170-x171)^x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = 60;
	static int16_t x174 = INT16_MAX;
	static volatile uint16_t x175 = 801U;
	static volatile uint8_t x176 = 7U;
	static int32_t t39 = 10;

	t39 = (x173==((x174-x175)^x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x177 = 36U;
	uint64_t x178 = 20LLU;
	int8_t x180 = 45;
	volatile int32_t t40 = 1;

	t40 = (x177==((x178-x179)^x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = 223U;
	static uint8_t x182 = UINT8_MAX;
	int8_t x183 = 21;
	int8_t x184 = 18;
	int32_t t41 = -279;

	t41 = (x181==((x182-x183)^x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = INT32_MAX;
	int16_t x186 = INT16_MAX;
	uint8_t x187 = UINT8_MAX;
	volatile int64_t x188 = 2045937757382042LL;
	int32_t t42 = -49092808;

	t42 = (x185==((x186-x187)^x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 1U;
	uint8_t x190 = 83U;
	static int16_t x192 = INT16_MIN;

	t43 = (x189==((x190-x191)^x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = INT16_MIN;
	uint32_t x194 = 6808267U;
	uint32_t x195 = 672829U;
	static uint8_t x196 = 6U;
	int32_t t44 = 377;

	t44 = (x193==((x194-x195)^x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x198 = 551607978LLU;
	uint32_t x200 = 7915370U;
	int32_t t45 = 1336;

	t45 = (x197==((x198-x199)^x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = 0U;
	uint16_t x202 = UINT16_MAX;
	int16_t x203 = -1;
	static int64_t x204 = INT64_MIN;
	int32_t t46 = -8249;

	t46 = (x201==((x202-x203)^x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x205 = UINT32_MAX;
	int16_t x206 = -1;
	int16_t x207 = -7421;
	static uint64_t x208 = 681139794LLU;
	volatile int32_t t47 = -2;

	t47 = (x205==((x206-x207)^x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = INT8_MIN;
	uint64_t x211 = UINT64_MAX;
	static int64_t x212 = INT64_MIN;
	int32_t t48 = -1;

	t48 = (x209==((x210-x211)^x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = 2766LL;
	volatile int16_t x214 = -1;
	int64_t x216 = INT64_MIN;

	t49 = (x213==((x214-x215)^x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x217 = 183LLU;
	int8_t x218 = 0;
	uint64_t x219 = 904LLU;
	int8_t x220 = INT8_MIN;
	volatile int32_t t50 = -790;

	t50 = (x217==((x218-x219)^x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = UINT64_MAX;
	int32_t x222 = 3;
	static int8_t x224 = INT8_MIN;
	int32_t t51 = 2164;

	t51 = (x221==((x222-x223)^x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = -1;
	uint32_t x226 = 21997U;
	int16_t x227 = -1;
	int32_t x228 = INT32_MAX;

	t52 = (x225==((x226-x227)^x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = INT8_MAX;
	uint32_t x230 = 16049317U;
	static int8_t x231 = -1;
	int64_t x232 = -90524177944678LL;
	volatile int32_t t53 = 2982;

	t53 = (x229==((x230-x231)^x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x233 = 2509U;
	static uint8_t x235 = 2U;
	int8_t x236 = INT8_MAX;
	volatile int32_t t54 = -227274886;

	t54 = (x233==((x234-x235)^x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = -6576718057LL;
	int8_t x238 = -1;
	uint16_t x239 = 130U;
	static int32_t x240 = -1;
	volatile int32_t t55 = -29;

	t55 = (x237==((x238-x239)^x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x241 = 1LLU;
	volatile uint64_t x242 = UINT64_MAX;
	int8_t x243 = 5;
	uint32_t x244 = UINT32_MAX;
	int32_t t56 = -78268;

	t56 = (x241==((x242-x243)^x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x245 = 692151438007729LLU;
	uint32_t x246 = 781U;
	static int16_t x247 = INT16_MIN;
	static int32_t x248 = -1;

	t57 = (x245==((x246-x247)^x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = INT32_MAX;
	static int32_t x250 = -1;
	static int32_t t58 = 1790060;

	t58 = (x249==((x250-x251)^x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = 0;
	int16_t x254 = INT16_MIN;
	volatile int16_t x255 = INT16_MIN;
	volatile uint32_t x256 = UINT32_MAX;
	volatile int32_t t59 = 10;

	t59 = (x253==((x254-x255)^x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x258 = 14U;
	int32_t x259 = 4391;
	int16_t x260 = -1;
	volatile int32_t t60 = -27490737;

	t60 = (x257==((x258-x259)^x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x262 = -20956;
	int32_t x264 = -58;
	static volatile int32_t t61 = 470390;

	t61 = (x261==((x262-x263)^x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x265 = UINT64_MAX;
	int32_t x266 = INT32_MIN;
	uint16_t x268 = 1U;
	volatile int32_t t62 = 6137;

	t62 = (x265==((x266-x267)^x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = -1;
	int32_t x271 = INT32_MIN;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t63 = 1;

	t63 = (x269==((x270-x271)^x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x273 = 4171255U;
	uint64_t x274 = 7126LLU;
	static uint16_t x276 = UINT16_MAX;
	int32_t t64 = 51941;

	t64 = (x273==((x274-x275)^x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x278 = -1;
	int16_t x280 = 1;
	int32_t t65 = -3771;

	t65 = (x277==((x278-x279)^x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x281 = -316LL;
	int64_t x282 = INT64_MAX;
	uint32_t x283 = 221U;
	static volatile int32_t t66 = -23;

	t66 = (x281==((x282-x283)^x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = -1;
	uint16_t x286 = 252U;
	int16_t x287 = INT16_MIN;
	int32_t t67 = -125204092;

	t67 = (x285==((x286-x287)^x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x289 = 7975U;
	volatile int8_t x290 = INT8_MIN;
	volatile int64_t x291 = 5503215820147927LL;
	volatile int32_t t68 = -3;

	t68 = (x289==((x290-x291)^x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x293 = UINT8_MAX;
	uint8_t x294 = 48U;
	int8_t x295 = -1;
	static uint64_t x296 = 5515448849142702LLU;
	static int32_t t69 = -148194;

	t69 = (x293==((x294-x295)^x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = -134;
	int8_t x298 = INT8_MIN;
	int8_t x299 = -2;
	volatile int32_t t70 = 17025752;

	t70 = (x297==((x298-x299)^x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x301 = -4659032;
	int32_t x302 = -63393;
	uint32_t x304 = UINT32_MAX;
	int32_t t71 = 7;

	t71 = (x301==((x302-x303)^x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = 148103;
	uint16_t x306 = 1428U;
	int16_t x307 = 3781;
	volatile int32_t t72 = -53491681;

	t72 = (x305==((x306-x307)^x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = INT32_MAX;
	uint8_t x310 = 1U;
	static int8_t x312 = INT8_MIN;
	static int32_t t73 = -84650;

	t73 = (x309==((x310-x311)^x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x313 = 1303U;
	uint8_t x314 = UINT8_MAX;
	uint16_t x315 = UINT16_MAX;
	int32_t x316 = INT32_MAX;
	static int32_t t74 = -191048944;

	t74 = (x313==((x314-x315)^x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x317 = INT8_MIN;
	int16_t x319 = INT16_MAX;
	int32_t x320 = -1414274;
	int32_t t75 = -1;

	t75 = (x317==((x318-x319)^x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x321 = INT64_MIN;
	uint8_t x322 = UINT8_MAX;
	uint16_t x323 = UINT16_MAX;
	static int32_t t76 = 3703;

	t76 = (x321==((x322-x323)^x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MIN;
	int32_t x327 = INT32_MIN;
	uint64_t x328 = UINT64_MAX;

	t77 = (x325==((x326-x327)^x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x329 = INT64_MAX;
	int32_t x331 = 102400;
	static int32_t t78 = 0;

	t78 = (x329==((x330-x331)^x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x334 = INT64_MIN;
	volatile uint64_t x335 = 112LLU;
	int16_t x336 = INT16_MAX;
	int32_t t79 = -144074861;

	t79 = (x333==((x334-x335)^x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = 654;
	uint64_t x339 = UINT64_MAX;
	uint64_t x340 = UINT64_MAX;

	t80 = (x337==((x338-x339)^x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x342 = 22475U;
	static volatile int16_t x343 = -1;
	volatile int32_t t81 = -1400;

	t81 = (x341==((x342-x343)^x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = INT8_MAX;
	int64_t x347 = INT64_MAX;
	static int64_t x348 = -6523524LL;
	int32_t t82 = 113405;

	t82 = (x345==((x346-x347)^x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x350 = 11U;
	static int8_t x351 = 31;
	static uint32_t x352 = 30U;
	static int32_t t83 = 13946610;

	t83 = (x349==((x350-x351)^x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = -17;
	int16_t x354 = 189;
	int32_t t84 = 900467;

	t84 = (x353==((x354-x355)^x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x358 = INT16_MIN;
	int16_t x359 = -4;
	int8_t x360 = 52;
	int32_t t85 = -430295;

	t85 = (x357==((x358-x359)^x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MIN;
	int32_t x362 = INT32_MIN;
	int64_t x363 = -19509501103LL;
	static int32_t t86 = -49037;

	t86 = (x361==((x362-x363)^x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x366 = -1;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t87 = 148376;

	t87 = (x365==((x366-x367)^x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x369 = UINT8_MAX;
	static uint8_t x370 = 31U;
	static volatile uint16_t x371 = UINT16_MAX;
	uint32_t x372 = 15975796U;
	int32_t t88 = -2901;

	t88 = (x369==((x370-x371)^x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x373 = UINT32_MAX;
	uint32_t x374 = UINT32_MAX;
	int16_t x375 = INT16_MIN;
	static int16_t x376 = INT16_MIN;
	int32_t t89 = -2049133;

	t89 = (x373==((x374-x375)^x376));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x378 = -1;
	int32_t t90 = -13;

	t90 = (x377==((x378-x379)^x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x381 = -1LL;
	static uint16_t x383 = 1U;
	static int32_t x384 = -308;
	static int32_t t91 = -291;

	t91 = (x381==((x382-x383)^x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = INT16_MIN;
	int16_t x386 = INT16_MIN;
	int16_t x387 = -5;
	uint64_t x388 = 13769090LLU;
	static int32_t t92 = -129046;

	t92 = (x385==((x386-x387)^x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = 1;
	int64_t x391 = -1LL;
	static int16_t x392 = 1;
	volatile int32_t t93 = -208;

	t93 = (x389==((x390-x391)^x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x394 = INT64_MAX;
	uint64_t x395 = 151779614306LLU;
	int32_t x396 = INT32_MIN;
	static int32_t t94 = 0;

	t94 = (x393==((x394-x395)^x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x397 = INT32_MIN;
	int64_t x398 = 298258647LL;
	uint64_t x400 = UINT64_MAX;
	int32_t t95 = -7259;

	t95 = (x397==((x398-x399)^x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x401 = INT64_MIN;
	int16_t x402 = INT16_MIN;
	int32_t x403 = -128225;
	volatile uint64_t x404 = 475794LLU;
	int32_t t96 = 58264487;

	t96 = (x401==((x402-x403)^x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = 123244;
	volatile uint64_t x407 = 1012587240LLU;
	volatile int32_t x408 = 132981633;
	int32_t t97 = 58218;

	t97 = (x405==((x406-x407)^x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = INT16_MIN;
	uint8_t x410 = UINT8_MAX;
	int64_t x411 = 63908396476LL;
	uint64_t x412 = UINT64_MAX;
	int32_t t98 = 58;

	t98 = (x409==((x410-x411)^x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x413 = UINT64_MAX;
	int8_t x414 = -1;
	uint32_t x415 = UINT32_MAX;
	int8_t x416 = -1;
	int32_t t99 = -43492191;

	t99 = (x413==((x414-x415)^x416));

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


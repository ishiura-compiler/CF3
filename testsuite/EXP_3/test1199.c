#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x11 = INT32_MIN;
int64_t x18 = -1LL;
static int64_t x20 = INT64_MIN;
static uint16_t x23 = 2424U;
int8_t x40 = INT8_MAX;
static volatile int8_t x41 = INT8_MAX;
static int8_t x51 = INT8_MIN;
int32_t x54 = 0;
uint32_t x57 = 820U;
int32_t x58 = INT32_MAX;
uint32_t x63 = 6U;
uint16_t x70 = UINT16_MAX;
uint32_t x75 = 956070989U;
volatile int8_t x76 = 1;
volatile uint8_t x77 = UINT8_MAX;
static uint8_t x78 = UINT8_MAX;
int32_t t17 = -1752587;
int8_t x83 = -1;
uint64_t x88 = 121409LLU;
int64_t x92 = -1LL;
int8_t x96 = -11;
int64_t x100 = -7855542197LL;
static volatile uint32_t t23 = 113U;
int32_t x117 = -425763267;
int32_t t24 = 40676503;
uint32_t x122 = UINT32_MAX;
uint32_t x127 = 0U;
static int64_t x133 = -4286858205268302LL;
int64_t x139 = -1LL;
int32_t t30 = -1;
int64_t x145 = -23267451214LL;
uint32_t x147 = 9U;
volatile int32_t x149 = -196;
volatile uint32_t x150 = 60U;
static int8_t x151 = INT8_MAX;
uint32_t t32 = 8051U;
static int64_t x159 = INT64_MIN;
static uint16_t x165 = 1581U;
static volatile uint64_t x169 = 66402424080849LLU;
int16_t x173 = -1;
volatile int32_t x175 = -8282;
int32_t x178 = INT32_MAX;
uint64_t x182 = 6269374648806806632LLU;
uint32_t x189 = 590669U;
uint16_t x192 = 3647U;
uint64_t t40 = 358LLU;
uint8_t x199 = UINT8_MAX;
static volatile uint32_t t42 = 481U;
uint8_t x201 = UINT8_MAX;
volatile uint64_t t43 = 168719278974390LLU;
static volatile int32_t t44 = -725;
int64_t x210 = -1599467569416374LL;
volatile int8_t x212 = -1;
static int64_t x222 = INT64_MAX;
uint16_t x224 = 3768U;
int8_t x228 = INT8_MAX;
volatile uint16_t x238 = 2254U;
volatile int8_t x244 = -1;
int32_t x246 = INT32_MIN;
int32_t t52 = 2794;
volatile int64_t x250 = INT64_MIN;
uint16_t x251 = UINT16_MAX;
int8_t x252 = -1;
int64_t t53 = -109567LL;
static int32_t x257 = INT32_MAX;
uint16_t x263 = 1U;
volatile int32_t t56 = -14321;
static int16_t x268 = 12;
uint16_t x278 = 3U;
uint8_t x280 = 6U;
volatile int64_t x287 = -1LL;
uint16_t x292 = 70U;
int64_t t63 = -161LL;
int64_t x295 = INT64_MAX;
static volatile int64_t x297 = 27177105741441LL;
int8_t x303 = 26;
volatile int32_t x305 = -1;
int32_t x307 = INT32_MIN;
int32_t t67 = -355580;
int64_t x313 = -1918657596LL;
int8_t x315 = INT8_MAX;
uint64_t x325 = UINT64_MAX;
volatile uint64_t t71 = 8911985806507193443LLU;
static uint64_t t73 = 8278751148484323LLU;
volatile int32_t x339 = INT32_MIN;
static uint64_t x345 = 8565827132LLU;
int16_t x355 = INT16_MAX;
uint8_t x359 = 0U;
int32_t x366 = INT32_MAX;
static uint32_t t81 = 220U;
int64_t x377 = -1LL;
int32_t x379 = INT32_MIN;
static int32_t x380 = -15;
int8_t x382 = 0;
uint16_t x386 = UINT16_MAX;
uint32_t x392 = UINT32_MAX;
static int32_t t88 = -1;
uint64_t t89 = 7523627LLU;
int16_t x404 = INT16_MIN;
static uint64_t x406 = UINT64_MAX;
int64_t x407 = 127681718938048554LL;
int32_t x409 = INT32_MIN;
int64_t x411 = INT64_MIN;
int16_t x417 = INT16_MAX;
volatile int32_t x421 = 11755;
uint32_t x432 = 1276077971U;
int8_t x434 = INT8_MIN;
int8_t x435 = INT8_MAX;
static volatile int32_t t98 = 401621;
int32_t x439 = -1;


void f0(void) {
	volatile uint8_t x1 = 0U;
	static int8_t x2 = INT8_MIN;
	static int64_t x3 = 47230844951LL;
	static int64_t x4 = 1LL;
	static volatile int32_t t0 = 425206598;

	t0 = ((x1-x2)*(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	static volatile int16_t x6 = INT16_MIN;
	int8_t x7 = -22;
	static int32_t x8 = INT32_MAX;
	static volatile int32_t t1 = -291059234;

	t1 = ((x5-x6)*(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x9 = 7360U;
	int8_t x10 = INT8_MIN;
	volatile int8_t x12 = -1;
	volatile uint32_t t2 = 114910U;

	t2 = ((x9-x10)*(x11==x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint8_t x14 = 83U;
	volatile int32_t x15 = INT32_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 48818;

	t3 = ((x13-x14)*(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 1;
	int8_t x19 = INT8_MAX;
	int64_t t4 = 3LL;

	t4 = ((x17-x18)*(x19==x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 219988744U;
	uint32_t x22 = UINT32_MAX;
	volatile int16_t x24 = INT16_MAX;
	static volatile uint32_t t5 = 659U;

	t5 = ((x21-x22)*(x23==x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	int16_t x26 = -1;
	uint8_t x27 = 38U;
	int32_t x28 = INT32_MIN;
	static volatile int32_t t6 = -25961141;

	t6 = ((x25-x26)*(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 382360891U;
	uint64_t x34 = 117LLU;
	int8_t x35 = 0;
	uint16_t x36 = 1062U;
	static uint64_t t7 = 281045820437167LLU;

	t7 = ((x33-x34)*(x35==x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	int8_t x38 = INT8_MAX;
	static volatile int16_t x39 = INT16_MIN;
	int32_t t8 = 23187100;

	t8 = ((x37-x38)*(x39==x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x42 = 201119525736646281LLU;
	int64_t x43 = INT64_MIN;
	volatile int64_t x44 = -324101294260463577LL;
	static uint64_t t9 = 887977823462472LLU;

	t9 = ((x41-x42)*(x43==x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	volatile int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MAX;
	uint8_t x48 = 21U;
	static uint64_t t10 = 2755503087914248LLU;

	t10 = ((x45-x46)*(x47==x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 21U;
	int8_t x50 = 49;
	uint32_t x52 = 2940337U;
	volatile int32_t t11 = 15251;

	t11 = ((x49-x50)*(x51==x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -161;
	uint8_t x55 = UINT8_MAX;
	volatile int8_t x56 = INT8_MAX;
	int32_t t12 = 1;

	t12 = ((x53-x54)*(x55==x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x59 = 74U;
	uint64_t x60 = 3462854961418195LLU;
	uint32_t t13 = 2085893970U;

	t13 = ((x57-x58)*(x59==x60));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -662932883;
	int64_t x62 = INT64_MIN;
	volatile int32_t x64 = 2;
	static int64_t t14 = 573792597LL;

	t14 = ((x61-x62)*(x63==x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 932U;
	uint16_t x71 = UINT16_MAX;
	int64_t x72 = INT64_MAX;
	uint32_t t15 = 25U;

	t15 = ((x69-x70)*(x71==x72));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	int64_t x74 = INT64_MIN;
	volatile int64_t t16 = 19495LL;

	t16 = ((x73-x74)*(x75==x76));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MIN;

	t17 = ((x77-x78)*(x79==x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -581091549;
	int16_t x82 = INT16_MAX;
	int32_t x84 = INT32_MIN;
	volatile int32_t t18 = -223373182;

	t18 = ((x81-x82)*(x83==x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	int32_t x86 = INT32_MIN;
	uint64_t x87 = UINT64_MAX;
	volatile int64_t t19 = 2636518933831350LL;

	t19 = ((x85-x86)*(x87==x88));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -130;
	volatile uint16_t x90 = 1U;
	int8_t x91 = INT8_MIN;
	int32_t t20 = 46748409;

	t20 = ((x89-x90)*(x91==x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x93 = 651954U;
	int8_t x94 = INT8_MAX;
	static volatile uint32_t x95 = 2582007U;
	uint32_t t21 = 115U;

	t21 = ((x93-x94)*(x95==x96));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = -1LL;
	uint8_t x99 = UINT8_MAX;
	int64_t t22 = 171192143328688LL;

	t22 = ((x97-x98)*(x99==x100));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x101 = UINT32_MAX;
	int16_t x102 = -3519;
	int8_t x103 = 13;
	static uint32_t x104 = UINT32_MAX;

	t23 = ((x101-x102)*(x103==x104));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x118 = -1;
	int8_t x119 = -1;
	int64_t x120 = INT64_MAX;

	t24 = ((x117-x118)*(x119==x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = 702458010;
	int64_t x123 = -1LL;
	uint8_t x124 = UINT8_MAX;
	uint32_t t25 = 62U;

	t25 = ((x121-x122)*(x123==x124));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x125 = UINT32_MAX;
	uint16_t x126 = 0U;
	static uint32_t x128 = UINT32_MAX;
	static volatile uint32_t t26 = 219444U;

	t26 = ((x125-x126)*(x127==x128));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x129 = 0U;
	int32_t x130 = INT32_MAX;
	uint16_t x131 = 3U;
	uint64_t x132 = 186270LLU;
	static int32_t t27 = 291097111;

	t27 = ((x129-x130)*(x131==x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x134 = -960;
	static int64_t x135 = -62045314511857LL;
	int32_t x136 = INT32_MIN;
	static volatile int64_t t28 = 12568LL;

	t28 = ((x133-x134)*(x135==x136));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile uint32_t x138 = 69U;
	static int64_t x140 = INT64_MAX;
	volatile uint32_t t29 = 2378U;

	t29 = ((x137-x138)*(x139==x140));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x141 = 14U;
	int8_t x142 = -1;
	static int32_t x143 = INT32_MIN;
	volatile int64_t x144 = -30442510LL;

	t30 = ((x141-x142)*(x143==x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x146 = 13672LLU;
	static int32_t x148 = INT32_MIN;
	uint64_t t31 = 7882728845002054LLU;

	t31 = ((x145-x146)*(x147==x148));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x152 = -10;

	t32 = ((x149-x150)*(x151==x152));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = INT8_MIN;
	static uint8_t x158 = UINT8_MAX;
	static uint32_t x160 = 143124U;
	int32_t t33 = 5;

	t33 = ((x157-x158)*(x159==x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x166 = -1LL;
	int32_t x167 = -1;
	int32_t x168 = INT32_MIN;
	volatile int64_t t34 = 129814607408842LL;

	t34 = ((x165-x166)*(x167==x168));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x170 = -2;
	uint32_t x171 = 30902275U;
	volatile int16_t x172 = 46;
	static uint64_t t35 = 237475875356LLU;

	t35 = ((x169-x170)*(x171==x172));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x174 = 12791;
	uint64_t x176 = UINT64_MAX;
	int32_t t36 = -31034291;

	t36 = ((x173-x174)*(x175==x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x177 = 1U;
	int32_t x179 = INT32_MIN;
	static int8_t x180 = INT8_MIN;
	static volatile int32_t t37 = 2528;

	t37 = ((x177-x178)*(x179==x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = INT16_MIN;
	volatile int8_t x183 = INT8_MAX;
	uint8_t x184 = 54U;
	uint64_t t38 = 55LLU;

	t38 = ((x181-x182)*(x183==x184));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x185 = INT8_MIN;
	int64_t x186 = INT64_MIN;
	volatile int32_t x187 = -1;
	static int16_t x188 = 763;
	int64_t t39 = 9084781LL;

	t39 = ((x185-x186)*(x187==x188));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x190 = 10668LLU;
	static volatile int32_t x191 = INT32_MIN;

	t40 = ((x189-x190)*(x191==x192));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x193 = INT8_MIN;
	int64_t x194 = 111LL;
	int32_t x195 = 1;
	static int32_t x196 = INT32_MIN;
	volatile int64_t t41 = 15035941280LL;

	t41 = ((x193-x194)*(x195==x196));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x197 = UINT32_MAX;
	static uint8_t x198 = 12U;
	int32_t x200 = -1;

	t42 = ((x197-x198)*(x199==x200));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x202 = 20217682162281LLU;
	static int16_t x203 = -168;
	int8_t x204 = INT8_MAX;

	t43 = ((x201-x202)*(x203==x204));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MAX;
	volatile int16_t x207 = 1;
	int32_t x208 = -10852979;

	t44 = ((x205-x206)*(x207==x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = -27081335LL;
	int8_t x211 = -1;
	int64_t t45 = -1LL;

	t45 = ((x209-x210)*(x211==x212));

	if (t45 != 1599467542335039LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = -1;
	int8_t x214 = INT8_MAX;
	uint32_t x215 = 6490U;
	int64_t x216 = INT64_MIN;
	int32_t t46 = 335245;

	t46 = ((x213-x214)*(x215==x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = INT64_MIN;
	int8_t x218 = -1;
	int16_t x219 = -1;
	static int64_t x220 = INT64_MIN;
	volatile int64_t t47 = 11823061648LL;

	t47 = ((x217-x218)*(x219==x220));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x221 = 1LLU;
	uint8_t x223 = UINT8_MAX;
	uint64_t t48 = 4687811LLU;

	t48 = ((x221-x222)*(x223==x224));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x225 = 0U;
	static uint8_t x226 = UINT8_MAX;
	uint8_t x227 = 1U;
	volatile int32_t t49 = -225039;

	t49 = ((x225-x226)*(x227==x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x237 = 8536028000717LLU;
	int16_t x239 = INT16_MIN;
	static volatile uint8_t x240 = 16U;
	uint64_t t50 = 170270LLU;

	t50 = ((x237-x238)*(x239==x240));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x241 = -1;
	int64_t x242 = INT64_MIN;
	uint16_t x243 = 29U;
	volatile int64_t t51 = 606417715977LL;

	t51 = ((x241-x242)*(x243==x244));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x245 = -1;
	uint32_t x247 = UINT32_MAX;
	static uint64_t x248 = 3140815LLU;

	t52 = ((x245-x246)*(x247==x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = INT64_MIN;

	t53 = ((x249-x250)*(x251==x252));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x253 = 100769LL;
	static uint32_t x254 = 51891105U;
	volatile int8_t x255 = INT8_MAX;
	int32_t x256 = -4;
	static volatile int64_t t54 = -13LL;

	t54 = ((x253-x254)*(x255==x256));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x258 = UINT32_MAX;
	uint8_t x259 = UINT8_MAX;
	volatile int16_t x260 = INT16_MIN;
	static uint32_t t55 = 17616725U;

	t55 = ((x257-x258)*(x259==x260));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = INT16_MIN;
	static int8_t x262 = INT8_MAX;
	volatile int64_t x264 = INT64_MIN;

	t56 = ((x261-x262)*(x263==x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x265 = -1LL;
	uint64_t x266 = 2054379890LLU;
	uint64_t x267 = 5899411311648391200LLU;
	volatile uint64_t t57 = 0LLU;

	t57 = ((x265-x266)*(x267==x268));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x269 = INT32_MAX;
	static int8_t x270 = 43;
	uint8_t x271 = 31U;
	static int32_t x272 = -1;
	volatile int32_t t58 = 477525161;

	t58 = ((x269-x270)*(x271==x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x273 = -1LL;
	volatile uint64_t x274 = UINT64_MAX;
	int32_t x275 = -1;
	int16_t x276 = INT16_MAX;
	static uint64_t t59 = 2067919LLU;

	t59 = ((x273-x274)*(x275==x276));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x277 = 164;
	uint16_t x279 = 12U;
	static volatile int32_t t60 = -530;

	t60 = ((x277-x278)*(x279==x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x281 = UINT32_MAX;
	uint64_t x282 = 12521716LLU;
	int8_t x283 = -1;
	static uint8_t x284 = 85U;
	volatile uint64_t t61 = 193088742560094LLU;

	t61 = ((x281-x282)*(x283==x284));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x285 = 49U;
	volatile uint32_t x286 = UINT32_MAX;
	volatile int64_t x288 = INT64_MAX;
	volatile uint32_t t62 = 3764305U;

	t62 = ((x285-x286)*(x287==x288));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x289 = INT16_MAX;
	volatile int64_t x290 = 16LL;
	uint8_t x291 = UINT8_MAX;

	t63 = ((x289-x290)*(x291==x292));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x293 = 1;
	volatile int64_t x294 = INT64_MAX;
	int16_t x296 = INT16_MIN;
	int64_t t64 = 1508LL;

	t64 = ((x293-x294)*(x295==x296));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x298 = UINT32_MAX;
	int32_t x299 = INT32_MIN;
	volatile uint16_t x300 = UINT16_MAX;
	volatile int64_t t65 = -519477LL;

	t65 = ((x297-x298)*(x299==x300));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = -6;
	int32_t x304 = INT32_MAX;
	volatile int32_t t66 = -742668425;

	t66 = ((x301-x302)*(x303==x304));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x306 = INT16_MIN;
	uint8_t x308 = 8U;

	t67 = ((x305-x306)*(x307==x308));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x309 = INT8_MIN;
	volatile int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MAX;
	volatile uint8_t x312 = 2U;
	volatile int32_t t68 = 4;

	t68 = ((x309-x310)*(x311==x312));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x314 = UINT8_MAX;
	uint8_t x316 = 42U;
	volatile int64_t t69 = 17572096787050LL;

	t69 = ((x313-x314)*(x315==x316));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x317 = INT8_MIN;
	volatile int64_t x318 = -11413133711053062LL;
	static int16_t x319 = 9755;
	uint16_t x320 = UINT16_MAX;
	volatile int64_t t70 = -4661831548LL;

	t70 = ((x317-x318)*(x319==x320));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x326 = 15U;
	static int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MAX;

	t71 = ((x325-x326)*(x327==x328));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = -14401695;
	uint32_t x330 = 303022012U;
	int32_t x331 = INT32_MIN;
	uint64_t x332 = UINT64_MAX;
	volatile uint32_t t72 = 1559379U;

	t72 = ((x329-x330)*(x331==x332));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x333 = 8580U;
	uint64_t x334 = 1600LLU;
	static volatile uint8_t x335 = 124U;
	static int16_t x336 = INT16_MIN;

	t73 = ((x333-x334)*(x335==x336));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x337 = -1;
	volatile int64_t x338 = INT64_MIN;
	volatile int8_t x340 = -1;
	static volatile int64_t t74 = 3372889508651618LL;

	t74 = ((x337-x338)*(x339==x340));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x341 = -16005514439220LL;
	uint32_t x342 = UINT32_MAX;
	uint16_t x343 = 1519U;
	uint16_t x344 = 1014U;
	int64_t t75 = -7LL;

	t75 = ((x341-x342)*(x343==x344));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x346 = INT16_MAX;
	int32_t x347 = INT32_MIN;
	static int64_t x348 = 62815623LL;
	volatile uint64_t t76 = 9870LLU;

	t76 = ((x345-x346)*(x347==x348));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x349 = UINT8_MAX;
	int32_t x350 = -1;
	uint64_t x351 = 774LLU;
	uint32_t x352 = 1258632323U;
	volatile int32_t t77 = -2392590;

	t77 = ((x349-x350)*(x351==x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = 3690;
	uint16_t x354 = UINT16_MAX;
	int64_t x356 = 171879847LL;
	volatile int32_t t78 = -3;

	t78 = ((x353-x354)*(x355==x356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x357 = INT64_MIN;
	int8_t x358 = -1;
	uint8_t x360 = 12U;
	volatile int64_t t79 = 937132565LL;

	t79 = ((x357-x358)*(x359==x360));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x361 = -1;
	volatile uint32_t x362 = UINT32_MAX;
	int32_t x363 = INT32_MIN;
	volatile int32_t x364 = -1;
	volatile uint32_t t80 = 11790508U;

	t80 = ((x361-x362)*(x363==x364));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x365 = 207U;
	int64_t x367 = INT64_MIN;
	uint32_t x368 = 3U;

	t81 = ((x365-x366)*(x367==x368));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x369 = UINT8_MAX;
	uint16_t x370 = 2392U;
	volatile int8_t x371 = -1;
	int16_t x372 = -1;
	volatile int32_t t82 = -43;

	t82 = ((x369-x370)*(x371==x372));

	if (t82 != -2137) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x373 = INT8_MIN;
	volatile int64_t x374 = INT64_MIN;
	uint8_t x375 = UINT8_MAX;
	uint64_t x376 = 1280LLU;
	volatile int64_t t83 = 242163616636LL;

	t83 = ((x373-x374)*(x375==x376));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x378 = INT64_MIN;
	volatile int64_t t84 = -6927434LL;

	t84 = ((x377-x378)*(x379==x380));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x381 = INT16_MIN;
	static volatile int16_t x383 = INT16_MAX;
	int8_t x384 = 51;
	int32_t t85 = 974618;

	t85 = ((x381-x382)*(x383==x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = -1;
	uint16_t x387 = 7U;
	uint32_t x388 = UINT32_MAX;
	static volatile int32_t t86 = 1492;

	t86 = ((x385-x386)*(x387==x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x389 = 3;
	uint32_t x390 = 1U;
	volatile int64_t x391 = INT64_MAX;
	static volatile uint32_t t87 = 53677924U;

	t87 = ((x389-x390)*(x391==x392));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MAX;
	static uint16_t x395 = 7315U;
	static int8_t x396 = INT8_MIN;

	t88 = ((x393-x394)*(x395==x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x397 = 7452LLU;
	uint16_t x398 = UINT16_MAX;
	uint32_t x399 = 37U;
	static uint64_t x400 = 15094161LLU;

	t89 = ((x397-x398)*(x399==x400));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x401 = UINT16_MAX;
	int16_t x402 = -111;
	static int64_t x403 = -1LL;
	volatile int32_t t90 = 1891;

	t90 = ((x401-x402)*(x403==x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = 506;
	int64_t x408 = INT64_MIN;
	uint64_t t91 = 37762028390315032LLU;

	t91 = ((x405-x406)*(x407==x408));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x410 = INT16_MIN;
	uint16_t x412 = 220U;
	static volatile int32_t t92 = 1;

	t92 = ((x409-x410)*(x411==x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = 3322;
	int8_t x414 = 0;
	int64_t x415 = INT64_MIN;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t93 = 123;

	t93 = ((x413-x414)*(x415==x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x418 = 4197268419128104LLU;
	int32_t x419 = INT32_MIN;
	int32_t x420 = -227189932;
	uint64_t t94 = 26060305104LLU;

	t94 = ((x417-x418)*(x419==x420));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x422 = 46U;
	uint64_t x423 = 366179811LLU;
	uint64_t x424 = 2281150791998023244LLU;
	int32_t t95 = 8;

	t95 = ((x421-x422)*(x423==x424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x425 = 4067;
	int64_t x426 = INT64_MAX;
	int16_t x427 = 31;
	volatile uint16_t x428 = 0U;
	int64_t t96 = 5LL;

	t96 = ((x425-x426)*(x427==x428));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x429 = -1;
	uint8_t x430 = UINT8_MAX;
	int16_t x431 = INT16_MIN;
	volatile int32_t t97 = 412643671;

	t97 = ((x429-x430)*(x431==x432));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = -1;
	int16_t x436 = INT16_MIN;

	t98 = ((x433-x434)*(x435==x436));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x437 = INT16_MAX;
	uint16_t x438 = UINT16_MAX;
	int32_t x440 = INT32_MAX;
	volatile int32_t t99 = -237315072;

	t99 = ((x437-x438)*(x439==x440));

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


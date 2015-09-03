#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x3 = 7456;
int64_t x4 = -1LL;
int64_t t0 = 1209859172LL;
int64_t x8 = INT64_MAX;
int8_t x10 = -1;
int16_t x11 = -641;
int8_t x24 = -1;
volatile uint32_t t6 = 791U;
static volatile uint64_t x37 = UINT64_MAX;
uint8_t x40 = 10U;
int16_t x43 = INT16_MAX;
volatile int32_t x48 = INT32_MIN;
int8_t x50 = INT8_MAX;
uint16_t x52 = 11992U;
volatile int32_t x53 = INT32_MAX;
volatile uint64_t x54 = 3900202LLU;
int16_t x58 = -1;
int32_t x60 = INT32_MIN;
int64_t x65 = 1837544781621845902LL;
volatile int64_t x66 = INT64_MIN;
int16_t x68 = -3;
static int8_t x69 = INT8_MIN;
volatile uint32_t x71 = 3U;
int64_t x75 = 482681651239546046LL;
volatile int32_t t18 = -126;
uint8_t x82 = 1U;
volatile int32_t t19 = 1498452;
int64_t x90 = INT64_MIN;
volatile uint64_t x92 = UINT64_MAX;
static volatile int16_t x94 = INT16_MIN;
int16_t x97 = -1;
uint16_t x99 = 2U;
int32_t t23 = 904691965;
int16_t x102 = -2;
volatile int32_t t24 = -3;
int16_t x107 = INT16_MAX;
int8_t x121 = 1;
int8_t x131 = 63;
int32_t t31 = -39725685;
int16_t x140 = INT16_MIN;
static uint32_t t34 = 258366U;
int32_t x147 = -26478694;
static int32_t t35 = 9;
int8_t x156 = INT8_MIN;
uint16_t x158 = 30U;
static int64_t x160 = -1LL;
static uint64_t x164 = UINT64_MAX;
int16_t x165 = INT16_MIN;
uint8_t x169 = 40U;
int32_t x172 = INT32_MAX;
static int32_t x173 = -4212424;
int8_t x178 = 1;
int8_t x182 = INT8_MIN;
int32_t t44 = -398225229;
static int32_t t45 = -421515;
static uint32_t x190 = UINT32_MAX;
static int64_t x191 = INT64_MIN;
uint16_t x192 = 3064U;
volatile int64_t x194 = -1LL;
int64_t x202 = INT64_MAX;
static uint32_t x213 = 6U;
int8_t x217 = 7;
int16_t x220 = -1;
int32_t t53 = -185457918;
int8_t x222 = INT8_MIN;
int16_t x223 = -209;
int8_t x225 = 0;
static int64_t x228 = INT64_MIN;
int8_t x232 = INT8_MIN;
int8_t x234 = -3;
uint64_t x236 = 11246154648LLU;
static volatile uint64_t t57 = 6756360788163LLU;
int64_t x244 = -4104160657072148LL;
int64_t x259 = INT64_MIN;
uint16_t x267 = 4U;
uint8_t x279 = 54U;
static int16_t x288 = 7850;
int64_t x290 = INT64_MIN;
volatile int8_t x294 = INT8_MAX;
static uint8_t x302 = UINT8_MAX;
static int32_t x303 = INT32_MIN;
static uint64_t x304 = 130997011493LLU;
volatile int32_t t75 = -126633648;
int8_t x313 = 4;
int32_t x314 = 942659;
volatile int32_t x318 = INT32_MIN;
int16_t x319 = INT16_MIN;
uint8_t x323 = UINT8_MAX;
int32_t x326 = INT32_MIN;
uint32_t x338 = 92957784U;
int64_t x339 = INT64_MIN;
int8_t x341 = INT8_MIN;
static uint64_t t84 = 195573305296LLU;
int8_t x361 = INT8_MAX;
int64_t x364 = 6946LL;
int8_t x376 = INT8_MIN;
int8_t x380 = INT8_MAX;
volatile uint32_t t91 = 61744U;
static volatile int64_t x386 = INT64_MAX;
uint64_t t94 = 1518820178015LLU;
volatile int32_t t97 = 61;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint16_t x2 = 2833U;

	t0 = ((x1<x2)|(x3%x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int64_t x6 = INT64_MAX;
	int64_t x7 = INT64_MAX;
	int64_t t1 = 2321635LL;

	t1 = ((x5<x6)|(x7%x8));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	uint32_t x12 = 69871U;
	volatile uint32_t t2 = 4U;

	t2 = ((x9<x10)|(x11%x12));

	if (t2 != 66157U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 3U;
	int32_t x14 = INT32_MAX;
	int64_t x15 = -1LL;
	static int32_t x16 = -7;
	static int64_t t3 = -1388918848LL;

	t3 = ((x13<x14)|(x15%x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	int64_t x23 = 13841851853LL;
	volatile int64_t t4 = 116LL;

	t4 = ((x21<x22)|(x23%x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	volatile uint8_t x26 = UINT8_MAX;
	volatile int16_t x27 = -1;
	volatile int16_t x28 = INT16_MIN;
	int32_t t5 = -97;

	t5 = ((x25<x26)|(x27%x28));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 57U;
	int32_t x30 = INT32_MIN;
	volatile uint32_t x31 = 6U;
	int8_t x32 = 1;

	t6 = ((x29<x30)|(x31%x32));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 11897U;
	int64_t x34 = -1LL;
	volatile int8_t x35 = -3;
	static uint16_t x36 = 709U;
	int32_t t7 = 0;

	t7 = ((x33<x34)|(x35%x36));

	if (t7 != -3) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x38 = INT32_MIN;
	volatile uint8_t x39 = 0U;
	volatile int32_t t8 = 280976241;

	t8 = ((x37<x38)|(x39%x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 9;
	volatile int64_t x42 = INT64_MIN;
	uint64_t x44 = 164456097960209637LLU;
	uint64_t t9 = 0LLU;

	t9 = ((x41<x42)|(x43%x44));

	if (t9 != 32767LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = UINT16_MAX;
	volatile int16_t x46 = INT16_MIN;
	volatile uint32_t x47 = 0U;
	static volatile uint32_t t10 = 377007575U;

	t10 = ((x45<x46)|(x47%x48));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -6789238574749LL;
	int16_t x51 = INT16_MIN;
	int32_t t11 = 6;

	t11 = ((x49<x50)|(x51%x52));

	if (t11 != -8783) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x55 = -1;
	volatile int32_t x56 = -1;
	volatile int32_t t12 = 216552;

	t12 = ((x53<x54)|(x55%x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -1;
	int64_t x59 = -21LL;
	static int64_t t13 = 15LL;

	t13 = ((x57<x58)|(x59%x60));

	if (t13 != -21LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = -1;
	uint64_t x62 = 12949674LLU;
	volatile int64_t x63 = INT64_MAX;
	static uint16_t x64 = UINT16_MAX;
	volatile int64_t t14 = -12LL;

	t14 = ((x61<x62)|(x63%x64));

	if (t14 != 32767LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x67 = INT16_MAX;
	int32_t t15 = -11524820;

	t15 = ((x65<x66)|(x67%x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = 4915;
	uint32_t x72 = UINT32_MAX;
	volatile uint32_t t16 = 1U;

	t16 = ((x69<x70)|(x71%x72));

	if (t16 != 3U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 812135U;
	int64_t x74 = -1LL;
	volatile int16_t x76 = INT16_MAX;
	static volatile int64_t t17 = -510419113930LL;

	t17 = ((x73<x74)|(x75%x76));

	if (t17 != 1898LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = 62242156;
	uint16_t x78 = UINT16_MAX;
	int16_t x79 = INT16_MAX;
	volatile int8_t x80 = -42;

	t18 = ((x77<x78)|(x79%x80));

	if (t18 != 7) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = INT64_MIN;
	static uint16_t x83 = 7U;
	volatile int16_t x84 = -1;

	t19 = ((x81<x82)|(x83%x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x85 = 1343025813U;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = 2U;
	uint16_t x88 = 96U;
	volatile int32_t t20 = 3;

	t20 = ((x85<x86)|(x87%x88));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -36;
	static int64_t x91 = INT64_MIN;
	uint64_t t21 = 6395273583099LLU;

	t21 = ((x89<x90)|(x91%x92));

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x93 = -1;
	static int8_t x95 = -1;
	int8_t x96 = -1;
	volatile int32_t t22 = -2;

	t22 = ((x93<x94)|(x95%x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x98 = -1;
	int8_t x100 = 3;

	t23 = ((x97<x98)|(x99%x100));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x101 = 86058622838LL;
	int32_t x103 = INT32_MIN;
	uint8_t x104 = UINT8_MAX;

	t24 = ((x101<x102)|(x103%x104));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	int32_t x106 = INT32_MAX;
	static volatile int8_t x108 = 7;
	static volatile int32_t t25 = 1;

	t25 = ((x105<x106)|(x107%x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 38897LLU;
	static int16_t x110 = INT16_MIN;
	int32_t x111 = 8303054;
	static int64_t x112 = INT64_MIN;
	int64_t t26 = -155617642460LL;

	t26 = ((x109<x110)|(x111%x112));

	if (t26 != 8303055LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MIN;
	uint16_t x115 = 2U;
	uint64_t x116 = 1545LLU;
	volatile uint64_t t27 = 2236072690069041LLU;

	t27 = ((x113<x114)|(x115%x116));

	if (t27 != 2LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 21571802LLU;
	uint32_t x118 = 0U;
	int32_t x119 = -11669;
	int16_t x120 = -219;
	int32_t t28 = 7464;

	t28 = ((x117<x118)|(x119%x120));

	if (t28 != -62) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x122 = 328U;
	int32_t x123 = -823485188;
	int8_t x124 = 7;
	volatile int32_t t29 = -227278;

	t29 = ((x121<x122)|(x123%x124));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = INT16_MIN;
	static int32_t x128 = INT32_MIN;
	int32_t t30 = -225802;

	t30 = ((x125<x126)|(x127%x128));

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x129 = -71234425;
	int32_t x130 = -1;
	static uint16_t x132 = 2U;

	t31 = ((x129<x130)|(x131%x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 310U;
	uint16_t x134 = 0U;
	int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MAX;
	int32_t t32 = 1;

	t32 = ((x133<x134)|(x135%x136));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x137 = INT8_MAX;
	int16_t x138 = -414;
	int32_t x139 = INT32_MIN;
	static int32_t t33 = -225;

	t33 = ((x137<x138)|(x139%x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 10U;
	int64_t x142 = INT64_MAX;
	int8_t x143 = INT8_MIN;
	uint32_t x144 = UINT32_MAX;

	t34 = ((x141<x142)|(x143%x144));

	if (t34 != 4294967169U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x145 = UINT16_MAX;
	volatile int32_t x146 = 10788;
	int32_t x148 = -1;

	t35 = ((x145<x146)|(x147%x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 26U;
	uint64_t x150 = 849085LLU;
	uint32_t x151 = UINT32_MAX;
	int16_t x152 = INT16_MAX;
	volatile uint32_t t36 = 36U;

	t36 = ((x149<x150)|(x151%x152));

	if (t36 != 3U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MIN;
	int64_t x154 = INT64_MIN;
	int8_t x155 = -1;
	int32_t t37 = -154642;

	t37 = ((x153<x154)|(x155%x156));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = 1;
	volatile int8_t x159 = 32;
	int64_t t38 = 1006374671LL;

	t38 = ((x157<x158)|(x159%x160));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x161 = UINT64_MAX;
	int32_t x162 = -1;
	int8_t x163 = INT8_MIN;
	static volatile uint64_t t39 = 1611935LLU;

	t39 = ((x161<x162)|(x163%x164));

	if (t39 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x166 = 0U;
	uint8_t x167 = 4U;
	static volatile int64_t x168 = INT64_MIN;
	int64_t t40 = -476203LL;

	t40 = ((x165<x166)|(x167%x168));

	if (t40 != 5LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x170 = 206031U;
	int16_t x171 = INT16_MIN;
	int32_t t41 = 461;

	t41 = ((x169<x170)|(x171%x172));

	if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x174 = 3LLU;
	int16_t x175 = INT16_MIN;
	static uint16_t x176 = UINT16_MAX;
	static volatile int32_t t42 = -15797;

	t42 = ((x173<x174)|(x175%x176));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = -1721;
	int16_t x179 = 32;
	uint32_t x180 = 416U;
	static volatile uint32_t t43 = 389798674U;

	t43 = ((x177<x178)|(x179%x180));

	if (t43 != 33U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = -1;
	int32_t x183 = 4600872;
	static int16_t x184 = 1917;

	t44 = ((x181<x182)|(x183%x184));

	if (t44 != 72) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = 28U;
	uint8_t x186 = 3U;
	int32_t x187 = INT32_MIN;
	static int32_t x188 = -31;

	t45 = ((x185<x186)|(x187%x188));

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = INT64_MIN;
	static int64_t t46 = 3LL;

	t46 = ((x189<x190)|(x191%x192));

	if (t46 != -2943LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = UINT32_MAX;
	uint16_t x195 = UINT16_MAX;
	int64_t x196 = INT64_MIN;
	volatile int64_t t47 = -6278303LL;

	t47 = ((x193<x194)|(x195%x196));

	if (t47 != 65535LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = -1LL;
	int64_t x198 = 5026025686467LL;
	uint16_t x199 = UINT16_MAX;
	int64_t x200 = INT64_MIN;
	volatile int64_t t48 = -17304140119LL;

	t48 = ((x197<x198)|(x199%x200));

	if (t48 != 65535LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = 7U;
	uint16_t x203 = UINT16_MAX;
	static uint16_t x204 = 2673U;
	static int32_t t49 = -11900059;

	t49 = ((x201<x202)|(x203%x204));

	if (t49 != 1383) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x205 = -1LL;
	int16_t x206 = INT16_MIN;
	int32_t x207 = INT32_MIN;
	uint16_t x208 = 4U;
	int32_t t50 = 65522648;

	t50 = ((x205<x206)|(x207%x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x209 = 56610147118703LLU;
	int32_t x210 = -356;
	int64_t x211 = -1LL;
	int32_t x212 = 4;
	int64_t t51 = 2058202867892LL;

	t51 = ((x209<x210)|(x211%x212));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x214 = 68U;
	static int16_t x215 = INT16_MIN;
	volatile int16_t x216 = INT16_MAX;
	int32_t t52 = -185335737;

	t52 = ((x213<x214)|(x215%x216));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x218 = UINT8_MAX;
	static int8_t x219 = INT8_MAX;

	t53 = ((x217<x218)|(x219%x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = -1;
	static volatile int32_t x224 = -5691;
	int32_t t54 = 189564;

	t54 = ((x221<x222)|(x223%x224));

	if (t54 != -209) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x226 = INT32_MIN;
	int8_t x227 = -3;
	int64_t t55 = -416LL;

	t55 = ((x225<x226)|(x227%x228));

	if (t55 != -3LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x229 = 12LLU;
	volatile uint64_t x230 = UINT64_MAX;
	int32_t x231 = INT32_MAX;
	int32_t t56 = -31668;

	t56 = ((x229<x230)|(x231%x232));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = INT32_MIN;
	uint16_t x235 = 465U;

	t57 = ((x233<x234)|(x235%x236));

	if (t57 != 465LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = -1;
	static int32_t x238 = -1;
	int32_t x239 = 560717;
	int64_t x240 = -14801481837832046LL;
	static volatile int64_t t58 = -49726172481996500LL;

	t58 = ((x237<x238)|(x239%x240));

	if (t58 != 560717LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x241 = 74568929664633LLU;
	int64_t x242 = 297000LL;
	int32_t x243 = INT32_MAX;
	volatile int64_t t59 = 2725370798110LL;

	t59 = ((x241<x242)|(x243%x244));

	if (t59 != 2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	int64_t x247 = 261497176LL;
	uint64_t x248 = 50225330217172LLU;
	uint64_t t60 = 2570564510LLU;

	t60 = ((x245<x246)|(x247%x248));

	if (t60 != 261497176LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x249 = 641035695263LLU;
	static int16_t x250 = -1;
	volatile int8_t x251 = -1;
	int16_t x252 = INT16_MAX;
	int32_t t61 = 3097043;

	t61 = ((x249<x250)|(x251%x252));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	volatile int64_t x258 = 19319704LL;
	uint64_t x260 = 570LLU;
	volatile uint64_t t62 = 225LLU;

	t62 = ((x257<x258)|(x259%x260));

	if (t62 != 399LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = 190665517369920131LL;
	volatile uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MAX;
	volatile int8_t x264 = -1;
	int32_t t63 = -7652;

	t63 = ((x261<x262)|(x263%x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x265 = UINT32_MAX;
	int16_t x266 = INT16_MIN;
	uint64_t x268 = 11906277530785978LLU;
	static volatile uint64_t t64 = 156300773LLU;

	t64 = ((x265<x266)|(x267%x268));

	if (t64 != 4LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = INT32_MAX;
	int32_t x270 = -1;
	static uint8_t x271 = 1U;
	uint64_t x272 = 23552076243621866LLU;
	static uint64_t t65 = 15646168109166LLU;

	t65 = ((x269<x270)|(x271%x272));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = -16;
	int64_t x274 = 192808070426047989LL;
	uint16_t x275 = 125U;
	volatile int32_t x276 = INT32_MIN;
	int32_t t66 = 323586;

	t66 = ((x273<x274)|(x275%x276));

	if (t66 != 125) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = -1LL;
	volatile int32_t x280 = 27932;
	volatile int32_t t67 = -1304160;

	t67 = ((x277<x278)|(x279%x280));

	if (t67 != 55) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x281 = -28;
	uint32_t x282 = 2869223U;
	int8_t x283 = 8;
	uint8_t x284 = 2U;
	int32_t t68 = 1283042;

	t68 = ((x281<x282)|(x283%x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MAX;
	volatile uint64_t x286 = 25424LLU;
	uint16_t x287 = 26015U;
	volatile int32_t t69 = -6659894;

	t69 = ((x285<x286)|(x287%x288));

	if (t69 != 2465) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x289 = UINT32_MAX;
	static volatile int64_t x291 = INT64_MIN;
	volatile int64_t x292 = INT64_MIN;
	int64_t t70 = 2382751753LL;

	t70 = ((x289<x290)|(x291%x292));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = 6;
	int64_t x295 = INT64_MIN;
	static int64_t x296 = INT64_MIN;
	static int64_t t71 = 12LL;

	t71 = ((x293<x294)|(x295%x296));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MIN;
	volatile int16_t x299 = 6;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t72 = 34;

	t72 = ((x297<x298)|(x299%x300));

	if (t72 != 6) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = -1;
	volatile uint64_t t73 = 110LLU;

	t73 = ((x301<x302)|(x303%x304));

	if (t73 != 95296196333LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x305 = 12U;
	int64_t x306 = INT64_MIN;
	int32_t x307 = INT32_MIN;
	uint16_t x308 = 1U;
	static volatile int32_t t74 = 80626251;

	t74 = ((x305<x306)|(x307%x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = INT16_MAX;
	static int32_t x310 = 61288;
	int32_t x311 = INT32_MAX;
	int32_t x312 = -76;

	t75 = ((x309<x310)|(x311%x312));

	if (t75 != 59) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x315 = 12U;
	static int32_t x316 = INT32_MIN;
	int32_t t76 = -5896;

	t76 = ((x313<x314)|(x315%x316));

	if (t76 != 13) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x317 = -38;
	volatile int32_t x320 = INT32_MIN;
	int32_t t77 = 97045972;

	t77 = ((x317<x318)|(x319%x320));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = INT8_MAX;
	uint32_t x322 = 11278447U;
	int32_t x324 = -1012;
	volatile int32_t t78 = 7;

	t78 = ((x321<x322)|(x323%x324));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = INT8_MIN;
	int32_t x327 = -8;
	static int16_t x328 = INT16_MIN;
	volatile int32_t t79 = 21;

	t79 = ((x325<x326)|(x327%x328));

	if (t79 != -8) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -3578648LL;
	int8_t x334 = INT8_MAX;
	int64_t x335 = INT64_MIN;
	int16_t x336 = -1;
	int64_t t80 = -28398433965191078LL;

	t80 = ((x333<x334)|(x335%x336));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x337 = 3953U;
	int32_t x340 = 51;
	volatile int64_t t81 = 29218076LL;

	t81 = ((x337<x338)|(x339%x340));

	if (t81 != -25LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x342 = -1LL;
	int8_t x343 = INT8_MAX;
	int8_t x344 = -1;
	volatile int32_t t82 = -33039;

	t82 = ((x341<x342)|(x343%x344));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x345 = INT16_MAX;
	int64_t x346 = INT64_MIN;
	int32_t x347 = INT32_MIN;
	static volatile int64_t x348 = INT64_MIN;
	volatile int64_t t83 = -343266910820654LL;

	t83 = ((x345<x346)|(x347%x348));

	if (t83 != -2147483648LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x349 = 163601U;
	volatile uint64_t x350 = 46642132767703178LLU;
	uint64_t x351 = UINT64_MAX;
	static int64_t x352 = -13614726074085LL;

	t84 = ((x349<x350)|(x351%x352));

	if (t84 != 13614726074085LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = INT8_MIN;
	volatile int8_t x355 = 10;
	static volatile uint16_t x356 = 633U;
	int32_t t85 = 351185733;

	t85 = ((x353<x354)|(x355%x356));

	if (t85 != 10) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 24272U;
	volatile int64_t x358 = INT64_MIN;
	static uint32_t x359 = 1U;
	static uint32_t x360 = 1U;
	volatile uint32_t t86 = 151U;

	t86 = ((x357<x358)|(x359%x360));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x362 = 1844598254360LLU;
	int8_t x363 = -1;
	volatile int64_t t87 = 269475086117235089LL;

	t87 = ((x361<x362)|(x363%x364));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MAX;
	int32_t x366 = -2292;
	static volatile int64_t x367 = INT64_MIN;
	uint8_t x368 = 89U;
	int64_t t88 = 12403LL;

	t88 = ((x365<x366)|(x367%x368));

	if (t88 != -78LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = 9818U;
	static int16_t x370 = 52;
	int64_t x371 = INT64_MIN;
	uint8_t x372 = 6U;
	volatile int64_t t89 = 24LL;

	t89 = ((x369<x370)|(x371%x372));

	if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x373 = -1LL;
	int64_t x374 = INT64_MIN;
	uint64_t x375 = 2381397918327LLU;
	uint64_t t90 = 522267LLU;

	t90 = ((x373<x374)|(x375%x376));

	if (t90 != 2381397918327LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x377 = -194707LL;
	static uint8_t x378 = 58U;
	static uint32_t x379 = 1U;

	t91 = ((x377<x378)|(x379%x380));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = INT32_MAX;
	uint16_t x382 = UINT16_MAX;
	int32_t x383 = INT32_MIN;
	uint8_t x384 = UINT8_MAX;
	static volatile int32_t t92 = -6;

	t92 = ((x381<x382)|(x383%x384));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x385 = 1U;
	int32_t x387 = INT32_MIN;
	static uint8_t x388 = 29U;
	static int32_t t93 = 482;

	t93 = ((x385<x386)|(x387%x388));

	if (t93 != -7) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x389 = INT32_MAX;
	static volatile uint16_t x390 = UINT16_MAX;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = 230222190LLU;

	t94 = ((x389<x390)|(x391%x392));

	if (t94 != 116964758LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x393 = 4449414928502169LLU;
	static int64_t x394 = INT64_MAX;
	int8_t x395 = INT8_MIN;
	volatile uint64_t x396 = 971243272LLU;
	uint64_t t95 = 2LLU;

	t95 = ((x393<x394)|(x395%x396));

	if (t95 != 952334585LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x397 = 20630U;
	int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	uint32_t x400 = 151555904U;
	volatile uint32_t t96 = 25U;

	t96 = ((x397<x398)|(x399%x400));

	if (t96 != 51369216U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x401 = 239055048224555768LLU;
	int32_t x402 = 1;
	uint8_t x403 = 4U;
	int8_t x404 = 40;

	t97 = ((x401<x402)|(x403%x404));

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = INT8_MIN;
	static int16_t x406 = INT16_MAX;
	int16_t x407 = -1;
	int32_t x408 = INT32_MIN;
	int32_t t98 = 6259891;

	t98 = ((x405<x406)|(x407%x408));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = 87618619235LL;
	volatile uint32_t x410 = 0U;
	int8_t x411 = INT8_MIN;
	int64_t x412 = -1LL;
	static volatile int64_t t99 = -14462LL;

	t99 = ((x409<x410)|(x411%x412));

	if (t99 != 0LL) { NG(); } else { ; }
	
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


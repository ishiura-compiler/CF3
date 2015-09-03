#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
static int8_t x10 = INT8_MAX;
int16_t x16 = -3;
int32_t x23 = 29395;
volatile int32_t t5 = 83227240;
int32_t x27 = INT32_MAX;
static int64_t x34 = -1961LL;
uint8_t x35 = 0U;
static uint64_t x37 = 2133837708748LLU;
int64_t x44 = -1LL;
static uint16_t x47 = UINT16_MAX;
uint64_t x52 = UINT64_MAX;
volatile uint64_t t12 = 3LLU;
static int32_t x56 = 4800;
volatile int32_t x58 = INT32_MAX;
static int32_t x62 = INT32_MIN;
volatile int16_t x65 = INT16_MAX;
int64_t x66 = INT64_MIN;
volatile uint8_t x69 = UINT8_MAX;
uint8_t x72 = UINT8_MAX;
int64_t x74 = INT64_MIN;
volatile int32_t x75 = -1;
static int16_t x77 = INT16_MAX;
int32_t x79 = INT32_MIN;
volatile int8_t x84 = -28;
uint8_t x86 = 4U;
uint32_t x93 = 250443U;
int8_t x105 = -54;
int8_t x106 = -1;
volatile int16_t x107 = INT16_MIN;
int64_t x110 = -1LL;
uint32_t x111 = 712343U;
static uint8_t x112 = UINT8_MAX;
static volatile int16_t x116 = -1;
volatile uint64_t t30 = 2138401729876783LLU;
int8_t x127 = 0;
volatile uint64_t x130 = 664333778566413110LLU;
int8_t x131 = -1;
volatile int64_t t34 = -413735391120LL;
int64_t x143 = 86LL;
static int64_t x145 = 1112873528754818435LL;
static volatile uint64_t x150 = 2920751278468162091LLU;
static uint64_t t37 = 7775LLU;
uint64_t x155 = 70761664591653LLU;
int32_t x159 = 173;
uint16_t x168 = 86U;
volatile uint8_t x170 = UINT8_MAX;
int16_t x172 = -2241;
volatile int64_t t42 = 785478434435LL;
volatile int16_t x175 = -61;
volatile int64_t t43 = -1791LL;
uint32_t x179 = 7U;
uint64_t x183 = UINT64_MAX;
volatile int32_t x185 = -1;
int64_t x186 = 61LL;
int64_t t46 = 33114012LL;
int32_t x197 = INT32_MAX;
int8_t x198 = 20;
int64_t x202 = 13198535592LL;
volatile uint64_t t50 = 245700808940LLU;
volatile int32_t x210 = INT32_MAX;
volatile int32_t x211 = 2864439;
int32_t x212 = INT32_MIN;
volatile int32_t t53 = 11;
volatile int64_t x219 = INT64_MIN;
uint16_t x221 = 23304U;
static uint16_t x222 = UINT16_MAX;
uint16_t x224 = 2U;
static int64_t t57 = -414625LL;
int16_t x234 = -1;
uint64_t x237 = UINT64_MAX;
int16_t x250 = INT16_MIN;
uint64_t x262 = 968LLU;
int32_t x264 = -6708;
volatile uint64_t t66 = 0LLU;
volatile uint64_t t67 = 280685518277950LLU;
int8_t x280 = INT8_MIN;
uint64_t x282 = 7862514678421LLU;
uint64_t t69 = 90395789358LLU;
int8_t x291 = 1;
int8_t x292 = INT8_MAX;
volatile int32_t t71 = 33849025;
volatile uint16_t x294 = 336U;
int16_t x298 = 250;
uint64_t x299 = 2052524044855LLU;
volatile uint64_t t73 = 14752LLU;
static int8_t x301 = 30;
int32_t x306 = -39107221;
static int64_t x318 = INT64_MAX;
int32_t x320 = INT32_MAX;
int8_t x323 = INT8_MIN;
volatile uint8_t x329 = UINT8_MAX;
uint16_t x332 = 3668U;
int32_t x338 = -1;
uint64_t t81 = 7075064LLU;
volatile int8_t x346 = 3;
int8_t x348 = INT8_MAX;
volatile int32_t t83 = -97;
static volatile uint32_t t87 = 5687289U;
static uint16_t x371 = UINT16_MAX;
int8_t x372 = 1;
volatile int8_t x395 = INT8_MAX;
uint64_t x408 = UINT64_MAX;
int32_t x410 = -166432;
volatile int32_t x413 = INT32_MIN;
int32_t x416 = INT32_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile int64_t x2 = -1LL;
	volatile int8_t x3 = INT8_MIN;
	uint8_t x4 = UINT8_MAX;
	int64_t t0 = -35566520749038LL;

	t0 = ((x1&x2)&(x3%x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x6 = UINT32_MAX;
	static volatile int32_t x7 = INT32_MIN;
	int32_t x8 = -1;
	volatile int64_t t1 = -68054577LL;

	t1 = ((x5&x6)&(x7%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int32_t x11 = INT32_MAX;
	int32_t x12 = 1862;
	volatile int32_t t2 = 4;

	t2 = ((x9&x10)&(x11%x12));

	if (t2 != 15) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 56474384U;
	static int16_t x14 = -10735;
	static int64_t x15 = 31785529958LL;
	volatile int64_t t3 = -33682LL;

	t3 = ((x13&x14)&(x15%x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	static uint16_t x18 = 8461U;
	int8_t x19 = INT8_MIN;
	uint32_t x20 = UINT32_MAX;
	int64_t t4 = -480LL;

	t4 = ((x17&x18)&(x19%x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 15U;
	int16_t x22 = -2469;
	int8_t x24 = INT8_MIN;

	t5 = ((x21&x22)&(x23%x24));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int8_t x26 = -1;
	int64_t x28 = INT64_MAX;
	static volatile int64_t t6 = 2046405101271598LL;

	t6 = ((x25&x26)&(x27%x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -49;
	int16_t x30 = INT16_MAX;
	static int64_t x31 = -523982179842LL;
	uint8_t x32 = UINT8_MAX;
	static volatile int64_t t7 = -23206251711464970LL;

	t7 = ((x29&x30)&(x31%x32));

	if (t7 != 32513LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	uint16_t x36 = 2549U;
	static volatile int64_t t8 = 7947LL;

	t8 = ((x33&x34)&(x35%x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -38710;
	static volatile int8_t x39 = INT8_MIN;
	int64_t x40 = -1LL;
	uint64_t t9 = 18826304LLU;

	t9 = ((x37&x38)&(x39%x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 433145324952976LLU;
	int32_t x42 = INT32_MIN;
	static int8_t x43 = -1;
	volatile uint64_t t10 = 118731287282523LLU;

	t10 = ((x41&x42)&(x43%x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int8_t x46 = -1;
	int32_t x48 = -36473;
	volatile int32_t t11 = -3818006;

	t11 = ((x45&x46)&(x47%x48));

	if (t11 != 29062) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MAX;

	t12 = ((x49&x50)&(x51%x52));

	if (t12 != 32767LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 12;
	volatile int64_t x54 = INT64_MAX;
	uint8_t x55 = 39U;
	int64_t t13 = -5757264LL;

	t13 = ((x53&x54)&(x55%x56));

	if (t13 != 4LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	int32_t x59 = INT32_MAX;
	volatile int8_t x60 = -1;
	static volatile int32_t t14 = -329483;

	t14 = ((x57&x58)&(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 861418098U;
	uint32_t x63 = 102317522U;
	int64_t x64 = INT64_MAX;
	int64_t t15 = 7204817759143LL;

	t15 = ((x61&x62)&(x63%x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x67 = UINT32_MAX;
	int16_t x68 = -1;
	int64_t t16 = 8215514816874298LL;

	t16 = ((x65&x66)&(x67%x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = -1;
	static int8_t x71 = INT8_MAX;
	volatile int32_t t17 = -1995444;

	t17 = ((x69&x70)&(x71%x72));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 1U;
	int8_t x76 = INT8_MAX;
	volatile int64_t t18 = 52567381LL;

	t18 = ((x73&x74)&(x75%x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = 3442;
	uint16_t x80 = 1U;
	volatile int32_t t19 = 192801;

	t19 = ((x77&x78)&(x79%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	uint8_t x82 = 31U;
	volatile int32_t x83 = INT32_MIN;
	volatile int32_t t20 = -478768760;

	t20 = ((x81&x82)&(x83%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = UINT16_MAX;
	static uint16_t x87 = 13U;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -94386;

	t21 = ((x85&x86)&(x87%x88));

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int8_t x90 = 29;
	int32_t x91 = INT32_MIN;
	int64_t x92 = 48332228LL;
	int64_t t22 = -1022882814LL;

	t22 = ((x89&x90)&(x91%x92));

	if (t22 != 16LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = 17U;
	volatile int64_t x95 = 207648781097627LL;
	uint8_t x96 = 31U;
	static int64_t t23 = -10237261328880LL;

	t23 = ((x93&x94)&(x95%x96));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = 3639308LLU;
	int8_t x98 = INT8_MAX;
	int64_t x99 = INT64_MIN;
	int16_t x100 = 9;
	uint64_t t24 = 3029685121754LLU;

	t24 = ((x97&x98)&(x99%x100));

	if (t24 != 8LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MIN;
	int64_t x102 = -1LL;
	uint32_t x103 = UINT32_MAX;
	volatile uint32_t x104 = 3584676U;
	static int64_t t25 = 19754336767960LL;

	t25 = ((x101&x102)&(x103%x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x108 = -1;
	static int32_t t26 = -6822765;

	t26 = ((x105&x106)&(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 6;
	int64_t t27 = 34628632933644LL;

	t27 = ((x109&x110)&(x111%x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x113 = -3226;
	uint64_t x114 = UINT64_MAX;
	int64_t x115 = -246489741547LL;
	volatile uint64_t t28 = 86736343414743258LLU;

	t28 = ((x113&x114)&(x115%x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 374U;
	uint8_t x118 = UINT8_MAX;
	uint8_t x119 = 22U;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t29 = 15LLU;

	t29 = ((x117&x118)&(x119%x120));

	if (t29 != 22LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	volatile uint64_t x122 = UINT64_MAX;
	static int64_t x123 = -1LL;
	uint16_t x124 = 19516U;

	t30 = ((x121&x122)&(x123%x124));

	if (t30 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = 36;
	volatile uint8_t x126 = 1U;
	uint8_t x128 = 6U;
	volatile int32_t t31 = -18912610;

	t31 = ((x125&x126)&(x127%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	volatile int32_t x132 = INT32_MIN;
	volatile uint64_t t32 = 507814732370582978LLU;

	t32 = ((x129&x130)&(x131%x132));

	if (t32 != 54LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 3473U;
	static uint32_t x134 = UINT32_MAX;
	uint16_t x135 = 3581U;
	uint16_t x136 = UINT16_MAX;
	uint32_t t33 = 992736752U;

	t33 = ((x133&x134)&(x135%x136));

	if (t33 != 3473U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x137 = 0U;
	static int8_t x138 = INT8_MIN;
	volatile uint8_t x139 = 9U;
	static int64_t x140 = 12571967025802LL;

	t34 = ((x137&x138)&(x139%x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	uint16_t x142 = 1950U;
	int8_t x144 = INT8_MIN;
	int64_t t35 = -1860945431LL;

	t35 = ((x141&x142)&(x143%x144));

	if (t35 != 22LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x146 = INT16_MAX;
	volatile int16_t x147 = INT16_MIN;
	volatile uint8_t x148 = 61U;
	int64_t t36 = 11074130219LL;

	t36 = ((x145&x146)&(x147%x148));

	if (t36 != 19841LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	int64_t x151 = INT64_MAX;
	static int16_t x152 = INT16_MIN;

	t37 = ((x149&x150)&(x151%x152));

	if (t37 != 25131LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = 516794291;
	volatile uint64_t x154 = 749033LLU;
	uint16_t x156 = UINT16_MAX;
	volatile uint64_t t38 = 39650063LLU;

	t38 = ((x153&x154)&(x155%x156));

	if (t38 != 8480LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = -50;
	uint8_t x158 = 0U;
	int8_t x160 = -1;
	static int32_t t39 = 382;

	t39 = ((x157&x158)&(x159%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int16_t x162 = -765;
	int8_t x163 = -1;
	int32_t x164 = 1;
	volatile int32_t t40 = -4345746;

	t40 = ((x161&x162)&(x163%x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = 311605LLU;
	volatile int16_t x166 = INT16_MIN;
	uint64_t x167 = UINT64_MAX;
	uint64_t t41 = 11206955LLU;

	t41 = ((x165&x166)&(x167%x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	int64_t x171 = -1LL;

	t42 = ((x169&x170)&(x171%x172));

	if (t42 != 255LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 35U;
	int64_t x174 = INT64_MAX;
	int8_t x176 = INT8_MIN;

	t43 = ((x173&x174)&(x175%x176));

	if (t43 != 3LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 77U;
	volatile int16_t x178 = 126;
	int8_t x180 = INT8_MIN;
	volatile uint32_t t44 = 292190U;

	t44 = ((x177&x178)&(x179%x180));

	if (t44 != 4U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 127236443U;
	uint16_t x182 = UINT16_MAX;
	volatile int8_t x184 = -1;
	uint64_t t45 = 26661038LLU;

	t45 = ((x181&x182)&(x183%x184));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x187 = INT64_MAX;
	volatile int8_t x188 = INT8_MIN;

	t46 = ((x185&x186)&(x187%x188));

	if (t46 != 61LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MAX;
	static int64_t x190 = INT64_MIN;
	static int8_t x191 = 1;
	static int8_t x192 = -44;
	volatile int64_t t47 = -32552020243018LL;

	t47 = ((x189&x190)&(x191%x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 2;
	int8_t x194 = 5;
	static uint16_t x195 = 1U;
	int64_t x196 = INT64_MAX;
	volatile int64_t t48 = 123738775650443LL;

	t48 = ((x193&x194)&(x195%x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x199 = INT8_MIN;
	volatile int32_t x200 = INT32_MAX;
	volatile int32_t t49 = 21600;

	t49 = ((x197&x198)&(x199%x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MIN;
	uint64_t x203 = 4205191521LLU;
	int8_t x204 = INT8_MIN;

	t50 = ((x201&x202)&(x203%x204));

	if (t50 != 312484096LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 0U;
	volatile int8_t x206 = -1;
	volatile uint64_t x207 = UINT64_MAX;
	int64_t x208 = INT64_MAX;
	volatile uint64_t t51 = 102912594682LLU;

	t51 = ((x205&x206)&(x207%x208));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int32_t t52 = -181735;

	t52 = ((x209&x210)&(x211%x212));

	if (t52 != 2850816) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = -1;
	static int8_t x214 = INT8_MIN;
	volatile int8_t x215 = 14;
	volatile int16_t x216 = -1;

	t53 = ((x213&x214)&(x215%x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -929478LL;
	int16_t x218 = INT16_MIN;
	static volatile int64_t x220 = INT64_MIN;
	static volatile int64_t t54 = -76784LL;

	t54 = ((x217&x218)&(x219%x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x223 = 109U;
	volatile int32_t t55 = 973;

	t55 = ((x221&x222)&(x223%x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -436465573;
	volatile int8_t x226 = 3;
	int32_t x227 = INT32_MIN;
	int8_t x228 = -1;
	static int32_t t56 = -688;

	t56 = ((x225&x226)&(x227%x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 3;
	int64_t x230 = -1LL;
	int64_t x231 = 15LL;
	volatile int32_t x232 = 25;

	t57 = ((x229&x230)&(x231%x232));

	if (t57 != 3LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int32_t x235 = INT32_MAX;
	static volatile uint8_t x236 = UINT8_MAX;
	static volatile int32_t t58 = 11;

	t58 = ((x233&x234)&(x235%x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x238 = 3755281;
	int8_t x239 = INT8_MIN;
	uint16_t x240 = 11U;
	uint64_t t59 = 2392741204LLU;

	t59 = ((x237&x238)&(x239%x240));

	if (t59 != 3755281LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = 5265U;
	uint8_t x242 = UINT8_MAX;
	static uint16_t x243 = UINT16_MAX;
	static int16_t x244 = INT16_MIN;
	int32_t t60 = 1134013;

	t60 = ((x241&x242)&(x243%x244));

	if (t60 != 145) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 13U;
	uint16_t x246 = UINT16_MAX;
	uint16_t x247 = 5797U;
	int64_t x248 = -1LL;
	int64_t t61 = -37982363LL;

	t61 = ((x245&x246)&(x247%x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -10;
	int32_t x251 = -1;
	volatile int64_t x252 = 1582895LL;
	volatile int64_t t62 = -1LL;

	t62 = ((x249&x250)&(x251%x252));

	if (t62 != -32768LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x253 = -170;
	uint8_t x254 = 1U;
	volatile int8_t x255 = -9;
	int32_t x256 = 94139693;
	int32_t t63 = 1958;

	t63 = ((x253&x254)&(x255%x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x257 = UINT8_MAX;
	int16_t x258 = INT16_MIN;
	int64_t x259 = INT64_MIN;
	int32_t x260 = -1;
	int64_t t64 = -1LL;

	t64 = ((x257&x258)&(x259%x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 2632LLU;
	int64_t x263 = -34115950762011LL;
	uint64_t t65 = 59439821939075LLU;

	t65 = ((x261&x262)&(x263%x264));

	if (t65 != 64LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	int64_t x266 = 111158888LL;
	uint32_t x267 = 5U;
	uint32_t x268 = 2055685U;

	t66 = ((x265&x266)&(x267%x268));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x273 = UINT16_MAX;
	uint64_t x274 = 23241831911513LLU;
	int32_t x275 = -1;
	volatile int8_t x276 = -1;

	t67 = ((x273&x274)&(x275%x276));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x277 = -1;
	static int16_t x278 = -1;
	int32_t x279 = -423953863;
	int32_t t68 = -2;

	t68 = ((x277&x278)&(x279%x280));

	if (t68 != -71) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = -1;
	static volatile uint64_t x283 = UINT64_MAX;
	int32_t x284 = -1;

	t69 = ((x281&x282)&(x283%x284));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = -1;
	static uint64_t x286 = 713LLU;
	volatile int8_t x287 = -1;
	volatile uint16_t x288 = UINT16_MAX;
	volatile uint64_t t70 = 7166466683917LLU;

	t70 = ((x285&x286)&(x287%x288));

	if (t70 != 713LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = 1643;
	static int8_t x290 = INT8_MIN;

	t71 = ((x289&x290)&(x291%x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x293 = UINT32_MAX;
	int32_t x295 = -1;
	static int8_t x296 = INT8_MIN;
	volatile uint32_t t72 = 967798234U;

	t72 = ((x293&x294)&(x295%x296));

	if (t72 != 336U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x297 = UINT8_MAX;
	volatile int8_t x300 = INT8_MIN;

	t73 = ((x297&x298)&(x299%x300));

	if (t73 != 50LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x302 = -1;
	uint64_t x303 = 152368805LLU;
	uint32_t x304 = 54U;
	uint64_t t74 = 10646396755LLU;

	t74 = ((x301&x302)&(x303%x304));

	if (t74 != 28LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x305 = 4U;
	static uint32_t x307 = 643U;
	int8_t x308 = INT8_MAX;
	volatile uint32_t t75 = 30419U;

	t75 = ((x305&x306)&(x307%x308));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = -1;
	int32_t x310 = INT32_MAX;
	int32_t x311 = INT32_MIN;
	volatile int64_t x312 = INT64_MIN;
	static int64_t t76 = -37LL;

	t76 = ((x309&x310)&(x311%x312));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x317 = INT8_MIN;
	uint16_t x319 = UINT16_MAX;
	volatile int64_t t77 = -6646791840LL;

	t77 = ((x317&x318)&(x319%x320));

	if (t77 != 65408LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x321 = UINT16_MAX;
	static volatile int8_t x322 = -1;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t78 = -522031561;

	t78 = ((x321&x322)&(x323%x324));

	if (t78 != 65408) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x330 = UINT16_MAX;
	int16_t x331 = INT16_MAX;
	int32_t t79 = -41;

	t79 = ((x329&x330)&(x331%x332));

	if (t79 != 95) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MAX;
	int16_t x339 = -1;
	int32_t x340 = -1;
	static volatile int32_t t80 = 0;

	t80 = ((x337&x338)&(x339%x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MAX;
	uint64_t x342 = 3LLU;
	static int64_t x343 = INT64_MIN;
	uint16_t x344 = UINT16_MAX;

	t81 = ((x341&x342)&(x343%x344));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = UINT16_MAX;
	static int16_t x347 = 9;
	volatile int32_t t82 = -85;

	t82 = ((x345&x346)&(x347%x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = -1;
	int16_t x350 = -7199;
	int32_t x351 = INT32_MIN;
	uint8_t x352 = UINT8_MAX;

	t83 = ((x349&x350)&(x351%x352));

	if (t83 != -7296) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = INT64_MIN;
	static uint16_t x354 = UINT16_MAX;
	volatile int32_t x355 = 12640238;
	volatile int32_t x356 = -1;
	int64_t t84 = -12946433LL;

	t84 = ((x353&x354)&(x355%x356));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x357 = INT8_MAX;
	volatile int16_t x358 = INT16_MIN;
	static volatile int64_t x359 = 2LL;
	static int8_t x360 = -3;
	volatile int64_t t85 = -32497LL;

	t85 = ((x357&x358)&(x359%x360));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x361 = INT8_MAX;
	int64_t x362 = -1LL;
	volatile int64_t x363 = INT64_MIN;
	int32_t x364 = -1;
	int64_t t86 = -102406LL;

	t86 = ((x361&x362)&(x363%x364));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x365 = -9;
	int16_t x366 = INT16_MAX;
	int32_t x367 = INT32_MAX;
	static uint32_t x368 = UINT32_MAX;

	t87 = ((x365&x366)&(x367%x368));

	if (t87 != 32759U) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x369 = INT64_MIN;
	int16_t x370 = INT16_MIN;
	int64_t t88 = 72LL;

	t88 = ((x369&x370)&(x371%x372));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x373 = 975345608320LL;
	uint32_t x374 = 15U;
	int8_t x375 = -1;
	volatile int8_t x376 = INT8_MIN;
	volatile int64_t t89 = 124256295LL;

	t89 = ((x373&x374)&(x375%x376));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x377 = 0;
	int64_t x378 = -32998019692213LL;
	int16_t x379 = -1;
	static volatile int32_t x380 = INT32_MIN;
	volatile int64_t t90 = 1818508001735LL;

	t90 = ((x377&x378)&(x379%x380));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x381 = INT16_MIN;
	int64_t x382 = 645263122590LL;
	uint8_t x383 = 61U;
	static int16_t x384 = INT16_MIN;
	volatile int64_t t91 = 47327LL;

	t91 = ((x381&x382)&(x383%x384));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = -212;
	int16_t x386 = -97;
	int8_t x387 = -1;
	int16_t x388 = INT16_MIN;
	int32_t t92 = -232625470;

	t92 = ((x385&x386)&(x387%x388));

	if (t92 != -244) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x389 = INT8_MAX;
	int64_t x390 = -2415272074059710355LL;
	int32_t x391 = -1;
	int8_t x392 = INT8_MIN;
	volatile int64_t t93 = 5340LL;

	t93 = ((x389&x390)&(x391%x392));

	if (t93 != 109LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = INT8_MAX;
	static int8_t x394 = -1;
	static uint8_t x396 = UINT8_MAX;
	int32_t t94 = 39;

	t94 = ((x393&x394)&(x395%x396));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x397 = INT8_MIN;
	uint8_t x398 = UINT8_MAX;
	int64_t x399 = -1LL;
	volatile int64_t x400 = 222LL;
	int64_t t95 = 803348190945LL;

	t95 = ((x397&x398)&(x399%x400));

	if (t95 != 128LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x401 = INT64_MIN;
	volatile int32_t x402 = 23;
	static int32_t x403 = INT32_MAX;
	int64_t x404 = INT64_MIN;
	int64_t t96 = 54762LL;

	t96 = ((x401&x402)&(x403%x404));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x405 = 75LLU;
	int64_t x406 = INT64_MAX;
	uint32_t x407 = UINT32_MAX;
	uint64_t t97 = 4LLU;

	t97 = ((x405&x406)&(x407%x408));

	if (t97 != 75LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x409 = INT8_MIN;
	static int32_t x411 = INT32_MAX;
	uint32_t x412 = 83056754U;
	uint32_t t98 = 17765583U;

	t98 = ((x409&x410)&(x411%x412));

	if (t98 != 71062656U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x414 = 457875647U;
	uint64_t x415 = UINT64_MAX;
	uint64_t t99 = 8LLU;

	t99 = ((x413&x414)&(x415%x416));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


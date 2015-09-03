#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = 0;
volatile uint32_t t0 = 356885846U;
static int32_t x8 = -12864;
uint64_t t1 = 123271900491LLU;
uint16_t x11 = UINT16_MAX;
int8_t x32 = INT8_MIN;
int64_t x35 = INT64_MIN;
int16_t x43 = INT16_MIN;
int16_t x44 = 6918;
volatile int32_t t9 = 228479;
int32_t t12 = -48126;
volatile uint64_t x66 = 2997665LLU;
uint64_t x74 = 5668LLU;
int8_t x77 = INT8_MAX;
volatile int16_t x85 = -1;
uint64_t x86 = 114583637LLU;
static uint8_t x93 = UINT8_MAX;
int16_t x105 = -1;
uint16_t x107 = UINT16_MAX;
int16_t x108 = INT16_MIN;
uint64_t x116 = 49581972130581LLU;
int32_t t23 = 286526700;
volatile int64_t x141 = INT64_MAX;
uint16_t x143 = UINT16_MAX;
uint32_t x144 = UINT32_MAX;
static volatile uint16_t x146 = 4009U;
volatile int32_t t29 = 518677570;
static int32_t x157 = -6;
volatile uint32_t x164 = 353277U;
static int32_t t31 = -8682954;
volatile int8_t x169 = INT8_MIN;
int8_t x171 = -1;
static volatile int16_t x176 = INT16_MAX;
int64_t x177 = -1LL;
volatile uint16_t x179 = UINT16_MAX;
int32_t x180 = INT32_MAX;
int64_t t35 = 2386589431LL;
volatile int32_t t36 = -3;
volatile uint64_t x189 = 1514911LLU;
static volatile int16_t x192 = INT16_MIN;
uint8_t x193 = 30U;
static int8_t x194 = INT8_MAX;
uint32_t x228 = 11U;
static volatile int32_t t46 = 131909;
uint16_t x229 = UINT16_MAX;
int64_t x239 = -1286603545408LL;
int32_t t49 = 237;
int16_t x245 = INT16_MAX;
volatile uint64_t t50 = 82925743861529LLU;
uint32_t x251 = 4097064U;
uint16_t x255 = UINT16_MAX;
volatile int8_t x257 = INT8_MIN;
int8_t x259 = INT8_MIN;
volatile uint64_t t53 = 947287371109049LLU;
volatile int16_t x265 = -1;
uint16_t x266 = 28U;
volatile int64_t x286 = INT64_MAX;
static volatile int16_t x287 = -3;
volatile int32_t t61 = -5045;
volatile int64_t x303 = INT64_MIN;
uint16_t x306 = 69U;
int16_t x307 = INT16_MIN;
static volatile int64_t x310 = 13LL;
uint16_t x333 = 1931U;
int32_t t71 = -2036;
int8_t x363 = 1;
int16_t x380 = INT16_MIN;
int32_t x386 = -1;
uint32_t t77 = 454U;
uint64_t x391 = 21636135553LLU;
volatile int64_t x399 = INT64_MAX;
uint64_t x401 = 255240445197LLU;
uint8_t x403 = UINT8_MAX;
int64_t x405 = INT64_MAX;
int64_t x406 = -1502389776785561187LL;
static int32_t x409 = 22;
uint32_t x412 = 11363U;
int64_t x420 = INT64_MAX;
static int32_t t84 = 7279579;
uint64_t x423 = UINT64_MAX;
uint16_t x424 = 2U;
int32_t t85 = 26639429;
int8_t x425 = 8;
static volatile uint32_t t88 = 33168639U;
uint32_t x438 = 315638358U;
int8_t x439 = -1;
volatile int32_t t91 = 114945;
volatile uint64_t t92 = 30LLU;
int8_t x456 = 1;
volatile int32_t t93 = -356010861;
uint32_t x467 = UINT32_MAX;
int8_t x468 = INT8_MIN;
int16_t x470 = INT16_MIN;
static uint64_t t96 = 309134995LLU;
int8_t x473 = INT8_MIN;
int64_t x474 = 35111777537LL;
volatile int8_t x485 = -60;
int16_t x486 = -1;
int32_t t99 = 32058736;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint32_t x2 = UINT32_MAX;
	static int64_t x4 = INT64_MIN;

	t0 = ((x1+x2)*(x3<=x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	uint64_t x6 = UINT64_MAX;
	volatile uint32_t x7 = UINT32_MAX;

	t1 = ((x5+x6)*(x7<=x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 15;
	static int16_t x10 = 3941;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 16365;

	t2 = ((x9+x10)*(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x17 = 7U;
	static uint32_t x18 = 4U;
	int32_t x19 = INT32_MAX;
	int64_t x20 = INT64_MAX;
	uint32_t t3 = 390U;

	t3 = ((x17+x18)*(x19<=x20));

	if (t3 != 11U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x29 = INT16_MAX;
	int8_t x30 = INT8_MAX;
	uint64_t x31 = UINT64_MAX;
	volatile int32_t t4 = -125;

	t4 = ((x29+x30)*(x31<=x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = 27278217030LL;
	static uint8_t x34 = 0U;
	uint8_t x36 = 7U;
	volatile int64_t t5 = -4056738208180LL;

	t5 = ((x33+x34)*(x35<=x36));

	if (t5 != 27278217030LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x37 = UINT32_MAX;
	static volatile int8_t x38 = INT8_MIN;
	static int64_t x39 = -152LL;
	int64_t x40 = INT64_MIN;
	volatile uint32_t t6 = 3771178U;

	t6 = ((x37+x38)*(x39<=x40));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x41 = INT8_MIN;
	static volatile int32_t x42 = 16317181;
	static volatile int32_t t7 = 45192;

	t7 = ((x41+x42)*(x43<=x44));

	if (t7 != 16317053) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = -1;
	int8_t x46 = INT8_MIN;
	static int32_t x47 = 25;
	volatile int64_t x48 = 2600143120917LL;
	int32_t t8 = -238909;

	t8 = ((x45+x46)*(x47<=x48));

	if (t8 != -129) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x49 = 0;
	int8_t x50 = INT8_MIN;
	int64_t x51 = -1LL;
	int16_t x52 = 0;

	t9 = ((x49+x50)*(x51<=x52));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = INT64_MIN;
	uint64_t x54 = UINT64_MAX;
	uint32_t x55 = 6782U;
	int64_t x56 = -1LL;
	uint64_t t10 = 13582LLU;

	t10 = ((x53+x54)*(x55<=x56));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x57 = -1LL;
	volatile int32_t x58 = INT32_MIN;
	uint64_t x59 = UINT64_MAX;
	uint32_t x60 = 23465550U;
	volatile int64_t t11 = 188723LL;

	t11 = ((x57+x58)*(x59<=x60));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = 44799;
	int32_t x62 = INT32_MIN;
	int32_t x63 = INT32_MAX;
	int64_t x64 = INT64_MAX;

	t12 = ((x61+x62)*(x63<=x64));

	if (t12 != -2147438849) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	uint8_t x67 = UINT8_MAX;
	uint64_t x68 = UINT64_MAX;
	uint64_t t13 = 6125268LLU;

	t13 = ((x65+x66)*(x67<=x68));

	if (t13 != 2964897LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = 1;
	static int8_t x70 = -1;
	int64_t x71 = -1LL;
	uint32_t x72 = UINT32_MAX;
	static int32_t t14 = -2034849;

	t14 = ((x69+x70)*(x71<=x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x73 = INT16_MIN;
	int16_t x75 = INT16_MIN;
	int16_t x76 = INT16_MAX;
	volatile uint64_t t15 = 7504714290001844LLU;

	t15 = ((x73+x74)*(x75<=x76));

	if (t15 != 18446744073709524516LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x78 = -1;
	int64_t x79 = INT64_MAX;
	uint32_t x80 = 33330U;
	static int32_t t16 = -8;

	t16 = ((x77+x78)*(x79<=x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x87 = INT16_MIN;
	uint16_t x88 = UINT16_MAX;
	uint64_t t17 = 1953638284773604LLU;

	t17 = ((x85+x86)*(x87<=x88));

	if (t17 != 114583636LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = UINT32_MAX;
	uint64_t x90 = UINT64_MAX;
	volatile int16_t x91 = INT16_MAX;
	uint16_t x92 = 1U;
	static volatile uint64_t t18 = 8073293569390LLU;

	t18 = ((x89+x90)*(x91<=x92));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x94 = 5431;
	volatile uint8_t x95 = 1U;
	volatile int8_t x96 = -1;
	volatile int32_t t19 = -201;

	t19 = ((x93+x94)*(x95<=x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x106 = -1;
	volatile int32_t t20 = -126;

	t20 = ((x105+x106)*(x107<=x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = INT32_MIN;
	uint32_t x110 = 1246U;
	uint8_t x111 = UINT8_MAX;
	volatile int64_t x112 = INT64_MAX;
	uint32_t t21 = 1U;

	t21 = ((x109+x110)*(x111<=x112));

	if (t21 != 2147484894U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x113 = INT8_MIN;
	int32_t x114 = -1;
	uint64_t x115 = UINT64_MAX;
	int32_t t22 = -6;

	t22 = ((x113+x114)*(x115<=x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x117 = UINT16_MAX;
	int32_t x118 = INT32_MIN;
	static int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MAX;

	t23 = ((x117+x118)*(x119<=x120));

	if (t23 != -2147418113) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x125 = INT8_MIN;
	volatile int16_t x126 = 14203;
	int8_t x127 = INT8_MAX;
	volatile int16_t x128 = 0;
	int32_t t24 = 0;

	t24 = ((x125+x126)*(x127<=x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x129 = INT8_MIN;
	uint8_t x130 = 66U;
	volatile int32_t x131 = 58;
	uint16_t x132 = 8217U;
	int32_t t25 = -125933;

	t25 = ((x129+x130)*(x131<=x132));

	if (t25 != -62) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x133 = 4U;
	uint32_t x134 = UINT32_MAX;
	volatile int8_t x135 = 1;
	volatile uint32_t x136 = 3620595U;
	static uint32_t t26 = 12816580U;

	t26 = ((x133+x134)*(x135<=x136));

	if (t26 != 3U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x137 = 4441U;
	static uint16_t x138 = 1800U;
	volatile int64_t x139 = INT64_MIN;
	static uint64_t x140 = UINT64_MAX;
	uint32_t t27 = 10825U;

	t27 = ((x137+x138)*(x139<=x140));

	if (t27 != 6241U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x142 = INT8_MIN;
	int64_t t28 = -2LL;

	t28 = ((x141+x142)*(x143<=x144));

	if (t28 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = INT32_MIN;
	volatile uint8_t x147 = UINT8_MAX;
	int32_t x148 = -3206;

	t29 = ((x145+x146)*(x147<=x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x158 = 216524U;
	uint8_t x159 = 72U;
	uint16_t x160 = 5077U;
	uint32_t t30 = 1889302430U;

	t30 = ((x157+x158)*(x159<=x160));

	if (t30 != 216518U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = INT8_MIN;
	static int16_t x162 = -1;
	static volatile int32_t x163 = INT32_MAX;

	t31 = ((x161+x162)*(x163<=x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x165 = 617195497LLU;
	volatile uint32_t x166 = UINT32_MAX;
	int64_t x167 = -1LL;
	uint16_t x168 = 83U;
	volatile uint64_t t32 = 947472LLU;

	t32 = ((x165+x166)*(x167<=x168));

	if (t32 != 4912162792LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x170 = -1;
	int32_t x172 = -1;
	volatile int32_t t33 = -380;

	t33 = ((x169+x170)*(x171<=x172));

	if (t33 != -129) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x173 = 85U;
	uint8_t x174 = 82U;
	int16_t x175 = INT16_MIN;
	volatile int32_t t34 = 4143570;

	t34 = ((x173+x174)*(x175<=x176));

	if (t34 != 167) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x178 = INT8_MAX;

	t35 = ((x177+x178)*(x179<=x180));

	if (t35 != 126LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x181 = 0;
	uint16_t x182 = 3U;
	uint16_t x183 = 12497U;
	volatile int8_t x184 = INT8_MIN;

	t36 = ((x181+x182)*(x183<=x184));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x185 = INT32_MAX;
	static volatile int32_t x186 = INT32_MIN;
	static int32_t x187 = INT32_MIN;
	uint32_t x188 = UINT32_MAX;
	int32_t t37 = -1;

	t37 = ((x185+x186)*(x187<=x188));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x190 = UINT16_MAX;
	volatile int16_t x191 = -1;
	volatile uint64_t t38 = 51963439309LLU;

	t38 = ((x189+x190)*(x191<=x192));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x195 = -1;
	int16_t x196 = -1;
	static volatile int32_t t39 = -11065;

	t39 = ((x193+x194)*(x195<=x196));

	if (t39 != 157) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x197 = -449059;
	uint32_t x198 = UINT32_MAX;
	int64_t x199 = INT64_MAX;
	int16_t x200 = -1;
	volatile uint32_t t40 = 15U;

	t40 = ((x197+x198)*(x199<=x200));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x201 = 0U;
	int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MIN;
	int8_t x204 = -1;
	int32_t t41 = INT32_MIN;

	t41 = ((x201+x202)*(x203<=x204));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = INT32_MAX;
	int16_t x210 = -1;
	uint64_t x211 = 21LLU;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t42 = 3;

	t42 = ((x209+x210)*(x211<=x212));

	if (t42 != 2147483646) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x213 = 1792950LLU;
	int8_t x214 = -1;
	int16_t x215 = -1;
	int8_t x216 = INT8_MIN;
	uint64_t t43 = 812274683LLU;

	t43 = ((x213+x214)*(x215<=x216));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x217 = -1;
	int16_t x218 = INT16_MAX;
	volatile int8_t x219 = INT8_MAX;
	int8_t x220 = -1;
	static volatile int32_t t44 = -5538129;

	t44 = ((x217+x218)*(x219<=x220));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x221 = INT8_MIN;
	int64_t x222 = 76LL;
	int32_t x223 = INT32_MAX;
	static uint8_t x224 = 1U;
	int64_t t45 = -128513253812358LL;

	t45 = ((x221+x222)*(x223<=x224));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x225 = INT16_MIN;
	int8_t x226 = INT8_MIN;
	volatile uint64_t x227 = 7336424945LLU;

	t46 = ((x225+x226)*(x227<=x228));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x230 = 6;
	volatile int8_t x231 = INT8_MAX;
	volatile uint16_t x232 = 3U;
	volatile int32_t t47 = 403042;

	t47 = ((x229+x230)*(x231<=x232));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = -1;
	static volatile uint32_t x234 = UINT32_MAX;
	uint8_t x235 = 94U;
	volatile uint8_t x236 = 83U;
	volatile uint32_t t48 = 233U;

	t48 = ((x233+x234)*(x235<=x236));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = -1;
	int16_t x238 = INT16_MAX;
	static int16_t x240 = -1;

	t49 = ((x237+x238)*(x239<=x240));

	if (t49 != 32766) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x246 = 1LLU;
	static int64_t x247 = INT64_MIN;
	volatile int64_t x248 = INT64_MIN;

	t50 = ((x245+x246)*(x247<=x248));

	if (t50 != 32768LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x249 = UINT32_MAX;
	volatile int64_t x250 = -1LL;
	uint64_t x252 = UINT64_MAX;
	volatile int64_t t51 = 2044846542348108LL;

	t51 = ((x249+x250)*(x251<=x252));

	if (t51 != 4294967294LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x253 = 49U;
	int64_t x254 = -12364980LL;
	uint64_t x256 = UINT64_MAX;
	int64_t t52 = 21890LL;

	t52 = ((x253+x254)*(x255<=x256));

	if (t52 != -12364931LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x258 = 5469LLU;
	int16_t x260 = INT16_MIN;

	t53 = ((x257+x258)*(x259<=x260));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = -1;
	int64_t x262 = -683404LL;
	static int64_t x263 = -1LL;
	uint8_t x264 = 1U;
	static int64_t t54 = -41176LL;

	t54 = ((x261+x262)*(x263<=x264));

	if (t54 != -683405LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x267 = 1082561580202590LL;
	uint32_t x268 = UINT32_MAX;
	static int32_t t55 = 218128546;

	t55 = ((x265+x266)*(x267<=x268));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = -561;
	volatile int16_t x270 = INT16_MAX;
	static volatile int16_t x271 = -1;
	volatile int64_t x272 = INT64_MIN;
	volatile int32_t t56 = -1;

	t56 = ((x269+x270)*(x271<=x272));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x281 = 0;
	int32_t x282 = -1;
	static int32_t x283 = -1;
	uint8_t x284 = 57U;
	int32_t t57 = 290;

	t57 = ((x281+x282)*(x283<=x284));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x285 = 65LLU;
	int64_t x288 = -71LL;
	uint64_t t58 = 155LLU;

	t58 = ((x285+x286)*(x287<=x288));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x289 = INT16_MIN;
	int8_t x290 = -1;
	int8_t x291 = 1;
	int16_t x292 = -55;
	static int32_t t59 = 15615;

	t59 = ((x289+x290)*(x291<=x292));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x293 = UINT32_MAX;
	uint16_t x294 = UINT16_MAX;
	uint64_t x295 = 215618497280051LLU;
	uint32_t x296 = UINT32_MAX;
	uint32_t t60 = 7U;

	t60 = ((x293+x294)*(x295<=x296));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x297 = -2;
	int8_t x298 = INT8_MIN;
	int16_t x299 = 1872;
	uint64_t x300 = 186056488188LLU;

	t61 = ((x297+x298)*(x299<=x300));

	if (t61 != -130) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x301 = INT8_MAX;
	static int32_t x302 = -1;
	static int16_t x304 = INT16_MIN;
	static int32_t t62 = -1;

	t62 = ((x301+x302)*(x303<=x304));

	if (t62 != 126) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x305 = 41U;
	static volatile int64_t x308 = -1LL;
	volatile int32_t t63 = 1105529;

	t63 = ((x305+x306)*(x307<=x308));

	if (t63 != 110) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x309 = 31030821;
	volatile int64_t x311 = INT64_MIN;
	int16_t x312 = INT16_MIN;
	int64_t t64 = 13215911913294872LL;

	t64 = ((x309+x310)*(x311<=x312));

	if (t64 != 31030834LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x313 = 102909582U;
	uint8_t x314 = UINT8_MAX;
	static volatile int16_t x315 = INT16_MAX;
	static uint64_t x316 = UINT64_MAX;
	volatile uint32_t t65 = 74615U;

	t65 = ((x313+x314)*(x315<=x316));

	if (t65 != 102909837U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x321 = 22492757546LL;
	uint64_t x322 = 16909909912762LLU;
	int16_t x323 = -1;
	int16_t x324 = INT16_MAX;
	uint64_t t66 = 8939087831LLU;

	t66 = ((x321+x322)*(x323<=x324));

	if (t66 != 16932402670308LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x329 = INT8_MAX;
	volatile int64_t x330 = INT64_MIN;
	static uint16_t x331 = 14961U;
	uint32_t x332 = 42U;
	int64_t t67 = -26158811LL;

	t67 = ((x329+x330)*(x331<=x332));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x334 = 60683LL;
	int8_t x335 = -2;
	static uint16_t x336 = UINT16_MAX;
	static volatile int64_t t68 = 524LL;

	t68 = ((x333+x334)*(x335<=x336));

	if (t68 != 62614LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x341 = UINT32_MAX;
	int8_t x342 = 2;
	int16_t x343 = INT16_MIN;
	uint16_t x344 = 1713U;
	static volatile uint32_t t69 = 2869U;

	t69 = ((x341+x342)*(x343<=x344));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x345 = INT32_MAX;
	uint64_t x346 = UINT64_MAX;
	static uint64_t x347 = 17090937905826007LLU;
	int8_t x348 = INT8_MAX;
	static uint64_t t70 = 8170439674292874LLU;

	t70 = ((x345+x346)*(x347<=x348));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x349 = -636494555;
	volatile uint16_t x350 = UINT16_MAX;
	static int8_t x351 = -14;
	uint32_t x352 = UINT32_MAX;

	t71 = ((x349+x350)*(x351<=x352));

	if (t71 != -636429020) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x353 = 79U;
	int64_t x354 = -1LL;
	int8_t x355 = INT8_MAX;
	static volatile uint64_t x356 = 221093266696807LLU;
	int64_t t72 = 241556173LL;

	t72 = ((x353+x354)*(x355<=x356));

	if (t72 != 78LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x357 = 49;
	volatile int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MIN;
	int16_t x360 = -1;
	volatile int64_t t73 = 0LL;

	t73 = ((x357+x358)*(x359<=x360));

	if (t73 != -9223372036854775759LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x361 = UINT16_MAX;
	static uint16_t x362 = UINT16_MAX;
	int8_t x364 = INT8_MIN;
	volatile int32_t t74 = 241994810;

	t74 = ((x361+x362)*(x363<=x364));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x369 = INT8_MIN;
	uint16_t x370 = 9258U;
	int64_t x371 = 3661212LL;
	int16_t x372 = -1;
	int32_t t75 = 1005664;

	t75 = ((x369+x370)*(x371<=x372));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x377 = 91315125U;
	int8_t x378 = 23;
	volatile int64_t x379 = -1LL;
	volatile uint32_t t76 = 899U;

	t76 = ((x377+x378)*(x379<=x380));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x385 = 49917U;
	int64_t x387 = -6084LL;
	int8_t x388 = INT8_MIN;

	t77 = ((x385+x386)*(x387<=x388));

	if (t77 != 49916U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x389 = INT64_MIN;
	volatile int8_t x390 = 1;
	uint8_t x392 = UINT8_MAX;
	volatile int64_t t78 = -12937741LL;

	t78 = ((x389+x390)*(x391<=x392));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x393 = INT32_MIN;
	int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MAX;
	volatile int64_t x396 = 1126350LL;
	int64_t t79 = 17909884536366431LL;

	t79 = ((x393+x394)*(x395<=x396));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x397 = -14;
	int32_t x398 = INT32_MAX;
	volatile int8_t x400 = INT8_MIN;
	int32_t t80 = 705530074;

	t80 = ((x397+x398)*(x399<=x400));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x402 = 4U;
	static uint32_t x404 = 81666995U;
	uint64_t t81 = 112493393486LLU;

	t81 = ((x401+x402)*(x403<=x404));

	if (t81 != 255240445201LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x407 = -1;
	static uint16_t x408 = UINT16_MAX;
	int64_t t82 = 13963252LL;

	t82 = ((x405+x406)*(x407<=x408));

	if (t82 != 7720982260069214620LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x410 = -4;
	static int16_t x411 = 8;
	int32_t t83 = -358897061;

	t83 = ((x409+x410)*(x411<=x412));

	if (t83 != 18) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x417 = 63;
	int8_t x418 = -6;
	uint16_t x419 = UINT16_MAX;

	t84 = ((x417+x418)*(x419<=x420));

	if (t84 != 57) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x421 = -8622;
	volatile int8_t x422 = INT8_MAX;

	t85 = ((x421+x422)*(x423<=x424));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x426 = -8740;
	int32_t x427 = INT32_MIN;
	static int8_t x428 = -6;
	int32_t t86 = -491;

	t86 = ((x425+x426)*(x427<=x428));

	if (t86 != -8732) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x429 = INT16_MIN;
	uint32_t x430 = 6558U;
	int8_t x431 = 1;
	int32_t x432 = INT32_MIN;
	uint32_t t87 = 13660870U;

	t87 = ((x429+x430)*(x431<=x432));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x433 = INT8_MIN;
	static volatile uint32_t x434 = UINT32_MAX;
	int64_t x435 = INT64_MAX;
	uint64_t x436 = 3433LLU;

	t88 = ((x433+x434)*(x435<=x436));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x437 = INT32_MIN;
	int16_t x440 = INT16_MAX;
	uint32_t t89 = 491U;

	t89 = ((x437+x438)*(x439<=x440));

	if (t89 != 2463122006U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x441 = 12656;
	int32_t x442 = INT32_MIN;
	static uint64_t x443 = 57LLU;
	static uint16_t x444 = 79U;
	static int32_t t90 = 8773217;

	t90 = ((x441+x442)*(x443<=x444));

	if (t90 != -2147470992) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x445 = -1;
	volatile int8_t x446 = -1;
	static volatile uint16_t x447 = 0U;
	volatile uint8_t x448 = 87U;

	t91 = ((x445+x446)*(x447<=x448));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x449 = 115586640506867110LLU;
	static int32_t x450 = INT32_MIN;
	int64_t x451 = INT64_MIN;
	int8_t x452 = INT8_MIN;

	t92 = ((x449+x450)*(x451<=x452));

	if (t92 != 115586638359383462LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x453 = -12003;
	int8_t x454 = -1;
	int32_t x455 = 459493511;

	t93 = ((x453+x454)*(x455<=x456));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x461 = -1LL;
	int32_t x462 = -1;
	uint32_t x463 = UINT32_MAX;
	int64_t x464 = -1316045548LL;
	int64_t t94 = 5326LL;

	t94 = ((x461+x462)*(x463<=x464));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x465 = 6U;
	int16_t x466 = 26;
	static volatile int32_t t95 = 0;

	t95 = ((x465+x466)*(x467<=x468));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x469 = UINT64_MAX;
	static uint16_t x471 = 2052U;
	volatile int64_t x472 = INT64_MIN;

	t96 = ((x469+x470)*(x471<=x472));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x475 = 23U;
	static int16_t x476 = INT16_MIN;
	int64_t t97 = 13708186LL;

	t97 = ((x473+x474)*(x475<=x476));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x477 = INT16_MIN;
	uint16_t x478 = 3U;
	static int64_t x479 = INT64_MIN;
	uint16_t x480 = 29U;
	volatile int32_t t98 = 241602;

	t98 = ((x477+x478)*(x479<=x480));

	if (t98 != -32765) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x487 = -872;
	int8_t x488 = INT8_MIN;

	t99 = ((x485+x486)*(x487<=x488));

	if (t99 != -61) { NG(); } else { ; }
	
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


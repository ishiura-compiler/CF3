#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 33002658797LLU;
uint64_t t0 = 154LLU;
int64_t x11 = -189484698LL;
int16_t x21 = 1;
volatile int32_t x22 = -1;
uint32_t x29 = UINT32_MAX;
int32_t x31 = -1;
int8_t x39 = -39;
uint16_t x62 = 26542U;
volatile int64_t x65 = -365582210LL;
volatile uint8_t x69 = 0U;
volatile uint64_t x85 = UINT64_MAX;
static uint64_t t13 = 3842489908LLU;
volatile uint32_t t15 = 5U;
volatile int8_t x97 = -1;
static uint64_t t16 = 5LLU;
uint64_t t18 = 7769LLU;
uint64_t x119 = 4267486531LLU;
uint8_t x121 = UINT8_MAX;
uint32_t x128 = 1970618U;
static volatile int32_t x139 = -266449;
uint32_t x148 = UINT32_MAX;
volatile int64_t t24 = -389373LL;
static int8_t x151 = 0;
int64_t t25 = 2167951857612996256LL;
uint16_t x161 = 13U;
int32_t t26 = 2;
static int64_t x168 = INT64_MAX;
volatile uint64_t x173 = 1LLU;
uint64_t t28 = 474676038LLU;
static uint64_t x177 = UINT64_MAX;
static int32_t x190 = 5480400;
uint64_t x202 = 6599573024LLU;
int8_t x204 = INT8_MIN;
volatile uint64_t x206 = 498LLU;
int16_t x207 = INT16_MIN;
static uint16_t x220 = 0U;
uint64_t x230 = 115909296959LLU;
uint16_t x232 = 0U;
uint32_t x234 = 665U;
volatile int8_t x238 = -1;
volatile int32_t t39 = -354;
static int16_t x246 = -132;
int32_t x247 = INT32_MAX;
static volatile int8_t x257 = INT8_MAX;
volatile int32_t x279 = INT32_MAX;
static int32_t x296 = -1017480;
int16_t x314 = INT16_MIN;
int8_t x319 = -1;
uint32_t x339 = 0U;
int64_t x343 = 393LL;
uint16_t x349 = UINT16_MAX;
static volatile int16_t x351 = 1;
uint8_t x352 = UINT8_MAX;
static int16_t x356 = INT16_MIN;
static uint64_t x358 = UINT64_MAX;
static uint64_t x359 = UINT64_MAX;
uint8_t x360 = UINT8_MAX;
volatile uint64_t t62 = 1890345LLU;
int64_t t63 = 1LL;
uint8_t x369 = 16U;
uint32_t x375 = UINT32_MAX;
volatile int16_t x377 = 428;
int64_t x378 = -28LL;
int8_t x385 = INT8_MIN;
int16_t x386 = -1;
static int32_t t67 = -2809398;
int64_t x391 = -1LL;
uint8_t x393 = 11U;
int64_t x395 = 2681LL;
uint32_t x396 = 1U;
static volatile uint32_t x401 = UINT32_MAX;
uint64_t x405 = 1LLU;
volatile uint64_t t72 = 3517977095759084LLU;
int32_t x438 = INT32_MIN;
int32_t x439 = -12;
int16_t x445 = 3784;
volatile int32_t t80 = 37;
int64_t x455 = INT64_MIN;
int16_t x468 = 3938;
int16_t x473 = INT16_MAX;
static int32_t x480 = 194837494;
int16_t x482 = -1;
static int64_t t89 = 435LL;
uint64_t x493 = 63785191LLU;
uint64_t t90 = 119357776059828330LLU;
int16_t x501 = INT16_MAX;
int16_t x502 = INT16_MIN;
int32_t x508 = -1;
uint8_t x523 = 0U;
volatile int32_t t95 = 787716256;
volatile uint32_t x527 = 1350575U;
static uint64_t t96 = 535905LLU;
int64_t x531 = -2452326069851022509LL;
int64_t x532 = INT64_MIN;
int8_t x540 = INT8_MAX;
volatile uint32_t t99 = 34301852U;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	uint64_t x3 = 9776341LLU;
	volatile int64_t x4 = -220680413LL;

	t0 = ((x1%x2)<<(x3<=x4));

	if (t0 != 33088824956LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MAX;
	int16_t x10 = INT16_MAX;
	uint32_t x12 = 1035U;
	int32_t t1 = 0;

	t1 = ((x9%x10)<<(x11<=x12));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MIN;
	int16_t x18 = -1;
	int64_t x19 = -4039132085451065881LL;
	int64_t x20 = 57564241LL;
	int32_t t2 = 0;

	t2 = ((x17%x18)<<(x19<=x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MIN;
	int32_t t3 = 1027434;

	t3 = ((x21%x22)<<(x23<=x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x30 = UINT16_MAX;
	uint16_t x32 = 13423U;
	static uint32_t t4 = 48U;

	t4 = ((x29%x30)<<(x31<=x32));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x37 = UINT8_MAX;
	uint8_t x38 = 14U;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t5 = -154358183;

	t5 = ((x37%x38)<<(x39<=x40));

	if (t5 != 6) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x41 = 21363063441LLU;
	volatile int8_t x42 = -43;
	uint32_t x43 = 208018419U;
	int32_t x44 = INT32_MAX;
	static volatile uint64_t t6 = 25705LLU;

	t6 = ((x41%x42)<<(x43<=x44));

	if (t6 != 42726126882LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = -13;
	uint32_t x50 = 52758U;
	static volatile int16_t x51 = -1;
	volatile uint64_t x52 = 0LLU;
	uint32_t t7 = 7U;

	t7 = ((x49%x50)<<(x51<=x52));

	if (t7 != 44019U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x53 = UINT32_MAX;
	uint8_t x54 = 4U;
	int64_t x55 = 26051590LL;
	uint16_t x56 = 2U;
	volatile uint32_t t8 = 34636U;

	t8 = ((x53%x54)<<(x55<=x56));

	if (t8 != 3U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x61 = 699U;
	static uint16_t x63 = 990U;
	volatile int16_t x64 = -1;
	int32_t t9 = 56128940;

	t9 = ((x61%x62)<<(x63<=x64));

	if (t9 != 699) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x66 = -1;
	static int64_t x67 = INT64_MIN;
	volatile int32_t x68 = -109;
	int64_t t10 = -119119764646LL;

	t10 = ((x65%x66)<<(x67<=x68));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x70 = -1;
	int64_t x71 = INT64_MIN;
	uint64_t x72 = UINT64_MAX;
	volatile int32_t t11 = -128;

	t11 = ((x69%x70)<<(x71<=x72));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x77 = 1;
	int16_t x78 = -1;
	int64_t x79 = -219984695LL;
	int8_t x80 = -1;
	volatile int32_t t12 = -15143975;

	t12 = ((x77%x78)<<(x79<=x80));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x86 = -1515893704340309LL;
	int64_t x87 = -1LL;
	volatile uint16_t x88 = 10U;

	t13 = ((x85%x86)<<(x87<=x88));

	if (t13 != 3031787408680616LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x89 = INT16_MIN;
	uint16_t x90 = 8U;
	static int8_t x91 = INT8_MIN;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t14 = 31524184;

	t14 = ((x89%x90)<<(x91<=x92));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x93 = UINT32_MAX;
	static int32_t x94 = INT32_MAX;
	int64_t x95 = 7979836126840LL;
	uint16_t x96 = UINT16_MAX;

	t15 = ((x93%x94)<<(x95<=x96));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x98 = UINT64_MAX;
	int32_t x99 = -3706166;
	uint32_t x100 = 94388U;

	t16 = ((x97%x98)<<(x99<=x100));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x101 = INT8_MAX;
	static volatile int64_t x102 = INT64_MAX;
	uint64_t x103 = 7402854166243LLU;
	uint64_t x104 = 745628LLU;
	int64_t t17 = 8704255166165165LL;

	t17 = ((x101%x102)<<(x103<=x104));

	if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x113 = INT64_MAX;
	uint64_t x114 = UINT64_MAX;
	uint16_t x115 = UINT16_MAX;
	volatile int8_t x116 = INT8_MIN;

	t18 = ((x113%x114)<<(x115<=x116));

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x117 = 742706048;
	int64_t x118 = INT64_MAX;
	static volatile int64_t x120 = -12LL;
	volatile int64_t t19 = 7702667704349LL;

	t19 = ((x117%x118)<<(x119<=x120));

	if (t19 != 1485412096LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x122 = 98623302398845319LLU;
	uint64_t x123 = UINT64_MAX;
	uint16_t x124 = 975U;
	volatile uint64_t t20 = 304734108127564285LLU;

	t20 = ((x121%x122)<<(x123<=x124));

	if (t20 != 255LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x125 = INT32_MAX;
	uint64_t x126 = UINT64_MAX;
	int8_t x127 = INT8_MIN;
	uint64_t t21 = 100656796LLU;

	t21 = ((x125%x126)<<(x127<=x128));

	if (t21 != 2147483647LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x133 = 1740997LL;
	volatile uint8_t x134 = 15U;
	volatile int64_t x135 = 1134013441LL;
	volatile int8_t x136 = 49;
	static volatile int64_t t22 = 45917115984LL;

	t22 = ((x133%x134)<<(x135<=x136));

	if (t22 != 7LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x137 = 104LLU;
	uint64_t x138 = UINT64_MAX;
	static uint32_t x140 = UINT32_MAX;
	static volatile uint64_t t23 = 518629LLU;

	t23 = ((x137%x138)<<(x139<=x140));

	if (t23 != 208LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x145 = INT64_MAX;
	int16_t x146 = -43;
	volatile int64_t x147 = INT64_MAX;

	t24 = ((x145%x146)<<(x147<=x148));

	if (t24 != 41LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x149 = 22U;
	int64_t x150 = -1LL;
	int16_t x152 = INT16_MAX;

	t25 = ((x149%x150)<<(x151<=x152));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x162 = 14U;
	uint64_t x163 = 2649992583LLU;
	uint16_t x164 = UINT16_MAX;

	t26 = ((x161%x162)<<(x163<=x164));

	if (t26 != 13) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = 2;
	static uint64_t x167 = UINT64_MAX;
	int32_t t27 = -210710974;

	t27 = ((x165%x166)<<(x167<=x168));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x174 = 4212912;
	uint32_t x175 = UINT32_MAX;
	static int8_t x176 = INT8_MIN;

	t28 = ((x173%x174)<<(x175<=x176));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x178 = 2898LLU;
	int64_t x179 = -1241516LL;
	int8_t x180 = INT8_MIN;
	uint64_t t29 = 1781049958LLU;

	t29 = ((x177%x178)<<(x179<=x180));

	if (t29 != 5070LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x185 = INT64_MIN;
	static uint64_t x186 = 76597838983212LLU;
	int32_t x187 = INT32_MIN;
	static int8_t x188 = -6;
	volatile uint64_t t30 = 61148095145146396LLU;

	t30 = ((x185%x186)<<(x187<=x188));

	if (t30 != 146098416504928LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x189 = UINT8_MAX;
	volatile int32_t x191 = -1;
	int32_t x192 = INT32_MIN;
	volatile int32_t t31 = 37731;

	t31 = ((x189%x190)<<(x191<=x192));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x193 = 27LLU;
	int32_t x194 = 1;
	uint8_t x195 = 1U;
	static int8_t x196 = -1;
	volatile uint64_t t32 = 8180600350492945LLU;

	t32 = ((x193%x194)<<(x195<=x196));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x201 = 392U;
	uint16_t x203 = UINT16_MAX;
	volatile uint64_t t33 = 2222LLU;

	t33 = ((x201%x202)<<(x203<=x204));

	if (t33 != 392LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x205 = 15LLU;
	int8_t x208 = -1;
	uint64_t t34 = 4043930LLU;

	t34 = ((x205%x206)<<(x207<=x208));

	if (t34 != 30LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x217 = UINT16_MAX;
	static int32_t x218 = -3;
	uint64_t x219 = 207482786332LLU;
	int32_t t35 = -18;

	t35 = ((x217%x218)<<(x219<=x220));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x225 = 170158U;
	static uint16_t x226 = 3U;
	static int32_t x227 = INT32_MAX;
	volatile int8_t x228 = -1;
	volatile uint32_t t36 = 2765U;

	t36 = ((x225%x226)<<(x227<=x228));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x229 = 217859640U;
	uint8_t x231 = 98U;
	volatile uint64_t t37 = 31317867868384LLU;

	t37 = ((x229%x230)<<(x231<=x232));

	if (t37 != 217859640LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x233 = INT32_MIN;
	uint8_t x235 = 37U;
	static int64_t x236 = -1LL;
	uint32_t t38 = 25U;

	t38 = ((x233%x234)<<(x235<=x236));

	if (t38 != 478U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x237 = INT32_MIN;
	static volatile int8_t x239 = INT8_MAX;
	uint16_t x240 = 1U;

	t39 = ((x237%x238)<<(x239<=x240));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x245 = INT64_MAX;
	volatile uint8_t x248 = 3U;
	int64_t t40 = 37LL;

	t40 = ((x245%x246)<<(x247<=x248));

	if (t40 != 7LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x249 = INT64_MAX;
	int32_t x250 = -38;
	static int16_t x251 = INT16_MIN;
	static int32_t x252 = -1;
	volatile int64_t t41 = -1565696858274LL;

	t41 = ((x249%x250)<<(x251<=x252));

	if (t41 != 34LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x253 = 315U;
	uint64_t x254 = 706234375279281285LLU;
	int16_t x255 = INT16_MAX;
	int64_t x256 = 3786882LL;
	uint64_t t42 = 20LLU;

	t42 = ((x253%x254)<<(x255<=x256));

	if (t42 != 630LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x258 = 59U;
	static int8_t x259 = -1;
	int32_t x260 = INT32_MIN;
	int32_t t43 = 240281;

	t43 = ((x257%x258)<<(x259<=x260));

	if (t43 != 9) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x261 = 2U;
	int16_t x262 = INT16_MIN;
	volatile uint64_t x263 = 0LLU;
	int32_t x264 = INT32_MIN;
	volatile int32_t t44 = 4;

	t44 = ((x261%x262)<<(x263<=x264));

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x265 = INT8_MAX;
	static volatile int32_t x266 = -936047631;
	volatile int16_t x267 = INT16_MIN;
	uint16_t x268 = 7U;
	int32_t t45 = 6;

	t45 = ((x265%x266)<<(x267<=x268));

	if (t45 != 254) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x273 = INT16_MIN;
	volatile uint64_t x274 = 2158430308829LLU;
	uint32_t x275 = 1538045045U;
	int16_t x276 = INT16_MIN;
	static volatile uint64_t t46 = 25954308014156051LLU;

	t46 = ((x273%x274)<<(x275<=x276));

	if (t46 != 70485236236LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x277 = -1;
	int8_t x278 = -1;
	uint16_t x280 = UINT16_MAX;
	int32_t t47 = 138614041;

	t47 = ((x277%x278)<<(x279<=x280));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x281 = 298;
	uint32_t x282 = 45860U;
	int8_t x283 = -6;
	int64_t x284 = -391699312232420749LL;
	static uint32_t t48 = 593029625U;

	t48 = ((x281%x282)<<(x283<=x284));

	if (t48 != 298U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x285 = INT8_MAX;
	volatile int16_t x286 = INT16_MAX;
	static int64_t x287 = INT64_MAX;
	static volatile int8_t x288 = 22;
	static volatile int32_t t49 = 25174;

	t49 = ((x285%x286)<<(x287<=x288));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x293 = 0U;
	volatile uint8_t x294 = UINT8_MAX;
	int16_t x295 = INT16_MAX;
	volatile int32_t t50 = 549;

	t50 = ((x293%x294)<<(x295<=x296));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x297 = -2435;
	uint8_t x298 = 1U;
	int16_t x299 = -1;
	volatile uint8_t x300 = 59U;
	int32_t t51 = 15446568;

	t51 = ((x297%x298)<<(x299<=x300));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MAX;
	int32_t x304 = -456578949;
	static volatile int32_t t52 = 190719;

	t52 = ((x301%x302)<<(x303<=x304));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x309 = INT16_MAX;
	int16_t x310 = INT16_MAX;
	int8_t x311 = -44;
	static int8_t x312 = -1;
	int32_t t53 = -728;

	t53 = ((x309%x310)<<(x311<=x312));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x313 = 3U;
	static int8_t x315 = -24;
	static int8_t x316 = -1;
	volatile int32_t t54 = -32456;

	t54 = ((x313%x314)<<(x315<=x316));

	if (t54 != 6) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x317 = UINT64_MAX;
	int16_t x318 = 20;
	int16_t x320 = -1;
	uint64_t t55 = 121530781797LLU;

	t55 = ((x317%x318)<<(x319<=x320));

	if (t55 != 30LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x321 = 7U;
	static volatile uint64_t x322 = 363644678LLU;
	int8_t x323 = INT8_MIN;
	uint16_t x324 = 1U;
	volatile uint64_t t56 = 2239763224272475LLU;

	t56 = ((x321%x322)<<(x323<=x324));

	if (t56 != 14LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x337 = 10230U;
	static int8_t x338 = INT8_MIN;
	volatile uint8_t x340 = 1U;
	volatile uint32_t t57 = 1188990U;

	t57 = ((x337%x338)<<(x339<=x340));

	if (t57 != 20460U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x341 = 3010570U;
	int16_t x342 = -1;
	int16_t x344 = -1;
	volatile uint32_t t58 = 165243669U;

	t58 = ((x341%x342)<<(x343<=x344));

	if (t58 != 3010570U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x345 = -1;
	static volatile int8_t x346 = -1;
	static uint64_t x347 = UINT64_MAX;
	static int16_t x348 = INT16_MAX;
	int32_t t59 = 951312497;

	t59 = ((x345%x346)<<(x347<=x348));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x350 = INT8_MAX;
	volatile int32_t t60 = -179292;

	t60 = ((x349%x350)<<(x351<=x352));

	if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x353 = INT8_MAX;
	uint32_t x354 = 3U;
	uint64_t x355 = 98788987579025LLU;
	uint32_t t61 = 1957751081U;

	t61 = ((x353%x354)<<(x355<=x356));

	if (t61 != 2U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x357 = -2902;

	t62 = ((x357%x358)<<(x359<=x360));

	if (t62 != 18446744073709548714LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x365 = -26461290LL;
	static int8_t x366 = -1;
	int64_t x367 = -2537574684191121LL;
	int32_t x368 = INT32_MIN;

	t63 = ((x365%x366)<<(x367<=x368));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x370 = -1;
	volatile int16_t x371 = INT16_MAX;
	volatile uint8_t x372 = 18U;
	static int32_t t64 = 7656;

	t64 = ((x369%x370)<<(x371<=x372));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x373 = -1;
	static volatile uint64_t x374 = UINT64_MAX;
	int32_t x376 = -55;
	uint64_t t65 = 2041956606499233LLU;

	t65 = ((x373%x374)<<(x375<=x376));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x379 = -1;
	uint8_t x380 = 5U;
	int64_t t66 = 0LL;

	t66 = ((x377%x378)<<(x379<=x380));

	if (t66 != 16LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x387 = INT32_MIN;
	static int8_t x388 = 1;

	t67 = ((x385%x386)<<(x387<=x388));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x389 = 8391386273708909722LLU;
	int32_t x390 = INT32_MIN;
	uint8_t x392 = 1U;
	uint64_t t68 = 47LLU;

	t68 = ((x389%x390)<<(x391<=x392));

	if (t68 != 16782772547417819444LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x394 = -4841369;
	volatile int32_t t69 = 9252;

	t69 = ((x393%x394)<<(x395<=x396));

	if (t69 != 11) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x397 = UINT16_MAX;
	static uint32_t x398 = 517175060U;
	uint64_t x399 = UINT64_MAX;
	static int32_t x400 = 15323;
	uint32_t t70 = 55829U;

	t70 = ((x397%x398)<<(x399<=x400));

	if (t70 != 65535U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x402 = UINT32_MAX;
	volatile uint16_t x403 = 3361U;
	static int16_t x404 = -14442;
	static volatile uint32_t t71 = 150653195U;

	t71 = ((x401%x402)<<(x403<=x404));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x406 = 104U;
	uint16_t x407 = 6U;
	uint16_t x408 = 627U;

	t72 = ((x405%x406)<<(x407<=x408));

	if (t72 != 2LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x413 = 4;
	uint16_t x414 = 32U;
	int8_t x415 = INT8_MIN;
	static int8_t x416 = 0;
	int32_t t73 = 1;

	t73 = ((x413%x414)<<(x415<=x416));

	if (t73 != 8) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x421 = 6832489U;
	uint16_t x422 = UINT16_MAX;
	int8_t x423 = INT8_MAX;
	uint8_t x424 = 101U;
	static uint32_t t74 = 756772315U;

	t74 = ((x421%x422)<<(x423<=x424));

	if (t74 != 16849U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x425 = UINT16_MAX;
	int16_t x426 = 2722;
	int32_t x427 = 17;
	volatile int8_t x428 = -1;
	volatile int32_t t75 = 339425777;

	t75 = ((x425%x426)<<(x427<=x428));

	if (t75 != 207) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x429 = INT64_MIN;
	static int32_t x430 = INT32_MIN;
	volatile int8_t x431 = INT8_MIN;
	volatile uint64_t x432 = UINT64_MAX;
	int64_t t76 = -99058199072LL;

	t76 = ((x429%x430)<<(x431<=x432));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x437 = 1;
	uint16_t x440 = 13920U;
	static volatile int32_t t77 = 7758;

	t77 = ((x437%x438)<<(x439<=x440));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x441 = INT16_MAX;
	uint8_t x442 = 68U;
	static int64_t x443 = INT64_MIN;
	volatile int8_t x444 = -1;
	int32_t t78 = 2605;

	t78 = ((x441%x442)<<(x443<=x444));

	if (t78 != 118) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x446 = -1;
	int16_t x447 = -14;
	volatile int16_t x448 = -1;
	int32_t t79 = 193850;

	t79 = ((x445%x446)<<(x447<=x448));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x449 = INT16_MAX;
	static volatile int32_t x450 = INT32_MIN;
	static uint16_t x451 = 24219U;
	uint8_t x452 = 0U;

	t80 = ((x449%x450)<<(x451<=x452));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x453 = UINT64_MAX;
	int32_t x454 = -1;
	static int16_t x456 = INT16_MAX;
	volatile uint64_t t81 = 8528467746LLU;

	t81 = ((x453%x454)<<(x455<=x456));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x457 = 3;
	int8_t x458 = -1;
	static volatile uint32_t x459 = 6U;
	volatile int32_t x460 = INT32_MIN;
	int32_t t82 = -64334255;

	t82 = ((x457%x458)<<(x459<=x460));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x461 = 10U;
	int8_t x462 = INT8_MAX;
	int16_t x463 = INT16_MIN;
	int32_t x464 = -1;
	int32_t t83 = -1238562;

	t83 = ((x461%x462)<<(x463<=x464));

	if (t83 != 20) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x465 = -1;
	int8_t x466 = 1;
	int8_t x467 = INT8_MIN;
	volatile int32_t t84 = 12396;

	t84 = ((x465%x466)<<(x467<=x468));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x469 = INT32_MAX;
	static int32_t x470 = -179262374;
	static uint8_t x471 = 1U;
	static uint64_t x472 = 92602567342LLU;
	static volatile int32_t t85 = 0;

	t85 = ((x469%x470)<<(x471<=x472));

	if (t85 != 351195066) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x474 = 264;
	static int16_t x475 = INT16_MIN;
	volatile int32_t x476 = INT32_MIN;
	int32_t t86 = -702;

	t86 = ((x473%x474)<<(x475<=x476));

	if (t86 != 31) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x477 = INT16_MIN;
	static int32_t x478 = -1;
	int16_t x479 = INT16_MAX;
	volatile int32_t t87 = -452491;

	t87 = ((x477%x478)<<(x479<=x480));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x481 = -1;
	int16_t x483 = 21;
	int32_t x484 = -10074;
	volatile int32_t t88 = -2;

	t88 = ((x481%x482)<<(x483<=x484));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x489 = 835U;
	int64_t x490 = INT64_MIN;
	int32_t x491 = -1;
	volatile int8_t x492 = 0;

	t89 = ((x489%x490)<<(x491<=x492));

	if (t89 != 1670LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x494 = 585LL;
	int8_t x495 = INT8_MIN;
	int16_t x496 = INT16_MAX;

	t90 = ((x493%x494)<<(x495<=x496));

	if (t90 != 602LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x497 = 5U;
	volatile int8_t x498 = INT8_MIN;
	int16_t x499 = -1;
	volatile uint16_t x500 = 11U;
	int32_t t91 = -6;

	t91 = ((x497%x498)<<(x499<=x500));

	if (t91 != 10) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x503 = 94U;
	static int64_t x504 = INT64_MAX;
	int32_t t92 = -126780;

	t92 = ((x501%x502)<<(x503<=x504));

	if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x505 = 2745U;
	static volatile int16_t x506 = INT16_MIN;
	volatile int8_t x507 = -5;
	volatile uint32_t t93 = 26732U;

	t93 = ((x505%x506)<<(x507<=x508));

	if (t93 != 5490U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x517 = INT32_MIN;
	int8_t x518 = INT8_MIN;
	volatile int32_t x519 = -1;
	static uint16_t x520 = UINT16_MAX;
	volatile int32_t t94 = 5034;

	t94 = ((x517%x518)<<(x519<=x520));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x521 = INT8_MAX;
	volatile int8_t x522 = INT8_MIN;
	uint64_t x524 = 3910240676592731LLU;

	t95 = ((x521%x522)<<(x523<=x524));

	if (t95 != 254) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x525 = INT32_MIN;
	static uint64_t x526 = UINT64_MAX;
	int64_t x528 = -1LL;

	t96 = ((x525%x526)<<(x527<=x528));

	if (t96 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x529 = -1;
	int64_t x530 = -1LL;
	volatile int64_t t97 = 13922LL;

	t97 = ((x529%x530)<<(x531<=x532));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x533 = 0U;
	volatile int32_t x534 = -1;
	int8_t x535 = -1;
	static volatile int16_t x536 = INT16_MAX;
	int32_t t98 = -494;

	t98 = ((x533%x534)<<(x535<=x536));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x537 = -1;
	uint32_t x538 = UINT32_MAX;
	int8_t x539 = INT8_MIN;

	t99 = ((x537%x538)<<(x539<=x540));

	if (t99 != 0U) { NG(); } else { ; }
	
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


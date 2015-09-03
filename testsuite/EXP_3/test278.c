#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x6 = UINT8_MAX;
uint64_t x35 = 100065229197LLU;
volatile uint64_t t5 = 198771877837LLU;
static int8_t x41 = INT8_MAX;
static volatile int16_t x43 = INT16_MIN;
volatile int8_t x44 = INT8_MIN;
int64_t x46 = -1LL;
int32_t x47 = INT32_MAX;
int64_t x52 = 562094144348569923LL;
static int32_t x54 = INT32_MAX;
static int8_t x57 = -63;
static volatile int32_t x63 = INT32_MAX;
volatile int8_t x74 = -1;
uint64_t t12 = 4150104159068LLU;
static int64_t x79 = -2448441238154768LL;
int16_t x86 = INT16_MIN;
static uint64_t t15 = 53368377316LLU;
int64_t x93 = INT64_MAX;
static int32_t t17 = -57997946;
static int32_t t19 = 24442824;
int32_t t21 = -86359;
static int64_t x130 = -246950LL;
uint8_t x132 = UINT8_MAX;
volatile int64_t x136 = -4960808416LL;
volatile int64_t t23 = 221990588482011LL;
int8_t x139 = 0;
int64_t t24 = 1026933LL;
uint64_t x145 = UINT64_MAX;
uint8_t x147 = 0U;
static int8_t x155 = INT8_MIN;
int32_t t27 = 4087;
int64_t x158 = -101986311LL;
static int8_t x167 = -1;
int16_t x172 = INT16_MAX;
volatile int64_t t34 = 103192LL;
int8_t x191 = INT8_MIN;
int64_t x192 = -1LL;
int32_t x201 = INT32_MIN;
volatile uint8_t x209 = UINT8_MAX;
uint32_t x210 = 576U;
static volatile int32_t t39 = 176128284;
volatile uint32_t x213 = UINT32_MAX;
int8_t x215 = INT8_MAX;
int32_t t40 = 680215516;
int32_t x218 = INT32_MAX;
static int16_t x225 = 47;
volatile int64_t x229 = -23334090LL;
uint32_t x230 = UINT32_MAX;
uint32_t x233 = UINT32_MAX;
int8_t x236 = INT8_MIN;
int32_t x237 = 23;
int16_t x241 = INT16_MIN;
uint64_t x242 = UINT64_MAX;
int64_t x245 = INT64_MIN;
int8_t x249 = -25;
volatile int32_t t48 = 1;
static volatile int32_t x253 = INT32_MAX;
int32_t t50 = -31;
int16_t x267 = 0;
int32_t x268 = -1;
int32_t x271 = INT32_MIN;
uint32_t x273 = 41728U;
int16_t x275 = -1;
int8_t x286 = 1;
uint8_t x298 = UINT8_MAX;
int8_t x299 = -7;
int32_t x310 = 61;
volatile int32_t x321 = -1;
volatile uint64_t x324 = 2359658LLU;
int8_t x325 = INT8_MAX;
int16_t x330 = 5;
int32_t x332 = -62800;
int16_t x335 = INT16_MIN;
int8_t x336 = -1;
int8_t x339 = 11;
int32_t x340 = -1;
int64_t x343 = INT64_MIN;
uint16_t x360 = 19U;
uint64_t x364 = 2862067LLU;
int64_t x366 = 28493LL;
int8_t x382 = INT8_MAX;
int64_t x384 = -1LL;
int32_t t78 = 3;
volatile int8_t x399 = INT8_MIN;
static volatile int32_t t80 = -34;
volatile uint32_t x402 = 79U;
int32_t x407 = INT32_MIN;
uint8_t x418 = 43U;
int64_t x430 = INT64_MAX;
int32_t t85 = 0;
int64_t x434 = -1LL;
int32_t t86 = -1656;
int64_t x441 = -1LL;
uint16_t x447 = UINT16_MAX;
volatile int16_t x448 = 3831;
static int32_t t88 = 369812;
uint16_t x450 = 51U;
int64_t x452 = -119253102186LL;
int8_t x455 = INT8_MIN;
int16_t x457 = -1;
int32_t x461 = -1;
int32_t x464 = INT32_MAX;
volatile int64_t t92 = -414573LL;
int64_t x467 = -1398381796136560LL;
int32_t x472 = INT32_MIN;
volatile uint32_t x479 = 16513392U;
uint32_t x480 = 1U;
uint8_t x485 = 14U;
int64_t x488 = INT64_MAX;
int64_t x490 = INT64_MIN;
static int16_t x500 = INT16_MIN;


void f0(void) {
	int32_t x5 = -1;
	static int8_t x7 = 7;
	uint32_t x8 = 1296U;
	volatile uint32_t t0 = 36798U;

	t0 = ((x5<x6)%(x7-x8));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = 187U;
	int8_t x10 = 0;
	int8_t x11 = INT8_MIN;
	int8_t x12 = -1;
	volatile int32_t t1 = -491948;

	t1 = ((x9<x10)%(x11-x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	int8_t x14 = INT8_MAX;
	int16_t x15 = -1;
	int64_t x16 = INT64_MAX;
	int64_t t2 = -1LL;

	t2 = ((x13<x14)%(x15-x16));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x29 = UINT16_MAX;
	int8_t x30 = INT8_MIN;
	uint8_t x31 = 1U;
	int16_t x32 = INT16_MIN;
	int32_t t3 = 24;

	t3 = ((x29<x30)%(x31-x32));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x33 = -1;
	int8_t x34 = -23;
	int32_t x36 = -1;
	static uint64_t t4 = 705LLU;

	t4 = ((x33<x34)%(x35-x36));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = INT16_MAX;
	int32_t x38 = 1632907;
	int16_t x39 = 0;
	static uint64_t x40 = 1251240LLU;

	t5 = ((x37<x38)%(x39-x40));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x42 = UINT16_MAX;
	volatile int32_t t6 = -1911;

	t6 = ((x41<x42)%(x43-x44));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x45 = INT16_MAX;
	int64_t x48 = 33113998112862LL;
	volatile int64_t t7 = 2LL;

	t7 = ((x45<x46)%(x47-x48));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = 8662774649367LL;
	volatile int16_t x50 = 0;
	int64_t x51 = 3117235391LL;
	int64_t t8 = -621LL;

	t8 = ((x49<x50)%(x51-x52));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = 343U;
	int8_t x55 = INT8_MIN;
	uint16_t x56 = 3044U;
	volatile int32_t t9 = 1557117;

	t9 = ((x53<x54)%(x55-x56));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x58 = -1;
	int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MIN;
	static volatile int32_t t10 = 11011;

	t10 = ((x57<x58)%(x59-x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x61 = -1;
	static volatile uint64_t x62 = 59516599676LLU;
	int32_t x64 = 197966;
	volatile int32_t t11 = 743143;

	t11 = ((x61<x62)%(x63-x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = -1;
	int16_t x75 = INT16_MIN;
	uint64_t x76 = UINT64_MAX;

	t12 = ((x73<x74)%(x75-x76));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = INT32_MIN;
	uint64_t x78 = 33069718747LLU;
	int16_t x80 = INT16_MIN;
	int64_t t13 = 7249594LL;

	t13 = ((x77<x78)%(x79-x80));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x85 = 570524573070570723LL;
	static int8_t x87 = 0;
	volatile uint64_t x88 = 4270LLU;
	volatile uint64_t t14 = 22725434312154LLU;

	t14 = ((x85<x86)%(x87-x88));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = -1;
	static uint8_t x90 = 9U;
	volatile uint16_t x91 = 1U;
	uint64_t x92 = UINT64_MAX;

	t15 = ((x89<x90)%(x91-x92));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x94 = INT16_MIN;
	static int64_t x95 = 11913LL;
	int32_t x96 = INT32_MIN;
	volatile int64_t t16 = -107LL;

	t16 = ((x93<x94)%(x95-x96));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x97 = 0U;
	int64_t x98 = INT64_MIN;
	int8_t x99 = INT8_MIN;
	static int16_t x100 = INT16_MAX;

	t17 = ((x97<x98)%(x99-x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = 0;
	int32_t x106 = -8802;
	uint8_t x107 = 2U;
	int16_t x108 = -11;
	volatile int32_t t18 = -13585660;

	t18 = ((x105<x106)%(x107-x108));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = 0;
	volatile uint16_t x110 = UINT16_MAX;
	static int16_t x111 = INT16_MIN;
	static int16_t x112 = -1;

	t19 = ((x109<x110)%(x111-x112));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x117 = INT16_MAX;
	uint16_t x118 = UINT16_MAX;
	int16_t x119 = 689;
	volatile int16_t x120 = 1606;
	volatile int32_t t20 = -54901;

	t20 = ((x117<x118)%(x119-x120));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x125 = INT64_MAX;
	int32_t x126 = -313;
	int8_t x127 = INT8_MIN;
	int16_t x128 = INT16_MAX;

	t21 = ((x125<x126)%(x127-x128));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = 2;
	int16_t x131 = INT16_MIN;
	static int32_t t22 = 77412;

	t22 = ((x129<x130)%(x131-x132));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x133 = 7035U;
	volatile int8_t x134 = 0;
	int8_t x135 = INT8_MIN;

	t23 = ((x133<x134)%(x135-x136));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = INT64_MAX;
	uint32_t x138 = UINT32_MAX;
	int64_t x140 = 4013422252320518861LL;

	t24 = ((x137<x138)%(x139-x140));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x146 = INT8_MIN;
	volatile uint64_t x148 = UINT64_MAX;
	static volatile uint64_t t25 = 1637961LLU;

	t25 = ((x145<x146)%(x147-x148));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x149 = 24U;
	int64_t x150 = -1LL;
	uint32_t x151 = 1236262478U;
	int16_t x152 = -1;
	static volatile uint32_t t26 = 3403611U;

	t26 = ((x149<x150)%(x151-x152));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x153 = 713334470LLU;
	volatile uint16_t x154 = UINT16_MAX;
	volatile int32_t x156 = -1;

	t27 = ((x153<x154)%(x155-x156));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x157 = INT16_MAX;
	uint16_t x159 = 786U;
	int16_t x160 = 5;
	volatile int32_t t28 = -7592408;

	t28 = ((x157<x158)%(x159-x160));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x161 = UINT32_MAX;
	uint16_t x162 = UINT16_MAX;
	int8_t x163 = INT8_MAX;
	int16_t x164 = -7;
	volatile int32_t t29 = -218;

	t29 = ((x161<x162)%(x163-x164));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x165 = INT8_MIN;
	static uint64_t x166 = 2968508LLU;
	uint16_t x168 = 56U;
	volatile int32_t t30 = 2483659;

	t30 = ((x165<x166)%(x167-x168));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x169 = INT64_MIN;
	int32_t x170 = INT32_MIN;
	static int8_t x171 = -1;
	volatile int32_t t31 = -64896;

	t31 = ((x169<x170)%(x171-x172));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x177 = 1354;
	volatile int16_t x178 = 326;
	static volatile int8_t x179 = INT8_MIN;
	uint32_t x180 = 10527213U;
	static volatile uint32_t t32 = 389254086U;

	t32 = ((x177<x178)%(x179-x180));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x181 = 0;
	int64_t x182 = INT64_MIN;
	uint64_t x183 = 511935291971752LLU;
	volatile int64_t x184 = 5LL;
	uint64_t t33 = 23619LLU;

	t33 = ((x181<x182)%(x183-x184));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = INT64_MIN;
	int8_t x187 = 30;
	static int64_t x188 = -2151LL;

	t34 = ((x185<x186)%(x187-x188));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x189 = UINT32_MAX;
	int64_t x190 = INT64_MIN;
	int64_t t35 = 16432781LL;

	t35 = ((x189<x190)%(x191-x192));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x193 = UINT8_MAX;
	int32_t x194 = INT32_MAX;
	uint8_t x195 = 19U;
	static int16_t x196 = INT16_MIN;
	int32_t t36 = -988913;

	t36 = ((x193<x194)%(x195-x196));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x197 = 55U;
	int32_t x198 = -1;
	static int16_t x199 = -1;
	int64_t x200 = INT64_MAX;
	volatile int64_t t37 = -75LL;

	t37 = ((x197<x198)%(x199-x200));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x202 = INT8_MIN;
	uint8_t x203 = 12U;
	volatile int64_t x204 = INT64_MAX;
	int64_t t38 = 2829050282673471LL;

	t38 = ((x201<x202)%(x203-x204));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x211 = -1;
	uint8_t x212 = 7U;

	t39 = ((x209<x210)%(x211-x212));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x214 = -1LL;
	volatile int16_t x216 = INT16_MAX;

	t40 = ((x213<x214)%(x215-x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x217 = 7U;
	static uint32_t x219 = 2U;
	uint64_t x220 = 406358299LLU;
	uint64_t t41 = 1224711335008LLU;

	t41 = ((x217<x218)%(x219-x220));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x226 = -1;
	static uint8_t x227 = 4U;
	volatile int8_t x228 = 0;
	int32_t t42 = -6;

	t42 = ((x225<x226)%(x227-x228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x231 = 837497661U;
	volatile uint64_t x232 = 1017754LLU;
	uint64_t t43 = 935286616LLU;

	t43 = ((x229<x230)%(x231-x232));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x234 = -1;
	static int16_t x235 = INT16_MIN;
	volatile int32_t t44 = 21261;

	t44 = ((x233<x234)%(x235-x236));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x238 = INT32_MIN;
	uint32_t x239 = UINT32_MAX;
	static int64_t x240 = INT64_MAX;
	volatile int64_t t45 = -126639795757707LL;

	t45 = ((x237<x238)%(x239-x240));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x243 = 0;
	uint8_t x244 = 99U;
	static volatile int32_t t46 = -15;

	t46 = ((x241<x242)%(x243-x244));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x246 = -1;
	uint16_t x247 = 3U;
	static uint32_t x248 = UINT32_MAX;
	volatile uint32_t t47 = 5258365U;

	t47 = ((x245<x246)%(x247-x248));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x250 = 10U;
	uint16_t x251 = UINT16_MAX;
	int8_t x252 = INT8_MIN;

	t48 = ((x249<x250)%(x251-x252));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x254 = INT32_MIN;
	uint16_t x255 = 17U;
	int64_t x256 = INT64_MAX;
	volatile int64_t t49 = 6460LL;

	t49 = ((x253<x254)%(x255-x256));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x257 = -1;
	int64_t x258 = 1LL;
	static uint8_t x259 = 27U;
	uint8_t x260 = 22U;

	t50 = ((x257<x258)%(x259-x260));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MIN;
	volatile uint8_t x263 = 2U;
	volatile int64_t x264 = -1LL;
	int64_t t51 = 1268576405LL;

	t51 = ((x261<x262)%(x263-x264));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x265 = INT64_MIN;
	int8_t x266 = -1;
	static int32_t t52 = -32842;

	t52 = ((x265<x266)%(x267-x268));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x269 = INT16_MAX;
	int64_t x270 = INT64_MIN;
	int64_t x272 = -111344450LL;
	volatile int64_t t53 = 3408869257LL;

	t53 = ((x269<x270)%(x271-x272));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x274 = INT64_MAX;
	int32_t x276 = 207;
	int32_t t54 = 45;

	t54 = ((x273<x274)%(x275-x276));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x277 = INT32_MIN;
	volatile uint32_t x278 = UINT32_MAX;
	static int8_t x279 = INT8_MIN;
	int16_t x280 = -26;
	volatile int32_t t55 = 0;

	t55 = ((x277<x278)%(x279-x280));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x281 = UINT8_MAX;
	int16_t x282 = INT16_MIN;
	volatile int64_t x283 = -736732409611979084LL;
	int16_t x284 = -645;
	static volatile int64_t t56 = -8813452LL;

	t56 = ((x281<x282)%(x283-x284));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x285 = INT32_MAX;
	uint64_t x287 = UINT64_MAX;
	volatile int64_t x288 = -6673537LL;
	uint64_t t57 = 4816802875799867942LLU;

	t57 = ((x285<x286)%(x287-x288));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x293 = -10064;
	int8_t x294 = INT8_MIN;
	int8_t x295 = -1;
	int8_t x296 = INT8_MAX;
	int32_t t58 = -19713320;

	t58 = ((x293<x294)%(x295-x296));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x297 = INT32_MIN;
	volatile uint16_t x300 = 10U;
	int32_t t59 = 124;

	t59 = ((x297<x298)%(x299-x300));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x301 = INT8_MIN;
	uint32_t x302 = 203290059U;
	int16_t x303 = INT16_MIN;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t60 = 6996;

	t60 = ((x301<x302)%(x303-x304));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x309 = 6123478LL;
	int32_t x311 = -197155361;
	volatile int64_t x312 = 55912705LL;
	static volatile int64_t t61 = 1502LL;

	t61 = ((x309<x310)%(x311-x312));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x317 = -1;
	int32_t x318 = -61;
	volatile uint32_t x319 = 1395955U;
	uint8_t x320 = UINT8_MAX;
	static uint32_t t62 = 1147842788U;

	t62 = ((x317<x318)%(x319-x320));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x322 = 2;
	int32_t x323 = INT32_MIN;
	volatile uint64_t t63 = 135363LLU;

	t63 = ((x321<x322)%(x323-x324));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x326 = -1;
	volatile int64_t x327 = -1686756LL;
	int8_t x328 = -1;
	static int64_t t64 = 31636009139028LL;

	t64 = ((x325<x326)%(x327-x328));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x329 = -1;
	volatile uint64_t x331 = 2616013595410306144LLU;
	uint64_t t65 = 295587357776637LLU;

	t65 = ((x329<x330)%(x331-x332));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x333 = 34U;
	int64_t x334 = INT64_MIN;
	static volatile int32_t t66 = 781639;

	t66 = ((x333<x334)%(x335-x336));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x337 = 1993993;
	uint32_t x338 = 7904667U;
	volatile int32_t t67 = 0;

	t67 = ((x337<x338)%(x339-x340));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = -24;
	volatile uint32_t x342 = 3U;
	int64_t x344 = -10340827472464LL;
	volatile int64_t t68 = 134768072864678LL;

	t68 = ((x341<x342)%(x343-x344));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x349 = UINT16_MAX;
	uint64_t x350 = 1254183961417LLU;
	int8_t x351 = -1;
	int8_t x352 = INT8_MAX;
	int32_t t69 = 3254;

	t69 = ((x349<x350)%(x351-x352));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x353 = INT8_MIN;
	volatile int16_t x354 = -1;
	int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;
	volatile int32_t t70 = -50607534;

	t70 = ((x353<x354)%(x355-x356));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x357 = -28238238211854LL;
	volatile int8_t x358 = INT8_MIN;
	uint8_t x359 = 0U;
	int32_t t71 = 1031509730;

	t71 = ((x357<x358)%(x359-x360));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x361 = UINT8_MAX;
	int16_t x362 = INT16_MIN;
	volatile uint64_t x363 = UINT64_MAX;
	volatile uint64_t t72 = 16940574000462479LLU;

	t72 = ((x361<x362)%(x363-x364));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x365 = UINT8_MAX;
	volatile uint32_t x367 = 7U;
	int32_t x368 = INT32_MIN;
	volatile uint32_t t73 = 3721U;

	t73 = ((x365<x366)%(x367-x368));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x369 = INT8_MAX;
	volatile uint32_t x370 = 268662U;
	static uint16_t x371 = 3001U;
	int32_t x372 = -26539;
	volatile int32_t t74 = 175;

	t74 = ((x369<x370)%(x371-x372));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x377 = 3907U;
	volatile uint16_t x378 = 137U;
	int32_t x379 = -14043;
	int16_t x380 = INT16_MAX;
	volatile int32_t t75 = -684;

	t75 = ((x377<x378)%(x379-x380));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x381 = 4406759338652884LL;
	static int16_t x383 = INT16_MIN;
	static int64_t t76 = 45762LL;

	t76 = ((x381<x382)%(x383-x384));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x385 = 59247U;
	static volatile uint8_t x386 = 47U;
	int8_t x387 = 22;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t77 = 112670616LLU;

	t77 = ((x385<x386)%(x387-x388));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MIN;
	int8_t x391 = -11;
	int8_t x392 = INT8_MIN;

	t78 = ((x389<x390)%(x391-x392));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x393 = -15;
	static volatile int8_t x394 = 1;
	volatile uint8_t x395 = 51U;
	volatile uint64_t x396 = 2142080499159565LLU;
	volatile uint64_t t79 = 223739448LLU;

	t79 = ((x393<x394)%(x395-x396));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x397 = UINT16_MAX;
	static int32_t x398 = INT32_MIN;
	int32_t x400 = -3;

	t80 = ((x397<x398)%(x399-x400));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x401 = -1;
	static int64_t x403 = 358645372984528106LL;
	int64_t x404 = INT64_MAX;
	int64_t t81 = 2260939166292161881LL;

	t81 = ((x401<x402)%(x403-x404));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x405 = INT8_MAX;
	int16_t x406 = -1;
	volatile int32_t x408 = -225;
	int32_t t82 = 334502701;

	t82 = ((x405<x406)%(x407-x408));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x409 = -1LL;
	static uint32_t x410 = 115353U;
	volatile uint8_t x411 = 75U;
	int16_t x412 = INT16_MAX;
	volatile int32_t t83 = 1245197;

	t83 = ((x409<x410)%(x411-x412));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x417 = -5009LL;
	static int64_t x419 = -1LL;
	int8_t x420 = INT8_MIN;
	static volatile int64_t t84 = -402113025LL;

	t84 = ((x417<x418)%(x419-x420));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x429 = INT16_MIN;
	static volatile int16_t x431 = 147;
	uint8_t x432 = 100U;

	t85 = ((x429<x430)%(x431-x432));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x433 = INT8_MIN;
	int16_t x435 = INT16_MIN;
	static int8_t x436 = INT8_MAX;

	t86 = ((x433<x434)%(x435-x436));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x442 = 0;
	static int16_t x443 = -1;
	uint8_t x444 = 3U;
	int32_t t87 = -1554377;

	t87 = ((x441<x442)%(x443-x444));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x445 = 2367225LLU;
	int8_t x446 = 60;

	t88 = ((x445<x446)%(x447-x448));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x449 = 3129613225783LLU;
	int8_t x451 = INT8_MAX;
	volatile int64_t t89 = -328993985055986204LL;

	t89 = ((x449<x450)%(x451-x452));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x453 = 61U;
	static uint64_t x454 = 17277031729893LLU;
	volatile int8_t x456 = INT8_MAX;
	volatile int32_t t90 = -115919;

	t90 = ((x453<x454)%(x455-x456));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x458 = -1;
	int16_t x459 = INT16_MIN;
	int8_t x460 = -1;
	volatile int32_t t91 = -98;

	t91 = ((x457<x458)%(x459-x460));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x462 = 4042U;
	int64_t x463 = -1LL;

	t92 = ((x461<x462)%(x463-x464));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x465 = INT64_MIN;
	int32_t x466 = INT32_MAX;
	uint8_t x468 = 14U;
	int64_t t93 = 1LL;

	t93 = ((x465<x466)%(x467-x468));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x469 = -1;
	int32_t x470 = -1;
	uint32_t x471 = UINT32_MAX;
	volatile uint32_t t94 = 16225U;

	t94 = ((x469<x470)%(x471-x472));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x473 = -1;
	static volatile int8_t x474 = -4;
	volatile int8_t x475 = -1;
	int32_t x476 = INT32_MAX;
	int32_t t95 = 367961;

	t95 = ((x473<x474)%(x475-x476));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x477 = INT16_MIN;
	static volatile int16_t x478 = INT16_MIN;
	uint32_t t96 = 452444U;

	t96 = ((x477<x478)%(x479-x480));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x486 = INT32_MAX;
	static int16_t x487 = 0;
	int64_t t97 = -77175LL;

	t97 = ((x485<x486)%(x487-x488));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x489 = 46U;
	static volatile uint32_t x491 = UINT32_MAX;
	uint8_t x492 = 17U;
	static uint32_t t98 = 228U;

	t98 = ((x489<x490)%(x491-x492));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x497 = 10U;
	int32_t x498 = -33202;
	int64_t x499 = INT64_MIN;
	int64_t t99 = -143650737LL;

	t99 = ((x497<x498)%(x499-x500));

	if (t99 != 1LL) { NG(); } else { ; }
	
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


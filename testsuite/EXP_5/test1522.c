#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = 1645594LL;
int64_t t5 = 2210247380297514715LL;
int16_t x48 = -1;
volatile uint8_t x54 = UINT8_MAX;
uint64_t t8 = 1115LLU;
uint64_t t9 = 10301LLU;
int32_t x62 = INT32_MIN;
int64_t x68 = 3136832940222LL;
static volatile uint64_t t14 = 15859230185322LLU;
int8_t x85 = 1;
volatile uint8_t x86 = 0U;
static volatile int64_t x89 = INT64_MIN;
int64_t t16 = -1663371237947LL;
int64_t x100 = 8LL;
volatile uint32_t x105 = 37U;
uint64_t x106 = UINT64_MAX;
static int16_t x107 = INT16_MIN;
uint16_t x108 = 10U;
volatile uint32_t x111 = UINT32_MAX;
static int8_t x117 = INT8_MIN;
volatile uint16_t x124 = 30U;
static volatile int32_t t24 = 24;
int32_t x126 = -264087584;
volatile int16_t x139 = -216;
int8_t x140 = INT8_MIN;
static int32_t t27 = 0;
uint8_t x145 = 0U;
uint32_t x148 = 76U;
uint32_t t28 = 708618U;
int64_t x155 = 2051715496LL;
uint32_t x156 = 2U;
uint16_t x157 = UINT16_MAX;
int32_t t31 = 20;
uint8_t x172 = UINT8_MAX;
volatile uint64_t t35 = 5974547LLU;
uint64_t t36 = 795153861706LLU;
uint16_t x196 = UINT16_MAX;
static volatile uint64_t t38 = 3556138409LLU;
uint64_t x231 = UINT64_MAX;
int8_t x232 = INT8_MAX;
int32_t x241 = INT32_MIN;
int64_t x242 = -1LL;
int8_t x256 = 63;
int8_t x264 = -1;
static int16_t x268 = INT16_MAX;
volatile int16_t x269 = -1;
static int64_t x270 = INT64_MAX;
static volatile uint16_t x272 = UINT16_MAX;
uint16_t x273 = 230U;
int32_t t55 = 34;
int8_t x280 = INT8_MIN;
static uint16_t x296 = UINT16_MAX;
static uint8_t x304 = 100U;
int8_t x311 = 5;
int32_t x329 = INT32_MIN;
uint32_t x330 = UINT32_MAX;
uint32_t x333 = 5698246U;
uint32_t x335 = 36038611U;
int64_t x337 = INT64_MIN;
uint8_t x344 = 1U;
uint32_t x346 = 15055U;
int8_t x354 = 15;
uint8_t x355 = 55U;
int8_t x370 = -1;
int8_t x373 = INT8_MAX;
int32_t x375 = -1;
volatile int64_t t76 = 169290LL;
int16_t x383 = -118;
uint8_t x384 = 3U;
int8_t x387 = INT8_MIN;
volatile uint64_t t79 = 1279909625975654630LLU;
static volatile int64_t t80 = 2568667390LL;
static uint16_t x405 = UINT16_MAX;
static int32_t t86 = 18873799;
int16_t x432 = -1;
volatile int32_t t88 = 10426;
volatile uint16_t x440 = UINT16_MAX;
uint16_t x446 = UINT16_MAX;
uint8_t x450 = UINT8_MAX;
int16_t x456 = -1;
static int8_t x457 = INT8_MAX;
uint8_t x461 = 0U;
int32_t x468 = 7497619;
static int32_t x471 = INT32_MIN;
static int64_t x477 = INT64_MAX;


void f0(void) {
	static int32_t x5 = -1510;
	volatile uint8_t x6 = UINT8_MAX;
	uint8_t x7 = 15U;
	volatile int16_t x8 = INT16_MIN;
	volatile int32_t t0 = -31844207;

	t0 = (x5+((x6<=x7)+x8));

	if (t0 != -34278) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x10 = UINT16_MAX;
	int16_t x11 = -482;
	static int16_t x12 = -1;
	int64_t t1 = -12657LL;

	t1 = (x9+((x10<=x11)+x12));

	if (t1 != 1645593LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 4U;
	volatile int32_t x14 = -1;
	uint8_t x15 = 4U;
	uint64_t x16 = 0LLU;
	static volatile uint64_t t2 = 126778LLU;

	t2 = (x13+((x14<=x15)+x16));

	if (t2 != 5LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = INT64_MIN;
	int8_t x18 = 62;
	static int16_t x19 = -4;
	uint64_t x20 = 257787353057296885LLU;
	uint64_t t3 = 19204343498138LLU;

	t3 = (x17+((x18<=x19)+x20));

	if (t3 != 9481159389912072693LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = 1;
	static int16_t x30 = -1;
	static uint32_t x31 = UINT32_MAX;
	uint32_t x32 = 2U;
	uint32_t t4 = 443U;

	t4 = (x29+((x30<=x31)+x32));

	if (t4 != 4U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x33 = INT32_MAX;
	uint16_t x34 = 35U;
	static int16_t x35 = INT16_MAX;
	volatile int64_t x36 = INT64_MIN;

	t5 = (x33+((x34<=x35)+x36));

	if (t5 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x37 = 707U;
	uint8_t x38 = 1U;
	int32_t x39 = INT32_MIN;
	int64_t x40 = -1LL;
	int64_t t6 = -6139250683LL;

	t6 = (x37+((x38<=x39)+x40));

	if (t6 != 706LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x45 = 39;
	uint16_t x46 = 1U;
	volatile int8_t x47 = INT8_MIN;
	int32_t t7 = 43645;

	t7 = (x45+((x46<=x47)+x48));

	if (t7 != 38) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = 3878199265681376514LLU;
	int32_t x55 = INT32_MAX;
	volatile uint32_t x56 = 35U;

	t8 = (x53+((x54<=x55)+x56));

	if (t8 != 3878199265681376550LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x57 = 94161420905LLU;
	static uint64_t x58 = 53658889805333LLU;
	int16_t x59 = 537;
	int16_t x60 = INT16_MIN;

	t9 = (x57+((x58<=x59)+x60));

	if (t9 != 94161388137LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x61 = 23U;
	volatile int32_t x63 = 10;
	uint64_t x64 = 1179LLU;
	volatile uint64_t t10 = 13925LLU;

	t10 = (x61+((x62<=x63)+x64));

	if (t10 != 1203LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = 39LLU;
	int16_t x66 = INT16_MIN;
	uint8_t x67 = 46U;
	volatile uint64_t t11 = 1297LLU;

	t11 = (x65+((x66<=x67)+x68));

	if (t11 != 3136832940262LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x69 = INT8_MAX;
	int64_t x70 = -1LL;
	volatile uint32_t x71 = 1742311088U;
	volatile uint32_t x72 = 5U;
	static volatile uint32_t t12 = 48299263U;

	t12 = (x69+((x70<=x71)+x72));

	if (t12 != 133U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = -1;
	volatile int64_t x74 = INT64_MIN;
	uint8_t x75 = 4U;
	volatile uint64_t x76 = 162047LLU;
	uint64_t t13 = 421417748LLU;

	t13 = (x73+((x74<=x75)+x76));

	if (t13 != 162047LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x77 = INT8_MIN;
	uint32_t x78 = 409U;
	volatile uint16_t x79 = 2U;
	uint64_t x80 = 696731479LLU;

	t14 = (x77+((x78<=x79)+x80));

	if (t14 != 696731351LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x87 = 257635923U;
	int32_t x88 = INT32_MIN;
	static int32_t t15 = 1781925;

	t15 = (x85+((x86<=x87)+x88));

	if (t15 != -2147483646) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x90 = -1;
	int64_t x91 = INT64_MIN;
	uint8_t x92 = 122U;

	t16 = (x89+((x90<=x91)+x92));

	if (t16 != -9223372036854775686LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x93 = 1299;
	uint64_t x94 = UINT64_MAX;
	volatile int32_t x95 = INT32_MIN;
	int8_t x96 = 0;
	volatile int32_t t17 = 103;

	t17 = (x93+((x94<=x95)+x96));

	if (t17 != 1299) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MIN;
	static uint32_t x98 = 226184U;
	uint64_t x99 = 10540054002LLU;
	static volatile int64_t t18 = -16589LL;

	t18 = (x97+((x98<=x99)+x100));

	if (t18 != -119LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x101 = -3286;
	static int32_t x102 = 26928;
	volatile int64_t x103 = -145199LL;
	uint8_t x104 = UINT8_MAX;
	static int32_t t19 = 268304055;

	t19 = (x101+((x102<=x103)+x104));

	if (t19 != -3031) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t t20 = 58U;

	t20 = (x105+((x106<=x107)+x108));

	if (t20 != 47U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x109 = UINT32_MAX;
	uint32_t x110 = 5783U;
	static int64_t x112 = 511033906247564191LL;
	volatile int64_t t21 = 18384738717748642LL;

	t21 = (x109+((x110<=x111)+x112));

	if (t21 != 511033910542531487LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = INT8_MIN;
	int8_t x114 = 61;
	int64_t x115 = INT64_MIN;
	static int16_t x116 = -1;
	volatile int32_t t22 = -3396;

	t22 = (x113+((x114<=x115)+x116));

	if (t22 != -129) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x118 = INT32_MAX;
	uint64_t x119 = 8443LLU;
	int8_t x120 = INT8_MIN;
	volatile int32_t t23 = 40669767;

	t23 = (x117+((x118<=x119)+x120));

	if (t23 != -256) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x121 = UINT16_MAX;
	uint8_t x122 = UINT8_MAX;
	uint8_t x123 = 12U;

	t24 = (x121+((x122<=x123)+x124));

	if (t24 != 65565) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x125 = -1;
	int32_t x127 = -26346485;
	volatile int64_t x128 = -31298LL;
	int64_t t25 = 502LL;

	t25 = (x125+((x126<=x127)+x128));

	if (t25 != -31298LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = -1;
	int8_t x138 = -1;
	volatile int32_t t26 = -313111317;

	t26 = (x137+((x138<=x139)+x140));

	if (t26 != -129) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x141 = INT8_MIN;
	int64_t x142 = INT64_MAX;
	static int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MAX;

	t27 = (x141+((x142<=x143)+x144));

	if (t27 != 32639) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x146 = INT64_MIN;
	int32_t x147 = -550283;

	t28 = (x145+((x146<=x147)+x148));

	if (t28 != 77U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x149 = 437237705LL;
	int16_t x150 = 3;
	int32_t x151 = INT32_MIN;
	static uint64_t x152 = UINT64_MAX;
	volatile uint64_t t29 = 3502035107797755LLU;

	t29 = (x149+((x150<=x151)+x152));

	if (t29 != 437237704LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = -1;
	int16_t x154 = -27;
	volatile uint32_t t30 = 10506250U;

	t30 = (x153+((x154<=x155)+x156));

	if (t30 != 2U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x158 = -1;
	static int8_t x159 = INT8_MAX;
	int8_t x160 = -1;

	t31 = (x157+((x158<=x159)+x160));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x165 = INT32_MIN;
	static volatile uint8_t x166 = 9U;
	int16_t x167 = INT16_MIN;
	uint16_t x168 = 42U;
	volatile int32_t t32 = -3;

	t32 = (x165+((x166<=x167)+x168));

	if (t32 != -2147483606) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x169 = -1;
	uint8_t x170 = UINT8_MAX;
	int16_t x171 = INT16_MAX;
	volatile int32_t t33 = -81077106;

	t33 = (x169+((x170<=x171)+x172));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x173 = 450U;
	volatile int8_t x174 = 1;
	static int8_t x175 = INT8_MAX;
	uint16_t x176 = 13584U;
	uint32_t t34 = 92061987U;

	t34 = (x173+((x174<=x175)+x176));

	if (t34 != 14035U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x177 = 2675;
	int32_t x178 = 481558;
	uint32_t x179 = 3U;
	static uint64_t x180 = 15359LLU;

	t35 = (x177+((x178<=x179)+x180));

	if (t35 != 18034LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x181 = INT64_MIN;
	volatile int16_t x182 = INT16_MIN;
	volatile uint16_t x183 = UINT16_MAX;
	uint64_t x184 = 21917429LLU;

	t36 = (x181+((x182<=x183)+x184));

	if (t36 != 9223372036876693238LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x185 = UINT16_MAX;
	int64_t x186 = INT64_MIN;
	volatile int16_t x187 = INT16_MIN;
	volatile int8_t x188 = INT8_MIN;
	static volatile int32_t t37 = 1113105;

	t37 = (x185+((x186<=x187)+x188));

	if (t37 != 65408) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x193 = 26844399165LLU;
	static uint8_t x194 = UINT8_MAX;
	uint64_t x195 = 190LLU;

	t38 = (x193+((x194<=x195)+x196));

	if (t38 != 26844464700LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = INT16_MIN;
	volatile int64_t x202 = -1LL;
	uint16_t x203 = 583U;
	static int8_t x204 = INT8_MIN;
	volatile int32_t t39 = -487801;

	t39 = (x201+((x202<=x203)+x204));

	if (t39 != -32895) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x209 = -14352012LL;
	static int32_t x210 = INT32_MAX;
	int32_t x211 = INT32_MIN;
	int64_t x212 = -260140095LL;
	volatile int64_t t40 = -3643779LL;

	t40 = (x209+((x210<=x211)+x212));

	if (t40 != -274492107LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x213 = -1;
	int16_t x214 = -10184;
	volatile int8_t x215 = 0;
	static volatile uint64_t x216 = 1782089240LLU;
	uint64_t t41 = 52515652281LLU;

	t41 = (x213+((x214<=x215)+x216));

	if (t41 != 1782089240LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x217 = 301611;
	static int16_t x218 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;
	int32_t t42 = -2943;

	t42 = (x217+((x218<=x219)+x220));

	if (t42 != -2147182036) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x221 = -1;
	int8_t x222 = 38;
	int16_t x223 = -1;
	int8_t x224 = INT8_MIN;
	int32_t t43 = 4744967;

	t43 = (x221+((x222<=x223)+x224));

	if (t43 != -129) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x229 = INT32_MIN;
	volatile uint16_t x230 = 1U;
	int32_t t44 = 460419;

	t44 = (x229+((x230<=x231)+x232));

	if (t44 != -2147483520) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x233 = UINT8_MAX;
	uint8_t x234 = 30U;
	int16_t x235 = INT16_MIN;
	static uint8_t x236 = 9U;
	int32_t t45 = -43599;

	t45 = (x233+((x234<=x235)+x236));

	if (t45 != 264) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x237 = 0;
	int8_t x238 = INT8_MIN;
	int8_t x239 = 30;
	volatile uint32_t x240 = UINT32_MAX;
	volatile uint32_t t46 = 14432U;

	t46 = (x237+((x238<=x239)+x240));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x243 = INT16_MIN;
	volatile int32_t x244 = INT32_MAX;
	volatile int32_t t47 = -490465;

	t47 = (x241+((x242<=x243)+x244));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x245 = -5;
	uint64_t x246 = 3956LLU;
	static volatile int64_t x247 = INT64_MAX;
	int16_t x248 = INT16_MAX;
	int32_t t48 = -465918446;

	t48 = (x245+((x246<=x247)+x248));

	if (t48 != 32763) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x249 = INT64_MAX;
	static int32_t x250 = 28074;
	int8_t x251 = -1;
	static int64_t x252 = INT64_MIN;
	int64_t t49 = -1716729LL;

	t49 = (x249+((x250<=x251)+x252));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x253 = 45;
	static int32_t x254 = INT32_MAX;
	uint16_t x255 = 1044U;
	volatile int32_t t50 = 44;

	t50 = (x253+((x254<=x255)+x256));

	if (t50 != 108) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x257 = -1;
	int8_t x258 = INT8_MIN;
	uint8_t x259 = 0U;
	volatile int16_t x260 = INT16_MAX;
	volatile int32_t t51 = 1;

	t51 = (x257+((x258<=x259)+x260));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x261 = -13;
	uint64_t x262 = 63LLU;
	static volatile int16_t x263 = -1;
	int32_t t52 = 4998872;

	t52 = (x261+((x262<=x263)+x264));

	if (t52 != -13) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x265 = 1U;
	volatile uint8_t x266 = 0U;
	volatile uint16_t x267 = UINT16_MAX;
	volatile int32_t t53 = -702;

	t53 = (x265+((x266<=x267)+x268));

	if (t53 != 32769) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x271 = INT32_MAX;
	volatile int32_t t54 = -60314;

	t54 = (x269+((x270<=x271)+x272));

	if (t54 != 65534) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x274 = INT64_MIN;
	static int8_t x275 = INT8_MIN;
	int32_t x276 = -11;

	t55 = (x273+((x274<=x275)+x276));

	if (t55 != 220) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x277 = -190;
	uint16_t x278 = 8745U;
	static volatile uint16_t x279 = UINT16_MAX;
	int32_t t56 = -91214879;

	t56 = (x277+((x278<=x279)+x280));

	if (t56 != -317) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x285 = 260LL;
	static int32_t x286 = -1;
	uint32_t x287 = 368776U;
	int16_t x288 = 1;
	int64_t t57 = 516423LL;

	t57 = (x285+((x286<=x287)+x288));

	if (t57 != 261LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x289 = UINT8_MAX;
	int8_t x290 = INT8_MIN;
	int32_t x291 = 8057;
	volatile int16_t x292 = 3653;
	volatile int32_t t58 = 28779;

	t58 = (x289+((x290<=x291)+x292));

	if (t58 != 3909) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x293 = 5;
	int16_t x294 = -430;
	int16_t x295 = -1;
	volatile int32_t t59 = -397550;

	t59 = (x293+((x294<=x295)+x296));

	if (t59 != 65541) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x297 = -8;
	uint16_t x298 = 11532U;
	int64_t x299 = INT64_MIN;
	static volatile int16_t x300 = -1;
	static volatile int32_t t60 = -53;

	t60 = (x297+((x298<=x299)+x300));

	if (t60 != -9) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x301 = INT16_MIN;
	volatile int16_t x302 = INT16_MAX;
	int8_t x303 = INT8_MIN;
	int32_t t61 = 45167410;

	t61 = (x301+((x302<=x303)+x304));

	if (t61 != -32668) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x309 = 369;
	int32_t x310 = -105;
	int64_t x312 = -4144662LL;
	static int64_t t62 = -4605LL;

	t62 = (x309+((x310<=x311)+x312));

	if (t62 != -4144292LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x313 = -15410761;
	uint16_t x314 = UINT16_MAX;
	int8_t x315 = 8;
	int32_t x316 = 1337;
	static volatile int32_t t63 = 4643;

	t63 = (x313+((x314<=x315)+x316));

	if (t63 != -15409424) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x317 = 14912418LLU;
	uint64_t x318 = UINT64_MAX;
	int32_t x319 = -1;
	int32_t x320 = -1;
	volatile uint64_t t64 = 1925594735LLU;

	t64 = (x317+((x318<=x319)+x320));

	if (t64 != 14912418LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x321 = 267304311U;
	int32_t x322 = -1;
	uint32_t x323 = 3045443U;
	volatile int64_t x324 = 56801383LL;
	volatile int64_t t65 = 14LL;

	t65 = (x321+((x322<=x323)+x324));

	if (t65 != 324105694LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x331 = UINT64_MAX;
	uint64_t x332 = UINT64_MAX;
	volatile uint64_t t66 = 107770318LLU;

	t66 = (x329+((x330<=x331)+x332));

	if (t66 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x334 = INT8_MIN;
	static uint8_t x336 = 1U;
	volatile uint32_t t67 = 6U;

	t67 = (x333+((x334<=x335)+x336));

	if (t67 != 5698247U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x338 = INT32_MIN;
	int64_t x339 = -16LL;
	volatile uint8_t x340 = 40U;
	int64_t t68 = -1635724997618936982LL;

	t68 = (x337+((x338<=x339)+x340));

	if (t68 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x341 = INT16_MAX;
	static uint8_t x342 = 9U;
	uint16_t x343 = 6360U;
	static volatile int32_t t69 = 1031;

	t69 = (x341+((x342<=x343)+x344));

	if (t69 != 32769) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x345 = -1;
	int32_t x347 = INT32_MIN;
	volatile int16_t x348 = INT16_MAX;
	volatile int32_t t70 = 237;

	t70 = (x345+((x346<=x347)+x348));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x349 = 0;
	volatile int32_t x350 = INT32_MAX;
	int8_t x351 = INT8_MIN;
	int32_t x352 = 220902695;
	static volatile int32_t t71 = -465442;

	t71 = (x349+((x350<=x351)+x352));

	if (t71 != 220902695) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x353 = -1;
	uint8_t x356 = 84U;
	volatile int32_t t72 = -1013;

	t72 = (x353+((x354<=x355)+x356));

	if (t72 != 84) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x357 = 1306U;
	uint8_t x358 = 8U;
	int16_t x359 = -1;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t73 = 21826635;

	t73 = (x357+((x358<=x359)+x360));

	if (t73 != 1178) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x365 = INT32_MIN;
	volatile uint8_t x366 = 2U;
	int64_t x367 = INT64_MIN;
	int64_t x368 = -1LL;
	volatile int64_t t74 = -214359304436LL;

	t74 = (x365+((x366<=x367)+x368));

	if (t74 != -2147483649LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x369 = -4708135997034LL;
	int32_t x371 = INT32_MAX;
	uint16_t x372 = 163U;
	int64_t t75 = 705514677312241LL;

	t75 = (x369+((x370<=x371)+x372));

	if (t75 != -4708135996870LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x374 = -1;
	int64_t x376 = 10LL;

	t76 = (x373+((x374<=x375)+x376));

	if (t76 != 138LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x377 = INT16_MAX;
	uint8_t x378 = 22U;
	int32_t x379 = INT32_MAX;
	int32_t x380 = -1;
	int32_t t77 = -748;

	t77 = (x377+((x378<=x379)+x380));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x381 = UINT16_MAX;
	volatile int16_t x382 = -1;
	static int32_t t78 = 12;

	t78 = (x381+((x382<=x383)+x384));

	if (t78 != 65538) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x385 = 4637398840LLU;
	uint16_t x386 = 6U;
	uint16_t x388 = UINT16_MAX;

	t79 = (x385+((x386<=x387)+x388));

	if (t79 != 4637464375LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x393 = 65U;
	int32_t x394 = 460;
	volatile int64_t x395 = INT64_MIN;
	int64_t x396 = -834328253LL;

	t80 = (x393+((x394<=x395)+x396));

	if (t80 != -834328188LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = INT8_MAX;
	static uint8_t x399 = UINT8_MAX;
	int32_t x400 = 1;
	volatile int32_t t81 = 12717430;

	t81 = (x397+((x398<=x399)+x400));

	if (t81 != -126) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x401 = -3;
	int8_t x402 = 2;
	volatile int16_t x403 = INT16_MIN;
	int64_t x404 = 1669660104480LL;
	int64_t t82 = -338651LL;

	t82 = (x401+((x402<=x403)+x404));

	if (t82 != 1669660104477LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x406 = 1LLU;
	static int16_t x407 = -579;
	static uint64_t x408 = 69392082294LLU;
	uint64_t t83 = 10LLU;

	t83 = (x405+((x406<=x407)+x408));

	if (t83 != 69392147830LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x413 = 501136084LLU;
	static uint32_t x414 = 18698922U;
	static int64_t x415 = INT64_MIN;
	volatile uint32_t x416 = UINT32_MAX;
	volatile uint64_t t84 = 154552501763LLU;

	t84 = (x413+((x414<=x415)+x416));

	if (t84 != 4796103379LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x421 = 10U;
	uint32_t x422 = 9009594U;
	uint8_t x423 = UINT8_MAX;
	int16_t x424 = 4;
	volatile int32_t t85 = 2001968;

	t85 = (x421+((x422<=x423)+x424));

	if (t85 != 14) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x425 = INT16_MIN;
	volatile int64_t x426 = -1LL;
	uint16_t x427 = UINT16_MAX;
	static volatile int16_t x428 = INT16_MIN;

	t86 = (x425+((x426<=x427)+x428));

	if (t86 != -65535) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x429 = INT8_MAX;
	volatile int16_t x430 = -1;
	uint32_t x431 = 5U;
	volatile int32_t t87 = 202510046;

	t87 = (x429+((x430<=x431)+x432));

	if (t87 != 126) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x433 = 32U;
	volatile int8_t x434 = INT8_MIN;
	uint8_t x435 = 18U;
	int32_t x436 = 3409;

	t88 = (x433+((x434<=x435)+x436));

	if (t88 != 3442) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x437 = 84U;
	uint8_t x438 = 15U;
	uint32_t x439 = 168356184U;
	int32_t t89 = 1;

	t89 = (x437+((x438<=x439)+x440));

	if (t89 != 65620) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x441 = UINT8_MAX;
	uint8_t x442 = 63U;
	int32_t x443 = INT32_MAX;
	static uint32_t x444 = 20U;
	volatile uint32_t t90 = 47894U;

	t90 = (x441+((x442<=x443)+x444));

	if (t90 != 276U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x445 = INT32_MAX;
	uint16_t x447 = 104U;
	static volatile uint64_t x448 = UINT64_MAX;
	volatile uint64_t t91 = 3538269366369LLU;

	t91 = (x445+((x446<=x447)+x448));

	if (t91 != 2147483646LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x449 = UINT64_MAX;
	int64_t x451 = INT64_MIN;
	int64_t x452 = -100894LL;
	uint64_t t92 = 35553676962LLU;

	t92 = (x449+((x450<=x451)+x452));

	if (t92 != 18446744073709450721LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x453 = 1U;
	int64_t x454 = INT64_MIN;
	uint8_t x455 = 2U;
	volatile int32_t t93 = -213384;

	t93 = (x453+((x454<=x455)+x456));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x458 = INT16_MAX;
	static int16_t x459 = INT16_MIN;
	uint8_t x460 = UINT8_MAX;
	int32_t t94 = -978250;

	t94 = (x457+((x458<=x459)+x460));

	if (t94 != 382) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x462 = INT8_MIN;
	volatile int32_t x463 = -1;
	int16_t x464 = INT16_MIN;
	volatile int32_t t95 = 175299;

	t95 = (x461+((x462<=x463)+x464));

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x465 = UINT32_MAX;
	int32_t x466 = -375002;
	static int8_t x467 = 21;
	uint32_t t96 = 6974163U;

	t96 = (x465+((x466<=x467)+x468));

	if (t96 != 7497619U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x469 = INT64_MIN;
	int64_t x470 = -1LL;
	uint16_t x472 = 2U;
	int64_t t97 = 4LL;

	t97 = (x469+((x470<=x471)+x472));

	if (t97 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x473 = -1835;
	uint16_t x474 = 400U;
	int16_t x475 = INT16_MIN;
	static volatile int16_t x476 = 56;
	volatile int32_t t98 = -187;

	t98 = (x473+((x474<=x475)+x476));

	if (t98 != -1779) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x478 = INT8_MAX;
	static volatile uint64_t x479 = UINT64_MAX;
	int32_t x480 = INT32_MIN;
	volatile int64_t t99 = 407076LL;

	t99 = (x477+((x478<=x479)+x480));

	if (t99 != 9223372034707292160LL) { NG(); } else { ; }
	
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


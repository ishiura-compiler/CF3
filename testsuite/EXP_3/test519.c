#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = INT16_MIN;
int32_t t0 = -17917035;
static volatile uint64_t x9 = UINT64_MAX;
volatile int32_t x10 = 117948;
int16_t x15 = 0;
int16_t x17 = -1;
volatile int64_t t4 = 38144342256LL;
static int64_t x24 = INT64_MAX;
static volatile int8_t x26 = INT8_MIN;
static int8_t x27 = -8;
volatile int16_t x33 = -1;
volatile uint64_t t9 = 390263123812310LLU;
volatile int16_t x42 = INT16_MIN;
volatile int16_t x44 = 1;
int8_t x58 = INT8_MIN;
static int16_t x64 = 1924;
int64_t x66 = -17LL;
static int64_t t15 = -3LL;
int64_t x69 = 710LL;
uint32_t x75 = UINT32_MAX;
int8_t x77 = INT8_MAX;
volatile int32_t x79 = -572577703;
static int32_t x83 = 3612;
int64_t x84 = -1LL;
volatile int8_t x89 = INT8_MAX;
int32_t x108 = INT32_MIN;
int8_t x121 = INT8_MIN;
static volatile int8_t x123 = -1;
uint16_t x124 = 27U;
int32_t x132 = 118749337;
volatile int32_t t27 = 13417;
int64_t x139 = INT64_MIN;
int64_t x161 = -1LL;
volatile int32_t x163 = -1;
int16_t x168 = 209;
int16_t x178 = 1490;
int32_t x183 = INT32_MIN;
volatile uint16_t x208 = 236U;
volatile uint32_t t41 = 6879U;
uint64_t x217 = 178204616LLU;
int64_t x218 = INT64_MAX;
static uint32_t x222 = 49447514U;
uint32_t x224 = 7U;
volatile uint32_t x227 = 8U;
int32_t x237 = -17;
uint64_t t47 = 3348970LLU;
uint64_t t48 = 590LLU;
int64_t x248 = -1LL;
volatile int64_t t50 = -478915LL;
uint64_t t51 = UINT64_MAX;
static uint16_t x265 = UINT16_MAX;
static uint64_t x266 = UINT64_MAX;
uint64_t t52 = 2020486377LLU;
int8_t x272 = -1;
static uint64_t x276 = 65294675183LLU;
volatile uint64_t t54 = 5470LLU;
int32_t x286 = INT32_MIN;
static uint64_t x287 = 0LLU;
int64_t x288 = INT64_MIN;
volatile uint64_t t57 = 222675LLU;
volatile uint32_t t58 = 1969U;
static int64_t x295 = 194075LL;
volatile int64_t t59 = -70994785LL;
volatile uint32_t x297 = 3U;
int8_t x306 = 1;
int16_t x310 = -1;
static int32_t x313 = -1;
static int8_t x315 = INT8_MIN;
int16_t x321 = INT16_MIN;
static volatile uint16_t x324 = 7U;
uint64_t t67 = 23632666785346LLU;
uint32_t x352 = 7U;
int8_t x354 = 1;
volatile int64_t t73 = -112LL;
volatile uint32_t x372 = UINT32_MAX;
uint8_t x381 = 0U;
volatile int64_t x386 = -609548747550LL;
uint64_t x387 = 355150007370839LLU;
volatile int16_t x394 = -1;
int16_t x395 = -5176;
int64_t t80 = 16962424774LL;
int64_t x401 = INT64_MIN;
int8_t x420 = -1;
int64_t t87 = -883493LL;
static uint16_t x427 = UINT16_MAX;
static uint16_t x430 = 1U;
int64_t x431 = INT64_MAX;
volatile int64_t x433 = INT64_MAX;
static int64_t t90 = INT64_MAX;
uint16_t x446 = 1U;
int8_t x451 = 60;
int32_t t94 = -20174;
uint32_t x465 = 3100841U;
int8_t x471 = -13;
volatile int32_t t99 = -41;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int16_t x3 = INT16_MIN;
	int32_t x4 = -478157033;

	t0 = ((x1+x2)|(x3/x4));

	if (t0 != -32896) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	int8_t x6 = -6;
	int32_t x7 = INT32_MIN;
	uint32_t x8 = UINT32_MAX;
	static volatile uint32_t t1 = 57217U;

	t1 = ((x5+x6)|(x7/x8));

	if (t1 != 4294967162U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = INT32_MIN;
	uint32_t x12 = UINT32_MAX;
	static uint64_t t2 = 22LLU;

	t2 = ((x9+x10)|(x11/x12));

	if (t2 != 117947LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = 20900LL;
	static int32_t x16 = 132362863;
	int64_t t3 = -139LL;

	t3 = ((x13+x14)|(x15/x16));

	if (t3 != -9223372036854754908LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	int16_t x19 = INT16_MIN;
	volatile int64_t x20 = INT64_MIN;

	t4 = ((x17+x18)|(x19/x20));

	if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	static int32_t x22 = -4789479;
	int8_t x23 = INT8_MIN;
	volatile int64_t t5 = 5701507LL;

	t5 = ((x21+x22)|(x23/x24));

	if (t5 != -4789224LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 4319;
	uint8_t x28 = 2U;
	volatile int32_t t6 = -24;

	t6 = ((x25+x26)|(x27/x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = UINT16_MAX;
	int8_t x30 = INT8_MAX;
	uint64_t x31 = UINT64_MAX;
	static int16_t x32 = 708;
	uint64_t t7 = 19215526578LLU;

	t7 = ((x29+x30)|(x31/x32));

	if (t7 != 26054723267951358LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x34 = INT8_MIN;
	volatile uint8_t x35 = 37U;
	int64_t x36 = INT64_MIN;
	volatile int64_t t8 = 786002LL;

	t8 = ((x33+x34)|(x35/x36));

	if (t8 != -129LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -134;
	int16_t x38 = 1;
	uint64_t x39 = UINT64_MAX;
	uint64_t x40 = 14333LLU;

	t9 = ((x37+x38)|(x39/x40));

	if (t9 != 18446744073709551483LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 6U;
	static int8_t x43 = -2;
	int32_t t10 = 62;

	t10 = ((x41+x42)|(x43/x44));

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	static int32_t x46 = -1;
	int8_t x47 = -5;
	int64_t x48 = -2LL;
	static int64_t t11 = 213858915329LL;

	t11 = ((x45+x46)|(x47/x48));

	if (t11 != -32769LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MAX;
	int16_t x51 = -583;
	int64_t x52 = -1LL;
	volatile uint64_t t12 = 356LLU;

	t12 = ((x49+x50)|(x51/x52));

	if (t12 != 639LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1;
	static int64_t x59 = INT64_MIN;
	static int16_t x60 = INT16_MIN;
	static volatile int64_t t13 = 522560586LL;

	t13 = ((x57+x58)|(x59/x60));

	if (t13 != -129LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = INT64_MAX;
	int8_t x62 = INT8_MIN;
	static int32_t x63 = INT32_MIN;
	volatile int64_t t14 = 1LL;

	t14 = ((x61+x62)|(x63/x64));

	if (t14 != -129LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 21;
	int16_t x67 = INT16_MIN;
	int8_t x68 = 14;

	t15 = ((x65+x66)|(x67/x68));

	if (t15 != -2340LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x70 = INT32_MIN;
	int64_t x71 = -32689698635614881LL;
	volatile int64_t x72 = INT64_MIN;
	volatile int64_t t16 = -3001353498549LL;

	t16 = ((x69+x70)|(x71/x72));

	if (t16 != -2147482938LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = INT16_MAX;
	uint64_t x74 = UINT64_MAX;
	uint8_t x76 = UINT8_MAX;
	static uint64_t t17 = 1619668957392990933LLU;

	t17 = ((x73+x74)|(x75/x76));

	if (t17 != 16875519LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x78 = UINT8_MAX;
	uint8_t x80 = 1U;
	volatile int32_t t18 = -48958739;

	t18 = ((x77+x78)|(x79/x80));

	if (t18 != -572577409) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = INT8_MAX;
	int64_t x82 = 224269851250LL;
	int64_t t19 = 73080163447LL;

	t19 = ((x81+x82)|(x83/x84));

	if (t19 != -1035LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -23814563746421218LL;
	int8_t x86 = -1;
	uint32_t x87 = 76468U;
	static int8_t x88 = -1;
	volatile int64_t t20 = -394079LL;

	t20 = ((x85+x86)|(x87/x88));

	if (t20 != -23814563746421219LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x90 = 39004269283480LLU;
	volatile int32_t x91 = -21352;
	volatile uint64_t x92 = UINT64_MAX;
	static uint64_t t21 = 27855716LLU;

	t21 = ((x89+x90)|(x91/x92));

	if (t21 != 39004269283607LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -1;
	volatile uint8_t x94 = UINT8_MAX;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = 5;
	uint32_t t22 = 1275250U;

	t22 = ((x93+x94)|(x95/x96));

	if (t22 != 858993663U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = 3;
	uint16_t x106 = 3747U;
	int8_t x107 = INT8_MIN;
	volatile int32_t t23 = 2486;

	t23 = ((x105+x106)|(x107/x108));

	if (t23 != 3750) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x109 = 475U;
	int64_t x110 = 241264116185440LL;
	int64_t x111 = -2449523015124LL;
	int16_t x112 = -1;
	volatile int64_t t24 = -3LL;

	t24 = ((x109+x110)|(x111/x112));

	if (t24 != 241342801510399LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = -1;
	int16_t x118 = 2381;
	int32_t x119 = -1;
	uint32_t x120 = 916988U;
	uint32_t t25 = 380044U;

	t25 = ((x117+x118)|(x119/x120));

	if (t25 != 6991U) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x122 = INT16_MIN;
	int32_t t26 = 837;

	t26 = ((x121+x122)|(x123/x124));

	if (t26 != -32896) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = -1;
	int16_t x130 = INT16_MIN;
	static uint16_t x131 = UINT16_MAX;

	t27 = ((x129+x130)|(x131/x132));

	if (t27 != -32769) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = -1LL;
	static uint16_t x138 = 70U;
	static int32_t x140 = 14692;
	int64_t t28 = -247310691206746LL;

	t28 = ((x137+x138)|(x139/x140));

	if (t28 != -627781924642987LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MIN;
	uint16_t x146 = UINT16_MAX;
	int32_t x147 = INT32_MIN;
	int16_t x148 = 8;
	int32_t t29 = 19038;

	t29 = ((x145+x146)|(x147/x148));

	if (t29 != -268370049) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x157 = UINT32_MAX;
	static uint16_t x158 = UINT16_MAX;
	int32_t x159 = INT32_MIN;
	volatile uint64_t x160 = UINT64_MAX;
	static uint64_t t30 = 3871046546108891LLU;

	t30 = ((x157+x158)|(x159/x160));

	if (t30 != 65534LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x162 = -1;
	static int64_t x164 = -8408987165487LL;
	int64_t t31 = -30278657LL;

	t31 = ((x161+x162)|(x163/x164));

	if (t31 != -2LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x165 = INT32_MAX;
	uint32_t x166 = UINT32_MAX;
	int8_t x167 = INT8_MIN;
	static uint32_t t32 = 9641U;

	t32 = ((x165+x166)|(x167/x168));

	if (t32 != 2147483646U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x169 = 160;
	int16_t x170 = -1;
	int32_t x171 = INT32_MIN;
	volatile int64_t x172 = INT64_MIN;
	static int64_t t33 = 27870214813407808LL;

	t33 = ((x169+x170)|(x171/x172));

	if (t33 != 159LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x177 = INT16_MIN;
	uint64_t x179 = 432710008213LLU;
	int32_t x180 = 182667503;
	uint64_t t34 = 2963541LLU;

	t34 = ((x177+x178)|(x179/x180));

	if (t34 != 18446744073709522386LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x181 = INT16_MIN;
	uint64_t x182 = 36309249346LLU;
	static volatile uint8_t x184 = 1U;
	static volatile uint64_t t35 = 45930LLU;

	t35 = ((x181+x182)|(x183/x184));

	if (t35 != 18446744073511546178LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x185 = 1413308601975218LLU;
	int32_t x186 = 1;
	static int32_t x187 = -16248;
	int64_t x188 = INT64_MAX;
	volatile uint64_t t36 = 54003LLU;

	t36 = ((x185+x186)|(x187/x188));

	if (t36 != 1413308601975219LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x189 = UINT64_MAX;
	static uint8_t x190 = 6U;
	int16_t x191 = INT16_MIN;
	uint32_t x192 = UINT32_MAX;
	uint64_t t37 = 2993565743LLU;

	t37 = ((x189+x190)|(x191/x192));

	if (t37 != 5LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = -1;
	int16_t x194 = INT16_MIN;
	int16_t x195 = 0;
	int64_t x196 = INT64_MIN;
	int64_t t38 = -694606049LL;

	t38 = ((x193+x194)|(x195/x196));

	if (t38 != -32769LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = -1;
	int8_t x202 = -1;
	int8_t x203 = INT8_MAX;
	int16_t x204 = INT16_MIN;
	volatile int32_t t39 = 6;

	t39 = ((x201+x202)|(x203/x204));

	if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x205 = 1104U;
	int16_t x206 = INT16_MIN;
	uint8_t x207 = 7U;
	static volatile int32_t t40 = 132789906;

	t40 = ((x205+x206)|(x207/x208));

	if (t40 != -31664) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x209 = -1;
	int32_t x210 = INT32_MAX;
	volatile int8_t x211 = -1;
	static volatile uint32_t x212 = 93217427U;

	t41 = ((x209+x210)|(x211/x212));

	if (t41 != 2147483646U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x213 = INT16_MIN;
	int64_t x214 = -1LL;
	int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MIN;
	volatile int64_t t42 = -189707LL;

	t42 = ((x213+x214)|(x215/x216));

	if (t42 != -32769LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x219 = UINT32_MAX;
	int16_t x220 = 296;
	uint64_t t43 = 431895LLU;

	t43 = ((x217+x218)|(x219/x220));

	if (t43 != 9223372037037191119LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x221 = 12766490U;
	static volatile int16_t x223 = INT16_MIN;
	volatile uint32_t t44 = 1507367U;

	t44 = ((x221+x222)|(x223/x224));

	if (t44 != 666337279U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = 395;
	uint64_t x226 = 1975726606LLU;
	volatile int32_t x228 = -33920;
	static volatile uint64_t t45 = 136LLU;

	t45 = ((x225+x226)|(x227/x228));

	if (t45 != 1975727001LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x229 = -4179;
	static int8_t x230 = -1;
	uint32_t x231 = 5394U;
	int32_t x232 = INT32_MAX;
	uint32_t t46 = 132U;

	t46 = ((x229+x230)|(x231/x232));

	if (t46 != 4294963116U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x238 = INT16_MAX;
	int32_t x239 = 3441;
	uint64_t x240 = UINT64_MAX;

	t47 = ((x237+x238)|(x239/x240));

	if (t47 != 32750LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x241 = UINT8_MAX;
	volatile int16_t x242 = 29;
	uint64_t x243 = 48308264264217674LLU;
	int16_t x244 = -2587;

	t48 = ((x241+x242)|(x243/x244));

	if (t48 != 284LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x245 = INT8_MIN;
	static int64_t x246 = INT64_MAX;
	int16_t x247 = -507;
	int64_t t49 = INT64_MAX;

	t49 = ((x245+x246)|(x247/x248));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x253 = UINT32_MAX;
	int16_t x254 = INT16_MIN;
	volatile int8_t x255 = INT8_MIN;
	static int64_t x256 = INT64_MAX;

	t50 = ((x253+x254)|(x255/x256));

	if (t50 != 4294934527LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x257 = UINT64_MAX;
	int64_t x258 = -1LL;
	uint32_t x259 = 51668677U;
	uint64_t x260 = 1LLU;

	t51 = ((x257+x258)|(x259/x260));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x267 = -1;
	int64_t x268 = -3642832852542207184LL;

	t52 = ((x265+x266)|(x267/x268));

	if (t52 != 65534LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x269 = UINT8_MAX;
	int16_t x270 = INT16_MIN;
	volatile uint16_t x271 = 0U;
	volatile int32_t t53 = -30344;

	t53 = ((x269+x270)|(x271/x272));

	if (t53 != -32513) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x273 = 103U;
	int8_t x274 = INT8_MIN;
	int8_t x275 = INT8_MAX;

	t54 = ((x273+x274)|(x275/x276));

	if (t54 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x277 = UINT8_MAX;
	int16_t x278 = INT16_MAX;
	int32_t x279 = -1;
	int16_t x280 = -424;
	static int32_t t55 = 1088;

	t55 = ((x277+x278)|(x279/x280));

	if (t55 != 33022) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x281 = -1;
	uint8_t x282 = UINT8_MAX;
	static int64_t x283 = -29355583321470LL;
	static int16_t x284 = INT16_MIN;
	int64_t t56 = 0LL;

	t56 = ((x281+x282)|(x283/x284));

	if (t56 != 895861503LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x285 = -1LL;

	t57 = ((x285+x286)|(x287/x288));

	if (t57 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = 4;
	uint32_t x290 = 136U;
	int8_t x291 = -1;
	int8_t x292 = INT8_MIN;

	t58 = ((x289+x290)|(x291/x292));

	if (t58 != 140U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x293 = -100;
	uint16_t x294 = 49U;
	volatile uint16_t x296 = 1706U;

	t59 = ((x293+x294)|(x295/x296));

	if (t59 != -3LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x298 = UINT8_MAX;
	int16_t x299 = INT16_MIN;
	int16_t x300 = INT16_MIN;
	volatile uint32_t t60 = 15U;

	t60 = ((x297+x298)|(x299/x300));

	if (t60 != 259U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x301 = UINT8_MAX;
	int16_t x302 = INT16_MIN;
	int32_t x303 = INT32_MIN;
	uint64_t x304 = 1029984992LLU;
	volatile uint64_t t61 = 26LLU;

	t61 = ((x301+x302)|(x303/x304));

	if (t61 != 18446744073709529343LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x305 = -2110;
	volatile uint8_t x307 = UINT8_MAX;
	uint16_t x308 = 10U;
	int32_t t62 = 250;

	t62 = ((x305+x306)|(x307/x308));

	if (t62 != -2085) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x309 = INT16_MIN;
	uint16_t x311 = 28U;
	int32_t x312 = INT32_MAX;
	volatile int32_t t63 = 1;

	t63 = ((x309+x310)|(x311/x312));

	if (t63 != -32769) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x314 = -1LL;
	static uint16_t x316 = UINT16_MAX;
	int64_t t64 = -30LL;

	t64 = ((x313+x314)|(x315/x316));

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x317 = UINT32_MAX;
	int16_t x318 = INT16_MIN;
	int32_t x319 = 480531737;
	uint64_t x320 = UINT64_MAX;
	static volatile uint64_t t65 = 0LLU;

	t65 = ((x317+x318)|(x319/x320));

	if (t65 != 4294934527LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x322 = INT8_MIN;
	int8_t x323 = -29;
	volatile int32_t t66 = 2;

	t66 = ((x321+x322)|(x323/x324));

	if (t66 != -4) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x329 = -2;
	volatile int32_t x330 = -1;
	uint64_t x331 = 1493329485LLU;
	volatile int16_t x332 = -1;

	t67 = ((x329+x330)|(x331/x332));

	if (t67 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x333 = 0;
	uint8_t x334 = UINT8_MAX;
	int8_t x335 = -1;
	static volatile int16_t x336 = INT16_MAX;
	static int32_t t68 = -26431;

	t68 = ((x333+x334)|(x335/x336));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x341 = UINT32_MAX;
	static uint32_t x342 = UINT32_MAX;
	static uint64_t x343 = UINT64_MAX;
	uint32_t x344 = 6U;
	static volatile uint64_t t69 = 1825445706321014LLU;

	t69 = ((x341+x342)|(x343/x344));

	if (t69 != 3074457347049914366LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x345 = UINT32_MAX;
	int32_t x346 = -20063;
	volatile uint32_t x347 = 6728U;
	uint8_t x348 = UINT8_MAX;
	uint32_t t70 = 428480628U;

	t70 = ((x345+x346)|(x347/x348));

	if (t70 != 4294947258U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x349 = 474U;
	volatile uint8_t x350 = 5U;
	int32_t x351 = -1;
	uint32_t t71 = 862258U;

	t71 = ((x349+x350)|(x351/x352));

	if (t71 != 613566975U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x353 = INT8_MIN;
	uint32_t x355 = UINT32_MAX;
	int32_t x356 = -16250004;
	uint32_t t72 = 7U;

	t72 = ((x353+x354)|(x355/x356));

	if (t72 != 4294967169U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x357 = -1LL;
	int8_t x358 = INT8_MAX;
	volatile uint8_t x359 = 20U;
	volatile int8_t x360 = INT8_MAX;

	t73 = ((x357+x358)|(x359/x360));

	if (t73 != 126LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x365 = 6U;
	uint16_t x366 = 39U;
	int32_t x367 = INT32_MAX;
	int64_t x368 = -1LL;
	static int64_t t74 = 240LL;

	t74 = ((x365+x366)|(x367/x368));

	if (t74 != -2147483603LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x369 = -1;
	int64_t x370 = 1239429LL;
	int16_t x371 = INT16_MAX;
	volatile int64_t t75 = 85150389647718LL;

	t75 = ((x369+x370)|(x371/x372));

	if (t75 != 1239428LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x377 = UINT32_MAX;
	uint16_t x378 = 20543U;
	int16_t x379 = 418;
	uint64_t x380 = UINT64_MAX;
	uint64_t t76 = 566781843883LLU;

	t76 = ((x377+x378)|(x379/x380));

	if (t76 != 20542LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x382 = INT16_MIN;
	volatile int64_t x383 = INT64_MAX;
	volatile int16_t x384 = INT16_MAX;
	volatile int64_t t77 = -28480895LL;

	t77 = ((x381+x382)|(x383/x384));

	if (t77 != -32760LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x385 = -1;
	static uint16_t x388 = UINT16_MAX;
	static volatile uint64_t t78 = 3752937077987LLU;

	t78 = ((x385+x386)|(x387/x388));

	if (t78 != 18446743469580041707LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x389 = UINT32_MAX;
	static int32_t x390 = -1;
	int64_t x391 = 29191293107626LL;
	static uint64_t x392 = 305LLU;
	uint64_t t79 = 229476970146278501LLU;

	t79 = ((x389+x390)|(x391/x392));

	if (t79 != 98784247807LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x393 = -36;
	static int64_t x396 = -1LL;

	t80 = ((x393+x394)|(x395/x396));

	if (t80 != -5LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x397 = 1740722221540055998LL;
	int16_t x398 = INT16_MAX;
	int32_t x399 = -721165;
	volatile int32_t x400 = INT32_MIN;
	static int64_t t81 = -43LL;

	t81 = ((x397+x398)|(x399/x400));

	if (t81 != 1740722221540088765LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x402 = INT8_MAX;
	volatile uint16_t x403 = 360U;
	static int16_t x404 = INT16_MIN;
	static int64_t t82 = -64570LL;

	t82 = ((x401+x402)|(x403/x404));

	if (t82 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x405 = INT64_MIN;
	uint16_t x406 = 80U;
	int64_t x407 = INT64_MIN;
	static uint32_t x408 = 242U;
	int64_t t83 = 481967LL;

	t83 = ((x405+x406)|(x407/x408));

	if (t83 != -38113107590308910LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x409 = INT16_MAX;
	int64_t x410 = -1LL;
	uint8_t x411 = 29U;
	int8_t x412 = -25;
	volatile int64_t t84 = 13LL;

	t84 = ((x409+x410)|(x411/x412));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x413 = 26620U;
	volatile uint32_t x414 = 2022651U;
	int64_t x415 = INT64_MIN;
	int64_t x416 = INT64_MIN;
	int64_t t85 = 12706083LL;

	t85 = ((x413+x414)|(x415/x416));

	if (t85 != 2049271LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x417 = 1;
	int16_t x418 = -1115;
	static int8_t x419 = 2;
	volatile int32_t t86 = 227717;

	t86 = ((x417+x418)|(x419/x420));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x421 = 0U;
	int64_t x422 = -1LL;
	int16_t x423 = INT16_MIN;
	int16_t x424 = INT16_MAX;

	t87 = ((x421+x422)|(x423/x424));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x425 = 56869285939491350LLU;
	volatile int64_t x426 = -47190372677LL;
	static int64_t x428 = -237611012513LL;
	uint64_t t88 = 1950598LLU;

	t88 = ((x425+x426)|(x427/x428));

	if (t88 != 56869238749118673LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x429 = 0;
	volatile int32_t x432 = INT32_MAX;
	volatile int64_t t89 = 15711642109458534LL;

	t89 = ((x429+x430)|(x431/x432));

	if (t89 != 4294967299LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x434 = 0U;
	int64_t x435 = -1LL;
	int64_t x436 = INT64_MIN;

	t90 = ((x433+x434)|(x435/x436));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x437 = INT16_MIN;
	uint16_t x438 = 238U;
	volatile int64_t x439 = 4005974941967228LL;
	volatile int64_t x440 = -1LL;
	static volatile int64_t t91 = -2054661427086970LL;

	t91 = ((x437+x438)|(x439/x440));

	if (t91 != -8978LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x441 = INT8_MIN;
	int64_t x442 = INT64_MAX;
	int8_t x443 = -1;
	int32_t x444 = -6;
	volatile int64_t t92 = 5146LL;

	t92 = ((x441+x442)|(x443/x444));

	if (t92 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x445 = INT8_MAX;
	uint16_t x447 = 2U;
	static int8_t x448 = INT8_MIN;
	int32_t t93 = 286425;

	t93 = ((x445+x446)|(x447/x448));

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x449 = INT32_MIN;
	uint8_t x450 = 10U;
	int16_t x452 = -1;

	t94 = ((x449+x450)|(x451/x452));

	if (t94 != -50) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x453 = 391489291;
	static volatile uint32_t x454 = UINT32_MAX;
	static int32_t x455 = -1798;
	volatile int8_t x456 = INT8_MAX;
	uint32_t t95 = 6022U;

	t95 = ((x453+x454)|(x455/x456));

	if (t95 != 4294967290U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x457 = 1;
	volatile int32_t x458 = -32419164;
	volatile uint16_t x459 = 24U;
	int32_t x460 = INT32_MIN;
	volatile int32_t t96 = 40;

	t96 = ((x457+x458)|(x459/x460));

	if (t96 != -32419163) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x461 = INT16_MIN;
	uint64_t x462 = UINT64_MAX;
	volatile uint8_t x463 = UINT8_MAX;
	int64_t x464 = -1LL;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = ((x461+x462)|(x463/x464));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x466 = -1;
	uint8_t x467 = UINT8_MAX;
	int8_t x468 = -13;
	volatile uint32_t t98 = 0U;

	t98 = ((x465+x466)|(x467/x468));

	if (t98 != 4294967277U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x469 = UINT16_MAX;
	int8_t x470 = INT8_MAX;
	static int8_t x472 = INT8_MIN;

	t99 = ((x469+x470)|(x471/x472));

	if (t99 != 65662) { NG(); } else { ; }
	
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


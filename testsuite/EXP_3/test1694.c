#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x12 = 1U;
volatile int64_t t2 = 83290LL;
static int32_t x21 = INT32_MIN;
volatile int64_t t4 = 27808LL;
volatile int32_t x27 = -43899217;
int8_t x30 = INT8_MIN;
static int32_t x31 = INT32_MIN;
int32_t x49 = -1;
static int32_t x50 = 0;
volatile int32_t t10 = -74282;
volatile uint64_t t12 = 127LLU;
uint64_t t13 = 1210684LLU;
int64_t t14 = -813LL;
int8_t x83 = INT8_MIN;
int8_t x86 = 1;
static int8_t x87 = 6;
uint64_t x97 = UINT64_MAX;
int8_t x103 = INT8_MIN;
uint8_t x111 = UINT8_MAX;
int32_t x113 = INT32_MIN;
static int16_t x115 = -1;
int64_t t22 = -17494429789672LL;
int8_t x122 = INT8_MAX;
int8_t x124 = INT8_MIN;
volatile int32_t t24 = 253870964;
volatile int32_t t25 = 1;
int64_t t27 = 1LL;
volatile int64_t t28 = -304117801842LL;
uint64_t t29 = 1115214528LLU;
int64_t x157 = 341481LL;
volatile int64_t x159 = 505827LL;
uint32_t x160 = UINT32_MAX;
volatile int64_t t31 = 13347476464845LL;
int8_t x167 = INT8_MIN;
int64_t x168 = INT64_MIN;
volatile uint32_t x172 = 7321805U;
uint16_t x176 = 7U;
uint32_t x178 = UINT32_MAX;
int16_t x185 = 23;
uint16_t x191 = 381U;
int32_t x197 = INT32_MAX;
static int32_t x202 = -6398114;
int64_t x203 = INT64_MAX;
volatile int64_t t39 = -137806918450LL;
static uint64_t x217 = UINT64_MAX;
uint64_t t41 = 113852833543LLU;
int64_t x226 = INT64_MAX;
static volatile int64_t x227 = -1LL;
static int32_t x228 = INT32_MAX;
static int32_t x248 = INT32_MAX;
int64_t t46 = -453757385LL;
uint32_t x254 = UINT32_MAX;
static uint64_t x257 = UINT64_MAX;
volatile int32_t x259 = -527355487;
uint8_t x271 = UINT8_MAX;
volatile int16_t x276 = 50;
static volatile uint64_t x279 = 4LLU;
volatile int16_t x293 = INT16_MAX;
volatile int32_t x294 = 478;
volatile uint32_t t53 = 368U;
static int8_t x307 = INT8_MIN;
int64_t x320 = -58385790788594LL;
int64_t x339 = -3556919560257363LL;
uint8_t x342 = 6U;
volatile int64_t t64 = 12015374961659976LL;
volatile int64_t t66 = 16887LL;
volatile int16_t x357 = INT16_MIN;
static volatile int16_t x358 = -5;
volatile int64_t x362 = 517905LL;
volatile int16_t x363 = -212;
static int32_t t69 = -2;
int16_t x373 = 0;
int64_t t70 = -8414636350249264LL;
uint16_t x385 = UINT16_MAX;
int32_t t73 = -10;
int32_t x394 = 817964;
int8_t x395 = -1;
static uint64_t x397 = 1749898023LLU;
volatile uint64_t t76 = 16284753LLU;
int8_t x416 = INT8_MIN;
int32_t t78 = -379927;
static volatile uint32_t x443 = 1212U;
int64_t t80 = -235941LL;
int8_t x446 = -1;
volatile uint8_t x450 = UINT8_MAX;
int64_t x467 = -116898LL;
volatile uint64_t t84 = 1729LLU;
uint64_t x481 = 5780979844710LLU;
volatile int64_t x484 = -1LL;
static volatile int16_t x485 = INT16_MIN;
volatile uint64_t x488 = UINT64_MAX;
volatile int32_t t87 = 5069195;
uint64_t x503 = UINT64_MAX;
int64_t t89 = 58834663665010787LL;
volatile int64_t x514 = -1LL;
uint32_t x515 = 795U;
static int32_t x522 = -2;
int16_t x524 = INT16_MIN;
volatile int32_t x526 = INT32_MAX;
uint64_t t93 = 22LLU;
uint8_t x533 = 7U;
int16_t x543 = INT16_MAX;
uint32_t x545 = UINT32_MAX;


void f0(void) {
	uint8_t x5 = 33U;
	int8_t x6 = INT8_MIN;
	static volatile uint32_t x7 = UINT32_MAX;
	static int16_t x8 = INT16_MAX;
	static uint32_t t0 = 7132U;

	t0 = ((x5+x6)/(x7&x8));

	if (t0 != 131075U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 908798U;
	uint8_t x10 = 73U;
	uint8_t x11 = UINT8_MAX;
	static uint32_t t1 = 979863U;

	t1 = ((x9+x10)/(x11&x12));

	if (t1 != 908871U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = 2703;
	uint16_t x14 = 1U;
	static uint32_t x15 = UINT32_MAX;
	volatile int64_t x16 = INT64_MAX;

	t2 = ((x13+x14)/(x15&x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int64_t x18 = -1LL;
	int64_t x19 = -1LL;
	uint8_t x20 = 2U;
	volatile int64_t t3 = -193185803151804674LL;

	t3 = ((x17+x18)/(x19&x20));

	if (t3 != -16384LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = 0LL;
	uint8_t x23 = UINT8_MAX;
	int32_t x24 = INT32_MAX;

	t4 = ((x21+x22)/(x23&x24));

	if (t4 != -8421504LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 49343U;
	static int8_t x26 = INT8_MIN;
	volatile uint32_t x28 = UINT32_MAX;
	volatile uint32_t t5 = 378149U;

	t5 = ((x25+x26)/(x27&x28));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 3LLU;
	int64_t x32 = -4465553LL;
	uint64_t t6 = 184707257461944LLU;

	t6 = ((x29+x30)/(x31&x32));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x33 = 2587849192023LLU;
	uint64_t x34 = 149717271313688LLU;
	static int8_t x35 = -1;
	int64_t x36 = INT64_MAX;
	uint64_t t7 = 82LLU;

	t7 = ((x33+x34)/(x35&x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = 6697;
	volatile uint8_t x42 = 93U;
	int8_t x43 = INT8_MIN;
	int32_t x44 = -1;
	int32_t t8 = -370;

	t8 = ((x41+x42)/(x43&x44));

	if (t8 != -53) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 761760U;
	static int16_t x46 = -290;
	int8_t x47 = 1;
	int8_t x48 = INT8_MAX;
	uint32_t t9 = 21620192U;

	t9 = ((x45+x46)/(x47&x48));

	if (t9 != 761470U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x51 = -1341;
	int32_t x52 = 295;

	t10 = ((x49+x50)/(x51&x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 0;
	static int32_t x54 = -1;
	uint32_t x55 = 14802U;
	int8_t x56 = INT8_MIN;
	volatile uint32_t t11 = 25U;

	t11 = ((x53+x54)/(x55&x56));

	if (t11 != 291777U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -27602;
	int32_t x58 = INT32_MAX;
	volatile uint64_t x59 = UINT64_MAX;
	uint32_t x60 = 779837U;

	t12 = ((x57+x58)/(x59&x60));

	if (t12 != 2753LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x61 = INT8_MAX;
	static int16_t x62 = INT16_MIN;
	uint64_t x63 = 209390313LLU;
	int16_t x64 = -558;

	t13 = ((x61+x62)/(x63&x64));

	if (t13 != 88097641803LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x69 = -1;
	int8_t x70 = INT8_MIN;
	volatile int16_t x71 = INT16_MAX;
	int64_t x72 = INT64_MAX;

	t14 = ((x69+x70)/(x71&x72));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 453573246243LLU;
	static volatile uint8_t x74 = 2U;
	int64_t x75 = INT64_MIN;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t15 = 228870408668795LLU;

	t15 = ((x73+x74)/(x75&x76));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x77 = -1;
	int8_t x78 = INT8_MIN;
	int32_t x79 = 70;
	volatile uint64_t x80 = UINT64_MAX;
	static uint64_t t16 = 1837390LLU;

	t16 = ((x77+x78)/(x79&x80));

	if (t16 != 263524915338707878LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = -1;
	volatile int32_t x82 = -1;
	int64_t x84 = INT64_MIN;
	int64_t t17 = 1800196065455635LL;

	t17 = ((x81+x82)/(x83&x84));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = 4616LL;
	int8_t x88 = INT8_MAX;
	int64_t t18 = -355586777317049LL;

	t18 = ((x85+x86)/(x87&x88));

	if (t18 != 769LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MIN;
	uint64_t t19 = 220138314524LLU;

	t19 = ((x97+x98)/(x99&x100));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = 0LL;
	uint32_t x102 = UINT32_MAX;
	static volatile uint16_t x104 = 707U;
	int64_t t20 = 1983140081524LL;

	t20 = ((x101+x102)/(x103&x104));

	if (t20 != 6710886LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = 940;
	int16_t x110 = INT16_MIN;
	int16_t x112 = -1;
	volatile int32_t t21 = 65198;

	t21 = ((x109+x110)/(x111&x112));

	if (t21 != -124) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x114 = -1867LL;
	uint8_t x116 = 38U;

	t22 = ((x113+x114)/(x115&x116));

	if (t22 != -56512776LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MAX;
	uint16_t x118 = UINT16_MAX;
	uint16_t x119 = 32U;
	int8_t x120 = INT8_MAX;
	int32_t t23 = 349494297;

	t23 = ((x117+x118)/(x119&x120));

	if (t23 != 3071) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = INT16_MIN;
	int32_t x123 = INT32_MAX;

	t24 = ((x121+x122)/(x123&x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x129 = INT8_MIN;
	int8_t x130 = 26;
	static volatile int16_t x131 = -1;
	static int8_t x132 = -1;

	t25 = ((x129+x130)/(x131&x132));

	if (t25 != 102) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = -1;
	static int8_t x134 = INT8_MIN;
	uint32_t x135 = UINT32_MAX;
	static int32_t x136 = INT32_MAX;
	uint32_t t26 = 0U;

	t26 = ((x133+x134)/(x135&x136));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x137 = 97U;
	int64_t x138 = 119LL;
	static int16_t x139 = INT16_MAX;
	volatile int32_t x140 = -1;

	t27 = ((x137+x138)/(x139&x140));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = 1;
	static volatile int32_t x142 = INT32_MIN;
	uint16_t x143 = 400U;
	static int64_t x144 = 12397853002LL;

	t28 = ((x141+x142)/(x143&x144));

	if (t28 != -8388607LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = INT8_MAX;
	uint64_t x150 = UINT64_MAX;
	int64_t x151 = -1LL;
	int16_t x152 = INT16_MIN;

	t29 = ((x149+x150)/(x151&x152));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x158 = INT8_MIN;
	static int64_t t30 = 14LL;

	t30 = ((x157+x158)/(x159&x160));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = -1LL;
	int16_t x162 = 176;
	int64_t x163 = INT64_MAX;
	volatile int32_t x164 = INT32_MIN;

	t31 = ((x161+x162)/(x163&x164));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x165 = 66U;
	int16_t x166 = -1;
	volatile int64_t t32 = 160667827096619LL;

	t32 = ((x165+x166)/(x167&x168));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x169 = INT32_MIN;
	static uint8_t x170 = UINT8_MAX;
	static int64_t x171 = -1LL;
	static int64_t t33 = -8118957LL;

	t33 = ((x169+x170)/(x171&x172));

	if (t33 != -293LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x173 = 453U;
	uint64_t x174 = 406130852829081LLU;
	uint16_t x175 = 57U;
	uint64_t t34 = 560931LLU;

	t34 = ((x173+x174)/(x175&x176));

	if (t34 != 406130852829534LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x177 = -1LL;
	volatile int16_t x179 = -1;
	static uint32_t x180 = 89771862U;
	int64_t t35 = 217LL;

	t35 = ((x177+x178)/(x179&x180));

	if (t35 != 47LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x186 = -1LL;
	volatile int16_t x187 = -1;
	int8_t x188 = INT8_MIN;
	volatile int64_t t36 = 9053LL;

	t36 = ((x185+x186)/(x187&x188));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x189 = INT64_MAX;
	int8_t x190 = -1;
	static int8_t x192 = INT8_MIN;
	int64_t t37 = -629LL;

	t37 = ((x189+x190)/(x191&x192));

	if (t37 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x198 = 3650008745754069LLU;
	volatile uint16_t x199 = UINT16_MAX;
	int8_t x200 = -1;
	volatile uint64_t t38 = 3731345450LLU;

	t38 = ((x197+x198)/(x199&x200));

	if (t38 != 55695596143LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x201 = 5U;
	int32_t x204 = INT32_MIN;

	t39 = ((x201+x202)/(x203&x204));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x209 = -14LL;
	static uint16_t x210 = 31U;
	static uint64_t x211 = 7490959285050109584LLU;
	int8_t x212 = 18;
	uint64_t t40 = 899984610562LLU;

	t40 = ((x209+x210)/(x211&x212));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x218 = 6;
	uint64_t x219 = 6049307762596026LLU;
	static volatile int64_t x220 = 211041333283734LL;

	t41 = ((x217+x218)/(x219&x220));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x221 = UINT32_MAX;
	volatile int16_t x222 = INT16_MAX;
	int64_t x223 = -462LL;
	uint32_t x224 = 3337817U;
	volatile int64_t t42 = 7048LL;

	t42 = ((x221+x222)/(x223&x224));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x225 = -1;
	static volatile int64_t t43 = 2848237243689343162LL;

	t43 = ((x225+x226)/(x227&x228));

	if (t43 != 4294967298LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x233 = 233762814LLU;
	int32_t x234 = -1;
	uint64_t x235 = UINT64_MAX;
	int16_t x236 = -22;
	static volatile uint64_t t44 = 245198643411074021LLU;

	t44 = ((x233+x234)/(x235&x236));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x241 = INT32_MAX;
	static int64_t x242 = INT64_MIN;
	static int64_t x243 = -10306888295855529LL;
	volatile int16_t x244 = -14165;
	int64_t t45 = -994391LL;

	t45 = ((x241+x242)/(x243&x244));

	if (t45 != 894LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x245 = UINT16_MAX;
	int32_t x246 = INT32_MIN;
	int64_t x247 = -7LL;

	t46 = ((x245+x246)/(x247&x248));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x253 = -5;
	static int8_t x255 = INT8_MAX;
	uint64_t x256 = 245443LLU;
	uint64_t t47 = 17302778161790LLU;

	t47 = ((x253+x254)/(x255&x256));

	if (t47 != 64103989LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x258 = INT64_MIN;
	int16_t x260 = INT16_MIN;
	uint64_t t48 = 584286063LLU;

	t48 = ((x257+x258)/(x259&x260));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x269 = 182U;
	volatile int32_t x270 = INT32_MIN;
	int8_t x272 = -1;
	uint32_t t49 = 270700443U;

	t49 = ((x269+x270)/(x271&x272));

	if (t49 != 8421505U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x273 = 6LLU;
	int32_t x274 = INT32_MAX;
	int64_t x275 = -7LL;
	uint64_t t50 = 46597LLU;

	t50 = ((x273+x274)/(x275&x276));

	if (t50 != 44739242LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x277 = INT16_MAX;
	int16_t x278 = 7488;
	int32_t x280 = -1;
	static uint64_t t51 = 107319321216357473LLU;

	t51 = ((x277+x278)/(x279&x280));

	if (t51 != 10063LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MIN;
	int32_t t52 = 202598181;

	t52 = ((x293+x294)/(x295&x296));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x297 = 27938U;
	uint8_t x298 = 44U;
	uint16_t x299 = UINT16_MAX;
	int8_t x300 = -63;

	t53 = ((x297+x298)/(x299&x300));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x301 = UINT16_MAX;
	uint32_t x302 = 26U;
	uint32_t x303 = UINT32_MAX;
	volatile uint16_t x304 = 6027U;
	volatile uint32_t t54 = 568U;

	t54 = ((x301+x302)/(x303&x304));

	if (t54 != 10U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x305 = -102340919;
	volatile uint16_t x306 = 86U;
	int64_t x308 = INT64_MIN;
	int64_t t55 = -100206LL;

	t55 = ((x305+x306)/(x307&x308));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x309 = UINT16_MAX;
	static volatile int32_t x310 = INT32_MIN;
	int16_t x311 = -1;
	volatile int8_t x312 = INT8_MIN;
	static int32_t t56 = -5;

	t56 = ((x309+x310)/(x311&x312));

	if (t56 != 16776704) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x313 = INT16_MIN;
	static int32_t x314 = -1;
	uint64_t x315 = UINT64_MAX;
	int8_t x316 = INT8_MIN;
	uint64_t t57 = 436584LLU;

	t57 = ((x313+x314)/(x315&x316));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x317 = -1LL;
	static uint16_t x318 = 471U;
	int64_t x319 = INT64_MIN;
	volatile int64_t t58 = -405413436140LL;

	t58 = ((x317+x318)/(x319&x320));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x321 = -1;
	uint16_t x322 = UINT16_MAX;
	uint64_t x323 = 4LLU;
	volatile uint64_t x324 = UINT64_MAX;
	volatile uint64_t t59 = 46888590046123LLU;

	t59 = ((x321+x322)/(x323&x324));

	if (t59 != 16383LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x325 = INT64_MAX;
	uint16_t x326 = 0U;
	int8_t x327 = INT8_MIN;
	volatile int8_t x328 = -1;
	volatile int64_t t60 = -1537LL;

	t60 = ((x325+x326)/(x327&x328));

	if (t60 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x333 = UINT64_MAX;
	int64_t x334 = INT64_MIN;
	int32_t x335 = -1;
	static volatile uint64_t x336 = 200975751802042860LLU;
	volatile uint64_t t61 = 233583943536479726LLU;

	t61 = ((x333+x334)/(x335&x336));

	if (t61 != 45LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x337 = 1773368U;
	static int32_t x338 = INT32_MAX;
	static int16_t x340 = -1;
	volatile int64_t t62 = 235495610483LL;

	t62 = ((x337+x338)/(x339&x340));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x341 = -2367697LL;
	int8_t x343 = INT8_MAX;
	uint16_t x344 = 14804U;
	int64_t t63 = -59330LL;

	t63 = ((x341+x342)/(x343&x344));

	if (t63 != -28186LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x345 = UINT32_MAX;
	int32_t x346 = -1;
	int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MIN;

	t64 = ((x345+x346)/(x347&x348));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MIN;
	volatile int32_t x351 = INT32_MIN;
	volatile int32_t x352 = INT32_MIN;
	int32_t t65 = -124;

	t65 = ((x349+x350)/(x351&x352));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x353 = -4180389662814604070LL;
	int16_t x354 = -1;
	volatile int32_t x355 = 1852;
	static int32_t x356 = 4;

	t66 = ((x353+x354)/(x355&x356));

	if (t66 != -1045097415703651017LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x359 = -1;
	int32_t x360 = INT32_MIN;
	static volatile int32_t t67 = -18251;

	t67 = ((x357+x358)/(x359&x360));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x361 = INT32_MIN;
	static volatile int8_t x364 = INT8_MIN;
	volatile int64_t t68 = -5095LL;

	t68 = ((x361+x362)/(x363&x364));

	if (t68 != 8386584LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x369 = 1U;
	int8_t x370 = INT8_MIN;
	int8_t x371 = 3;
	int16_t x372 = 1;

	t69 = ((x369+x370)/(x371&x372));

	if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x374 = INT64_MIN;
	static int8_t x375 = INT8_MIN;
	int32_t x376 = INT32_MIN;

	t70 = ((x373+x374)/(x375&x376));

	if (t70 != 4294967296LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x381 = -13091214LL;
	int16_t x382 = INT16_MAX;
	int8_t x383 = INT8_MIN;
	uint64_t x384 = 854902889LLU;
	uint64_t t71 = 13606LLU;

	t71 = ((x381+x382)/(x383&x384));

	if (t71 != 21577592702LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x386 = -84;
	int64_t x387 = 62811354122LL;
	uint32_t x388 = 37631236U;
	int64_t t72 = -56224LL;

	t72 = ((x385+x386)/(x387&x388));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x389 = 31;
	volatile uint16_t x390 = UINT16_MAX;
	int8_t x391 = INT8_MIN;
	int32_t x392 = -154;

	t73 = ((x389+x390)/(x391&x392));

	if (t73 != -256) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x393 = INT16_MIN;
	static uint32_t x396 = 167512635U;
	volatile uint32_t t74 = 1079765U;

	t74 = ((x393+x394)/(x395&x396));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x398 = INT8_MIN;
	int64_t x399 = -1LL;
	static int32_t x400 = INT32_MIN;
	volatile uint64_t t75 = 5021LLU;

	t75 = ((x397+x398)/(x399&x400));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x401 = 633185409744059516LLU;
	int16_t x402 = INT16_MAX;
	uint32_t x403 = 1277910579U;
	static volatile int8_t x404 = INT8_MIN;

	t76 = ((x401+x402)/(x403&x404));

	if (t76 != 495484930LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x409 = 15U;
	volatile uint8_t x410 = 28U;
	uint16_t x411 = 12834U;
	volatile uint32_t x412 = UINT32_MAX;
	uint32_t t77 = 11U;

	t77 = ((x409+x410)/(x411&x412));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x413 = 29;
	volatile int32_t x414 = 359;
	static int8_t x415 = INT8_MIN;

	t78 = ((x413+x414)/(x415&x416));

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x433 = INT32_MAX;
	int64_t x434 = -58841350384LL;
	int64_t x435 = 1667456176LL;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t79 = 2474131263402407708LLU;

	t79 = ((x433+x434)/(x435&x436));

	if (t79 != 11062805897LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x441 = -39;
	volatile int32_t x442 = -238534;
	int64_t x444 = 1405695348658897063LL;

	t80 = ((x441+x442)/(x443&x444));

	if (t80 != -1454LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x445 = 65U;
	static volatile uint64_t x447 = 5821555081398851LLU;
	uint32_t x448 = UINT32_MAX;
	volatile uint64_t t81 = 4444851773166204LLU;

	t81 = ((x445+x446)/(x447&x448));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x449 = UINT32_MAX;
	volatile int16_t x451 = INT16_MAX;
	uint64_t x452 = 11103234375198LLU;
	uint64_t t82 = 5141328505LLU;

	t82 = ((x449+x450)/(x451&x452));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x465 = 51;
	int8_t x466 = INT8_MAX;
	int64_t x468 = INT64_MIN;
	volatile int64_t t83 = -67296143800460792LL;

	t83 = ((x465+x466)/(x467&x468));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x477 = 12974707358949LLU;
	int64_t x478 = INT64_MIN;
	volatile int64_t x479 = -695415LL;
	int8_t x480 = INT8_MAX;

	t84 = ((x477+x478)/(x479&x480));

	if (t84 != 1024820556840237195LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x482 = INT16_MIN;
	static int32_t x483 = -10501;
	volatile uint64_t t85 = 116002571678888LLU;

	t85 = ((x481+x482)/(x483&x484));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x486 = 103U;
	uint64_t x487 = 265678896449448404LLU;
	volatile uint64_t t86 = 30307120793220310LLU;

	t86 = ((x485+x486)/(x487&x488));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x497 = INT32_MAX;
	int16_t x498 = -1;
	int16_t x499 = -1;
	static uint8_t x500 = 77U;

	t87 = ((x497+x498)/(x499&x500));

	if (t87 != 27889398) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x501 = INT8_MIN;
	uint16_t x502 = UINT16_MAX;
	static uint16_t x504 = 1941U;
	volatile uint64_t t88 = 15868782LLU;

	t88 = ((x501+x502)/(x503&x504));

	if (t88 != 33LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x509 = 456U;
	int16_t x510 = INT16_MIN;
	int64_t x511 = INT64_MIN;
	int8_t x512 = INT8_MIN;

	t89 = ((x509+x510)/(x511&x512));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x513 = -9546846;
	int64_t x516 = 14707LL;
	volatile int64_t t90 = 132150681LL;

	t90 = ((x513+x514)/(x515&x516));

	if (t90 != -34715LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x517 = 15U;
	static int8_t x518 = -1;
	uint16_t x519 = UINT16_MAX;
	int32_t x520 = -1695234;
	volatile int32_t t91 = 180998;

	t91 = ((x517+x518)/(x519&x520));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x521 = 43194LLU;
	static int16_t x523 = INT16_MIN;
	uint64_t t92 = 86757782802LLU;

	t92 = ((x521+x522)/(x523&x524));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x525 = -115LL;
	int16_t x527 = INT16_MIN;
	volatile uint64_t x528 = UINT64_MAX;

	t93 = ((x525+x526)/(x527&x528));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x534 = 248LLU;
	volatile int64_t x535 = -110LL;
	int64_t x536 = -21LL;
	uint64_t t94 = 22992434975772470LLU;

	t94 = ((x533+x534)/(x535&x536));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x541 = UINT32_MAX;
	volatile int32_t x542 = -943286529;
	int8_t x544 = -47;
	volatile uint32_t t95 = 10363582U;

	t95 = ((x541+x542)/(x543&x544));

	if (t95 != 102432U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x546 = INT64_MIN;
	static uint64_t x547 = UINT64_MAX;
	int16_t x548 = -1;
	volatile uint64_t t96 = 253779404LLU;

	t96 = ((x545+x546)/(x547&x548));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x549 = INT8_MIN;
	volatile int32_t x550 = -84723065;
	int32_t x551 = 1;
	volatile int8_t x552 = -1;
	int32_t t97 = 27100623;

	t97 = ((x549+x550)/(x551&x552));

	if (t97 != -84723193) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x553 = 35227201264359024LL;
	uint8_t x554 = UINT8_MAX;
	int32_t x555 = INT32_MIN;
	volatile int32_t x556 = -1;
	int64_t t98 = -210820618814LL;

	t98 = ((x553+x554)/(x555&x556));

	if (t98 != -16403943LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x557 = -153431439928LL;
	static int32_t x558 = -31;
	uint16_t x559 = UINT16_MAX;
	uint8_t x560 = 10U;
	volatile int64_t t99 = -149350635516LL;

	t99 = ((x557+x558)/(x559&x560));

	if (t99 != -15343143995LL) { NG(); } else { ; }
	
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


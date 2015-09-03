#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
volatile uint32_t x6 = UINT32_MAX;
int64_t x20 = INT64_MAX;
volatile uint64_t t3 = 34LLU;
int8_t x26 = INT8_MIN;
int32_t x27 = INT32_MIN;
int32_t t5 = -335964171;
volatile int32_t x37 = INT32_MAX;
int64_t x39 = INT64_MAX;
int16_t x40 = INT16_MAX;
int8_t x44 = 3;
static int64_t t7 = -3207LL;
static uint32_t x47 = 1349U;
int8_t x48 = INT8_MIN;
volatile uint16_t x51 = 6U;
int32_t t9 = 39695;
static uint32_t x58 = 25144096U;
volatile int16_t x60 = INT16_MIN;
volatile int64_t t12 = -244899LL;
int64_t x67 = 4057421146882730LL;
static uint32_t x73 = 9U;
int32_t x87 = -1;
volatile int64_t t18 = -1294LL;
static int8_t x94 = -1;
int64_t t20 = 1LL;
int32_t x129 = -1;
uint16_t x130 = 16050U;
int32_t x132 = INT32_MIN;
int64_t x136 = -1LL;
volatile int8_t x143 = -1;
int64_t x148 = INT64_MAX;
volatile int64_t t27 = 6301268060264LL;
int64_t x149 = -1LL;
int16_t x150 = INT16_MAX;
volatile int64_t x155 = -1LL;
static volatile uint64_t x157 = 7092499602543962LLU;
uint16_t x166 = UINT16_MAX;
uint64_t x171 = 345740998221LLU;
uint64_t t32 = 10LLU;
int16_t x173 = INT16_MAX;
static int16_t x175 = -15589;
uint64_t t34 = 14319495369633LLU;
uint8_t x190 = 12U;
uint16_t x191 = UINT16_MAX;
int8_t x192 = INT8_MIN;
volatile int64_t t38 = -826684LL;
uint8_t x197 = 2U;
uint16_t x198 = 726U;
int64_t x204 = INT64_MIN;
volatile int64_t t40 = 7LL;
int32_t x210 = -1;
int32_t x214 = -1;
static volatile int32_t x216 = -408;
uint32_t x231 = UINT32_MAX;
uint32_t x242 = 77390U;
static uint32_t x247 = 857399554U;
volatile int64_t t50 = -726676LL;
int16_t x263 = -1;
uint16_t x264 = UINT16_MAX;
static uint16_t x265 = 6116U;
uint64_t t53 = 23520630LLU;
uint64_t t55 = 4912956630LLU;
static int16_t x295 = -1;
int8_t x301 = INT8_MIN;
int8_t x306 = INT8_MAX;
static int64_t x311 = 564620567LL;
int64_t x313 = -1LL;
int16_t x323 = -1;
volatile uint64_t t63 = 412738546518936LLU;
uint32_t x336 = 0U;
static volatile int64_t x338 = -1LL;
int64_t x339 = INT64_MAX;
int64_t t67 = 41510945660017496LL;
int8_t x356 = INT8_MIN;
volatile int64_t t70 = 3825699152088394030LL;
int64_t x362 = -1LL;
int32_t x369 = INT32_MIN;
int32_t x374 = -1;
int32_t x376 = -109980455;
static int16_t x378 = 0;
static int64_t x381 = 0LL;
static int16_t x385 = 1;
int16_t x387 = INT16_MAX;
volatile uint32_t x388 = 229751U;
volatile int16_t x389 = -1;
int8_t x391 = -1;
volatile uint64_t t78 = 3280LLU;
uint64_t x401 = UINT64_MAX;
int32_t x403 = INT32_MAX;
int8_t x404 = 0;
uint64_t t81 = 58308LLU;
static uint8_t x405 = UINT8_MAX;
uint8_t x411 = UINT8_MAX;
int16_t x415 = -1;
static int8_t x416 = INT8_MIN;
static uint8_t x417 = 99U;
static int16_t x418 = INT16_MIN;
int16_t x421 = -1;
int8_t x423 = -30;
static int32_t x426 = -30;
static int64_t x430 = 154204189358188LL;
volatile uint8_t x441 = 13U;
static volatile int8_t x446 = 23;
int8_t x454 = INT8_MAX;
uint64_t t94 = 1018939LLU;
int32_t x470 = INT32_MAX;
int16_t x477 = -185;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	static int32_t x2 = -302756;
	uint64_t x3 = 58342196446LLU;
	static volatile uint64_t t0 = 15700LLU;

	t0 = ((x1*x2)/(x3|x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int64_t x7 = INT64_MIN;
	int32_t x8 = 176;
	static int64_t t1 = 2177084228LL;

	t1 = ((x5*x6)/(x7|x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x17 = 0U;
	volatile int32_t x18 = -1;
	int16_t x19 = -1;
	static int64_t t2 = -114830352567219975LL;

	t2 = ((x17*x18)/(x19|x20));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 490LLU;
	uint64_t x22 = UINT64_MAX;
	static uint64_t x23 = 9773054LLU;
	static int8_t x24 = 50;

	t3 = ((x21*x22)/(x23|x24));

	if (t3 != 1887510707882LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 27;
	int8_t x28 = INT8_MIN;
	int32_t t4 = 77095586;

	t4 = ((x25*x26)/(x27|x28));

	if (t4 != 27) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MIN;
	static uint16_t x34 = UINT16_MAX;
	int16_t x35 = INT16_MAX;
	int16_t x36 = -1;

	t5 = ((x33*x34)/(x35|x36));

	if (t5 != 2147450880) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x38 = UINT32_MAX;
	volatile int64_t t6 = -458678035LL;

	t6 = ((x37*x38)/(x39|x40));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x41 = 2U;
	int64_t x42 = -283589LL;
	int64_t x43 = -1LL;

	t7 = ((x41*x42)/(x43|x44));

	if (t7 != 567178LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = -5819LL;
	uint8_t x46 = 3U;
	volatile int64_t t8 = -277102071554669160LL;

	t8 = ((x45*x46)/(x47|x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = -1;
	int8_t x50 = -1;
	int8_t x52 = 11;

	t9 = ((x49*x50)/(x51|x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MIN;
	int64_t x54 = -1LL;
	static int8_t x55 = 29;
	static int64_t x56 = INT64_MIN;
	volatile int64_t t10 = -6728660682644LL;

	t10 = ((x53*x54)/(x55|x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = INT16_MIN;
	uint64_t x59 = 14017408LLU;
	uint64_t t11 = 5433662LLU;

	t11 = ((x57*x58)/(x59|x60));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = -1;
	static int8_t x62 = INT8_MIN;
	int8_t x63 = 3;
	int64_t x64 = INT64_MIN;

	t12 = ((x61*x62)/(x63|x64));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x65 = -1;
	uint64_t x66 = 369197LLU;
	int32_t x68 = INT32_MIN;
	static volatile uint64_t t13 = 2457771899LLU;

	t13 = ((x65*x66)/(x67|x68));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 122847398321326770LLU;
	static int32_t x70 = 21082218;
	volatile uint8_t x71 = 0U;
	int16_t x72 = -10563;
	uint64_t t14 = 93543LLU;

	t14 = ((x69*x70)/(x71|x72));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x74 = INT8_MIN;
	uint32_t x75 = 5842021U;
	int16_t x76 = -2947;
	volatile uint32_t t15 = 859614U;

	t15 = ((x73*x74)/(x75|x76));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MAX;
	int32_t x82 = -1;
	int8_t x83 = INT8_MIN;
	int8_t x84 = -6;
	static int32_t t16 = -1146;

	t16 = ((x81*x82)/(x83|x84));

	if (t16 != 5461) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x85 = INT16_MAX;
	int32_t x86 = -4708;
	int32_t x88 = INT32_MIN;
	volatile int32_t t17 = 376984011;

	t17 = ((x85*x86)/(x87|x88));

	if (t17 != 154267036) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x89 = -28;
	static volatile uint8_t x90 = 1U;
	int64_t x91 = -5646713LL;
	uint8_t x92 = 95U;

	t18 = ((x89*x90)/(x91|x92));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = UINT16_MAX;
	static int16_t x95 = -1;
	uint32_t x96 = 1U;
	static volatile uint32_t t19 = 3U;

	t19 = ((x93*x94)/(x95|x96));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MIN;
	int32_t x102 = 1218;
	int64_t x103 = INT64_MAX;
	uint16_t x104 = UINT16_MAX;

	t20 = ((x101*x102)/(x103|x104));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MAX;
	uint32_t x110 = UINT32_MAX;
	static int8_t x111 = INT8_MIN;
	uint64_t x112 = 31167494462732132LLU;
	uint64_t t21 = 245018252013LLU;

	t21 = ((x109*x110)/(x111|x112));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = -31;
	int32_t x126 = -1;
	static int64_t x127 = -1LL;
	int64_t x128 = 236054LL;
	int64_t t22 = 200518588LL;

	t22 = ((x125*x126)/(x127|x128));

	if (t22 != -31LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x131 = UINT64_MAX;
	static volatile uint64_t t23 = 3LLU;

	t23 = ((x129*x130)/(x131|x132));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x133 = UINT32_MAX;
	volatile uint64_t x134 = 1629939LLU;
	int16_t x135 = 0;
	uint64_t t24 = 17563429478347LLU;

	t24 = ((x133*x134)/(x135|x136));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x137 = UINT8_MAX;
	uint8_t x138 = 123U;
	volatile int8_t x139 = -1;
	int64_t x140 = -1LL;
	volatile int64_t t25 = -30027193LL;

	t25 = ((x137*x138)/(x139|x140));

	if (t25 != -31365LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x141 = 78413702U;
	volatile uint8_t x142 = UINT8_MAX;
	int32_t x144 = -1494292;
	volatile uint32_t t26 = 5135U;

	t26 = ((x141*x142)/(x143|x144));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x145 = -1;
	int32_t x146 = -5099256;
	int16_t x147 = -69;

	t27 = ((x145*x146)/(x147|x148));

	if (t27 != -5099256LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x151 = -57;
	int16_t x152 = -12225;
	volatile int64_t t28 = 926900384714247558LL;

	t28 = ((x149*x150)/(x151|x152));

	if (t28 != 32767LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x153 = INT64_MAX;
	int16_t x154 = -1;
	int32_t x156 = INT32_MAX;
	volatile int64_t t29 = INT64_MAX;

	t29 = ((x153*x154)/(x155|x156));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x158 = INT64_MIN;
	volatile int32_t x159 = -1;
	int16_t x160 = INT16_MIN;
	uint64_t t30 = 77805573193816LLU;

	t30 = ((x157*x158)/(x159|x160));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x165 = 3LL;
	volatile int16_t x167 = -1;
	int8_t x168 = -1;
	int64_t t31 = 131031079LL;

	t31 = ((x165*x166)/(x167|x168));

	if (t31 != -196605LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x169 = 9;
	volatile uint8_t x170 = 1U;
	volatile int8_t x172 = 1;

	t32 = ((x169*x170)/(x171|x172));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x174 = 7;
	int8_t x176 = INT8_MIN;
	volatile int32_t t33 = -243139788;

	t33 = ((x173*x174)/(x175|x176));

	if (t33 != -2270) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = -11;
	volatile uint64_t x178 = 0LLU;
	static volatile int16_t x179 = INT16_MIN;
	volatile int16_t x180 = INT16_MIN;

	t34 = ((x177*x178)/(x179|x180));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x181 = 279032373U;
	static uint32_t x182 = 28498856U;
	uint16_t x183 = UINT16_MAX;
	static int32_t x184 = -261871217;
	volatile uint32_t t35 = 1455U;

	t35 = ((x181*x182)/(x183|x184));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x185 = -1;
	int16_t x186 = -26;
	uint32_t x187 = 215U;
	int8_t x188 = INT8_MAX;
	volatile uint32_t t36 = 0U;

	t36 = ((x185*x186)/(x187|x188));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x189 = -1;
	volatile int32_t t37 = 4;

	t37 = ((x189*x190)/(x191|x192));

	if (t37 != 12) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x193 = UINT32_MAX;
	uint16_t x194 = 39U;
	int64_t x195 = INT64_MIN;
	volatile uint32_t x196 = UINT32_MAX;

	t38 = ((x193*x194)/(x195|x196));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x199 = 187;
	uint64_t x200 = UINT64_MAX;
	volatile uint64_t t39 = 0LLU;

	t39 = ((x197*x198)/(x199|x200));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x201 = -1LL;
	int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MIN;

	t40 = ((x201*x202)/(x203|x204));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = 2933418441479664032LL;
	static volatile int16_t x211 = 16361;
	int64_t x212 = -1LL;
	volatile int64_t t41 = 1LL;

	t41 = ((x209*x210)/(x211|x212));

	if (t41 != 2933418441479664032LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x213 = 46853343U;
	volatile uint8_t x215 = 1U;
	uint32_t t42 = 95527U;

	t42 = ((x213*x214)/(x215|x216));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x217 = 8928;
	uint16_t x218 = 53U;
	int8_t x219 = -6;
	static volatile int32_t x220 = INT32_MIN;
	volatile int32_t t43 = -155;

	t43 = ((x217*x218)/(x219|x220));

	if (t43 != -78864) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x229 = 1269227942347LLU;
	uint16_t x230 = 232U;
	int64_t x232 = -1LL;
	volatile uint64_t t44 = 21141874981780093LLU;

	t44 = ((x229*x230)/(x231|x232));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x237 = 102736;
	uint64_t x238 = 44606878912099544LLU;
	int64_t x239 = -1311885LL;
	volatile int64_t x240 = INT64_MIN;
	volatile uint64_t t45 = 63367995427853186LLU;

	t45 = ((x237*x238)/(x239|x240));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x241 = 2LLU;
	uint16_t x243 = UINT16_MAX;
	static int16_t x244 = -1;
	static uint64_t t46 = 3LLU;

	t46 = ((x241*x242)/(x243|x244));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = 34;
	int32_t x248 = INT32_MIN;
	volatile uint32_t t47 = 17580018U;

	t47 = ((x245*x246)/(x247|x248));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x249 = 24;
	uint32_t x250 = UINT32_MAX;
	uint64_t x251 = 4844699353022389979LLU;
	static uint16_t x252 = 7U;
	uint64_t t48 = 614996217LLU;

	t48 = ((x249*x250)/(x251|x252));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x253 = -1LL;
	int64_t x254 = 51616811LL;
	static int8_t x255 = -1;
	static volatile uint16_t x256 = 64U;
	volatile int64_t t49 = -205LL;

	t49 = ((x253*x254)/(x255|x256));

	if (t49 != 51616811LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x257 = -340787LL;
	uint16_t x258 = UINT16_MAX;
	uint16_t x259 = UINT16_MAX;
	int8_t x260 = INT8_MIN;

	t50 = ((x257*x258)/(x259|x260));

	if (t50 != 22333476045LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x261 = 337U;
	uint8_t x262 = 44U;
	int32_t t51 = -5;

	t51 = ((x261*x262)/(x263|x264));

	if (t51 != -14828) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x266 = INT8_MAX;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = 3763U;
	static int32_t t52 = -323591092;

	t52 = ((x265*x266)/(x267|x268));

	if (t52 != -26) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x269 = 256445562LLU;
	int8_t x270 = INT8_MIN;
	uint32_t x271 = UINT32_MAX;
	static volatile uint32_t x272 = 148U;

	t53 = ((x269*x270)/(x271|x272));

	if (t53 != 4294967289LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x273 = -1LL;
	static int64_t x274 = -1LL;
	static uint32_t x275 = UINT32_MAX;
	volatile uint32_t x276 = UINT32_MAX;
	int64_t t54 = 221LL;

	t54 = ((x273*x274)/(x275|x276));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x277 = -11;
	uint64_t x278 = UINT64_MAX;
	int16_t x279 = INT16_MAX;
	int32_t x280 = -1;

	t55 = ((x277*x278)/(x279|x280));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x281 = UINT64_MAX;
	int64_t x282 = 913480741214402LL;
	static uint8_t x283 = 1U;
	static int8_t x284 = INT8_MAX;
	uint64_t t56 = 31737704LLU;

	t56 = ((x281*x282)/(x283|x284));

	if (t56 != 145242760574553836LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x289 = -1LL;
	int8_t x290 = 0;
	volatile int16_t x291 = INT16_MIN;
	uint16_t x292 = 12U;
	static int64_t t57 = -1LL;

	t57 = ((x289*x290)/(x291|x292));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x293 = -1;
	static uint64_t x294 = UINT64_MAX;
	volatile uint64_t x296 = UINT64_MAX;
	uint64_t t58 = 392781850999055932LLU;

	t58 = ((x293*x294)/(x295|x296));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x302 = 28;
	int32_t x303 = INT32_MIN;
	volatile int16_t x304 = -1;
	int32_t t59 = -883;

	t59 = ((x301*x302)/(x303|x304));

	if (t59 != 3584) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x305 = INT8_MIN;
	int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MAX;
	volatile int32_t t60 = 332535;

	t60 = ((x305*x306)/(x307|x308));

	if (t60 != 16256) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x309 = -1;
	int8_t x310 = INT8_MIN;
	uint32_t x312 = 105982468U;
	static int64_t t61 = 1317786173745LL;

	t61 = ((x309*x310)/(x311|x312));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x314 = 3185U;
	uint64_t x315 = 145335847170867351LLU;
	int64_t x316 = INT64_MIN;
	volatile uint64_t t62 = 0LLU;

	t62 = ((x313*x314)/(x315|x316));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x321 = INT16_MIN;
	volatile int64_t x322 = -28563029297LL;
	volatile uint64_t x324 = 41548388401LLU;

	t63 = ((x321*x322)/(x323|x324));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x325 = UINT8_MAX;
	volatile uint8_t x326 = 0U;
	static int64_t x327 = INT64_MIN;
	int8_t x328 = 0;
	volatile int64_t t64 = 0LL;

	t64 = ((x325*x326)/(x327|x328));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x329 = -22855770775397LL;
	int16_t x330 = -219;
	volatile uint8_t x331 = 24U;
	int16_t x332 = INT16_MAX;
	int64_t t65 = -18586247045822629LL;

	t65 = ((x329*x330)/(x331|x332));

	if (t65 != 152757768480LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x333 = UINT32_MAX;
	uint8_t x334 = UINT8_MAX;
	int32_t x335 = -1;
	volatile uint32_t t66 = 504732509U;

	t66 = ((x333*x334)/(x335|x336));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x337 = INT32_MIN;
	int32_t x340 = 23454;

	t67 = ((x337*x338)/(x339|x340));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x349 = 393LLU;
	int16_t x350 = 13872;
	uint16_t x351 = 82U;
	volatile uint64_t x352 = 957597314944164LLU;
	volatile uint64_t t68 = 178776044638821325LLU;

	t68 = ((x349*x350)/(x351|x352));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x353 = -1;
	volatile uint16_t x354 = 861U;
	int64_t x355 = -1LL;
	volatile int64_t t69 = 105LL;

	t69 = ((x353*x354)/(x355|x356));

	if (t69 != 861LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x357 = -1;
	static uint8_t x358 = 3U;
	volatile int64_t x359 = INT64_MIN;
	int8_t x360 = 0;

	t70 = ((x357*x358)/(x359|x360));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x361 = INT16_MIN;
	uint32_t x363 = 90982693U;
	static volatile int8_t x364 = INT8_MIN;
	int64_t t71 = -6LL;

	t71 = ((x361*x362)/(x363|x364));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x365 = -1944459LL;
	static uint64_t x366 = 3502800428LLU;
	volatile int64_t x367 = -1LL;
	uint32_t x368 = 1090810369U;
	static volatile uint64_t t72 = 22LLU;

	t72 = ((x365*x366)/(x367|x368));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x370 = 503762U;
	uint32_t x371 = 8U;
	int32_t x372 = INT32_MIN;
	static volatile uint32_t t73 = 1451U;

	t73 = ((x369*x370)/(x371|x372));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x373 = INT16_MIN;
	int64_t x375 = INT64_MIN;
	volatile int64_t t74 = 416590477LL;

	t74 = ((x373*x374)/(x375|x376));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x377 = -1;
	int64_t x379 = -57748237918285702LL;
	uint32_t x380 = 21848482U;
	int64_t t75 = -5LL;

	t75 = ((x377*x378)/(x379|x380));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x382 = 33281259LLU;
	int16_t x383 = INT16_MAX;
	int8_t x384 = -1;
	uint64_t t76 = 33707LLU;

	t76 = ((x381*x382)/(x383|x384));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x386 = 4071U;
	uint32_t t77 = 987606U;

	t77 = ((x385*x386)/(x387|x388));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x390 = -1;
	uint64_t x392 = 830959LLU;

	t78 = ((x389*x390)/(x391|x392));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x393 = 30;
	int8_t x394 = -1;
	int8_t x395 = INT8_MIN;
	int32_t x396 = INT32_MIN;
	int32_t t79 = 1658;

	t79 = ((x393*x394)/(x395|x396));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x397 = -1LL;
	static int32_t x398 = -149298805;
	static int32_t x399 = -1;
	int64_t x400 = INT64_MIN;
	volatile int64_t t80 = -14006631543LL;

	t80 = ((x397*x398)/(x399|x400));

	if (t80 != -149298805LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x402 = INT32_MIN;

	t81 = ((x401*x402)/(x403|x404));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x406 = 1462273362998112LL;
	int64_t x407 = -1LL;
	volatile uint8_t x408 = 83U;
	volatile int64_t t82 = 56630999689384366LL;

	t82 = ((x405*x406)/(x407|x408));

	if (t82 != -372879707564518560LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x409 = 261793220U;
	volatile uint64_t x410 = UINT64_MAX;
	int64_t x412 = -20254744LL;
	uint64_t t83 = 14508410442LLU;

	t83 = ((x409*x410)/(x411|x412));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x413 = UINT8_MAX;
	uint16_t x414 = UINT16_MAX;
	volatile int32_t t84 = 11;

	t84 = ((x413*x414)/(x415|x416));

	if (t84 != -16711425) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x419 = 129;
	static uint8_t x420 = UINT8_MAX;
	int32_t t85 = 34;

	t85 = ((x417*x418)/(x419|x420));

	if (t85 != -12721) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x422 = -1LL;
	volatile int32_t x424 = INT32_MAX;
	static int64_t t86 = 27LL;

	t86 = ((x421*x422)/(x423|x424));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x425 = -1;
	int16_t x427 = -2817;
	int16_t x428 = INT16_MIN;
	int32_t t87 = -6;

	t87 = ((x425*x426)/(x427|x428));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x429 = 16;
	int8_t x431 = -10;
	static volatile int64_t x432 = INT64_MIN;
	volatile int64_t t88 = 22612928081LL;

	t88 = ((x429*x430)/(x431|x432));

	if (t88 != -246726702973100LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x433 = 4341U;
	uint64_t x434 = 224837298486410LLU;
	static int32_t x435 = -1;
	uint16_t x436 = UINT16_MAX;
	volatile uint64_t t89 = 1961092879951910LLU;

	t89 = ((x433*x434)/(x435|x436));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x437 = -1LL;
	int8_t x438 = -1;
	int32_t x439 = INT32_MIN;
	uint32_t x440 = 81U;
	volatile int64_t t90 = 16969563344LL;

	t90 = ((x437*x438)/(x439|x440));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x442 = UINT32_MAX;
	static int8_t x443 = 0;
	static int64_t x444 = INT64_MAX;
	volatile int64_t t91 = -34892753LL;

	t91 = ((x441*x442)/(x443|x444));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x445 = INT8_MAX;
	int64_t x447 = INT64_MAX;
	int32_t x448 = INT32_MAX;
	volatile int64_t t92 = 7153360LL;

	t92 = ((x445*x446)/(x447|x448));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x453 = 410341921U;
	static uint8_t x455 = 4U;
	uint8_t x456 = 44U;
	uint32_t t93 = 9933278U;

	t93 = ((x453*x454)/(x455|x456));

	if (t93 != 13041282U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x457 = INT8_MIN;
	uint64_t x458 = 23095573568932LLU;
	uint8_t x459 = UINT8_MAX;
	uint8_t x460 = 3U;

	t94 = ((x457*x458)/(x459|x460));

	if (t94 != 72328579765853836LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x461 = 20LL;
	static int16_t x462 = 24;
	static int16_t x463 = -1;
	volatile int64_t x464 = 4613LL;
	static volatile int64_t t95 = -46338LL;

	t95 = ((x461*x462)/(x463|x464));

	if (t95 != -480LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x469 = 719LLU;
	volatile int16_t x471 = INT16_MAX;
	int8_t x472 = 4;
	volatile uint64_t t96 = 1371843892242LLU;

	t96 = ((x469*x470)/(x471|x472));

	if (t96 != 47121822LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x478 = -4;
	volatile int64_t x479 = 3148175525901556120LL;
	int16_t x480 = 2165;
	volatile int64_t t97 = -55672265LL;

	t97 = ((x477*x478)/(x479|x480));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x481 = 30381U;
	uint16_t x482 = 2U;
	static volatile int64_t x483 = -154LL;
	volatile int16_t x484 = INT16_MIN;
	volatile int64_t t98 = -1018306LL;

	t98 = ((x481*x482)/(x483|x484));

	if (t98 != -394LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x489 = -1;
	int16_t x490 = -1;
	int16_t x491 = INT16_MAX;
	uint8_t x492 = UINT8_MAX;
	volatile int32_t t99 = -3;

	t99 = ((x489*x490)/(x491|x492));

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


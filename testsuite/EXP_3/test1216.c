#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = 104383467LLU;
uint16_t x9 = UINT16_MAX;
uint64_t x10 = 2499434370502181LLU;
static int8_t x11 = 1;
volatile int64_t t3 = 5LL;
int8_t x31 = 1;
static uint32_t x33 = UINT32_MAX;
volatile uint64_t t5 = 32015370172LLU;
int8_t x37 = 0;
volatile int32_t t6 = -20572388;
volatile uint64_t t7 = 0LLU;
int64_t x66 = -3182826LL;
volatile uint64_t x86 = 6302916LLU;
static uint64_t x102 = 230295LLU;
int8_t x105 = INT8_MIN;
int32_t x119 = INT32_MIN;
uint16_t x121 = 19U;
int64_t x124 = -1173366060418208LL;
int32_t x136 = -1;
static int32_t x140 = INT32_MIN;
uint64_t x146 = 7LLU;
uint64_t x148 = 539LLU;
volatile uint64_t t23 = 8896118243044LLU;
uint16_t x157 = 61U;
int8_t x158 = INT8_MAX;
volatile int8_t x164 = -1;
uint16_t x173 = 10266U;
uint32_t x182 = 9041198U;
uint32_t t31 = 258U;
volatile int64_t t32 = -47211LL;
int32_t x231 = INT32_MIN;
static volatile int16_t x249 = INT16_MIN;
int32_t t35 = -3;
static uint8_t x253 = 0U;
uint32_t x256 = UINT32_MAX;
static int32_t x261 = 576966;
static int32_t x263 = 1;
int8_t x264 = INT8_MIN;
volatile int32_t x281 = -16493;
static int16_t x283 = INT16_MAX;
volatile uint32_t t39 = 1U;
int64_t x291 = -883298217LL;
int32_t t41 = 9536;
static int16_t x294 = INT16_MIN;
static volatile int32_t x305 = INT32_MIN;
static int64_t x306 = -9038LL;
static int32_t x317 = 206;
int64_t x354 = 256478712498276LL;
static volatile int64_t t48 = -4674417596612360LL;
uint32_t x364 = UINT32_MAX;
volatile int32_t t50 = -3288;
static uint8_t x389 = 1U;
uint64_t x398 = 1LLU;
static uint64_t x407 = 124719463959LLU;
int8_t x429 = -1;
uint32_t x454 = UINT32_MAX;
int32_t x456 = -1;
uint64_t t60 = 494582LLU;
static uint32_t x457 = UINT32_MAX;
int16_t x458 = 25;
volatile uint32_t t61 = 1075940U;
static int8_t x473 = 21;
volatile int32_t t63 = 6;
int8_t x498 = 5;
volatile int64_t t68 = 59113047441LL;
uint64_t x537 = 211LLU;
int32_t x539 = -1;
volatile uint64_t t71 = 593233608LLU;
int16_t x554 = INT16_MIN;
int8_t x556 = INT8_MIN;
static volatile int32_t t73 = -579;
int64_t x589 = -25LL;
int64_t x599 = 23828168529629494LL;
volatile int64_t x600 = INT64_MIN;
volatile int32_t t78 = 31653831;
static uint8_t x614 = 7U;
volatile uint32_t t80 = 7442U;
int16_t x648 = INT16_MIN;
int32_t t82 = 68463;
int32_t t83 = 3;
static uint64_t x661 = 15061LLU;
int16_t x670 = INT16_MIN;
int8_t x671 = INT8_MIN;
int8_t x674 = -1;
volatile int64_t x686 = -770409LL;
uint64_t x688 = 872072710867870579LLU;
static volatile int64_t t90 = 3441593395LL;
uint8_t x716 = UINT8_MAX;
static uint64_t x718 = 3633243134167444505LLU;
static int64_t x719 = -1LL;
uint64_t x721 = 9902145465LLU;
int32_t x723 = INT32_MAX;
static uint32_t x724 = 34U;
int64_t x740 = INT64_MIN;
static uint8_t x754 = 29U;
uint8_t x755 = 14U;
int64_t x759 = INT64_MIN;
int8_t x761 = 2;
static volatile int16_t x764 = 2;


void f0(void) {
	static uint32_t x1 = 49U;
	volatile uint8_t x3 = 62U;
	int64_t x4 = -51453350LL;
	volatile uint64_t t0 = 89684788814LLU;

	t0 = ((x1*x2)>>(x3==x4));

	if (t0 != 5114789883LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x12 = INT8_MIN;
	uint64_t t1 = 1711683923847LLU;

	t1 = ((x9*x10)>>(x11==x12));

	if (t1 != 16226478881184018907LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -1;
	static volatile int8_t x18 = INT8_MIN;
	int64_t x19 = -233939371LL;
	int8_t x20 = INT8_MAX;
	int32_t t2 = 234;

	t2 = ((x17*x18)>>(x19==x20));

	if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = 1;
	volatile int64_t x26 = 1706851LL;
	static uint64_t x27 = 6165195414370LLU;
	uint16_t x28 = 75U;

	t3 = ((x25*x26)>>(x27==x28));

	if (t3 != 1706851LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x29 = 289959U;
	int32_t x30 = INT32_MIN;
	int16_t x32 = -1;
	static uint32_t t4 = 177U;

	t4 = ((x29*x30)>>(x31==x32));

	if (t4 != 2147483648U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x34 = 8132503270417014LLU;
	static int32_t x35 = INT32_MIN;
	volatile uint64_t x36 = UINT64_MAX;

	t5 = ((x33*x34)>>(x35==x36));

	if (t5 != 17903072948704419210LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x38 = -59;
	static int64_t x39 = INT64_MAX;
	volatile uint16_t x40 = 108U;

	t6 = ((x37*x38)>>(x39==x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x61 = 56301LLU;
	uint64_t x62 = UINT64_MAX;
	static uint32_t x63 = 166428405U;
	int16_t x64 = INT16_MIN;

	t7 = ((x61*x62)>>(x63==x64));

	if (t7 != 18446744073709495315LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x65 = -1;
	int8_t x67 = -1;
	uint8_t x68 = 0U;
	static int64_t t8 = -6322166656392918LL;

	t8 = ((x65*x66)>>(x67==x68));

	if (t8 != 3182826LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x69 = 151U;
	volatile int64_t x70 = 4123LL;
	int32_t x71 = INT32_MIN;
	int16_t x72 = -1;
	static int64_t t9 = -7899588086518201LL;

	t9 = ((x69*x70)>>(x71==x72));

	if (t9 != 622573LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x77 = INT64_MIN;
	uint64_t x78 = 4695LLU;
	uint64_t x79 = UINT64_MAX;
	volatile int8_t x80 = 2;
	uint64_t t10 = 3932769415251199LLU;

	t10 = ((x77*x78)>>(x79==x80));

	if (t10 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x85 = UINT64_MAX;
	static uint16_t x87 = UINT16_MAX;
	int64_t x88 = -1LL;
	uint64_t t11 = 504555236851LLU;

	t11 = ((x85*x86)>>(x87==x88));

	if (t11 != 18446744073703248700LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x93 = 12U;
	volatile uint16_t x94 = 1U;
	static int32_t x95 = INT32_MIN;
	int16_t x96 = INT16_MIN;
	volatile uint32_t t12 = 1127U;

	t12 = ((x93*x94)>>(x95==x96));

	if (t12 != 12U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x97 = 1515513128U;
	static uint32_t x98 = 403U;
	int32_t x99 = -1;
	volatile int64_t x100 = INT64_MIN;
	uint32_t t13 = 1U;

	t13 = ((x97*x98)>>(x99==x100));

	if (t13 != 866434552U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x101 = 27U;
	int8_t x103 = INT8_MAX;
	int64_t x104 = INT64_MAX;
	volatile uint64_t t14 = 26571057438370LLU;

	t14 = ((x101*x102)>>(x103==x104));

	if (t14 != 6217965LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x106 = INT8_MIN;
	static volatile int8_t x107 = 10;
	static int16_t x108 = 3;
	static volatile int32_t t15 = -1;

	t15 = ((x105*x106)>>(x107==x108));

	if (t15 != 16384) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x109 = 7U;
	static volatile int64_t x110 = 388626794450533LL;
	int8_t x111 = -1;
	int8_t x112 = 2;
	static volatile int64_t t16 = -122065956327LL;

	t16 = ((x109*x110)>>(x111==x112));

	if (t16 != 2720387561153731LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x113 = INT8_MIN;
	int8_t x114 = INT8_MIN;
	volatile uint64_t x115 = 96903970772169873LLU;
	int16_t x116 = 0;
	int32_t t17 = -85707;

	t17 = ((x113*x114)>>(x115==x116));

	if (t17 != 16384) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x117 = -1LL;
	int32_t x118 = INT32_MIN;
	int8_t x120 = INT8_MIN;
	int64_t t18 = -310166552589722515LL;

	t18 = ((x117*x118)>>(x119==x120));

	if (t18 != 2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x122 = 55U;
	int32_t x123 = INT32_MIN;
	int32_t t19 = 71174889;

	t19 = ((x121*x122)>>(x123==x124));

	if (t19 != 1045) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x129 = -1;
	int16_t x130 = 0;
	static volatile int32_t x131 = -1;
	int64_t x132 = INT64_MIN;
	static int32_t t20 = -308049;

	t20 = ((x129*x130)>>(x131==x132));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x133 = 0;
	int16_t x134 = INT16_MIN;
	uint16_t x135 = UINT16_MAX;
	int32_t t21 = 372;

	t21 = ((x133*x134)>>(x135==x136));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x137 = -23;
	int32_t x138 = 0;
	int16_t x139 = -6;
	volatile int32_t t22 = 37575737;

	t22 = ((x137*x138)>>(x139==x140));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x145 = INT8_MAX;
	int8_t x147 = -1;

	t23 = ((x145*x146)>>(x147==x148));

	if (t23 != 889LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x149 = 180;
	uint8_t x150 = 14U;
	static int8_t x151 = -1;
	int16_t x152 = INT16_MAX;
	volatile int32_t t24 = -3261;

	t24 = ((x149*x150)>>(x151==x152));

	if (t24 != 2520) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x159 = 14880U;
	uint64_t x160 = UINT64_MAX;
	int32_t t25 = 111488;

	t25 = ((x157*x158)>>(x159==x160));

	if (t25 != 7747) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x161 = INT8_MAX;
	uint8_t x162 = 6U;
	static int16_t x163 = -1;
	int32_t t26 = 22;

	t26 = ((x161*x162)>>(x163==x164));

	if (t26 != 381) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x174 = 7284753LLU;
	static uint32_t x175 = 3971U;
	volatile uint64_t x176 = 780640247246LLU;
	uint64_t t27 = 291083975068485335LLU;

	t27 = ((x173*x174)>>(x175==x176));

	if (t27 != 74785274298LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x177 = 0U;
	int64_t x178 = 2846261458LL;
	int64_t x179 = 36997649876828917LL;
	volatile uint16_t x180 = 59U;
	int64_t t28 = 1942766LL;

	t28 = ((x177*x178)>>(x179==x180));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x181 = INT32_MAX;
	int8_t x183 = -1;
	int32_t x184 = INT32_MIN;
	volatile uint32_t t29 = 38U;

	t29 = ((x181*x182)>>(x183==x184));

	if (t29 != 4285926098U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x189 = INT32_MIN;
	uint32_t x190 = 499U;
	static uint16_t x191 = 1505U;
	int16_t x192 = 0;
	uint32_t t30 = 3239U;

	t30 = ((x189*x190)>>(x191==x192));

	if (t30 != 2147483648U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x217 = 5;
	uint32_t x218 = 1U;
	int64_t x219 = INT64_MAX;
	int32_t x220 = -1;

	t31 = ((x217*x218)>>(x219==x220));

	if (t31 != 5U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x221 = -392LL;
	int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MIN;
	static int16_t x224 = INT16_MAX;

	t32 = ((x221*x222)>>(x223==x224));

	if (t32 != 50176LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x225 = 1494777U;
	int8_t x226 = -1;
	uint32_t x227 = 78338U;
	int16_t x228 = INT16_MIN;
	volatile uint32_t t33 = 359676U;

	t33 = ((x225*x226)>>(x227==x228));

	if (t33 != 4293472519U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x229 = INT8_MIN;
	uint32_t x230 = 61061982U;
	volatile int8_t x232 = -1;
	uint32_t t34 = 1U;

	t34 = ((x229*x230)>>(x231==x232));

	if (t34 != 774000896U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x250 = -141;
	static uint64_t x251 = 202144583405LLU;
	static volatile int16_t x252 = INT16_MIN;

	t35 = ((x249*x250)>>(x251==x252));

	if (t35 != 4620288) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x254 = INT64_MAX;
	int16_t x255 = 35;
	volatile int64_t t36 = -7187284376822LL;

	t36 = ((x253*x254)>>(x255==x256));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x262 = INT8_MAX;
	volatile int32_t t37 = 2777709;

	t37 = ((x261*x262)>>(x263==x264));

	if (t37 != 73274682) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;
	uint32_t x267 = 5206U;
	int64_t x268 = INT64_MIN;
	int32_t t38 = -329217941;

	t38 = ((x265*x266)>>(x267==x268));

	if (t38 != 16384) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x282 = UINT32_MAX;
	int16_t x284 = -3;

	t39 = ((x281*x282)>>(x283==x284));

	if (t39 != 16493U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x285 = -1;
	static volatile int8_t x286 = INT8_MIN;
	static volatile uint16_t x287 = UINT16_MAX;
	int64_t x288 = -1LL;
	static int32_t t40 = -393906;

	t40 = ((x285*x286)>>(x287==x288));

	if (t40 != 128) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x289 = INT32_MIN;
	volatile int8_t x290 = 0;
	volatile int32_t x292 = INT32_MIN;

	t41 = ((x289*x290)>>(x291==x292));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x293 = 823602LLU;
	volatile uint64_t x295 = 226551LLU;
	uint32_t x296 = 40098961U;
	volatile uint64_t t42 = 2647LLU;

	t42 = ((x293*x294)>>(x295==x296));

	if (t42 != 18446744046721761280LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x301 = 200510894U;
	int8_t x302 = INT8_MIN;
	int64_t x303 = -110217948249883456LL;
	volatile int32_t x304 = -1;
	volatile uint32_t t43 = 546938467U;

	t43 = ((x301*x302)>>(x303==x304));

	if (t43 != 104409344U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x307 = UINT64_MAX;
	int32_t x308 = 28294;
	volatile int64_t t44 = 4545973866846LL;

	t44 = ((x305*x306)>>(x307==x308));

	if (t44 != 19408957210624LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x313 = -1;
	volatile int8_t x314 = INT8_MIN;
	int32_t x315 = -1;
	static volatile int16_t x316 = INT16_MAX;
	static int32_t t45 = -195;

	t45 = ((x313*x314)>>(x315==x316));

	if (t45 != 128) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x318 = 28177U;
	int32_t x319 = INT32_MIN;
	int64_t x320 = -35951852LL;
	uint32_t t46 = 395U;

	t46 = ((x317*x318)>>(x319==x320));

	if (t46 != 5804462U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x321 = INT16_MIN;
	uint64_t x322 = 16057LLU;
	int8_t x323 = 2;
	int32_t x324 = INT32_MIN;
	uint64_t t47 = 68319824020319LLU;

	t47 = ((x321*x322)>>(x323==x324));

	if (t47 != 18446744073183395840LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x353 = INT16_MAX;
	static int32_t x355 = -1;
	static int8_t x356 = INT8_MIN;

	t48 = ((x353*x354)>>(x355==x356));

	if (t48 != 8404037972431009692LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x361 = -1;
	static volatile int8_t x362 = -1;
	int16_t x363 = INT16_MIN;
	volatile int32_t t49 = 204458576;

	t49 = ((x361*x362)>>(x363==x364));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x373 = -1;
	int8_t x374 = -1;
	int64_t x375 = 0LL;
	volatile uint16_t x376 = 7724U;

	t50 = ((x373*x374)>>(x375==x376));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x381 = 148867359U;
	int8_t x382 = INT8_MIN;
	static volatile uint8_t x383 = UINT8_MAX;
	int16_t x384 = INT16_MIN;
	static uint32_t t51 = 105602U;

	t51 = ((x381*x382)>>(x383==x384));

	if (t51 != 2419814528U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x385 = UINT16_MAX;
	int64_t x386 = 2205286299463LL;
	volatile uint8_t x387 = 52U;
	uint8_t x388 = 7U;
	static volatile int64_t t52 = -102903LL;

	t52 = ((x385*x386)>>(x387==x388));

	if (t52 != 144523437635307705LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x390 = 113U;
	int64_t x391 = INT64_MIN;
	int32_t x392 = -715;
	volatile int32_t t53 = -5;

	t53 = ((x389*x390)>>(x391==x392));

	if (t53 != 113) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x397 = INT32_MAX;
	int32_t x399 = INT32_MIN;
	int64_t x400 = INT64_MIN;
	uint64_t t54 = 559907930232LLU;

	t54 = ((x397*x398)>>(x399==x400));

	if (t54 != 2147483647LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x405 = 1U;
	uint32_t x406 = 10828U;
	static int8_t x408 = -6;
	uint32_t t55 = 113U;

	t55 = ((x405*x406)>>(x407==x408));

	if (t55 != 10828U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x417 = UINT32_MAX;
	int32_t x418 = INT32_MIN;
	uint16_t x419 = UINT16_MAX;
	int64_t x420 = -2120LL;
	volatile uint32_t t56 = 825122U;

	t56 = ((x417*x418)>>(x419==x420));

	if (t56 != 2147483648U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x430 = UINT32_MAX;
	uint32_t x431 = 916U;
	int32_t x432 = -1;
	uint32_t t57 = 0U;

	t57 = ((x429*x430)>>(x431==x432));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x433 = INT8_MAX;
	volatile uint8_t x434 = UINT8_MAX;
	uint16_t x435 = 111U;
	volatile uint8_t x436 = 1U;
	volatile int32_t t58 = 389326279;

	t58 = ((x433*x434)>>(x435==x436));

	if (t58 != 32385) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x441 = INT32_MIN;
	static uint32_t x442 = 73U;
	uint64_t x443 = 33325614513333717LLU;
	int8_t x444 = 10;
	uint32_t t59 = 3370U;

	t59 = ((x441*x442)>>(x443==x444));

	if (t59 != 2147483648U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x453 = 1941LLU;
	static volatile int32_t x455 = INT32_MAX;

	t60 = ((x453*x454)>>(x455==x456));

	if (t60 != 8336531519595LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x459 = -913325;
	int8_t x460 = INT8_MIN;

	t61 = ((x457*x458)>>(x459==x460));

	if (t61 != 4294967271U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x469 = -1LL;
	int8_t x470 = -17;
	static volatile uint32_t x471 = 1U;
	int32_t x472 = INT32_MIN;
	volatile int64_t t62 = -31050254190560385LL;

	t62 = ((x469*x470)>>(x471==x472));

	if (t62 != 17LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x474 = INT16_MAX;
	uint8_t x475 = 6U;
	uint64_t x476 = 7670580063LLU;

	t63 = ((x473*x474)>>(x475==x476));

	if (t63 != 688107) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x489 = INT8_MIN;
	int16_t x490 = -465;
	int8_t x491 = 35;
	int16_t x492 = INT16_MAX;
	static volatile int32_t t64 = -26757;

	t64 = ((x489*x490)>>(x491==x492));

	if (t64 != 59520) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x493 = UINT64_MAX;
	volatile int16_t x494 = INT16_MIN;
	int8_t x495 = INT8_MIN;
	uint32_t x496 = 1612365480U;
	uint64_t t65 = 2144LLU;

	t65 = ((x493*x494)>>(x495==x496));

	if (t65 != 32768LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x497 = 147038811406LLU;
	int64_t x499 = -1985LL;
	static uint16_t x500 = 2U;
	uint64_t t66 = 141366447LLU;

	t66 = ((x497*x498)>>(x499==x500));

	if (t66 != 735194057030LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x505 = UINT8_MAX;
	uint16_t x506 = 12317U;
	volatile int8_t x507 = INT8_MIN;
	int32_t x508 = INT32_MIN;
	static int32_t t67 = -883965;

	t67 = ((x505*x506)>>(x507==x508));

	if (t67 != 3140835) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x509 = -8657392708LL;
	int32_t x510 = -1;
	uint64_t x511 = UINT64_MAX;
	uint32_t x512 = 5632U;

	t68 = ((x509*x510)>>(x511==x512));

	if (t68 != 8657392708LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x513 = INT64_MAX;
	volatile int16_t x514 = 0;
	volatile uint64_t x515 = 413213050071608362LLU;
	volatile int8_t x516 = INT8_MIN;
	int64_t t69 = -15LL;

	t69 = ((x513*x514)>>(x515==x516));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x529 = INT16_MIN;
	int16_t x530 = -1;
	uint8_t x531 = UINT8_MAX;
	volatile int32_t x532 = INT32_MAX;
	static int32_t t70 = -3444;

	t70 = ((x529*x530)>>(x531==x532));

	if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x538 = UINT32_MAX;
	volatile uint16_t x540 = 0U;

	t71 = ((x537*x538)>>(x539==x540));

	if (t71 != 906238099245LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x541 = 1U;
	volatile int64_t x542 = INT64_MAX;
	volatile uint32_t x543 = UINT32_MAX;
	int16_t x544 = INT16_MAX;
	int64_t t72 = INT64_MAX;

	t72 = ((x541*x542)>>(x543==x544));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x553 = -1;
	volatile int16_t x555 = INT16_MIN;

	t73 = ((x553*x554)>>(x555==x556));

	if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x561 = INT16_MIN;
	volatile int16_t x562 = 0;
	static int64_t x563 = INT64_MIN;
	volatile int16_t x564 = -1;
	static volatile int32_t t74 = 1949;

	t74 = ((x561*x562)>>(x563==x564));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x569 = INT16_MIN;
	static int16_t x570 = INT16_MIN;
	int32_t x571 = INT32_MIN;
	volatile int32_t x572 = -99472533;
	volatile int32_t t75 = 14442;

	t75 = ((x569*x570)>>(x571==x572));

	if (t75 != 1073741824) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x590 = INT32_MIN;
	uint64_t x591 = 41705765917121LLU;
	volatile int8_t x592 = -1;
	volatile int64_t t76 = -1LL;

	t76 = ((x589*x590)>>(x591==x592));

	if (t76 != 53687091200LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x597 = -1;
	static uint64_t x598 = 46672058292223489LLU;
	volatile uint64_t t77 = 41899LLU;

	t77 = ((x597*x598)>>(x599==x600));

	if (t77 != 18400072015417328127LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x601 = 7;
	uint8_t x602 = 1U;
	int64_t x603 = -1LL;
	int64_t x604 = INT64_MIN;

	t78 = ((x601*x602)>>(x603==x604));

	if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x605 = INT8_MAX;
	uint64_t x606 = UINT64_MAX;
	static uint32_t x607 = 845U;
	volatile uint16_t x608 = 3560U;
	uint64_t t79 = 313348217919LLU;

	t79 = ((x605*x606)>>(x607==x608));

	if (t79 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x613 = 1337354335U;
	volatile int16_t x615 = -13;
	int16_t x616 = 664;

	t80 = ((x613*x614)>>(x615==x616));

	if (t80 != 771545753U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x633 = 1U;
	uint16_t x634 = UINT16_MAX;
	volatile uint32_t x635 = 22692U;
	uint64_t x636 = 4100335255957LLU;
	volatile int32_t t81 = -128;

	t81 = ((x633*x634)>>(x635==x636));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x645 = 2;
	uint16_t x646 = 15919U;
	volatile int32_t x647 = -3062;

	t82 = ((x645*x646)>>(x647==x648));

	if (t82 != 31838) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x649 = INT16_MIN;
	int8_t x650 = INT8_MIN;
	uint16_t x651 = UINT16_MAX;
	int64_t x652 = INT64_MAX;

	t83 = ((x649*x650)>>(x651==x652));

	if (t83 != 4194304) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x662 = 733U;
	volatile int32_t x663 = -1;
	int64_t x664 = INT64_MIN;
	uint64_t t84 = 220LLU;

	t84 = ((x661*x662)>>(x663==x664));

	if (t84 != 11039713LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x665 = UINT32_MAX;
	int8_t x666 = INT8_MIN;
	int32_t x667 = INT32_MIN;
	volatile int32_t x668 = INT32_MIN;
	uint32_t t85 = 1701737221U;

	t85 = ((x665*x666)>>(x667==x668));

	if (t85 != 64U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x669 = 837888U;
	int64_t x672 = 320918764347303876LL;
	uint32_t t86 = 5U;

	t86 = ((x669*x670)>>(x671==x672));

	if (t86 != 2608857088U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x673 = -1LL;
	volatile uint32_t x675 = 28863089U;
	int16_t x676 = 7;
	static volatile int64_t t87 = -763273924LL;

	t87 = ((x673*x674)>>(x675==x676));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x677 = 1U;
	uint8_t x678 = UINT8_MAX;
	uint16_t x679 = 0U;
	uint32_t x680 = 1U;
	static int32_t t88 = 758;

	t88 = ((x677*x678)>>(x679==x680));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x681 = INT32_MIN;
	int64_t x682 = -3119035LL;
	int16_t x683 = -1;
	uint32_t x684 = UINT32_MAX;
	volatile int64_t t89 = -2988766169856827551LL;

	t89 = ((x681*x682)>>(x683==x684));

	if (t89 != 3349038330019840LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x685 = INT32_MIN;
	uint8_t x687 = 22U;

	t90 = ((x685*x686)>>(x687==x688));

	if (t90 != 1654440729772032LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x713 = 0;
	static int32_t x714 = 564380080;
	int64_t x715 = -1LL;
	int32_t t91 = 382;

	t91 = ((x713*x714)>>(x715==x716));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x717 = -4455242528325196092LL;
	static volatile int16_t x720 = INT16_MIN;
	volatile uint64_t t92 = 412LLU;

	t92 = ((x717*x718)>>(x719==x720));

	if (t92 != 12869874993829574948LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x722 = INT32_MAX;
	uint64_t t93 = 22825609264LLU;

	t93 = ((x721*x722)>>(x723==x724));

	if (t93 != 2817951382593159239LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x729 = UINT32_MAX;
	volatile uint16_t x730 = UINT16_MAX;
	int64_t x731 = INT64_MAX;
	uint8_t x732 = UINT8_MAX;
	volatile uint32_t t94 = 93712U;

	t94 = ((x729*x730)>>(x731==x732));

	if (t94 != 4294901761U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x733 = -1;
	int8_t x734 = -1;
	int32_t x735 = INT32_MIN;
	uint16_t x736 = 0U;
	int32_t t95 = 14848647;

	t95 = ((x733*x734)>>(x735==x736));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x737 = 2;
	int16_t x738 = 1;
	static volatile int32_t x739 = INT32_MIN;
	int32_t t96 = 25;

	t96 = ((x737*x738)>>(x739==x740));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x753 = UINT8_MAX;
	int16_t x756 = INT16_MIN;
	int32_t t97 = 129020;

	t97 = ((x753*x754)>>(x755==x756));

	if (t97 != 7395) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x757 = INT8_MAX;
	static uint16_t x758 = UINT16_MAX;
	int64_t x760 = 13333945516272325LL;
	volatile int32_t t98 = 985;

	t98 = ((x757*x758)>>(x759==x760));

	if (t98 != 8322945) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x762 = 6;
	uint32_t x763 = 59779239U;
	volatile int32_t t99 = 448;

	t99 = ((x761*x762)>>(x763==x764));

	if (t99 != 12) { NG(); } else { ; }
	
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


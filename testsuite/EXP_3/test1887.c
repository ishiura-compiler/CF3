#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MIN;
int32_t x3 = INT32_MAX;
static int32_t x4 = 695853;
int16_t x8 = -1;
int16_t x9 = 7311;
volatile int32_t t2 = 20459;
static int8_t x31 = 54;
static int8_t x34 = 52;
int8_t x35 = -1;
int16_t x37 = INT16_MAX;
static uint32_t t5 = 0U;
uint64_t t6 = 16093032198049LLU;
static volatile uint64_t x50 = 480331140512579007LLU;
int64_t t8 = 7911770744702LL;
volatile int64_t x73 = -1LL;
static uint64_t x78 = 1LLU;
volatile uint64_t x79 = 14150897LLU;
int32_t x81 = INT32_MAX;
volatile int8_t x83 = INT8_MAX;
uint8_t x85 = 0U;
volatile uint8_t x97 = 3U;
int32_t x98 = -48393231;
static int32_t x102 = INT32_MIN;
int8_t x108 = INT8_MAX;
static volatile int8_t x110 = INT8_MIN;
int8_t x113 = INT8_MIN;
volatile int64_t x115 = INT64_MIN;
int64_t x116 = -30020477504537145LL;
volatile uint32_t t21 = 25798380U;
volatile int64_t t22 = -999008LL;
int32_t x136 = 3565400;
volatile uint32_t x157 = 1606U;
volatile int16_t x158 = 715;
uint64_t t26 = 31LLU;
int64_t x175 = INT64_MAX;
volatile int16_t x176 = INT16_MIN;
int16_t x177 = -1;
uint64_t x179 = 2597507335286519095LLU;
static int32_t x187 = -1;
volatile uint32_t x204 = 8192025U;
uint8_t x205 = 108U;
int64_t x216 = 49427332336LL;
int16_t x217 = -1;
int8_t x227 = -1;
static volatile uint8_t x229 = 10U;
int64_t x233 = INT64_MIN;
uint64_t x242 = 126102853224180941LLU;
uint32_t x253 = UINT32_MAX;
static int64_t x258 = -1LL;
static int8_t x264 = -1;
uint8_t x272 = 4U;
int64_t t45 = 1884765457444490LL;
volatile int32_t x277 = -1;
int32_t x286 = INT32_MAX;
int16_t x287 = -1;
uint64_t t49 = 2627459LLU;
int64_t x300 = -1LL;
int16_t x310 = -1;
int64_t x312 = 446858LL;
volatile uint8_t x323 = 0U;
uint32_t x334 = 2U;
uint8_t x374 = UINT8_MAX;
static uint64_t x376 = UINT64_MAX;
int64_t x380 = 9409LL;
int64_t t61 = -264164863963270182LL;
static volatile int16_t x381 = -1;
int8_t x384 = 7;
uint16_t x387 = 505U;
int8_t x407 = INT8_MIN;
int32_t t65 = 1;
volatile int64_t x421 = -258973LL;
volatile uint8_t x422 = 60U;
volatile int64_t t68 = 88337202116LL;
int16_t x426 = INT16_MIN;
uint64_t x431 = UINT64_MAX;
static int64_t x432 = -1LL;
int16_t x453 = INT16_MAX;
uint32_t x455 = 1U;
int16_t x456 = INT16_MIN;
static uint16_t x461 = 23U;
volatile int64_t t76 = 784649721LL;
uint16_t x480 = 54U;
int32_t t78 = -172;
int16_t x489 = INT16_MIN;
volatile int32_t x491 = -1;
int8_t x494 = INT8_MIN;
int8_t x497 = INT8_MIN;
uint8_t x498 = 19U;
uint32_t x499 = UINT32_MAX;
volatile uint64_t t81 = 173814560814LLU;
int32_t x504 = INT32_MAX;
volatile uint16_t x515 = 1U;
uint64_t x517 = 1098781893LLU;
uint64_t t86 = 12633289LLU;
static int64_t x535 = INT64_MAX;
int64_t x538 = -1LL;
uint32_t x556 = 3U;
uint8_t x559 = 31U;
int8_t x561 = INT8_MAX;
int64_t t93 = 503565436241LL;
uint64_t x568 = 489054894107LLU;
uint32_t x575 = UINT32_MAX;
uint64_t t96 = 1329968LLU;
uint64_t x585 = UINT64_MAX;
uint64_t t98 = 286764LLU;
int32_t x591 = INT32_MIN;


void f0(void) {
	int64_t x2 = -1LL;
	int64_t t0 = 1003561LL;

	t0 = ((x1*x2)-(x3|x4));

	if (t0 != -2147483519LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	static uint32_t x6 = 864874269U;
	uint32_t x7 = 10807410U;
	static uint32_t t1 = 16417706U;

	t1 = ((x5*x6)-(x7|x8));

	if (t1 != 3430093028U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = 1U;
	int8_t x11 = 2;
	volatile int16_t x12 = -7;

	t2 = ((x9*x10)-(x11|x12));

	if (t2 != 7316) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = -1;
	uint64_t x30 = UINT64_MAX;
	uint32_t x32 = UINT32_MAX;
	static uint64_t t3 = 3LLU;

	t3 = ((x29*x30)-(x31|x32));

	if (t3 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x33 = UINT64_MAX;
	volatile int8_t x36 = 0;
	volatile uint64_t t4 = 238599876373LLU;

	t4 = ((x33*x34)-(x35|x36));

	if (t4 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x38 = -1;
	volatile uint32_t x39 = UINT32_MAX;
	int8_t x40 = INT8_MAX;

	t5 = ((x37*x38)-(x39|x40));

	if (t5 != 4294934530U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x41 = 30080288188195827LLU;
	int8_t x42 = INT8_MIN;
	int64_t x43 = -1LL;
	static int64_t x44 = 797755LL;

	t6 = ((x41*x42)-(x43|x44));

	if (t6 != 14596467185620485761LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MIN;
	int32_t x51 = INT32_MAX;
	uint32_t x52 = 538062827U;
	uint64_t t7 = 1LLU;

	t7 = ((x49*x50)-(x51|x52));

	if (t7 != 14028626629620695041LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x53 = 30U;
	volatile int16_t x54 = 477;
	int64_t x55 = INT64_MAX;
	static volatile uint32_t x56 = 70U;

	t8 = ((x53*x54)-(x55|x56));

	if (t8 != -9223372036854761497LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x69 = -1;
	volatile uint32_t x70 = UINT32_MAX;
	int32_t x71 = INT32_MIN;
	int64_t x72 = INT64_MIN;
	int64_t t9 = -740736210LL;

	t9 = ((x69*x70)-(x71|x72));

	if (t9 != 2147483649LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x74 = INT8_MIN;
	int64_t x75 = INT64_MAX;
	volatile int16_t x76 = INT16_MIN;
	volatile int64_t t10 = 48LL;

	t10 = ((x73*x74)-(x75|x76));

	if (t10 != 129LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x77 = -12600LL;
	uint8_t x80 = 9U;
	uint64_t t11 = 13015924557920LLU;

	t11 = ((x77*x78)-(x79|x80));

	if (t11 != 18446744073695388111LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x82 = 7653U;
	int32_t x84 = 969943;
	volatile uint32_t t12 = 192U;

	t12 = ((x81*x82)-(x83|x84));

	if (t12 != 2146506012U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x86 = 1U;
	static volatile int8_t x87 = -1;
	static uint16_t x88 = UINT16_MAX;
	int32_t t13 = 0;

	t13 = ((x85*x86)-(x87|x88));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x89 = UINT64_MAX;
	uint8_t x90 = UINT8_MAX;
	int16_t x91 = INT16_MAX;
	volatile uint16_t x92 = 31085U;
	uint64_t t14 = 116567LLU;

	t14 = ((x89*x90)-(x91|x92));

	if (t14 != 18446744073709518594LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x99 = 104;
	int8_t x100 = INT8_MAX;
	volatile int32_t t15 = -1274343;

	t15 = ((x97*x98)-(x99|x100));

	if (t15 != -145179820) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x101 = UINT32_MAX;
	static uint16_t x103 = 47U;
	static uint32_t x104 = UINT32_MAX;
	uint32_t t16 = 99012714U;

	t16 = ((x101*x102)-(x103|x104));

	if (t16 != 2147483649U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x105 = 54573LL;
	int16_t x106 = -30;
	uint8_t x107 = 6U;
	int64_t t17 = 181253481408704LL;

	t17 = ((x105*x106)-(x107|x108));

	if (t17 != -1637317LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x109 = UINT64_MAX;
	volatile int16_t x111 = -1;
	volatile uint32_t x112 = UINT32_MAX;
	uint64_t t18 = 5888313472LLU;

	t18 = ((x109*x110)-(x111|x112));

	if (t18 != 18446744069414584449LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x114 = 1;
	int64_t t19 = -1LL;

	t19 = ((x113*x114)-(x115|x116));

	if (t19 != 30020477504537017LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x117 = UINT32_MAX;
	volatile uint8_t x118 = 2U;
	int64_t x119 = 1121499506129481814LL;
	int16_t x120 = INT16_MIN;
	volatile int64_t t20 = -467644971LL;

	t20 = ((x117*x118)-(x119|x120));

	if (t20 != 4294987688LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x121 = UINT8_MAX;
	uint32_t x122 = 11212U;
	int16_t x123 = INT16_MIN;
	int8_t x124 = INT8_MIN;

	t21 = ((x121*x122)-(x123|x124));

	if (t21 != 2859188U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x129 = 333731243U;
	int64_t x130 = -1597007LL;
	static volatile int32_t x131 = -1;
	static int8_t x132 = INT8_MIN;

	t22 = ((x129*x130)-(x131|x132));

	if (t22 != -532971131189700LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x133 = -1;
	uint16_t x134 = 1U;
	uint16_t x135 = UINT16_MAX;
	volatile int32_t t23 = -47611;

	t23 = ((x133*x134)-(x135|x136));

	if (t23 != -3604480) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x145 = 66U;
	int16_t x146 = INT16_MIN;
	static uint16_t x147 = 187U;
	int32_t x148 = INT32_MIN;
	int32_t t24 = 918784;

	t24 = ((x145*x146)-(x147|x148));

	if (t24 != 2145320773) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x153 = INT8_MIN;
	uint64_t x154 = UINT64_MAX;
	uint16_t x155 = 60U;
	int16_t x156 = INT16_MIN;
	volatile uint64_t t25 = 6625951834572LLU;

	t25 = ((x153*x154)-(x155|x156));

	if (t25 != 32836LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x159 = 7025275993LLU;
	int64_t x160 = INT64_MIN;

	t26 = ((x157*x158)-(x159|x160));

	if (t26 != 9223372029830648105LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x169 = UINT16_MAX;
	int8_t x170 = 2;
	volatile int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MIN;
	volatile int64_t t27 = -358188531381LL;

	t27 = ((x169*x170)-(x171|x172));

	if (t27 != 131198LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x173 = 102;
	int8_t x174 = -2;
	static int64_t t28 = -390LL;

	t28 = ((x173*x174)-(x175|x176));

	if (t28 != -203LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x178 = 37U;
	static int16_t x180 = INT16_MIN;
	uint64_t t29 = 140036LLU;

	t29 = ((x177*x178)-(x179|x180));

	if (t29 != 2724LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x185 = 12095;
	int8_t x186 = 9;
	uint16_t x188 = 34U;
	int32_t t30 = -3192;

	t30 = ((x185*x186)-(x187|x188));

	if (t30 != 108856) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x189 = 358U;
	volatile uint64_t x190 = 4802854333705LLU;
	uint64_t x191 = UINT64_MAX;
	static int64_t x192 = INT64_MAX;
	uint64_t t31 = 21LLU;

	t31 = ((x189*x190)-(x191|x192));

	if (t31 != 1719421851466391LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x197 = 27U;
	static int8_t x198 = INT8_MAX;
	uint32_t x199 = UINT32_MAX;
	uint8_t x200 = 78U;
	uint32_t t32 = 2382U;

	t32 = ((x197*x198)-(x199|x200));

	if (t32 != 3430U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x201 = INT8_MIN;
	static volatile uint64_t x202 = 4399312LLU;
	static int64_t x203 = 60541848733006LL;
	volatile uint64_t t33 = 127LLU;

	t33 = ((x201*x202)-(x203|x204));

	if (t33 != 18446683531295871649LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x206 = 77U;
	uint64_t x207 = 3089520273148776LLU;
	uint32_t x208 = 506U;
	volatile uint64_t t34 = 1067705906861899LLU;

	t34 = ((x205*x206)-(x207|x208));

	if (t34 != 18443654553436411010LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x213 = INT16_MIN;
	static int64_t x214 = -1LL;
	uint8_t x215 = 4U;
	volatile int64_t t35 = -1937720616507675637LL;

	t35 = ((x213*x214)-(x215|x216));

	if (t35 != -49427299572LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x218 = INT8_MAX;
	static uint8_t x219 = 5U;
	static int32_t x220 = INT32_MIN;
	int32_t t36 = 14899;

	t36 = ((x217*x218)-(x219|x220));

	if (t36 != 2147483516) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x225 = -326199533LL;
	int8_t x226 = -1;
	int8_t x228 = INT8_MAX;
	volatile int64_t t37 = -167507LL;

	t37 = ((x225*x226)-(x227|x228));

	if (t37 != 326199534LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x230 = 17537324U;
	volatile int64_t x231 = -1LL;
	int64_t x232 = INT64_MIN;
	static int64_t t38 = 1LL;

	t38 = ((x229*x230)-(x231|x232));

	if (t38 != 175373241LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x234 = UINT64_MAX;
	volatile int8_t x235 = INT8_MAX;
	uint32_t x236 = 819163617U;
	static uint64_t t39 = 1323662923LLU;

	t39 = ((x233*x234)-(x235|x236));

	if (t39 != 9223372036035612161LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x241 = 61LL;
	volatile int64_t x243 = INT64_MIN;
	int8_t x244 = INT8_MIN;
	volatile uint64_t t40 = 18003LLU;

	t40 = ((x241*x242)-(x243|x244));

	if (t40 != 7692274046675037529LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x245 = 3;
	int8_t x246 = INT8_MAX;
	static uint16_t x247 = 948U;
	volatile uint16_t x248 = 1563U;
	int32_t t41 = 2947306;

	t41 = ((x245*x246)-(x247|x248));

	if (t41 != -1602) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x254 = UINT64_MAX;
	static int8_t x255 = INT8_MIN;
	volatile int8_t x256 = INT8_MIN;
	uint64_t t42 = 16924917539LLU;

	t42 = ((x253*x254)-(x255|x256));

	if (t42 != 18446744069414584449LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x257 = INT64_MAX;
	int8_t x259 = 1;
	int16_t x260 = INT16_MIN;
	volatile int64_t t43 = -1681111112369LL;

	t43 = ((x257*x258)-(x259|x260));

	if (t43 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x261 = -1;
	int32_t x262 = -3;
	uint16_t x263 = UINT16_MAX;
	int32_t t44 = 0;

	t44 = ((x261*x262)-(x263|x264));

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x269 = 1891882325753LL;
	volatile int8_t x270 = -1;
	static uint8_t x271 = 1U;

	t45 = ((x269*x270)-(x271|x272));

	if (t45 != -1891882325758LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x278 = UINT32_MAX;
	int64_t x279 = INT64_MAX;
	uint8_t x280 = UINT8_MAX;
	int64_t t46 = 357LL;

	t46 = ((x277*x278)-(x279|x280));

	if (t46 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x285 = 34U;
	uint16_t x288 = 12747U;
	uint32_t t47 = 153U;

	t47 = ((x285*x286)-(x287|x288));

	if (t47 != 4294967263U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x289 = UINT64_MAX;
	int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MIN;
	volatile int16_t x292 = INT16_MAX;
	static volatile uint64_t t48 = 21LLU;

	t48 = ((x289*x290)-(x291|x292));

	if (t48 != 2147483649LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x293 = UINT64_MAX;
	int16_t x294 = 105;
	uint16_t x295 = UINT16_MAX;
	int32_t x296 = -1;

	t49 = ((x293*x294)-(x295|x296));

	if (t49 != 18446744073709551512LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x297 = -7630;
	uint32_t x298 = UINT32_MAX;
	uint64_t x299 = 76130682223LLU;
	volatile uint64_t t50 = 956LLU;

	t50 = ((x297*x298)-(x299|x300));

	if (t50 != 7631LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x305 = UINT32_MAX;
	int8_t x306 = INT8_MAX;
	static volatile int32_t x307 = -1;
	static int64_t x308 = -1LL;
	volatile int64_t t51 = -4151221855332606LL;

	t51 = ((x305*x306)-(x307|x308));

	if (t51 != 4294967170LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x309 = INT32_MAX;
	int8_t x311 = -3;
	int64_t t52 = -248871603222993LL;

	t52 = ((x309*x310)-(x311|x312));

	if (t52 != -2147483646LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x313 = INT8_MIN;
	uint32_t x314 = 1552384U;
	int32_t x315 = INT32_MIN;
	uint8_t x316 = UINT8_MAX;
	volatile uint32_t t53 = 90U;

	t53 = ((x313*x314)-(x315|x316));

	if (t53 != 1948778241U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x321 = INT16_MIN;
	uint32_t x322 = 54336U;
	uint64_t x324 = 4LLU;
	uint64_t t54 = 12LLU;

	t54 = ((x321*x322)-(x323|x324));

	if (t54 != 2514485244LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x325 = -1;
	uint64_t x326 = 121LLU;
	volatile uint16_t x327 = 37U;
	int16_t x328 = INT16_MAX;
	volatile uint64_t t55 = 2789LLU;

	t55 = ((x325*x326)-(x327|x328));

	if (t55 != 18446744073709518728LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x333 = INT32_MIN;
	int16_t x335 = 41;
	int64_t x336 = INT64_MAX;
	int64_t t56 = 1288511930LL;

	t56 = ((x333*x334)-(x335|x336));

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x353 = UINT64_MAX;
	static int8_t x354 = -1;
	static int64_t x355 = INT64_MIN;
	int32_t x356 = -21258;
	volatile uint64_t t57 = 138189097LLU;

	t57 = ((x353*x354)-(x355|x356));

	if (t57 != 21259LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MAX;
	int16_t x359 = -1;
	volatile int64_t x360 = 2192803568375142LL;
	static volatile int64_t t58 = -61556067850207323LL;

	t58 = ((x357*x358)-(x359|x360));

	if (t58 != -1073709055LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x369 = INT8_MAX;
	volatile int8_t x370 = INT8_MAX;
	static uint16_t x371 = UINT16_MAX;
	int16_t x372 = -1;
	int32_t t59 = -321579;

	t59 = ((x369*x370)-(x371|x372));

	if (t59 != 16130) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x373 = 253483LLU;
	volatile uint8_t x375 = 1U;
	volatile uint64_t t60 = 3905861845881501LLU;

	t60 = ((x373*x374)-(x375|x376));

	if (t60 != 64638166LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x377 = 5U;
	int8_t x378 = -1;
	uint16_t x379 = 4388U;

	t61 = ((x377*x378)-(x379|x380));

	if (t61 != -13802LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x382 = 12076514750842190LLU;
	static int8_t x383 = INT8_MIN;
	volatile uint64_t t62 = 32214236LLU;

	t62 = ((x381*x382)-(x383|x384));

	if (t62 != 18434667558958709547LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x385 = INT16_MAX;
	int32_t x386 = 168;
	static int8_t x388 = -1;
	int32_t t63 = 1;

	t63 = ((x385*x386)-(x387|x388));

	if (t63 != 5504857) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x389 = -502335456;
	int16_t x390 = -1;
	static int64_t x391 = -1LL;
	int8_t x392 = 24;
	int64_t t64 = -1008849641LL;

	t64 = ((x389*x390)-(x391|x392));

	if (t64 != 502335457LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x405 = 2444;
	int16_t x406 = INT16_MAX;
	int8_t x408 = INT8_MAX;

	t65 = ((x405*x406)-(x407|x408));

	if (t65 != 80082549) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x409 = 5649U;
	uint16_t x410 = UINT16_MAX;
	static int64_t x411 = INT64_MAX;
	volatile int8_t x412 = 0;
	int64_t t66 = 10091LL;

	t66 = ((x409*x410)-(x411|x412));

	if (t66 != -9223372036484568592LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x413 = INT8_MIN;
	volatile int64_t x414 = 61189121655LL;
	int64_t x415 = 192201083185507LL;
	int16_t x416 = INT16_MIN;
	int64_t t67 = 766LL;

	t67 = ((x413*x414)-(x415|x416));

	if (t67 != -7832207566051LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x423 = INT16_MIN;
	static int8_t x424 = -1;

	t68 = ((x421*x422)-(x423|x424));

	if (t68 != -15538379LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x425 = 109U;
	static uint64_t x427 = UINT64_MAX;
	volatile int32_t x428 = INT32_MAX;
	uint64_t t69 = 3472672398LLU;

	t69 = ((x425*x426)-(x427|x428));

	if (t69 != 18446744073705979905LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x429 = 3748137;
	int64_t x430 = -1LL;
	uint64_t t70 = 4012483LLU;

	t70 = ((x429*x430)-(x431|x432));

	if (t70 != 18446744073705803480LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x433 = 2381820U;
	int16_t x434 = -733;
	int64_t x435 = -1LL;
	volatile int32_t x436 = 2890790;
	volatile int64_t t71 = -21457LL;

	t71 = ((x433*x434)-(x435|x436));

	if (t71 != 2549093237LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x441 = -2;
	int64_t x442 = 115743760LL;
	static int16_t x443 = 3;
	int16_t x444 = -1;
	volatile int64_t t72 = 13807186710684512LL;

	t72 = ((x441*x442)-(x443|x444));

	if (t72 != -231487519LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x454 = INT16_MIN;
	volatile uint32_t t73 = 6357518U;

	t73 = ((x453*x454)-(x455|x456));

	if (t73 != 3221291007U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x462 = UINT32_MAX;
	int64_t x463 = INT64_MAX;
	int8_t x464 = INT8_MIN;
	volatile int64_t t74 = 477399938012LL;

	t74 = ((x461*x462)-(x463|x464));

	if (t74 != 4294967274LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x465 = 1181485918214LLU;
	int32_t x466 = -1;
	static int16_t x467 = -1213;
	uint32_t x468 = 10U;
	static uint64_t t75 = 149803786LLU;

	t75 = ((x465*x466)-(x467|x468));

	if (t75 != 18446742887928667311LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x473 = 23U;
	int64_t x474 = -1LL;
	int16_t x475 = -1;
	volatile uint16_t x476 = 57U;

	t76 = ((x473*x474)-(x475|x476));

	if (t76 != -22LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x477 = UINT32_MAX;
	volatile uint64_t x478 = 177553608245348LLU;
	int32_t x479 = -1;
	volatile uint64_t t77 = 2170066562689202LLU;

	t77 = ((x477*x478)-(x479|x480));

	if (t77 != 16987259932841639837LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x481 = -1650;
	int16_t x482 = 30;
	static uint16_t x483 = 30348U;
	uint8_t x484 = 10U;

	t78 = ((x481*x482)-(x483|x484));

	if (t78 != -79850) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x490 = 6U;
	int16_t x492 = INT16_MAX;
	int32_t t79 = -814867;

	t79 = ((x489*x490)-(x491|x492));

	if (t79 != -196607) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x493 = UINT8_MAX;
	int64_t x495 = -23148336061LL;
	int16_t x496 = INT16_MIN;
	int64_t t80 = -14743608LL;

	t80 = ((x493*x494)-(x495|x496));

	if (t80 != -27587LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x500 = UINT64_MAX;

	t81 = ((x497*x498)-(x499|x500));

	if (t81 != 18446744073709549185LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x501 = 1U;
	int32_t x502 = INT32_MIN;
	int8_t x503 = -1;
	volatile uint32_t t82 = 2265753U;

	t82 = ((x501*x502)-(x503|x504));

	if (t82 != 2147483649U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x505 = UINT16_MAX;
	int32_t x506 = -566;
	uint8_t x507 = UINT8_MAX;
	static int16_t x508 = INT16_MAX;
	int32_t t83 = -2107321;

	t83 = ((x505*x506)-(x507|x508));

	if (t83 != -37125577) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x513 = 29075U;
	int8_t x514 = -14;
	static int32_t x516 = 1787;
	volatile int32_t t84 = 11629895;

	t84 = ((x513*x514)-(x515|x516));

	if (t84 != -408837) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x518 = 102U;
	int64_t x519 = INT64_MIN;
	int16_t x520 = INT16_MIN;
	uint64_t t85 = 60677LLU;

	t85 = ((x517*x518)-(x519|x520));

	if (t85 != 112075785854LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x521 = 1;
	uint64_t x522 = UINT64_MAX;
	static int32_t x523 = INT32_MIN;
	int64_t x524 = INT64_MAX;

	t86 = ((x521*x522)-(x523|x524));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x529 = 2599;
	int8_t x530 = INT8_MIN;
	uint16_t x531 = UINT16_MAX;
	volatile uint8_t x532 = UINT8_MAX;
	volatile int32_t t87 = 3910;

	t87 = ((x529*x530)-(x531|x532));

	if (t87 != -398207) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x533 = 15U;
	uint16_t x534 = UINT16_MAX;
	int8_t x536 = -23;
	static int64_t t88 = 20LL;

	t88 = ((x533*x534)-(x535|x536));

	if (t88 != 983026LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x537 = INT8_MAX;
	int8_t x539 = 5;
	int64_t x540 = -113181226405324722LL;
	int64_t t89 = 23711436LL;

	t89 = ((x537*x538)-(x539|x540));

	if (t89 != 113181226405324594LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x545 = 67698053764LLU;
	int8_t x546 = -46;
	int64_t x547 = INT64_MIN;
	int16_t x548 = -1;
	uint64_t t90 = 173926LLU;

	t90 = ((x545*x546)-(x547|x548));

	if (t90 != 18446740959599078473LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x553 = INT8_MIN;
	int8_t x554 = INT8_MAX;
	uint64_t x555 = UINT64_MAX;
	uint64_t t91 = 40061670108314540LLU;

	t91 = ((x553*x554)-(x555|x556));

	if (t91 != 18446744073709535361LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x557 = 127U;
	static uint16_t x558 = 132U;
	int32_t x560 = 0;
	int32_t t92 = -578;

	t92 = ((x557*x558)-(x559|x560));

	if (t92 != 16733) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x562 = 3234953778LL;
	static uint8_t x563 = 0U;
	int16_t x564 = INT16_MAX;

	t93 = ((x561*x562)-(x563|x564));

	if (t93 != 410839097039LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x565 = INT8_MIN;
	int8_t x566 = INT8_MAX;
	int16_t x567 = INT16_MAX;
	volatile uint64_t t94 = 177LLU;

	t94 = ((x565*x566)-(x567|x568));

	if (t94 != 18446743584654639233LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x569 = INT8_MIN;
	volatile int16_t x570 = -2;
	int64_t x571 = INT64_MIN;
	int64_t x572 = -1LL;
	volatile int64_t t95 = -295898361969LL;

	t95 = ((x569*x570)-(x571|x572));

	if (t95 != 257LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x573 = 3;
	uint64_t x574 = 523579348447LLU;
	uint8_t x576 = 3U;

	t96 = ((x573*x574)-(x575|x576));

	if (t96 != 1566443078046LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x581 = 29;
	int16_t x582 = INT16_MIN;
	int32_t x583 = INT32_MIN;
	uint64_t x584 = UINT64_MAX;
	uint64_t t97 = 8368LLU;

	t97 = ((x581*x582)-(x583|x584));

	if (t97 != 18446744073708601345LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x586 = -1LL;
	int32_t x587 = INT32_MAX;
	int64_t x588 = -753419211LL;

	t98 = ((x585*x586)-(x587|x588));

	if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x589 = 26238395604580716LL;
	uint64_t x590 = 24868LLU;
	int64_t x592 = -25269319521072436LL;
	uint64_t t99 = 4233LLU;

	t99 = ((x589*x590)-(x591|x592));

	if (t99 != 6860379316720563300LLU) { NG(); } else { ; }
	
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


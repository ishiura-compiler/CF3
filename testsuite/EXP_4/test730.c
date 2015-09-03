#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = UINT16_MAX;
int8_t x5 = INT8_MIN;
uint16_t x13 = 0U;
static uint64_t t4 = 12508593LLU;
int16_t x32 = INT16_MAX;
volatile int64_t t6 = 45128535534122614LL;
int32_t t7 = -688288510;
volatile int32_t t8 = -198338451;
static volatile uint64_t t9 = 0LLU;
volatile uint64_t t10 = 332601351441LLU;
uint64_t t11 = 15671364901770LLU;
volatile uint64_t x92 = 60206733LLU;
volatile int64_t t14 = 15633293LL;
int64_t x105 = 9801405206301427LL;
int16_t x109 = 0;
uint32_t t17 = 1U;
int32_t x124 = INT32_MAX;
int32_t x129 = INT32_MAX;
static volatile uint16_t x130 = 1252U;
int16_t x140 = -1;
int16_t x141 = 1;
volatile uint16_t x178 = UINT16_MAX;
volatile int32_t t26 = -165;
uint16_t x181 = 2268U;
int16_t x182 = 1;
uint64_t t28 = 25LLU;
int16_t x198 = INT16_MAX;
uint8_t x200 = UINT8_MAX;
volatile int64_t t30 = -22901LL;
volatile int32_t x218 = 0;
int8_t x222 = INT8_MAX;
static int32_t x223 = 94698731;
uint32_t t33 = 5557U;
volatile uint16_t x226 = 885U;
static int8_t x235 = INT8_MAX;
int8_t x238 = INT8_MIN;
uint32_t t37 = 94426U;
int8_t x253 = INT8_MAX;
int16_t x256 = INT16_MIN;
int64_t t39 = 998328506224991LL;
volatile uint64_t t40 = 0LLU;
int16_t x267 = 27;
static uint64_t t44 = 584900LLU;
uint16_t x280 = 488U;
static uint32_t x297 = 4755244U;
static uint64_t x308 = 1825LLU;
volatile uint64_t t47 = 211832218813795LLU;
volatile int64_t x316 = INT64_MIN;
uint32_t t50 = 4100317U;
volatile int64_t t51 = -13325651503078LL;
uint64_t x354 = 257LLU;
int64_t t56 = -8438426460LL;
int16_t x382 = INT16_MAX;
int64_t x392 = INT64_MIN;
int64_t x420 = 11LL;
int64_t x424 = -36574525335LL;
static int64_t t62 = -36LL;
volatile int64_t x435 = 5900130LL;
int16_t x441 = -1246;
int16_t x445 = 601;
int32_t x446 = INT32_MIN;
uint16_t x454 = 3U;
uint32_t t68 = 15U;
int8_t x457 = 3;
int8_t x458 = -14;
static volatile int64_t x460 = 27LL;
int64_t x473 = INT64_MAX;
int64_t x482 = -460LL;
int8_t x486 = INT8_MAX;
int8_t x487 = INT8_MIN;
int8_t x490 = INT8_MIN;
int8_t x494 = INT8_MIN;
int8_t x501 = INT8_MAX;
int16_t x507 = INT16_MIN;
uint16_t x508 = UINT16_MAX;
volatile uint32_t x509 = 428573U;
static int32_t x510 = -1;
int16_t x527 = INT16_MIN;
uint8_t x540 = 98U;
static int32_t x559 = 70;
static uint32_t t86 = 3409U;
static uint8_t x581 = UINT8_MAX;
int16_t x583 = INT16_MIN;
int8_t x585 = 13;
volatile int32_t t93 = -892092030;
int32_t x601 = INT32_MIN;
static int64_t x602 = -1LL;
volatile uint64_t t95 = 40561631109471LLU;
uint64_t t97 = 1086601639720816205LLU;
volatile int16_t x617 = 224;
static int32_t x643 = INT32_MIN;


void f0(void) {
	volatile int8_t x1 = -1;
	int8_t x3 = -2;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 2080314471988LL;

	t0 = (x1-(x2%(x3%x4)));

	if (t0 != -2LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MAX;
	int16_t x8 = -3436;
	static volatile int32_t t1 = 3;

	t1 = (x5-(x6%(x7%x8)));

	if (t1 != -120) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = INT64_MIN;
	static int16_t x15 = INT16_MIN;
	static volatile int64_t x16 = 33LL;
	int64_t t2 = -16LL;

	t2 = (x13-(x14%(x15%x16)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -107877LL;
	volatile int32_t x18 = 8244029;
	static int8_t x19 = 1;
	uint16_t x20 = UINT16_MAX;
	static int64_t t3 = 2498634879LL;

	t3 = (x17-(x18%(x19%x20)));

	if (t3 != -107877LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	int32_t x26 = 873384908;
	uint64_t x27 = 110429LLU;
	static int16_t x28 = 136;

	t4 = (x25-(x26%(x27%x28)));

	if (t4 != 9223372036854775699LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = INT64_MIN;
	int64_t x30 = INT64_MIN;
	int16_t x31 = 99;
	static volatile int64_t t5 = 11642932988205009LL;

	t5 = (x29-(x30%(x31%x32)));

	if (t5 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x33 = UINT8_MAX;
	int64_t x34 = -127977426LL;
	int64_t x35 = 10LL;
	int64_t x36 = INT64_MIN;

	t6 = (x33-(x34%(x35%x36)));

	if (t6 != 261LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -1;
	volatile int16_t x38 = -1;
	int8_t x39 = INT8_MAX;
	static volatile int32_t x40 = INT32_MIN;

	t7 = (x37-(x38%(x39%x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x57 = -489;
	uint8_t x58 = 19U;
	volatile int8_t x59 = -33;
	int16_t x60 = INT16_MIN;

	t8 = (x57-(x58%(x59%x60)));

	if (t8 != -508) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = INT8_MIN;
	int64_t x62 = INT64_MIN;
	static uint64_t x63 = 2424336207LLU;
	static int32_t x64 = INT32_MIN;

	t9 = (x61-(x62%(x63%x64)));

	if (t9 != 18446744071561085382LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x65 = INT16_MIN;
	uint64_t x66 = 44753198714869244LLU;
	static int16_t x67 = INT16_MIN;
	static volatile int32_t x68 = INT32_MIN;

	t10 = (x65-(x66%(x67%x68)));

	if (t10 != 18401990874994649604LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = -1;
	uint64_t x70 = UINT64_MAX;
	static volatile uint16_t x71 = 56U;
	static volatile uint32_t x72 = 186U;

	t11 = (x69-(x70%(x71%x72)));

	if (t11 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x77 = INT8_MIN;
	int64_t x78 = INT64_MIN;
	int16_t x79 = -1;
	volatile uint8_t x80 = 6U;
	int64_t t12 = 855785062LL;

	t12 = (x77-(x78%(x79%x80)));

	if (t12 != -128LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x89 = INT8_MIN;
	static volatile int8_t x90 = -1;
	static int32_t x91 = INT32_MIN;
	static volatile uint64_t t13 = 1349347LLU;

	t13 = (x89-(x90%(x91%x92)));

	if (t13 != 18446744073693751148LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x93 = 36;
	int8_t x94 = -1;
	static int64_t x95 = 33LL;
	int64_t x96 = INT64_MIN;

	t14 = (x93-(x94%(x95%x96)));

	if (t14 != 37LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MAX;
	uint8_t x103 = 13U;
	int32_t x104 = INT32_MAX;
	volatile int32_t t15 = 3207;

	t15 = (x101-(x102%(x103%x104)));

	if (t15 != -32775) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x106 = 3;
	int16_t x107 = 1976;
	static int16_t x108 = INT16_MAX;
	int64_t t16 = 674LL;

	t16 = (x105-(x106%(x107%x108)));

	if (t16 != 9801405206301424LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x110 = INT16_MIN;
	int16_t x111 = -4837;
	uint32_t x112 = UINT32_MAX;

	t17 = (x109-(x110%(x111%x112)));

	if (t17 != 32768U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x121 = INT32_MIN;
	int32_t x122 = -6202;
	volatile int8_t x123 = INT8_MIN;
	volatile int32_t t18 = -1250557;

	t18 = (x121-(x122%(x123%x124)));

	if (t18 != -2147483590) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x125 = UINT64_MAX;
	uint16_t x126 = 4279U;
	static volatile int16_t x127 = INT16_MAX;
	int8_t x128 = INT8_MIN;
	uint64_t t19 = 216317561LLU;

	t19 = (x125-(x126%(x127%x128)));

	if (t19 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x131 = -1;
	int64_t x132 = INT64_MAX;
	int64_t t20 = 5928917LL;

	t20 = (x129-(x130%(x131%x132)));

	if (t20 != 2147483647LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x137 = UINT8_MAX;
	uint8_t x138 = 121U;
	uint64_t x139 = 1499LLU;
	volatile uint64_t t21 = 234112396142LLU;

	t21 = (x137-(x138%(x139%x140)));

	if (t21 != 134LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x142 = UINT32_MAX;
	uint16_t x143 = 6678U;
	uint64_t x144 = UINT64_MAX;
	uint64_t t22 = 3838374766684090LLU;

	t22 = (x141-(x142%(x143%x144)));

	if (t22 != 18446744073709546700LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x145 = UINT16_MAX;
	int16_t x146 = INT16_MIN;
	static uint16_t x147 = UINT16_MAX;
	int32_t x148 = INT32_MIN;
	volatile int32_t t23 = 11529;

	t23 = (x145-(x146%(x147%x148)));

	if (t23 != 98303) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x161 = -1LL;
	int16_t x162 = INT16_MIN;
	uint16_t x163 = 21054U;
	int64_t x164 = -38022LL;
	int64_t t24 = 6184LL;

	t24 = (x161-(x162%(x163%x164)));

	if (t24 != 11713LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x173 = -1LL;
	int64_t x174 = 7LL;
	volatile int64_t x175 = 6161516LL;
	volatile int8_t x176 = INT8_MIN;
	volatile int64_t t25 = -10008751940LL;

	t25 = (x173-(x174%(x175%x176)));

	if (t25 != -8LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x177 = 0U;
	uint16_t x179 = 1776U;
	int32_t x180 = 6517326;

	t26 = (x177-(x178%(x179%x180)));

	if (t26 != -1599) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x183 = -1;
	uint32_t x184 = 124679038U;
	uint32_t t27 = 80U;

	t27 = (x181-(x182%(x183%x184)));

	if (t27 != 2267U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x185 = 79U;
	volatile int64_t x186 = -1043676LL;
	static int32_t x187 = INT32_MIN;
	uint64_t x188 = 47196305LLU;

	t28 = (x185-(x186%(x187%x188)));

	if (t28 != 18446744073693828151LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x193 = 3996715632LLU;
	uint64_t x194 = UINT64_MAX;
	uint8_t x195 = 3U;
	int64_t x196 = 70438260713LL;
	volatile uint64_t t29 = 7LLU;

	t29 = (x193-(x194%(x195%x196)));

	if (t29 != 3996715632LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x197 = -1LL;
	static uint32_t x199 = 26229U;

	t30 = (x197-(x198%(x199%x200)));

	if (t30 != -137LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x201 = -1LL;
	int16_t x202 = INT16_MIN;
	volatile uint16_t x203 = 795U;
	int32_t x204 = INT32_MIN;
	int64_t t31 = 76410865LL;

	t31 = (x201-(x202%(x203%x204)));

	if (t31 != 172LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x217 = 21;
	int16_t x219 = INT16_MIN;
	int64_t x220 = INT64_MAX;
	volatile int64_t t32 = -133407934LL;

	t32 = (x217-(x218%(x219%x220)));

	if (t32 != 21LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x221 = -1;
	static volatile uint32_t x224 = 3U;

	t33 = (x221-(x222%(x223%x224)));

	if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x225 = -1;
	uint32_t x227 = 8099727U;
	volatile int32_t x228 = INT32_MAX;
	volatile uint32_t t34 = 482136U;

	t34 = (x225-(x226%(x227%x228)));

	if (t34 != 4294966410U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x229 = -1LL;
	int64_t x230 = INT64_MIN;
	uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MAX;
	int64_t t35 = -21124588LL;

	t35 = (x229-(x230%(x231%x232)));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x233 = UINT64_MAX;
	static uint32_t x234 = 3U;
	uint16_t x236 = UINT16_MAX;
	volatile uint64_t t36 = 21102746253792445LLU;

	t36 = (x233-(x234%(x235%x236)));

	if (t36 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x237 = INT16_MIN;
	static uint32_t x239 = 23868818U;
	int16_t x240 = INT16_MAX;

	t37 = (x237-(x238%(x239%x240)));

	if (t37 != 4294931508U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x245 = INT32_MAX;
	int8_t x246 = INT8_MIN;
	int64_t x247 = -60275061LL;
	int64_t x248 = INT64_MIN;
	int64_t t38 = 25LL;

	t38 = (x245-(x246%(x247%x248)));

	if (t38 != 2147483775LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x254 = INT64_MIN;
	int16_t x255 = 912;

	t39 = (x253-(x254%(x255%x256)));

	if (t39 != 639LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x257 = -1;
	uint64_t x258 = 13LLU;
	uint8_t x259 = UINT8_MAX;
	static int64_t x260 = -14LL;

	t40 = (x257-(x258%(x259%x260)));

	if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x261 = INT32_MAX;
	volatile int32_t x262 = 457231844;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = INT32_MAX;
	volatile uint32_t t41 = 1782U;

	t41 = (x261-(x262%(x263%x264)));

	if (t41 != 2147483647U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x266 = INT8_MIN;
	int64_t x268 = INT64_MAX;
	volatile int64_t t42 = 243LL;

	t42 = (x265-(x266%(x267%x268)));

	if (t42 != 4294967315LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x269 = -151186340;
	int16_t x270 = INT16_MIN;
	int16_t x271 = INT16_MIN;
	uint32_t x272 = UINT32_MAX;
	static uint32_t t43 = 441115U;

	t43 = (x269-(x270%(x271%x272)));

	if (t43 != 4143780956U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x273 = -1;
	int32_t x274 = -28901651;
	static int32_t x275 = 263639;
	static uint64_t x276 = UINT64_MAX;

	t44 = (x273-(x274%(x275%x276)));

	if (t44 != 18446744073709337039LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x277 = INT64_MIN;
	static int16_t x278 = INT16_MIN;
	uint8_t x279 = UINT8_MAX;
	volatile int64_t t45 = -25678664475LL;

	t45 = (x277-(x278%(x279%x280)));

	if (t45 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x298 = 12U;
	int32_t x299 = INT32_MIN;
	uint64_t x300 = 9LLU;
	volatile uint64_t t46 = 68954271836670020LLU;

	t46 = (x297-(x298%(x299%x300)));

	if (t46 != 4755242LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x305 = INT16_MAX;
	int16_t x306 = -1;
	volatile int8_t x307 = INT8_MAX;

	t47 = (x305-(x306%(x307%x308)));

	if (t47 != 32766LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x313 = 244;
	static int64_t x314 = -1LL;
	int32_t x315 = -1;
	volatile int64_t t48 = -170556LL;

	t48 = (x313-(x314%(x315%x316)));

	if (t48 != 244LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x317 = INT16_MAX;
	static uint32_t x318 = 443U;
	static int8_t x319 = 5;
	static uint32_t x320 = UINT32_MAX;
	volatile uint32_t t49 = 2562104U;

	t49 = (x317-(x318%(x319%x320)));

	if (t49 != 32764U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x321 = INT16_MAX;
	uint8_t x322 = 7U;
	volatile uint32_t x323 = 703U;
	uint32_t x324 = UINT32_MAX;

	t50 = (x321-(x322%(x323%x324)));

	if (t50 != 32760U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x337 = 35U;
	int64_t x338 = INT64_MAX;
	int8_t x339 = -1;
	int16_t x340 = -10;

	t51 = (x337-(x338%(x339%x340)));

	if (t51 != 35LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x349 = 167435U;
	int8_t x350 = 52;
	int64_t x351 = -6524106LL;
	uint32_t x352 = 4269879U;
	volatile int64_t t52 = -265765355427872LL;

	t52 = (x349-(x350%(x351%x352)));

	if (t52 != 167383LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x353 = 0;
	int16_t x355 = INT16_MIN;
	int32_t x356 = 2099012;
	uint64_t t53 = 1687906307861LLU;

	t53 = (x353-(x354%(x355%x356)));

	if (t53 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x365 = UINT64_MAX;
	int16_t x366 = -3524;
	uint64_t x367 = UINT64_MAX;
	int16_t x368 = 19;
	uint64_t t54 = 7742016240559LLU;

	t54 = (x365-(x366%(x367%x368)));

	if (t54 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x369 = 16757400532LLU;
	uint8_t x370 = 1U;
	static uint32_t x371 = UINT32_MAX;
	static int64_t x372 = 6009416387678109LL;
	static uint64_t t55 = 248395039LLU;

	t55 = (x369-(x370%(x371%x372)));

	if (t55 != 16757400531LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x373 = -1LL;
	uint16_t x374 = 4898U;
	static int16_t x375 = INT16_MIN;
	int16_t x376 = INT16_MAX;

	t56 = (x373-(x374%(x375%x376)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x377 = 1U;
	int64_t x378 = 5337LL;
	int8_t x379 = -1;
	uint8_t x380 = UINT8_MAX;
	static int64_t t57 = -2101975LL;

	t57 = (x377-(x378%(x379%x380)));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x381 = 36U;
	static uint64_t x383 = 489865685925LLU;
	int64_t x384 = INT64_MIN;
	volatile uint64_t t58 = 6901376894LLU;

	t58 = (x381-(x382%(x383%x384)));

	if (t58 != 18446744073709518885LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x389 = INT64_MAX;
	static int32_t x390 = 481044;
	volatile int32_t x391 = INT32_MAX;
	int64_t t59 = 5976758016453723LL;

	t59 = (x389-(x390%(x391%x392)));

	if (t59 != 9223372036854294763LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x413 = -1LL;
	uint32_t x414 = UINT32_MAX;
	uint16_t x415 = UINT16_MAX;
	volatile uint64_t x416 = 2203LLU;
	volatile uint64_t t60 = 36LLU;

	t60 = (x413-(x414%(x415%x416)));

	if (t60 != 18446744073709550832LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x417 = INT16_MIN;
	static int16_t x418 = 34;
	int8_t x419 = INT8_MAX;
	static int64_t t61 = 6LL;

	t61 = (x417-(x418%(x419%x420)));

	if (t61 != -32772LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x421 = -1;
	volatile uint8_t x422 = UINT8_MAX;
	volatile int16_t x423 = 3101;

	t62 = (x421-(x422%(x423%x424)));

	if (t62 != -256LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x425 = 26U;
	uint32_t x426 = 231U;
	int8_t x427 = INT8_MAX;
	volatile int64_t x428 = -735LL;
	volatile int64_t t63 = -1763LL;

	t63 = (x425-(x426%(x427%x428)));

	if (t63 != -78LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x429 = INT64_MAX;
	int16_t x430 = INT16_MIN;
	int32_t x431 = -1;
	int8_t x432 = -57;
	int64_t t64 = INT64_MAX;

	t64 = (x429-(x430%(x431%x432)));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x433 = 3449032968LL;
	uint64_t x434 = 42LLU;
	volatile uint8_t x436 = UINT8_MAX;
	uint64_t t65 = 29323823895393486LLU;

	t65 = (x433-(x434%(x435%x436)));

	if (t65 != 3449032926LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x442 = -5;
	int32_t x443 = INT32_MIN;
	static int16_t x444 = -3988;
	int32_t t66 = 19013834;

	t66 = (x441-(x442%(x443%x444)));

	if (t66 != -1241) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x447 = 1U;
	int16_t x448 = -25;
	volatile int32_t t67 = -576;

	t67 = (x445-(x446%(x447%x448)));

	if (t67 != 601) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x453 = 28U;
	volatile int16_t x455 = -1;
	volatile uint32_t x456 = 12034U;

	t68 = (x453-(x454%(x455%x456)));

	if (t68 != 25U) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x459 = INT64_MIN;
	int64_t t69 = 87244202009422031LL;

	t69 = (x457-(x458%(x459%x460)));

	if (t69 != 17LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x469 = INT64_MIN;
	volatile int8_t x470 = -1;
	int32_t x471 = INT32_MIN;
	uint16_t x472 = UINT16_MAX;
	int64_t t70 = 52571428913LL;

	t70 = (x469-(x470%(x471%x472)));

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x474 = UINT32_MAX;
	static int8_t x475 = INT8_MIN;
	static volatile int64_t x476 = 7LL;
	int64_t t71 = -4079568LL;

	t71 = (x473-(x474%(x475%x476)));

	if (t71 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x481 = INT32_MAX;
	uint16_t x483 = 1U;
	int64_t x484 = INT64_MIN;
	volatile int64_t t72 = 477816603260133638LL;

	t72 = (x481-(x482%(x483%x484)));

	if (t72 != 2147483647LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x485 = INT16_MIN;
	static int64_t x488 = INT64_MIN;
	volatile int64_t t73 = 51069020LL;

	t73 = (x485-(x486%(x487%x488)));

	if (t73 != -32895LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x489 = 533669841;
	int16_t x491 = INT16_MAX;
	static int64_t x492 = INT64_MIN;
	int64_t t74 = 3090677935536753LL;

	t74 = (x489-(x490%(x491%x492)));

	if (t74 != 533669969LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x493 = 2638788U;
	uint32_t x495 = 196974375U;
	int8_t x496 = INT8_MIN;
	uint32_t t75 = 1445981474U;

	t75 = (x493-(x494%(x495%x496)));

	if (t75 != 4139100791U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x502 = 1U;
	uint16_t x503 = 524U;
	static int32_t x504 = -4144066;
	static volatile int32_t t76 = -197;

	t76 = (x501-(x502%(x503%x504)));

	if (t76 != 126) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x505 = 12U;
	volatile uint32_t x506 = 14120221U;
	static volatile uint32_t t77 = 13440692U;

	t77 = (x505-(x506%(x507%x508)));

	if (t77 != 4280847087U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x511 = 40922410689034LL;
	uint32_t x512 = UINT32_MAX;
	int64_t t78 = -10203268307LL;

	t78 = (x509-(x510%(x511%x512)));

	if (t78 != 428574LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x513 = 1159598562U;
	static int64_t x514 = INT64_MIN;
	uint64_t x515 = 38644422256321LLU;
	int64_t x516 = INT64_MIN;
	uint64_t t79 = 202385336977101LLU;

	t79 = (x513-(x514%(x515%x516)));

	if (t79 != 18446713586775020082LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x521 = 2U;
	volatile int8_t x522 = -1;
	uint8_t x523 = 7U;
	uint8_t x524 = 30U;
	volatile int32_t t80 = -1106;

	t80 = (x521-(x522%(x523%x524)));

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x525 = 10;
	uint16_t x526 = 18567U;
	static int32_t x528 = INT32_MAX;
	volatile int32_t t81 = 510168;

	t81 = (x525-(x526%(x527%x528)));

	if (t81 != -18557) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x529 = 2U;
	volatile uint16_t x530 = 2U;
	volatile uint64_t x531 = UINT64_MAX;
	uint8_t x532 = 48U;
	uint64_t t82 = 128827880677988LLU;

	t82 = (x529-(x530%(x531%x532)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x533 = UINT8_MAX;
	int8_t x534 = INT8_MIN;
	volatile int8_t x535 = -1;
	uint8_t x536 = UINT8_MAX;
	int32_t t83 = 24039;

	t83 = (x533-(x534%(x535%x536)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x537 = 2020U;
	int32_t x538 = INT32_MAX;
	static volatile int32_t x539 = -1;
	volatile int32_t t84 = 34;

	t84 = (x537-(x538%(x539%x540)));

	if (t84 != 2020) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x549 = 1;
	int64_t x550 = INT64_MIN;
	int64_t x551 = INT64_MIN;
	static uint8_t x552 = UINT8_MAX;
	int64_t t85 = 0LL;

	t85 = (x549-(x550%(x551%x552)));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x557 = UINT16_MAX;
	int8_t x558 = INT8_MAX;
	uint32_t x560 = UINT32_MAX;

	t86 = (x557-(x558%(x559%x560)));

	if (t86 != 65478U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x561 = 10394U;
	volatile int8_t x562 = 1;
	static int64_t x563 = INT64_MAX;
	uint16_t x564 = 3083U;
	volatile int64_t t87 = -117736284403LL;

	t87 = (x561-(x562%(x563%x564)));

	if (t87 != 10393LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x565 = -1;
	static uint8_t x566 = 7U;
	volatile int8_t x567 = INT8_MIN;
	int16_t x568 = INT16_MIN;
	int32_t t88 = -176630;

	t88 = (x565-(x566%(x567%x568)));

	if (t88 != -8) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x569 = 33U;
	volatile int16_t x570 = INT16_MIN;
	int32_t x571 = INT32_MIN;
	static int16_t x572 = 18;
	volatile int32_t t89 = 15453922;

	t89 = (x569-(x570%(x571%x572)));

	if (t89 != 33) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x573 = 418U;
	volatile int64_t x574 = INT64_MIN;
	int64_t x575 = INT64_MAX;
	volatile int64_t x576 = 12406088LL;
	int64_t t90 = -261135837615009498LL;

	t90 = (x573-(x574%(x575%x576)));

	if (t90 != 3014736LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x577 = -15575LL;
	int8_t x578 = INT8_MIN;
	int16_t x579 = INT16_MAX;
	volatile int32_t x580 = INT32_MIN;
	static volatile int64_t t91 = -1186510249733302LL;

	t91 = (x577-(x578%(x579%x580)));

	if (t91 != -15447LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x582 = INT8_MIN;
	int32_t x584 = -23789418;
	int32_t t92 = -58;

	t92 = (x581-(x582%(x583%x584)));

	if (t92 != 383) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x586 = UINT16_MAX;
	uint8_t x587 = 6U;
	static uint8_t x588 = UINT8_MAX;

	t93 = (x585-(x586%(x587%x588)));

	if (t93 != 10) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x597 = 0U;
	static int32_t x598 = INT32_MIN;
	int64_t x599 = -1LL;
	volatile uint16_t x600 = 21864U;
	int64_t t94 = 52293104LL;

	t94 = (x597-(x598%(x599%x600)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x603 = 209239565801428395LLU;
	static volatile int16_t x604 = INT16_MIN;

	t95 = (x601-(x602%(x603%x604)));

	if (t95 != 18413081788378215113LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x605 = -1;
	volatile int64_t x606 = INT64_MAX;
	uint16_t x607 = UINT16_MAX;
	volatile uint16_t x608 = 34U;
	volatile int64_t t96 = -17483325254062LL;

	t96 = (x605-(x606%(x607%x608)));

	if (t96 != -9LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x613 = UINT64_MAX;
	volatile int16_t x614 = 7965;
	static uint16_t x615 = 322U;
	int64_t x616 = -1999717239896LL;

	t97 = (x613-(x614%(x615%x616)));

	if (t97 != 18446744073709551378LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x618 = 54U;
	int32_t x619 = INT32_MIN;
	volatile int64_t x620 = 54124LL;
	int64_t t98 = -1601155918439LL;

	t98 = (x617-(x618%(x619%x620)));

	if (t98 != 170LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x641 = -1;
	static int16_t x642 = -442;
	int64_t x644 = INT64_MIN;
	static volatile int64_t t99 = 6037LL;

	t99 = (x641-(x642%(x643%x644)));

	if (t99 != 441LL) { NG(); } else { ; }
	
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


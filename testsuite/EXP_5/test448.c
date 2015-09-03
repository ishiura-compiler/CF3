#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x6 = UINT32_MAX;
volatile int64_t x36 = INT64_MIN;
volatile uint32_t t3 = 5069U;
int16_t x95 = INT16_MIN;
uint16_t x138 = 1U;
volatile uint32_t t9 = 310278U;
int16_t x149 = INT16_MAX;
int8_t x150 = INT8_MIN;
static int32_t x161 = 3;
int16_t x162 = INT16_MIN;
int64_t x164 = INT64_MIN;
int32_t x167 = 100;
int64_t t14 = -102477918628LL;
static uint16_t x184 = UINT16_MAX;
int16_t x205 = 1;
volatile uint8_t x213 = 3U;
volatile int8_t x216 = INT8_MIN;
int32_t t17 = 20;
uint32_t x240 = 1649785U;
int16_t x253 = INT16_MAX;
int8_t x255 = INT8_MAX;
int8_t x260 = -1;
int8_t x263 = -1;
static uint32_t t22 = 1264230223U;
int16_t x270 = INT16_MIN;
volatile int16_t x273 = 1;
volatile int16_t x274 = INT16_MAX;
uint8_t x281 = UINT8_MAX;
static int64_t x283 = -1LL;
uint16_t x284 = UINT16_MAX;
int16_t x296 = INT16_MIN;
volatile int8_t x306 = -2;
int16_t x308 = INT16_MIN;
static volatile uint16_t x325 = 43U;
volatile int16_t x327 = -1;
static int32_t t35 = 3080026;
uint8_t x384 = UINT8_MAX;
static uint32_t t36 = 1055883891U;
uint32_t x385 = 70762U;
volatile int64_t x387 = -15809993LL;
int8_t x399 = -1;
int8_t x400 = 6;
static uint32_t x421 = UINT32_MAX;
int32_t x429 = 25932;
int64_t x440 = -714116271881807780LL;
uint64_t x452 = 1952LLU;
static volatile int64_t t43 = -6LL;
int32_t t45 = -60;
volatile int16_t x494 = INT16_MIN;
uint8_t x497 = 1U;
int16_t x498 = 84;
volatile int16_t x499 = 7;
int32_t x520 = INT32_MIN;
int32_t x534 = INT32_MIN;
uint64_t x535 = UINT64_MAX;
static volatile int16_t x547 = INT16_MIN;
uint32_t x558 = UINT32_MAX;
static int16_t x559 = INT16_MAX;
int32_t t54 = 231396524;
int32_t x562 = -938;
static int64_t x599 = INT64_MIN;
int32_t t56 = 185475;
int8_t x619 = INT8_MAX;
int16_t x660 = INT16_MAX;
static int32_t x661 = 11;
uint64_t x664 = 105LLU;
int16_t x674 = 0;
int32_t t64 = 15727555;
volatile int16_t x687 = -1;
int16_t x710 = INT16_MIN;
int64_t t71 = 263640930230020LL;
int8_t x768 = INT8_MAX;
static volatile int32_t t72 = -1;
static uint32_t x769 = 773U;
uint32_t t73 = 3U;
int16_t x786 = INT16_MAX;
static int32_t x799 = 5867;
static volatile int32_t t75 = -192615425;
uint64_t x808 = 57905650832564685LLU;
uint8_t x831 = 60U;
static int32_t x839 = 330;
uint8_t x841 = 40U;
uint32_t x842 = 10352U;
static int64_t x854 = -21310905LL;
static int16_t x882 = INT16_MAX;
static int64_t x893 = 581383LL;
volatile uint64_t x901 = 406978050LLU;
int8_t x904 = -1;
int8_t x905 = 4;
volatile int8_t x908 = INT8_MIN;
uint8_t x918 = UINT8_MAX;
int16_t x920 = 1;
volatile int32_t x961 = INT32_MAX;
static int16_t x964 = -1;
volatile int16_t x974 = INT16_MIN;
volatile int8_t x984 = INT8_MAX;
uint32_t t95 = 358U;
uint8_t x985 = 1U;
static uint16_t x989 = UINT16_MAX;
int32_t t97 = 79;


void f0(void) {
	volatile uint8_t x5 = 5U;
	int8_t x7 = -44;
	int8_t x8 = -1;
	int32_t t0 = -19123781;

	t0 = (x5<<((x6*x7)<x8));

	if (t0 != 10) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x33 = INT8_MAX;
	int64_t x34 = -1443632066233032LL;
	int8_t x35 = INT8_MAX;
	static volatile int32_t t1 = -7951;

	t1 = (x33<<((x34*x35)<x36));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x45 = UINT8_MAX;
	int8_t x46 = -1;
	uint16_t x47 = 3U;
	static int8_t x48 = -1;
	int32_t t2 = -7632;

	t2 = (x45<<((x46*x47)<x48));

	if (t2 != 510) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x73 = 179602187U;
	uint64_t x74 = 8192395LLU;
	volatile uint64_t x75 = UINT64_MAX;
	volatile int16_t x76 = -1;

	t3 = (x73<<((x74*x75)<x76));

	if (t3 != 359204374U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x81 = 19594270U;
	int64_t x82 = 912691212LL;
	uint16_t x83 = UINT16_MAX;
	int64_t x84 = INT64_MIN;
	static uint32_t t4 = 27775U;

	t4 = (x81<<((x82*x83)<x84));

	if (t4 != 19594270U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x89 = 1764016LL;
	int64_t x90 = -345428667LL;
	int32_t x91 = -1;
	static int64_t x92 = INT64_MAX;
	int64_t t5 = -22882309873247663LL;

	t5 = (x89<<((x90*x91)<x92));

	if (t5 != 3528032LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x93 = 307293202323427304LLU;
	int16_t x94 = -1;
	static uint16_t x96 = 32U;
	uint64_t t6 = 112490LLU;

	t6 = (x93<<((x94*x95)<x96));

	if (t6 != 307293202323427304LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x117 = 2164686760050021095LL;
	int32_t x118 = -1;
	uint8_t x119 = 1U;
	volatile int64_t x120 = 2720302239802539425LL;
	volatile int64_t t7 = -395LL;

	t7 = (x117<<((x118*x119)<x120));

	if (t7 != 4329373520100042190LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x133 = 13778;
	uint8_t x134 = 7U;
	int16_t x135 = INT16_MIN;
	int64_t x136 = 1589083771162LL;
	volatile int32_t t8 = -23;

	t8 = (x133<<((x134*x135)<x136));

	if (t8 != 27556) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x137 = 53644U;
	volatile int16_t x139 = -1;
	uint32_t x140 = UINT32_MAX;

	t9 = (x137<<((x138*x139)<x140));

	if (t9 != 53644U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x151 = 0U;
	volatile int64_t x152 = -12279LL;
	volatile int32_t t10 = -545382912;

	t10 = (x149<<((x150*x151)<x152));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x153 = 0;
	int16_t x154 = -6;
	volatile uint64_t x155 = 7950LLU;
	int16_t x156 = 3;
	static volatile int32_t t11 = -23;

	t11 = (x153<<((x154*x155)<x156));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x157 = 1U;
	static int8_t x158 = INT8_MIN;
	uint16_t x159 = 0U;
	int8_t x160 = INT8_MIN;
	int32_t t12 = 5;

	t12 = (x157<<((x158*x159)<x160));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x163 = 520U;
	volatile int32_t t13 = -10;

	t13 = (x161<<((x162*x163)<x164));

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x165 = 24125568LL;
	uint8_t x166 = UINT8_MAX;
	int8_t x168 = 3;

	t14 = (x165<<((x166*x167)<x168));

	if (t14 != 24125568LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x181 = INT16_MAX;
	static int32_t x182 = INT32_MAX;
	uint64_t x183 = 134991750306LLU;
	int32_t t15 = 6539;

	t15 = (x181<<((x182*x183)<x184));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x206 = -1;
	uint8_t x207 = 3U;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t16 = 74646;

	t16 = (x205<<((x206*x207)<x208));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x214 = 3U;
	volatile int8_t x215 = 16;

	t17 = (x213<<((x214*x215)<x216));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x237 = 53416270LL;
	uint16_t x238 = 2654U;
	static uint16_t x239 = 141U;
	static int64_t t18 = -489LL;

	t18 = (x237<<((x238*x239)<x240));

	if (t18 != 106832540LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x245 = UINT8_MAX;
	uint32_t x246 = 339957574U;
	uint32_t x247 = UINT32_MAX;
	int16_t x248 = 0;
	static volatile int32_t t19 = 253328;

	t19 = (x245<<((x246*x247)<x248));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x254 = INT8_MIN;
	int8_t x256 = INT8_MAX;
	volatile int32_t t20 = -1;

	t20 = (x253<<((x254*x255)<x256));

	if (t20 != 65534) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x257 = 1U;
	uint64_t x258 = UINT64_MAX;
	int16_t x259 = INT16_MIN;
	static volatile int32_t t21 = -15612;

	t21 = (x257<<((x258*x259)<x260));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x261 = UINT32_MAX;
	uint32_t x262 = UINT32_MAX;
	int64_t x264 = INT64_MAX;

	t22 = (x261<<((x262*x263)<x264));

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x265 = UINT16_MAX;
	uint8_t x266 = UINT8_MAX;
	uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MIN;
	volatile int32_t t23 = 14381897;

	t23 = (x265<<((x266*x267)<x268));

	if (t23 != 131070) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x269 = INT32_MAX;
	uint32_t x271 = UINT32_MAX;
	uint8_t x272 = 5U;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x269<<((x270*x271)<x272));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x275 = 12U;
	uint8_t x276 = 62U;
	int32_t t25 = -2093;

	t25 = (x273<<((x274*x275)<x276));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x277 = 1549189516U;
	int8_t x278 = -1;
	static volatile int8_t x279 = INT8_MIN;
	static int8_t x280 = 13;
	uint32_t t26 = 11U;

	t26 = (x277<<((x278*x279)<x280));

	if (t26 != 1549189516U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x282 = -139528;
	static volatile int32_t t27 = 26315806;

	t27 = (x281<<((x282*x283)<x284));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x285 = UINT16_MAX;
	int32_t x286 = -292;
	int16_t x287 = INT16_MIN;
	uint64_t x288 = 661LLU;
	volatile int32_t t28 = 33012262;

	t28 = (x285<<((x286*x287)<x288));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x289 = 31U;
	volatile uint8_t x290 = UINT8_MAX;
	uint64_t x291 = 3243336556394LLU;
	volatile int8_t x292 = INT8_MAX;
	int32_t t29 = 20457;

	t29 = (x289<<((x290*x291)<x292));

	if (t29 != 31) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x293 = 1151154284U;
	static int16_t x294 = -1;
	int32_t x295 = INT32_MAX;
	uint32_t t30 = 3572870U;

	t30 = (x293<<((x294*x295)<x296));

	if (t30 != 2302308568U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x297 = UINT32_MAX;
	int64_t x298 = INT64_MIN;
	uint64_t x299 = 21LLU;
	uint64_t x300 = 4675142526LLU;
	volatile uint32_t t31 = UINT32_MAX;

	t31 = (x297<<((x298*x299)<x300));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x301 = 681481U;
	static uint8_t x302 = 1U;
	uint8_t x303 = 54U;
	uint32_t x304 = 26341U;
	volatile uint32_t t32 = 25568U;

	t32 = (x301<<((x302*x303)<x304));

	if (t32 != 1362962U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x305 = UINT64_MAX;
	int8_t x307 = 5;
	uint64_t t33 = UINT64_MAX;

	t33 = (x305<<((x306*x307)<x308));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x326 = INT64_MAX;
	uint8_t x328 = 10U;
	volatile int32_t t34 = -361;

	t34 = (x325<<((x326*x327)<x328));

	if (t34 != 86) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x357 = 6U;
	int32_t x358 = INT32_MIN;
	uint64_t x359 = 18106868LLU;
	int32_t x360 = INT32_MIN;

	t35 = (x357<<((x358*x359)<x360));

	if (t35 != 12) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x381 = 31146703U;
	int8_t x382 = INT8_MAX;
	int16_t x383 = -1951;

	t36 = (x381<<((x382*x383)<x384));

	if (t36 != 62293406U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x386 = 35;
	static int8_t x388 = INT8_MAX;
	volatile uint32_t t37 = 72U;

	t37 = (x385<<((x386*x387)<x388));

	if (t37 != 141524U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x397 = 475;
	int8_t x398 = -1;
	volatile int32_t t38 = 3915;

	t38 = (x397<<((x398*x399)<x400));

	if (t38 != 950) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x422 = UINT16_MAX;
	int16_t x423 = -1;
	int32_t x424 = 112;
	uint32_t t39 = 946050348U;

	t39 = (x421<<((x422*x423)<x424));

	if (t39 != 4294967294U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x425 = 316993U;
	int64_t x426 = -53292161682LL;
	uint8_t x427 = 2U;
	volatile uint32_t x428 = 4U;
	uint32_t t40 = 229U;

	t40 = (x425<<((x426*x427)<x428));

	if (t40 != 633986U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x430 = 364;
	volatile uint8_t x431 = UINT8_MAX;
	volatile int32_t x432 = INT32_MIN;
	int32_t t41 = -1735;

	t41 = (x429<<((x430*x431)<x432));

	if (t41 != 25932) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x437 = 77988LL;
	int64_t x438 = -1LL;
	int32_t x439 = 1;
	volatile int64_t t42 = 26989132392LL;

	t42 = (x437<<((x438*x439)<x440));

	if (t42 != 77988LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x449 = 2LL;
	int16_t x450 = 0;
	static int8_t x451 = -1;

	t43 = (x449<<((x450*x451)<x452));

	if (t43 != 4LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x461 = 939U;
	uint64_t x462 = 54LLU;
	int64_t x463 = INT64_MIN;
	int32_t x464 = INT32_MAX;
	volatile int32_t t44 = 1;

	t44 = (x461<<((x462*x463)<x464));

	if (t44 != 1878) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x465 = INT16_MAX;
	static uint64_t x466 = UINT64_MAX;
	int64_t x467 = -1LL;
	uint16_t x468 = 956U;

	t45 = (x465<<((x466*x467)<x468));

	if (t45 != 65534) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x493 = 6;
	uint64_t x495 = UINT64_MAX;
	uint32_t x496 = 0U;
	volatile int32_t t46 = -758232965;

	t46 = (x493<<((x494*x495)<x496));

	if (t46 != 6) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x500 = -12;
	int32_t t47 = -473189;

	t47 = (x497<<((x498*x499)<x500));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x509 = 13274LLU;
	volatile int8_t x510 = 3;
	uint16_t x511 = 1U;
	int16_t x512 = INT16_MIN;
	volatile uint64_t t48 = 682824031648107LLU;

	t48 = (x509<<((x510*x511)<x512));

	if (t48 != 13274LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x513 = 1U;
	static volatile int8_t x514 = 10;
	int8_t x515 = 11;
	volatile uint64_t x516 = 39917148172LLU;
	int32_t t49 = 22031;

	t49 = (x513<<((x514*x515)<x516));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x517 = 132;
	uint16_t x518 = 1308U;
	static uint64_t x519 = 359591336415LLU;
	volatile int32_t t50 = -21033231;

	t50 = (x517<<((x518*x519)<x520));

	if (t50 != 264) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x525 = 1704;
	uint8_t x526 = 0U;
	uint64_t x527 = 846283659112354488LLU;
	int32_t x528 = INT32_MIN;
	int32_t t51 = 87781;

	t51 = (x525<<((x526*x527)<x528));

	if (t51 != 3408) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x533 = 3924U;
	int8_t x536 = 5;
	volatile int32_t t52 = -952;

	t52 = (x533<<((x534*x535)<x536));

	if (t52 != 3924) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x545 = 316593682804778LL;
	uint64_t x546 = UINT64_MAX;
	int16_t x548 = -1;
	volatile int64_t t53 = 34480927291482LL;

	t53 = (x545<<((x546*x547)<x548));

	if (t53 != 633187365609556LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x557 = 272346;
	static int64_t x560 = INT64_MIN;

	t54 = (x557<<((x558*x559)<x560));

	if (t54 != 272346) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x561 = 3895677277LLU;
	uint32_t x563 = UINT32_MAX;
	int8_t x564 = INT8_MIN;
	uint64_t t55 = 29LLU;

	t55 = (x561<<((x562*x563)<x564));

	if (t55 != 7791354554LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x597 = INT16_MAX;
	static volatile uint64_t x598 = UINT64_MAX;
	int64_t x600 = -1LL;

	t56 = (x597<<((x598*x599)<x600));

	if (t56 != 65534) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x605 = 60LL;
	uint64_t x606 = 120256819007580278LLU;
	uint8_t x607 = 55U;
	uint64_t x608 = UINT64_MAX;
	static int64_t t57 = -197LL;

	t57 = (x605<<((x606*x607)<x608));

	if (t57 != 120LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x617 = 4U;
	static volatile uint64_t x618 = 26LLU;
	int16_t x620 = -6751;
	uint32_t t58 = 50U;

	t58 = (x617<<((x618*x619)<x620));

	if (t58 != 8U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x625 = 51U;
	static uint64_t x626 = UINT64_MAX;
	static int32_t x627 = -1760;
	volatile uint16_t x628 = 28U;
	int32_t t59 = -69102;

	t59 = (x625<<((x626*x627)<x628));

	if (t59 != 51) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x653 = 586539082U;
	uint32_t x654 = UINT32_MAX;
	uint8_t x655 = UINT8_MAX;
	int64_t x656 = -1LL;
	uint32_t t60 = 262118686U;

	t60 = (x653<<((x654*x655)<x656));

	if (t60 != 586539082U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x657 = 26U;
	int8_t x658 = INT8_MIN;
	volatile uint8_t x659 = UINT8_MAX;
	volatile int32_t t61 = 326408;

	t61 = (x657<<((x658*x659)<x660));

	if (t61 != 52) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x662 = 126084098922792608LLU;
	int16_t x663 = 6;
	volatile int32_t t62 = -1531;

	t62 = (x661<<((x662*x663)<x664));

	if (t62 != 11) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x665 = 54511313U;
	static int32_t x666 = -1;
	int8_t x667 = INT8_MIN;
	volatile uint64_t x668 = 367816LLU;
	uint32_t t63 = 88425U;

	t63 = (x665<<((x666*x667)<x668));

	if (t63 != 109022626U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x673 = 19U;
	int16_t x675 = -20;
	int32_t x676 = -522593;

	t64 = (x673<<((x674*x675)<x676));

	if (t64 != 19) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x685 = 110;
	volatile int64_t x686 = 221195653862939827LL;
	uint64_t x688 = 8652LLU;
	int32_t t65 = -1;

	t65 = (x685<<((x686*x687)<x688));

	if (t65 != 110) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x689 = 31U;
	static int8_t x690 = -6;
	uint8_t x691 = 105U;
	uint32_t x692 = UINT32_MAX;
	volatile int32_t t66 = 251;

	t66 = (x689<<((x690*x691)<x692));

	if (t66 != 62) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x701 = 222285U;
	int64_t x702 = INT64_MAX;
	volatile int8_t x703 = -1;
	int16_t x704 = INT16_MIN;
	volatile uint32_t t67 = 2374272U;

	t67 = (x701<<((x702*x703)<x704));

	if (t67 != 444570U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x709 = INT16_MAX;
	uint32_t x711 = 10U;
	int8_t x712 = INT8_MIN;
	volatile int32_t t68 = 7842;

	t68 = (x709<<((x710*x711)<x712));

	if (t68 != 65534) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x713 = 3U;
	static volatile int64_t x714 = 26555501878LL;
	int8_t x715 = -1;
	uint64_t x716 = 1LLU;
	int32_t t69 = -200;

	t69 = (x713<<((x714*x715)<x716));

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x737 = 1LL;
	static uint16_t x738 = 7U;
	int8_t x739 = -1;
	int64_t x740 = 377329471900379LL;
	volatile int64_t t70 = -4004285005556163789LL;

	t70 = (x737<<((x738*x739)<x740));

	if (t70 != 2LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x741 = 52431528689LL;
	uint32_t x742 = UINT32_MAX;
	static int16_t x743 = -1;
	static int32_t x744 = -9;

	t71 = (x741<<((x742*x743)<x744));

	if (t71 != 104863057378LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x765 = UINT16_MAX;
	static int8_t x766 = INT8_MIN;
	uint64_t x767 = 306927LLU;

	t72 = (x765<<((x766*x767)<x768));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x770 = 1U;
	volatile int8_t x771 = -1;
	int32_t x772 = INT32_MAX;

	t73 = (x769<<((x770*x771)<x772));

	if (t73 != 1546U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x785 = 192850084U;
	int16_t x787 = -1;
	int16_t x788 = INT16_MIN;
	uint32_t t74 = 290757011U;

	t74 = (x785<<((x786*x787)<x788));

	if (t74 != 192850084U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x797 = UINT8_MAX;
	int16_t x798 = INT16_MIN;
	int16_t x800 = INT16_MAX;

	t75 = (x797<<((x798*x799)<x800));

	if (t75 != 510) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x805 = 0U;
	uint8_t x806 = 15U;
	static volatile int64_t x807 = -1458089445272925LL;
	uint32_t t76 = 83U;

	t76 = (x805<<((x806*x807)<x808));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x817 = 10U;
	uint64_t x818 = UINT64_MAX;
	int16_t x819 = INT16_MIN;
	int32_t x820 = INT32_MIN;
	int32_t t77 = -34;

	t77 = (x817<<((x818*x819)<x820));

	if (t77 != 20) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x829 = INT16_MAX;
	volatile int8_t x830 = 16;
	uint32_t x832 = UINT32_MAX;
	volatile int32_t t78 = 12;

	t78 = (x829<<((x830*x831)<x832));

	if (t78 != 65534) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x837 = 335654224U;
	int64_t x838 = 35451LL;
	int8_t x840 = 24;
	volatile uint32_t t79 = 3891425U;

	t79 = (x837<<((x838*x839)<x840));

	if (t79 != 335654224U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x843 = 406LLU;
	static int32_t x844 = INT32_MAX;
	static int32_t t80 = 50;

	t80 = (x841<<((x842*x843)<x844));

	if (t80 != 80) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x853 = 1878U;
	static uint64_t x855 = 3LLU;
	int8_t x856 = 0;
	static volatile int32_t t81 = 0;

	t81 = (x853<<((x854*x855)<x856));

	if (t81 != 1878) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x881 = INT8_MAX;
	volatile uint32_t x883 = 59520205U;
	uint8_t x884 = UINT8_MAX;
	volatile int32_t t82 = 10185415;

	t82 = (x881<<((x882*x883)<x884));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x885 = 118U;
	volatile uint64_t x886 = UINT64_MAX;
	static uint16_t x887 = 179U;
	int16_t x888 = 929;
	volatile int32_t t83 = 15819;

	t83 = (x885<<((x886*x887)<x888));

	if (t83 != 118) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x894 = UINT8_MAX;
	int8_t x895 = INT8_MIN;
	uint8_t x896 = 79U;
	int64_t t84 = -13LL;

	t84 = (x893<<((x894*x895)<x896));

	if (t84 != 1162766LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x902 = -822629209918771LL;
	volatile int8_t x903 = 0;
	volatile uint64_t t85 = 3592401243864LLU;

	t85 = (x901<<((x902*x903)<x904));

	if (t85 != 406978050LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x906 = INT8_MIN;
	volatile uint64_t x907 = UINT64_MAX;
	static volatile int32_t t86 = 15478407;

	t86 = (x905<<((x906*x907)<x908));

	if (t86 != 8) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x913 = 142908237077629467LLU;
	uint32_t x914 = 531U;
	int8_t x915 = -46;
	uint8_t x916 = 4U;
	volatile uint64_t t87 = 872LLU;

	t87 = (x913<<((x914*x915)<x916));

	if (t87 != 142908237077629467LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x917 = 39;
	volatile int8_t x919 = INT8_MIN;
	int32_t t88 = 1;

	t88 = (x917<<((x918*x919)<x920));

	if (t88 != 78) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x937 = INT8_MAX;
	uint32_t x938 = UINT32_MAX;
	uint16_t x939 = UINT16_MAX;
	int64_t x940 = -407LL;
	int32_t t89 = 16707734;

	t89 = (x937<<((x938*x939)<x940));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x949 = UINT16_MAX;
	int8_t x950 = INT8_MIN;
	uint32_t x951 = 14113U;
	int8_t x952 = INT8_MIN;
	int32_t t90 = 2501057;

	t90 = (x949<<((x950*x951)<x952));

	if (t90 != 131070) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x962 = INT16_MIN;
	int32_t x963 = -1;
	static int32_t t91 = INT32_MAX;

	t91 = (x961<<((x962*x963)<x964));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x969 = 1LL;
	int32_t x970 = 1412;
	uint64_t x971 = 190833LLU;
	uint8_t x972 = UINT8_MAX;
	int64_t t92 = 12270846542100348LL;

	t92 = (x969<<((x970*x971)<x972));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x973 = 664U;
	static volatile uint32_t x975 = UINT32_MAX;
	int64_t x976 = -1LL;
	volatile int32_t t93 = -29771;

	t93 = (x973<<((x974*x975)<x976));

	if (t93 != 664) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x977 = 235811745LL;
	int16_t x978 = INT16_MAX;
	static int8_t x979 = INT8_MIN;
	int32_t x980 = INT32_MAX;
	int64_t t94 = -33509559LL;

	t94 = (x977<<((x978*x979)<x980));

	if (t94 != 471623490LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x981 = 12767063U;
	static uint8_t x982 = UINT8_MAX;
	int8_t x983 = INT8_MIN;

	t95 = (x981<<((x982*x983)<x984));

	if (t95 != 25534126U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x986 = UINT64_MAX;
	int16_t x987 = -1;
	volatile uint16_t x988 = UINT16_MAX;
	int32_t t96 = -1588101;

	t96 = (x985<<((x986*x987)<x988));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x990 = 1066795651968968461LLU;
	int16_t x991 = INT16_MIN;
	uint8_t x992 = UINT8_MAX;

	t97 = (x989<<((x990*x991)<x992));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x993 = 796791506;
	int8_t x994 = -1;
	int8_t x995 = INT8_MIN;
	int32_t x996 = -216291693;
	int32_t t98 = 25554;

	t98 = (x993<<((x994*x995)<x996));

	if (t98 != 796791506) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x1017 = 192U;
	uint32_t x1018 = 8U;
	uint32_t x1019 = 2U;
	static int32_t x1020 = -1;
	uint32_t t99 = 19U;

	t99 = (x1017<<((x1018*x1019)<x1020));

	if (t99 != 384U) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = 230;
int8_t x16 = 5;
uint64_t x24 = 3LLU;
volatile int16_t x30 = INT16_MIN;
static uint32_t x31 = UINT32_MAX;
uint64_t x41 = 0LLU;
int8_t x58 = -1;
int16_t x60 = 195;
int32_t x99 = -1;
volatile uint64_t t7 = 1085LLU;
volatile int16_t x102 = INT16_MAX;
int64_t x104 = -1LL;
static volatile uint32_t x110 = UINT32_MAX;
int16_t x112 = INT16_MAX;
volatile int64_t t9 = 12111LL;
int16_t x118 = -1;
int64_t x120 = INT64_MIN;
volatile int8_t x123 = -1;
int8_t x124 = INT8_MIN;
int16_t x126 = INT16_MIN;
uint64_t x141 = 15095308568610620LLU;
int16_t x142 = INT16_MIN;
int16_t x143 = INT16_MIN;
static uint32_t x148 = UINT32_MAX;
volatile uint32_t t16 = 7U;
volatile uint32_t x154 = 83U;
static volatile uint64_t x157 = 2LLU;
volatile int32_t x158 = INT32_MIN;
int8_t x167 = -17;
uint64_t t20 = 898581217087LLU;
static uint8_t x169 = UINT8_MAX;
int32_t x191 = 6468;
volatile int8_t x197 = -23;
int32_t x200 = -1;
volatile uint32_t t25 = 305U;
volatile int8_t x214 = INT8_MIN;
int64_t x254 = -1LL;
int32_t x275 = -1;
uint64_t t32 = 303443873812399304LLU;
static int32_t t34 = -320;
static uint64_t x316 = 829802660269195LLU;
int64_t x318 = -1LL;
static volatile int16_t x334 = INT16_MAX;
uint16_t x338 = UINT16_MAX;
int32_t x353 = -1;
int16_t x359 = INT16_MAX;
static uint32_t x361 = 1U;
uint64_t x364 = 1538111582033365680LLU;
static volatile uint64_t x373 = UINT64_MAX;
static uint32_t t47 = 7U;
int16_t x388 = INT16_MIN;
static volatile int16_t x396 = INT16_MIN;
volatile int32_t x401 = -1;
int32_t t51 = 106175852;
int32_t x407 = -1;
volatile uint64_t t52 = 37969LLU;
uint32_t x413 = UINT32_MAX;
volatile int16_t x414 = 124;
int32_t t55 = -1605;
int64_t t57 = -2465LL;
uint16_t x467 = UINT16_MAX;
int32_t t60 = -1968815;
int16_t x486 = INT16_MAX;
volatile uint8_t x496 = 7U;
uint32_t t63 = 7297597U;
int32_t x501 = INT32_MIN;
uint64_t t64 = 46978765234764384LLU;
int32_t x510 = 58860;
uint32_t x517 = 15U;
int32_t x541 = -1;
int16_t x554 = INT16_MAX;
int64_t x562 = INT64_MIN;
int32_t x563 = INT32_MIN;
int32_t x571 = 68234589;
uint32_t x592 = UINT32_MAX;
static int16_t x598 = -1;
volatile uint32_t x610 = 6U;
int32_t x611 = INT32_MAX;
int32_t x616 = 65099118;
uint64_t x617 = UINT64_MAX;
uint32_t x619 = 120U;
uint64_t t81 = 76LLU;
volatile uint64_t t82 = 241117459383LLU;
static uint8_t x639 = 51U;
volatile uint16_t x640 = 52U;
volatile uint64_t t83 = 35643LLU;
uint64_t t85 = 0LLU;
int32_t x649 = -1;
int16_t x656 = -2666;
uint8_t x680 = UINT8_MAX;
volatile int32_t t93 = -22334;
volatile int8_t x718 = INT8_MIN;
uint64_t x720 = UINT64_MAX;
static uint64_t x733 = 119142289418975LLU;
int32_t x756 = -1;
int64_t t98 = -6010478924883126LL;


void f0(void) {
	uint64_t x5 = 4LLU;
	static int16_t x7 = INT16_MIN;
	int16_t x8 = INT16_MIN;
	volatile uint64_t t0 = 317901570196503125LLU;

	t0 = ((x5+x6)<<(x7<x8));

	if (t0 != 234LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = 1;
	int16_t x14 = 8;
	volatile int64_t x15 = 52836884437080745LL;
	static int32_t t1 = -1;

	t1 = ((x13+x14)<<(x15<x16));

	if (t1 != 9) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x21 = 20128055LLU;
	uint32_t x22 = UINT32_MAX;
	static int16_t x23 = 2;
	uint64_t t2 = 994284LLU;

	t2 = ((x21+x22)<<(x23<x24));

	if (t2 != 8630190700LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x29 = 4592157790186LLU;
	int32_t x32 = -1;
	volatile uint64_t t3 = 241LLU;

	t3 = ((x29+x30)<<(x31<x32));

	if (t3 != 4592157757418LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x42 = -1;
	uint16_t x43 = 33U;
	volatile int64_t x44 = INT64_MAX;
	volatile uint64_t t4 = 15100968LLU;

	t4 = ((x41+x42)<<(x43<x44));

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x57 = 36683;
	int8_t x59 = INT8_MIN;
	volatile int32_t t5 = 68160;

	t5 = ((x57+x58)<<(x59<x60));

	if (t5 != 73364) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x69 = 14U;
	volatile int16_t x70 = -1;
	int16_t x71 = 197;
	int32_t x72 = -1;
	volatile int32_t t6 = -91904;

	t6 = ((x69+x70)<<(x71<x72));

	if (t6 != 13) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x97 = 169322300924043LLU;
	static int64_t x98 = INT64_MIN;
	int32_t x100 = INT32_MAX;

	t7 = ((x97+x98)<<(x99<x100));

	if (t7 != 338644601848086LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x101 = 196404907U;
	int16_t x103 = -532;
	volatile uint32_t t8 = 18619U;

	t8 = ((x101+x102)<<(x103<x104));

	if (t8 != 392875348U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x109 = 829484798809126LL;
	volatile int16_t x111 = 989;

	t9 = ((x109+x110)<<(x111<x112));

	if (t9 != 1658978187552842LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x113 = INT16_MAX;
	int16_t x114 = INT16_MAX;
	uint16_t x115 = 1848U;
	uint8_t x116 = UINT8_MAX;
	int32_t t10 = -59403;

	t10 = ((x113+x114)<<(x115<x116));

	if (t10 != 65534) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x117 = 89U;
	static int64_t x119 = INT64_MIN;
	volatile int32_t t11 = 1;

	t11 = ((x117+x118)<<(x119<x120));

	if (t11 != 88) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x121 = INT8_MAX;
	uint8_t x122 = 5U;
	volatile int32_t t12 = 6;

	t12 = ((x121+x122)<<(x123<x124));

	if (t12 != 132) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x125 = 37572LLU;
	static uint8_t x127 = 0U;
	volatile int8_t x128 = INT8_MAX;
	volatile uint64_t t13 = 25LLU;

	t13 = ((x125+x126)<<(x127<x128));

	if (t13 != 9608LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x137 = UINT8_MAX;
	uint8_t x138 = 49U;
	volatile int64_t x139 = -343918049374LL;
	static int64_t x140 = -1LL;
	int32_t t14 = -1244780;

	t14 = ((x137+x138)<<(x139<x140));

	if (t14 != 608) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x144 = 274U;
	uint64_t t15 = 50044LLU;

	t15 = ((x141+x142)<<(x143<x144));

	if (t15 != 30190617137155704LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x145 = 2270752U;
	int16_t x146 = 2;
	volatile int8_t x147 = -1;

	t16 = ((x145+x146)<<(x147<x148));

	if (t16 != 2270754U) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x153 = INT16_MIN;
	uint8_t x155 = 16U;
	int16_t x156 = -1;
	static uint32_t t17 = 322306U;

	t17 = ((x153+x154)<<(x155<x156));

	if (t17 != 4294934611U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x159 = UINT32_MAX;
	volatile int32_t x160 = INT32_MIN;
	uint64_t t18 = 4LLU;

	t18 = ((x157+x158)<<(x159<x160));

	if (t18 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x161 = INT16_MAX;
	uint64_t x162 = 123736269LLU;
	static int8_t x163 = 13;
	static int8_t x164 = INT8_MIN;
	uint64_t t19 = 5280795199LLU;

	t19 = ((x161+x162)<<(x163<x164));

	if (t19 != 123769036LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x165 = 6043;
	uint64_t x166 = 541819385538353LLU;
	volatile int16_t x168 = INT16_MIN;

	t20 = ((x165+x166)<<(x167<x168));

	if (t20 != 541819385544396LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x170 = -1;
	static volatile int64_t x171 = INT64_MAX;
	int16_t x172 = INT16_MAX;
	volatile int32_t t21 = -225;

	t21 = ((x169+x170)<<(x171<x172));

	if (t21 != 254) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x177 = 514765042U;
	uint32_t x178 = 99323U;
	int64_t x179 = INT64_MIN;
	uint64_t x180 = 15410508626LLU;
	uint32_t t22 = 451348U;

	t22 = ((x177+x178)<<(x179<x180));

	if (t22 != 514864365U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x185 = 7000U;
	volatile int8_t x186 = -1;
	uint8_t x187 = 13U;
	uint64_t x188 = UINT64_MAX;
	static volatile uint32_t t23 = 5438384U;

	t23 = ((x185+x186)<<(x187<x188));

	if (t23 != 13998U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x189 = 48;
	static uint16_t x190 = UINT16_MAX;
	int32_t x192 = INT32_MIN;
	int32_t t24 = -59;

	t24 = ((x189+x190)<<(x191<x192));

	if (t24 != 65583) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x198 = 118720U;
	uint16_t x199 = 240U;

	t25 = ((x197+x198)<<(x199<x200));

	if (t25 != 118697U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x209 = 41519U;
	int32_t x210 = INT32_MIN;
	volatile int64_t x211 = -787447505LL;
	uint8_t x212 = 3U;
	volatile uint32_t t26 = 5U;

	t26 = ((x209+x210)<<(x211<x212));

	if (t26 != 83038U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x213 = 63814U;
	volatile int8_t x215 = 6;
	int64_t x216 = -1LL;
	static uint32_t t27 = 346434U;

	t27 = ((x213+x214)<<(x215<x216));

	if (t27 != 63686U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x233 = 355U;
	int8_t x234 = INT8_MIN;
	volatile int64_t x235 = INT64_MIN;
	uint64_t x236 = 1047525029LLU;
	volatile int32_t t28 = 9568807;

	t28 = ((x233+x234)<<(x235<x236));

	if (t28 != 227) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x245 = INT16_MAX;
	uint32_t x246 = 27211303U;
	static volatile int64_t x247 = 173LL;
	volatile uint16_t x248 = 6U;
	uint32_t t29 = 867334242U;

	t29 = ((x245+x246)<<(x247<x248));

	if (t29 != 27244070U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x253 = UINT32_MAX;
	int16_t x255 = INT16_MIN;
	int64_t x256 = INT64_MIN;
	int64_t t30 = -545080230854LL;

	t30 = ((x253+x254)<<(x255<x256));

	if (t30 != 4294967294LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x265 = INT32_MAX;
	int64_t x266 = -296488LL;
	uint64_t x267 = 2574715688463159020LLU;
	int16_t x268 = -1;
	volatile int64_t t31 = 20937389312LL;

	t31 = ((x265+x266)<<(x267<x268));

	if (t31 != 4294374318LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x273 = 63458114205LLU;
	uint64_t x274 = 12203298647506988LLU;
	int16_t x276 = -683;

	t32 = ((x273+x274)<<(x275<x276));

	if (t32 != 12203362105621193LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x289 = 2U;
	uint32_t x290 = UINT32_MAX;
	uint8_t x291 = 19U;
	volatile int16_t x292 = -20;
	uint32_t t33 = 1698679190U;

	t33 = ((x289+x290)<<(x291<x292));

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x301 = 205462;
	static volatile uint8_t x302 = 58U;
	int8_t x303 = 17;
	static volatile uint64_t x304 = UINT64_MAX;

	t34 = ((x301+x302)<<(x303<x304));

	if (t34 != 411040) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x305 = 1;
	volatile int16_t x306 = INT16_MAX;
	static volatile int8_t x307 = INT8_MIN;
	static int32_t x308 = INT32_MIN;
	int32_t t35 = 20;

	t35 = ((x305+x306)<<(x307<x308));

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x309 = -1LL;
	int32_t x310 = INT32_MAX;
	uint8_t x311 = 2U;
	int8_t x312 = -1;
	int64_t t36 = 15057384262046428LL;

	t36 = ((x309+x310)<<(x311<x312));

	if (t36 != 2147483646LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x313 = 1459063U;
	uint64_t x314 = UINT64_MAX;
	static int16_t x315 = INT16_MIN;
	static uint64_t t37 = 316349719925233LLU;

	t37 = ((x313+x314)<<(x315<x316));

	if (t37 != 1459062LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x317 = 1243252090109936LLU;
	int16_t x319 = -1;
	int8_t x320 = INT8_MIN;
	static uint64_t t38 = 32472LLU;

	t38 = ((x317+x318)<<(x319<x320));

	if (t38 != 1243252090109935LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x321 = -1LL;
	uint32_t x322 = UINT32_MAX;
	uint64_t x323 = 8032153LLU;
	static int32_t x324 = INT32_MIN;
	volatile int64_t t39 = -18154942LL;

	t39 = ((x321+x322)<<(x323<x324));

	if (t39 != 8589934588LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x333 = 20U;
	int8_t x335 = -1;
	volatile int32_t x336 = INT32_MIN;
	volatile int32_t t40 = -15;

	t40 = ((x333+x334)<<(x335<x336));

	if (t40 != 32787) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x337 = UINT16_MAX;
	static int32_t x339 = INT32_MAX;
	uint64_t x340 = 377450171639484LLU;
	int32_t t41 = 4788034;

	t41 = ((x337+x338)<<(x339<x340));

	if (t41 != 262140) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x354 = 134338842U;
	int8_t x355 = INT8_MIN;
	uint32_t x356 = 25606U;
	volatile uint32_t t42 = 942U;

	t42 = ((x353+x354)<<(x355<x356));

	if (t42 != 134338841U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x357 = 27104U;
	uint32_t x358 = 231575U;
	volatile uint8_t x360 = 39U;
	volatile uint32_t t43 = 15954155U;

	t43 = ((x357+x358)<<(x359<x360));

	if (t43 != 258679U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x362 = 3229U;
	int32_t x363 = INT32_MAX;
	volatile uint32_t t44 = 3452U;

	t44 = ((x361+x362)<<(x363<x364));

	if (t44 != 6460U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x365 = 1241U;
	volatile uint64_t x366 = 10332380308LLU;
	int8_t x367 = INT8_MIN;
	int16_t x368 = -1;
	volatile uint64_t t45 = 23LLU;

	t45 = ((x365+x366)<<(x367<x368));

	if (t45 != 20664763098LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x374 = INT16_MIN;
	volatile int8_t x375 = -1;
	static uint8_t x376 = UINT8_MAX;
	uint64_t t46 = 980823958383985LLU;

	t46 = ((x373+x374)<<(x375<x376));

	if (t46 != 18446744073709486078LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x381 = INT32_MIN;
	volatile uint32_t x382 = 29U;
	uint8_t x383 = 3U;
	int64_t x384 = -1LL;

	t47 = ((x381+x382)<<(x383<x384));

	if (t47 != 2147483677U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x385 = 223547;
	uint8_t x386 = UINT8_MAX;
	static int16_t x387 = -1;
	volatile int32_t t48 = -874;

	t48 = ((x385+x386)<<(x387<x388));

	if (t48 != 223802) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x393 = 2U;
	volatile int16_t x394 = INT16_MAX;
	uint32_t x395 = 3204U;
	int32_t t49 = -222298678;

	t49 = ((x393+x394)<<(x395<x396));

	if (t49 != 65538) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x397 = 1U;
	int16_t x398 = INT16_MAX;
	int8_t x399 = INT8_MAX;
	volatile int32_t x400 = INT32_MAX;
	static volatile int32_t t50 = -31;

	t50 = ((x397+x398)<<(x399<x400));

	if (t50 != 65536) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x402 = INT16_MAX;
	volatile uint16_t x403 = 7860U;
	volatile int64_t x404 = -3500329553041151LL;

	t51 = ((x401+x402)<<(x403<x404));

	if (t51 != 32766) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x405 = INT8_MAX;
	uint64_t x406 = 5706039969648LLU;
	int8_t x408 = INT8_MAX;

	t52 = ((x405+x406)<<(x407<x408));

	if (t52 != 11412079939550LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x415 = INT32_MIN;
	volatile int8_t x416 = INT8_MIN;
	volatile uint32_t t53 = 36832U;

	t53 = ((x413+x414)<<(x415<x416));

	if (t53 != 246U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x417 = UINT64_MAX;
	int32_t x418 = -1;
	volatile int32_t x419 = -1;
	volatile int8_t x420 = 58;
	uint64_t t54 = 21069444550033943LLU;

	t54 = ((x417+x418)<<(x419<x420));

	if (t54 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x437 = 6;
	int8_t x438 = 4;
	uint32_t x439 = 0U;
	uint8_t x440 = 19U;

	t55 = ((x437+x438)<<(x439<x440));

	if (t55 != 20) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x441 = INT8_MAX;
	static int8_t x442 = 1;
	uint8_t x443 = 7U;
	uint16_t x444 = 895U;
	static volatile int32_t t56 = -5400834;

	t56 = ((x441+x442)<<(x443<x444));

	if (t56 != 256) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x461 = -1;
	int64_t x462 = 36629LL;
	static int32_t x463 = INT32_MAX;
	uint8_t x464 = 24U;

	t57 = ((x461+x462)<<(x463<x464));

	if (t57 != 36628LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x465 = UINT16_MAX;
	int16_t x466 = -1;
	uint8_t x468 = UINT8_MAX;
	int32_t t58 = 3336134;

	t58 = ((x465+x466)<<(x467<x468));

	if (t58 != 65534) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x469 = UINT16_MAX;
	int32_t x470 = -17608;
	volatile int8_t x471 = INT8_MIN;
	uint64_t x472 = 435063333LLU;
	volatile int32_t t59 = -1;

	t59 = ((x469+x470)<<(x471<x472));

	if (t59 != 47927) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x477 = 42U;
	int8_t x478 = -13;
	uint16_t x479 = UINT16_MAX;
	uint32_t x480 = 5277U;

	t60 = ((x477+x478)<<(x479<x480));

	if (t60 != 29) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x485 = 2727;
	volatile int8_t x487 = INT8_MIN;
	uint8_t x488 = UINT8_MAX;
	volatile int32_t t61 = 861;

	t61 = ((x485+x486)<<(x487<x488));

	if (t61 != 70988) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x489 = INT16_MIN;
	static uint64_t x490 = UINT64_MAX;
	uint32_t x491 = 551686313U;
	static uint8_t x492 = UINT8_MAX;
	uint64_t t62 = 49LLU;

	t62 = ((x489+x490)<<(x491<x492));

	if (t62 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x493 = 9U;
	int32_t x494 = -1;
	static volatile int16_t x495 = -1;

	t63 = ((x493+x494)<<(x495<x496));

	if (t63 != 16U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x502 = UINT64_MAX;
	int32_t x503 = 1;
	uint16_t x504 = 8112U;

	t64 = ((x501+x502)<<(x503<x504));

	if (t64 != 18446744069414584318LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x509 = -1LL;
	uint32_t x511 = 5U;
	static int8_t x512 = 14;
	static volatile int64_t t65 = 284LL;

	t65 = ((x509+x510)<<(x511<x512));

	if (t65 != 117718LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x518 = 1U;
	int16_t x519 = INT16_MIN;
	int8_t x520 = -1;
	static uint32_t t66 = 81184U;

	t66 = ((x517+x518)<<(x519<x520));

	if (t66 != 32U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x542 = 8U;
	int8_t x543 = -1;
	int32_t x544 = INT32_MIN;
	static uint32_t t67 = 3134679U;

	t67 = ((x541+x542)<<(x543<x544));

	if (t67 != 7U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x545 = INT16_MAX;
	uint16_t x546 = 1U;
	uint64_t x547 = 1LLU;
	static int16_t x548 = -9618;
	volatile int32_t t68 = -13;

	t68 = ((x545+x546)<<(x547<x548));

	if (t68 != 65536) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x549 = 6U;
	static int32_t x550 = -1;
	int64_t x551 = INT64_MAX;
	int16_t x552 = -104;
	int32_t t69 = 3407422;

	t69 = ((x549+x550)<<(x551<x552));

	if (t69 != 5) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x553 = UINT16_MAX;
	static int64_t x555 = -1LL;
	volatile int32_t x556 = INT32_MIN;
	volatile int32_t t70 = 102;

	t70 = ((x553+x554)<<(x555<x556));

	if (t70 != 98302) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x561 = 356013423995LLU;
	int64_t x564 = INT64_MAX;
	volatile uint64_t t71 = 82LLU;

	t71 = ((x561+x562)<<(x563<x564));

	if (t71 != 712026847990LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x565 = UINT16_MAX;
	uint8_t x566 = UINT8_MAX;
	volatile int8_t x567 = 41;
	int8_t x568 = INT8_MIN;
	volatile int32_t t72 = 9;

	t72 = ((x565+x566)<<(x567<x568));

	if (t72 != 65790) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x569 = UINT32_MAX;
	static uint64_t x570 = UINT64_MAX;
	static volatile uint8_t x572 = 2U;
	uint64_t t73 = 33LLU;

	t73 = ((x569+x570)<<(x571<x572));

	if (t73 != 4294967294LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x577 = 4U;
	static int8_t x578 = INT8_MAX;
	uint64_t x579 = 1057093217LLU;
	int8_t x580 = INT8_MIN;
	uint32_t t74 = 31368798U;

	t74 = ((x577+x578)<<(x579<x580));

	if (t74 != 262U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x581 = 262U;
	uint16_t x582 = UINT16_MAX;
	uint64_t x583 = 160443828LLU;
	int16_t x584 = -168;
	static int32_t t75 = 107748;

	t75 = ((x581+x582)<<(x583<x584));

	if (t75 != 131594) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x589 = 134U;
	static uint64_t x590 = 28384629LLU;
	volatile int8_t x591 = 1;
	uint64_t t76 = 13740984092185271LLU;

	t76 = ((x589+x590)<<(x591<x592));

	if (t76 != 56769526LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x597 = 120928421355633LLU;
	int32_t x599 = INT32_MIN;
	uint32_t x600 = UINT32_MAX;
	volatile uint64_t t77 = 15946995LLU;

	t77 = ((x597+x598)<<(x599<x600));

	if (t77 != 241856842711264LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x605 = -1LL;
	int32_t x606 = 39953;
	static int32_t x607 = INT32_MIN;
	static int8_t x608 = -40;
	int64_t t78 = 761523LL;

	t78 = ((x605+x606)<<(x607<x608));

	if (t78 != 79904LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x609 = INT32_MAX;
	static uint16_t x612 = 15487U;
	volatile uint32_t t79 = 404062U;

	t79 = ((x609+x610)<<(x611<x612));

	if (t79 != 2147483653U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x613 = INT32_MIN;
	uint64_t x614 = 118229487LLU;
	uint32_t x615 = 226U;
	uint64_t t80 = 14576LLU;

	t80 = ((x613+x614)<<(x615<x616));

	if (t80 != 18446744069651043294LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x618 = INT16_MIN;
	static int32_t x620 = 517;

	t81 = ((x617+x618)<<(x619<x620));

	if (t81 != 18446744073709486078LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x629 = UINT64_MAX;
	int8_t x630 = 42;
	uint64_t x631 = 7922773247265LLU;
	static uint16_t x632 = UINT16_MAX;

	t82 = ((x629+x630)<<(x631<x632));

	if (t82 != 41LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x637 = UINT64_MAX;
	int32_t x638 = INT32_MIN;

	t83 = ((x637+x638)<<(x639<x640));

	if (t83 != 18446744069414584318LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x641 = INT64_MAX;
	int16_t x642 = INT16_MIN;
	int32_t x643 = -1;
	int32_t x644 = -1;
	static volatile int64_t t84 = 4718267570600192LL;

	t84 = ((x641+x642)<<(x643<x644));

	if (t84 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x645 = -1;
	uint64_t x646 = 3399507036179LLU;
	volatile uint8_t x647 = 97U;
	int16_t x648 = INT16_MIN;

	t85 = ((x645+x646)<<(x647<x648));

	if (t85 != 3399507036178LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x650 = 41U;
	int8_t x651 = 14;
	volatile int32_t x652 = INT32_MIN;
	int32_t t86 = 1;

	t86 = ((x649+x650)<<(x651<x652));

	if (t86 != 40) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x653 = -1;
	uint32_t x654 = UINT32_MAX;
	static volatile uint8_t x655 = 0U;
	uint32_t t87 = 352803164U;

	t87 = ((x653+x654)<<(x655<x656));

	if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x677 = 4129LL;
	static volatile int16_t x678 = INT16_MAX;
	static uint8_t x679 = 10U;
	volatile int64_t t88 = 4310498604883830940LL;

	t88 = ((x677+x678)<<(x679<x680));

	if (t88 != 73792LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x685 = UINT8_MAX;
	int16_t x686 = INT16_MAX;
	static volatile uint8_t x687 = 54U;
	int32_t x688 = 1088;
	int32_t t89 = 12092852;

	t89 = ((x685+x686)<<(x687<x688));

	if (t89 != 66044) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x689 = INT64_MAX;
	static int8_t x690 = -1;
	volatile int8_t x691 = INT8_MIN;
	int8_t x692 = INT8_MIN;
	static volatile int64_t t90 = 0LL;

	t90 = ((x689+x690)<<(x691<x692));

	if (t90 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x693 = 56221040824279LLU;
	static volatile uint32_t x694 = 28409395U;
	uint16_t x695 = 1U;
	volatile uint64_t x696 = 62031390LLU;
	uint64_t t91 = 243835453LLU;

	t91 = ((x693+x694)<<(x695<x696));

	if (t91 != 112442138467348LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x705 = INT8_MAX;
	static int8_t x706 = -29;
	volatile int32_t x707 = INT32_MIN;
	int64_t x708 = INT64_MAX;
	int32_t t92 = -3;

	t92 = ((x705+x706)<<(x707<x708));

	if (t92 != 196) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x713 = INT8_MAX;
	int8_t x714 = INT8_MAX;
	int16_t x715 = -1;
	uint16_t x716 = UINT16_MAX;

	t93 = ((x713+x714)<<(x715<x716));

	if (t93 != 508) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x717 = 7365977;
	volatile int16_t x719 = INT16_MAX;
	int32_t t94 = 2015854;

	t94 = ((x717+x718)<<(x719<x720));

	if (t94 != 14731698) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x721 = 3U;
	volatile int16_t x722 = 54;
	int64_t x723 = INT64_MIN;
	volatile uint32_t x724 = 57122U;
	static int32_t t95 = 58786;

	t95 = ((x721+x722)<<(x723<x724));

	if (t95 != 114) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x734 = 23U;
	static int8_t x735 = INT8_MIN;
	uint8_t x736 = UINT8_MAX;
	uint64_t t96 = 49897731507LLU;

	t96 = ((x733+x734)<<(x735<x736));

	if (t96 != 238284578837996LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x741 = -1;
	uint64_t x742 = 4262310567625LLU;
	int8_t x743 = 0;
	uint32_t x744 = UINT32_MAX;
	uint64_t t97 = 446890292317640LLU;

	t97 = ((x741+x742)<<(x743<x744));

	if (t97 != 8524621135248LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x753 = 391497206LL;
	int32_t x754 = -1;
	volatile int8_t x755 = INT8_MAX;

	t98 = ((x753+x754)<<(x755<x756));

	if (t98 != 391497205LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x773 = INT16_MAX;
	static volatile int16_t x774 = -1;
	uint16_t x775 = UINT16_MAX;
	static int16_t x776 = -1;
	int32_t t99 = -301710593;

	t99 = ((x773+x774)<<(x775<x776));

	if (t99 != 32766) { NG(); } else { ; }
	
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


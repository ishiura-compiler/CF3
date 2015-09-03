#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x9 = INT64_MIN;
volatile int64_t x10 = INT64_MAX;
int64_t x21 = INT64_MIN;
int32_t t4 = -926012;
uint16_t x67 = 212U;
int32_t t5 = -18;
volatile uint16_t x84 = UINT16_MAX;
volatile int8_t x85 = -4;
int32_t t9 = -902;
uint16_t x117 = UINT16_MAX;
volatile uint8_t x119 = UINT8_MAX;
int64_t x120 = -28497313729623320LL;
static int32_t t18 = 45171;
int8_t x209 = -1;
int8_t x228 = INT8_MAX;
volatile int32_t t24 = 146019695;
static volatile int8_t x236 = 1;
int32_t t25 = -7;
int64_t x237 = -1LL;
volatile uint16_t x239 = UINT16_MAX;
volatile int8_t x247 = -1;
volatile int32_t t27 = 0;
int32_t x267 = INT32_MIN;
uint8_t x273 = 0U;
uint64_t x274 = 11807444394042657LLU;
volatile int32_t x276 = INT32_MIN;
int32_t t30 = 1456112;
volatile uint8_t x285 = 0U;
int32_t x296 = 28;
int16_t x309 = -1;
static int16_t x311 = INT16_MAX;
int16_t x312 = 14247;
int32_t t34 = 798390537;
volatile int32_t t36 = 3;
volatile int16_t x358 = 3;
int32_t x372 = -198314;
uint64_t x377 = UINT64_MAX;
int32_t x380 = INT32_MIN;
int32_t t42 = -8177192;
int16_t x389 = -10;
volatile int32_t t43 = -552620799;
int16_t x394 = INT16_MAX;
static int8_t x409 = -1;
uint32_t x410 = UINT32_MAX;
int16_t x420 = -197;
int16_t x443 = INT16_MAX;
uint64_t x462 = 2087231189LLU;
volatile int64_t x463 = -1LL;
static uint64_t x464 = 2312069716489364767LLU;
int32_t t51 = -578;
volatile uint64_t x466 = UINT64_MAX;
int16_t x485 = INT16_MIN;
volatile uint8_t x488 = 102U;
int32_t t55 = 139844659;
int8_t x495 = INT8_MIN;
volatile int16_t x496 = INT16_MIN;
static int8_t x510 = INT8_MAX;
static int16_t x511 = INT16_MIN;
int8_t x545 = INT8_MAX;
static int32_t x550 = 74705918;
static int64_t x551 = -16917071600LL;
static int32_t t64 = 400;
static uint32_t x559 = UINT32_MAX;
int32_t x563 = -1;
int32_t t67 = -4708090;
int8_t x569 = INT8_MIN;
volatile int64_t x582 = 40212667123629810LL;
int16_t x593 = INT16_MAX;
static int32_t x594 = 7310;
volatile int32_t x613 = INT32_MAX;
int64_t x629 = -1LL;
volatile int16_t x630 = 1;
volatile uint64_t x635 = UINT64_MAX;
int64_t x655 = INT64_MAX;
volatile int32_t t78 = 13;
int64_t x669 = INT64_MAX;
volatile uint64_t x671 = UINT64_MAX;
volatile int32_t t79 = 7595066;
volatile int32_t t80 = -4547386;
int8_t x686 = INT8_MAX;
static uint16_t x688 = UINT16_MAX;
volatile int32_t t81 = -5103767;
int64_t x703 = INT64_MIN;
int8_t x704 = -1;
volatile int32_t x723 = 762057;
uint64_t x724 = 501LLU;
uint64_t x725 = UINT64_MAX;
int32_t t87 = -3695061;
int8_t x735 = INT8_MIN;
int64_t x736 = 32403610509070464LL;
uint8_t x739 = 23U;
static uint32_t x740 = UINT32_MAX;
int32_t t89 = 7;
static int32_t x747 = INT32_MIN;
int16_t x752 = INT16_MAX;
volatile int32_t t92 = 146556;
int16_t x771 = -265;
static int16_t x773 = 401;
volatile int32_t t95 = -488;
volatile int64_t x787 = INT64_MIN;
volatile int32_t t98 = 261649;
static uint64_t x800 = 259396274224518424LLU;


void f0(void) {
	int16_t x11 = INT16_MIN;
	volatile uint64_t x12 = 1259658170691LLU;
	volatile int32_t t0 = -1;

	t0 = (x9==(x10>>(x11<=x12)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MIN;
	uint8_t x14 = 3U;
	int16_t x15 = 1;
	int8_t x16 = -1;
	int32_t t1 = 1392002;

	t1 = (x13==(x14>>(x15<=x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x22 = 0;
	int16_t x23 = -1;
	volatile int32_t x24 = -1;
	int32_t t2 = -1;

	t2 = (x21==(x22>>(x23<=x24)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x29 = -1;
	int16_t x30 = INT16_MAX;
	volatile int8_t x31 = 3;
	static uint8_t x32 = UINT8_MAX;
	int32_t t3 = 798044781;

	t3 = (x29==(x30>>(x31<=x32)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x57 = -316;
	volatile int16_t x58 = 32;
	static int16_t x59 = INT16_MIN;
	volatile uint64_t x60 = 3998995LLU;

	t4 = (x57==(x58>>(x59<=x60)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x65 = INT8_MAX;
	uint8_t x66 = 122U;
	volatile int8_t x68 = INT8_MIN;

	t5 = (x65==(x66>>(x67<=x68)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x81 = INT16_MAX;
	uint8_t x82 = UINT8_MAX;
	uint16_t x83 = 3U;
	static volatile int32_t t6 = -5;

	t6 = (x81==(x82>>(x83<=x84)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x86 = INT32_MAX;
	static int64_t x87 = INT64_MIN;
	int8_t x88 = INT8_MAX;
	int32_t t7 = -20753;

	t7 = (x85==(x86>>(x87<=x88)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x89 = 7U;
	uint16_t x90 = 23077U;
	uint8_t x91 = UINT8_MAX;
	uint64_t x92 = 45332LLU;
	int32_t t8 = -162;

	t8 = (x89==(x90>>(x91<=x92)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x93 = 42825596;
	int32_t x94 = INT32_MAX;
	uint8_t x95 = 5U;
	static volatile uint16_t x96 = 7U;

	t9 = (x93==(x94>>(x95<=x96)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x118 = INT8_MAX;
	int32_t t10 = 22431792;

	t10 = (x117==(x118>>(x119<=x120)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x125 = -21365609102116102LL;
	static uint8_t x126 = UINT8_MAX;
	static uint32_t x127 = 1U;
	volatile int32_t x128 = INT32_MIN;
	static int32_t t11 = -2;

	t11 = (x125==(x126>>(x127<=x128)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x133 = INT8_MAX;
	int8_t x134 = INT8_MAX;
	int32_t x135 = 0;
	int16_t x136 = 846;
	volatile int32_t t12 = -61;

	t12 = (x133==(x134>>(x135<=x136)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x149 = 10;
	uint16_t x150 = 2U;
	int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MAX;
	volatile int32_t t13 = -512417066;

	t13 = (x149==(x150>>(x151<=x152)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x153 = UINT64_MAX;
	uint8_t x154 = UINT8_MAX;
	volatile int16_t x155 = INT16_MIN;
	static uint32_t x156 = 214U;
	volatile int32_t t14 = -150063024;

	t14 = (x153==(x154>>(x155<=x156)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x165 = -1LL;
	static uint64_t x166 = 61428916856LLU;
	uint64_t x167 = 292LLU;
	uint64_t x168 = 756197391LLU;
	int32_t t15 = -7301796;

	t15 = (x165==(x166>>(x167<=x168)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x177 = 7U;
	int32_t x178 = 2177;
	static int8_t x179 = 22;
	uint64_t x180 = 484327746LLU;
	volatile int32_t t16 = 5372325;

	t16 = (x177==(x178>>(x179<=x180)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x185 = UINT64_MAX;
	static int16_t x186 = INT16_MAX;
	volatile int8_t x187 = INT8_MAX;
	uint16_t x188 = 176U;
	static int32_t t17 = 7550;

	t17 = (x185==(x186>>(x187<=x188)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x189 = -2084211;
	int64_t x190 = INT64_MAX;
	uint32_t x191 = 226U;
	uint64_t x192 = 55LLU;

	t18 = (x189==(x190>>(x191<=x192)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x197 = INT8_MIN;
	static volatile int16_t x198 = 3397;
	int64_t x199 = 56363779158836772LL;
	volatile int16_t x200 = 3;
	int32_t t19 = 952;

	t19 = (x197==(x198>>(x199<=x200)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x205 = 8U;
	static int8_t x206 = INT8_MAX;
	uint32_t x207 = UINT32_MAX;
	uint64_t x208 = 39LLU;
	volatile int32_t t20 = 5260962;

	t20 = (x205==(x206>>(x207<=x208)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x210 = UINT32_MAX;
	int8_t x211 = INT8_MAX;
	int8_t x212 = INT8_MIN;
	static volatile int32_t t21 = 440521;

	t21 = (x209==(x210>>(x211<=x212)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x221 = INT16_MIN;
	static uint8_t x222 = 5U;
	static int8_t x223 = -1;
	static int64_t x224 = INT64_MIN;
	static volatile int32_t t22 = -110869;

	t22 = (x221==(x222>>(x223<=x224)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x225 = 0;
	static volatile uint8_t x226 = UINT8_MAX;
	int64_t x227 = -1LL;
	static int32_t t23 = 21831368;

	t23 = (x225==(x226>>(x227<=x228)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x229 = INT16_MIN;
	volatile int16_t x230 = INT16_MAX;
	int32_t x231 = 21480702;
	volatile int32_t x232 = INT32_MIN;

	t24 = (x229==(x230>>(x231<=x232)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x233 = 1U;
	volatile uint8_t x234 = UINT8_MAX;
	volatile int32_t x235 = INT32_MAX;

	t25 = (x233==(x234>>(x235<=x236)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x238 = 0U;
	uint16_t x240 = 757U;
	static volatile int32_t t26 = 301;

	t26 = (x237==(x238>>(x239<=x240)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x245 = -1LL;
	volatile int64_t x246 = INT64_MAX;
	int32_t x248 = 3852;

	t27 = (x245==(x246>>(x247<=x248)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x261 = INT32_MIN;
	volatile int8_t x262 = 21;
	int64_t x263 = 1570LL;
	int32_t x264 = INT32_MIN;
	int32_t t28 = -686183864;

	t28 = (x261==(x262>>(x263<=x264)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x265 = INT64_MIN;
	uint32_t x266 = UINT32_MAX;
	static uint32_t x268 = 64196440U;
	volatile int32_t t29 = 64;

	t29 = (x265==(x266>>(x267<=x268)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x275 = INT16_MIN;

	t30 = (x273==(x274>>(x275<=x276)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x286 = UINT32_MAX;
	uint32_t x287 = 751467605U;
	int16_t x288 = -1;
	int32_t t31 = -35705;

	t31 = (x285==(x286>>(x287<=x288)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x293 = INT64_MIN;
	uint16_t x294 = 5U;
	int64_t x295 = 35269828089224836LL;
	volatile int32_t t32 = 1795;

	t32 = (x293==(x294>>(x295<=x296)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x305 = -23049614LL;
	static volatile uint8_t x306 = UINT8_MAX;
	int32_t x307 = -2432;
	int64_t x308 = -1LL;
	int32_t t33 = 497898;

	t33 = (x305==(x306>>(x307<=x308)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x310 = 0;

	t34 = (x309==(x310>>(x311<=x312)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x317 = UINT32_MAX;
	volatile int8_t x318 = 0;
	int8_t x319 = -3;
	static int16_t x320 = INT16_MIN;
	static int32_t t35 = -133;

	t35 = (x317==(x318>>(x319<=x320)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x321 = INT16_MIN;
	uint16_t x322 = UINT16_MAX;
	int16_t x323 = INT16_MAX;
	static volatile int32_t x324 = INT32_MAX;

	t36 = (x321==(x322>>(x323<=x324)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x329 = INT8_MIN;
	static uint8_t x330 = 1U;
	uint16_t x331 = 31409U;
	static uint8_t x332 = 2U;
	int32_t t37 = -387;

	t37 = (x329==(x330>>(x331<=x332)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x357 = INT64_MIN;
	int32_t x359 = 15285;
	volatile int8_t x360 = -1;
	int32_t t38 = -1138633;

	t38 = (x357==(x358>>(x359<=x360)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x365 = UINT16_MAX;
	volatile uint64_t x366 = UINT64_MAX;
	int16_t x367 = INT16_MAX;
	int64_t x368 = INT64_MIN;
	int32_t t39 = -2;

	t39 = (x365==(x366>>(x367<=x368)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x369 = INT16_MIN;
	volatile uint64_t x370 = UINT64_MAX;
	int64_t x371 = -1LL;
	static int32_t t40 = 12971;

	t40 = (x369==(x370>>(x371<=x372)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x378 = 880375608LLU;
	uint16_t x379 = 3491U;
	volatile int32_t t41 = 6;

	t41 = (x377==(x378>>(x379<=x380)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x385 = INT32_MAX;
	uint32_t x386 = 3U;
	volatile int16_t x387 = INT16_MAX;
	int16_t x388 = INT16_MIN;

	t42 = (x385==(x386>>(x387<=x388)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x390 = 56;
	volatile int16_t x391 = INT16_MIN;
	int8_t x392 = INT8_MIN;

	t43 = (x389==(x390>>(x391<=x392)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x393 = INT64_MIN;
	int16_t x395 = 2080;
	uint16_t x396 = UINT16_MAX;
	int32_t t44 = -225;

	t44 = (x393==(x394>>(x395<=x396)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x401 = -384781;
	volatile uint32_t x402 = 11706U;
	uint32_t x403 = 2U;
	volatile uint64_t x404 = 41146221LLU;
	int32_t t45 = 9858229;

	t45 = (x401==(x402>>(x403<=x404)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x411 = 413378LL;
	int32_t x412 = INT32_MIN;
	volatile int32_t t46 = -3;

	t46 = (x409==(x410>>(x411<=x412)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x417 = 160926105U;
	static int8_t x418 = INT8_MAX;
	int64_t x419 = INT64_MIN;
	volatile int32_t t47 = 1669;

	t47 = (x417==(x418>>(x419<=x420)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x441 = 999U;
	int32_t x442 = 20349764;
	uint64_t x444 = UINT64_MAX;
	volatile int32_t t48 = -32;

	t48 = (x441==(x442>>(x443<=x444)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x453 = 18U;
	uint8_t x454 = 55U;
	int64_t x455 = 611934864640766737LL;
	int8_t x456 = -39;
	int32_t t49 = -645323;

	t49 = (x453==(x454>>(x455<=x456)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x457 = 2483670;
	volatile uint32_t x458 = UINT32_MAX;
	int16_t x459 = INT16_MIN;
	int8_t x460 = INT8_MIN;
	int32_t t50 = -49845407;

	t50 = (x457==(x458>>(x459<=x460)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x461 = INT16_MAX;

	t51 = (x461==(x462>>(x463<=x464)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x465 = 12U;
	int64_t x467 = INT64_MIN;
	static int32_t x468 = -1;
	static volatile int32_t t52 = 3185793;

	t52 = (x465==(x466>>(x467<=x468)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x477 = UINT64_MAX;
	volatile int16_t x478 = INT16_MAX;
	int16_t x479 = INT16_MAX;
	volatile int8_t x480 = -1;
	volatile int32_t t53 = -45514;

	t53 = (x477==(x478>>(x479<=x480)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x481 = -1;
	static uint64_t x482 = 17494906LLU;
	volatile int64_t x483 = INT64_MAX;
	int8_t x484 = -1;
	static int32_t t54 = -163331700;

	t54 = (x481==(x482>>(x483<=x484)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x486 = 11U;
	static int8_t x487 = -1;

	t55 = (x485==(x486>>(x487<=x488)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x493 = INT8_MAX;
	int64_t x494 = INT64_MAX;
	int32_t t56 = 0;

	t56 = (x493==(x494>>(x495<=x496)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x501 = UINT32_MAX;
	int8_t x502 = INT8_MAX;
	static int32_t x503 = -117435507;
	int8_t x504 = INT8_MIN;
	int32_t t57 = -80;

	t57 = (x501==(x502>>(x503<=x504)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x505 = 1;
	static uint16_t x506 = 108U;
	int64_t x507 = -61LL;
	int16_t x508 = -1;
	int32_t t58 = 2;

	t58 = (x505==(x506>>(x507<=x508)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x509 = 515U;
	volatile int64_t x512 = -1LL;
	volatile int32_t t59 = -1;

	t59 = (x509==(x510>>(x511<=x512)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x517 = 1U;
	uint64_t x518 = UINT64_MAX;
	static int32_t x519 = 34119;
	int16_t x520 = 3961;
	int32_t t60 = 5;

	t60 = (x517==(x518>>(x519<=x520)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x537 = 54U;
	uint64_t x538 = 456590895534LLU;
	uint8_t x539 = 19U;
	int64_t x540 = INT64_MIN;
	int32_t t61 = 0;

	t61 = (x537==(x538>>(x539<=x540)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x541 = INT64_MIN;
	uint32_t x542 = 43510549U;
	static uint16_t x543 = 9U;
	static int64_t x544 = INT64_MAX;
	static int32_t t62 = 9681370;

	t62 = (x541==(x542>>(x543<=x544)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x546 = 1;
	volatile int64_t x547 = INT64_MIN;
	int32_t x548 = -1;
	int32_t t63 = -17308;

	t63 = (x545==(x546>>(x547<=x548)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x549 = 41;
	int64_t x552 = -1LL;

	t64 = (x549==(x550>>(x551<=x552)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x553 = 2;
	int64_t x554 = INT64_MAX;
	int8_t x555 = 3;
	int8_t x556 = INT8_MIN;
	int32_t t65 = 1354;

	t65 = (x553==(x554>>(x555<=x556)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x557 = INT16_MIN;
	int16_t x558 = INT16_MAX;
	uint64_t x560 = 511032LLU;
	int32_t t66 = -855512;

	t66 = (x557==(x558>>(x559<=x560)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x561 = 1116116383358252440LL;
	static volatile int16_t x562 = INT16_MAX;
	static int32_t x564 = 32911149;

	t67 = (x561==(x562>>(x563<=x564)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x570 = INT8_MAX;
	int64_t x571 = INT64_MAX;
	uint64_t x572 = 19589182LLU;
	int32_t t68 = -61682699;

	t68 = (x569==(x570>>(x571<=x572)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x581 = -2;
	uint32_t x583 = UINT32_MAX;
	int32_t x584 = INT32_MIN;
	volatile int32_t t69 = -12;

	t69 = (x581==(x582>>(x583<=x584)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x589 = INT16_MAX;
	int32_t x590 = INT32_MAX;
	volatile uint32_t x591 = 6233553U;
	int16_t x592 = -1;
	static volatile int32_t t70 = 14745741;

	t70 = (x589==(x590>>(x591<=x592)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x595 = INT8_MAX;
	int8_t x596 = INT8_MIN;
	volatile int32_t t71 = -318861;

	t71 = (x593==(x594>>(x595<=x596)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x597 = 30652754LLU;
	volatile int16_t x598 = 1838;
	int32_t x599 = INT32_MIN;
	volatile uint16_t x600 = 1010U;
	static int32_t t72 = -3;

	t72 = (x597==(x598>>(x599<=x600)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x614 = 1U;
	static int8_t x615 = -19;
	int8_t x616 = INT8_MAX;
	volatile int32_t t73 = 363;

	t73 = (x613==(x614>>(x615<=x616)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x625 = -1LL;
	int64_t x626 = INT64_MAX;
	volatile uint16_t x627 = 2U;
	int16_t x628 = 5;
	static int32_t t74 = -28;

	t74 = (x625==(x626>>(x627<=x628)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x631 = -1;
	int32_t x632 = INT32_MIN;
	volatile int32_t t75 = 130750120;

	t75 = (x629==(x630>>(x631<=x632)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x633 = UINT64_MAX;
	uint8_t x634 = 5U;
	volatile int8_t x636 = -1;
	volatile int32_t t76 = 6239468;

	t76 = (x633==(x634>>(x635<=x636)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x637 = INT32_MIN;
	static int8_t x638 = 9;
	uint8_t x639 = 83U;
	int64_t x640 = INT64_MAX;
	int32_t t77 = 1567357;

	t77 = (x637==(x638>>(x639<=x640)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x653 = 10484168452LLU;
	int16_t x654 = 198;
	uint64_t x656 = 11565LLU;

	t78 = (x653==(x654>>(x655<=x656)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x670 = INT16_MAX;
	int64_t x672 = -1942773484445053LL;

	t79 = (x669==(x670>>(x671<=x672)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x673 = UINT8_MAX;
	int32_t x674 = INT32_MAX;
	int8_t x675 = -3;
	int16_t x676 = INT16_MIN;

	t80 = (x673==(x674>>(x675<=x676)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x685 = -1754614;
	uint8_t x687 = 12U;

	t81 = (x685==(x686>>(x687<=x688)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x701 = 100LLU;
	uint32_t x702 = 1042107U;
	static int32_t t82 = 4324;

	t82 = (x701==(x702>>(x703<=x704)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x713 = 26U;
	volatile int8_t x714 = INT8_MAX;
	static volatile int64_t x715 = INT64_MAX;
	int16_t x716 = -318;
	volatile int32_t t83 = 3040;

	t83 = (x713==(x714>>(x715<=x716)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x717 = -183;
	static uint32_t x718 = UINT32_MAX;
	volatile uint64_t x719 = 13150919904863LLU;
	volatile int8_t x720 = -8;
	static volatile int32_t t84 = 0;

	t84 = (x717==(x718>>(x719<=x720)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x721 = 952301989LL;
	uint32_t x722 = 24404092U;
	int32_t t85 = 38618;

	t85 = (x721==(x722>>(x723<=x724)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x726 = UINT8_MAX;
	volatile int32_t x727 = INT32_MIN;
	volatile int64_t x728 = -104907LL;
	int32_t t86 = 26962702;

	t86 = (x725==(x726>>(x727<=x728)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x729 = -1963488;
	int64_t x730 = INT64_MAX;
	uint16_t x731 = 10U;
	int32_t x732 = 70852446;

	t87 = (x729==(x730>>(x731<=x732)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x733 = 1U;
	uint32_t x734 = UINT32_MAX;
	volatile int32_t t88 = 143;

	t88 = (x733==(x734>>(x735<=x736)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x737 = INT64_MAX;
	uint32_t x738 = UINT32_MAX;

	t89 = (x737==(x738>>(x739<=x740)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x745 = 67U;
	uint16_t x746 = 179U;
	volatile int16_t x748 = -1;
	volatile int32_t t90 = -1234;

	t90 = (x745==(x746>>(x747<=x748)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x749 = INT8_MIN;
	int16_t x750 = 1274;
	int8_t x751 = 22;
	volatile int32_t t91 = -18998;

	t91 = (x749==(x750>>(x751<=x752)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x761 = -1;
	volatile int16_t x762 = 4;
	int16_t x763 = INT16_MAX;
	static int8_t x764 = INT8_MIN;

	t92 = (x761==(x762>>(x763<=x764)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x765 = INT64_MAX;
	volatile uint16_t x766 = UINT16_MAX;
	static uint16_t x767 = 6915U;
	volatile int64_t x768 = INT64_MIN;
	volatile int32_t t93 = -335;

	t93 = (x765==(x766>>(x767<=x768)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x769 = INT16_MAX;
	int16_t x770 = 190;
	int64_t x772 = 29LL;
	int32_t t94 = 0;

	t94 = (x769==(x770>>(x771<=x772)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x774 = 5620361898506LLU;
	volatile uint16_t x775 = UINT16_MAX;
	static int8_t x776 = -1;

	t95 = (x773==(x774>>(x775<=x776)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x781 = INT32_MIN;
	static int8_t x782 = INT8_MAX;
	int64_t x783 = -1LL;
	uint64_t x784 = 1051741083747LLU;
	volatile int32_t t96 = 7;

	t96 = (x781==(x782>>(x783<=x784)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x785 = 10U;
	uint64_t x786 = UINT64_MAX;
	static int64_t x788 = INT64_MIN;
	volatile int32_t t97 = -41803941;

	t97 = (x785==(x786>>(x787<=x788)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x789 = -1;
	static uint64_t x790 = UINT64_MAX;
	uint32_t x791 = UINT32_MAX;
	int16_t x792 = INT16_MIN;

	t98 = (x789==(x790>>(x791<=x792)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x797 = INT32_MAX;
	static int64_t x798 = INT64_MAX;
	int64_t x799 = 19418053719910LL;
	int32_t t99 = 4155;

	t99 = (x797==(x798>>(x799<=x800)));

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


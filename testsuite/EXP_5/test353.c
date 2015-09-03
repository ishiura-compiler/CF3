#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x17 = INT16_MIN;
uint8_t x19 = UINT8_MAX;
volatile int16_t x20 = INT16_MIN;
int16_t x21 = INT16_MIN;
int8_t x33 = -4;
int8_t x36 = 59;
volatile int64_t t7 = -481LL;
int8_t x43 = INT8_MAX;
int32_t x45 = INT32_MAX;
volatile int64_t x52 = INT64_MIN;
int8_t x60 = INT8_MIN;
int64_t x67 = -1LL;
volatile uint8_t x77 = 7U;
int16_t x92 = INT16_MIN;
volatile int32_t t17 = 139;
uint16_t x114 = 1079U;
int32_t x117 = -1;
uint32_t x129 = UINT32_MAX;
volatile int8_t x131 = -1;
uint32_t x132 = 264645U;
static uint8_t x146 = 122U;
volatile int8_t x159 = INT8_MAX;
uint16_t x181 = 6425U;
int64_t x188 = 560749108LL;
static int64_t t30 = -91886748LL;
uint64_t x202 = 20321015LLU;
int64_t x203 = INT64_MIN;
volatile uint8_t x204 = UINT8_MAX;
volatile int64_t x212 = INT64_MIN;
static int16_t x221 = -1;
static uint64_t x237 = 435329976LLU;
static uint8_t x238 = 5U;
static uint32_t x242 = 6884U;
int32_t x255 = INT32_MIN;
volatile uint32_t t37 = 2785681U;
volatile int64_t x258 = -1LL;
volatile int64_t t38 = 29541LL;
uint32_t x262 = 8307184U;
volatile int32_t x280 = -525190318;
volatile uint64_t x283 = UINT64_MAX;
volatile uint64_t t43 = 23408218833055911LLU;
static volatile int64_t t44 = 7LL;
int8_t x292 = 5;
int8_t x297 = 0;
int32_t x298 = 15614;
int8_t x299 = INT8_MAX;
static int8_t x300 = 12;
static uint32_t x302 = UINT32_MAX;
int16_t x314 = INT16_MIN;
int8_t x315 = INT8_MAX;
int8_t x316 = -1;
int16_t x326 = INT16_MIN;
static int8_t x342 = INT8_MIN;
static uint8_t x349 = UINT8_MAX;
int8_t x352 = INT8_MIN;
int16_t x354 = INT16_MIN;
int32_t t56 = 0;
static volatile uint64_t x360 = UINT64_MAX;
int8_t x363 = INT8_MIN;
int16_t x365 = INT16_MIN;
uint64_t x367 = 111LLU;
static uint64_t x380 = UINT64_MAX;
int32_t x382 = -1;
int16_t x384 = INT16_MIN;
uint64_t t64 = 144446622LLU;
int64_t x406 = -1LL;
static int8_t x407 = -11;
uint8_t x408 = UINT8_MAX;
int64_t x419 = INT64_MIN;
uint64_t x422 = UINT64_MAX;
static int8_t x428 = INT8_MAX;
uint64_t x430 = 2LLU;
int64_t x431 = INT64_MIN;
static int16_t x445 = 1;
static uint8_t x460 = 2U;
int16_t x471 = -1009;
int32_t t78 = 858;
volatile int8_t x473 = INT8_MIN;
uint32_t x481 = 0U;
static int8_t x485 = INT8_MIN;
uint16_t x487 = 6U;
static int16_t x489 = INT16_MIN;
static volatile int64_t t82 = 51644998383LL;
int16_t x495 = INT16_MAX;
uint8_t x505 = UINT8_MAX;
uint16_t x508 = 26371U;
uint64_t t85 = 7457749246409647709LLU;
volatile int32_t x516 = INT32_MIN;
int8_t x519 = INT8_MAX;
volatile int16_t x520 = INT16_MIN;
uint32_t t88 = 3992605U;
uint64_t x534 = 465787113LLU;
volatile int8_t x543 = -1;
volatile int32_t x550 = -1;
static int16_t x560 = -247;
int8_t x563 = -1;
int8_t x567 = INT8_MIN;
uint64_t x570 = UINT64_MAX;


void f0(void) {
	uint8_t x1 = 90U;
	uint8_t x2 = 8U;
	int16_t x3 = INT16_MIN;
	int64_t x4 = -6827728LL;
	volatile int64_t t0 = 328555856LL;

	t0 = (x1-((x2*x3)-x4));

	if (t0 != -6565494LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -12;
	int32_t x6 = INT32_MIN;
	int64_t x7 = -763389LL;
	uint8_t x8 = UINT8_MAX;
	volatile int64_t t1 = 124910699454LL;

	t1 = (x5-((x6*x7)-x8));

	if (t1 != -1639365394562829LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x18 = INT8_MIN;
	static volatile int32_t t2 = -4;

	t2 = (x17-((x18*x19)-x20));

	if (t2 != -32896) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MIN;
	uint8_t x24 = UINT8_MAX;
	int32_t t3 = -1;

	t3 = (x21-((x22*x23)-x24));

	if (t3 != -1073774337) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	int16_t x26 = INT16_MIN;
	static volatile int16_t x27 = INT16_MIN;
	int16_t x28 = -1;
	int32_t t4 = 480742274;

	t4 = (x25-((x26*x27)-x28));

	if (t4 != -1073774593) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 1503U;
	volatile uint64_t x30 = UINT64_MAX;
	static int16_t x31 = INT16_MIN;
	int8_t x32 = 11;
	volatile uint64_t t5 = 5477846827961506893LLU;

	t5 = (x29-((x30*x31)-x32));

	if (t5 != 18446744073709520362LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x34 = -1;
	uint8_t x35 = 1U;
	int32_t t6 = 6;

	t6 = (x33-((x34*x35)-x36));

	if (t6 != 56) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -15063272LL;
	int8_t x38 = INT8_MIN;
	int8_t x39 = 47;
	int32_t x40 = -48500016;

	t7 = (x37-((x38*x39)-x40));

	if (t7 != -63557272LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = -1;
	volatile int32_t x42 = -1;
	int64_t x44 = -90395631510742290LL;
	volatile int64_t t8 = 167720439674279LL;

	t8 = (x41-((x42*x43)-x44));

	if (t8 != -90395631510742164LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x46 = 21726800940LL;
	uint16_t x47 = 751U;
	static int32_t x48 = INT32_MIN;
	static int64_t t9 = 488077426431LL;

	t9 = (x45-((x46*x47)-x48));

	if (t9 != -16316827505941LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -46;
	uint64_t x50 = 688157055488499385LLU;
	int8_t x51 = INT8_MAX;
	volatile uint64_t t10 = 7LLU;

	t10 = (x49-((x50*x51)-x52));

	if (t10 != 14061146358363111947LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = -8;
	volatile uint64_t x58 = 437305LLU;
	int16_t x59 = INT16_MIN;
	volatile uint64_t t11 = 27935261936750LLU;

	t11 = (x57-((x58*x59)-x60));

	if (t11 != 14329610104LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 15U;
	int64_t x66 = -1LL;
	volatile int8_t x68 = -1;
	static int64_t t12 = 494239LL;

	t12 = (x65-((x66*x67)-x68));

	if (t12 != 13LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x73 = UINT64_MAX;
	int16_t x74 = 1;
	volatile int8_t x75 = INT8_MIN;
	int32_t x76 = -2901;
	static volatile uint64_t t13 = 22838146778895667LLU;

	t13 = (x73-((x74*x75)-x76));

	if (t13 != 18446744073709548842LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x78 = -1;
	uint32_t x79 = 2U;
	int8_t x80 = INT8_MIN;
	uint32_t t14 = 0U;

	t14 = (x77-((x78*x79)-x80));

	if (t14 != 4294967177U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = 1;
	int16_t x87 = INT16_MAX;
	volatile uint32_t x88 = 38U;
	uint32_t t15 = 4452942U;

	t15 = (x85-((x86*x87)-x88));

	if (t15 != 4294934439U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x89 = 0;
	int8_t x90 = INT8_MIN;
	static int16_t x91 = 11;
	int32_t t16 = -4;

	t16 = (x89-((x90*x91)-x92));

	if (t16 != -31360) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x101 = INT32_MAX;
	int32_t x102 = -118838;
	int16_t x103 = -1;
	int8_t x104 = INT8_MIN;

	t17 = (x101-((x102*x103)-x104));

	if (t17 != 2147364681) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x113 = 5U;
	uint64_t x115 = UINT64_MAX;
	uint64_t x116 = 15472690289LLU;
	uint64_t t18 = 699381574409547088LLU;

	t18 = (x113-((x114*x115)-x116));

	if (t18 != 15472691373LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x118 = 252237LLU;
	static uint64_t x119 = 559234LLU;
	int8_t x120 = 1;
	volatile uint64_t t19 = 3284664945758850540LLU;

	t19 = (x117-((x118*x119)-x120));

	if (t19 != 18446743932650045158LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x130 = 13495469188072LLU;
	uint64_t t20 = 11320535233558LLU;

	t20 = (x129-((x130*x131)-x132));

	if (t20 != 13499764420012LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x137 = -1;
	static int16_t x138 = INT16_MIN;
	static uint16_t x139 = 6U;
	volatile uint64_t x140 = 482421853LLU;
	uint64_t t21 = 279629LLU;

	t21 = (x137-((x138*x139)-x140));

	if (t21 != 482618460LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x145 = 0U;
	uint32_t x147 = 238U;
	int16_t x148 = INT16_MIN;
	uint32_t t22 = 3878U;

	t22 = (x145-((x146*x147)-x148));

	if (t22 != 4294905492U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x149 = INT16_MAX;
	int16_t x150 = INT16_MIN;
	static volatile int64_t x151 = -1LL;
	int32_t x152 = INT32_MIN;
	static int64_t t23 = 304LL;

	t23 = (x149-((x150*x151)-x152));

	if (t23 != -2147483649LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x157 = 4U;
	int64_t x158 = -1LL;
	static int64_t x160 = INT64_MIN;
	int64_t t24 = -22344701051LL;

	t24 = (x157-((x158*x159)-x160));

	if (t24 != -9223372036854775677LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x165 = -1LL;
	int8_t x166 = INT8_MIN;
	uint16_t x167 = 15920U;
	int8_t x168 = 6;
	volatile int64_t t25 = 6919LL;

	t25 = (x165-((x166*x167)-x168));

	if (t25 != 2037765LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x169 = -1;
	int32_t x170 = 1;
	static uint8_t x171 = 0U;
	static int64_t x172 = -7463672431LL;
	static int64_t t26 = -3418603LL;

	t26 = (x169-((x170*x171)-x172));

	if (t26 != -7463672432LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x173 = INT32_MIN;
	int16_t x174 = -1;
	int16_t x175 = 1680;
	volatile int32_t x176 = -1;
	int32_t t27 = -430397;

	t27 = (x173-((x174*x175)-x176));

	if (t27 != -2147481969) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x177 = -1;
	uint16_t x178 = 1244U;
	int8_t x179 = -1;
	int16_t x180 = INT16_MIN;
	int32_t t28 = 420522876;

	t28 = (x177-((x178*x179)-x180));

	if (t28 != -31525) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x182 = 3938U;
	volatile uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;
	int32_t t29 = 45473390;

	t29 = (x181-((x182*x183)-x184));

	if (t29 != -1030533) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x185 = INT16_MIN;
	static int32_t x186 = -1;
	volatile int16_t x187 = INT16_MIN;

	t30 = (x185-((x186*x187)-x188));

	if (t30 != 560683572LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x197 = 1LLU;
	int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MAX;
	static volatile uint8_t x200 = UINT8_MAX;
	volatile uint64_t t31 = 962742409LLU;

	t31 = (x197-((x198*x199)-x200));

	if (t31 != 4194432LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x201 = INT32_MIN;
	uint64_t t32 = 109012145LLU;

	t32 = (x201-((x202*x203)-x204));

	if (t32 != 9223372034707292415LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x209 = INT8_MAX;
	static int32_t x210 = -1;
	uint16_t x211 = 7801U;
	static int64_t t33 = 317254302617415716LL;

	t33 = (x209-((x210*x211)-x212));

	if (t33 != -9223372036854767880LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x222 = -10148030956628616LL;
	int16_t x223 = -1;
	int64_t x224 = -1LL;
	volatile int64_t t34 = -313052057LL;

	t34 = (x221-((x222*x223)-x224));

	if (t34 != -10148030956628618LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x239 = 83U;
	int64_t x240 = INT64_MAX;
	volatile uint64_t t35 = 13960552984168LLU;

	t35 = (x237-((x238*x239)-x240));

	if (t35 != 9223372037290105368LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x241 = UINT16_MAX;
	int8_t x243 = INT8_MAX;
	volatile uint16_t x244 = 1U;
	static uint32_t t36 = 27064U;

	t36 = (x241-((x242*x243)-x244));

	if (t36 != 4294158564U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x253 = UINT16_MAX;
	uint32_t x254 = 1U;
	static int16_t x256 = INT16_MIN;

	t37 = (x253-((x254*x255)-x256));

	if (t37 != 2147516415U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x257 = 1U;
	int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MIN;

	t38 = (x257-((x258*x259)-x260));

	if (t38 != -32895LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x261 = -1;
	int8_t x263 = INT8_MIN;
	static int8_t x264 = INT8_MIN;
	volatile uint32_t t39 = 69U;

	t39 = (x261-((x262*x263)-x264));

	if (t39 != 1063319423U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x265 = INT8_MAX;
	int8_t x266 = INT8_MAX;
	static uint16_t x267 = 409U;
	int8_t x268 = -18;
	volatile int32_t t40 = -384;

	t40 = (x265-((x266*x267)-x268));

	if (t40 != -51834) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x273 = 414924413U;
	volatile int64_t x274 = INT64_MAX;
	uint8_t x275 = 1U;
	volatile uint8_t x276 = 14U;
	volatile int64_t t41 = 677629LL;

	t41 = (x273-((x274*x275)-x276));

	if (t41 != -9223372036439851380LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x277 = INT8_MAX;
	static int64_t x278 = -1LL;
	static int32_t x279 = 29152;
	int64_t t42 = 49902LL;

	t42 = (x277-((x278*x279)-x280));

	if (t42 != -525161039LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x281 = 17U;
	volatile int32_t x282 = 0;
	volatile uint16_t x284 = UINT16_MAX;

	t43 = (x281-((x282*x283)-x284));

	if (t43 != 65552LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x285 = 94184U;
	static uint8_t x286 = UINT8_MAX;
	int8_t x287 = INT8_MIN;
	volatile int64_t x288 = INT64_MIN;

	t44 = (x285-((x286*x287)-x288));

	if (t44 != -9223372036854648984LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x289 = -12;
	uint16_t x290 = 4696U;
	volatile int8_t x291 = INT8_MIN;
	volatile int32_t t45 = -498611595;

	t45 = (x289-((x290*x291)-x292));

	if (t45 != 601081) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t t46 = 54294;

	t46 = (x297-((x298*x299)-x300));

	if (t46 != -1982966) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x301 = -134;
	int32_t x303 = INT32_MAX;
	volatile int16_t x304 = INT16_MIN;
	uint32_t t47 = 291U;

	t47 = (x301-((x302*x303)-x304));

	if (t47 != 2147450745U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x305 = INT32_MIN;
	int16_t x306 = -1;
	uint32_t x307 = UINT32_MAX;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t48 = 86650LLU;

	t48 = (x305-((x306*x307)-x308));

	if (t48 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x309 = INT64_MAX;
	uint64_t x310 = 834LLU;
	volatile uint64_t x311 = 97332974LLU;
	uint64_t x312 = 0LLU;
	uint64_t t49 = 145725240002366LLU;

	t49 = (x309-((x310*x311)-x312));

	if (t49 != 9223371955679075491LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x313 = UINT16_MAX;
	static volatile int32_t t50 = 53;

	t50 = (x313-((x314*x315)-x316));

	if (t50 != 4227070) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x325 = 900763667889LLU;
	static volatile uint32_t x327 = 3U;
	static int32_t x328 = INT32_MIN;
	uint64_t t51 = 96665314739626983LLU;

	t51 = (x325-((x326*x327)-x328));

	if (t51 != 898616282545LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x333 = -388;
	int32_t x334 = INT32_MAX;
	volatile uint32_t x335 = UINT32_MAX;
	uint16_t x336 = 3816U;
	uint32_t t52 = 7479750U;

	t52 = (x333-((x334*x335)-x336));

	if (t52 != 2147487075U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x337 = 2U;
	uint32_t x338 = UINT32_MAX;
	volatile uint64_t x339 = 4LLU;
	int64_t x340 = INT64_MIN;
	static volatile uint64_t t53 = 59266071108LLU;

	t53 = (x337-((x338*x339)-x340));

	if (t53 != 9223372019674906630LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x341 = 79592510427057LL;
	int8_t x343 = 14;
	static int32_t x344 = 1;
	int64_t t54 = 68240544269LL;

	t54 = (x341-((x342*x343)-x344));

	if (t54 != 79592510428850LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x350 = -424881LL;
	int64_t x351 = -132355LL;
	static int64_t t55 = 60864497960594592LL;

	t55 = (x349-((x350*x351)-x352));

	if (t55 != -56235124628LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x353 = INT16_MIN;
	int16_t x355 = -627;
	int32_t x356 = 64290455;

	t56 = (x353-((x354*x355)-x356));

	if (t56 != 43712151) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x357 = 53;
	uint8_t x358 = 0U;
	int8_t x359 = INT8_MIN;
	volatile uint64_t t57 = 3392917270LLU;

	t57 = (x357-((x358*x359)-x360));

	if (t57 != 52LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x361 = UINT8_MAX;
	volatile int16_t x362 = INT16_MIN;
	static uint8_t x364 = 1U;
	volatile int32_t t58 = 433;

	t58 = (x361-((x362*x363)-x364));

	if (t58 != -4194048) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x366 = INT8_MAX;
	int8_t x368 = -1;
	volatile uint64_t t59 = 82929106330812LLU;

	t59 = (x365-((x366*x367)-x368));

	if (t59 != 18446744073709504750LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x377 = 41U;
	static int8_t x378 = INT8_MIN;
	volatile int32_t x379 = -21528;
	volatile uint64_t t60 = 741090LLU;

	t60 = (x377-((x378*x379)-x380));

	if (t60 != 18446744073706796072LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x381 = -22113144LL;
	int64_t x383 = INT64_MAX;
	int64_t t61 = 38LL;

	t61 = (x381-((x382*x383)-x384));

	if (t61 != 9223372036832629895LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x385 = -6644426;
	volatile uint16_t x386 = 125U;
	volatile int8_t x387 = INT8_MIN;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t62 = 313835004;

	t62 = (x385-((x386*x387)-x388));

	if (t62 != -6628554) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x389 = 8194;
	int8_t x390 = -1;
	volatile int16_t x391 = INT16_MIN;
	volatile uint16_t x392 = 685U;
	static int32_t t63 = -110;

	t63 = (x389-((x390*x391)-x392));

	if (t63 != -23889) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x401 = INT32_MIN;
	static int16_t x402 = 531;
	uint64_t x403 = 77477589LLU;
	int8_t x404 = 2;

	t64 = (x401-((x402*x403)-x404));

	if (t64 != 18446744030421468211LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x405 = 89U;
	volatile int64_t t65 = 4316743440658061093LL;

	t65 = (x405-((x406*x407)-x408));

	if (t65 != 333LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x409 = UINT16_MAX;
	static uint32_t x410 = 48789U;
	volatile int64_t x411 = 22LL;
	int8_t x412 = 1;
	int64_t t66 = -96009421093LL;

	t66 = (x409-((x410*x411)-x412));

	if (t66 != -1007822LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x417 = 21U;
	uint64_t x418 = UINT64_MAX;
	volatile int32_t x420 = 1;
	uint64_t t67 = 106614596132LLU;

	t67 = (x417-((x418*x419)-x420));

	if (t67 != 9223372036854775830LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x421 = 6U;
	static uint32_t x423 = UINT32_MAX;
	uint32_t x424 = 373U;
	volatile uint64_t t68 = 4749153LLU;

	t68 = (x421-((x422*x423)-x424));

	if (t68 != 4294967674LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x425 = INT16_MIN;
	int8_t x426 = 45;
	int16_t x427 = INT16_MIN;
	volatile int32_t t69 = -291;

	t69 = (x425-((x426*x427)-x428));

	if (t69 != 1441919) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x429 = INT64_MIN;
	int8_t x432 = INT8_MIN;
	static uint64_t t70 = 11948095LLU;

	t70 = (x429-((x430*x431)-x432));

	if (t70 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x433 = 115729697659013956LLU;
	int16_t x434 = INT16_MAX;
	int64_t x435 = -59847491024786LL;
	int32_t x436 = INT32_MIN;
	volatile uint64_t t71 = 2LLU;

	t71 = (x433-((x434*x435)-x436));

	if (t71 != 2076752433920693170LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x437 = INT8_MIN;
	uint16_t x438 = 1U;
	int8_t x439 = INT8_MAX;
	int64_t x440 = -1LL;
	volatile int64_t t72 = 62LL;

	t72 = (x437-((x438*x439)-x440));

	if (t72 != -256LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x446 = 3694;
	volatile int32_t x447 = -191;
	static uint8_t x448 = 3U;
	volatile int32_t t73 = 193;

	t73 = (x445-((x446*x447)-x448));

	if (t73 != 705558) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x449 = INT32_MIN;
	int16_t x450 = INT16_MIN;
	static volatile uint16_t x451 = 66U;
	uint8_t x452 = 4U;
	volatile int32_t t74 = -95600;

	t74 = (x449-((x450*x451)-x452));

	if (t74 != -2145320956) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x457 = INT32_MIN;
	uint64_t x458 = 406012927128LLU;
	int8_t x459 = INT8_MIN;
	uint64_t t75 = 1592107581540LLU;

	t75 = (x457-((x458*x459)-x460));

	if (t75 != 51967507188738LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x461 = 126U;
	int8_t x462 = -2;
	int64_t x463 = -1LL;
	volatile int8_t x464 = INT8_MAX;
	int64_t t76 = -12LL;

	t76 = (x461-((x462*x463)-x464));

	if (t76 != 251LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x465 = 122287LLU;
	int64_t x466 = INT64_MIN;
	static uint64_t x467 = 16806420592675LLU;
	int64_t x468 = -1LL;
	volatile uint64_t t77 = 2LLU;

	t77 = (x465-((x466*x467)-x468));

	if (t77 != 9223372036854898094LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x469 = 932U;
	static int32_t x470 = -1;
	volatile uint8_t x472 = UINT8_MAX;

	t78 = (x469-((x470*x471)-x472));

	if (t78 != 178) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x474 = INT8_MIN;
	static volatile uint16_t x475 = 1112U;
	static volatile int16_t x476 = -5954;
	int32_t t79 = 0;

	t79 = (x473-((x474*x475)-x476));

	if (t79 != 136254) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x482 = 17U;
	uint32_t x483 = UINT32_MAX;
	static volatile uint16_t x484 = 32U;
	volatile uint32_t t80 = 5U;

	t80 = (x481-((x482*x483)-x484));

	if (t80 != 49U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x486 = INT16_MAX;
	static int8_t x488 = -5;
	volatile int32_t t81 = -1;

	t81 = (x485-((x486*x487)-x488));

	if (t81 != -196735) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x490 = 2596778386248379LL;
	uint8_t x491 = 9U;
	uint8_t x492 = 10U;

	t82 = (x489-((x490*x491)-x492));

	if (t82 != -23371005476268169LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x493 = 48U;
	int8_t x494 = -1;
	volatile int16_t x496 = 160;
	volatile uint32_t t83 = 23479U;

	t83 = (x493-((x494*x495)-x496));

	if (t83 != 32975U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x501 = INT8_MIN;
	uint16_t x502 = 22484U;
	int16_t x503 = -13071;
	int8_t x504 = INT8_MIN;
	volatile int32_t t84 = 52647;

	t84 = (x501-((x502*x503)-x504));

	if (t84 != 293888108) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x506 = INT16_MAX;
	volatile uint64_t x507 = 55762555958610LLU;

	t85 = (x505-((x506*x507)-x508));

	if (t85 != 16619572402613804372LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x509 = UINT32_MAX;
	volatile int32_t x510 = -1;
	int16_t x511 = INT16_MIN;
	int16_t x512 = INT16_MIN;
	volatile uint32_t t86 = 43090U;

	t86 = (x509-((x510*x511)-x512));

	if (t86 != 4294901759U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x513 = 0U;
	int32_t x514 = -714746;
	int8_t x515 = INT8_MAX;
	static volatile int32_t t87 = -407;

	t87 = (x513-((x514*x515)-x516));

	if (t87 != -2056710906) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x517 = UINT32_MAX;
	int32_t x518 = -9678;

	t88 = (x517-((x518*x519)-x520));

	if (t88 != 1196337U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x525 = 1838681U;
	static uint16_t x526 = UINT16_MAX;
	int16_t x527 = INT16_MIN;
	int64_t x528 = 59240LL;
	static int64_t t89 = -632LL;

	t89 = (x525-((x526*x527)-x528));

	if (t89 != 2149348801LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x529 = 101U;
	volatile int8_t x530 = INT8_MIN;
	volatile int8_t x531 = 19;
	int8_t x532 = 61;
	static int32_t t90 = -1;

	t90 = (x529-((x530*x531)-x532));

	if (t90 != 2594) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x533 = INT8_MIN;
	volatile int8_t x535 = -1;
	uint32_t x536 = 1116649821U;
	uint64_t t91 = 31654095LLU;

	t91 = (x533-((x534*x535)-x536));

	if (t91 != 1582436806LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x537 = -1;
	volatile int32_t x538 = INT32_MAX;
	int64_t x539 = -1LL;
	static volatile int64_t x540 = INT64_MIN;
	int64_t t92 = 125LL;

	t92 = (x537-((x538*x539)-x540));

	if (t92 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x541 = -15LL;
	int64_t x542 = -1LL;
	int16_t x544 = INT16_MIN;
	volatile int64_t t93 = -14534707874LL;

	t93 = (x541-((x542*x543)-x544));

	if (t93 != -32784LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x549 = INT64_MAX;
	uint32_t x551 = 29370U;
	int16_t x552 = -53;
	static int64_t t94 = 920767743951951LL;

	t94 = (x549-((x550*x551)-x552));

	if (t94 != 9223372032559837828LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x557 = UINT16_MAX;
	static volatile uint32_t x558 = 642310U;
	volatile int8_t x559 = INT8_MIN;
	volatile uint32_t t95 = 763U;

	t95 = (x557-((x558*x559)-x560));

	if (t95 != 82280968U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x561 = INT32_MIN;
	uint8_t x562 = UINT8_MAX;
	int64_t x564 = -3245LL;
	int64_t t96 = -50692972988553870LL;

	t96 = (x561-((x562*x563)-x564));

	if (t96 != -2147486638LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x565 = 946159619U;
	uint32_t x566 = 1664635U;
	int8_t x568 = INT8_MIN;
	volatile uint32_t t97 = 1584U;

	t97 = (x565-((x566*x567)-x568));

	if (t97 != 1159232771U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x569 = 12840U;
	int32_t x571 = INT32_MIN;
	static uint64_t x572 = 59162LLU;
	uint64_t t98 = 12188063LLU;

	t98 = (x569-((x570*x571)-x572));

	if (t98 != 18446744071562139970LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x577 = 2280LLU;
	static volatile int64_t x578 = -1LL;
	int16_t x579 = -702;
	uint8_t x580 = 21U;
	volatile uint64_t t99 = 424944357030LLU;

	t99 = (x577-((x578*x579)-x580));

	if (t99 != 1599LLU) { NG(); } else { ; }
	
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


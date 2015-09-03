#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x8 = UINT64_MAX;
uint16_t x28 = UINT16_MAX;
int32_t x43 = INT32_MIN;
int64_t x55 = INT64_MIN;
int16_t x59 = INT16_MIN;
int64_t x93 = 55606064LL;
int32_t x101 = 27636;
uint64_t x129 = UINT64_MAX;
volatile uint16_t x130 = 2U;
uint64_t t13 = UINT64_MAX;
uint32_t x134 = 31720882U;
int8_t x135 = -1;
volatile int16_t x145 = -36;
int8_t x147 = INT8_MIN;
int16_t x175 = INT16_MIN;
static uint16_t x186 = 5763U;
volatile int32_t t18 = 360;
uint32_t x191 = 10U;
uint32_t x199 = 0U;
int8_t x200 = 1;
static volatile int32_t t20 = 58447;
uint16_t x204 = 21U;
static uint64_t x205 = 104549315682766465LLU;
int16_t x208 = INT16_MIN;
int64_t x224 = INT64_MIN;
uint64_t x233 = UINT64_MAX;
int64_t x234 = 36467LL;
int16_t x236 = 12;
uint64_t t26 = 25517948LLU;
static uint64_t x242 = UINT64_MAX;
int16_t x247 = 549;
uint64_t x250 = 537119481556LLU;
static int64_t x251 = 46LL;
uint32_t x252 = UINT32_MAX;
volatile uint64_t t29 = 228LLU;
static uint8_t x254 = 5U;
uint64_t x256 = UINT64_MAX;
uint16_t x285 = UINT16_MAX;
static int32_t t32 = 36627988;
uint64_t x290 = 1246387282151728884LLU;
int64_t x292 = -1LL;
uint16_t x302 = 7U;
volatile int16_t x303 = -1;
volatile int16_t x315 = 4;
int64_t x323 = INT64_MAX;
int64_t x356 = -169529479861LL;
int32_t x385 = INT32_MIN;
uint64_t x386 = 72LLU;
int32_t x387 = INT32_MAX;
uint64_t x390 = 1255999002284LLU;
static int16_t x391 = INT16_MAX;
uint32_t x420 = 890048U;
int64_t x433 = 1LL;
int16_t x434 = 710;
int32_t x449 = 0;
uint8_t x466 = 1U;
volatile int32_t x467 = INT32_MIN;
static uint32_t x472 = 1U;
int16_t x476 = -395;
int64_t t50 = 339495701435868LL;
int32_t x495 = INT32_MAX;
static int32_t x502 = 6;
volatile int8_t x507 = INT8_MIN;
int64_t x509 = -1LL;
volatile int32_t t55 = 648192;
volatile int8_t x518 = 1;
uint8_t x519 = 59U;
int32_t x520 = INT32_MAX;
int16_t x521 = -1985;
int32_t t57 = -1482;
volatile int8_t x528 = -19;
static int8_t x565 = 1;
volatile int32_t t62 = -52;
int16_t x589 = INT16_MAX;
int64_t x592 = INT64_MAX;
static volatile int64_t x597 = -2492689LL;
volatile int8_t x598 = 1;
int8_t x599 = -7;
static volatile uint64_t x600 = 135701866551LLU;
int16_t x617 = -1;
static int8_t x645 = -1;
volatile uint32_t t69 = 504U;
uint64_t x668 = 496612450906877493LLU;
volatile uint64_t t71 = 0LLU;
int16_t x719 = 15818;
uint8_t x722 = 88U;
int64_t x723 = -1LL;
int16_t x729 = 5070;
int8_t x730 = INT8_MAX;
int32_t x758 = 88;
volatile uint8_t x760 = 0U;
uint32_t x792 = 26122U;
volatile int64_t t81 = 802525LL;
static volatile int32_t t86 = -155487329;
static uint64_t x843 = 172320139330638LLU;
volatile uint8_t x847 = 34U;
uint64_t x851 = 106LLU;
static int8_t x857 = -1;
uint32_t x858 = 1690909U;
static int8_t x859 = -22;
static int16_t x861 = INT16_MIN;
static uint8_t x871 = UINT8_MAX;
int16_t x875 = INT16_MAX;
uint8_t x921 = UINT8_MAX;
static uint32_t x922 = 189526U;
uint32_t x927 = UINT32_MAX;
volatile uint16_t x930 = UINT16_MAX;
uint32_t x935 = UINT32_MAX;
int64_t x936 = -943570091LL;


void f0(void) {
	uint16_t x5 = UINT16_MAX;
	uint16_t x6 = 7857U;
	static uint8_t x7 = 15U;
	int32_t t0 = -256369503;

	t0 = (x5*(x6>>(x7<=x8)));

	if (t0 != 257421480) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x21 = -1;
	volatile uint64_t x22 = 7LLU;
	volatile int64_t x23 = -1LL;
	volatile int32_t x24 = -1;
	volatile uint64_t t1 = 27062010263LLU;

	t1 = (x21*(x22>>(x23<=x24)));

	if (t1 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x25 = -1;
	uint64_t x26 = UINT64_MAX;
	int8_t x27 = 1;
	static volatile uint64_t t2 = 0LLU;

	t2 = (x25*(x26>>(x27<=x28)));

	if (t2 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x37 = -7560;
	uint8_t x38 = UINT8_MAX;
	int64_t x39 = INT64_MAX;
	uint16_t x40 = 1U;
	volatile int32_t t3 = -1015822756;

	t3 = (x37*(x38>>(x39<=x40)));

	if (t3 != -1927800) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x41 = INT16_MIN;
	uint16_t x42 = UINT16_MAX;
	uint8_t x44 = 5U;
	int32_t t4 = -165504552;

	t4 = (x41*(x42>>(x43<=x44)));

	if (t4 != -1073709056) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x45 = UINT8_MAX;
	int16_t x46 = INT16_MAX;
	static int32_t x47 = INT32_MIN;
	int16_t x48 = 53;
	volatile int32_t t5 = -5;

	t5 = (x45*(x46>>(x47<=x48)));

	if (t5 != 4177665) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x49 = -1;
	uint8_t x50 = 1U;
	uint32_t x51 = 1U;
	volatile int8_t x52 = -1;
	int32_t t6 = 88;

	t6 = (x49*(x50>>(x51<=x52)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x53 = UINT64_MAX;
	static uint8_t x54 = UINT8_MAX;
	volatile int16_t x56 = INT16_MIN;
	uint64_t t7 = 112605049891209243LLU;

	t7 = (x53*(x54>>(x55<=x56)));

	if (t7 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x57 = UINT64_MAX;
	volatile uint8_t x58 = UINT8_MAX;
	int32_t x60 = INT32_MIN;
	uint64_t t8 = 17568419517LLU;

	t8 = (x57*(x58>>(x59<=x60)));

	if (t8 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x89 = UINT32_MAX;
	int16_t x90 = 36;
	int32_t x91 = -1;
	uint64_t x92 = 19548749LLU;
	volatile uint32_t t9 = 1U;

	t9 = (x89*(x90>>(x91<=x92)));

	if (t9 != 4294967260U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x94 = INT16_MAX;
	uint64_t x95 = UINT64_MAX;
	int16_t x96 = 985;
	volatile int64_t t10 = 957LL;

	t10 = (x93*(x94>>(x95<=x96)));

	if (t10 != 1822043899088LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x102 = INT8_MAX;
	int8_t x103 = INT8_MAX;
	uint64_t x104 = UINT64_MAX;
	static volatile int32_t t11 = -14;

	t11 = (x101*(x102>>(x103<=x104)));

	if (t11 != 1741068) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x109 = -1;
	volatile uint32_t x110 = 527047389U;
	uint16_t x111 = 12415U;
	volatile uint8_t x112 = 4U;
	volatile uint32_t t12 = 185U;

	t12 = (x109*(x110>>(x111<=x112)));

	if (t12 != 3767919907U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x131 = INT32_MIN;
	static int8_t x132 = -25;

	t13 = (x129*(x130>>(x131<=x132)));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x133 = UINT16_MAX;
	int16_t x136 = 3;
	uint32_t t14 = 1065828069U;

	t14 = (x133*(x134>>(x135<=x136)));

	if (t14 != 31915303U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x146 = UINT32_MAX;
	static int64_t x148 = 372309427LL;
	uint32_t t15 = 129968U;

	t15 = (x145*(x146>>(x147<=x148)));

	if (t15 != 36U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x149 = 5525551657780822419LLU;
	int32_t x150 = 2150;
	static volatile int32_t x151 = -1;
	int64_t x152 = INT64_MIN;
	volatile uint64_t t16 = 45LLU;

	t16 = (x149*(x150>>(x151<=x152)));

	if (t16 != 232880759816960146LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x173 = INT64_MIN;
	uint64_t x174 = 77437429060164LLU;
	volatile int64_t x176 = INT64_MIN;
	volatile uint64_t t17 = 106583243LLU;

	t17 = (x173*(x174>>(x175<=x176)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x185 = -4;
	int16_t x187 = -2814;
	uint32_t x188 = 60629U;

	t18 = (x185*(x186>>(x187<=x188)));

	if (t18 != -23052) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x189 = -1LL;
	static uint64_t x190 = 2699890365483029140LLU;
	static int64_t x192 = -21215506212885LL;
	uint64_t t19 = 3603LLU;

	t19 = (x189*(x190>>(x191<=x192)));

	if (t19 != 15746853708226522476LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x197 = INT16_MIN;
	volatile uint16_t x198 = 16173U;

	t20 = (x197*(x198>>(x199<=x200)));

	if (t20 != -264962048) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x201 = -268475916700028LL;
	int8_t x202 = INT8_MAX;
	volatile uint32_t x203 = UINT32_MAX;
	int64_t t21 = 147429332482214614LL;

	t21 = (x201*(x202>>(x203<=x204)));

	if (t21 != -34096441420903556LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x206 = 10514U;
	static uint16_t x207 = 10U;
	static uint64_t t22 = 245210LLU;

	t22 = (x205*(x206>>(x207<=x208)));

	if (t22 != 10873604739743067666LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x213 = INT16_MIN;
	uint16_t x214 = UINT16_MAX;
	int8_t x215 = INT8_MIN;
	static int16_t x216 = 11424;
	volatile int32_t t23 = -1;

	t23 = (x213*(x214>>(x215<=x216)));

	if (t23 != -1073709056) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x221 = INT16_MAX;
	volatile uint64_t x222 = UINT64_MAX;
	static int16_t x223 = INT16_MIN;
	static volatile uint64_t t24 = 1235008009LLU;

	t24 = (x221*(x222>>(x223<=x224)));

	if (t24 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x229 = -1;
	int8_t x230 = INT8_MAX;
	uint64_t x231 = 237LLU;
	uint64_t x232 = 1062714908808LLU;
	static int32_t t25 = 3015;

	t25 = (x229*(x230>>(x231<=x232)));

	if (t25 != -63) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x235 = 3;

	t26 = (x233*(x234>>(x235<=x236)));

	if (t26 != 18446744073709533383LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x241 = -1;
	static uint16_t x243 = UINT16_MAX;
	uint16_t x244 = 14U;
	uint64_t t27 = 56LLU;

	t27 = (x241*(x242>>(x243<=x244)));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x245 = INT16_MIN;
	volatile uint64_t x246 = UINT64_MAX;
	static uint16_t x248 = 2U;
	uint64_t t28 = 24972057349LLU;

	t28 = (x245*(x246>>(x247<=x248)));

	if (t28 != 32768LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x249 = -1;

	t29 = (x249*(x250>>(x251<=x252)));

	if (t29 != 18446743805149810838LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x253 = 3U;
	int8_t x255 = 43;
	int32_t t30 = -434;

	t30 = (x253*(x254>>(x255<=x256)));

	if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x277 = -162886739371LL;
	uint64_t x278 = 7613856807058161LLU;
	volatile int64_t x279 = INT64_MIN;
	uint64_t x280 = UINT64_MAX;
	uint64_t t31 = 13154911922460742LLU;

	t31 = (x277*(x278>>(x279<=x280)));

	if (t31 != 12500307621918333144LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x286 = 1722U;
	static int32_t x287 = INT32_MIN;
	uint64_t x288 = 165060736LLU;

	t32 = (x285*(x286>>(x287<=x288)));

	if (t32 != 112851270) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x289 = 37481965203LL;
	static int8_t x291 = INT8_MIN;
	static volatile uint64_t t33 = 370439422545LLU;

	t33 = (x289*(x290>>(x291<=x292)));

	if (t33 != 17619077486375168782LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x301 = INT16_MIN;
	int64_t x304 = INT64_MIN;
	volatile int32_t t34 = -228;

	t34 = (x301*(x302>>(x303<=x304)));

	if (t34 != -229376) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x309 = -1LL;
	int64_t x310 = INT64_MAX;
	static uint32_t x311 = 16U;
	int8_t x312 = INT8_MIN;
	volatile int64_t t35 = -1346433338578868LL;

	t35 = (x309*(x310>>(x311<=x312)));

	if (t35 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x313 = 17075386305LLU;
	static volatile uint16_t x314 = 3239U;
	uint64_t x316 = UINT64_MAX;
	static volatile uint64_t t36 = 477867189700788207LLU;

	t36 = (x313*(x314>>(x315<=x316)));

	if (t36 != 27645050427795LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x321 = 87U;
	volatile int16_t x322 = 5662;
	int16_t x324 = INT16_MIN;
	volatile int32_t t37 = 1;

	t37 = (x321*(x322>>(x323<=x324)));

	if (t37 != 492594) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x353 = -268;
	uint8_t x354 = 1U;
	int16_t x355 = -1;
	volatile int32_t t38 = -9046;

	t38 = (x353*(x354>>(x355<=x356)));

	if (t38 != -268) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x365 = INT8_MIN;
	uint32_t x366 = 28U;
	static int16_t x367 = INT16_MIN;
	int16_t x368 = -1635;
	volatile uint32_t t39 = 0U;

	t39 = (x365*(x366>>(x367<=x368)));

	if (t39 != 4294965504U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x388 = 43;
	static volatile uint64_t t40 = 224408983295LLU;

	t40 = (x385*(x386>>(x387<=x388)));

	if (t40 != 18446743919090728960LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x389 = 7U;
	uint32_t x392 = 1898U;
	volatile uint64_t t41 = 7395LLU;

	t41 = (x389*(x390>>(x391<=x392)));

	if (t41 != 8791993015988LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x417 = 223708U;
	uint32_t x418 = 7129U;
	volatile uint32_t x419 = UINT32_MAX;
	uint32_t t42 = 4U;

	t42 = (x417*(x418>>(x419<=x420)));

	if (t42 != 1594814332U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x429 = 0U;
	uint64_t x430 = 51963LLU;
	int16_t x431 = INT16_MIN;
	int8_t x432 = INT8_MIN;
	uint64_t t43 = 63020527499LLU;

	t43 = (x429*(x430>>(x431<=x432)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x435 = 6532901LLU;
	uint64_t x436 = 1885LLU;
	volatile int64_t t44 = 3277859965682245LL;

	t44 = (x433*(x434>>(x435<=x436)));

	if (t44 != 710LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x450 = 56744LLU;
	int8_t x451 = -1;
	static int64_t x452 = INT64_MIN;
	uint64_t t45 = 18282515LLU;

	t45 = (x449*(x450>>(x451<=x452)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x457 = UINT8_MAX;
	static uint32_t x458 = 507329969U;
	int64_t x459 = INT64_MIN;
	int16_t x460 = -1;
	volatile uint32_t t46 = 3833930U;

	t46 = (x457*(x458>>(x459<=x460)));

	if (t46 != 260061480U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x465 = -70816186;
	int64_t x468 = INT64_MAX;
	int32_t t47 = -163521;

	t47 = (x465*(x466>>(x467<=x468)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x469 = 0;
	int8_t x470 = 1;
	int8_t x471 = INT8_MIN;
	volatile int32_t t48 = -170383726;

	t48 = (x469*(x470>>(x471<=x472)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x473 = 34U;
	uint64_t x474 = 2577312LLU;
	int8_t x475 = -1;
	volatile uint64_t t49 = 57083154110627LLU;

	t49 = (x473*(x474>>(x475<=x476)));

	if (t49 != 87628608LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x485 = -1;
	static int64_t x486 = 251LL;
	uint8_t x487 = 1U;
	static uint16_t x488 = UINT16_MAX;

	t50 = (x485*(x486>>(x487<=x488)));

	if (t50 != -125LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x493 = 34U;
	int8_t x494 = 15;
	int32_t x496 = 2898;
	int32_t t51 = 146385;

	t51 = (x493*(x494>>(x495<=x496)));

	if (t51 != 510) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x501 = -1;
	int16_t x503 = INT16_MAX;
	int64_t x504 = INT64_MAX;
	int32_t t52 = 222400;

	t52 = (x501*(x502>>(x503<=x504)));

	if (t52 != -3) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x505 = 1U;
	int16_t x506 = 21;
	static uint8_t x508 = 6U;
	static uint32_t t53 = 452285U;

	t53 = (x505*(x506>>(x507<=x508)));

	if (t53 != 10U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x510 = 3;
	static uint16_t x511 = 4U;
	uint32_t x512 = 0U;
	static int64_t t54 = 59136038873LL;

	t54 = (x509*(x510>>(x511<=x512)));

	if (t54 != -3LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x513 = INT8_MIN;
	int16_t x514 = INT16_MAX;
	static int8_t x515 = INT8_MIN;
	uint32_t x516 = 183361U;

	t55 = (x513*(x514>>(x515<=x516)));

	if (t55 != -4194176) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x517 = INT64_MAX;
	volatile int64_t t56 = -2089291157440LL;

	t56 = (x517*(x518>>(x519<=x520)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x522 = INT16_MAX;
	static uint16_t x523 = UINT16_MAX;
	volatile uint32_t x524 = UINT32_MAX;

	t57 = (x521*(x522>>(x523<=x524)));

	if (t57 != -32520255) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x525 = INT32_MIN;
	volatile uint64_t x526 = UINT64_MAX;
	uint16_t x527 = UINT16_MAX;
	volatile uint64_t t58 = 65343141LLU;

	t58 = (x525*(x526>>(x527<=x528)));

	if (t58 != 2147483648LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x541 = 15U;
	static int16_t x542 = INT16_MAX;
	volatile int64_t x543 = -1LL;
	int64_t x544 = INT64_MIN;
	int32_t t59 = -1634;

	t59 = (x541*(x542>>(x543<=x544)));

	if (t59 != 491505) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x566 = UINT64_MAX;
	int32_t x567 = INT32_MAX;
	static volatile uint16_t x568 = UINT16_MAX;
	static uint64_t t60 = UINT64_MAX;

	t60 = (x565*(x566>>(x567<=x568)));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x569 = -4;
	static int32_t x570 = 4607;
	uint32_t x571 = 893U;
	uint32_t x572 = UINT32_MAX;
	static volatile int32_t t61 = -226278;

	t61 = (x569*(x570>>(x571<=x572)));

	if (t61 != -9212) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x573 = 1532;
	uint16_t x574 = 35U;
	int32_t x575 = -1;
	int8_t x576 = 3;

	t62 = (x573*(x574>>(x575<=x576)));

	if (t62 != 26044) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x590 = 1558U;
	uint32_t x591 = 1U;
	volatile int32_t t63 = 27;

	t63 = (x589*(x590>>(x591<=x592)));

	if (t63 != 25525493) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t t64 = 50970951844LL;

	t64 = (x597*(x598>>(x599<=x600)));

	if (t64 != -2492689LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x605 = INT16_MAX;
	static uint8_t x606 = 23U;
	int64_t x607 = 676244236LL;
	static volatile int8_t x608 = -12;
	volatile int32_t t65 = -626930319;

	t65 = (x605*(x606>>(x607<=x608)));

	if (t65 != 753641) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x618 = UINT64_MAX;
	uint64_t x619 = 782LLU;
	int8_t x620 = INT8_MAX;
	uint64_t t66 = 2LLU;

	t66 = (x617*(x618>>(x619<=x620)));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x625 = 348U;
	int8_t x626 = 22;
	uint8_t x627 = 0U;
	volatile int16_t x628 = INT16_MIN;
	volatile int32_t t67 = -92;

	t67 = (x625*(x626>>(x627<=x628)));

	if (t67 != 7656) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x641 = 10489264U;
	uint64_t x642 = 228625785969153LLU;
	int32_t x643 = -1;
	int32_t x644 = -62010108;
	uint64_t t68 = 15146LLU;

	t68 = (x641*(x642>>(x643<=x644)));

	if (t68 != 39496655699963312LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x646 = 293796203U;
	static volatile uint16_t x647 = UINT16_MAX;
	volatile int32_t x648 = INT32_MIN;

	t69 = (x645*(x646>>(x647<=x648)));

	if (t69 != 4001171093U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x665 = 2U;
	uint16_t x666 = UINT16_MAX;
	volatile int8_t x667 = 4;
	int32_t t70 = -272889109;

	t70 = (x665*(x666>>(x667<=x668)));

	if (t70 != 65534) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x673 = INT64_MAX;
	uint64_t x674 = UINT64_MAX;
	uint16_t x675 = UINT16_MAX;
	static volatile uint8_t x676 = 2U;

	t71 = (x673*(x674>>(x675<=x676)));

	if (t71 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x681 = 0U;
	static uint16_t x682 = 50U;
	uint16_t x683 = 26U;
	volatile int16_t x684 = 460;
	int32_t t72 = -793897;

	t72 = (x681*(x682>>(x683<=x684)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x693 = -2912;
	uint64_t x694 = UINT64_MAX;
	int16_t x695 = INT16_MIN;
	uint8_t x696 = 81U;
	static uint64_t t73 = 393875017050LLU;

	t73 = (x693*(x694>>(x695<=x696)));

	if (t73 != 2912LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x705 = INT32_MIN;
	uint32_t x706 = 130627938U;
	static int16_t x707 = 24;
	uint8_t x708 = 2U;
	volatile uint32_t t74 = 64839U;

	t74 = (x705*(x706>>(x707<=x708)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x717 = 90;
	uint8_t x718 = 0U;
	int64_t x720 = INT64_MAX;
	volatile int32_t t75 = 3;

	t75 = (x717*(x718>>(x719<=x720)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x721 = INT16_MAX;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t76 = -1;

	t76 = (x721*(x722>>(x723<=x724)));

	if (t76 != 1441748) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x731 = INT32_MIN;
	int32_t x732 = INT32_MAX;
	static volatile int32_t t77 = 1;

	t77 = (x729*(x730>>(x731<=x732)));

	if (t77 != 319410) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x745 = -1;
	uint8_t x746 = 0U;
	int64_t x747 = INT64_MIN;
	int8_t x748 = INT8_MAX;
	int32_t t78 = -37754073;

	t78 = (x745*(x746>>(x747<=x748)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x757 = -1;
	int64_t x759 = INT64_MIN;
	int32_t t79 = 0;

	t79 = (x757*(x758>>(x759<=x760)));

	if (t79 != -44) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x777 = 71U;
	static int32_t x778 = 1382922;
	uint64_t x779 = 638715034124658LLU;
	int64_t x780 = -1LL;
	int32_t t80 = -607905571;

	t80 = (x777*(x778>>(x779<=x780)));

	if (t80 != 49093731) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x789 = INT16_MIN;
	int64_t x790 = 3LL;
	int8_t x791 = INT8_MAX;

	t81 = (x789*(x790>>(x791<=x792)));

	if (t81 != -32768LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x793 = -8383768630LL;
	static volatile uint8_t x794 = 18U;
	static uint32_t x795 = UINT32_MAX;
	int64_t x796 = INT64_MIN;
	volatile int64_t t82 = 35676381769113645LL;

	t82 = (x793*(x794>>(x795<=x796)));

	if (t82 != -150907835340LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x801 = 1200328532569753LLU;
	uint16_t x802 = 99U;
	uint8_t x803 = 4U;
	int32_t x804 = INT32_MIN;
	static uint64_t t83 = 0LLU;

	t83 = (x801*(x802>>(x803<=x804)));

	if (t83 != 118832524724405547LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x809 = UINT64_MAX;
	int16_t x810 = INT16_MAX;
	int32_t x811 = INT32_MAX;
	int16_t x812 = INT16_MIN;
	volatile uint64_t t84 = 34209190096933656LLU;

	t84 = (x809*(x810>>(x811<=x812)));

	if (t84 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x821 = 16425401U;
	volatile uint8_t x822 = 18U;
	static int32_t x823 = -114160;
	int8_t x824 = -1;
	volatile uint32_t t85 = 10807U;

	t85 = (x821*(x822>>(x823<=x824)));

	if (t85 != 147828609U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x825 = 27U;
	uint8_t x826 = 62U;
	int16_t x827 = INT16_MIN;
	static int16_t x828 = INT16_MAX;

	t86 = (x825*(x826>>(x827<=x828)));

	if (t86 != 837) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x841 = 4U;
	uint8_t x842 = 5U;
	volatile int64_t x844 = INT64_MIN;
	int32_t t87 = 837;

	t87 = (x841*(x842>>(x843<=x844)));

	if (t87 != 8) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x845 = 302;
	uint64_t x846 = UINT64_MAX;
	uint32_t x848 = 1805982319U;
	uint64_t t88 = 254874882321283LLU;

	t88 = (x845*(x846>>(x847<=x848)));

	if (t88 != 18446744073709551314LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x849 = 1691666034698LLU;
	int32_t x850 = 973;
	int64_t x852 = INT64_MIN;
	uint64_t t89 = 30215619645LLU;

	t89 = (x849*(x850>>(x851<=x852)));

	if (t89 != 822149692863228LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x860 = 18U;
	uint32_t t90 = 33479U;

	t90 = (x857*(x858>>(x859<=x860)));

	if (t90 != 4293276387U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x862 = UINT32_MAX;
	uint32_t x863 = 810661892U;
	int64_t x864 = INT64_MIN;
	uint32_t t91 = 10719U;

	t91 = (x861*(x862>>(x863<=x864)));

	if (t91 != 32768U) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x869 = -1LL;
	static volatile uint16_t x870 = 2695U;
	uint8_t x872 = UINT8_MAX;
	int64_t t92 = -31405705LL;

	t92 = (x869*(x870>>(x871<=x872)));

	if (t92 != -1347LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x873 = 280205228LLU;
	volatile int8_t x874 = INT8_MAX;
	int32_t x876 = -195;
	volatile uint64_t t93 = 862870354568884LLU;

	t93 = (x873*(x874>>(x875<=x876)));

	if (t93 != 35586063956LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x877 = 189;
	uint64_t x878 = 24931952469042LLU;
	uint16_t x879 = 21U;
	int32_t x880 = 1163;
	static volatile uint64_t t94 = 1081446LLU;

	t94 = (x877*(x878>>(x879<=x880)));

	if (t94 != 2356069508324469LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x913 = -1LL;
	volatile uint32_t x914 = 6076U;
	int8_t x915 = 1;
	uint16_t x916 = 127U;
	volatile int64_t t95 = -450124440711339448LL;

	t95 = (x913*(x914>>(x915<=x916)));

	if (t95 != -3038LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x923 = 114U;
	int8_t x924 = INT8_MAX;
	volatile uint32_t t96 = 5583U;

	t96 = (x921*(x922>>(x923<=x924)));

	if (t96 != 24164565U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x925 = -1;
	static uint32_t x926 = UINT32_MAX;
	int8_t x928 = -1;
	volatile uint32_t t97 = 20U;

	t97 = (x925*(x926>>(x927<=x928)));

	if (t97 != 2147483649U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x929 = 320U;
	uint64_t x931 = UINT64_MAX;
	uint16_t x932 = 2979U;
	static volatile int32_t t98 = -1;

	t98 = (x929*(x930>>(x931<=x932)));

	if (t98 != 20971200) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x933 = INT8_MIN;
	uint32_t x934 = 0U;
	uint32_t t99 = 24U;

	t99 = (x933*(x934>>(x935<=x936)));

	if (t99 != 0U) { NG(); } else { ; }
	
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


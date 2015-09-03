#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
volatile int8_t x18 = -1;
int8_t x38 = -52;
int64_t t5 = -472LL;
static int8_t x45 = -3;
int32_t x63 = INT32_MIN;
uint16_t x68 = 8U;
uint32_t t10 = 75973U;
static int64_t x86 = INT64_MIN;
static int16_t x106 = INT16_MAX;
volatile int64_t t16 = 868LL;
int32_t x123 = 19840643;
int32_t x130 = INT32_MIN;
uint16_t x139 = 12598U;
int32_t x151 = -852231213;
uint64_t t23 = 4086398964239046LLU;
static volatile int32_t x161 = INT32_MAX;
uint32_t x186 = UINT32_MAX;
volatile int32_t t28 = 7616;
volatile int64_t t29 = 951272LL;
int16_t x198 = 6;
volatile int64_t t30 = -66LL;
int32_t t31 = -1637;
uint32_t t32 = 66083683U;
static int64_t x218 = INT64_MIN;
uint8_t x219 = 3U;
volatile uint16_t x235 = UINT16_MAX;
int64_t t36 = -13213509927277LL;
int16_t x264 = INT16_MIN;
int16_t x271 = INT16_MAX;
static int16_t x272 = INT16_MIN;
int32_t x310 = 2577983;
int32_t x317 = INT32_MAX;
int16_t x324 = INT16_MIN;
static int8_t x331 = INT8_MIN;
int32_t x350 = -1;
static uint64_t x351 = 342567212045LLU;
static int32_t x361 = INT32_MAX;
volatile int32_t t51 = -3904;
uint64_t t52 = 974897429LLU;
static int32_t x373 = -518114746;
static uint64_t t53 = 435537338538LLU;
uint8_t x379 = 64U;
static uint32_t x381 = 233735U;
uint64_t x383 = 1121601084391405LLU;
int8_t x384 = INT8_MIN;
uint8_t x388 = UINT8_MAX;
uint16_t x389 = 0U;
int32_t x390 = INT32_MAX;
volatile int32_t x401 = -1;
int16_t x402 = INT16_MIN;
uint64_t t59 = 3588306836LLU;
static int32_t x406 = INT32_MAX;
static int16_t x436 = INT16_MIN;
int8_t x442 = INT8_MAX;
volatile int32_t t63 = 174;
static uint64_t x448 = 3819439153LLU;
uint64_t t64 = 1302573059LLU;
int8_t x457 = -3;
static int8_t x460 = INT8_MAX;
volatile int64_t t67 = -1053650636100555578LL;
int16_t x461 = -11;
volatile int8_t x465 = INT8_MIN;
uint8_t x466 = 18U;
uint64_t t70 = 15LLU;
volatile uint64_t x493 = 154LLU;
static uint64_t x495 = UINT64_MAX;
int32_t x496 = INT32_MAX;
int16_t x501 = INT16_MAX;
static volatile int64_t x503 = INT64_MIN;
volatile int32_t t75 = -1084;
int8_t x527 = INT8_MAX;
uint8_t x530 = 106U;
static uint32_t x536 = 161U;
volatile uint64_t t78 = 10864806235079LLU;
volatile int8_t x545 = 0;
int8_t x548 = INT8_MIN;
uint32_t x549 = 13U;
int32_t x554 = INT32_MAX;
int64_t x555 = INT64_MIN;
int32_t x578 = INT32_MIN;
volatile uint32_t x579 = 407259277U;
static uint16_t x580 = 32488U;
int16_t x590 = INT16_MAX;
uint64_t x591 = 8829422585764625301LLU;
int32_t x593 = -406;
static int32_t x594 = INT32_MAX;
uint64_t x596 = 12425709074832LLU;
uint8_t x604 = 4U;
int8_t x619 = 37;
volatile int32_t x625 = INT32_MAX;
int64_t x628 = INT64_MIN;
int16_t x637 = INT16_MIN;
int16_t x645 = 917;
volatile uint64_t t97 = 8724270220874715927LLU;
int8_t x664 = -1;
int64_t t99 = 0LL;


void f0(void) {
	int16_t x1 = -5209;
	int64_t x2 = -1LL;
	int8_t x3 = INT8_MAX;
	int64_t t0 = -129826152LL;

	t0 = (x1%(x2%(x3%x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = 3U;
	static int16_t x14 = -1;
	int64_t x15 = INT64_MAX;
	uint32_t x16 = 449U;
	static int64_t t1 = 168911LL;

	t1 = (x13%(x14%(x15%x16)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = UINT32_MAX;
	volatile uint8_t x19 = 2U;
	uint8_t x20 = UINT8_MAX;
	uint32_t t2 = 4598547U;

	t2 = (x17%(x18%(x19%x20)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = UINT32_MAX;
	uint32_t x22 = 25U;
	int8_t x23 = 4;
	int64_t x24 = 1550275LL;
	volatile int64_t t3 = -37801558LL;

	t3 = (x21%(x22%(x23%x24)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = 18;
	int16_t x26 = -1;
	int64_t x27 = INT64_MAX;
	uint16_t x28 = 729U;
	int64_t t4 = 137027154162682518LL;

	t4 = (x25%(x26%(x27%x28)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x37 = UINT8_MAX;
	static volatile int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;

	t5 = (x37%(x38%(x39%x40)));

	if (t5 != 47LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = INT32_MIN;
	volatile int64_t x42 = -229571548222LL;
	int32_t x43 = -87457;
	uint32_t x44 = UINT32_MAX;
	static volatile int64_t t6 = -43479909171962987LL;

	t6 = (x41%(x42%(x43%x44)));

	if (t6 != -204566893LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x46 = 8U;
	int32_t x47 = INT32_MAX;
	static int32_t x48 = INT32_MIN;
	volatile int32_t t7 = -3201275;

	t7 = (x45%(x46%(x47%x48)));

	if (t7 != -3) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MIN;
	volatile uint16_t x51 = 102U;
	int64_t x52 = 7190869LL;
	int64_t t8 = -60496417274LL;

	t8 = (x49%(x50%(x51%x52)));

	if (t8 != -24LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = 0;
	volatile uint64_t x62 = UINT64_MAX;
	uint64_t x64 = UINT64_MAX;
	static volatile uint64_t t9 = 3189889LLU;

	t9 = (x61%(x62%(x63%x64)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = -23;
	int8_t x66 = 2;
	static uint32_t x67 = 230853885U;

	t10 = (x65%(x66%(x67%x68)));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x77 = INT32_MAX;
	int32_t x78 = INT32_MIN;
	volatile uint64_t x79 = 3817606279LLU;
	static int64_t x80 = 156573LL;
	uint64_t t11 = 48120903651662716LLU;

	t11 = (x77%(x78%(x79%x80)));

	if (t11 != 31081LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x85 = -16025;
	int64_t x87 = INT64_MAX;
	static int64_t x88 = 116LL;
	static volatile int64_t t12 = 4314067022704190LL;

	t12 = (x85%(x86%(x87%x88)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x89 = INT8_MIN;
	static uint16_t x90 = UINT16_MAX;
	uint16_t x91 = 1085U;
	uint64_t x92 = 30553982132LLU;
	static uint64_t t13 = 2549114495463715LLU;

	t13 = (x89%(x90%(x91%x92)));

	if (t13 != 128LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x101 = -10133790;
	uint64_t x102 = 57822342777488LLU;
	int16_t x103 = 764;
	int8_t x104 = INT8_MIN;
	volatile uint64_t t14 = 29674LLU;

	t14 = (x101%(x102%(x103%x104)));

	if (t14 != 46LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x105 = INT8_MAX;
	int64_t x107 = INT64_MIN;
	int16_t x108 = 6407;
	int64_t t15 = -1922437230267117LL;

	t15 = (x105%(x106%(x107%x108)));

	if (t15 != 127LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x109 = INT64_MAX;
	static int64_t x110 = INT64_MIN;
	int8_t x111 = 10;
	uint32_t x112 = 92454957U;

	t16 = (x109%(x110%(x111%x112)));

	if (t16 != 7LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x117 = INT64_MIN;
	volatile int8_t x118 = INT8_MAX;
	int16_t x119 = INT16_MAX;
	int64_t x120 = INT64_MIN;
	static volatile int64_t t17 = -1100808785385376LL;

	t17 = (x117%(x118%(x119%x120)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x121 = -1;
	uint8_t x122 = 5U;
	uint64_t x124 = UINT64_MAX;
	uint64_t t18 = 980630154437LLU;

	t18 = (x121%(x122%(x123%x124)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x129 = -1;
	volatile uint16_t x131 = 7250U;
	static volatile int64_t x132 = INT64_MIN;
	int64_t t19 = 615441375LL;

	t19 = (x129%(x130%(x131%x132)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x133 = INT8_MIN;
	int32_t x134 = -7;
	uint8_t x135 = 38U;
	int16_t x136 = INT16_MIN;
	int32_t t20 = -3513;

	t20 = (x133%(x134%(x135%x136)));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x137 = 3U;
	volatile uint16_t x138 = UINT16_MAX;
	static int8_t x140 = INT8_MIN;
	volatile uint32_t t21 = 531U;

	t21 = (x137%(x138%(x139%x140)));

	if (t21 != 3U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x149 = INT32_MAX;
	volatile int32_t x150 = 54401153;
	uint8_t x152 = UINT8_MAX;
	int32_t t22 = 7;

	t22 = (x149%(x150%(x151%x152)));

	if (t22 != 8) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x153 = -24;
	int64_t x154 = INT64_MAX;
	int32_t x155 = -1;
	uint64_t x156 = 68755484086LLU;

	t23 = (x153%(x154%(x155%x156)));

	if (t23 != 7268832437LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x157 = 44U;
	int16_t x158 = -69;
	int16_t x159 = INT16_MIN;
	int8_t x160 = -23;
	volatile int32_t t24 = -88204;

	t24 = (x157%(x158%(x159%x160)));

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x162 = 3U;
	static uint32_t x163 = UINT32_MAX;
	volatile int64_t x164 = 125844794LL;
	volatile int64_t t25 = -24878LL;

	t25 = (x161%(x162%(x163%x164)));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x177 = INT32_MIN;
	int8_t x178 = INT8_MAX;
	uint32_t x179 = 7255U;
	volatile uint16_t x180 = 287U;
	uint32_t t26 = 3496U;

	t26 = (x177%(x178%(x179%x180)));

	if (t26 != 21U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x185 = -1LL;
	static int8_t x187 = INT8_MAX;
	int16_t x188 = INT16_MIN;
	int64_t t27 = -954040536LL;

	t27 = (x185%(x186%(x187%x188)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x189 = 1U;
	int32_t x190 = -10;
	static uint8_t x191 = UINT8_MAX;
	static int8_t x192 = -7;

	t28 = (x189%(x190%(x191%x192)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x193 = 0;
	int64_t x194 = -1LL;
	uint8_t x195 = UINT8_MAX;
	uint32_t x196 = UINT32_MAX;

	t29 = (x193%(x194%(x195%x196)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x197 = INT16_MIN;
	int64_t x199 = -907332LL;
	static int64_t x200 = -964LL;

	t30 = (x197%(x198%(x199%x200)));

	if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x201 = -1;
	int16_t x202 = -1;
	int8_t x203 = INT8_MAX;
	uint8_t x204 = UINT8_MAX;

	t31 = (x201%(x202%(x203%x204)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x213 = UINT32_MAX;
	int16_t x214 = INT16_MIN;
	uint16_t x215 = 27U;
	uint32_t x216 = UINT32_MAX;

	t32 = (x213%(x214%(x215%x216)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x217 = 401U;
	int16_t x220 = INT16_MIN;
	int64_t t33 = 22848LL;

	t33 = (x217%(x218%(x219%x220)));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x233 = -46;
	int32_t x234 = INT32_MIN;
	uint32_t x236 = UINT32_MAX;
	volatile uint32_t t34 = 13554225U;

	t34 = (x233%(x234%(x235%x236)));

	if (t34 != 32722U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x241 = INT64_MIN;
	int8_t x242 = 2;
	volatile uint64_t x243 = 3463173435161061LLU;
	uint64_t x244 = 413644917271154003LLU;
	uint64_t t35 = 3975156003LLU;

	t35 = (x241%(x242%(x243%x244)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x245 = 27U;
	volatile uint8_t x246 = UINT8_MAX;
	int64_t x247 = INT64_MAX;
	int16_t x248 = INT16_MIN;

	t36 = (x245%(x246%(x247%x248)));

	if (t36 != 27LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x257 = 60;
	int8_t x258 = -4;
	uint32_t x259 = 1238U;
	volatile int16_t x260 = INT16_MAX;
	uint32_t t37 = 55704U;

	t37 = (x257%(x258%(x259%x260)));

	if (t37 != 60U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x261 = INT32_MAX;
	int8_t x262 = INT8_MIN;
	int8_t x263 = 30;
	int32_t t38 = -3;

	t38 = (x261%(x262%(x263%x264)));

	if (t38 != 7) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x269 = INT32_MIN;
	volatile int64_t x270 = -1LL;
	volatile int64_t t39 = 5348005301103LL;

	t39 = (x269%(x270%(x271%x272)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x273 = 15170335739643560LLU;
	int64_t x274 = -1LL;
	volatile int64_t x275 = -4158808644767LL;
	static uint16_t x276 = UINT16_MAX;
	static uint64_t t40 = 86LLU;

	t40 = (x273%(x274%(x275%x276)));

	if (t40 != 15170335739643560LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x281 = -1;
	int64_t x282 = INT64_MIN;
	int16_t x283 = -5;
	static int16_t x284 = INT16_MIN;
	volatile int64_t t41 = -58LL;

	t41 = (x281%(x282%(x283%x284)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x285 = INT32_MAX;
	int64_t x286 = INT64_MIN;
	volatile int8_t x287 = 6;
	static int64_t x288 = 545842LL;
	volatile int64_t t42 = -382039667042LL;

	t42 = (x285%(x286%(x287%x288)));

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x309 = -1;
	uint8_t x311 = UINT8_MAX;
	volatile int64_t x312 = INT64_MIN;
	volatile int64_t t43 = 5151LL;

	t43 = (x309%(x310%(x311%x312)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x318 = 1U;
	static int32_t x319 = INT32_MIN;
	int64_t x320 = INT64_MAX;
	volatile int64_t t44 = 782300334LL;

	t44 = (x317%(x318%(x319%x320)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x321 = 2042U;
	uint64_t x322 = 1015343176LLU;
	int16_t x323 = -1;
	volatile uint64_t t45 = 238350499137700266LLU;

	t45 = (x321%(x322%(x323%x324)));

	if (t45 != 2042LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x325 = INT16_MIN;
	static uint64_t x326 = 26497511LLU;
	static int8_t x327 = INT8_MAX;
	uint64_t x328 = 700548662LLU;
	volatile uint64_t t46 = 2935LLU;

	t46 = (x325%(x326%(x327%x328)));

	if (t46 != 8LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x329 = -1LL;
	volatile int64_t x330 = 6LL;
	static volatile uint64_t x332 = UINT64_MAX;
	uint64_t t47 = 22LLU;

	t47 = (x329%(x330%(x331%x332)));

	if (t47 != 3LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x337 = 141U;
	volatile uint16_t x338 = 26841U;
	static int16_t x339 = INT16_MAX;
	static uint16_t x340 = 10U;
	volatile uint32_t t48 = 179447603U;

	t48 = (x337%(x338%(x339%x340)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x345 = 77;
	uint16_t x346 = 8U;
	uint64_t x347 = 118700519465LLU;
	volatile int64_t x348 = -18216226669LL;
	static uint64_t t49 = 59811499114279LLU;

	t49 = (x345%(x346%(x347%x348)));

	if (t49 != 5LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x349 = 26U;
	int32_t x352 = INT32_MIN;
	volatile uint64_t t50 = 21442165LLU;

	t50 = (x349%(x350%(x351%x352)));

	if (t50 != 26LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x362 = -7;
	int32_t x363 = INT32_MIN;
	volatile int32_t x364 = -23920599;

	t51 = (x361%(x362%(x363%x364)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x369 = INT8_MIN;
	static uint8_t x370 = UINT8_MAX;
	uint16_t x371 = 8174U;
	uint64_t x372 = 17877092464LLU;

	t52 = (x369%(x370%(x371%x372)));

	if (t52 != 128LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x374 = 746LLU;
	uint16_t x375 = 7228U;
	static uint16_t x376 = UINT16_MAX;

	t53 = (x373%(x374%(x375%x376)));

	if (t53 != 552LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x377 = INT8_MAX;
	int32_t x378 = INT32_MAX;
	volatile int32_t x380 = INT32_MAX;
	int32_t t54 = 8;

	t54 = (x377%(x378%(x379%x380)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x382 = -3;
	uint64_t t55 = 143437790LLU;

	t55 = (x381%(x382%(x383%x384)));

	if (t55 != 233735LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x385 = 187185989LLU;
	static int64_t x386 = INT64_MAX;
	volatile uint16_t x387 = 4312U;
	uint64_t t56 = 24459278LLU;

	t56 = (x385%(x386%(x387%x388)));

	if (t56 != 54LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x391 = 2761;
	static volatile int32_t x392 = INT32_MAX;
	volatile int32_t t57 = -20099510;

	t57 = (x389%(x390%(x391%x392)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x397 = 445U;
	int32_t x398 = 7;
	static int8_t x399 = INT8_MAX;
	volatile int16_t x400 = 95;
	volatile int32_t t58 = 15392390;

	t58 = (x397%(x398%(x399%x400)));

	if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x403 = 12;
	uint64_t x404 = 21613LLU;

	t59 = (x401%(x402%(x403%x404)));

	if (t59 != 7LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x405 = 1U;
	int8_t x407 = INT8_MAX;
	static volatile int64_t x408 = INT64_MIN;
	volatile int64_t t60 = -2731324LL;

	t60 = (x405%(x406%(x407%x408)));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x433 = INT32_MIN;
	int8_t x434 = INT8_MAX;
	uint32_t x435 = 2098814U;
	static uint32_t t61 = 85U;

	t61 = (x433%(x434%(x435%x436)));

	if (t61 != 8U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x437 = -1;
	static volatile int8_t x438 = INT8_MIN;
	int32_t x439 = INT32_MIN;
	volatile int32_t x440 = 19486063;
	volatile int32_t t62 = 3362791;

	t62 = (x437%(x438%(x439%x440)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x441 = -1;
	uint16_t x443 = 397U;
	uint8_t x444 = 43U;

	t63 = (x441%(x442%(x443%x444)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x445 = INT16_MAX;
	uint16_t x446 = 346U;
	uint32_t x447 = 5811U;

	t64 = (x445%(x446%(x447%x448)));

	if (t64 != 243LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x449 = INT32_MIN;
	uint32_t x450 = 9253U;
	int16_t x451 = 2002;
	uint64_t x452 = UINT64_MAX;
	uint64_t t65 = 919605324LLU;

	t65 = (x449%(x450%(x451%x452)));

	if (t65 != 1118LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x453 = UINT64_MAX;
	uint64_t x454 = UINT64_MAX;
	int8_t x455 = INT8_MIN;
	int32_t x456 = 2262;
	volatile uint64_t t66 = 3574014239101044LLU;

	t66 = (x453%(x454%(x455%x456)));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x458 = -4281338206267LL;
	int32_t x459 = 3;

	t67 = (x457%(x458%(x459%x460)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x462 = UINT16_MAX;
	uint32_t x463 = 2344U;
	volatile int64_t x464 = INT64_MIN;
	int64_t t68 = -202004369LL;

	t68 = (x461%(x462%(x463%x464)));

	if (t68 != -11LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x467 = 553U;
	static int8_t x468 = INT8_MAX;
	volatile uint32_t t69 = 7U;

	t69 = (x465%(x466%(x467%x468)));

	if (t69 != 2U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x481 = 9LLU;
	static int64_t x482 = -2LL;
	uint32_t x483 = 11U;
	int32_t x484 = INT32_MAX;

	t70 = (x481%(x482%(x483%x484)));

	if (t70 != 9LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x485 = -1;
	int32_t x486 = -1;
	volatile int8_t x487 = -6;
	volatile uint64_t x488 = 29888LLU;
	uint64_t t71 = 1925012233422360617LLU;

	t71 = (x485%(x486%(x487%x488)));

	if (t71 != 3165LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x489 = 2923434U;
	volatile int8_t x490 = INT8_MIN;
	uint16_t x491 = UINT16_MAX;
	volatile int32_t x492 = INT32_MAX;
	volatile uint32_t t72 = 597560114U;

	t72 = (x489%(x490%(x491%x492)));

	if (t72 != 2923434U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x494 = INT8_MAX;
	volatile uint64_t t73 = 3826061268051LLU;

	t73 = (x493%(x494%(x495%x496)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x502 = INT64_MAX;
	uint32_t x504 = 18677U;
	volatile int64_t t74 = -543464627LL;

	t74 = (x501%(x502%(x503%x504)));

	if (t74 != 1039LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x517 = INT32_MIN;
	int16_t x518 = 115;
	int16_t x519 = INT16_MIN;
	uint8_t x520 = UINT8_MAX;

	t75 = (x517%(x518%(x519%x520)));

	if (t75 != -98) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x525 = UINT64_MAX;
	static int16_t x526 = 2702;
	int64_t x528 = INT64_MIN;
	uint64_t t76 = 31382763688609LLU;

	t76 = (x525%(x526%(x527%x528)));

	if (t76 != 15LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x529 = -1;
	volatile uint64_t x531 = 306573487458LLU;
	int16_t x532 = INT16_MIN;
	volatile uint64_t t77 = 1542432284LLU;

	t77 = (x529%(x530%(x531%x532)));

	if (t77 != 67LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x533 = UINT64_MAX;
	uint32_t x534 = 3U;
	volatile int8_t x535 = -55;

	t78 = (x533%(x534%(x535%x536)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x537 = INT8_MIN;
	int16_t x538 = -1;
	static uint16_t x539 = 6914U;
	static uint8_t x540 = UINT8_MAX;
	static int32_t t79 = 24;

	t79 = (x537%(x538%(x539%x540)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x541 = 225236923738332LL;
	volatile int32_t x542 = 254770305;
	static int16_t x543 = INT16_MIN;
	uint64_t x544 = 2703076379991LLU;
	volatile uint64_t t80 = 548341199LLU;

	t80 = (x541%(x542%(x543%x544)));

	if (t80 != 102034542LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x546 = UINT64_MAX;
	static uint8_t x547 = UINT8_MAX;
	volatile uint64_t t81 = 121941919LLU;

	t81 = (x545%(x546%(x547%x548)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x550 = 7037;
	int32_t x551 = INT32_MAX;
	static uint32_t x552 = UINT32_MAX;
	volatile uint32_t t82 = 2857U;

	t82 = (x549%(x550%(x551%x552)));

	if (t82 != 13U) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x553 = INT32_MIN;
	volatile uint16_t x556 = 9900U;
	int64_t t83 = 36348LL;

	t83 = (x553%(x554%(x555%x556)));

	if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x569 = 0U;
	volatile int64_t x570 = -1LL;
	static volatile int8_t x571 = INT8_MAX;
	int64_t x572 = INT64_MIN;
	int64_t t84 = -15188372623943LL;

	t84 = (x569%(x570%(x571%x572)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x573 = 481711268111518LL;
	int16_t x574 = -1;
	volatile int32_t x575 = INT32_MIN;
	uint32_t x576 = 205404U;
	volatile int64_t t85 = 104266753LL;

	t85 = (x573%(x574%(x575%x576)));

	if (t85 != 7894LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x577 = 3;
	volatile uint32_t t86 = 10U;

	t86 = (x577%(x578%(x579%x580)));

	if (t86 != 3U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x585 = 5;
	int16_t x586 = -624;
	uint32_t x587 = UINT32_MAX;
	int16_t x588 = INT16_MAX;
	volatile uint32_t t87 = 4359319U;

	t87 = (x585%(x586%(x587%x588)));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x589 = INT8_MIN;
	static volatile uint16_t x592 = 311U;
	volatile uint64_t t88 = 16594663LLU;

	t88 = (x589%(x590%(x591%x592)));

	if (t88 != 30LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x595 = UINT64_MAX;
	uint64_t t89 = 766282570492099974LLU;

	t89 = (x593%(x594%(x595%x596)));

	if (t89 != 2147483245LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x601 = INT16_MAX;
	int64_t x602 = -331LL;
	volatile uint32_t x603 = UINT32_MAX;
	int64_t t90 = 1714193797432168LL;

	t90 = (x601%(x602%(x603%x604)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x605 = 971740209;
	uint8_t x606 = UINT8_MAX;
	static int16_t x607 = INT16_MIN;
	static int32_t x608 = INT32_MIN;
	volatile int32_t t91 = -1124;

	t91 = (x605%(x606%(x607%x608)));

	if (t91 != 234) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x613 = -9553;
	int32_t x614 = -1;
	int32_t x615 = -3310;
	int64_t x616 = -2422845LL;
	volatile int64_t t92 = 2202118936823090918LL;

	t92 = (x613%(x614%(x615%x616)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x617 = 1LL;
	static uint64_t x618 = UINT64_MAX;
	int8_t x620 = INT8_MAX;
	uint64_t t93 = 1412224960472LLU;

	t93 = (x617%(x618%(x619%x620)));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x626 = -1;
	uint64_t x627 = UINT64_MAX;
	uint64_t t94 = 15LLU;

	t94 = (x625%(x626%(x627%x628)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x633 = 1626;
	uint8_t x634 = 3U;
	int8_t x635 = 58;
	static volatile int16_t x636 = INT16_MIN;
	volatile int32_t t95 = 2798;

	t95 = (x633%(x634%(x635%x636)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x638 = UINT16_MAX;
	static volatile int16_t x639 = INT16_MAX;
	uint64_t x640 = 3026LLU;
	static volatile uint64_t t96 = 7126169LLU;

	t96 = (x637%(x638%(x639%x640)));

	if (t96 != 248LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x646 = 40LLU;
	int32_t x647 = -1;
	int64_t x648 = 1326LL;

	t97 = (x645%(x646%(x647%x648)));

	if (t97 != 37LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x657 = INT8_MIN;
	int64_t x658 = -1LL;
	static uint64_t x659 = 804LLU;
	volatile uint32_t x660 = UINT32_MAX;
	volatile uint64_t t98 = 3173907921LLU;

	t98 = (x657%(x658%(x659%x660)));

	if (t98 != 5LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x661 = 89LL;
	int16_t x662 = INT16_MIN;
	uint32_t x663 = 13504440U;

	t99 = (x661%(x662%(x663%x664)));

	if (t99 != 89LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x6 = 504;
static volatile int8_t x19 = 0;
volatile uint32_t x27 = 134951U;
static int64_t x41 = -1LL;
static volatile int64_t t6 = 502LL;
static uint8_t x50 = 0U;
int8_t x52 = INT8_MIN;
int32_t x56 = -7000;
int8_t x65 = -3;
volatile int8_t x67 = INT8_MIN;
volatile uint8_t x68 = UINT8_MAX;
int8_t x70 = INT8_MAX;
int16_t x97 = INT16_MIN;
int64_t x100 = 250787500081LL;
int64_t x106 = INT64_MIN;
int32_t x108 = -5545123;
int64_t t14 = 382258267183LL;
uint16_t x109 = 32448U;
static volatile uint64_t x111 = UINT64_MAX;
uint8_t x115 = 18U;
int32_t x118 = -1;
int64_t x120 = 1045347513888916LL;
volatile int64_t t17 = -200471114666903LL;
static uint32_t x128 = 1860309607U;
int64_t x137 = INT64_MIN;
uint8_t x163 = 42U;
volatile uint16_t x164 = UINT16_MAX;
uint64_t t22 = 47500748514727LLU;
int32_t x181 = INT32_MAX;
static volatile uint64_t x184 = 54282LLU;
static volatile int8_t x188 = -1;
int64_t x190 = INT64_MIN;
uint64_t t26 = UINT64_MAX;
volatile int32_t t27 = -2998427;
int64_t x205 = -133697LL;
volatile int8_t x207 = INT8_MAX;
int32_t x214 = INT32_MIN;
uint8_t x220 = 30U;
volatile int16_t x226 = INT16_MAX;
static uint16_t x228 = UINT16_MAX;
volatile uint16_t x239 = 86U;
uint16_t x243 = 6U;
int32_t t36 = -218404;
uint16_t x253 = UINT16_MAX;
uint8_t x279 = 53U;
uint16_t x287 = 1U;
int32_t x289 = 3;
uint64_t x301 = 201878LLU;
volatile int64_t x304 = -348829LL;
int8_t x321 = INT8_MIN;
int64_t x324 = -5709820372LL;
uint8_t x339 = 4U;
volatile uint64_t t49 = 64286024378LLU;
uint32_t t50 = 188532498U;
int16_t x367 = INT16_MIN;
int16_t x388 = -1;
uint32_t x393 = 1U;
volatile int64_t x397 = 1402LL;
static int8_t x399 = 19;
volatile uint64_t x426 = 3781887LLU;
volatile int16_t x447 = INT16_MIN;
int64_t x448 = -1LL;
int32_t t64 = 500575652;
uint8_t x457 = 3U;
int8_t x484 = INT8_MIN;
int64_t x485 = -1LL;
static uint8_t x486 = 50U;
uint16_t x494 = 0U;
volatile int64_t x495 = 1991LL;
uint8_t x531 = 3U;
volatile int32_t t74 = 849265;
int64_t x534 = -1LL;
int16_t x537 = -211;
uint64_t x538 = UINT64_MAX;
int32_t x540 = INT32_MAX;
uint64_t x543 = 29324961423719LLU;
int8_t x549 = -1;
int16_t x551 = 4604;
int32_t x556 = INT32_MAX;
int32_t x557 = 668461787;
static int64_t t80 = 13337364134535LL;
int16_t x585 = INT16_MIN;
static uint64_t x587 = 389LLU;
int32_t x590 = -14;
static uint8_t x592 = 1U;
int8_t x597 = 11;
int32_t x612 = INT32_MIN;
volatile uint64_t t88 = 26479951909037240LLU;
static int64_t x623 = -53370LL;
int8_t x628 = -26;
int32_t x629 = -6600019;
int8_t x631 = -1;
int8_t x633 = -21;
uint64_t x635 = UINT64_MAX;
int8_t x644 = -1;
int16_t x650 = -1;
int32_t x652 = INT32_MIN;
int32_t x660 = INT32_MAX;
volatile uint64_t x665 = 256140LLU;
volatile int16_t x666 = INT16_MAX;
uint8_t x667 = 1U;
static int16_t x668 = INT16_MAX;
int64_t x669 = INT64_MIN;
volatile uint64_t t97 = 13048294LLU;
int64_t x676 = INT64_MIN;
volatile uint64_t t98 = 241802952LLU;


void f0(void) {
	static volatile uint64_t x5 = 130936784703LLU;
	static int64_t x7 = INT64_MAX;
	int8_t x8 = INT8_MIN;
	volatile uint64_t t0 = 42679247284679138LLU;

	t0 = (((x5-x6)*x7)+x8);

	if (t0 != 9223371905917991481LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x9 = 0U;
	int16_t x10 = INT16_MAX;
	static volatile uint8_t x11 = 7U;
	int16_t x12 = -1;
	volatile int32_t t1 = -38;

	t1 = (((x9-x10)*x11)+x12);

	if (t1 != -229370) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int8_t x14 = INT8_MIN;
	uint16_t x15 = 17584U;
	int32_t x16 = INT32_MIN;
	volatile int32_t t2 = -1;

	t2 = (((x13-x14)*x15)+x16);

	if (t2 != -2145250480) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x17 = UINT16_MAX;
	uint32_t x18 = 442811003U;
	int32_t x20 = 3055;
	volatile uint32_t t3 = 194U;

	t3 = (((x17-x18)*x19)+x20);

	if (t3 != 3055U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -1;
	int64_t x26 = -538LL;
	int32_t x28 = INT32_MIN;
	volatile int64_t t4 = -209LL;

	t4 = (((x25-x26)*x27)+x28);

	if (t4 != -2075014961LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x33 = INT8_MIN;
	int8_t x34 = INT8_MIN;
	uint32_t x35 = 7993U;
	static uint32_t x36 = UINT32_MAX;
	volatile uint32_t t5 = UINT32_MAX;

	t5 = (((x33-x34)*x35)+x36);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x42 = 0;
	uint32_t x43 = 3510U;
	uint32_t x44 = 108U;

	t6 = (((x41-x42)*x43)+x44);

	if (t6 != -3402LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MIN;
	uint8_t x51 = UINT8_MAX;
	static int32_t t7 = -1754;

	t7 = (((x49-x50)*x51)+x52);

	if (t7 != -8355968) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = INT8_MIN;
	int8_t x54 = -1;
	volatile uint8_t x55 = 1U;
	static volatile int32_t t8 = 104147;

	t8 = (((x53-x54)*x55)+x56);

	if (t8 != -7127) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x66 = 50U;
	int32_t t9 = 65341854;

	t9 = (((x65-x66)*x67)+x68);

	if (t9 != 7039) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = INT16_MAX;
	volatile int8_t x71 = -47;
	int32_t x72 = INT32_MAX;
	int32_t t10 = -22411493;

	t10 = (((x69-x70)*x71)+x72);

	if (t10 != 2145949567) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x85 = 40064029LLU;
	int64_t x86 = -1LL;
	static volatile int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MAX;
	volatile uint64_t t11 = 307490901824832035LLU;

	t11 = (((x85-x86)*x87)+x88);

	if (t11 != 9137335187556794367LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x98 = INT8_MAX;
	uint8_t x99 = 5U;
	static volatile int64_t t12 = -4165583530086LL;

	t12 = (((x97-x98)*x99)+x100);

	if (t12 != 250787335606LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x101 = -78421;
	uint32_t x102 = UINT32_MAX;
	volatile int8_t x103 = INT8_MIN;
	uint8_t x104 = 5U;
	uint32_t t13 = 60243U;

	t13 = (((x101-x102)*x103)+x104);

	if (t13 != 10037765U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x105 = INT8_MIN;
	uint8_t x107 = 0U;

	t14 = (((x105-x106)*x107)+x108);

	if (t14 != -5545123LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x110 = -1;
	static int8_t x112 = 21;
	uint64_t t15 = 263926LLU;

	t15 = (((x109-x110)*x111)+x112);

	if (t15 != 18446744073709519188LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x113 = 107;
	int8_t x114 = INT8_MIN;
	int64_t x116 = -711439491256172LL;
	volatile int64_t t16 = 3258369581759946LL;

	t16 = (((x113-x114)*x115)+x116);

	if (t16 != -711439491251942LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x117 = 25619031;
	static int64_t x119 = -1LL;

	t17 = (((x117-x118)*x119)+x120);

	if (t17 != 1045347488269884LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x125 = -1LL;
	int32_t x126 = INT32_MIN;
	int16_t x127 = -1452;
	volatile int64_t t18 = 8134572LL;

	t18 = (((x125-x126)*x127)+x128);

	if (t18 != -3116285945837LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x138 = UINT64_MAX;
	int64_t x139 = -1LL;
	uint8_t x140 = 1U;
	uint64_t t19 = 15060LLU;

	t19 = (((x137-x138)*x139)+x140);

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x157 = INT32_MAX;
	int16_t x158 = 2;
	int64_t x159 = 1527816LL;
	int64_t x160 = INT64_MIN;
	static volatile int64_t t20 = 35367573217LL;

	t20 = (((x157-x158)*x159)+x160);

	if (t20 != -9220091076982206488LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x161 = INT16_MIN;
	int16_t x162 = 1;
	int32_t t21 = 0;

	t21 = (((x161-x162)*x163)+x164);

	if (t21 != -1310763) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x165 = UINT64_MAX;
	int32_t x166 = -84;
	uint8_t x167 = 5U;
	int16_t x168 = 1;

	t22 = (((x165-x166)*x167)+x168);

	if (t22 != 416LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x169 = 0U;
	int16_t x170 = INT16_MIN;
	uint32_t x171 = 876487U;
	static int32_t x172 = INT32_MIN;
	uint32_t t23 = 2120900792U;

	t23 = (((x169-x170)*x171)+x172);

	if (t23 != 803438592U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x182 = 4;
	volatile uint64_t x183 = 202LLU;
	volatile uint64_t t24 = 93000415LLU;

	t24 = (((x181-x182)*x183)+x184);

	if (t24 != 433791750168LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x185 = -1;
	uint64_t x186 = UINT64_MAX;
	uint64_t x187 = UINT64_MAX;
	static volatile uint64_t t25 = UINT64_MAX;

	t25 = (((x185-x186)*x187)+x188);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x189 = INT8_MIN;
	uint64_t x191 = 256LLU;
	int16_t x192 = INT16_MAX;

	t26 = (((x189-x190)*x191)+x192);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x197 = INT8_MIN;
	int8_t x198 = -2;
	int8_t x199 = -1;
	uint8_t x200 = UINT8_MAX;

	t27 = (((x197-x198)*x199)+x200);

	if (t27 != 381) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x201 = -1LL;
	int8_t x202 = INT8_MIN;
	uint8_t x203 = UINT8_MAX;
	static volatile uint8_t x204 = UINT8_MAX;
	volatile int64_t t28 = 395209LL;

	t28 = (((x201-x202)*x203)+x204);

	if (t28 != 32640LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x206 = 187213936LLU;
	volatile int8_t x208 = -1;
	static volatile uint64_t t29 = 6010594366LLU;

	t29 = (((x205-x206)*x207)+x208);

	if (t29 != 18446744049916402224LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x213 = UINT64_MAX;
	uint32_t x215 = 31U;
	volatile int8_t x216 = -1;
	volatile uint64_t t30 = 2887460447LLU;

	t30 = (((x213-x214)*x215)+x216);

	if (t30 != 66571993056LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x217 = -8727621248971LL;
	static uint16_t x218 = 2U;
	static int8_t x219 = INT8_MAX;
	volatile int64_t t31 = -992869LL;

	t31 = (((x217-x218)*x219)+x220);

	if (t31 != -1108407898619541LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x221 = 6231787159LL;
	static volatile int32_t x222 = INT32_MIN;
	uint16_t x223 = 16902U;
	uint64_t x224 = 3877LLU;
	static uint64_t t32 = 501422159605535LLU;

	t32 = (((x221-x222)*x223)+x224);

	if (t32 != 141626435183791LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x225 = INT8_MIN;
	static uint16_t x227 = 2824U;
	static int32_t t33 = -30844688;

	t33 = (((x225-x226)*x227)+x228);

	if (t33 != -92829945) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x233 = UINT8_MAX;
	static int16_t x234 = -7;
	int64_t x235 = -17247899378558882LL;
	uint64_t x236 = 92652003361348702LLU;
	uint64_t t34 = 79759968884263LLU;

	t34 = (((x233-x234)*x235)+x236);

	if (t34 != 14020446439888473234LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x237 = 3568;
	int32_t x238 = -67796;
	int8_t x240 = -1;
	volatile int32_t t35 = 218;

	t35 = (((x237-x238)*x239)+x240);

	if (t35 != 6137303) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x241 = INT8_MAX;
	int8_t x242 = INT8_MIN;
	int16_t x244 = -56;

	t36 = (((x241-x242)*x243)+x244);

	if (t36 != 1474) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x249 = UINT16_MAX;
	volatile int16_t x250 = 10111;
	static uint64_t x251 = UINT64_MAX;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t37 = 1652LLU;

	t37 = (((x249-x250)*x251)+x252);

	if (t37 != 18446744073709496191LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x254 = -590;
	volatile int8_t x255 = INT8_MAX;
	volatile int32_t x256 = -3324387;
	volatile int32_t t38 = 4709;

	t38 = (((x253-x254)*x255)+x256);

	if (t38 != 5073488) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x277 = INT8_MAX;
	static uint32_t x278 = 113543332U;
	static uint32_t x280 = UINT32_MAX;
	volatile uint32_t t39 = 54478874U;

	t39 = (((x277-x278)*x279)+x280);

	if (t39 != 2572144726U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x281 = 44489227227657LL;
	volatile int32_t x282 = INT32_MIN;
	int16_t x283 = INT16_MIN;
	int32_t x284 = -5038618;
	static int64_t t40 = 41751055LL;

	t40 = (((x281-x282)*x283)+x284);

	if (t40 != -1457893366545080858LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x285 = 321LL;
	int16_t x286 = -1;
	int8_t x288 = INT8_MIN;
	static volatile int64_t t41 = 12LL;

	t41 = (((x285-x286)*x287)+x288);

	if (t41 != 194LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x290 = -27LL;
	static int16_t x291 = INT16_MIN;
	int16_t x292 = -9018;
	volatile int64_t t42 = -21902LL;

	t42 = (((x289-x290)*x291)+x292);

	if (t42 != -992058LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x302 = -1;
	int16_t x303 = INT16_MIN;
	volatile uint64_t t43 = 62404850LLU;

	t43 = (((x301-x302)*x303)+x304);

	if (t43 != 18446744067094031715LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x322 = UINT8_MAX;
	volatile uint8_t x323 = UINT8_MAX;
	int64_t t44 = -11045600735530LL;

	t44 = (((x321-x322)*x323)+x324);

	if (t44 != -5709918037LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x325 = 55776789LLU;
	static uint32_t x326 = 1182U;
	static uint64_t x327 = UINT64_MAX;
	volatile int32_t x328 = -275903001;
	static volatile uint64_t t45 = 3798445349636035LLU;

	t45 = (((x325-x326)*x327)+x328);

	if (t45 != 18446744073377873008LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x333 = UINT64_MAX;
	int32_t x334 = INT32_MIN;
	int32_t x335 = INT32_MIN;
	static int8_t x336 = INT8_MIN;
	static uint64_t t46 = 4150LLU;

	t46 = (((x333-x334)*x335)+x336);

	if (t46 != 13835058057429647232LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x337 = UINT64_MAX;
	uint32_t x338 = 9865U;
	uint16_t x340 = 670U;
	static uint64_t t47 = 1035304241LLU;

	t47 = (((x337-x338)*x339)+x340);

	if (t47 != 18446744073709512822LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x345 = UINT32_MAX;
	int8_t x346 = INT8_MIN;
	int8_t x347 = -22;
	volatile int32_t x348 = INT32_MAX;
	volatile uint32_t t48 = 249U;

	t48 = (((x345-x346)*x347)+x348);

	if (t48 != 2147480853U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x349 = UINT64_MAX;
	volatile int8_t x350 = -1;
	static uint32_t x351 = 1061U;
	int8_t x352 = 0;

	t49 = (((x349-x350)*x351)+x352);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x361 = -1;
	volatile int16_t x362 = INT16_MAX;
	uint32_t x363 = 7410511U;
	int32_t x364 = INT32_MIN;

	t50 = (((x361-x362)*x363)+x364);

	if (t50 != 4132995072U) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x365 = -1;
	volatile uint64_t x366 = 417026768933105LLU;
	int16_t x368 = INT16_MAX;
	volatile uint64_t t51 = 34579249196766LLU;

	t51 = (((x365-x366)*x367)+x368);

	if (t51 != 13665133164400050175LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x369 = INT64_MIN;
	static int64_t x370 = INT64_MIN;
	uint16_t x371 = 1U;
	int16_t x372 = -254;
	volatile int64_t t52 = 3608LL;

	t52 = (((x369-x370)*x371)+x372);

	if (t52 != -254LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x373 = UINT32_MAX;
	int16_t x374 = -5;
	static volatile int16_t x375 = INT16_MIN;
	int32_t x376 = 104;
	uint32_t t53 = 321757265U;

	t53 = (((x373-x374)*x375)+x376);

	if (t53 != 4294836328U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x377 = 422131LLU;
	uint32_t x378 = 1489337195U;
	uint64_t x379 = 1201000LLU;
	static int8_t x380 = -1;
	uint64_t t54 = 322030543965455405LLU;

	t54 = (((x377-x378)*x379)+x380);

	if (t54 != 18444955886717687615LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x385 = 8U;
	int8_t x386 = -1;
	uint64_t x387 = UINT64_MAX;
	static volatile uint64_t t55 = 35LLU;

	t55 = (((x385-x386)*x387)+x388);

	if (t55 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x389 = 27810U;
	static int8_t x390 = INT8_MIN;
	uint32_t x391 = UINT32_MAX;
	int64_t x392 = INT64_MIN;
	static volatile int64_t t56 = -3613376941LL;

	t56 = (((x389-x390)*x391)+x392);

	if (t56 != -9223372032559836450LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x394 = 12;
	uint8_t x395 = 0U;
	int64_t x396 = INT64_MIN;
	int64_t t57 = INT64_MIN;

	t57 = (((x393-x394)*x395)+x396);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x398 = 10306548226259232LL;
	static int16_t x400 = INT16_MIN;
	volatile int64_t t58 = -11LL;

	t58 = (((x397-x398)*x399)+x400);

	if (t58 != -195824416298931538LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x409 = -1LL;
	static int8_t x410 = INT8_MIN;
	int32_t x411 = INT32_MIN;
	int16_t x412 = -1;
	static volatile int64_t t59 = -210LL;

	t59 = (((x409-x410)*x411)+x412);

	if (t59 != -272730423297LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x413 = INT32_MIN;
	uint32_t x414 = 6468U;
	uint32_t x415 = 2570U;
	static int32_t x416 = -1;
	static uint32_t t60 = 42U;

	t60 = (((x413-x414)*x415)+x416);

	if (t60 != 4278344535U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x425 = 4;
	int16_t x427 = INT16_MIN;
	int32_t x428 = INT32_MIN;
	volatile uint64_t t61 = 36363367053545261LLU;

	t61 = (((x425-x426)*x427)+x428);

	if (t61 != 121777258496LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x441 = INT16_MIN;
	uint32_t x442 = 0U;
	int16_t x443 = INT16_MAX;
	volatile int8_t x444 = 0;
	static volatile uint32_t t62 = 285035U;

	t62 = (((x441-x442)*x443)+x444);

	if (t62 != 3221258240U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x445 = 11310733457LLU;
	uint8_t x446 = 0U;
	volatile uint64_t t63 = 842377117072LLU;

	t63 = (((x445-x446)*x447)+x448);

	if (t63 != 18446373443595632639LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x449 = INT8_MIN;
	static int8_t x450 = INT8_MIN;
	int32_t x451 = INT32_MIN;
	int16_t x452 = 1;

	t64 = (((x449-x450)*x451)+x452);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x453 = 34U;
	int8_t x454 = -1;
	int32_t x455 = -18;
	volatile uint8_t x456 = UINT8_MAX;
	int32_t t65 = -1047779962;

	t65 = (((x453-x454)*x455)+x456);

	if (t65 != -375) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x458 = INT8_MAX;
	uint32_t x459 = 12U;
	int8_t x460 = INT8_MIN;
	static uint32_t t66 = 3U;

	t66 = (((x457-x458)*x459)+x460);

	if (t66 != 4294965680U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x465 = INT64_MIN;
	int64_t x466 = INT64_MIN;
	int64_t x467 = 15LL;
	volatile uint32_t x468 = UINT32_MAX;
	static int64_t t67 = 122073LL;

	t67 = (((x465-x466)*x467)+x468);

	if (t67 != 4294967295LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x469 = -822383530844LL;
	int32_t x470 = INT32_MIN;
	int16_t x471 = INT16_MAX;
	static int16_t x472 = 386;
	volatile int64_t t68 = -288381747777708860LL;

	t68 = (((x469-x470)*x471)+x472);

	if (t68 != -26876674558470946LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x481 = -610;
	int32_t x482 = 13;
	uint16_t x483 = UINT16_MAX;
	volatile int32_t t69 = 78;

	t69 = (((x481-x482)*x483)+x484);

	if (t69 != -40828433) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x487 = 1U;
	int32_t x488 = -1;
	int64_t t70 = 79284509815246877LL;

	t70 = (((x485-x486)*x487)+x488);

	if (t70 != -52LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x489 = 89U;
	static uint32_t x490 = 3U;
	int64_t x491 = 472202432489LL;
	uint64_t x492 = UINT64_MAX;
	volatile uint64_t t71 = 4861109304793285043LLU;

	t71 = (((x489-x490)*x491)+x492);

	if (t71 != 40609409194053LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x493 = UINT64_MAX;
	int16_t x496 = -1;
	static volatile uint64_t t72 = 2LLU;

	t72 = (((x493-x494)*x495)+x496);

	if (t72 != 18446744073709549624LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x501 = INT8_MAX;
	volatile int16_t x502 = INT16_MIN;
	uint16_t x503 = 28U;
	static volatile uint8_t x504 = 7U;
	volatile int32_t t73 = -62;

	t73 = (((x501-x502)*x503)+x504);

	if (t73 != 921067) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x529 = UINT16_MAX;
	uint16_t x530 = 1675U;
	int16_t x532 = INT16_MAX;

	t74 = (((x529-x530)*x531)+x532);

	if (t74 != 224347) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x533 = 1U;
	int32_t x535 = INT32_MAX;
	uint32_t x536 = 0U;
	int64_t t75 = -1837LL;

	t75 = (((x533-x534)*x535)+x536);

	if (t75 != 4294967294LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x539 = 225U;
	volatile uint64_t t76 = 5900553LLU;

	t76 = (((x537-x538)*x539)+x540);

	if (t76 != 2147436397LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x541 = -1;
	int8_t x542 = 3;
	volatile uint32_t x544 = 6697U;
	static uint64_t t77 = 14LLU;

	t77 = (((x541-x542)*x543)+x544);

	if (t77 != 18446626773863863437LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x550 = -39;
	volatile int16_t x552 = INT16_MAX;
	volatile int32_t t78 = 3;

	t78 = (((x549-x550)*x551)+x552);

	if (t78 != 207719) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x553 = -1;
	static volatile int8_t x554 = 53;
	volatile uint64_t x555 = UINT64_MAX;
	volatile uint64_t t79 = 1002857LLU;

	t79 = (((x553-x554)*x555)+x556);

	if (t79 != 2147483701LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x558 = -1;
	int8_t x559 = -1;
	volatile int64_t x560 = INT64_MAX;

	t80 = (((x557-x558)*x559)+x560);

	if (t80 != 9223372036186314019LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x581 = 1;
	static volatile int8_t x582 = 0;
	int8_t x583 = INT8_MIN;
	int32_t x584 = -1;
	static volatile int32_t t81 = 10;

	t81 = (((x581-x582)*x583)+x584);

	if (t81 != -129) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x586 = 67;
	uint8_t x588 = 97U;
	uint64_t t82 = 54389332256610674LLU;

	t82 = (((x585-x586)*x587)+x588);

	if (t82 != 18446744073696778898LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x589 = INT16_MAX;
	int16_t x591 = INT16_MAX;
	int32_t t83 = 28036808;

	t83 = (((x589-x590)*x591)+x592);

	if (t83 != 1074135028) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x593 = UINT64_MAX;
	volatile int8_t x594 = 18;
	int16_t x595 = INT16_MIN;
	volatile uint16_t x596 = 2U;
	volatile uint64_t t84 = 7765264394452108578LLU;

	t84 = (((x593-x594)*x595)+x596);

	if (t84 != 622594LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x598 = 255194995LL;
	volatile uint32_t x599 = 3606U;
	uint8_t x600 = UINT8_MAX;
	volatile int64_t t85 = -10462610281LL;

	t85 = (((x597-x598)*x599)+x600);

	if (t85 != -920233112049LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x609 = -1LL;
	static int32_t x610 = INT32_MIN;
	int8_t x611 = INT8_MIN;
	static volatile int64_t t86 = -68575710851LL;

	t86 = (((x609-x610)*x611)+x612);

	if (t86 != -277025390464LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x613 = -1;
	volatile int8_t x614 = INT8_MIN;
	uint32_t x615 = UINT32_MAX;
	uint32_t x616 = 765U;
	static uint32_t t87 = 28955U;

	t87 = (((x613-x614)*x615)+x616);

	if (t87 != 638U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x617 = INT32_MIN;
	static uint64_t x618 = 393203LLU;
	uint8_t x619 = UINT8_MAX;
	volatile int32_t x620 = INT32_MAX;

	t88 = (((x617-x618)*x619)+x620);

	if (t88 != 18446743528148438258LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x621 = INT8_MAX;
	static uint8_t x622 = 9U;
	int16_t x624 = -1;
	int64_t t89 = 199756358199LL;

	t89 = (((x621-x622)*x623)+x624);

	if (t89 != -6297661LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x625 = 1630U;
	volatile uint8_t x626 = UINT8_MAX;
	int16_t x627 = INT16_MIN;
	int32_t t90 = 198882678;

	t90 = (((x625-x626)*x627)+x628);

	if (t90 != -45056026) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x630 = INT16_MIN;
	uint8_t x632 = UINT8_MAX;
	volatile int32_t t91 = -1177513;

	t91 = (((x629-x630)*x631)+x632);

	if (t91 != 6567506) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x634 = -5370LL;
	uint16_t x636 = 3426U;
	static volatile uint64_t t92 = 2637952019049LLU;

	t92 = (((x633-x634)*x635)+x636);

	if (t92 != 18446744073709549693LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x641 = 0U;
	int32_t x642 = -9484977;
	static uint64_t x643 = UINT64_MAX;
	static uint64_t t93 = 344378123845LLU;

	t93 = (((x641-x642)*x643)+x644);

	if (t93 != 18446744073700066638LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x649 = 0;
	int64_t x651 = -68542156901LL;
	volatile int64_t t94 = 0LL;

	t94 = (((x649-x650)*x651)+x652);

	if (t94 != -70689640549LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x657 = UINT64_MAX;
	int32_t x658 = INT32_MIN;
	uint64_t x659 = UINT64_MAX;
	uint64_t t95 = 2957LLU;

	t95 = (((x657-x658)*x659)+x660);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t t96 = 237LLU;

	t96 = (((x665-x666)*x667)+x668);

	if (t96 != 256140LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x670 = UINT64_MAX;
	uint8_t x671 = 1U;
	volatile int8_t x672 = INT8_MIN;

	t97 = (((x669-x670)*x671)+x672);

	if (t97 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x673 = 3211U;
	uint8_t x674 = 5U;
	uint64_t x675 = 323849251115158LLU;

	t98 = (((x673-x674)*x675)+x676);

	if (t98 != 10261632735929972356LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x677 = -1;
	uint16_t x678 = 36U;
	uint32_t x679 = 357227717U;
	int32_t x680 = -1740;
	uint32_t t99 = 10004U;

	t99 = (((x677-x678)*x679)+x680);

	if (t99 != 3962441915U) { NG(); } else { ; }
	
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


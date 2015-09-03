#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x4 = INT16_MAX;
volatile int64_t t2 = INT64_MIN;
static uint8_t x17 = 5U;
int32_t x20 = -320;
int8_t x22 = INT8_MIN;
volatile uint32_t x23 = 393576U;
static int32_t x27 = INT32_MIN;
static uint16_t x31 = 5334U;
static volatile int16_t x40 = INT16_MAX;
volatile int32_t t9 = 11431033;
uint8_t x41 = 40U;
int16_t x46 = 20;
static int64_t x47 = INT64_MIN;
int32_t t11 = -905138715;
volatile int64_t t14 = 1538909569144006226LL;
int32_t x69 = INT32_MIN;
int32_t t15 = 103845;
int8_t x75 = INT8_MIN;
uint8_t x77 = 114U;
int32_t x78 = -1;
static int32_t x82 = INT32_MIN;
uint64_t t18 = 11836LLU;
uint64_t x88 = 636794451218LLU;
static uint64_t t19 = 3405813194146693LLU;
volatile uint32_t x94 = UINT32_MAX;
static int32_t x97 = -54673;
uint16_t x100 = UINT16_MAX;
volatile int16_t x110 = INT16_MIN;
int32_t x112 = -1;
volatile uint64_t x115 = 273467114874LLU;
uint32_t x118 = 3693U;
uint32_t x121 = 59494U;
static int32_t x134 = 112387;
volatile int64_t t31 = 0LL;
static uint8_t x137 = UINT8_MAX;
int64_t t33 = -1LL;
static int32_t x148 = -140636160;
volatile int32_t t35 = 8373;
volatile int64_t x165 = INT64_MIN;
static uint16_t x174 = 134U;
int64_t t40 = 57322LL;
int8_t x177 = INT8_MAX;
uint8_t x178 = 0U;
static uint8_t x179 = 0U;
uint32_t x181 = 1933443894U;
int8_t x184 = INT8_MIN;
uint16_t x185 = 5U;
static int64_t x198 = -975519514563LL;
int16_t x200 = INT16_MIN;
uint64_t x203 = 3809979276670233LLU;
int32_t t46 = -24;
uint64_t x215 = 2800866681LLU;
volatile int64_t x216 = 0LL;
uint16_t x217 = 44U;
int8_t x223 = -30;
int32_t x226 = INT32_MIN;
int64_t x232 = INT64_MIN;
static int64_t x235 = INT64_MIN;
uint32_t t54 = UINT32_MAX;
static uint8_t x246 = 2U;
uint16_t x254 = 127U;
static volatile int64_t x256 = INT64_MIN;
uint16_t x257 = 1U;
static int32_t x266 = INT32_MIN;
static int64_t x269 = -33321591364111LL;
int64_t t61 = 121740798877LL;
int8_t x278 = -1;
int32_t x279 = -1;
static int64_t x284 = 4528591596023434231LL;
uint16_t x286 = 373U;
int64_t x294 = -1LL;
uint8_t x295 = 3U;
uint32_t x296 = UINT32_MAX;
int64_t x302 = INT64_MIN;
static int64_t x303 = INT64_MIN;
int64_t t72 = 957144341094LL;
uint32_t x320 = 913276U;
int32_t x326 = INT32_MIN;
static int64_t x328 = INT64_MIN;
volatile int32_t x329 = -1;
uint64_t x331 = 34LLU;
int16_t x334 = 0;
int32_t x335 = 0;
int8_t x338 = INT8_MAX;
static volatile int32_t x342 = -64082415;
int32_t x344 = 821948367;
volatile uint32_t t79 = 965U;
volatile int64_t x350 = -3134603LL;
int64_t x356 = 3145474080706175LL;
int16_t x358 = -1;
volatile int8_t x360 = INT8_MIN;
int64_t x372 = -187611492344328LL;
int32_t x373 = INT32_MAX;
uint16_t x375 = UINT16_MAX;
int8_t x380 = INT8_MIN;
volatile int32_t t89 = -484490469;
int32_t x399 = INT32_MIN;
static uint32_t x403 = 4U;
volatile int32_t x410 = INT32_MIN;
int32_t x412 = -1025;
int32_t t95 = 7353;
int32_t x422 = -1;
static int64_t t98 = 17057117071171394LL;
int64_t x434 = -1LL;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int64_t x2 = 54912877182257LL;
	volatile uint32_t x3 = UINT32_MAX;
	volatile int32_t t0 = -1;

	t0 = (x1+((x2<=x3)*x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = UINT16_MAX;
	int16_t x6 = 1190;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = 28559LLU;
	volatile uint64_t t1 = 7441992627665842LLU;

	t1 = (x5+((x6<=x7)*x8));

	if (t1 != 65535LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int32_t x10 = -1;
	int64_t x11 = -5304LL;
	int32_t x12 = INT32_MIN;

	t2 = (x9+((x10<=x11)*x12));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MIN;
	volatile int8_t x16 = 43;
	int32_t t3 = 73118;

	t3 = (x13+((x14<=x15)*x16));

	if (t3 != -32725) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = UINT8_MAX;
	int8_t x19 = 29;
	volatile int32_t t4 = 15;

	t4 = (x17+((x18<=x19)*x20));

	if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int64_t x24 = INT64_MIN;
	volatile int64_t t5 = -11310998LL;

	t5 = (x21+((x22<=x23)*x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 30829U;
	uint32_t x26 = UINT32_MAX;
	uint16_t x28 = 25U;
	volatile int32_t t6 = -387237617;

	t6 = (x25+((x26<=x27)*x28));

	if (t6 != 30829) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 73U;
	int8_t x30 = INT8_MIN;
	uint32_t x32 = UINT32_MAX;
	static uint32_t t7 = 3419U;

	t7 = (x29+((x30<=x31)*x32));

	if (t7 != 72U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	static uint8_t x34 = 4U;
	volatile int64_t x35 = -1LL;
	int32_t x36 = -26759;
	volatile int32_t t8 = 7493;

	t8 = (x33+((x34<=x35)*x36));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 6;
	int8_t x38 = INT8_MIN;
	static int8_t x39 = INT8_MAX;

	t9 = (x37+((x38<=x39)*x40));

	if (t9 != 32773) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = -1;
	int16_t x43 = INT16_MIN;
	uint64_t x44 = 4067673511941883949LLU;
	uint64_t t10 = 15126931LLU;

	t10 = (x41+((x42<=x43)*x44));

	if (t10 != 40LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = INT8_MIN;
	int32_t x48 = -572;

	t11 = (x45+((x46<=x47)*x48));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = INT8_MIN;
	volatile int8_t x55 = INT8_MIN;
	uint32_t x56 = 8246009U;
	volatile int64_t t12 = 854LL;

	t12 = (x53+((x54<=x55)*x56));

	if (t12 != -9223372036846529799LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	uint64_t x62 = UINT64_MAX;
	static int64_t x63 = -7936354LL;
	int16_t x64 = -2552;
	volatile int64_t t13 = INT64_MIN;

	t13 = (x61+((x62<=x63)*x64));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = -1LL;
	uint16_t x66 = 522U;
	uint64_t x67 = 4LLU;
	static int8_t x68 = INT8_MIN;

	t14 = (x65+((x66<=x67)*x68));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x70 = 1U;
	uint16_t x71 = 21U;
	uint16_t x72 = UINT16_MAX;

	t15 = (x69+((x70<=x71)*x72));

	if (t15 != -2147418113) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = -13;
	int32_t x74 = INT32_MIN;
	volatile uint16_t x76 = 34U;
	volatile int32_t t16 = 372977982;

	t16 = (x73+((x74<=x75)*x76));

	if (t16 != 21) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x79 = INT32_MIN;
	int16_t x80 = 1;
	int32_t t17 = 55;

	t17 = (x77+((x78<=x79)*x80));

	if (t17 != 114) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 3LLU;
	int16_t x83 = -1;
	static volatile uint64_t x84 = 672660810LLU;

	t18 = (x81+((x82<=x83)*x84));

	if (t18 != 672660813LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = 1;
	int8_t x86 = -1;
	int64_t x87 = 734441LL;

	t19 = (x85+((x86<=x87)*x88));

	if (t19 != 636794451219LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x89 = -1;
	int8_t x90 = 1;
	static int32_t x91 = 892770024;
	int16_t x92 = INT16_MIN;
	volatile int32_t t20 = 9;

	t20 = (x89+((x90<=x91)*x92));

	if (t20 != -32769) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	static int32_t x95 = INT32_MAX;
	int16_t x96 = -1;
	int32_t t21 = 3790074;

	t21 = (x93+((x94<=x95)*x96));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x98 = -1;
	static int32_t x99 = 125990153;
	int32_t t22 = -1;

	t22 = (x97+((x98<=x99)*x100));

	if (t22 != 10862) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x101 = 29U;
	volatile int16_t x102 = 3887;
	int64_t x103 = INT64_MAX;
	static int64_t x104 = INT64_MIN;
	volatile int64_t t23 = -32421461922242425LL;

	t23 = (x101+((x102<=x103)*x104));

	if (t23 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 28156849198LLU;
	int8_t x106 = 11;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = 13;
	uint64_t t24 = 149606182282385LLU;

	t24 = (x105+((x106<=x107)*x108));

	if (t24 != 28156849211LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MAX;
	int16_t x111 = 13;
	int32_t t25 = 57180311;

	t25 = (x109+((x110<=x111)*x112));

	if (t25 != 126) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 1822U;
	uint64_t x114 = UINT64_MAX;
	int16_t x116 = -55;
	int32_t t26 = 1;

	t26 = (x113+((x114<=x115)*x116));

	if (t26 != 1822) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x117 = 97U;
	volatile int32_t x119 = 115970009;
	uint64_t x120 = 3737384233LLU;
	volatile uint64_t t27 = 640151552241916LLU;

	t27 = (x117+((x118<=x119)*x120));

	if (t27 != 3737384330LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x122 = 719241736;
	int32_t x123 = INT32_MAX;
	int32_t x124 = INT32_MAX;
	static uint32_t t28 = 329U;

	t28 = (x121+((x122<=x123)*x124));

	if (t28 != 2147543141U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = UINT16_MAX;
	int64_t x126 = INT64_MAX;
	int8_t x127 = -1;
	static int8_t x128 = INT8_MAX;
	int32_t t29 = -198520223;

	t29 = (x125+((x126<=x127)*x128));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x129 = -16;
	volatile int64_t x130 = -1LL;
	static volatile int32_t x131 = INT32_MAX;
	int64_t x132 = -681791LL;
	volatile int64_t t30 = -1242464908LL;

	t30 = (x129+((x130<=x131)*x132));

	if (t30 != -681807LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x133 = 486201282946LL;
	int64_t x135 = -1LL;
	uint32_t x136 = UINT32_MAX;

	t31 = (x133+((x134<=x135)*x136));

	if (t31 != 486201282946LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x138 = INT64_MIN;
	volatile int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MIN;
	volatile int32_t t32 = 1;

	t32 = (x137+((x138<=x139)*x140));

	if (t32 != -32513) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = 108;
	static int32_t x142 = INT32_MAX;
	volatile uint32_t x143 = 17U;
	static int64_t x144 = 647807976752LL;

	t33 = (x141+((x142<=x143)*x144));

	if (t33 != 108LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -8364295;
	uint32_t x146 = 1045586692U;
	uint64_t x147 = 30499931238776LLU;
	int32_t t34 = -508013366;

	t34 = (x145+((x146<=x147)*x148));

	if (t34 != -149000455) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x149 = INT8_MIN;
	static volatile int64_t x150 = -9337410618LL;
	volatile uint8_t x151 = 121U;
	int16_t x152 = -1;

	t35 = (x149+((x150<=x151)*x152));

	if (t35 != -129) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = INT32_MAX;
	int32_t x158 = INT32_MAX;
	volatile int16_t x159 = -3;
	int16_t x160 = -8;
	int32_t t36 = INT32_MAX;

	t36 = (x157+((x158<=x159)*x160));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x161 = 5469U;
	int8_t x162 = INT8_MAX;
	static int64_t x163 = INT64_MAX;
	int8_t x164 = INT8_MAX;
	int32_t t37 = 2;

	t37 = (x161+((x162<=x163)*x164));

	if (t37 != 5596) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MIN;
	uint32_t x168 = 5U;
	volatile int64_t t38 = INT64_MIN;

	t38 = (x165+((x166<=x167)*x168));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x169 = -38;
	static int32_t x170 = INT32_MIN;
	uint64_t x171 = 325735431593139870LLU;
	volatile int8_t x172 = INT8_MIN;
	int32_t t39 = -76830;

	t39 = (x169+((x170<=x171)*x172));

	if (t39 != -38) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = -93313LL;
	int32_t x175 = -4474;
	volatile int64_t x176 = -599989234299368LL;

	t40 = (x173+((x174<=x175)*x176));

	if (t40 != -93313LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x180 = 8U;
	int32_t t41 = 56696;

	t41 = (x177+((x178<=x179)*x180));

	if (t41 != 135) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x182 = INT32_MAX;
	int16_t x183 = INT16_MIN;
	static volatile uint32_t t42 = 22518837U;

	t42 = (x181+((x182<=x183)*x184));

	if (t42 != 1933443894U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x186 = 6450LLU;
	int32_t x187 = 1051671;
	int8_t x188 = -1;
	volatile int32_t t43 = 49479498;

	t43 = (x185+((x186<=x187)*x188));

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = -1;
	static int64_t x194 = -2835193577633LL;
	int16_t x195 = -4;
	int32_t x196 = -76;
	volatile int32_t t44 = -2;

	t44 = (x193+((x194<=x195)*x196));

	if (t44 != -77) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x197 = 39505527062865LLU;
	uint32_t x199 = 16450483U;
	uint64_t t45 = 6LLU;

	t45 = (x197+((x198<=x199)*x200));

	if (t45 != 39505527030097LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x201 = 958U;
	volatile uint64_t x202 = 315LLU;
	static volatile int16_t x204 = INT16_MIN;

	t46 = (x201+((x202<=x203)*x204));

	if (t46 != -31810) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x205 = 5U;
	volatile uint8_t x206 = 5U;
	int64_t x207 = 1733LL;
	uint64_t x208 = 190435945307LLU;
	volatile uint64_t t47 = 6897757897LLU;

	t47 = (x205+((x206<=x207)*x208));

	if (t47 != 190435945312LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x213 = UINT32_MAX;
	volatile int8_t x214 = INT8_MIN;
	volatile int64_t t48 = -383649LL;

	t48 = (x213+((x214<=x215)*x216));

	if (t48 != 4294967295LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x218 = 20353680648LLU;
	int32_t x219 = INT32_MIN;
	int8_t x220 = 5;
	int32_t t49 = 1429;

	t49 = (x217+((x218<=x219)*x220));

	if (t49 != 49) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x221 = INT16_MAX;
	int64_t x222 = INT64_MAX;
	static int8_t x224 = 1;
	static int32_t t50 = 12823510;

	t50 = (x221+((x222<=x223)*x224));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x225 = 18U;
	int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MAX;
	volatile int32_t t51 = -2368;

	t51 = (x225+((x226<=x227)*x228));

	if (t51 != 32785) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x229 = UINT16_MAX;
	int16_t x230 = INT16_MIN;
	static uint8_t x231 = UINT8_MAX;
	static int64_t t52 = 305135130432LL;

	t52 = (x229+((x230<=x231)*x232));

	if (t52 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = 0U;
	static volatile uint8_t x234 = 1U;
	int8_t x236 = -1;
	volatile int32_t t53 = -221702;

	t53 = (x233+((x234<=x235)*x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x237 = UINT32_MAX;
	static uint8_t x238 = 20U;
	int32_t x239 = INT32_MIN;
	static int8_t x240 = INT8_MAX;

	t54 = (x237+((x238<=x239)*x240));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = 0LLU;
	static int16_t x242 = 37;
	int32_t x243 = INT32_MIN;
	uint8_t x244 = 0U;
	volatile uint64_t t55 = 83LLU;

	t55 = (x241+((x242<=x243)*x244));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MIN;
	volatile uint16_t x247 = 4U;
	volatile uint32_t x248 = 0U;
	volatile uint32_t t56 = 1584145U;

	t56 = (x245+((x246<=x247)*x248));

	if (t56 != 4294934528U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x253 = UINT32_MAX;
	uint16_t x255 = 32632U;
	volatile int64_t t57 = 14662676717LL;

	t57 = (x253+((x254<=x255)*x256));

	if (t57 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x258 = INT8_MAX;
	uint64_t x259 = 7LLU;
	static uint16_t x260 = 28395U;
	volatile int32_t t58 = 61;

	t58 = (x257+((x258<=x259)*x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = -1LL;
	static volatile int16_t x262 = INT16_MAX;
	int16_t x263 = -1;
	volatile int64_t x264 = -106LL;
	static volatile int64_t t59 = 1LL;

	t59 = (x261+((x262<=x263)*x264));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x265 = 200U;
	uint16_t x267 = 0U;
	int64_t x268 = INT64_MIN;
	volatile int64_t t60 = 111571LL;

	t60 = (x265+((x266<=x267)*x268));

	if (t60 != -9223372036854775608LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x270 = 38LLU;
	volatile int64_t x271 = -200103193345370LL;
	int16_t x272 = -1;

	t61 = (x269+((x270<=x271)*x272));

	if (t61 != -33321591364112LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x273 = UINT32_MAX;
	volatile int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	int64_t x276 = -1LL;
	static volatile int64_t t62 = -50599577938131106LL;

	t62 = (x273+((x274<=x275)*x276));

	if (t62 != 4294967294LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x277 = -1;
	int16_t x280 = INT16_MIN;
	volatile int32_t t63 = -104364031;

	t63 = (x277+((x278<=x279)*x280));

	if (t63 != -32769) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x281 = -1;
	uint16_t x282 = 2490U;
	int8_t x283 = INT8_MIN;
	volatile int64_t t64 = 33LL;

	t64 = (x281+((x282<=x283)*x284));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x285 = 5549U;
	uint16_t x287 = 32209U;
	volatile uint16_t x288 = 678U;
	uint32_t t65 = 3621364U;

	t65 = (x285+((x286<=x287)*x288));

	if (t65 != 6227U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x289 = 55U;
	static volatile int16_t x290 = INT16_MAX;
	static uint8_t x291 = UINT8_MAX;
	uint32_t x292 = 3926963U;
	volatile uint32_t t66 = 3U;

	t66 = (x289+((x290<=x291)*x292));

	if (t66 != 55U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x293 = -1;
	uint32_t t67 = 0U;

	t67 = (x293+((x294<=x295)*x296));

	if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x297 = INT8_MIN;
	static uint32_t x298 = 1739U;
	int16_t x299 = INT16_MIN;
	static uint8_t x300 = UINT8_MAX;
	volatile int32_t t68 = -39403;

	t68 = (x297+((x298<=x299)*x300));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x301 = 0U;
	volatile int32_t x304 = INT32_MIN;
	static int32_t t69 = INT32_MIN;

	t69 = (x301+((x302<=x303)*x304));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x305 = -1;
	uint32_t x306 = 28027U;
	uint64_t x307 = 547127804012LLU;
	uint8_t x308 = 50U;
	int32_t t70 = -774813927;

	t70 = (x305+((x306<=x307)*x308));

	if (t70 != 49) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x309 = 1086119U;
	int16_t x310 = -1;
	uint8_t x311 = UINT8_MAX;
	int32_t x312 = -1;
	volatile uint32_t t71 = 31762819U;

	t71 = (x309+((x310<=x311)*x312));

	if (t71 != 1086118U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x313 = 222806087730149058LL;
	volatile int32_t x314 = -1;
	int32_t x315 = INT32_MAX;
	volatile int16_t x316 = -1;

	t72 = (x313+((x314<=x315)*x316));

	if (t72 != 222806087730149057LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = -1;
	static int64_t x318 = 2LL;
	uint8_t x319 = 1U;
	uint32_t t73 = UINT32_MAX;

	t73 = (x317+((x318<=x319)*x320));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x321 = -8920547739064LL;
	uint8_t x322 = 34U;
	int64_t x323 = INT64_MIN;
	static int64_t x324 = -23LL;
	volatile int64_t t74 = 456033995717LL;

	t74 = (x321+((x322<=x323)*x324));

	if (t74 != -8920547739064LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = -2;
	static uint32_t x327 = 15579U;
	static volatile int64_t t75 = 76891072196LL;

	t75 = (x325+((x326<=x327)*x328));

	if (t75 != -2LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x330 = UINT32_MAX;
	int8_t x332 = 2;
	int32_t t76 = -84563077;

	t76 = (x329+((x330<=x331)*x332));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x333 = 473370;
	static int64_t x336 = -3299280571LL;
	int64_t t77 = -25798404250401LL;

	t77 = (x333+((x334<=x335)*x336));

	if (t77 != -3298807201LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x337 = INT64_MIN;
	uint8_t x339 = UINT8_MAX;
	volatile uint16_t x340 = 0U;
	volatile int64_t t78 = INT64_MIN;

	t78 = (x337+((x338<=x339)*x340));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x341 = 825865U;
	volatile int16_t x343 = INT16_MAX;

	t79 = (x341+((x342<=x343)*x344));

	if (t79 != 822774232U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x345 = -1;
	int8_t x346 = INT8_MIN;
	uint16_t x347 = UINT16_MAX;
	uint8_t x348 = 40U;
	volatile int32_t t80 = -11293;

	t80 = (x345+((x346<=x347)*x348));

	if (t80 != 39) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x349 = 44;
	static volatile int64_t x351 = INT64_MAX;
	uint32_t x352 = 384U;
	uint32_t t81 = 12U;

	t81 = (x349+((x350<=x351)*x352));

	if (t81 != 428U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x353 = UINT16_MAX;
	uint32_t x354 = 400872234U;
	static int32_t x355 = -1;
	int64_t t82 = 444008028470847902LL;

	t82 = (x353+((x354<=x355)*x356));

	if (t82 != 3145474080771710LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = INT16_MIN;
	uint64_t x359 = 11416999721810LLU;
	int32_t t83 = -1;

	t83 = (x357+((x358<=x359)*x360));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x361 = UINT8_MAX;
	volatile uint8_t x362 = 6U;
	static uint64_t x363 = 14LLU;
	volatile uint32_t x364 = 1U;
	static uint32_t t84 = 11U;

	t84 = (x361+((x362<=x363)*x364));

	if (t84 != 256U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x365 = -1;
	int32_t x366 = INT32_MAX;
	uint8_t x367 = 48U;
	uint32_t x368 = UINT32_MAX;
	uint32_t t85 = UINT32_MAX;

	t85 = (x365+((x366<=x367)*x368));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x369 = 0U;
	static int64_t x370 = INT64_MIN;
	uint16_t x371 = 0U;
	int64_t t86 = -85LL;

	t86 = (x369+((x370<=x371)*x372));

	if (t86 != -187611492344328LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x374 = INT32_MIN;
	int32_t x376 = -12325628;
	volatile int32_t t87 = 991;

	t87 = (x373+((x374<=x375)*x376));

	if (t87 != 2135158019) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x377 = INT64_MAX;
	int16_t x378 = INT16_MAX;
	volatile uint64_t x379 = 1429722242445515LLU;
	volatile int64_t t88 = -2099LL;

	t88 = (x377+((x378<=x379)*x380));

	if (t88 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x381 = UINT8_MAX;
	volatile int16_t x382 = -1;
	uint64_t x383 = UINT64_MAX;
	static int16_t x384 = -1294;

	t89 = (x381+((x382<=x383)*x384));

	if (t89 != -1039) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x385 = 345U;
	volatile uint64_t x386 = 2975687859132559LLU;
	uint16_t x387 = UINT16_MAX;
	uint8_t x388 = 76U;
	static int32_t t90 = 3836552;

	t90 = (x385+((x386<=x387)*x388));

	if (t90 != 345) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = 1448;
	uint64_t x394 = 27630339693642521LLU;
	uint32_t x395 = 60957385U;
	volatile uint8_t x396 = UINT8_MAX;
	volatile int32_t t91 = 102;

	t91 = (x393+((x394<=x395)*x396));

	if (t91 != 1448) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x397 = -3746;
	int32_t x398 = -7;
	static int16_t x400 = INT16_MIN;
	int32_t t92 = 7223526;

	t92 = (x397+((x398<=x399)*x400));

	if (t92 != -3746) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = INT8_MIN;
	uint8_t x402 = 0U;
	static int16_t x404 = -10987;
	int32_t t93 = -24724;

	t93 = (x401+((x402<=x403)*x404));

	if (t93 != -11115) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x405 = 1U;
	uint8_t x406 = UINT8_MAX;
	static volatile int16_t x407 = -1;
	int32_t x408 = 1;
	static volatile int32_t t94 = -15140;

	t94 = (x405+((x406<=x407)*x408));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x409 = -1;
	static int32_t x411 = INT32_MAX;

	t95 = (x409+((x410<=x411)*x412));

	if (t95 != -1026) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x413 = 17919U;
	int8_t x414 = -1;
	int64_t x415 = 1499356LL;
	int8_t x416 = 1;
	int32_t t96 = 143;

	t96 = (x413+((x414<=x415)*x416));

	if (t96 != 17920) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = INT64_MIN;
	volatile int32_t x423 = INT32_MIN;
	uint16_t x424 = UINT16_MAX;
	static volatile int64_t t97 = INT64_MIN;

	t97 = (x421+((x422<=x423)*x424));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x429 = -1LL;
	uint8_t x430 = UINT8_MAX;
	int16_t x431 = INT16_MAX;
	volatile int32_t x432 = -1;

	t98 = (x429+((x430<=x431)*x432));

	if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x433 = -1;
	static int8_t x435 = INT8_MAX;
	int32_t x436 = -27;
	static int32_t t99 = 114708;

	t99 = (x433+((x434<=x435)*x436));

	if (t99 != -28) { NG(); } else { ; }
	
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


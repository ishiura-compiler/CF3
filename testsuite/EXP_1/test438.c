#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = -1LL;
static int32_t x4 = -1;
uint16_t x22 = UINT16_MAX;
volatile int8_t x23 = -37;
volatile int64_t x26 = -195858568LL;
volatile uint64_t x38 = UINT64_MAX;
static volatile uint16_t x40 = UINT16_MAX;
volatile int32_t t6 = -14072;
static volatile uint8_t x55 = UINT8_MAX;
static int16_t x56 = 8;
int16_t x59 = -123;
int16_t x65 = INT16_MIN;
static volatile int32_t t10 = 274153052;
int64_t x77 = -1LL;
static volatile int32_t x80 = INT32_MIN;
int64_t x84 = INT64_MIN;
volatile int32_t t13 = -1381817;
volatile int64_t x85 = -383220LL;
uint16_t x88 = 1166U;
static volatile int32_t t14 = 0;
uint64_t x98 = UINT64_MAX;
volatile int16_t x101 = INT16_MIN;
int16_t x105 = INT16_MAX;
uint64_t x113 = 15950499LLU;
uint8_t x118 = 8U;
int8_t x119 = INT8_MAX;
static volatile uint32_t x123 = 43172U;
uint64_t x126 = 137008413662150665LLU;
int16_t x134 = -1;
int8_t x136 = 3;
uint64_t x149 = 71262457609165895LLU;
int8_t x162 = -1;
int8_t x165 = INT8_MAX;
int32_t t30 = -32258;
uint16_t x183 = 157U;
int8_t x189 = 8;
int8_t x191 = -1;
uint16_t x196 = 54U;
int16_t x201 = -1;
volatile uint32_t x205 = UINT32_MAX;
int64_t x208 = INT64_MAX;
uint64_t x212 = 7316406121591203LLU;
volatile int64_t x216 = -106899696657LL;
uint32_t x217 = UINT32_MAX;
int16_t x229 = INT16_MAX;
volatile int32_t t40 = -8;
volatile uint64_t x243 = 7LLU;
static int32_t t41 = 62421;
uint64_t x245 = UINT64_MAX;
int16_t x250 = 20;
int32_t x251 = INT32_MAX;
uint16_t x252 = UINT16_MAX;
int32_t t44 = -119952;
int8_t x278 = -1;
int8_t x292 = -1;
int8_t x299 = INT8_MIN;
int32_t x307 = INT32_MAX;
int32_t t53 = -20049944;
volatile uint16_t x321 = 1215U;
int32_t x323 = 6457913;
volatile int8_t x324 = 0;
int32_t x329 = 5;
static int16_t x345 = INT16_MIN;
int32_t t60 = -4585042;
uint8_t x361 = 6U;
volatile int32_t t62 = 17;
volatile int8_t x366 = INT8_MIN;
int16_t x369 = 322;
int16_t x371 = INT16_MIN;
volatile int16_t x373 = INT16_MIN;
volatile uint8_t x388 = 28U;
uint64_t x396 = 1318315262785LLU;
uint16_t x403 = UINT16_MAX;
volatile uint8_t x406 = 3U;
volatile int32_t t72 = -20064118;
int8_t x415 = INT8_MIN;
int8_t x424 = INT8_MIN;
int32_t t76 = -145;
static int32_t x444 = 6;
int32_t t80 = -1;
uint8_t x470 = UINT8_MAX;
int8_t x488 = -1;
int32_t x489 = INT32_MAX;
int32_t x493 = -81277316;
int32_t x495 = -1;
uint32_t x505 = 7U;
int32_t x506 = INT32_MIN;
volatile int32_t t91 = -9307926;
static int16_t x526 = -1;
int8_t x528 = INT8_MAX;
uint32_t x530 = UINT32_MAX;
int32_t t95 = 0;
static volatile int32_t x539 = INT32_MIN;
volatile int64_t x540 = INT64_MIN;
int8_t x545 = INT8_MIN;
int32_t t98 = 68;
int32_t x551 = INT32_MIN;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int32_t x2 = INT32_MIN;
	int32_t t0 = 22199476;

	t0 = (((x1*x2)==x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 1872769LLU;
	static int8_t x10 = -1;
	uint16_t x11 = UINT16_MAX;
	int16_t x12 = INT16_MIN;
	volatile int32_t t1 = 1587486;

	t1 = (((x9*x10)==x11)<x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x21 = 0;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t2 = 6323440;

	t2 = (((x21*x22)==x23)<x24);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = -1LL;
	volatile uint64_t x27 = 16646LLU;
	static uint32_t x28 = 13U;
	volatile int32_t t3 = -4769;

	t3 = (((x25*x26)==x27)<x28);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = INT16_MIN;
	uint64_t x30 = UINT64_MAX;
	static volatile int8_t x31 = INT8_MAX;
	uint16_t x32 = 170U;
	volatile int32_t t4 = 9;

	t4 = (((x29*x30)==x31)<x32);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = -1;
	int32_t x39 = INT32_MIN;
	int32_t t5 = 11;

	t5 = (((x37*x38)==x39)<x40);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x49 = 10353691U;
	uint16_t x50 = 1U;
	int64_t x51 = INT64_MAX;
	volatile uint64_t x52 = 7965622152680LLU;

	t6 = (((x49*x50)==x51)<x52);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x53 = 2027899498LLU;
	static uint16_t x54 = UINT16_MAX;
	int32_t t7 = 15102009;

	t7 = (((x53*x54)==x55)<x56);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x57 = 38258749U;
	volatile int16_t x58 = INT16_MIN;
	uint16_t x60 = UINT16_MAX;
	int32_t t8 = -5143054;

	t8 = (((x57*x58)==x59)<x60);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x66 = -1;
	int64_t x67 = -398LL;
	static volatile int64_t x68 = INT64_MAX;
	static volatile int32_t t9 = -34;

	t9 = (((x65*x66)==x67)<x68);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x69 = 0U;
	int16_t x70 = INT16_MIN;
	uint16_t x71 = 0U;
	int8_t x72 = INT8_MIN;

	t10 = (((x69*x70)==x71)<x72);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = INT16_MAX;
	int8_t x74 = INT8_MAX;
	int32_t x75 = -7;
	uint64_t x76 = 49001304610196LLU;
	static volatile int32_t t11 = 187712737;

	t11 = (((x73*x74)==x75)<x76);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x78 = -267;
	uint16_t x79 = UINT16_MAX;
	volatile int32_t t12 = 8;

	t12 = (((x77*x78)==x79)<x80);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x81 = 1;
	uint64_t x82 = 120788135743386355LLU;
	volatile int16_t x83 = INT16_MIN;

	t13 = (((x81*x82)==x83)<x84);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x86 = INT8_MAX;
	int32_t x87 = INT32_MAX;

	t14 = (((x85*x86)==x87)<x88);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = INT16_MAX;
	static int8_t x99 = 0;
	volatile int16_t x100 = -15;
	volatile int32_t t15 = 63078;

	t15 = (((x97*x98)==x99)<x100);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x102 = INT8_MAX;
	int8_t x103 = INT8_MIN;
	int16_t x104 = 684;
	static volatile int32_t t16 = -101483;

	t16 = (((x101*x102)==x103)<x104);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x106 = -1;
	static int64_t x107 = INT64_MIN;
	volatile int64_t x108 = -1LL;
	volatile int32_t t17 = 71;

	t17 = (((x105*x106)==x107)<x108);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x109 = UINT16_MAX;
	uint64_t x110 = 3LLU;
	int64_t x111 = -1467630448934LL;
	static int16_t x112 = INT16_MAX;
	volatile int32_t t18 = 1555792;

	t18 = (((x109*x110)==x111)<x112);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = 1;
	int16_t x116 = INT16_MIN;
	volatile int32_t t19 = 3441700;

	t19 = (((x113*x114)==x115)<x116);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x117 = 955475486883216LL;
	static int16_t x120 = 506;
	volatile int32_t t20 = -152584001;

	t20 = (((x117*x118)==x119)<x120);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x121 = 37U;
	static volatile int32_t x122 = 14442;
	volatile int64_t x124 = INT64_MAX;
	int32_t t21 = -61;

	t21 = (((x121*x122)==x123)<x124);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x125 = -51;
	uint32_t x127 = 52265U;
	int16_t x128 = 23;
	volatile int32_t t22 = -30334;

	t22 = (((x125*x126)==x127)<x128);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x133 = -1;
	volatile uint32_t x135 = 2709178U;
	volatile int32_t t23 = -947254;

	t23 = (((x133*x134)==x135)<x136);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x137 = 0;
	uint64_t x138 = 18583LLU;
	uint32_t x139 = UINT32_MAX;
	uint8_t x140 = UINT8_MAX;
	static int32_t t24 = 27354071;

	t24 = (((x137*x138)==x139)<x140);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x150 = 4;
	uint16_t x151 = UINT16_MAX;
	int32_t x152 = -1;
	static int32_t t25 = -596595;

	t25 = (((x149*x150)==x151)<x152);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x153 = INT8_MAX;
	int8_t x154 = 39;
	int8_t x155 = -1;
	volatile uint16_t x156 = 3109U;
	int32_t t26 = 237;

	t26 = (((x153*x154)==x155)<x156);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x157 = INT16_MAX;
	static int16_t x158 = -1;
	uint16_t x159 = 8403U;
	volatile uint8_t x160 = 9U;
	static int32_t t27 = 528977;

	t27 = (((x157*x158)==x159)<x160);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x161 = -1;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = -1;
	int32_t t28 = 945882;

	t28 = (((x161*x162)==x163)<x164);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x166 = UINT16_MAX;
	uint16_t x167 = 1U;
	int16_t x168 = INT16_MIN;
	volatile int32_t t29 = 26;

	t29 = (((x165*x166)==x167)<x168);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x173 = 413081366LLU;
	int8_t x174 = INT8_MAX;
	volatile int16_t x175 = INT16_MIN;
	volatile int32_t x176 = INT32_MIN;

	t30 = (((x173*x174)==x175)<x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x181 = UINT8_MAX;
	int8_t x182 = INT8_MIN;
	static int64_t x184 = INT64_MIN;
	volatile int32_t t31 = -2154;

	t31 = (((x181*x182)==x183)<x184);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x190 = 1095U;
	volatile uint16_t x192 = UINT16_MAX;
	static volatile int32_t t32 = -130460;

	t32 = (((x189*x190)==x191)<x192);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x193 = -664;
	static volatile int16_t x194 = 51;
	volatile int8_t x195 = INT8_MIN;
	static volatile int32_t t33 = 1;

	t33 = (((x193*x194)==x195)<x196);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x202 = -778252392902093146LL;
	uint32_t x203 = UINT32_MAX;
	static volatile int16_t x204 = 173;
	int32_t t34 = -4125634;

	t34 = (((x201*x202)==x203)<x204);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x206 = INT16_MIN;
	volatile int8_t x207 = INT8_MAX;
	static volatile int32_t t35 = -11;

	t35 = (((x205*x206)==x207)<x208);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x209 = INT32_MIN;
	uint64_t x210 = UINT64_MAX;
	uint16_t x211 = UINT16_MAX;
	int32_t t36 = -168547;

	t36 = (((x209*x210)==x211)<x212);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x213 = 3155U;
	uint64_t x214 = 12LLU;
	int16_t x215 = INT16_MAX;
	int32_t t37 = 0;

	t37 = (((x213*x214)==x215)<x216);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x218 = 49;
	uint8_t x219 = 25U;
	volatile int8_t x220 = 5;
	volatile int32_t t38 = -72880565;

	t38 = (((x217*x218)==x219)<x220);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x230 = -1;
	volatile int32_t x231 = -15;
	int16_t x232 = -1;
	volatile int32_t t39 = -350;

	t39 = (((x229*x230)==x231)<x232);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x233 = 3LLU;
	static int8_t x234 = INT8_MAX;
	static int16_t x235 = -1;
	volatile int16_t x236 = -1;

	t40 = (((x233*x234)==x235)<x236);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x241 = 858U;
	uint32_t x242 = 22U;
	int64_t x244 = -1LL;

	t41 = (((x241*x242)==x243)<x244);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x246 = 644149672U;
	int32_t x247 = INT32_MIN;
	volatile int8_t x248 = 5;
	static int32_t t42 = -520462409;

	t42 = (((x245*x246)==x247)<x248);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x249 = -1;
	static volatile int32_t t43 = -189;

	t43 = (((x249*x250)==x251)<x252);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x253 = -1LL;
	static volatile int16_t x254 = -3064;
	int8_t x255 = -5;
	volatile int16_t x256 = -1;

	t44 = (((x253*x254)==x255)<x256);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x257 = 359539U;
	static volatile int16_t x258 = 4375;
	int8_t x259 = 7;
	static volatile int32_t x260 = INT32_MAX;
	int32_t t45 = 19;

	t45 = (((x257*x258)==x259)<x260);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x261 = INT16_MIN;
	uint16_t x262 = 15086U;
	int16_t x263 = -1;
	uint32_t x264 = 517U;
	static volatile int32_t t46 = -69614;

	t46 = (((x261*x262)==x263)<x264);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x273 = 3830792;
	volatile uint8_t x274 = 1U;
	volatile uint64_t x275 = 2671980999LLU;
	int8_t x276 = -1;
	static volatile int32_t t47 = -1;

	t47 = (((x273*x274)==x275)<x276);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x277 = UINT64_MAX;
	static int64_t x279 = 41LL;
	int16_t x280 = -1;
	int32_t t48 = 439;

	t48 = (((x277*x278)==x279)<x280);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x289 = 1U;
	int64_t x290 = INT64_MAX;
	int16_t x291 = INT16_MIN;
	volatile int32_t t49 = 212397;

	t49 = (((x289*x290)==x291)<x292);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x297 = -213;
	int8_t x298 = 0;
	static uint64_t x300 = 10692916726LLU;
	int32_t t50 = 628494978;

	t50 = (((x297*x298)==x299)<x300);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x305 = 562027U;
	static uint64_t x306 = 2821337799257959LLU;
	int32_t x308 = -13899;
	int32_t t51 = -3;

	t51 = (((x305*x306)==x307)<x308);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x309 = 6;
	int32_t x310 = 1488;
	int8_t x311 = -2;
	int64_t x312 = -370583512884289907LL;
	volatile int32_t t52 = 116853;

	t52 = (((x309*x310)==x311)<x312);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x317 = UINT32_MAX;
	int16_t x318 = 0;
	int16_t x319 = INT16_MIN;
	int32_t x320 = 393;

	t53 = (((x317*x318)==x319)<x320);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x322 = -1;
	int32_t t54 = 1;

	t54 = (((x321*x322)==x323)<x324);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x330 = 2;
	static int32_t x331 = -1;
	int16_t x332 = 111;
	volatile int32_t t55 = -4532;

	t55 = (((x329*x330)==x331)<x332);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	uint8_t x335 = UINT8_MAX;
	int8_t x336 = INT8_MIN;
	volatile int32_t t56 = 0;

	t56 = (((x333*x334)==x335)<x336);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x337 = 15U;
	uint64_t x338 = 8LLU;
	int16_t x339 = INT16_MIN;
	int64_t x340 = INT64_MAX;
	int32_t t57 = 619;

	t57 = (((x337*x338)==x339)<x340);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x341 = -1;
	volatile uint8_t x342 = 22U;
	int16_t x343 = 4;
	int32_t x344 = -1;
	int32_t t58 = -9048;

	t58 = (((x341*x342)==x343)<x344);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x346 = 1U;
	int8_t x347 = INT8_MIN;
	static int32_t x348 = INT32_MAX;
	int32_t t59 = -9394364;

	t59 = (((x345*x346)==x347)<x348);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x349 = 172397014LLU;
	int64_t x350 = INT64_MAX;
	int16_t x351 = INT16_MAX;
	static int64_t x352 = INT64_MAX;

	t60 = (((x349*x350)==x351)<x352);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x357 = 17733774440372309LL;
	int32_t x358 = 223;
	int32_t x359 = INT32_MIN;
	int32_t x360 = 0;
	volatile int32_t t61 = 5251;

	t61 = (((x357*x358)==x359)<x360);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x362 = 22680U;
	int8_t x363 = -13;
	uint8_t x364 = 16U;

	t62 = (((x361*x362)==x363)<x364);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x365 = INT16_MAX;
	uint64_t x367 = 921638LLU;
	int64_t x368 = 33LL;
	int32_t t63 = -3;

	t63 = (((x365*x366)==x367)<x368);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x370 = UINT16_MAX;
	static int64_t x372 = 90885178LL;
	volatile int32_t t64 = -6476103;

	t64 = (((x369*x370)==x371)<x372);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x374 = -13;
	uint64_t x375 = 9984606883780LLU;
	volatile int32_t x376 = INT32_MIN;
	int32_t t65 = -134788;

	t65 = (((x373*x374)==x375)<x376);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x385 = UINT32_MAX;
	int8_t x386 = INT8_MIN;
	uint8_t x387 = 42U;
	volatile int32_t t66 = 99108823;

	t66 = (((x385*x386)==x387)<x388);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x389 = INT16_MIN;
	static int16_t x390 = 1;
	uint32_t x391 = UINT32_MAX;
	int32_t x392 = 7;
	int32_t t67 = -3698513;

	t67 = (((x389*x390)==x391)<x392);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x393 = -1;
	int8_t x394 = INT8_MIN;
	static int32_t x395 = 1679189;
	int32_t t68 = 25196;

	t68 = (((x393*x394)==x395)<x396);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x397 = 1;
	uint64_t x398 = 1517LLU;
	volatile uint64_t x399 = 1747128734LLU;
	int8_t x400 = INT8_MIN;
	int32_t t69 = -469297;

	t69 = (((x397*x398)==x399)<x400);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x401 = 6257323U;
	int32_t x402 = 1;
	static uint64_t x404 = UINT64_MAX;
	volatile int32_t t70 = -600586;

	t70 = (((x401*x402)==x403)<x404);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x405 = 31U;
	int8_t x407 = INT8_MIN;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t71 = 538876;

	t71 = (((x405*x406)==x407)<x408);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x409 = -1LL;
	uint16_t x410 = 4680U;
	int32_t x411 = INT32_MIN;
	static volatile uint64_t x412 = 406922835869361LLU;

	t72 = (((x409*x410)==x411)<x412);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x413 = UINT8_MAX;
	uint8_t x414 = 35U;
	int16_t x416 = -57;
	int32_t t73 = -31347075;

	t73 = (((x413*x414)==x415)<x416);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x417 = 2692872646LLU;
	int64_t x418 = INT64_MIN;
	uint64_t x419 = UINT64_MAX;
	uint16_t x420 = 32U;
	int32_t t74 = 7;

	t74 = (((x417*x418)==x419)<x420);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x421 = INT64_MAX;
	int8_t x422 = -1;
	volatile int64_t x423 = -33255LL;
	int32_t t75 = -32680;

	t75 = (((x421*x422)==x423)<x424);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x425 = 0U;
	int16_t x426 = -1;
	uint16_t x427 = 38U;
	volatile uint32_t x428 = 4909U;

	t76 = (((x425*x426)==x427)<x428);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x429 = -1;
	int32_t x430 = -133121117;
	volatile uint32_t x431 = UINT32_MAX;
	static volatile int16_t x432 = 12;
	volatile int32_t t77 = 88221896;

	t77 = (((x429*x430)==x431)<x432);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x433 = -1;
	static volatile uint16_t x434 = UINT16_MAX;
	int64_t x435 = INT64_MIN;
	int32_t x436 = INT32_MIN;
	volatile int32_t t78 = 2038771;

	t78 = (((x433*x434)==x435)<x436);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x441 = UINT8_MAX;
	uint16_t x442 = 348U;
	int64_t x443 = 13856845608953602LL;
	int32_t t79 = 1;

	t79 = (((x441*x442)==x443)<x444);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x445 = 7U;
	int32_t x446 = -1;
	int8_t x447 = INT8_MIN;
	int32_t x448 = -1;

	t80 = (((x445*x446)==x447)<x448);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x449 = INT8_MIN;
	volatile int16_t x450 = 0;
	static volatile uint16_t x451 = UINT16_MAX;
	static volatile uint8_t x452 = 0U;
	static volatile int32_t t81 = -1;

	t81 = (((x449*x450)==x451)<x452);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x453 = UINT64_MAX;
	uint8_t x454 = 124U;
	volatile int64_t x455 = INT64_MIN;
	volatile uint16_t x456 = 182U;
	volatile int32_t t82 = -782722;

	t82 = (((x453*x454)==x455)<x456);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x469 = -128711702LL;
	static int16_t x471 = INT16_MIN;
	int8_t x472 = INT8_MIN;
	volatile int32_t t83 = -967;

	t83 = (((x469*x470)==x471)<x472);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x473 = INT16_MIN;
	static int16_t x474 = 4427;
	int64_t x475 = INT64_MIN;
	static volatile int8_t x476 = INT8_MIN;
	int32_t t84 = -15;

	t84 = (((x473*x474)==x475)<x476);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x477 = -1;
	uint32_t x478 = 683810597U;
	volatile int32_t x479 = INT32_MIN;
	volatile int8_t x480 = INT8_MAX;
	int32_t t85 = 0;

	t85 = (((x477*x478)==x479)<x480);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x485 = 5U;
	uint32_t x486 = 1U;
	int64_t x487 = INT64_MIN;
	static int32_t t86 = 23409898;

	t86 = (((x485*x486)==x487)<x488);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x490 = UINT32_MAX;
	int64_t x491 = INT64_MAX;
	volatile int16_t x492 = INT16_MAX;
	static volatile int32_t t87 = 74;

	t87 = (((x489*x490)==x491)<x492);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x494 = -1;
	uint16_t x496 = 7U;
	int32_t t88 = -38292093;

	t88 = (((x493*x494)==x495)<x496);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x497 = 65U;
	int32_t x498 = -1;
	int64_t x499 = INT64_MIN;
	volatile uint32_t x500 = 189U;
	volatile int32_t t89 = 1;

	t89 = (((x497*x498)==x499)<x500);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x507 = -2228;
	uint64_t x508 = 473586105251630858LLU;
	static volatile int32_t t90 = 375339040;

	t90 = (((x505*x506)==x507)<x508);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x517 = 1;
	int64_t x518 = INT64_MIN;
	int16_t x519 = INT16_MIN;
	volatile int32_t x520 = INT32_MIN;

	t91 = (((x517*x518)==x519)<x520);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x521 = INT8_MAX;
	uint64_t x522 = 4178886LLU;
	int8_t x523 = -2;
	int64_t x524 = 876618661548LL;
	volatile int32_t t92 = -2321578;

	t92 = (((x521*x522)==x523)<x524);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x525 = INT16_MIN;
	int16_t x527 = INT16_MIN;
	static int32_t t93 = 995776;

	t93 = (((x525*x526)==x527)<x528);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x529 = UINT16_MAX;
	int32_t x531 = INT32_MIN;
	static uint32_t x532 = 372072U;
	int32_t t94 = 14;

	t94 = (((x529*x530)==x531)<x532);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x533 = -1;
	static uint16_t x534 = UINT16_MAX;
	int16_t x535 = INT16_MIN;
	int8_t x536 = -5;

	t95 = (((x533*x534)==x535)<x536);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x537 = INT16_MIN;
	uint32_t x538 = UINT32_MAX;
	volatile int32_t t96 = 590006038;

	t96 = (((x537*x538)==x539)<x540);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x541 = UINT32_MAX;
	volatile int8_t x542 = INT8_MAX;
	int64_t x543 = 8257763LL;
	uint8_t x544 = 8U;
	int32_t t97 = -2649;

	t97 = (((x541*x542)==x543)<x544);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x546 = 68U;
	int32_t x547 = 1;
	static int32_t x548 = -3410;

	t98 = (((x545*x546)==x547)<x548);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x549 = INT8_MIN;
	volatile uint32_t x550 = 448U;
	int32_t x552 = 0;
	int32_t t99 = -720945;

	t99 = (((x549*x550)==x551)<x552);

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


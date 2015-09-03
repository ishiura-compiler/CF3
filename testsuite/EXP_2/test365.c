#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = -41;
uint64_t x16 = 8260444882347218302LLU;
volatile uint64_t x22 = 185LLU;
int16_t x25 = 2;
uint32_t x37 = 3491U;
int32_t x38 = INT32_MAX;
uint16_t x47 = 58U;
uint32_t t8 = 1941U;
int16_t x61 = 5873;
int8_t x79 = -1;
volatile uint32_t t13 = 908006439U;
uint16_t x105 = 463U;
int16_t x107 = -708;
int64_t x109 = -1LL;
static int32_t x115 = -172775161;
volatile int16_t x136 = INT16_MIN;
static uint8_t x149 = UINT8_MAX;
uint64_t x150 = 357998854804539LLU;
static volatile int32_t x163 = -12;
static int32_t x169 = 2193;
uint64_t x177 = UINT64_MAX;
static volatile uint64_t t30 = 110LLU;
static uint8_t x205 = UINT8_MAX;
volatile uint8_t x206 = 0U;
int64_t t33 = 154170527756452529LL;
int64_t x213 = 501LL;
int16_t x214 = INT16_MIN;
int8_t x215 = 1;
volatile uint64_t x218 = 827062LLU;
int32_t x224 = -1;
volatile uint32_t x237 = 2592U;
uint16_t x238 = 56U;
volatile uint64_t x240 = 1610LLU;
int64_t x244 = 4LL;
volatile int64_t t39 = -435448489295LL;
static int8_t x250 = 0;
static int64_t x251 = INT64_MIN;
static uint64_t t41 = 53007213LLU;
volatile uint8_t x258 = 0U;
uint8_t x259 = 1U;
int64_t x291 = 232LL;
uint16_t x292 = 5U;
static int8_t x294 = -1;
volatile int8_t x303 = -1;
static int32_t t48 = 657;
int16_t x317 = INT16_MIN;
static int64_t t51 = -5795549858LL;
int32_t x323 = 302779;
int64_t t52 = -15903LL;
int16_t x325 = -1;
static uint32_t t53 = 30U;
int16_t x341 = 24;
static volatile uint64_t x349 = 7847LLU;
static int32_t x350 = INT32_MAX;
volatile uint16_t x360 = UINT16_MAX;
int64_t x364 = INT64_MAX;
volatile uint64_t t57 = 421LLU;
volatile uint64_t t59 = 494652366437740484LLU;
uint32_t x393 = 252790471U;
int64_t x399 = -1LL;
int32_t x407 = 5224;
uint8_t x408 = 93U;
static int64_t x411 = -1LL;
int8_t x414 = -4;
uint32_t x415 = 159U;
int8_t x423 = INT8_MAX;
int8_t x428 = -1;
int32_t t66 = 917583;
int8_t x440 = INT8_MAX;
static int64_t t67 = -1032820LL;
volatile int32_t x447 = INT32_MIN;
uint32_t x454 = 2U;
static uint32_t x461 = UINT32_MAX;
int8_t x468 = INT8_MIN;
int32_t x472 = INT32_MIN;
int16_t x474 = -1;
static volatile uint16_t x477 = 6U;
int32_t t75 = 45183;
static uint8_t x481 = 1U;
int8_t x483 = 1;
int32_t x484 = -1;
volatile uint32_t x485 = 673726941U;
volatile int32_t x486 = 5657;
static int16_t x503 = INT16_MIN;
static volatile uint64_t x507 = 172870LLU;
volatile uint64_t t79 = 6124LLU;
int16_t x533 = 206;
static uint16_t x543 = 3U;
volatile uint32_t x558 = 2181545U;
volatile int64_t x560 = -2828733691640LL;
uint16_t x561 = 135U;
volatile int8_t x562 = INT8_MAX;
int16_t x565 = -1;
int8_t x567 = INT8_MAX;
static int32_t t88 = 390635;
int8_t x587 = INT8_MIN;
int16_t x588 = INT16_MIN;
volatile int32_t t89 = -948884457;
int8_t x608 = INT8_MIN;
static uint8_t x619 = 4U;
uint8_t x639 = 12U;
volatile uint64_t x646 = 56LLU;
uint16_t x648 = 7141U;
int8_t x652 = INT8_MAX;
int32_t x656 = 64955690;
int64_t x662 = -1823786296572LL;
uint16_t x663 = 104U;
int64_t t99 = -419688694LL;


void f0(void) {
	volatile int8_t x5 = -1;
	static volatile uint64_t x7 = 32960307LLU;
	volatile int8_t x8 = INT8_MIN;
	static uint64_t t0 = 20306933155LLU;

	t0 = ((x5*(x6*x7))+x8);

	if (t0 != 1351372459LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 1U;
	static int64_t x10 = -1LL;
	int16_t x11 = INT16_MIN;
	static int8_t x12 = -1;
	int64_t t1 = 3LL;

	t1 = ((x9*(x10*x11))+x12);

	if (t1 != 32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = 55;
	int32_t x14 = 1;
	uint64_t x15 = 523506256LLU;
	uint64_t t2 = 367064208292LLU;

	t2 = ((x13*(x14*x15))+x16);

	if (t2 != 8260444911140062382LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	static uint32_t x18 = 1U;
	int32_t x19 = INT32_MAX;
	volatile int8_t x20 = -1;
	volatile uint32_t t3 = 1816490165U;

	t3 = ((x17*(x18*x19))+x20);

	if (t3 != 2147483648U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = -12668630944983856LL;
	int8_t x23 = 3;
	static int64_t x24 = INT64_MIN;
	static uint64_t t4 = 7123798059107843417LLU;

	t4 = ((x21*(x22*x23))+x24);

	if (t4 != 2192281862388735728LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = -72534;
	static int64_t x27 = -1027LL;
	int64_t x28 = INT64_MIN;
	int64_t t5 = -4117631190549LL;

	t5 = ((x25*(x26*x27))+x28);

	if (t5 != -9223372036705790972LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x39 = -1;
	volatile uint64_t x40 = UINT64_MAX;
	volatile uint64_t t6 = 992681817LLU;

	t6 = ((x37*(x38*x39))+x40);

	if (t6 != 2147487138LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 3U;
	uint8_t x42 = 6U;
	volatile int16_t x43 = -3194;
	int8_t x44 = 4;
	volatile int32_t t7 = -4;

	t7 = ((x41*(x42*x43))+x44);

	if (t7 != -57488) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 94U;
	int16_t x46 = 5159;
	static uint32_t x48 = 15924U;

	t8 = ((x45*(x46*x47))+x48);

	if (t8 != 28142792U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x53 = UINT32_MAX;
	static int16_t x54 = -64;
	volatile int8_t x55 = -1;
	static volatile int64_t x56 = 1905060439594LL;
	int64_t t9 = 137164937628223709LL;

	t9 = ((x53*(x54*x55))+x56);

	if (t9 != 1909355406826LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x62 = UINT8_MAX;
	uint32_t x63 = 1U;
	uint8_t x64 = 44U;
	uint32_t t10 = 781103979U;

	t10 = ((x61*(x62*x63))+x64);

	if (t10 != 1497659U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x77 = 12U;
	volatile uint64_t x78 = UINT64_MAX;
	volatile int16_t x80 = INT16_MAX;
	uint64_t t11 = 22LLU;

	t11 = ((x77*(x78*x79))+x80);

	if (t11 != 32779LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x81 = -1LL;
	int8_t x82 = INT8_MIN;
	uint8_t x83 = 26U;
	static uint64_t x84 = 4479804LLU;
	volatile uint64_t t12 = 61735483848144654LLU;

	t12 = ((x81*(x82*x83))+x84);

	if (t12 != 4483132LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x93 = 248U;
	static int16_t x94 = -400;
	int16_t x95 = -1;
	uint32_t x96 = 31647U;

	t13 = ((x93*(x94*x95))+x96);

	if (t13 != 130847U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x101 = 0U;
	static uint64_t x102 = 1012LLU;
	int64_t x103 = INT64_MAX;
	int64_t x104 = -1LL;
	uint64_t t14 = UINT64_MAX;

	t14 = ((x101*(x102*x103))+x104);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x106 = UINT8_MAX;
	volatile uint8_t x108 = 74U;
	static int32_t t15 = 1;

	t15 = ((x105*(x106*x107))+x108);

	if (t15 != -83589946) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x110 = INT16_MIN;
	static volatile int32_t x111 = 9216;
	int8_t x112 = INT8_MAX;
	static volatile int64_t t16 = 862423036598823LL;

	t16 = ((x109*(x110*x111))+x112);

	if (t16 != 301990015LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x113 = 1128061482706471LLU;
	uint16_t x114 = 3U;
	int32_t x116 = INT32_MIN;
	volatile uint64_t t17 = 106951974LLU;

	t17 = ((x113*(x114*x115))+x116);

	if (t17 != 3434026841781788211LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x117 = -3;
	int64_t x118 = -1LL;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = UINT16_MAX;
	volatile int64_t t18 = 169LL;

	t18 = ((x117*(x118*x119))+x120);

	if (t18 != 65151LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x121 = INT32_MIN;
	static volatile int8_t x122 = -50;
	static volatile int64_t x123 = -1537LL;
	int8_t x124 = -41;
	volatile int64_t t19 = 13160364LL;

	t19 = ((x121*(x122*x123))+x124);

	if (t19 != -165034118348841LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x129 = 877U;
	int16_t x130 = INT16_MIN;
	static volatile uint8_t x131 = 32U;
	int8_t x132 = 52;
	uint32_t t20 = 3U;

	t20 = ((x129*(x130*x131))+x132);

	if (t20 != 3375366196U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x133 = UINT16_MAX;
	uint8_t x134 = 2U;
	int32_t x135 = -1;
	volatile int32_t t21 = 6;

	t21 = ((x133*(x134*x135))+x136);

	if (t21 != -163838) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x137 = 0LL;
	int8_t x138 = INT8_MAX;
	volatile int32_t x139 = -1;
	int64_t x140 = INT64_MIN;
	int64_t t22 = INT64_MIN;

	t22 = ((x137*(x138*x139))+x140);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x141 = 1U;
	int8_t x142 = 7;
	uint8_t x143 = UINT8_MAX;
	uint8_t x144 = 54U;
	int32_t t23 = 1;

	t23 = ((x141*(x142*x143))+x144);

	if (t23 != 1839) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x145 = INT8_MAX;
	static uint64_t x146 = UINT64_MAX;
	uint64_t x147 = UINT64_MAX;
	int16_t x148 = -1;
	volatile uint64_t t24 = 111LLU;

	t24 = ((x145*(x146*x147))+x148);

	if (t24 != 126LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x151 = -1;
	volatile uint32_t x152 = 93U;
	uint64_t t25 = 16080670LLU;

	t25 = ((x149*(x150*x151))+x152);

	if (t25 != 18355454365734394264LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x153 = 2LLU;
	volatile uint64_t x154 = 5345362397841557045LLU;
	static int8_t x155 = 3;
	int16_t x156 = -1;
	uint64_t t26 = 4014927745408968LLU;

	t26 = ((x153*(x154*x155))+x156);

	if (t26 != 13625430313339790653LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x161 = -1;
	int64_t x162 = 25LL;
	int32_t x164 = -1;
	int64_t t27 = 6340325385LL;

	t27 = ((x161*(x162*x163))+x164);

	if (t27 != 299LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x165 = -1;
	uint16_t x166 = 4004U;
	static uint32_t x167 = 16092U;
	static int32_t x168 = INT32_MIN;
	static volatile uint32_t t28 = 2341994U;

	t28 = ((x165*(x166*x167))+x168);

	if (t28 != 2083051280U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x170 = 1289U;
	uint16_t x171 = 2278U;
	uint32_t x172 = 44U;
	uint32_t t29 = 21035U;

	t29 = ((x169*(x170*x171))+x172);

	if (t29 != 2144430754U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x178 = INT64_MIN;
	static uint64_t x179 = UINT64_MAX;
	static int16_t x180 = 3104;

	t30 = ((x177*(x178*x179))+x180);

	if (t30 != 9223372036854778912LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x185 = INT16_MIN;
	static int8_t x186 = INT8_MIN;
	uint32_t x187 = 773802U;
	int16_t x188 = INT16_MAX;
	volatile uint32_t t31 = 415281232U;

	t31 = ((x185*(x186*x187))+x188);

	if (t31 != 2860548095U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x193 = 275105067U;
	static int64_t x194 = -1LL;
	static volatile int16_t x195 = -1;
	uint8_t x196 = UINT8_MAX;
	int64_t t32 = -3189LL;

	t32 = ((x193*(x194*x195))+x196);

	if (t32 != 275105322LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x207 = INT64_MIN;
	volatile int64_t x208 = -6217040565636103LL;

	t33 = ((x205*(x206*x207))+x208);

	if (t33 != -6217040565636103LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x209 = INT16_MAX;
	uint32_t x210 = 947793004U;
	int16_t x211 = 9;
	static uint8_t x212 = 19U;
	volatile uint32_t t34 = 10560608U;

	t34 = ((x209*(x210*x211))+x212);

	if (t34 != 3413536839U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x216 = 14382489795767LL;
	volatile int64_t t35 = 3LL;

	t35 = ((x213*(x214*x215))+x216);

	if (t35 != 14382473378999LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x217 = 283234U;
	int32_t x219 = -1;
	volatile int16_t x220 = -14177;
	static uint64_t t36 = 333925352LLU;

	t36 = ((x217*(x218*x219))+x220);

	if (t36 != 18446743839457458931LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x221 = INT16_MIN;
	static volatile int32_t x222 = -1;
	int16_t x223 = INT16_MIN;
	volatile int32_t t37 = 65;

	t37 = ((x221*(x222*x223))+x224);

	if (t37 != -1073741825) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x239 = -1;
	volatile uint64_t t38 = 5111381804381321952LLU;

	t38 = ((x237*(x238*x239))+x240);

	if (t38 != 4294823754LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x241 = 62U;
	volatile int16_t x242 = INT16_MIN;
	volatile int64_t x243 = -1LL;

	t39 = ((x241*(x242*x243))+x244);

	if (t39 != 2031620LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x249 = INT8_MAX;
	int32_t x252 = INT32_MIN;
	static volatile int64_t t40 = -892067120509553LL;

	t40 = ((x249*(x250*x251))+x252);

	if (t40 != -2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x253 = INT64_MIN;
	uint64_t x254 = 490120762084107992LLU;
	static uint8_t x255 = 4U;
	int64_t x256 = INT64_MIN;

	t41 = ((x253*(x254*x255))+x256);

	if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x257 = -15;
	int16_t x260 = INT16_MAX;
	static int32_t t42 = -58;

	t42 = ((x257*(x258*x259))+x260);

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x265 = -297LL;
	uint8_t x266 = 11U;
	uint64_t x267 = UINT64_MAX;
	volatile int32_t x268 = -1;
	uint64_t t43 = 32954817LLU;

	t43 = ((x265*(x266*x267))+x268);

	if (t43 != 3266LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x273 = INT16_MIN;
	uint32_t x274 = 42U;
	int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MAX;
	static volatile uint32_t t44 = 4U;

	t44 = ((x273*(x274*x275))+x276);

	if (t44 != 2147516415U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x281 = 66U;
	static uint32_t x282 = 2U;
	static int8_t x283 = -1;
	int16_t x284 = INT16_MAX;
	static volatile uint32_t t45 = 14U;

	t45 = ((x281*(x282*x283))+x284);

	if (t45 != 32635U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x289 = 956548559U;
	uint8_t x290 = 1U;
	volatile int64_t t46 = -28797884LL;

	t46 = ((x289*(x290*x291))+x292);

	if (t46 != 221919265693LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x293 = 676U;
	int8_t x295 = INT8_MIN;
	uint64_t x296 = 4LLU;
	uint64_t t47 = 3312501LLU;

	t47 = ((x293*(x294*x295))+x296);

	if (t47 != 86532LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x301 = -1;
	static volatile uint8_t x302 = 125U;
	volatile int8_t x304 = INT8_MIN;

	t48 = ((x301*(x302*x303))+x304);

	if (t48 != -3) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x305 = UINT64_MAX;
	volatile int32_t x306 = -11811;
	uint64_t x307 = 535353LLU;
	volatile uint16_t x308 = 116U;
	static volatile uint64_t t49 = 11881LLU;

	t49 = ((x305*(x306*x307))+x308);

	if (t49 != 6323054399LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x309 = UINT64_MAX;
	volatile int16_t x310 = -1;
	int8_t x311 = 25;
	static int8_t x312 = -1;
	volatile uint64_t t50 = 0LLU;

	t50 = ((x309*(x310*x311))+x312);

	if (t50 != 24LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x318 = -1LL;
	int32_t x319 = -2044;
	static int8_t x320 = INT8_MIN;

	t51 = ((x317*(x318*x319))+x320);

	if (t51 != -66977920LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x321 = 27U;
	int64_t x322 = -34LL;
	int16_t x324 = -1;

	t52 = ((x321*(x322*x323))+x324);

	if (t52 != -277951123LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x326 = 383745479U;
	int16_t x327 = 1;
	uint16_t x328 = UINT16_MAX;

	t53 = ((x325*(x326*x327))+x328);

	if (t53 != 3911287352U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x342 = 155LLU;
	int32_t x343 = 2;
	int8_t x344 = INT8_MIN;
	volatile uint64_t t54 = 22LLU;

	t54 = ((x341*(x342*x343))+x344);

	if (t54 != 7312LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x351 = -1;
	int64_t x352 = -1LL;
	volatile uint64_t t55 = 65280673528LLU;

	t55 = ((x349*(x350*x351))+x352);

	if (t55 != 18446727222405373606LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x357 = 1U;
	int8_t x358 = 3;
	static volatile uint64_t x359 = 4245968LLU;
	uint64_t t56 = 1464729LLU;

	t56 = ((x357*(x358*x359))+x360);

	if (t56 != 12803439LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x361 = 4U;
	uint64_t x362 = UINT64_MAX;
	int32_t x363 = -1;

	t57 = ((x361*(x362*x363))+x364);

	if (t57 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x373 = INT64_MIN;
	int16_t x374 = -1;
	int8_t x375 = 0;
	static int64_t x376 = INT64_MIN;
	static int64_t t58 = INT64_MIN;

	t58 = ((x373*(x374*x375))+x376);

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x385 = 441U;
	volatile uint64_t x386 = UINT64_MAX;
	uint32_t x387 = 2U;
	int16_t x388 = -3551;

	t59 = ((x385*(x386*x387))+x388);

	if (t59 != 18446744073709547183LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x394 = 76LL;
	int8_t x395 = 50;
	static volatile int16_t x396 = INT16_MIN;
	volatile int64_t t60 = -1672691669545LL;

	t60 = ((x393*(x394*x395))+x396);

	if (t60 != 960603757032LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x397 = -1;
	uint64_t x398 = 1532454300LLU;
	uint32_t x400 = 5729047U;
	uint64_t t61 = 171888705507563807LLU;

	t61 = ((x397*(x398*x399))+x400);

	if (t61 != 1538183347LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x405 = UINT64_MAX;
	int16_t x406 = INT16_MAX;
	uint64_t t62 = 10LLU;

	t62 = ((x405*(x406*x407))+x408);

	if (t62 != 18446744073538376901LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x409 = INT32_MIN;
	uint8_t x410 = 7U;
	int64_t x412 = INT64_MIN;
	volatile int64_t t63 = -1LL;

	t63 = ((x409*(x410*x411))+x412);

	if (t63 != -9223372021822390272LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x413 = INT16_MIN;
	volatile uint64_t x416 = UINT64_MAX;
	uint64_t t64 = 453LLU;

	t64 = ((x413*(x414*x415))+x416);

	if (t64 != 20840447LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x421 = UINT16_MAX;
	int32_t x422 = -188;
	int64_t x424 = INT64_MAX;
	volatile int64_t t65 = -483234221175LL;

	t65 = ((x421*(x422*x423))+x424);

	if (t65 != 9223372035290062147LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x425 = INT8_MIN;
	int32_t x426 = -1;
	int8_t x427 = 0;

	t66 = ((x425*(x426*x427))+x428);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x437 = INT32_MIN;
	int64_t x438 = -1787173LL;
	int8_t x439 = -1;

	t67 = ((x437*(x438*x439))+x440);

	if (t67 != -3837924793646977LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x445 = -299841415;
	uint32_t x446 = 1656U;
	int16_t x448 = INT16_MAX;
	static uint32_t t68 = 67021272U;

	t68 = ((x445*(x446*x447))+x448);

	if (t68 != 32767U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x453 = INT16_MIN;
	uint8_t x455 = UINT8_MAX;
	volatile int16_t x456 = 115;
	volatile uint32_t t69 = 20990718U;

	t69 = ((x453*(x454*x455))+x456);

	if (t69 != 4278255731U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x457 = 1;
	static volatile int8_t x458 = 4;
	int8_t x459 = INT8_MIN;
	static int16_t x460 = INT16_MIN;
	int32_t t70 = 8;

	t70 = ((x457*(x458*x459))+x460);

	if (t70 != -33280) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x462 = 443U;
	int8_t x463 = INT8_MIN;
	int8_t x464 = -8;
	static volatile uint32_t t71 = 6551U;

	t71 = ((x461*(x462*x463))+x464);

	if (t71 != 56696U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x465 = 153;
	volatile int16_t x466 = 0;
	uint64_t x467 = UINT64_MAX;
	uint64_t t72 = 192LLU;

	t72 = ((x465*(x466*x467))+x468);

	if (t72 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x469 = -1;
	static int32_t x470 = INT32_MAX;
	uint32_t x471 = 138080U;
	volatile uint32_t t73 = 86704470U;

	t73 = ((x469*(x470*x471))+x472);

	if (t73 != 2147621728U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x473 = 14U;
	uint32_t x475 = UINT32_MAX;
	static int32_t x476 = 1482;
	uint32_t t74 = 2056814157U;

	t74 = ((x473*(x474*x475))+x476);

	if (t74 != 1496U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x478 = 10U;
	int8_t x479 = INT8_MAX;
	uint16_t x480 = UINT16_MAX;

	t75 = ((x477*(x478*x479))+x480);

	if (t75 != 73155) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x482 = UINT64_MAX;
	uint64_t t76 = 551187886779249469LLU;

	t76 = ((x481*(x482*x483))+x484);

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x487 = UINT64_MAX;
	int8_t x488 = INT8_MAX;
	uint64_t t77 = 1536LLU;

	t77 = ((x485*(x486*x487))+x488);

	if (t77 != 18446740262436246506LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x501 = INT16_MIN;
	int32_t x502 = -1;
	static int32_t x504 = 214;
	volatile int32_t t78 = -20067348;

	t78 = ((x501*(x502*x503))+x504);

	if (t78 != -1073741610) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x505 = 19U;
	int8_t x506 = INT8_MIN;
	int32_t x508 = INT32_MIN;

	t79 = ((x505*(x506*x507))+x508);

	if (t79 != 18446744071141648128LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x513 = 815558;
	int64_t x514 = 5516022LL;
	volatile uint16_t x515 = 7U;
	static int16_t x516 = 15;
	volatile int64_t t80 = -7734LL;

	t80 = ((x513*(x514*x515))+x516);

	if (t80 != 31490451091947LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x534 = -6842;
	static int8_t x535 = -1;
	static int8_t x536 = INT8_MIN;
	volatile int32_t t81 = -14403;

	t81 = ((x533*(x534*x535))+x536);

	if (t81 != 1409324) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x537 = UINT16_MAX;
	static uint64_t x538 = UINT64_MAX;
	int64_t x539 = INT64_MIN;
	int32_t x540 = INT32_MIN;
	uint64_t t82 = 12749647719LLU;

	t82 = ((x537*(x538*x539))+x540);

	if (t82 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x541 = 24;
	int16_t x542 = -3397;
	int32_t x544 = 757019;
	volatile int32_t t83 = -27555;

	t83 = ((x541*(x542*x543))+x544);

	if (t83 != 512435) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x553 = -680917777;
	int8_t x554 = -1;
	uint32_t x555 = UINT32_MAX;
	static int8_t x556 = INT8_MIN;
	volatile uint32_t t84 = 89230281U;

	t84 = ((x553*(x554*x555))+x556);

	if (t84 != 3614049391U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x557 = INT32_MIN;
	uint64_t x559 = 0LLU;
	uint64_t t85 = 6LLU;

	t85 = ((x557*(x558*x559))+x560);

	if (t85 != 18446741244975859976LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x563 = 2531LLU;
	int16_t x564 = 2004;
	static volatile uint64_t t86 = 467999LLU;

	t86 = ((x561*(x562*x563))+x564);

	if (t86 != 43395999LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x566 = UINT32_MAX;
	int16_t x568 = 0;
	volatile uint32_t t87 = 25210U;

	t87 = ((x565*(x566*x567))+x568);

	if (t87 != 127U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x581 = 466U;
	int8_t x582 = 16;
	int16_t x583 = -1;
	uint16_t x584 = 11714U;

	t88 = ((x581*(x582*x583))+x584);

	if (t88 != 4258) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x585 = -1;
	int16_t x586 = 2;

	t89 = ((x585*(x586*x587))+x588);

	if (t89 != -32512) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x605 = INT16_MIN;
	int8_t x606 = INT8_MIN;
	static int8_t x607 = -1;
	volatile int32_t t90 = 1;

	t90 = ((x605*(x606*x607))+x608);

	if (t90 != -4194432) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x613 = -1;
	uint16_t x614 = 804U;
	static int8_t x615 = -5;
	volatile uint64_t x616 = UINT64_MAX;
	uint64_t t91 = 54482238750LLU;

	t91 = ((x613*(x614*x615))+x616);

	if (t91 != 4019LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x617 = INT8_MAX;
	volatile int16_t x618 = INT16_MIN;
	uint32_t x620 = 209U;
	uint32_t t92 = 15798690U;

	t92 = ((x617*(x618*x619))+x620);

	if (t92 != 4278321361U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x625 = -10683LL;
	int16_t x626 = INT16_MIN;
	volatile uint16_t x627 = 35U;
	int8_t x628 = INT8_MAX;
	volatile int64_t t93 = -11985432270LL;

	t93 = ((x625*(x626*x627))+x628);

	if (t93 != 12252119167LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x633 = INT64_MAX;
	uint64_t x634 = 11962628210778527LLU;
	uint8_t x635 = 1U;
	int8_t x636 = INT8_MAX;
	volatile uint64_t t94 = 923LLU;

	t94 = ((x633*(x634*x635))+x636);

	if (t94 != 9211409408643997408LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x637 = INT8_MIN;
	volatile int16_t x638 = INT16_MAX;
	int32_t x640 = 29;
	volatile int32_t t95 = 9;

	t95 = ((x637*(x638*x639))+x640);

	if (t95 != -50330083) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x645 = 47661U;
	int64_t x647 = INT64_MAX;
	static uint64_t t96 = 203072195638125566LLU;

	t96 = ((x645*(x646*x647))+x648);

	if (t96 != 18446744073706889741LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x649 = UINT16_MAX;
	uint64_t x650 = 40373LLU;
	int32_t x651 = 130;
	volatile uint64_t t97 = 21173353436LLU;

	t97 = ((x649*(x650*x651))+x652);

	if (t97 != 343959792277LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x653 = 7U;
	static uint16_t x654 = 3U;
	int16_t x655 = INT16_MIN;
	int32_t t98 = 1;

	t98 = ((x653*(x654*x655))+x656);

	if (t98 != 64267562) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x661 = 0U;
	int64_t x664 = -47557018LL;

	t99 = ((x661*(x662*x663))+x664);

	if (t99 != -47557018LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x23 = -1;
uint8_t x42 = 1U;
uint32_t x43 = 24U;
int16_t x44 = 63;
static volatile uint32_t t4 = 16U;
int64_t x52 = INT64_MIN;
volatile int32_t x58 = INT32_MIN;
uint64_t x72 = 192987373729135016LLU;
uint64_t x78 = UINT64_MAX;
uint64_t x81 = 1762841726LLU;
int32_t x84 = INT32_MIN;
int64_t t13 = -10584936178843751LL;
uint8_t x101 = 105U;
uint16_t x104 = 2U;
static int8_t x107 = INT8_MIN;
uint16_t x110 = 2U;
int32_t x120 = 16;
volatile int64_t x126 = 493994122LL;
uint64_t x128 = 4536414904562886432LLU;
static int16_t x133 = INT16_MIN;
uint16_t x139 = 1U;
uint64_t x146 = 156701LLU;
static uint64_t t21 = 169457358518282804LLU;
int8_t x149 = -1;
uint64_t x157 = 492237487508772LLU;
uint8_t x163 = 2U;
static volatile uint32_t x174 = 113730423U;
uint64_t x175 = UINT64_MAX;
int8_t x193 = INT8_MIN;
static int32_t x200 = INT32_MIN;
int16_t x211 = 1775;
int32_t x214 = -274;
static uint8_t x215 = 1U;
static int16_t x221 = INT16_MAX;
static uint32_t x222 = 1359273529U;
uint64_t x230 = 319LLU;
uint32_t x238 = 9U;
int64_t x243 = INT64_MAX;
volatile uint64_t t38 = 12096983LLU;
volatile uint64_t t39 = 1385818369920LLU;
uint16_t x265 = 43U;
int8_t x266 = -1;
static volatile uint64_t t42 = 24120163215LLU;
static volatile int64_t t43 = 989822280276236LL;
static uint32_t x285 = 964232U;
volatile int64_t x287 = -824603LL;
volatile int32_t x306 = INT32_MIN;
static int32_t x317 = 184045;
uint16_t x318 = UINT16_MAX;
volatile int64_t t47 = -62LL;
int64_t t49 = -211LL;
int8_t x333 = -1;
uint8_t x334 = 27U;
int64_t t50 = -185275805185LL;
static int32_t x353 = 11696;
uint64_t t54 = 507361547297LLU;
uint64_t x357 = 111018394489665LLU;
uint64_t x360 = 1LLU;
int16_t x361 = -1;
static volatile int64_t t58 = -30838218LL;
uint16_t x393 = 27U;
int8_t x396 = INT8_MIN;
uint8_t x406 = 31U;
int8_t x419 = INT8_MAX;
uint64_t t64 = 64286738906LLU;
static int64_t x434 = -12575LL;
volatile int64_t t65 = -169341853LL;
volatile uint64_t t66 = 57749864960892LLU;
static int8_t x441 = INT8_MIN;
uint32_t x442 = UINT32_MAX;
static uint8_t x454 = 15U;
volatile int64_t x456 = -8330639745511LL;
static uint8_t x466 = 100U;
uint32_t x469 = 698815U;
int32_t x472 = INT32_MAX;
int64_t x473 = -1LL;
int32_t x476 = INT32_MAX;
static uint64_t x484 = 104845729599016042LLU;
volatile uint64_t x494 = 1060636523320759803LLU;
uint64_t t75 = 99566941504LLU;
int16_t x498 = INT16_MAX;
volatile int64_t x499 = INT64_MIN;
uint32_t x505 = UINT32_MAX;
int64_t x508 = INT64_MIN;
int64_t x516 = INT64_MIN;
int8_t x525 = INT8_MIN;
uint64_t t83 = 149LLU;
static int16_t x571 = -1;
volatile int32_t t86 = -62131;
uint64_t t87 = 32517124468331870LLU;
volatile uint8_t x583 = 13U;
static int8_t x584 = -25;
static volatile uint8_t x587 = 7U;
uint64_t x596 = 27114679299811LLU;
int8_t x600 = -1;
int16_t x602 = -1;
int8_t x614 = 1;
uint64_t x617 = 850665953245247LLU;
int16_t x626 = 235;
static int8_t x630 = INT8_MIN;


void f0(void) {
	int16_t x13 = INT16_MAX;
	uint64_t x14 = 231983LLU;
	uint64_t x15 = 6LLU;
	int32_t x16 = INT32_MIN;
	volatile uint64_t t0 = 26284510477048LLU;

	t0 = (((x13+x14)*x15)%x16);

	if (t0 != 1588500LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = 13196960987LL;
	int8_t x18 = 14;
	int32_t x19 = -85737649;
	int64_t x20 = INT64_MIN;
	static int64_t t1 = 2908382334840693990LL;

	t1 = (((x17+x18)*x19)%x20);

	if (t1 != -1131476410170426649LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x21 = INT16_MAX;
	int64_t x22 = 32LL;
	int32_t x24 = -1;
	int64_t t2 = -7LL;

	t2 = (((x21+x22)*x23)%x24);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x25 = INT16_MIN;
	uint64_t x26 = UINT64_MAX;
	volatile int16_t x27 = -1;
	int32_t x28 = -1;
	uint64_t t3 = 23234LLU;

	t3 = (((x25+x26)*x27)%x28);

	if (t3 != 32769LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x41 = INT16_MIN;

	t4 = (((x41+x42)*x43)%x44);

	if (t4 != 25U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x45 = 349U;
	int64_t x46 = -9104940157LL;
	int8_t x47 = 7;
	int64_t x48 = INT64_MAX;
	volatile int64_t t5 = -815LL;

	t5 = (((x45+x46)*x47)%x48);

	if (t5 != -63734578656LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x49 = INT32_MIN;
	static uint16_t x50 = 11U;
	uint32_t x51 = 31U;
	volatile int64_t t6 = -16625592798LL;

	t6 = (((x49+x50)*x51)%x52);

	if (t6 != 2147483989LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x53 = -1;
	static uint8_t x54 = 1U;
	int8_t x55 = -2;
	uint64_t x56 = 13536805LLU;
	volatile uint64_t t7 = 313428273462390LLU;

	t7 = (((x53+x54)*x55)%x56);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x57 = -1LL;
	int32_t x59 = 2983;
	static volatile uint8_t x60 = 1U;
	int64_t t8 = -24724LL;

	t8 = (((x57+x58)*x59)%x60);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x69 = INT8_MIN;
	static int64_t x70 = 226416541366LL;
	int16_t x71 = INT16_MIN;
	volatile uint64_t t9 = 950734931731090LLU;

	t9 = (((x69+x70)*x71)%x72);

	if (t9 != 105524352218438312LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x77 = INT16_MAX;
	int16_t x79 = -1;
	int64_t x80 = -437858LL;
	uint64_t t10 = 1283126LLU;

	t10 = (((x77+x78)*x79)%x80);

	if (t10 != 405092LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x82 = -687;
	static int64_t x83 = INT64_MAX;
	uint64_t t11 = 769763445LLU;

	t11 = (((x81+x82)*x83)%x84);

	if (t11 != 9223372035091934769LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x85 = INT16_MIN;
	int16_t x86 = INT16_MIN;
	int8_t x87 = 0;
	int64_t x88 = 27283837791626LL;
	int64_t t12 = 27957310LL;

	t12 = (((x85+x86)*x87)%x88);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x93 = -501;
	uint32_t x94 = 3364305U;
	volatile int64_t x95 = -1098LL;
	int64_t x96 = 65924126703243722LL;

	t13 = (((x93+x94)*x95)%x96);

	if (t13 != -3693456792LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x102 = -46;
	uint32_t x103 = UINT32_MAX;
	uint32_t t14 = 144U;

	t14 = (((x101+x102)*x103)%x104);

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x105 = INT16_MIN;
	int32_t x106 = 1240245;
	int16_t x108 = -130;
	volatile int32_t t15 = 1;

	t15 = (((x105+x106)*x107)%x108);

	if (t15 != -56) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x109 = 1433U;
	int8_t x111 = INT8_MAX;
	static uint8_t x112 = 1U;
	volatile int32_t t16 = -84;

	t16 = (((x109+x110)*x111)%x112);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = -1LL;
	int16_t x119 = INT16_MAX;
	int64_t t17 = 5LL;

	t17 = (((x117+x118)*x119)%x120);

	if (t17 != -15LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x125 = 231;
	volatile uint8_t x127 = 0U;
	uint64_t t18 = 80051668LLU;

	t18 = (((x125+x126)*x127)%x128);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x134 = -15471;
	static int16_t x135 = INT16_MIN;
	static volatile uint32_t x136 = UINT32_MAX;
	static volatile uint32_t t19 = 120609U;

	t19 = (((x133+x134)*x135)%x136);

	if (t19 != 1580695552U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x137 = UINT16_MAX;
	uint16_t x138 = 15U;
	int8_t x140 = 1;
	static int32_t t20 = 299937;

	t20 = (((x137+x138)*x139)%x140);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x145 = -1;
	static volatile int16_t x147 = -1;
	uint32_t x148 = UINT32_MAX;

	t21 = (((x145+x146)*x147)%x148);

	if (t21 != 4294810596LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x150 = 0LLU;
	static uint8_t x151 = 1U;
	uint64_t x152 = UINT64_MAX;
	static volatile uint64_t t22 = 5638852556222LLU;

	t22 = (((x149+x150)*x151)%x152);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x158 = -294397053;
	uint32_t x159 = 11797U;
	int32_t x160 = INT32_MAX;
	volatile uint64_t t23 = 689224272251LLU;

	t23 = (((x157+x158)*x159)%x160);

	if (t23 != 1943355799LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x161 = -1LL;
	int64_t x162 = 2810LL;
	static volatile int8_t x164 = INT8_MIN;
	int64_t t24 = -865175716LL;

	t24 = (((x161+x162)*x163)%x164);

	if (t24 != 114LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x165 = 66U;
	static int16_t x166 = -11;
	uint8_t x167 = 3U;
	uint16_t x168 = UINT16_MAX;
	static int32_t t25 = -964471167;

	t25 = (((x165+x166)*x167)%x168);

	if (t25 != 165) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x173 = INT32_MAX;
	int16_t x176 = -1;
	volatile uint64_t t26 = 76699049477314708LLU;

	t26 = (((x173+x174)*x175)%x176);

	if (t26 != 18446744071448337546LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x189 = 0U;
	int16_t x190 = -1;
	uint32_t x191 = UINT32_MAX;
	int16_t x192 = 1;
	uint32_t t27 = 0U;

	t27 = (((x189+x190)*x191)%x192);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x194 = -1;
	uint8_t x195 = 12U;
	int16_t x196 = -1;
	int32_t t28 = -6987;

	t28 = (((x193+x194)*x195)%x196);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x197 = UINT64_MAX;
	volatile uint64_t x198 = 724979405472945LLU;
	int8_t x199 = 6;
	volatile uint64_t t29 = 850212008LLU;

	t29 = (((x197+x198)*x199)%x200);

	if (t29 != 4349876432837664LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x201 = UINT64_MAX;
	int16_t x202 = INT16_MIN;
	volatile uint32_t x203 = UINT32_MAX;
	volatile int8_t x204 = -1;
	volatile uint64_t t30 = 1774LLU;

	t30 = (((x201+x202)*x203)%x204);

	if (t30 != 18446603331926261761LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x209 = INT64_MAX;
	uint64_t x210 = 1384732871LLU;
	uint16_t x212 = UINT16_MAX;
	volatile uint64_t t31 = 2696071LLU;

	t31 = (((x209+x210)*x211)%x212);

	if (t31 != 19813LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x213 = 10U;
	uint32_t x216 = 7U;
	static uint32_t t32 = 99205016U;

	t32 = (((x213+x214)*x215)%x216);

	if (t32 != 6U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x223 = INT8_MAX;
	volatile int64_t x224 = INT64_MIN;
	int64_t t33 = -52644LL;

	t33 = (((x221+x222)*x223)%x224);

	if (t33 != 833207752LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x229 = INT16_MIN;
	int64_t x231 = -1LL;
	uint16_t x232 = UINT16_MAX;
	volatile uint64_t t34 = 4319059122312716971LLU;

	t34 = (((x229+x230)*x231)%x232);

	if (t34 != 32449LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x233 = INT8_MIN;
	static uint32_t x234 = UINT32_MAX;
	volatile int8_t x235 = INT8_MAX;
	int32_t x236 = -1;
	uint32_t t35 = 85082700U;

	t35 = (((x233+x234)*x235)%x236);

	if (t35 != 4294950913U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x237 = UINT16_MAX;
	volatile int16_t x239 = INT16_MIN;
	static uint16_t x240 = UINT16_MAX;
	volatile uint32_t t36 = 280073U;

	t36 = (((x237+x238)*x239)%x240);

	if (t36 != 32764U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x241 = UINT32_MAX;
	uint64_t x242 = 16875870903605LLU;
	int64_t x244 = INT64_MIN;
	uint64_t t37 = 681924652LLU;

	t37 = (((x241+x242)*x243)%x244);

	if (t37 != 9223355156688904908LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x245 = -109295;
	uint32_t x246 = UINT32_MAX;
	static volatile uint8_t x247 = 31U;
	uint64_t x248 = UINT64_MAX;

	t38 = (((x245+x246)*x247)%x248);

	if (t38 != 4291579120LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x249 = 325694U;
	uint64_t x250 = UINT64_MAX;
	static int8_t x251 = INT8_MAX;
	static int32_t x252 = INT32_MIN;

	t39 = (((x249+x250)*x251)%x252);

	if (t39 != 41363011LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x257 = 350U;
	uint16_t x258 = 22U;
	static int32_t x259 = -1;
	uint32_t x260 = 31U;
	volatile uint32_t t40 = 736678031U;

	t40 = (((x257+x258)*x259)%x260);

	if (t40 != 4U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x267 = INT16_MIN;
	uint8_t x268 = UINT8_MAX;
	static volatile int32_t t41 = -2533571;

	t41 = (((x265+x266)*x267)%x268);

	if (t41 != -21) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x269 = -1;
	int64_t x270 = -1LL;
	uint64_t x271 = 2013658049324LLU;
	uint8_t x272 = UINT8_MAX;

	t42 = (((x269+x270)*x271)%x272);

	if (t42 != 183LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x277 = -42LL;
	volatile int8_t x278 = INT8_MIN;
	int64_t x279 = -17LL;
	volatile int32_t x280 = -1;

	t43 = (((x277+x278)*x279)%x280);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x286 = INT32_MIN;
	int32_t x288 = -4;
	volatile int64_t t44 = 85891313394696LL;

	t44 = (((x285+x286)*x287)%x288);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x297 = -6870720151985045LL;
	volatile uint32_t x298 = 4769117U;
	int32_t x299 = 143;
	uint64_t x300 = 2293LLU;
	uint64_t t45 = 2009799641LLU;

	t45 = (((x297+x298)*x299)%x300);

	if (t45 != 126LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x305 = INT32_MAX;
	int64_t x307 = 21657501146665337LL;
	int16_t x308 = -7677;
	volatile int64_t t46 = -26999LL;

	t46 = (((x305+x306)*x307)%x308);

	if (t46 != -1121LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x319 = 14U;
	int64_t x320 = INT64_MIN;

	t47 = (((x317+x318)*x319)%x320);

	if (t47 != 3494120LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x325 = 1LLU;
	uint64_t x326 = 358903324084082816LLU;
	int8_t x327 = INT8_MIN;
	uint8_t x328 = UINT8_MAX;
	uint64_t t48 = 3871414LLU;

	t48 = (((x325+x326)*x327)%x328);

	if (t48 != 252LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x329 = INT8_MAX;
	int8_t x330 = INT8_MIN;
	int32_t x331 = 6426;
	volatile int64_t x332 = -5470032611LL;

	t49 = (((x329+x330)*x331)%x332);

	if (t49 != -6426LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = -1LL;

	t50 = (((x333+x334)*x335)%x336);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x337 = -3875955;
	uint32_t x338 = 89U;
	static int8_t x339 = INT8_MIN;
	volatile int16_t x340 = INT16_MAX;
	volatile uint32_t t51 = 4658532U;

	t51 = (((x337+x338)*x339)%x340);

	if (t51 != 18468U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x341 = INT8_MIN;
	uint16_t x342 = 319U;
	int8_t x343 = INT8_MAX;
	uint64_t x344 = 1005082883855448088LLU;
	volatile uint64_t t52 = 54125296LLU;

	t52 = (((x341+x342)*x343)%x344);

	if (t52 != 24257LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x345 = 480U;
	uint64_t x346 = UINT64_MAX;
	volatile int8_t x347 = -1;
	int32_t x348 = -108;
	volatile uint64_t t53 = 3346029959799LLU;

	t53 = (((x345+x346)*x347)%x348);

	if (t53 != 18446744073709551137LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x354 = UINT64_MAX;
	uint16_t x355 = 3U;
	uint64_t x356 = 1296943839794044LLU;

	t54 = (((x353+x354)*x355)%x356);

	if (t54 != 35085LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x358 = INT64_MIN;
	int16_t x359 = 0;
	uint64_t t55 = 812LLU;

	t55 = (((x357+x358)*x359)%x360);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x362 = -13;
	int32_t x363 = -3978316;
	int32_t x364 = -11;
	static int32_t t56 = -71;

	t56 = (((x361+x362)*x363)%x364);

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x373 = 0;
	uint16_t x374 = 165U;
	uint8_t x375 = 15U;
	int32_t x376 = INT32_MIN;
	int32_t t57 = -2050;

	t57 = (((x373+x374)*x375)%x376);

	if (t57 != 2475) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x377 = INT32_MIN;
	uint32_t x378 = 45U;
	int16_t x379 = -1019;
	int64_t x380 = INT64_MIN;

	t58 = (((x377+x378)*x379)%x380);

	if (t58 != 2147437793LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x385 = -1LL;
	int64_t x386 = -9158837358LL;
	int8_t x387 = -4;
	uint8_t x388 = 105U;
	static volatile int64_t t59 = -32LL;

	t59 = (((x385+x386)*x387)%x388);

	if (t59 != 91LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x394 = 3593LLU;
	int32_t x395 = INT32_MIN;
	uint64_t t60 = 267624206542548LLU;

	t60 = (((x393+x394)*x395)%x396);

	if (t60 != 18446736299818745856LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x401 = -1;
	static uint64_t x402 = UINT64_MAX;
	int32_t x403 = 1129;
	static uint64_t x404 = 55942833222LLU;
	static volatile uint64_t t61 = 66062439956626419LLU;

	t61 = (((x401+x402)*x403)%x404);

	if (t61 != 12696076304LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x405 = -1;
	uint32_t x407 = UINT32_MAX;
	int16_t x408 = 159;
	uint32_t t62 = 74219U;

	t62 = (((x405+x406)*x407)%x408);

	if (t62 != 118U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x409 = 1;
	volatile uint16_t x410 = 0U;
	int8_t x411 = -47;
	volatile uint16_t x412 = 19649U;
	volatile int32_t t63 = 1464;

	t63 = (((x409+x410)*x411)%x412);

	if (t63 != -47) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x417 = 16LLU;
	static int32_t x418 = -175998;
	int32_t x420 = -22;

	t64 = (((x417+x418)*x419)%x420);

	if (t64 != 18446744073687201902LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x433 = -1;
	int8_t x435 = INT8_MIN;
	int16_t x436 = INT16_MIN;

	t65 = (((x433+x434)*x435)%x436);

	if (t65 != 4096LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x437 = UINT8_MAX;
	uint32_t x438 = 2016U;
	volatile int16_t x439 = -255;
	static volatile uint64_t x440 = UINT64_MAX;

	t66 = (((x437+x438)*x439)%x440);

	if (t66 != 4294388191LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x443 = 1905715910U;
	uint16_t x444 = 40U;
	uint32_t t67 = 33027532U;

	t67 = (((x441+x442)*x443)%x444);

	if (t67 != 18U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x453 = 0;
	int8_t x455 = 0;
	int64_t t68 = -153LL;

	t68 = (((x453+x454)*x455)%x456);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x461 = -1;
	static int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MAX;
	int8_t x464 = 1;
	volatile int32_t t69 = -2674816;

	t69 = (((x461+x462)*x463)%x464);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x465 = UINT32_MAX;
	uint16_t x467 = UINT16_MAX;
	volatile int16_t x468 = -1;
	volatile uint32_t t70 = 214872106U;

	t70 = (((x465+x466)*x467)%x468);

	if (t70 != 6487965U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x470 = INT16_MIN;
	int32_t x471 = -399;
	volatile uint32_t t71 = 83187267U;

	t71 = (((x469+x470)*x471)%x472);

	if (t71 != 1881730896U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x474 = 0U;
	volatile uint16_t x475 = UINT16_MAX;
	int64_t t72 = 935LL;

	t72 = (((x473+x474)*x475)%x476);

	if (t72 != -65535LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x481 = INT16_MIN;
	int64_t x482 = 1334282680LL;
	int16_t x483 = -1;
	volatile uint64_t t73 = 57047LLU;

	t73 = (((x481+x482)*x483)%x484);

	if (t73 != 98741392547494354LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x485 = INT8_MIN;
	uint8_t x486 = 3U;
	uint64_t x487 = 209898879760308872LLU;
	static int32_t x488 = INT32_MAX;
	volatile uint64_t t74 = 7510759963LLU;

	t74 = (((x485+x486)*x487)%x488);

	if (t74 != 227533783LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x493 = INT8_MAX;
	uint16_t x495 = 2938U;
	int8_t x496 = INT8_MAX;

	t75 = (((x493+x494)*x495)%x496);

	if (t75 != 35LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x497 = UINT64_MAX;
	static int16_t x500 = INT16_MAX;
	volatile uint64_t t76 = 990825960572104273LLU;

	t76 = (((x497+x498)*x499)%x500);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x506 = 13;
	int8_t x507 = INT8_MIN;
	volatile int64_t t77 = -368343105416286LL;

	t77 = (((x505+x506)*x507)%x508);

	if (t77 != 4294965760LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x509 = 251243LL;
	uint64_t x510 = UINT64_MAX;
	int64_t x511 = INT64_MIN;
	int8_t x512 = INT8_MAX;
	static volatile uint64_t t78 = 25154LLU;

	t78 = (((x509+x510)*x511)%x512);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x513 = INT16_MIN;
	static int16_t x514 = 0;
	static int64_t x515 = -1LL;
	static volatile int64_t t79 = 58319057LL;

	t79 = (((x513+x514)*x515)%x516);

	if (t79 != 32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x526 = 44U;
	int32_t x527 = INT32_MIN;
	int16_t x528 = INT16_MIN;
	volatile uint32_t t80 = 182729079U;

	t80 = (((x525+x526)*x527)%x528);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x529 = INT32_MIN;
	int64_t x530 = 14969060LL;
	int32_t x531 = 16239433;
	uint32_t x532 = UINT32_MAX;
	volatile int64_t t81 = -8671LL;

	t81 = (((x529+x530)*x531)%x532);

	if (t81 != -3962590089LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x545 = INT8_MIN;
	static int8_t x546 = INT8_MIN;
	static uint64_t x547 = 11558645163539015LLU;
	volatile int8_t x548 = 2;
	uint64_t t82 = 146081956860697LLU;

	t82 = (((x545+x546)*x547)%x548);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x553 = INT8_MAX;
	int16_t x554 = -509;
	static int8_t x555 = -1;
	uint64_t x556 = 31664LLU;

	t83 = (((x553+x554)*x555)%x556);

	if (t83 != 382LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x557 = 387U;
	uint16_t x558 = 4813U;
	static int16_t x559 = INT16_MAX;
	uint16_t x560 = 4153U;
	static int32_t t84 = -202518;

	t84 = (((x557+x558)*x559)%x560);

	if (t84 != 3269) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x565 = -1;
	int8_t x566 = -29;
	volatile int16_t x567 = INT16_MIN;
	int16_t x568 = -2279;
	volatile int32_t t85 = -1949;

	t85 = (((x565+x566)*x567)%x568);

	if (t85 != 791) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x569 = 11;
	int8_t x570 = INT8_MIN;
	uint16_t x572 = 73U;

	t86 = (((x569+x570)*x571)%x572);

	if (t86 != 44) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x573 = INT32_MAX;
	int64_t x574 = INT64_MIN;
	static uint16_t x575 = 0U;
	uint64_t x576 = 1375831LLU;

	t87 = (((x573+x574)*x575)%x576);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x577 = 297303497LL;
	volatile uint8_t x578 = UINT8_MAX;
	static uint64_t x579 = 295649253465LLU;
	int16_t x580 = -1;
	static volatile uint64_t t88 = 296652897536586404LLU;

	t88 = (((x577+x578)*x579)%x580);

	if (t88 != 14110656036305294216LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x581 = 1637447;
	int16_t x582 = -1;
	int32_t t89 = -40911;

	t89 = (((x581+x582)*x583)%x584);

	if (t89 != 23) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x585 = UINT64_MAX;
	int16_t x586 = -1;
	int8_t x588 = INT8_MIN;
	uint64_t t90 = 445879528397LLU;

	t90 = (((x585+x586)*x587)%x588);

	if (t90 != 114LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x593 = 37;
	int8_t x594 = -1;
	uint8_t x595 = 3U;
	volatile uint64_t t91 = 3911LLU;

	t91 = (((x593+x594)*x595)%x596);

	if (t91 != 108LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x597 = 1280;
	int32_t x598 = -1;
	int64_t x599 = -1LL;
	int64_t t92 = 11LL;

	t92 = (((x597+x598)*x599)%x600);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x601 = 323;
	int8_t x603 = -1;
	static volatile uint64_t x604 = 809086436393LLU;
	uint64_t t93 = 35009467601691965LLU;

	t93 = (((x601+x602)*x603)%x604);

	if (t93 != 521587566798LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x609 = 802765U;
	static uint16_t x610 = 12021U;
	uint32_t x611 = 14998U;
	volatile int16_t x612 = -1;
	volatile uint32_t t94 = 20414336U;

	t94 = (((x609+x610)*x611)%x612);

	if (t94 != 3630225836U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x613 = UINT64_MAX;
	uint16_t x615 = 2377U;
	static int16_t x616 = INT16_MIN;
	uint64_t t95 = 15837678991075234LLU;

	t95 = (((x613+x614)*x615)%x616);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x618 = -6;
	int32_t x619 = INT32_MIN;
	static int16_t x620 = -1;
	volatile uint64_t t96 = 849LLU;

	t96 = (((x617+x618)*x619)%x620);

	if (t96 != 8287859043024764928LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x621 = -1;
	volatile int16_t x622 = 3;
	uint8_t x623 = UINT8_MAX;
	int16_t x624 = INT16_MAX;
	volatile int32_t t97 = 4045;

	t97 = (((x621+x622)*x623)%x624);

	if (t97 != 510) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x625 = 0U;
	int64_t x627 = 82645889197916LL;
	uint8_t x628 = UINT8_MAX;
	volatile int64_t t98 = 428LL;

	t98 = (((x625+x626)*x627)%x628);

	if (t98 != 65LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x629 = 46;
	uint16_t x631 = UINT16_MAX;
	int16_t x632 = -3522;
	int32_t t99 = 856;

	t99 = (((x629+x630)*x631)%x632);

	if (t99 != -2820) { NG(); } else { ; }
	
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


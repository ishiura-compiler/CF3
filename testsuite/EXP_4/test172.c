#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = -30780481LL;
volatile int64_t t1 = -7146542873667LL;
static volatile int8_t x15 = INT8_MIN;
int32_t t2 = 121701;
uint32_t x21 = 7723135U;
int64_t x23 = 79542563LL;
static volatile int64_t t3 = 5708986782505LL;
int16_t x26 = -2513;
static int8_t x42 = -1;
volatile int8_t x45 = INT8_MAX;
volatile uint32_t x47 = 9U;
uint64_t x48 = 6198637770LLU;
uint64_t t6 = 11994LLU;
uint8_t x55 = 12U;
volatile int64_t x68 = 39401208626632LL;
static uint32_t x70 = UINT32_MAX;
int64_t x73 = 603LL;
int64_t t11 = -74123032137190LL;
uint16_t x77 = UINT16_MAX;
static uint32_t x78 = 2550U;
uint64_t t12 = 88406727967031296LLU;
volatile int64_t x94 = INT64_MAX;
static int8_t x100 = 6;
uint64_t x109 = 35732LLU;
uint64_t t16 = 8290LLU;
uint16_t x115 = UINT16_MAX;
uint32_t x117 = 12826U;
int16_t x120 = INT16_MIN;
int16_t x121 = INT16_MIN;
uint64_t x125 = 1928594084901727586LLU;
int8_t x128 = 0;
volatile uint64_t t25 = 129308317719599LLU;
uint64_t x153 = 19958226335LLU;
int64_t x163 = -54172LL;
uint64_t x164 = 258833397509LLU;
static uint32_t x180 = 3904U;
int16_t x189 = -1;
uint16_t x190 = 3716U;
uint64_t x191 = 241032287648229781LLU;
volatile int8_t x195 = INT8_MIN;
volatile uint16_t x196 = 255U;
static int8_t x201 = -1;
uint16_t x204 = 848U;
uint64_t x208 = UINT64_MAX;
int64_t x214 = INT64_MAX;
int32_t x221 = INT32_MAX;
uint32_t x229 = 497645U;
uint32_t t39 = 43U;
uint64_t x234 = UINT64_MAX;
int32_t x236 = -1;
uint32_t x238 = UINT32_MAX;
uint64_t t41 = 79851019LLU;
int8_t x245 = 15;
volatile uint64_t x270 = UINT64_MAX;
uint8_t x271 = 27U;
uint64_t x275 = 15359LLU;
uint32_t x277 = 73506U;
int8_t x279 = -6;
static volatile uint32_t t50 = 56824U;
static uint16_t x281 = UINT16_MAX;
int32_t t51 = 65449813;
int8_t x285 = INT8_MIN;
int8_t x300 = INT8_MIN;
uint64_t t54 = 3129931LLU;
uint32_t x303 = UINT32_MAX;
int64_t x304 = -1LL;
volatile uint8_t x310 = 63U;
volatile int8_t x322 = -3;
volatile int64_t x332 = INT64_MIN;
static volatile uint64_t t58 = 882129656LLU;
uint32_t x343 = 211207354U;
int16_t x345 = INT16_MIN;
volatile uint64_t x348 = 271508757911099LLU;
static uint32_t x362 = 1672242U;
int32_t x364 = -1;
int32_t x375 = INT32_MAX;
uint64_t x376 = 23489LLU;
int16_t x380 = INT16_MAX;
static volatile int8_t x383 = -2;
volatile int32_t t67 = 11;
uint32_t x386 = UINT32_MAX;
int64_t x389 = INT64_MIN;
int32_t x390 = -1;
uint64_t x398 = 4593151034LLU;
uint64_t t70 = 960097LLU;
static volatile int32_t x408 = INT32_MAX;
static uint64_t t73 = 50578544575183828LLU;
uint64_t x427 = UINT64_MAX;
uint32_t x442 = 294328505U;
static uint64_t t76 = 11300877281LLU;
uint16_t x446 = UINT16_MAX;
volatile uint64_t t78 = 15007557LLU;
static volatile uint8_t x465 = UINT8_MAX;
uint64_t x474 = 4475029687LLU;
uint16_t x481 = 735U;
int8_t x482 = INT8_MAX;
static volatile int32_t t83 = -422543838;
uint16_t x487 = 632U;
uint16_t x489 = 1U;
uint8_t x495 = 6U;
int32_t x515 = INT32_MAX;
uint64_t x522 = 8632629144655LLU;
int8_t x542 = 1;
uint32_t x549 = 194682U;
uint16_t x554 = 0U;
static uint64_t x555 = UINT64_MAX;
uint8_t x559 = UINT8_MAX;


void f0(void) {
	static int16_t x5 = -1;
	int8_t x6 = INT8_MIN;
	int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MAX;
	int32_t t0 = -7;

	t0 = (x5*(x6+(x7-x8)));

	if (t0 != 33023) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 73U;
	int8_t x10 = INT8_MIN;
	static int32_t x12 = INT32_MIN;

	t1 = (x9*(x10+(x11-x12)));

	if (t1 != 154519321847LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 3;
	static int8_t x14 = INT8_MAX;
	int8_t x16 = -1;

	t2 = (x13*(x14+(x15-x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x22 = 4U;
	volatile int32_t x24 = INT32_MIN;

	t3 = (x21*(x22+(x23-x24)));

	if (t3 != 17199624106984025LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x25 = INT16_MIN;
	static int8_t x27 = INT8_MAX;
	uint32_t x28 = 16023305U;
	static volatile uint32_t t4 = 24455U;

	t4 = (x25*(x26+(x27-x28)));

	if (t4 != 1143832576U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = -9;
	static int16_t x43 = 18;
	int64_t x44 = 2644587624948LL;
	int64_t t5 = -282LL;

	t5 = (x41*(x42+(x43-x44)));

	if (t5 != 23801288624379LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x46 = 2990;

	t6 = (x45*(x46+(x47-x48)));

	if (t6 != 18446743286482935699LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x53 = 1023248393994LLU;
	uint32_t x54 = 437136189U;
	static uint32_t x56 = 185U;
	uint64_t t7 = 1478LLU;

	t7 = (x53*(x54+(x55-x56)));

	if (t7 != 4576868559906249120LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x57 = 250065LLU;
	uint8_t x58 = 60U;
	volatile int32_t x59 = -255483354;
	volatile uint32_t x60 = UINT32_MAX;
	uint64_t t8 = 8212881700569078LLU;

	t8 = (x57*(x58+(x59-x60)));

	if (t8 != 1010133567210195LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x65 = -1;
	static int64_t x66 = INT64_MAX;
	volatile uint32_t x67 = UINT32_MAX;
	volatile int64_t t9 = 34586570LL;

	t9 = (x65*(x66+(x67-x68)));

	if (t9 != -9223332639941116470LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x69 = INT32_MIN;
	int32_t x71 = INT32_MIN;
	volatile int16_t x72 = INT16_MIN;
	static uint32_t t10 = 6459622U;

	t10 = (x69*(x70+(x71-x72)));

	if (t10 != 2147483648U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x74 = INT32_MAX;
	volatile int16_t x75 = INT16_MIN;
	int8_t x76 = -3;

	t11 = (x73*(x74+(x75-x76)));

	if (t11 != 1294912881846LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x79 = 2978090077072526LLU;
	int64_t x80 = INT64_MIN;

	t12 = (x77*(x78+(x79-x80)));

	if (t12 != 1478320427164813692LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x85 = 2U;
	static volatile uint32_t x86 = UINT32_MAX;
	static volatile int16_t x87 = -1;
	volatile int16_t x88 = -1;
	volatile uint32_t t13 = 18252U;

	t13 = (x85*(x86+(x87-x88)));

	if (t13 != 4294967294U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x93 = INT8_MAX;
	int32_t x95 = -1;
	static int64_t x96 = INT64_MAX;
	static volatile int64_t t14 = 2LL;

	t14 = (x93*(x94+(x95-x96)));

	if (t14 != -127LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x97 = 4;
	uint16_t x98 = 245U;
	static int8_t x99 = -14;
	volatile int32_t t15 = 823308244;

	t15 = (x97*(x98+(x99-x100)));

	if (t15 != 900) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x110 = -4;
	int8_t x111 = INT8_MAX;
	volatile int16_t x112 = INT16_MIN;

	t16 = (x109*(x110+(x111-x112)));

	if (t16 != 1175261212LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x113 = 11;
	int64_t x114 = -1LL;
	static int32_t x116 = 1;
	static int64_t t17 = 66158527119LL;

	t17 = (x113*(x114+(x115-x116)));

	if (t17 != 720863LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x118 = 7U;
	volatile int16_t x119 = INT16_MIN;
	volatile uint32_t t18 = 84264U;

	t18 = (x117*(x118+(x119-x120)));

	if (t18 != 89782U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x122 = 175LLU;
	volatile int16_t x123 = INT16_MIN;
	volatile int64_t x124 = -1LL;
	static volatile uint64_t t19 = 203LLU;

	t19 = (x121*(x122+(x123-x124)));

	if (t19 != 1067974656LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x126 = -1;
	uint32_t x127 = 12346572U;
	volatile uint64_t t20 = 3233976230355LLU;

	t20 = (x125*(x126+(x127-x128)));

	if (t20 != 5380473075698484406LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x129 = 131209887175LL;
	static int16_t x130 = 1732;
	static uint16_t x131 = 0U;
	static volatile uint16_t x132 = 15U;
	volatile int64_t t21 = 55LL;

	t21 = (x129*(x130+(x131-x132)));

	if (t21 != 225287376279475LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x137 = 218537489895652LL;
	int32_t x138 = INT32_MIN;
	uint64_t x139 = 9825809206341104LLU;
	int8_t x140 = INT8_MIN;
	uint64_t t22 = 150LLU;

	t22 = (x137*(x138+(x139-x140)));

	if (t22 != 7726338872712321984LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = 4040;
	int8_t x143 = INT8_MAX;
	int8_t x144 = -2;
	int32_t t23 = 4643;

	t23 = (x141*(x142+(x143-x144)));

	if (t23 != -136609792) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x145 = -1;
	volatile uint16_t x146 = 1U;
	uint32_t x147 = 45U;
	int16_t x148 = INT16_MIN;
	static volatile uint32_t t24 = 4059384U;

	t24 = (x145*(x146+(x147-x148)));

	if (t24 != 4294934482U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x149 = UINT32_MAX;
	uint64_t x150 = 486LLU;
	uint16_t x151 = UINT16_MAX;
	uint64_t x152 = 682LLU;

	t25 = (x149*(x150+(x151-x152)));

	if (t25 != 280628868088005LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x154 = 19U;
	int64_t x155 = -1LL;
	uint16_t x156 = UINT16_MAX;
	uint64_t t26 = 23013720780710LLU;

	t26 = (x153*(x154+(x155-x156)));

	if (t26 != 18445436470594761421LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x161 = 4LLU;
	static uint32_t x162 = 1714626093U;
	uint64_t t27 = 111907058939LLU;

	t27 = (x161*(x162+(x163-x164)));

	if (t27 != 18446743045234249264LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x165 = 0U;
	int64_t x166 = -1LL;
	static volatile uint64_t x167 = UINT64_MAX;
	int8_t x168 = INT8_MAX;
	uint64_t t28 = 20LLU;

	t28 = (x165*(x166+(x167-x168)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x173 = 58;
	uint16_t x174 = UINT16_MAX;
	int16_t x175 = INT16_MIN;
	volatile uint64_t x176 = 73342LLU;
	volatile uint64_t t29 = 38305025LLU;

	t29 = (x173*(x174+(x175-x176)));

	if (t29 != 18446744073707198266LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x177 = INT32_MAX;
	int8_t x178 = -13;
	static int8_t x179 = 3;
	static uint32_t t30 = 474U;

	t30 = (x177*(x178+(x179-x180)));

	if (t30 != 3914U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x181 = 1U;
	int64_t x182 = 319LL;
	uint16_t x183 = 908U;
	volatile uint8_t x184 = UINT8_MAX;
	volatile int64_t t31 = -104312322LL;

	t31 = (x181*(x182+(x183-x184)));

	if (t31 != 972LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x192 = -1179059609LL;
	uint64_t t32 = 2LLU;

	t32 = (x189*(x190+(x191-x192)));

	if (t32 != 18205711784882258510LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x193 = INT8_MAX;
	int8_t x194 = INT8_MIN;
	int32_t t33 = 127422314;

	t33 = (x193*(x194+(x195-x196)));

	if (t33 != -64897) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x202 = -1;
	static uint16_t x203 = UINT16_MAX;
	int32_t t34 = 832665777;

	t34 = (x201*(x202+(x203-x204)));

	if (t34 != -64686) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x205 = UINT8_MAX;
	uint16_t x206 = 459U;
	uint16_t x207 = 91U;
	uint64_t t35 = 6871482006544877182LLU;

	t35 = (x205*(x206+(x207-x208)));

	if (t35 != 140505LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x213 = -1;
	static uint16_t x215 = UINT16_MAX;
	uint64_t x216 = 0LLU;
	uint64_t t36 = 258781175LLU;

	t36 = (x213*(x214+(x215-x216)));

	if (t36 != 9223372036854710274LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x217 = 33;
	uint8_t x218 = 1U;
	uint32_t x219 = UINT32_MAX;
	int16_t x220 = -259;
	uint32_t t37 = 35711056U;

	t37 = (x217*(x218+(x219-x220)));

	if (t37 != 8547U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x222 = UINT8_MAX;
	uint32_t x223 = 327897U;
	uint16_t x224 = 542U;
	static volatile uint32_t t38 = 189639039U;

	t38 = (x221*(x222+(x223-x224)));

	if (t38 != 4294639686U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x230 = INT32_MIN;
	int8_t x231 = 1;
	int8_t x232 = INT8_MIN;

	t39 = (x229*(x230+(x231-x232)));

	if (t39 != 2211679853U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x233 = UINT64_MAX;
	int16_t x235 = INT16_MIN;
	uint64_t t40 = 30968308735274738LLU;

	t40 = (x233*(x234+(x235-x236)));

	if (t40 != 32768LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x237 = 44572143362319864LLU;
	volatile int8_t x239 = -1;
	static int16_t x240 = -1;

	t41 = (x237*(x238+(x239-x240)));

	if (t41 != 15230835114830387720LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x241 = 24U;
	int32_t x242 = 1084415;
	uint32_t x243 = 871406U;
	static int32_t x244 = INT32_MIN;
	uint32_t t42 = 89660U;

	t42 = (x241*(x242+(x243-x244)));

	if (t42 != 46939704U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x246 = 3U;
	uint64_t x247 = 178628068083175560LLU;
	int64_t x248 = -457738873LL;
	static uint64_t t43 = 1327135814064304LLU;

	t43 = (x245*(x246+(x247-x248)));

	if (t43 != 2679421028113716540LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x249 = INT32_MIN;
	static uint32_t x250 = 3126000U;
	int8_t x251 = INT8_MIN;
	int32_t x252 = -1;
	uint32_t t44 = 1178131826U;

	t44 = (x249*(x250+(x251-x252)));

	if (t44 != 2147483648U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x253 = -6335525LL;
	int64_t x254 = 5LL;
	int16_t x255 = -1;
	int16_t x256 = -268;
	volatile int64_t t45 = 25105671291690LL;

	t45 = (x253*(x254+(x255-x256)));

	if (t45 != -1723262800LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x257 = -1;
	int16_t x258 = INT16_MAX;
	int8_t x259 = 6;
	int64_t x260 = -27288099149LL;
	volatile int64_t t46 = 26911599LL;

	t46 = (x257*(x258+(x259-x260)));

	if (t46 != -27288131922LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x261 = -1;
	static uint16_t x262 = 218U;
	static volatile uint16_t x263 = UINT16_MAX;
	uint32_t x264 = 1629U;
	volatile uint32_t t47 = 1U;

	t47 = (x261*(x262+(x263-x264)));

	if (t47 != 4294903172U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x269 = INT8_MIN;
	uint8_t x272 = UINT8_MAX;
	static volatile uint64_t t48 = 1LLU;

	t48 = (x269*(x270+(x271-x272)));

	if (t48 != 29312LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x273 = -125;
	int32_t x274 = INT32_MIN;
	static int32_t x276 = INT32_MIN;
	volatile uint64_t t49 = 45455LLU;

	t49 = (x273*(x274+(x275-x276)));

	if (t49 != 18446744073707631741LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x278 = INT16_MIN;
	uint16_t x280 = 1U;

	t50 = (x277*(x278+(x279-x280)));

	if (t50 != 1885808146U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x282 = UINT8_MAX;
	int8_t x283 = INT8_MIN;
	int16_t x284 = -3217;

	t51 = (x281*(x282+(x283-x284)));

	if (t51 != 219149040) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x286 = UINT64_MAX;
	volatile uint64_t x287 = 409480LLU;
	uint64_t x288 = 209857085121LLU;
	uint64_t t52 = 32552209803955089LLU;

	t52 = (x285*(x286+(x287-x288)));

	if (t52 != 26861654482176LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x289 = -1;
	int8_t x290 = INT8_MAX;
	static int8_t x291 = 5;
	static int16_t x292 = INT16_MIN;
	int32_t t53 = -3;

	t53 = (x289*(x290+(x291-x292)));

	if (t53 != -32900) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x297 = INT32_MAX;
	volatile uint64_t x298 = 203303985124628LLU;
	int8_t x299 = -1;

	t54 = (x297*(x298+(x299-x300)));

	if (t54 != 12891432858659285613LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x301 = INT8_MAX;
	volatile uint8_t x302 = 0U;
	static volatile int64_t t55 = -61070643LL;

	t55 = (x301*(x302+(x303-x304)));

	if (t55 != 545460846592LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x309 = INT16_MAX;
	uint64_t x311 = 461012699770579LLU;
	static uint64_t x312 = UINT64_MAX;
	volatile uint64_t t56 = 14665229916552LLU;

	t56 = (x309*(x310+(x311-x312)));

	if (t56 != 15106003133384659181LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x321 = -1;
	int8_t x323 = INT8_MIN;
	int8_t x324 = -2;
	int32_t t57 = -31202882;

	t57 = (x321*(x322+(x323-x324)));

	if (t57 != 129) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x329 = UINT8_MAX;
	static int64_t x330 = 21LL;
	static uint64_t x331 = 14571557693LLU;

	t58 = (x329*(x330+(x331-x332)));

	if (t58 != 9223375752601992878LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x341 = UINT32_MAX;
	int8_t x342 = 6;
	static volatile int16_t x344 = -2377;
	static uint32_t t59 = 13877008U;

	t59 = (x341*(x342+(x343-x344)));

	if (t59 != 4083757559U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x346 = INT32_MIN;
	static volatile int64_t x347 = INT64_MIN;
	uint64_t t60 = 178168913898991LLU;

	t60 = (x345*(x346+(x347-x348)));

	if (t60 != 8896869347975069696LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x349 = 181LLU;
	uint32_t x350 = UINT32_MAX;
	static int32_t x351 = -116427609;
	uint64_t x352 = UINT64_MAX;
	static volatile uint64_t t61 = 154061751080LLU;

	t61 = (x349*(x350+(x351-x352)));

	if (t61 != 756315683347LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x357 = UINT8_MAX;
	uint8_t x358 = 54U;
	volatile int8_t x359 = INT8_MIN;
	uint16_t x360 = UINT16_MAX;
	volatile int32_t t62 = -13708;

	t62 = (x357*(x358+(x359-x360)));

	if (t62 != -16730295) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x361 = INT8_MIN;
	int64_t x363 = 32620880997LL;
	volatile int64_t t63 = -5097658979175LL;

	t63 = (x361*(x362+(x363-x364)));

	if (t63 != -4175686814720LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x365 = INT8_MAX;
	int64_t x366 = 21008263033948364LL;
	int32_t x367 = INT32_MAX;
	int8_t x368 = 8;
	int64_t t64 = -4385609352987321LL;

	t64 = (x365*(x366+(x367-x368)));

	if (t64 != 2668049678041864381LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x373 = 2U;
	uint32_t x374 = 231084947U;
	volatile uint64_t t65 = 6394018774080LLU;

	t65 = (x373*(x374+(x375-x376)));

	if (t65 != 4757090210LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x377 = 42305277941081106LLU;
	int32_t x378 = -1;
	uint64_t x379 = 7582LLU;
	uint64_t t66 = 6LLU;

	t66 = (x377*(x378+(x379-x380)));

	if (t66 != 4410426051085258012LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x381 = -1;
	int8_t x382 = -63;
	int8_t x384 = INT8_MIN;

	t67 = (x381*(x382+(x383-x384)));

	if (t67 != -63) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x385 = -16;
	uint16_t x387 = UINT16_MAX;
	uint16_t x388 = 592U;
	uint32_t t68 = 1U;

	t68 = (x385*(x386+(x387-x388)));

	if (t68 != 4293928224U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x391 = 423627005LLU;
	int64_t x392 = INT64_MIN;
	volatile uint64_t t69 = 920937283004823600LLU;

	t69 = (x389*(x390+(x391-x392)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x397 = UINT16_MAX;
	int8_t x399 = INT8_MAX;
	int32_t x400 = -62641;

	t70 = (x397*(x398+(x399-x400)));

	if (t70 != 301016266514070LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x405 = -164;
	int32_t x406 = INT32_MAX;
	volatile int16_t x407 = INT16_MAX;
	volatile int32_t t71 = 56778905;

	t71 = (x405*(x406+(x407-x408)));

	if (t71 != -5373788) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x413 = INT16_MIN;
	uint32_t x414 = UINT32_MAX;
	uint64_t x415 = 283825LLU;
	uint64_t x416 = UINT64_MAX;
	uint64_t t72 = 22328166846651LLU;

	t72 = (x413*(x414+(x415-x416)));

	if (t72 != 18446603326920818688LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x417 = UINT8_MAX;
	volatile uint64_t x418 = UINT64_MAX;
	int32_t x419 = -12199655;
	static volatile int8_t x420 = 46;

	t73 = (x417*(x418+(x419-x420)));

	if (t73 != 18446744070598627606LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x425 = 65624815;
	static int64_t x426 = -1LL;
	int16_t x428 = INT16_MIN;
	volatile uint64_t t74 = 109440719LLU;

	t74 = (x425*(x426+(x427-x428)));

	if (t74 != 2150262688290LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x433 = UINT32_MAX;
	static int8_t x434 = INT8_MIN;
	uint8_t x435 = UINT8_MAX;
	volatile int16_t x436 = INT16_MAX;
	uint32_t t75 = 151409U;

	t75 = (x433*(x434+(x435-x436)));

	if (t75 != 32640U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x441 = 232741762070LLU;
	uint16_t x443 = UINT16_MAX;
	static uint64_t x444 = 10LLU;

	t76 = (x441*(x442+(x443-x444)));

	if (t76 != 13177553063959787252LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x445 = -1LL;
	int8_t x447 = 58;
	static int64_t x448 = 1LL;
	static int64_t t77 = -1LL;

	t77 = (x445*(x446+(x447-x448)));

	if (t77 != -65592LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x457 = 6508772160618117LLU;
	uint8_t x458 = 5U;
	uint16_t x459 = 0U;
	static int8_t x460 = -19;

	t78 = (x457*(x458+(x459-x460)));

	if (t78 != 156210531854834808LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x461 = UINT64_MAX;
	uint16_t x462 = UINT16_MAX;
	int64_t x463 = -1LL;
	uint16_t x464 = 9U;
	volatile uint64_t t79 = 208674431078561LLU;

	t79 = (x461*(x462+(x463-x464)));

	if (t79 != 18446744073709486091LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x466 = -1;
	static int8_t x467 = INT8_MAX;
	uint64_t x468 = 5744LLU;
	uint64_t t80 = 3829087LLU;

	t80 = (x465*(x466+(x467-x468)));

	if (t80 != 18446744073708119026LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x469 = INT8_MIN;
	uint16_t x470 = UINT16_MAX;
	static int64_t x471 = -1LL;
	uint16_t x472 = 85U;
	static int64_t t81 = -1318265169104020769LL;

	t81 = (x469*(x470+(x471-x472)));

	if (t81 != -8377472LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x473 = -1LL;
	int32_t x475 = INT32_MIN;
	volatile int32_t x476 = -1;
	volatile uint64_t t82 = 419951LLU;

	t82 = (x473*(x474+(x475-x476)));

	if (t82 != 18446744071382005576LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x483 = INT8_MIN;
	uint8_t x484 = 15U;

	t83 = (x481*(x482+(x483-x484)));

	if (t83 != -11760) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x485 = 0U;
	int64_t x486 = INT64_MAX;
	uint64_t x488 = 425792801847032779LLU;
	volatile uint64_t t84 = 778264537332849LLU;

	t84 = (x485*(x486+(x487-x488)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x490 = 318U;
	static int8_t x491 = -38;
	static uint8_t x492 = UINT8_MAX;
	volatile int32_t t85 = -62;

	t85 = (x489*(x490+(x491-x492)));

	if (t85 != 25) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x493 = UINT64_MAX;
	int16_t x494 = INT16_MIN;
	static int8_t x496 = INT8_MAX;
	volatile uint64_t t86 = 1254143LLU;

	t86 = (x493*(x494+(x495-x496)));

	if (t86 != 32889LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x509 = -1LL;
	int16_t x510 = 10522;
	int32_t x511 = INT32_MIN;
	int64_t x512 = 9502806566LL;
	volatile int64_t t87 = 24LL;

	t87 = (x509*(x510+(x511-x512)));

	if (t87 != 11650279692LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x513 = -1;
	static volatile int8_t x514 = INT8_MIN;
	uint8_t x516 = 5U;
	volatile int32_t t88 = -809;

	t88 = (x513*(x514+(x515-x516)));

	if (t88 != -2147483514) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x517 = -1;
	int64_t x518 = INT64_MIN;
	int8_t x519 = INT8_MIN;
	volatile int64_t x520 = INT64_MIN;
	volatile int64_t t89 = -968935177910LL;

	t89 = (x517*(x518+(x519-x520)));

	if (t89 != 128LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x521 = -94135;
	volatile int8_t x523 = INT8_MIN;
	uint32_t x524 = 3259555U;
	uint64_t t90 = 44118013350919LLU;

	t90 = (x521*(x522+(x523-x524)));

	if (t90 != 17633707529281303436LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x525 = -37;
	int8_t x526 = INT8_MIN;
	uint32_t x527 = UINT32_MAX;
	uint16_t x528 = 6323U;
	uint32_t t91 = 91U;

	t91 = (x525*(x526+(x527-x528)));

	if (t91 != 238724U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x529 = -1LL;
	volatile int32_t x530 = -33;
	uint16_t x531 = 31U;
	int16_t x532 = -1;
	int64_t t92 = -33981060734LL;

	t92 = (x529*(x530+(x531-x532)));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x541 = -1;
	static uint32_t x543 = 124112642U;
	int16_t x544 = INT16_MAX;
	volatile uint32_t t93 = 123U;

	t93 = (x541*(x542+(x543-x544)));

	if (t93 != 4170887420U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x545 = INT8_MIN;
	int8_t x546 = -1;
	uint16_t x547 = UINT16_MAX;
	static int16_t x548 = -1;
	static int32_t t94 = -174349805;

	t94 = (x545*(x546+(x547-x548)));

	if (t94 != -8388480) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x550 = INT64_MIN;
	uint64_t x551 = UINT64_MAX;
	int64_t x552 = -2894626LL;
	volatile uint64_t t95 = 7982403525170137416LLU;

	t95 = (x549*(x550+(x551-x552)));

	if (t95 != 563531384250LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x553 = INT16_MIN;
	int64_t x556 = 855281833025LL;
	uint64_t t96 = 850766067393551LLU;

	t96 = (x553*(x554+(x555-x556)));

	if (t96 != 28025875104595968LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x557 = 267918067LL;
	uint64_t x558 = UINT64_MAX;
	int16_t x560 = INT16_MAX;
	uint64_t t97 = 1833657824226680140LLU;

	t97 = (x557*(x558+(x559-x560)));

	if (t97 != 18446735362889439245LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x565 = 4U;
	int8_t x566 = -1;
	static volatile uint16_t x567 = UINT16_MAX;
	static int16_t x568 = 2;
	volatile int32_t t98 = 1002;

	t98 = (x565*(x566+(x567-x568)));

	if (t98 != 262128) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x569 = 555372U;
	int64_t x570 = INT64_MIN;
	static int64_t x571 = INT64_MAX;
	uint8_t x572 = UINT8_MAX;
	static volatile int64_t t99 = 160LL;

	t99 = (x569*(x570+(x571-x572)));

	if (t99 != -142175232LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 5;
int8_t x28 = INT8_MIN;
static volatile int32_t t3 = 1;
int16_t x33 = INT16_MAX;
static uint8_t x38 = 8U;
int64_t x54 = -1LL;
static int8_t x58 = 22;
int32_t t10 = -7;
int16_t x61 = -6109;
volatile uint8_t x79 = UINT8_MAX;
int8_t x82 = INT8_MIN;
int8_t x89 = -1;
volatile uint32_t x91 = 45375U;
int8_t x93 = INT8_MAX;
static uint16_t x98 = 7U;
int32_t t20 = 868988763;
int16_t x123 = -1;
int32_t x124 = INT32_MIN;
int8_t x143 = INT8_MIN;
volatile int32_t t25 = -63;
int64_t x148 = 10LL;
volatile int32_t t26 = 7040;
uint8_t x166 = UINT8_MAX;
int32_t x168 = -1;
int32_t t30 = 407954;
static int8_t x170 = INT8_MIN;
int64_t x176 = -638831605454991LL;
static volatile int32_t t32 = -664405;
int8_t x187 = INT8_MIN;
int8_t x188 = -1;
static int32_t t35 = -325344;
int8_t x200 = 1;
static int32_t t39 = -1450005;
int16_t x215 = -1;
int16_t x217 = 1;
int32_t x220 = -22305958;
int16_t x222 = INT16_MAX;
static uint8_t x237 = 63U;
volatile int32_t x252 = INT32_MAX;
int32_t x253 = -1;
uint32_t x263 = 318779126U;
uint32_t x267 = 157424U;
int32_t t52 = 94138155;
int16_t x270 = INT16_MIN;
uint64_t x277 = UINT64_MAX;
int32_t x282 = -59829414;
uint16_t x287 = 24U;
volatile int16_t x297 = INT16_MAX;
uint64_t x301 = UINT64_MAX;
uint32_t x303 = 1U;
int32_t x316 = INT32_MIN;
int8_t x327 = 0;
static volatile int8_t x331 = INT8_MAX;
int16_t x333 = INT16_MIN;
volatile int32_t x341 = INT32_MAX;
int32_t x349 = -1;
static int16_t x350 = INT16_MIN;
uint16_t x351 = 0U;
int32_t t68 = -720685;
uint64_t x353 = 38LLU;
static int64_t x356 = 3675472523021104LL;
uint16_t x357 = UINT16_MAX;
uint64_t x358 = 28130025548386LLU;
static volatile int32_t t70 = -24837386;
volatile uint8_t x363 = 127U;
int64_t x366 = -1LL;
volatile int32_t x380 = -1;
int64_t x381 = -1LL;
int16_t x384 = INT16_MIN;
int16_t x385 = INT16_MAX;
volatile int64_t x392 = 856189207549LL;
int64_t x406 = 7810324723172LL;
uint64_t x411 = UINT64_MAX;
int32_t x420 = INT32_MIN;
static int64_t x423 = INT64_MAX;
static int32_t t83 = -213084871;
static uint8_t x433 = 21U;
uint64_t x449 = UINT64_MAX;
static uint8_t x454 = 60U;
uint64_t x455 = 25419360111006427LLU;
int32_t x456 = 238;
int32_t t88 = 389277820;
int8_t x461 = -1;
int8_t x464 = INT8_MIN;
int32_t t89 = -56991;
int32_t x467 = INT32_MAX;
uint8_t x476 = 1U;
int8_t x483 = INT8_MIN;
static int32_t t93 = 534;
int16_t x495 = INT16_MAX;
int32_t t95 = -127;
int16_t x502 = INT16_MIN;
volatile int16_t x507 = INT16_MAX;
uint32_t x508 = UINT32_MAX;
static volatile uint32_t x517 = 0U;
int64_t x518 = -67270LL;


void f0(void) {
	int8_t x13 = INT8_MIN;
	uint32_t x14 = 147561U;
	volatile int16_t x15 = INT16_MIN;
	int64_t x16 = INT64_MIN;
	volatile int32_t t0 = -14;

	t0 = ((x13*(x14+x15))<=x16);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x21 = -1;
	int16_t x22 = -1;
	int16_t x23 = -1;
	int32_t x24 = INT32_MIN;

	t1 = ((x21*(x22+x23))<=x24);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = -395022LL;
	int16_t x26 = -1;
	int16_t x27 = INT16_MIN;
	volatile int32_t t2 = 5542;

	t2 = ((x25*(x26+x27))<=x28);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = -46;
	int16_t x30 = 697;
	static uint8_t x31 = 60U;
	int32_t x32 = 79;

	t3 = ((x29*(x30+x31))<=x32);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x34 = UINT64_MAX;
	int64_t x35 = -1LL;
	volatile int8_t x36 = INT8_MIN;
	volatile int32_t t4 = -316;

	t4 = ((x33*(x34+x35))<=x36);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x37 = -1;
	int16_t x39 = 13123;
	int8_t x40 = 1;
	int32_t t5 = 10618;

	t5 = ((x37*(x38+x39))<=x40);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = INT8_MIN;
	volatile uint8_t x42 = 2U;
	static volatile uint64_t x43 = 49372LLU;
	volatile int16_t x44 = INT16_MIN;
	int32_t t6 = 151455;

	t6 = ((x41*(x42+x43))<=x44);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = 5;
	uint64_t x46 = UINT64_MAX;
	int64_t x47 = 554LL;
	volatile uint16_t x48 = 2U;
	static int32_t t7 = -6;

	t7 = ((x45*(x46+x47))<=x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = -1LL;
	int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MAX;
	int16_t x52 = INT16_MIN;
	volatile int32_t t8 = 4024;

	t8 = ((x49*(x50+x51))<=x52);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x53 = INT32_MAX;
	uint32_t x55 = 5172339U;
	static uint8_t x56 = 0U;
	volatile int32_t t9 = -660;

	t9 = ((x53*(x54+x55))<=x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = INT16_MIN;
	int16_t x59 = INT16_MAX;
	static volatile uint16_t x60 = UINT16_MAX;

	t10 = ((x57*(x58+x59))<=x60);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x62 = UINT64_MAX;
	int8_t x63 = INT8_MAX;
	static volatile int8_t x64 = 2;
	volatile int32_t t11 = 18904;

	t11 = ((x61*(x62+x63))<=x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x73 = UINT8_MAX;
	static volatile int16_t x74 = INT16_MIN;
	static uint32_t x75 = 190698U;
	static int8_t x76 = INT8_MAX;
	volatile int32_t t12 = 62;

	t12 = ((x73*(x74+x75))<=x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MIN;
	int64_t x80 = INT64_MAX;
	volatile int32_t t13 = 26134648;

	t13 = ((x77*(x78+x79))<=x80);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x81 = INT64_MIN;
	volatile uint64_t x83 = 35128903320LLU;
	volatile int32_t x84 = INT32_MAX;
	volatile int32_t t14 = 0;

	t14 = ((x81*(x82+x83))<=x84);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x90 = 3U;
	static volatile int16_t x92 = -971;
	volatile int32_t t15 = -572318436;

	t15 = ((x89*(x90+x91))<=x92);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x94 = INT16_MAX;
	uint16_t x95 = 10U;
	uint8_t x96 = 8U;
	static volatile int32_t t16 = 9290;

	t16 = ((x93*(x94+x95))<=x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = INT16_MAX;
	volatile int8_t x99 = INT8_MAX;
	uint8_t x100 = 1U;
	volatile int32_t t17 = -717422;

	t17 = ((x97*(x98+x99))<=x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x105 = 7U;
	volatile uint64_t x106 = UINT64_MAX;
	int64_t x107 = -1LL;
	int64_t x108 = -13327195405289206LL;
	int32_t t18 = 479;

	t18 = ((x105*(x106+x107))<=x108);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x109 = -48326;
	volatile uint16_t x110 = 1414U;
	int8_t x111 = INT8_MIN;
	int32_t x112 = -48;
	int32_t t19 = -10637;

	t19 = ((x109*(x110+x111))<=x112);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x117 = 3033U;
	int64_t x118 = -1LL;
	uint64_t x119 = UINT64_MAX;
	uint8_t x120 = 106U;

	t20 = ((x117*(x118+x119))<=x120);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x121 = 130117U;
	volatile int8_t x122 = -1;
	volatile int32_t t21 = 1;

	t21 = ((x121*(x122+x123))<=x124);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x125 = -5;
	static volatile int32_t x126 = INT32_MAX;
	static int64_t x127 = -1LL;
	int8_t x128 = 0;
	int32_t t22 = 2;

	t22 = ((x125*(x126+x127))<=x128);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x129 = UINT8_MAX;
	int8_t x130 = -1;
	int16_t x131 = -1;
	uint64_t x132 = 497589131930507LLU;
	int32_t t23 = -19546109;

	t23 = ((x129*(x130+x131))<=x132);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x137 = 16;
	volatile int8_t x138 = INT8_MIN;
	uint64_t x139 = 550298234LLU;
	int16_t x140 = 1;
	volatile int32_t t24 = -3015692;

	t24 = ((x137*(x138+x139))<=x140);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x141 = 5059U;
	static int16_t x142 = -21;
	int32_t x144 = INT32_MIN;

	t25 = ((x141*(x142+x143))<=x144);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x145 = -1;
	uint16_t x146 = 11U;
	uint64_t x147 = 169811269LLU;

	t26 = ((x145*(x146+x147))<=x148);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x149 = 3;
	int8_t x150 = INT8_MAX;
	uint32_t x151 = 45399546U;
	uint32_t x152 = 302274320U;
	volatile int32_t t27 = 774;

	t27 = ((x149*(x150+x151))<=x152);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = INT8_MIN;
	uint64_t x154 = 809946574169886078LLU;
	static uint32_t x155 = UINT32_MAX;
	volatile uint64_t x156 = 0LLU;
	volatile int32_t t28 = 1402;

	t28 = ((x153*(x154+x155))<=x156);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = INT32_MIN;
	uint8_t x162 = 1U;
	uint32_t x163 = UINT32_MAX;
	static int32_t x164 = INT32_MIN;
	int32_t t29 = -253;

	t29 = ((x161*(x162+x163))<=x164);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x165 = -1LL;
	static int16_t x167 = INT16_MIN;

	t30 = ((x165*(x166+x167))<=x168);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x169 = -15;
	volatile uint32_t x171 = 1896U;
	uint64_t x172 = 167895856005797LLU;
	static volatile int32_t t31 = 31629738;

	t31 = ((x169*(x170+x171))<=x172);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x173 = 6;
	static uint32_t x174 = UINT32_MAX;
	static volatile uint16_t x175 = 726U;

	t32 = ((x173*(x174+x175))<=x176);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x177 = 11976U;
	static uint32_t x178 = 24946831U;
	int8_t x179 = -37;
	uint8_t x180 = 2U;
	volatile int32_t t33 = 7;

	t33 = ((x177*(x178+x179))<=x180);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x181 = UINT64_MAX;
	uint64_t x182 = UINT64_MAX;
	volatile int8_t x183 = -1;
	uint64_t x184 = 54440687122LLU;
	int32_t t34 = -28;

	t34 = ((x181*(x182+x183))<=x184);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x185 = 39167U;
	int8_t x186 = INT8_MIN;

	t35 = ((x185*(x186+x187))<=x188);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x189 = 1U;
	static uint8_t x190 = 65U;
	int8_t x191 = INT8_MIN;
	static int32_t x192 = INT32_MIN;
	int32_t t36 = -23658;

	t36 = ((x189*(x190+x191))<=x192);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x193 = 121602LL;
	uint16_t x194 = 409U;
	int8_t x195 = INT8_MAX;
	volatile uint32_t x196 = UINT32_MAX;
	static int32_t t37 = 50;

	t37 = ((x193*(x194+x195))<=x196);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x197 = 863U;
	static int16_t x198 = -1;
	int64_t x199 = -1LL;
	static volatile int32_t t38 = 1;

	t38 = ((x197*(x198+x199))<=x200);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x201 = 40U;
	volatile uint32_t x202 = 53U;
	static volatile int32_t x203 = INT32_MAX;
	int8_t x204 = -5;

	t39 = ((x201*(x202+x203))<=x204);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x209 = 7053427;
	int32_t x210 = 215;
	int16_t x211 = 29;
	int16_t x212 = 2952;
	int32_t t40 = -1;

	t40 = ((x209*(x210+x211))<=x212);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x213 = 7U;
	static int16_t x214 = INT16_MIN;
	static int32_t x216 = -2;
	volatile int32_t t41 = 21525392;

	t41 = ((x213*(x214+x215))<=x216);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x218 = 7739486535388LLU;
	int16_t x219 = INT16_MAX;
	volatile int32_t t42 = -380714296;

	t42 = ((x217*(x218+x219))<=x220);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x221 = 48444U;
	int8_t x223 = INT8_MIN;
	int16_t x224 = -312;
	volatile int32_t t43 = -6400550;

	t43 = ((x221*(x222+x223))<=x224);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x225 = INT16_MIN;
	static int8_t x226 = INT8_MAX;
	int8_t x227 = INT8_MIN;
	int64_t x228 = INT64_MAX;
	int32_t t44 = -354078;

	t44 = ((x225*(x226+x227))<=x228);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x238 = -1;
	volatile uint32_t x239 = 24164U;
	volatile int32_t x240 = 10441;
	int32_t t45 = -4745;

	t45 = ((x237*(x238+x239))<=x240);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x241 = 130575080U;
	volatile uint16_t x242 = UINT16_MAX;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = 670U;
	static int32_t t46 = 9690;

	t46 = ((x241*(x242+x243))<=x244);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x245 = -507;
	int32_t x246 = -3829;
	int64_t x247 = -614497214LL;
	static int64_t x248 = INT64_MIN;
	int32_t t47 = 78;

	t47 = ((x245*(x246+x247))<=x248);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x249 = -598538884561278LL;
	int32_t x250 = INT32_MIN;
	int32_t x251 = INT32_MAX;
	int32_t t48 = -301;

	t48 = ((x249*(x250+x251))<=x252);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x254 = -7;
	static int8_t x255 = 25;
	int32_t x256 = 1124;
	int32_t t49 = -27;

	t49 = ((x253*(x254+x255))<=x256);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x257 = -7332;
	static uint8_t x258 = 0U;
	int32_t x259 = -3597;
	int64_t x260 = -855830969LL;
	volatile int32_t t50 = -396;

	t50 = ((x257*(x258+x259))<=x260);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x261 = UINT8_MAX;
	uint64_t x262 = UINT64_MAX;
	static volatile int16_t x264 = INT16_MAX;
	int32_t t51 = -1120;

	t51 = ((x261*(x262+x263))<=x264);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x265 = 5U;
	static uint16_t x266 = 1U;
	int16_t x268 = -1;

	t52 = ((x265*(x266+x267))<=x268);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x269 = 207526LL;
	int16_t x271 = INT16_MIN;
	static volatile int32_t x272 = INT32_MIN;
	int32_t t53 = -3222;

	t53 = ((x269*(x270+x271))<=x272);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x273 = 170LL;
	volatile int8_t x274 = -1;
	volatile int32_t x275 = 0;
	int16_t x276 = 1;
	static volatile int32_t t54 = 99176317;

	t54 = ((x273*(x274+x275))<=x276);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x278 = INT16_MIN;
	static uint64_t x279 = 11189772307174846LLU;
	static int32_t x280 = INT32_MAX;
	int32_t t55 = 14;

	t55 = ((x277*(x278+x279))<=x280);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x281 = 618975841U;
	uint16_t x283 = UINT16_MAX;
	int16_t x284 = INT16_MIN;
	int32_t t56 = -9300816;

	t56 = ((x281*(x282+x283))<=x284);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x285 = -1LL;
	int64_t x286 = 0LL;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t57 = 67365714;

	t57 = ((x285*(x286+x287))<=x288);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x298 = 108;
	int64_t x299 = -1LL;
	volatile int16_t x300 = INT16_MIN;
	volatile int32_t t58 = 1;

	t58 = ((x297*(x298+x299))<=x300);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x302 = INT32_MIN;
	int32_t x304 = -1;
	int32_t t59 = -3171822;

	t59 = ((x301*(x302+x303))<=x304);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x305 = UINT64_MAX;
	uint64_t x306 = 7064277363165LLU;
	static volatile uint8_t x307 = 98U;
	int16_t x308 = -9;
	volatile int32_t t60 = -83733181;

	t60 = ((x305*(x306+x307))<=x308);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x313 = INT16_MIN;
	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	volatile int32_t t61 = -421656209;

	t61 = ((x313*(x314+x315))<=x316);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x317 = 53;
	uint32_t x318 = 189544161U;
	uint64_t x319 = UINT64_MAX;
	uint8_t x320 = 55U;
	volatile int32_t t62 = 162247;

	t62 = ((x317*(x318+x319))<=x320);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x325 = UINT64_MAX;
	int32_t x326 = -1;
	int32_t x328 = INT32_MAX;
	static volatile int32_t t63 = -451412041;

	t63 = ((x325*(x326+x327))<=x328);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x329 = -1;
	static int64_t x330 = INT64_MIN;
	uint8_t x332 = 1U;
	static volatile int32_t t64 = 7952;

	t64 = ((x329*(x330+x331))<=x332);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x334 = -1;
	int8_t x335 = -1;
	int32_t x336 = -20977588;
	static volatile int32_t t65 = -75760274;

	t65 = ((x333*(x334+x335))<=x336);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x342 = -1;
	uint64_t x343 = 43957311003432872LLU;
	volatile uint8_t x344 = UINT8_MAX;
	volatile int32_t t66 = -329769040;

	t66 = ((x341*(x342+x343))<=x344);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x345 = 2087LL;
	uint64_t x346 = 181424039LLU;
	uint16_t x347 = UINT16_MAX;
	volatile uint32_t x348 = 103870U;
	int32_t t67 = -58883346;

	t67 = ((x345*(x346+x347))<=x348);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x352 = 160694196;

	t68 = ((x349*(x350+x351))<=x352);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x354 = -1LL;
	int32_t x355 = 668067548;
	volatile int32_t t69 = -12611878;

	t69 = ((x353*(x354+x355))<=x356);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x359 = 1;
	static int16_t x360 = -764;

	t70 = ((x357*(x358+x359))<=x360);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x361 = 405312U;
	int8_t x362 = -1;
	static volatile uint64_t x364 = 11632155LLU;
	volatile int32_t t71 = -2824;

	t71 = ((x361*(x362+x363))<=x364);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x365 = INT64_MAX;
	uint64_t x367 = UINT64_MAX;
	static int64_t x368 = -1LL;
	volatile int32_t t72 = 958;

	t72 = ((x365*(x366+x367))<=x368);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x369 = 8671U;
	static int8_t x370 = INT8_MIN;
	uint32_t x371 = UINT32_MAX;
	uint8_t x372 = UINT8_MAX;
	int32_t t73 = 673;

	t73 = ((x369*(x370+x371))<=x372);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x377 = 0;
	int32_t x378 = -1;
	uint64_t x379 = 2159709277086LLU;
	int32_t t74 = 7548;

	t74 = ((x377*(x378+x379))<=x380);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x382 = INT64_MIN;
	uint32_t x383 = 30622U;
	int32_t t75 = 566;

	t75 = ((x381*(x382+x383))<=x384);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x386 = INT8_MAX;
	int64_t x387 = -1LL;
	uint16_t x388 = 36U;
	int32_t t76 = 24;

	t76 = ((x385*(x386+x387))<=x388);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x390 = INT8_MAX;
	int8_t x391 = 30;
	volatile int32_t t77 = 636;

	t77 = ((x389*(x390+x391))<=x392);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x397 = INT16_MAX;
	static uint64_t x398 = 59038423145LLU;
	volatile uint64_t x399 = 3547139901327304LLU;
	static int16_t x400 = INT16_MAX;
	volatile int32_t t78 = 1;

	t78 = ((x397*(x398+x399))<=x400);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x405 = 152395895LLU;
	volatile int8_t x407 = INT8_MIN;
	int32_t x408 = -234;
	int32_t t79 = 4163;

	t79 = ((x405*(x406+x407))<=x408);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x409 = 169625;
	volatile uint8_t x410 = 6U;
	volatile int16_t x412 = INT16_MIN;
	static int32_t t80 = 404290;

	t80 = ((x409*(x410+x411))<=x412);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x417 = INT8_MAX;
	volatile int32_t x418 = INT32_MAX;
	uint32_t x419 = 1U;
	volatile int32_t t81 = 41;

	t81 = ((x417*(x418+x419))<=x420);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x421 = -1166032LL;
	uint64_t x422 = 53089249LLU;
	int64_t x424 = -1LL;
	int32_t t82 = -3658475;

	t82 = ((x421*(x422+x423))<=x424);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x425 = 21567LL;
	volatile uint64_t x426 = 66007497LLU;
	uint32_t x427 = UINT32_MAX;
	uint16_t x428 = 17296U;

	t83 = ((x425*(x426+x427))<=x428);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x429 = INT16_MAX;
	uint16_t x430 = UINT16_MAX;
	int16_t x431 = -10;
	static int64_t x432 = INT64_MAX;
	int32_t t84 = 21672821;

	t84 = ((x429*(x430+x431))<=x432);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x434 = INT16_MIN;
	static volatile uint16_t x435 = UINT16_MAX;
	static volatile uint32_t x436 = 1461217083U;
	int32_t t85 = 1300901;

	t85 = ((x433*(x434+x435))<=x436);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x441 = 124;
	volatile int8_t x442 = 23;
	int64_t x443 = -1LL;
	static int8_t x444 = -4;
	volatile int32_t t86 = -344216335;

	t86 = ((x441*(x442+x443))<=x444);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x450 = -101776504LL;
	uint64_t x451 = 918333554456LLU;
	int16_t x452 = -493;
	static int32_t t87 = -6963057;

	t87 = ((x449*(x450+x451))<=x452);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x453 = 999555U;

	t88 = ((x453*(x454+x455))<=x456);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x462 = -1;
	int64_t x463 = -5671LL;

	t89 = ((x461*(x462+x463))<=x464);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x465 = INT16_MIN;
	int64_t x466 = -1LL;
	int64_t x468 = 13565259LL;
	int32_t t90 = -63033;

	t90 = ((x465*(x466+x467))<=x468);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x473 = INT8_MAX;
	volatile int32_t x474 = INT32_MIN;
	uint32_t x475 = 760568758U;
	int32_t t91 = -4040616;

	t91 = ((x473*(x474+x475))<=x476);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x477 = 184LLU;
	int8_t x478 = -1;
	uint32_t x479 = 191418714U;
	uint8_t x480 = 25U;
	volatile int32_t t92 = -1;

	t92 = ((x477*(x478+x479))<=x480);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x481 = INT32_MIN;
	volatile uint32_t x482 = UINT32_MAX;
	uint16_t x484 = UINT16_MAX;

	t93 = ((x481*(x482+x483))<=x484);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x489 = UINT32_MAX;
	uint8_t x490 = UINT8_MAX;
	int8_t x491 = -1;
	int64_t x492 = 10064154119381LL;
	int32_t t94 = 45;

	t94 = ((x489*(x490+x491))<=x492);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x493 = INT16_MIN;
	static volatile uint32_t x494 = 56735U;
	uint64_t x496 = UINT64_MAX;

	t95 = ((x493*(x494+x495))<=x496);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x501 = UINT16_MAX;
	int8_t x503 = 0;
	int16_t x504 = -1;
	static int32_t t96 = -1;

	t96 = ((x501*(x502+x503))<=x504);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x505 = UINT64_MAX;
	int16_t x506 = INT16_MIN;
	volatile int32_t t97 = -106;

	t97 = ((x505*(x506+x507))<=x508);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x509 = 28;
	int32_t x510 = -20415;
	volatile uint8_t x511 = 15U;
	volatile uint8_t x512 = 63U;
	int32_t t98 = -24043;

	t98 = ((x509*(x510+x511))<=x512);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x519 = -1;
	uint32_t x520 = UINT32_MAX;
	static volatile int32_t t99 = 22;

	t99 = ((x517*(x518+x519))<=x520);

	if (t99 != 1) { NG(); } else { ; }
	
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


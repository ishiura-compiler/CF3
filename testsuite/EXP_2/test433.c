#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
int8_t x3 = -1;
uint64_t x4 = 78692LLU;
volatile uint64_t t0 = 21LLU;
volatile uint8_t x6 = 0U;
int64_t t1 = -331LL;
int8_t x20 = -59;
int64_t x21 = -84352857LL;
uint16_t x25 = UINT16_MAX;
static uint32_t x30 = UINT32_MAX;
int64_t x32 = 557970686696LL;
static volatile int64_t x33 = 411282298205771LL;
static int32_t x35 = INT32_MAX;
int64_t x39 = -165268946526590LL;
int64_t t8 = -966091719846181LL;
uint32_t x46 = 538U;
uint8_t x47 = UINT8_MAX;
int64_t x53 = INT64_MIN;
volatile int32_t t11 = -2;
volatile int64_t x65 = INT64_MIN;
int32_t x68 = -1;
volatile uint64_t x69 = 4LLU;
static uint8_t x70 = 2U;
uint8_t x73 = UINT8_MAX;
volatile uint32_t x78 = 82938721U;
volatile int32_t t17 = -510764471;
int16_t x84 = INT16_MIN;
int16_t x87 = -44;
int16_t x93 = -1;
int8_t x99 = 3;
int32_t x100 = 1268;
static int64_t x109 = INT64_MIN;
uint64_t x114 = 423LLU;
uint16_t x116 = 9U;
int32_t t27 = -2;
uint32_t x129 = 11U;
volatile int16_t x131 = 240;
uint32_t x138 = 168U;
uint8_t x140 = 27U;
uint16_t x143 = 11U;
uint64_t x146 = 29LLU;
int32_t x157 = -1;
volatile uint32_t x171 = UINT32_MAX;
volatile int64_t t35 = 4199LL;
int8_t x181 = INT8_MAX;
int8_t x189 = 1;
static int8_t x191 = -6;
uint32_t x205 = 624972U;
uint8_t x207 = UINT8_MAX;
volatile int64_t x216 = -6515LL;
uint32_t x218 = UINT32_MAX;
int64_t x225 = INT64_MAX;
static uint32_t x226 = UINT32_MAX;
static int64_t x229 = INT64_MAX;
volatile int32_t t45 = 252325231;
static uint16_t x243 = 2U;
static int32_t x245 = -401885;
volatile int32_t x257 = -120;
volatile int32_t t51 = 248;
uint8_t x271 = UINT8_MAX;
static uint64_t x272 = 7LLU;
volatile uint64_t t52 = 1LLU;
uint16_t x277 = 1U;
int64_t x285 = INT64_MIN;
int64_t x288 = -1LL;
int64_t t55 = 15LL;
uint64_t x289 = 222058569714LLU;
static uint16_t x290 = 7U;
volatile int8_t x291 = -1;
volatile int16_t x299 = INT16_MIN;
volatile uint16_t x300 = 5607U;
volatile int32_t x304 = INT32_MIN;
static int32_t t58 = 79347;
int16_t x309 = INT16_MIN;
volatile int16_t x321 = INT16_MIN;
int32_t x322 = -1;
int64_t x327 = INT64_MIN;
volatile uint64_t t61 = 198LLU;
int8_t x335 = -1;
uint16_t x341 = 28602U;
int8_t x349 = INT8_MIN;
uint8_t x352 = 4U;
uint8_t x354 = UINT8_MAX;
int16_t x356 = INT16_MAX;
volatile int32_t t66 = -277;
int32_t x368 = INT32_MAX;
volatile uint8_t x375 = 3U;
static int32_t x376 = 12603;
int8_t x382 = 0;
int32_t x383 = INT32_MIN;
volatile uint64_t t72 = 1LLU;
int64_t x397 = INT64_MAX;
uint64_t x403 = UINT64_MAX;
volatile int64_t x429 = -31787LL;
int32_t x430 = 3;
int32_t t77 = -14395;
static int64_t x434 = -27891083439321253LL;
uint8_t x436 = 1U;
int32_t t78 = 1670;
int32_t x440 = INT32_MIN;
volatile uint64_t x441 = 2712040LLU;
volatile int64_t x442 = -914545607027016987LL;
int64_t x473 = 182041LL;
uint32_t x483 = 3U;
int32_t x488 = 1523510;
volatile int16_t x490 = -1;
uint64_t x492 = UINT64_MAX;
int32_t x507 = INT32_MIN;
int8_t x514 = -7;
uint64_t x515 = UINT64_MAX;
uint32_t x517 = 15U;
uint32_t x518 = UINT32_MAX;
int16_t x525 = -5;
int32_t t94 = 109;
int32_t x529 = INT32_MAX;
int16_t x535 = INT16_MIN;
int32_t x536 = INT32_MAX;
int16_t x556 = -1;
int32_t t99 = -39529;


void f0(void) {
	volatile int64_t x2 = 685599490698004157LL;

	t0 = ((x1==(x2*x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = -55;
	int16_t x7 = INT16_MIN;
	volatile int64_t x8 = INT64_MAX;

	t1 = ((x5==(x6*x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = 1866;
	int8_t x18 = 0;
	static int8_t x19 = 60;
	volatile int32_t t2 = -22;

	t2 = ((x17==(x18*x19))/x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x22 = INT32_MAX;
	uint32_t x23 = 503U;
	int32_t x24 = INT32_MIN;
	volatile int32_t t3 = -5;

	t3 = ((x21==(x22*x23))/x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x26 = 244;
	int16_t x27 = -7;
	uint32_t x28 = UINT32_MAX;
	volatile uint32_t t4 = 6U;

	t4 = ((x25==(x26*x27))/x28);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x29 = 177U;
	int8_t x31 = -1;
	int64_t t5 = 403868555321LL;

	t5 = ((x29==(x30*x31))/x32);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x34 = -1;
	int8_t x36 = -1;
	volatile int32_t t6 = -305244;

	t6 = ((x33==(x34*x35))/x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = 27386LL;
	volatile uint8_t x38 = 6U;
	uint16_t x40 = 10357U;
	static volatile int32_t t7 = -817823;

	t7 = ((x37==(x38*x39))/x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MIN;
	static uint32_t x42 = UINT32_MAX;
	uint64_t x43 = 264729724954171099LLU;
	int64_t x44 = INT64_MAX;

	t8 = ((x41==(x42*x43))/x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x45 = UINT64_MAX;
	volatile int64_t x48 = INT64_MIN;
	int64_t t9 = -3877367LL;

	t9 = ((x45==(x46*x47))/x48);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	int16_t x50 = INT16_MIN;
	uint64_t x51 = 5540117LLU;
	int32_t x52 = -1;
	volatile int32_t t10 = -4439;

	t10 = ((x49==(x50*x51))/x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x54 = 6854U;
	int16_t x55 = -1;
	int8_t x56 = INT8_MAX;

	t11 = ((x53==(x54*x55))/x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	uint8_t x58 = UINT8_MAX;
	int8_t x59 = INT8_MAX;
	volatile int32_t x60 = INT32_MIN;
	int32_t t12 = 275923;

	t12 = ((x57==(x58*x59))/x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x61 = 1752LLU;
	int32_t x62 = INT32_MAX;
	volatile uint64_t x63 = 2265240560310145121LLU;
	volatile int8_t x64 = INT8_MIN;
	volatile int32_t t13 = -3;

	t13 = ((x61==(x62*x63))/x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x66 = 2656125476562872LL;
	uint8_t x67 = 39U;
	volatile int32_t t14 = 83433;

	t14 = ((x65==(x66*x67))/x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x71 = UINT16_MAX;
	static uint8_t x72 = 75U;
	int32_t t15 = -872;

	t15 = ((x69==(x70*x71))/x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x74 = -1LL;
	volatile int32_t x75 = INT32_MAX;
	static int8_t x76 = 3;
	static volatile int32_t t16 = -4;

	t16 = ((x73==(x74*x75))/x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MIN;

	t17 = ((x77==(x78*x79))/x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	uint8_t x82 = 15U;
	int16_t x83 = INT16_MIN;
	int32_t t18 = 6;

	t18 = ((x81==(x82*x83))/x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = -64386646;
	volatile uint64_t x86 = 357454599615LLU;
	uint32_t x88 = 1U;
	volatile uint32_t t19 = 39233U;

	t19 = ((x85==(x86*x87))/x88);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MAX;
	static uint16_t x90 = 1U;
	int8_t x91 = -1;
	static uint64_t x92 = 23770894538084LLU;
	static uint64_t t20 = 140109938500886LLU;

	t20 = ((x89==(x90*x91))/x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x94 = 8U;
	volatile uint16_t x95 = UINT16_MAX;
	static volatile int8_t x96 = INT8_MIN;
	static volatile int32_t t21 = -187596046;

	t21 = ((x93==(x94*x95))/x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = 14326223LL;
	static int8_t x98 = INT8_MIN;
	volatile int32_t t22 = -63419;

	t22 = ((x97==(x98*x99))/x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = 1070033U;
	volatile uint32_t x102 = 85143U;
	uint8_t x103 = 69U;
	volatile int16_t x104 = -1;
	volatile int32_t t23 = -19464348;

	t23 = ((x101==(x102*x103))/x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x110 = -1;
	static uint64_t x111 = 197LLU;
	volatile int64_t x112 = -1LL;
	int64_t t24 = -6LL;

	t24 = ((x109==(x110*x111))/x112);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = UINT16_MAX;
	int32_t x115 = -1;
	static volatile int32_t t25 = 530104501;

	t25 = ((x113==(x114*x115))/x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = -1LL;
	int16_t x118 = 733;
	int32_t x119 = -1;
	volatile int8_t x120 = 3;
	volatile int32_t t26 = -9862;

	t26 = ((x117==(x118*x119))/x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = 2;
	volatile int16_t x126 = -1;
	int8_t x127 = -9;
	int8_t x128 = 39;

	t27 = ((x125==(x126*x127))/x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x130 = UINT32_MAX;
	volatile int32_t x132 = INT32_MIN;
	int32_t t28 = 14;

	t28 = ((x129==(x130*x131))/x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = INT16_MIN;
	int64_t x139 = -184243260LL;
	int32_t t29 = 982;

	t29 = ((x137==(x138*x139))/x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = INT8_MIN;
	uint8_t x142 = 0U;
	volatile int8_t x144 = -3;
	int32_t t30 = 3;

	t30 = ((x141==(x142*x143))/x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = -168;
	volatile int32_t x147 = -1;
	static volatile int16_t x148 = INT16_MIN;
	static int32_t t31 = -604165;

	t31 = ((x145==(x146*x147))/x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x158 = 12840243U;
	uint64_t x159 = 1LLU;
	volatile int64_t x160 = INT64_MIN;
	volatile int64_t t32 = 2617979911154526LL;

	t32 = ((x157==(x158*x159))/x160);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x165 = UINT64_MAX;
	uint8_t x166 = 41U;
	int16_t x167 = INT16_MIN;
	int16_t x168 = INT16_MIN;
	volatile int32_t t33 = 845567;

	t33 = ((x165==(x166*x167))/x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = -1;
	static uint16_t x170 = 23U;
	int16_t x172 = 27;
	volatile int32_t t34 = 127;

	t34 = ((x169==(x170*x171))/x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = -2287;
	uint16_t x175 = 2029U;
	volatile int64_t x176 = INT64_MAX;

	t35 = ((x173==(x174*x175))/x176);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x182 = 751U;
	int8_t x183 = 10;
	static int16_t x184 = -1;
	int32_t t36 = 218443;

	t36 = ((x181==(x182*x183))/x184);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x190 = 5533LLU;
	int32_t x192 = INT32_MIN;
	int32_t t37 = 1;

	t37 = ((x189==(x190*x191))/x192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x193 = -20326;
	uint16_t x194 = 3241U;
	int16_t x195 = -7;
	int32_t x196 = -1;
	static volatile int32_t t38 = 783613918;

	t38 = ((x193==(x194*x195))/x196);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x197 = INT32_MIN;
	int16_t x198 = -987;
	uint16_t x199 = 7U;
	int16_t x200 = INT16_MAX;
	int32_t t39 = -1026036751;

	t39 = ((x197==(x198*x199))/x200);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x206 = -7553;
	volatile uint32_t x208 = UINT32_MAX;
	uint32_t t40 = 9018U;

	t40 = ((x205==(x206*x207))/x208);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x209 = -168053736;
	uint16_t x210 = UINT16_MAX;
	static int8_t x211 = INT8_MIN;
	volatile int8_t x212 = 2;
	int32_t t41 = -656393064;

	t41 = ((x209==(x210*x211))/x212);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x213 = 122775U;
	uint16_t x214 = UINT16_MAX;
	static uint32_t x215 = 62099265U;
	int64_t t42 = -7504010798LL;

	t42 = ((x213==(x214*x215))/x216);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x217 = 3663011354LLU;
	volatile int32_t x219 = 2025;
	uint8_t x220 = 6U;
	volatile int32_t t43 = -8;

	t43 = ((x217==(x218*x219))/x220);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x227 = INT16_MIN;
	volatile uint32_t x228 = UINT32_MAX;
	volatile uint32_t t44 = 882718U;

	t44 = ((x225==(x226*x227))/x228);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x230 = 0U;
	int16_t x231 = 0;
	static int8_t x232 = INT8_MAX;

	t45 = ((x229==(x230*x231))/x232);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x241 = -935577240128822336LL;
	int8_t x242 = -1;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t46 = 0LLU;

	t46 = ((x241==(x242*x243))/x244);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x246 = INT8_MIN;
	int16_t x247 = -55;
	int64_t x248 = -1LL;
	int64_t t47 = -58LL;

	t47 = ((x245==(x246*x247))/x248);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x249 = UINT16_MAX;
	static int16_t x250 = INT16_MIN;
	volatile int16_t x251 = -49;
	volatile uint32_t x252 = UINT32_MAX;
	volatile uint32_t t48 = 13341213U;

	t48 = ((x249==(x250*x251))/x252);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x253 = INT8_MIN;
	uint16_t x254 = 16U;
	uint16_t x255 = 14476U;
	int16_t x256 = -27;
	static volatile int32_t t49 = 324920913;

	t49 = ((x253==(x254*x255))/x256);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x258 = INT32_MIN;
	volatile uint32_t x259 = UINT32_MAX;
	volatile int32_t x260 = INT32_MIN;
	volatile int32_t t50 = -133;

	t50 = ((x257==(x258*x259))/x260);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x265 = 5U;
	volatile int8_t x266 = -1;
	int64_t x267 = INT64_MAX;
	uint8_t x268 = UINT8_MAX;

	t51 = ((x265==(x266*x267))/x268);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x269 = 65204541471262804LLU;
	int8_t x270 = INT8_MIN;

	t52 = ((x269==(x270*x271))/x272);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x278 = UINT64_MAX;
	volatile int32_t x279 = INT32_MIN;
	int8_t x280 = 27;
	int32_t t53 = 54020047;

	t53 = ((x277==(x278*x279))/x280);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x281 = INT16_MIN;
	int32_t x282 = -46958146;
	volatile uint8_t x283 = 0U;
	static volatile int32_t x284 = INT32_MAX;
	volatile int32_t t54 = 1;

	t54 = ((x281==(x282*x283))/x284);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x286 = 3442LLU;
	uint32_t x287 = 3U;

	t55 = ((x285==(x286*x287))/x288);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x292 = UINT16_MAX;
	int32_t t56 = 786;

	t56 = ((x289==(x290*x291))/x292);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x297 = INT64_MIN;
	uint16_t x298 = 19U;
	volatile int32_t t57 = -140249335;

	t57 = ((x297==(x298*x299))/x300);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x301 = -1LL;
	int16_t x302 = INT16_MIN;
	static volatile uint32_t x303 = 1041U;

	t58 = ((x301==(x302*x303))/x304);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x310 = INT16_MAX;
	uint64_t x311 = 616075834LLU;
	int32_t x312 = -344;
	int32_t t59 = -39374910;

	t59 = ((x309==(x310*x311))/x312);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x323 = INT8_MAX;
	static volatile int64_t x324 = INT64_MIN;
	volatile int64_t t60 = -537577372347545LL;

	t60 = ((x321==(x322*x323))/x324);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x325 = INT16_MIN;
	uint8_t x326 = 1U;
	uint64_t x328 = 5120871LLU;

	t61 = ((x325==(x326*x327))/x328);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x333 = 335U;
	int16_t x334 = -1;
	int64_t x336 = INT64_MAX;
	volatile int64_t t62 = -22308155418940LL;

	t62 = ((x333==(x334*x335))/x336);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x337 = -1;
	int8_t x338 = -1;
	static int32_t x339 = INT32_MAX;
	volatile uint64_t x340 = UINT64_MAX;
	volatile uint64_t t63 = 217441884362285LLU;

	t63 = ((x337==(x338*x339))/x340);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x342 = 86582337LLU;
	static uint64_t x343 = 22657503118LLU;
	static int8_t x344 = 30;
	volatile int32_t t64 = -56467630;

	t64 = ((x341==(x342*x343))/x344);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x350 = 4U;
	int16_t x351 = INT16_MIN;
	int32_t t65 = 2;

	t65 = ((x349==(x350*x351))/x352);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x353 = 1;
	int8_t x355 = INT8_MIN;

	t66 = ((x353==(x354*x355))/x356);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x365 = INT8_MIN;
	volatile uint32_t x366 = 25769U;
	static uint64_t x367 = UINT64_MAX;
	volatile int32_t t67 = -114499822;

	t67 = ((x365==(x366*x367))/x368);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x373 = 7981LL;
	uint64_t x374 = 39LLU;
	volatile int32_t t68 = -93192932;

	t68 = ((x373==(x374*x375))/x376);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x377 = INT16_MIN;
	volatile uint8_t x378 = UINT8_MAX;
	int64_t x379 = -1LL;
	static volatile int8_t x380 = INT8_MAX;
	int32_t t69 = 0;

	t69 = ((x377==(x378*x379))/x380);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x381 = INT8_MAX;
	static int8_t x384 = INT8_MAX;
	int32_t t70 = -601;

	t70 = ((x381==(x382*x383))/x384);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x385 = UINT32_MAX;
	volatile int16_t x386 = -1;
	static int8_t x387 = 10;
	volatile int32_t x388 = -11;
	volatile int32_t t71 = -10864888;

	t71 = ((x385==(x386*x387))/x388);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x389 = -1;
	uint16_t x390 = 379U;
	uint16_t x391 = UINT16_MAX;
	uint64_t x392 = 475LLU;

	t72 = ((x389==(x390*x391))/x392);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x393 = INT16_MIN;
	static int8_t x394 = -1;
	uint32_t x395 = UINT32_MAX;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t73 = -895;

	t73 = ((x393==(x394*x395))/x396);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x398 = 44LLU;
	volatile int16_t x399 = INT16_MIN;
	int32_t x400 = -1;
	int32_t t74 = 29;

	t74 = ((x397==(x398*x399))/x400);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x401 = UINT8_MAX;
	static int64_t x402 = INT64_MIN;
	int16_t x404 = -1;
	static int32_t t75 = -3056;

	t75 = ((x401==(x402*x403))/x404);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x409 = -4258497390125413784LL;
	int16_t x410 = 511;
	static uint8_t x411 = 5U;
	static volatile uint8_t x412 = 7U;
	int32_t t76 = 33;

	t76 = ((x409==(x410*x411))/x412);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x431 = INT8_MIN;
	int8_t x432 = -8;

	t77 = ((x429==(x430*x431))/x432);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x433 = -1;
	int16_t x435 = 16;

	t78 = ((x433==(x434*x435))/x436);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x437 = -12;
	uint64_t x438 = 458834073LLU;
	static int32_t x439 = INT32_MIN;
	int32_t t79 = -9370830;

	t79 = ((x437==(x438*x439))/x440);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x443 = -1;
	int64_t x444 = INT64_MIN;
	int64_t t80 = -274388726218LL;

	t80 = ((x441==(x442*x443))/x444);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x445 = 15141U;
	uint32_t x446 = 2973073U;
	volatile int8_t x447 = -1;
	static int8_t x448 = -1;
	volatile int32_t t81 = 18120;

	t81 = ((x445==(x446*x447))/x448);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x449 = INT8_MIN;
	uint32_t x450 = UINT32_MAX;
	int8_t x451 = -1;
	int8_t x452 = INT8_MAX;
	int32_t t82 = 235764762;

	t82 = ((x449==(x450*x451))/x452);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x469 = 13U;
	static int64_t x470 = 91076LL;
	int32_t x471 = 6686878;
	int64_t x472 = INT64_MIN;
	int64_t t83 = -4561102108181787579LL;

	t83 = ((x469==(x470*x471))/x472);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x474 = INT32_MIN;
	uint64_t x475 = UINT64_MAX;
	uint16_t x476 = 968U;
	volatile int32_t t84 = 867504;

	t84 = ((x473==(x474*x475))/x476);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x481 = 7020028302356LL;
	static int32_t x482 = INT32_MAX;
	int16_t x484 = -975;
	volatile int32_t t85 = -2979;

	t85 = ((x481==(x482*x483))/x484);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x485 = INT64_MIN;
	int8_t x486 = 7;
	volatile int8_t x487 = 32;
	static int32_t t86 = -30491;

	t86 = ((x485==(x486*x487))/x488);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x489 = -1;
	int32_t x491 = -692665;
	uint64_t t87 = 19LLU;

	t87 = ((x489==(x490*x491))/x492);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x493 = 35U;
	static int16_t x494 = INT16_MAX;
	uint8_t x495 = 2U;
	int16_t x496 = -1;
	static volatile int32_t t88 = 0;

	t88 = ((x493==(x494*x495))/x496);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x501 = INT64_MIN;
	static uint64_t x502 = 36319122LLU;
	uint64_t x503 = 54927LLU;
	int8_t x504 = INT8_MIN;
	int32_t t89 = 7308;

	t89 = ((x501==(x502*x503))/x504);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x505 = -52;
	uint32_t x506 = 31484046U;
	volatile uint8_t x508 = 28U;
	int32_t t90 = 342444722;

	t90 = ((x505==(x506*x507))/x508);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x513 = INT16_MIN;
	volatile int8_t x516 = INT8_MAX;
	volatile int32_t t91 = 29;

	t91 = ((x513==(x514*x515))/x516);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x519 = 8319340810463934406LLU;
	static volatile uint64_t x520 = 54LLU;
	volatile uint64_t t92 = 60334514423528090LLU;

	t92 = ((x517==(x518*x519))/x520);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x521 = INT16_MIN;
	int16_t x522 = INT16_MAX;
	uint16_t x523 = 1U;
	int16_t x524 = INT16_MIN;
	static int32_t t93 = 78;

	t93 = ((x521==(x522*x523))/x524);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x526 = UINT8_MAX;
	uint8_t x527 = UINT8_MAX;
	int16_t x528 = -19;

	t94 = ((x525==(x526*x527))/x528);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x530 = 1U;
	static uint64_t x531 = UINT64_MAX;
	static volatile uint64_t x532 = 30432729LLU;
	static uint64_t t95 = 1LLU;

	t95 = ((x529==(x530*x531))/x532);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x533 = 696093982LL;
	uint16_t x534 = 1U;
	int32_t t96 = -961;

	t96 = ((x533==(x534*x535))/x536);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x541 = -12LL;
	uint32_t x542 = UINT32_MAX;
	uint64_t x543 = 13LLU;
	int64_t x544 = -34647LL;
	static volatile int64_t t97 = -238408LL;

	t97 = ((x541==(x542*x543))/x544);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x549 = 9U;
	static volatile int8_t x550 = 41;
	uint8_t x551 = UINT8_MAX;
	int32_t x552 = INT32_MAX;
	volatile int32_t t98 = 104487;

	t98 = ((x549==(x550*x551))/x552);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x553 = -1;
	uint16_t x554 = 17U;
	int32_t x555 = 1;

	t99 = ((x553==(x554*x555))/x556);

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
uint32_t x4 = 688U;
static int16_t x28 = -1;
uint16_t x35 = 2361U;
static uint64_t x37 = 29LLU;
static volatile uint16_t x43 = UINT16_MAX;
static volatile uint8_t x79 = 6U;
int64_t x80 = INT64_MAX;
int32_t x85 = 1539136;
int8_t x93 = INT8_MIN;
volatile uint32_t x110 = 249438380U;
static uint32_t x122 = UINT32_MAX;
static int64_t t19 = -2890984LL;
int8_t x126 = INT8_MIN;
int8_t x133 = INT8_MIN;
static uint32_t x142 = 30535368U;
int64_t x151 = -1LL;
uint8_t x153 = 3U;
int8_t x155 = INT8_MIN;
static int8_t x176 = 0;
int64_t t27 = 18LL;
int8_t x183 = INT8_MIN;
int32_t x184 = INT32_MIN;
static int32_t t29 = -3;
static volatile uint16_t x196 = 880U;
volatile uint64_t t32 = 106725028LLU;
static int32_t x204 = -135607689;
int32_t x215 = -1;
int16_t x227 = 3635;
uint8_t x230 = 15U;
int32_t x254 = -1;
volatile uint64_t t41 = 7LLU;
volatile uint32_t t44 = 160452067U;
static int64_t x275 = INT64_MIN;
volatile uint64_t t46 = 5073LLU;
uint64_t x305 = 4390361321LLU;
int32_t x309 = INT32_MAX;
volatile int32_t x317 = 17675851;
uint64_t x328 = 8205223304LLU;
uint32_t x335 = 2550U;
uint16_t x344 = 1244U;
static uint64_t t55 = 131145641233239LLU;
int8_t x346 = -1;
volatile int8_t x353 = INT8_MIN;
int32_t x359 = -352034;
int8_t x369 = INT8_MIN;
volatile uint32_t x370 = UINT32_MAX;
static uint64_t x386 = UINT64_MAX;
int32_t x393 = -56620;
volatile int32_t x416 = INT32_MIN;
uint64_t x419 = 4067941089321055556LLU;
uint64_t x422 = 3395795588577LLU;
volatile int32_t x429 = INT32_MIN;
static int32_t x430 = 87743;
static int32_t x431 = 53;
int16_t x438 = 40;
int32_t x443 = 300;
static int64_t t73 = -22898609670487LL;
int8_t x449 = INT8_MAX;
uint64_t x457 = 572346822452LLU;
static uint16_t x458 = 25U;
volatile int16_t x460 = 94;
uint64_t t76 = 1323LLU;
static volatile int16_t x462 = -1409;
volatile int16_t x473 = 1;
int16_t x474 = INT16_MAX;
uint32_t x475 = UINT32_MAX;
volatile int8_t x488 = -1;
int32_t x498 = -1;
int8_t x505 = INT8_MIN;
uint64_t x506 = 85686894LLU;
static volatile uint64_t t85 = 170208LLU;
uint8_t x529 = UINT8_MAX;
int8_t x533 = -1;
volatile uint64_t x534 = 4193306LLU;
int8_t x535 = 54;
int16_t x548 = -26;
int16_t x549 = -1;
int16_t x552 = 64;
volatile int32_t t92 = -676964;
int16_t x560 = -82;
uint8_t x561 = 7U;
static uint16_t x565 = 168U;
int8_t x574 = INT8_MIN;
int32_t t98 = 59;
uint32_t t99 = 214U;


void f0(void) {
	uint64_t x1 = 108996449LLU;
	int64_t x3 = -1LL;
	volatile uint64_t t0 = 15608775015LLU;

	t0 = ((x1|(x2*x3))+x4);

	if (t0 != 18446744069523581457LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x9 = 16U;
	static int32_t x10 = INT32_MIN;
	uint32_t x11 = 0U;
	volatile uint16_t x12 = 109U;
	volatile uint32_t t1 = 1178364U;

	t1 = ((x9|(x10*x11))+x12);

	if (t1 != 125U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = INT16_MAX;
	int16_t x14 = INT16_MAX;
	volatile int64_t x15 = 887LL;
	volatile uint64_t x16 = 236122289763892LLU;
	uint64_t t2 = 420958255416941987LLU;

	t2 = ((x13|(x14*x15))+x16);

	if (t2 != 236122318829107LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MIN;
	uint64_t x18 = UINT64_MAX;
	uint32_t x19 = UINT32_MAX;
	int16_t x20 = INT16_MIN;
	volatile uint64_t t3 = 36455LLU;

	t3 = ((x17|(x18*x19))+x20);

	if (t3 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = UINT32_MAX;
	static uint64_t x26 = 254LLU;
	volatile int16_t x27 = -1;
	uint64_t t4 = 7728146759950329LLU;

	t4 = ((x25|(x26*x27))+x28);

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x33 = UINT64_MAX;
	uint64_t x34 = 3523123LLU;
	int16_t x36 = INT16_MAX;
	volatile uint64_t t5 = 1599251LLU;

	t5 = ((x33|(x34*x35))+x36);

	if (t5 != 32766LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x38 = -1;
	uint64_t x39 = 62647222164681LLU;
	static uint32_t x40 = 430453U;
	static volatile uint64_t t6 = 1316855219LLU;

	t6 = ((x37|(x38*x39))+x40);

	if (t6 != 18446681426487817396LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MIN;
	int64_t x44 = -1LL;
	static volatile int64_t t7 = 23LL;

	t7 = ((x41|(x42*x43))+x44);

	if (t7 != -129LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x49 = -1;
	uint8_t x50 = UINT8_MAX;
	uint8_t x51 = 88U;
	int64_t x52 = -1LL;
	volatile int64_t t8 = -140LL;

	t8 = ((x49|(x50*x51))+x52);

	if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = -221;
	uint64_t x58 = 1018LLU;
	int64_t x59 = -1LL;
	int32_t x60 = -336401203;
	uint64_t t9 = 8330841157761626LLU;

	t9 = ((x57|(x58*x59))+x60);

	if (t9 != 18446744073373150196LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x65 = INT8_MIN;
	uint64_t x66 = 803529455790858089LLU;
	int32_t x67 = INT32_MIN;
	static int16_t x68 = INT16_MAX;
	uint64_t t10 = 23LLU;

	t10 = ((x65|(x66*x67))+x68);

	if (t10 != 32639LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x69 = 0U;
	static volatile uint16_t x70 = 0U;
	volatile int16_t x71 = -3;
	static int64_t x72 = -1LL;
	int64_t t11 = -66898957948483477LL;

	t11 = ((x69|(x70*x71))+x72);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x73 = UINT8_MAX;
	int8_t x74 = -7;
	static int16_t x75 = INT16_MIN;
	static int32_t x76 = 521094139;
	int32_t t12 = -28153438;

	t12 = ((x73|(x74*x75))+x76);

	if (t12 != 521323770) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x77 = -1176099468LL;
	static int16_t x78 = -1;
	volatile int64_t t13 = -7782584038507LL;

	t13 = ((x77|(x78*x79))+x80);

	if (t13 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x86 = 50810251U;
	int64_t x87 = -504358152LL;
	uint8_t x88 = UINT8_MAX;
	int64_t t14 = 41296553849LL;

	t14 = ((x85|(x86*x87))+x88);

	if (t14 != -25626564295688729LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x89 = INT32_MIN;
	uint8_t x90 = 0U;
	static uint32_t x91 = 362722998U;
	uint32_t x92 = 7070415U;
	uint32_t t15 = 407U;

	t15 = ((x89|(x90*x91))+x92);

	if (t15 != 2154554063U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x94 = INT8_MAX;
	static uint64_t x95 = UINT64_MAX;
	int64_t x96 = 16LL;
	volatile uint64_t t16 = 92927LLU;

	t16 = ((x93|(x94*x95))+x96);

	if (t16 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x109 = UINT8_MAX;
	uint64_t x111 = 916LLU;
	static uint8_t x112 = 1U;
	uint64_t t17 = 23473LLU;

	t17 = ((x109|(x110*x111))+x112);

	if (t17 != 228485556224LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x113 = 6U;
	int16_t x114 = 66;
	uint16_t x115 = UINT16_MAX;
	int64_t x116 = 1053687495802187956LL;
	static int64_t t18 = -15533861752509533LL;

	t18 = ((x113|(x114*x115))+x116);

	if (t18 != 1053687495806513266LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x121 = INT16_MAX;
	int8_t x123 = -9;
	int64_t x124 = INT64_MIN;

	t19 = ((x121|(x122*x123))+x124);

	if (t19 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x125 = INT16_MAX;
	volatile int8_t x127 = 0;
	uint8_t x128 = 5U;
	volatile int32_t t20 = -14;

	t20 = ((x125|(x126*x127))+x128);

	if (t20 != 32772) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x129 = 1;
	int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MAX;
	int64_t x132 = 132941256LL;
	volatile int64_t t21 = -5LL;

	t21 = ((x129|(x130*x131))+x132);

	if (t21 != 128779721LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x134 = UINT16_MAX;
	uint16_t x135 = 18U;
	static uint64_t x136 = 11641036899912681LLU;
	uint64_t t22 = 12019LLU;

	t22 = ((x133|(x134*x135))+x136);

	if (t22 != 11641036899912663LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x141 = INT32_MIN;
	int32_t x143 = -7;
	int64_t x144 = -274007888639LL;
	int64_t t23 = 11264300LL;

	t23 = ((x141|(x142*x143))+x144);

	if (t23 != -269926668919LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x149 = INT32_MIN;
	volatile uint64_t x150 = UINT64_MAX;
	int64_t x152 = INT64_MIN;
	uint64_t t24 = 3724282217LLU;

	t24 = ((x149|(x150*x151))+x152);

	if (t24 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x154 = INT8_MIN;
	int64_t x156 = -1LL;
	volatile int64_t t25 = 1021443965443119898LL;

	t25 = ((x153|(x154*x155))+x156);

	if (t25 != 16386LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x169 = INT8_MIN;
	int8_t x170 = 1;
	volatile uint8_t x171 = 0U;
	uint16_t x172 = 1090U;
	static volatile int32_t t26 = 39609;

	t26 = ((x169|(x170*x171))+x172);

	if (t26 != 962) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x173 = INT64_MIN;
	uint32_t x174 = 63U;
	volatile int32_t x175 = INT32_MIN;

	t27 = ((x173|(x174*x175))+x176);

	if (t27 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x177 = 129819733881692506LLU;
	uint8_t x178 = 7U;
	static uint64_t x179 = UINT64_MAX;
	int32_t x180 = INT32_MIN;
	volatile uint64_t t28 = 135565059465859LLU;

	t28 = ((x177|(x178*x179))+x180);

	if (t28 != 18446744071562067963LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x181 = 65U;
	int8_t x182 = -2;

	t29 = ((x181|(x182*x183))+x184);

	if (t29 != -2147483327) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x185 = 25910226U;
	int64_t x186 = INT64_MAX;
	uint16_t x187 = 0U;
	volatile int16_t x188 = 53;
	int64_t t30 = 203379234651588LL;

	t30 = ((x185|(x186*x187))+x188);

	if (t30 != 25910279LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x193 = 123725;
	uint16_t x194 = UINT16_MAX;
	int16_t x195 = INT16_MAX;
	int32_t t31 = 4848653;

	t31 = ((x193|(x194*x195))+x196);

	if (t31 != 2147477181) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x197 = 631678402664384LLU;
	int16_t x198 = INT16_MIN;
	int16_t x199 = INT16_MIN;
	uint16_t x200 = 0U;

	t32 = ((x197|(x198*x199))+x200);

	if (t32 != 631679476406208LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x201 = UINT64_MAX;
	uint32_t x202 = UINT32_MAX;
	volatile uint8_t x203 = 8U;
	uint64_t t33 = 3603822765LLU;

	t33 = ((x201|(x202*x203))+x204);

	if (t33 != 18446744073573943926LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x209 = INT16_MIN;
	volatile uint8_t x210 = 1U;
	int16_t x211 = 7;
	uint32_t x212 = 13U;
	volatile uint32_t t34 = 1113016U;

	t34 = ((x209|(x210*x211))+x212);

	if (t34 != 4294934548U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x213 = 390U;
	uint32_t x214 = UINT32_MAX;
	volatile int16_t x216 = -1;
	uint32_t t35 = 16523U;

	t35 = ((x213|(x214*x215))+x216);

	if (t35 != 390U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x221 = INT8_MIN;
	uint32_t x222 = 11822177U;
	int32_t x223 = -1;
	volatile int32_t x224 = INT32_MIN;
	volatile uint32_t t36 = 298049U;

	t36 = ((x221|(x222*x223))+x224);

	if (t36 != 2147483551U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x225 = INT32_MIN;
	int16_t x226 = 26;
	int16_t x228 = INT16_MIN;
	volatile int32_t t37 = -31389420;

	t37 = ((x225|(x226*x227))+x228);

	if (t37 != -2147421906) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x229 = INT16_MIN;
	int32_t x231 = -1;
	uint64_t x232 = UINT64_MAX;
	static uint64_t t38 = 115015420LLU;

	t38 = ((x229|(x230*x231))+x232);

	if (t38 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x237 = -1LL;
	volatile int32_t x238 = -841243;
	volatile int8_t x239 = INT8_MIN;
	uint8_t x240 = 1U;
	int64_t t39 = -1LL;

	t39 = ((x237|(x238*x239))+x240);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x249 = 3U;
	int64_t x250 = -26LL;
	int32_t x251 = INT32_MAX;
	int8_t x252 = INT8_MIN;
	volatile int64_t t40 = 319597435893LL;

	t40 = ((x249|(x250*x251))+x252);

	if (t40 != -55834574949LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x253 = INT8_MIN;
	volatile uint64_t x255 = UINT64_MAX;
	uint8_t x256 = 0U;

	t41 = ((x253|(x254*x255))+x256);

	if (t41 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x261 = UINT64_MAX;
	int8_t x262 = -23;
	uint32_t x263 = 59902531U;
	int64_t x264 = INT64_MIN;
	static volatile uint64_t t42 = 857318LLU;

	t42 = ((x261|(x262*x263))+x264);

	if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x265 = 1U;
	int8_t x266 = INT8_MIN;
	int64_t x267 = 19377095341341075LL;
	int32_t x268 = -1;
	int64_t t43 = 29399085065716LL;

	t43 = ((x265|(x266*x267))+x268);

	if (t43 != -2480268203691657600LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x269 = -1;
	uint8_t x270 = 3U;
	static uint32_t x271 = 25U;
	volatile uint16_t x272 = 459U;

	t44 = ((x269|(x270*x271))+x272);

	if (t44 != 458U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x273 = -1;
	uint8_t x274 = 1U;
	int8_t x276 = 5;
	volatile int64_t t45 = 264805041LL;

	t45 = ((x273|(x274*x275))+x276);

	if (t45 != 4LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x281 = 42139176LLU;
	int8_t x282 = 1;
	int8_t x283 = -1;
	static uint64_t x284 = UINT64_MAX;

	t46 = ((x281|(x282*x283))+x284);

	if (t46 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x293 = INT32_MIN;
	uint32_t x294 = UINT32_MAX;
	static uint32_t x295 = 23792U;
	int32_t x296 = INT32_MAX;
	uint32_t t47 = 413833U;

	t47 = ((x293|(x294*x295))+x296);

	if (t47 != 2147459855U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x306 = 0;
	int8_t x307 = INT8_MIN;
	volatile int32_t x308 = -1;
	uint64_t t48 = 1239580023064323LLU;

	t48 = ((x305|(x306*x307))+x308);

	if (t48 != 4390361320LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x310 = UINT8_MAX;
	volatile int16_t x311 = -48;
	uint16_t x312 = UINT16_MAX;
	static volatile int32_t t49 = 4;

	t49 = ((x309|(x310*x311))+x312);

	if (t49 != 65534) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x313 = -12;
	int64_t x314 = -12454106818464LL;
	volatile uint8_t x315 = 5U;
	uint16_t x316 = UINT16_MAX;
	int64_t t50 = -2079490693310648463LL;

	t50 = ((x313|(x314*x315))+x316);

	if (t50 != 65523LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x318 = INT8_MIN;
	uint16_t x319 = UINT16_MAX;
	uint32_t x320 = 113U;
	uint32_t t51 = 247956591U;

	t51 = ((x317|(x318*x319))+x320);

	if (t51 != 4287477564U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = -1;
	volatile int16_t x327 = -1;
	uint64_t t52 = 15196130317828925LLU;

	t52 = ((x325|(x326*x327))+x328);

	if (t52 != 8205223177LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x329 = INT64_MAX;
	volatile int8_t x330 = -9;
	uint8_t x331 = 82U;
	int8_t x332 = -1;
	volatile int64_t t53 = 29660538LL;

	t53 = ((x329|(x330*x331))+x332);

	if (t53 != -2LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x333 = UINT32_MAX;
	int32_t x334 = INT32_MAX;
	volatile int8_t x336 = INT8_MAX;
	volatile uint32_t t54 = 895495U;

	t54 = ((x333|(x334*x335))+x336);

	if (t54 != 126U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x341 = -1660997765428655LL;
	int32_t x342 = INT32_MIN;
	uint64_t x343 = 37LLU;

	t55 = ((x341|(x342*x343))+x344);

	if (t55 != 18446744064351538989LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x345 = 6;
	static int8_t x347 = 0;
	uint32_t x348 = 13325U;
	static volatile uint32_t t56 = 1043322513U;

	t56 = ((x345|(x346*x347))+x348);

	if (t56 != 13331U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x349 = -1;
	volatile uint32_t x350 = UINT32_MAX;
	int8_t x351 = INT8_MIN;
	int32_t x352 = 2416839;
	static uint32_t t57 = 3716U;

	t57 = ((x349|(x350*x351))+x352);

	if (t57 != 2416838U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x354 = UINT64_MAX;
	uint8_t x355 = 27U;
	int16_t x356 = INT16_MAX;
	volatile uint64_t t58 = 249829167832793LLU;

	t58 = ((x353|(x354*x355))+x356);

	if (t58 != 32740LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x357 = 6373442060LLU;
	uint16_t x358 = 710U;
	static int16_t x360 = INT16_MAX;
	volatile uint64_t t59 = 470829806772524LLU;

	t59 = ((x357|(x358*x359))+x360);

	if (t59 != 18446744073642158011LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MAX;
	int8_t x367 = -1;
	uint16_t x368 = UINT16_MAX;
	int32_t t60 = 3168467;

	t60 = ((x365|(x366*x367))+x368);

	if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x371 = UINT8_MAX;
	uint8_t x372 = 0U;
	volatile uint32_t t61 = 60U;

	t61 = ((x369|(x370*x371))+x372);

	if (t61 != 4294967169U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x381 = -1LL;
	int32_t x382 = 41;
	int8_t x383 = 1;
	int16_t x384 = INT16_MIN;
	volatile int64_t t62 = -1LL;

	t62 = ((x381|(x382*x383))+x384);

	if (t62 != -32769LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x385 = INT8_MAX;
	int8_t x387 = INT8_MIN;
	int64_t x388 = 32559366807344LL;
	volatile uint64_t t63 = 1509179639970793710LLU;

	t63 = ((x385|(x386*x387))+x388);

	if (t63 != 32559366807599LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x394 = INT16_MIN;
	static int32_t x395 = 1;
	int8_t x396 = -30;
	int32_t t64 = 213976276;

	t64 = ((x393|(x394*x395))+x396);

	if (t64 != -23882) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x397 = -15892;
	uint64_t x398 = 54500301852999213LLU;
	int64_t x399 = -49913978LL;
	int8_t x400 = -1;
	uint64_t t65 = 60571461825740LLU;

	t65 = ((x397|(x398*x399))+x400);

	if (t65 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x401 = INT64_MAX;
	int32_t x402 = -1;
	int16_t x403 = INT16_MIN;
	volatile int8_t x404 = -1;
	static int64_t t66 = 0LL;

	t66 = ((x401|(x402*x403))+x404);

	if (t66 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x413 = 6U;
	static uint32_t x414 = 877U;
	int32_t x415 = INT32_MIN;
	uint32_t t67 = 1U;

	t67 = ((x413|(x414*x415))+x416);

	if (t67 != 6U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x417 = INT8_MIN;
	static uint64_t x418 = UINT64_MAX;
	int32_t x420 = INT32_MIN;
	uint64_t t68 = 673LLU;

	t68 = ((x417|(x418*x419))+x420);

	if (t68 != 18446744071562067900LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x421 = INT8_MAX;
	static int64_t x423 = -3LL;
	static int32_t x424 = -6753887;
	volatile uint64_t t69 = 12645645028LLU;

	t69 = ((x421|(x422*x423))+x424);

	if (t69 != 18446733886316032032LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x432 = INT16_MIN;
	int32_t t70 = -84953;

	t70 = ((x429|(x430*x431))+x432);

	if (t70 != -2142866037) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x437 = -1;
	uint16_t x439 = 0U;
	int16_t x440 = -1;
	volatile int32_t t71 = 435329;

	t71 = ((x437|(x438*x439))+x440);

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x441 = 713082798825431538LLU;
	int32_t x442 = 29;
	static int8_t x444 = INT8_MIN;
	static volatile uint64_t t72 = 65183810LLU;

	t72 = ((x441|(x442*x443))+x444);

	if (t72 != 713082798825431422LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x445 = INT32_MIN;
	int64_t x446 = -83010390215336352LL;
	volatile int16_t x447 = 37;
	int16_t x448 = INT16_MIN;

	t73 = ((x445|(x446*x447))+x448);

	if (t73 != -431414304LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x450 = 2U;
	uint16_t x451 = 901U;
	static uint16_t x452 = 3525U;
	int32_t t74 = -59;

	t74 = ((x449|(x450*x451))+x452);

	if (t74 != 5444) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x453 = INT64_MIN;
	volatile uint16_t x454 = UINT16_MAX;
	int16_t x455 = INT16_MAX;
	int8_t x456 = -1;
	static volatile int64_t t75 = 16040527234LL;

	t75 = ((x453|(x454*x455))+x456);

	if (t75 != -9223372034707390464LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x459 = 11423188LL;

	t76 = ((x457|(x458*x459))+x460);

	if (t76 != 572632072210LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x461 = -1;
	static int16_t x463 = 1;
	uint64_t x464 = UINT64_MAX;
	static uint64_t t77 = 42682358907211LLU;

	t77 = ((x461|(x462*x463))+x464);

	if (t77 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x465 = 2U;
	volatile int16_t x466 = INT16_MAX;
	int16_t x467 = 1;
	int16_t x468 = INT16_MAX;
	int32_t t78 = -7143188;

	t78 = ((x465|(x466*x467))+x468);

	if (t78 != 65534) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x476 = -1;
	uint32_t t79 = 1664U;

	t79 = ((x473|(x474*x475))+x476);

	if (t79 != 4294934528U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x477 = 27U;
	static volatile int64_t x478 = -89LL;
	static volatile int8_t x479 = INT8_MAX;
	volatile uint32_t x480 = UINT32_MAX;
	volatile int64_t t80 = -12550748680145896LL;

	t80 = ((x477|(x478*x479))+x480);

	if (t80 != 4294955994LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x485 = -1072;
	int64_t x486 = -1LL;
	int16_t x487 = 206;
	volatile int64_t t81 = 1205727LL;

	t81 = ((x485|(x486*x487))+x488);

	if (t81 != -15LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x493 = INT16_MIN;
	int32_t x494 = INT32_MIN;
	static uint32_t x495 = 333913U;
	static volatile int16_t x496 = INT16_MAX;
	uint32_t t82 = UINT32_MAX;

	t82 = ((x493|(x494*x495))+x496);

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x497 = 193777;
	int8_t x499 = -54;
	uint16_t x500 = UINT16_MAX;
	int32_t t83 = 1668;

	t83 = ((x497|(x498*x499))+x500);

	if (t83 != 259318) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x501 = INT8_MIN;
	uint16_t x502 = 0U;
	uint8_t x503 = 22U;
	uint8_t x504 = 11U;
	int32_t t84 = -496;

	t84 = ((x501|(x502*x503))+x504);

	if (t84 != -117) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x507 = 5U;
	int32_t x508 = INT32_MIN;

	t85 = ((x505|(x506*x507))+x508);

	if (t85 != 18446744071562067878LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x517 = 2U;
	int16_t x518 = -1;
	int16_t x519 = INT16_MIN;
	volatile int16_t x520 = INT16_MAX;
	int32_t t86 = -75765734;

	t86 = ((x517|(x518*x519))+x520);

	if (t86 != 65537) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x521 = INT32_MIN;
	static int8_t x522 = INT8_MIN;
	uint64_t x523 = UINT64_MAX;
	uint16_t x524 = UINT16_MAX;
	uint64_t t87 = 925786247122224357LLU;

	t87 = ((x521|(x522*x523))+x524);

	if (t87 != 18446744071562133631LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x530 = INT16_MIN;
	static int16_t x531 = -1;
	int8_t x532 = -9;
	volatile int32_t t88 = -13122;

	t88 = ((x529|(x530*x531))+x532);

	if (t88 != 33014) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x536 = -19334;
	uint64_t t89 = 296809985086LLU;

	t89 = ((x533|(x534*x535))+x536);

	if (t89 != 18446744073709532281LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x537 = 83U;
	int32_t x538 = -1;
	int16_t x539 = INT16_MIN;
	int32_t x540 = INT32_MIN;
	int32_t t90 = -49340954;

	t90 = ((x537|(x538*x539))+x540);

	if (t90 != -2147450797) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x545 = UINT8_MAX;
	int8_t x546 = INT8_MIN;
	static uint8_t x547 = 0U;
	volatile int32_t t91 = -3190265;

	t91 = ((x545|(x546*x547))+x548);

	if (t91 != 229) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x550 = 11U;
	int16_t x551 = INT16_MAX;

	t92 = ((x549|(x550*x551))+x552);

	if (t92 != 63) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x553 = 1U;
	volatile int8_t x554 = 62;
	int8_t x555 = -15;
	static uint64_t x556 = UINT64_MAX;
	uint64_t t93 = 473737925LLU;

	t93 = ((x553|(x554*x555))+x556);

	if (t93 != 18446744073709550686LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x557 = INT32_MIN;
	uint16_t x558 = 1061U;
	int8_t x559 = INT8_MIN;
	int32_t t94 = 15699670;

	t94 = ((x557|(x558*x559))+x560);

	if (t94 != -135890) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x562 = -1;
	int64_t x563 = -33530240LL;
	int8_t x564 = 15;
	volatile int64_t t95 = 1822LL;

	t95 = ((x561|(x562*x563))+x564);

	if (t95 != 33530262LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x566 = INT32_MIN;
	volatile uint32_t x567 = 83776155U;
	int32_t x568 = INT32_MAX;
	uint32_t t96 = 29741481U;

	t96 = ((x565|(x566*x567))+x568);

	if (t96 != 167U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x569 = 198;
	int32_t x570 = -1;
	static uint64_t x571 = 3250457176674900LLU;
	volatile int16_t x572 = INT16_MAX;
	volatile uint64_t t97 = 20036991311LLU;

	t97 = ((x569|(x570*x571))+x572);

	if (t97 != 18443493616532909549LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x573 = INT32_MIN;
	uint16_t x575 = 827U;
	static volatile int8_t x576 = 31;

	t98 = ((x573|(x574*x575))+x576);

	if (t98 != -105825) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x577 = 392;
	int16_t x578 = 472;
	int16_t x579 = 267;
	uint32_t x580 = 16477769U;

	t99 = ((x577|(x578*x579))+x580);

	if (t99 != 16604177U) { NG(); } else { ; }
	
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


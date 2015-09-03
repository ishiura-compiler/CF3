#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = INT32_MAX;
int64_t x6 = INT64_MAX;
int8_t x13 = -12;
uint32_t x15 = UINT32_MAX;
uint32_t x17 = 1589454867U;
volatile uint32_t t4 = 44135404U;
uint32_t x38 = UINT32_MAX;
static uint64_t x39 = UINT64_MAX;
volatile uint64_t t9 = 227902LLU;
uint16_t x80 = 1316U;
static int16_t x83 = -1;
volatile uint32_t t11 = 75078824U;
int32_t t12 = -2680;
uint64_t x94 = 56676757159LLU;
volatile uint32_t x99 = 3U;
volatile int64_t t14 = 1LL;
uint64_t x101 = 5696223588LLU;
static int64_t x111 = INT64_MAX;
int32_t x112 = -1;
static volatile int64_t t17 = -1740141269LL;
volatile int8_t x119 = -12;
static int8_t x120 = INT8_MAX;
static int32_t x125 = INT32_MAX;
static uint8_t x126 = 57U;
static int32_t x129 = INT32_MIN;
static int32_t x150 = -1;
uint8_t x151 = 1U;
volatile int64_t x159 = -1LL;
volatile int64_t t26 = -1971LL;
int32_t x172 = -33098399;
int64_t x173 = INT64_MIN;
uint16_t x191 = 10U;
static int16_t x192 = -1;
int32_t x198 = INT32_MAX;
volatile uint64_t t34 = 2923700020LLU;
volatile int32_t t35 = 7769;
static int8_t x210 = -1;
int16_t x221 = INT16_MAX;
static uint16_t x225 = 10U;
int64_t x229 = INT64_MIN;
volatile int32_t x233 = -981;
int32_t x234 = -1;
uint64_t x236 = UINT64_MAX;
uint32_t x242 = 436450335U;
volatile int64_t x243 = 5744LL;
volatile uint8_t x245 = 84U;
static int8_t x248 = INT8_MIN;
int32_t x259 = 194514;
int32_t x263 = -1;
int8_t x264 = 10;
uint64_t t46 = 12LLU;
uint64_t x271 = 20399LLU;
uint8_t x279 = 22U;
uint16_t x280 = UINT16_MAX;
volatile uint8_t x284 = 35U;
int64_t t51 = 5LL;
static uint32_t x291 = 778U;
int8_t x294 = INT8_MIN;
int32_t x299 = -1;
int16_t x304 = -1;
int32_t x309 = INT32_MIN;
uint64_t x317 = 51918LLU;
int64_t x320 = 2918128341977967208LL;
int64_t x328 = INT64_MAX;
volatile uint8_t x331 = 25U;
volatile int32_t x334 = INT32_MAX;
uint32_t t63 = 0U;
volatile uint32_t x340 = 310043572U;
volatile uint64_t t64 = 3LLU;
int16_t x341 = INT16_MIN;
int64_t x344 = -1LL;
uint32_t x347 = 340U;
volatile uint16_t x355 = UINT16_MAX;
int8_t x356 = INT8_MAX;
uint8_t x361 = 13U;
static int8_t x364 = 0;
int64_t x365 = INT64_MAX;
int64_t x367 = 210569LL;
uint64_t x370 = 9LLU;
int64_t x377 = -25258621LL;
int32_t x378 = 194;
volatile int32_t x382 = 1;
int8_t x384 = INT8_MIN;
int16_t x386 = INT16_MAX;
int16_t x387 = INT16_MAX;
int32_t x392 = -4;
int8_t x398 = INT8_MIN;
volatile int32_t x399 = INT32_MAX;
int8_t x415 = INT8_MAX;
static int8_t x416 = INT8_MIN;
uint8_t x421 = UINT8_MAX;
static volatile int64_t t79 = -493389804337978070LL;
static int16_t x430 = 14643;
static uint8_t x439 = 118U;
uint8_t x440 = UINT8_MAX;
volatile int8_t x441 = INT8_MIN;
int8_t x442 = INT8_MIN;
static uint64_t x458 = 372672270LLU;
volatile uint64_t t85 = 117LLU;
volatile uint64_t t86 = 180144794060LLU;
static uint16_t x473 = 415U;
volatile int16_t x474 = -11488;
uint16_t x477 = 26145U;
static uint32_t x487 = UINT32_MAX;
static uint8_t x488 = 45U;
volatile uint32_t x491 = UINT32_MAX;
int64_t t92 = -17399LL;
uint64_t x499 = 273LLU;
volatile uint32_t t94 = 234946548U;
uint64_t x510 = UINT64_MAX;
static volatile int16_t x513 = -1;
static int32_t x515 = -1;
uint64_t x527 = 1006573LLU;
uint64_t t97 = 732659LLU;
static volatile int64_t x532 = 36013894166LL;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int32_t x2 = -1;
	uint16_t x3 = 491U;
	int16_t x4 = -1;
	volatile int32_t t0 = 64059;

	t0 = (x1%(x2^(x3*x4)));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x7 = 0U;
	volatile int32_t x8 = INT32_MIN;
	int64_t t1 = 1437861587LL;

	t1 = (x5%(x6^(x7*x8)));

	if (t1 != 2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x14 = 12387U;
	uint16_t x16 = 1344U;
	uint32_t t2 = 1470977U;

	t2 = (x13%(x14^(x15*x16)));

	if (t2 != 13649U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = -1;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = 10149U;
	uint32_t t3 = 708620426U;

	t3 = (x17%(x18^(x19*x20)));

	if (t3 != 259205143U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x21 = 1U;
	int16_t x22 = -14596;
	int8_t x23 = -48;
	uint32_t x24 = UINT32_MAX;

	t4 = (x21%(x22^(x23*x24)));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -720LL;
	uint16_t x26 = 187U;
	int16_t x27 = 1;
	int32_t x28 = INT32_MAX;
	int64_t t5 = -70018LL;

	t5 = (x25%(x26^(x27*x28)));

	if (t5 != -720LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = -1LL;
	static int64_t x40 = -1LL;
	volatile uint64_t t6 = 888389732069539LLU;

	t6 = (x37%(x38^(x39*x40)));

	if (t6 != 3LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x49 = 72272199LLU;
	uint32_t x50 = 2U;
	int8_t x51 = INT8_MIN;
	int8_t x52 = -1;
	uint64_t t7 = 2239406LLU;

	t7 = (x49%(x50^(x51*x52)));

	if (t7 != 129LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x61 = 12U;
	int32_t x62 = -1;
	static uint16_t x63 = UINT16_MAX;
	uint8_t x64 = 104U;
	volatile uint32_t t8 = 63759U;

	t8 = (x61%(x62^(x63*x64)));

	if (t8 != 12U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x69 = 5LL;
	int64_t x70 = INT64_MIN;
	volatile uint64_t x71 = 34LLU;
	uint16_t x72 = 1U;

	t9 = (x69%(x70^(x71*x72)));

	if (t9 != 5LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = 1;
	static uint32_t x79 = 2592U;
	volatile uint32_t t10 = 1U;

	t10 = (x77%(x78^(x79*x80)));

	if (t10 != 393621U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x81 = INT16_MIN;
	static int8_t x82 = INT8_MIN;
	uint32_t x84 = UINT32_MAX;

	t11 = (x81%(x82^(x83*x84)));

	if (t11 != 4294934528U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x85 = INT16_MAX;
	volatile int32_t x86 = -47720987;
	int8_t x87 = 63;
	int16_t x88 = -21;

	t12 = (x85%(x86^(x87*x88)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x93 = -1;
	int16_t x95 = INT16_MAX;
	int32_t x96 = 1;
	uint64_t t13 = 3763851076397259LLU;

	t13 = (x93%(x94^(x95*x96)));

	if (t13 != 36028820815LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x97 = -3195464162039281155LL;
	static volatile int8_t x98 = INT8_MIN;
	int32_t x100 = 112;

	t14 = (x97%(x98^(x99*x100)));

	if (t14 != -1208287395LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x102 = 542074173090607LLU;
	static uint64_t x103 = 1390666288993336LLU;
	int8_t x104 = 2;
	static volatile uint64_t t15 = 1821LLU;

	t15 = (x101%(x102^(x103*x104)));

	if (t15 != 5696223588LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = 30902LL;
	int16_t x107 = 165;
	int64_t x108 = -3012688501792017LL;
	volatile int64_t t16 = -734102761252LL;

	t16 = (x105%(x106^(x107*x108)));

	if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x109 = -1;
	int64_t x110 = 403245777508901LL;

	t17 = (x109%(x110^(x111*x112)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x117 = -1;
	int64_t x118 = INT64_MAX;
	volatile int64_t t18 = 338099726542971599LL;

	t18 = (x117%(x118^(x119*x120)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x121 = INT16_MAX;
	static uint32_t x122 = 931925102U;
	static volatile uint8_t x123 = 14U;
	int16_t x124 = -1;
	volatile uint32_t t19 = 228U;

	t19 = (x121%(x122^(x123*x124)));

	if (t19 != 32767U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x127 = 3048U;
	int8_t x128 = INT8_MIN;
	static int32_t t20 = -19987;

	t20 = (x125%(x126^(x127*x128)));

	if (t20 != 54712) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x130 = -1LL;
	uint32_t x131 = 6974356U;
	int64_t x132 = -22750426LL;
	int64_t t21 = -829LL;

	t21 = (x129%(x130^(x131*x132)));

	if (t21 != -2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x133 = -21;
	uint16_t x134 = 86U;
	uint64_t x135 = 729LLU;
	uint32_t x136 = 8190508U;
	uint64_t t22 = 477886680686LLU;

	t22 = (x133%(x134^(x135*x136)));

	if (t22 != 3417714561LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x141 = 11U;
	int64_t x142 = -245963986530618992LL;
	int16_t x143 = INT16_MAX;
	int32_t x144 = -1;
	static int64_t t23 = -21619LL;

	t23 = (x141%(x142^(x143*x144)));

	if (t23 != 11LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x145 = INT16_MIN;
	int16_t x146 = -1;
	uint16_t x147 = 3327U;
	volatile int8_t x148 = 7;
	volatile int32_t t24 = 65;

	t24 = (x145%(x146^(x147*x148)));

	if (t24 != -9478) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x149 = INT8_MIN;
	int16_t x152 = 11;
	int32_t t25 = -169;

	t25 = (x149%(x150^(x151*x152)));

	if (t25 != -8) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x157 = 29751U;
	uint16_t x158 = 3U;
	int8_t x160 = 5;

	t26 = (x157%(x158^(x159*x160)));

	if (t26 != 7LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x169 = INT32_MIN;
	int16_t x170 = INT16_MIN;
	uint8_t x171 = 22U;
	int32_t t27 = -30443;

	t27 = (x169%(x170^(x171*x172)));

	if (t27 != -691196756) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x174 = UINT64_MAX;
	static volatile int16_t x175 = 1045;
	static uint64_t x176 = 4014640081901766771LLU;
	static uint64_t t28 = 5732968065651877979LLU;

	t28 = (x173%(x174^(x175*x176)));

	if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x177 = 589154;
	int16_t x178 = 1347;
	volatile uint64_t x179 = UINT64_MAX;
	int32_t x180 = INT32_MIN;
	volatile uint64_t t29 = 428723453797638LLU;

	t29 = (x177%(x178^(x179*x180)));

	if (t29 != 589154LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x181 = INT16_MAX;
	int16_t x182 = -1;
	int32_t x183 = INT32_MAX;
	volatile int32_t x184 = -1;
	static volatile int32_t t30 = 13849;

	t30 = (x181%(x182^(x183*x184)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x185 = UINT64_MAX;
	static int16_t x186 = INT16_MIN;
	static int8_t x187 = 2;
	int16_t x188 = INT16_MIN;
	static volatile uint64_t t31 = 31750631564LLU;

	t31 = (x185%(x186^(x187*x188)));

	if (t31 != 32767LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x189 = INT16_MIN;
	uint16_t x190 = 1000U;
	int32_t t32 = 179;

	t32 = (x189%(x190^(x191*x192)));

	if (t32 != -960) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x193 = INT16_MIN;
	volatile int32_t x194 = -1;
	int16_t x195 = INT16_MIN;
	int64_t x196 = -109683884188LL;
	int64_t t33 = -7237211780615693LL;

	t33 = (x193%(x194^(x195*x196)));

	if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x197 = 365589313658799859LLU;
	int8_t x199 = INT8_MIN;
	uint32_t x200 = 838270798U;

	t34 = (x197%(x198^(x199*x200)));

	if (t34 != 972409983LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x205 = -7355649;
	static volatile int32_t x206 = INT32_MIN;
	static int8_t x207 = INT8_MAX;
	int32_t x208 = -1;

	t35 = (x205%(x206^(x207*x208)));

	if (t35 != -7355649) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x209 = 4U;
	uint32_t x211 = UINT32_MAX;
	int8_t x212 = INT8_MAX;
	volatile uint32_t t36 = 3727U;

	t36 = (x209%(x210^(x211*x212)));

	if (t36 != 4U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int8_t x218 = INT8_MIN;
	uint8_t x219 = UINT8_MAX;
	uint16_t x220 = 10U;
	volatile int32_t t37 = 24684;

	t37 = (x217%(x218^(x219*x220)));

	if (t37 != 2043) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x222 = -1;
	uint64_t x223 = 1360315419LLU;
	static volatile uint32_t x224 = 1U;
	uint64_t t38 = 163512710520392LLU;

	t38 = (x221%(x222^(x223*x224)));

	if (t38 != 32767LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x226 = UINT32_MAX;
	static int8_t x227 = INT8_MIN;
	uint8_t x228 = UINT8_MAX;
	volatile uint32_t t39 = 19405U;

	t39 = (x225%(x226^(x227*x228)));

	if (t39 != 10U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x230 = 877865LLU;
	uint32_t x231 = 9U;
	static int32_t x232 = -2674649;
	static volatile uint64_t t40 = 353563349568790LLU;

	t40 = (x229%(x230^(x231*x232)));

	if (t40 != 20090096LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x235 = UINT16_MAX;
	volatile uint64_t t41 = 227609LLU;

	t41 = (x233%(x234^(x235*x236)));

	if (t41 != 64569LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x241 = UINT64_MAX;
	int32_t x244 = -26391;
	uint64_t t42 = 58LLU;

	t42 = (x241%(x242^(x243*x244)));

	if (t42 != 319463440LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x246 = -38;
	int64_t x247 = 10666384LL;
	int64_t t43 = -115343232382LL;

	t43 = (x245%(x246^(x247*x248)));

	if (t43 != 84LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x253 = -1090;
	int16_t x254 = -623;
	int64_t x255 = -1LL;
	int32_t x256 = INT32_MAX;
	int64_t t44 = 4372941923504LL;

	t44 = (x253%(x254^(x255*x256)));

	if (t44 != -1090LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x257 = 0U;
	int16_t x258 = INT16_MAX;
	int8_t x260 = INT8_MAX;
	int32_t t45 = 2446;

	t45 = (x257%(x258^(x259*x260)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x261 = 1414LLU;
	uint8_t x262 = UINT8_MAX;

	t46 = (x261%(x262^(x263*x264)));

	if (t46 != 1414LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = -2;
	static int16_t x272 = INT16_MIN;
	volatile uint64_t t47 = 46784583411336LLU;

	t47 = (x269%(x270^(x271*x272)));

	if (t47 != 475774098LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x273 = UINT16_MAX;
	int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MIN;
	static uint8_t x276 = 98U;
	volatile int32_t t48 = -170639;

	t48 = (x273%(x274^(x275*x276)));

	if (t48 != 3450) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x277 = INT64_MIN;
	int32_t x278 = INT32_MAX;
	volatile int64_t t49 = -68324230350LL;

	t49 = (x277%(x278^(x279*x280)));

	if (t49 != -524117133LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x281 = -1;
	int8_t x282 = -1;
	int16_t x283 = INT16_MIN;
	int32_t t50 = -11020;

	t50 = (x281%(x282^(x283*x284)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x285 = INT64_MAX;
	int8_t x286 = -41;
	static volatile int64_t x287 = 256LL;
	int32_t x288 = 8;

	t51 = (x285%(x286^(x287*x288)));

	if (t51 != 31LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x289 = INT8_MIN;
	volatile uint64_t x290 = 2298921173982954694LLU;
	uint64_t x292 = UINT64_MAX;
	uint64_t t52 = 478834710LLU;

	t52 = (x289%(x290^(x291*x292)));

	if (t52 != 2298921173982955344LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x293 = INT16_MIN;
	int32_t x295 = -1;
	int8_t x296 = INT8_MIN;
	volatile int32_t t53 = 372550039;

	t53 = (x293%(x294^(x295*x296)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x297 = INT32_MAX;
	volatile int16_t x298 = -1;
	uint64_t x300 = 0LLU;
	volatile uint64_t t54 = 8458807523429081LLU;

	t54 = (x297%(x298^(x299*x300)));

	if (t54 != 2147483647LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x301 = -1;
	int32_t x302 = INT32_MIN;
	static int16_t x303 = 16;
	int32_t t55 = 2791535;

	t55 = (x301%(x302^(x303*x304)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x305 = 91563563LL;
	int16_t x306 = INT16_MIN;
	uint64_t x307 = 225523480483869627LLU;
	int64_t x308 = INT64_MAX;
	volatile uint64_t t56 = 4LLU;

	t56 = (x305%(x306^(x307*x308)));

	if (t56 != 91563563LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x310 = 5U;
	volatile int16_t x311 = INT16_MIN;
	int32_t x312 = -48;
	volatile uint32_t t57 = 555U;

	t57 = (x309%(x310^(x311*x312)));

	if (t57 != 517463U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x313 = INT8_MIN;
	static int8_t x314 = INT8_MIN;
	volatile int16_t x315 = -202;
	uint16_t x316 = 4U;
	int32_t t58 = -32686;

	t58 = (x313%(x314^(x315*x316)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x318 = UINT32_MAX;
	int64_t x319 = -1LL;
	uint64_t t59 = 1LLU;

	t59 = (x317%(x318^(x319*x320)));

	if (t59 != 51918LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = INT64_MAX;
	uint8_t x323 = UINT8_MAX;
	uint8_t x324 = UINT8_MAX;
	volatile int64_t t60 = -2722522596LL;

	t60 = (x321%(x322^(x323*x324)));

	if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x325 = INT64_MIN;
	static int16_t x326 = INT16_MIN;
	static volatile int64_t x327 = 0LL;
	volatile int64_t t61 = 65666326LL;

	t61 = (x325%(x326^(x327*x328)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x329 = -256076827;
	int16_t x330 = INT16_MIN;
	uint8_t x332 = 103U;
	volatile int32_t t62 = -59429658;

	t62 = (x329%(x330^(x331*x332)));

	if (t62 != -9994) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x333 = UINT32_MAX;
	int16_t x335 = INT16_MIN;
	int16_t x336 = 407;

	t63 = (x333%(x334^(x335*x336)));

	if (t63 != 2134147072U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x337 = UINT32_MAX;
	static int16_t x338 = -6;
	static volatile uint64_t x339 = 4383176977173766189LLU;

	t64 = (x337%(x338^(x339*x340)));

	if (t64 != 4294967295LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x342 = -5;
	uint64_t x343 = 1377LLU;
	volatile uint64_t t65 = 8023663LLU;

	t65 = (x341%(x342^(x343*x344)));

	if (t65 != 128LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x345 = INT16_MAX;
	volatile int32_t x346 = -6;
	static uint8_t x348 = 112U;
	uint32_t t66 = 635U;

	t66 = (x345%(x346^(x347*x348)));

	if (t66 != 32767U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x353 = -1;
	int32_t x354 = INT32_MIN;
	volatile int32_t t67 = 13677776;

	t67 = (x353%(x354^(x355*x356)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x357 = -3;
	int16_t x358 = INT16_MIN;
	int16_t x359 = 1;
	uint16_t x360 = 20392U;
	static int32_t t68 = -719700837;

	t68 = (x357%(x358^(x359*x360)));

	if (t68 != -3) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x362 = 69U;
	static volatile uint64_t x363 = 24217216226LLU;
	volatile uint64_t t69 = 58084LLU;

	t69 = (x361%(x362^(x363*x364)));

	if (t69 != 13LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x366 = UINT16_MAX;
	volatile uint64_t x368 = 57191LLU;
	volatile uint64_t t70 = 1727336829LLU;

	t70 = (x365%(x366^(x367*x368)));

	if (t70 != 6231689119LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x369 = -1;
	static uint16_t x371 = 14U;
	static int64_t x372 = 630LL;
	volatile uint64_t t71 = 19372903120LLU;

	t71 = (x369%(x370^(x371*x372)));

	if (t71 != 4425LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x379 = UINT8_MAX;
	int8_t x380 = INT8_MIN;
	int64_t t72 = 2410379168071687866LL;

	t72 = (x377%(x378^(x379*x380)));

	if (t72 != -12677LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x381 = INT32_MIN;
	static uint32_t x383 = 584U;
	volatile uint32_t t73 = 154114274U;

	t73 = (x381%(x382^(x383*x384)));

	if (t73 != 2147483648U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x385 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	volatile int32_t t74 = 4183;

	t74 = (x385%(x386^(x387*x388)));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x389 = UINT64_MAX;
	int32_t x390 = INT32_MIN;
	volatile uint16_t x391 = 149U;
	static uint64_t t75 = 22849LLU;

	t75 = (x389%(x390^(x391*x392)));

	if (t75 != 1420863LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x397 = UINT64_MAX;
	volatile int16_t x400 = -1;
	uint64_t t76 = 311LLU;

	t76 = (x397%(x398^(x399*x400)));

	if (t76 != 64515LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x401 = INT64_MIN;
	uint64_t x402 = 1LLU;
	uint32_t x403 = 21604U;
	volatile int8_t x404 = INT8_MIN;
	uint64_t t77 = 9385282LLU;

	t77 = (x401%(x402^(x403*x404)));

	if (t77 != 1266595718LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x413 = 37305LLU;
	volatile uint64_t x414 = 86697546929LLU;
	uint64_t t78 = 2728364253LLU;

	t78 = (x413%(x414^(x415*x416)));

	if (t78 != 37305LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x422 = -1;
	static uint16_t x423 = 234U;
	volatile int64_t x424 = -1LL;

	t79 = (x421%(x422^(x423*x424)));

	if (t79 != 22LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x425 = INT16_MIN;
	uint16_t x426 = 15599U;
	int32_t x427 = -16865;
	static int16_t x428 = -1;
	volatile int32_t t80 = 422058;

	t80 = (x425%(x426^(x427*x428)));

	if (t80 != -754) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x429 = -12;
	static int16_t x431 = INT16_MAX;
	int8_t x432 = INT8_MIN;
	int32_t t81 = -994095;

	t81 = (x429%(x430^(x431*x432)));

	if (t81 != -12) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x437 = -17339277;
	volatile uint8_t x438 = 1U;
	int32_t t82 = -6259277;

	t82 = (x437%(x438^(x439*x440)));

	if (t82 != -6861) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x443 = INT8_MIN;
	static uint64_t x444 = 3726LLU;
	volatile uint64_t t83 = 19828779LLU;

	t83 = (x441%(x442^(x443*x444)));

	if (t83 != 236288LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x445 = 3U;
	static volatile int64_t x446 = INT64_MIN;
	static uint32_t x447 = UINT32_MAX;
	volatile uint32_t x448 = UINT32_MAX;
	int64_t t84 = 368789487LL;

	t84 = (x445%(x446^(x447*x448)));

	if (t84 != 3LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x457 = 177873U;
	int16_t x459 = -15013;
	uint64_t x460 = UINT64_MAX;

	t85 = (x457%(x458^(x459*x460)));

	if (t85 != 177873LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x461 = INT32_MAX;
	uint32_t x462 = UINT32_MAX;
	static int16_t x463 = -1;
	uint64_t x464 = UINT64_MAX;

	t86 = (x461%(x462^(x463*x464)));

	if (t86 != 2147483647LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x465 = UINT16_MAX;
	static int8_t x466 = 30;
	uint64_t x467 = UINT64_MAX;
	uint64_t x468 = 1LLU;
	uint64_t t87 = 52LLU;

	t87 = (x465%(x466^(x467*x468)));

	if (t87 != 65535LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x475 = INT16_MAX;
	int64_t x476 = -1LL;
	volatile int64_t t88 = 0LL;

	t88 = (x473%(x474^(x475*x476)));

	if (t88 != 415LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x478 = INT16_MIN;
	int16_t x479 = INT16_MIN;
	int16_t x480 = INT16_MIN;
	int32_t t89 = -49846274;

	t89 = (x477%(x478^(x479*x480)));

	if (t89 != 26145) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x485 = INT16_MIN;
	uint16_t x486 = 6588U;
	volatile uint32_t t90 = 189213U;

	t90 = (x485%(x486^(x487*x488)));

	if (t90 != 4294934528U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x489 = 12054370LLU;
	int32_t x490 = INT32_MIN;
	uint8_t x492 = 60U;
	uint64_t t91 = 110923228LLU;

	t91 = (x489%(x490^(x491*x492)));

	if (t91 != 12054370LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x493 = INT8_MIN;
	int64_t x494 = 72467704833843LL;
	uint16_t x495 = 36U;
	static uint16_t x496 = UINT16_MAX;

	t92 = (x493%(x494^(x495*x496)));

	if (t92 != -128LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x497 = INT8_MIN;
	uint64_t x498 = 182908807348779070LLU;
	int32_t x500 = -1;
	volatile uint64_t t93 = 3301430622288920712LLU;

	t93 = (x497%(x498^(x499*x500)));

	if (t93 != 182908807348779183LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x501 = INT32_MIN;
	int32_t x502 = INT32_MIN;
	volatile uint32_t x503 = 171531044U;
	static int32_t x504 = INT32_MIN;

	t94 = (x501%(x502^(x503*x504)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x509 = INT64_MAX;
	uint8_t x511 = 0U;
	uint64_t x512 = 43983432889317LLU;
	static uint64_t t95 = 2943853LLU;

	t95 = (x509%(x510^(x511*x512)));

	if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x514 = 14U;
	volatile int16_t x516 = -1;
	int32_t t96 = -44278;

	t96 = (x513%(x514^(x515*x516)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x525 = 1892LLU;
	volatile int32_t x526 = -1;
	static uint16_t x528 = 59U;

	t97 = (x525%(x526^(x527*x528)));

	if (t97 != 1892LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x529 = -30;
	static uint16_t x530 = 715U;
	uint64_t x531 = 349LLU;
	volatile uint64_t t98 = 2407952229236745LLU;

	t98 = (x529%(x530^(x531*x532)));

	if (t98 != 9901827934831LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x533 = INT8_MAX;
	static int16_t x534 = 16;
	volatile int8_t x535 = INT8_MAX;
	uint32_t x536 = 326U;
	uint32_t t99 = 1664810864U;

	t99 = (x533%(x534^(x535*x536)));

	if (t99 != 127U) { NG(); } else { ; }
	
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


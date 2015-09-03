#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x2 = -1;
static volatile int32_t t1 = -222203633;
int8_t x26 = 0;
uint64_t x31 = 807134185081579LLU;
static int32_t t5 = 1843;
volatile uint64_t x42 = UINT64_MAX;
uint8_t x47 = 3U;
static volatile int32_t t8 = 32054;
uint64_t x59 = UINT64_MAX;
int32_t t9 = -1;
static int8_t x83 = 0;
int8_t x97 = 0;
static volatile int32_t t15 = -909;
uint8_t x103 = UINT8_MAX;
int32_t x108 = INT32_MIN;
int8_t x111 = INT8_MIN;
volatile int32_t t18 = 92300913;
int8_t x137 = INT8_MIN;
int8_t x138 = INT8_MIN;
static uint16_t x151 = 9538U;
static volatile uint8_t x167 = 36U;
static uint64_t x192 = 1994LLU;
volatile int8_t x224 = INT8_MIN;
volatile int32_t t37 = 430;
int64_t x241 = -384670LL;
int16_t x243 = 1;
volatile int32_t x266 = -26;
int64_t x272 = 2187280674383961222LL;
int32_t t45 = -4414093;
static volatile int8_t x285 = -1;
static int64_t x289 = -1LL;
static uint64_t x290 = UINT64_MAX;
uint16_t x314 = 29U;
int16_t x323 = INT16_MIN;
static int32_t t53 = -3376256;
volatile int32_t t54 = -13;
static int8_t x329 = INT8_MIN;
static int8_t x337 = -1;
int16_t x343 = INT16_MAX;
int64_t x348 = 403284LL;
static int32_t x355 = INT32_MAX;
int8_t x356 = 10;
volatile int64_t x365 = INT64_MAX;
int32_t x370 = 14410140;
uint8_t x381 = 0U;
uint16_t x383 = 22U;
int16_t x384 = INT16_MAX;
volatile int64_t x389 = INT64_MIN;
uint8_t x390 = 0U;
uint64_t x425 = 136223664653114554LLU;
static int32_t t68 = 12;
int8_t x451 = -1;
volatile int64_t x457 = -1LL;
int32_t t73 = -586172;
uint64_t x493 = 1779052LLU;
int8_t x494 = INT8_MIN;
volatile uint64_t x501 = UINT64_MAX;
int8_t x512 = -44;
int8_t x526 = INT8_MIN;
int32_t t83 = 21261;
volatile int32_t t84 = -5515333;
volatile int32_t x540 = INT32_MIN;
int32_t t85 = -448468976;
uint16_t x544 = 2U;
uint32_t x546 = 29942U;
static volatile int32_t x568 = 110;
static int32_t t92 = 22716;
int8_t x590 = 0;
uint16_t x603 = 220U;
volatile int32_t t98 = -414;
int16_t x607 = -1;


void f0(void) {
	uint64_t x1 = 17896547008668664LLU;
	uint32_t x3 = 10U;
	uint8_t x4 = 60U;
	static volatile int32_t t0 = 112;

	t0 = (x1<=((x2*x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = UINT8_MAX;
	int16_t x6 = 82;
	int8_t x7 = -1;
	int32_t x8 = -1;

	t1 = (x5<=((x6*x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	static uint16_t x10 = 203U;
	int8_t x11 = -52;
	static volatile int16_t x12 = -2;
	volatile int32_t t2 = -25789127;

	t2 = (x9<=((x10*x11)*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 613455U;
	volatile int32_t x18 = 1;
	uint64_t x19 = UINT64_MAX;
	uint16_t x20 = 1156U;
	int32_t t3 = -5352;

	t3 = (x17<=((x18*x19)*x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -15;
	int32_t x27 = INT32_MIN;
	int32_t x28 = INT32_MAX;
	static volatile int32_t t4 = -571820;

	t4 = (x25<=((x26*x27)*x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = 13;
	int8_t x30 = INT8_MIN;
	int8_t x32 = -1;

	t5 = (x29<=((x30*x31)*x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x37 = INT32_MIN;
	volatile int8_t x38 = -22;
	int8_t x39 = -1;
	int8_t x40 = INT8_MIN;
	volatile int32_t t6 = 1715097;

	t6 = (x37<=((x38*x39)*x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = INT8_MAX;
	uint16_t x43 = 2U;
	int16_t x44 = INT16_MIN;
	volatile int32_t t7 = 44;

	t7 = (x41<=((x42*x43)*x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = UINT8_MAX;
	volatile int16_t x46 = 0;
	uint64_t x48 = 7872363662576LLU;

	t8 = (x45<=((x46*x47)*x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	static uint64_t x60 = 5596217934131886744LLU;

	t9 = (x57<=((x58*x59)*x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = INT8_MIN;
	uint64_t x62 = UINT64_MAX;
	int32_t x63 = -1;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t10 = -133041259;

	t10 = (x61<=((x62*x63)*x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x73 = 751030778U;
	static int8_t x74 = 0;
	volatile uint64_t x75 = 22308168551424950LLU;
	volatile uint16_t x76 = 866U;
	volatile int32_t t11 = -742157;

	t11 = (x73<=((x74*x75)*x76));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = 1934LL;
	uint32_t x78 = UINT32_MAX;
	volatile int64_t x79 = 1LL;
	static uint64_t x80 = UINT64_MAX;
	int32_t t12 = -10;

	t12 = (x77<=((x78*x79)*x80));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x81 = 765878503U;
	uint32_t x82 = 496U;
	int16_t x84 = -1;
	int32_t t13 = 11888354;

	t13 = (x81<=((x82*x83)*x84));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = -1;
	volatile int16_t x86 = -1;
	int16_t x87 = INT16_MIN;
	int32_t x88 = 51;
	int32_t t14 = 395301;

	t14 = (x85<=((x86*x87)*x88));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x98 = INT16_MAX;
	static int32_t x99 = -1;
	uint8_t x100 = 0U;

	t15 = (x97<=((x98*x99)*x100));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x101 = -1;
	int64_t x102 = 2133901LL;
	volatile uint8_t x104 = UINT8_MAX;
	volatile int32_t t16 = 8534588;

	t16 = (x101<=((x102*x103)*x104));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x105 = 0;
	volatile int64_t x106 = 2LL;
	int32_t x107 = 55;
	int32_t t17 = 225236147;

	t17 = (x105<=((x106*x107)*x108));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x109 = INT8_MIN;
	int8_t x110 = INT8_MAX;
	uint32_t x112 = 9343U;

	t18 = (x109<=((x110*x111)*x112));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x113 = INT8_MIN;
	volatile int16_t x114 = -1;
	static int16_t x115 = -1;
	volatile uint16_t x116 = 266U;
	int32_t t19 = 16920879;

	t19 = (x113<=((x114*x115)*x116));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x121 = INT8_MAX;
	int16_t x122 = 17;
	int32_t x123 = -1;
	int64_t x124 = -1LL;
	int32_t t20 = 82;

	t20 = (x121<=((x122*x123)*x124));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x125 = 4U;
	int8_t x126 = -1;
	uint64_t x127 = 211710715LLU;
	uint32_t x128 = 170U;
	int32_t t21 = -51;

	t21 = (x125<=((x126*x127)*x128));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x129 = INT64_MIN;
	volatile int8_t x130 = INT8_MIN;
	uint32_t x131 = 41558U;
	volatile int16_t x132 = INT16_MIN;
	static int32_t t22 = 104;

	t22 = (x129<=((x130*x131)*x132));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x133 = 2U;
	uint64_t x134 = 74469372487LLU;
	int16_t x135 = INT16_MIN;
	int32_t x136 = -237;
	static volatile int32_t t23 = 26;

	t23 = (x133<=((x134*x135)*x136));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x139 = 1095335475208927LL;
	int8_t x140 = -1;
	static int32_t t24 = 1;

	t24 = (x137<=((x138*x139)*x140));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x141 = UINT16_MAX;
	static int64_t x142 = -1108762LL;
	uint32_t x143 = 12U;
	static int16_t x144 = INT16_MAX;
	int32_t t25 = -6498750;

	t25 = (x141<=((x142*x143)*x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x149 = INT32_MIN;
	int64_t x150 = -1LL;
	uint16_t x152 = 3U;
	volatile int32_t t26 = 167179034;

	t26 = (x149<=((x150*x151)*x152));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MIN;
	uint64_t x163 = 354747387LLU;
	static int16_t x164 = -1;
	static int32_t t27 = -7336619;

	t27 = (x161<=((x162*x163)*x164));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x165 = -1;
	static int16_t x166 = INT16_MIN;
	int8_t x168 = -1;
	int32_t t28 = 121265;

	t28 = (x165<=((x166*x167)*x168));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x169 = 17914U;
	int64_t x170 = INT64_MIN;
	uint64_t x171 = 5LLU;
	volatile int32_t x172 = INT32_MAX;
	volatile int32_t t29 = -339419;

	t29 = (x169<=((x170*x171)*x172));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x173 = 3;
	int8_t x174 = -1;
	uint64_t x175 = 4500632343123794852LLU;
	int64_t x176 = INT64_MIN;
	volatile int32_t t30 = -26890801;

	t30 = (x173<=((x174*x175)*x176));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x181 = INT16_MIN;
	uint16_t x182 = 5051U;
	static volatile int16_t x183 = INT16_MAX;
	uint64_t x184 = 60002651481072931LLU;
	int32_t t31 = 1;

	t31 = (x181<=((x182*x183)*x184));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x189 = -437635783329LL;
	int8_t x190 = -1;
	int16_t x191 = INT16_MAX;
	volatile int32_t t32 = -6612938;

	t32 = (x189<=((x190*x191)*x192));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x193 = UINT8_MAX;
	static int32_t x194 = -1;
	volatile int32_t x195 = -66;
	static int32_t x196 = 46;
	volatile int32_t t33 = 64914417;

	t33 = (x193<=((x194*x195)*x196));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x201 = -1;
	int64_t x202 = -1LL;
	uint8_t x203 = UINT8_MAX;
	int8_t x204 = INT8_MAX;
	static int32_t t34 = 19;

	t34 = (x201<=((x202*x203)*x204));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x205 = UINT64_MAX;
	static int16_t x206 = INT16_MIN;
	volatile int8_t x207 = INT8_MAX;
	uint32_t x208 = 20382014U;
	volatile int32_t t35 = -4463;

	t35 = (x205<=((x206*x207)*x208));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x209 = 142899994LLU;
	int8_t x210 = 1;
	uint8_t x211 = 6U;
	int16_t x212 = INT16_MIN;
	volatile int32_t t36 = 440428304;

	t36 = (x209<=((x210*x211)*x212));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x221 = 3U;
	uint32_t x222 = 19952973U;
	int32_t x223 = INT32_MIN;

	t37 = (x221<=((x222*x223)*x224));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x225 = 12U;
	uint8_t x226 = 4U;
	uint8_t x227 = 11U;
	uint32_t x228 = 6609U;
	volatile int32_t t38 = -12603;

	t38 = (x225<=((x226*x227)*x228));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x242 = 105321136U;
	int64_t x244 = -1LL;
	volatile int32_t t39 = -107134;

	t39 = (x241<=((x242*x243)*x244));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MIN;
	volatile int64_t x251 = -1LL;
	static int64_t x252 = -1LL;
	int32_t t40 = 652;

	t40 = (x249<=((x250*x251)*x252));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x253 = INT16_MIN;
	uint32_t x254 = 37U;
	uint16_t x255 = 48U;
	int32_t x256 = INT32_MAX;
	int32_t t41 = -89;

	t41 = (x253<=((x254*x255)*x256));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x261 = INT32_MAX;
	int8_t x262 = INT8_MIN;
	uint8_t x263 = 99U;
	uint32_t x264 = 753456U;
	volatile int32_t t42 = -31896304;

	t42 = (x261<=((x262*x263)*x264));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x265 = INT32_MIN;
	int8_t x267 = 1;
	static uint32_t x268 = 3378U;
	volatile int32_t t43 = -295360;

	t43 = (x265<=((x266*x267)*x268));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x269 = -1;
	uint64_t x270 = 20852772120353LLU;
	static int16_t x271 = 2500;
	static int32_t t44 = -1081779;

	t44 = (x269<=((x270*x271)*x272));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x281 = INT32_MIN;
	int64_t x282 = 2853234063690LL;
	static uint64_t x283 = 119690LLU;
	volatile int8_t x284 = INT8_MAX;

	t45 = (x281<=((x282*x283)*x284));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x286 = 101LLU;
	uint16_t x287 = 28661U;
	int8_t x288 = 1;
	volatile int32_t t46 = -1404358;

	t46 = (x285<=((x286*x287)*x288));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x291 = 9823668998251LL;
	int8_t x292 = -1;
	static volatile int32_t t47 = 123228722;

	t47 = (x289<=((x290*x291)*x292));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x293 = -1;
	volatile uint64_t x294 = UINT64_MAX;
	static int32_t x295 = INT32_MIN;
	uint64_t x296 = 1960004988LLU;
	static volatile int32_t t48 = 50426267;

	t48 = (x293<=((x294*x295)*x296));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x297 = -3;
	uint8_t x298 = UINT8_MAX;
	int32_t x299 = 195;
	int8_t x300 = 3;
	int32_t t49 = 14956081;

	t49 = (x297<=((x298*x299)*x300));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x309 = INT64_MAX;
	static volatile uint32_t x310 = 6435U;
	int8_t x311 = -4;
	static volatile int64_t x312 = -1LL;
	volatile int32_t t50 = -4;

	t50 = (x309<=((x310*x311)*x312));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x313 = UINT16_MAX;
	static uint8_t x315 = 42U;
	uint8_t x316 = UINT8_MAX;
	int32_t t51 = -14217700;

	t51 = (x313<=((x314*x315)*x316));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x317 = 20416700U;
	uint64_t x318 = 13LLU;
	int64_t x319 = 1823540253LL;
	int16_t x320 = 14;
	int32_t t52 = -4266980;

	t52 = (x317<=((x318*x319)*x320));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x321 = -1;
	uint64_t x322 = 27LLU;
	int64_t x324 = INT64_MIN;

	t53 = (x321<=((x322*x323)*x324));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x325 = UINT8_MAX;
	uint32_t x326 = 0U;
	uint8_t x327 = 4U;
	uint8_t x328 = 12U;

	t54 = (x325<=((x326*x327)*x328));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x330 = -3919051441LL;
	int8_t x331 = -1;
	static volatile uint8_t x332 = UINT8_MAX;
	int32_t t55 = -1;

	t55 = (x329<=((x330*x331)*x332));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x333 = 0U;
	int16_t x334 = INT16_MAX;
	int64_t x335 = -463049080LL;
	volatile int16_t x336 = -1;
	volatile int32_t t56 = -250046;

	t56 = (x333<=((x334*x335)*x336));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x338 = INT8_MIN;
	uint16_t x339 = 6U;
	int8_t x340 = INT8_MAX;
	static volatile int32_t t57 = 22204;

	t57 = (x337<=((x338*x339)*x340));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x341 = 132952464461466LLU;
	uint64_t x342 = UINT64_MAX;
	volatile int16_t x344 = -1;
	int32_t t58 = -62157837;

	t58 = (x341<=((x342*x343)*x344));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x345 = 11882U;
	static uint8_t x346 = UINT8_MAX;
	int16_t x347 = 4316;
	volatile int32_t t59 = 512931;

	t59 = (x345<=((x346*x347)*x348));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x353 = 2694818U;
	static uint32_t x354 = UINT32_MAX;
	volatile int32_t t60 = 1;

	t60 = (x353<=((x354*x355)*x356));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x357 = 23;
	uint64_t x358 = 1060040414LLU;
	int64_t x359 = -1LL;
	volatile int16_t x360 = -1;
	volatile int32_t t61 = -526357869;

	t61 = (x357<=((x358*x359)*x360));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MIN;
	uint8_t x368 = 6U;
	int32_t t62 = -57;

	t62 = (x365<=((x366*x367)*x368));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x369 = 0;
	int32_t x371 = -1;
	int8_t x372 = INT8_MIN;
	volatile int32_t t63 = -1;

	t63 = (x369<=((x370*x371)*x372));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x382 = INT8_MIN;
	volatile int32_t t64 = -72079;

	t64 = (x381<=((x382*x383)*x384));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x391 = UINT32_MAX;
	int8_t x392 = INT8_MIN;
	static int32_t t65 = 28;

	t65 = (x389<=((x390*x391)*x392));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x417 = INT8_MAX;
	uint64_t x418 = UINT64_MAX;
	int32_t x419 = INT32_MIN;
	int16_t x420 = -1;
	int32_t t66 = -93;

	t66 = (x417<=((x418*x419)*x420));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x421 = 385;
	int16_t x422 = -3;
	uint16_t x423 = 74U;
	uint8_t x424 = 116U;
	volatile int32_t t67 = 7;

	t67 = (x421<=((x422*x423)*x424));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x426 = -68;
	volatile uint64_t x427 = 19253151024488406LLU;
	int16_t x428 = INT16_MAX;

	t68 = (x425<=((x426*x427)*x428));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x445 = -240LL;
	static volatile int16_t x446 = 0;
	int16_t x447 = -1;
	int8_t x448 = INT8_MIN;
	int32_t t69 = -1068160;

	t69 = (x445<=((x446*x447)*x448));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x449 = INT8_MIN;
	static volatile uint64_t x450 = UINT64_MAX;
	int64_t x452 = -8603068054253LL;
	int32_t t70 = -790001954;

	t70 = (x449<=((x450*x451)*x452));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x453 = 1732516U;
	uint8_t x454 = 0U;
	static volatile int16_t x455 = INT16_MIN;
	volatile int8_t x456 = INT8_MAX;
	volatile int32_t t71 = 223332;

	t71 = (x453<=((x454*x455)*x456));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x458 = UINT8_MAX;
	int16_t x459 = -1;
	static int16_t x460 = -1;
	static volatile int32_t t72 = -420085;

	t72 = (x457<=((x458*x459)*x460));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x465 = INT32_MIN;
	uint16_t x466 = 40U;
	volatile uint16_t x467 = 1U;
	uint8_t x468 = 2U;

	t73 = (x465<=((x466*x467)*x468));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x469 = 29;
	static int16_t x470 = 20;
	volatile int64_t x471 = 0LL;
	int8_t x472 = INT8_MIN;
	volatile int32_t t74 = -9689;

	t74 = (x469<=((x470*x471)*x472));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x477 = INT16_MIN;
	volatile uint8_t x478 = 1U;
	int16_t x479 = 135;
	volatile uint32_t x480 = 167465574U;
	int32_t t75 = -154797674;

	t75 = (x477<=((x478*x479)*x480));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x485 = 2LLU;
	int32_t x486 = INT32_MIN;
	int64_t x487 = 1570LL;
	uint8_t x488 = 125U;
	int32_t t76 = 37;

	t76 = (x485<=((x486*x487)*x488));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x495 = 7760297124180553660LLU;
	int64_t x496 = INT64_MAX;
	int32_t t77 = 2240;

	t77 = (x493<=((x494*x495)*x496));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x502 = 313667082LL;
	static int32_t x503 = -1;
	int16_t x504 = INT16_MIN;
	volatile int32_t t78 = 0;

	t78 = (x501<=((x502*x503)*x504));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x505 = 1U;
	int16_t x506 = INT16_MIN;
	static int8_t x507 = 1;
	volatile uint8_t x508 = UINT8_MAX;
	int32_t t79 = -61274376;

	t79 = (x505<=((x506*x507)*x508));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x509 = INT32_MAX;
	volatile int8_t x510 = INT8_MIN;
	uint32_t x511 = 12U;
	int32_t t80 = 44316476;

	t80 = (x509<=((x510*x511)*x512));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x513 = INT64_MIN;
	int8_t x514 = -5;
	static int16_t x515 = -1;
	volatile int8_t x516 = INT8_MAX;
	static volatile int32_t t81 = -60;

	t81 = (x513<=((x514*x515)*x516));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x521 = -23255LL;
	int16_t x522 = -1;
	static volatile int16_t x523 = -1;
	static uint64_t x524 = 1883887671067727LLU;
	volatile int32_t t82 = -14767;

	t82 = (x521<=((x522*x523)*x524));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x525 = 66644566U;
	int64_t x527 = 2748602565196584LL;
	int8_t x528 = -1;

	t83 = (x525<=((x526*x527)*x528));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x529 = 12392;
	uint16_t x530 = UINT16_MAX;
	int8_t x531 = 0;
	int16_t x532 = -1;

	t84 = (x529<=((x530*x531)*x532));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x537 = INT16_MAX;
	static uint8_t x538 = 0U;
	uint32_t x539 = UINT32_MAX;

	t85 = (x537<=((x538*x539)*x540));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x541 = 11LLU;
	static volatile uint16_t x542 = 281U;
	uint8_t x543 = 82U;
	volatile int32_t t86 = -7;

	t86 = (x541<=((x542*x543)*x544));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x545 = UINT64_MAX;
	int8_t x547 = -1;
	static volatile uint32_t x548 = 208731939U;
	volatile int32_t t87 = 26319369;

	t87 = (x545<=((x546*x547)*x548));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x549 = INT16_MIN;
	uint64_t x550 = 28074155206802LLU;
	uint64_t x551 = 2696699459901078LLU;
	static int16_t x552 = -1;
	volatile int32_t t88 = -1;

	t88 = (x549<=((x550*x551)*x552));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x553 = INT8_MIN;
	int16_t x554 = -256;
	int8_t x555 = INT8_MIN;
	int32_t x556 = 7543;
	volatile int32_t t89 = -1;

	t89 = (x553<=((x554*x555)*x556));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x565 = UINT32_MAX;
	int8_t x566 = INT8_MIN;
	volatile uint64_t x567 = UINT64_MAX;
	int32_t t90 = 34;

	t90 = (x565<=((x566*x567)*x568));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x569 = UINT64_MAX;
	uint32_t x570 = UINT32_MAX;
	volatile uint16_t x571 = 1U;
	int16_t x572 = INT16_MIN;
	static int32_t t91 = 795;

	t91 = (x569<=((x570*x571)*x572));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x573 = -30LL;
	static int32_t x574 = -1;
	uint8_t x575 = 0U;
	int16_t x576 = -1;

	t92 = (x573<=((x574*x575)*x576));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x577 = 1U;
	volatile uint64_t x578 = 13498LLU;
	volatile int16_t x579 = INT16_MIN;
	int8_t x580 = 1;
	static int32_t t93 = -471302076;

	t93 = (x577<=((x578*x579)*x580));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x581 = 3;
	int32_t x582 = -1;
	int8_t x583 = INT8_MIN;
	int32_t x584 = 11;
	int32_t t94 = -1;

	t94 = (x581<=((x582*x583)*x584));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x589 = INT64_MIN;
	int32_t x591 = -413;
	static int8_t x592 = 0;
	int32_t t95 = 118;

	t95 = (x589<=((x590*x591)*x592));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x593 = INT16_MIN;
	uint32_t x594 = UINT32_MAX;
	int64_t x595 = 1LL;
	static int32_t x596 = INT32_MAX;
	int32_t t96 = 24;

	t96 = (x593<=((x594*x595)*x596));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x597 = 523;
	uint32_t x598 = 23538524U;
	static int32_t x599 = INT32_MIN;
	int64_t x600 = 264775242089496LL;
	volatile int32_t t97 = -126627;

	t97 = (x597<=((x598*x599)*x600));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x601 = -1LL;
	static volatile uint16_t x602 = UINT16_MAX;
	static volatile uint64_t x604 = 185057LLU;

	t98 = (x601<=((x602*x603)*x604));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x605 = UINT32_MAX;
	static uint64_t x606 = 95074809993225374LLU;
	int64_t x608 = -1LL;
	int32_t t99 = -186119624;

	t99 = (x605<=((x606*x607)*x608));

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


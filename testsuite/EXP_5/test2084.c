#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x5 = -25;
int32_t x21 = INT32_MIN;
int16_t x22 = 0;
uint16_t x24 = 27U;
static int64_t t4 = 119892LL;
int32_t x37 = 125;
uint32_t x38 = 780U;
int64_t x45 = -1LL;
int64_t x48 = INT64_MIN;
int16_t x55 = INT16_MIN;
static int64_t x82 = -1LL;
int16_t x90 = -8165;
volatile int8_t x97 = -1;
volatile int32_t t17 = 1017034;
static int8_t x107 = INT8_MAX;
uint32_t x108 = UINT32_MAX;
static volatile int64_t t19 = -6181339035868416LL;
int64_t t21 = 77858314287LL;
uint32_t x117 = UINT32_MAX;
uint8_t x121 = UINT8_MAX;
int64_t t23 = -72278970LL;
int8_t x134 = 1;
int32_t t24 = 6;
uint32_t x143 = 3U;
int64_t x151 = -1700827472859206LL;
int64_t x159 = INT64_MAX;
int32_t x161 = -234;
int8_t x163 = 21;
volatile int16_t x172 = INT16_MIN;
static volatile uint8_t x189 = 0U;
int8_t x190 = INT8_MIN;
uint8_t x193 = 35U;
uint16_t x211 = 7262U;
volatile int16_t x214 = -1;
volatile uint32_t t39 = 7211891U;
volatile uint64_t x225 = 54022303252363806LLU;
uint64_t t40 = 6458119588LLU;
uint32_t t41 = 6848165U;
uint64_t x237 = 3361LLU;
static uint16_t x243 = 43U;
volatile int8_t x245 = -38;
int64_t x252 = -1LL;
uint64_t t46 = 2551806LLU;
volatile uint8_t x254 = 122U;
static volatile int8_t x256 = -12;
int32_t x258 = INT32_MAX;
static volatile int32_t t48 = -21319464;
int8_t x263 = -28;
uint8_t x274 = 6U;
int32_t x291 = INT32_MIN;
uint64_t t56 = 4LLU;
static uint8_t x307 = 0U;
static int16_t x308 = INT16_MIN;
int16_t x329 = -1;
static uint32_t t60 = 207225424U;
static volatile uint32_t t61 = 303299U;
int64_t x345 = INT64_MIN;
int16_t x347 = -1;
int64_t x354 = INT64_MIN;
uint64_t t64 = 1078779080770LLU;
uint64_t t68 = 8120880420942811LLU;
int8_t x387 = 1;
int32_t x403 = 1;
volatile uint16_t x412 = 8539U;
volatile int64_t t73 = 7339561199259LL;
volatile uint64_t x416 = 115399685304613LLU;
volatile uint8_t x420 = UINT8_MAX;
int32_t x421 = INT32_MIN;
static uint64_t x423 = 266938878LLU;
int8_t x442 = 1;
uint32_t x450 = UINT32_MAX;
static uint64_t t81 = 9741042375LLU;
static uint64_t x462 = 2131259482956781LLU;
uint64_t t82 = 53733776LLU;
volatile uint64_t t84 = 0LLU;
static uint64_t x483 = 1683309878LLU;
static volatile uint64_t t85 = 1008460732LLU;
int64_t x499 = INT64_MAX;
static int64_t t88 = -275075821813733118LL;
static int64_t x502 = INT64_MIN;
volatile uint64_t t89 = 2000384162LLU;
int32_t x505 = 791951;
volatile int8_t x509 = -1;
uint64_t x512 = 55914292527550429LLU;
static int16_t x523 = INT16_MIN;
static int8_t x525 = -2;
volatile int64_t x528 = INT64_MIN;
int16_t x530 = -1;
volatile uint32_t x543 = 366U;
volatile int8_t x549 = INT8_MIN;
int64_t x556 = -3597858245LL;


void f0(void) {
	static int16_t x6 = -1;
	int64_t x7 = INT64_MIN;
	int16_t x8 = INT16_MIN;
	int64_t t0 = 29552688054LL;

	t0 = (x5/((x6^x7)%x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = -9;
	volatile int64_t x10 = INT64_MIN;
	uint16_t x11 = 2090U;
	volatile uint64_t x12 = UINT64_MAX;
	volatile uint64_t t1 = 1260830LLU;

	t1 = (x9/((x10^x11)%x12));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = 15892757387LL;
	int32_t x14 = INT32_MIN;
	static int8_t x15 = 7;
	uint32_t x16 = UINT32_MAX;
	int64_t t2 = 4263969858836264912LL;

	t2 = (x13/((x14^x15)%x16));

	if (t2 != 7LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x23 = UINT16_MAX;
	int32_t t3 = -5425220;

	t3 = (x21/((x22^x23)%x24));

	if (t3 != -357913941) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x25 = -1LL;
	static int16_t x26 = -5771;
	static int32_t x27 = -1;
	int32_t x28 = 3424426;

	t4 = (x25/((x26^x27)%x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = 116203U;
	int8_t x34 = INT8_MIN;
	int32_t x35 = -1;
	int32_t x36 = -6;
	volatile uint32_t t5 = 1U;

	t5 = (x33/((x34^x35)%x36));

	if (t5 != 116203U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x39 = INT32_MIN;
	int16_t x40 = -47;
	static volatile uint32_t t6 = 1688711U;

	t6 = (x37/((x38^x39)%x40));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 109U;
	int32_t x42 = INT32_MIN;
	uint8_t x43 = UINT8_MAX;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t7 = -851317507;

	t7 = (x41/((x42^x43)%x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x46 = INT32_MIN;
	int16_t x47 = -1285;
	int64_t t8 = -506344LL;

	t8 = (x45/((x46^x47)%x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x53 = 1726U;
	uint32_t x54 = 128463253U;
	int32_t x56 = INT32_MIN;
	uint32_t t9 = 818240U;

	t9 = (x53/((x54^x55)%x56));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x66 = UINT32_MAX;
	uint16_t x67 = 22208U;
	int32_t x68 = INT32_MIN;
	int64_t t10 = 108071170934LL;

	t10 = (x65/((x66^x67)%x68));

	if (t10 != -4295011714LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x69 = INT8_MIN;
	int32_t x70 = 61969;
	static int8_t x71 = INT8_MAX;
	volatile int64_t x72 = 364LL;
	volatile int64_t t11 = 1930980947796054LL;

	t11 = (x69/((x70^x71)%x72));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = INT64_MAX;
	volatile uint8_t x78 = UINT8_MAX;
	volatile int16_t x79 = -1;
	int64_t x80 = INT64_MIN;
	int64_t t12 = -259425942779LL;

	t12 = (x77/((x78^x79)%x80));

	if (t12 != -36028797018963967LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x81 = INT64_MIN;
	static int16_t x83 = INT16_MAX;
	volatile int32_t x84 = INT32_MAX;
	volatile int64_t t13 = -5742465898019LL;

	t13 = (x81/((x82^x83)%x84));

	if (t13 != 281474976710656LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = -1193990;
	static int32_t x86 = -247375444;
	int32_t x87 = INT32_MIN;
	int8_t x88 = INT8_MAX;
	volatile int32_t t14 = -1;

	t14 = (x85/((x86^x87)%x88));

	if (t14 != -10205) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x89 = INT16_MIN;
	volatile int16_t x91 = -2;
	int32_t x92 = INT32_MIN;
	volatile int32_t t15 = 58;

	t15 = (x89/((x90^x91)%x92));

	if (t15 != -4) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = -36;
	int8_t x94 = INT8_MIN;
	int64_t x95 = 27617480LL;
	int8_t x96 = -16;
	int64_t t16 = -716699159696555389LL;

	t16 = (x93/((x94^x95)%x96));

	if (t16 != 4LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x98 = INT16_MAX;
	volatile uint16_t x99 = 6198U;
	static int32_t x100 = -2;

	t17 = (x97/((x98^x99)%x100));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x101 = -23;
	int64_t x102 = INT64_MIN;
	uint8_t x103 = 0U;
	uint32_t x104 = 211542U;
	int64_t t18 = 75064LL;

	t18 = (x101/((x102^x103)%x104));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x105 = -89414345169639437LL;
	int8_t x106 = 1;

	t19 = (x105/((x106^x107)%x108));

	if (t19 != -709637660076503LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = 2028;
	int16_t x110 = -1;
	int32_t x111 = INT32_MIN;
	int64_t x112 = -8091410LL;
	int64_t t20 = -47658765970LL;

	t20 = (x109/((x110^x111)%x112));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x113 = INT16_MIN;
	int32_t x114 = -14543;
	int32_t x115 = -1;
	int64_t x116 = INT64_MIN;

	t21 = (x113/((x114^x115)%x116));

	if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x118 = UINT32_MAX;
	uint16_t x119 = 43U;
	volatile int8_t x120 = -8;
	uint32_t t22 = 57U;

	t22 = (x117/((x118^x119)%x120));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x122 = -1LL;
	int8_t x123 = INT8_MIN;
	static int16_t x124 = INT16_MIN;

	t23 = (x121/((x122^x123)%x124));

	if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x133 = INT16_MAX;
	volatile int32_t x135 = INT32_MIN;
	volatile int16_t x136 = INT16_MIN;

	t24 = (x133/((x134^x135)%x136));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x137 = UINT8_MAX;
	static volatile int64_t x138 = 81535608LL;
	int8_t x139 = INT8_MIN;
	volatile int32_t x140 = INT32_MIN;
	volatile int64_t t25 = -629105LL;

	t25 = (x137/((x138^x139)%x140));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x141 = INT64_MIN;
	static int16_t x142 = INT16_MIN;
	uint64_t x144 = 5LLU;
	volatile uint64_t t26 = 1072629947LLU;

	t26 = (x141/((x142^x143)%x144));

	if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = 26;
	static int8_t x146 = -2;
	int8_t x147 = 30;
	volatile int8_t x148 = INT8_MAX;
	int32_t t27 = 146744236;

	t27 = (x145/((x146^x147)%x148));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x149 = 0U;
	volatile uint16_t x150 = UINT16_MAX;
	int8_t x152 = 4;
	int64_t t28 = 28491LL;

	t28 = (x149/((x150^x151)%x152));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x157 = 811U;
	int64_t x158 = -1LL;
	int8_t x160 = INT8_MAX;
	static int64_t t29 = -32024229420448381LL;

	t29 = (x157/((x158^x159)%x160));

	if (t29 != -811LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x162 = INT16_MIN;
	static uint16_t x164 = 2503U;
	static volatile int32_t t30 = -2581654;

	t30 = (x161/((x162^x163)%x164));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x169 = -1LL;
	static int32_t x170 = 9479700;
	static volatile uint8_t x171 = 22U;
	int64_t t31 = 1064782LL;

	t31 = (x169/((x170^x171)%x172));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = 2;
	int64_t x174 = 12172460LL;
	int16_t x175 = -1;
	int64_t x176 = INT64_MIN;
	static int64_t t32 = 1614429056934339LL;

	t32 = (x173/((x174^x175)%x176));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = -1LL;
	uint32_t x179 = 4U;
	int32_t x180 = -32275;
	volatile int64_t t33 = 2744059LL;

	t33 = (x177/((x178^x179)%x180));

	if (t33 != 6553LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x191 = UINT8_MAX;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t34 = 83623232197854486LLU;

	t34 = (x189/((x190^x191)%x192));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x194 = -502;
	volatile int64_t x195 = INT64_MAX;
	static int32_t x196 = INT32_MIN;
	volatile int64_t t35 = -6507469LL;

	t35 = (x193/((x194^x195)%x196));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x209 = -1;
	uint8_t x210 = 0U;
	uint32_t x212 = 16146234U;
	volatile uint32_t t36 = 110145U;

	t36 = (x209/((x210^x211)%x212));

	if (t36 != 591430U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x213 = INT16_MIN;
	int32_t x215 = INT32_MIN;
	int64_t x216 = INT64_MIN;
	volatile int64_t t37 = -672213772522151489LL;

	t37 = (x213/((x214^x215)%x216));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x217 = INT64_MIN;
	uint8_t x218 = 14U;
	int16_t x219 = -1;
	static int16_t x220 = -16;
	int64_t t38 = -4234194949LL;

	t38 = (x217/((x218^x219)%x220));

	if (t38 != 614891469123651720LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x221 = UINT32_MAX;
	static int8_t x222 = -1;
	int16_t x223 = -88;
	static volatile int16_t x224 = 402;

	t39 = (x221/((x222^x223)%x224));

	if (t39 != 49367440U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x226 = 1;
	volatile uint64_t x227 = 0LLU;
	volatile int32_t x228 = -9;

	t40 = (x225/((x226^x227)%x228));

	if (t40 != 54022303252363806LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x229 = 2;
	uint32_t x230 = 128463U;
	static uint8_t x231 = UINT8_MAX;
	volatile int8_t x232 = INT8_MAX;

	t41 = (x229/((x230^x231)%x232));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x233 = INT8_MAX;
	int64_t x234 = 964192331887427784LL;
	uint64_t x235 = 11049426LLU;
	uint8_t x236 = 6U;
	uint64_t t42 = 1620885LLU;

	t42 = (x233/((x234^x235)%x236));

	if (t42 != 63LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x238 = INT8_MIN;
	int8_t x239 = 0;
	static int32_t x240 = INT32_MAX;
	volatile uint64_t t43 = 7285168964252979056LLU;

	t43 = (x237/((x238^x239)%x240));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x241 = 1U;
	uint32_t x242 = UINT32_MAX;
	int32_t x244 = INT32_MIN;
	uint32_t t44 = 941030091U;

	t44 = (x241/((x242^x243)%x244));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x246 = -6220742LL;
	volatile uint16_t x247 = UINT16_MAX;
	uint64_t x248 = UINT64_MAX;
	uint64_t t45 = 7LLU;

	t45 = (x245/((x246^x247)%x248));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x249 = 7867U;
	volatile uint64_t x250 = 102126940LLU;
	int8_t x251 = INT8_MAX;

	t46 = (x249/((x250^x251)%x252));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x253 = 1U;
	static uint16_t x255 = 6U;
	static int32_t t47 = 31;

	t47 = (x253/((x254^x255)%x256));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x257 = 0U;
	volatile int32_t x259 = -672;
	uint8_t x260 = 40U;

	t48 = (x257/((x258^x259)%x260));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x261 = -1;
	int32_t x262 = INT32_MAX;
	volatile uint16_t x264 = 162U;
	int32_t t49 = 1;

	t49 = (x261/((x262^x263)%x264));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x273 = UINT32_MAX;
	static int8_t x275 = -1;
	int64_t x276 = -3408207507735053LL;
	volatile int64_t t50 = 3514418LL;

	t50 = (x273/((x274^x275)%x276));

	if (t50 != -613566756LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x277 = UINT32_MAX;
	uint64_t x278 = UINT64_MAX;
	int64_t x279 = 21648LL;
	int64_t x280 = 561408LL;
	uint64_t t51 = 617809143670056066LLU;

	t51 = (x277/((x278^x279)%x280));

	if (t51 != 7953LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x281 = INT32_MAX;
	int8_t x282 = 19;
	volatile int32_t x283 = INT32_MIN;
	int64_t x284 = INT64_MIN;
	volatile int64_t t52 = 42703215LL;

	t52 = (x281/((x282^x283)%x284));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x285 = 400;
	volatile int16_t x286 = INT16_MIN;
	static int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MIN;
	int32_t t53 = 17650;

	t53 = (x285/((x286^x287)%x288));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x289 = INT64_MAX;
	int8_t x290 = INT8_MAX;
	volatile int8_t x292 = 10;
	int64_t t54 = 13603640LL;

	t54 = (x289/((x290^x291)%x292));

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x293 = 3;
	int8_t x294 = 32;
	volatile uint8_t x295 = 48U;
	uint32_t x296 = 355U;
	volatile uint32_t t55 = 1324U;

	t55 = (x293/((x294^x295)%x296));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x297 = INT16_MAX;
	int8_t x298 = INT8_MIN;
	volatile uint64_t x299 = 3506LLU;
	static volatile int16_t x300 = -1;

	t56 = (x297/((x298^x299)%x300));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x305 = 1877418;
	uint64_t x306 = UINT64_MAX;
	static uint64_t t57 = 245156976LLU;

	t57 = (x305/((x306^x307)%x308));

	if (t57 != 57LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x309 = 1LL;
	uint8_t x310 = 6U;
	int8_t x311 = INT8_MAX;
	int8_t x312 = INT8_MIN;
	int64_t t58 = 790519566815450LL;

	t58 = (x309/((x310^x311)%x312));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x317 = 4U;
	int32_t x318 = INT32_MIN;
	int16_t x319 = -1;
	static uint32_t x320 = 84357099U;
	static volatile uint32_t t59 = 36182413U;

	t59 = (x317/((x318^x319)%x320));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x330 = 9120276U;
	int16_t x331 = 1;
	int8_t x332 = INT8_MIN;

	t60 = (x329/((x330^x331)%x332));

	if (t60 != 470U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x333 = UINT32_MAX;
	uint16_t x334 = 2U;
	int8_t x335 = -1;
	uint8_t x336 = UINT8_MAX;

	t61 = (x333/((x334^x335)%x336));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x341 = 1744LLU;
	volatile int64_t x342 = 1LL;
	uint64_t x343 = UINT64_MAX;
	volatile uint64_t x344 = UINT64_MAX;
	volatile uint64_t t62 = 832996507253299LLU;

	t62 = (x341/((x342^x343)%x344));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x346 = 1361984076017148664LL;
	int16_t x348 = INT16_MIN;
	int64_t t63 = -15604170197586LL;

	t63 = (x345/((x346^x347)%x348));

	if (t63 != 1030199043544596LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x353 = INT8_MAX;
	volatile uint64_t x355 = 978004036122653711LLU;
	int16_t x356 = -1;

	t64 = (x353/((x354^x355)%x356));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x361 = 1U;
	volatile uint16_t x362 = UINT16_MAX;
	volatile uint8_t x363 = 79U;
	int64_t x364 = INT64_MAX;
	volatile int64_t t65 = 1254LL;

	t65 = (x361/((x362^x363)%x364));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = 60;
	int16_t x371 = INT16_MIN;
	int32_t x372 = -300255698;
	static int32_t t66 = 1;

	t66 = (x369/((x370^x371)%x372));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x377 = 14U;
	uint32_t x378 = UINT32_MAX;
	int32_t x379 = 63;
	int16_t x380 = -1;
	volatile uint32_t t67 = 149452969U;

	t67 = (x377/((x378^x379)%x380));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = -3;
	int64_t x383 = INT64_MIN;
	int64_t x384 = INT64_MIN;

	t68 = (x381/((x382^x383)%x384));

	if (t68 != 2LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x385 = INT32_MAX;
	int16_t x386 = -1;
	uint8_t x388 = 3U;
	int32_t t69 = 8;

	t69 = (x385/((x386^x387)%x388));

	if (t69 != -1073741823) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x393 = UINT64_MAX;
	int16_t x394 = -4;
	int32_t x395 = INT32_MIN;
	static int32_t x396 = INT32_MIN;
	volatile uint64_t t70 = 1313418468917847LLU;

	t70 = (x393/((x394^x395)%x396));

	if (t70 != 8589934608LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x401 = 46684U;
	int32_t x402 = INT32_MIN;
	volatile uint16_t x404 = 82U;
	volatile uint32_t t71 = 0U;

	t71 = (x401/((x402^x403)%x404));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x405 = 82U;
	static int16_t x406 = INT16_MAX;
	static int8_t x407 = 0;
	int32_t x408 = INT32_MIN;
	int32_t t72 = 1189;

	t72 = (x405/((x406^x407)%x408));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x409 = -1LL;
	int8_t x410 = INT8_MAX;
	int16_t x411 = INT16_MAX;

	t73 = (x409/((x410^x411)%x412));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x413 = -1LL;
	int16_t x414 = INT16_MIN;
	int8_t x415 = INT8_MIN;
	volatile uint64_t t74 = 9251228568637LLU;

	t74 = (x413/((x414^x415)%x416));

	if (t74 != 565157600297474LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x417 = -1LL;
	uint32_t x418 = UINT32_MAX;
	int32_t x419 = INT32_MAX;
	int64_t t75 = 1894LL;

	t75 = (x417/((x418^x419)%x420));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x422 = INT8_MIN;
	static int64_t x424 = 3615564455754648LL;
	uint64_t t76 = 3LLU;

	t76 = (x421/((x422^x423)%x424));

	if (t76 != 137436LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x429 = -13309393958LL;
	volatile uint64_t x430 = 1369552464393280LLU;
	static int32_t x431 = INT32_MIN;
	uint16_t x432 = UINT16_MAX;
	uint64_t t77 = 359473332LLU;

	t77 = (x429/((x430^x431)%x432));

	if (t77 != 453839100044288LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x437 = 3U;
	int32_t x438 = INT32_MIN;
	uint8_t x439 = 3U;
	volatile int32_t x440 = INT32_MIN;
	static int32_t t78 = 117396088;

	t78 = (x437/((x438^x439)%x440));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x441 = INT32_MIN;
	volatile uint32_t x443 = UINT32_MAX;
	static int16_t x444 = INT16_MIN;
	volatile uint32_t t79 = 156U;

	t79 = (x441/((x442^x443)%x444));

	if (t79 != 65540U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x449 = 3LL;
	int8_t x451 = -15;
	int32_t x452 = INT32_MAX;
	static volatile int64_t t80 = -31643474545206073LL;

	t80 = (x449/((x450^x451)%x452));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x457 = INT32_MIN;
	int64_t x458 = INT64_MAX;
	static volatile uint64_t x459 = UINT64_MAX;
	int16_t x460 = INT16_MIN;

	t81 = (x457/((x458^x459)%x460));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x461 = INT32_MAX;
	volatile uint64_t x463 = 21LLU;
	int64_t x464 = -5LL;

	t82 = (x461/((x462^x463)%x464));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x473 = -6LL;
	static volatile int32_t x474 = -1;
	int16_t x475 = INT16_MAX;
	int64_t x476 = 6LL;
	volatile int64_t t83 = 33315120184LL;

	t83 = (x473/((x474^x475)%x476));

	if (t83 != 3LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x477 = 87161077U;
	int32_t x478 = 1705;
	uint64_t x479 = 28182LLU;
	uint16_t x480 = 2U;

	t84 = (x477/((x478^x479)%x480));

	if (t84 != 87161077LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x481 = 19306U;
	int32_t x482 = -35852289;
	volatile int8_t x484 = INT8_MIN;

	t85 = (x481/((x482^x483)%x484));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x485 = INT32_MIN;
	volatile uint16_t x486 = 3U;
	volatile int32_t x487 = INT32_MIN;
	static uint16_t x488 = 22U;
	int32_t t86 = -8749726;

	t86 = (x485/((x486^x487)%x488));

	if (t86 != 102261126) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x493 = 39;
	int64_t x494 = INT64_MIN;
	int64_t x495 = -1LL;
	int16_t x496 = INT16_MIN;
	int64_t t87 = -137204845980387LL;

	t87 = (x493/((x494^x495)%x496));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x497 = INT8_MAX;
	uint32_t x498 = UINT32_MAX;
	uint32_t x500 = 10684U;

	t88 = (x497/((x498^x499)%x500));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x501 = 884811LLU;
	int64_t x503 = INT64_MAX;
	uint32_t x504 = UINT32_MAX;

	t89 = (x501/((x502^x503)%x504));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x506 = UINT32_MAX;
	int32_t x507 = INT32_MAX;
	int32_t x508 = 50;
	uint32_t t90 = 40320929U;

	t90 = (x505/((x506^x507)%x508));

	if (t90 != 16498U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x510 = INT64_MAX;
	int64_t x511 = 423990711527LL;
	volatile uint64_t t91 = 16081409238199288LLU;

	t91 = (x509/((x510^x511)%x512));

	if (t91 != 345LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x521 = -1;
	uint16_t x522 = 0U;
	static volatile uint8_t x524 = 7U;
	static volatile int32_t t92 = -216866;

	t92 = (x521/((x522^x523)%x524));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x526 = INT16_MIN;
	int32_t x527 = 28;
	volatile int64_t t93 = 286577115710074277LL;

	t93 = (x525/((x526^x527)%x528));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x529 = UINT64_MAX;
	static uint32_t x531 = 18U;
	static int16_t x532 = INT16_MIN;
	uint64_t t94 = 39149LLU;

	t94 = (x529/((x530^x531)%x532));

	if (t94 != 563276560313583LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x533 = 6U;
	uint32_t x534 = 27077298U;
	int64_t x535 = -1159LL;
	uint32_t x536 = 1561916466U;
	int64_t t95 = 1LL;

	t95 = (x533/((x534^x535)%x536));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x541 = UINT32_MAX;
	volatile uint64_t x542 = 956397408LLU;
	uint64_t x544 = 63542124572211553LLU;
	static uint64_t t96 = 860431427LLU;

	t96 = (x541/((x542^x543)%x544));

	if (t96 != 4LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x545 = 0;
	int64_t x546 = -1LL;
	int64_t x547 = INT64_MIN;
	uint8_t x548 = 17U;
	volatile int64_t t97 = -11281841LL;

	t97 = (x545/((x546^x547)%x548));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x550 = 27U;
	int64_t x551 = -1LL;
	int16_t x552 = INT16_MAX;
	int64_t t98 = 8LL;

	t98 = (x549/((x550^x551)%x552));

	if (t98 != 4LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x553 = 62U;
	static volatile uint16_t x554 = UINT16_MAX;
	static int32_t x555 = INT32_MIN;
	volatile int64_t t99 = -55651766LL;

	t99 = (x553/((x554^x555)%x556));

	if (t99 != 0LL) { NG(); } else { ; }
	
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


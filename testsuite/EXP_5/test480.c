#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -1LL;
volatile uint16_t x9 = 3971U;
uint8_t x16 = 35U;
int8_t x20 = INT8_MIN;
int32_t t4 = 0;
uint16_t x23 = UINT16_MAX;
int8_t x28 = INT8_MIN;
int8_t x29 = -1;
uint16_t x32 = 2519U;
uint64_t t7 = UINT64_MAX;
static int8_t x37 = 0;
uint64_t x38 = UINT64_MAX;
static uint64_t t8 = 7445906432749941711LLU;
int8_t x52 = INT8_MIN;
static int16_t x55 = 1;
volatile int64_t t12 = -158LL;
volatile int32_t x65 = -116813;
int64_t x77 = INT64_MIN;
static int32_t x97 = INT32_MIN;
int8_t x99 = INT8_MIN;
int32_t x111 = INT32_MIN;
int16_t x115 = -53;
int64_t x116 = -1LL;
volatile int64_t t23 = 1588964LL;
int64_t t25 = -126897392LL;
volatile uint16_t x144 = 7U;
int8_t x148 = -7;
int64_t x152 = INT64_MIN;
static uint64_t t29 = UINT64_MAX;
uint64_t x164 = 23835332LLU;
static uint64_t t34 = 5352029757317778337LLU;
volatile int64_t x190 = 917463978989539LL;
volatile int8_t x191 = -1;
int16_t x194 = 0;
static volatile int64_t t37 = -3089684317358LL;
static int64_t x198 = -3333875LL;
static int64_t t38 = 26976270792386904LL;
uint16_t x202 = UINT16_MAX;
volatile int16_t x213 = INT16_MAX;
static int16_t x214 = 0;
uint16_t x222 = UINT16_MAX;
uint32_t x232 = 97119160U;
int32_t x246 = INT32_MIN;
uint16_t x251 = 26462U;
int32_t t45 = -715788;
volatile uint8_t x256 = UINT8_MAX;
volatile uint16_t x262 = 13828U;
uint64_t x264 = UINT64_MAX;
static int8_t x280 = INT8_MIN;
int32_t t49 = -9;
volatile uint64_t t52 = 190933741LLU;
uint16_t x300 = 7U;
static int8_t x302 = 1;
uint16_t x304 = 2699U;
volatile uint64_t t57 = 89022278777306595LLU;
static uint32_t x363 = 41371U;
uint16_t x387 = 15530U;
int64_t x391 = -1LL;
int64_t x396 = -1LL;
uint16_t x415 = 3U;
int32_t t67 = 100307;
static uint64_t x424 = UINT64_MAX;
int32_t x437 = -1;
int32_t x441 = INT32_MAX;
int64_t x448 = -1LL;
volatile uint32_t x452 = 55244216U;
uint32_t t73 = 256U;
uint16_t x458 = 2098U;
static volatile int64_t t74 = -1LL;
int8_t x464 = INT8_MIN;
uint32_t t76 = UINT32_MAX;
volatile uint64_t t77 = 1085132LLU;
int32_t x479 = INT32_MAX;
volatile int16_t x487 = INT16_MAX;
uint16_t x489 = 2U;
int8_t x492 = -1;
int32_t t81 = 20489690;
volatile int16_t x499 = -1;
int64_t t82 = -4068410378704LL;
uint16_t x507 = UINT16_MAX;
uint64_t x508 = UINT64_MAX;
static int8_t x511 = INT8_MIN;
static uint32_t x521 = 1U;
volatile int16_t x524 = INT16_MIN;
volatile int8_t x527 = -1;
uint8_t x539 = 42U;
volatile int8_t x541 = 19;
static int16_t x547 = 0;
int16_t x555 = -1;
volatile uint64_t t92 = 53287188989LLU;
uint8_t x557 = 2U;
int32_t x558 = 120561450;
volatile uint64_t x566 = 414887503058844377LLU;
int32_t x567 = -1;
uint32_t x572 = 5988U;
uint64_t x573 = 37051507520LLU;
int64_t x574 = -31277335713273953LL;
static volatile uint16_t x575 = 39U;
int8_t x579 = -2;
volatile int32_t t98 = 60;
int8_t x581 = -1;
int16_t x584 = INT16_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static uint16_t x2 = UINT16_MAX;
	uint8_t x3 = UINT8_MAX;
	int32_t x4 = -9;
	int64_t t0 = -3LL;

	t0 = (x1|((x2*x3)&x4));

	if (t0 != -9223372036838064383LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 30U;
	uint16_t x7 = 624U;
	static uint16_t x8 = UINT16_MAX;
	int64_t t1 = -43902LL;

	t1 = (x5|((x6*x7)&x8));

	if (t1 != 64926LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 23;
	int32_t x11 = -27;
	int16_t x12 = -1;
	static volatile int32_t t2 = -1;

	t2 = (x9|((x10*x11)&x12));

	if (t2 != -109) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	static int16_t x14 = -182;
	int8_t x15 = INT8_MIN;
	static int64_t t3 = INT64_MIN;

	t3 = (x13|((x14*x15)&x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -15109;
	uint8_t x18 = 1U;
	uint8_t x19 = 60U;

	t4 = (x17|((x18*x19)&x20));

	if (t4 != -15109) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = -1;
	int64_t x24 = 24LL;
	int64_t t5 = 45750LL;

	t5 = (x21|((x22*x23)&x24));

	if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = INT8_MIN;
	uint8_t x26 = 6U;
	volatile int8_t x27 = 0;
	int32_t t6 = 1039085;

	t6 = (x25|((x26*x27)&x28));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = 16976468;
	static uint64_t x31 = UINT64_MAX;

	t7 = (x29|((x30*x31)&x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x39 = -29;
	uint8_t x40 = 16U;

	t8 = (x37|((x38*x39)&x40));

	if (t8 != 16LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x41 = UINT8_MAX;
	int8_t x42 = INT8_MAX;
	volatile uint8_t x43 = 0U;
	static volatile int8_t x44 = 50;
	int32_t t9 = -235;

	t9 = (x41|((x42*x43)&x44));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = 56;
	uint64_t x50 = 212891551LLU;
	static int16_t x51 = INT16_MIN;
	uint64_t t10 = 910LLU;

	t10 = (x49|((x50*x51)&x52));

	if (t10 != 18446737097679208504LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x53 = 3;
	static uint32_t x54 = UINT32_MAX;
	static volatile uint64_t x56 = 1941481891048LLU;
	static volatile uint64_t t11 = 2LLU;

	t11 = (x53|((x54*x55)&x56));

	if (t11 != 156673259LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	static uint8_t x58 = UINT8_MAX;
	static volatile uint16_t x59 = 1U;
	int16_t x60 = INT16_MAX;

	t12 = (x57|((x58*x59)&x60));

	if (t12 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x66 = -1;
	static volatile int8_t x67 = -12;
	volatile int8_t x68 = -31;
	static int32_t t13 = -576;

	t13 = (x65|((x66*x67)&x68));

	if (t13 != -116813) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x69 = INT32_MIN;
	uint16_t x70 = UINT16_MAX;
	int16_t x71 = INT16_MAX;
	static int64_t x72 = 1044794797001788986LL;
	int64_t t14 = -60784492LL;

	t14 = (x69|((x70*x71)&x72));

	if (t14 != -1837727744LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x78 = INT16_MAX;
	int64_t x79 = -1LL;
	volatile uint64_t x80 = UINT64_MAX;
	volatile uint64_t t15 = 3505901398887757701LLU;

	t15 = (x77|((x78*x79)&x80));

	if (t15 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x81 = UINT8_MAX;
	int32_t x82 = -1;
	uint64_t x83 = 12109435649218640LLU;
	static int64_t x84 = 419LL;
	uint64_t t16 = 23596LLU;

	t16 = (x81|((x82*x83)&x84));

	if (t16 != 511LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = -1;
	static uint16_t x90 = 14268U;
	static uint8_t x91 = UINT8_MAX;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t17 = 2644;

	t17 = (x89|((x90*x91)&x92));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = -1LL;
	int16_t x94 = INT16_MIN;
	int32_t x95 = -1;
	volatile int32_t x96 = INT32_MIN;
	int64_t t18 = 567979522476879776LL;

	t18 = (x93|((x94*x95)&x96));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x98 = -950103076LL;
	uint8_t x100 = 1U;
	int64_t t19 = 72LL;

	t19 = (x97|((x98*x99)&x100));

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = -1;
	uint64_t x106 = 9159883LLU;
	uint8_t x107 = 42U;
	volatile uint16_t x108 = UINT16_MAX;
	static volatile uint64_t t20 = UINT64_MAX;

	t20 = (x105|((x106*x107)&x108));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = 48429LLU;
	uint32_t x110 = 2U;
	static int64_t x112 = INT64_MAX;
	uint64_t t21 = 554350500705LLU;

	t21 = (x109|((x110*x111)&x112));

	if (t21 != 48429LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x113 = INT64_MIN;
	int16_t x114 = INT16_MIN;
	int64_t t22 = -23LL;

	t22 = (x113|((x114*x115)&x116));

	if (t22 != -9223372036853039104LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x125 = -1LL;
	int8_t x126 = INT8_MIN;
	uint8_t x127 = 0U;
	volatile uint16_t x128 = 4502U;

	t23 = (x125|((x126*x127)&x128));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x129 = INT64_MAX;
	int16_t x130 = INT16_MIN;
	int16_t x131 = INT16_MIN;
	static uint16_t x132 = UINT16_MAX;
	volatile int64_t t24 = INT64_MAX;

	t24 = (x129|((x130*x131)&x132));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x133 = 7U;
	int64_t x134 = 1LL;
	uint8_t x135 = UINT8_MAX;
	int64_t x136 = INT64_MAX;

	t25 = (x133|((x134*x135)&x136));

	if (t25 != 255LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = INT16_MIN;
	static int64_t x142 = 6910LL;
	int8_t x143 = INT8_MAX;
	volatile int64_t t26 = -6458648059LL;

	t26 = (x141|((x142*x143)&x144));

	if (t26 != -32766LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = INT8_MAX;
	uint32_t x146 = 52105U;
	static volatile int16_t x147 = 0;
	uint32_t t27 = 1U;

	t27 = (x145|((x146*x147)&x148));

	if (t27 != 127U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x149 = 2882668420276320213LLU;
	int32_t x150 = -1;
	volatile uint8_t x151 = 5U;
	static volatile uint64_t t28 = 412373LLU;

	t28 = (x149|((x150*x151)&x152));

	if (t28 != 12106040457131096021LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x153 = -1;
	int8_t x154 = 1;
	volatile uint64_t x155 = 34192365103456LLU;
	uint16_t x156 = 35U;

	t29 = (x153|((x154*x155)&x156));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x157 = 1;
	int8_t x158 = -1;
	int8_t x159 = -1;
	static int64_t x160 = INT64_MIN;
	int64_t t30 = -51781LL;

	t30 = (x157|((x158*x159)&x160));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x161 = UINT64_MAX;
	static volatile int16_t x162 = -1;
	int32_t x163 = -1;
	uint64_t t31 = UINT64_MAX;

	t31 = (x161|((x162*x163)&x164));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x169 = INT8_MAX;
	static int16_t x170 = 7;
	uint32_t x171 = 2405939U;
	volatile uint32_t x172 = 57634U;
	uint32_t t32 = 1335U;

	t32 = (x169|((x170*x171)&x172));

	if (t32 != 57727U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = 205;
	int8_t x174 = -1;
	static int8_t x175 = 0;
	int8_t x176 = INT8_MIN;
	int32_t t33 = -14496615;

	t33 = (x173|((x174*x175)&x176));

	if (t33 != 205) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x177 = -2953567134264460806LL;
	uint64_t x178 = 787LLU;
	volatile int64_t x179 = -1LL;
	uint64_t x180 = 4372150262505LLU;

	t34 = (x177|((x178*x179)&x180));

	if (t34 != 15493178764538935803LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x185 = INT32_MIN;
	volatile uint64_t x186 = 548570944198157LLU;
	int64_t x187 = INT64_MIN;
	int64_t x188 = INT64_MIN;
	static volatile uint64_t t35 = 129034849LLU;

	t35 = (x185|((x186*x187)&x188));

	if (t35 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x189 = INT64_MIN;
	int32_t x192 = INT32_MIN;
	volatile int64_t t36 = -48171LL;

	t36 = (x189|((x190*x191)&x192));

	if (t36 != -917465143967744LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x193 = -1LL;
	uint16_t x195 = 1051U;
	int8_t x196 = -1;

	t37 = (x193|((x194*x195)&x196));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x197 = 63;
	static int16_t x199 = 465;
	int64_t x200 = INT64_MAX;

	t38 = (x197|((x198*x199)&x200));

	if (t38 != 9223372035304523967LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x201 = INT32_MAX;
	int8_t x203 = -1;
	static volatile int32_t x204 = 650771;
	static int32_t t39 = INT32_MAX;

	t39 = (x201|((x202*x203)&x204));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x215 = INT64_MAX;
	volatile uint8_t x216 = 1U;
	volatile int64_t t40 = -289054494LL;

	t40 = (x213|((x214*x215)&x216));

	if (t40 != 32767LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x217 = -1;
	int16_t x218 = -1;
	uint32_t x219 = UINT32_MAX;
	int16_t x220 = INT16_MIN;
	uint32_t t41 = UINT32_MAX;

	t41 = (x217|((x218*x219)&x220));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x221 = 41U;
	int64_t x223 = -3154103LL;
	int8_t x224 = -1;
	int64_t t42 = -969395226791LL;

	t42 = (x221|((x222*x223)&x224));

	if (t42 != -206704140097LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x229 = INT16_MIN;
	static uint64_t x230 = 3036867036294LLU;
	volatile uint8_t x231 = 7U;
	volatile uint64_t t43 = 73806110068LLU;

	t43 = (x229|((x230*x231)&x232));

	if (t43 != 18446744073709521832LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = -10;
	uint32_t x247 = 3U;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t44 = 7305852568155LLU;

	t44 = (x245|((x246*x247)&x248));

	if (t44 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x249 = INT16_MIN;
	int8_t x250 = -1;
	static volatile int16_t x252 = -1;

	t45 = (x249|((x250*x251)&x252));

	if (t45 != -26462) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x253 = -100718067;
	uint16_t x254 = 9U;
	volatile int8_t x255 = -1;
	int32_t t46 = 1687;

	t46 = (x253|((x254*x255)&x256));

	if (t46 != -100717825) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x261 = 1142;
	uint16_t x263 = UINT16_MAX;
	uint64_t t47 = 17301235LLU;

	t47 = (x261|((x262*x263)&x264));

	if (t47 != 906219006LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x273 = -1;
	int16_t x274 = INT16_MAX;
	int8_t x275 = INT8_MIN;
	uint64_t x276 = UINT64_MAX;
	uint64_t t48 = UINT64_MAX;

	t48 = (x273|((x274*x275)&x276));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x277 = 2U;
	int32_t x278 = -1;
	int16_t x279 = INT16_MIN;

	t49 = (x277|((x278*x279)&x280));

	if (t49 != 32770) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x281 = INT64_MIN;
	int8_t x282 = INT8_MAX;
	uint16_t x283 = 3922U;
	static int8_t x284 = -1;
	volatile int64_t t50 = 60228346985LL;

	t50 = (x281|((x282*x283)&x284));

	if (t50 != -9223372036854277714LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MIN;
	volatile int64_t x288 = -1LL;
	int64_t t51 = 31LL;

	t51 = (x285|((x286*x287)&x288));

	if (t51 != -2143289344LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x293 = -112;
	int16_t x294 = INT16_MIN;
	int8_t x295 = INT8_MIN;
	static uint64_t x296 = UINT64_MAX;

	t52 = (x293|((x294*x295)&x296));

	if (t52 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x297 = 15473704687LLU;
	static volatile uint64_t x298 = 63LLU;
	int8_t x299 = -7;
	uint64_t t53 = 1LLU;

	t53 = (x297|((x298*x299)&x300));

	if (t53 != 15473704687LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x301 = INT16_MIN;
	int32_t x303 = INT32_MIN;
	static int32_t t54 = 231146;

	t54 = (x301|((x302*x303)&x304));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x305 = 2U;
	volatile uint32_t x306 = 0U;
	int64_t x307 = 462108095LL;
	static int64_t x308 = INT64_MAX;
	static volatile int64_t t55 = -619816215695292409LL;

	t55 = (x305|((x306*x307)&x308));

	if (t55 != 2LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x309 = 1;
	static uint8_t x310 = 27U;
	uint16_t x311 = 8640U;
	uint16_t x312 = 15939U;
	int32_t t56 = 12;

	t56 = (x309|((x310*x311)&x312));

	if (t56 != 3649) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x313 = INT32_MAX;
	volatile int64_t x314 = -1LL;
	uint64_t x315 = 59001LLU;
	static uint32_t x316 = 66665352U;

	t57 = (x313|((x314*x315)&x316));

	if (t57 != 2147483647LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x317 = INT16_MAX;
	static uint16_t x318 = UINT16_MAX;
	int64_t x319 = -1LL;
	uint32_t x320 = 995796104U;
	volatile int64_t t58 = -12323539284597731LL;

	t58 = (x317|((x318*x319)&x320));

	if (t58 != 995786751LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x329 = 5900431373LL;
	int32_t x330 = -1;
	int64_t x331 = 306780294225400344LL;
	int64_t x332 = INT64_MIN;
	int64_t t59 = -532153LL;

	t59 = (x329|((x330*x331)&x332));

	if (t59 != -9223372030954344435LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x361 = INT16_MIN;
	int32_t x362 = -1;
	int8_t x364 = 1;
	volatile uint32_t t60 = 547897U;

	t60 = (x361|((x362*x363)&x364));

	if (t60 != 4294934529U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x373 = 84514977LL;
	int32_t x374 = INT32_MAX;
	int32_t x375 = -1;
	uint64_t x376 = UINT64_MAX;
	uint64_t t61 = 3207658625881615LLU;

	t61 = (x373|((x374*x375)&x376));

	if (t61 != 18446744071646582945LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x385 = INT64_MIN;
	uint64_t x386 = 925954646263232705LLU;
	volatile int64_t x388 = 15818LL;
	uint64_t t62 = 428411LLU;

	t62 = (x385|((x386*x387)&x388));

	if (t62 != 9223372036854787082LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x389 = -254183LL;
	static uint64_t x390 = UINT64_MAX;
	int64_t x392 = 1LL;
	volatile uint64_t t63 = 6906730741LLU;

	t63 = (x389|((x390*x391)&x392));

	if (t63 != 18446744073709297433LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x393 = -1;
	int64_t x394 = 992297171472428LL;
	uint64_t x395 = 165014707705979448LLU;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x393|((x394*x395)&x396));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x397 = UINT8_MAX;
	int16_t x398 = INT16_MIN;
	volatile int32_t x399 = -247;
	volatile uint64_t x400 = UINT64_MAX;
	volatile uint64_t t65 = 27737681128655LLU;

	t65 = (x397|((x398*x399)&x400));

	if (t65 != 8093951LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x405 = 805U;
	uint16_t x406 = UINT16_MAX;
	volatile uint8_t x407 = UINT8_MAX;
	uint8_t x408 = 5U;
	uint32_t t66 = 5028232U;

	t66 = (x405|((x406*x407)&x408));

	if (t66 != 805U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x413 = 3U;
	int8_t x414 = -1;
	int32_t x416 = -1;

	t67 = (x413|((x414*x415)&x416));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x421 = UINT64_MAX;
	static int16_t x422 = -1;
	int32_t x423 = INT32_MAX;
	uint64_t t68 = UINT64_MAX;

	t68 = (x421|((x422*x423)&x424));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x433 = 8903;
	int8_t x434 = INT8_MIN;
	uint64_t x435 = 841031415443LLU;
	uint16_t x436 = 3404U;
	static uint64_t t69 = 6105916595270755LLU;

	t69 = (x433|((x434*x435)&x436));

	if (t69 != 9927LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x438 = -3626090;
	volatile int16_t x439 = -1;
	uint8_t x440 = 0U;
	int32_t t70 = 12;

	t70 = (x437|((x438*x439)&x440));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x442 = 102U;
	int16_t x443 = -1;
	static uint64_t x444 = 4848216832LLU;
	static volatile uint64_t t71 = 8973956128745963LLU;

	t71 = (x441|((x442*x443)&x444));

	if (t71 != 6442450943LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x445 = -1LL;
	int32_t x446 = INT32_MIN;
	uint64_t x447 = 103016256008LLU;
	uint64_t t72 = UINT64_MAX;

	t72 = (x445|((x446*x447)&x448));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x449 = INT32_MIN;
	int16_t x450 = INT16_MIN;
	int8_t x451 = INT8_MIN;

	t73 = (x449|((x450*x451)&x452));

	if (t73 != 2151677952U) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x457 = -55LL;
	static int8_t x459 = -6;
	int64_t x460 = INT64_MAX;

	t74 = (x457|((x458*x459)&x460));

	if (t74 != -35LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x461 = UINT8_MAX;
	static int16_t x462 = INT16_MIN;
	volatile uint64_t x463 = UINT64_MAX;
	volatile uint64_t t75 = 5874108164LLU;

	t75 = (x461|((x462*x463)&x464));

	if (t75 != 33023LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x469 = UINT32_MAX;
	int8_t x470 = INT8_MIN;
	int8_t x471 = INT8_MIN;
	uint32_t x472 = 3305846U;

	t76 = (x469|((x470*x471)&x472));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x473 = 850U;
	static volatile uint16_t x474 = 310U;
	static uint16_t x475 = 178U;
	uint64_t x476 = 5475887148833629333LLU;

	t77 = (x473|((x474*x475)&x476));

	if (t77 != 51158LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x477 = -143;
	uint32_t x478 = 40832796U;
	int8_t x480 = -3;
	uint32_t t78 = 861022064U;

	t78 = (x477|((x478*x479)&x480));

	if (t78 != 4294967285U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x485 = INT64_MAX;
	static volatile uint32_t x486 = 7974243U;
	volatile int32_t x488 = -1;
	int64_t t79 = INT64_MAX;

	t79 = (x485|((x486*x487)&x488));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x490 = 14628;
	uint8_t x491 = 16U;
	static volatile int32_t t80 = -809990;

	t80 = (x489|((x490*x491)&x492));

	if (t80 != 234050) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x493 = UINT16_MAX;
	volatile int8_t x494 = INT8_MIN;
	uint8_t x495 = UINT8_MAX;
	volatile uint16_t x496 = 4U;

	t81 = (x493|((x494*x495)&x496));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x497 = 0LL;
	int64_t x498 = 1845145668LL;
	static int32_t x500 = -1;

	t82 = (x497|((x498*x499)&x500));

	if (t82 != -1845145668LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x505 = -4;
	volatile int16_t x506 = INT16_MIN;
	uint64_t t83 = 16283738200016625LLU;

	t83 = (x505|((x506*x507)&x508));

	if (t83 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x509 = INT32_MAX;
	uint32_t x510 = UINT32_MAX;
	int16_t x512 = 6;
	volatile uint32_t t84 = 0U;

	t84 = (x509|((x510*x511)&x512));

	if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x517 = -1;
	static int8_t x518 = -1;
	volatile int16_t x519 = 50;
	int8_t x520 = INT8_MIN;
	static int32_t t85 = 66;

	t85 = (x517|((x518*x519)&x520));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x522 = INT64_MAX;
	static int16_t x523 = -1;
	int64_t t86 = 117511242LL;

	t86 = (x521|((x522*x523)&x524));

	if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x525 = -1;
	static int16_t x526 = -1;
	int8_t x528 = INT8_MIN;
	volatile int32_t t87 = -962256258;

	t87 = (x525|((x526*x527)&x528));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x537 = 1;
	uint64_t x538 = UINT64_MAX;
	static uint32_t x540 = 6145U;
	uint64_t t88 = 83917260962335LLU;

	t88 = (x537|((x538*x539)&x540));

	if (t88 != 6145LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x542 = -1;
	volatile uint8_t x543 = 111U;
	volatile int64_t x544 = -1LL;
	int64_t t89 = 851LL;

	t89 = (x541|((x542*x543)&x544));

	if (t89 != -109LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x545 = 69U;
	uint32_t x546 = 66774345U;
	volatile uint8_t x548 = UINT8_MAX;
	volatile uint32_t t90 = 1U;

	t90 = (x545|((x546*x547)&x548));

	if (t90 != 69U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x549 = -1;
	uint32_t x550 = UINT32_MAX;
	static volatile int8_t x551 = -1;
	int8_t x552 = INT8_MAX;
	static volatile uint32_t t91 = UINT32_MAX;

	t91 = (x549|((x550*x551)&x552));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x553 = 2029614U;
	uint64_t x554 = UINT64_MAX;
	volatile int16_t x556 = INT16_MIN;

	t92 = (x553|((x554*x555)&x556));

	if (t92 != 2029614LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x559 = -9;
	int32_t x560 = 0;
	volatile int32_t t93 = 47;

	t93 = (x557|((x558*x559)&x560));

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x561 = 24140593LLU;
	static volatile uint64_t x562 = 83400063246020LLU;
	int8_t x563 = INT8_MIN;
	uint16_t x564 = 1U;
	uint64_t t94 = 798862718370123LLU;

	t94 = (x561|((x562*x563)&x564));

	if (t94 != 24140593LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x565 = UINT8_MAX;
	volatile int16_t x568 = 2;
	uint64_t t95 = 2055359441072539778LLU;

	t95 = (x565|((x566*x567)&x568));

	if (t95 != 255LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x569 = INT64_MAX;
	int32_t x570 = -1;
	static int16_t x571 = INT16_MIN;
	int64_t t96 = INT64_MAX;

	t96 = (x569|((x570*x571)&x572));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x576 = INT32_MIN;
	uint64_t t97 = 446773121413LLU;

	t97 = (x573|((x574*x575)&x576));

	if (t97 != 17226927979417903936LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x577 = INT8_MIN;
	int8_t x578 = INT8_MIN;
	int16_t x580 = INT16_MIN;

	t98 = (x577|((x578*x579)&x580));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x582 = INT16_MIN;
	int8_t x583 = INT8_MAX;
	static int32_t t99 = -8699;

	t99 = (x581|((x582*x583)&x584));

	if (t99 != -1) { NG(); } else { ; }
	
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


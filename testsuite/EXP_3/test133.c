#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = 387U;
int32_t x14 = -14;
uint8_t x17 = 21U;
uint16_t x21 = 8U;
int32_t x27 = -1;
uint16_t x30 = 1899U;
int32_t t6 = 15382;
int64_t x33 = 106573386928518396LL;
static volatile uint64_t x34 = 321863879654838879LLU;
int64_t x38 = -1LL;
int16_t x51 = INT16_MIN;
int8_t x60 = INT8_MAX;
int64_t t12 = -1275850136787400LL;
uint8_t x61 = UINT8_MAX;
static uint64_t x68 = UINT64_MAX;
int32_t x71 = -1734257;
int32_t t18 = -1;
volatile int32_t x89 = -161498;
int64_t x93 = -11037408589150468LL;
volatile int64_t x104 = -1LL;
volatile int64_t t21 = -333113220954526667LL;
uint64_t t23 = 4846881414955539418LLU;
volatile int64_t x129 = -46876358827LL;
static int32_t x137 = INT32_MAX;
uint64_t x143 = 10233871LLU;
volatile int64_t x159 = -971957712583LL;
int8_t x161 = 6;
volatile int32_t x166 = -222031;
int64_t x169 = 2751706LL;
int64_t x171 = -3650677855368947089LL;
int16_t x186 = 4;
volatile uint16_t x191 = 1199U;
volatile int8_t x193 = INT8_MIN;
static volatile uint32_t t37 = 23158268U;
static int64_t x218 = INT64_MIN;
uint8_t x225 = 1U;
int8_t x240 = -53;
static volatile uint32_t t44 = 580U;
int16_t x243 = -1;
static int16_t x244 = INT16_MIN;
uint16_t x245 = 965U;
volatile int64_t t46 = 6145LL;
int8_t x260 = 0;
static int32_t t49 = 62;
volatile int8_t x261 = INT8_MIN;
int16_t x271 = -71;
int64_t x281 = INT64_MIN;
int64_t x290 = INT64_MIN;
uint64_t x291 = 449LLU;
static int32_t x292 = -1;
int16_t x295 = 0;
volatile int16_t x299 = -1;
static int64_t x305 = -1LL;
int32_t x309 = -53718;
volatile int32_t x312 = 116886964;
int16_t x316 = INT16_MIN;
int64_t x320 = -1LL;
volatile int64_t x326 = -3889455368405534LL;
int64_t t61 = 123178LL;
int8_t x343 = INT8_MIN;
int32_t x350 = -3490;
volatile uint8_t x354 = 116U;
static volatile uint64_t t67 = 15635134080277LLU;
volatile uint32_t t68 = 107U;
uint64_t x366 = 110323LLU;
int64_t t71 = 6179687502251LL;
volatile int32_t x381 = INT32_MAX;
static volatile int16_t x388 = INT16_MAX;
int16_t x389 = -2;
static int8_t x402 = -47;
uint32_t x404 = UINT32_MAX;
volatile uint32_t t75 = 44178744U;
uint8_t x413 = 52U;
volatile uint32_t x415 = 115039645U;
volatile uint32_t t77 = 271U;
uint64_t x429 = 2303899236207280299LLU;
int8_t x437 = -21;
uint32_t x439 = UINT32_MAX;
volatile int16_t x441 = INT16_MIN;
volatile uint64_t t85 = 118526492323106LLU;
volatile int64_t t89 = 382LL;
static volatile uint64_t t90 = 2189521659LLU;
uint64_t x479 = 14339135132746LLU;
volatile uint16_t x483 = 326U;
int32_t x499 = -1;
int64_t x502 = INT64_MIN;
int64_t t95 = -3LL;
uint32_t x508 = UINT32_MAX;
volatile uint64_t x516 = 187278495613942LLU;
uint32_t x519 = UINT32_MAX;


void f0(void) {
	volatile uint64_t x2 = 38217437258136LLU;
	uint16_t x3 = UINT16_MAX;
	int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 26372905776199LLU;

	t0 = ((x1&x2)*(x3+x4));

	if (t0 != 25116288LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = -1;
	static uint64_t x10 = UINT64_MAX;
	uint32_t x11 = 30874U;
	int64_t x12 = INT64_MIN;
	uint64_t t1 = 10LLU;

	t1 = ((x9&x10)*(x11+x12));

	if (t1 != 9223372036854744934LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int16_t x15 = INT16_MIN;
	volatile int8_t x16 = -1;
	volatile int32_t t2 = -579;

	t2 = ((x13&x14)*(x15+x16));

	if (t2 != 458766) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = 41U;
	int8_t x19 = -1;
	static int16_t x20 = -1852;
	int32_t t3 = 0;

	t3 = ((x17&x18)*(x19+x20));

	if (t3 != -1853) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = -97;
	int8_t x23 = 1;
	static volatile int64_t x24 = -1234054759LL;
	int64_t t4 = -44440LL;

	t4 = ((x21&x22)*(x23+x24));

	if (t4 != -9872438064LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = -593988291;
	volatile int64_t x26 = -1LL;
	volatile int8_t x28 = 6;
	int64_t t5 = 605939787LL;

	t5 = ((x25&x26)*(x27+x28));

	if (t5 != -2969941455LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	int8_t x31 = INT8_MAX;
	int16_t x32 = 1;

	t6 = ((x29&x30)*(x31+x32));

	if (t6 != 229376) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x35 = -1;
	uint8_t x36 = 4U;
	uint64_t t7 = 152LLU;

	t7 = ((x33&x34)*(x35+x36));

	if (t7 != 96361520321409300LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	uint32_t x39 = 32121925U;
	uint8_t x40 = 125U;
	int64_t t8 = -1579702767977LL;

	t8 = ((x37&x38)*(x39+x40));

	if (t8 != -1052575334400LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1018;
	volatile int32_t x42 = INT32_MAX;
	uint64_t x43 = 408027575LLU;
	int32_t x44 = INT32_MIN;
	volatile uint64_t t9 = 23720265836037640LLU;

	t9 = ((x41&x42)*(x43+x44));

	if (t9 != 14711292371294039626LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 733670462U;
	static int16_t x46 = -127;
	static volatile uint32_t x47 = 3U;
	int8_t x48 = 46;
	uint32_t t10 = 77630U;

	t10 = ((x45&x46)*(x47+x48));

	if (t10 != 1590111232U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x49 = UINT8_MAX;
	int32_t x50 = INT32_MIN;
	uint8_t x52 = 115U;
	volatile int32_t t11 = -8464160;

	t11 = ((x49&x50)*(x51+x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -55805828LL;
	static int64_t x58 = -13LL;
	int32_t x59 = INT32_MIN;

	t12 = ((x57&x58)*(x59+x60));

	if (t12 != 119842121775562640LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = -1;
	int16_t x63 = -6794;
	int8_t x64 = INT8_MIN;
	int32_t t13 = -5;

	t13 = ((x61&x62)*(x63+x64));

	if (t13 != -1765110) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = UINT16_MAX;
	static int64_t x66 = INT64_MAX;
	static volatile int8_t x67 = -1;
	volatile uint64_t t14 = 88474770LLU;

	t14 = ((x65&x66)*(x67+x68));

	if (t14 != 18446744073709420546LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MIN;
	uint64_t x70 = 17755714702LLU;
	int8_t x72 = -1;
	uint64_t t15 = 220LLU;

	t15 = ((x69&x70)*(x71+x72));

	if (t15 != 18415951106774597632LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	static volatile uint64_t x74 = UINT64_MAX;
	uint8_t x75 = UINT8_MAX;
	int16_t x76 = INT16_MAX;
	uint64_t t16 = 1255245875574233593LLU;

	t16 = ((x73&x74)*(x75+x76));

	if (t16 != 18446744072627486720LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 49865287U;
	uint64_t x78 = 28911342LLU;
	uint16_t x79 = UINT16_MAX;
	int8_t x80 = INT8_MAX;
	uint64_t t17 = 10915288888789167LLU;

	t17 = ((x77&x78)*(x79+x80));

	if (t17 != 792369487476LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	static int8_t x82 = 5;
	int16_t x83 = -1697;
	int16_t x84 = -1;

	t18 = ((x81&x82)*(x83+x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x90 = INT16_MIN;
	static int8_t x91 = 1;
	uint8_t x92 = 0U;
	volatile int32_t t19 = 747200;

	t19 = ((x89&x90)*(x91+x92));

	if (t19 != -163840) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x94 = -1;
	static uint8_t x95 = 7U;
	int16_t x96 = -1;
	static volatile int64_t t20 = -1LL;

	t20 = ((x93&x94)*(x95+x96));

	if (t20 != -66224451534902808LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MIN;
	static volatile uint16_t x102 = UINT16_MAX;
	static uint32_t x103 = 112466351U;

	t21 = ((x101&x102)*(x103+x104));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = INT64_MAX;
	uint64_t x110 = UINT64_MAX;
	int16_t x111 = INT16_MAX;
	int64_t x112 = 231768638LL;
	volatile uint64_t t22 = 1424410800290703736LLU;

	t22 = ((x109&x110)*(x111+x112));

	if (t22 != 9223372036622974403LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x117 = UINT64_MAX;
	int64_t x118 = -22094862LL;
	uint16_t x119 = UINT16_MAX;
	static int8_t x120 = INT8_MIN;

	t23 = ((x117&x118)*(x119+x120));

	if (t23 != 18446742628550912782LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x130 = INT64_MIN;
	volatile uint64_t x131 = 261011513LLU;
	int16_t x132 = INT16_MAX;
	volatile uint64_t t24 = 4148LLU;

	t24 = ((x129&x130)*(x131+x132));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x133 = INT32_MIN;
	int16_t x134 = -1;
	uint32_t x135 = 15615U;
	uint64_t x136 = 41LLU;
	uint64_t t25 = 154230551402LLU;

	t25 = ((x133&x134)*(x135+x136));

	if (t25 != 18446710452705558528LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x138 = UINT64_MAX;
	static int16_t x139 = -1;
	volatile uint64_t x140 = 12LLU;
	static uint64_t t26 = 32363250125911LLU;

	t26 = ((x137&x138)*(x139+x140));

	if (t26 != 23622320117LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x141 = UINT16_MAX;
	static int16_t x142 = INT16_MIN;
	int16_t x144 = -1;
	static uint64_t t27 = 52LLU;

	t27 = ((x141&x142)*(x143+x144));

	if (t27 != 335343452160LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x149 = 12U;
	int64_t x150 = INT64_MIN;
	int16_t x151 = -1;
	uint8_t x152 = UINT8_MAX;
	volatile int64_t t28 = -11140845855367LL;

	t28 = ((x149&x150)*(x151+x152));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x157 = 11;
	uint64_t x158 = 429288555161LLU;
	volatile uint8_t x160 = UINT8_MAX;
	volatile uint64_t t29 = 5946LLU;

	t29 = ((x157&x158)*(x159+x160));

	if (t29 != 18446735326090140664LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x162 = INT16_MIN;
	int32_t x163 = INT32_MIN;
	uint8_t x164 = 23U;
	int32_t t30 = 0;

	t30 = ((x161&x162)*(x163+x164));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x165 = UINT64_MAX;
	static int64_t x167 = -205LL;
	static uint64_t x168 = 44679621707LLU;
	static uint64_t t31 = 99LLU;

	t31 = ((x165&x166)*(x167+x168));

	if (t31 != 18436823812667841054LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x170 = INT64_MIN;
	uint64_t x172 = 16751LLU;
	volatile uint64_t t32 = 6998165LLU;

	t32 = ((x169&x170)*(x171+x172));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x177 = INT32_MAX;
	static volatile uint8_t x178 = 10U;
	int32_t x179 = -27774756;
	volatile int8_t x180 = -1;
	volatile int32_t t33 = 631013;

	t33 = ((x177&x178)*(x179+x180));

	if (t33 != -277747570) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MAX;
	uint16_t x183 = 19U;
	static int32_t x184 = 81;
	int32_t t34 = 419300257;

	t34 = ((x181&x182)*(x183+x184));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x185 = -124455;
	volatile int64_t x187 = -1LL;
	static int64_t x188 = -1LL;
	int64_t t35 = -20615366238214LL;

	t35 = ((x185&x186)*(x187+x188));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x189 = 1U;
	int64_t x190 = -1LL;
	volatile uint64_t x192 = 27236538LLU;
	volatile uint64_t t36 = 37LLU;

	t36 = ((x189&x190)*(x191+x192));

	if (t36 != 27237737LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x194 = UINT8_MAX;
	volatile uint32_t x195 = UINT32_MAX;
	int8_t x196 = -1;

	t37 = ((x193&x194)*(x195+x196));

	if (t37 != 4294967040U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x197 = 120977U;
	static int16_t x198 = INT16_MIN;
	volatile int16_t x199 = -903;
	int8_t x200 = INT8_MAX;
	static uint32_t t38 = 1958U;

	t38 = ((x197&x198)*(x199+x200));

	if (t38 != 4218683392U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x213 = -1;
	uint32_t x214 = UINT32_MAX;
	uint32_t x215 = 463083498U;
	uint32_t x216 = 4U;
	static uint32_t t39 = 11U;

	t39 = ((x213&x214)*(x215+x216));

	if (t39 != 3831883794U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x217 = 7602075;
	volatile int8_t x219 = 23;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t40 = 79839641LLU;

	t40 = ((x217&x218)*(x219+x220));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x221 = UINT32_MAX;
	int32_t x222 = -15810;
	static uint32_t x223 = UINT32_MAX;
	int8_t x224 = INT8_MAX;
	volatile uint32_t t41 = 30150U;

	t41 = ((x221&x222)*(x223+x224));

	if (t41 != 4292975236U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x226 = INT32_MIN;
	int32_t x227 = INT32_MAX;
	volatile int64_t x228 = INT64_MIN;
	volatile int64_t t42 = 52516493315613692LL;

	t42 = ((x225&x226)*(x227+x228));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x229 = -10;
	int8_t x230 = 0;
	uint64_t x231 = 200537024LLU;
	int32_t x232 = INT32_MIN;
	uint64_t t43 = 633515376053687LLU;

	t43 = ((x229&x230)*(x231+x232));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x237 = 236U;
	volatile int8_t x238 = -1;
	volatile int8_t x239 = INT8_MIN;

	t44 = ((x237&x238)*(x239+x240));

	if (t44 != 4294924580U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x241 = 1265219089074LLU;
	static volatile int64_t x242 = -209170475706764LL;
	volatile uint64_t t45 = 0LLU;

	t45 = ((x241&x242)*(x243+x244));

	if (t45 != 18410351307788316112LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x246 = 0U;
	int32_t x247 = -1;
	int64_t x248 = INT64_MAX;

	t46 = ((x245&x246)*(x247+x248));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x249 = 7U;
	uint16_t x250 = 4U;
	static int8_t x251 = INT8_MIN;
	static uint16_t x252 = UINT16_MAX;
	volatile uint32_t t47 = 753003U;

	t47 = ((x249&x250)*(x251+x252));

	if (t47 != 261628U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x253 = INT8_MIN;
	uint32_t x254 = 17254U;
	volatile uint64_t x255 = 40LLU;
	volatile int32_t x256 = -1;
	volatile uint64_t t48 = 137401930281LLU;

	t48 = ((x253&x254)*(x255+x256));

	if (t48 != 668928LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x257 = INT16_MAX;
	int8_t x258 = INT8_MIN;
	int16_t x259 = 3;

	t49 = ((x257&x258)*(x259+x260));

	if (t49 != 97920) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x262 = UINT64_MAX;
	int8_t x263 = 4;
	int8_t x264 = INT8_MAX;
	volatile uint64_t t50 = 5678887LLU;

	t50 = ((x261&x262)*(x263+x264));

	if (t50 != 18446744073709534848LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x269 = -1;
	static int32_t x270 = -9331;
	static int8_t x272 = INT8_MIN;
	volatile int32_t t51 = 2;

	t51 = ((x269&x270)*(x271+x272));

	if (t51 != 1856869) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x282 = UINT8_MAX;
	int32_t x283 = INT32_MAX;
	int8_t x284 = INT8_MIN;
	int64_t t52 = 509182LL;

	t52 = ((x281&x282)*(x283+x284));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x289 = 319;
	static uint64_t t53 = 958121069956171LLU;

	t53 = ((x289&x290)*(x291+x292));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x293 = INT64_MIN;
	uint32_t x294 = UINT32_MAX;
	static int32_t x296 = 927744512;
	int64_t t54 = -247415198LL;

	t54 = ((x293&x294)*(x295+x296));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x297 = 6;
	volatile uint32_t x298 = 8331U;
	static int8_t x300 = -1;
	static volatile uint32_t t55 = 1463U;

	t55 = ((x297&x298)*(x299+x300));

	if (t55 != 4294967292U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x301 = -543047973887LL;
	int16_t x302 = INT16_MAX;
	int64_t x303 = -104262373386LL;
	static uint8_t x304 = 7U;
	static int64_t t56 = 4353749889474500830LL;

	t56 = ((x301&x302)*(x303+x304));

	if (t56 != -106868932713475LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x306 = 5367;
	static int16_t x307 = INT16_MAX;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t57 = 57172664LLU;

	t57 = ((x305&x306)*(x307+x308));

	if (t57 != 175855122LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x310 = 3U;
	uint32_t x311 = UINT32_MAX;
	uint32_t t58 = 856617371U;

	t58 = ((x309&x310)*(x311+x312));

	if (t58 != 233773926U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x313 = 43664514LLU;
	static int16_t x314 = INT16_MAX;
	int16_t x315 = INT16_MAX;
	uint64_t t59 = 132949443948483LLU;

	t59 = ((x313&x314)*(x315+x316));

	if (t59 != 18446744073709534078LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x317 = UINT64_MAX;
	volatile uint16_t x318 = 1U;
	uint8_t x319 = 1U;
	uint64_t t60 = 66094884761200190LLU;

	t60 = ((x317&x318)*(x319+x320));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x325 = 5U;
	int32_t x327 = 398590839;
	uint16_t x328 = 1U;

	t61 = ((x325&x326)*(x327+x328));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x329 = 39LLU;
	volatile int8_t x330 = 0;
	volatile uint64_t x331 = 581493148LLU;
	uint8_t x332 = 0U;
	uint64_t t62 = 3942282LLU;

	t62 = ((x329&x330)*(x331+x332));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x341 = -1;
	volatile int16_t x342 = INT16_MAX;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t63 = -243;

	t63 = ((x341&x342)*(x343+x344));

	if (t63 != -8388352) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x345 = INT8_MIN;
	volatile uint8_t x346 = 22U;
	int16_t x347 = INT16_MAX;
	volatile int64_t x348 = INT64_MIN;
	int64_t t64 = -285LL;

	t64 = ((x345&x346)*(x347+x348));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x349 = 515864619LL;
	static uint32_t x351 = 30U;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t65 = 3LLU;

	t65 = ((x349&x350)*(x351+x352));

	if (t65 != 14960013602LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x353 = 410099205;
	volatile int64_t x355 = -59674880LL;
	int16_t x356 = -1;
	int64_t t66 = -44LL;

	t66 = ((x353&x354)*(x355+x356));

	if (t66 != -238699524LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x357 = UINT32_MAX;
	int16_t x358 = -1;
	volatile uint64_t x359 = UINT64_MAX;
	volatile uint32_t x360 = 2205U;

	t67 = ((x357&x358)*(x359+x360));

	if (t67 != 9466107918180LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x361 = 941018U;
	static volatile uint8_t x362 = 0U;
	uint16_t x363 = 93U;
	static volatile int32_t x364 = -1;

	t68 = ((x361&x362)*(x363+x364));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x365 = -908;
	int64_t x367 = INT64_MIN;
	static int64_t x368 = INT64_MAX;
	static uint64_t t69 = 223663846321LLU;

	t69 = ((x365&x366)*(x367+x368));

	if (t69 != 18446744073709441936LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x369 = 8142682;
	int8_t x370 = INT8_MIN;
	static int64_t x371 = 1LL;
	volatile int32_t x372 = INT32_MIN;
	static volatile int64_t t70 = -5112LL;

	t70 = ((x369&x370)*(x371+x372));

	if (t70 != -17486083164193024LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x377 = -1LL;
	uint8_t x378 = UINT8_MAX;
	static uint32_t x379 = UINT32_MAX;
	uint32_t x380 = UINT32_MAX;

	t71 = ((x377&x378)*(x379+x380));

	if (t71 != 1095216659970LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	volatile int64_t x384 = -5789688LL;
	volatile int64_t t72 = 1LL;

	t72 = ((x381&x382)*(x383+x384));

	if (t72 != -12503628305925120LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x385 = -1;
	int16_t x386 = INT16_MAX;
	int8_t x387 = INT8_MIN;
	int32_t t73 = 1;

	t73 = ((x385&x386)*(x387+x388));

	if (t73 != 1069482113) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x390 = UINT32_MAX;
	int16_t x391 = 1238;
	int32_t x392 = INT32_MIN;
	uint32_t t74 = 807682705U;

	t74 = ((x389&x390)*(x391+x392));

	if (t74 != 4294964820U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x401 = -1;
	int16_t x403 = INT16_MIN;

	t75 = ((x401&x402)*(x403+x404));

	if (t75 != 1540143U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x405 = INT8_MIN;
	uint16_t x406 = 69U;
	int32_t x407 = -1;
	uint16_t x408 = 7U;
	volatile int32_t t76 = -50098;

	t76 = ((x405&x406)*(x407+x408));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x414 = -1;
	int8_t x416 = INT8_MIN;

	t77 = ((x413&x414)*(x415+x416));

	if (t77 != 1687087588U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x417 = UINT32_MAX;
	int8_t x418 = INT8_MIN;
	int32_t x419 = -723500;
	static volatile int16_t x420 = INT16_MAX;
	static volatile uint32_t t78 = 288908U;

	t78 = ((x417&x418)*(x419+x420));

	if (t78 != 88413824U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x421 = 7769U;
	uint16_t x422 = UINT16_MAX;
	uint32_t x423 = 5822685U;
	volatile uint16_t x424 = 12U;
	uint32_t t79 = 62843944U;

	t79 = ((x421&x422)*(x423+x424));

	if (t79 != 2286860033U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x425 = UINT16_MAX;
	int32_t x426 = INT32_MIN;
	int16_t x427 = INT16_MAX;
	int64_t x428 = -1LL;
	int64_t t80 = 8156374LL;

	t80 = ((x425&x426)*(x427+x428));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x430 = 3;
	int16_t x431 = 0;
	int8_t x432 = INT8_MIN;
	uint64_t t81 = 5420LLU;

	t81 = ((x429&x430)*(x431+x432));

	if (t81 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x433 = INT16_MAX;
	int64_t x434 = INT64_MIN;
	static uint32_t x435 = 452313U;
	int64_t x436 = -1LL;
	volatile int64_t t82 = -193759326LL;

	t82 = ((x433&x434)*(x435+x436));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x438 = -1;
	volatile int16_t x440 = INT16_MIN;
	static uint32_t t83 = 1459473U;

	t83 = ((x437&x438)*(x439+x440));

	if (t83 != 688149U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x442 = INT64_MIN;
	static int8_t x443 = -1;
	int16_t x444 = 1;
	volatile int64_t t84 = -632413924352755LL;

	t84 = ((x441&x442)*(x443+x444));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x445 = INT16_MIN;
	volatile uint8_t x446 = 84U;
	static uint64_t x447 = 11494035060611524LLU;
	int64_t x448 = -100941LL;

	t85 = ((x445&x446)*(x447+x448));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x453 = 0U;
	int64_t x454 = -1LL;
	uint8_t x455 = 6U;
	int16_t x456 = -1;
	static int64_t t86 = -382403789964276420LL;

	t86 = ((x453&x454)*(x455+x456));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x457 = INT8_MIN;
	static uint16_t x458 = 5973U;
	uint16_t x459 = UINT16_MAX;
	uint16_t x460 = 3660U;
	int32_t t87 = 393195165;

	t87 = ((x457&x458)*(x459+x460));

	if (t87 != 407420160) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x461 = INT64_MAX;
	int64_t x462 = -1LL;
	static int8_t x463 = -1;
	uint64_t x464 = 10196163104255640LLU;
	uint64_t t88 = 874468471388616432LLU;

	t88 = ((x461&x462)*(x463+x464));

	if (t88 != 9213175873750520169LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x465 = INT16_MIN;
	volatile int8_t x466 = INT8_MIN;
	static int64_t x467 = -1LL;
	static int16_t x468 = INT16_MAX;

	t89 = ((x465&x466)*(x467+x468));

	if (t89 != -1073676288LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x469 = 1295359660442LLU;
	int64_t x470 = -1584654523451668LL;
	int64_t x471 = INT64_MIN;
	static uint64_t x472 = UINT64_MAX;

	t90 = ((x469&x470)*(x471+x472));

	if (t90 != 18446744066864344952LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x473 = INT64_MIN;
	int16_t x474 = INT16_MAX;
	static uint64_t x475 = 791903LLU;
	int16_t x476 = -722;
	static uint64_t t91 = 20132422822993LLU;

	t91 = ((x473&x474)*(x475+x476));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x477 = UINT16_MAX;
	int64_t x478 = INT64_MIN;
	static int16_t x480 = INT16_MAX;
	static uint64_t t92 = 365207213116541745LLU;

	t92 = ((x477&x478)*(x479+x480));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x481 = INT8_MIN;
	int32_t x482 = -1;
	int8_t x484 = INT8_MAX;
	volatile int32_t t93 = -6281;

	t93 = ((x481&x482)*(x483+x484));

	if (t93 != -57984) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x497 = 3U;
	static volatile int8_t x498 = 0;
	int16_t x500 = -37;
	volatile int32_t t94 = -1050692;

	t94 = ((x497&x498)*(x499+x500));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x501 = INT8_MAX;
	int64_t x503 = -3LL;
	int16_t x504 = 8097;

	t95 = ((x501&x502)*(x503+x504));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x505 = -1;
	uint16_t x506 = 8U;
	uint64_t x507 = UINT64_MAX;
	uint64_t t96 = 821LLU;

	t96 = ((x505&x506)*(x507+x508));

	if (t96 != 34359738352LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x513 = 15U;
	int16_t x514 = INT16_MAX;
	static int8_t x515 = INT8_MIN;
	static uint64_t t97 = 7415599LLU;

	t97 = ((x513&x514)*(x515+x516));

	if (t97 != 2809177434207210LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x517 = INT8_MAX;
	static int8_t x518 = 15;
	int32_t x520 = INT32_MIN;
	volatile uint32_t t98 = 4824075U;

	t98 = ((x517&x518)*(x519+x520));

	if (t98 != 2147483633U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x521 = INT32_MIN;
	int16_t x522 = INT16_MAX;
	static volatile int8_t x523 = -1;
	volatile int32_t x524 = -1;
	static volatile int32_t t99 = -11;

	t99 = ((x521&x522)*(x523+x524));

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


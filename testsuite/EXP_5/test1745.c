#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = 21785645U;
static int16_t x5 = INT16_MIN;
volatile int64_t x8 = INT64_MIN;
static int8_t x12 = -1;
volatile int32_t t2 = -72906;
int64_t x13 = -1757215LL;
static int64_t t3 = 10313LL;
static volatile uint32_t x17 = 4628430U;
int32_t x26 = INT32_MAX;
volatile int32_t t7 = -192;
int16_t x37 = INT16_MAX;
int64_t x39 = 55195LL;
uint64_t x40 = 5059346034343615LLU;
volatile uint64_t t8 = 180104575920800LLU;
static uint64_t x41 = UINT64_MAX;
volatile uint64_t x45 = UINT64_MAX;
int16_t x52 = INT16_MAX;
int64_t x60 = -87LL;
static int16_t x62 = INT16_MIN;
static int16_t x63 = 15398;
uint16_t x70 = 1U;
uint32_t x72 = 306102239U;
volatile int64_t t16 = 13680905274LL;
static int64_t x75 = -1LL;
int64_t t17 = 7157515117LL;
volatile int32_t t18 = -136;
int16_t x90 = INT16_MAX;
uint8_t x96 = 5U;
uint32_t x98 = UINT32_MAX;
volatile uint32_t x108 = 5442U;
int8_t x109 = -3;
static int16_t x112 = INT16_MAX;
int8_t x114 = 21;
int64_t x115 = 1686049123446340LL;
int8_t x119 = INT8_MIN;
int16_t x135 = INT16_MAX;
volatile int32_t x145 = -75973;
uint8_t x147 = UINT8_MAX;
uint32_t x150 = 2078819U;
int64_t x152 = INT64_MAX;
int64_t x158 = INT64_MAX;
volatile uint64_t x161 = 32317LLU;
volatile uint32_t x162 = 17187U;
volatile uint64_t t38 = 2247532445495519LLU;
int32_t x166 = INT32_MIN;
uint64_t x167 = UINT64_MAX;
int32_t x169 = INT32_MIN;
int16_t x172 = 1;
int32_t x173 = INT32_MIN;
volatile int8_t x179 = INT8_MAX;
static uint32_t x181 = 1275U;
int16_t x182 = 1;
uint32_t t43 = 352246U;
uint8_t x188 = UINT8_MAX;
uint32_t t44 = 187U;
int64_t x193 = INT64_MAX;
uint8_t x198 = UINT8_MAX;
volatile uint16_t x199 = UINT16_MAX;
uint64_t x201 = UINT64_MAX;
int64_t x203 = 1233318690LL;
static int64_t x207 = INT64_MAX;
volatile int32_t t51 = 14588;
int32_t t52 = 13;
volatile int8_t x225 = -1;
int16_t x227 = INT16_MAX;
uint8_t x231 = UINT8_MAX;
int16_t x235 = -1;
uint8_t x239 = 0U;
volatile int32_t t56 = -1;
int32_t x253 = -33;
uint8_t x271 = 2U;
int64_t t64 = -19354843LL;
uint32_t x276 = 10U;
int16_t x278 = INT16_MAX;
volatile int8_t x286 = 8;
int8_t x287 = INT8_MIN;
volatile int32_t t69 = -20960;
int16_t x302 = INT16_MIN;
uint64_t x303 = 3543LLU;
uint64_t x304 = 1364242LLU;
volatile int64_t x309 = -1LL;
uint32_t x311 = UINT32_MAX;
static uint8_t x318 = 1U;
uint16_t x323 = 162U;
int32_t x326 = INT32_MIN;
static int64_t x340 = -33285354718773360LL;
int64_t t81 = 336528849LL;
volatile uint32_t x345 = 300245014U;
int64_t x356 = INT64_MIN;
static uint32_t x357 = UINT32_MAX;
int8_t x359 = -1;
int32_t t87 = -95;
uint32_t x366 = 56594765U;
int32_t x369 = 13749;
int8_t x372 = 2;
int64_t x376 = INT64_MIN;
int32_t x388 = 15879;
int8_t x394 = -2;
volatile uint16_t x397 = 227U;
int32_t t96 = 8721006;
volatile int64_t x403 = -1LL;


void f0(void) {
	static volatile uint32_t x1 = 366U;
	volatile int16_t x2 = 218;
	uint64_t x3 = 191616401030217LLU;
	uint64_t t0 = 226379686LLU;

	t0 = (x1*((x2&x3)%x4));

	if (t0 != 26352LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = INT16_MIN;
	uint64_t x7 = 362LLU;
	volatile uint64_t t1 = 30990242LLU;

	t1 = (x5*((x6&x7)%x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	static int16_t x10 = -1;
	uint8_t x11 = 16U;

	t2 = (x9*((x10&x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x14 = UINT8_MAX;
	static uint8_t x15 = 6U;
	int8_t x16 = 33;

	t3 = (x13*((x14&x15)%x16));

	if (t3 != -10543290LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = INT8_MIN;
	int64_t x19 = 342652088LL;
	int8_t x20 = -1;
	static int64_t t4 = -1777589209105402683LL;

	t4 = (x17*((x18&x19)%x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	static uint64_t x22 = UINT64_MAX;
	uint64_t x23 = UINT64_MAX;
	int16_t x24 = -1;
	volatile uint64_t t5 = 3987770116987552LLU;

	t5 = (x21*((x22&x23)%x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x27 = -136144LL;
	int8_t x28 = -1;
	int64_t t6 = 15145214LL;

	t6 = (x25*((x26&x27)%x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -940;
	uint16_t x34 = 54U;
	int16_t x35 = INT16_MAX;
	static uint8_t x36 = 4U;

	t7 = (x33*((x34&x35)%x36));

	if (t7 != -1880) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x38 = -1;

	t8 = (x37*((x38&x39)%x40));

	if (t8 != 1808574565LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x42 = -1;
	int32_t x43 = 8832;
	uint32_t x44 = UINT32_MAX;
	uint64_t t9 = 262524750847596128LLU;

	t9 = (x41*((x42&x43)%x44));

	if (t9 != 18446744073709542784LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = -1;
	uint16_t x47 = UINT16_MAX;
	uint64_t x48 = 590635LLU;
	volatile uint64_t t10 = 0LLU;

	t10 = (x45*((x46&x47)%x48));

	if (t10 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	uint64_t x50 = 1297LLU;
	int16_t x51 = -3;
	uint64_t t11 = 1250712666LLU;

	t11 = (x49*((x50&x51)%x52));

	if (t11 != 18446744073709550319LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	static volatile int8_t x54 = INT8_MIN;
	volatile int8_t x55 = INT8_MIN;
	volatile int64_t x56 = -1LL;
	volatile uint64_t t12 = 1530LLU;

	t12 = (x53*((x54&x55)%x56));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = INT16_MIN;
	static int16_t x58 = INT16_MAX;
	volatile int8_t x59 = INT8_MIN;
	volatile int64_t t13 = -1LL;

	t13 = (x57*((x58&x59)%x60));

	if (t13 != -491520LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -57;
	static uint32_t x64 = 1775U;
	uint32_t t14 = 2528U;

	t14 = (x61*((x62&x63)%x64));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	int64_t x66 = -2727835LL;
	static volatile uint64_t x67 = UINT64_MAX;
	static uint64_t x68 = UINT64_MAX;
	static uint64_t t15 = 15431112448104794LLU;

	t15 = (x65*((x66&x67)%x68));

	if (t15 != 2727835LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x69 = -1LL;
	int16_t x71 = INT16_MIN;

	t16 = (x69*((x70&x71)%x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = 0;
	int8_t x74 = INT8_MIN;
	static uint8_t x76 = 116U;

	t17 = (x73*((x74&x75)%x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -1;
	volatile int32_t x78 = INT32_MAX;
	int16_t x79 = INT16_MAX;
	int16_t x80 = INT16_MIN;

	t18 = (x77*((x78&x79)%x80));

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	volatile uint64_t x86 = UINT64_MAX;
	static volatile uint16_t x87 = 5568U;
	static int64_t x88 = 7432LL;
	volatile uint64_t t19 = 47LLU;

	t19 = (x85*((x86&x87)%x88));

	if (t19 != 18446732116520599552LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = -1;
	volatile int8_t x91 = INT8_MAX;
	volatile int64_t x92 = 50069LL;
	static int64_t t20 = -19495318672341729LL;

	t20 = (x89*((x90&x91)%x92));

	if (t20 != -127LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = 3;
	volatile int16_t x94 = 8;
	volatile int64_t x95 = -31LL;
	static volatile int64_t t21 = 14401208046885LL;

	t21 = (x93*((x94&x95)%x96));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = UINT32_MAX;
	int64_t x99 = -1LL;
	int8_t x100 = INT8_MAX;
	volatile int64_t t22 = -8163303019750LL;

	t22 = (x97*((x98&x99)%x100));

	if (t22 != 64424509425LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x101 = UINT16_MAX;
	int32_t x102 = -1;
	volatile int64_t x103 = -19LL;
	volatile int16_t x104 = INT16_MIN;
	int64_t t23 = -1425762741449LL;

	t23 = (x101*((x102&x103)%x104));

	if (t23 != -1245165LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 51U;
	int8_t x106 = -1;
	int8_t x107 = INT8_MAX;
	uint32_t t24 = 3841U;

	t24 = (x105*((x106&x107)%x108));

	if (t24 != 6477U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x110 = 331822LL;
	volatile uint8_t x111 = 0U;
	static volatile int64_t t25 = 23265354745LL;

	t25 = (x109*((x110&x111)%x112));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MAX;
	uint16_t x116 = 497U;
	volatile int64_t t26 = -51818LL;

	t26 = (x113*((x114&x115)%x116));

	if (t26 != 131068LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MAX;
	int8_t x118 = -1;
	uint32_t x120 = 7732358U;
	volatile uint32_t t27 = 5286667U;

	t27 = (x117*((x118&x119)%x120));

	if (t27 != 4291458818U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = 185213U;
	uint8_t x122 = UINT8_MAX;
	volatile int64_t x123 = 135LL;
	uint32_t x124 = UINT32_MAX;
	int64_t t28 = 41016511853LL;

	t28 = (x121*((x122&x123)%x124));

	if (t28 != 25003755LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = 36;
	int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	static uint64_t x128 = 16127LLU;
	volatile uint64_t t29 = 12366604559051LLU;

	t29 = (x125*((x126&x127)%x128));

	if (t29 != 535320LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x129 = 12196860LLU;
	static volatile uint64_t x130 = 5204358162LLU;
	static volatile int64_t x131 = -17064LL;
	int32_t x132 = INT32_MIN;
	uint64_t t30 = 179813097371LLU;

	t30 = (x129*((x130&x131)%x132));

	if (t30 != 63476827867377600LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = -126397502983205LL;
	uint8_t x134 = 8U;
	volatile int32_t x136 = INT32_MAX;
	int64_t t31 = 196385083660LL;

	t31 = (x133*((x134&x135)%x136));

	if (t31 != -1011180023865640LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = -3953225LL;
	static int8_t x138 = 0;
	int64_t x139 = -1LL;
	static uint32_t x140 = 2167U;
	volatile int64_t t32 = -2445LL;

	t32 = (x137*((x138&x139)%x140));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	uint32_t x142 = 55931U;
	static volatile int16_t x143 = -1;
	int64_t x144 = 2LL;
	volatile int64_t t33 = 194074007LL;

	t33 = (x141*((x142&x143)%x144));

	if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x146 = UINT32_MAX;
	int16_t x148 = INT16_MIN;
	volatile uint32_t t34 = 669749592U;

	t34 = (x145*((x146&x147)%x148));

	if (t34 != 4275594181U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x149 = 2U;
	uint32_t x151 = UINT32_MAX;
	volatile int64_t t35 = -1543625578LL;

	t35 = (x149*((x150&x151)%x152));

	if (t35 != 4157638LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x153 = 6U;
	int16_t x154 = INT16_MIN;
	volatile int64_t x155 = 581177LL;
	volatile uint64_t x156 = UINT64_MAX;
	volatile uint64_t t36 = 65095314LLU;

	t36 = (x153*((x154&x155)%x156));

	if (t36 != 3342336LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = INT16_MAX;
	int64_t x159 = -1LL;
	static int32_t x160 = INT32_MAX;
	int64_t t37 = -94367997681LL;

	t37 = (x157*((x158&x159)%x160));

	if (t37 != 32767LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x163 = 10041374U;
	int8_t x164 = INT8_MAX;

	t38 = (x161*((x162&x163)%x164));

	if (t38 != 64634LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	int64_t x168 = 124256380LL;
	volatile uint64_t t39 = 334622240LLU;

	t39 = (x165*((x166&x167)%x168));

	if (t39 != 18446742573166231552LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x170 = INT32_MIN;
	uint32_t x171 = 379U;
	volatile uint32_t t40 = 521827798U;

	t40 = (x169*((x170&x171)%x172));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = -767343524LL;
	uint32_t x175 = 1U;
	int16_t x176 = INT16_MIN;
	int64_t t41 = 768328950789928LL;

	t41 = (x173*((x174&x175)%x176));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = 0;
	int32_t x180 = 156;
	int32_t t42 = -45035900;

	t42 = (x177*((x178&x179)%x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x183 = INT32_MIN;
	int16_t x184 = -1;

	t43 = (x181*((x182&x183)%x184));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = 4;
	volatile uint32_t x186 = UINT32_MAX;
	volatile int16_t x187 = INT16_MIN;

	t44 = (x185*((x186&x187)%x188));

	if (t44 != 512U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = 463U;
	int64_t x190 = INT64_MIN;
	int64_t x191 = INT64_MAX;
	int32_t x192 = -1;
	volatile int64_t t45 = 237214709965912125LL;

	t45 = (x189*((x190&x191)%x192));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x194 = UINT64_MAX;
	static volatile int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	static uint64_t t46 = 631LLU;

	t46 = (x193*((x194&x195)%x196));

	if (t46 != 2147483648LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x197 = -1;
	static int32_t x200 = INT32_MAX;
	volatile int32_t t47 = -229997121;

	t47 = (x197*((x198&x199)%x200));

	if (t47 != -255) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x202 = INT16_MIN;
	volatile int64_t x204 = INT64_MIN;
	volatile uint64_t t48 = 17016827896295114LLU;

	t48 = (x201*((x202&x203)%x204));

	if (t48 != 18446744072476262400LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x205 = UINT32_MAX;
	static int32_t x206 = -734544210;
	uint16_t x208 = 111U;
	int64_t t49 = -32710108544715LL;

	t49 = (x205*((x206&x207)%x208));

	if (t49 != 150323855325LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -9;
	int8_t x210 = INT8_MIN;
	uint64_t x211 = 80LLU;
	int16_t x212 = INT16_MIN;
	uint64_t t50 = 971831082LLU;

	t50 = (x209*((x210&x211)%x212));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x213 = -17;
	volatile int8_t x214 = -1;
	int8_t x215 = 27;
	int32_t x216 = -82;

	t51 = (x213*((x214&x215)%x216));

	if (t51 != -459) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MIN;
	static volatile uint8_t x222 = 81U;
	static int16_t x223 = INT16_MIN;
	static volatile int8_t x224 = -1;

	t52 = (x221*((x222&x223)%x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x226 = INT16_MIN;
	int64_t x228 = INT64_MAX;
	volatile int64_t t53 = 1597509286812LL;

	t53 = (x225*((x226&x227)%x228));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = -1;
	static volatile uint64_t x230 = 2121206127LLU;
	volatile uint32_t x232 = 159573156U;
	volatile uint64_t t54 = 33LLU;

	t54 = (x229*((x230&x231)%x232));

	if (t54 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = -1;
	int64_t x234 = -1LL;
	uint8_t x236 = UINT8_MAX;
	volatile int64_t t55 = -267696159728LL;

	t55 = (x233*((x234&x235)%x236));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x237 = 3U;
	uint8_t x238 = 0U;
	static volatile uint16_t x240 = 1171U;

	t56 = (x237*((x238&x239)%x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = 204705U;
	static int64_t x242 = -1LL;
	int16_t x243 = -3865;
	int16_t x244 = -2;
	volatile int64_t t57 = 82774438584LL;

	t57 = (x241*((x242&x243)%x244));

	if (t57 != -204705LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = -8;
	static uint8_t x246 = UINT8_MAX;
	uint8_t x247 = 29U;
	volatile int8_t x248 = INT8_MAX;
	volatile int32_t t58 = 0;

	t58 = (x245*((x246&x247)%x248));

	if (t58 != -232) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = INT8_MIN;
	static int8_t x250 = INT8_MIN;
	volatile int8_t x251 = INT8_MAX;
	static uint64_t x252 = 116200815984394LLU;
	uint64_t t59 = 19211970LLU;

	t59 = (x249*((x250&x251)%x252));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x254 = 1LL;
	int64_t x255 = -1LL;
	static uint16_t x256 = UINT16_MAX;
	int64_t t60 = 60349976LL;

	t60 = (x253*((x254&x255)%x256));

	if (t60 != -33LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x257 = 3U;
	int32_t x258 = 227749;
	int64_t x259 = -1LL;
	int8_t x260 = -1;
	int64_t t61 = 3669108347802LL;

	t61 = (x257*((x258&x259)%x260));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MAX;
	static volatile uint64_t x262 = UINT64_MAX;
	volatile int32_t x263 = INT32_MIN;
	uint16_t x264 = 7U;
	uint64_t t62 = 3424161LLU;

	t62 = (x261*((x262&x263)%x264));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = INT8_MAX;
	int64_t x266 = -157LL;
	int64_t x267 = -219597236063959670LL;
	static int16_t x268 = INT16_MIN;
	volatile int64_t t63 = 1470495424981619774LL;

	t63 = (x265*((x266&x267)%x268));

	if (t63 != -3998722LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x269 = INT32_MAX;
	int64_t x270 = INT64_MAX;
	uint32_t x272 = 8719U;

	t64 = (x269*((x270&x271)%x272));

	if (t64 != 4294967294LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x273 = 434927U;
	static int64_t x274 = INT64_MIN;
	static volatile uint32_t x275 = UINT32_MAX;
	int64_t t65 = -147498191LL;

	t65 = (x273*((x274&x275)%x276));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x277 = 29;
	int32_t x279 = 41617414;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t66 = 1;

	t66 = (x277*((x278&x279)%x280));

	if (t66 != 406) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x281 = -1LL;
	int32_t x282 = -1342;
	uint32_t x283 = UINT32_MAX;
	static uint64_t x284 = UINT64_MAX;
	static uint64_t t67 = 1807987008LLU;

	t67 = (x281*((x282&x283)%x284));

	if (t67 != 18446744069414585662LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MIN;
	int32_t x288 = -1;
	static volatile int32_t t68 = -52137936;

	t68 = (x285*((x286&x287)%x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = 879;
	static uint8_t x290 = UINT8_MAX;
	volatile int8_t x291 = 1;
	volatile uint16_t x292 = 11673U;

	t69 = (x289*((x290&x291)%x292));

	if (t69 != 879) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = -41260;
	int16_t x294 = 460;
	static volatile uint8_t x295 = 1U;
	int8_t x296 = -5;
	volatile int32_t t70 = 3823;

	t70 = (x293*((x294&x295)%x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x297 = -9;
	volatile uint8_t x298 = 1U;
	int8_t x299 = INT8_MIN;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t71 = -317;

	t71 = (x297*((x298&x299)%x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x301 = -1;
	volatile uint64_t t72 = 17635737489970292LLU;

	t72 = (x301*((x302&x303)%x304));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MIN;
	int64_t x307 = INT64_MIN;
	int16_t x308 = -1;
	int64_t t73 = -93LL;

	t73 = (x305*((x306&x307)%x308));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x310 = INT16_MIN;
	uint16_t x312 = UINT16_MAX;
	int64_t t74 = 2322LL;

	t74 = (x309*((x310&x311)%x312));

	if (t74 != -32768LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = -857399LL;
	int8_t x314 = INT8_MAX;
	volatile uint32_t x315 = 5U;
	volatile uint8_t x316 = UINT8_MAX;
	int64_t t75 = -1335687255610LL;

	t75 = (x313*((x314&x315)%x316));

	if (t75 != -4286995LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x317 = UINT64_MAX;
	volatile int64_t x319 = 3LL;
	volatile int8_t x320 = INT8_MIN;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x317*((x318&x319)%x320));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x321 = 0;
	static uint32_t x322 = UINT32_MAX;
	int64_t x324 = -1LL;
	int64_t t77 = -15LL;

	t77 = (x321*((x322&x323)%x324));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x325 = 0U;
	int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MIN;
	static volatile int32_t t78 = -15816563;

	t78 = (x325*((x326&x327)%x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = INT16_MIN;
	static int32_t x330 = INT32_MIN;
	uint8_t x331 = UINT8_MAX;
	int32_t x332 = INT32_MIN;
	int32_t t79 = 24476395;

	t79 = (x329*((x330&x331)%x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = INT16_MAX;
	volatile int16_t x334 = -197;
	int32_t x335 = INT32_MIN;
	int16_t x336 = 8;
	volatile int32_t t80 = 1;

	t80 = (x333*((x334&x335)%x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x337 = UINT16_MAX;
	uint16_t x338 = UINT16_MAX;
	volatile int32_t x339 = INT32_MIN;

	t81 = (x337*((x338&x339)%x340));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = INT16_MIN;
	volatile uint16_t x342 = UINT16_MAX;
	uint32_t x343 = 77817107U;
	uint16_t x344 = 222U;
	volatile uint32_t t82 = 9U;

	t82 = (x341*((x342&x343)%x344));

	if (t82 != 4290936832U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x346 = 1;
	uint16_t x347 = 11U;
	static int32_t x348 = -2285871;
	volatile uint32_t t83 = 663U;

	t83 = (x345*((x346&x347)%x348));

	if (t83 != 300245014U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x349 = UINT64_MAX;
	uint32_t x350 = 0U;
	int64_t x351 = -1LL;
	uint64_t x352 = 4LLU;
	volatile uint64_t t84 = 135LLU;

	t84 = (x349*((x350&x351)%x352));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = -1;
	int16_t x354 = -3;
	int8_t x355 = -3;
	static int64_t t85 = -278094994557LL;

	t85 = (x353*((x354&x355)%x356));

	if (t85 != 3LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x358 = -1;
	volatile int8_t x360 = INT8_MAX;
	volatile uint32_t t86 = 108220370U;

	t86 = (x357*((x358&x359)%x360));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = 1;
	uint8_t x362 = 11U;
	int32_t x363 = -253638868;
	static int32_t x364 = INT32_MIN;

	t87 = (x361*((x362&x363)%x364));

	if (t87 != 8) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = INT16_MIN;
	int16_t x367 = INT16_MAX;
	static int8_t x368 = INT8_MIN;
	volatile uint32_t t88 = 43985510U;

	t88 = (x365*((x366&x367)%x368));

	if (t88 != 4149837824U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x370 = INT16_MIN;
	volatile int16_t x371 = INT16_MAX;
	volatile int32_t t89 = -648559;

	t89 = (x369*((x370&x371)%x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = -2;
	static int8_t x374 = 3;
	int32_t x375 = -1;
	volatile int64_t t90 = -17298621216376499LL;

	t90 = (x373*((x374&x375)%x376));

	if (t90 != -6LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = INT8_MIN;
	static int64_t x378 = 8LL;
	volatile int64_t x379 = -111636140179LL;
	static uint16_t x380 = 15U;
	int64_t t91 = 23078033374LL;

	t91 = (x377*((x378&x379)%x380));

	if (t91 != -1024LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = -104;
	int64_t x382 = -2623LL;
	uint8_t x383 = 92U;
	static int8_t x384 = -5;
	int64_t t92 = 1332LL;

	t92 = (x381*((x382&x383)%x384));

	if (t92 != -416LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x385 = INT16_MIN;
	volatile int32_t x386 = -1;
	uint16_t x387 = 3U;
	volatile int32_t t93 = -784546;

	t93 = (x385*((x386&x387)%x388));

	if (t93 != -98304) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = -470195;
	int64_t x390 = -2760LL;
	int16_t x391 = INT16_MIN;
	int16_t x392 = INT16_MIN;
	int64_t t94 = 2701553LL;

	t94 = (x389*((x390&x391)%x392));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x393 = INT16_MIN;
	uint16_t x395 = 1921U;
	int8_t x396 = 2;
	int32_t t95 = -274446385;

	t95 = (x393*((x394&x395)%x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x398 = -1;
	static volatile int32_t x399 = INT32_MIN;
	int16_t x400 = INT16_MIN;

	t96 = (x397*((x398&x399)%x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = 26;
	uint8_t x402 = 26U;
	volatile int8_t x404 = INT8_MAX;
	volatile int64_t t97 = 228673153029372450LL;

	t97 = (x401*((x402&x403)%x404));

	if (t97 != 676LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = 7137419588LL;
	int16_t x406 = -1;
	volatile uint64_t x407 = 565157710LLU;
	int32_t x408 = INT32_MIN;
	volatile uint64_t t98 = 31895635500417LLU;

	t98 = (x405*((x406&x407)%x408));

	if (t98 != 4033767709663223480LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x409 = 36;
	uint32_t x410 = 705U;
	static int16_t x411 = 15673;
	int32_t x412 = -96;
	volatile uint32_t t99 = 3786886U;

	t99 = (x409*((x410&x411)%x412));

	if (t99 != 36U) { NG(); } else { ; }
	
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


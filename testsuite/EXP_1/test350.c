#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 6114U;
static volatile int64_t x4 = INT64_MIN;
volatile uint64_t t0 = 13569LLU;
uint8_t x5 = 98U;
int16_t x22 = INT16_MIN;
volatile uint64_t x26 = 282940266LLU;
static int64_t x27 = INT64_MAX;
int64_t t4 = -892725LL;
static uint16_t x40 = 599U;
uint16_t x51 = 2U;
uint8_t x52 = 26U;
uint32_t x57 = 0U;
int8_t x86 = 0;
uint16_t x88 = 57U;
static int64_t x108 = 804907401LL;
int16_t x109 = INT16_MIN;
uint32_t x112 = 906524757U;
volatile uint16_t x122 = 0U;
volatile uint64_t x127 = 13057892911429LLU;
int16_t x129 = INT16_MIN;
int8_t x131 = INT8_MIN;
uint32_t x133 = 13433U;
int32_t x141 = -1;
int16_t x142 = INT16_MAX;
int16_t x143 = INT16_MAX;
static int16_t x159 = INT16_MAX;
static int32_t t33 = -1;
int8_t x169 = INT8_MAX;
static int64_t t35 = -10LL;
int64_t x192 = INT64_MIN;
volatile int64_t t38 = 0LL;
int32_t x201 = 4638473;
uint64_t t40 = 30LLU;
static int8_t x205 = -1;
uint64_t x206 = 1302278LLU;
static int64_t x224 = -396414LL;
int16_t x225 = 0;
int32_t x226 = 60;
volatile uint64_t t45 = UINT64_MAX;
int8_t x229 = -1;
uint32_t t46 = 253U;
int64_t x236 = INT64_MIN;
int8_t x241 = 0;
static int8_t x249 = -1;
uint64_t x254 = 75105794LLU;
static volatile uint64_t t50 = 3869560000LLU;
int64_t x260 = INT64_MAX;
static uint64_t x261 = UINT64_MAX;
int32_t x263 = -312;
int8_t x272 = -1;
int32_t x274 = INT32_MIN;
int64_t x287 = INT64_MAX;
static volatile int8_t x295 = -50;
uint32_t x304 = 9701473U;
int32_t x306 = 0;
uint8_t x307 = 6U;
int8_t x314 = INT8_MAX;
int64_t x316 = INT64_MAX;
int16_t x326 = -1;
int8_t x330 = INT8_MIN;
int16_t x332 = INT16_MIN;
volatile int8_t x338 = INT8_MIN;
static volatile int32_t t68 = 203390;
int64_t x347 = INT64_MIN;
static uint64_t t72 = 154447LLU;
int64_t x366 = INT64_MAX;
static uint32_t x367 = 3111U;
int8_t x374 = 7;
int64_t t78 = 116589303LL;
uint16_t x423 = UINT16_MAX;
uint32_t t79 = 2424U;
uint64_t x433 = 1180485112721722LLU;
volatile uint64_t t81 = 17691071223LLU;
volatile int32_t x439 = INT32_MIN;
static uint64_t t82 = 7LLU;
int32_t x445 = 75803300;
volatile uint64_t x446 = 128861179348193LLU;
uint64_t t83 = 26506281LLU;
static volatile int64_t t84 = 1639577376LL;
static int32_t x455 = 102;
uint32_t x464 = UINT32_MAX;
static volatile uint32_t t86 = UINT32_MAX;
int16_t x467 = -10;
int8_t x481 = -8;
int8_t x482 = INT8_MIN;
uint16_t x483 = UINT16_MAX;
uint8_t x484 = UINT8_MAX;
uint64_t x488 = 4LLU;
int64_t x491 = 582464LL;
static uint64_t t91 = 98456754948LLU;
uint8_t x503 = UINT8_MAX;
int64_t x507 = INT64_MIN;
uint32_t x509 = 19961958U;
volatile uint16_t x517 = 14722U;
uint8_t x520 = 56U;
volatile int16_t x525 = INT16_MIN;
int64_t x528 = INT64_MIN;
int16_t x542 = -1288;
int16_t x544 = INT16_MIN;
int8_t x552 = INT8_MAX;


void f0(void) {
	uint64_t x1 = 39339232397LLU;
	uint64_t x2 = 134745610150530550LLU;

	t0 = (((x1*x2)+x3)|x4);

	if (t0 != 10249416483883389024LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = -1;
	volatile int8_t x7 = INT8_MIN;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = 27;

	t1 = (((x5*x6)+x7)|x8);

	if (t1 != -98) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = 1;
	volatile uint8_t x23 = UINT8_MAX;
	volatile uint16_t x24 = UINT16_MAX;
	int32_t t2 = 3581;

	t2 = (((x21*x22)+x23)|x24);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MIN;
	int16_t x28 = 13831;
	volatile uint64_t t3 = 312871332566LLU;

	t3 = (((x25*x26)+x27)|x28);

	if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = -1628768LL;
	int16_t x30 = INT16_MAX;
	int8_t x31 = -1;
	int8_t x32 = INT8_MIN;

	t4 = (((x29*x30)+x31)|x32);

	if (t4 != -33LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x33 = 601;
	int32_t x34 = 1051;
	uint8_t x35 = 82U;
	static int32_t x36 = -1;
	static volatile int32_t t5 = -114;

	t5 = (((x33*x34)+x35)|x36);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = -3853;
	volatile int16_t x38 = 14;
	int64_t x39 = INT64_MAX;
	volatile int64_t t6 = -5LL;

	t6 = (((x37*x38)+x39)|x40);

	if (t6 != 9223372036854722399LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x41 = -109;
	volatile uint32_t x42 = 29U;
	int64_t x43 = -3LL;
	int16_t x44 = -1;
	volatile int64_t t7 = -7312793LL;

	t7 = (((x41*x42)+x43)|x44);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x49 = 19U;
	int32_t x50 = 66684;
	volatile int32_t t8 = -404520;

	t8 = (((x49*x50)+x51)|x52);

	if (t8 != 1267006) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x58 = -1LL;
	int16_t x59 = INT16_MAX;
	int64_t x60 = INT64_MIN;
	int64_t t9 = 478716415LL;

	t9 = (((x57*x58)+x59)|x60);

	if (t9 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x65 = INT64_MIN;
	static uint64_t x66 = UINT64_MAX;
	uint16_t x67 = UINT16_MAX;
	static int32_t x68 = INT32_MAX;
	uint64_t t10 = 36542591405629838LLU;

	t10 = (((x65*x66)+x67)|x68);

	if (t10 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = -1;
	int16_t x70 = INT16_MAX;
	volatile int8_t x71 = -3;
	int8_t x72 = 31;
	volatile int32_t t11 = -523750;

	t11 = (((x69*x70)+x71)|x72);

	if (t11 != -32769) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x73 = -1LL;
	int32_t x74 = INT32_MAX;
	uint32_t x75 = 212U;
	int32_t x76 = INT32_MIN;
	int64_t t12 = 24487908LL;

	t12 = (((x73*x74)+x75)|x76);

	if (t12 != -2147483435LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = INT8_MAX;
	volatile uint8_t x78 = 4U;
	int64_t x79 = INT64_MIN;
	int8_t x80 = INT8_MIN;
	static int64_t t13 = -46092519055LL;

	t13 = (((x77*x78)+x79)|x80);

	if (t13 != -4LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x81 = UINT32_MAX;
	uint8_t x82 = UINT8_MAX;
	static int64_t x83 = INT64_MIN;
	int64_t x84 = -1LL;
	volatile int64_t t14 = 1515651236045LL;

	t14 = (((x81*x82)+x83)|x84);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x85 = 434U;
	int8_t x87 = 3;
	int32_t t15 = 80841;

	t15 = (((x85*x86)+x87)|x88);

	if (t15 != 59) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x93 = UINT32_MAX;
	uint8_t x94 = UINT8_MAX;
	int32_t x95 = 119;
	int16_t x96 = INT16_MIN;
	uint32_t t16 = 41014980U;

	t16 = (((x93*x94)+x95)|x96);

	if (t16 != 4294967160U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x97 = -1;
	volatile uint16_t x98 = UINT16_MAX;
	int8_t x99 = 30;
	int64_t x100 = INT64_MIN;
	volatile int64_t t17 = 422633104897LL;

	t17 = (((x97*x98)+x99)|x100);

	if (t17 != -65505LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x101 = 65323U;
	volatile uint32_t x102 = UINT32_MAX;
	uint8_t x103 = 108U;
	int32_t x104 = INT32_MIN;
	uint32_t t18 = 64850040U;

	t18 = (((x101*x102)+x103)|x104);

	if (t18 != 4294902081U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x105 = 39U;
	static uint32_t x106 = 243U;
	int64_t x107 = -1LL;
	volatile int64_t t19 = 69871009382LL;

	t19 = (((x105*x106)+x107)|x108);

	if (t19 != 804908429LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x110 = -1LL;
	uint8_t x111 = 1U;
	volatile int64_t t20 = -2LL;

	t20 = (((x109*x110)+x111)|x112);

	if (t20 != 906557525LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x113 = UINT64_MAX;
	uint32_t x114 = 59241U;
	int8_t x115 = 0;
	uint64_t x116 = UINT64_MAX;
	uint64_t t21 = UINT64_MAX;

	t21 = (((x113*x114)+x115)|x116);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = -5;
	uint8_t x118 = 4U;
	int16_t x119 = INT16_MIN;
	volatile uint8_t x120 = 24U;
	int32_t t22 = -14;

	t22 = (((x117*x118)+x119)|x120);

	if (t22 != -32772) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = 3LLU;
	static uint8_t x123 = 1U;
	int64_t x124 = -467056479772LL;
	volatile uint64_t t23 = 29368039403979LLU;

	t23 = (((x121*x122)+x123)|x124);

	if (t23 != 18446743606653071845LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x125 = UINT8_MAX;
	uint64_t x126 = UINT64_MAX;
	int8_t x128 = 1;
	static uint64_t t24 = 85699413314925LLU;

	t24 = (((x125*x126)+x127)|x128);

	if (t24 != 13057892911175LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x130 = 5U;
	int16_t x132 = INT16_MAX;
	int32_t t25 = 11;

	t25 = (((x129*x130)+x131)|x132);

	if (t25 != -163841) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x134 = -1;
	int16_t x135 = INT16_MAX;
	int8_t x136 = INT8_MIN;
	static uint32_t t26 = 140U;

	t26 = (((x133*x134)+x135)|x136);

	if (t26 != 4294967174U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = 1;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	uint16_t x140 = UINT16_MAX;
	static int32_t t27 = -11;

	t27 = (((x137*x138)+x139)|x140);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x144 = INT8_MAX;
	volatile int32_t t28 = 3;

	t28 = (((x141*x142)+x143)|x144);

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x145 = 14U;
	static int8_t x146 = 43;
	static volatile int16_t x147 = -2;
	int64_t x148 = -1LL;
	static int64_t t29 = -785826095725LL;

	t29 = (((x145*x146)+x147)|x148);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x149 = INT32_MIN;
	static int64_t x150 = -1LL;
	int16_t x151 = INT16_MAX;
	int64_t x152 = INT64_MIN;
	int64_t t30 = -16396612LL;

	t30 = (((x149*x150)+x151)|x152);

	if (t30 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = 832U;
	volatile uint32_t x154 = 1050U;
	int16_t x155 = 34;
	int64_t x156 = -1LL;
	static int64_t t31 = -7830987LL;

	t31 = (((x153*x154)+x155)|x156);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = INT8_MIN;
	static uint16_t x158 = 4462U;
	int16_t x160 = -1;
	int32_t t32 = -228;

	t32 = (((x157*x158)+x159)|x160);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MIN;
	static uint16_t x162 = 6U;
	int8_t x163 = -1;
	uint8_t x164 = 35U;

	t33 = (((x161*x162)+x163)|x164);

	if (t33 != -769) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x170 = UINT32_MAX;
	uint64_t x171 = UINT64_MAX;
	int8_t x172 = INT8_MIN;
	volatile uint64_t t34 = 21LLU;

	t34 = (((x169*x170)+x171)|x172);

	if (t34 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x181 = INT16_MIN;
	volatile int64_t x182 = -1LL;
	volatile uint16_t x183 = UINT16_MAX;
	uint8_t x184 = 2U;

	t35 = (((x181*x182)+x183)|x184);

	if (t35 != 98303LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = INT16_MIN;
	static int32_t x186 = -1;
	uint16_t x187 = 5309U;
	volatile int64_t x188 = INT64_MIN;
	static volatile int64_t t36 = 24012005LL;

	t36 = (((x185*x186)+x187)|x188);

	if (t36 != -9223372036854737731LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x189 = -1;
	static uint64_t x190 = 175426235992LLU;
	int64_t x191 = INT64_MAX;
	volatile uint64_t t37 = 3996026365701LLU;

	t37 = (((x189*x190)+x191)|x192);

	if (t37 != 18446743898283315623LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x193 = 822454566;
	static int64_t x194 = 3291LL;
	static int8_t x195 = INT8_MIN;
	static int8_t x196 = 0;

	t38 = (((x193*x194)+x195)|x196);

	if (t38 != 2706697976578LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x197 = -1;
	int16_t x198 = -1;
	static int32_t x199 = INT32_MIN;
	static int16_t x200 = INT16_MIN;
	int32_t t39 = 0;

	t39 = (((x197*x198)+x199)|x200);

	if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x202 = UINT64_MAX;
	int64_t x203 = -1LL;
	uint8_t x204 = UINT8_MAX;

	t40 = (((x201*x202)+x203)|x204);

	if (t40 != 18446744073704913151LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x207 = -2;
	static int32_t x208 = -1;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (((x205*x206)+x207)|x208);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = -1;
	int16_t x210 = INT16_MIN;
	volatile int64_t x211 = INT64_MIN;
	volatile int8_t x212 = INT8_MIN;
	volatile int64_t t42 = -130212LL;

	t42 = (((x209*x210)+x211)|x212);

	if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x213 = -1;
	static uint32_t x214 = 49U;
	volatile int8_t x215 = -1;
	int8_t x216 = -1;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = (((x213*x214)+x215)|x216);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x221 = 3;
	static volatile int16_t x222 = INT16_MIN;
	uint64_t x223 = 6586115883LLU;
	volatile uint64_t t44 = 306105511LLU;

	t44 = (((x221*x222)+x223)|x224);

	if (t44 != 18446744073709549483LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x227 = UINT64_MAX;
	uint32_t x228 = UINT32_MAX;

	t45 = (((x225*x226)+x227)|x228);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x230 = UINT32_MAX;
	int8_t x231 = INT8_MIN;
	volatile int16_t x232 = INT16_MIN;

	t46 = (((x229*x230)+x231)|x232);

	if (t46 != 4294967169U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x233 = 12;
	int64_t x234 = -1LL;
	int32_t x235 = -486;
	volatile int64_t t47 = 8469607263929737LL;

	t47 = (((x233*x234)+x235)|x236);

	if (t47 != -498LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x242 = INT64_MAX;
	int16_t x243 = INT16_MAX;
	uint16_t x244 = UINT16_MAX;
	int64_t t48 = -63LL;

	t48 = (((x241*x242)+x243)|x244);

	if (t48 != 65535LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x250 = -1LL;
	int32_t x251 = INT32_MAX;
	static int16_t x252 = INT16_MIN;
	volatile int64_t t49 = 10LL;

	t49 = (((x249*x250)+x251)|x252);

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x253 = -3;
	uint8_t x255 = UINT8_MAX;
	uint64_t x256 = 38465424394LLU;

	t50 = (((x253*x254)+x255)|x256);

	if (t50 != 18446744073553833723LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x257 = UINT64_MAX;
	uint32_t x258 = 84827U;
	static int32_t x259 = -1;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (((x257*x258)+x259)|x260);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x262 = INT8_MIN;
	volatile uint8_t x264 = UINT8_MAX;
	uint64_t t52 = UINT64_MAX;

	t52 = (((x261*x262)+x263)|x264);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x265 = -1;
	static int16_t x266 = 0;
	uint8_t x267 = 2U;
	uint32_t x268 = 103567540U;
	uint32_t t53 = 8937069U;

	t53 = (((x265*x266)+x267)|x268);

	if (t53 != 103567542U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x269 = 836684709LLU;
	uint64_t x270 = UINT64_MAX;
	volatile int32_t x271 = 4;
	uint64_t t54 = UINT64_MAX;

	t54 = (((x269*x270)+x271)|x272);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x273 = 94374534120LLU;
	volatile int64_t x275 = -1829589866544LL;
	int8_t x276 = INT8_MAX;
	uint64_t t55 = 20155870889949LLU;

	t55 = (((x273*x274)+x275)|x276);

	if (t55 != 246414170897131519LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x277 = -1;
	int8_t x278 = 3;
	uint8_t x279 = 1U;
	int8_t x280 = INT8_MAX;
	int32_t t56 = 6746;

	t56 = (((x277*x278)+x279)|x280);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x281 = INT8_MIN;
	static uint32_t x282 = UINT32_MAX;
	int16_t x283 = INT16_MIN;
	static int16_t x284 = INT16_MIN;
	uint32_t t57 = 57437U;

	t57 = (((x281*x282)+x283)|x284);

	if (t57 != 4294934656U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x285 = 3067501129359295940LLU;
	volatile int64_t x286 = INT64_MAX;
	static int8_t x288 = INT8_MIN;
	uint64_t t58 = 129932188082520LLU;

	t58 = (((x285*x286)+x287)|x288);

	if (t58 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x293 = -1;
	int64_t x294 = -9733673024LL;
	int64_t x296 = INT64_MAX;
	static volatile int64_t t59 = INT64_MAX;

	t59 = (((x293*x294)+x295)|x296);

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x301 = 327839506LLU;
	int64_t x302 = INT64_MIN;
	uint32_t x303 = UINT32_MAX;
	uint64_t t60 = 332512194053529537LLU;

	t60 = (((x301*x302)+x303)|x304);

	if (t60 != 4294967295LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x305 = 344962684266917839LL;
	int32_t x308 = -1;
	static int64_t t61 = 4405033893204739250LL;

	t61 = (((x305*x306)+x307)|x308);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x309 = -3;
	static int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MAX;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t62 = -113;

	t62 = (((x309*x310)+x311)|x312);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x313 = 2U;
	int32_t x315 = INT32_MIN;
	static int64_t t63 = 210987039889LL;

	t63 = (((x313*x314)+x315)|x316);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x317 = UINT64_MAX;
	volatile int8_t x318 = INT8_MAX;
	uint8_t x319 = 25U;
	int16_t x320 = -1;
	static uint64_t t64 = UINT64_MAX;

	t64 = (((x317*x318)+x319)|x320);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x325 = -7905;
	int64_t x327 = INT64_MIN;
	int16_t x328 = INT16_MIN;
	static int64_t t65 = 24290578247872LL;

	t65 = (((x325*x326)+x327)|x328);

	if (t65 != -24863LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = -1LL;
	static volatile int8_t x331 = -57;
	int64_t t66 = 38558451377460LL;

	t66 = (((x329*x330)+x331)|x332);

	if (t66 != -32697LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x333 = -1LL;
	uint16_t x334 = UINT16_MAX;
	static int64_t x335 = -1LL;
	int32_t x336 = -7546043;
	volatile int64_t t67 = -4444627LL;

	t67 = (((x333*x334)+x335)|x336);

	if (t67 != -9403LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x337 = -16;
	uint8_t x339 = UINT8_MAX;
	uint8_t x340 = 80U;

	t68 = (((x337*x338)+x339)|x340);

	if (t68 != 2303) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x345 = UINT8_MAX;
	int16_t x346 = INT16_MAX;
	int64_t x348 = INT64_MIN;
	volatile int64_t t69 = -898033822537431959LL;

	t69 = (((x345*x346)+x347)|x348);

	if (t69 != -9223372036846420223LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x349 = 2U;
	uint16_t x350 = 23430U;
	volatile uint64_t x351 = 2724445LLU;
	int64_t x352 = INT64_MIN;
	volatile uint64_t t70 = 225LLU;

	t70 = (((x349*x350)+x351)|x352);

	if (t70 != 9223372036857547113LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x353 = 2026296U;
	int8_t x354 = -4;
	static volatile int64_t x355 = -1LL;
	volatile uint16_t x356 = UINT16_MAX;
	volatile int64_t t71 = -6305779852LL;

	t71 = (((x353*x354)+x355)|x356);

	if (t71 != 4286906367LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x357 = -64324197;
	int16_t x358 = 1;
	volatile uint32_t x359 = UINT32_MAX;
	volatile uint64_t x360 = 60026101283284LLU;

	t72 = (((x357*x358)+x359)|x360);

	if (t72 != 60026437500382LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x365 = 0U;
	int32_t x368 = INT32_MAX;
	volatile int64_t t73 = 380LL;

	t73 = (((x365*x366)+x367)|x368);

	if (t73 != 2147483647LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = -1;
	volatile int32_t x371 = INT32_MIN;
	uint32_t x372 = 1U;
	volatile uint32_t t74 = 395789858U;

	t74 = (((x369*x370)+x371)|x372);

	if (t74 != 2147483777U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x373 = -37978170269LL;
	int16_t x375 = INT16_MIN;
	int32_t x376 = 10237;
	int64_t t75 = 3970LL;

	t75 = (((x373*x374)+x375)|x376);

	if (t75 != -265847216131LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x385 = -57;
	static uint8_t x386 = 6U;
	static uint16_t x387 = UINT16_MAX;
	uint64_t x388 = 241119268LLU;
	volatile uint64_t t76 = 314LLU;

	t76 = (((x385*x386)+x387)|x388);

	if (t76 != 241172141LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x389 = INT16_MIN;
	uint16_t x390 = 409U;
	static uint64_t x391 = UINT64_MAX;
	int8_t x392 = INT8_MIN;
	static uint64_t t77 = UINT64_MAX;

	t77 = (((x389*x390)+x391)|x392);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x409 = UINT8_MAX;
	volatile int8_t x410 = -10;
	uint8_t x411 = UINT8_MAX;
	int64_t x412 = -53180LL;

	t78 = (((x409*x410)+x411)|x412);

	if (t78 != -2227LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x421 = UINT32_MAX;
	volatile uint16_t x422 = UINT16_MAX;
	int16_t x424 = -1923;

	t79 = (((x421*x422)+x423)|x424);

	if (t79 != 4294965373U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x429 = UINT16_MAX;
	int8_t x430 = INT8_MIN;
	uint16_t x431 = 15342U;
	int32_t x432 = INT32_MIN;
	int32_t t80 = -6030;

	t80 = (((x429*x430)+x431)|x432);

	if (t80 != -8373138) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x434 = UINT8_MAX;
	uint8_t x435 = UINT8_MAX;
	int32_t x436 = INT32_MIN;

	t81 = (((x433*x434)+x435)|x436);

	if (t81 != 18446744072411597253LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x437 = INT32_MIN;
	volatile uint64_t x438 = 66506382898LLU;
	int64_t x440 = INT64_MAX;

	t82 = (((x437*x438)+x439)|x440);

	if (t82 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x447 = 99742U;
	int16_t x448 = INT16_MIN;

	t83 = (((x445*x446)+x447)|x448);

	if (t83 != 18446744073709522882LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x449 = 107U;
	int16_t x450 = INT16_MAX;
	int64_t x451 = -1LL;
	uint8_t x452 = UINT8_MAX;

	t84 = (((x449*x450)+x451)|x452);

	if (t84 != 3506175LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x453 = 55589LLU;
	int32_t x454 = 232049;
	uint8_t x456 = 2U;
	uint64_t t85 = 0LLU;

	t85 = (((x453*x454)+x455)|x456);

	if (t85 != 12899371963LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x461 = -1;
	volatile uint8_t x462 = UINT8_MAX;
	int8_t x463 = -3;

	t86 = (((x461*x462)+x463)|x464);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x465 = INT8_MIN;
	static volatile uint32_t x466 = 63U;
	uint64_t x468 = 356492LLU;
	volatile uint64_t t87 = 4278373LLU;

	t87 = (((x465*x466)+x467)|x468);

	if (t87 != 4294963454LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x473 = 2LLU;
	static uint16_t x474 = 18123U;
	int16_t x475 = INT16_MIN;
	uint64_t x476 = 784LLU;
	volatile uint64_t t88 = 519963826123LLU;

	t88 = (((x473*x474)+x475)|x476);

	if (t88 != 3990LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t t89 = -99466;

	t89 = (((x481*x482)+x483)|x484);

	if (t89 != 66559) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x485 = -47384LL;
	static volatile int32_t x486 = INT32_MIN;
	static volatile int32_t x487 = 283;
	volatile uint64_t t90 = 1373580LLU;

	t90 = (((x485*x486)+x487)|x488);

	if (t90 != 101756365177119LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x489 = 50829020667151LLU;
	static int16_t x490 = INT16_MIN;
	uint32_t x492 = 103U;

	t91 = (((x489*x490)+x491)|x492);

	if (t91 != 16781178724488930151LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x497 = 421U;
	uint16_t x498 = 0U;
	uint8_t x499 = UINT8_MAX;
	static int16_t x500 = -6;
	int32_t t92 = 54505588;

	t92 = (((x497*x498)+x499)|x500);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x501 = 13U;
	int32_t x502 = 6942273;
	volatile uint32_t x504 = 35U;
	uint32_t t93 = 282885U;

	t93 = (((x501*x502)+x503)|x504);

	if (t93 != 90249839U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x505 = 4161322LLU;
	int64_t x506 = INT64_MIN;
	int8_t x508 = INT8_MAX;
	volatile uint64_t t94 = 16659642925795LLU;

	t94 = (((x505*x506)+x507)|x508);

	if (t94 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x510 = -1;
	int8_t x511 = 0;
	uint64_t x512 = 8273829908LLU;
	static volatile uint64_t t95 = 252843837LLU;

	t95 = (((x509*x510)+x511)|x512);

	if (t95 != 8588879774LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x518 = 7LLU;
	int8_t x519 = INT8_MIN;
	volatile uint64_t t96 = 88LLU;

	t96 = (((x517*x518)+x519)|x520);

	if (t96 != 102974LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x526 = -998;
	int8_t x527 = -1;
	volatile int64_t t97 = 58193484817LL;

	t97 = (((x525*x526)+x527)|x528);

	if (t97 != -9223372036822073345LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x541 = -1LL;
	static volatile uint8_t x543 = 7U;
	static int64_t t98 = -3LL;

	t98 = (((x541*x542)+x543)|x544);

	if (t98 != -31473LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x549 = UINT32_MAX;
	int8_t x550 = -1;
	static volatile int16_t x551 = -1;
	volatile uint32_t t99 = 3U;

	t99 = (((x549*x550)+x551)|x552);

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


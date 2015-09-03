#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
volatile uint64_t t1 = 11072029078515LLU;
static uint32_t t2 = 199U;
int64_t x30 = INT64_MAX;
int32_t x31 = INT32_MIN;
volatile uint64_t t3 = 9LLU;
uint8_t x36 = 5U;
uint64_t x43 = 1008LLU;
volatile uint64_t t6 = 20441252757631LLU;
int32_t x51 = INT32_MIN;
int32_t x58 = 63727;
volatile int16_t x65 = 1920;
volatile int64_t x79 = -471451851813645791LL;
int64_t t11 = 63110616933LL;
volatile int8_t x81 = 14;
int32_t x83 = INT32_MIN;
static int32_t x84 = INT32_MAX;
volatile uint32_t t13 = 64441U;
volatile int8_t x93 = INT8_MIN;
int64_t x96 = -1LL;
int16_t x102 = -138;
uint16_t x105 = 5U;
int8_t x108 = INT8_MAX;
static uint64_t x114 = 3603762975650374503LLU;
int16_t x116 = -1;
volatile int32_t x120 = 275328;
uint16_t x126 = UINT16_MAX;
volatile int32_t t20 = -2938;
int8_t x130 = INT8_MIN;
static int8_t x140 = 2;
volatile int32_t t22 = -117879;
volatile int16_t x149 = -53;
volatile uint64_t x151 = 18LLU;
int8_t x154 = 1;
int32_t x161 = -4749;
static int32_t x162 = -409442;
int64_t x184 = -1LL;
uint8_t x194 = 0U;
int64_t x210 = -23308999453501LL;
volatile int64_t t31 = 6283151LL;
int64_t x219 = -1LL;
volatile int64_t t32 = -50933296LL;
int32_t t33 = -1;
int16_t x226 = -1;
int32_t t34 = 10468;
volatile uint32_t x230 = 196U;
uint64_t x235 = 5460451153673LLU;
int32_t x241 = 3;
int64_t x253 = -1LL;
int64_t x264 = -1LL;
int32_t x271 = 512422757;
int16_t x285 = 1;
int16_t x287 = INT16_MIN;
static volatile uint64_t t46 = 66595034042LLU;
int16_t x299 = INT16_MAX;
int8_t x302 = 5;
static uint8_t x310 = UINT8_MAX;
int8_t x320 = INT8_MIN;
uint64_t x324 = 3094284LLU;
uint16_t x325 = UINT16_MAX;
int32_t x337 = -1;
static uint8_t x338 = 0U;
volatile int16_t x340 = -1;
volatile int64_t x346 = 5LL;
volatile int8_t x352 = -1;
int8_t x359 = INT8_MAX;
int16_t x360 = INT16_MIN;
volatile int64_t t59 = -1451401LL;
uint32_t x361 = 439U;
uint16_t x374 = 2171U;
volatile int64_t t61 = 1269643598790LL;
int64_t x386 = -1LL;
uint32_t x400 = 393677U;
uint32_t t66 = 1332U;
int8_t x407 = INT8_MIN;
static volatile int32_t t67 = -10794;
volatile uint64_t t68 = 1LLU;
int16_t x417 = -2935;
int64_t x419 = INT64_MAX;
uint16_t x420 = 7U;
int64_t t70 = -16742039749607177LL;
int16_t x425 = INT16_MIN;
volatile int64_t t71 = 321487LL;
static volatile uint64_t t72 = 33131875832LLU;
int16_t x439 = INT16_MIN;
int32_t x442 = INT32_MIN;
volatile int64_t t75 = -1561107515975699031LL;
int32_t x446 = INT32_MAX;
int16_t x447 = INT16_MIN;
static uint64_t x461 = 6705LLU;
int32_t x462 = INT32_MAX;
volatile uint64_t t78 = 21564215LLU;
volatile uint8_t x475 = 67U;
int16_t x485 = INT16_MIN;
uint32_t x486 = UINT32_MAX;
int16_t x487 = 1;
int32_t x490 = -3493903;
volatile int64_t t84 = -337790900LL;
uint16_t x502 = 22379U;
uint64_t t86 = 2004224006LLU;
volatile uint32_t t87 = 29U;
uint32_t x522 = UINT32_MAX;
volatile int16_t x523 = -1;
volatile uint64_t t90 = 85561148588LLU;
uint16_t x529 = 33U;
static int32_t x530 = -1;
int64_t x532 = INT64_MIN;
volatile uint64_t t91 = 964177057962LLU;
int16_t x535 = 8;
int16_t x536 = INT16_MIN;
volatile int64_t t92 = -225LL;
static uint64_t t94 = 876524986487155LLU;
int16_t x545 = INT16_MIN;
int16_t x546 = -1;
int16_t x558 = INT16_MIN;
int16_t x562 = -1;
int16_t x569 = 6;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint8_t x2 = 1U;
	static int32_t x4 = 2;
	int64_t t0 = -234019519781124LL;

	t0 = ((x1*x2)-(x3/x4));

	if (t0 != 4611686018427387776LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	uint16_t x10 = 4963U;
	static int16_t x11 = -1;
	static uint64_t x12 = UINT64_MAX;

	t1 = ((x9*x10)-(x11/x12));

	if (t1 != 18446744073546924031LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	uint32_t x14 = 4084U;
	int16_t x15 = INT16_MIN;
	static volatile int16_t x16 = INT16_MIN;

	t2 = ((x13*x14)-(x15/x16));

	if (t2 != 518667U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x29 = -1;
	static uint64_t x32 = 36489500018LLU;

	t3 = ((x29*x30)-(x31/x32));

	if (t3 != 9223372036349240133LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = INT8_MIN;
	uint32_t x34 = 4787U;
	int8_t x35 = INT8_MIN;
	volatile uint32_t t4 = 2616693U;

	t4 = ((x33*x34)-(x35/x36));

	if (t4 != 4294354585U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = INT16_MIN;
	volatile int16_t x38 = -1660;
	static volatile int16_t x39 = 12;
	static volatile int8_t x40 = INT8_MIN;
	static volatile int32_t t5 = -20;

	t5 = ((x37*x38)-(x39/x40));

	if (t5 != 54394880) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x41 = 109U;
	static int64_t x42 = -1LL;
	int32_t x44 = INT32_MIN;

	t6 = ((x41*x42)-(x43/x44));

	if (t6 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MAX;
	uint32_t x50 = 2U;
	uint32_t x52 = 49U;
	volatile uint32_t t7 = 1U;

	t7 = ((x49*x50)-(x51/x52));

	if (t7 != 4251141354U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = INT8_MIN;
	uint16_t x54 = 14604U;
	volatile uint64_t x55 = 2633LLU;
	int16_t x56 = INT16_MIN;
	uint64_t t8 = 138706LLU;

	t8 = ((x53*x54)-(x55/x56));

	if (t8 != 18446744073707682304LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = -1;
	int64_t x59 = INT64_MIN;
	int16_t x60 = INT16_MIN;
	static int64_t t9 = 84273227447LL;

	t9 = ((x57*x58)-(x59/x60));

	if (t9 != -281474976774383LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x66 = UINT32_MAX;
	volatile uint16_t x67 = 0U;
	volatile int64_t x68 = INT64_MAX;
	static int64_t t10 = -261417596495989LL;

	t10 = ((x65*x66)-(x67/x68));

	if (t10 != 4294965376LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x77 = INT8_MIN;
	static uint32_t x78 = 1070950U;
	static int8_t x80 = INT8_MIN;

	t11 = ((x77*x78)-(x79/x80));

	if (t11 != -3683213434408411LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x82 = INT8_MIN;
	static int32_t t12 = 5;

	t12 = ((x81*x82)-(x83/x84));

	if (t12 != -1791) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x89 = UINT32_MAX;
	volatile int8_t x90 = 1;
	volatile int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MIN;

	t13 = ((x89*x90)-(x91/x92));

	if (t13 != 4294967039U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x94 = -1LL;
	volatile uint8_t x95 = UINT8_MAX;
	int64_t t14 = 250026820944756663LL;

	t14 = ((x93*x94)-(x95/x96));

	if (t14 != 383LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x101 = -13;
	int64_t x103 = -2564577666370LL;
	int32_t x104 = -7;
	static volatile int64_t t15 = 115309520625598412LL;

	t15 = ((x101*x102)-(x103/x104));

	if (t15 != -366368236258LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x106 = 2;
	volatile uint8_t x107 = 1U;
	int32_t t16 = -30755;

	t16 = ((x105*x106)-(x107/x108));

	if (t16 != 10) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x109 = -1;
	int32_t x110 = -3147;
	volatile uint32_t x111 = UINT32_MAX;
	static volatile uint64_t x112 = 11620984LLU;
	uint64_t t17 = 7017379787LLU;

	t17 = ((x109*x110)-(x111/x112));

	if (t17 != 2778LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x113 = INT16_MIN;
	static int64_t x115 = -1LL;
	volatile uint64_t t18 = 82158342LLU;

	t18 = ((x113*x114)-(x115/x116));

	if (t18 != 7950373777077731327LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x117 = 0U;
	volatile uint16_t x118 = 1608U;
	int32_t x119 = -1;
	volatile int32_t t19 = 169;

	t19 = ((x117*x118)-(x119/x120));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x125 = INT8_MAX;
	int32_t x127 = -25018869;
	volatile int8_t x128 = INT8_MIN;

	t20 = ((x125*x126)-(x127/x128));

	if (t20 != 8127486) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x129 = 1U;
	uint16_t x131 = 21623U;
	int32_t x132 = -39303;
	int32_t t21 = 163;

	t21 = ((x129*x130)-(x131/x132));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x137 = INT16_MIN;
	int8_t x138 = 0;
	int8_t x139 = -1;

	t22 = ((x137*x138)-(x139/x140));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x150 = INT8_MAX;
	int8_t x152 = 4;
	volatile uint64_t t23 = 139250463984574559LLU;

	t23 = ((x149*x150)-(x151/x152));

	if (t23 != 18446744073709544881LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x153 = 2U;
	uint32_t x155 = 12242U;
	int8_t x156 = -3;
	volatile uint32_t t24 = 777973U;

	t24 = ((x153*x154)-(x155/x156));

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x163 = INT8_MIN;
	int16_t x164 = INT16_MIN;
	volatile int32_t t25 = 0;

	t25 = ((x161*x162)-(x163/x164));

	if (t25 != 1944440058) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x165 = UINT32_MAX;
	volatile int32_t x166 = INT32_MIN;
	static uint32_t x167 = UINT32_MAX;
	volatile int64_t x168 = INT64_MAX;
	int64_t t26 = -1032470303387LL;

	t26 = ((x165*x166)-(x167/x168));

	if (t26 != 2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x173 = INT8_MAX;
	int64_t x174 = -1LL;
	uint32_t x175 = 7850146U;
	int16_t x176 = INT16_MIN;
	int64_t t27 = 99LL;

	t27 = ((x173*x174)-(x175/x176));

	if (t27 != -127LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x181 = 1205U;
	int8_t x182 = 36;
	volatile uint16_t x183 = 13U;
	static volatile int64_t t28 = 2257543749928LL;

	t28 = ((x181*x182)-(x183/x184));

	if (t28 != 43393LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x193 = 10U;
	uint64_t x195 = 1586602545066968LLU;
	int32_t x196 = 3;
	uint64_t t29 = 2793LLU;

	t29 = ((x193*x194)-(x195/x196));

	if (t29 != 18446215206194529294LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x197 = UINT64_MAX;
	static uint8_t x198 = 53U;
	int32_t x199 = -1;
	int16_t x200 = -16243;
	static volatile uint64_t t30 = 1534915242688222LLU;

	t30 = ((x197*x198)-(x199/x200));

	if (t30 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x209 = 20U;
	static int32_t x211 = 7315;
	int16_t x212 = INT16_MAX;

	t31 = ((x209*x210)-(x211/x212));

	if (t31 != -466179989070020LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x217 = INT8_MAX;
	static uint16_t x218 = 0U;
	uint8_t x220 = 2U;

	t32 = ((x217*x218)-(x219/x220));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x221 = -1;
	int8_t x222 = 0;
	static int8_t x223 = -5;
	int32_t x224 = -1;

	t33 = ((x221*x222)-(x223/x224));

	if (t33 != -5) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x225 = INT8_MAX;
	volatile int8_t x227 = -1;
	int8_t x228 = INT8_MIN;

	t34 = ((x225*x226)-(x227/x228));

	if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x229 = -1;
	int64_t x231 = INT64_MAX;
	volatile int64_t x232 = -12LL;
	int64_t t35 = 6LL;

	t35 = ((x229*x230)-(x231/x232));

	if (t35 != 768614340699531750LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x233 = INT64_MIN;
	uint8_t x234 = 0U;
	volatile int8_t x236 = INT8_MAX;
	uint64_t t36 = 2306447133139823LLU;

	t36 = ((x233*x234)-(x235/x236));

	if (t36 != 18446744030713873241LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x237 = -30;
	volatile int16_t x238 = -1;
	int16_t x239 = INT16_MIN;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t37 = 4699;

	t37 = ((x237*x238)-(x239/x240));

	if (t37 != 30) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x242 = -22549366;
	uint16_t x243 = 27U;
	int8_t x244 = 45;
	volatile int32_t t38 = 1687;

	t38 = ((x241*x242)-(x243/x244));

	if (t38 != -67648098) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x245 = -1;
	int16_t x246 = INT16_MAX;
	static int32_t x247 = INT32_MIN;
	uint64_t x248 = 26154315388654203LLU;
	volatile uint64_t t39 = 5032330234130LLU;

	t39 = ((x245*x246)-(x247/x248));

	if (t39 != 18446744073709518144LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x249 = INT8_MIN;
	static uint64_t x250 = 6LLU;
	int16_t x251 = INT16_MIN;
	int16_t x252 = -1;
	uint64_t t40 = 2161487630681LLU;

	t40 = ((x249*x250)-(x251/x252));

	if (t40 != 18446744073709518080LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x254 = 256897LL;
	volatile uint8_t x255 = UINT8_MAX;
	uint16_t x256 = UINT16_MAX;
	volatile int64_t t41 = -398LL;

	t41 = ((x253*x254)-(x255/x256));

	if (t41 != -256897LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x257 = -9LL;
	uint64_t x258 = 0LLU;
	volatile int16_t x259 = INT16_MAX;
	volatile int16_t x260 = -2575;
	uint64_t t42 = 22084597LLU;

	t42 = ((x257*x258)-(x259/x260));

	if (t42 != 12LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x261 = 10500195LLU;
	static volatile uint8_t x262 = 1U;
	static int64_t x263 = INT64_MAX;
	volatile uint64_t t43 = 320419604LLU;

	t43 = ((x261*x262)-(x263/x264));

	if (t43 != 9223372036865276002LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x269 = INT32_MIN;
	uint64_t x270 = 94LLU;
	int16_t x272 = -1;
	volatile uint64_t t44 = 65079218747579LLU;

	t44 = ((x269*x270)-(x271/x272));

	if (t44 != 18446743872358511461LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x286 = 5921049;
	int16_t x288 = -8060;
	static int32_t t45 = -15784878;

	t45 = ((x285*x286)-(x287/x288));

	if (t45 != 5921045) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x289 = INT8_MIN;
	uint64_t x290 = 48778409862266520LLU;
	int8_t x291 = 1;
	int64_t x292 = INT64_MAX;

	t46 = ((x289*x290)-(x291/x292));

	if (t46 != 12203107611339437056LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x297 = 454U;
	static volatile uint8_t x298 = UINT8_MAX;
	uint32_t x300 = UINT32_MAX;
	volatile uint32_t t47 = 16014161U;

	t47 = ((x297*x298)-(x299/x300));

	if (t47 != 115770U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x301 = 1U;
	static int64_t x303 = -669349LL;
	uint8_t x304 = 3U;
	int64_t t48 = 8702746446736435LL;

	t48 = ((x301*x302)-(x303/x304));

	if (t48 != 223121LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x309 = -1LL;
	int16_t x311 = INT16_MIN;
	int64_t x312 = -5862148157929LL;
	static int64_t t49 = -1196588719437LL;

	t49 = ((x309*x310)-(x311/x312));

	if (t49 != -255LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x313 = INT16_MAX;
	volatile int32_t x314 = -1;
	static uint8_t x315 = 0U;
	volatile int32_t x316 = -6879;
	volatile int32_t t50 = 12;

	t50 = ((x313*x314)-(x315/x316));

	if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x317 = 208730356515088174LLU;
	static int32_t x318 = INT32_MIN;
	static int32_t x319 = INT32_MAX;
	volatile uint64_t t51 = 44192807230138519LLU;

	t51 = ((x317*x318)-(x319/x320));

	if (t51 != 6848264644126048255LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x321 = INT8_MAX;
	int64_t x322 = 2LL;
	volatile int64_t x323 = INT64_MIN;
	volatile uint64_t t52 = 415986784325973415LLU;

	t52 = ((x321*x322)-(x323/x324));

	if (t52 != 18446741092932080619LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x326 = 2;
	int16_t x327 = -1;
	volatile int16_t x328 = 19;
	int32_t t53 = -1;

	t53 = ((x325*x326)-(x327/x328));

	if (t53 != 131070) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x333 = 0;
	uint64_t x334 = 4885775LLU;
	int64_t x335 = INT64_MIN;
	int16_t x336 = INT16_MIN;
	volatile uint64_t t54 = 2841963012LLU;

	t54 = ((x333*x334)-(x335/x336));

	if (t54 != 18446462598732840960LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x339 = 1U;
	volatile int32_t t55 = 2726;

	t55 = ((x337*x338)-(x339/x340));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x345 = 13U;
	static int32_t x347 = -1;
	int8_t x348 = INT8_MIN;
	int64_t t56 = -1107436158623682LL;

	t56 = ((x345*x346)-(x347/x348));

	if (t56 != 65LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x349 = 486;
	static uint16_t x350 = UINT16_MAX;
	int8_t x351 = INT8_MAX;
	static int32_t t57 = 61821526;

	t57 = ((x349*x350)-(x351/x352));

	if (t57 != 31850137) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x353 = UINT32_MAX;
	int32_t x354 = -1;
	int64_t x355 = -1LL;
	uint32_t x356 = 136453271U;
	volatile int64_t t58 = 179079558820338LL;

	t58 = ((x353*x354)-(x355/x356));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x357 = -1LL;
	int16_t x358 = INT16_MAX;

	t59 = ((x357*x358)-(x359/x360));

	if (t59 != -32767LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x362 = 16574012U;
	int32_t x363 = 30;
	int64_t x364 = 40LL;
	int64_t t60 = -89805LL;

	t60 = ((x361*x362)-(x363/x364));

	if (t60 != 2981023972LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x373 = -99;
	uint8_t x375 = 31U;
	static volatile int64_t x376 = 263LL;

	t61 = ((x373*x374)-(x375/x376));

	if (t61 != -214929LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x377 = 4200140676LL;
	uint64_t x378 = 5LLU;
	uint16_t x379 = 764U;
	int64_t x380 = INT64_MAX;
	uint64_t t62 = 833LLU;

	t62 = ((x377*x378)-(x379/x380));

	if (t62 != 21000703380LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x385 = UINT32_MAX;
	int16_t x387 = 0;
	int8_t x388 = 31;
	static volatile int64_t t63 = 214LL;

	t63 = ((x385*x386)-(x387/x388));

	if (t63 != -4294967295LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x389 = 7740952LLU;
	volatile uint16_t x390 = UINT16_MAX;
	static volatile int16_t x391 = INT16_MIN;
	int64_t x392 = INT64_MIN;
	static uint64_t t64 = 6230399LLU;

	t64 = ((x389*x390)-(x391/x392));

	if (t64 != 507303289320LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x393 = 1U;
	volatile uint32_t x394 = 788378U;
	int32_t x395 = 46350022;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t65 = 118U;

	t65 = ((x393*x394)-(x395/x396));

	if (t65 != 788378U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x397 = -1;
	int32_t x398 = INT32_MAX;
	int32_t x399 = INT32_MAX;

	t66 = ((x397*x398)-(x399/x400));

	if (t66 != 2147478195U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x405 = INT8_MIN;
	static int32_t x406 = -90;
	volatile int8_t x408 = 28;

	t67 = ((x405*x406)-(x407/x408));

	if (t67 != 11524) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x409 = -1;
	static volatile uint16_t x410 = UINT16_MAX;
	uint64_t x411 = 2783LLU;
	static int8_t x412 = INT8_MIN;

	t68 = ((x409*x410)-(x411/x412));

	if (t68 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x413 = 6;
	static int16_t x414 = INT16_MAX;
	volatile int64_t x415 = INT64_MIN;
	volatile uint32_t x416 = UINT32_MAX;
	int64_t t69 = -4538LL;

	t69 = ((x413*x414)-(x415/x416));

	if (t69 != 2147680250LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x418 = -1;

	t70 = ((x417*x418)-(x419/x420));

	if (t70 != -1317624576693536466LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x426 = 1900183427LL;
	int64_t x427 = INT64_MIN;
	uint32_t x428 = UINT32_MAX;

	t71 = ((x425*x426)-(x427/x428));

	if (t71 != -62263063052288LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x429 = -42185;
	uint32_t x430 = 2526U;
	uint64_t x431 = 402436052448841LLU;
	static int8_t x432 = INT8_MAX;

	t72 = ((x429*x430)-(x431/x432));

	if (t72 != 18446740909110145045LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x433 = UINT64_MAX;
	static int16_t x434 = INT16_MIN;
	uint32_t x435 = 25260443U;
	volatile int32_t x436 = 3;
	static uint64_t t73 = 3LLU;

	t73 = ((x433*x434)-(x435/x436));

	if (t73 != 18446744073701164237LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x437 = 15;
	uint8_t x438 = 14U;
	int8_t x440 = 4;
	volatile int32_t t74 = 46;

	t74 = ((x437*x438)-(x439/x440));

	if (t74 != 8402) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x441 = 19333503U;
	int64_t x443 = INT64_MIN;
	int32_t x444 = -4;

	t75 = ((x441*x442)-(x443/x444));

	if (t75 != -2305843007066210304LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x445 = 1;
	int16_t x448 = INT16_MIN;
	volatile int32_t t76 = 5757;

	t76 = ((x445*x446)-(x447/x448));

	if (t76 != 2147483646) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x457 = 12120452U;
	int16_t x458 = INT16_MIN;
	int8_t x459 = 40;
	int16_t x460 = INT16_MIN;
	volatile uint32_t t77 = 209898035U;

	t77 = ((x457*x458)-(x459/x460));

	if (t77 != 2268987392U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x463 = 6457854519219LLU;
	int16_t x464 = INT16_MIN;

	t78 = ((x461*x462)-(x463/x464));

	if (t78 != 14398877853135LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x465 = -1;
	static int16_t x466 = INT16_MIN;
	volatile int32_t x467 = INT32_MIN;
	uint16_t x468 = UINT16_MAX;
	int32_t t79 = 299272086;

	t79 = ((x465*x466)-(x467/x468));

	if (t79 != 65536) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x473 = 1;
	uint32_t x474 = 2861438U;
	static int16_t x476 = 359;
	static volatile uint32_t t80 = 718224U;

	t80 = ((x473*x474)-(x475/x476));

	if (t80 != 2861438U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x488 = 2U;
	volatile uint32_t t81 = 778027870U;

	t81 = ((x485*x486)-(x487/x488));

	if (t81 != 32768U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x489 = -1LL;
	volatile int64_t x491 = INT64_MIN;
	int16_t x492 = INT16_MIN;
	volatile int64_t t82 = 19714769LL;

	t82 = ((x489*x490)-(x491/x492));

	if (t82 != -281474973216753LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x493 = INT16_MIN;
	uint64_t x494 = 6679947990793232799LLU;
	int32_t x495 = INT32_MIN;
	uint32_t x496 = UINT32_MAX;
	static uint64_t t83 = 15533756093968990LLU;

	t83 = ((x493*x494)-(x495/x496));

	if (t83 != 529416324887117824LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x497 = INT8_MAX;
	static volatile int64_t x498 = 3LL;
	int8_t x499 = 20;
	volatile uint32_t x500 = UINT32_MAX;

	t84 = ((x497*x498)-(x499/x500));

	if (t84 != 381LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x501 = INT16_MIN;
	volatile int64_t x503 = 706263852LL;
	static int16_t x504 = -9602;
	volatile int64_t t85 = 217176757151LL;

	t85 = ((x501*x502)-(x503/x504));

	if (t85 != -733241519LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x509 = 527113485963027LLU;
	int8_t x510 = INT8_MIN;
	volatile uint16_t x511 = 8881U;
	volatile int32_t x512 = INT32_MAX;

	t86 = ((x509*x510)-(x511/x512));

	if (t86 != 18379273547506284160LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x513 = INT8_MIN;
	uint16_t x514 = 1U;
	volatile int16_t x515 = INT16_MAX;
	volatile uint32_t x516 = 248563U;

	t87 = ((x513*x514)-(x515/x516));

	if (t87 != 4294967168U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x517 = 3U;
	static uint64_t x518 = 332LLU;
	int32_t x519 = INT32_MIN;
	uint16_t x520 = 6064U;
	static uint64_t t88 = 60939265696LLU;

	t88 = ((x517*x518)-(x519/x520));

	if (t88 != 355132LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x521 = -1;
	uint32_t x524 = 5449U;
	uint32_t t89 = 7592U;

	t89 = ((x521*x522)-(x523/x524));

	if (t89 != 4294179085U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x525 = 8017112349895LLU;
	int16_t x526 = INT16_MAX;
	int64_t x527 = -4766746971846359LL;
	uint16_t x528 = UINT16_MAX;

	t90 = ((x525*x526)-(x527/x528));

	if (t90 != 262696793104905884LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x531 = UINT64_MAX;

	t91 = ((x529*x530)-(x531/x532));

	if (t91 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x533 = INT32_MIN;
	int64_t x534 = -1LL;

	t92 = ((x533*x534)-(x535/x536));

	if (t92 != 2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x537 = INT8_MAX;
	int8_t x538 = INT8_MIN;
	int8_t x539 = -2;
	int32_t x540 = INT32_MIN;
	static int32_t t93 = 111659;

	t93 = ((x537*x538)-(x539/x540));

	if (t93 != -16256) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x541 = 3;
	static volatile uint16_t x542 = 12U;
	uint16_t x543 = 7001U;
	static uint64_t x544 = 4703983992LLU;

	t94 = ((x541*x542)-(x543/x544));

	if (t94 != 36LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x547 = 251U;
	static uint32_t x548 = 270527096U;
	volatile uint32_t t95 = 263884U;

	t95 = ((x545*x546)-(x547/x548));

	if (t95 != 32768U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x553 = UINT16_MAX;
	int16_t x554 = -1;
	volatile uint16_t x555 = 22U;
	int8_t x556 = INT8_MIN;
	int32_t t96 = -6003528;

	t96 = ((x553*x554)-(x555/x556));

	if (t96 != -65535) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x557 = 1667283LL;
	static int8_t x559 = -1;
	static uint32_t x560 = UINT32_MAX;
	volatile int64_t t97 = 32562LL;

	t97 = ((x557*x558)-(x559/x560));

	if (t97 != -54633529345LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x561 = -30;
	volatile uint64_t x563 = 1082459578737LLU;
	int64_t x564 = -1LL;
	volatile uint64_t t98 = 25994LLU;

	t98 = ((x561*x562)-(x563/x564));

	if (t98 != 30LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x570 = 62U;
	int32_t x571 = 1106644;
	volatile int16_t x572 = -1;
	static volatile int32_t t99 = 14758657;

	t99 = ((x569*x570)-(x571/x572));

	if (t99 != 1107016) { NG(); } else { ; }
	
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


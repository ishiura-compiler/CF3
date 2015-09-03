#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = INT8_MIN;
int16_t x6 = -440;
int8_t x17 = INT8_MAX;
uint16_t x24 = UINT16_MAX;
int32_t x25 = -1;
int16_t x30 = INT16_MAX;
uint8_t x32 = UINT8_MAX;
uint64_t x38 = 110159793040009LLU;
uint64_t x39 = UINT64_MAX;
uint8_t x45 = 55U;
static uint64_t x52 = UINT64_MAX;
uint32_t t14 = 3U;
static int32_t x65 = INT32_MIN;
int16_t x67 = INT16_MAX;
uint64_t t15 = 104262267222LLU;
uint32_t x78 = 438181927U;
int64_t x90 = 43291808LL;
int16_t x94 = -290;
static volatile uint64_t x99 = 24LLU;
volatile uint16_t x103 = 2178U;
volatile int64_t t23 = 2766LL;
static volatile uint32_t t24 = 411786U;
int32_t x109 = -668148720;
uint64_t t26 = 113990391LLU;
int8_t x126 = INT8_MAX;
static int32_t x128 = -1;
uint8_t x132 = 3U;
static uint16_t x133 = 2136U;
uint32_t x138 = UINT32_MAX;
static uint64_t x142 = UINT64_MAX;
int32_t x143 = -1;
volatile int64_t t33 = 391LL;
int8_t x157 = 2;
static volatile uint64_t x176 = 1140802402LLU;
int8_t x184 = -1;
static int64_t x196 = -1LL;
uint64_t t43 = 21768LLU;
int64_t x204 = INT64_MIN;
static int32_t x214 = INT32_MAX;
uint32_t x215 = UINT32_MAX;
volatile uint32_t t48 = 31U;
static uint32_t t50 = 93520011U;
volatile int64_t x235 = INT64_MIN;
static int16_t x242 = -1;
uint64_t x244 = 575274053886LLU;
static volatile uint32_t x252 = UINT32_MAX;
int32_t x260 = -115212;
int8_t x263 = INT8_MIN;
int32_t x272 = INT32_MIN;
int8_t x274 = 1;
uint8_t x279 = 3U;
static int32_t x280 = -985422;
volatile int64_t x281 = -55465929072123774LL;
int64_t x290 = 356719LL;
static int8_t x291 = INT8_MIN;
volatile int8_t x293 = 23;
int16_t x295 = 289;
int32_t x301 = 0;
volatile int8_t x305 = 1;
int64_t t69 = -116093908LL;
int32_t x315 = 16867;
int32_t x316 = -1;
static uint16_t x317 = UINT16_MAX;
int64_t x330 = -384750448226637LL;
int8_t x333 = INT8_MIN;
uint32_t x335 = UINT32_MAX;
int16_t x339 = -8260;
int16_t x341 = 0;
int16_t x348 = 1;
volatile int8_t x350 = INT8_MAX;
volatile uint32_t x357 = 1155U;
static uint32_t x359 = 59U;
int16_t x366 = INT16_MIN;
volatile uint64_t t82 = 1LLU;
int16_t x384 = INT16_MIN;
int16_t x393 = 991;
uint64_t x399 = 475997893LLU;
volatile int64_t t90 = -465053LL;
int8_t x408 = 3;
int8_t x409 = 11;
int16_t x411 = INT16_MIN;
uint64_t x412 = 64708099735273142LLU;
volatile int16_t x418 = INT16_MIN;
volatile int64_t x427 = 434874049983144LL;
volatile int32_t x430 = -1;
volatile uint32_t t97 = 5U;
int64_t x433 = -7LL;
volatile int64_t t99 = -1LL;


void f0(void) {
	int16_t x1 = 625;
	int16_t x2 = 145;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -10475;

	t0 = ((x1+(x2+x3))^x4);

	if (t0 != -32126) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint8_t x7 = 67U;
	uint64_t x8 = 1282333LLU;
	uint64_t t1 = 199243975258116LLU;

	t1 = ((x5+(x6+x7))^x8);

	if (t1 != 18446744073708269463LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 14146U;
	uint64_t x14 = UINT64_MAX;
	int8_t x15 = INT8_MIN;
	static int8_t x16 = 23;
	uint64_t t2 = 126240504526LLU;

	t2 = ((x13+(x14+x15))^x16);

	if (t2 != 14038LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MAX;
	int8_t x19 = -1;
	static int16_t x20 = INT16_MIN;
	int32_t t3 = 1033;

	t3 = ((x17+(x18+x19))^x20);

	if (t3 != -32515) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 9;
	int8_t x22 = INT8_MIN;
	static uint8_t x23 = 0U;
	int32_t t4 = -1;

	t4 = ((x21+(x22+x23))^x24);

	if (t4 != -65418) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x26 = UINT64_MAX;
	volatile int32_t x27 = -1;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t5 = 244LLU;

	t5 = ((x25+(x26+x27))^x28);

	if (t5 != 125LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	static uint8_t x31 = 1U;
	volatile int64_t t6 = -4364495306LL;

	t6 = ((x29+(x30+x31))^x32);

	if (t6 != -9223372036854742785LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x33 = 690396496LLU;
	uint8_t x34 = UINT8_MAX;
	volatile int8_t x35 = -1;
	uint16_t x36 = 12845U;
	uint64_t t7 = 79847833521855924LLU;

	t7 = ((x33+(x34+x35))^x36);

	if (t7 != 690400355LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 3U;
	int64_t x40 = INT64_MAX;
	static volatile uint64_t t8 = 741643631472726362LLU;

	t8 = ((x37+(x38+x39))^x40);

	if (t8 != 9223261877061735796LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	static uint8_t x42 = 12U;
	static volatile int16_t x43 = INT16_MAX;
	int16_t x44 = INT16_MAX;
	volatile int32_t t9 = -23;

	t9 = ((x41+(x42+x43))^x44);

	if (t9 != 65269) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MAX;
	int8_t x48 = INT8_MIN;
	volatile int32_t t10 = -3630;

	t10 = ((x45+(x46+x47))^x48);

	if (t10 != -74) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MIN;
	int32_t x50 = 42265540;
	uint64_t x51 = 4131167496169LLU;
	uint64_t t11 = 764518006095966760LLU;

	t11 = ((x49+(x50+x51))^x52);

	if (t11 != 18446739944647273554LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -390;
	int16_t x54 = -1;
	static uint16_t x55 = 58U;
	uint16_t x56 = UINT16_MAX;
	int32_t t12 = 124238535;

	t12 = ((x53+(x54+x55))^x56);

	if (t12 != -65204) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 61;
	int8_t x58 = 10;
	uint16_t x59 = 7U;
	uint32_t x60 = UINT32_MAX;
	static volatile uint32_t t13 = 188483504U;

	t13 = ((x57+(x58+x59))^x60);

	if (t13 != 4294967217U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 681426697U;
	uint32_t x62 = 38U;
	static volatile int32_t x63 = INT32_MIN;
	uint16_t x64 = UINT16_MAX;

	t14 = ((x61+(x62+x63))^x64);

	if (t14 != 2828878032U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x66 = 2370369801LLU;
	static int16_t x68 = INT16_MAX;

	t15 = ((x65+(x66+x67))^x68);

	if (t15 != 222889719LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x69 = UINT8_MAX;
	uint64_t x70 = 913174LLU;
	static int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	uint64_t t16 = 15331330527080LLU;

	t16 = ((x69+(x70+x71))^x72);

	if (t16 != 9223372036855656469LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = 28541;
	uint64_t x79 = 49420639022781469LLU;
	uint8_t x80 = 10U;
	static uint64_t t17 = 984347652956106691LLU;

	t17 = ((x77+(x78+x79))^x80);

	if (t17 != 49420639460991947LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	uint8_t x82 = 29U;
	uint32_t x83 = 4U;
	volatile uint16_t x84 = UINT16_MAX;
	volatile int64_t t18 = -20288328237978LL;

	t18 = ((x81+(x82+x83))^x84);

	if (t18 != -9223372036854710306LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 340734171U;
	int16_t x86 = INT16_MIN;
	volatile uint8_t x87 = UINT8_MAX;
	int8_t x88 = 12;
	uint32_t t19 = 186U;

	t19 = ((x85+(x86+x87))^x88);

	if (t19 != 340701654U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 669U;
	uint64_t x91 = 0LLU;
	uint16_t x92 = 32U;
	static uint64_t t20 = 81600689030163LLU;

	t20 = ((x89+(x90+x91))^x92);

	if (t20 != 43292445LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x93 = 29U;
	static uint16_t x95 = 13064U;
	uint32_t x96 = 47653558U;
	volatile uint32_t t21 = 464U;

	t21 = ((x93+(x94+x95))^x96);

	if (t21 != 47648949U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -378;
	volatile int16_t x98 = -57;
	int64_t x100 = 1LL;
	volatile uint64_t t22 = 109144472304571LLU;

	t22 = ((x97+(x98+x99))^x100);

	if (t22 != 18446744073709551204LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x101 = UINT8_MAX;
	int16_t x102 = -1;
	volatile int64_t x104 = INT64_MIN;

	t23 = ((x101+(x102+x103))^x104);

	if (t23 != -9223372036854773376LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 17633U;
	int32_t x106 = -361970;
	uint8_t x107 = UINT8_MAX;
	uint8_t x108 = UINT8_MAX;

	t24 = ((x105+(x106+x107))^x108);

	if (t24 != 4294622993U) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x110 = INT16_MAX;
	volatile uint8_t x111 = 98U;
	int8_t x112 = 0;
	static int32_t t25 = -2;

	t25 = ((x109+(x110+x111))^x112);

	if (t25 != -668115855) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 3LLU;
	static int8_t x114 = 1;
	int8_t x115 = INT8_MIN;
	volatile int8_t x116 = -2;

	t26 = ((x113+(x114+x115))^x116);

	if (t26 != 122LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 1U;
	uint32_t x118 = UINT32_MAX;
	int64_t x119 = 2624LL;
	uint8_t x120 = 3U;
	int64_t t27 = 594909965561LL;

	t27 = ((x117+(x118+x119))^x120);

	if (t27 != 4294969923LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = UINT32_MAX;
	int8_t x127 = INT8_MAX;
	static uint32_t t28 = 544U;

	t28 = ((x125+(x126+x127))^x128);

	if (t28 != 4294967042U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x129 = 0;
	uint64_t x130 = UINT64_MAX;
	int32_t x131 = INT32_MIN;
	static uint64_t t29 = 41918144LLU;

	t29 = ((x129+(x130+x131))^x132);

	if (t29 != 18446744071562067964LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x134 = 115419016834847LLU;
	uint32_t x135 = 3U;
	uint8_t x136 = 86U;
	volatile uint64_t t30 = 489936LLU;

	t30 = ((x133+(x134+x135))^x136);

	if (t30 != 115419016836908LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -1LL;
	static uint64_t x139 = UINT64_MAX;
	int16_t x140 = -1;
	static uint64_t t31 = 4196LLU;

	t31 = ((x137+(x138+x139))^x140);

	if (t31 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MAX;
	static int16_t x144 = 13;
	uint64_t t32 = 30401229901811292LLU;

	t32 = ((x141+(x142+x143))^x144);

	if (t32 != 112LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = -1;
	int16_t x146 = INT16_MAX;
	static int64_t x147 = INT64_MIN;
	uint32_t x148 = 3U;

	t33 = ((x145+(x146+x147))^x148);

	if (t33 != -9223372036854743043LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = -1LL;
	static int16_t x150 = INT16_MAX;
	volatile int64_t x151 = INT64_MIN;
	int64_t x152 = -1LL;
	int64_t t34 = -326719086633965309LL;

	t34 = ((x149+(x150+x151))^x152);

	if (t34 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = -3;
	uint64_t x154 = 185152696137LLU;
	uint32_t x155 = 5U;
	int8_t x156 = 2;
	uint64_t t35 = 3LLU;

	t35 = ((x153+(x154+x155))^x156);

	if (t35 != 185152696137LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x158 = 0;
	volatile uint64_t x159 = 13495438326621LLU;
	uint32_t x160 = UINT32_MAX;
	volatile uint64_t t36 = 6LLU;

	t36 = ((x157+(x158+x159))^x160);

	if (t36 != 13498431128736LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = 423593662U;
	static uint8_t x162 = 3U;
	volatile int16_t x163 = INT16_MIN;
	int16_t x164 = 43;
	uint32_t t37 = 18333945U;

	t37 = ((x161+(x162+x163))^x164);

	if (t37 != 423560938U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x169 = 38U;
	static int16_t x170 = INT16_MIN;
	int64_t x171 = -1LL;
	int8_t x172 = 1;
	int64_t t38 = 104185208486659LL;

	t38 = ((x169+(x170+x171))^x172);

	if (t38 != -32732LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x173 = 13149U;
	volatile int8_t x174 = -1;
	uint32_t x175 = 2U;
	uint64_t t39 = 15803458580LLU;

	t39 = ((x173+(x174+x175))^x176);

	if (t39 != 1140813884LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = -25;
	int64_t x182 = INT64_MIN;
	static uint32_t x183 = 386187U;
	int64_t t40 = -160546370006195348LL;

	t40 = ((x181+(x182+x183))^x184);

	if (t40 != 9223372036854389645LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = -788871;
	uint64_t x186 = UINT64_MAX;
	static volatile int8_t x187 = INT8_MAX;
	int8_t x188 = INT8_MIN;
	uint64_t t41 = 2340236LLU;

	t41 = ((x185+(x186+x187))^x188);

	if (t41 != 788855LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x189 = INT8_MIN;
	static int16_t x190 = -1;
	static int8_t x191 = -1;
	uint8_t x192 = UINT8_MAX;
	static int32_t t42 = -151604102;

	t42 = ((x189+(x190+x191))^x192);

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x193 = 1U;
	uint64_t x194 = 77912239458LLU;
	int16_t x195 = INT16_MIN;

	t43 = ((x193+(x194+x195))^x196);

	if (t43 != 18446743995797344924LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x197 = INT16_MIN;
	int8_t x198 = INT8_MIN;
	uint16_t x199 = 0U;
	int8_t x200 = INT8_MAX;
	int32_t t44 = -1;

	t44 = ((x197+(x198+x199))^x200);

	if (t44 != -32769) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = -1;
	uint32_t x202 = UINT32_MAX;
	static volatile int64_t x203 = 28994656818LL;
	int64_t t45 = -22658920249865LL;

	t45 = ((x201+(x202+x203))^x204);

	if (t45 != -9223372003565151696LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x205 = 1616U;
	volatile int64_t x206 = 3568LL;
	int64_t x207 = -1LL;
	int16_t x208 = 69;
	int64_t t46 = 222235760892214714LL;

	t46 = ((x205+(x206+x207))^x208);

	if (t46 != 5242LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x209 = UINT64_MAX;
	int16_t x210 = INT16_MAX;
	int8_t x211 = -3;
	static volatile int32_t x212 = INT32_MIN;
	volatile uint64_t t47 = 182LLU;

	t47 = ((x209+(x210+x211))^x212);

	if (t47 != 18446744071562100731LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x213 = 155U;
	volatile int8_t x216 = 0;

	t48 = ((x213+(x214+x215))^x216);

	if (t48 != 2147483801U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x217 = -231;
	int64_t x218 = INT64_MIN;
	static volatile uint8_t x219 = UINT8_MAX;
	int64_t x220 = -57LL;
	int64_t t49 = 4LL;

	t49 = ((x217+(x218+x219))^x220);

	if (t49 != 9223372036854775775LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MIN;
	volatile int8_t x223 = -1;
	uint32_t x224 = 15407886U;

	t50 = ((x221+(x222+x223))^x224);

	if (t50 != 4279526513U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x225 = 9U;
	int8_t x226 = INT8_MIN;
	uint64_t x227 = UINT64_MAX;
	static int32_t x228 = INT32_MIN;
	static volatile uint64_t t51 = 276645685954083LLU;

	t51 = ((x225+(x226+x227))^x228);

	if (t51 != 2147483528LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x229 = INT16_MIN;
	uint32_t x230 = UINT32_MAX;
	int16_t x231 = INT16_MIN;
	static int16_t x232 = INT16_MAX;
	static uint32_t t52 = 1917752826U;

	t52 = ((x229+(x230+x231))^x232);

	if (t52 != 4294868992U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = -1;
	int16_t x234 = 6189;
	uint32_t x236 = 1912513511U;
	int64_t t53 = 36131388LL;

	t53 = ((x233+(x234+x235))^x236);

	if (t53 != -9223372034942256181LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x237 = 1U;
	volatile int16_t x238 = INT16_MAX;
	volatile int8_t x239 = 3;
	static int32_t x240 = INT32_MAX;
	int32_t t54 = 7970;

	t54 = ((x237+(x238+x239))^x240);

	if (t54 != 2147450876) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x241 = 2U;
	static int64_t x243 = -1LL;
	uint64_t t55 = 436052110LLU;

	t55 = ((x241+(x242+x243))^x244);

	if (t55 != 575274053886LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MIN;
	int16_t x250 = INT16_MIN;
	int8_t x251 = -1;
	volatile uint32_t t56 = 65511U;

	t56 = ((x249+(x250+x251))^x252);

	if (t56 != 65536U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x257 = 16;
	uint32_t x258 = 10829U;
	int32_t x259 = 17;
	volatile uint32_t t57 = 113911519U;

	t57 = ((x257+(x258+x259))^x260);

	if (t57 != 4294842266U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x261 = INT16_MAX;
	uint8_t x262 = UINT8_MAX;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t58 = -11;

	t58 = ((x261+(x262+x263))^x264);

	if (t58 != -65410) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = INT32_MIN;
	uint8_t x266 = UINT8_MAX;
	uint16_t x267 = 13U;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t59 = -39;

	t59 = ((x265+(x266+x267))^x268);

	if (t59 != 2147451148) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x269 = 114224491368615125LLU;
	int32_t x270 = -1;
	static volatile int16_t x271 = 0;
	uint64_t t60 = 99243LLU;

	t60 = ((x269+(x270+x271))^x272);

	if (t60 != 18332519583168924884LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x273 = UINT32_MAX;
	int32_t x275 = -1;
	static int64_t x276 = 211939051LL;
	volatile int64_t t61 = 1227992554896LL;

	t61 = ((x273+(x274+x275))^x276);

	if (t61 != 4083028244LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = -1;
	static volatile int8_t x278 = INT8_MAX;
	volatile int32_t t62 = 1;

	t62 = ((x277+(x278+x279))^x280);

	if (t62 != -985549) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x282 = 973905U;
	static int64_t x283 = -1LL;
	uint8_t x284 = UINT8_MAX;
	volatile int64_t t63 = -208LL;

	t63 = ((x281+(x282+x283))^x284);

	if (t63 != -55465929071150035LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x285 = INT16_MIN;
	volatile uint32_t x286 = 337U;
	uint16_t x287 = 4U;
	int8_t x288 = -5;
	uint32_t t64 = 1494U;

	t64 = ((x285+(x286+x287))^x288);

	if (t64 != 32430U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = -1;
	int8_t x292 = INT8_MIN;
	int64_t t65 = 70LL;

	t65 = ((x289+(x290+x291))^x292);

	if (t65 != -356498LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x294 = INT16_MIN;
	volatile int8_t x296 = -1;
	volatile int32_t t66 = -59020284;

	t66 = ((x293+(x294+x295))^x296);

	if (t66 != 32455) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x302 = INT32_MIN;
	uint16_t x303 = UINT16_MAX;
	int32_t x304 = -1;
	int32_t t67 = 63495;

	t67 = ((x301+(x302+x303))^x304);

	if (t67 != 2147418112) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x306 = UINT64_MAX;
	uint64_t x307 = 32103457578493484LLU;
	volatile int32_t x308 = INT32_MAX;
	uint64_t t68 = 32006983LLU;

	t68 = ((x305+(x306+x307))^x308);

	if (t68 != 32103458080872915LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = INT16_MIN;
	int16_t x310 = INT16_MIN;
	uint16_t x311 = 4U;
	int64_t x312 = INT64_MAX;

	t69 = ((x309+(x310+x311))^x312);

	if (t69 != -9223372036854710277LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x313 = -1;
	uint32_t x314 = 880U;
	volatile uint32_t t70 = 17U;

	t70 = ((x313+(x314+x315))^x316);

	if (t70 != 4294949549U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x318 = 30639U;
	static int16_t x319 = INT16_MIN;
	int64_t x320 = 45970058669LL;
	volatile int64_t t71 = -206LL;

	t71 = ((x317+(x318+x319))^x320);

	if (t71 != 45970070019LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x321 = 1874U;
	volatile int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MAX;
	int64_t x324 = INT64_MIN;
	int64_t t72 = 2188029674288LL;

	t72 = ((x321+(x322+x323))^x324);

	if (t72 != 9223372034707294161LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = -597944059;
	int32_t x326 = INT32_MIN;
	volatile uint64_t x327 = 235053108477898LLU;
	static int8_t x328 = INT8_MIN;
	uint64_t t73 = 15675991LLU;

	t73 = ((x325+(x326+x327))^x328);

	if (t73 != 18446509023346501455LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = INT16_MIN;
	int8_t x331 = INT8_MAX;
	int32_t x332 = -1;
	int64_t t74 = 9122829988247LL;

	t74 = ((x329+(x330+x331))^x332);

	if (t74 != 384750448259277LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x334 = INT8_MAX;
	int64_t x336 = INT64_MIN;
	int64_t t75 = -217602445156LL;

	t75 = ((x333+(x334+x335))^x336);

	if (t75 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = -1LL;
	volatile int8_t x338 = INT8_MIN;
	uint8_t x340 = 2U;
	int64_t t76 = 216734814LL;

	t76 = ((x337+(x338+x339))^x340);

	if (t76 != -8391LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x342 = INT64_MIN;
	static int64_t x343 = INT64_MAX;
	static uint32_t x344 = 1568172658U;
	static volatile int64_t t77 = 2887LL;

	t77 = ((x341+(x342+x343))^x344);

	if (t77 != -1568172659LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = -3991;
	static int16_t x346 = INT16_MIN;
	volatile uint32_t x347 = 1492483U;
	static volatile uint32_t t78 = 853U;

	t78 = ((x345+(x346+x347))^x348);

	if (t78 != 1455725U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = INT16_MIN;
	int64_t x351 = 181696071951132LL;
	int8_t x352 = -1;
	static int64_t t79 = 8428452LL;

	t79 = ((x349+(x350+x351))^x352);

	if (t79 != -181696071918492LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x358 = 1716LLU;
	int64_t x360 = INT64_MIN;
	uint64_t t80 = 32091791481832454LLU;

	t80 = ((x357+(x358+x359))^x360);

	if (t80 != 9223372036854778738LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x361 = -99;
	static uint16_t x362 = UINT16_MAX;
	volatile int16_t x363 = 4;
	uint64_t x364 = UINT64_MAX;
	uint64_t t81 = 2162LLU;

	t81 = ((x361+(x362+x363))^x364);

	if (t81 != 18446744073709486175LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x365 = 5416;
	int32_t x367 = INT32_MAX;
	uint64_t x368 = UINT64_MAX;

	t82 = ((x365+(x366+x367))^x368);

	if (t82 != 18446744071562095320LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x373 = -1LL;
	volatile uint8_t x374 = 5U;
	int16_t x375 = -1;
	static int8_t x376 = INT8_MAX;
	volatile int64_t t83 = 2818834LL;

	t83 = ((x373+(x374+x375))^x376);

	if (t83 != 124LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x377 = INT8_MIN;
	volatile int16_t x378 = INT16_MAX;
	int32_t x379 = INT32_MIN;
	int16_t x380 = -2;
	static volatile int32_t t84 = -127807;

	t84 = ((x377+(x378+x379))^x380);

	if (t84 != 2147451009) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x381 = -18;
	uint32_t x382 = 23350163U;
	static uint64_t x383 = UINT64_MAX;
	uint64_t t85 = 3022660LLU;

	t85 = ((x381+(x382+x383))^x384);

	if (t85 != 18446744073686207360LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x385 = -1LL;
	int16_t x386 = -1;
	int16_t x387 = -9;
	static int16_t x388 = -19;
	static int64_t t86 = -1696LL;

	t86 = ((x385+(x386+x387))^x388);

	if (t86 != 24LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x389 = UINT16_MAX;
	int16_t x390 = -1;
	static int8_t x391 = 1;
	int8_t x392 = -1;
	static int32_t t87 = -2;

	t87 = ((x389+(x390+x391))^x392);

	if (t87 != -65536) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x394 = 11381U;
	volatile int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MAX;
	volatile int64_t t88 = -370049009609917907LL;

	t88 = ((x393+(x394+x395))^x396);

	if (t88 != 9223372036854763563LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = 5;
	volatile uint16_t x400 = 748U;
	volatile uint64_t t89 = 52944135LLU;

	t89 = ((x397+(x398+x399))^x400);

	if (t89 != 475997350LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = 1221;
	volatile int16_t x402 = -1;
	static int8_t x403 = INT8_MAX;
	int64_t x404 = -5640LL;

	t90 = ((x401+(x402+x403))^x404);

	if (t90 != -4933LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x405 = 1;
	static int8_t x406 = INT8_MIN;
	int64_t x407 = -1LL;
	int64_t t91 = -136834394992402577LL;

	t91 = ((x405+(x406+x407))^x408);

	if (t91 != -125LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x410 = 1580197U;
	uint64_t t92 = 8996086985968805599LLU;

	t92 = ((x409+(x410+x411))^x412);

	if (t92 != 64708099735822854LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x413 = 871303264LLU;
	int16_t x414 = 70;
	int8_t x415 = 0;
	volatile int16_t x416 = INT16_MIN;
	volatile uint64_t t93 = 519285LLU;

	t93 = ((x413+(x414+x415))^x416);

	if (t93 != 18446744072838219942LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x417 = 0;
	int32_t x419 = -1;
	int16_t x420 = 1;
	int32_t t94 = -210218;

	t94 = ((x417+(x418+x419))^x420);

	if (t94 != -32770) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x421 = 1;
	int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	uint8_t x424 = 17U;
	volatile int32_t t95 = -1;

	t95 = ((x421+(x422+x423))^x424);

	if (t95 != -32880) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x425 = 126U;
	uint32_t x426 = 134U;
	int32_t x428 = INT32_MIN;
	int64_t t96 = -679441111LL;

	t96 = ((x425+(x426+x427))^x428);

	if (t96 != -434876154809428LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x429 = 20U;
	static int32_t x431 = 171096152;
	uint32_t x432 = UINT32_MAX;

	t97 = ((x429+(x430+x431))^x432);

	if (t97 != 4123871124U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x434 = INT16_MIN;
	static volatile uint32_t x435 = 1945149U;
	uint8_t x436 = UINT8_MAX;
	static volatile int64_t t98 = -1423983LL;

	t98 = ((x433+(x434+x435))^x436);

	if (t98 != 1912521LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x437 = -1;
	uint32_t x438 = 104U;
	static int16_t x439 = 2748;
	int64_t x440 = INT64_MIN;

	t99 = ((x437+(x438+x439))^x440);

	if (t99 != -9223372036854772957LL) { NG(); } else { ; }
	
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


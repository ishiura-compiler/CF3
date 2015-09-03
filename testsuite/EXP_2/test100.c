#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = 0;
volatile uint64_t x19 = 22700666469LLU;
int32_t t3 = 7040903;
static int16_t x22 = -1;
volatile int32_t t5 = -3;
int16_t x33 = INT16_MIN;
static volatile uint32_t x35 = 32472782U;
uint64_t x38 = 1LLU;
int32_t t7 = -88;
static int32_t x45 = -3290680;
uint64_t x49 = UINT64_MAX;
volatile int32_t x50 = INT32_MIN;
int32_t t10 = -1550596;
int64_t x58 = -1LL;
static int16_t x63 = -497;
int64_t x66 = INT64_MIN;
int8_t x73 = -17;
static int16_t x75 = -1;
uint32_t x87 = UINT32_MAX;
volatile int32_t t18 = 127;
volatile int64_t x105 = 2997059LL;
int8_t x110 = 0;
volatile int32_t t22 = 57;
volatile int16_t x117 = INT16_MIN;
uint16_t x125 = UINT16_MAX;
uint16_t x126 = 0U;
int64_t x128 = INT64_MIN;
volatile int32_t t25 = 1024560342;
int64_t x132 = INT64_MAX;
int32_t t26 = 10346;
uint64_t x134 = 6497LLU;
int64_t x144 = INT64_MAX;
int8_t x145 = -9;
volatile int64_t x150 = -1LL;
uint8_t x155 = UINT8_MAX;
int8_t x156 = -10;
int64_t x175 = -3564833144LL;
volatile uint64_t x178 = UINT64_MAX;
uint8_t x181 = 18U;
int32_t x184 = 10;
volatile int64_t x185 = -4344565266066398LL;
int64_t x187 = 10401018852552LL;
static uint8_t x189 = 3U;
static uint64_t x190 = 62587810615346LLU;
int64_t x194 = -1LL;
int8_t x204 = INT8_MAX;
int16_t x208 = -1;
volatile int32_t t44 = 459;
uint64_t x234 = 6LLU;
int32_t x237 = INT32_MIN;
int16_t x245 = -817;
int64_t x254 = -1LL;
int8_t x256 = 59;
int8_t x261 = 7;
volatile int32_t x262 = 622;
volatile int8_t x264 = INT8_MAX;
uint32_t x269 = 1238685472U;
int16_t x273 = -1;
volatile int32_t t56 = 324850;
int16_t x278 = INT16_MIN;
volatile int32_t t57 = 10;
uint64_t x297 = 9LLU;
static int32_t t60 = -1;
int32_t x316 = INT32_MAX;
volatile int32_t t66 = -13;
static int8_t x335 = INT8_MIN;
int32_t x338 = -27805344;
uint32_t x358 = UINT32_MAX;
uint16_t x362 = 61U;
int32_t x370 = -287354;
int8_t x387 = INT8_MAX;
int32_t x388 = INT32_MAX;
int32_t x389 = 12370;
static uint32_t x394 = UINT32_MAX;
volatile int64_t x396 = INT64_MIN;
int64_t x401 = 38748718LL;
uint8_t x411 = UINT8_MAX;
volatile int16_t x415 = INT16_MAX;
int8_t x417 = INT8_MAX;
int32_t x425 = INT32_MIN;
static volatile int32_t t88 = 1;
uint8_t x439 = UINT8_MAX;
volatile uint8_t x443 = UINT8_MAX;
int16_t x447 = -3;
volatile int64_t x449 = -51367714LL;
volatile int32_t t92 = 1368436;
volatile int32_t t93 = -72657;
int8_t x463 = INT8_MAX;
int64_t x464 = INT64_MAX;
int32_t t95 = -1758034;
static uint32_t x478 = 13U;
static int32_t t99 = -47544629;


void f0(void) {
	int32_t x5 = INT32_MIN;
	volatile int64_t x6 = INT64_MIN;
	static int16_t x7 = INT16_MAX;
	static int32_t x8 = 2457839;
	volatile int32_t t0 = 112;

	t0 = ((x5==(x6+x7))<x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 124924080890LL;
	int32_t x10 = -1;
	static uint16_t x11 = 16918U;
	int32_t x12 = -15955;
	volatile int32_t t1 = -1;

	t1 = ((x9==(x10+x11))<x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 116U;
	int32_t x14 = -1;
	int16_t x15 = -1;
	volatile int32_t x16 = INT32_MIN;

	t2 = ((x13==(x14+x15))<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	uint32_t x18 = 151569422U;
	static volatile int32_t x20 = INT32_MAX;

	t3 = ((x17==(x18+x19))<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	int8_t x23 = INT8_MIN;
	volatile int64_t x24 = INT64_MIN;
	volatile int32_t t4 = 11;

	t4 = ((x21==(x22+x23))<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	int8_t x30 = INT8_MIN;
	volatile int16_t x31 = INT16_MIN;
	int8_t x32 = -1;

	t5 = ((x29==(x30+x31))<x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x34 = -2190343308921618023LL;
	volatile uint32_t x36 = 47398U;
	static int32_t t6 = -448291;

	t6 = ((x33==(x34+x35))<x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = INT8_MIN;
	volatile uint32_t x39 = 7467U;
	volatile uint32_t x40 = 215U;

	t7 = ((x37==(x38+x39))<x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = INT8_MIN;
	int32_t x43 = -1;
	int32_t x44 = 57222920;
	static int32_t t8 = -1;

	t8 = ((x41==(x42+x43))<x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x46 = INT64_MIN;
	uint32_t x47 = UINT32_MAX;
	volatile int8_t x48 = INT8_MIN;
	static volatile int32_t t9 = -1;

	t9 = ((x45==(x46+x47))<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x51 = -1LL;
	int16_t x52 = INT16_MIN;

	t10 = ((x49==(x50+x51))<x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x53 = 10U;
	static uint8_t x54 = UINT8_MAX;
	int8_t x55 = -2;
	int16_t x56 = -13671;
	int32_t t11 = 13980;

	t11 = ((x53==(x54+x55))<x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	int16_t x59 = 446;
	volatile int16_t x60 = INT16_MIN;
	int32_t t12 = 16;

	t12 = ((x57==(x58+x59))<x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	int64_t x62 = 1664394668475550LL;
	static int16_t x64 = INT16_MIN;
	int32_t t13 = -310699748;

	t13 = ((x61==(x62+x63))<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = -1;
	uint32_t x67 = 10183650U;
	volatile int16_t x68 = INT16_MIN;
	int32_t t14 = -10040129;

	t14 = ((x65==(x66+x67))<x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x69 = 0U;
	volatile int32_t x70 = INT32_MAX;
	int8_t x71 = INT8_MIN;
	volatile int8_t x72 = INT8_MIN;
	static volatile int32_t t15 = 1900038;

	t15 = ((x69==(x70+x71))<x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x74 = 17U;
	int64_t x76 = 437386892690LL;
	static volatile int32_t t16 = -14;

	t16 = ((x73==(x74+x75))<x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = 1;
	volatile int16_t x78 = INT16_MAX;
	int64_t x79 = INT64_MIN;
	uint64_t x80 = 1624507LLU;
	int32_t t17 = 60450;

	t17 = ((x77==(x78+x79))<x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 862U;
	volatile int32_t x86 = INT32_MIN;
	static volatile uint64_t x88 = 170671933LLU;

	t18 = ((x85==(x86+x87))<x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x89 = 78U;
	uint8_t x90 = UINT8_MAX;
	static volatile uint64_t x91 = 8LLU;
	static uint8_t x92 = UINT8_MAX;
	int32_t t19 = 115;

	t19 = ((x89==(x90+x91))<x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x93 = 3816526769000239711LLU;
	int32_t x94 = INT32_MIN;
	uint16_t x95 = UINT16_MAX;
	volatile int8_t x96 = 0;
	volatile int32_t t20 = 2509;

	t20 = ((x93==(x94+x95))<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x106 = 1579644334729LLU;
	volatile int16_t x107 = INT16_MIN;
	uint8_t x108 = 10U;
	static volatile int32_t t21 = 51958;

	t21 = ((x105==(x106+x107))<x108);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = 3;
	int8_t x111 = INT8_MIN;
	volatile int8_t x112 = INT8_MIN;

	t22 = ((x109==(x110+x111))<x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MAX;
	int16_t x120 = INT16_MAX;
	int32_t t23 = -20;

	t23 = ((x117==(x118+x119))<x120);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = -17;
	volatile int32_t x122 = INT32_MIN;
	uint16_t x123 = UINT16_MAX;
	int64_t x124 = INT64_MIN;
	int32_t t24 = 3886067;

	t24 = ((x121==(x122+x123))<x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x127 = INT32_MIN;

	t25 = ((x125==(x126+x127))<x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x129 = 20U;
	volatile uint64_t x130 = 1305LLU;
	int64_t x131 = 1LL;

	t26 = ((x129==(x130+x131))<x132);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = -426319953;
	volatile int16_t x135 = -31;
	int16_t x136 = INT16_MAX;
	int32_t t27 = 7096;

	t27 = ((x133==(x134+x135))<x136);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x141 = UINT16_MAX;
	int8_t x142 = INT8_MAX;
	static int16_t x143 = INT16_MIN;
	volatile int32_t t28 = -558;

	t28 = ((x141==(x142+x143))<x144);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x146 = INT64_MAX;
	static int8_t x147 = INT8_MIN;
	int16_t x148 = -409;
	int32_t t29 = -46;

	t29 = ((x145==(x146+x147))<x148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = -1;
	static volatile int32_t x151 = -1;
	static uint8_t x152 = 29U;
	volatile int32_t t30 = -198845452;

	t30 = ((x149==(x150+x151))<x152);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = 3U;
	static uint32_t x154 = 398465685U;
	int32_t t31 = -18180872;

	t31 = ((x153==(x154+x155))<x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x161 = 146U;
	static uint64_t x162 = 63313LLU;
	static uint16_t x163 = 7231U;
	volatile uint8_t x164 = 1U;
	int32_t t32 = -8033;

	t32 = ((x161==(x162+x163))<x164);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x165 = UINT64_MAX;
	static uint64_t x166 = 0LLU;
	int32_t x167 = INT32_MIN;
	static volatile int32_t x168 = -33787695;
	int32_t t33 = -5836181;

	t33 = ((x165==(x166+x167))<x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = INT8_MIN;
	uint8_t x170 = UINT8_MAX;
	uint8_t x171 = UINT8_MAX;
	int32_t x172 = INT32_MIN;
	int32_t t34 = -22740718;

	t34 = ((x169==(x170+x171))<x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x173 = 10121U;
	int8_t x174 = INT8_MAX;
	int8_t x176 = INT8_MAX;
	volatile int32_t t35 = 3;

	t35 = ((x173==(x174+x175))<x176);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x177 = 0U;
	int32_t x179 = 75;
	int64_t x180 = -1LL;
	volatile int32_t t36 = 55638;

	t36 = ((x177==(x178+x179))<x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x182 = 85816203;
	int8_t x183 = INT8_MIN;
	volatile int32_t t37 = -238;

	t37 = ((x181==(x182+x183))<x184);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x186 = INT8_MAX;
	int16_t x188 = -1;
	volatile int32_t t38 = -13784616;

	t38 = ((x185==(x186+x187))<x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x191 = -12799LL;
	static volatile uint32_t x192 = 67498U;
	int32_t t39 = 0;

	t39 = ((x189==(x190+x191))<x192);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x193 = UINT8_MAX;
	uint8_t x195 = 42U;
	int8_t x196 = INT8_MAX;
	static volatile int32_t t40 = 34403;

	t40 = ((x193==(x194+x195))<x196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x201 = INT32_MAX;
	int16_t x202 = INT16_MAX;
	volatile int8_t x203 = INT8_MAX;
	volatile int32_t t41 = -1527;

	t41 = ((x201==(x202+x203))<x204);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x205 = INT16_MAX;
	volatile int16_t x206 = INT16_MAX;
	int16_t x207 = -265;
	int32_t t42 = 593329;

	t42 = ((x205==(x206+x207))<x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x209 = 19731769956LLU;
	volatile int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MIN;
	uint8_t x212 = UINT8_MAX;
	int32_t t43 = -1;

	t43 = ((x209==(x210+x211))<x212);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x213 = 48U;
	int32_t x214 = -3;
	int64_t x215 = -1LL;
	volatile int64_t x216 = -1LL;

	t44 = ((x213==(x214+x215))<x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x217 = INT32_MIN;
	volatile int8_t x218 = INT8_MIN;
	uint8_t x219 = 7U;
	volatile int8_t x220 = INT8_MAX;
	volatile int32_t t45 = -198310565;

	t45 = ((x217==(x218+x219))<x220);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x221 = UINT8_MAX;
	volatile uint16_t x222 = UINT16_MAX;
	int16_t x223 = -1;
	int16_t x224 = -1;
	int32_t t46 = -694954169;

	t46 = ((x221==(x222+x223))<x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x225 = 12U;
	uint8_t x226 = 2U;
	int16_t x227 = -9;
	uint16_t x228 = 161U;
	int32_t t47 = 881332422;

	t47 = ((x225==(x226+x227))<x228);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x229 = 13898739U;
	int16_t x230 = -1;
	int32_t x231 = -1121211;
	volatile uint8_t x232 = 17U;
	int32_t t48 = -20928;

	t48 = ((x229==(x230+x231))<x232);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x233 = UINT16_MAX;
	static uint16_t x235 = 332U;
	volatile uint8_t x236 = 3U;
	int32_t t49 = 240364;

	t49 = ((x233==(x234+x235))<x236);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x238 = UINT8_MAX;
	int16_t x239 = -4;
	int16_t x240 = 169;
	volatile int32_t t50 = -64895;

	t50 = ((x237==(x238+x239))<x240);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x241 = INT32_MAX;
	uint8_t x242 = UINT8_MAX;
	int8_t x243 = 37;
	static uint64_t x244 = 47792402606951LLU;
	static volatile int32_t t51 = -37;

	t51 = ((x241==(x242+x243))<x244);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x246 = 7290U;
	uint16_t x247 = 0U;
	uint8_t x248 = 1U;
	int32_t t52 = 0;

	t52 = ((x245==(x246+x247))<x248);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x253 = -13523638448LL;
	uint64_t x255 = 19680225LLU;
	volatile int32_t t53 = 877445;

	t53 = ((x253==(x254+x255))<x256);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x263 = INT16_MIN;
	int32_t t54 = -1;

	t54 = ((x261==(x262+x263))<x264);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x270 = -1;
	volatile uint16_t x271 = 532U;
	static uint8_t x272 = 96U;
	static int32_t t55 = -540;

	t55 = ((x269==(x270+x271))<x272);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x274 = 58916893U;
	uint8_t x275 = 1U;
	int64_t x276 = INT64_MAX;

	t56 = ((x273==(x274+x275))<x276);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x277 = -692LL;
	int16_t x279 = -119;
	int16_t x280 = INT16_MIN;

	t57 = ((x277==(x278+x279))<x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x281 = INT32_MAX;
	static int64_t x282 = -47866174107951LL;
	static uint8_t x283 = UINT8_MAX;
	int64_t x284 = 266919581LL;
	volatile int32_t t58 = 61998860;

	t58 = ((x281==(x282+x283))<x284);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x285 = 24LLU;
	uint64_t x286 = 43958280LLU;
	int64_t x287 = INT64_MIN;
	uint8_t x288 = 2U;
	int32_t t59 = -1;

	t59 = ((x285==(x286+x287))<x288);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x298 = INT64_MAX;
	static int8_t x299 = INT8_MIN;
	volatile int8_t x300 = INT8_MIN;

	t60 = ((x297==(x298+x299))<x300);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x305 = 1085;
	int64_t x306 = INT64_MAX;
	uint64_t x307 = UINT64_MAX;
	int32_t x308 = -2821456;
	volatile int32_t t61 = -1543;

	t61 = ((x305==(x306+x307))<x308);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x313 = UINT64_MAX;
	static volatile int32_t x314 = INT32_MAX;
	static volatile int16_t x315 = -1;
	int32_t t62 = -4;

	t62 = ((x313==(x314+x315))<x316);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x317 = 1661U;
	int16_t x318 = 0;
	volatile int8_t x319 = 0;
	int8_t x320 = INT8_MIN;
	static int32_t t63 = -8030;

	t63 = ((x317==(x318+x319))<x320);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x321 = INT64_MIN;
	volatile int8_t x322 = INT8_MIN;
	static int16_t x323 = 194;
	uint64_t x324 = 119092LLU;
	static volatile int32_t t64 = -65883;

	t64 = ((x321==(x322+x323))<x324);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x325 = INT16_MIN;
	int32_t x326 = -1;
	uint8_t x327 = 42U;
	volatile int32_t x328 = INT32_MIN;
	int32_t t65 = 5269562;

	t65 = ((x325==(x326+x327))<x328);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x329 = 46U;
	int8_t x330 = INT8_MAX;
	int64_t x331 = -4480975LL;
	volatile int64_t x332 = INT64_MIN;

	t66 = ((x329==(x330+x331))<x332);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x333 = -216;
	uint64_t x334 = 2349906982818LLU;
	uint8_t x336 = 6U;
	volatile int32_t t67 = -2418;

	t67 = ((x333==(x334+x335))<x336);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x337 = 205528602231LLU;
	volatile uint16_t x339 = UINT16_MAX;
	int8_t x340 = INT8_MIN;
	int32_t t68 = -446;

	t68 = ((x337==(x338+x339))<x340);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x345 = -1LL;
	uint16_t x346 = 43U;
	int8_t x347 = 14;
	int8_t x348 = INT8_MIN;
	volatile int32_t t69 = 8066;

	t69 = ((x345==(x346+x347))<x348);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x349 = UINT16_MAX;
	static int8_t x350 = INT8_MIN;
	uint8_t x351 = UINT8_MAX;
	int64_t x352 = INT64_MIN;
	volatile int32_t t70 = -57902798;

	t70 = ((x349==(x350+x351))<x352);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x357 = 54;
	static int16_t x359 = INT16_MIN;
	volatile int16_t x360 = 6;
	int32_t t71 = -6079;

	t71 = ((x357==(x358+x359))<x360);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x361 = INT16_MIN;
	uint64_t x363 = 20066281155LLU;
	static uint16_t x364 = 0U;
	volatile int32_t t72 = -2870405;

	t72 = ((x361==(x362+x363))<x364);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x365 = -1;
	uint32_t x366 = 1034810U;
	volatile int16_t x367 = INT16_MIN;
	static uint64_t x368 = UINT64_MAX;
	volatile int32_t t73 = 1713759;

	t73 = ((x365==(x366+x367))<x368);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x369 = INT16_MIN;
	static int64_t x371 = INT64_MAX;
	static int64_t x372 = 17193444917401LL;
	volatile int32_t t74 = 15;

	t74 = ((x369==(x370+x371))<x372);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x373 = 0;
	static uint8_t x374 = UINT8_MAX;
	static int32_t x375 = INT32_MIN;
	uint16_t x376 = 406U;
	int32_t t75 = -1736;

	t75 = ((x373==(x374+x375))<x376);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x377 = 3579587308084730071LLU;
	uint32_t x378 = 56631U;
	int64_t x379 = -333947828LL;
	uint16_t x380 = 258U;
	volatile int32_t t76 = -4699241;

	t76 = ((x377==(x378+x379))<x380);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x381 = INT64_MIN;
	uint64_t x382 = 6907483LLU;
	int32_t x383 = INT32_MIN;
	int32_t x384 = -53;
	int32_t t77 = -61049;

	t77 = ((x381==(x382+x383))<x384);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x385 = 1895U;
	int16_t x386 = INT16_MAX;
	volatile int32_t t78 = -16973708;

	t78 = ((x385==(x386+x387))<x388);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x390 = -1LL;
	volatile int16_t x391 = 56;
	int16_t x392 = INT16_MIN;
	volatile int32_t t79 = -66848379;

	t79 = ((x389==(x390+x391))<x392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x393 = INT64_MAX;
	int8_t x395 = -2;
	volatile int32_t t80 = 1446;

	t80 = ((x393==(x394+x395))<x396);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MAX;
	int8_t x399 = 1;
	static volatile int64_t x400 = INT64_MAX;
	int32_t t81 = 4;

	t81 = ((x397==(x398+x399))<x400);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x402 = UINT8_MAX;
	int32_t x403 = INT32_MIN;
	int16_t x404 = 8740;
	volatile int32_t t82 = 281408950;

	t82 = ((x401==(x402+x403))<x404);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x405 = 19764U;
	int64_t x406 = -1101850166466782LL;
	int64_t x407 = INT64_MAX;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t83 = 1;

	t83 = ((x405==(x406+x407))<x408);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x409 = -125604848LL;
	static int32_t x410 = INT32_MIN;
	uint16_t x412 = UINT16_MAX;
	int32_t t84 = -59507;

	t84 = ((x409==(x410+x411))<x412);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x413 = 533U;
	static uint8_t x414 = 1U;
	int8_t x416 = INT8_MIN;
	int32_t t85 = -796656;

	t85 = ((x413==(x414+x415))<x416);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x418 = -1LL;
	int16_t x419 = -1;
	int64_t x420 = -1831158350992606850LL;
	int32_t t86 = -14;

	t86 = ((x417==(x418+x419))<x420);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x426 = 25140U;
	static int8_t x427 = -3;
	uint8_t x428 = 68U;
	int32_t t87 = -57550;

	t87 = ((x425==(x426+x427))<x428);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x429 = -1;
	volatile int32_t x430 = INT32_MAX;
	volatile uint32_t x431 = UINT32_MAX;
	uint64_t x432 = 610913LLU;

	t88 = ((x429==(x430+x431))<x432);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x437 = INT16_MIN;
	int16_t x438 = 1;
	uint64_t x440 = 3384257371498448155LLU;
	static int32_t t89 = -6089;

	t89 = ((x437==(x438+x439))<x440);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x441 = UINT8_MAX;
	int16_t x442 = INT16_MIN;
	int64_t x444 = -486403917178LL;
	volatile int32_t t90 = 0;

	t90 = ((x441==(x442+x443))<x444);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x445 = INT64_MIN;
	int32_t x446 = INT32_MAX;
	volatile uint16_t x448 = UINT16_MAX;
	static int32_t t91 = -190;

	t91 = ((x445==(x446+x447))<x448);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x450 = -1;
	volatile int16_t x451 = INT16_MAX;
	volatile uint32_t x452 = 2818U;

	t92 = ((x449==(x450+x451))<x452);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x453 = -1LL;
	int8_t x454 = INT8_MIN;
	int8_t x455 = INT8_MIN;
	int32_t x456 = 590;

	t93 = ((x453==(x454+x455))<x456);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x457 = -56LL;
	int8_t x458 = INT8_MIN;
	volatile uint8_t x459 = 4U;
	volatile int32_t x460 = 58;
	int32_t t94 = -385;

	t94 = ((x457==(x458+x459))<x460);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x461 = 4781643586LLU;
	int16_t x462 = 12639;

	t95 = ((x461==(x462+x463))<x464);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x465 = 65840913LLU;
	int32_t x466 = INT32_MAX;
	int32_t x467 = -3142;
	int32_t x468 = INT32_MIN;
	volatile int32_t t96 = 151500212;

	t96 = ((x465==(x466+x467))<x468);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x469 = INT64_MIN;
	int64_t x470 = -32LL;
	volatile int16_t x471 = INT16_MIN;
	int32_t x472 = INT32_MIN;
	int32_t t97 = 26253554;

	t97 = ((x469==(x470+x471))<x472);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x473 = 5LLU;
	int8_t x474 = -1;
	int32_t x475 = 918165;
	int16_t x476 = -33;
	volatile int32_t t98 = 4172390;

	t98 = ((x473==(x474+x475))<x476);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x477 = INT64_MIN;
	uint32_t x479 = UINT32_MAX;
	static uint16_t x480 = UINT16_MAX;

	t99 = ((x477==(x478+x479))<x480);

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


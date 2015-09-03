#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -2LL;
int8_t x2 = -1;
int32_t x4 = 31791;
volatile int32_t x14 = INT32_MAX;
int16_t x16 = INT16_MIN;
uint16_t x17 = 4U;
volatile uint64_t x20 = 1123490982591076LLU;
uint64_t t3 = 124583796113803LLU;
int32_t x22 = 878243;
int32_t x23 = INT32_MIN;
int32_t x27 = INT32_MIN;
static uint8_t x30 = 26U;
static volatile int64_t x39 = -1LL;
int32_t x40 = INT32_MIN;
int32_t t8 = INT32_MIN;
int32_t t9 = 5480022;
int64_t x48 = -1LL;
static int32_t x56 = INT32_MIN;
int8_t x57 = 1;
uint16_t x58 = 11795U;
volatile int64_t x65 = INT64_MIN;
int8_t x75 = INT8_MIN;
static volatile uint32_t t17 = 21U;
int8_t x81 = -32;
int16_t x86 = 254;
int32_t x98 = 631958;
volatile int32_t t21 = 98347;
uint32_t x101 = UINT32_MAX;
volatile int64_t x114 = INT64_MAX;
static int16_t x122 = INT16_MIN;
uint16_t x130 = 2789U;
int16_t x134 = -1;
int8_t x141 = -4;
static int32_t t31 = -184667220;
int64_t x154 = -152421LL;
volatile int32_t x163 = 10127;
int16_t x166 = -1;
static int8_t x167 = INT8_MIN;
uint8_t x175 = UINT8_MAX;
volatile int64_t x177 = -226LL;
volatile int64_t x180 = -2716350716313643887LL;
int32_t t40 = 66814781;
static int32_t x189 = -128;
uint64_t x194 = UINT64_MAX;
volatile uint32_t x195 = UINT32_MAX;
int16_t x197 = 1;
uint8_t x199 = 4U;
volatile int32_t t43 = 11964;
uint16_t x202 = 177U;
uint64_t x207 = UINT64_MAX;
int64_t x211 = INT64_MAX;
int16_t x212 = 143;
static volatile int32_t t48 = -34594773;
volatile int16_t x221 = 2116;
volatile uint32_t t50 = UINT32_MAX;
volatile int32_t x229 = -98;
uint16_t x236 = 235U;
int64_t x239 = INT64_MAX;
int16_t x244 = -1;
volatile int64_t t55 = -31143856743794003LL;
int32_t t56 = -14625;
static volatile uint32_t x263 = UINT32_MAX;
uint32_t t57 = 394U;
volatile int16_t x269 = INT16_MIN;
int32_t x279 = INT32_MAX;
int64_t t61 = -20063LL;
int8_t x289 = -1;
int8_t x290 = INT8_MIN;
int32_t x295 = -1;
uint64_t x301 = 140692354971225791LLU;
uint16_t x312 = 19059U;
volatile int8_t x314 = INT8_MIN;
volatile int32_t t69 = 363;
uint8_t x319 = UINT8_MAX;
int32_t x322 = -1;
volatile int32_t t71 = 15703;
static int8_t x329 = -1;
volatile uint16_t x332 = UINT16_MAX;
uint8_t x334 = 1U;
uint16_t x335 = 0U;
int64_t x340 = -5693LL;
int64_t t75 = -379718LL;
int16_t x348 = INT16_MIN;
static uint64_t x357 = UINT64_MAX;
uint16_t x362 = 7U;
volatile uint32_t x363 = 9U;
volatile int64_t x365 = -1LL;
static int8_t x366 = INT8_MIN;
uint8_t x375 = 12U;
uint8_t x376 = 0U;
uint16_t x382 = UINT16_MAX;
int32_t x395 = 84720;
volatile int32_t x399 = -1;
int64_t x401 = 88925245788055LL;
static volatile int8_t x404 = INT8_MAX;
int64_t x408 = INT64_MIN;
int16_t x410 = INT16_MIN;
uint16_t x414 = UINT16_MAX;
int16_t x420 = INT16_MIN;
uint32_t x421 = 0U;
int32_t t94 = 710;
volatile uint16_t x430 = UINT16_MAX;
int32_t x436 = -387;
int32_t x440 = -1;
volatile uint16_t x443 = UINT16_MAX;
int64_t t98 = -13848209349775LL;
volatile uint64_t x447 = 23847288808LLU;
static uint8_t x448 = 8U;


void f0(void) {
	uint64_t x3 = 88402648622784022LLU;
	volatile int32_t t0 = 121286;

	t0 = ((x1<=(x2+x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -7763;
	volatile uint16_t x6 = 7U;
	volatile uint64_t x7 = 1006LLU;
	int32_t x8 = INT32_MAX;
	int32_t t1 = 49738;

	t1 = ((x5<=(x6+x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	uint64_t x15 = 2975122701LLU;
	int32_t t2 = -32936485;

	t2 = ((x13<=(x14+x15))*x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = INT32_MIN;
	uint16_t x19 = UINT16_MAX;

	t3 = ((x17<=(x18+x19))*x20);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	uint8_t x24 = UINT8_MAX;
	static volatile int32_t t4 = 28377;

	t4 = ((x21<=(x22+x23))*x24);

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 17607240LLU;
	volatile uint16_t x26 = 1237U;
	int8_t x28 = -1;
	static int32_t t5 = -487;

	t5 = ((x25<=(x26+x27))*x28);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x29 = 35U;
	volatile uint8_t x31 = 44U;
	volatile int8_t x32 = INT8_MAX;
	volatile int32_t t6 = -5;

	t6 = ((x29<=(x30+x31))*x32);

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	volatile int64_t x34 = INT64_MIN;
	volatile uint16_t x35 = 86U;
	volatile int16_t x36 = -27;
	static int32_t t7 = -9288140;

	t7 = ((x33<=(x34+x35))*x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = INT32_MIN;
	volatile int8_t x38 = INT8_MAX;

	t8 = ((x37<=(x38+x39))*x40);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x41 = 127;
	uint32_t x42 = UINT32_MAX;
	static volatile uint8_t x43 = UINT8_MAX;
	uint8_t x44 = UINT8_MAX;

	t9 = ((x41<=(x42+x43))*x44);

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	int32_t x46 = -3662960;
	uint32_t x47 = 163U;
	int64_t t10 = 14189844205LL;

	t10 = ((x45<=(x46+x47))*x48);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = -44LL;
	int8_t x54 = INT8_MIN;
	volatile int8_t x55 = 1;
	int32_t t11 = -371;

	t11 = ((x53<=(x54+x55))*x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x59 = -1;
	int64_t x60 = 22157LL;
	volatile int64_t t12 = -207998LL;

	t12 = ((x57<=(x58+x59))*x60);

	if (t12 != 22157LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MIN;
	int16_t x63 = -1;
	volatile uint32_t x64 = 1308279843U;
	uint32_t t13 = 407954659U;

	t13 = ((x61<=(x62+x63))*x64);

	if (t13 != 1308279843U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x66 = INT32_MIN;
	volatile int32_t x67 = 4721;
	int16_t x68 = INT16_MIN;
	int32_t t14 = -13;

	t14 = ((x65<=(x66+x67))*x68);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x69 = INT64_MIN;
	volatile uint8_t x70 = 1U;
	volatile int8_t x71 = 0;
	int32_t x72 = -103224;
	int32_t t15 = 160105363;

	t15 = ((x69<=(x70+x71))*x72);

	if (t15 != -103224) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = 265252424;
	volatile uint64_t x74 = 194008646042621LLU;
	uint16_t x76 = 19U;
	volatile int32_t t16 = 884962001;

	t16 = ((x73<=(x74+x75))*x76);

	if (t16 != 19) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = UINT16_MAX;
	volatile uint8_t x78 = 0U;
	uint16_t x79 = 239U;
	static uint32_t x80 = UINT32_MAX;

	t17 = ((x77<=(x78+x79))*x80);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x82 = 1329;
	int8_t x83 = -1;
	int8_t x84 = 21;
	volatile int32_t t18 = 598283730;

	t18 = ((x81<=(x82+x83))*x84);

	if (t18 != 21) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = INT16_MAX;
	volatile uint32_t x87 = 46U;
	uint16_t x88 = 9U;
	volatile int32_t t19 = -128065;

	t19 = ((x85<=(x86+x87))*x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x89 = 1925828U;
	static int8_t x90 = INT8_MIN;
	uint64_t x91 = 7710LLU;
	static uint8_t x92 = 1U;
	static int32_t t20 = 9079271;

	t20 = ((x89<=(x90+x91))*x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = INT64_MIN;
	static volatile int64_t x99 = INT64_MIN;
	static uint8_t x100 = 0U;

	t21 = ((x97<=(x98+x99))*x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x102 = 2U;
	int32_t x103 = -552;
	volatile int8_t x104 = -1;
	int32_t t22 = -781801;

	t22 = ((x101<=(x102+x103))*x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 22U;
	volatile uint8_t x106 = 10U;
	volatile int8_t x107 = 0;
	int16_t x108 = INT16_MIN;
	int32_t t23 = 247289;

	t23 = ((x105<=(x106+x107))*x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = 189769422070489660LLU;
	static int32_t x110 = INT32_MIN;
	uint8_t x111 = 55U;
	volatile int32_t x112 = -103215;
	int32_t t24 = 7483;

	t24 = ((x109<=(x110+x111))*x112);

	if (t24 != -103215) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	int16_t x115 = -1;
	volatile int8_t x116 = INT8_MIN;
	static int32_t t25 = 5343625;

	t25 = ((x113<=(x114+x115))*x116);

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = UINT64_MAX;
	int8_t x118 = -1;
	int32_t x119 = 396874634;
	int8_t x120 = 8;
	int32_t t26 = -7413;

	t26 = ((x117<=(x118+x119))*x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x121 = 2154;
	uint16_t x123 = 14U;
	volatile int8_t x124 = INT8_MAX;
	static int32_t t27 = 10847250;

	t27 = ((x121<=(x122+x123))*x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = -1;
	static int32_t x131 = 876164236;
	static int64_t x132 = 0LL;
	int64_t t28 = 3615362306947139408LL;

	t28 = ((x129<=(x130+x131))*x132);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x133 = INT8_MAX;
	volatile int64_t x135 = 38414LL;
	uint64_t x136 = 266222379297621LLU;
	uint64_t t29 = 31557834LLU;

	t29 = ((x133<=(x134+x135))*x136);

	if (t29 != 266222379297621LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = 0;
	int8_t x138 = 14;
	volatile int32_t x139 = INT32_MIN;
	int64_t x140 = -26824059876LL;
	volatile int64_t t30 = -106867161789LL;

	t30 = ((x137<=(x138+x139))*x140);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x142 = INT16_MIN;
	volatile int8_t x143 = INT8_MIN;
	static int8_t x144 = INT8_MIN;

	t31 = ((x141<=(x142+x143))*x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x145 = INT16_MIN;
	volatile uint16_t x146 = UINT16_MAX;
	int8_t x147 = INT8_MAX;
	int32_t x148 = INT32_MIN;
	volatile int32_t t32 = INT32_MIN;

	t32 = ((x145<=(x146+x147))*x148);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x153 = -2;
	uint64_t x155 = 4393LLU;
	int8_t x156 = INT8_MIN;
	int32_t t33 = 604383;

	t33 = ((x153<=(x154+x155))*x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = UINT64_MAX;
	int32_t x158 = INT32_MIN;
	uint32_t x159 = 2U;
	uint64_t x160 = 5LLU;
	static volatile uint64_t t34 = 85408608LLU;

	t34 = ((x157<=(x158+x159))*x160);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = -47231525213302LL;
	uint8_t x162 = 1U;
	int64_t x164 = INT64_MIN;
	static volatile int64_t t35 = INT64_MIN;

	t35 = ((x161<=(x162+x163))*x164);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = 0;
	static volatile int16_t x168 = INT16_MIN;
	volatile int32_t t36 = -105543903;

	t36 = ((x165<=(x166+x167))*x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = 28819296895917LLU;
	static volatile int32_t x170 = 5486;
	uint8_t x171 = 2U;
	volatile int32_t x172 = -39441565;
	volatile int32_t t37 = 63;

	t37 = ((x169<=(x170+x171))*x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = 212122145856491LLU;
	int8_t x174 = -48;
	int32_t x176 = -1;
	volatile int32_t t38 = -397;

	t38 = ((x173<=(x174+x175))*x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x178 = UINT8_MAX;
	uint64_t x179 = 20854LLU;
	volatile int64_t t39 = 847LL;

	t39 = ((x177<=(x178+x179))*x180);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x181 = 10129;
	int64_t x182 = INT64_MIN;
	uint16_t x183 = UINT16_MAX;
	uint8_t x184 = 0U;

	t40 = ((x181<=(x182+x183))*x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x190 = INT8_MAX;
	static int32_t x191 = -1;
	int64_t x192 = INT64_MIN;
	int64_t t41 = INT64_MIN;

	t41 = ((x189<=(x190+x191))*x192);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x193 = 126U;
	uint16_t x196 = 152U;
	int32_t t42 = 4089377;

	t42 = ((x193<=(x194+x195))*x196);

	if (t42 != 152) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x198 = INT8_MAX;
	volatile uint8_t x200 = 93U;

	t43 = ((x197<=(x198+x199))*x200);

	if (t43 != 93) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = UINT32_MAX;
	uint32_t x203 = 104870173U;
	int16_t x204 = -12;
	volatile int32_t t44 = -124282400;

	t44 = ((x201<=(x202+x203))*x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = -1;
	uint64_t x206 = 6809LLU;
	int16_t x208 = -1;
	static int32_t t45 = 40913;

	t45 = ((x205<=(x206+x207))*x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x209 = UINT32_MAX;
	int16_t x210 = INT16_MIN;
	int32_t t46 = 0;

	t46 = ((x209<=(x210+x211))*x212);

	if (t46 != 143) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x213 = UINT16_MAX;
	uint16_t x214 = UINT16_MAX;
	static int32_t x215 = -14271418;
	int64_t x216 = 4501922628065LL;
	int64_t t47 = -995LL;

	t47 = ((x213<=(x214+x215))*x216);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = -1;
	int64_t x218 = -1LL;
	uint32_t x219 = UINT32_MAX;
	static uint16_t x220 = 377U;

	t48 = ((x217<=(x218+x219))*x220);

	if (t48 != 377) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x222 = -17228778;
	int8_t x223 = -1;
	int8_t x224 = -1;
	int32_t t49 = -61759;

	t49 = ((x221<=(x222+x223))*x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x225 = 2U;
	int64_t x226 = 95923524742457LL;
	uint8_t x227 = 40U;
	volatile uint32_t x228 = UINT32_MAX;

	t50 = ((x225<=(x226+x227))*x228);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x230 = 95;
	volatile uint8_t x231 = UINT8_MAX;
	static int32_t x232 = -1;
	volatile int32_t t51 = -12109613;

	t51 = ((x229<=(x230+x231))*x232);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x233 = 2800565040013328643LLU;
	uint8_t x234 = UINT8_MAX;
	int8_t x235 = 7;
	int32_t t52 = 0;

	t52 = ((x233<=(x234+x235))*x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x237 = 3647;
	volatile int32_t x238 = -14965086;
	static volatile uint8_t x240 = 13U;
	static int32_t t53 = -391943277;

	t53 = ((x237<=(x238+x239))*x240);

	if (t53 != 13) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = -1242LL;
	uint16_t x242 = UINT16_MAX;
	static int64_t x243 = INT64_MIN;
	volatile int32_t t54 = -12;

	t54 = ((x241<=(x242+x243))*x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x253 = INT64_MAX;
	int32_t x254 = INT32_MAX;
	int16_t x255 = -1;
	static int64_t x256 = -1LL;

	t55 = ((x253<=(x254+x255))*x256);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MIN;
	uint8_t x258 = UINT8_MAX;
	static uint8_t x259 = 15U;
	volatile int32_t x260 = -2;

	t56 = ((x257<=(x258+x259))*x260);

	if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x261 = UINT16_MAX;
	int16_t x262 = INT16_MIN;
	uint32_t x264 = 7U;

	t57 = ((x261<=(x262+x263))*x264);

	if (t57 != 7U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x270 = 47667LL;
	volatile uint32_t x271 = 1415015U;
	int32_t x272 = -1;
	int32_t t58 = -8063046;

	t58 = ((x269<=(x270+x271))*x272);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x273 = 31658U;
	uint64_t x274 = 2768078LLU;
	volatile uint8_t x275 = 0U;
	uint16_t x276 = 25603U;
	int32_t t59 = 1088;

	t59 = ((x273<=(x274+x275))*x276);

	if (t59 != 25603) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x277 = -1;
	int64_t x278 = 2286221391LL;
	int16_t x280 = INT16_MIN;
	int32_t t60 = 2598;

	t60 = ((x277<=(x278+x279))*x280);

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x281 = UINT16_MAX;
	int64_t x282 = 0LL;
	int64_t x283 = INT64_MIN;
	int64_t x284 = 170LL;

	t61 = ((x281<=(x282+x283))*x284);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x285 = -1LL;
	volatile int16_t x286 = INT16_MIN;
	int8_t x287 = 1;
	uint32_t x288 = UINT32_MAX;
	volatile uint32_t t62 = 57405U;

	t62 = ((x285<=(x286+x287))*x288);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x291 = INT32_MAX;
	int8_t x292 = 1;
	int32_t t63 = 1056179;

	t63 = ((x289<=(x290+x291))*x292);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = 63;
	static int8_t x294 = -12;
	int64_t x296 = INT64_MIN;
	volatile int64_t t64 = -6389909464566496LL;

	t64 = ((x293<=(x294+x295))*x296);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = 4418;
	int32_t x298 = 253;
	uint32_t x299 = 21272U;
	volatile uint16_t x300 = UINT16_MAX;
	volatile int32_t t65 = 0;

	t65 = ((x297<=(x298+x299))*x300);

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MAX;
	int16_t x304 = -2542;
	int32_t t66 = 489;

	t66 = ((x301<=(x302+x303))*x304);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x305 = INT16_MAX;
	int16_t x306 = INT16_MIN;
	int16_t x307 = -1;
	int16_t x308 = INT16_MAX;
	volatile int32_t t67 = -144;

	t67 = ((x305<=(x306+x307))*x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = -1;
	uint32_t x310 = 1924438U;
	int32_t x311 = -1;
	volatile int32_t t68 = 50;

	t68 = ((x309<=(x310+x311))*x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x313 = INT8_MIN;
	uint8_t x315 = 0U;
	uint16_t x316 = UINT16_MAX;

	t69 = ((x313<=(x314+x315))*x316);

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = INT32_MIN;
	int32_t x318 = -1;
	volatile int16_t x320 = -1;
	volatile int32_t t70 = 1;

	t70 = ((x317<=(x318+x319))*x320);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x321 = 452U;
	int16_t x323 = -2267;
	int16_t x324 = -482;

	t71 = ((x321<=(x322+x323))*x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x325 = -85914LL;
	static uint64_t x326 = 399572078095249426LLU;
	static uint8_t x327 = UINT8_MAX;
	volatile int8_t x328 = 25;
	volatile int32_t t72 = 870364;

	t72 = ((x325<=(x326+x327))*x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x330 = 55U;
	volatile int8_t x331 = INT8_MAX;
	int32_t t73 = 9;

	t73 = ((x329<=(x330+x331))*x332);

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x333 = -1;
	volatile int8_t x336 = -54;
	static int32_t t74 = 325471;

	t74 = ((x333<=(x334+x335))*x336);

	if (t74 != -54) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x337 = UINT16_MAX;
	volatile int32_t x338 = INT32_MAX;
	int8_t x339 = -56;

	t75 = ((x337<=(x338+x339))*x340);

	if (t75 != -5693LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x341 = -1;
	static uint16_t x342 = 1U;
	int8_t x343 = 0;
	int64_t x344 = INT64_MIN;
	int64_t t76 = INT64_MIN;

	t76 = ((x341<=(x342+x343))*x344);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = INT32_MAX;
	int16_t x346 = 12203;
	volatile int8_t x347 = INT8_MIN;
	volatile int32_t t77 = -951863;

	t77 = ((x345<=(x346+x347))*x348);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x349 = 10587U;
	uint16_t x350 = 22U;
	int32_t x351 = 156227;
	uint32_t x352 = UINT32_MAX;
	uint32_t t78 = UINT32_MAX;

	t78 = ((x349<=(x350+x351))*x352);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = INT8_MIN;
	static int8_t x354 = -1;
	int16_t x355 = INT16_MIN;
	int64_t x356 = INT64_MIN;
	int64_t t79 = 16949361LL;

	t79 = ((x353<=(x354+x355))*x356);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x358 = 1901451;
	int8_t x359 = -1;
	int64_t x360 = INT64_MIN;
	static volatile int64_t t80 = 6047050756937324LL;

	t80 = ((x357<=(x358+x359))*x360);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x361 = 41U;
	int16_t x364 = INT16_MIN;
	volatile int32_t t81 = -1474;

	t81 = ((x361<=(x362+x363))*x364);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x367 = INT16_MIN;
	static uint32_t x368 = 54924264U;
	uint32_t t82 = 35342U;

	t82 = ((x365<=(x366+x367))*x368);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x369 = 828211020032LLU;
	int64_t x370 = -1LL;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t83 = -171744550;

	t83 = ((x369<=(x370+x371))*x372);

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x373 = UINT64_MAX;
	uint16_t x374 = 371U;
	static volatile int32_t t84 = 558993890;

	t84 = ((x373<=(x374+x375))*x376);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x381 = 668LLU;
	static volatile int16_t x383 = INT16_MAX;
	uint8_t x384 = 24U;
	static int32_t t85 = -30864;

	t85 = ((x381<=(x382+x383))*x384);

	if (t85 != 24) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x393 = 8686338480LLU;
	int32_t x394 = -1;
	uint16_t x396 = 8651U;
	volatile int32_t t86 = -12;

	t86 = ((x393<=(x394+x395))*x396);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x397 = 74LLU;
	static int16_t x398 = INT16_MAX;
	int32_t x400 = INT32_MAX;
	int32_t t87 = INT32_MAX;

	t87 = ((x397<=(x398+x399))*x400);

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x402 = INT16_MIN;
	uint32_t x403 = UINT32_MAX;
	volatile int32_t t88 = -3;

	t88 = ((x401<=(x402+x403))*x404);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x405 = 211U;
	int32_t x406 = 828;
	uint8_t x407 = 3U;
	int64_t t89 = INT64_MIN;

	t89 = ((x405<=(x406+x407))*x408);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = -1;
	static uint64_t x411 = 7390448333512338LLU;
	static int64_t x412 = -1LL;
	static volatile int64_t t90 = 1LL;

	t90 = ((x409<=(x410+x411))*x412);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x413 = 255117LLU;
	uint32_t x415 = 1U;
	int64_t x416 = -1LL;
	volatile int64_t t91 = -68297153241LL;

	t91 = ((x413<=(x414+x415))*x416);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x417 = -2;
	int64_t x418 = -16474LL;
	volatile uint32_t x419 = 6U;
	int32_t t92 = -17412;

	t92 = ((x417<=(x418+x419))*x420);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x422 = INT16_MIN;
	uint8_t x423 = 16U;
	int8_t x424 = INT8_MAX;
	volatile int32_t t93 = -908813618;

	t93 = ((x421<=(x422+x423))*x424);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = -1453953883735LL;
	volatile int64_t x426 = 2652068377285196LL;
	uint16_t x427 = 2U;
	volatile int16_t x428 = -1;

	t94 = ((x425<=(x426+x427))*x428);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x429 = 7;
	uint8_t x431 = 0U;
	int16_t x432 = INT16_MIN;
	volatile int32_t t95 = -503;

	t95 = ((x429<=(x430+x431))*x432);

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x433 = 770040114LLU;
	volatile int8_t x434 = INT8_MAX;
	static int32_t x435 = -39;
	volatile int32_t t96 = -1495061;

	t96 = ((x433<=(x434+x435))*x436);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x437 = INT64_MIN;
	volatile uint32_t x438 = UINT32_MAX;
	int16_t x439 = -1863;
	int32_t t97 = 3724221;

	t97 = ((x437<=(x438+x439))*x440);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x441 = -1LL;
	static uint16_t x442 = 0U;
	int64_t x444 = 4412745643003943456LL;

	t98 = ((x441<=(x442+x443))*x444);

	if (t98 != 4412745643003943456LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x445 = INT8_MAX;
	int64_t x446 = INT64_MAX;
	int32_t t99 = -80516;

	t99 = ((x445<=(x446+x447))*x448);

	if (t99 != 8) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
int64_t x3 = -17381333015861LL;
static int8_t x10 = INT8_MIN;
volatile int8_t x11 = -14;
volatile int8_t x19 = 56;
int64_t t3 = 48LL;
static volatile uint64_t x24 = UINT64_MAX;
uint16_t x27 = UINT16_MAX;
volatile int64_t x30 = INT64_MAX;
uint64_t x31 = 95072LLU;
int32_t x32 = INT32_MAX;
uint32_t x39 = UINT32_MAX;
int8_t x45 = -1;
int16_t x52 = INT16_MIN;
static uint16_t x55 = 127U;
uint16_t x59 = UINT16_MAX;
uint64_t x62 = 22839LLU;
uint64_t t12 = 36935642787871LLU;
int8_t x69 = -2;
uint64_t x75 = 22LLU;
volatile uint64_t t15 = 29134068499251LLU;
uint8_t x79 = UINT8_MAX;
int32_t t17 = -303663212;
int64_t x90 = -746591705414766LL;
static uint16_t x98 = UINT16_MAX;
volatile uint8_t x99 = UINT8_MAX;
volatile int16_t x101 = 20;
volatile uint64_t x104 = 7495352LLU;
uint16_t x107 = 6U;
int8_t x108 = INT8_MIN;
int8_t x110 = 0;
uint64_t x119 = 19272583521LLU;
uint64_t x126 = UINT64_MAX;
int32_t x127 = INT32_MAX;
volatile uint64_t t27 = 1060126702480237LLU;
int16_t x148 = 123;
uint64_t t32 = 14LLU;
uint32_t x166 = 1U;
int8_t x169 = INT8_MIN;
int8_t x178 = 55;
static uint16_t x184 = 30U;
static int64_t t38 = 0LL;
volatile int32_t x196 = INT32_MAX;
int16_t x201 = -1;
uint8_t x203 = 28U;
static uint64_t x205 = UINT64_MAX;
uint16_t x206 = 8877U;
volatile uint64_t t42 = 103002LLU;
int16_t x219 = INT16_MIN;
volatile int32_t x220 = INT32_MIN;
int8_t x222 = 4;
volatile uint64_t t46 = 5015996555834LLU;
volatile int8_t x234 = INT8_MIN;
uint16_t x236 = 40U;
int32_t x243 = -67632234;
int16_t x259 = -14580;
int8_t x270 = INT8_MIN;
uint64_t x272 = 1615LLU;
volatile uint64_t t52 = 78837262LLU;
volatile int8_t x275 = INT8_MAX;
int8_t x286 = 46;
volatile uint8_t x292 = UINT8_MAX;
uint64_t x294 = 157303732853975LLU;
int64_t x295 = -1LL;
volatile uint64_t t59 = 8506661208705LLU;
int16_t x301 = -1;
int32_t t60 = 67669293;
int32_t x306 = 4651595;
static int32_t x320 = -1;
int32_t x329 = INT32_MAX;
int64_t t66 = 1668917189224122478LL;
int8_t x333 = INT8_MIN;
int16_t x349 = INT16_MIN;
int8_t x352 = -1;
int32_t t70 = 3;
int8_t x359 = -1;
int32_t x366 = -1;
static int32_t x374 = 8;
uint8_t x375 = 0U;
volatile uint8_t x402 = UINT8_MAX;
int16_t x409 = INT16_MIN;
volatile int32_t t82 = -227045589;
int8_t x445 = INT8_MIN;
int16_t x450 = -6784;
int8_t x456 = INT8_MIN;
int32_t x468 = -1;
int32_t x469 = INT32_MIN;
volatile uint64_t x470 = 7LLU;
static uint16_t x471 = UINT16_MAX;
volatile int32_t x491 = -1;
volatile int64_t t92 = 103723978709086949LL;
int8_t x512 = 3;
volatile uint32_t x532 = UINT32_MAX;
volatile uint32_t t96 = 621130U;
int64_t x545 = INT64_MAX;
volatile uint32_t t99 = 12709716U;


void f0(void) {
	volatile uint8_t x2 = UINT8_MAX;
	int32_t x4 = INT32_MAX;
	static int64_t t0 = -1014348LL;

	t0 = (((x1^x2)*x3)%x4);

	if (t0 != -387869032LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -1LL;
	uint64_t x12 = UINT64_MAX;
	static volatile uint64_t t1 = 5499264375039972356LLU;

	t1 = (((x9^x10)*x11)%x12);

	if (t1 != 18446744073709549838LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = -1;
	static uint32_t x14 = 1686U;
	uint16_t x15 = 2U;
	int8_t x16 = 42;
	volatile uint32_t t2 = 63041490U;

	t2 = (((x13^x14)*x15)%x16);

	if (t2 != 32U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x17 = 0U;
	int32_t x18 = -1;
	volatile int64_t x20 = -1LL;

	t3 = (((x17^x18)*x19)%x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = 1LL;
	int16_t x22 = -1621;
	int8_t x23 = -1;
	volatile uint64_t t4 = 55LLU;

	t4 = (((x21^x22)*x23)%x24);

	if (t4 != 1622LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = 45U;
	static uint8_t x26 = 0U;
	uint8_t x28 = 1U;
	static volatile int32_t t5 = 1;

	t5 = (((x25^x26)*x27)%x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = INT64_MIN;
	volatile uint64_t t6 = 597541LLU;

	t6 = (((x29^x30)*x31)%x32);

	if (t6 != 2147388579LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	uint8_t x38 = 0U;
	int32_t x40 = INT32_MAX;
	volatile uint32_t t7 = 18636U;

	t7 = (((x37^x38)*x39)%x40);

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x46 = 7338407LLU;
	static int64_t x47 = -1LL;
	uint16_t x48 = 371U;
	static volatile uint64_t t8 = 379205514152LLU;

	t8 = (((x45^x46)*x47)%x48);

	if (t8 != 28LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -58;
	int32_t x50 = -1;
	int64_t x51 = 19386037LL;
	int64_t t9 = -16631693605034379LL;

	t9 = (((x49^x50)*x51)%x52);

	if (t9 != 1613LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = INT16_MIN;
	static uint64_t x54 = 10141243698LLU;
	int64_t x56 = -3792668451LL;
	uint64_t t10 = 7417724250611LLU;

	t10 = (((x53^x54)*x55)%x56);

	if (t10 != 18446742785769078734LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x57 = -1;
	uint32_t x58 = UINT32_MAX;
	int8_t x60 = -3;
	volatile uint32_t t11 = 538203427U;

	t11 = (((x57^x58)*x59)%x60);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = INT64_MAX;
	uint64_t x63 = UINT64_MAX;
	int16_t x64 = -7456;

	t12 = (((x61^x62)*x63)%x64);

	if (t12 != 9223372036854798648LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 537290017LLU;
	static uint64_t x66 = 275LLU;
	static int8_t x67 = INT8_MIN;
	int16_t x68 = -65;
	static volatile uint64_t t13 = 301070278134516LLU;

	t13 = (((x65^x66)*x67)%x68);

	if (t13 != 18446744004936460032LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x70 = 1U;
	uint8_t x71 = UINT8_MAX;
	uint8_t x72 = 1U;
	uint32_t t14 = 0U;

	t14 = (((x69^x70)*x71)%x72);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -1;
	static int32_t x74 = INT32_MIN;
	volatile uint8_t x76 = 1U;

	t15 = (((x73^x74)*x75)%x76);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x77 = UINT64_MAX;
	int32_t x78 = -1;
	int64_t x80 = 4628582LL;
	volatile uint64_t t16 = 47418886443129LLU;

	t16 = (((x77^x78)*x79)%x80);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x81 = INT16_MIN;
	int16_t x82 = 225;
	int8_t x83 = INT8_MIN;
	volatile int32_t x84 = 357604569;

	t17 = (((x81^x82)*x83)%x84);

	if (t17 != 4165504) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x85 = 59LLU;
	int16_t x86 = INT16_MAX;
	static int8_t x87 = 0;
	int64_t x88 = INT64_MIN;
	volatile uint64_t t18 = 4526908532962400LLU;

	t18 = (((x85^x86)*x87)%x88);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = UINT32_MAX;
	uint8_t x91 = 38U;
	uint16_t x92 = 1832U;
	volatile int64_t t19 = -270269679918LL;

	t19 = (((x89^x90)*x91)%x92);

	if (t19 != -282LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = 11588;
	static int64_t x100 = INT64_MAX;
	volatile int64_t t20 = -1491270240699LL;

	t20 = (((x97^x98)*x99)%x100);

	if (t20 != 13756485LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x102 = INT32_MIN;
	static uint16_t x103 = 1U;
	uint64_t t21 = 14214036055LLU;

	t21 = (((x101^x102)*x103)%x104);

	if (t21 != 621244LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x105 = 15973;
	int64_t x106 = -50204008LL;
	int64_t t22 = 108874713968LL;

	t22 = (((x105^x106)*x107)%x108);

	if (t22 != -18LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x109 = 31;
	int64_t x111 = 229884534753926021LL;
	volatile int16_t x112 = -1;
	volatile int64_t t23 = 536109695LL;

	t23 = (((x109^x110)*x111)%x112);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = -1;
	int8_t x118 = INT8_MAX;
	volatile uint16_t x120 = 22U;
	uint64_t t24 = 38979LLU;

	t24 = (((x117^x118)*x119)%x120);

	if (t24 != 10LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x125 = 4U;
	int32_t x128 = 5066;
	volatile uint64_t t25 = 404983LLU;

	t25 = (((x125^x126)*x127)%x128);

	if (t25 != 4925LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = INT64_MIN;
	static uint8_t x130 = UINT8_MAX;
	static uint8_t x131 = 1U;
	static uint32_t x132 = 42204196U;
	int64_t t26 = 3233997919LL;

	t26 = (((x129^x130)*x131)%x132);

	if (t26 != -3465909LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x137 = UINT64_MAX;
	volatile uint8_t x138 = 1U;
	volatile uint16_t x139 = 30U;
	volatile uint8_t x140 = 29U;

	t27 = (((x137^x138)*x139)%x140);

	if (t27 != 22LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x141 = UINT16_MAX;
	int32_t x142 = -1;
	uint16_t x143 = 2010U;
	int8_t x144 = INT8_MAX;
	int32_t t28 = -523703;

	t28 = (((x141^x142)*x143)%x144);

	if (t28 != -39) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = INT32_MAX;
	int16_t x146 = INT16_MIN;
	volatile uint64_t x147 = 1821994791628LLU;
	static uint64_t t29 = 1183889514691044274LLU;

	t29 = (((x145^x146)*x147)%x148);

	if (t29 != 38LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = -25909LL;
	uint16_t x150 = UINT16_MAX;
	int32_t x151 = INT32_MIN;
	int16_t x152 = 119;
	int64_t t30 = 8283706806974LL;

	t30 = (((x149^x150)*x151)%x152);

	if (t30 != 9LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x153 = INT16_MIN;
	int8_t x154 = -6;
	static int16_t x155 = INT16_MIN;
	int16_t x156 = -1;
	int32_t t31 = -137770719;

	t31 = (((x153^x154)*x155)%x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x161 = -1;
	uint64_t x162 = UINT64_MAX;
	int16_t x163 = 7505;
	int16_t x164 = -833;

	t32 = (((x161^x162)*x163)%x164);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x165 = UINT32_MAX;
	static uint32_t x167 = UINT32_MAX;
	uint8_t x168 = 24U;
	uint32_t t33 = 3U;

	t33 = (((x165^x166)*x167)%x168);

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x170 = INT8_MIN;
	uint8_t x171 = UINT8_MAX;
	uint16_t x172 = 21U;
	int32_t t34 = 39;

	t34 = (((x169^x170)*x171)%x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x173 = 1U;
	static volatile int8_t x174 = INT8_MAX;
	int8_t x175 = -1;
	int16_t x176 = INT16_MAX;
	int32_t t35 = -5743120;

	t35 = (((x173^x174)*x175)%x176);

	if (t35 != -126) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x177 = 8U;
	static uint16_t x179 = UINT16_MAX;
	static uint8_t x180 = 20U;
	int32_t t36 = 223610;

	t36 = (((x177^x178)*x179)%x180);

	if (t36 != 5) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x181 = 788170329LLU;
	int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	volatile uint64_t t37 = 668020265125534778LLU;

	t37 = (((x181^x182)*x183)%x184);

	if (t37 != 4LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x185 = -1LL;
	volatile int32_t x186 = INT32_MAX;
	int16_t x187 = -1;
	int32_t x188 = INT32_MIN;

	t38 = (((x185^x186)*x187)%x188);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x193 = INT64_MIN;
	int32_t x194 = -3705295;
	static int64_t x195 = -1LL;
	int64_t t39 = -4620831LL;

	t39 = (((x193^x194)*x195)%x196);

	if (t39 != -2143778354LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x202 = 30378446LLU;
	uint8_t x204 = UINT8_MAX;
	uint64_t t40 = 53433LLU;

	t40 = (((x201^x202)*x203)%x204);

	if (t40 != 100LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x207 = 0U;
	int8_t x208 = INT8_MAX;
	uint64_t t41 = 1LLU;

	t41 = (((x205^x206)*x207)%x208);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = INT32_MAX;
	uint64_t x210 = UINT64_MAX;
	int32_t x211 = INT32_MIN;
	int8_t x212 = 48;

	t42 = (((x209^x210)*x211)%x212);

	if (t42 != 16LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x213 = 3101961226265881819LL;
	uint64_t x214 = 7804347112650774LLU;
	uint8_t x215 = UINT8_MAX;
	uint16_t x216 = UINT16_MAX;
	static uint64_t t43 = 659629798853888614LLU;

	t43 = (((x213^x214)*x215)%x216);

	if (t43 != 36933LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x217 = -37;
	int8_t x218 = INT8_MAX;
	int32_t t44 = 88601611;

	t44 = (((x217^x218)*x219)%x220);

	if (t44 != 3014656) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x221 = -1LL;
	uint64_t x223 = UINT64_MAX;
	int16_t x224 = INT16_MIN;
	static volatile uint64_t t45 = 0LLU;

	t45 = (((x221^x222)*x223)%x224);

	if (t45 != 5LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = INT64_MIN;
	volatile uint16_t x226 = UINT16_MAX;
	uint64_t x227 = UINT64_MAX;
	static int32_t x228 = INT32_MAX;

	t46 = (((x225^x226)*x227)%x228);

	if (t46 != 2147418114LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x229 = -480847159;
	uint64_t x230 = 587338396766595LLU;
	int32_t x231 = -1565427;
	static uint8_t x232 = 5U;
	uint64_t t47 = 110762087LLU;

	t47 = (((x229^x230)*x231)%x232);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x233 = 496U;
	static int64_t x235 = -1LL;
	static volatile int64_t t48 = 30986107453995528LL;

	t48 = (((x233^x234)*x235)%x236);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MIN;
	int16_t x244 = INT16_MIN;
	volatile int32_t t49 = -29251;

	t49 = (((x241^x242)*x243)%x244);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x257 = UINT8_MAX;
	uint64_t x258 = UINT64_MAX;
	uint32_t x260 = 7252U;
	uint64_t t50 = 239095290870LLU;

	t50 = (((x257^x258)*x259)%x260);

	if (t50 != 4952LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x265 = 1U;
	uint64_t x266 = 2892736715766415LLU;
	static uint16_t x267 = 174U;
	uint64_t x268 = 404023924LLU;
	uint64_t t51 = 31290260LLU;

	t51 = (((x265^x266)*x267)%x268);

	if (t51 != 315634916LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x269 = -1;
	volatile uint64_t x271 = 11040486260LLU;

	t52 = (((x269^x270)*x271)%x272);

	if (t52 != 185LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x273 = INT16_MIN;
	volatile uint16_t x274 = 2U;
	static volatile uint16_t x276 = 7510U;
	int32_t t53 = 3;

	t53 = (((x273^x274)*x275)%x276);

	if (t53 != -742) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x277 = INT16_MAX;
	uint16_t x278 = 126U;
	static uint16_t x279 = 0U;
	static uint32_t x280 = 2U;
	uint32_t t54 = 159056777U;

	t54 = (((x277^x278)*x279)%x280);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x281 = -116;
	int16_t x282 = INT16_MAX;
	int16_t x283 = -83;
	volatile int8_t x284 = INT8_MAX;
	int32_t t55 = -15887440;

	t55 = (((x281^x282)*x283)%x284);

	if (t55 != 19) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x285 = -3LL;
	static uint64_t x287 = 252LLU;
	uint16_t x288 = UINT16_MAX;
	volatile uint64_t t56 = 24113LLU;

	t56 = (((x285^x286)*x287)%x288);

	if (t56 != 54196LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = 62;
	uint32_t x290 = 1982698626U;
	int64_t x291 = 0LL;
	int64_t t57 = 4LL;

	t57 = (((x289^x290)*x291)%x292);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x293 = 1U;
	uint32_t x296 = 86U;
	uint64_t t58 = 1993816340LLU;

	t58 = (((x293^x294)*x295)%x296);

	if (t58 != 30LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x297 = -1;
	volatile uint64_t x298 = 262255630675689LLU;
	static uint8_t x299 = UINT8_MAX;
	static int16_t x300 = INT16_MAX;

	t59 = (((x297^x298)*x299)%x300);

	if (t59 != 1175LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x302 = 6U;
	static volatile uint16_t x303 = 485U;
	int16_t x304 = -1;

	t60 = (((x301^x302)*x303)%x304);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x305 = 13;
	int8_t x307 = -1;
	uint16_t x308 = 93U;
	volatile int32_t t61 = 15813613;

	t61 = (((x305^x306)*x307)%x308);

	if (t61 != -9) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x313 = -3350842215LL;
	uint32_t x314 = 26U;
	int32_t x315 = -1;
	int64_t x316 = INT64_MAX;
	volatile int64_t t62 = -5LL;

	t62 = (((x313^x314)*x315)%x316);

	if (t62 != 3350842237LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x317 = INT64_MIN;
	uint64_t x318 = UINT64_MAX;
	uint64_t x319 = UINT64_MAX;
	uint64_t t63 = 1537001620097LLU;

	t63 = (((x317^x318)*x319)%x320);

	if (t63 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x321 = 15945;
	static volatile uint8_t x322 = UINT8_MAX;
	uint64_t x323 = UINT64_MAX;
	uint64_t x324 = UINT64_MAX;
	uint64_t t64 = 17459333047LLU;

	t64 = (((x321^x322)*x323)%x324);

	if (t64 != 18446744073709535562LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x325 = 1U;
	int16_t x326 = -1;
	int16_t x327 = INT16_MAX;
	uint64_t x328 = 4632252814LLU;
	uint64_t t65 = 5014531590180498174LLU;

	t65 = (((x325^x326)*x327)%x328);

	if (t65 != 1765388368LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x330 = UINT32_MAX;
	static uint16_t x331 = UINT16_MAX;
	static int64_t x332 = -1LL;

	t66 = (((x329^x330)*x331)%x332);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x334 = 1863768546LLU;
	uint8_t x335 = 20U;
	int8_t x336 = INT8_MIN;
	uint64_t t67 = 176817672453LLU;

	t67 = (((x333^x334)*x335)%x336);

	if (t67 != 18446744036434182056LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x341 = -1LL;
	int32_t x342 = 219620;
	int32_t x343 = -1;
	int32_t x344 = 5;
	int64_t t68 = -10201LL;

	t68 = (((x341^x342)*x343)%x344);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x345 = INT8_MIN;
	volatile int8_t x346 = -1;
	int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MAX;
	int32_t t69 = -2;

	t69 = (((x345^x346)*x347)%x348);

	if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x350 = -1;
	int16_t x351 = 55;

	t70 = (((x349^x350)*x351)%x352);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x353 = 7122824067398285LLU;
	static int16_t x354 = INT16_MIN;
	uint32_t x355 = 8U;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t71 = 13713635477628LLU;

	t71 = (((x353^x354)*x355)%x356);

	if (t71 != 18389761481170343016LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x357 = INT32_MIN;
	volatile uint8_t x358 = UINT8_MAX;
	int32_t x360 = -1;
	volatile int32_t t72 = -15;

	t72 = (((x357^x358)*x359)%x360);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x365 = INT8_MAX;
	uint16_t x367 = 654U;
	volatile int16_t x368 = INT16_MAX;
	static volatile int32_t t73 = 8428;

	t73 = (((x365^x366)*x367)%x368);

	if (t73 != -18178) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x373 = UINT32_MAX;
	volatile uint8_t x376 = 88U;
	static uint32_t t74 = 31547621U;

	t74 = (((x373^x374)*x375)%x376);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x377 = INT16_MIN;
	static uint8_t x378 = 37U;
	volatile int32_t x379 = 3;
	int64_t x380 = -42360383520292551LL;
	static int64_t t75 = 4493000424701115LL;

	t75 = (((x377^x378)*x379)%x380);

	if (t75 != -98193LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x381 = INT64_MAX;
	int64_t x382 = INT64_MIN;
	uint32_t x383 = 37U;
	uint8_t x384 = UINT8_MAX;
	static int64_t t76 = 4262LL;

	t76 = (((x381^x382)*x383)%x384);

	if (t76 != -37LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x389 = 53;
	int8_t x390 = INT8_MIN;
	uint8_t x391 = 1U;
	volatile int32_t x392 = 259;
	static volatile int32_t t77 = -14239;

	t77 = (((x389^x390)*x391)%x392);

	if (t77 != -75) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x393 = INT32_MIN;
	static int32_t x394 = -1;
	volatile int64_t x395 = -1LL;
	int32_t x396 = INT32_MIN;
	int64_t t78 = 366026220862355LL;

	t78 = (((x393^x394)*x395)%x396);

	if (t78 != -2147483647LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x401 = -1LL;
	int64_t x403 = 31410375LL;
	volatile uint16_t x404 = 878U;
	static volatile int64_t t79 = 587539142349850LL;

	t79 = (((x401^x402)*x403)%x404);

	if (t79 != -116LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x405 = UINT8_MAX;
	static int16_t x406 = INT16_MAX;
	volatile uint32_t x407 = 62U;
	volatile uint64_t x408 = 81911209512069LLU;
	uint64_t t80 = 244026537LLU;

	t80 = (((x405^x406)*x407)%x408);

	if (t80 != 2015744LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x410 = INT16_MIN;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = -1;
	int32_t t81 = -3;

	t81 = (((x409^x410)*x411)%x412);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x413 = -1;
	int16_t x414 = 43;
	volatile int16_t x415 = INT16_MAX;
	volatile int8_t x416 = 1;

	t82 = (((x413^x414)*x415)%x416);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x417 = UINT16_MAX;
	int8_t x418 = INT8_MAX;
	int32_t x419 = -1;
	static int8_t x420 = INT8_MIN;
	int32_t t83 = -1;

	t83 = (((x417^x418)*x419)%x420);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x433 = UINT8_MAX;
	static volatile uint32_t x434 = 204U;
	int16_t x435 = INT16_MAX;
	static int64_t x436 = INT64_MAX;
	static int64_t t84 = 211792737297LL;

	t84 = (((x433^x434)*x435)%x436);

	if (t84 != 1671117LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x446 = INT16_MAX;
	int16_t x447 = -28;
	uint32_t x448 = 140334089U;
	uint32_t t85 = 19293824U;

	t85 = (((x445^x446)*x447)%x448);

	if (t85 != 913948U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x449 = INT16_MIN;
	uint16_t x451 = 5U;
	int8_t x452 = INT8_MIN;
	static int32_t t86 = -12219;

	t86 = (((x449^x450)*x451)%x452);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x453 = INT32_MIN;
	int64_t x454 = -2753258LL;
	int8_t x455 = INT8_MAX;
	int64_t t87 = -1284096LL;

	t87 = (((x453^x454)*x455)%x456);

	if (t87 != 106LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x457 = 7LLU;
	int64_t x458 = -1040964LL;
	uint8_t x459 = 61U;
	static int16_t x460 = 631;
	uint64_t t88 = 23826531LLU;

	t88 = (((x457^x458)*x459)%x460);

	if (t88 != 485LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x465 = UINT16_MAX;
	int16_t x466 = INT16_MIN;
	uint64_t x467 = UINT64_MAX;
	volatile uint64_t t89 = 1461462963921LLU;

	t89 = (((x465^x466)*x467)%x468);

	if (t89 != 32769LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x472 = INT32_MAX;
	volatile uint64_t t90 = 27LLU;

	t90 = (((x469^x470)*x471)%x472);

	if (t90 != 393214LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x473 = INT8_MIN;
	int32_t x474 = INT32_MAX;
	volatile uint32_t x475 = UINT32_MAX;
	int16_t x476 = -1;
	volatile uint32_t t91 = 2U;

	t91 = (((x473^x474)*x475)%x476);

	if (t91 != 2147483521U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x489 = 195U;
	int8_t x490 = INT8_MIN;
	int64_t x492 = INT64_MAX;

	t92 = (((x489^x490)*x491)%x492);

	if (t92 != 189LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x509 = INT16_MIN;
	int8_t x510 = 1;
	static volatile int8_t x511 = INT8_MAX;
	int32_t t93 = 25475;

	t93 = (((x509^x510)*x511)%x512);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x513 = UINT8_MAX;
	int8_t x514 = INT8_MIN;
	volatile uint64_t x515 = UINT64_MAX;
	uint8_t x516 = 14U;
	volatile uint64_t t94 = 47681281158LLU;

	t94 = (((x513^x514)*x515)%x516);

	if (t94 != 3LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x525 = -180376461;
	static volatile int64_t x526 = -3LL;
	static int16_t x527 = INT16_MIN;
	volatile uint32_t x528 = 273703277U;
	volatile int64_t t95 = -6LL;

	t95 = (((x525^x526)*x527)%x528);

	if (t95 != -227343278LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x529 = INT8_MIN;
	volatile int8_t x530 = -21;
	int16_t x531 = -11;

	t96 = (((x529^x530)*x531)%x532);

	if (t96 != 4294966119U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x533 = INT8_MIN;
	int8_t x534 = INT8_MAX;
	static int32_t x535 = INT32_MAX;
	volatile int64_t x536 = INT64_MIN;
	int64_t t97 = 4531299738908725LL;

	t97 = (((x533^x534)*x535)%x536);

	if (t97 != -2147483647LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x546 = INT64_MAX;
	static int64_t x547 = -1LL;
	int32_t x548 = -1;
	static int64_t t98 = 61742940809861908LL;

	t98 = (((x545^x546)*x547)%x548);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x553 = 1544U;
	int32_t x554 = -1;
	int16_t x555 = INT16_MIN;
	int16_t x556 = INT16_MIN;

	t99 = (((x553^x554)*x555)%x556);

	if (t99 != 50626560U) { NG(); } else { ; }
	
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


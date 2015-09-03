#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 78U;
volatile uint8_t x17 = 11U;
static int32_t x19 = 39446;
uint16_t x22 = UINT16_MAX;
volatile int16_t x25 = -3270;
static int8_t x31 = INT8_MIN;
uint32_t x32 = 759U;
int64_t x36 = INT64_MIN;
static int8_t x37 = INT8_MIN;
int32_t x40 = INT32_MAX;
static volatile uint64_t t12 = 151004008406182LLU;
uint32_t x61 = UINT32_MAX;
int16_t x68 = -1;
static int32_t t16 = 649615140;
uint8_t x75 = UINT8_MAX;
uint16_t x77 = UINT16_MAX;
int8_t x79 = 0;
static int64_t x82 = INT64_MIN;
int64_t x84 = -1LL;
volatile int32_t x88 = 5715;
uint8_t x95 = 37U;
uint16_t x104 = 4U;
int32_t x105 = -520;
static int64_t x109 = INT64_MIN;
int32_t x110 = INT32_MIN;
volatile int64_t t27 = -1448012574LL;
volatile int8_t x120 = INT8_MIN;
volatile uint16_t x121 = 20894U;
static int8_t x124 = -21;
uint8_t x126 = UINT8_MAX;
static volatile int32_t t31 = -226117;
int32_t x146 = 23;
volatile uint16_t x147 = 523U;
int8_t x153 = -1;
static int16_t x161 = INT16_MIN;
uint32_t x175 = 75809U;
int64_t x177 = INT64_MAX;
uint16_t x179 = 15759U;
int16_t x184 = 15155;
int64_t x194 = -396851165384LL;
int64_t t43 = 1371LL;
int32_t x215 = -1;
int16_t x219 = 28;
volatile uint64_t t49 = 4498006816207316434LLU;
uint32_t x227 = 6U;
uint32_t x234 = UINT32_MAX;
uint64_t x241 = UINT64_MAX;
int32_t x244 = -680;
uint16_t x249 = UINT16_MAX;
int8_t x251 = 16;
uint8_t x266 = 97U;
int8_t x268 = INT8_MIN;
volatile uint32_t t58 = 18779633U;
static uint64_t x282 = 17515416844429LLU;
uint16_t x283 = 7489U;
int8_t x287 = -1;
int32_t x288 = -1;
static volatile int8_t x296 = -2;
static int64_t x297 = INT64_MIN;
int8_t x298 = INT8_MIN;
static int64_t t66 = 456LL;
int16_t x303 = INT16_MIN;
volatile int8_t x309 = -1;
int16_t x310 = INT16_MIN;
int16_t x311 = INT16_MIN;
static int16_t x312 = INT16_MIN;
int64_t x314 = INT64_MIN;
int8_t x321 = INT8_MAX;
int32_t x323 = INT32_MIN;
int8_t x326 = -1;
int32_t t73 = 379007;
uint64_t x352 = 98LLU;
uint16_t x354 = UINT16_MAX;
volatile uint64_t x355 = 1564636366628492LLU;
static int64_t x356 = -1LL;
uint64_t t78 = 2948LLU;
int64_t x357 = INT64_MAX;
static int64_t x360 = -656231581043103LL;
uint8_t x366 = 103U;
static int32_t x367 = -120822852;
int32_t t81 = 55885;
int64_t x372 = -14484663671775LL;
volatile int16_t x374 = -1;
volatile uint64_t x377 = 365971427LLU;
int32_t x380 = INT32_MIN;
int8_t x388 = -54;
volatile int64_t x396 = -4440541LL;
int8_t x399 = INT8_MIN;
static int32_t t88 = -1331629;
int16_t x401 = INT16_MIN;
static uint16_t x403 = 12141U;
int8_t x407 = INT8_MAX;
static int8_t x408 = -1;
int16_t x410 = INT16_MIN;
int32_t x420 = INT32_MIN;
volatile uint64_t t93 = 7356918169923LLU;
int32_t x422 = -44112;
int16_t x424 = INT16_MIN;
int32_t t94 = -3;
int16_t x425 = INT16_MIN;
uint32_t x428 = 557171U;
volatile uint8_t x430 = 27U;
uint64_t x432 = UINT64_MAX;
uint32_t x433 = 696181633U;
uint64_t x436 = 104919LLU;


void f0(void) {
	uint32_t x1 = 55949U;
	int64_t x2 = -1652112423321489260LL;
	int16_t x3 = INT16_MIN;
	uint8_t x4 = 1U;
	static volatile int64_t t0 = 270956867377051LL;

	t0 = (((x1%x2)^x3)-x4);

	if (t0 != -42356LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 342812831U;
	uint32_t x6 = 54536301U;
	uint16_t x8 = 101U;
	volatile uint32_t t1 = 501624U;

	t1 = (((x5%x6)^x7)-x8);

	if (t1 != 15595002U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = 1;
	volatile uint64_t x11 = 68239889075LLU;
	uint16_t x12 = 2U;
	volatile uint64_t t2 = 18816760617447LLU;

	t2 = (((x9%x10)^x11)-x12);

	if (t2 != 68239889073LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -1;
	int8_t x14 = -1;
	int8_t x15 = 10;
	int32_t x16 = INT32_MAX;
	volatile int32_t t3 = 0;

	t3 = (((x13%x14)^x15)-x16);

	if (t3 != -2147483637) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -1;
	int8_t x20 = 0;
	volatile int32_t t4 = -24;

	t4 = (((x17%x18)^x19)-x20);

	if (t4 != 39446) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	int16_t x23 = 27;
	int64_t x24 = INT64_MIN;
	static int64_t t5 = -963367859400654991LL;

	t5 = (((x21%x22)^x23)-x24);

	if (t5 != 9223372036854775780LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 1534449955722LLU;
	int64_t x27 = INT64_MIN;
	int64_t x28 = 1474828496LL;
	static volatile uint64_t t6 = 20820901LLU;

	t6 = (((x25%x26)^x27)-x28);

	if (t6 != 9223373042887656598LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	uint8_t x30 = UINT8_MAX;
	static int64_t t7 = -29821339793212LL;

	t7 = (((x29%x30)^x31)-x32);

	if (t7 != -760LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	volatile int8_t x34 = INT8_MIN;
	static uint64_t x35 = 3658721931LLU;
	static uint64_t t8 = 13768LLU;

	t8 = (((x33%x34)^x35)-x36);

	if (t8 != 9223372040513497739LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x38 = INT32_MIN;
	uint32_t x39 = UINT32_MAX;
	static volatile uint32_t t9 = 0U;

	t9 = (((x37%x38)^x39)-x40);

	if (t9 != 2147483776U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = UINT8_MAX;
	int8_t x42 = -45;
	volatile uint8_t x43 = UINT8_MAX;
	int64_t x44 = INT64_MAX;
	static int64_t t10 = 27026LL;

	t10 = (((x41%x42)^x43)-x44);

	if (t10 != -9223372036854775582LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int32_t x46 = -437146;
	int8_t x47 = 21;
	volatile int32_t x48 = 707;
	volatile int32_t t11 = 155;

	t11 = (((x45%x46)^x47)-x48);

	if (t11 != -814) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	volatile int8_t x50 = -11;
	int32_t x51 = 28;
	int16_t x52 = -14;

	t12 = (((x49%x50)^x51)-x52);

	if (t12 != 36LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -53002850238137LL;
	int32_t x54 = INT32_MAX;
	int64_t x55 = -93076937920LL;
	int16_t x56 = -5134;
	volatile int64_t t13 = 907266184LL;

	t13 = (((x53%x54)^x55)-x56);

	if (t13 != 92809369516LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = 8618254655045891LL;
	int16_t x58 = INT16_MAX;
	static int8_t x59 = -52;
	int8_t x60 = INT8_MIN;
	volatile int64_t t14 = 717761LL;

	t14 = (((x57%x58)^x59)-x60);

	if (t14 != -18725LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = INT8_MIN;
	volatile uint8_t x63 = 31U;
	static int32_t x64 = -3;
	volatile uint32_t t15 = 1U;

	t15 = (((x61%x62)^x63)-x64);

	if (t15 != 99U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 4U;
	int8_t x66 = -1;
	uint16_t x67 = UINT16_MAX;

	t16 = (((x65%x66)^x67)-x68);

	if (t16 != 65536) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	static int16_t x70 = -785;
	int64_t x71 = INT64_MAX;
	int32_t x72 = -1;
	static volatile int64_t t17 = -263619460LL;

	t17 = (((x69%x70)^x71)-x72);

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -227975308;
	volatile uint32_t x74 = UINT32_MAX;
	static int16_t x76 = INT16_MIN;
	uint32_t t18 = 1U;

	t18 = (((x73%x74)^x75)-x76);

	if (t18 != 4067024779U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = INT16_MIN;
	int32_t x80 = 132826;
	volatile int32_t t19 = 3814750;

	t19 = (((x77%x78)^x79)-x80);

	if (t19 != -100059) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = UINT16_MAX;
	static uint32_t x83 = 45284818U;
	int64_t t20 = -201872LL;

	t20 = (((x81%x82)^x83)-x84);

	if (t20 != 45220398LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 35782518667801LLU;
	int16_t x86 = INT16_MIN;
	int8_t x87 = INT8_MIN;
	volatile uint64_t t21 = 245281003LLU;

	t21 = (((x85%x86)^x87)-x88);

	if (t21 != 18446708291190878022LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x89 = UINT64_MAX;
	volatile int64_t x90 = INT64_MAX;
	int16_t x91 = INT16_MIN;
	static int8_t x92 = 0;
	uint64_t t22 = 14648438756918776LLU;

	t22 = (((x89%x90)^x91)-x92);

	if (t22 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	static uint64_t x94 = 14940703838813LLU;
	uint64_t x96 = UINT64_MAX;
	uint64_t t23 = 17645853803937391LLU;

	t23 = (((x93%x94)^x95)-x96);

	if (t23 != 9847821692977LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	uint32_t x98 = 63U;
	volatile int8_t x99 = 0;
	int32_t x100 = INT32_MAX;
	uint32_t t24 = 149480U;

	t24 = (((x97%x98)^x99)-x100);

	if (t24 != 2147483652U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int32_t x102 = 832026300;
	int16_t x103 = 2395;
	int64_t t25 = -1862LL;

	t25 = (((x101%x102)^x103)-x104);

	if (t25 != -2400LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = INT16_MIN;
	uint64_t x107 = UINT64_MAX;
	static int32_t x108 = INT32_MIN;
	static uint64_t t26 = 9881249125989942LLU;

	t26 = (((x105%x106)^x107)-x108);

	if (t26 != 2147484167LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x111 = 1126670LL;
	int64_t x112 = -6295032642105LL;

	t27 = (((x109%x110)^x111)-x112);

	if (t27 != 6295033768775LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static uint8_t x114 = 53U;
	uint64_t x115 = UINT64_MAX;
	static int16_t x116 = INT16_MAX;
	uint64_t t28 = 6870352664354138LLU;

	t28 = (((x113%x114)^x115)-x116);

	if (t28 != 18446744073709518870LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MIN;
	int8_t x118 = INT8_MAX;
	int8_t x119 = INT8_MIN;
	volatile int32_t t29 = -801;

	t29 = (((x117%x118)^x119)-x120);

	if (t29 != 254) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = INT8_MIN;
	int32_t x123 = INT32_MIN;
	volatile int32_t t30 = 12927;

	t30 = (((x121%x122)^x123)-x124);

	if (t30 != -2147483597) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = INT8_MAX;
	int32_t x127 = INT32_MAX;
	static int16_t x128 = 86;

	t31 = (((x125%x126)^x127)-x128);

	if (t31 != 2147483434) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -8765574977258841LL;
	volatile int32_t x130 = -1;
	volatile uint64_t x131 = UINT64_MAX;
	int16_t x132 = -1;
	static uint64_t t32 = 817875LLU;

	t32 = (((x129%x130)^x131)-x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -1;
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = INT16_MIN;
	int16_t x144 = -1;
	int32_t t33 = 997254;

	t33 = (((x141%x142)^x143)-x144);

	if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MIN;
	volatile uint32_t x148 = 260596533U;
	uint32_t t34 = 163853U;

	t34 = (((x145%x146)^x147)-x148);

	if (t34 != 4034370243U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	uint64_t x150 = UINT64_MAX;
	uint64_t x151 = 3712324176225636LLU;
	static int8_t x152 = 0;
	static volatile uint64_t t35 = 207606LLU;

	t35 = (((x149%x150)^x151)-x152);

	if (t35 != 18443031750198207844LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x154 = 31652089463LLU;
	volatile int64_t x155 = INT64_MIN;
	uint16_t x156 = 15U;
	volatile uint64_t t36 = 1988194355976LLU;

	t36 = (((x153%x154)^x155)-x156);

	if (t36 != 9223372061712737888LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x162 = UINT16_MAX;
	uint64_t x163 = 93169184552881402LLU;
	int64_t x164 = INT64_MIN;
	uint64_t t37 = 32924LLU;

	t37 = (((x161%x162)^x163)-x164);

	if (t37 != 9130202852301868282LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x173 = 386516608U;
	int8_t x174 = -1;
	static volatile int16_t x176 = INT16_MIN;
	volatile uint32_t t38 = 0U;

	t38 = (((x173%x174)^x175)-x176);

	if (t38 != 386494113U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x178 = 1LLU;
	int32_t x180 = INT32_MIN;
	static volatile uint64_t t39 = 740775773270LLU;

	t39 = (((x177%x178)^x179)-x180);

	if (t39 != 2147499407LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = -250359;
	static int32_t x182 = INT32_MAX;
	uint8_t x183 = 23U;
	volatile int32_t t40 = 98895;

	t40 = (((x181%x182)^x183)-x184);

	if (t40 != -265493) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x185 = INT32_MIN;
	volatile uint16_t x186 = UINT16_MAX;
	int16_t x187 = INT16_MIN;
	int32_t x188 = INT32_MAX;
	int32_t t41 = 429;

	t41 = (((x185%x186)^x187)-x188);

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x189 = UINT16_MAX;
	int16_t x190 = INT16_MAX;
	int8_t x191 = INT8_MAX;
	static int64_t x192 = -1LL;
	int64_t t42 = 14479452LL;

	t42 = (((x189%x190)^x191)-x192);

	if (t42 != 127LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = INT64_MIN;
	volatile int64_t x195 = INT64_MIN;
	int8_t x196 = -1;

	t43 = (((x193%x194)^x195)-x196);

	if (t43 != 9223371912941712993LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = 8;
	uint16_t x198 = 67U;
	uint16_t x199 = 973U;
	volatile uint8_t x200 = 9U;
	volatile int32_t t44 = 1472;

	t44 = (((x197%x198)^x199)-x200);

	if (t44 != 956) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x201 = 728LLU;
	int16_t x202 = -3384;
	volatile uint8_t x203 = 6U;
	static uint16_t x204 = 388U;
	static volatile uint64_t t45 = 61LLU;

	t45 = (((x201%x202)^x203)-x204);

	if (t45 != 346LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = -1LL;
	static int16_t x210 = INT16_MAX;
	uint16_t x211 = UINT16_MAX;
	volatile int16_t x212 = INT16_MIN;
	volatile int64_t t46 = 17178647429LL;

	t46 = (((x209%x210)^x211)-x212);

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = 2LL;
	int64_t x216 = 3359205017186525604LL;
	volatile int64_t t47 = -6262248LL;

	t47 = (((x213%x214)^x215)-x216);

	if (t47 != -3359205017186525605LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	int32_t x220 = -1;
	int32_t t48 = -66164839;

	t48 = (((x217%x218)^x219)-x220);

	if (t48 != 29) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x221 = UINT32_MAX;
	int32_t x222 = INT32_MAX;
	uint64_t x223 = 14408335LLU;
	static int16_t x224 = -1;

	t49 = (((x221%x222)^x223)-x224);

	if (t49 != 14408335LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = -57;
	int64_t x226 = 5LL;
	volatile uint32_t x228 = 119923840U;
	volatile int64_t t50 = -160861771554364600LL;

	t50 = (((x225%x226)^x227)-x228);

	if (t50 != -119923848LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x229 = 2249U;
	int64_t x230 = 8173637416333587LL;
	int16_t x231 = -1;
	int64_t x232 = -1LL;
	static int64_t t51 = -4LL;

	t51 = (((x229%x230)^x231)-x232);

	if (t51 != -2249LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = -6143;
	int32_t x235 = INT32_MIN;
	uint32_t x236 = 2U;
	volatile uint32_t t52 = 8U;

	t52 = (((x233%x234)^x235)-x236);

	if (t52 != 2147477503U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = 57;
	volatile int64_t x238 = 4LL;
	int64_t x239 = -12239676138574LL;
	uint8_t x240 = UINT8_MAX;
	static int64_t t53 = 27970LL;

	t53 = (((x237%x238)^x239)-x240);

	if (t53 != -12239676138828LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x242 = -35;
	int8_t x243 = INT8_MIN;
	volatile uint64_t t54 = 1955258765090386026LLU;

	t54 = (((x241%x242)^x243)-x244);

	if (t54 != 586LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x250 = INT8_MIN;
	static volatile uint32_t x252 = 54364691U;
	static volatile uint32_t t55 = 1U;

	t55 = (((x249%x250)^x251)-x252);

	if (t55 != 4240602716U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x253 = INT64_MAX;
	int64_t x254 = -1LL;
	static int16_t x255 = -1;
	int8_t x256 = INT8_MIN;
	volatile int64_t t56 = 6661737692043385LL;

	t56 = (((x253%x254)^x255)-x256);

	if (t56 != 127LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = UINT64_MAX;
	int32_t x258 = 2219;
	static volatile int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MAX;
	volatile uint64_t t57 = 3752593LLU;

	t57 = (((x257%x258)^x259)-x260);

	if (t57 != 18446744071562037036LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x265 = 10018U;
	int16_t x267 = -23;

	t58 = (((x265%x266)^x267)-x268);

	if (t58 != 114U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x269 = 5;
	uint32_t x270 = UINT32_MAX;
	uint8_t x271 = 3U;
	volatile uint64_t x272 = UINT64_MAX;
	uint64_t t59 = 2277035LLU;

	t59 = (((x269%x270)^x271)-x272);

	if (t59 != 7LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x273 = UINT16_MAX;
	static int32_t x274 = INT32_MIN;
	int32_t x275 = INT32_MIN;
	int8_t x276 = -5;
	int32_t t60 = -124;

	t60 = (((x273%x274)^x275)-x276);

	if (t60 != -2147418108) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x277 = UINT64_MAX;
	uint32_t x278 = 22265U;
	static uint32_t x279 = 4810177U;
	static uint32_t x280 = UINT32_MAX;
	static volatile uint64_t t61 = 668092715218222812LLU;

	t61 = (((x277%x278)^x279)-x280);

	if (t61 != 18446744069419386364LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x281 = 2U;
	int8_t x284 = 0;
	uint64_t t62 = 10226LLU;

	t62 = (((x281%x282)^x283)-x284);

	if (t62 != 7491LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x285 = UINT32_MAX;
	static volatile int8_t x286 = -1;
	static volatile uint32_t t63 = 969871565U;

	t63 = (((x285%x286)^x287)-x288);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = -1;
	volatile int8_t x290 = INT8_MIN;
	uint8_t x291 = 0U;
	static uint64_t x292 = UINT64_MAX;
	uint64_t t64 = 3715386070537429667LLU;

	t64 = (((x289%x290)^x291)-x292);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = -1705467LL;
	int16_t x294 = INT16_MAX;
	uint16_t x295 = 3136U;
	int64_t t65 = 2978LL;

	t65 = (((x293%x294)^x295)-x296);

	if (t65 != -2669LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x299 = 93188U;
	static volatile int32_t x300 = 60;

	t66 = (((x297%x298)^x299)-x300);

	if (t66 != 93128LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = INT16_MAX;
	static int64_t x302 = -1LL;
	int32_t x304 = INT32_MIN;
	volatile int64_t t67 = 1698950917225026LL;

	t67 = (((x301%x302)^x303)-x304);

	if (t67 != 2147450880LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x305 = 6U;
	static int32_t x306 = -1;
	uint8_t x307 = 29U;
	uint32_t x308 = 1U;
	volatile uint32_t t68 = 4111U;

	t68 = (((x305%x306)^x307)-x308);

	if (t68 != 26U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t t69 = -14;

	t69 = (((x309%x310)^x311)-x312);

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x313 = UINT64_MAX;
	int16_t x315 = INT16_MIN;
	int8_t x316 = INT8_MIN;
	uint64_t t70 = 13849690LLU;

	t70 = (((x313%x314)^x315)-x316);

	if (t70 != 9223372036854808703LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x322 = UINT8_MAX;
	int16_t x324 = INT16_MIN;
	int32_t t71 = 3;

	t71 = (((x321%x322)^x323)-x324);

	if (t71 != -2147450753) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x325 = 8571;
	static uint16_t x327 = UINT16_MAX;
	uint8_t x328 = 26U;
	volatile int32_t t72 = 503325384;

	t72 = (((x325%x326)^x327)-x328);

	if (t72 != 65509) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x333 = UINT8_MAX;
	int32_t x334 = -95444739;
	int16_t x335 = INT16_MIN;
	int32_t x336 = INT32_MIN;

	t73 = (((x333%x334)^x335)-x336);

	if (t73 != 2147451135) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x337 = INT8_MAX;
	volatile uint64_t x338 = 408990058985411542LLU;
	volatile uint32_t x339 = 4U;
	static int8_t x340 = INT8_MIN;
	volatile uint64_t t74 = 357294LLU;

	t74 = (((x337%x338)^x339)-x340);

	if (t74 != 251LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x341 = 340U;
	static volatile uint32_t x342 = UINT32_MAX;
	static int32_t x343 = -613;
	uint8_t x344 = 2U;
	uint32_t t75 = 5067459U;

	t75 = (((x341%x342)^x343)-x344);

	if (t75 != 4294966477U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x345 = INT32_MAX;
	static int8_t x346 = -1;
	volatile int16_t x347 = INT16_MAX;
	volatile int64_t x348 = INT64_MAX;
	int64_t t76 = -1LL;

	t76 = (((x345%x346)^x347)-x348);

	if (t76 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x349 = 32489U;
	int32_t x350 = INT32_MAX;
	int32_t x351 = INT32_MIN;
	volatile uint64_t t77 = 8126728796523814058LLU;

	t77 = (((x349%x350)^x351)-x352);

	if (t77 != 2147516039LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = INT8_MAX;

	t78 = (((x353%x354)^x355)-x356);

	if (t78 != 1564636366628596LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x358 = -10920497LL;
	int8_t x359 = INT8_MAX;
	int64_t t79 = -7837599532427LL;

	t79 = (((x357%x358)^x359)-x360);

	if (t79 != 656231583161125LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = INT64_MIN;
	volatile int8_t x362 = INT8_MIN;
	int64_t x363 = 4765113LL;
	int16_t x364 = 1;
	int64_t t80 = -852814928841LL;

	t80 = (((x361%x362)^x363)-x364);

	if (t80 != 4765112LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = 3;
	volatile uint8_t x368 = 2U;

	t81 = (((x365%x366)^x367)-x368);

	if (t81 != -120822851) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x369 = 5U;
	int64_t x370 = INT64_MIN;
	int16_t x371 = 0;
	int64_t t82 = -3LL;

	t82 = (((x369%x370)^x371)-x372);

	if (t82 != 14484663671780LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x373 = 2;
	volatile int32_t x375 = INT32_MIN;
	uint32_t x376 = 1036U;
	volatile uint32_t t83 = 29481U;

	t83 = (((x373%x374)^x375)-x376);

	if (t83 != 2147482612U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x378 = -23;
	int64_t x379 = INT64_MIN;
	volatile uint64_t t84 = 507582LLU;

	t84 = (((x377%x378)^x379)-x380);

	if (t84 != 9223372039368230883LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x381 = 1232985873877008LLU;
	volatile uint16_t x382 = 206U;
	int16_t x383 = -1;
	uint32_t x384 = 1347963U;
	volatile uint64_t t85 = 508LLU;

	t85 = (((x381%x382)^x383)-x384);

	if (t85 != 18446744073708203590LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = INT8_MIN;
	static int16_t x386 = INT16_MAX;
	static uint32_t x387 = UINT32_MAX;
	static volatile uint32_t t86 = 805313802U;

	t86 = (((x385%x386)^x387)-x388);

	if (t86 != 181U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = INT16_MAX;
	uint32_t x394 = 79170U;
	int32_t x395 = 1051091244;
	volatile int64_t t87 = -91494LL;

	t87 = (((x393%x394)^x395)-x396);

	if (t87 != 1055514800LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x397 = 337U;
	uint8_t x398 = UINT8_MAX;
	uint16_t x400 = 924U;

	t88 = (((x397%x398)^x399)-x400);

	if (t88 != -970) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x402 = -24;
	int8_t x404 = INT8_MIN;
	int32_t t89 = 111;

	t89 = (((x401%x402)^x403)-x404);

	if (t89 != -12011) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MIN;
	volatile int64_t t90 = -118752LL;

	t90 = (((x405%x406)^x407)-x408);

	if (t90 != 128LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x409 = INT8_MIN;
	uint8_t x411 = UINT8_MAX;
	int64_t x412 = INT64_MIN;
	volatile int64_t t91 = 1192121LL;

	t91 = (((x409%x410)^x411)-x412);

	if (t91 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x413 = UINT64_MAX;
	int32_t x414 = -181;
	volatile int16_t x415 = INT16_MIN;
	int8_t x416 = -55;
	uint64_t t92 = 299632915887LLU;

	t92 = (((x413%x414)^x415)-x416);

	if (t92 != 18446744073709519083LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x417 = -9053;
	uint64_t x418 = UINT64_MAX;
	uint64_t x419 = 2304824305114932513LLU;

	t93 = (((x417%x418)^x419)-x420);

	if (t93 != 16141919770742110594LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x421 = -1;
	int32_t x423 = 1;

	t94 = (((x421%x422)^x423)-x424);

	if (t94 != 32766) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x426 = -6;
	int16_t x427 = INT16_MIN;
	volatile uint32_t t95 = 7835U;

	t95 = (((x425%x426)^x427)-x428);

	if (t95 != 4294442891U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x429 = -1LL;
	uint32_t x431 = 157U;
	static volatile uint64_t t96 = 226621LLU;

	t96 = (((x429%x430)^x431)-x432);

	if (t96 != 18446744073709551459LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x434 = 714209437244LLU;
	static uint32_t x435 = 693813U;
	uint64_t t97 = 1594LLU;

	t97 = (((x433%x434)^x435)-x436);

	if (t97 != 695393245LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x437 = INT32_MIN;
	static int64_t x438 = -1LL;
	int16_t x439 = -84;
	volatile int64_t x440 = INT64_MIN;
	volatile int64_t t98 = -15LL;

	t98 = (((x437%x438)^x439)-x440);

	if (t98 != 9223372036854775724LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x441 = -22586457LL;
	uint8_t x442 = 1U;
	uint64_t x443 = UINT64_MAX;
	static uint8_t x444 = 0U;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (((x441%x442)^x443)-x444);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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


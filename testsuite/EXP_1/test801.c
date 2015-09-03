#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = -36;
volatile int64_t x13 = 64394163LL;
int64_t x15 = INT64_MIN;
int16_t x16 = INT16_MAX;
int32_t x19 = -1;
static volatile int16_t x23 = INT16_MIN;
uint8_t x24 = UINT8_MAX;
uint16_t x25 = 1371U;
uint32_t x35 = 431387U;
int8_t x45 = -1;
int8_t x57 = -1;
uint8_t x60 = UINT8_MAX;
uint32_t x62 = UINT32_MAX;
volatile int32_t t15 = 67078728;
static int16_t x66 = INT16_MIN;
volatile int8_t x68 = INT8_MAX;
static volatile uint64_t x71 = 4609906961207478695LLU;
int32_t t17 = -177;
uint32_t x76 = UINT32_MAX;
static uint8_t x80 = 1U;
int8_t x82 = 3;
static uint32_t x84 = UINT32_MAX;
static int32_t t20 = -15178;
uint32_t x91 = 300195632U;
int8_t x93 = INT8_MIN;
static int16_t x103 = INT16_MIN;
volatile int32_t t25 = 58;
int32_t t27 = -25003258;
static int64_t x117 = -106689582973529LL;
static int32_t x125 = INT32_MIN;
int16_t x128 = 3559;
int16_t x129 = -1;
uint32_t x132 = 38421U;
uint32_t x139 = 15137U;
volatile int32_t t33 = 1;
volatile uint8_t x156 = 2U;
int8_t x159 = 1;
int16_t x164 = INT16_MAX;
int32_t x169 = -1;
volatile int32_t x180 = INT32_MAX;
int64_t x181 = INT64_MAX;
volatile int8_t x187 = INT8_MIN;
uint16_t x192 = UINT16_MAX;
volatile int32_t t47 = 3951403;
static int64_t x197 = -1LL;
int8_t x202 = INT8_MAX;
static volatile int8_t x205 = INT8_MIN;
uint8_t x211 = 4U;
int32_t t54 = -27;
static int32_t x226 = -73563607;
uint64_t x230 = 497677LLU;
volatile int64_t x234 = INT64_MAX;
volatile int32_t t57 = 31;
volatile uint32_t x246 = 1988216030U;
static int16_t x250 = -1;
int64_t x253 = INT64_MAX;
volatile int8_t x259 = 1;
static uint8_t x262 = 2U;
int8_t x264 = -1;
uint32_t x273 = 262638001U;
int32_t x274 = INT32_MIN;
int64_t x276 = INT64_MIN;
int32_t x278 = -1;
volatile int32_t x289 = INT32_MIN;
uint8_t x290 = 8U;
int8_t x309 = INT8_MIN;
int32_t t78 = -278470;
int16_t x326 = 1;
static int32_t t82 = 679778029;
static uint8_t x339 = UINT8_MAX;
int16_t x340 = -5;
uint64_t x344 = 1291779879219093326LLU;
static int16_t x350 = -1314;
int8_t x354 = 10;
int8_t x355 = INT8_MAX;
static int64_t x356 = -1LL;
volatile int32_t t88 = 528;
volatile int64_t x364 = -930756697714573638LL;
int32_t x366 = INT32_MIN;
int64_t x367 = -2870928135951LL;
volatile int32_t t93 = 65;
int32_t t94 = -13878;
uint16_t x386 = UINT16_MAX;
int8_t x387 = 0;
int32_t x401 = -7753356;
int16_t x402 = INT16_MIN;
uint32_t x404 = 4U;


void f0(void) {
	int32_t x1 = 1453023;
	uint32_t x2 = 7U;
	int8_t x4 = INT8_MAX;
	static volatile int32_t t0 = 1;

	t0 = (((x1%x2)<=x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = 1;
	int64_t x7 = -1843440697295826LL;
	volatile int64_t x8 = INT64_MAX;
	volatile int32_t t1 = -720031264;

	t1 = (((x5%x6)<=x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int8_t x10 = INT8_MIN;
	static uint16_t x11 = 2158U;
	static volatile uint64_t x12 = 683515033904LLU;
	volatile int32_t t2 = 0;

	t2 = (((x9%x10)<=x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -1;
	volatile int32_t t3 = -1690;

	t3 = (((x13%x14)<=x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static int32_t x18 = INT32_MIN;
	int32_t x20 = INT32_MIN;
	int32_t t4 = -1;

	t4 = (((x17%x18)<=x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = UINT16_MAX;
	volatile uint16_t x22 = 7U;
	int32_t t5 = 2081;

	t5 = (((x21%x22)<=x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x26 = -1;
	uint8_t x27 = 9U;
	int16_t x28 = -16;
	volatile int32_t t6 = -7;

	t6 = (((x25%x26)<=x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	int8_t x30 = 24;
	uint8_t x31 = 0U;
	int64_t x32 = INT64_MIN;
	int32_t t7 = -26;

	t7 = (((x29%x30)<=x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	static int8_t x34 = -1;
	int64_t x36 = -1LL;
	int32_t t8 = 1039816;

	t8 = (((x33%x34)<=x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 29LLU;
	int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MIN;
	uint64_t x40 = 80LLU;
	static int32_t t9 = 42249665;

	t9 = (((x37%x38)<=x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MAX;
	volatile int8_t x42 = INT8_MAX;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = -1;
	volatile int32_t t10 = 7;

	t10 = (((x41%x42)<=x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MAX;
	static int8_t x47 = 5;
	uint8_t x48 = 1U;
	volatile int32_t t11 = -173973;

	t11 = (((x45%x46)<=x47)==x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MAX;
	static volatile int64_t x50 = -1LL;
	uint64_t x51 = 5131612LLU;
	int8_t x52 = INT8_MIN;
	static volatile int32_t t12 = 7464;

	t12 = (((x49%x50)<=x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = 1085246;
	static int32_t x54 = -6635142;
	uint16_t x55 = UINT16_MAX;
	int8_t x56 = 5;
	volatile int32_t t13 = 918503851;

	t13 = (((x53%x54)<=x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MIN;
	static uint32_t x59 = 1U;
	int32_t t14 = 328104;

	t14 = (((x57%x58)<=x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	int8_t x63 = INT8_MIN;
	uint16_t x64 = 206U;

	t15 = (((x61%x62)<=x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 364U;
	volatile uint32_t x67 = 6635U;
	int32_t t16 = -3415;

	t16 = (((x65%x66)<=x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -5386;
	int64_t x70 = -1747911584839LL;
	static volatile uint16_t x72 = UINT16_MAX;

	t17 = (((x69%x70)<=x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x73 = 19479281U;
	uint32_t x74 = UINT32_MAX;
	int8_t x75 = -43;
	int32_t t18 = 1;

	t18 = (((x73%x74)<=x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	uint8_t x78 = 9U;
	int16_t x79 = INT16_MAX;
	static volatile int32_t t19 = 101176;

	t19 = (((x77%x78)<=x79)==x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 1U;
	static int8_t x83 = INT8_MIN;

	t20 = (((x81%x82)<=x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 30;
	static int16_t x86 = INT16_MIN;
	uint8_t x87 = 1U;
	int64_t x88 = -1LL;
	static volatile int32_t t21 = -1538;

	t21 = (((x85%x86)<=x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	int16_t x90 = INT16_MAX;
	uint64_t x92 = 1017953LLU;
	int32_t t22 = -101263518;

	t22 = (((x89%x90)<=x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x94 = UINT8_MAX;
	volatile uint32_t x95 = 285U;
	uint32_t x96 = 697U;
	static volatile int32_t t23 = -8524;

	t23 = (((x93%x94)<=x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	static int16_t x102 = INT16_MAX;
	uint16_t x104 = 799U;
	volatile int32_t t24 = 68973;

	t24 = (((x101%x102)<=x103)==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x105 = 2572867895LLU;
	volatile int16_t x106 = -284;
	int32_t x107 = INT32_MIN;
	static int16_t x108 = INT16_MIN;

	t25 = (((x105%x106)<=x107)==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 4U;
	static volatile int32_t x110 = INT32_MIN;
	int64_t x111 = -30367059869LL;
	volatile uint16_t x112 = UINT16_MAX;
	static volatile int32_t t26 = -5271;

	t26 = (((x109%x110)<=x111)==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MIN;
	volatile int64_t x114 = -33948028906557LL;
	int8_t x115 = 0;
	volatile int16_t x116 = INT16_MIN;

	t27 = (((x113%x114)<=x115)==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x118 = 10041593552706LL;
	static int16_t x119 = 76;
	int32_t x120 = INT32_MIN;
	static volatile int32_t t28 = 11738089;

	t28 = (((x117%x118)<=x119)==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	volatile uint16_t x122 = 24938U;
	int32_t x123 = 35;
	int8_t x124 = INT8_MIN;
	int32_t t29 = -1059931;

	t29 = (((x121%x122)<=x123)==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x126 = -1;
	int64_t x127 = INT64_MIN;
	volatile int32_t t30 = 719407;

	t30 = (((x125%x126)<=x127)==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x130 = -96LL;
	static int32_t x131 = 1;
	int32_t t31 = 7;

	t31 = (((x129%x130)<=x131)==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = 7;
	uint32_t x134 = 990098119U;
	int16_t x135 = -1;
	volatile uint64_t x136 = 126LLU;
	int32_t t32 = 168;

	t32 = (((x133%x134)<=x135)==x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 187619858LLU;
	int16_t x138 = INT16_MIN;
	int64_t x140 = -1LL;

	t33 = (((x137%x138)<=x139)==x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x141 = 8U;
	int64_t x142 = INT64_MAX;
	uint64_t x143 = 19LLU;
	volatile int64_t x144 = -7733924559520803LL;
	int32_t t34 = -7406399;

	t34 = (((x141%x142)<=x143)==x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x145 = UINT64_MAX;
	int8_t x146 = INT8_MAX;
	int16_t x147 = -963;
	volatile int8_t x148 = -7;
	static int32_t t35 = -458853539;

	t35 = (((x145%x146)<=x147)==x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x149 = UINT32_MAX;
	int16_t x150 = INT16_MIN;
	volatile int16_t x151 = 803;
	int64_t x152 = -5194485508153740LL;
	volatile int32_t t36 = 2258972;

	t36 = (((x149%x150)<=x151)==x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = 16U;
	uint32_t x154 = UINT32_MAX;
	int16_t x155 = INT16_MIN;
	volatile int32_t t37 = -333334;

	t37 = (((x153%x154)<=x155)==x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x157 = INT64_MIN;
	int8_t x158 = INT8_MIN;
	uint32_t x160 = 75142U;
	static volatile int32_t t38 = -31606;

	t38 = (((x157%x158)<=x159)==x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = 1997U;
	static uint16_t x162 = 873U;
	static int8_t x163 = INT8_MIN;
	volatile int32_t t39 = -62850;

	t39 = (((x161%x162)<=x163)==x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MIN;
	uint32_t x166 = UINT32_MAX;
	volatile int8_t x167 = INT8_MIN;
	uint8_t x168 = UINT8_MAX;
	static int32_t t40 = 90;

	t40 = (((x165%x166)<=x167)==x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x170 = 30748101LLU;
	uint16_t x171 = UINT16_MAX;
	uint8_t x172 = 0U;
	int32_t t41 = -464497;

	t41 = (((x169%x170)<=x171)==x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x173 = 12U;
	static int16_t x174 = -1;
	volatile uint32_t x175 = 14250U;
	int32_t x176 = -1;
	int32_t t42 = -5237;

	t42 = (((x173%x174)<=x175)==x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = -1;
	int8_t x178 = INT8_MAX;
	int16_t x179 = INT16_MAX;
	int32_t t43 = -145165578;

	t43 = (((x177%x178)<=x179)==x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x182 = INT16_MIN;
	int32_t x183 = -5;
	int64_t x184 = INT64_MAX;
	volatile int32_t t44 = 1894930;

	t44 = (((x181%x182)<=x183)==x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = -1;
	int16_t x186 = -68;
	int8_t x188 = INT8_MIN;
	volatile int32_t t45 = 677985416;

	t45 = (((x185%x186)<=x187)==x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x189 = 1144004U;
	int16_t x190 = -1834;
	int8_t x191 = -3;
	static int32_t t46 = -12853499;

	t46 = (((x189%x190)<=x191)==x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = 1;
	volatile uint8_t x194 = 93U;
	static uint16_t x195 = UINT16_MAX;
	static int64_t x196 = INT64_MIN;

	t47 = (((x193%x194)<=x195)==x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x198 = INT32_MAX;
	int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MAX;
	int32_t t48 = 3977012;

	t48 = (((x197%x198)<=x199)==x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = -1;
	uint64_t x203 = 348302903388970LLU;
	int8_t x204 = 33;
	volatile int32_t t49 = -800;

	t49 = (((x201%x202)<=x203)==x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x206 = 3U;
	static volatile int16_t x207 = INT16_MAX;
	int64_t x208 = INT64_MAX;
	static volatile int32_t t50 = -2936439;

	t50 = (((x205%x206)<=x207)==x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x209 = 24U;
	int64_t x210 = -1LL;
	int64_t x212 = INT64_MAX;
	static volatile int32_t t51 = -25;

	t51 = (((x209%x210)<=x211)==x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = 1772;
	int8_t x214 = INT8_MIN;
	static int64_t x215 = -1LL;
	static uint8_t x216 = UINT8_MAX;
	int32_t t52 = 17274;

	t52 = (((x213%x214)<=x215)==x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x217 = 35794387U;
	int8_t x218 = -1;
	volatile int32_t x219 = -1;
	volatile int64_t x220 = -1LL;
	static int32_t t53 = 59;

	t53 = (((x217%x218)<=x219)==x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = INT8_MIN;
	volatile int32_t x222 = -1;
	volatile int32_t x223 = -1;
	int32_t x224 = INT32_MIN;

	t54 = (((x221%x222)<=x223)==x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x225 = INT8_MAX;
	int8_t x227 = INT8_MAX;
	int8_t x228 = -1;
	volatile int32_t t55 = 2;

	t55 = (((x225%x226)<=x227)==x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x229 = INT32_MAX;
	static int16_t x231 = -1;
	int64_t x232 = 84751LL;
	volatile int32_t t56 = 0;

	t56 = (((x229%x230)<=x231)==x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x233 = UINT16_MAX;
	volatile int8_t x235 = INT8_MAX;
	uint8_t x236 = 2U;

	t57 = (((x233%x234)<=x235)==x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x237 = UINT64_MAX;
	int8_t x238 = INT8_MAX;
	int32_t x239 = -828995;
	int32_t x240 = -2287241;
	int32_t t58 = -7584045;

	t58 = (((x237%x238)<=x239)==x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = -1LL;
	uint16_t x243 = 3027U;
	volatile int8_t x244 = INT8_MIN;
	int32_t t59 = 0;

	t59 = (((x241%x242)<=x243)==x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MAX;
	uint64_t x247 = UINT64_MAX;
	static uint16_t x248 = 8301U;
	static int32_t t60 = -1;

	t60 = (((x245%x246)<=x247)==x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x249 = INT8_MAX;
	int64_t x251 = INT64_MIN;
	static int64_t x252 = INT64_MAX;
	int32_t t61 = 195701;

	t61 = (((x249%x250)<=x251)==x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x254 = 5;
	int32_t x255 = INT32_MAX;
	int8_t x256 = INT8_MAX;
	int32_t t62 = -15;

	t62 = (((x253%x254)<=x255)==x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x257 = 1U;
	static volatile uint16_t x258 = UINT16_MAX;
	uint16_t x260 = 23U;
	volatile int32_t t63 = 11;

	t63 = (((x257%x258)<=x259)==x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = -1;
	uint32_t x263 = 180905831U;
	static int32_t t64 = -529432016;

	t64 = (((x261%x262)<=x263)==x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = INT64_MAX;
	int16_t x266 = INT16_MIN;
	uint16_t x267 = UINT16_MAX;
	static volatile int16_t x268 = INT16_MAX;
	volatile int32_t t65 = 1010052;

	t65 = (((x265%x266)<=x267)==x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x269 = INT8_MIN;
	static int64_t x270 = INT64_MIN;
	int8_t x271 = -28;
	static uint16_t x272 = UINT16_MAX;
	volatile int32_t t66 = -1900;

	t66 = (((x269%x270)<=x271)==x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x275 = 4988939U;
	int32_t t67 = -118791;

	t67 = (((x273%x274)<=x275)==x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x277 = INT32_MIN;
	int16_t x279 = INT16_MIN;
	static int8_t x280 = 11;
	static volatile int32_t t68 = -5662040;

	t68 = (((x277%x278)<=x279)==x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = 462053111LLU;
	uint16_t x282 = 92U;
	uint64_t x283 = 2299LLU;
	int64_t x284 = -1LL;
	static int32_t t69 = -4453;

	t69 = (((x281%x282)<=x283)==x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = INT64_MIN;
	static int32_t x286 = -418065;
	static volatile uint32_t x287 = 893119U;
	volatile int32_t x288 = INT32_MAX;
	volatile int32_t t70 = -1;

	t70 = (((x285%x286)<=x287)==x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x291 = 7U;
	uint64_t x292 = 8047LLU;
	volatile int32_t t71 = 2;

	t71 = (((x289%x290)<=x291)==x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = UINT16_MAX;
	int8_t x294 = INT8_MAX;
	static int64_t x295 = INT64_MIN;
	static int8_t x296 = -1;
	volatile int32_t t72 = -12;

	t72 = (((x293%x294)<=x295)==x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = INT64_MIN;
	static volatile int16_t x298 = -937;
	static int8_t x299 = -1;
	static volatile uint64_t x300 = 1923478577945LLU;
	static volatile int32_t t73 = -1;

	t73 = (((x297%x298)<=x299)==x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MIN;
	uint8_t x302 = 84U;
	volatile int32_t x303 = -1;
	static uint32_t x304 = 649U;
	volatile int32_t t74 = 218;

	t74 = (((x301%x302)<=x303)==x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x305 = 1810LL;
	int64_t x306 = INT64_MAX;
	int32_t x307 = -1;
	int32_t x308 = INT32_MIN;
	volatile int32_t t75 = -953376529;

	t75 = (((x305%x306)<=x307)==x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x310 = 1;
	volatile int16_t x311 = INT16_MAX;
	int64_t x312 = INT64_MIN;
	int32_t t76 = 253;

	t76 = (((x309%x310)<=x311)==x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x313 = INT8_MIN;
	uint64_t x314 = UINT64_MAX;
	int64_t x315 = INT64_MIN;
	uint64_t x316 = 14985424893459473LLU;
	int32_t t77 = 1046511165;

	t77 = (((x313%x314)<=x315)==x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = -463;
	volatile uint16_t x318 = UINT16_MAX;
	static int8_t x319 = INT8_MAX;
	volatile int8_t x320 = -3;

	t78 = (((x317%x318)<=x319)==x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x321 = UINT8_MAX;
	int32_t x322 = 592604;
	volatile uint16_t x323 = UINT16_MAX;
	volatile uint64_t x324 = 47LLU;
	static int32_t t79 = 3027;

	t79 = (((x321%x322)<=x323)==x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x325 = UINT8_MAX;
	uint64_t x327 = 31950838788852LLU;
	static int8_t x328 = 59;
	volatile int32_t t80 = -112866321;

	t80 = (((x325%x326)<=x327)==x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x329 = 28540U;
	int64_t x330 = INT64_MAX;
	volatile int32_t x331 = INT32_MIN;
	int8_t x332 = -1;
	int32_t t81 = 291898;

	t81 = (((x329%x330)<=x331)==x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = 127;
	static int16_t x334 = -6860;
	uint8_t x335 = 2U;
	static int32_t x336 = -50;

	t82 = (((x333%x334)<=x335)==x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = -127;
	volatile int64_t x338 = INT64_MIN;
	static int32_t t83 = 2968601;

	t83 = (((x337%x338)<=x339)==x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = -1;
	volatile int64_t x342 = -1LL;
	int8_t x343 = INT8_MAX;
	volatile int32_t t84 = -401;

	t84 = (((x341%x342)<=x343)==x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = -1;
	uint64_t x346 = 2521924LLU;
	int8_t x347 = INT8_MAX;
	volatile uint32_t x348 = 432862916U;
	volatile int32_t t85 = 23274;

	t85 = (((x345%x346)<=x347)==x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = -1;
	int64_t x351 = -29LL;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t86 = -329;

	t86 = (((x349%x350)<=x351)==x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x353 = UINT8_MAX;
	volatile int32_t t87 = -1793;

	t87 = (((x353%x354)<=x355)==x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x357 = 1;
	uint64_t x358 = UINT64_MAX;
	uint16_t x359 = 3U;
	static int16_t x360 = -1;

	t88 = (((x357%x358)<=x359)==x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x361 = INT8_MIN;
	int64_t x362 = -630864LL;
	static int8_t x363 = INT8_MAX;
	volatile int32_t t89 = 974777;

	t89 = (((x361%x362)<=x363)==x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x365 = -1;
	int16_t x368 = INT16_MAX;
	static volatile int32_t t90 = -1821666;

	t90 = (((x365%x366)<=x367)==x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x370 = 957639149;
	volatile int32_t x371 = INT32_MIN;
	volatile int8_t x372 = 0;
	volatile int32_t t91 = 29386;

	t91 = (((x369%x370)<=x371)==x372);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = 1;
	static volatile uint64_t x374 = 105207965494LLU;
	int32_t x375 = INT32_MAX;
	static uint32_t x376 = 11204455U;
	static int32_t t92 = 1;

	t92 = (((x373%x374)<=x375)==x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x377 = 22U;
	static uint64_t x378 = 2LLU;
	int64_t x379 = -12975166LL;
	uint32_t x380 = UINT32_MAX;

	t93 = (((x377%x378)<=x379)==x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x381 = UINT16_MAX;
	int16_t x382 = -1;
	int64_t x383 = INT64_MAX;
	volatile int64_t x384 = INT64_MIN;

	t94 = (((x381%x382)<=x383)==x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = INT64_MIN;
	volatile int32_t x388 = -1;
	volatile int32_t t95 = -106433;

	t95 = (((x385%x386)<=x387)==x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x389 = 53U;
	uint16_t x390 = UINT16_MAX;
	static uint16_t x391 = 457U;
	int8_t x392 = INT8_MIN;
	volatile int32_t t96 = 83702;

	t96 = (((x389%x390)<=x391)==x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x393 = INT64_MIN;
	int64_t x394 = -128813962042657LL;
	int64_t x395 = 117889832280LL;
	volatile uint64_t x396 = 813009206643721LLU;
	volatile int32_t t97 = -1235188;

	t97 = (((x393%x394)<=x395)==x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x397 = 922930023U;
	int8_t x398 = -1;
	volatile uint8_t x399 = 20U;
	uint16_t x400 = 19U;
	volatile int32_t t98 = -4;

	t98 = (((x397%x398)<=x399)==x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x403 = INT16_MIN;
	static int32_t t99 = 58;

	t99 = (((x401%x402)<=x403)==x404);

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


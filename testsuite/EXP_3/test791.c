#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x3 = UINT32_MAX;
uint64_t x6 = 3048670230406104193LLU;
int16_t x14 = 15926;
volatile uint64_t t3 = 26650732LLU;
int8_t x21 = -1;
int32_t x28 = INT32_MIN;
int64_t t8 = -6310672991228LL;
int64_t x41 = -5547496LL;
uint32_t x50 = 421895U;
uint8_t x55 = 3U;
int32_t t15 = -122030;
volatile int32_t x67 = INT32_MIN;
int64_t t17 = -7LL;
uint32_t t19 = 90513U;
static volatile int8_t x85 = INT8_MIN;
volatile uint32_t t21 = 30148458U;
static volatile uint16_t x91 = 4942U;
uint8_t x95 = 41U;
static uint8_t x99 = UINT8_MAX;
static int8_t x105 = 41;
int32_t x106 = INT32_MAX;
uint32_t x115 = 9622583U;
uint32_t x123 = UINT32_MAX;
uint8_t x125 = UINT8_MAX;
int32_t x128 = 693;
static int32_t x132 = -1;
static int32_t x136 = INT32_MIN;
volatile int32_t t33 = 77751876;
int16_t x137 = -252;
int16_t x140 = -1;
static int8_t x142 = 0;
static int16_t x149 = -1;
static volatile uint64_t t37 = 946499295938555543LLU;
int64_t x154 = INT64_MIN;
static uint32_t x155 = UINT32_MAX;
static int8_t x159 = INT8_MIN;
volatile int32_t x167 = INT32_MAX;
int64_t x170 = 148LL;
int8_t x187 = -1;
static int64_t x190 = INT64_MAX;
int32_t x199 = INT32_MAX;
int32_t t48 = -367184742;
volatile int32_t x214 = INT32_MIN;
static int32_t x226 = -967;
int16_t x228 = 766;
volatile uint8_t x232 = 25U;
int32_t x238 = INT32_MIN;
uint64_t t58 = 1955140LLU;
int16_t x241 = -1;
int32_t t61 = -4745;
int16_t x255 = INT16_MIN;
static volatile int32_t x256 = 50329;
volatile int32_t t62 = -1;
static int64_t x258 = -1LL;
int8_t x260 = INT8_MIN;
uint16_t x267 = 605U;
volatile int8_t x270 = -5;
volatile int32_t x272 = 357045974;
uint32_t x280 = 369325051U;
uint16_t x282 = 16163U;
int32_t t69 = -1583437;
uint32_t x294 = 55U;
uint64_t t72 = 2557083376311494LLU;
int64_t x301 = -1LL;
int32_t x309 = INT32_MAX;
static int16_t x311 = 25;
static volatile int32_t t75 = 2431204;
volatile uint64_t x315 = 314857LLU;
volatile uint64_t x320 = UINT64_MAX;
int16_t x321 = INT16_MIN;
volatile int32_t t79 = 2639;
volatile int32_t t81 = -76061;
volatile uint64_t x337 = 93879728463LLU;
static volatile int16_t x338 = INT16_MIN;
volatile int8_t x339 = INT8_MAX;
static uint16_t x342 = 2107U;
static int16_t x344 = 8;
int64_t x351 = INT64_MAX;
int32_t t86 = 20541323;
int32_t t87 = 851;
int32_t t88 = -213372282;
static int64_t x368 = -1LL;
volatile int64_t t89 = 3LL;
static int64_t x372 = 315332LL;
uint64_t x376 = UINT64_MAX;
static volatile int16_t x384 = 7;
static volatile int32_t t93 = -1;
volatile int32_t x385 = INT32_MIN;
uint16_t x387 = 3882U;
static int16_t x389 = INT16_MIN;
int64_t x393 = INT64_MIN;
int16_t x395 = INT16_MIN;
uint32_t x396 = UINT32_MAX;
static uint32_t t96 = 244914305U;
volatile int8_t x397 = -1;
int8_t x399 = 1;
static int64_t x401 = INT64_MAX;
int16_t x403 = 1077;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint64_t x2 = 3LLU;
	int8_t x4 = INT8_MIN;
	volatile uint32_t t0 = 775U;

	t0 = ((x1<x2)&(x3%x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 316822904449LLU;
	int64_t x7 = -1LL;
	volatile int16_t x8 = -1;
	static int64_t t1 = -139584556525715LL;

	t1 = ((x5<x6)&(x7%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile int64_t x10 = INT64_MIN;
	int8_t x11 = INT8_MIN;
	int64_t x12 = INT64_MAX;
	int64_t t2 = -1965015LL;

	t2 = ((x9<x10)&(x11%x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	volatile uint64_t x15 = 464LLU;
	uint16_t x16 = 89U;

	t3 = ((x13<x14)&(x15%x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 13U;
	uint64_t x18 = 2208802587LLU;
	int32_t x19 = INT32_MIN;
	int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = 251932;

	t4 = ((x17<x18)&(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 164U;
	uint8_t x23 = 1U;
	static int32_t x24 = -47806;
	static int32_t t5 = -1287582;

	t5 = ((x21<x22)&(x23%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 21U;
	static int32_t x26 = -10664;
	uint64_t x27 = 55LLU;
	uint64_t t6 = 21662606033103LLU;

	t6 = ((x25<x26)&(x27%x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint32_t x30 = 14U;
	uint8_t x31 = 15U;
	static uint32_t x32 = 480642U;
	volatile uint32_t t7 = 1937950409U;

	t7 = ((x29<x30)&(x31%x32));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	uint64_t x34 = 1931760392LLU;
	int64_t x35 = 4082754LL;
	volatile int32_t x36 = INT32_MIN;

	t8 = ((x33<x34)&(x35%x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MAX;
	int64_t x38 = INT64_MIN;
	volatile int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MAX;
	static int64_t t9 = -32999817LL;

	t9 = ((x37<x38)&(x39%x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -5458122341351LL;
	volatile int16_t x43 = INT16_MIN;
	uint8_t x44 = 14U;
	int32_t t10 = -578890962;

	t10 = ((x41<x42)&(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int8_t x46 = -1;
	int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MAX;
	volatile int64_t t11 = 8LL;

	t11 = ((x45<x46)&(x47%x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -115146016LL;
	static int32_t x51 = 34;
	uint32_t x52 = 1419333U;
	uint32_t t12 = 131287U;

	t12 = ((x49<x50)&(x51%x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -61247224;
	int8_t x54 = 31;
	int32_t x56 = 564316;
	volatile int32_t t13 = 6501;

	t13 = ((x53<x54)&(x55%x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	volatile int8_t x58 = -1;
	int32_t x59 = -1;
	uint16_t x60 = 4U;
	static volatile int32_t t14 = 0;

	t14 = ((x57<x58)&(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	static uint32_t x62 = 0U;
	int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MIN;

	t15 = ((x61<x62)&(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile int32_t x66 = 662044;
	static volatile int32_t x68 = INT32_MIN;
	int32_t t16 = 5;

	t16 = ((x65<x66)&(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int8_t x70 = -1;
	volatile int64_t x71 = INT64_MIN;
	int32_t x72 = -1892;

	t17 = ((x69<x70)&(x71%x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	static int64_t x74 = -102511967LL;
	int64_t x75 = INT64_MAX;
	volatile uint16_t x76 = UINT16_MAX;
	static int64_t t18 = -7092533552LL;

	t18 = ((x73<x74)&(x75%x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x77 = 12U;
	int32_t x78 = INT32_MAX;
	int32_t x79 = 175;
	static uint32_t x80 = UINT32_MAX;

	t19 = ((x77<x78)&(x79%x80));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 2369195U;
	static int64_t x82 = INT64_MAX;
	uint32_t x83 = 977U;
	int64_t x84 = -4251352059LL;
	volatile int64_t t20 = 7377577912116102LL;

	t20 = ((x81<x82)&(x83%x84));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x86 = -1;
	int8_t x87 = INT8_MIN;
	uint32_t x88 = 1463341U;

	t21 = ((x85<x86)&(x87%x88));

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 2U;
	uint8_t x90 = 30U;
	static int32_t x92 = INT32_MIN;
	int32_t t22 = -21;

	t22 = ((x89<x90)&(x91%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int16_t x94 = -1;
	static volatile uint32_t x96 = 60U;
	static uint32_t t23 = 26U;

	t23 = ((x93<x94)&(x95%x96));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	static int32_t x98 = -1;
	int8_t x100 = INT8_MAX;
	int32_t t24 = 7;

	t24 = ((x97<x98)&(x99%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	static uint8_t x102 = 126U;
	volatile uint16_t x103 = 1U;
	int64_t x104 = INT64_MIN;
	int64_t t25 = -1LL;

	t25 = ((x101<x102)&(x103%x104));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x107 = INT16_MIN;
	int8_t x108 = INT8_MIN;
	static int32_t t26 = 179097382;

	t26 = ((x105<x106)&(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	static int64_t x110 = INT64_MIN;
	int16_t x111 = INT16_MIN;
	int64_t x112 = -1LL;
	static volatile int64_t t27 = -69527783793979916LL;

	t27 = ((x109<x110)&(x111%x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 616U;
	static uint16_t x114 = 25496U;
	uint32_t x116 = UINT32_MAX;
	volatile uint32_t t28 = 404927U;

	t28 = ((x113<x114)&(x115%x116));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = -1;
	int64_t x118 = -1LL;
	int8_t x119 = INT8_MIN;
	int32_t x120 = 2;
	static int32_t t29 = -148696384;

	t29 = ((x117<x118)&(x119%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	int16_t x122 = INT16_MIN;
	volatile uint16_t x124 = UINT16_MAX;
	static volatile uint32_t t30 = 393U;

	t30 = ((x121<x122)&(x123%x124));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x126 = -1;
	uint32_t x127 = 3U;
	volatile uint32_t t31 = 7918163U;

	t31 = ((x125<x126)&(x127%x128));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	static int64_t x130 = INT64_MAX;
	int8_t x131 = INT8_MIN;
	int32_t t32 = -208;

	t32 = ((x129<x130)&(x131%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MIN;
	uint64_t x134 = 9279070LLU;
	int8_t x135 = -1;

	t33 = ((x133<x134)&(x135%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x138 = 0;
	int32_t x139 = INT32_MIN;
	static volatile int32_t t34 = 445516;

	t34 = ((x137<x138)&(x139%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -235061;
	int16_t x143 = INT16_MIN;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = 950988468;

	t35 = ((x141<x142)&(x143%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	int8_t x146 = INT8_MIN;
	uint8_t x147 = UINT8_MAX;
	volatile int64_t x148 = INT64_MIN;
	int64_t t36 = 61LL;

	t36 = ((x145<x146)&(x147%x148));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MAX;
	static uint64_t x151 = UINT64_MAX;
	int64_t x152 = INT64_MIN;

	t37 = ((x149<x150)&(x151%x152));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 12279U;
	int32_t x156 = INT32_MAX;
	static volatile uint32_t t38 = 120U;

	t38 = ((x153<x154)&(x155%x156));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x157 = 67655949424LLU;
	int64_t x158 = INT64_MIN;
	static volatile int16_t x160 = 366;
	volatile int32_t t39 = 42047935;

	t39 = ((x157<x158)&(x159%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	static volatile int32_t x162 = INT32_MIN;
	static volatile int8_t x163 = INT8_MAX;
	uint32_t x164 = UINT32_MAX;
	static uint32_t t40 = 3467U;

	t40 = ((x161<x162)&(x163%x164));

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	volatile uint32_t x166 = UINT32_MAX;
	uint16_t x168 = 70U;
	volatile int32_t t41 = 1563;

	t41 = ((x165<x166)&(x167%x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	int64_t x171 = INT64_MIN;
	int32_t x172 = INT32_MIN;
	static volatile int64_t t42 = -1473LL;

	t42 = ((x169<x170)&(x171%x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = -1;
	volatile int8_t x174 = -1;
	uint64_t x175 = 211959059292429LLU;
	int8_t x176 = -1;
	uint64_t t43 = 829253831447LLU;

	t43 = ((x173<x174)&(x175%x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MAX;
	int64_t x182 = -18325252LL;
	static int64_t x183 = -1LL;
	volatile uint8_t x184 = UINT8_MAX;
	volatile int64_t t44 = 653657424LL;

	t44 = ((x181<x182)&(x183%x184));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MAX;
	int8_t x186 = -1;
	int32_t x188 = INT32_MAX;
	static volatile int32_t t45 = -1;

	t45 = ((x185<x186)&(x187%x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = UINT8_MAX;
	static int8_t x191 = -2;
	int64_t x192 = -98LL;
	static volatile int64_t t46 = -1389512LL;

	t46 = ((x189<x190)&(x191%x192));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x193 = INT32_MAX;
	int8_t x194 = INT8_MIN;
	static uint8_t x195 = 6U;
	static volatile int32_t x196 = INT32_MIN;
	volatile int32_t t47 = 0;

	t47 = ((x193<x194)&(x195%x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x197 = -1;
	int16_t x198 = -3;
	static uint8_t x200 = 91U;

	t48 = ((x197<x198)&(x199%x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MIN;
	int64_t x203 = -1LL;
	static uint8_t x204 = 6U;
	volatile int64_t t49 = -221773662388349LL;

	t49 = ((x201<x202)&(x203%x204));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = -1;
	volatile int8_t x206 = 5;
	uint16_t x207 = UINT16_MAX;
	int8_t x208 = INT8_MIN;
	volatile int32_t t50 = 115;

	t50 = ((x205<x206)&(x207%x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = 1376;
	int8_t x210 = INT8_MIN;
	static int32_t x211 = INT32_MIN;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t51 = -462663;

	t51 = ((x209<x210)&(x211%x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = 97646U;
	static int32_t x215 = 446235;
	uint8_t x216 = 10U;
	volatile int32_t t52 = 0;

	t52 = ((x213<x214)&(x215%x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x217 = 2287679LLU;
	int64_t x218 = INT64_MIN;
	int64_t x219 = INT64_MIN;
	uint16_t x220 = UINT16_MAX;
	volatile int64_t t53 = 89027LL;

	t53 = ((x217<x218)&(x219%x220));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MAX;
	int8_t x222 = INT8_MIN;
	volatile uint64_t x223 = UINT64_MAX;
	uint32_t x224 = UINT32_MAX;
	uint64_t t54 = 3122552786415112528LLU;

	t54 = ((x221<x222)&(x223%x224));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x225 = 2U;
	uint32_t x227 = 349U;
	volatile uint32_t t55 = 441U;

	t55 = ((x225<x226)&(x227%x228));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x229 = INT32_MIN;
	static volatile int64_t x230 = 686286595098137633LL;
	int8_t x231 = -1;
	volatile int32_t t56 = -222197;

	t56 = ((x229<x230)&(x231%x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = -1;
	int32_t x234 = INT32_MIN;
	uint32_t x235 = 177U;
	volatile uint64_t x236 = 130597778128LLU;
	static volatile uint64_t t57 = 40310LLU;

	t57 = ((x233<x234)&(x235%x236));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x237 = 117266365LLU;
	uint16_t x239 = 14420U;
	static uint64_t x240 = 5LLU;

	t58 = ((x237<x238)&(x239%x240));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x242 = UINT64_MAX;
	static volatile int64_t x243 = INT64_MIN;
	static int16_t x244 = -177;
	int64_t t59 = 1LL;

	t59 = ((x241<x242)&(x243%x244));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = 19556LL;
	uint32_t x246 = UINT32_MAX;
	uint8_t x247 = 46U;
	uint16_t x248 = 49U;
	int32_t t60 = -301;

	t60 = ((x245<x246)&(x247%x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = -14014LL;
	volatile uint32_t x250 = 2U;
	uint16_t x251 = UINT16_MAX;
	int32_t x252 = INT32_MIN;

	t61 = ((x249<x250)&(x251%x252));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = 357U;
	uint32_t x254 = 7516U;

	t62 = ((x253<x254)&(x255%x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x257 = 1;
	int8_t x259 = -20;
	int32_t t63 = -15444;

	t63 = ((x257<x258)&(x259%x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = 1807443478U;
	uint8_t x262 = 29U;
	volatile uint16_t x263 = 23511U;
	volatile int8_t x264 = INT8_MAX;
	int32_t t64 = 815162459;

	t64 = ((x261<x262)&(x263%x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = -1;
	static uint64_t x268 = 100359LLU;
	uint64_t t65 = 1644016332LLU;

	t65 = ((x265<x266)&(x267%x268));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x269 = INT64_MAX;
	uint32_t x271 = UINT32_MAX;
	static uint32_t t66 = 892U;

	t66 = ((x269<x270)&(x271%x272));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x273 = INT8_MIN;
	int32_t x274 = 31722;
	static uint32_t x275 = UINT32_MAX;
	uint32_t x276 = UINT32_MAX;
	volatile uint32_t t67 = 12913U;

	t67 = ((x273<x274)&(x275%x276));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = 2U;
	static int8_t x278 = INT8_MIN;
	volatile int16_t x279 = INT16_MIN;
	static uint32_t t68 = 9771615U;

	t68 = ((x277<x278)&(x279%x280));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = INT64_MIN;
	int32_t x283 = -47294;
	volatile int8_t x284 = INT8_MIN;

	t69 = ((x281<x282)&(x283%x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = -7197;
	int64_t x290 = INT64_MAX;
	uint8_t x291 = UINT8_MAX;
	uint32_t x292 = 485U;
	volatile uint32_t t70 = 233U;

	t70 = ((x289<x290)&(x291%x292));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MIN;
	int16_t x295 = INT16_MIN;
	static int32_t x296 = -110;
	static int32_t t71 = -14;

	t71 = ((x293<x294)&(x295%x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x297 = 53U;
	int64_t x298 = 416374010901946LL;
	int64_t x299 = -157946956487LL;
	volatile uint64_t x300 = UINT64_MAX;

	t72 = ((x297<x298)&(x299%x300));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MAX;
	int32_t x304 = INT32_MAX;
	int32_t t73 = -1583285;

	t73 = ((x301<x302)&(x303%x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x305 = INT32_MAX;
	int8_t x306 = INT8_MIN;
	uint16_t x307 = 5327U;
	int16_t x308 = INT16_MAX;
	static int32_t t74 = 1745;

	t74 = ((x305<x306)&(x307%x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x310 = -1LL;
	static uint16_t x312 = 1U;

	t75 = ((x309<x310)&(x311%x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x313 = INT16_MAX;
	int8_t x314 = INT8_MIN;
	volatile int64_t x316 = -1LL;
	volatile uint64_t t76 = 8745384LLU;

	t76 = ((x313<x314)&(x315%x316));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x317 = 18475U;
	volatile int8_t x318 = 2;
	int16_t x319 = INT16_MIN;
	volatile uint64_t t77 = 1911055862LLU;

	t77 = ((x317<x318)&(x319%x320));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x322 = INT32_MAX;
	int32_t x323 = INT32_MAX;
	uint16_t x324 = 463U;
	static volatile int32_t t78 = -13672800;

	t78 = ((x321<x322)&(x323%x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x325 = 22256060U;
	uint8_t x326 = 7U;
	int16_t x327 = -1;
	uint16_t x328 = 1836U;

	t79 = ((x325<x326)&(x327%x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x329 = UINT8_MAX;
	volatile int32_t x330 = 632831340;
	volatile uint16_t x331 = 5902U;
	uint64_t x332 = UINT64_MAX;
	uint64_t t80 = 580271538LLU;

	t80 = ((x329<x330)&(x331%x332));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = -1;
	int16_t x334 = -1;
	static int8_t x335 = -1;
	uint16_t x336 = 1U;

	t81 = ((x333<x334)&(x335%x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x340 = 1577U;
	volatile int32_t t82 = 1825;

	t82 = ((x337<x338)&(x339%x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x341 = -1;
	volatile int8_t x343 = -1;
	int32_t t83 = 6536557;

	t83 = ((x341<x342)&(x343%x344));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = 930662417236668989LL;
	volatile int8_t x346 = INT8_MAX;
	volatile int8_t x347 = -1;
	int32_t x348 = -1;
	volatile int32_t t84 = 205658471;

	t84 = ((x345<x346)&(x347%x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = -1;
	static volatile int64_t x350 = -1LL;
	uint8_t x352 = 99U;
	int64_t t85 = 2171000362772850848LL;

	t85 = ((x349<x350)&(x351%x352));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x353 = INT16_MIN;
	uint8_t x354 = 105U;
	volatile int8_t x355 = -3;
	volatile int16_t x356 = INT16_MAX;

	t86 = ((x353<x354)&(x355%x356));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = INT32_MIN;
	uint8_t x358 = UINT8_MAX;
	volatile int16_t x359 = 450;
	uint16_t x360 = UINT16_MAX;

	t87 = ((x357<x358)&(x359%x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = INT16_MAX;
	int64_t x362 = INT64_MIN;
	static int8_t x363 = INT8_MIN;
	int32_t x364 = -1;

	t88 = ((x361<x362)&(x363%x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = INT32_MIN;
	int32_t x367 = -846;

	t89 = ((x365<x366)&(x367%x368));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x369 = INT64_MIN;
	int32_t x370 = -1;
	int32_t x371 = -16621018;
	static int64_t t90 = -4792137401119943LL;

	t90 = ((x369<x370)&(x371%x372));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x373 = 17086250394141LLU;
	static volatile uint64_t x374 = 1785189738123123356LLU;
	static int32_t x375 = 2945;
	volatile uint64_t t91 = 302184350351676961LLU;

	t91 = ((x373<x374)&(x375%x376));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = INT16_MIN;
	static int8_t x378 = -1;
	int32_t x379 = INT32_MAX;
	int64_t x380 = -164LL;
	int64_t t92 = 12324958379LL;

	t92 = ((x377<x378)&(x379%x380));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x381 = 5;
	uint64_t x382 = 0LLU;
	uint16_t x383 = 361U;

	t93 = ((x381<x382)&(x383%x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x386 = INT32_MIN;
	uint32_t x388 = 25020U;
	volatile uint32_t t94 = 7739U;

	t94 = ((x385<x386)&(x387%x388));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x390 = INT64_MAX;
	volatile int32_t x391 = -1;
	static int8_t x392 = -9;
	int32_t t95 = -762;

	t95 = ((x389<x390)&(x391%x392));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x394 = 175638LLU;

	t96 = ((x393<x394)&(x395%x396));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x398 = INT32_MAX;
	int8_t x400 = INT8_MIN;
	volatile int32_t t97 = 2696;

	t97 = ((x397<x398)&(x399%x400));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x402 = INT16_MAX;
	volatile int8_t x404 = INT8_MIN;
	int32_t t98 = 1169978;

	t98 = ((x401<x402)&(x403%x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = 1;
	int32_t x406 = INT32_MAX;
	int16_t x407 = -1;
	uint64_t x408 = 1037996LLU;
	uint64_t t99 = 3LLU;

	t99 = ((x405<x406)&(x407%x408));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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


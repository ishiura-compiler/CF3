#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = UINT64_MAX;
volatile int32_t t0 = 0;
int16_t x5 = -1;
int64_t x6 = INT64_MAX;
int64_t x13 = INT64_MIN;
uint64_t x22 = UINT64_MAX;
int8_t x23 = -1;
static volatile int32_t t5 = 15443759;
uint16_t x25 = 12062U;
static volatile uint8_t x27 = 4U;
volatile int32_t t7 = -927581;
uint32_t x40 = UINT32_MAX;
int32_t t9 = 0;
int16_t x43 = INT16_MIN;
int8_t x45 = 6;
int32_t x49 = INT32_MIN;
int64_t x53 = -359475126LL;
int32_t x55 = 57445408;
int64_t t13 = 287853143995142182LL;
int64_t x58 = -1LL;
int32_t x61 = -1;
static int16_t x63 = INT16_MIN;
uint64_t x69 = UINT64_MAX;
volatile uint64_t t17 = UINT64_MAX;
int16_t x73 = -1;
static volatile int64_t x74 = INT64_MIN;
static uint64_t x82 = UINT64_MAX;
volatile int64_t x83 = INT64_MIN;
int32_t x91 = INT32_MIN;
volatile uint32_t x93 = 2U;
volatile int32_t x96 = 1;
int16_t x107 = INT16_MAX;
uint16_t x111 = 20U;
int16_t x115 = -1;
volatile int32_t t28 = -740;
volatile int64_t x126 = -24LL;
uint64_t x136 = 1685221LLU;
int16_t x137 = INT16_MIN;
uint8_t x142 = 0U;
int32_t t35 = INT32_MIN;
int16_t x145 = INT16_MIN;
volatile int16_t x150 = -1;
volatile int64_t x151 = -1265510141032583LL;
volatile uint32_t x159 = 28U;
uint16_t x168 = 0U;
int32_t x169 = INT32_MAX;
static int32_t x176 = INT32_MIN;
int16_t x178 = -1;
volatile int64_t x183 = INT64_MIN;
static volatile int32_t t47 = INT32_MAX;
int16_t x195 = INT16_MIN;
int8_t x202 = -1;
static volatile int32_t t50 = INT32_MIN;
uint16_t x206 = 63U;
uint16_t x212 = UINT16_MAX;
uint16_t x214 = 1U;
volatile int32_t t53 = -256939;
uint64_t x218 = 2LLU;
volatile int32_t t54 = 169;
static volatile uint32_t x223 = UINT32_MAX;
uint16_t x225 = 76U;
static volatile int32_t x226 = -4017604;
static int64_t x229 = -1LL;
static uint32_t x235 = UINT32_MAX;
int64_t x237 = 26760787214372548LL;
volatile int16_t x241 = INT16_MAX;
volatile int32_t x242 = INT32_MAX;
int8_t x243 = INT8_MIN;
static volatile int32_t t62 = -2252;
int64_t x264 = 3158558053665LL;
volatile int32_t t65 = 382;
uint32_t x274 = 31U;
static int8_t x276 = 7;
uint16_t x278 = 9188U;
int32_t x281 = INT32_MIN;
int16_t x288 = -1;
int32_t x289 = INT32_MAX;
volatile uint32_t x298 = UINT32_MAX;
volatile int32_t t73 = INT32_MIN;
volatile int8_t x305 = INT8_MIN;
int32_t t74 = 70798;
volatile int32_t t75 = -72;
int64_t x315 = INT64_MIN;
volatile uint32_t x317 = 23U;
static uint16_t x319 = UINT16_MAX;
int16_t x322 = -1;
int64_t x326 = INT64_MIN;
int8_t x336 = 1;
int16_t x343 = INT16_MIN;
int32_t x347 = -1;
volatile int64_t t83 = INT64_MIN;
static int16_t x349 = INT16_MIN;
static volatile int32_t t84 = 98337;
int32_t x353 = -3834;
volatile int64_t x355 = INT64_MIN;
int32_t x356 = 1705076;
int16_t x358 = INT16_MIN;
int8_t x359 = INT8_MAX;
int32_t x365 = INT32_MIN;
volatile int64_t x372 = INT64_MIN;
uint32_t x374 = 236207647U;
int16_t x387 = INT16_MIN;
int64_t x388 = -1LL;
int64_t x392 = 276996248228957613LL;
int32_t x398 = INT32_MIN;
uint64_t x400 = 4508192077052LLU;
int64_t x405 = INT64_MAX;
volatile int64_t t98 = 26LL;
uint32_t x409 = UINT32_MAX;
static uint16_t x412 = 205U;
static uint32_t t99 = UINT32_MAX;


void f0(void) {
	uint8_t x1 = 21U;
	volatile int16_t x2 = INT16_MIN;
	int64_t x3 = 143112033503035224LL;

	t0 = (x1^((x2%x3)==x4));

	if (t0 != 21) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x7 = 653607U;
	int32_t x8 = 36122167;
	int32_t t1 = -122337741;

	t1 = (x5^((x6%x7)==x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 1507U;
	int8_t x10 = -1;
	static volatile int16_t x11 = -148;
	int64_t x12 = 0LL;
	volatile uint32_t t2 = 16166U;

	t2 = (x9^((x10%x11)==x12));

	if (t2 != 1507U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = -1;
	int16_t x15 = -6806;
	int8_t x16 = -6;
	static int64_t t3 = INT64_MIN;

	t3 = (x13^((x14%x15)==x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 89U;
	volatile uint16_t x18 = UINT16_MAX;
	int64_t x19 = -8LL;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = -1022;

	t4 = (x17^((x18%x19)==x20));

	if (t4 != 89) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -13;
	uint8_t x24 = UINT8_MAX;

	t5 = (x21^((x22%x23)==x24));

	if (t5 != -13) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x26 = INT16_MIN;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = 31048539;

	t6 = (x25^((x26%x27)==x28));

	if (t6 != 12062) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int16_t x30 = 0;
	int16_t x31 = INT16_MAX;
	int8_t x32 = -10;

	t7 = (x29^((x30%x31)==x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	int32_t x34 = INT32_MIN;
	uint16_t x35 = 6U;
	uint8_t x36 = UINT8_MAX;
	int32_t t8 = 2;

	t8 = (x33^((x34%x35)==x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = INT16_MIN;
	static int16_t x38 = INT16_MIN;
	int16_t x39 = 88;

	t9 = (x37^((x38%x39)==x40));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	volatile int32_t x42 = -1;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = INT32_MAX;

	t10 = (x41^((x42%x43)==x44));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = INT16_MAX;
	uint16_t x47 = 1U;
	int32_t x48 = INT32_MAX;
	int32_t t11 = -8230;

	t11 = (x45^((x46%x47)==x48));

	if (t11 != 6) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x50 = -2861;
	uint16_t x51 = 14U;
	int8_t x52 = -1;
	volatile int32_t t12 = INT32_MIN;

	t12 = (x49^((x50%x51)==x52));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -7;
	static volatile int64_t x56 = -1LL;

	t13 = (x53^((x54%x55)==x56));

	if (t13 != -359475126LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 43996100U;
	static int64_t x59 = INT64_MAX;
	uint32_t x60 = 33U;
	volatile uint32_t t14 = 28156178U;

	t14 = (x57^((x58%x59)==x60));

	if (t14 != 43996100U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x62 = UINT8_MAX;
	int16_t x64 = INT16_MIN;
	static volatile int32_t t15 = -91542;

	t15 = (x61^((x62%x63)==x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 0;
	int32_t x66 = -1;
	int32_t x67 = -4379;
	int64_t x68 = INT64_MIN;
	static int32_t t16 = -2603083;

	t16 = (x65^((x66%x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x70 = 62U;
	static int16_t x71 = 493;
	volatile int16_t x72 = -99;

	t17 = (x69^((x70%x71)==x72));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x75 = -1;
	int16_t x76 = INT16_MAX;
	volatile int32_t t18 = 2;

	t18 = (x73^((x74%x75)==x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 186271U;
	uint16_t x78 = 25U;
	int16_t x79 = INT16_MIN;
	int32_t x80 = 38662850;
	volatile uint32_t t19 = 9U;

	t19 = (x77^((x78%x79)==x80));

	if (t19 != 186271U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int64_t x84 = 2320416367661LL;
	volatile int32_t t20 = 1;

	t20 = (x81^((x82%x83)==x84));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x85 = UINT64_MAX;
	static int8_t x86 = INT8_MIN;
	uint8_t x87 = UINT8_MAX;
	volatile int8_t x88 = INT8_MIN;
	volatile uint64_t t21 = 221991738766476102LLU;

	t21 = (x85^((x86%x87)==x88));

	if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x89 = -92;
	volatile int16_t x90 = -92;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t22 = -6;

	t22 = (x89^((x90%x91)==x92));

	if (t22 != -92) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x94 = UINT32_MAX;
	uint16_t x95 = 36U;
	uint32_t t23 = 2027U;

	t23 = (x93^((x94%x95)==x96));

	if (t23 != 2U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = UINT64_MAX;
	int64_t x98 = INT64_MIN;
	uint16_t x99 = 76U;
	uint64_t x100 = 1654LLU;
	static uint64_t t24 = UINT64_MAX;

	t24 = (x97^((x98%x99)==x100));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 27U;
	volatile uint8_t x102 = 3U;
	int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MIN;
	int32_t t25 = -213252689;

	t25 = (x101^((x102%x103)==x104));

	if (t25 != 27) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = -1;
	uint16_t x108 = 17U;
	static volatile int32_t t26 = 162545548;

	t26 = (x105^((x106%x107)==x108));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = -1;
	static uint64_t x110 = 8056624637LLU;
	int8_t x112 = INT8_MIN;
	int32_t t27 = 415659;

	t27 = (x109^((x110%x111)==x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -2;
	int32_t x114 = INT32_MAX;
	int64_t x116 = 80397LL;

	t28 = (x113^((x114%x115)==x116));

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 3U;
	uint64_t x118 = 1LLU;
	int8_t x119 = INT8_MIN;
	int64_t x120 = -395068616628LL;
	int32_t t29 = 265000;

	t29 = (x117^((x118%x119)==x120));

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = 10LLU;
	int16_t x122 = 1;
	int64_t x123 = -698LL;
	volatile int64_t x124 = INT64_MIN;
	volatile uint64_t t30 = 2167112963854366938LLU;

	t30 = (x121^((x122%x123)==x124));

	if (t30 != 10LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = UINT64_MAX;
	static int16_t x127 = INT16_MAX;
	volatile int8_t x128 = 0;
	static volatile uint64_t t31 = UINT64_MAX;

	t31 = (x125^((x126%x127)==x128));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 125U;
	static int32_t x130 = INT32_MIN;
	volatile int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = -2;

	t32 = (x129^((x130%x131)==x132));

	if (t32 != 125) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static uint16_t x134 = 25U;
	static int64_t x135 = -130351876573632LL;
	volatile int32_t t33 = 10841874;

	t33 = (x133^((x134%x135)==x136));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x138 = 897755652119LLU;
	int32_t x139 = -48262339;
	int16_t x140 = INT16_MIN;
	int32_t t34 = -21;

	t34 = (x137^((x138%x139)==x140));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = INT32_MIN;
	int32_t x143 = -1;
	volatile int16_t x144 = INT16_MIN;

	t35 = (x141^((x142%x143)==x144));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = -1;
	int32_t x147 = 29966122;
	int64_t x148 = INT64_MAX;
	volatile int32_t t36 = 83684129;

	t36 = (x145^((x146%x147)==x148));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	volatile int64_t x152 = INT64_MIN;
	volatile int32_t t37 = -188;

	t37 = (x149^((x150%x151)==x152));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 3119;
	int64_t x154 = INT64_MIN;
	int16_t x155 = -1;
	static int32_t x156 = -20532;
	volatile int32_t t38 = -2114180;

	t38 = (x153^((x154%x155)==x156));

	if (t38 != 3119) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	int8_t x158 = -1;
	volatile int8_t x160 = -1;
	static volatile int32_t t39 = -55361;

	t39 = (x157^((x158%x159)==x160));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	volatile int8_t x162 = INT8_MAX;
	int32_t x163 = -1;
	static int16_t x164 = INT16_MAX;
	volatile int32_t t40 = -12;

	t40 = (x161^((x162%x163)==x164));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = 22;
	uint8_t x166 = UINT8_MAX;
	int64_t x167 = INT64_MIN;
	volatile int32_t t41 = 44039076;

	t41 = (x165^((x166%x167)==x168));

	if (t41 != 22) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = INT64_MAX;
	int32_t x171 = 1252;
	uint32_t x172 = 18U;
	static int32_t t42 = INT32_MAX;

	t42 = (x169^((x170%x171)==x172));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = 876532LL;
	volatile int16_t x174 = -1;
	int16_t x175 = INT16_MIN;
	volatile int64_t t43 = -3524LL;

	t43 = (x173^((x174%x175)==x176));

	if (t43 != 876532LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	int64_t x179 = -217530709709230822LL;
	int8_t x180 = -1;
	volatile int32_t t44 = 36056;

	t44 = (x177^((x178%x179)==x180));

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	uint32_t x182 = 305325U;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -55273;

	t45 = (x181^((x182%x183)==x184));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 0U;
	static int16_t x186 = -4545;
	uint32_t x187 = UINT32_MAX;
	uint8_t x188 = 3U;
	int32_t t46 = 9;

	t46 = (x185^((x186%x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	volatile int32_t x190 = -1;
	static int32_t x191 = -9;
	uint32_t x192 = 188U;

	t47 = (x189^((x190%x191)==x192));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 10U;
	int16_t x194 = INT16_MAX;
	static int8_t x196 = INT8_MAX;
	volatile int32_t t48 = -645579;

	t48 = (x193^((x194%x195)==x196));

	if (t48 != 10) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 1U;
	int8_t x198 = INT8_MAX;
	volatile int16_t x199 = 109;
	uint8_t x200 = UINT8_MAX;
	int32_t t49 = 89753497;

	t49 = (x197^((x198%x199)==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	volatile uint8_t x203 = 19U;
	uint8_t x204 = UINT8_MAX;

	t50 = (x201^((x202%x203)==x204));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = 7819447;
	static uint8_t x207 = 93U;
	static uint8_t x208 = 1U;
	volatile int32_t t51 = -1;

	t51 = (x205^((x206%x207)==x208));

	if (t51 != 7819447) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = INT32_MIN;
	int32_t x210 = INT32_MIN;
	static uint32_t x211 = UINT32_MAX;
	volatile int32_t t52 = INT32_MIN;

	t52 = (x209^((x210%x211)==x212));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	int16_t x215 = INT16_MAX;
	int16_t x216 = INT16_MIN;

	t53 = (x213^((x214%x215)==x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	int16_t x219 = INT16_MAX;
	static volatile int64_t x220 = INT64_MAX;

	t54 = (x217^((x218%x219)==x220));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MIN;
	static uint32_t x222 = 560U;
	int8_t x224 = -1;
	volatile int32_t t55 = -7062;

	t55 = (x221^((x222%x223)==x224));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x227 = INT32_MIN;
	static volatile int64_t x228 = 3362400LL;
	static int32_t t56 = -441532;

	t56 = (x225^((x226%x227)==x228));

	if (t56 != 76) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x230 = 18;
	static int64_t x231 = 1460188559250LL;
	static int32_t x232 = 188554;
	volatile int64_t t57 = -240LL;

	t57 = (x229^((x230%x231)==x232));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MIN;
	static volatile int16_t x234 = INT16_MIN;
	int8_t x236 = INT8_MIN;
	volatile int32_t t58 = INT32_MIN;

	t58 = (x233^((x234%x235)==x236));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x238 = UINT64_MAX;
	int16_t x239 = INT16_MAX;
	volatile int32_t x240 = INT32_MIN;
	volatile int64_t t59 = -104152LL;

	t59 = (x237^((x238%x239)==x240));

	if (t59 != 26760787214372548LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x244 = 7;
	int32_t t60 = -194;

	t60 = (x241^((x242%x243)==x244));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	int32_t x246 = -188925;
	int32_t x247 = -137;
	static int16_t x248 = -7;
	volatile int64_t t61 = INT64_MIN;

	t61 = (x245^((x246%x247)==x248));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x253 = INT16_MAX;
	int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MIN;
	int16_t x256 = INT16_MAX;

	t62 = (x253^((x254%x255)==x256));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MAX;
	int64_t x258 = 1092046320453LL;
	int32_t x259 = INT32_MAX;
	static int16_t x260 = INT16_MIN;
	int32_t t63 = -1;

	t63 = (x257^((x258%x259)==x260));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = -1LL;
	int64_t x262 = -9LL;
	int8_t x263 = -1;
	volatile int64_t t64 = -756538730625836109LL;

	t64 = (x261^((x262%x263)==x264));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x265 = INT16_MIN;
	int8_t x266 = -3;
	uint64_t x267 = 44LLU;
	uint32_t x268 = 927U;

	t65 = (x265^((x266%x267)==x268));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x269 = UINT16_MAX;
	int32_t x270 = -1;
	int64_t x271 = INT64_MIN;
	uint16_t x272 = UINT16_MAX;
	static int32_t t66 = -32154557;

	t66 = (x269^((x270%x271)==x272));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x273 = INT32_MIN;
	uint32_t x275 = 1U;
	int32_t t67 = INT32_MIN;

	t67 = (x273^((x274%x275)==x276));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x277 = 7U;
	volatile int32_t x279 = INT32_MIN;
	int16_t x280 = -12461;
	volatile int32_t t68 = -16671499;

	t68 = (x277^((x278%x279)==x280));

	if (t68 != 7) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x282 = INT16_MIN;
	volatile uint16_t x283 = 3U;
	uint16_t x284 = 2737U;
	int32_t t69 = INT32_MIN;

	t69 = (x281^((x282%x283)==x284));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = 0U;
	uint32_t x286 = 224U;
	int32_t x287 = INT32_MIN;
	volatile int32_t t70 = 385337;

	t70 = (x285^((x286%x287)==x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x290 = INT8_MIN;
	uint32_t x291 = 1692685U;
	volatile int8_t x292 = INT8_MAX;
	static volatile int32_t t71 = INT32_MAX;

	t71 = (x289^((x290%x291)==x292));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x297 = -560901;
	uint32_t x299 = 10571682U;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t72 = 36994199;

	t72 = (x297^((x298%x299)==x300));

	if (t72 != -560901) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MIN;
	uint16_t x302 = UINT16_MAX;
	int32_t x303 = INT32_MIN;
	uint8_t x304 = 108U;

	t73 = (x301^((x302%x303)==x304));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x306 = -1;
	uint64_t x307 = 1342918LLU;
	int32_t x308 = INT32_MIN;

	t74 = (x305^((x306%x307)==x308));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = INT8_MIN;
	uint64_t x310 = UINT64_MAX;
	int32_t x311 = INT32_MIN;
	int32_t x312 = INT32_MAX;

	t75 = (x309^((x310%x311)==x312));

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x313 = 2LLU;
	static int16_t x314 = 1;
	static int32_t x316 = -7476;
	volatile uint64_t t76 = 398296900004LLU;

	t76 = (x313^((x314%x315)==x316));

	if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x318 = -2;
	int16_t x320 = INT16_MIN;
	volatile uint32_t t77 = 865U;

	t77 = (x317^((x318%x319)==x320));

	if (t77 != 23U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int16_t x323 = -1;
	int64_t x324 = -1LL;
	volatile int32_t t78 = -3;

	t78 = (x321^((x322%x323)==x324));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = -1;
	int64_t x327 = -1LL;
	int16_t x328 = -1;
	volatile int32_t t79 = -2504859;

	t79 = (x325^((x326%x327)==x328));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = 58;
	int8_t x330 = -1;
	int32_t x331 = 11;
	int64_t x332 = -1LL;
	volatile int32_t t80 = -202229;

	t80 = (x329^((x330%x331)==x332));

	if (t80 != 59) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x333 = UINT8_MAX;
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = INT16_MAX;
	static volatile int32_t t81 = 8309499;

	t81 = (x333^((x334%x335)==x336));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x341 = -3368815324360LL;
	int64_t x342 = 352707229560752080LL;
	uint32_t x344 = UINT32_MAX;
	static int64_t t82 = -433472496LL;

	t82 = (x341^((x342%x343)==x344));

	if (t82 != -3368815324360LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = INT64_MIN;
	static int16_t x346 = INT16_MIN;
	int64_t x348 = -1LL;

	t83 = (x345^((x346%x347)==x348));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x350 = -4915;
	int8_t x351 = INT8_MIN;
	static uint8_t x352 = 3U;

	t84 = (x349^((x350%x351)==x352));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x354 = -622624LL;
	static volatile int32_t t85 = -2177;

	t85 = (x353^((x354%x355)==x356));

	if (t85 != -3834) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = -1;
	int64_t x360 = INT64_MAX;
	volatile int32_t t86 = 228487;

	t86 = (x357^((x358%x359)==x360));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x361 = -8133LL;
	static uint16_t x362 = 340U;
	int64_t x363 = 12LL;
	uint8_t x364 = 10U;
	volatile int64_t t87 = 2480646806640LL;

	t87 = (x361^((x362%x363)==x364));

	if (t87 != -8133LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x366 = -1;
	int32_t x367 = -77;
	uint16_t x368 = 45U;
	volatile int32_t t88 = INT32_MIN;

	t88 = (x365^((x366%x367)==x368));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x369 = -1;
	int8_t x370 = 14;
	int8_t x371 = INT8_MIN;
	int32_t t89 = -18;

	t89 = (x369^((x370%x371)==x372));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x373 = UINT32_MAX;
	uint8_t x375 = UINT8_MAX;
	static volatile int16_t x376 = INT16_MIN;
	volatile uint32_t t90 = UINT32_MAX;

	t90 = (x373^((x374%x375)==x376));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x377 = -1LL;
	static int32_t x378 = 0;
	uint32_t x379 = 24699593U;
	volatile int32_t x380 = -338520278;
	volatile int64_t t91 = 0LL;

	t91 = (x377^((x378%x379)==x380));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x381 = UINT64_MAX;
	static volatile int8_t x382 = 0;
	static volatile int64_t x383 = -994LL;
	uint64_t x384 = 49339759804277671LLU;
	uint64_t t92 = UINT64_MAX;

	t92 = (x381^((x382%x383)==x384));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = INT32_MAX;
	int16_t x386 = INT16_MIN;
	static int32_t t93 = INT32_MAX;

	t93 = (x385^((x386%x387)==x388));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x389 = -1169;
	int64_t x390 = 1110669735499LL;
	int32_t x391 = -1;
	volatile int32_t t94 = 117475;

	t94 = (x389^((x390%x391)==x392));

	if (t94 != -1169) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x393 = 11137219697591970LLU;
	int16_t x394 = INT16_MIN;
	int32_t x395 = -20589;
	uint16_t x396 = 253U;
	static volatile uint64_t t95 = 94194LLU;

	t95 = (x393^((x394%x395)==x396));

	if (t95 != 11137219697591970LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x397 = INT64_MAX;
	volatile uint8_t x399 = UINT8_MAX;
	volatile int64_t t96 = INT64_MAX;

	t96 = (x397^((x398%x399)==x400));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x401 = INT64_MIN;
	int8_t x402 = -1;
	static int32_t x403 = -431831;
	int64_t x404 = INT64_MIN;
	int64_t t97 = INT64_MIN;

	t97 = (x401^((x402%x403)==x404));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	uint8_t x408 = 0U;

	t98 = (x405^((x406%x407)==x408));

	if (t98 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x410 = INT64_MAX;
	uint32_t x411 = 5345U;

	t99 = (x409^((x410%x411)==x412));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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


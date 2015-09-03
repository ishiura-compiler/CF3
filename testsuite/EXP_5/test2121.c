#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = 102U;
static int32_t t1 = -3;
static volatile int32_t t3 = -2618173;
volatile int32_t t4 = 179869418;
volatile int32_t t5 = -495353276;
volatile int32_t t6 = -7;
volatile int16_t x34 = INT16_MIN;
volatile int64_t x45 = INT64_MAX;
int64_t x46 = INT64_MAX;
int16_t x49 = INT16_MIN;
int64_t x56 = -1483523018LL;
static int32_t x57 = INT32_MIN;
static uint16_t x60 = 13U;
int8_t x67 = INT8_MIN;
static int64_t x73 = 176LL;
int64_t x77 = 510572934732049818LL;
static uint64_t x78 = UINT64_MAX;
int8_t x84 = -1;
int16_t x86 = -1;
int8_t x87 = INT8_MAX;
volatile int32_t t23 = -12577;
static int64_t x104 = INT64_MAX;
volatile int8_t x105 = INT8_MAX;
int32_t t28 = INT32_MIN;
static int32_t x120 = INT32_MIN;
static volatile int32_t t29 = INT32_MIN;
static int32_t x128 = -11693;
uint64_t x129 = 78657744450LLU;
volatile int32_t x131 = INT32_MIN;
static volatile int8_t x133 = INT8_MAX;
volatile int32_t t33 = 94873;
volatile int8_t x138 = -1;
static int32_t x140 = 9885;
static volatile int32_t t36 = INT32_MIN;
int32_t x152 = INT32_MIN;
int32_t x154 = -220;
uint8_t x161 = 1U;
int16_t x164 = -2;
static uint8_t x165 = 0U;
int64_t x166 = -1LL;
volatile int64_t x181 = INT64_MIN;
int32_t x182 = INT32_MIN;
volatile int32_t t46 = -1076;
static int8_t x195 = INT8_MIN;
int64_t x198 = INT64_MAX;
volatile int64_t x213 = INT64_MIN;
int8_t x214 = INT8_MIN;
static int16_t x216 = 167;
int64_t t54 = 15LL;
int8_t x221 = INT8_MAX;
static volatile int32_t t55 = 147667;
int32_t x225 = INT32_MIN;
int64_t x231 = -1LL;
static int32_t t57 = -1355427;
int32_t x233 = INT32_MAX;
volatile uint64_t x234 = 1913LLU;
volatile int32_t x235 = -98971663;
uint64_t x237 = UINT64_MAX;
volatile int32_t x238 = INT32_MIN;
int16_t x241 = INT16_MIN;
uint32_t x243 = UINT32_MAX;
int32_t t60 = 42;
static volatile int32_t x251 = -1;
int8_t x255 = -57;
static int32_t x258 = INT32_MIN;
int64_t x272 = 67181363960LL;
uint64_t x273 = 822152201728LLU;
static int16_t x277 = -5052;
int8_t x282 = INT8_MIN;
static int16_t x288 = INT16_MIN;
static uint32_t x289 = 264U;
int64_t x290 = -1LL;
int16_t x294 = -8359;
static volatile int64_t x295 = INT64_MIN;
int64_t x296 = INT64_MIN;
static uint64_t x297 = 36194307232584154LLU;
int16_t x307 = INT16_MAX;
int16_t x310 = INT16_MAX;
int16_t x312 = -5;
int16_t x315 = INT16_MAX;
uint16_t x317 = 12U;
static int16_t x318 = 1;
volatile int32_t t79 = 2087177;
uint64_t x326 = 1LLU;
uint8_t x328 = UINT8_MAX;
int64_t x330 = -1LL;
volatile int8_t x335 = INT8_MIN;
volatile int8_t x336 = -1;
int32_t x342 = -1;
static uint8_t x355 = UINT8_MAX;
volatile int32_t t90 = 1350831;
uint64_t x378 = 8103LLU;
int8_t x382 = -1;
static uint8_t x385 = UINT8_MAX;
int16_t x394 = INT16_MIN;
int8_t x399 = INT8_MAX;


void f0(void) {
	volatile int64_t x1 = 428766020010335LL;
	static int64_t x2 = INT64_MIN;
	int16_t x3 = INT16_MIN;
	static volatile uint8_t x4 = 23U;
	int64_t t0 = 400504LL;

	t0 = (x1-((x2^x3)==x4));

	if (t0 != 428766020010335LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int32_t x6 = -1;
	volatile int64_t x7 = INT64_MIN;

	t1 = (x5-((x6^x7)==x8));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 15186U;
	static volatile int64_t x10 = 3352349757867458491LL;
	static int16_t x11 = 3743;
	int8_t x12 = INT8_MAX;
	int32_t t2 = 8753752;

	t2 = (x9-((x10^x11)==x12));

	if (t2 != 15186) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int16_t x14 = 215;
	int16_t x15 = -7;
	uint16_t x16 = 0U;

	t3 = (x13-((x14^x15)==x16));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -7;
	static int64_t x18 = INT64_MIN;
	uint8_t x19 = 0U;
	uint64_t x20 = UINT64_MAX;

	t4 = (x17-((x18^x19)==x20));

	if (t4 != -7) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	uint32_t x22 = 3724578U;
	uint32_t x23 = 4908753U;
	int16_t x24 = -992;

	t5 = (x21-((x22^x23)==x24));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 87U;
	uint64_t x26 = 500LLU;
	uint32_t x27 = 98032U;
	uint16_t x28 = 1U;

	t6 = (x25-((x26^x27)==x28));

	if (t6 != 87) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 1224U;
	volatile uint32_t x30 = 500893776U;
	static int32_t x31 = INT32_MIN;
	volatile int16_t x32 = 4;
	int32_t t7 = -896501;

	t7 = (x29-((x30^x31)==x32));

	if (t7 != 1224) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	static volatile uint16_t x35 = 18U;
	static uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = 78;

	t8 = (x33-((x34^x35)==x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -1;
	uint64_t x38 = 455LLU;
	uint64_t x39 = 29017740546431LLU;
	uint32_t x40 = UINT32_MAX;
	static volatile int32_t t9 = 173891111;

	t9 = (x37-((x38^x39)==x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MAX;
	uint32_t x42 = UINT32_MAX;
	uint16_t x43 = UINT16_MAX;
	volatile int32_t x44 = INT32_MIN;
	int64_t t10 = INT64_MAX;

	t10 = (x41-((x42^x43)==x44));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x47 = -27448601773105788LL;
	static int8_t x48 = INT8_MAX;
	int64_t t11 = INT64_MAX;

	t11 = (x45-((x46^x47)==x48));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x50 = 28U;
	volatile uint64_t x51 = UINT64_MAX;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t12 = -998;

	t12 = (x49-((x50^x51)==x52));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int8_t x54 = -1;
	uint64_t x55 = UINT64_MAX;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x53-((x54^x55)==x56));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x58 = 13;
	static int16_t x59 = INT16_MAX;
	int32_t t14 = INT32_MIN;

	t14 = (x57-((x58^x59)==x60));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MAX;
	uint8_t x62 = 1U;
	uint16_t x63 = UINT16_MAX;
	int8_t x64 = INT8_MAX;
	volatile int32_t t15 = -9;

	t15 = (x61-((x62^x63)==x64));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = -1;
	int64_t x68 = INT64_MIN;
	static volatile int32_t t16 = INT32_MIN;

	t16 = (x65-((x66^x67)==x68));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	volatile int8_t x70 = INT8_MAX;
	uint16_t x71 = 0U;
	static uint32_t x72 = UINT32_MAX;
	int64_t t17 = INT64_MAX;

	t17 = (x69-((x70^x71)==x72));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -1;
	uint32_t x75 = 236U;
	uint16_t x76 = 1U;
	volatile int64_t t18 = -2067745347908LL;

	t18 = (x73-((x74^x75)==x76));

	if (t18 != 176LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x79 = -1;
	uint64_t x80 = 16LLU;
	static volatile int64_t t19 = 4103678085523202718LL;

	t19 = (x77-((x78^x79)==x80));

	if (t19 != 510572934732049818LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int8_t x82 = -1;
	volatile int32_t x83 = INT32_MIN;
	volatile int32_t t20 = -5898067;

	t20 = (x81-((x82^x83)==x84));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	int32_t x88 = -263945321;
	static int64_t t21 = -5LL;

	t21 = (x85-((x86^x87)==x88));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 3U;
	int64_t x90 = 18133LL;
	volatile int16_t x91 = -1;
	int64_t x92 = -25216598628329857LL;
	static int32_t t22 = -2673;

	t22 = (x89-((x90^x91)==x92));

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -112;
	int16_t x94 = 10482;
	static int16_t x95 = INT16_MIN;
	static int16_t x96 = INT16_MAX;

	t23 = (x93-((x94^x95)==x96));

	if (t23 != -112) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MIN;
	volatile int32_t x99 = INT32_MIN;
	int32_t x100 = INT32_MAX;
	int32_t t24 = INT32_MIN;

	t24 = (x97-((x98^x99)==x100));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = -1;
	static int32_t x102 = INT32_MIN;
	static int8_t x103 = INT8_MIN;
	int32_t t25 = 13089;

	t25 = (x101-((x102^x103)==x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MIN;
	volatile uint16_t x107 = UINT16_MAX;
	int32_t x108 = 324153408;
	volatile int32_t t26 = -740;

	t26 = (x105-((x106^x107)==x108));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int32_t x110 = INT32_MIN;
	int64_t x111 = -818417383168268921LL;
	int32_t x112 = 0;
	volatile int32_t t27 = -43729;

	t27 = (x109-((x110^x111)==x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	uint8_t x114 = 2U;
	int16_t x115 = INT16_MIN;
	volatile int8_t x116 = INT8_MAX;

	t28 = (x113-((x114^x115)==x116));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int8_t x118 = -1;
	int16_t x119 = -1;

	t29 = (x117-((x118^x119)==x120));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 78002411787915541LLU;
	uint16_t x122 = UINT16_MAX;
	static int64_t x123 = INT64_MIN;
	int8_t x124 = -1;
	uint64_t t30 = 780196613536130LLU;

	t30 = (x121-((x122^x123)==x124));

	if (t30 != 78002411787915541LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = -32;
	static int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MAX;
	static int32_t t31 = 5619541;

	t31 = (x125-((x126^x127)==x128));

	if (t31 != -32) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = UINT8_MAX;
	int32_t x132 = INT32_MIN;
	uint64_t t32 = 221LLU;

	t32 = (x129-((x130^x131)==x132));

	if (t32 != 78657744450LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x134 = INT64_MIN;
	uint8_t x135 = UINT8_MAX;
	int8_t x136 = -12;

	t33 = (x133-((x134^x135)==x136));

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 108032LLU;
	uint64_t x139 = 9625523639753LLU;
	volatile uint64_t t34 = 130LLU;

	t34 = (x137-((x138^x139)==x140));

	if (t34 != 108032LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 2395516LLU;
	uint32_t x142 = 11289836U;
	int64_t x143 = INT64_MIN;
	uint64_t x144 = 31361257603LLU;
	uint64_t t35 = 4433234435779LLU;

	t35 = (x141-((x142^x143)==x144));

	if (t35 != 2395516LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint32_t x146 = 108885958U;
	uint32_t x147 = UINT32_MAX;
	static int16_t x148 = INT16_MAX;

	t36 = (x145-((x146^x147)==x148));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	static int32_t x150 = INT32_MIN;
	volatile uint8_t x151 = 16U;
	volatile int64_t t37 = INT64_MAX;

	t37 = (x149-((x150^x151)==x152));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	static int16_t x155 = -13;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t38 = 1071229;

	t38 = (x153-((x154^x155)==x156));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	int64_t x158 = -1022843973303LL;
	volatile int8_t x159 = INT8_MIN;
	static int64_t x160 = -1LL;
	static volatile int64_t t39 = 4683LL;

	t39 = (x157-((x158^x159)==x160));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MIN;
	volatile int16_t x163 = -46;
	volatile int32_t t40 = 151;

	t40 = (x161-((x162^x163)==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x167 = 2U;
	volatile int64_t x168 = 27622LL;
	int32_t t41 = -1662581;

	t41 = (x165-((x166^x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 183LLU;
	int16_t x170 = 6976;
	volatile uint32_t x171 = UINT32_MAX;
	volatile int16_t x172 = -7;
	static uint64_t t42 = 4535876756LLU;

	t42 = (x169-((x170^x171)==x172));

	if (t42 != 183LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MAX;
	int16_t x174 = INT16_MIN;
	static uint8_t x175 = 0U;
	int16_t x176 = INT16_MIN;
	volatile int64_t t43 = -6066777LL;

	t43 = (x173-((x174^x175)==x176));

	if (t43 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	static volatile int32_t x178 = INT32_MIN;
	int64_t x179 = 1506407LL;
	int64_t x180 = INT64_MIN;
	static volatile int32_t t44 = 4596371;

	t44 = (x177-((x178^x179)==x180));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x183 = INT16_MIN;
	int64_t x184 = INT64_MAX;
	volatile int64_t t45 = INT64_MIN;

	t45 = (x181-((x182^x183)==x184));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int8_t x186 = -1;
	uint64_t x187 = 113LLU;
	int32_t x188 = -1;

	t46 = (x185-((x186^x187)==x188));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 12U;
	volatile int16_t x190 = INT16_MIN;
	static int8_t x191 = -1;
	volatile int8_t x192 = -1;
	volatile int32_t t47 = -354389340;

	t47 = (x189-((x190^x191)==x192));

	if (t47 != 12) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 1;
	int8_t x194 = INT8_MIN;
	int32_t x196 = -987327898;
	volatile int32_t t48 = 1;

	t48 = (x193-((x194^x195)==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 53;
	uint32_t x199 = UINT32_MAX;
	static int32_t x200 = INT32_MAX;
	volatile int32_t t49 = -25434;

	t49 = (x197-((x198^x199)==x200));

	if (t49 != 53) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	int16_t x202 = -27;
	int32_t x203 = INT32_MAX;
	volatile int64_t x204 = -1656856323364924LL;
	volatile int32_t t50 = -1403;

	t50 = (x201-((x202^x203)==x204));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1037858409876571LL;
	volatile int32_t x206 = INT32_MAX;
	volatile int16_t x207 = INT16_MIN;
	volatile int8_t x208 = -1;
	int64_t t51 = 8387566896411LL;

	t51 = (x205-((x206^x207)==x208));

	if (t51 != -1037858409876571LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 1;
	int8_t x210 = INT8_MIN;
	volatile int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MIN;
	volatile int32_t t52 = -120332613;

	t52 = (x209-((x210^x211)==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x215 = -1;
	int64_t t53 = INT64_MIN;

	t53 = (x213-((x214^x215)==x216));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -43322556LL;
	volatile int32_t x218 = INT32_MIN;
	static uint32_t x219 = UINT32_MAX;
	volatile int64_t x220 = INT64_MAX;

	t54 = (x217-((x218^x219)==x220));

	if (t54 != -43322556LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = INT32_MIN;
	int8_t x223 = INT8_MIN;
	volatile uint32_t x224 = UINT32_MAX;

	t55 = (x221-((x222^x223)==x224));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x226 = UINT64_MAX;
	static int32_t x227 = -1;
	static int8_t x228 = INT8_MAX;
	static int32_t t56 = INT32_MIN;

	t56 = (x225-((x226^x227)==x228));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	static volatile int16_t x230 = INT16_MAX;
	volatile int16_t x232 = INT16_MAX;

	t57 = (x229-((x230^x231)==x232));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x236 = INT32_MAX;
	volatile int32_t t58 = INT32_MAX;

	t58 = (x233-((x234^x235)==x236));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x239 = INT8_MIN;
	static uint64_t x240 = 110960566150LLU;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (x237-((x238^x239)==x240));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = INT8_MAX;
	static uint16_t x244 = UINT16_MAX;

	t60 = (x241-((x242^x243)==x244));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = 6886;
	int8_t x246 = 37;
	uint16_t x247 = 28U;
	int32_t x248 = -25243;
	int32_t t61 = 1;

	t61 = (x245-((x246^x247)==x248));

	if (t61 != 6886) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MIN;
	int32_t x250 = -1567;
	uint8_t x252 = 8U;
	int32_t t62 = -2;

	t62 = (x249-((x250^x251)==x252));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	int32_t x254 = INT32_MIN;
	uint32_t x256 = UINT32_MAX;
	int64_t t63 = INT64_MAX;

	t63 = (x253-((x254^x255)==x256));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 1914556802508170736LL;
	volatile uint64_t x259 = 50905963785370131LLU;
	volatile int64_t x260 = -1LL;
	int64_t t64 = 226950172LL;

	t64 = (x257-((x258^x259)==x260));

	if (t64 != 1914556802508170736LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = 2;
	uint16_t x262 = UINT16_MAX;
	uint64_t x263 = 91056405217651LLU;
	volatile int64_t x264 = INT64_MIN;
	int32_t t65 = -195;

	t65 = (x261-((x262^x263)==x264));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = -52816078995LL;
	uint16_t x266 = 1254U;
	int8_t x267 = 4;
	static int64_t x268 = -110451LL;
	volatile int64_t t66 = 14370LL;

	t66 = (x265-((x266^x267)==x268));

	if (t66 != -52816078995LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = INT8_MAX;
	volatile uint8_t x270 = 1U;
	volatile int32_t x271 = 13726;
	volatile int32_t t67 = -106082;

	t67 = (x269-((x270^x271)==x272));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x274 = UINT64_MAX;
	uint32_t x275 = 0U;
	volatile int16_t x276 = -1;
	uint64_t t68 = 1238845959825LLU;

	t68 = (x273-((x274^x275)==x276));

	if (t68 != 822152201727LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = 1248U;
	int8_t x279 = INT8_MIN;
	static volatile int8_t x280 = INT8_MIN;
	static int32_t t69 = -15651;

	t69 = (x277-((x278^x279)==x280));

	if (t69 != -5052) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x281 = INT32_MAX;
	static int16_t x283 = INT16_MAX;
	int32_t x284 = INT32_MIN;
	int32_t t70 = INT32_MAX;

	t70 = (x281-((x282^x283)==x284));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	uint16_t x286 = 30125U;
	int32_t x287 = INT32_MIN;
	int32_t t71 = -6247;

	t71 = (x285-((x286^x287)==x288));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x291 = INT8_MIN;
	int16_t x292 = 392;
	static uint32_t t72 = 115003540U;

	t72 = (x289-((x290^x291)==x292));

	if (t72 != 264U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	volatile int32_t t73 = -7121;

	t73 = (x293-((x294^x295)==x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x298 = 67810788563LLU;
	int16_t x299 = INT16_MIN;
	int16_t x300 = INT16_MIN;
	volatile uint64_t t74 = 9224465180LLU;

	t74 = (x297-((x298^x299)==x300));

	if (t74 != 36194307232584154LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = INT64_MAX;
	uint8_t x302 = UINT8_MAX;
	int64_t x303 = -6545LL;
	static int16_t x304 = -3;
	volatile int64_t t75 = INT64_MAX;

	t75 = (x301-((x302^x303)==x304));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = -331;
	int16_t x306 = INT16_MIN;
	static int8_t x308 = INT8_MIN;
	int32_t t76 = 14;

	t76 = (x305-((x306^x307)==x308));

	if (t76 != -331) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 1U;
	int32_t x311 = -1;
	uint32_t t77 = 370069270U;

	t77 = (x309-((x310^x311)==x312));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -9615;
	int32_t x314 = INT32_MIN;
	uint64_t x316 = 45670800506LLU;
	volatile int32_t t78 = 10;

	t78 = (x313-((x314^x315)==x316));

	if (t78 != -9615) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x319 = INT32_MIN;
	uint8_t x320 = 37U;

	t79 = (x317-((x318^x319)==x320));

	if (t79 != 12) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	static uint32_t x322 = 215988U;
	int8_t x323 = 2;
	int64_t x324 = 2373560081LL;
	int32_t t80 = -3067052;

	t80 = (x321-((x322^x323)==x324));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	uint16_t x327 = 1986U;
	int64_t t81 = INT64_MIN;

	t81 = (x325-((x326^x327)==x328));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 50U;
	uint8_t x331 = 100U;
	int64_t x332 = INT64_MAX;
	volatile int32_t t82 = -43;

	t82 = (x329-((x330^x331)==x332));

	if (t82 != 50) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = INT32_MIN;
	int32_t x334 = INT32_MAX;
	int32_t t83 = INT32_MIN;

	t83 = (x333-((x334^x335)==x336));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = -1;
	int16_t x338 = -3826;
	uint16_t x339 = UINT16_MAX;
	int32_t x340 = INT32_MIN;
	int32_t t84 = 149;

	t84 = (x337-((x338^x339)==x340));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = 38;
	volatile int32_t x343 = INT32_MAX;
	int32_t x344 = INT32_MIN;
	int32_t t85 = 538;

	t85 = (x341-((x342^x343)==x344));

	if (t85 != 37) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = -1;
	int16_t x346 = INT16_MAX;
	int32_t x347 = INT32_MIN;
	uint8_t x348 = 2U;
	int32_t t86 = -164721;

	t86 = (x345-((x346^x347)==x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	int8_t x350 = 3;
	int64_t x351 = INT64_MAX;
	static int16_t x352 = 170;
	int32_t t87 = INT32_MIN;

	t87 = (x349-((x350^x351)==x352));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -19;
	uint64_t x354 = 208657LLU;
	uint16_t x356 = 7U;
	int32_t t88 = -73993;

	t88 = (x353-((x354^x355)==x356));

	if (t88 != -19) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MIN;
	uint16_t x358 = 184U;
	int8_t x359 = INT8_MIN;
	int32_t x360 = -1;
	volatile int32_t t89 = 1;

	t89 = (x357-((x358^x359)==x360));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = INT16_MAX;
	volatile int8_t x362 = INT8_MIN;
	static uint64_t x363 = 6LLU;
	static int64_t x364 = INT64_MIN;

	t90 = (x361-((x362^x363)==x364));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	int64_t x366 = 48857726681283LL;
	int16_t x367 = -1;
	int32_t x368 = INT32_MIN;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x365-((x366^x367)==x368));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	volatile uint8_t x370 = 14U;
	uint64_t x371 = 2LLU;
	int16_t x372 = 836;
	volatile int32_t t92 = 0;

	t92 = (x369-((x370^x371)==x372));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	static volatile int64_t x374 = INT64_MAX;
	int16_t x375 = INT16_MIN;
	static volatile int64_t x376 = 44133292982LL;
	volatile int32_t t93 = -10449;

	t93 = (x373-((x374^x375)==x376));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 12956506U;
	uint32_t x379 = 710712U;
	int8_t x380 = 0;
	volatile uint32_t t94 = 2360950U;

	t94 = (x377-((x378^x379)==x380));

	if (t94 != 12956506U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = 3122;
	static uint16_t x383 = UINT16_MAX;
	uint32_t x384 = 230014U;
	volatile int32_t t95 = -95427575;

	t95 = (x381-((x382^x383)==x384));

	if (t95 != 3122) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = 6570;
	int16_t x387 = 345;
	static uint8_t x388 = 0U;
	int32_t t96 = -50;

	t96 = (x385-((x386^x387)==x388));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	int16_t x390 = INT16_MAX;
	int64_t x391 = 242370LL;
	int8_t x392 = 36;
	static int32_t t97 = -1;

	t97 = (x389-((x390^x391)==x392));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 7U;
	volatile int32_t x395 = INT32_MIN;
	static volatile uint8_t x396 = UINT8_MAX;
	volatile int32_t t98 = -186052;

	t98 = (x393-((x394^x395)==x396));

	if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	int8_t x398 = -1;
	uint8_t x400 = 1U;
	volatile int32_t t99 = -1445;

	t99 = (x397-((x398^x399)==x400));

	if (t99 != -1) { NG(); } else { ; }
	
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


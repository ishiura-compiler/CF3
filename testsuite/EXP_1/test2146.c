#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
static uint16_t x3 = 22U;
uint8_t x13 = UINT8_MAX;
volatile uint16_t x14 = UINT16_MAX;
volatile int32_t t3 = 0;
int64_t x21 = -237908936785040497LL;
uint32_t t6 = 319323U;
static int8_t x31 = -8;
int8_t x35 = INT8_MAX;
int64_t x40 = 588604816175LL;
int64_t t9 = 6LL;
int32_t x43 = INT32_MIN;
volatile uint16_t x46 = 4U;
volatile uint8_t x48 = 1U;
int64_t x49 = 3090840352943792488LL;
static int64_t x55 = INT64_MAX;
int64_t x63 = INT64_MIN;
int32_t x71 = INT32_MIN;
uint32_t x76 = 5418U;
static uint64_t x82 = UINT64_MAX;
static uint32_t x86 = UINT32_MAX;
volatile int32_t t22 = 5;
uint32_t x94 = 13896U;
uint64_t x95 = 14LLU;
uint16_t x97 = 31352U;
volatile uint32_t t25 = 0U;
int64_t x111 = -1LL;
volatile int32_t t27 = -168;
int64_t x114 = INT64_MIN;
int64_t x127 = -264431113LL;
static int32_t x129 = -1;
int64_t x134 = INT64_MAX;
volatile int16_t x144 = INT16_MAX;
volatile int32_t x145 = INT32_MIN;
volatile uint16_t x148 = 164U;
int16_t x153 = INT16_MAX;
uint8_t x154 = UINT8_MAX;
int32_t t41 = -2198277;
int32_t t42 = 123;
static int32_t x176 = -1;
static int16_t x178 = -1101;
static int32_t x182 = -31328;
int32_t t46 = 1588014;
int8_t x189 = -1;
uint64_t x190 = 59483LLU;
int32_t t47 = -32651228;
uint32_t x202 = 1272U;
static int32_t x209 = INT32_MIN;
volatile int32_t t54 = 20;
volatile uint64_t x224 = UINT64_MAX;
volatile int16_t x225 = INT16_MAX;
static uint64_t x234 = 44533LLU;
int32_t t58 = -1522899;
static uint16_t x242 = 467U;
int32_t x250 = -58520503;
int32_t x258 = -184;
int64_t x268 = 855723LL;
int64_t t65 = -78517122807824LL;
static uint32_t x273 = 1U;
int32_t x275 = INT32_MAX;
static volatile uint64_t x284 = 479333072442LLU;
volatile uint64_t t69 = 836LLU;
uint64_t x286 = 1051444821LLU;
static volatile uint64_t x294 = 290814LLU;
static uint16_t x298 = UINT16_MAX;
uint64_t x300 = 478054026891839603LLU;
static int64_t x305 = INT64_MIN;
int64_t x311 = -10LL;
static uint64_t x315 = UINT64_MAX;
int64_t x322 = -1LL;
uint32_t x324 = 104894U;
static uint32_t x326 = 469083U;
uint8_t x327 = 3U;
int8_t x329 = 0;
int8_t x331 = INT8_MIN;
uint8_t x332 = 79U;
uint16_t x333 = 113U;
static int64_t x337 = INT64_MAX;
uint8_t x339 = 3U;
static int8_t x346 = INT8_MIN;
volatile int8_t x348 = -1;
static volatile int32_t t84 = 0;
volatile int32_t t85 = -351143149;
volatile int8_t x362 = INT8_MIN;
int32_t x363 = INT32_MIN;
volatile int32_t x364 = -14;
int32_t x365 = INT32_MIN;
int16_t x370 = INT16_MIN;
int32_t x373 = -1;
uint16_t x378 = UINT16_MAX;
int32_t t92 = -110;
int64_t x383 = -1LL;
int32_t x385 = INT32_MIN;
static uint32_t x400 = 818605299U;
uint32_t t97 = 0U;
static int16_t x405 = -1;
static volatile int32_t x406 = INT32_MIN;
volatile int32_t x412 = INT32_MIN;
static int32_t t99 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint16_t x4 = UINT16_MAX;
	static volatile int32_t t0 = -461;

	t0 = (((x1^x2)<=x3)+x4);

	if (t0 != 65536) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int32_t x6 = INT32_MIN;
	volatile int32_t x7 = INT32_MIN;
	int16_t x8 = -1;
	volatile int32_t t1 = -2938;

	t1 = (((x5^x6)<=x7)+x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	uint32_t x10 = 966204999U;
	uint32_t x11 = UINT32_MAX;
	static uint16_t x12 = 1306U;
	volatile int32_t t2 = 57093742;

	t2 = (((x9^x10)<=x11)+x12);

	if (t2 != 1307) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x15 = INT64_MIN;
	volatile int8_t x16 = INT8_MAX;

	t3 = (((x13^x14)<=x15)+x16);

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 3582427LLU;
	uint64_t x18 = UINT64_MAX;
	volatile uint8_t x19 = 0U;
	static int64_t x20 = INT64_MAX;
	int64_t t4 = INT64_MAX;

	t4 = (((x17^x18)<=x19)+x20);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x22 = 0;
	uint16_t x23 = UINT16_MAX;
	static uint16_t x24 = 3297U;
	volatile int32_t t5 = -503069148;

	t5 = (((x21^x22)<=x23)+x24);

	if (t5 != 3298) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int32_t x26 = -1;
	volatile uint32_t x27 = 2642U;
	uint32_t x28 = 144952U;

	t6 = (((x25^x26)<=x27)+x28);

	if (t6 != 144952U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 16U;
	static int32_t x30 = INT32_MIN;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t7 = 226U;

	t7 = (((x29^x30)<=x31)+x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -161323652LL;
	int16_t x34 = INT16_MIN;
	volatile int8_t x36 = -8;
	static int32_t t8 = -204732;

	t8 = (((x33^x34)<=x35)+x36);

	if (t8 != -8) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static uint16_t x38 = UINT16_MAX;
	static int32_t x39 = -901;

	t9 = (((x37^x38)<=x39)+x40);

	if (t9 != 588604816176LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int64_t x42 = -1LL;
	static int64_t x44 = INT64_MAX;
	int64_t t10 = INT64_MAX;

	t10 = (((x41^x42)<=x43)+x44);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = -51;
	int64_t x47 = -1LL;
	int32_t t11 = -2047;

	t11 = (((x45^x46)<=x47)+x48);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = INT16_MIN;
	int16_t x51 = 27;
	volatile uint64_t x52 = UINT64_MAX;
	static volatile uint64_t t12 = 14LLU;

	t12 = (((x49^x50)<=x51)+x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 43;
	int32_t x54 = INT32_MIN;
	int64_t x56 = INT64_MIN;
	static volatile int64_t t13 = 2137415450365721761LL;

	t13 = (((x53^x54)<=x55)+x56);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = UINT16_MAX;
	volatile int64_t x58 = -33LL;
	int32_t x59 = -21677548;
	static uint16_t x60 = UINT16_MAX;
	int32_t t14 = 3026;

	t14 = (((x57^x58)<=x59)+x60);

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MAX;
	volatile int16_t x62 = INT16_MIN;
	static int32_t x64 = INT32_MIN;
	volatile int32_t t15 = INT32_MIN;

	t15 = (((x61^x62)<=x63)+x64);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MAX;
	int32_t x66 = -1;
	volatile uint8_t x67 = 1U;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -7348666;

	t16 = (((x65^x66)<=x67)+x68);

	if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x70 = 3;
	volatile uint32_t x72 = 574U;
	static volatile uint32_t t17 = 6113U;

	t17 = (((x69^x70)<=x71)+x72);

	if (t17 != 574U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 2432U;
	static uint64_t x74 = 26608LLU;
	uint32_t x75 = UINT32_MAX;
	uint32_t t18 = 36U;

	t18 = (((x73^x74)<=x75)+x76);

	if (t18 != 5419U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	static int16_t x78 = -1;
	int32_t x79 = -1;
	uint8_t x80 = 21U;
	volatile int32_t t19 = -1;

	t19 = (((x77^x78)<=x79)+x80);

	if (t19 != 21) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	uint32_t x83 = 1U;
	int8_t x84 = INT8_MIN;
	int32_t t20 = -72;

	t20 = (((x81^x82)<=x83)+x84);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	int8_t x87 = INT8_MIN;
	static int8_t x88 = -1;
	static int32_t t21 = 0;

	t21 = (((x85^x86)<=x87)+x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -17845LL;
	int8_t x90 = 24;
	int32_t x91 = -1;
	uint8_t x92 = UINT8_MAX;

	t22 = (((x89^x90)<=x91)+x92);

	if (t22 != 256) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	static int64_t x96 = -1LL;
	int64_t t23 = -52LL;

	t23 = (((x93^x94)<=x95)+x96);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = INT16_MIN;
	int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	int32_t t24 = -25086431;

	t24 = (((x97^x98)<=x99)+x100);

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	uint32_t x102 = 10131U;
	int32_t x103 = -1;
	static uint32_t x104 = 82U;

	t25 = (((x101^x102)<=x103)+x104);

	if (t25 != 83U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = -1;
	uint16_t x106 = 64U;
	static int16_t x107 = INT16_MIN;
	volatile int64_t x108 = 255739380392187LL;
	int64_t t26 = -1457335168LL;

	t26 = (((x105^x106)<=x107)+x108);

	if (t26 != 255739380392187LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int64_t x110 = INT64_MIN;
	uint8_t x112 = UINT8_MAX;

	t27 = (((x109^x110)<=x111)+x112);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -206464616252856LL;
	uint32_t x115 = UINT32_MAX;
	int8_t x116 = 5;
	int32_t t28 = -212323915;

	t28 = (((x113^x114)<=x115)+x116);

	if (t28 != 5) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 13U;
	int32_t x118 = INT32_MIN;
	uint64_t x119 = UINT64_MAX;
	static uint64_t x120 = 3363LLU;
	volatile uint64_t t29 = 67800039404LLU;

	t29 = (((x117^x118)<=x119)+x120);

	if (t29 != 3364LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 0U;
	uint16_t x122 = 7U;
	int16_t x123 = INT16_MAX;
	uint64_t x124 = 4LLU;
	volatile uint64_t t30 = 17414088070LLU;

	t30 = (((x121^x122)<=x123)+x124);

	if (t30 != 5LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	volatile int8_t x126 = 47;
	static uint16_t x128 = 2U;
	int32_t t31 = -11963529;

	t31 = (((x125^x126)<=x127)+x128);

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = 46905571LLU;
	static int64_t x131 = INT64_MAX;
	int64_t x132 = INT64_MIN;
	int64_t t32 = INT64_MIN;

	t32 = (((x129^x130)<=x131)+x132);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 936436449U;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = UINT32_MAX;
	static uint32_t t33 = UINT32_MAX;

	t33 = (((x133^x134)<=x135)+x136);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -11;
	volatile uint64_t x138 = 120738494893930347LLU;
	uint32_t x139 = 7070490U;
	static int64_t x140 = INT64_MIN;
	int64_t t34 = INT64_MIN;

	t34 = (((x137^x138)<=x139)+x140);

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int8_t x142 = INT8_MIN;
	int16_t x143 = INT16_MAX;
	volatile int32_t t35 = 22893879;

	t35 = (((x141^x142)<=x143)+x144);

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = -89951994;
	int8_t x147 = INT8_MIN;
	static int32_t t36 = -41616175;

	t36 = (((x145^x146)<=x147)+x148);

	if (t36 != 164) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 8LLU;
	volatile int32_t x150 = INT32_MAX;
	int32_t x151 = INT32_MAX;
	static volatile uint64_t x152 = UINT64_MAX;
	uint64_t t37 = 2908231596LLU;

	t37 = (((x149^x150)<=x151)+x152);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x155 = INT8_MIN;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t38 = 275;

	t38 = (((x153^x154)<=x155)+x156);

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	int32_t x158 = -116;
	int64_t x159 = INT64_MIN;
	uint8_t x160 = 47U;
	volatile int32_t t39 = 0;

	t39 = (((x157^x158)<=x159)+x160);

	if (t39 != 47) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MIN;
	uint16_t x162 = 69U;
	int8_t x163 = INT8_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t40 = -14128461;

	t40 = (((x161^x162)<=x163)+x164);

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x165 = 4;
	volatile int16_t x166 = -1;
	uint32_t x167 = UINT32_MAX;
	volatile uint16_t x168 = 59U;

	t41 = (((x165^x166)<=x167)+x168);

	if (t41 != 60) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = -1;
	int64_t x170 = -1LL;
	int8_t x171 = -1;
	volatile int32_t x172 = -1;

	t42 = (((x169^x170)<=x171)+x172);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 19639543283LLU;
	int8_t x174 = -1;
	int8_t x175 = INT8_MIN;
	static int32_t t43 = 25860791;

	t43 = (((x173^x174)<=x175)+x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 90990U;
	int8_t x179 = INT8_MIN;
	int8_t x180 = -1;
	int32_t t44 = -1597003;

	t44 = (((x177^x178)<=x179)+x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 19U;
	uint16_t x183 = 1U;
	int64_t x184 = INT64_MIN;
	static int64_t t45 = 24287627LL;

	t45 = (((x181^x182)<=x183)+x184);

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = INT8_MIN;
	int64_t x186 = 33818699134983LL;
	volatile int16_t x187 = 15;
	uint16_t x188 = UINT16_MAX;

	t46 = (((x185^x186)<=x187)+x188);

	if (t46 != 65536) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x191 = INT32_MAX;
	static int8_t x192 = 1;

	t47 = (((x189^x190)<=x191)+x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = INT8_MAX;
	uint64_t x194 = 3LLU;
	int64_t x195 = INT64_MIN;
	int16_t x196 = 974;
	static int32_t t48 = 0;

	t48 = (((x193^x194)<=x195)+x196);

	if (t48 != 975) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	int64_t x198 = INT64_MIN;
	int64_t x199 = -1LL;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = -11;

	t49 = (((x197^x198)<=x199)+x200);

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	uint64_t x203 = 565144245738124289LLU;
	int8_t x204 = INT8_MIN;
	int32_t t50 = -792911;

	t50 = (((x201^x202)<=x203)+x204);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x205 = -13903549;
	int32_t x206 = INT32_MIN;
	static int32_t x207 = INT32_MIN;
	uint64_t x208 = 5562450344LLU;
	uint64_t t51 = 206LLU;

	t51 = (((x205^x206)<=x207)+x208);

	if (t51 != 5562450344LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x210 = 46U;
	uint32_t x211 = 74511U;
	int16_t x212 = -1;
	static int32_t t52 = 3104;

	t52 = (((x209^x210)<=x211)+x212);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = -1;
	int64_t x214 = -4454LL;
	volatile int64_t x215 = INT64_MIN;
	int8_t x216 = -2;
	static volatile int32_t t53 = 671687;

	t53 = (((x213^x214)<=x215)+x216);

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 707U;
	uint64_t x218 = 9995527470LLU;
	static uint16_t x219 = 788U;
	static int8_t x220 = INT8_MIN;

	t54 = (((x217^x218)<=x219)+x220);

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = UINT8_MAX;
	uint8_t x222 = UINT8_MAX;
	uint8_t x223 = UINT8_MAX;
	uint64_t t55 = 15LLU;

	t55 = (((x221^x222)<=x223)+x224);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = INT16_MAX;
	static uint16_t x227 = UINT16_MAX;
	int64_t x228 = 679334426192709LL;
	int64_t t56 = 5261101LL;

	t56 = (((x225^x226)<=x227)+x228);

	if (t56 != 679334426192710LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = 1;
	uint64_t x230 = 18591948262889LLU;
	volatile int8_t x231 = INT8_MIN;
	volatile int32_t x232 = INT32_MIN;
	static int32_t t57 = -1895584;

	t57 = (((x229^x230)<=x231)+x232);

	if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = -1;
	int16_t x235 = -1;
	uint16_t x236 = UINT16_MAX;

	t58 = (((x233^x234)<=x235)+x236);

	if (t58 != 65536) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x241 = 3U;
	volatile int64_t x243 = 993911590392764615LL;
	int32_t x244 = INT32_MIN;
	int32_t t59 = -122;

	t59 = (((x241^x242)<=x243)+x244);

	if (t59 != -2147483647) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x245 = INT8_MAX;
	int32_t x246 = INT32_MAX;
	uint32_t x247 = 4U;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t60 = -11;

	t60 = (((x245^x246)<=x247)+x248);

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x249 = 5U;
	int32_t x251 = INT32_MIN;
	static uint8_t x252 = UINT8_MAX;
	volatile int32_t t61 = -6220;

	t61 = (((x249^x250)<=x251)+x252);

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x253 = -1LL;
	uint64_t x254 = 511890372LLU;
	static uint16_t x255 = UINT16_MAX;
	int8_t x256 = INT8_MAX;
	static volatile int32_t t62 = -1461;

	t62 = (((x253^x254)<=x255)+x256);

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x257 = 117U;
	int8_t x259 = 4;
	uint16_t x260 = 113U;
	volatile int32_t t63 = 3445;

	t63 = (((x257^x258)<=x259)+x260);

	if (t63 != 113) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x261 = 880680897773LLU;
	int16_t x262 = 54;
	volatile int8_t x263 = -28;
	uint32_t x264 = UINT32_MAX;
	volatile uint32_t t64 = 3U;

	t64 = (((x261^x262)<=x263)+x264);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = UINT32_MAX;
	static int8_t x266 = INT8_MIN;
	static uint8_t x267 = 1U;

	t65 = (((x265^x266)<=x267)+x268);

	if (t65 != 855723LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x269 = 1U;
	uint32_t x270 = 207853153U;
	static uint32_t x271 = 8U;
	int8_t x272 = -1;
	int32_t t66 = -1400;

	t66 = (((x269^x270)<=x271)+x272);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x274 = 3453U;
	int8_t x276 = INT8_MAX;
	static volatile int32_t t67 = -30077854;

	t67 = (((x273^x274)<=x275)+x276);

	if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x277 = 1U;
	int64_t x278 = -1LL;
	uint32_t x279 = UINT32_MAX;
	volatile int64_t x280 = -1LL;
	volatile int64_t t68 = -12209115158173545LL;

	t68 = (((x277^x278)<=x279)+x280);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = -1;
	int32_t x282 = INT32_MAX;
	int64_t x283 = -1829159179185318564LL;

	t69 = (((x281^x282)<=x283)+x284);

	if (t69 != 479333072442LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = 82LL;
	static volatile int32_t x287 = INT32_MAX;
	uint64_t x288 = 84284239976763740LLU;
	uint64_t t70 = 33LLU;

	t70 = (((x285^x286)<=x287)+x288);

	if (t70 != 84284239976763741LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = UINT16_MAX;
	volatile int8_t x290 = INT8_MIN;
	uint32_t x291 = 214666U;
	volatile int64_t x292 = INT64_MIN;
	int64_t t71 = INT64_MIN;

	t71 = (((x289^x290)<=x291)+x292);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = -1LL;
	static int16_t x295 = INT16_MIN;
	static uint8_t x296 = UINT8_MAX;
	int32_t t72 = -2273384;

	t72 = (((x293^x294)<=x295)+x296);

	if (t72 != 256) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x297 = INT8_MIN;
	uint64_t x299 = 170805688939334037LLU;
	volatile uint64_t t73 = 1632982LLU;

	t73 = (((x297^x298)<=x299)+x300);

	if (t73 != 478054026891839603LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x306 = -1;
	volatile int32_t x307 = -1;
	int32_t x308 = -1;
	int32_t t74 = -104682;

	t74 = (((x305^x306)<=x307)+x308);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = 0U;
	volatile uint8_t x310 = 87U;
	uint32_t x312 = UINT32_MAX;
	uint32_t t75 = UINT32_MAX;

	t75 = (((x309^x310)<=x311)+x312);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = 536871249763LL;
	int16_t x314 = -45;
	volatile int8_t x316 = 20;
	static int32_t t76 = 1;

	t76 = (((x313^x314)<=x315)+x316);

	if (t76 != 21) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = -863;
	static int8_t x318 = INT8_MIN;
	static volatile int64_t x319 = INT64_MIN;
	volatile uint8_t x320 = 1U;
	static volatile int32_t t77 = -51044;

	t77 = (((x317^x318)<=x319)+x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x321 = UINT32_MAX;
	static int16_t x323 = INT16_MAX;
	volatile uint32_t t78 = 14415372U;

	t78 = (((x321^x322)<=x323)+x324);

	if (t78 != 104895U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = INT32_MIN;
	int16_t x328 = INT16_MAX;
	int32_t t79 = 680636570;

	t79 = (((x325^x326)<=x327)+x328);

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x330 = -1LL;
	volatile int32_t t80 = -65832957;

	t80 = (((x329^x330)<=x331)+x332);

	if (t80 != 79) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x334 = INT64_MIN;
	volatile int32_t x335 = INT32_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t81 = 67;

	t81 = (((x333^x334)<=x335)+x336);

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x338 = INT16_MIN;
	int64_t x340 = -1LL;
	volatile int64_t t82 = -31532LL;

	t82 = (((x337^x338)<=x339)+x340);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MAX;
	int8_t x343 = 24;
	volatile int16_t x344 = INT16_MAX;
	static volatile int32_t t83 = 49578;

	t83 = (((x341^x342)<=x343)+x344);

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x345 = UINT16_MAX;
	int8_t x347 = -1;

	t84 = (((x345^x346)<=x347)+x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = INT64_MIN;
	int64_t x350 = -1LL;
	static int16_t x351 = INT16_MIN;
	int16_t x352 = 3333;

	t85 = (((x349^x350)<=x351)+x352);

	if (t85 != 3333) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = UINT8_MAX;
	int16_t x354 = -30;
	int16_t x355 = -1;
	int8_t x356 = INT8_MIN;
	volatile int32_t t86 = 7233946;

	t86 = (((x353^x354)<=x355)+x356);

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x357 = 6583733U;
	int16_t x358 = -1;
	static volatile int32_t x359 = -1;
	uint16_t x360 = 88U;
	static int32_t t87 = -664;

	t87 = (((x357^x358)<=x359)+x360);

	if (t87 != 89) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = 7452U;
	volatile int32_t t88 = 71014746;

	t88 = (((x361^x362)<=x363)+x364);

	if (t88 != -14) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x366 = 947363U;
	volatile int32_t x367 = INT32_MAX;
	int64_t x368 = INT64_MIN;
	int64_t t89 = INT64_MIN;

	t89 = (((x365^x366)<=x367)+x368);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x369 = 2U;
	int16_t x371 = -15;
	int8_t x372 = INT8_MIN;
	int32_t t90 = -1;

	t90 = (((x369^x370)<=x371)+x372);

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x374 = 196;
	static uint64_t x375 = 64490782LLU;
	uint32_t x376 = UINT32_MAX;
	uint32_t t91 = UINT32_MAX;

	t91 = (((x373^x374)<=x375)+x376);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = -1;
	static volatile int64_t x379 = -1LL;
	int8_t x380 = -1;

	t92 = (((x377^x378)<=x379)+x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x381 = 19297305504155575LLU;
	static int16_t x382 = INT16_MIN;
	uint8_t x384 = 0U;
	int32_t t93 = 22275;

	t93 = (((x381^x382)<=x383)+x384);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x386 = UINT16_MAX;
	static volatile int32_t x387 = 298433;
	int32_t x388 = 3479197;
	int32_t t94 = 6669338;

	t94 = (((x385^x386)<=x387)+x388);

	if (t94 != 3479198) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = INT64_MIN;
	int8_t x390 = -1;
	uint8_t x391 = UINT8_MAX;
	uint64_t x392 = UINT64_MAX;
	uint64_t t95 = UINT64_MAX;

	t95 = (((x389^x390)<=x391)+x392);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x393 = 13U;
	int16_t x394 = -1;
	uint16_t x395 = 19985U;
	uint16_t x396 = 15U;
	static int32_t t96 = 0;

	t96 = (((x393^x394)<=x395)+x396);

	if (t96 != 16) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = INT32_MAX;
	volatile int32_t x398 = -58;
	int32_t x399 = -1;

	t97 = (((x397^x398)<=x399)+x400);

	if (t97 != 818605300U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x407 = 11U;
	static int64_t x408 = -785002692LL;
	int64_t t98 = 2895LL;

	t98 = (((x405^x406)<=x407)+x408);

	if (t98 != -785002692LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = -1;
	int16_t x410 = INT16_MAX;
	int32_t x411 = INT32_MIN;

	t99 = (((x409^x410)<=x411)+x412);

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 55609021240694LLU;
int32_t t1 = -1;
volatile int32_t x15 = -1;
static volatile int16_t x21 = -1;
int32_t x28 = INT32_MIN;
static volatile uint16_t x30 = 87U;
uint64_t t8 = 3270895397LLU;
int16_t x40 = INT16_MIN;
volatile uint64_t t10 = 32773118026627305LLU;
uint8_t x47 = UINT8_MAX;
volatile uint32_t t11 = 808U;
int32_t x50 = INT32_MIN;
uint8_t x51 = UINT8_MAX;
volatile uint32_t t12 = 6739U;
uint64_t x54 = 879158235337919881LLU;
int8_t x57 = -2;
static uint16_t x70 = 6316U;
int16_t x72 = INT16_MIN;
static int32_t x73 = 0;
static volatile int16_t x76 = -1116;
int16_t x79 = INT16_MAX;
volatile uint64_t t20 = 1818LLU;
int32_t t23 = 213724768;
int64_t x102 = INT64_MAX;
volatile int64_t t28 = -53626825214LL;
volatile int16_t x122 = INT16_MIN;
uint64_t x131 = 46256554669LLU;
static int64_t t32 = 382836549659LL;
uint8_t x139 = 0U;
uint16_t x141 = 2U;
uint64_t x147 = 72592LLU;
volatile uint64_t t35 = 121476708LLU;
static int16_t x163 = INT16_MIN;
uint32_t x169 = 4087U;
volatile uint64_t x184 = UINT64_MAX;
int64_t t45 = -5321832976025LL;
static volatile int32_t t48 = -432;
int32_t x205 = -1;
static uint16_t x208 = UINT16_MAX;
uint32_t t49 = 6165U;
int16_t x210 = INT16_MAX;
static volatile int32_t x212 = -1;
volatile int64_t x220 = INT64_MAX;
volatile int64_t t52 = 168567LL;
static uint32_t t53 = 177239U;
volatile int32_t x231 = -956;
int32_t x242 = INT32_MIN;
int8_t x244 = 1;
int16_t x252 = 14943;
volatile int64_t x253 = -196055522954506857LL;
int8_t x261 = INT8_MAX;
static int16_t x265 = INT16_MIN;
static uint64_t x268 = 1053169268241LLU;
volatile uint16_t x271 = UINT16_MAX;
volatile int16_t x274 = INT16_MAX;
volatile uint32_t t67 = 2553778U;
int32_t t69 = 364;
int16_t x296 = INT16_MIN;
static int16_t x298 = INT16_MIN;
int8_t x302 = 1;
volatile int32_t x308 = 326677238;
static uint64_t x314 = 94342146770713LLU;
static volatile int64_t t76 = 177LL;
int32_t x317 = INT32_MIN;
uint16_t x318 = 12799U;
volatile int16_t x320 = 7;
int32_t t77 = 0;
uint64_t x331 = 1202LLU;
int64_t x334 = -1LL;
volatile int64_t t81 = 386551812702766051LL;
int8_t x338 = -1;
uint64_t t82 = 3258LLU;
int16_t x345 = -1;
int32_t x351 = INT32_MAX;
static int8_t x354 = INT8_MIN;
static uint8_t x355 = 3U;
static volatile uint64_t x367 = UINT64_MAX;
int32_t x369 = INT32_MAX;
uint32_t x371 = 20U;
uint16_t x384 = UINT16_MAX;
volatile int64_t t92 = 445434847339LL;
int32_t x400 = INT32_MIN;
uint64_t t95 = 21LLU;
int64_t x401 = INT64_MAX;
volatile int16_t x403 = -1;
int16_t x408 = INT16_MIN;
int64_t t97 = 37LL;
uint8_t x411 = 4U;
int64_t x413 = INT64_MIN;
int32_t x414 = INT32_MAX;


void f0(void) {
	uint16_t x1 = 434U;
	volatile int16_t x2 = -230;
	int64_t x3 = -242795940LL;
	volatile uint64_t t0 = 82956LLU;

	t0 = (((x1<=x2)^x3)/x4);

	if (t0 != 331722LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int32_t x6 = -1;
	uint8_t x7 = UINT8_MAX;
	int16_t x8 = -1;

	t1 = (((x5<=x6)^x7)/x8);

	if (t1 != -255) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static volatile int8_t x10 = INT8_MIN;
	uint8_t x11 = 52U;
	int16_t x12 = -20;
	int32_t t2 = 7818937;

	t2 = (((x9<=x10)^x11)/x12);

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 676LLU;
	static int16_t x14 = INT16_MAX;
	static uint32_t x16 = 15U;
	static volatile uint32_t t3 = 133U;

	t3 = (((x13<=x14)^x15)/x16);

	if (t3 != 286331152U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = UINT64_MAX;
	int16_t x18 = 0;
	uint16_t x19 = 0U;
	volatile uint16_t x20 = UINT16_MAX;
	int32_t t4 = 6622;

	t4 = (((x17<=x18)^x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 84LLU;
	uint8_t x23 = UINT8_MAX;
	uint16_t x24 = 39U;
	volatile int32_t t5 = 75968;

	t5 = (((x21<=x22)^x23)/x24);

	if (t5 != 6) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	int64_t x26 = INT64_MAX;
	static int16_t x27 = -1;
	volatile int32_t t6 = 4186554;

	t6 = (((x25<=x26)^x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	int8_t x31 = INT8_MAX;
	static volatile uint64_t x32 = 48263654490308LLU;
	static uint64_t t7 = 215707603LLU;

	t7 = (((x29<=x30)^x31)/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	volatile int64_t x34 = 30824685LL;
	static int64_t x35 = 157804319LL;
	uint64_t x36 = 17063983880586LLU;

	t8 = (((x33<=x34)^x35)/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MAX;
	int32_t x38 = INT32_MIN;
	static uint64_t x39 = UINT64_MAX;
	volatile uint64_t t9 = 804741LLU;

	t9 = (((x37<=x38)^x39)/x40);

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 13LLU;
	int32_t x42 = INT32_MAX;
	uint16_t x43 = UINT16_MAX;
	uint64_t x44 = 16951585079LLU;

	t10 = (((x41<=x42)^x43)/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	volatile int16_t x46 = INT16_MIN;
	volatile uint32_t x48 = 62U;

	t11 = (((x45<=x46)^x47)/x48);

	if (t11 != 4U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = UINT8_MAX;
	static uint32_t x52 = 1603821U;

	t12 = (((x49<=x50)^x51)/x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile uint16_t x55 = UINT16_MAX;
	uint32_t x56 = 14U;
	volatile uint32_t t13 = 2704628U;

	t13 = (((x53<=x54)^x55)/x56);

	if (t13 != 4681U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x58 = -3;
	uint64_t x59 = UINT64_MAX;
	volatile int16_t x60 = INT16_MIN;
	uint64_t t14 = 1679148867426584LLU;

	t14 = (((x57<=x58)^x59)/x60);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int32_t x62 = INT32_MAX;
	int16_t x63 = -5;
	uint16_t x64 = UINT16_MAX;
	int32_t t15 = 24660;

	t15 = (((x61<=x62)^x63)/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x69 = INT16_MIN;
	int32_t x71 = 0;
	static volatile int32_t t16 = -259771;

	t16 = (((x69<=x70)^x71)/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x74 = 1U;
	static volatile int64_t x75 = 16063494217LL;
	static volatile int64_t t17 = 502602949409LL;

	t17 = (((x73<=x74)^x75)/x76);

	if (t17 != -14393812LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = UINT32_MAX;
	volatile int32_t x78 = 1;
	int8_t x80 = -2;
	int32_t t18 = 76335;

	t18 = (((x77<=x78)^x79)/x80);

	if (t18 != -16383) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	volatile int16_t x82 = -1;
	volatile int16_t x83 = -1;
	int64_t x84 = INT64_MIN;
	static int64_t t19 = -2690217417605667035LL;

	t19 = (((x81<=x82)^x83)/x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	int8_t x86 = INT8_MAX;
	static uint64_t x87 = 16363869157347196LLU;
	int32_t x88 = INT32_MAX;

	t20 = (((x85<=x86)^x87)/x88);

	if (t20 != 7620020LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	static uint16_t x90 = 2U;
	volatile int8_t x91 = -18;
	static volatile int8_t x92 = -1;
	static volatile int32_t t21 = 12582116;

	t21 = (((x89<=x90)^x91)/x92);

	if (t21 != 17) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -11;
	int8_t x94 = INT8_MIN;
	uint32_t x95 = UINT32_MAX;
	int64_t x96 = -1LL;
	volatile int64_t t22 = -233743788713448036LL;

	t22 = (((x93<=x94)^x95)/x96);

	if (t22 != -4294967295LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 2127784LLU;
	static int16_t x98 = -24;
	static int16_t x99 = -1;
	int32_t x100 = INT32_MIN;

	t23 = (((x97<=x98)^x99)/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -2213243689067508LL;
	static int32_t x103 = -68;
	volatile uint64_t x104 = 1LLU;
	static volatile uint64_t t24 = 1LLU;

	t24 = (((x101<=x102)^x103)/x104);

	if (t24 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x105 = UINT32_MAX;
	uint64_t x106 = 37856023343291LLU;
	int64_t x107 = -1LL;
	int64_t x108 = 24LL;
	int64_t t25 = 855714612919LL;

	t25 = (((x105<=x106)^x107)/x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 7U;
	static int16_t x110 = -1;
	int64_t x111 = 92739696LL;
	uint8_t x112 = 38U;
	int64_t t26 = 21173077502934546LL;

	t26 = (((x109<=x110)^x111)/x112);

	if (t26 != 2440518LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x113 = 30U;
	volatile int32_t x114 = INT32_MIN;
	int16_t x115 = INT16_MAX;
	int16_t x116 = INT16_MAX;
	volatile int32_t t27 = -681530;

	t27 = (((x113<=x114)^x115)/x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x117 = 27U;
	static uint8_t x118 = 3U;
	static int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MIN;

	t28 = (((x117<=x118)^x119)/x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -19;
	static uint32_t x123 = UINT32_MAX;
	uint8_t x124 = 9U;
	uint32_t t29 = 248033U;

	t29 = (((x121<=x122)^x123)/x124);

	if (t29 != 477218588U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x125 = -1LL;
	uint32_t x126 = 29U;
	volatile int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	volatile int32_t t30 = -6926462;

	t30 = (((x125<=x126)^x127)/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 27U;
	int16_t x130 = -354;
	uint64_t x132 = 409115114LLU;
	uint64_t t31 = 6086109313LLU;

	t31 = (((x129<=x130)^x131)/x132);

	if (t31 != 113LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	volatile int8_t x134 = INT8_MIN;
	int64_t x135 = -1LL;
	static volatile int64_t x136 = -96LL;

	t32 = (((x133<=x134)^x135)/x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = 5034U;
	uint64_t x138 = 22LLU;
	int8_t x140 = 57;
	static volatile int32_t t33 = -3286;

	t33 = (((x137<=x138)^x139)/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x142 = -1376;
	volatile uint8_t x143 = 0U;
	int8_t x144 = INT8_MIN;
	int32_t t34 = 61933464;

	t34 = (((x141<=x142)^x143)/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -1;
	uint16_t x146 = UINT16_MAX;
	int8_t x148 = INT8_MIN;

	t35 = (((x145<=x146)^x147)/x148);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 4U;
	int8_t x150 = -1;
	static uint64_t x151 = 937117379583584LLU;
	uint64_t x152 = 204197424587LLU;
	volatile uint64_t t36 = 9135235813679631306LLU;

	t36 = (((x149<=x150)^x151)/x152);

	if (t36 != 4589LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = -1;
	int32_t x154 = -15;
	uint64_t x155 = 701520241390550LLU;
	int32_t x156 = INT32_MIN;
	static volatile uint64_t t37 = 31584LLU;

	t37 = (((x153<=x154)^x155)/x156);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = 951U;
	volatile int64_t x158 = -1LL;
	uint64_t x159 = 166715803LLU;
	int8_t x160 = INT8_MIN;
	uint64_t t38 = 1449LLU;

	t38 = (((x157<=x158)^x159)/x160);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = INT64_MIN;
	int32_t x162 = INT32_MIN;
	volatile int32_t x164 = -1028770;
	volatile int32_t t39 = 57;

	t39 = (((x161<=x162)^x163)/x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x165 = 2U;
	int64_t x166 = 286690LL;
	int32_t x167 = INT32_MAX;
	volatile int64_t x168 = -1LL;
	volatile int64_t t40 = 5243911LL;

	t40 = (((x165<=x166)^x167)/x168);

	if (t40 != -2147483646LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x170 = -1;
	uint32_t x171 = 37169873U;
	int8_t x172 = INT8_MIN;
	uint32_t t41 = 3713U;

	t41 = (((x169<=x170)^x171)/x172);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 1U;
	int64_t x174 = INT64_MAX;
	uint32_t x175 = 530387467U;
	int16_t x176 = INT16_MIN;
	uint32_t t42 = 12U;

	t42 = (((x173<=x174)^x175)/x176);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = -1LL;
	uint64_t x182 = 15668725327790799LLU;
	uint64_t x183 = 3LLU;
	volatile uint64_t t43 = 31554118620LLU;

	t43 = (((x181<=x182)^x183)/x184);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MIN;
	int16_t x187 = -1;
	static int64_t x188 = INT64_MAX;
	volatile int64_t t44 = -1960LL;

	t44 = (((x185<=x186)^x187)/x188);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = -1;
	int8_t x190 = INT8_MIN;
	uint16_t x191 = 8300U;
	volatile int64_t x192 = -1LL;

	t45 = (((x189<=x190)^x191)/x192);

	if (t45 != -8300LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MIN;
	int16_t x194 = INT16_MIN;
	uint32_t x195 = 5183732U;
	static int64_t x196 = INT64_MIN;
	volatile int64_t t46 = 58319010LL;

	t46 = (((x193<=x194)^x195)/x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x197 = 102389554LL;
	int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MAX;
	int32_t x200 = -1;
	volatile int64_t t47 = 322678268LL;

	t47 = (((x197<=x198)^x199)/x200);

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = 12LL;
	int8_t x202 = INT8_MIN;
	int8_t x203 = -3;
	static volatile int8_t x204 = -1;

	t48 = (((x201<=x202)^x203)/x204);

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x206 = 87U;
	uint32_t x207 = 5826U;

	t49 = (((x205<=x206)^x207)/x208);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x209 = 2358;
	int16_t x211 = -1;
	static volatile int32_t t50 = 11010086;

	t50 = (((x209<=x210)^x211)/x212);

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x213 = -561200651474LL;
	int32_t x214 = -1;
	static volatile uint64_t x215 = 8259333668513053492LLU;
	static int16_t x216 = -4;
	volatile uint64_t t51 = 5466552492LLU;

	t51 = (((x213<=x214)^x215)/x216);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = -5;
	int64_t x218 = INT64_MIN;
	int8_t x219 = INT8_MIN;

	t52 = (((x217<=x218)^x219)/x220);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x221 = 3571U;
	uint16_t x222 = UINT16_MAX;
	uint32_t x223 = 83U;
	static uint8_t x224 = UINT8_MAX;

	t53 = (((x221<=x222)^x223)/x224);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = 2LL;
	int32_t x226 = -1;
	uint64_t x227 = 4527930096LLU;
	uint16_t x228 = 45U;
	static volatile uint64_t t54 = 8599542122122LLU;

	t54 = (((x225<=x226)^x227)/x228);

	if (t54 != 100620668LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x229 = 5;
	volatile int64_t x230 = 14752937212LL;
	uint32_t x232 = 60217U;
	uint32_t t55 = 22007U;

	t55 = (((x229<=x230)^x231)/x232);

	if (t55 != 71324U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	static volatile uint32_t x234 = 47U;
	int16_t x235 = -1;
	int8_t x236 = 1;
	volatile int32_t t56 = -530;

	t56 = (((x233<=x234)^x235)/x236);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = -32053792;
	uint64_t x238 = 57442481909704229LLU;
	int64_t x239 = -884348LL;
	int64_t x240 = INT64_MIN;
	int64_t t57 = 90633881791LL;

	t57 = (((x237<=x238)^x239)/x240);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = -1;
	int16_t x243 = -11797;
	int32_t t58 = -1686;

	t58 = (((x241<=x242)^x243)/x244);

	if (t58 != -11797) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = 31991358;
	volatile int16_t x246 = INT16_MIN;
	volatile int32_t x247 = INT32_MIN;
	int64_t x248 = -1LL;
	volatile int64_t t59 = -818LL;

	t59 = (((x245<=x246)^x247)/x248);

	if (t59 != 2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x249 = UINT8_MAX;
	int16_t x250 = 1033;
	static int64_t x251 = 1845238370LL;
	int64_t t60 = 53094097903228LL;

	t60 = (((x249<=x250)^x251)/x252);

	if (t60 != 123485LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x254 = INT16_MAX;
	static int8_t x255 = 1;
	int8_t x256 = INT8_MIN;
	int32_t t61 = -1;

	t61 = (((x253<=x254)^x255)/x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = 5U;
	uint16_t x258 = 16115U;
	int64_t x259 = INT64_MAX;
	int8_t x260 = INT8_MIN;
	int64_t t62 = -429253596291LL;

	t62 = (((x257<=x258)^x259)/x260);

	if (t62 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x262 = -1LL;
	static int8_t x263 = INT8_MAX;
	int8_t x264 = -1;
	volatile int32_t t63 = 27;

	t63 = (((x261<=x262)^x263)/x264);

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x266 = -1;
	uint64_t x267 = 8680126313565861LLU;
	volatile uint64_t t64 = 397832838840811414LLU;

	t64 = (((x265<=x266)^x267)/x268);

	if (t64 != 8241LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = -1;
	uint64_t x270 = UINT64_MAX;
	volatile int8_t x272 = INT8_MIN;
	int32_t t65 = -51;

	t65 = (((x269<=x270)^x271)/x272);

	if (t65 != -511) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MIN;
	int16_t x275 = -8;
	uint16_t x276 = 254U;
	int32_t t66 = -55;

	t66 = (((x273<=x274)^x275)/x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x277 = INT32_MIN;
	int64_t x278 = -1LL;
	int16_t x279 = 412;
	uint32_t x280 = 51U;

	t67 = (((x277<=x278)^x279)/x280);

	if (t67 != 8U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x281 = -1;
	int64_t x282 = INT64_MAX;
	volatile int8_t x283 = 4;
	int64_t x284 = -1LL;
	int64_t t68 = 2LL;

	t68 = (((x281<=x282)^x283)/x284);

	if (t68 != -5LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = 397086662924LL;
	volatile int64_t x286 = INT64_MAX;
	uint16_t x287 = UINT16_MAX;
	int32_t x288 = 208;

	t69 = (((x285<=x286)^x287)/x288);

	if (t69 != 315) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MAX;
	uint8_t x292 = 2U;
	int32_t t70 = 3;

	t70 = (((x289<=x290)^x291)/x292);

	if (t70 != 1073741823) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MAX;
	int64_t x294 = -1LL;
	volatile uint64_t x295 = 17LLU;
	static volatile uint64_t t71 = 457906391406279450LLU;

	t71 = (((x293<=x294)^x295)/x296);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x297 = UINT64_MAX;
	static int8_t x299 = INT8_MIN;
	volatile uint16_t x300 = 31U;
	int32_t t72 = -18;

	t72 = (((x297<=x298)^x299)/x300);

	if (t72 != -4) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = 0U;
	volatile int16_t x303 = -1;
	int16_t x304 = -1;
	static volatile int32_t t73 = -81;

	t73 = (((x301<=x302)^x303)/x304);

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = INT64_MAX;
	volatile uint16_t x306 = 218U;
	static int8_t x307 = -37;
	int32_t t74 = -373194932;

	t74 = (((x305<=x306)^x307)/x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = INT16_MIN;
	int16_t x310 = -1;
	int64_t x311 = INT64_MAX;
	uint32_t x312 = 3983253U;
	static int64_t t75 = 179669127249299LL;

	t75 = (((x309<=x310)^x311)/x312);

	if (t75 != 2315537586202LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = -107245119;
	static volatile uint8_t x315 = UINT8_MAX;
	int64_t x316 = -1LL;

	t76 = (((x313<=x314)^x315)/x316);

	if (t76 != -255LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x319 = INT32_MAX;

	t77 = (((x317<=x318)^x319)/x320);

	if (t77 != 306783378) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = INT16_MIN;
	uint32_t x322 = 1956809921U;
	volatile int8_t x323 = INT8_MAX;
	static volatile int16_t x324 = INT16_MIN;
	int32_t t78 = 566387;

	t78 = (((x321<=x322)^x323)/x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x325 = 91LLU;
	static int32_t x326 = INT32_MAX;
	int16_t x327 = INT16_MAX;
	volatile int16_t x328 = INT16_MIN;
	volatile int32_t t79 = -923;

	t79 = (((x325<=x326)^x327)/x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x329 = 0U;
	int32_t x330 = -1;
	static volatile int16_t x332 = -2;
	uint64_t t80 = 168144660904832LLU;

	t80 = (((x329<=x330)^x331)/x332);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = INT32_MIN;
	int64_t x335 = INT64_MAX;
	int8_t x336 = 1;

	t81 = (((x333<=x334)^x335)/x336);

	if (t81 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = 3U;
	uint16_t x339 = 1U;
	volatile uint64_t x340 = UINT64_MAX;

	t82 = (((x337<=x338)^x339)/x340);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x346 = -8543;
	volatile int64_t x347 = INT64_MIN;
	uint16_t x348 = UINT16_MAX;
	static int64_t t83 = 65444455LL;

	t83 = (((x345<=x346)^x347)/x348);

	if (t83 != -140739635871744LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MAX;
	static int64_t x352 = INT64_MAX;
	volatile int64_t t84 = -573765493559314LL;

	t84 = (((x349<=x350)^x351)/x352);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = -1LL;
	int16_t x356 = -1;
	volatile int32_t t85 = 624;

	t85 = (((x353<=x354)^x355)/x356);

	if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x361 = 37;
	int32_t x362 = INT32_MAX;
	volatile int64_t x363 = INT64_MAX;
	uint16_t x364 = 5U;
	int64_t t86 = -3931768LL;

	t86 = (((x361<=x362)^x363)/x364);

	if (t86 != 1844674407370955161LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x365 = -1;
	int32_t x366 = -1;
	uint16_t x368 = UINT16_MAX;
	uint64_t t87 = 2571LLU;

	t87 = (((x365<=x366)^x367)/x368);

	if (t87 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x370 = 515699U;
	int32_t x372 = INT32_MIN;
	static volatile uint32_t t88 = 8783U;

	t88 = (((x369<=x370)^x371)/x372);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = INT16_MAX;
	uint16_t x374 = 2U;
	uint16_t x375 = 37U;
	int64_t x376 = INT64_MIN;
	int64_t t89 = -1LL;

	t89 = (((x373<=x374)^x375)/x376);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x377 = 1U;
	int32_t x378 = 0;
	int16_t x379 = INT16_MIN;
	volatile int32_t x380 = 11243;
	int32_t t90 = 659435;

	t90 = (((x377<=x378)^x379)/x380);

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x381 = 220LL;
	uint8_t x382 = 94U;
	volatile int8_t x383 = INT8_MIN;
	int32_t t91 = -12899608;

	t91 = (((x381<=x382)^x383)/x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = -2984;
	int32_t x386 = INT32_MAX;
	int64_t x387 = INT64_MAX;
	int8_t x388 = -7;

	t92 = (((x385<=x386)^x387)/x388);

	if (t92 != -1317624576693539400LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x389 = 880U;
	int32_t x390 = INT32_MIN;
	int16_t x391 = INT16_MIN;
	int16_t x392 = -1;
	int32_t t93 = 49575;

	t93 = (((x389<=x390)^x391)/x392);

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x393 = -1;
	static int64_t x394 = -124568LL;
	int32_t x395 = 174;
	static int16_t x396 = INT16_MIN;
	volatile int32_t t94 = 74650291;

	t94 = (((x393<=x394)^x395)/x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = -2LL;
	static volatile int64_t x398 = -1LL;
	volatile uint64_t x399 = UINT64_MAX;

	t95 = (((x397<=x398)^x399)/x400);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x402 = -9077961LL;
	int64_t x404 = INT64_MIN;
	int64_t t96 = -1726LL;

	t96 = (((x401<=x402)^x403)/x404);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x405 = UINT32_MAX;
	static volatile int64_t x406 = INT64_MAX;
	volatile int64_t x407 = INT64_MIN;

	t97 = (((x405<=x406)^x407)/x408);

	if (t97 != 281474976710655LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x409 = 20981U;
	static int16_t x410 = INT16_MIN;
	int16_t x412 = -772;
	int32_t t98 = 442198892;

	t98 = (((x409<=x410)^x411)/x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x415 = INT16_MAX;
	int64_t x416 = -1LL;
	int64_t t99 = -1LL;

	t99 = (((x413<=x414)^x415)/x416);

	if (t99 != -32766LL) { NG(); } else { ; }
	
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


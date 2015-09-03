#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x4 = UINT8_MAX;
uint16_t x12 = 1858U;
volatile uint16_t x13 = 30030U;
int8_t x19 = INT8_MIN;
volatile int64_t t5 = -8127050LL;
volatile int16_t x27 = 18;
int16_t x28 = INT16_MIN;
int32_t x31 = 7333;
static int64_t t7 = -1574179421339347LL;
uint32_t x34 = 49051U;
int64_t x37 = INT64_MIN;
uint64_t x41 = 3274145666864LLU;
int8_t x42 = INT8_MAX;
volatile int64_t x47 = INT64_MIN;
int16_t x48 = 52;
uint32_t x58 = UINT32_MAX;
uint8_t x63 = UINT8_MAX;
int32_t x70 = INT32_MIN;
int16_t x84 = 15116;
volatile int16_t x93 = INT16_MAX;
int64_t x99 = INT64_MIN;
static uint8_t x103 = UINT8_MAX;
int16_t x121 = INT16_MIN;
int32_t x132 = -15200158;
int64_t x133 = -1LL;
int16_t x134 = -1;
int64_t x140 = INT64_MIN;
int16_t x147 = INT16_MIN;
int16_t x148 = -1;
uint64_t x151 = 3247020534LLU;
static int8_t x154 = INT8_MIN;
static int64_t t37 = -76893796LL;
uint64_t x161 = 155LLU;
int16_t x162 = -77;
uint8_t x170 = 73U;
static uint8_t x172 = 2U;
int8_t x176 = INT8_MIN;
volatile int16_t x183 = 15;
volatile int16_t x188 = INT16_MAX;
int64_t x193 = INT64_MAX;
uint32_t x198 = 28746U;
int32_t x204 = -1;
int8_t x206 = INT8_MAX;
uint32_t x207 = UINT32_MAX;
static int8_t x213 = INT8_MIN;
int64_t x218 = INT64_MIN;
uint8_t x224 = 16U;
int8_t x226 = -6;
volatile uint8_t x232 = 0U;
static uint64_t x235 = 13679609014LLU;
volatile int8_t x236 = INT8_MAX;
volatile int64_t x243 = INT64_MIN;
static volatile int64_t x250 = -1481593968LL;
uint32_t x255 = UINT32_MAX;
int8_t x264 = INT8_MAX;
static int32_t x276 = INT32_MIN;
int64_t x280 = INT64_MIN;
int64_t t67 = INT64_MIN;
int16_t x285 = INT16_MAX;
int32_t t71 = -24;
static uint8_t x298 = UINT8_MAX;
int8_t x307 = INT8_MIN;
int32_t x308 = INT32_MAX;
static uint16_t x309 = 1152U;
static uint16_t x310 = 0U;
uint32_t x315 = UINT32_MAX;
volatile int32_t t77 = 14281021;
volatile int32_t x332 = -7;
int16_t x337 = -1;
uint64_t t82 = UINT64_MAX;
static int16_t x346 = 7;
uint32_t x348 = 510U;
volatile uint32_t t83 = 114724196U;
static volatile int64_t x350 = INT64_MAX;
int32_t x352 = -752;
uint32_t x358 = UINT32_MAX;
uint32_t x364 = 21U;
int32_t x371 = INT32_MIN;
static int32_t x380 = INT32_MIN;
volatile int64_t x399 = -1LL;
uint32_t x400 = 65714643U;
int8_t x406 = INT8_MIN;
static volatile int32_t t99 = -108498;


void f0(void) {
	int32_t x1 = -1;
	int32_t x2 = INT32_MIN;
	int16_t x3 = INT16_MAX;
	volatile int32_t t0 = 471;

	t0 = (((x1<=x2)<=x3)+x4);

	if (t0 != 256) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 32115U;
	static uint16_t x6 = 49U;
	int64_t x7 = INT64_MIN;
	int16_t x8 = 0;
	int32_t t1 = 5;

	t1 = (((x5<=x6)<=x7)+x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int64_t x10 = -127554060LL;
	int32_t x11 = 6410971;
	static volatile int32_t t2 = 5;

	t2 = (((x9<=x10)<=x11)+x12);

	if (t2 != 1859) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	volatile int8_t x15 = INT8_MAX;
	volatile int16_t x16 = INT16_MIN;
	int32_t t3 = 834687;

	t3 = (((x13<=x14)<=x15)+x16);

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int32_t x18 = -642;
	static uint8_t x20 = UINT8_MAX;
	static volatile int32_t t4 = 111356;

	t4 = (((x17<=x18)<=x19)+x20);

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 5382995U;
	static int64_t x22 = -25386057932506LL;
	int32_t x23 = INT32_MAX;
	static int64_t x24 = INT64_MIN;

	t5 = (((x21<=x22)<=x23)+x24);

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 3914;
	int8_t x26 = 50;
	volatile int32_t t6 = -11;

	t6 = (((x25<=x26)<=x27)+x28);

	if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 31577U;
	uint16_t x30 = 149U;
	int64_t x32 = -43421610LL;

	t7 = (((x29<=x30)<=x31)+x32);

	if (t7 != -43421609LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 111U;
	static int32_t x35 = INT32_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 1;

	t8 = (((x33<=x34)<=x35)+x36);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = 2U;
	uint64_t x39 = 26712261532303LLU;
	volatile int16_t x40 = -1;
	volatile int32_t t9 = 125887;

	t9 = (((x37<=x38)<=x39)+x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x43 = -1;
	static volatile uint16_t x44 = 7378U;
	static int32_t t10 = 2;

	t10 = (((x41<=x42)<=x43)+x44);

	if (t10 != 7378) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int64_t x46 = 6LL;
	volatile int32_t t11 = 233;

	t11 = (((x45<=x46)<=x47)+x48);

	if (t11 != 52) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = 0;
	uint64_t x50 = UINT64_MAX;
	int16_t x51 = -4;
	int8_t x52 = INT8_MIN;
	int32_t t12 = -88;

	t12 = (((x49<=x50)<=x51)+x52);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -1;
	static int32_t x54 = -1;
	int32_t x55 = INT32_MAX;
	int8_t x56 = -1;
	static volatile int32_t t13 = -906511;

	t13 = (((x53<=x54)<=x55)+x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = -1LL;
	int8_t x59 = 0;
	uint64_t x60 = 34322903989192LLU;
	uint64_t t14 = 802394957LLU;

	t14 = (((x57<=x58)<=x59)+x60);

	if (t14 != 34322903989192LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MIN;
	int8_t x62 = INT8_MIN;
	int8_t x64 = INT8_MIN;
	static int32_t t15 = 558511;

	t15 = (((x61<=x62)<=x63)+x64);

	if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	static volatile uint16_t x66 = 2U;
	int8_t x67 = INT8_MIN;
	int32_t x68 = -937;
	int32_t t16 = 0;

	t16 = (((x65<=x66)<=x67)+x68);

	if (t16 != -937) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int64_t x71 = INT64_MIN;
	int64_t x72 = -1LL;
	volatile int64_t t17 = -1941502702884982569LL;

	t17 = (((x69<=x70)<=x71)+x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 184646LLU;
	int64_t x74 = INT64_MAX;
	int8_t x75 = -7;
	uint16_t x76 = 9370U;
	int32_t t18 = 1;

	t18 = (((x73<=x74)<=x75)+x76);

	if (t18 != 9370) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = -142LL;
	volatile int8_t x78 = INT8_MIN;
	int8_t x79 = -57;
	uint64_t x80 = 15331186719303493LLU;
	volatile uint64_t t19 = 2000392337144218LLU;

	t19 = (((x77<=x78)<=x79)+x80);

	if (t19 != 15331186719303493LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int32_t x82 = INT32_MIN;
	static int8_t x83 = -1;
	volatile int32_t t20 = 1005;

	t20 = (((x81<=x82)<=x83)+x84);

	if (t20 != 15116) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MIN;
	int8_t x86 = -1;
	volatile int64_t x87 = INT64_MIN;
	int16_t x88 = -1;
	volatile int32_t t21 = -1;

	t21 = (((x85<=x86)<=x87)+x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = INT8_MAX;
	int32_t x95 = -1;
	int32_t x96 = -1;
	int32_t t22 = -3332;

	t22 = (((x93<=x94)<=x95)+x96);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = 1U;
	static uint32_t x98 = UINT32_MAX;
	static uint32_t x100 = UINT32_MAX;
	uint32_t t23 = UINT32_MAX;

	t23 = (((x97<=x98)<=x99)+x100);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = 18;
	static int16_t x102 = INT16_MAX;
	volatile uint16_t x104 = 28666U;
	int32_t t24 = 1669;

	t24 = (((x101<=x102)<=x103)+x104);

	if (t24 != 28667) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = -1;
	uint32_t x107 = UINT32_MAX;
	uint16_t x108 = 1026U;
	int32_t t25 = -716492;

	t25 = (((x105<=x106)<=x107)+x108);

	if (t25 != 1027) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MAX;
	static uint64_t x110 = UINT64_MAX;
	static volatile uint16_t x111 = 588U;
	static volatile int8_t x112 = INT8_MIN;
	volatile int32_t t26 = 51295027;

	t26 = (((x109<=x110)<=x111)+x112);

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = -1;
	volatile uint16_t x114 = 677U;
	volatile int8_t x115 = -3;
	uint64_t x116 = 961963048LLU;
	volatile uint64_t t27 = 1LLU;

	t27 = (((x113<=x114)<=x115)+x116);

	if (t27 != 961963048LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MAX;
	uint16_t x118 = 2U;
	volatile uint8_t x119 = 1U;
	uint64_t x120 = 1508935959574LLU;
	static volatile uint64_t t28 = 15LLU;

	t28 = (((x117<=x118)<=x119)+x120);

	if (t28 != 1508935959575LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x122 = 15482U;
	uint32_t x123 = 50U;
	int16_t x124 = INT16_MAX;
	int32_t t29 = -72045808;

	t29 = (((x121<=x122)<=x123)+x124);

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x125 = INT8_MIN;
	uint32_t x126 = UINT32_MAX;
	uint64_t x127 = 427LLU;
	uint8_t x128 = 2U;
	int32_t t30 = -3;

	t30 = (((x125<=x126)<=x127)+x128);

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = -1;
	volatile uint8_t x130 = 4U;
	static int16_t x131 = INT16_MAX;
	int32_t t31 = 947198841;

	t31 = (((x129<=x130)<=x131)+x132);

	if (t31 != -15200157) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x135 = UINT16_MAX;
	volatile uint64_t x136 = 2LLU;
	uint64_t t32 = 789556267LLU;

	t32 = (((x133<=x134)<=x135)+x136);

	if (t32 != 3LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MIN;
	int32_t x139 = INT32_MIN;
	static volatile int64_t t33 = INT64_MIN;

	t33 = (((x137<=x138)<=x139)+x140);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	static int64_t x142 = -1LL;
	static uint16_t x143 = UINT16_MAX;
	volatile int8_t x144 = -1;
	int32_t t34 = -6011;

	t34 = (((x141<=x142)<=x143)+x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	static int16_t x146 = INT16_MIN;
	volatile int32_t t35 = 0;

	t35 = (((x145<=x146)<=x147)+x148);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 3U;
	int8_t x150 = -12;
	static volatile int16_t x152 = INT16_MAX;
	volatile int32_t t36 = 27034995;

	t36 = (((x149<=x150)<=x151)+x152);

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = 0;
	int16_t x155 = 0;
	int64_t x156 = INT64_MIN;

	t37 = (((x153<=x154)<=x155)+x156);

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x157 = UINT32_MAX;
	volatile uint8_t x158 = UINT8_MAX;
	int64_t x159 = INT64_MAX;
	int8_t x160 = INT8_MAX;
	static volatile int32_t t38 = 421;

	t38 = (((x157<=x158)<=x159)+x160);

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x163 = UINT16_MAX;
	static int64_t x164 = INT64_MIN;
	volatile int64_t t39 = -3441848427641LL;

	t39 = (((x161<=x162)<=x163)+x164);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = 1241;
	static int16_t x166 = 77;
	static uint8_t x167 = 50U;
	uint64_t x168 = 71041818140745626LLU;
	volatile uint64_t t40 = 1361296775465LLU;

	t40 = (((x165<=x166)<=x167)+x168);

	if (t40 != 71041818140745627LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x169 = INT16_MIN;
	static int16_t x171 = -1;
	volatile int32_t t41 = -481;

	t41 = (((x169<=x170)<=x171)+x172);

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = INT32_MAX;
	int32_t x174 = 57;
	int64_t x175 = INT64_MAX;
	int32_t t42 = 5429;

	t42 = (((x173<=x174)<=x175)+x176);

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = 130636457LL;
	uint64_t x178 = 69592074420673LLU;
	int32_t x179 = INT32_MAX;
	int64_t x180 = INT64_MIN;
	volatile int64_t t43 = -1LL;

	t43 = (((x177<=x178)<=x179)+x180);

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MIN;
	static volatile int64_t x182 = INT64_MAX;
	volatile int16_t x184 = 0;
	static int32_t t44 = -26565;

	t44 = (((x181<=x182)<=x183)+x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x185 = 1036379857494779877LL;
	uint32_t x186 = 0U;
	int8_t x187 = -27;
	int32_t t45 = -221990;

	t45 = (((x185<=x186)<=x187)+x188);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x194 = UINT8_MAX;
	volatile uint8_t x195 = 1U;
	int16_t x196 = INT16_MIN;
	int32_t t46 = 109579528;

	t46 = (((x193<=x194)<=x195)+x196);

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x197 = INT8_MIN;
	uint64_t x199 = 30LLU;
	int8_t x200 = -1;
	volatile int32_t t47 = 74;

	t47 = (((x197<=x198)<=x199)+x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = INT64_MIN;
	volatile uint16_t x202 = 508U;
	int16_t x203 = -13;
	static volatile int32_t t48 = 54;

	t48 = (((x201<=x202)<=x203)+x204);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t49 = 43343674808675LLU;

	t49 = (((x205<=x206)<=x207)+x208);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = -39;
	static uint16_t x210 = 119U;
	int8_t x211 = INT8_MIN;
	static uint16_t x212 = 10378U;
	volatile int32_t t50 = 507432;

	t50 = (((x209<=x210)<=x211)+x212);

	if (t50 != 10378) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x214 = 4708801411LL;
	volatile uint64_t x215 = UINT64_MAX;
	int64_t x216 = -9574625867923LL;
	int64_t t51 = 3LL;

	t51 = (((x213<=x214)<=x215)+x216);

	if (t51 != -9574625867922LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = INT8_MIN;
	uint8_t x219 = UINT8_MAX;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t52 = -44549;

	t52 = (((x217<=x218)<=x219)+x220);

	if (t52 != 65536) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x221 = UINT32_MAX;
	static int8_t x222 = INT8_MAX;
	static volatile uint16_t x223 = 6035U;
	volatile int32_t t53 = 14503557;

	t53 = (((x221<=x222)<=x223)+x224);

	if (t53 != 17) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x225 = -1LL;
	int64_t x227 = INT64_MIN;
	int32_t x228 = -977736930;
	volatile int32_t t54 = 0;

	t54 = (((x225<=x226)<=x227)+x228);

	if (t54 != -977736930) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = -466734467413929638LL;
	volatile int8_t x230 = INT8_MAX;
	int64_t x231 = INT64_MIN;
	int32_t t55 = -213919764;

	t55 = (((x229<=x230)<=x231)+x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x233 = INT16_MIN;
	volatile int16_t x234 = INT16_MAX;
	volatile int32_t t56 = -10685627;

	t56 = (((x233<=x234)<=x235)+x236);

	if (t56 != 128) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = INT64_MIN;
	int32_t x238 = INT32_MIN;
	static uint8_t x239 = 77U;
	int16_t x240 = INT16_MAX;
	static int32_t t57 = 60602101;

	t57 = (((x237<=x238)<=x239)+x240);

	if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = -1;
	int64_t x242 = -1LL;
	uint8_t x244 = 1U;
	volatile int32_t t58 = 115;

	t58 = (((x241<=x242)<=x243)+x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MAX;
	int16_t x247 = -132;
	int8_t x248 = 3;
	volatile int32_t t59 = 273684;

	t59 = (((x245<=x246)<=x247)+x248);

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = -1;
	int8_t x251 = INT8_MIN;
	uint64_t x252 = UINT64_MAX;
	uint64_t t60 = UINT64_MAX;

	t60 = (((x249<=x250)<=x251)+x252);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = -45;
	uint8_t x254 = 58U;
	uint64_t x256 = 33025LLU;
	volatile uint64_t t61 = 7LLU;

	t61 = (((x253<=x254)<=x255)+x256);

	if (t61 != 33026LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 1001917635143437LLU;
	uint16_t x258 = 7233U;
	volatile int64_t x259 = INT64_MIN;
	int8_t x260 = -59;
	int32_t t62 = 397038732;

	t62 = (((x257<=x258)<=x259)+x260);

	if (t62 != -59) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = 5990;
	int16_t x262 = 2436;
	int64_t x263 = 2573369LL;
	int32_t t63 = -64701576;

	t63 = (((x261<=x262)<=x263)+x264);

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x265 = -1;
	static int64_t x266 = INT64_MIN;
	int8_t x267 = -1;
	static int64_t x268 = INT64_MAX;
	int64_t t64 = INT64_MAX;

	t64 = (((x265<=x266)<=x267)+x268);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x269 = INT16_MIN;
	uint8_t x270 = 16U;
	volatile int16_t x271 = -1;
	static uint16_t x272 = 0U;
	static volatile int32_t t65 = 2815702;

	t65 = (((x269<=x270)<=x271)+x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x273 = 13;
	uint32_t x274 = 20U;
	int64_t x275 = 21543106847509LL;
	volatile int32_t t66 = -103;

	t66 = (((x273<=x274)<=x275)+x276);

	if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = INT32_MIN;
	static int32_t x278 = 64782;
	int16_t x279 = INT16_MIN;

	t67 = (((x277<=x278)<=x279)+x280);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = -1LL;
	uint16_t x282 = 16800U;
	int64_t x283 = 490842948LL;
	int64_t x284 = -1LL;
	volatile int64_t t68 = 9002889434LL;

	t68 = (((x281<=x282)<=x283)+x284);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x286 = -1;
	static volatile uint16_t x287 = 17U;
	int16_t x288 = INT16_MIN;
	volatile int32_t t69 = 12;

	t69 = (((x285<=x286)<=x287)+x288);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = -1LL;
	int64_t x290 = INT64_MAX;
	volatile int64_t x291 = INT64_MIN;
	int64_t x292 = 1220LL;
	volatile int64_t t70 = -199958119150087598LL;

	t70 = (((x289<=x290)<=x291)+x292);

	if (t70 != 1220LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MIN;
	uint16_t x295 = 168U;
	static int8_t x296 = -2;

	t71 = (((x293<=x294)<=x295)+x296);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = INT16_MIN;
	int64_t x299 = 1878997752666LL;
	uint32_t x300 = 272007U;
	volatile uint32_t t72 = 1376705331U;

	t72 = (((x297<=x298)<=x299)+x300);

	if (t72 != 272008U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x301 = UINT16_MAX;
	uint32_t x302 = 136679U;
	volatile int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MIN;
	static int32_t t73 = INT32_MIN;

	t73 = (((x301<=x302)<=x303)+x304);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x305 = 1418901LLU;
	int64_t x306 = -1LL;
	int32_t t74 = INT32_MAX;

	t74 = (((x305<=x306)<=x307)+x308);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x311 = INT32_MIN;
	int32_t x312 = -1;
	static int32_t t75 = 776768399;

	t75 = (((x309<=x310)<=x311)+x312);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = 401984792589235LLU;
	volatile int16_t x314 = -1;
	int32_t x316 = INT32_MIN;
	volatile int32_t t76 = -1;

	t76 = (((x313<=x314)<=x315)+x316);

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x317 = UINT32_MAX;
	static int16_t x318 = INT16_MIN;
	int64_t x319 = INT64_MAX;
	int8_t x320 = 1;

	t77 = (((x317<=x318)<=x319)+x320);

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = -101;
	int32_t x322 = INT32_MIN;
	int32_t x323 = 98;
	volatile int32_t x324 = INT32_MIN;
	int32_t t78 = -128349;

	t78 = (((x321<=x322)<=x323)+x324);

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x325 = 4U;
	uint32_t x326 = 454U;
	int64_t x327 = INT64_MIN;
	uint32_t x328 = 437U;
	volatile uint32_t t79 = 34781359U;

	t79 = (((x325<=x326)<=x327)+x328);

	if (t79 != 437U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x329 = UINT8_MAX;
	volatile uint32_t x330 = 162048035U;
	int16_t x331 = -1598;
	volatile int32_t t80 = -1;

	t80 = (((x329<=x330)<=x331)+x332);

	if (t80 != -7) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x338 = INT32_MAX;
	static int8_t x339 = INT8_MIN;
	static volatile uint64_t x340 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = (((x337<=x338)<=x339)+x340);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = -1597959807608612047LL;
	int32_t x342 = -1;
	volatile int8_t x343 = -1;
	static uint64_t x344 = UINT64_MAX;

	t82 = (((x341<=x342)<=x343)+x344);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = -67;
	static uint32_t x347 = 155875477U;

	t83 = (((x345<=x346)<=x347)+x348);

	if (t83 != 511U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = -1;
	volatile int8_t x351 = 42;
	int32_t t84 = -1858;

	t84 = (((x349<=x350)<=x351)+x352);

	if (t84 != -751) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = -16896LL;
	volatile int64_t x354 = -1LL;
	uint8_t x355 = 0U;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (((x353<=x354)<=x355)+x356);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = -5;
	uint64_t x359 = 13LLU;
	volatile int16_t x360 = INT16_MIN;
	int32_t t86 = 88;

	t86 = (((x357<=x358)<=x359)+x360);

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x361 = UINT8_MAX;
	uint32_t x362 = 26U;
	uint32_t x363 = 3287U;
	volatile uint32_t t87 = 179440U;

	t87 = (((x361<=x362)<=x363)+x364);

	if (t87 != 22U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x365 = UINT8_MAX;
	uint8_t x366 = 0U;
	volatile int32_t x367 = -1;
	uint32_t x368 = 170722070U;
	uint32_t t88 = 35614846U;

	t88 = (((x365<=x366)<=x367)+x368);

	if (t88 != 170722070U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = -4;
	volatile int8_t x370 = -26;
	int64_t x372 = INT64_MIN;
	int64_t t89 = INT64_MIN;

	t89 = (((x369<=x370)<=x371)+x372);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x373 = 205345750LLU;
	static uint16_t x374 = 16U;
	int16_t x375 = -1;
	uint64_t x376 = 551471800477132LLU;
	volatile uint64_t t90 = 958101130710LLU;

	t90 = (((x373<=x374)<=x375)+x376);

	if (t90 != 551471800477132LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x377 = 6U;
	static uint32_t x378 = 1U;
	uint32_t x379 = 737U;
	volatile int32_t t91 = 2022916;

	t91 = (((x377<=x378)<=x379)+x380);

	if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = INT64_MIN;
	volatile int32_t x382 = INT32_MIN;
	volatile int8_t x383 = INT8_MIN;
	uint16_t x384 = UINT16_MAX;
	int32_t t92 = 1;

	t92 = (((x381<=x382)<=x383)+x384);

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x385 = INT8_MIN;
	static int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MAX;
	static int16_t x388 = -1;
	volatile int32_t t93 = 212101;

	t93 = (((x385<=x386)<=x387)+x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = INT64_MIN;
	volatile int32_t x390 = INT32_MIN;
	int16_t x391 = -12;
	int16_t x392 = INT16_MIN;
	volatile int32_t t94 = -37228;

	t94 = (((x389<=x390)<=x391)+x392);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x393 = UINT8_MAX;
	int16_t x394 = -1;
	uint32_t x395 = 3410U;
	int8_t x396 = INT8_MIN;
	int32_t t95 = -1336;

	t95 = (((x393<=x394)<=x395)+x396);

	if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x397 = 501U;
	static uint8_t x398 = UINT8_MAX;
	static uint32_t t96 = 299U;

	t96 = (((x397<=x398)<=x399)+x400);

	if (t96 != 65714643U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x401 = 702997389671LL;
	static volatile uint16_t x402 = 1356U;
	uint32_t x403 = UINT32_MAX;
	int64_t x404 = INT64_MIN;
	int64_t t97 = -504111436625681LL;

	t97 = (((x401<=x402)<=x403)+x404);

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x405 = INT64_MIN;
	int16_t x407 = -1;
	volatile uint64_t x408 = 956707410003549LLU;
	volatile uint64_t t98 = 15659408576LLU;

	t98 = (((x405<=x406)<=x407)+x408);

	if (t98 != 956707410003549LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x409 = 5U;
	int16_t x410 = INT16_MIN;
	int16_t x411 = INT16_MIN;
	uint8_t x412 = 19U;

	t99 = (((x409<=x410)<=x411)+x412);

	if (t99 != 19) { NG(); } else { ; }
	
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


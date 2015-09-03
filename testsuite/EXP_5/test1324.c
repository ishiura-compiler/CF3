#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = -1;
int8_t x7 = INT8_MAX;
volatile int32_t t1 = -18830601;
int16_t x13 = -3;
static int8_t x14 = 3;
uint16_t x25 = 8453U;
static int64_t x27 = 233610554970993354LL;
volatile int8_t x33 = 24;
int16_t x34 = INT16_MIN;
int32_t x37 = -247965;
uint64_t t9 = 1659704LLU;
uint32_t x41 = UINT32_MAX;
volatile uint64_t t10 = 12109401495426LLU;
uint32_t x45 = 760U;
static int16_t x47 = INT16_MAX;
static int8_t x51 = 0;
uint64_t t15 = 9028LLU;
int16_t x70 = INT16_MIN;
static int8_t x73 = INT8_MIN;
static uint64_t x74 = 15181314LLU;
uint32_t x75 = 31348806U;
volatile int64_t t18 = -101631403LL;
int64_t x77 = -1298LL;
volatile int32_t x80 = -1;
int8_t x83 = -1;
static uint8_t x85 = 3U;
uint8_t x89 = 7U;
uint64_t t23 = 20169431127LLU;
volatile int32_t t24 = 2;
int8_t x105 = -1;
volatile uint8_t x109 = 4U;
volatile int32_t x110 = INT32_MAX;
static int64_t x112 = -1LL;
int8_t x119 = INT8_MAX;
volatile uint16_t x122 = 1231U;
int8_t x128 = 60;
volatile int64_t x129 = INT64_MIN;
volatile uint8_t x131 = 12U;
int32_t x132 = 271;
volatile int32_t t33 = 11;
volatile int32_t x137 = 868762346;
int64_t x145 = -1LL;
uint64_t x147 = UINT64_MAX;
volatile int64_t t37 = 27158754035357LL;
static uint16_t x154 = UINT16_MAX;
int32_t t38 = 1420380;
uint16_t x170 = 24U;
int64_t t44 = 748955321994319LL;
int32_t x190 = INT32_MAX;
int32_t x193 = -7;
static int32_t x203 = 115;
int64_t x210 = 5437556LL;
int32_t x213 = 366878;
volatile int32_t t53 = -28;
volatile int64_t t54 = 13036302709244LL;
static uint32_t x222 = UINT32_MAX;
uint16_t x226 = UINT16_MAX;
static int32_t x228 = 131449470;
static volatile int64_t x230 = 10388836862LL;
int32_t x234 = INT32_MIN;
volatile int32_t t60 = 17169266;
int64_t x255 = INT64_MIN;
volatile uint64_t t63 = 5633749581592571LLU;
uint16_t x274 = 6U;
volatile int32_t x276 = -11728;
volatile int64_t t69 = 2278130574361LL;
int32_t x295 = -1;
int32_t t74 = 131740;
uint64_t x311 = 46120135LLU;
int16_t x312 = 52;
int32_t t78 = -9;
volatile int64_t t79 = 476LL;
volatile int64_t x323 = -214242115665954068LL;
volatile int32_t t80 = -187686533;
uint64_t x335 = UINT64_MAX;
volatile uint8_t x338 = UINT8_MAX;
volatile int64_t t84 = 4468565727LL;
static uint8_t x342 = 86U;
uint8_t x344 = 4U;
static uint16_t x345 = 229U;
volatile int8_t x348 = -1;
int16_t x349 = -2;
volatile uint8_t x352 = 44U;
uint64_t x356 = 87082LLU;
static int8_t x359 = -1;
volatile int16_t x360 = -1;
int64_t x364 = INT64_MIN;
static int64_t x366 = 2958554384672065800LL;
static int64_t x367 = INT64_MIN;
volatile int32_t t91 = 4;
int32_t t92 = -42;
static int32_t x377 = INT32_MAX;
static uint32_t x387 = 584689308U;
static uint64_t t97 = 43768688739225LLU;
int16_t x395 = -7299;
int64_t x397 = -1LL;


void f0(void) {
	int64_t x1 = -1LL;
	static uint8_t x2 = 38U;
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = -63067LL;

	t0 = (x1&((x2==x3)&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint8_t x6 = UINT8_MAX;
	static volatile uint16_t x8 = 424U;

	t1 = (x5&((x6==x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -15200;
	volatile uint8_t x10 = 105U;
	int8_t x11 = 1;
	volatile int8_t x12 = 1;
	volatile int32_t t2 = -29201;

	t2 = (x9&((x10==x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x15 = INT64_MAX;
	volatile int8_t x16 = 3;
	int32_t t3 = 120457855;

	t3 = (x13&((x14==x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int8_t x18 = INT8_MIN;
	volatile int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MAX;
	static int64_t t4 = 77LL;

	t4 = (x17&((x18==x19)&x20));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static volatile int8_t x22 = INT8_MAX;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -26444966;

	t5 = (x21&((x22==x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -1;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -4939459;

	t6 = (x25&((x26==x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 30;
	uint64_t x30 = UINT64_MAX;
	volatile int16_t x31 = INT16_MIN;
	volatile int8_t x32 = INT8_MIN;
	static int32_t t7 = 7316;

	t7 = (x29&((x30==x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x35 = 1;
	int16_t x36 = -1;
	int32_t t8 = 4050014;

	t8 = (x33&((x34==x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x38 = UINT16_MAX;
	uint8_t x39 = UINT8_MAX;
	volatile uint64_t x40 = 63038808LLU;

	t9 = (x37&((x38==x39)&x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x42 = -8;
	static int16_t x43 = -36;
	volatile uint64_t x44 = UINT64_MAX;

	t10 = (x41&((x42==x43)&x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = 1975499749860561550LL;
	volatile uint16_t x48 = 86U;
	uint32_t t11 = 327307923U;

	t11 = (x45&((x46==x47)&x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MAX;
	static uint32_t x50 = 345665213U;
	static int64_t x52 = INT64_MIN;
	int64_t t12 = -2087955311664621LL;

	t12 = (x49&((x50==x51)&x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -142427132;
	int64_t x54 = INT64_MIN;
	int8_t x55 = -1;
	uint8_t x56 = 13U;
	volatile int32_t t13 = 2220174;

	t13 = (x53&((x54==x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	volatile int64_t x59 = INT64_MIN;
	uint16_t x60 = 11861U;
	volatile int32_t t14 = 3;

	t14 = (x57&((x58==x59)&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 45U;
	uint8_t x62 = 30U;
	int64_t x63 = -1LL;
	uint64_t x64 = 2615410LLU;

	t15 = (x61&((x62==x63)&x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	static volatile int8_t x66 = INT8_MIN;
	int32_t x67 = INT32_MIN;
	uint64_t x68 = 900045664935LLU;
	static uint64_t t16 = 48LLU;

	t16 = (x65&((x66==x67)&x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = 73068878LLU;
	static int32_t x71 = -7314192;
	volatile int8_t x72 = INT8_MIN;
	volatile uint64_t t17 = 239103LLU;

	t17 = (x69&((x70==x71)&x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x76 = INT64_MIN;

	t18 = (x73&((x74==x75)&x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x78 = INT16_MIN;
	volatile int16_t x79 = -83;
	static int64_t t19 = -220LL;

	t19 = (x77&((x78==x79)&x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 7;
	int16_t x82 = -1;
	int32_t x84 = INT32_MIN;
	int32_t t20 = -10509;

	t20 = (x81&((x82==x83)&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x86 = INT32_MIN;
	int32_t x87 = -1;
	int8_t x88 = INT8_MAX;
	static int32_t t21 = 40781072;

	t21 = (x85&((x86==x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = 9U;
	volatile uint16_t x91 = 4U;
	uint16_t x92 = UINT16_MAX;
	int32_t t22 = -5731;

	t22 = (x89&((x90==x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 28453LLU;
	uint16_t x94 = UINT16_MAX;
	int8_t x95 = INT8_MIN;
	int8_t x96 = -1;

	t23 = (x93&((x94==x95)&x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int16_t x98 = -1;
	uint16_t x99 = UINT16_MAX;
	int16_t x100 = INT16_MAX;

	t24 = (x97&((x98==x99)&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MAX;
	static int8_t x102 = -12;
	volatile uint64_t x103 = UINT64_MAX;
	static int8_t x104 = -39;
	volatile int32_t t25 = -3618;

	t25 = (x101&((x102==x103)&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x106 = 2672019584139873LLU;
	static int16_t x107 = 0;
	static uint8_t x108 = 99U;
	static int32_t t26 = -162655962;

	t26 = (x105&((x106==x107)&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x111 = INT16_MIN;
	volatile int64_t t27 = -333873078527LL;

	t27 = (x109&((x110==x111)&x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = -1;
	static int32_t x114 = -1;
	int8_t x115 = INT8_MAX;
	int64_t x116 = -1LL;
	int64_t t28 = -198879445LL;

	t28 = (x113&((x114==x115)&x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	uint16_t x118 = UINT16_MAX;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = -9707322LL;

	t29 = (x117&((x118==x119)&x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	uint16_t x123 = 213U;
	static int8_t x124 = -1;
	volatile int64_t t30 = -25891LL;

	t30 = (x121&((x122==x123)&x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	static int32_t x126 = -1;
	int8_t x127 = 43;
	volatile int64_t t31 = -2363613LL;

	t31 = (x125&((x126==x127)&x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x130 = INT64_MAX;
	int64_t t32 = 2925262LL;

	t32 = (x129&((x130==x131)&x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 9;
	volatile int32_t x134 = 0;
	int8_t x135 = 0;
	static int8_t x136 = -6;

	t33 = (x133&((x134==x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = -1;
	volatile int8_t x139 = -15;
	uint8_t x140 = UINT8_MAX;
	static int32_t t34 = -94217;

	t34 = (x137&((x138==x139)&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	uint16_t x142 = 27831U;
	volatile int64_t x143 = -3219017564149LL;
	int32_t x144 = -1;
	volatile int64_t t35 = 10752674029371LL;

	t35 = (x141&((x142==x143)&x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = 36;
	int64_t x148 = INT64_MAX;
	volatile int64_t t36 = -1751LL;

	t36 = (x145&((x146==x147)&x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 68U;
	uint8_t x150 = 94U;
	volatile int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MIN;

	t37 = (x149&((x150==x151)&x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = 0;
	volatile int8_t x155 = -18;
	volatile int16_t x156 = INT16_MAX;

	t38 = (x153&((x154==x155)&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	volatile int64_t x158 = INT64_MAX;
	uint8_t x159 = UINT8_MAX;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = -4820;

	t39 = (x157&((x158==x159)&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = 36;
	static int64_t x162 = -1LL;
	int8_t x163 = 58;
	static int32_t x164 = -377504;
	volatile int32_t t40 = -3393;

	t40 = (x161&((x162==x163)&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 53;
	uint32_t x166 = 184U;
	uint32_t x167 = 22452692U;
	static uint16_t x168 = 1U;
	volatile int32_t t41 = 1;

	t41 = (x165&((x166==x167)&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	int64_t x171 = INT64_MIN;
	static int16_t x172 = INT16_MAX;
	volatile int32_t t42 = 12678688;

	t42 = (x169&((x170==x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MIN;
	uint32_t x174 = UINT32_MAX;
	int64_t x175 = INT64_MAX;
	static volatile uint16_t x176 = 20143U;
	static int64_t t43 = -46849752LL;

	t43 = (x173&((x174==x175)&x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = INT64_MIN;
	uint8_t x178 = 25U;
	int32_t x179 = INT32_MIN;
	int16_t x180 = 9;

	t44 = (x177&((x178==x179)&x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	uint16_t x182 = UINT16_MAX;
	int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MIN;
	static int32_t t45 = 13513205;

	t45 = (x181&((x182==x183)&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = -1;
	static int32_t x187 = 2;
	int8_t x188 = INT8_MIN;
	int32_t t46 = -6;

	t46 = (x185&((x186==x187)&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 6534612449LLU;
	uint16_t x191 = 17128U;
	uint8_t x192 = UINT8_MAX;
	volatile uint64_t t47 = 69109865LLU;

	t47 = (x189&((x190==x191)&x192));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x194 = UINT8_MAX;
	int64_t x195 = 68573982928LL;
	volatile int8_t x196 = -1;
	static int32_t t48 = 356;

	t48 = (x193&((x194==x195)&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 1U;
	volatile int16_t x198 = 0;
	int8_t x199 = 36;
	int8_t x200 = INT8_MAX;
	int32_t t49 = -18668;

	t49 = (x197&((x198==x199)&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 35508U;
	static int64_t x202 = INT64_MIN;
	int16_t x204 = -305;
	volatile uint32_t t50 = 135377U;

	t50 = (x201&((x202==x203)&x204));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 8;
	int16_t x206 = 3249;
	static uint64_t x207 = 42LLU;
	int16_t x208 = INT16_MAX;
	volatile int32_t t51 = 1;

	t51 = (x205&((x206==x207)&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	static uint16_t x211 = 0U;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t52 = -14622;

	t52 = (x209&((x210==x211)&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x214 = 3U;
	int64_t x215 = 393LL;
	int8_t x216 = INT8_MIN;

	t53 = (x213&((x214==x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MAX;
	uint64_t x218 = UINT64_MAX;
	static volatile int16_t x219 = -1;
	int64_t x220 = INT64_MIN;

	t54 = (x217&((x218==x219)&x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	int8_t x223 = -1;
	int64_t x224 = 342886176753254321LL;
	int64_t t55 = -956841871464155409LL;

	t55 = (x221&((x222==x223)&x224));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 1U;
	static uint16_t x227 = 454U;
	int32_t t56 = -1356357;

	t56 = (x225&((x226==x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = -146;
	uint64_t x231 = 1010290171421LLU;
	int16_t x232 = INT16_MIN;
	volatile int32_t t57 = 111;

	t57 = (x229&((x230==x231)&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	uint32_t x235 = 10U;
	uint8_t x236 = 38U;
	volatile int32_t t58 = -474671;

	t58 = (x233&((x234==x235)&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = -14;
	volatile int8_t x238 = INT8_MIN;
	uint8_t x239 = 13U;
	uint64_t x240 = 1001082532745493212LLU;
	static uint64_t t59 = 3LLU;

	t59 = (x237&((x238==x239)&x240));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MAX;
	int8_t x243 = 4;
	volatile int16_t x244 = 2;

	t60 = (x241&((x242==x243)&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x245 = 24U;
	volatile uint64_t x246 = UINT64_MAX;
	int16_t x247 = 13248;
	static int16_t x248 = -1;
	volatile int32_t t61 = -3855946;

	t61 = (x245&((x246==x247)&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -19LL;
	static int8_t x250 = INT8_MIN;
	int32_t x251 = INT32_MAX;
	int32_t x252 = INT32_MIN;
	volatile int64_t t62 = 0LL;

	t62 = (x249&((x250==x251)&x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = UINT64_MAX;
	int32_t x254 = INT32_MAX;
	uint64_t x256 = 392504202175LLU;

	t63 = (x253&((x254==x255)&x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -23006;
	static uint16_t x258 = 975U;
	static int8_t x259 = 20;
	int32_t x260 = -1;
	int32_t t64 = 0;

	t64 = (x257&((x258==x259)&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	volatile int32_t x262 = INT32_MAX;
	volatile int16_t x263 = -379;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -4;

	t65 = (x261&((x262==x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int64_t x266 = INT64_MIN;
	volatile int64_t x267 = 0LL;
	static int32_t x268 = INT32_MAX;
	static int64_t t66 = -89525798162LL;

	t66 = (x265&((x266==x267)&x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = -81201LL;
	static volatile int16_t x270 = INT16_MAX;
	uint32_t x271 = 1032977200U;
	volatile uint64_t x272 = 980028657LLU;
	static volatile uint64_t t67 = 4309LLU;

	t67 = (x269&((x270==x271)&x272));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 8939519U;
	int64_t x275 = INT64_MIN;
	static volatile uint32_t t68 = 171U;

	t68 = (x273&((x274==x275)&x276));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 0;
	int8_t x278 = -1;
	int16_t x279 = -1933;
	volatile int64_t x280 = -1LL;

	t69 = (x277&((x278==x279)&x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = -40;
	static uint64_t x282 = UINT64_MAX;
	static uint32_t x283 = 1U;
	static int8_t x284 = INT8_MIN;
	int32_t t70 = -174662;

	t70 = (x281&((x282==x283)&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x285 = 1;
	uint64_t x286 = UINT64_MAX;
	volatile uint16_t x287 = 543U;
	int64_t x288 = -1301740121547615102LL;
	int64_t t71 = -198946LL;

	t71 = (x285&((x286==x287)&x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	static int16_t x290 = -1;
	static uint8_t x291 = UINT8_MAX;
	int32_t x292 = -1;
	volatile int32_t t72 = 196;

	t72 = (x289&((x290==x291)&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = -1;
	int8_t x294 = 11;
	static int16_t x296 = INT16_MIN;
	static volatile int32_t t73 = 216;

	t73 = (x293&((x294==x295)&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x297 = 708U;
	static int16_t x298 = INT16_MIN;
	int64_t x299 = INT64_MIN;
	uint8_t x300 = 51U;

	t74 = (x297&((x298==x299)&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x301 = 1503697955839LLU;
	int32_t x302 = INT32_MAX;
	uint32_t x303 = 3767950U;
	uint8_t x304 = 18U;
	volatile uint64_t t75 = 303535222382450334LLU;

	t75 = (x301&((x302==x303)&x304));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x305 = UINT16_MAX;
	int8_t x306 = INT8_MIN;
	uint16_t x307 = 21964U;
	uint64_t x308 = 354847669LLU;
	static uint64_t t76 = 1493855LLU;

	t76 = (x305&((x306==x307)&x308));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	uint16_t x310 = UINT16_MAX;
	int32_t t77 = -1718;

	t77 = (x309&((x310==x311)&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 399;
	static int8_t x314 = -1;
	int64_t x315 = INT64_MAX;
	int8_t x316 = INT8_MIN;

	t78 = (x313&((x314==x315)&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	int32_t x318 = -1;
	static int64_t x319 = 2116654421LL;
	static int64_t x320 = -1LL;

	t79 = (x317&((x318==x319)&x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x321 = 242U;
	volatile uint64_t x322 = 3562947524066175929LLU;
	int32_t x324 = INT32_MIN;

	t80 = (x321&((x322==x323)&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	static uint16_t x326 = 0U;
	volatile uint16_t x327 = 20U;
	int64_t x328 = INT64_MAX;
	int64_t t81 = 550843882876156LL;

	t81 = (x325&((x326==x327)&x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = 15U;
	uint64_t x330 = 32337189LLU;
	uint64_t x331 = UINT64_MAX;
	volatile int64_t x332 = INT64_MIN;
	volatile int64_t t82 = 4241236711LL;

	t82 = (x329&((x330==x331)&x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x333 = 6U;
	int16_t x334 = -2;
	static uint64_t x336 = 260149LLU;
	static volatile uint64_t t83 = 1269745LLU;

	t83 = (x333&((x334==x335)&x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x337 = INT64_MAX;
	static int8_t x339 = -1;
	int32_t x340 = -1;

	t84 = (x337&((x338==x339)&x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 403;
	int64_t x343 = -1492757993627325LL;
	int32_t t85 = -1012143553;

	t85 = (x341&((x342==x343)&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = 14669298465975LL;
	static uint32_t x347 = 74889648U;
	volatile int32_t t86 = -35418724;

	t86 = (x345&((x346==x347)&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	static int32_t t87 = -5246;

	t87 = (x349&((x350==x351)&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	static int8_t x354 = INT8_MIN;
	int64_t x355 = -2359986807218868LL;
	uint64_t t88 = 31687171663762649LLU;

	t88 = (x353&((x354==x355)&x356));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	int32_t x358 = 16030;
	uint32_t t89 = 13974513U;

	t89 = (x357&((x358==x359)&x360));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	int16_t x362 = -1;
	uint8_t x363 = UINT8_MAX;
	volatile uint64_t t90 = 2LLU;

	t90 = (x361&((x362==x363)&x364));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	uint8_t x368 = 59U;

	t91 = (x365&((x366==x367)&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = INT8_MAX;
	int8_t x370 = -1;
	uint64_t x371 = 7559697LLU;
	int8_t x372 = INT8_MAX;

	t92 = (x369&((x370==x371)&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	int8_t x374 = INT8_MAX;
	static uint16_t x375 = UINT16_MAX;
	int8_t x376 = -1;
	volatile int32_t t93 = -13427;

	t93 = (x373&((x374==x375)&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x378 = UINT8_MAX;
	uint8_t x379 = 0U;
	static uint64_t x380 = 1744503672608061445LLU;
	static volatile uint64_t t94 = 17488346739013994LLU;

	t94 = (x377&((x378==x379)&x380));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 4U;
	static int8_t x382 = INT8_MIN;
	volatile int8_t x383 = INT8_MIN;
	uint16_t x384 = 16086U;
	volatile int32_t t95 = -2;

	t95 = (x381&((x382==x383)&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	int16_t x386 = 249;
	int16_t x388 = -3350;
	static uint64_t t96 = 169984908395378LLU;

	t96 = (x385&((x386==x387)&x388));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 194819293LLU;
	static uint64_t x390 = 118053LLU;
	static int32_t x391 = -1;
	uint32_t x392 = 14679974U;

	t97 = (x389&((x390==x391)&x392));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	static int32_t x394 = 2512;
	int16_t x396 = INT16_MIN;
	uint32_t t98 = 2U;

	t98 = (x393&((x394==x395)&x396));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = -1;
	volatile int8_t x399 = INT8_MAX;
	int16_t x400 = 4817;
	volatile int64_t t99 = -212688855LL;

	t99 = (x397&((x398==x399)&x400));

	if (t99 != 0LL) { NG(); } else { ; }
	
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


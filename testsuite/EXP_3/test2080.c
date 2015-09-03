#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = INT64_MAX;
uint64_t x12 = UINT64_MAX;
static int16_t x21 = INT16_MIN;
uint16_t x29 = 3167U;
uint64_t x33 = 2123919942LLU;
uint16_t x35 = 1921U;
volatile uint32_t t9 = 1695412U;
int64_t x43 = -1LL;
volatile int16_t x44 = INT16_MIN;
int32_t t12 = -2031;
static uint8_t x56 = UINT8_MAX;
uint32_t x57 = UINT32_MAX;
volatile int64_t x58 = INT64_MAX;
static uint64_t x60 = UINT64_MAX;
static int8_t x64 = INT8_MIN;
uint32_t x65 = 1757U;
volatile int64_t t17 = 0LL;
int16_t x76 = -127;
int16_t x78 = -1;
static volatile int64_t t22 = 942LL;
int8_t x104 = INT8_MIN;
int64_t x105 = 967503873810471474LL;
volatile int16_t x112 = INT16_MIN;
volatile int8_t x117 = -1;
uint16_t x126 = 7U;
volatile uint32_t t31 = 84372610U;
volatile int8_t x140 = INT8_MAX;
volatile int64_t t34 = 1668665340LL;
uint16_t x141 = UINT16_MAX;
int32_t x142 = INT32_MIN;
int32_t x144 = -6;
static uint8_t x154 = UINT8_MAX;
int8_t x157 = INT8_MAX;
volatile int64_t x166 = INT64_MIN;
int16_t x167 = INT16_MAX;
volatile int64_t t41 = -2789075048LL;
volatile uint32_t x171 = UINT32_MAX;
static uint32_t x174 = 58U;
volatile int8_t x175 = INT8_MAX;
static int16_t x177 = -10;
volatile uint8_t x182 = UINT8_MAX;
volatile uint8_t x186 = 120U;
int16_t x190 = INT16_MIN;
uint16_t x198 = UINT16_MAX;
int16_t x208 = -10902;
int64_t t52 = -1207359663201141735LL;
volatile int16_t x228 = INT16_MIN;
volatile int64_t t56 = 0LL;
int32_t x235 = INT32_MIN;
static uint64_t x246 = 35LLU;
volatile int8_t x247 = INT8_MIN;
volatile uint64_t t61 = 11672761955902LLU;
int8_t x249 = 1;
volatile int16_t x251 = INT16_MIN;
static volatile int32_t x252 = -67036;
int32_t x256 = 0;
int64_t x259 = INT64_MAX;
uint32_t x262 = UINT32_MAX;
int32_t x263 = INT32_MAX;
int32_t x265 = INT32_MIN;
uint16_t x267 = UINT16_MAX;
static int16_t x271 = -1;
int8_t x272 = 29;
int64_t x274 = INT64_MAX;
volatile int32_t x278 = 246;
uint8_t x288 = UINT8_MAX;
volatile uint64_t t71 = 2676LLU;
int32_t x299 = INT32_MIN;
static volatile int8_t x304 = INT8_MIN;
uint32_t x312 = 324792644U;
static volatile uint32_t t77 = 71082185U;
int64_t x317 = INT64_MIN;
int64_t t81 = 1585686399572195221LL;
int16_t x336 = INT16_MAX;
int16_t x337 = 1;
int64_t t85 = 2162669239944LL;
int8_t x347 = INT8_MAX;
int32_t x348 = INT32_MIN;
int32_t t86 = 141;
static int64_t x352 = -1LL;
static int64_t t88 = -571718LL;
int32_t x358 = INT32_MIN;
uint16_t x363 = UINT16_MAX;
int64_t x378 = -15LL;
int8_t x380 = -62;
static int32_t x384 = INT32_MIN;
volatile uint32_t x386 = 33U;
volatile uint32_t t96 = 6U;
int32_t x390 = INT32_MIN;
volatile int32_t t98 = 4929982;
int64_t x397 = INT64_MIN;
int64_t x398 = INT64_MIN;


void f0(void) {
	uint8_t x1 = 2U;
	int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MAX;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = 395785875;

	t0 = ((x1/x2)^(x3^x4));

	if (t0 != 65408) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int64_t x6 = INT64_MIN;
	static uint64_t x8 = 273594401177LLU;
	static uint64_t t1 = 452920378701210882LLU;

	t1 = ((x5/x6)^(x7^x8));

	if (t1 != 9223371763260374630LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	static int32_t x10 = INT32_MIN;
	int16_t x11 = 6;
	volatile uint64_t t2 = 518427LLU;

	t2 = ((x9/x10)^(x11^x12));

	if (t2 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	uint64_t x14 = 12685020939LLU;
	uint16_t x15 = 3U;
	int64_t x16 = INT64_MAX;
	uint64_t t3 = 5LLU;

	t3 = ((x13/x14)^(x15^x16));

	if (t3 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 35515;
	int8_t x18 = INT8_MAX;
	volatile uint16_t x19 = 29U;
	static volatile int64_t x20 = INT64_MIN;
	volatile int64_t t4 = -527028274095311901LL;

	t4 = ((x17/x18)^(x19^x20));

	if (t4 != -9223372036854775542LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -1LL;
	int64_t x23 = INT64_MIN;
	int64_t x24 = -8417473329693LL;
	volatile int64_t t5 = 10169LL;

	t5 = ((x21/x22)^(x23^x24));

	if (t5 != 9223363619381478883LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -3;
	int64_t x26 = INT64_MIN;
	static volatile int32_t x27 = -1;
	volatile uint16_t x28 = 238U;
	volatile int64_t t6 = -1318214LL;

	t6 = ((x25/x26)^(x27^x28));

	if (t6 != -239LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = 11156844497099578LL;
	int32_t x31 = INT32_MIN;
	int32_t x32 = INT32_MAX;
	volatile int64_t t7 = -1269292273675282345LL;

	t7 = ((x29/x30)^(x31^x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	int8_t x36 = -1;
	uint64_t t8 = 4856623924LLU;

	t8 = ((x33/x34)^(x35^x36));

	if (t8 != 18446744073709549694LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 114998241U;
	volatile int16_t x38 = INT16_MAX;
	volatile uint8_t x39 = UINT8_MAX;
	int16_t x40 = INT16_MIN;

	t9 = ((x37/x38)^(x39^x40));

	if (t9 != 4294937930U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -126;
	volatile int32_t x42 = INT32_MAX;
	int64_t t10 = 111479LL;

	t10 = ((x41/x42)^(x43^x44));

	if (t10 != 32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = 23;
	int32_t x46 = -11804;
	uint8_t x47 = 11U;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 8956850;

	t11 = ((x45/x46)^(x47^x48));

	if (t11 != -32757) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -1;
	volatile uint16_t x50 = UINT16_MAX;
	static int16_t x51 = -1;
	uint16_t x52 = 3368U;

	t12 = ((x49/x50)^(x51^x52));

	if (t12 != -3369) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	uint8_t x54 = 26U;
	static int16_t x55 = -1;
	volatile int32_t t13 = 0;

	t13 = ((x53/x54)^(x55^x56));

	if (t13 != 1044) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x59 = -1;
	uint64_t t14 = 1016206LLU;

	t14 = ((x57/x58)^(x59^x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	int32_t x62 = INT32_MIN;
	volatile uint16_t x63 = 25U;
	static volatile int32_t t15 = 21;

	t15 = ((x61/x62)^(x63^x64));

	if (t15 != -103) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MAX;
	static int32_t x67 = -72856498;
	int32_t x68 = INT32_MAX;
	uint32_t t16 = 35U;

	t16 = ((x65/x66)^(x67^x68));

	if (t16 != 2220340156U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MAX;
	volatile int16_t x70 = INT16_MAX;
	uint16_t x71 = 24608U;
	int64_t x72 = 1755565LL;

	t17 = ((x69/x70)^(x71^x72));

	if (t17 != 1747341LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 6836614903LLU;
	int64_t x74 = INT64_MIN;
	int64_t x75 = -1LL;
	volatile uint64_t t18 = 623955733LLU;

	t18 = ((x73/x74)^(x75^x76));

	if (t18 != 126LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = 42900164U;
	int8_t x79 = -1;
	uint32_t x80 = 160U;
	uint32_t t19 = 19U;

	t19 = ((x77/x78)^(x79^x80));

	if (t19 != 4294967135U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MIN;
	int8_t x82 = INT8_MIN;
	volatile int16_t x83 = -12;
	int64_t x84 = INT64_MIN;
	volatile int64_t t20 = 1548934858LL;

	t20 = ((x81/x82)^(x83^x84));

	if (t20 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = 3U;
	uint8_t x86 = UINT8_MAX;
	int64_t x87 = INT64_MIN;
	int64_t x88 = -851LL;
	int64_t t21 = 17633915354LL;

	t21 = ((x85/x86)^(x87^x88));

	if (t21 != 9223372036854774957LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	static int32_t x90 = 776236;
	int64_t x91 = -6171914030LL;
	int16_t x92 = 0;

	t22 = ((x89/x90)^(x91^x92));

	if (t22 != 11888050907072LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int16_t x94 = -1;
	static int64_t x95 = -1LL;
	int32_t x96 = INT32_MIN;
	volatile int64_t t23 = 11LL;

	t23 = ((x93/x94)^(x95^x96));

	if (t23 != 2147483646LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = -1;
	int32_t x98 = -1;
	volatile int64_t x99 = 512378LL;
	static volatile int32_t x100 = INT32_MAX;
	int64_t t24 = -98LL;

	t24 = ((x97/x98)^(x99^x100));

	if (t24 != 2146971268LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MIN;
	volatile int32_t x102 = INT32_MIN;
	int16_t x103 = -7546;
	int32_t t25 = -5563;

	t25 = ((x101/x102)^(x103^x104));

	if (t25 != 7430) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = INT32_MIN;
	uint64_t x107 = 1068289603LLU;
	volatile int8_t x108 = INT8_MIN;
	volatile uint64_t t26 = 33373004063321LLU;

	t26 = ((x105/x106)^(x107^x108));

	if (t26 != 628509046LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	volatile uint8_t x110 = 1U;
	uint64_t x111 = UINT64_MAX;
	uint64_t t27 = 31848054035366LLU;

	t27 = ((x109/x110)^(x111^x112));

	if (t27 != 2147450880LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	static int8_t x114 = INT8_MIN;
	uint8_t x115 = 0U;
	int16_t x116 = INT16_MAX;
	volatile int32_t t28 = 120556;

	t28 = ((x113/x114)^(x115^x116));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x118 = 35U;
	uint8_t x119 = 1U;
	static volatile int16_t x120 = -116;
	volatile int32_t t29 = 99949;

	t29 = ((x117/x118)^(x119^x120));

	if (t29 != -115) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MIN;
	volatile int8_t x123 = INT8_MIN;
	static int8_t x124 = INT8_MAX;
	volatile int32_t t30 = 992;

	t30 = ((x121/x122)^(x123^x124));

	if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = UINT32_MAX;
	int8_t x127 = -1;
	int16_t x128 = INT16_MAX;

	t31 = ((x125/x126)^(x127^x128));

	if (t31 != 3681405220U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = -1;
	int64_t x130 = INT64_MAX;
	uint32_t x131 = 22990U;
	int16_t x132 = INT16_MIN;
	int64_t t32 = 5LL;

	t32 = ((x129/x130)^(x131^x132));

	if (t32 != 4294957518LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static int64_t x134 = INT64_MAX;
	int16_t x135 = -22;
	static int16_t x136 = -1;
	int64_t t33 = -52848012584538LL;

	t33 = ((x133/x134)^(x135^x136));

	if (t33 != 21LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = 7;
	static volatile int64_t x138 = INT64_MIN;
	static int64_t x139 = INT64_MIN;

	t34 = ((x137/x138)^(x139^x140));

	if (t34 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x143 = 32U;
	int32_t t35 = 8;

	t35 = ((x141/x142)^(x143^x144));

	if (t35 != -38) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	volatile int16_t x146 = INT16_MIN;
	uint32_t x147 = 1201U;
	uint8_t x148 = 2U;
	static volatile uint32_t t36 = 1686096U;

	t36 = ((x145/x146)^(x147^x148));

	if (t36 != 1202U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = UINT32_MAX;
	int8_t x150 = -1;
	volatile int8_t x151 = -1;
	uint8_t x152 = 6U;
	uint32_t t37 = 1362464U;

	t37 = ((x149/x150)^(x151^x152));

	if (t37 != 4294967288U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 93U;
	int8_t x155 = -1;
	static int8_t x156 = INT8_MAX;
	volatile int32_t t38 = 46993359;

	t38 = ((x153/x154)^(x155^x156));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MIN;
	static int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MIN;
	volatile int64_t t39 = -746129354866LL;

	t39 = ((x157/x158)^(x159^x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MAX;
	int64_t x162 = INT64_MIN;
	int8_t x163 = INT8_MIN;
	uint8_t x164 = 68U;
	int64_t t40 = 7048065573LL;

	t40 = ((x161/x162)^(x163^x164));

	if (t40 != -60LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = -1LL;
	int8_t x168 = INT8_MIN;

	t41 = ((x165/x166)^(x167^x168));

	if (t41 != -32641LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 388U;
	uint16_t x170 = 101U;
	static int8_t x172 = INT8_MIN;
	static volatile uint32_t t42 = 11581U;

	t42 = ((x169/x170)^(x171^x172));

	if (t42 != 124U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 8;
	static int16_t x176 = INT16_MAX;
	uint32_t t43 = 7208U;

	t43 = ((x173/x174)^(x175^x176));

	if (t43 != 32640U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x178 = 1U;
	int16_t x179 = 142;
	volatile uint64_t x180 = UINT64_MAX;
	volatile uint64_t t44 = 3LLU;

	t44 = ((x177/x178)^(x179^x180));

	if (t44 != 135LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 3U;
	int8_t x183 = -1;
	int32_t x184 = -1065115315;
	volatile int32_t t45 = -3398834;

	t45 = ((x181/x182)^(x183^x184));

	if (t45 != 1065115314) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -30;
	static int32_t x187 = 22150624;
	int64_t x188 = 17351LL;
	volatile int64_t t46 = 11205432432375LL;

	t46 = ((x185/x186)^(x187^x188));

	if (t46 != 22134311LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = 59806811613LL;
	int16_t x191 = 1;
	uint8_t x192 = 1U;
	static int64_t t47 = 3114782062087642955LL;

	t47 = ((x189/x190)^(x191^x192));

	if (t47 != -1825159LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MAX;
	uint64_t x194 = UINT64_MAX;
	uint64_t x195 = 24021428014599556LLU;
	int32_t x196 = -240567299;
	volatile uint64_t t48 = 75LLU;

	t48 = ((x193/x194)^(x195^x196));

	if (t48 != 18422722645799204473LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x197 = INT32_MIN;
	uint64_t x199 = 97864LLU;
	uint8_t x200 = UINT8_MAX;
	uint64_t t49 = 184LLU;

	t49 = ((x197/x198)^(x199^x200));

	if (t49 != 18446744073709485751LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	int32_t x202 = INT32_MIN;
	uint32_t x203 = 5U;
	int16_t x204 = INT16_MIN;
	uint32_t t50 = 16162542U;

	t50 = ((x201/x202)^(x203^x204));

	if (t50 != 4294934532U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x205 = UINT32_MAX;
	int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	uint32_t t51 = 3481237U;

	t51 = ((x205/x206)^(x207^x208));

	if (t51 != 2147472747U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = INT64_MAX;
	volatile uint32_t x211 = 8378U;
	volatile uint8_t x212 = 1U;

	t52 = ((x209/x210)^(x211^x212));

	if (t52 != 8379LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x213 = UINT16_MAX;
	static int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MIN;
	int64_t x216 = INT64_MIN;
	volatile int64_t t53 = 0LL;

	t53 = ((x213/x214)^(x215^x216));

	if (t53 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 0U;
	static int64_t x218 = INT64_MAX;
	int32_t x219 = -1;
	int32_t x220 = INT32_MAX;
	int64_t t54 = -16552LL;

	t54 = ((x217/x218)^(x219^x220));

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	uint32_t x222 = UINT32_MAX;
	int32_t x223 = INT32_MIN;
	int16_t x224 = 28;
	volatile uint64_t t55 = 16211944631341LLU;

	t55 = ((x221/x222)^(x223^x224));

	if (t55 != 18446744067267100701LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int64_t x226 = INT64_MAX;
	int16_t x227 = INT16_MIN;

	t56 = ((x225/x226)^(x227^x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	static volatile int64_t x230 = INT64_MAX;
	static int64_t x231 = INT64_MIN;
	volatile uint8_t x232 = UINT8_MAX;
	int64_t t57 = 22687914998LL;

	t57 = ((x229/x230)^(x231^x232));

	if (t57 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -4081;
	int16_t x234 = INT16_MIN;
	int8_t x236 = -18;
	volatile int32_t t58 = 4451458;

	t58 = ((x233/x234)^(x235^x236));

	if (t58 != 2147483630) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	volatile uint32_t x238 = UINT32_MAX;
	int32_t x239 = INT32_MAX;
	static uint64_t x240 = 18136033LLU;
	uint64_t t59 = 1264LLU;

	t59 = ((x237/x238)^(x239^x240));

	if (t59 != 6424314911LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x241 = INT64_MAX;
	volatile uint32_t x242 = 695358950U;
	uint8_t x243 = UINT8_MAX;
	uint64_t x244 = UINT64_MAX;
	static uint64_t t60 = 47255556665339LLU;

	t60 = ((x241/x242)^(x243^x244));

	if (t60 != 18446744060445363322LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 21;
	volatile int8_t x248 = 14;

	t61 = ((x245/x246)^(x247^x248));

	if (t61 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = INT16_MIN;
	int32_t t62 = 0;

	t62 = ((x249/x250)^(x251^x252));

	if (t62 != 96804) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	int32_t x254 = 15;
	uint16_t x255 = 1U;
	int64_t t63 = -10631613803115301LL;

	t63 = ((x253/x254)^(x255^x256));

	if (t63 != 614891469123651721LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 1U;
	int8_t x258 = INT8_MIN;
	uint16_t x260 = 0U;
	static volatile int64_t t64 = INT64_MAX;

	t64 = ((x257/x258)^(x259^x260));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 30530337578LL;
	int8_t x264 = INT8_MIN;
	volatile int64_t t65 = 90176959LL;

	t65 = ((x261/x262)^(x263^x264));

	if (t65 != -2147483528LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x266 = INT16_MIN;
	int16_t x268 = -1;
	int32_t t66 = -290;

	t66 = ((x265/x266)^(x267^x268));

	if (t66 != -131072) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	static int8_t x270 = INT8_MIN;
	static int32_t t67 = 10;

	t67 = ((x269/x270)^(x271^x272));

	if (t67 != -29) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	static int8_t x275 = INT8_MAX;
	volatile int64_t x276 = INT64_MIN;
	static volatile int64_t t68 = -1925289LL;

	t68 = ((x273/x274)^(x275^x276));

	if (t68 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	uint64_t x279 = 2335LLU;
	int8_t x280 = INT8_MIN;
	uint64_t t69 = 33172978115123LLU;

	t69 = ((x277/x278)^(x279^x280));

	if (t69 != 18446744073700819607LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x281 = 0;
	int16_t x282 = 4849;
	int64_t x283 = INT64_MAX;
	int32_t x284 = INT32_MAX;
	int64_t t70 = -112249309255720LL;

	t70 = ((x281/x282)^(x283^x284));

	if (t70 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = 1364LLU;
	uint16_t x286 = 221U;
	static int32_t x287 = -402;

	t71 = ((x285/x286)^(x287^x288));

	if (t71 != 18446744073709551255LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x289 = -1LL;
	uint8_t x290 = 1U;
	int8_t x291 = -1;
	int16_t x292 = INT16_MIN;
	int64_t t72 = -6340979306859LL;

	t72 = ((x289/x290)^(x291^x292));

	if (t72 != -32768LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = 206942178LL;
	static int8_t x295 = 42;
	uint64_t x296 = 13782610401033LLU;
	uint64_t t73 = 19892857620053415LLU;

	t73 = ((x293/x294)^(x295^x296));

	if (t73 != 13782610401059LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 193U;
	static int16_t x298 = 183;
	int64_t x300 = -1LL;
	int64_t t74 = 89141494921170994LL;

	t74 = ((x297/x298)^(x299^x300));

	if (t74 != 2147483646LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = -1;
	int64_t x302 = INT64_MIN;
	int8_t x303 = -1;
	int64_t t75 = 1LL;

	t75 = ((x301/x302)^(x303^x304));

	if (t75 != 127LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 174750587356LLU;
	int8_t x306 = -1;
	int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MIN;
	static volatile uint64_t t76 = 50378LLU;

	t76 = ((x305/x306)^(x307^x308));

	if (t76 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -8;
	int32_t x310 = -13;
	int8_t x311 = -12;

	t77 = ((x309/x310)^(x311^x312));

	if (t77 != 3970174640U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	static int64_t x314 = -1LL;
	uint16_t x315 = UINT16_MAX;
	int32_t x316 = -1;
	int64_t t78 = -148826971829899678LL;

	t78 = ((x313/x314)^(x315^x316));

	if (t78 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = INT16_MIN;
	static int32_t x319 = INT32_MIN;
	int32_t x320 = INT32_MAX;
	static volatile int64_t t79 = -14168LL;

	t79 = ((x317/x318)^(x319^x320));

	if (t79 != -281474976710657LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	volatile uint64_t x322 = 31069704938LLU;
	static volatile int16_t x323 = -1;
	int16_t x324 = INT16_MIN;
	volatile uint64_t t80 = 26LLU;

	t80 = ((x321/x322)^(x323^x324));

	if (t80 != 593692765LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = -1;
	int16_t x326 = 36;
	uint16_t x327 = 1U;
	int64_t x328 = -699358123441615LL;

	t81 = ((x325/x326)^(x327^x328));

	if (t81 != -699358123441616LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = INT64_MAX;
	int16_t x330 = -894;
	uint16_t x331 = UINT16_MAX;
	int16_t x332 = 275;
	volatile int64_t t82 = 89113349797019679LL;

	t82 = ((x329/x330)^(x331^x332));

	if (t82 != -10316970958393744LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 179U;
	static uint8_t x334 = 1U;
	int64_t x335 = INT64_MIN;
	volatile int64_t t83 = -72634614182892021LL;

	t83 = ((x333/x334)^(x335^x336));

	if (t83 != -9223372036854743220LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x338 = UINT32_MAX;
	int16_t x339 = 34;
	int32_t x340 = INT32_MIN;
	volatile uint32_t t84 = 534528525U;

	t84 = ((x337/x338)^(x339^x340));

	if (t84 != 2147483682U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	volatile int64_t x342 = 239LL;
	int16_t x343 = 6;
	uint16_t x344 = 319U;

	t85 = ((x341/x342)^(x343^x344));

	if (t85 != 38591514798555298LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = -1;
	volatile int32_t x346 = -64;

	t86 = ((x345/x346)^(x347^x348));

	if (t86 != -2147483521) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 1163815LLU;
	uint8_t x350 = UINT8_MAX;
	int32_t x351 = 86;
	uint64_t t87 = 1114249903011285LLU;

	t87 = ((x349/x350)^(x351^x352));

	if (t87 != 18446744073709547130LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -5LL;
	int16_t x354 = -1;
	int16_t x355 = INT16_MIN;
	volatile int64_t x356 = INT64_MAX;

	t88 = ((x353/x354)^(x355^x356));

	if (t88 != -9223372036854743046LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = 268143LL;
	int32_t x359 = -14759262;
	int16_t x360 = 0;
	static int64_t t89 = 1816512109053838623LL;

	t89 = ((x357/x358)^(x359^x360));

	if (t89 != -14759262LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	static volatile int64_t x362 = INT64_MIN;
	uint32_t x364 = 26953366U;
	int64_t t90 = -33217626198LL;

	t90 = ((x361/x362)^(x363^x364));

	if (t90 != 26982761LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 4U;
	uint64_t x366 = UINT64_MAX;
	static int32_t x367 = -61;
	volatile uint32_t x368 = 3321U;
	volatile uint64_t t91 = 28084025180015398LLU;

	t91 = ((x365/x366)^(x367^x368));

	if (t91 != 4294964026LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x369 = UINT16_MAX;
	volatile uint32_t x370 = UINT32_MAX;
	uint64_t x371 = 17737LLU;
	int32_t x372 = INT32_MIN;
	volatile uint64_t t92 = 15547638619952LLU;

	t92 = ((x369/x370)^(x371^x372));

	if (t92 != 18446744071562085705LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	int32_t x374 = -1;
	uint32_t x375 = 126147814U;
	static volatile uint32_t x376 = 446U;
	volatile uint32_t t93 = 115100034U;

	t93 = ((x373/x374)^(x375^x376));

	if (t93 != 126148056U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	int8_t x379 = INT8_MAX;
	int64_t t94 = 318LL;

	t94 = ((x377/x378)^(x379^x380));

	if (t94 != 69LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 61U;
	volatile int8_t x382 = INT8_MIN;
	volatile uint32_t x383 = 1010442316U;
	uint32_t t95 = 92523U;

	t95 = ((x381/x382)^(x383^x384));

	if (t95 != 3157925964U) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MAX;
	static int32_t x387 = -1;
	int16_t x388 = INT16_MIN;

	t96 = ((x385/x386)^(x387^x388));

	if (t96 != 65046465U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = 7792;
	uint8_t x391 = 23U;
	static uint16_t x392 = 169U;
	static volatile int32_t t97 = -482;

	t97 = ((x389/x390)^(x391^x392));

	if (t97 != 190) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = -1;
	int32_t x394 = INT32_MIN;
	volatile int32_t x395 = -1;
	int8_t x396 = 1;

	t98 = ((x393/x394)^(x395^x396));

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x399 = -3;
	int32_t x400 = INT32_MIN;
	volatile int64_t t99 = 4LL;

	t99 = ((x397/x398)^(x399^x400));

	if (t99 != 2147483644LL) { NG(); } else { ; }
	
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


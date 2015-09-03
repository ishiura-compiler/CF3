#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = 30U;
volatile int32_t t0 = 247;
volatile int16_t x5 = INT16_MIN;
int32_t x6 = INT32_MIN;
int8_t x9 = INT8_MIN;
static uint8_t x15 = UINT8_MAX;
int64_t x21 = INT64_MIN;
int64_t t5 = 1LL;
int8_t x26 = INT8_MIN;
int32_t t6 = 11;
int64_t x29 = 338211471929LL;
int16_t x31 = INT16_MIN;
int32_t x35 = -1;
uint32_t t9 = 8390U;
uint16_t x47 = 146U;
volatile uint64_t t11 = UINT64_MAX;
volatile int64_t x54 = 8LL;
int64_t x56 = INT64_MAX;
static volatile int64_t t13 = -11LL;
static uint32_t x58 = 5671U;
volatile int8_t x63 = INT8_MIN;
int32_t x64 = INT32_MIN;
uint64_t x66 = UINT64_MAX;
volatile uint32_t x67 = 16U;
volatile int32_t t17 = 28774682;
static volatile int32_t x75 = -58447895;
int64_t x88 = INT64_MIN;
static int64_t x91 = -67086816093LL;
int64_t x101 = INT64_MAX;
static uint64_t x102 = 121847488276608LLU;
static int64_t x105 = INT64_MAX;
static volatile int32_t x106 = 2;
volatile uint64_t x108 = UINT64_MAX;
int32_t x110 = -1;
int32_t x111 = INT32_MIN;
static uint16_t x112 = UINT16_MAX;
int16_t x113 = 30;
uint8_t x116 = 10U;
int64_t x127 = INT64_MIN;
int64_t x131 = INT64_MIN;
uint64_t t32 = UINT64_MAX;
int8_t x133 = -23;
int32_t t33 = -44;
static uint8_t x137 = 24U;
uint32_t x138 = UINT32_MAX;
uint32_t t34 = UINT32_MAX;
uint16_t x144 = 27U;
volatile int32_t t35 = 14881;
int32_t x147 = 305;
volatile uint64_t x150 = 135837648319960668LLU;
volatile uint8_t x167 = UINT8_MAX;
static uint16_t x168 = UINT16_MAX;
int32_t t41 = 8501632;
int32_t x172 = INT32_MIN;
int32_t x175 = INT32_MAX;
static int16_t x186 = -1;
int8_t x194 = -1;
int16_t x196 = 0;
int64_t x197 = -1LL;
int16_t x209 = INT16_MAX;
uint8_t x210 = 2U;
volatile int32_t x211 = INT32_MIN;
volatile int32_t t52 = 125;
volatile int8_t x217 = 1;
static uint16_t x223 = 2092U;
uint32_t t57 = 97541873U;
volatile int16_t x233 = 0;
volatile int16_t x236 = INT16_MAX;
volatile int16_t x248 = -1;
int32_t x249 = INT32_MAX;
uint32_t t62 = 61U;
static volatile int64_t t67 = -7908167LL;
volatile uint32_t t69 = 75490864U;
uint64_t x282 = UINT64_MAX;
volatile uint64_t t70 = UINT64_MAX;
uint64_t t71 = UINT64_MAX;
volatile uint8_t x289 = UINT8_MAX;
int32_t t72 = -450955424;
static volatile int32_t x293 = -1162;
volatile int32_t t73 = -313850895;
volatile uint64_t x310 = 24206LLU;
uint64_t t77 = 52044625LLU;
volatile uint64_t x315 = 1337499324974963983LLU;
int32_t x319 = 25382;
volatile int32_t t80 = 158050831;
int8_t x328 = -19;
int8_t x332 = INT8_MAX;
uint16_t x335 = 14U;
int64_t t83 = 0LL;
static int32_t x338 = INT32_MAX;
int8_t x343 = INT8_MIN;
static uint64_t t85 = UINT64_MAX;
int64_t t86 = -3011938006933LL;
static int32_t x349 = INT32_MIN;
volatile int16_t x354 = INT16_MIN;
int64_t t88 = 96LL;
uint32_t x358 = UINT32_MAX;
uint32_t t89 = UINT32_MAX;
uint64_t x373 = UINT64_MAX;
static uint64_t t93 = UINT64_MAX;
static volatile int8_t x382 = INT8_MIN;
uint16_t x383 = 127U;
volatile int64_t x384 = -1LL;
int64_t x392 = -1LL;
int64_t x394 = -52523073LL;


void f0(void) {
	int8_t x2 = 62;
	volatile int64_t x3 = INT64_MAX;
	volatile int64_t x4 = -9753456437LL;

	t0 = ((x1|x2)|(x3<=x4));

	if (t0 != 62) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x7 = UINT32_MAX;
	static volatile int64_t x8 = -5209468896LL;
	static int32_t t1 = -1;

	t1 = ((x5|x6)|(x7<=x8));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 30U;
	int16_t x11 = 989;
	int8_t x12 = INT8_MIN;
	int32_t t2 = -894574567;

	t2 = ((x9|x10)|(x11<=x12));

	if (t2 != -98) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -6;
	uint64_t x14 = UINT64_MAX;
	int32_t x16 = 1948;
	static uint64_t t3 = UINT64_MAX;

	t3 = ((x13|x14)|(x15<=x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x17 = 39U;
	static uint64_t x18 = 393785910LLU;
	int16_t x19 = -1;
	static int32_t x20 = -1;
	volatile uint64_t t4 = 188491117517838LLU;

	t4 = ((x17|x18)|(x19<=x20));

	if (t4 != 393785911LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;
	int64_t x23 = 300589891786LL;
	int16_t x24 = INT16_MIN;

	t5 = ((x21|x22)|(x23<=x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -1;
	volatile int8_t x27 = INT8_MIN;
	uint8_t x28 = 2U;

	t6 = ((x25|x26)|(x27<=x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 662U;
	int32_t x32 = 599777;
	static int64_t t7 = -490577323164LL;

	t7 = ((x29|x30)|(x31<=x32));

	if (t7 != 338211472063LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = 43;
	static int64_t x34 = -1LL;
	static int8_t x36 = -1;
	int64_t t8 = 512513835817301167LL;

	t8 = ((x33|x34)|(x35<=x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 1118U;
	volatile uint32_t x38 = 125U;
	int8_t x39 = INT8_MIN;
	int32_t x40 = -1;

	t9 = ((x37|x38)|(x39<=x40));

	if (t9 != 1151U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	volatile int16_t x42 = -3;
	int8_t x43 = -6;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -12338173;

	t10 = ((x41|x42)|(x43<=x44));

	if (t10 != -3) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MAX;
	static uint64_t x46 = UINT64_MAX;
	static uint64_t x48 = 12492LLU;

	t11 = ((x45|x46)|(x47<=x48));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = 1303;
	uint16_t x50 = UINT16_MAX;
	volatile int64_t x51 = 248482003872520880LL;
	uint32_t x52 = 10802U;
	int32_t t12 = 308;

	t12 = ((x49|x50)|(x51<=x52));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int16_t x55 = INT16_MIN;

	t13 = ((x53|x54)|(x55<=x56));

	if (t13 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -507279799157LL;
	int64_t x59 = INT64_MAX;
	int64_t x60 = 1789644735LL;
	volatile int64_t t14 = 7081LL;

	t14 = ((x57|x58)|(x59<=x60));

	if (t14 != -507279794513LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 1U;
	volatile int8_t x62 = INT8_MAX;
	int32_t t15 = -129463;

	t15 = ((x61|x62)|(x63<=x64));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 10;
	int16_t x68 = INT16_MIN;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = ((x65|x66)|(x67<=x68));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	uint16_t x70 = UINT16_MAX;
	volatile int32_t x71 = -1;
	int8_t x72 = INT8_MIN;

	t17 = ((x69|x70)|(x71<=x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	int8_t x74 = INT8_MIN;
	volatile int16_t x76 = INT16_MAX;
	static int64_t t18 = 34052143045412LL;

	t18 = ((x73|x74)|(x75<=x76));

	if (t18 != -127LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	volatile int8_t x78 = -11;
	int64_t x79 = INT64_MIN;
	static uint32_t x80 = 46777U;
	int64_t t19 = -357143LL;

	t19 = ((x77|x78)|(x79<=x80));

	if (t19 != -11LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 0;
	int64_t x82 = 14LL;
	volatile int16_t x83 = INT16_MAX;
	volatile int32_t x84 = -1;
	volatile int64_t t20 = 14LL;

	t20 = ((x81|x82)|(x83<=x84));

	if (t20 != 14LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	static uint8_t x86 = 10U;
	volatile uint16_t x87 = UINT16_MAX;
	int32_t t21 = 27208363;

	t21 = ((x85|x86)|(x87<=x88));

	if (t21 != -118) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 118U;
	static int8_t x90 = -1;
	int8_t x92 = 0;
	static volatile int32_t t22 = -829243;

	t22 = ((x89|x90)|(x91<=x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = 17619U;
	static int16_t x94 = INT16_MIN;
	int8_t x95 = -1;
	volatile uint16_t x96 = 10493U;
	volatile uint32_t t23 = 38U;

	t23 = ((x93|x94)|(x95<=x96));

	if (t23 != 4294952147U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -5764500;
	int64_t x98 = -1LL;
	static volatile uint16_t x99 = UINT16_MAX;
	static uint8_t x100 = UINT8_MAX;
	volatile int64_t t24 = -17337426781866LL;

	t24 = ((x97|x98)|(x99<=x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x103 = UINT16_MAX;
	int8_t x104 = INT8_MIN;
	static volatile uint64_t t25 = 12602777453482LLU;

	t25 = ((x101|x102)|(x103<=x104));

	if (t25 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x107 = INT8_MAX;
	volatile int64_t t26 = INT64_MAX;

	t26 = ((x105|x106)|(x107<=x108));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x109 = 23209LLU;
	uint64_t t27 = UINT64_MAX;

	t27 = ((x109|x110)|(x111<=x112));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = 477;
	int16_t x115 = -1;
	volatile int32_t t28 = -10129;

	t28 = ((x113|x114)|(x115<=x116));

	if (t28 != 479) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int16_t x118 = INT16_MAX;
	uint16_t x119 = 3U;
	static int64_t x120 = INT64_MAX;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = ((x117|x118)|(x119<=x120));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	volatile uint64_t x122 = UINT64_MAX;
	static uint64_t x123 = UINT64_MAX;
	static volatile uint64_t x124 = 11086041824485LLU;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = ((x121|x122)|(x123<=x124));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 9U;
	volatile uint32_t x126 = 31539U;
	uint8_t x128 = UINT8_MAX;
	volatile uint32_t t31 = 1U;

	t31 = ((x125|x126)|(x127<=x128));

	if (t31 != 31547U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = UINT64_MAX;
	uint32_t x130 = UINT32_MAX;
	int16_t x132 = INT16_MIN;

	t32 = ((x129|x130)|(x131<=x132));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = 14012;
	int64_t x135 = 51536267021LL;
	uint16_t x136 = 919U;

	t33 = ((x133|x134)|(x135<=x136));

	if (t33 != -3) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x139 = INT8_MAX;
	uint8_t x140 = UINT8_MAX;

	t34 = ((x137|x138)|(x139<=x140));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 1;
	int16_t x142 = 36;
	int32_t x143 = -63080690;

	t35 = ((x141|x142)|(x143<=x144));

	if (t35 != 37) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	uint32_t x146 = 153U;
	int64_t x148 = INT64_MIN;
	uint64_t t36 = UINT64_MAX;

	t36 = ((x145|x146)|(x147<=x148));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int16_t x151 = -1;
	static int8_t x152 = INT8_MIN;
	volatile uint64_t t37 = 147662261530516245LLU;

	t37 = ((x149|x150)|(x151<=x152));

	if (t37 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MIN;
	uint32_t x154 = UINT32_MAX;
	uint64_t x155 = 93763426401351887LLU;
	volatile int8_t x156 = INT8_MIN;
	uint32_t t38 = UINT32_MAX;

	t38 = ((x153|x154)|(x155<=x156));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x157 = 3U;
	uint64_t x158 = 2LLU;
	uint64_t x159 = 15367685LLU;
	uint8_t x160 = UINT8_MAX;
	uint64_t t39 = 206647874825879348LLU;

	t39 = ((x157|x158)|(x159<=x160));

	if (t39 != 3LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MAX;
	uint32_t x164 = UINT32_MAX;
	int32_t t40 = -132109;

	t40 = ((x161|x162)|(x163<=x164));

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 2115U;
	static int16_t x166 = 1639;

	t41 = ((x165|x166)|(x167<=x168));

	if (t41 != 3687) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = UINT16_MAX;
	int8_t x170 = INT8_MAX;
	uint8_t x171 = 0U;
	volatile int32_t t42 = -489678;

	t42 = ((x169|x170)|(x171<=x172));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	volatile int16_t x174 = INT16_MIN;
	int16_t x176 = -1;
	volatile int32_t t43 = -51474874;

	t43 = ((x173|x174)|(x175<=x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 1U;
	uint8_t x178 = UINT8_MAX;
	static int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MAX;
	int32_t t44 = 29030;

	t44 = ((x177|x178)|(x179<=x180));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	volatile uint32_t x182 = 1355328138U;
	int8_t x183 = INT8_MIN;
	uint64_t x184 = UINT64_MAX;
	uint32_t t45 = 0U;

	t45 = ((x181|x182)|(x183<=x184));

	if (t45 != 4294967179U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	uint32_t x187 = UINT32_MAX;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = 0;

	t46 = ((x185|x186)|(x187<=x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = INT32_MIN;
	uint16_t x190 = 1729U;
	uint8_t x191 = 1U;
	static int64_t x192 = INT64_MIN;
	int32_t t47 = 20336231;

	t47 = ((x189|x190)|(x191<=x192));

	if (t47 != -2147481919) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 117074542434319LLU;
	int8_t x195 = -6;
	uint64_t t48 = UINT64_MAX;

	t48 = ((x193|x194)|(x195<=x196));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = UINT64_MAX;
	static int16_t x199 = -1;
	int16_t x200 = INT16_MIN;
	static uint64_t t49 = UINT64_MAX;

	t49 = ((x197|x198)|(x199<=x200));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 8973608443819LL;
	int16_t x202 = -1;
	int16_t x203 = 14483;
	uint16_t x204 = 14U;
	int64_t t50 = 61280160425LL;

	t50 = ((x201|x202)|(x203<=x204));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	int32_t x206 = INT32_MAX;
	uint16_t x207 = UINT16_MAX;
	uint32_t x208 = UINT32_MAX;
	static volatile int32_t t51 = INT32_MAX;

	t51 = ((x205|x206)|(x207<=x208));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x212 = INT64_MIN;

	t52 = ((x209|x210)|(x211<=x212));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 473735168562841620LLU;
	static int8_t x214 = INT8_MIN;
	volatile int64_t x215 = INT64_MAX;
	uint64_t x216 = UINT64_MAX;
	uint64_t t53 = 21806413LLU;

	t53 = ((x213|x214)|(x215<=x216));

	if (t53 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x218 = INT32_MIN;
	uint16_t x219 = 32502U;
	static int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 1;

	t54 = ((x217|x218)|(x219<=x220));

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 3;
	uint16_t x222 = 0U;
	volatile int16_t x224 = INT16_MIN;
	volatile int32_t t55 = 44112;

	t55 = ((x221|x222)|(x223<=x224));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	int64_t x226 = -1LL;
	static int8_t x227 = INT8_MIN;
	uint64_t x228 = UINT64_MAX;
	int64_t t56 = -1658829015145LL;

	t56 = ((x225|x226)|(x227<=x228));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 0U;
	volatile int16_t x230 = INT16_MAX;
	int16_t x231 = 3;
	volatile int16_t x232 = -1;

	t57 = ((x229|x230)|(x231<=x232));

	if (t57 != 32767U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = -1;
	volatile uint16_t x235 = 2315U;
	volatile int32_t t58 = -923;

	t58 = ((x233|x234)|(x235<=x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -25965;
	static volatile int16_t x238 = -2586;
	static int32_t x239 = -60801;
	uint16_t x240 = UINT16_MAX;
	static volatile int32_t t59 = -20;

	t59 = ((x237|x238)|(x239<=x240));

	if (t59 != -9) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = -1;
	volatile uint16_t x242 = UINT16_MAX;
	volatile int32_t x243 = 3822;
	static uint64_t x244 = 14920150LLU;
	static int32_t t60 = 886;

	t60 = ((x241|x242)|(x243<=x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 15876U;
	uint16_t x246 = 20978U;
	int8_t x247 = INT8_MIN;
	volatile int32_t t61 = 10341;

	t61 = ((x245|x246)|(x247<=x248));

	if (t61 != 32759) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x250 = 292U;
	int32_t x251 = INT32_MIN;
	static uint8_t x252 = 10U;

	t62 = ((x249|x250)|(x251<=x252));

	if (t62 != 2147483647U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MIN;
	int64_t x255 = INT64_MIN;
	uint16_t x256 = 5265U;
	static volatile int32_t t63 = 276822;

	t63 = ((x253|x254)|(x255<=x256));

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 1050006130U;
	static volatile int16_t x258 = INT16_MAX;
	volatile uint8_t x259 = 27U;
	static int64_t x260 = -133931485125LL;
	volatile uint32_t t64 = 66552215U;

	t64 = ((x257|x258)|(x259<=x260));

	if (t64 != 1050017791U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = UINT8_MAX;
	static uint16_t x262 = 104U;
	static uint16_t x263 = 794U;
	static int16_t x264 = INT16_MAX;
	volatile int32_t t65 = -1396;

	t65 = ((x261|x262)|(x263<=x264));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	int16_t x266 = 4;
	volatile int16_t x267 = -2720;
	static volatile uint8_t x268 = 1U;
	volatile int32_t t66 = -46148;

	t66 = ((x265|x266)|(x267<=x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MIN;
	uint32_t x271 = 620281U;
	uint8_t x272 = 3U;

	t67 = ((x269|x270)|(x271<=x272));

	if (t67 != -128LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -8252502454489242LL;
	int16_t x274 = -3463;
	volatile int16_t x275 = -3;
	uint16_t x276 = 26544U;
	volatile int64_t t68 = -202426838876299LL;

	t68 = ((x273|x274)|(x275<=x276));

	if (t68 != -129LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 1540434315U;
	uint8_t x278 = 13U;
	int16_t x279 = -65;
	static uint64_t x280 = 0LLU;

	t69 = ((x277|x278)|(x279<=x280));

	if (t69 != 1540434319U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = -1;
	static int64_t x283 = INT64_MIN;
	uint32_t x284 = 1068160U;

	t70 = ((x281|x282)|(x283<=x284));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x285 = -1;
	uint64_t x286 = UINT64_MAX;
	int32_t x287 = -846;
	int16_t x288 = 45;

	t71 = ((x285|x286)|(x287<=x288));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = 4113;
	int64_t x291 = INT64_MIN;
	uint32_t x292 = 15820514U;

	t72 = ((x289|x290)|(x291<=x292));

	if (t72 != 4351) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = INT16_MIN;
	uint64_t x295 = 62LLU;
	int32_t x296 = 19;

	t73 = ((x293|x294)|(x295<=x296));

	if (t73 != -1162) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MIN;
	volatile uint32_t x298 = UINT32_MAX;
	uint64_t x299 = UINT64_MAX;
	int32_t x300 = -82351502;
	uint32_t t74 = UINT32_MAX;

	t74 = ((x297|x298)|(x299<=x300));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = UINT8_MAX;
	volatile uint8_t x302 = UINT8_MAX;
	volatile int16_t x303 = INT16_MAX;
	volatile int16_t x304 = -1;
	static int32_t t75 = -1523330;

	t75 = ((x301|x302)|(x303<=x304));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	uint64_t x306 = 227410LLU;
	volatile int32_t x307 = -1;
	int16_t x308 = -2;
	static uint64_t t76 = 42374679045146399LLU;

	t76 = ((x305|x306)|(x307<=x308));

	if (t76 != 227583LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = UINT16_MAX;
	int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MAX;

	t77 = ((x309|x310)|(x311<=x312));

	if (t77 != 65535LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = 10011;
	int16_t x314 = -134;
	int16_t x316 = -51;
	volatile int32_t t78 = -1;

	t78 = ((x313|x314)|(x315<=x316));

	if (t78 != -133) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	static uint32_t x318 = 2682341U;
	int16_t x320 = -1628;
	uint32_t t79 = UINT32_MAX;

	t79 = ((x317|x318)|(x319<=x320));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	int16_t x322 = INT16_MIN;
	volatile int64_t x323 = -1LL;
	int16_t x324 = 1;

	t80 = ((x321|x322)|(x323<=x324));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 50;
	volatile int32_t x326 = 21;
	static int32_t x327 = 9029471;
	int32_t t81 = -589384315;

	t81 = ((x325|x326)|(x327<=x328));

	if (t81 != 55) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = 1363;
	static volatile uint16_t x330 = UINT16_MAX;
	int64_t x331 = INT64_MIN;
	int32_t t82 = 667683437;

	t82 = ((x329|x330)|(x331<=x332));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = -32572426821981LL;
	uint16_t x334 = 19U;
	static uint16_t x336 = 240U;

	t83 = ((x333|x334)|(x335<=x336));

	if (t83 != -32572426821965LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	int16_t x339 = INT16_MIN;
	int64_t x340 = 58112LL;
	static int64_t t84 = -390820071LL;

	t84 = ((x337|x338)|(x339<=x340));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x341 = 2LLU;
	int64_t x342 = -1LL;
	static int32_t x344 = 8005;

	t85 = ((x341|x342)|(x343<=x344));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	static int64_t x346 = INT64_MAX;
	int64_t x347 = INT64_MAX;
	uint16_t x348 = UINT16_MAX;

	t86 = ((x345|x346)|(x347<=x348));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x350 = 130U;
	uint32_t x351 = 1988358U;
	uint8_t x352 = 1U;
	int32_t t87 = 589088;

	t87 = ((x349|x350)|(x351<=x352));

	if (t87 != -2147483518) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = -1LL;
	volatile int32_t x355 = INT32_MIN;
	volatile int8_t x356 = INT8_MIN;

	t88 = ((x353|x354)|(x355<=x356));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = 6U;
	uint16_t x359 = 171U;
	uint8_t x360 = 5U;

	t89 = ((x357|x358)|(x359<=x360));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	int8_t x362 = INT8_MIN;
	uint16_t x363 = UINT16_MAX;
	static int64_t x364 = INT64_MAX;
	static int32_t t90 = 1864;

	t90 = ((x361|x362)|(x363<=x364));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 15217433330LLU;
	static uint64_t x366 = 210692939392657LLU;
	static int64_t x367 = -295623LL;
	volatile uint8_t x368 = 26U;
	volatile uint64_t t91 = 15LLU;

	t91 = ((x365|x366)|(x367<=x368));

	if (t91 != 210693107203827LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	int32_t x370 = INT32_MIN;
	int8_t x371 = -1;
	int64_t x372 = -2526LL;
	static volatile int64_t t92 = 35135996635829990LL;

	t92 = ((x369|x370)|(x371<=x372));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x374 = 151;
	int16_t x375 = INT16_MIN;
	uint64_t x376 = 392049177498032LLU;

	t93 = ((x373|x374)|(x375<=x376));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = INT16_MIN;
	volatile int8_t x378 = INT8_MIN;
	static int32_t x379 = INT32_MIN;
	int16_t x380 = INT16_MIN;
	volatile int32_t t94 = -13998432;

	t94 = ((x377|x378)|(x379<=x380));

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	int64_t t95 = 51534135056778938LL;

	t95 = ((x381|x382)|(x383<=x384));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = 8479444945733498727LLU;
	uint16_t x386 = 2711U;
	uint32_t x387 = UINT32_MAX;
	int32_t x388 = INT32_MAX;
	uint64_t t96 = 257611517917625LLU;

	t96 = ((x385|x386)|(x387<=x388));

	if (t96 != 8479444945733500919LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	static int64_t x390 = INT64_MIN;
	static uint32_t x391 = 728U;
	volatile int64_t t97 = 18716332LL;

	t97 = ((x389|x390)|(x391<=x392));

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	volatile uint64_t x395 = 515870LLU;
	volatile int8_t x396 = 36;
	volatile int64_t t98 = -11000039691527LL;

	t98 = ((x393|x394)|(x395<=x396));

	if (t98 != -28737LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	uint8_t x398 = 10U;
	int16_t x399 = INT16_MAX;
	int16_t x400 = -56;
	volatile int32_t t99 = INT32_MAX;

	t99 = ((x397|x398)|(x399<=x400));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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


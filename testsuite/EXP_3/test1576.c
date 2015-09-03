#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -12595803;
static int8_t x10 = 3;
uint16_t x11 = 87U;
int64_t t2 = 112028437168868125LL;
volatile int64_t t4 = 10189622677433801LL;
uint16_t x23 = UINT16_MAX;
int8_t x25 = 0;
int64_t x32 = INT64_MAX;
static volatile int64_t t7 = 158999078LL;
static int16_t x37 = -1;
volatile int32_t x39 = INT32_MIN;
int64_t x41 = -101446285440064LL;
int64_t t10 = -1LL;
int8_t x47 = -1;
volatile int64_t t13 = 110057659LL;
int32_t x68 = INT32_MIN;
volatile int32_t t16 = 1;
int32_t x71 = -22657169;
int64_t t17 = -28699857LL;
volatile uint32_t x88 = 39352U;
static int8_t x92 = -1;
static uint8_t x95 = 1U;
volatile int32_t x108 = 105;
uint16_t x115 = 3U;
static int32_t t28 = 334442420;
int32_t t29 = -81583706;
int16_t x124 = -1;
int8_t x126 = -1;
static int8_t x129 = -1;
uint64_t x130 = 28496LLU;
volatile uint32_t t33 = 698101569U;
int32_t t35 = 2;
uint64_t x148 = 98525502818LLU;
volatile int16_t x159 = INT16_MIN;
int16_t x162 = INT16_MIN;
int32_t x165 = 1596834;
int64_t t42 = 32296244360331LL;
uint8_t x178 = UINT8_MAX;
static uint32_t x194 = 12607699U;
static volatile int16_t x195 = INT16_MAX;
volatile uint32_t t47 = 119U;
static volatile int64_t x201 = -1LL;
int16_t x203 = -1;
volatile int32_t t50 = -267690654;
int16_t x211 = -239;
int8_t x212 = INT8_MAX;
uint64_t x218 = UINT64_MAX;
volatile int32_t x225 = INT32_MAX;
static int32_t x229 = INT32_MAX;
uint64_t x231 = UINT64_MAX;
volatile int64_t x242 = -3421LL;
uint64_t x246 = 1177875LLU;
int32_t x247 = 12365;
uint16_t x255 = UINT16_MAX;
uint64_t t64 = 974050088899LLU;
static int8_t x269 = -2;
uint16_t x272 = 356U;
volatile uint32_t x273 = UINT32_MAX;
int32_t x274 = INT32_MIN;
uint16_t x275 = 8U;
int16_t x280 = -1;
volatile int32_t t68 = -243777;
static volatile int16_t x281 = INT16_MIN;
int16_t x284 = 51;
int32_t t69 = -14;
volatile uint32_t t70 = 354928U;
int32_t x291 = INT32_MIN;
int8_t x293 = INT8_MIN;
int64_t x294 = -1LL;
uint16_t x298 = 6126U;
static int32_t x304 = INT32_MAX;
volatile int64_t t74 = 33597804598421LL;
int8_t x307 = INT8_MIN;
uint16_t x308 = UINT16_MAX;
uint16_t x310 = UINT16_MAX;
uint8_t x312 = UINT8_MAX;
uint8_t x313 = 4U;
int64_t t80 = 0LL;
int64_t x335 = INT64_MAX;
uint32_t x336 = 126102U;
volatile int32_t t82 = -95539634;
int8_t x337 = 6;
int8_t x341 = INT8_MIN;
volatile uint8_t x346 = UINT8_MAX;
volatile int32_t t87 = -48;
static int32_t x360 = 171397165;
int32_t x362 = INT32_MAX;
volatile int64_t t90 = 28360645575367LL;
static int16_t x370 = INT16_MIN;
volatile int32_t t91 = 12861;
int32_t x383 = INT32_MIN;
static uint16_t x389 = UINT16_MAX;
int64_t x391 = -1769093971376118LL;
int32_t x392 = INT32_MAX;
int32_t t97 = -10;
int64_t x397 = -1LL;
static uint32_t x398 = 1641U;
uint8_t x400 = 43U;
static volatile int16_t x402 = -15;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static int16_t x2 = INT16_MIN;
	volatile int16_t x3 = INT16_MIN;
	uint16_t x4 = 95U;
	volatile int64_t t0 = 462796682LL;

	t0 = ((x1%x2)*(x3<=x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	int8_t x6 = INT8_MIN;
	uint16_t x7 = 12033U;
	int8_t x8 = -1;

	t1 = ((x5%x6)*(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = 7892967635280463LL;
	int32_t x12 = 1;

	t2 = ((x9%x10)*(x11<=x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -36465;
	static uint32_t x14 = 35492U;
	static int32_t x15 = 64913;
	static int8_t x16 = -1;
	uint32_t t3 = 55858228U;

	t3 = ((x13%x14)*(x15<=x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	volatile int64_t x18 = INT64_MIN;
	static uint8_t x19 = 2U;
	static int8_t x20 = INT8_MIN;

	t4 = ((x17%x18)*(x19<=x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 0;
	int8_t x22 = INT8_MAX;
	volatile int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 880819161;

	t5 = ((x21%x22)*(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = UINT8_MAX;
	volatile uint64_t x27 = 2264798191164LLU;
	volatile uint16_t x28 = 83U;
	int32_t t6 = 1069473540;

	t6 = ((x25%x26)*(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	uint16_t x30 = 357U;
	static int16_t x31 = -1;

	t7 = ((x29%x30)*(x31<=x32));

	if (t7 != 280LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = 0;
	static volatile int32_t x34 = INT32_MIN;
	int32_t x35 = -25599;
	volatile uint32_t x36 = 4414375U;
	volatile int32_t t8 = -22;

	t8 = ((x33%x34)*(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = -1LL;
	uint8_t x40 = UINT8_MAX;
	int64_t t9 = 2985487LL;

	t9 = ((x37%x38)*(x39<=x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 6601U;
	int32_t x43 = INT32_MAX;
	static int16_t x44 = INT16_MAX;

	t10 = ((x41%x42)*(x43<=x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 31LLU;
	uint8_t x46 = UINT8_MAX;
	volatile uint8_t x48 = 0U;
	volatile uint64_t t11 = 25401884183309009LLU;

	t11 = ((x45%x46)*(x47<=x48));

	if (t11 != 31LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = 744251681LL;
	uint32_t x50 = UINT32_MAX;
	int64_t x51 = INT64_MIN;
	volatile uint8_t x52 = 58U;
	volatile int64_t t12 = -2035LL;

	t12 = ((x49%x50)*(x51<=x52));

	if (t12 != 744251681LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = -1;
	uint64_t x55 = 75094328171LLU;
	static volatile int16_t x56 = -11598;

	t13 = ((x53%x54)*(x55<=x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = -5627295LL;
	int8_t x58 = -2;
	volatile int8_t x59 = -1;
	static volatile int64_t x60 = INT64_MIN;
	volatile int64_t t14 = 7396027538351718LL;

	t14 = ((x57%x58)*(x59<=x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	int64_t x62 = INT64_MIN;
	static volatile int8_t x63 = -5;
	int32_t x64 = 251;
	static int64_t t15 = 5LL;

	t15 = ((x61%x62)*(x63<=x64));

	if (t15 != -128LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MAX;
	int32_t x66 = INT32_MAX;
	volatile uint64_t x67 = 509054LLU;

	t16 = ((x65%x66)*(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	uint32_t x70 = UINT32_MAX;
	int16_t x72 = INT16_MIN;

	t17 = ((x69%x70)*(x71<=x72));

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	int8_t x74 = -2;
	volatile uint32_t x75 = 906845U;
	int64_t x76 = INT64_MAX;
	int32_t t18 = 144599;

	t18 = ((x73%x74)*(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = 4U;
	static uint32_t x78 = 242U;
	int8_t x79 = -2;
	int8_t x80 = INT8_MAX;
	uint32_t t19 = 26157268U;

	t19 = ((x77%x78)*(x79<=x80));

	if (t19 != 4U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 26503U;
	int8_t x82 = INT8_MIN;
	uint64_t x83 = UINT64_MAX;
	uint8_t x84 = 9U;
	uint32_t t20 = 2225U;

	t20 = ((x81%x82)*(x83<=x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MAX;
	int8_t x86 = -18;
	static volatile uint64_t x87 = 2260697159741886LLU;
	volatile int32_t t21 = -4453;

	t21 = ((x85%x86)*(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 2141;
	static int64_t x90 = 189LL;
	static int8_t x91 = INT8_MIN;
	volatile int64_t t22 = -3LL;

	t22 = ((x89%x90)*(x91<=x92));

	if (t22 != 62LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 1;
	int16_t x94 = -1;
	int32_t x96 = INT32_MAX;
	static int32_t t23 = -27;

	t23 = ((x93%x94)*(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = -1;
	int32_t x98 = INT32_MAX;
	volatile int16_t x99 = -1;
	int32_t x100 = 157;
	int32_t t24 = 3501;

	t24 = ((x97%x98)*(x99<=x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -5;
	static int64_t x102 = INT64_MAX;
	int16_t x103 = -1;
	static int16_t x104 = -1;
	int64_t t25 = 1LL;

	t25 = ((x101%x102)*(x103<=x104));

	if (t25 != -5LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 535668006446810150LL;
	int64_t x106 = INT64_MAX;
	int16_t x107 = INT16_MAX;
	static int64_t t26 = -65354LL;

	t26 = ((x105%x106)*(x107<=x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 703429453523141LLU;
	uint8_t x110 = UINT8_MAX;
	uint8_t x111 = UINT8_MAX;
	volatile int16_t x112 = INT16_MIN;
	uint64_t t27 = 1694257105407091051LLU;

	t27 = ((x109%x110)*(x111<=x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	volatile int16_t x114 = -1;
	int32_t x116 = INT32_MIN;

	t28 = ((x113%x114)*(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -2913;
	int16_t x118 = -15453;
	uint64_t x119 = 56169559740676LLU;
	uint16_t x120 = 1561U;

	t29 = ((x117%x118)*(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x121 = INT64_MAX;
	int16_t x122 = -9;
	static int64_t x123 = INT64_MIN;
	volatile int64_t t30 = -1265479LL;

	t30 = ((x121%x122)*(x123<=x124));

	if (t30 != 7LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MIN;
	uint8_t x127 = UINT8_MAX;
	static int8_t x128 = INT8_MAX;
	int64_t t31 = 715LL;

	t31 = ((x125%x126)*(x127<=x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x131 = -60LL;
	int16_t x132 = INT16_MIN;
	static volatile uint64_t t32 = 737LLU;

	t32 = ((x129%x130)*(x131<=x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	volatile uint32_t x134 = 163311462U;
	int64_t x135 = INT64_MIN;
	int32_t x136 = -193004;

	t33 = ((x133%x134)*(x135<=x136));

	if (t33 != 24434642U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MAX;
	int8_t x138 = -1;
	static volatile uint32_t x139 = 5490411U;
	uint32_t x140 = UINT32_MAX;
	volatile int32_t t34 = -1;

	t34 = ((x137%x138)*(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MIN;
	int16_t x142 = INT16_MIN;
	int32_t x143 = INT32_MIN;
	int8_t x144 = -1;

	t35 = ((x141%x142)*(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	uint8_t x146 = UINT8_MAX;
	int32_t x147 = 3898;
	volatile int64_t t36 = -235891LL;

	t36 = ((x145%x146)*(x147<=x148));

	if (t36 != 127LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 0;
	uint8_t x150 = UINT8_MAX;
	int8_t x151 = INT8_MAX;
	int64_t x152 = INT64_MIN;
	int32_t t37 = -893;

	t37 = ((x149%x150)*(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 6824986658469730789LLU;
	uint8_t x154 = 13U;
	int32_t x155 = -14;
	static int16_t x156 = 2973;
	uint64_t t38 = 43300000824517LLU;

	t38 = ((x153%x154)*(x155<=x156));

	if (t38 != 12LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 1645U;
	static int32_t x158 = INT32_MAX;
	int8_t x160 = INT8_MIN;
	int32_t t39 = 9;

	t39 = ((x157%x158)*(x159<=x160));

	if (t39 != 1645) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	uint8_t x163 = 89U;
	int16_t x164 = INT16_MAX;
	uint64_t t40 = 18LLU;

	t40 = ((x161%x162)*(x163<=x164));

	if (t40 != 32767LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = 2;
	int8_t x167 = INT8_MAX;
	int64_t x168 = INT64_MIN;
	int32_t t41 = -20807620;

	t41 = ((x165%x166)*(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x173 = 923358LL;
	uint32_t x174 = UINT32_MAX;
	int8_t x175 = INT8_MIN;
	int16_t x176 = -6112;

	t42 = ((x173%x174)*(x175<=x176));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 777LLU;
	uint16_t x179 = 11U;
	volatile int16_t x180 = INT16_MIN;
	uint64_t t43 = 1029LLU;

	t43 = ((x177%x178)*(x179<=x180));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x181 = -1;
	int16_t x182 = INT16_MIN;
	static int64_t x183 = -81256068827322LL;
	int32_t x184 = INT32_MIN;
	int32_t t44 = 8;

	t44 = ((x181%x182)*(x183<=x184));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x185 = UINT32_MAX;
	uint16_t x186 = 581U;
	int64_t x187 = -1LL;
	int64_t x188 = -10LL;
	volatile uint32_t t45 = 7U;

	t45 = ((x185%x186)*(x187<=x188));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x189 = 90LLU;
	volatile int16_t x190 = -1;
	uint32_t x191 = 5872U;
	static int16_t x192 = INT16_MIN;
	volatile uint64_t t46 = 3790529890414LLU;

	t46 = ((x189%x190)*(x191<=x192));

	if (t46 != 90LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = 121057U;
	int64_t x196 = INT64_MIN;

	t47 = ((x193%x194)*(x195<=x196));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 15U;
	uint64_t x198 = 3LLU;
	int64_t x199 = -1LL;
	static volatile uint64_t x200 = UINT64_MAX;
	static uint64_t t48 = 19360LLU;

	t48 = ((x197%x198)*(x199<=x200));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x202 = 7097U;
	int64_t x204 = INT64_MIN;
	volatile int64_t t49 = -6825087554LL;

	t49 = ((x201%x202)*(x203<=x204));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x205 = UINT8_MAX;
	int32_t x206 = -1;
	uint16_t x207 = 9U;
	int32_t x208 = INT32_MIN;

	t50 = ((x205%x206)*(x207<=x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x209 = UINT8_MAX;
	int16_t x210 = -1;
	volatile int32_t t51 = -233385;

	t51 = ((x209%x210)*(x211<=x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = UINT32_MAX;
	int32_t x214 = INT32_MAX;
	static int32_t x215 = INT32_MIN;
	volatile int32_t x216 = INT32_MAX;
	uint32_t t52 = 191513210U;

	t52 = ((x213%x214)*(x215<=x216));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x217 = INT16_MIN;
	volatile uint8_t x219 = UINT8_MAX;
	int8_t x220 = INT8_MIN;
	volatile uint64_t t53 = 6459662387920886LLU;

	t53 = ((x217%x218)*(x219<=x220));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = 61;
	static uint8_t x222 = UINT8_MAX;
	uint32_t x223 = 187U;
	static uint8_t x224 = 7U;
	int32_t t54 = 18442;

	t54 = ((x221%x222)*(x223<=x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x226 = INT16_MIN;
	uint8_t x227 = 0U;
	volatile int64_t x228 = INT64_MAX;
	static int32_t t55 = 580;

	t55 = ((x225%x226)*(x227<=x228));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x230 = -1;
	uint32_t x232 = 3570390U;
	volatile int32_t t56 = 1134;

	t56 = ((x229%x230)*(x231<=x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -1;
	static volatile uint64_t x234 = 189982899860LLU;
	uint16_t x235 = 14973U;
	int64_t x236 = -9551716277LL;
	uint64_t t57 = 1026335095320678LLU;

	t57 = ((x233%x234)*(x235<=x236));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = -1;
	static uint16_t x238 = 1U;
	int8_t x239 = -1;
	static int64_t x240 = 16768470805LL;
	int32_t t58 = -58642549;

	t58 = ((x237%x238)*(x239<=x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = 12216U;
	int32_t x243 = -1;
	static int16_t x244 = 7041;
	volatile int64_t t59 = -3167142496549542772LL;

	t59 = ((x241%x242)*(x243<=x244));

	if (t59 != 1953LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x245 = UINT8_MAX;
	int32_t x248 = -8141395;
	volatile uint64_t t60 = 540941403982LLU;

	t60 = ((x245%x246)*(x247<=x248));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x249 = UINT64_MAX;
	int64_t x250 = INT64_MAX;
	int32_t x251 = 39190903;
	static int64_t x252 = INT64_MIN;
	uint64_t t61 = 10823LLU;

	t61 = ((x249%x250)*(x251<=x252));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = INT16_MIN;
	uint64_t x254 = UINT64_MAX;
	int64_t x256 = -1LL;
	uint64_t t62 = 50LLU;

	t62 = ((x253%x254)*(x255<=x256));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MAX;
	volatile int64_t x258 = 514556LL;
	uint16_t x259 = 0U;
	int64_t x260 = -1LL;
	volatile int64_t t63 = -38917952483504531LL;

	t63 = ((x257%x258)*(x259<=x260));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 48998168LLU;
	static int8_t x262 = 1;
	int16_t x263 = -968;
	uint8_t x264 = 1U;

	t64 = ((x261%x262)*(x263<=x264));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MIN;
	static volatile int8_t x266 = INT8_MIN;
	volatile uint64_t x267 = 10LLU;
	uint32_t x268 = UINT32_MAX;
	int32_t t65 = -139;

	t65 = ((x265%x266)*(x267<=x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x270 = INT16_MIN;
	volatile int8_t x271 = INT8_MIN;
	volatile int32_t t66 = -52;

	t66 = ((x269%x270)*(x271<=x272));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x276 = INT32_MIN;
	volatile uint32_t t67 = 23590710U;

	t67 = ((x273%x274)*(x275<=x276));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x277 = -1;
	int32_t x278 = INT32_MIN;
	uint64_t x279 = 301805184748927LLU;

	t68 = ((x277%x278)*(x279<=x280));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x282 = -1;
	int64_t x283 = INT64_MIN;

	t69 = ((x281%x282)*(x283<=x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x285 = UINT32_MAX;
	int32_t x286 = INT32_MIN;
	static int64_t x287 = -202284490290LL;
	int32_t x288 = INT32_MAX;

	t70 = ((x285%x286)*(x287<=x288));

	if (t70 != 2147483647U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MAX;
	uint32_t x290 = 685937U;
	int64_t x292 = INT64_MAX;
	volatile uint32_t t71 = 23650U;

	t71 = ((x289%x290)*(x291<=x292));

	if (t71 != 32767U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x295 = 52734195722649291LLU;
	volatile int16_t x296 = INT16_MIN;
	static volatile int64_t t72 = 0LL;

	t72 = ((x293%x294)*(x295<=x296));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x297 = 110U;
	int8_t x299 = INT8_MIN;
	int32_t x300 = -1;
	static uint32_t t73 = 145017U;

	t73 = ((x297%x298)*(x299<=x300));

	if (t73 != 110U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = -1LL;
	int8_t x302 = 1;
	uint8_t x303 = UINT8_MAX;

	t74 = ((x301%x302)*(x303<=x304));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x305 = UINT8_MAX;
	int8_t x306 = INT8_MIN;
	volatile int32_t t75 = -52;

	t75 = ((x305%x306)*(x307<=x308));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x309 = 0;
	volatile uint8_t x311 = 16U;
	volatile int32_t t76 = 513871;

	t76 = ((x309%x310)*(x311<=x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x314 = INT16_MIN;
	volatile int32_t x315 = -1;
	int32_t x316 = -1;
	volatile int32_t t77 = 392251;

	t77 = ((x313%x314)*(x315<=x316));

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x317 = INT8_MIN;
	volatile int64_t x318 = -497002479632LL;
	static uint8_t x319 = 122U;
	int64_t x320 = INT64_MAX;
	int64_t t78 = -67LL;

	t78 = ((x317%x318)*(x319<=x320));

	if (t78 != -128LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x321 = -1;
	int64_t x322 = 5051810157132821LL;
	volatile uint8_t x323 = 108U;
	static int8_t x324 = INT8_MAX;
	volatile int64_t t79 = 2035736756904LL;

	t79 = ((x321%x322)*(x323<=x324));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = -1LL;
	volatile int8_t x326 = 1;
	int64_t x327 = INT64_MIN;
	int16_t x328 = INT16_MIN;

	t80 = ((x325%x326)*(x327<=x328));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = INT32_MIN;
	int16_t x330 = -14552;
	int64_t x331 = INT64_MIN;
	volatile int8_t x332 = INT8_MAX;
	int32_t t81 = -339739;

	t81 = ((x329%x330)*(x331<=x332));

	if (t81 != -1352) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = -1;
	int8_t x334 = -1;

	t82 = ((x333%x334)*(x335<=x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x338 = INT8_MIN;
	static int32_t x339 = 0;
	int16_t x340 = INT16_MIN;
	volatile int32_t t83 = 1;

	t83 = ((x337%x338)*(x339<=x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x342 = INT32_MAX;
	static int64_t x343 = INT64_MIN;
	static uint32_t x344 = 2U;
	int32_t t84 = 89;

	t84 = ((x341%x342)*(x343<=x344));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x345 = 31U;
	int8_t x347 = INT8_MAX;
	int32_t x348 = INT32_MIN;
	volatile int32_t t85 = -13;

	t85 = ((x345%x346)*(x347<=x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = 1880;
	int8_t x350 = -48;
	volatile int64_t x351 = INT64_MAX;
	uint8_t x352 = 0U;
	int32_t t86 = -14540340;

	t86 = ((x349%x350)*(x351<=x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = INT16_MIN;
	volatile int16_t x354 = -464;
	volatile int64_t x355 = -1LL;
	int16_t x356 = INT16_MIN;

	t87 = ((x353%x354)*(x355<=x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x357 = INT8_MAX;
	int32_t x358 = -94453621;
	int16_t x359 = -1;
	volatile int32_t t88 = 9;

	t88 = ((x357%x358)*(x359<=x360));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = 281382157790744313LLU;
	uint64_t x363 = UINT64_MAX;
	volatile int8_t x364 = INT8_MIN;
	volatile uint64_t t89 = 641709LLU;

	t89 = ((x361%x362)*(x363<=x364));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = INT32_MIN;
	int64_t x366 = -1061373591536584558LL;
	static volatile uint8_t x367 = UINT8_MAX;
	uint32_t x368 = UINT32_MAX;

	t90 = ((x365%x366)*(x367<=x368));

	if (t90 != -2147483648LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = INT8_MIN;
	int32_t x371 = -1;
	static int32_t x372 = -1;

	t91 = ((x369%x370)*(x371<=x372));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x373 = 785736U;
	int64_t x374 = INT64_MAX;
	static int8_t x375 = -1;
	volatile int32_t x376 = -1;
	int64_t t92 = 63LL;

	t92 = ((x373%x374)*(x375<=x376));

	if (t92 != 785736LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x377 = -957572402;
	uint16_t x378 = 95U;
	int8_t x379 = -1;
	volatile int8_t x380 = 1;
	volatile int32_t t93 = -439188;

	t93 = ((x377%x378)*(x379<=x380));

	if (t93 != -47) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x381 = INT32_MAX;
	int16_t x382 = 1132;
	int32_t x384 = -15931776;
	static volatile int32_t t94 = -2;

	t94 = ((x381%x382)*(x383<=x384));

	if (t94 != 407) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = INT64_MAX;
	int8_t x386 = INT8_MIN;
	int16_t x387 = INT16_MIN;
	uint32_t x388 = 10U;
	int64_t t95 = 1564685554LL;

	t95 = ((x385%x386)*(x387<=x388));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x390 = -1LL;
	int64_t t96 = 400706LL;

	t96 = ((x389%x390)*(x391<=x392));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x393 = INT8_MAX;
	int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MIN;
	static uint8_t x396 = 0U;

	t97 = ((x393%x394)*(x395<=x396));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x399 = 204656752918575994LL;
	static volatile int64_t t98 = -9716977907LL;

	t98 = ((x397%x398)*(x399<=x400));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x401 = INT32_MAX;
	int32_t x403 = INT32_MAX;
	uint16_t x404 = 16732U;
	volatile int32_t t99 = 410;

	t99 = ((x401%x402)*(x403<=x404));

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


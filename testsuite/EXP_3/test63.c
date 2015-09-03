#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = UINT16_MAX;
int32_t t1 = 457311707;
volatile int64_t x18 = INT64_MAX;
volatile int64_t x30 = INT64_MIN;
int16_t x33 = 119;
int64_t t7 = 8191091319256828LL;
static int8_t x43 = INT8_MAX;
uint64_t x46 = 3591101179LLU;
int64_t x47 = INT64_MIN;
int32_t x50 = 15;
int64_t t11 = 45384335493LL;
int64_t x54 = INT64_MIN;
uint64_t t12 = 30412858592940LLU;
uint16_t x58 = 1857U;
uint8_t x61 = UINT8_MAX;
int32_t x62 = 1534298;
int8_t x66 = INT8_MIN;
int8_t x69 = -1;
uint64_t x72 = 1876158601LLU;
uint8_t x74 = 94U;
int64_t t17 = -42028052761LL;
static uint64_t x84 = UINT64_MAX;
int64_t x87 = 124296LL;
int64_t t20 = -10LL;
static uint8_t x91 = UINT8_MAX;
static uint8_t x96 = 1U;
int16_t x97 = 219;
static int16_t x100 = 463;
volatile uint8_t x102 = UINT8_MAX;
int8_t x107 = INT8_MIN;
int8_t x108 = -31;
volatile uint16_t x112 = 9802U;
volatile uint64_t x120 = 3149872LLU;
volatile int8_t x123 = 26;
uint32_t x130 = UINT32_MAX;
int16_t x132 = -343;
int32_t x134 = INT32_MIN;
int64_t x135 = INT64_MIN;
static int64_t t31 = 944LL;
volatile int16_t x148 = 2141;
int8_t x150 = -5;
static int64_t x152 = -1LL;
int8_t x157 = 1;
uint32_t t35 = 1981848U;
uint16_t x163 = 1U;
uint64_t x165 = 335076LLU;
uint64_t x166 = UINT64_MAX;
uint64_t t37 = 39628145750387794LLU;
uint32_t x169 = 850077U;
volatile uint8_t x175 = 51U;
volatile uint8_t x182 = UINT8_MAX;
volatile uint64_t t40 = 4571449745LLU;
static uint64_t x193 = 41598208079803LLU;
volatile int8_t x194 = -1;
uint8_t x201 = UINT8_MAX;
static uint8_t x208 = 0U;
int32_t x215 = 0;
uint16_t x217 = 27550U;
static int8_t x225 = INT8_MIN;
volatile uint8_t x226 = UINT8_MAX;
int16_t x229 = -1139;
volatile int32_t x231 = 664599337;
volatile int32_t x249 = -53;
static volatile uint32_t t55 = 55637471U;
int8_t x258 = -1;
static uint8_t x268 = UINT8_MAX;
uint64_t t60 = 85635125970LLU;
static volatile int32_t x273 = -39574;
volatile int32_t t61 = 837610;
int8_t x280 = -15;
int8_t x281 = INT8_MIN;
uint16_t x283 = UINT16_MAX;
int16_t x284 = INT16_MAX;
int16_t x285 = -1;
int64_t x291 = 545LL;
uint32_t x305 = UINT32_MAX;
static volatile uint32_t x307 = UINT32_MAX;
int32_t x317 = INT32_MAX;
static int8_t x318 = INT8_MAX;
int32_t x322 = -1;
uint64_t x331 = UINT64_MAX;
volatile uint16_t x332 = UINT16_MAX;
static int32_t x344 = INT32_MIN;
volatile uint8_t x352 = 3U;
volatile uint32_t x355 = UINT32_MAX;
int16_t x359 = INT16_MIN;
static uint16_t x361 = 2U;
int32_t x362 = -1;
int8_t x367 = -1;
volatile uint64_t t83 = 111025928716015LLU;
static int8_t x371 = INT8_MAX;
int16_t x376 = INT16_MAX;
int8_t x379 = INT8_MIN;
int16_t x392 = INT16_MAX;
int16_t x393 = -1;
uint16_t x399 = 4281U;
int8_t x403 = -3;
volatile uint64_t t93 = 99387LLU;
uint32_t t94 = 1U;
static volatile uint16_t x416 = UINT16_MAX;
volatile int8_t x428 = INT8_MAX;
int64_t t98 = 18364LL;
int64_t x436 = -772085091LL;
int64_t t99 = 199991186668308LL;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int64_t x2 = 78LL;
	int32_t x3 = 12;
	int16_t x4 = 1;
	int64_t t0 = -797065571037861LL;

	t0 = ((x1%x2)&(x3+x4));

	if (t0 != 13LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1799U;
	uint8_t x6 = UINT8_MAX;
	uint8_t x7 = UINT8_MAX;

	t1 = ((x5%x6)&(x7+x8));

	if (t1 != 14) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static volatile int16_t x10 = -1090;
	uint64_t x11 = 1LLU;
	static int16_t x12 = INT16_MAX;
	volatile uint64_t t2 = 337319563650152LLU;

	t2 = ((x9%x10)&(x11+x12));

	if (t2 != 32768LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MAX;
	static volatile int64_t x14 = -1LL;
	int8_t x15 = 5;
	uint32_t x16 = UINT32_MAX;
	int64_t t3 = 30929737130400LL;

	t3 = ((x13%x14)&(x15+x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 21;
	uint32_t x19 = 1U;
	volatile int32_t x20 = INT32_MIN;
	int64_t t4 = 450666LL;

	t4 = ((x17%x18)&(x19+x20));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 0;
	volatile int8_t x22 = -63;
	volatile uint64_t x23 = UINT64_MAX;
	int16_t x24 = INT16_MAX;
	uint64_t t5 = 966LLU;

	t5 = ((x21%x22)&(x23+x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	int16_t x31 = -1;
	uint8_t x32 = UINT8_MAX;
	static volatile int64_t t6 = -258863901501LL;

	t6 = ((x29%x30)&(x31+x32));

	if (t6 != 254LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = INT64_MAX;
	int64_t x35 = -1LL;
	static int16_t x36 = 46;

	t7 = ((x33%x34)&(x35+x36));

	if (t7 != 37LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 198824800U;
	int64_t x38 = INT64_MIN;
	int32_t x39 = -1;
	int64_t x40 = 10LL;
	volatile int64_t t8 = -657814804938312663LL;

	t8 = ((x37%x38)&(x39+x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 207LLU;
	uint64_t x42 = 9255430690249536LLU;
	int8_t x44 = INT8_MAX;
	static uint64_t t9 = 68678447830LLU;

	t9 = ((x41%x42)&(x43+x44));

	if (t9 != 206LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x45 = UINT32_MAX;
	int8_t x48 = 0;
	volatile uint64_t t10 = 1287948272LLU;

	t10 = ((x45%x46)&(x47+x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = INT64_MAX;
	volatile int64_t x51 = -10047240231778LL;
	volatile uint16_t x52 = 9305U;

	t11 = ((x49%x50)&(x51+x52));

	if (t11 != 7LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -31;
	uint64_t x55 = UINT64_MAX;
	static volatile uint16_t x56 = 26U;

	t12 = ((x53%x54)&(x55+x56));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	int32_t x59 = 6182;
	static int16_t x60 = -1;
	int32_t t13 = -1;

	t13 = ((x57%x58)&(x59+x60));

	if (t13 != 6144) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x63 = 4033;
	int64_t x64 = INT64_MIN;
	volatile int64_t t14 = 10871LL;

	t14 = ((x61%x62)&(x63+x64));

	if (t14 != 193LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = -1;
	static volatile int8_t x67 = 0;
	volatile int64_t x68 = 3193870LL;
	int64_t t15 = 66073497299LL;

	t15 = ((x65%x66)&(x67+x68));

	if (t15 != 3193870LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x70 = INT32_MAX;
	uint32_t x71 = 1856098604U;
	uint64_t t16 = 33198167520387LLU;

	t16 = ((x69%x70)&(x71+x72));

	if (t16 != 3732257205LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = INT64_MIN;
	int64_t x75 = INT64_MIN;
	int16_t x76 = INT16_MAX;

	t17 = ((x73%x74)&(x75+x76));

	if (t17 != -9223372036854743076LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = INT32_MAX;
	int8_t x78 = INT8_MAX;
	int8_t x79 = INT8_MIN;
	int32_t x80 = -1;
	int32_t t18 = -268019012;

	t18 = ((x77%x78)&(x79+x80));

	if (t18 != 7) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	uint32_t x82 = UINT32_MAX;
	uint16_t x83 = 0U;
	volatile uint64_t t19 = 5439343044LLU;

	t19 = ((x81%x82)&(x83+x84));

	if (t19 != 127LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = UINT32_MAX;
	static volatile int8_t x86 = INT8_MIN;
	int8_t x88 = -1;

	t20 = ((x85%x86)&(x87+x88));

	if (t20 != 7LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	uint8_t x90 = UINT8_MAX;
	uint16_t x92 = UINT16_MAX;
	int64_t t21 = -28245411886689LL;

	t21 = ((x89%x90)&(x91+x92));

	if (t21 != 65664LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -832861416;
	static volatile int16_t x94 = INT16_MIN;
	static int64_t x95 = -1LL;
	int64_t t22 = -888LL;

	t22 = ((x93%x94)&(x95+x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x98 = -1;
	int16_t x99 = -18;
	int32_t t23 = -1;

	t23 = ((x97%x98)&(x99+x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -5;
	static int64_t x103 = 114674LL;
	int32_t x104 = INT32_MAX;
	volatile int64_t t24 = 20612636517007LL;

	t24 = ((x101%x102)&(x103+x104));

	if (t24 != 2147598321LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	int32_t x106 = INT32_MAX;
	int64_t t25 = -15935LL;

	t25 = ((x105%x106)&(x107+x108));

	if (t25 != -160LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = INT32_MAX;
	static volatile uint32_t x110 = 255142166U;
	int64_t x111 = INT64_MIN;
	volatile int64_t t26 = -256LL;

	t26 = ((x109%x110)&(x111+x112));

	if (t26 != 9802LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x117 = INT64_MIN;
	uint32_t x118 = 14U;
	uint32_t x119 = 13967901U;
	uint64_t t27 = 2880571205299758586LLU;

	t27 = ((x117%x118)&(x119+x120));

	if (t27 != 17117768LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = UINT64_MAX;
	uint64_t x122 = 3868985LLU;
	int8_t x124 = -1;
	uint64_t t28 = 474964455591116263LLU;

	t28 = ((x121%x122)&(x123+x124));

	if (t28 != 17LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = INT32_MIN;
	int32_t x131 = INT32_MAX;
	volatile uint32_t t29 = 23561U;

	t29 = ((x129%x130)&(x131+x132));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x133 = -1991;
	int8_t x136 = 0;
	int64_t t30 = INT64_MIN;

	t30 = ((x133%x134)&(x135+x136));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x137 = UINT16_MAX;
	uint16_t x138 = 9141U;
	int64_t x139 = INT64_MIN;
	uint8_t x140 = 26U;

	t31 = ((x137%x138)&(x139+x140));

	if (t31 != 8LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x145 = UINT32_MAX;
	static uint16_t x146 = 6976U;
	int64_t x147 = INT64_MIN;
	static volatile int64_t t32 = 49044304502263LL;

	t32 = ((x145%x146)&(x147+x148));

	if (t32 != 29LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = 116118439U;
	int32_t x151 = -1;
	static int64_t t33 = 5355990992LL;

	t33 = ((x149%x150)&(x151+x152));

	if (t33 != 116118438LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = INT32_MIN;
	volatile uint32_t x154 = 2U;
	uint8_t x155 = 3U;
	uint64_t x156 = 248LLU;
	volatile uint64_t t34 = 6002989271233527LLU;

	t34 = ((x153%x154)&(x155+x156));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x158 = INT8_MAX;
	volatile int32_t x159 = 415961653;
	uint32_t x160 = 44939U;

	t35 = ((x157%x158)&(x159+x160));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 0U;
	static volatile int8_t x162 = INT8_MAX;
	int32_t x164 = INT32_MIN;
	volatile uint32_t t36 = 24227U;

	t36 = ((x161%x162)&(x163+x164));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x167 = INT8_MIN;
	uint32_t x168 = UINT32_MAX;

	t37 = ((x165%x166)&(x167+x168));

	if (t37 != 334948LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x170 = -1LL;
	static int16_t x171 = INT16_MAX;
	volatile int64_t x172 = -126732477LL;
	int64_t t38 = -157LL;

	t38 = ((x169%x170)&(x171+x172));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x173 = INT16_MAX;
	static int64_t x174 = -1LL;
	int8_t x176 = -27;
	volatile int64_t t39 = -1LL;

	t39 = ((x173%x174)&(x175+x176));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = 52021225U;
	uint64_t x183 = 32325101456342LLU;
	int64_t x184 = 8562488LL;

	t40 = ((x181%x182)&(x183+x184));

	if (t40 != 12LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x185 = 0U;
	int16_t x186 = -1;
	uint8_t x187 = 0U;
	int8_t x188 = INT8_MAX;
	volatile int32_t t41 = 4;

	t41 = ((x185%x186)&(x187+x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x189 = 40456843U;
	int8_t x190 = -50;
	volatile int32_t x191 = INT32_MIN;
	static volatile int32_t x192 = INT32_MAX;
	static uint32_t t42 = 13512U;

	t42 = ((x189%x190)&(x191+x192));

	if (t42 != 40456843U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x195 = 227U;
	int32_t x196 = 10694453;
	static uint64_t t43 = 66897LLU;

	t43 = ((x193%x194)&(x195+x196));

	if (t43 != 2240536LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x197 = 24993241;
	int32_t x198 = INT32_MIN;
	int64_t x199 = INT64_MIN;
	uint32_t x200 = UINT32_MAX;
	volatile int64_t t44 = 74783520LL;

	t44 = ((x197%x198)&(x199+x200));

	if (t44 != 24993241LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x202 = INT16_MAX;
	int32_t x203 = 928175;
	int32_t x204 = 1;
	static int32_t t45 = 63632;

	t45 = ((x201%x202)&(x203+x204));

	if (t45 != 176) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -1LL;
	static volatile uint8_t x206 = 2U;
	uint64_t x207 = 7LLU;
	uint64_t t46 = 2094388373435LLU;

	t46 = ((x205%x206)&(x207+x208));

	if (t46 != 7LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = INT16_MAX;
	volatile int32_t x210 = INT32_MIN;
	int64_t x211 = -1LL;
	volatile int32_t x212 = INT32_MAX;
	volatile int64_t t47 = 43972786LL;

	t47 = ((x209%x210)&(x211+x212));

	if (t47 != 32766LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = INT64_MIN;
	uint64_t x214 = 59606569LLU;
	int64_t x216 = -247LL;
	uint64_t t48 = 2132253572LLU;

	t48 = ((x213%x214)&(x215+x216));

	if (t48 != 14476809LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x218 = 58U;
	int8_t x219 = -1;
	uint8_t x220 = UINT8_MAX;
	static volatile int32_t t49 = 844778617;

	t49 = ((x217%x218)&(x219+x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x221 = INT64_MIN;
	int16_t x222 = 14;
	uint64_t x223 = 18851857LLU;
	uint16_t x224 = 50U;
	volatile uint64_t t50 = 2075093955390LLU;

	t50 = ((x221%x222)&(x223+x224));

	if (t50 != 18851904LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x227 = 15699LL;
	uint64_t x228 = 867803LLU;
	static volatile uint64_t t51 = 451258498213952099LLU;

	t51 = ((x225%x226)&(x227+x228));

	if (t51 != 883456LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x230 = -31836LL;
	uint8_t x232 = 26U;
	static int64_t t52 = -1613LL;

	t52 = ((x229%x230)&(x231+x232));

	if (t52 != 664599297LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = INT16_MIN;
	int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MAX;
	int8_t x240 = -1;
	volatile int32_t t53 = -2074500;

	t53 = ((x237%x238)&(x239+x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x245 = 8U;
	int16_t x246 = -1;
	int16_t x247 = INT16_MIN;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t54 = 10117092218754LLU;

	t54 = ((x245%x246)&(x247+x248));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x250 = UINT32_MAX;
	static volatile int16_t x251 = INT16_MAX;
	uint16_t x252 = UINT16_MAX;

	t55 = ((x249%x250)&(x251+x252));

	if (t55 != 98250U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = -1;
	static int16_t x254 = -1;
	int8_t x255 = -1;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t56 = 17LLU;

	t56 = ((x253%x254)&(x255+x256));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = -2;
	int8_t x259 = INT8_MAX;
	int64_t x260 = 1952690174LL;
	int64_t t57 = -4229592711108LL;

	t57 = ((x257%x258)&(x259+x260));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x261 = 11688U;
	int16_t x262 = 1575;
	int32_t x263 = INT32_MIN;
	uint64_t x264 = UINT64_MAX;
	static uint64_t t58 = 39479LLU;

	t58 = ((x261%x262)&(x263+x264));

	if (t58 != 663LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x265 = UINT8_MAX;
	int8_t x266 = -1;
	int64_t x267 = -1759479251434690928LL;
	int64_t t59 = -7042175311649894LL;

	t59 = ((x265%x266)&(x267+x268));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x269 = 6823977033029368086LLU;
	volatile uint32_t x270 = 35310162U;
	static uint16_t x271 = 23U;
	static int16_t x272 = -9;

	t60 = ((x269%x270)&(x271+x272));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x274 = -1;
	volatile int16_t x275 = INT16_MAX;
	int16_t x276 = INT16_MIN;

	t61 = ((x273%x274)&(x275+x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = -2608;
	uint16_t x278 = UINT16_MAX;
	static int16_t x279 = INT16_MAX;
	int32_t t62 = 5;

	t62 = ((x277%x278)&(x279+x280));

	if (t62 != 30160) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x282 = INT16_MIN;
	int32_t t63 = 0;

	t63 = ((x281%x282)&(x283+x284));

	if (t63 != 98176) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x286 = INT16_MAX;
	int32_t x287 = INT32_MIN;
	static int64_t x288 = -562997LL;
	volatile int64_t t64 = 1120372385461693LL;

	t64 = ((x285%x286)&(x287+x288));

	if (t64 != -2148046645LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = -1;
	int8_t x290 = -30;
	uint16_t x292 = 76U;
	int64_t t65 = 0LL;

	t65 = ((x289%x290)&(x291+x292));

	if (t65 != 621LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = 790407943009LL;
	volatile int16_t x294 = -1;
	static uint16_t x295 = UINT16_MAX;
	uint64_t x296 = 192239858099427LLU;
	volatile uint64_t t66 = 1966415354743LLU;

	t66 = ((x293%x294)&(x295+x296));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = 0;
	int32_t x302 = INT32_MAX;
	int16_t x303 = -6172;
	int8_t x304 = 1;
	static int32_t t67 = -202175290;

	t67 = ((x301%x302)&(x303+x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x306 = -26;
	static int32_t x308 = INT32_MIN;
	uint32_t t68 = 3834U;

	t68 = ((x305%x306)&(x307+x308));

	if (t68 != 25U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x309 = INT32_MIN;
	uint64_t x310 = 55149693423LLU;
	static uint16_t x311 = UINT16_MAX;
	static int64_t x312 = INT64_MIN;
	volatile uint64_t t69 = 202LLU;

	t69 = ((x309%x310)&(x311+x312));

	if (t69 != 14115LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x313 = UINT32_MAX;
	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	int16_t x316 = -769;
	uint32_t t70 = 12U;

	t70 = ((x313%x314)&(x315+x316));

	if (t70 != 32126U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x319 = 74LLU;
	int16_t x320 = 0;
	volatile uint64_t t71 = 436744952089967LLU;

	t71 = ((x317%x318)&(x319+x320));

	if (t71 != 2LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x321 = INT64_MIN;
	volatile int8_t x323 = INT8_MAX;
	volatile uint8_t x324 = 10U;
	volatile int64_t t72 = -131006469LL;

	t72 = ((x321%x322)&(x323+x324));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x325 = 2;
	int64_t x326 = 126946781LL;
	uint32_t x327 = 4U;
	static int16_t x328 = INT16_MIN;
	int64_t t73 = 6147750463LL;

	t73 = ((x325%x326)&(x327+x328));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x329 = INT16_MAX;
	static uint64_t x330 = 958570LLU;
	uint64_t t74 = 8444370161LLU;

	t74 = ((x329%x330)&(x331+x332));

	if (t74 != 32766LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x333 = INT16_MIN;
	int64_t x334 = INT64_MIN;
	static int8_t x335 = -1;
	int16_t x336 = INT16_MAX;
	volatile int64_t t75 = 322923258LL;

	t75 = ((x333%x334)&(x335+x336));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x337 = 8177LL;
	static volatile uint64_t x338 = 29LLU;
	uint32_t x339 = UINT32_MAX;
	uint16_t x340 = UINT16_MAX;
	volatile uint64_t t76 = 17826059678116LLU;

	t76 = ((x337%x338)&(x339+x340));

	if (t76 != 28LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = -12;
	int16_t x342 = INT16_MAX;
	uint64_t x343 = UINT64_MAX;
	volatile uint64_t t77 = 735LLU;

	t77 = ((x341%x342)&(x343+x344));

	if (t77 != 18446744071562067956LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x345 = INT16_MAX;
	static int64_t x346 = 2469092923LL;
	static uint64_t x347 = UINT64_MAX;
	static int32_t x348 = INT32_MIN;
	static volatile uint64_t t78 = 123326467LLU;

	t78 = ((x345%x346)&(x347+x348));

	if (t78 != 32767LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x349 = INT64_MAX;
	uint8_t x350 = 14U;
	static int8_t x351 = 24;
	volatile int64_t t79 = 1842718910171381481LL;

	t79 = ((x349%x350)&(x351+x352));

	if (t79 != 3LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x353 = 0U;
	int16_t x354 = 105;
	static int64_t x356 = -1LL;
	int64_t t80 = 956572900457081LL;

	t80 = ((x353%x354)&(x355+x356));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x357 = 1518574LLU;
	volatile uint8_t x358 = UINT8_MAX;
	uint16_t x360 = 240U;
	uint64_t t81 = 217892687146444937LLU;

	t81 = ((x357%x358)&(x359+x360));

	if (t81 != 48LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x363 = UINT8_MAX;
	volatile int32_t x364 = 5427;
	static int32_t t82 = 97885;

	t82 = ((x361%x362)&(x363+x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x365 = 48207606LLU;
	volatile int32_t x366 = INT32_MIN;
	uint8_t x368 = 1U;

	t83 = ((x365%x366)&(x367+x368));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int8_t x370 = INT8_MIN;
	static int8_t x372 = -1;
	volatile int32_t t84 = -176232;

	t84 = ((x369%x370)&(x371+x372));

	if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = INT16_MAX;
	int64_t x374 = -1LL;
	int16_t x375 = INT16_MIN;
	volatile int64_t t85 = 256271134529LL;

	t85 = ((x373%x374)&(x375+x376));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x377 = 1U;
	static int8_t x378 = 5;
	volatile uint8_t x380 = 20U;
	int32_t t86 = -1225;

	t86 = ((x377%x378)&(x379+x380));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = 968733;
	int16_t x382 = INT16_MIN;
	volatile uint64_t x383 = 90259LLU;
	uint8_t x384 = 79U;
	static volatile uint64_t t87 = 51232LLU;

	t87 = ((x381%x382)&(x383+x384));

	if (t87 != 16384LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = 10;
	int64_t x386 = -464148815458LL;
	int32_t x387 = 40317862;
	uint32_t x388 = UINT32_MAX;
	int64_t t88 = 979912182603LL;

	t88 = ((x385%x386)&(x387+x388));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = INT64_MIN;
	int8_t x390 = INT8_MIN;
	uint64_t x391 = UINT64_MAX;
	volatile uint64_t t89 = 9713350151LLU;

	t89 = ((x389%x390)&(x391+x392));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x394 = INT8_MIN;
	static int16_t x395 = INT16_MAX;
	static int8_t x396 = INT8_MIN;
	volatile int32_t t90 = 6258;

	t90 = ((x393%x394)&(x395+x396));

	if (t90 != 32639) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x397 = -1LL;
	static int32_t x398 = INT32_MAX;
	int8_t x400 = INT8_MIN;
	int64_t t91 = -236LL;

	t91 = ((x397%x398)&(x399+x400));

	if (t91 != 4153LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x401 = -238;
	uint32_t x402 = UINT32_MAX;
	uint64_t x404 = 559LLU;
	uint64_t t92 = 116303LLU;

	t92 = ((x401%x402)&(x403+x404));

	if (t92 != 512LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x405 = INT64_MAX;
	int8_t x406 = -1;
	uint32_t x407 = 12365U;
	static uint64_t x408 = 254049445LLU;

	t93 = ((x405%x406)&(x407+x408));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = 96;
	int32_t x410 = INT32_MAX;
	static uint32_t x411 = 64682U;
	volatile uint8_t x412 = UINT8_MAX;

	t94 = ((x409%x410)&(x411+x412));

	if (t94 != 32U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x413 = -1LL;
	volatile int8_t x414 = -1;
	int8_t x415 = -63;
	int64_t t95 = -5930LL;

	t95 = ((x413%x414)&(x415+x416));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x421 = 8U;
	int8_t x422 = INT8_MIN;
	static volatile uint8_t x423 = 0U;
	volatile uint16_t x424 = 189U;
	int32_t t96 = -42708;

	t96 = ((x421%x422)&(x423+x424));

	if (t96 != 8) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x425 = 15993LL;
	int8_t x426 = INT8_MIN;
	uint32_t x427 = 3278U;
	volatile int64_t t97 = 235819528262704798LL;

	t97 = ((x425%x426)&(x427+x428));

	if (t97 != 73LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x429 = INT8_MAX;
	int64_t x430 = -1LL;
	static int8_t x431 = -4;
	uint32_t x432 = 6U;

	t98 = ((x429%x430)&(x431+x432));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x433 = INT64_MIN;
	int8_t x434 = -1;
	int16_t x435 = -41;

	t99 = ((x433%x434)&(x435+x436));

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


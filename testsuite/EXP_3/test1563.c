#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MAX;
static volatile int32_t t2 = 57442890;
volatile int16_t x21 = 110;
int64_t t7 = 3160LL;
volatile uint32_t t9 = 1U;
int8_t x43 = INT8_MIN;
int32_t t11 = -2275;
int8_t x49 = INT8_MIN;
uint8_t x50 = 14U;
int16_t x51 = -1;
static uint16_t x53 = UINT16_MAX;
int64_t x54 = -1LL;
int32_t x75 = INT32_MIN;
int64_t x76 = -78943030LL;
int32_t t18 = -52800;
volatile uint16_t x89 = 15U;
int8_t x99 = INT8_MAX;
uint8_t x119 = 104U;
volatile uint64_t t30 = 1936LLU;
uint64_t x141 = 194890623LLU;
volatile uint16_t x147 = 916U;
int16_t x150 = INT16_MIN;
int64_t x153 = -33380198751LL;
static int64_t x168 = INT64_MIN;
uint64_t t37 = 106333503LLU;
int64_t x173 = -1LL;
int64_t x180 = INT64_MIN;
int16_t x181 = INT16_MIN;
int64_t x189 = INT64_MIN;
int16_t x193 = -1;
uint32_t x199 = 1654463U;
int64_t x201 = INT64_MIN;
static uint64_t x202 = 773798LLU;
uint8_t x210 = 23U;
int32_t x211 = -1;
uint32_t x219 = 2831U;
uint8_t x221 = 88U;
uint32_t x223 = 153614319U;
static int16_t x226 = INT16_MAX;
uint16_t x229 = 274U;
uint8_t x233 = 53U;
uint32_t x236 = 225U;
volatile int32_t x245 = -1;
uint32_t x247 = 9851U;
volatile uint32_t x256 = 1321383U;
static uint8_t x257 = UINT8_MAX;
static volatile int32_t t60 = 13;
int32_t x272 = INT32_MIN;
uint32_t x275 = 2U;
int16_t x278 = INT16_MAX;
int64_t x284 = -1LL;
int8_t x290 = -1;
volatile int8_t x294 = INT8_MIN;
int32_t x295 = INT32_MIN;
int32_t x298 = INT32_MIN;
int32_t t68 = 1919;
uint32_t x302 = UINT32_MAX;
int32_t x315 = -232366;
uint64_t x317 = UINT64_MAX;
int32_t x339 = -342;
volatile int32_t x344 = -55;
int8_t x354 = -1;
int8_t x361 = 14;
int16_t x373 = -1;
static int64_t x376 = 45698088164LL;
int64_t x381 = INT64_MAX;
int32_t t88 = -408;
static int32_t x395 = INT32_MAX;
int64_t x399 = -944649LL;
int16_t x405 = INT16_MAX;
int8_t x415 = INT8_MIN;
static int64_t x423 = INT64_MAX;
uint64_t t97 = 1906LLU;
int32_t x430 = -33;
int64_t x431 = -1LL;
uint16_t x433 = UINT16_MAX;
volatile int16_t x434 = 358;
int32_t t99 = -3328799;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	static int64_t x2 = INT64_MAX;
	int64_t x3 = INT64_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 3779966316291047391LL;

	t0 = ((x1/x2)*(x3<=x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint8_t x6 = 58U;
	volatile int64_t x7 = INT64_MIN;
	int64_t t1 = -5LL;

	t1 = ((x5/x6)*(x7<=x8));

	if (t1 != -159023655807840962LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int32_t x10 = -1;
	int8_t x11 = INT8_MIN;
	volatile int16_t x12 = 5;

	t2 = ((x9/x10)*(x11<=x12));

	if (t2 != -65535) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -344432874064077LL;
	int64_t x14 = 64373609348944789LL;
	uint8_t x15 = UINT8_MAX;
	uint16_t x16 = 946U;
	int64_t t3 = 759508627779231LL;

	t3 = ((x13/x14)*(x15<=x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 15LLU;
	int16_t x18 = 6338;
	volatile int16_t x19 = -1;
	static int16_t x20 = INT16_MAX;
	uint64_t t4 = 130267047289179336LLU;

	t4 = ((x17/x18)*(x19<=x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;
	int8_t x23 = 1;
	int16_t x24 = -1;
	volatile int32_t t5 = 14724374;

	t5 = ((x21/x22)*(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = UINT32_MAX;
	uint32_t x26 = 3453U;
	uint8_t x27 = 15U;
	int32_t x28 = 21;
	uint32_t t6 = 2791U;

	t6 = ((x25/x26)*(x27<=x28));

	if (t6 != 1243836U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 4U;
	int64_t x30 = -1499LL;
	int16_t x31 = 0;
	int16_t x32 = -1;

	t7 = ((x29/x30)*(x31<=x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	volatile int8_t x34 = -25;
	int32_t x35 = 6;
	int32_t x36 = -1;
	static volatile uint32_t t8 = 18425U;

	t8 = ((x33/x34)*(x35<=x36));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MAX;
	uint32_t x38 = 967U;
	int64_t x39 = -1LL;
	static uint16_t x40 = UINT16_MAX;

	t9 = ((x37/x38)*(x39<=x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	uint8_t x42 = UINT8_MAX;
	static volatile int16_t x44 = 5;
	static uint64_t t10 = 2302058531820348825LLU;

	t10 = ((x41/x42)*(x43<=x44));

	if (t10 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	static uint16_t x46 = 7413U;
	static uint8_t x47 = 114U;
	volatile int8_t x48 = INT8_MAX;

	t11 = ((x45/x46)*(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x52 = 170046LL;
	volatile int32_t t12 = 0;

	t12 = ((x49/x50)*(x51<=x52));

	if (t12 != -9) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MIN;
	int64_t t13 = -4447346992446LL;

	t13 = ((x53/x54)*(x55<=x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MAX;
	uint8_t x58 = UINT8_MAX;
	static int64_t x59 = INT64_MIN;
	int64_t x60 = 1LL;
	int32_t t14 = 124378;

	t14 = ((x57/x58)*(x59<=x60));

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MIN;
	uint64_t x63 = UINT64_MAX;
	int16_t x64 = INT16_MAX;
	int64_t t15 = 684280203546995LL;

	t15 = ((x61/x62)*(x63<=x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MAX;
	uint16_t x66 = UINT16_MAX;
	int64_t x67 = -820698926914261LL;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = -307884251;

	t16 = ((x65/x66)*(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MAX;
	static volatile int32_t t17 = 194062;

	t17 = ((x73/x74)*(x75<=x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = -1;
	uint8_t x82 = 7U;
	static uint16_t x83 = 199U;
	volatile int16_t x84 = 0;

	t18 = ((x81/x82)*(x83<=x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	uint64_t x86 = 161LLU;
	int32_t x87 = INT32_MIN;
	int8_t x88 = -1;
	volatile uint64_t t19 = 1217LLU;

	t19 = ((x85/x86)*(x87<=x88));

	if (t19 != 57288025073632147LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x90 = INT16_MAX;
	int32_t x91 = INT32_MAX;
	static int64_t x92 = INT64_MIN;
	static int32_t t20 = 392206556;

	t20 = ((x89/x90)*(x91<=x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x97 = INT16_MAX;
	int32_t x98 = INT32_MIN;
	static uint32_t x100 = 106353848U;
	int32_t t21 = 1232634;

	t21 = ((x97/x98)*(x99<=x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = -1LL;
	volatile uint32_t x102 = UINT32_MAX;
	uint64_t x103 = 657425746LLU;
	int64_t x104 = INT64_MIN;
	int64_t t22 = -401422LL;

	t22 = ((x101/x102)*(x103<=x104));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x105 = INT16_MIN;
	int16_t x106 = -464;
	uint8_t x107 = 2U;
	uint64_t x108 = 182514LLU;
	int32_t t23 = -1131825;

	t23 = ((x105/x106)*(x107<=x108));

	if (t23 != 70) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x109 = INT16_MIN;
	uint8_t x110 = 103U;
	static volatile int32_t x111 = -1;
	int8_t x112 = -21;
	static volatile int32_t t24 = 78;

	t24 = ((x109/x110)*(x111<=x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MAX;
	volatile uint16_t x114 = 202U;
	volatile int16_t x115 = INT16_MAX;
	volatile int64_t x116 = -18788425252303LL;
	static int32_t t25 = 12696;

	t25 = ((x113/x114)*(x115<=x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = -1;
	volatile uint16_t x118 = 6090U;
	uint8_t x120 = UINT8_MAX;
	static volatile int32_t t26 = 26145191;

	t26 = ((x117/x118)*(x119<=x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x121 = -22;
	volatile int64_t x122 = -1LL;
	int16_t x123 = -1937;
	static uint16_t x124 = UINT16_MAX;
	volatile int64_t t27 = 24488771155625LL;

	t27 = ((x121/x122)*(x123<=x124));

	if (t27 != 22LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x125 = 507666U;
	static int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MIN;
	uint16_t x128 = UINT16_MAX;
	uint32_t t28 = 7219723U;

	t28 = ((x125/x126)*(x127<=x128));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x129 = INT16_MIN;
	static int16_t x130 = -7059;
	int64_t x131 = INT64_MIN;
	uint16_t x132 = 3U;
	volatile int32_t t29 = 21277794;

	t29 = ((x129/x130)*(x131<=x132));

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x133 = 45050716863514LLU;
	volatile uint16_t x134 = 18942U;
	volatile int64_t x135 = 2844841272311214980LL;
	static int32_t x136 = INT32_MIN;

	t30 = ((x133/x134)*(x135<=x136));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x137 = 121393LL;
	int32_t x138 = INT32_MIN;
	int16_t x139 = 5902;
	uint64_t x140 = 6026749404674LLU;
	static int64_t t31 = 386LL;

	t31 = ((x137/x138)*(x139<=x140));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x142 = INT16_MAX;
	volatile int16_t x143 = INT16_MIN;
	volatile int64_t x144 = INT64_MIN;
	volatile uint64_t t32 = 47LLU;

	t32 = ((x141/x142)*(x143<=x144));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = INT32_MIN;
	static int32_t x146 = INT32_MIN;
	volatile int16_t x148 = INT16_MAX;
	volatile int32_t t33 = 1284;

	t33 = ((x145/x146)*(x147<=x148));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = 12;
	int8_t x151 = 2;
	int16_t x152 = INT16_MIN;
	int32_t t34 = -579943861;

	t34 = ((x149/x150)*(x151<=x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x154 = 72;
	static uint64_t x155 = 104056LLU;
	int32_t x156 = INT32_MAX;
	int64_t t35 = -69596LL;

	t35 = ((x153/x154)*(x155<=x156));

	if (t35 != -463613871LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x157 = -5;
	int16_t x158 = 48;
	static uint64_t x159 = 17666680096574LLU;
	static volatile int32_t x160 = INT32_MIN;
	volatile int32_t t36 = -520914395;

	t36 = ((x157/x158)*(x159<=x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x165 = 41744416259537206LLU;
	uint32_t x166 = 16384742U;
	uint32_t x167 = 53U;

	t37 = ((x165/x166)*(x167<=x168));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -1;
	int64_t x170 = -1LL;
	volatile int8_t x171 = -35;
	int8_t x172 = INT8_MAX;
	int64_t t38 = 11530776529822519LL;

	t38 = ((x169/x170)*(x171<=x172));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x174 = 38830908U;
	static int16_t x175 = INT16_MIN;
	uint16_t x176 = 16660U;
	volatile int64_t t39 = -263664LL;

	t39 = ((x173/x174)*(x175<=x176));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x177 = INT64_MIN;
	static uint64_t x178 = 3726083256923664583LLU;
	static volatile int8_t x179 = 5;
	volatile uint64_t t40 = 10LLU;

	t40 = ((x177/x178)*(x179<=x180));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x182 = UINT8_MAX;
	volatile uint64_t x183 = UINT64_MAX;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t41 = 8384909;

	t41 = ((x181/x182)*(x183<=x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x190 = INT8_MIN;
	int16_t x191 = 242;
	int8_t x192 = -1;
	static int64_t t42 = -372934366096680822LL;

	t42 = ((x189/x190)*(x191<=x192));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MIN;
	int8_t x196 = INT8_MAX;
	static int32_t t43 = 2;

	t43 = ((x193/x194)*(x195<=x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x197 = 0;
	uint16_t x198 = 8U;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t44 = 5;

	t44 = ((x197/x198)*(x199<=x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x203 = INT32_MIN;
	volatile int16_t x204 = 12176;
	uint64_t t45 = 23LLU;

	t45 = ((x201/x202)*(x203<=x204));

	if (t45 != 11919612142774LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x205 = INT32_MAX;
	static int32_t x206 = INT32_MAX;
	int8_t x207 = 6;
	int8_t x208 = 1;
	int32_t t46 = 125;

	t46 = ((x205/x206)*(x207<=x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MIN;
	volatile int32_t x212 = INT32_MIN;
	static volatile int32_t t47 = -34;

	t47 = ((x209/x210)*(x211<=x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x213 = UINT16_MAX;
	uint8_t x214 = 3U;
	volatile int64_t x215 = INT64_MAX;
	volatile uint16_t x216 = 9500U;
	static volatile int32_t t48 = -3618879;

	t48 = ((x213/x214)*(x215<=x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = INT32_MAX;
	static int32_t x218 = -1;
	int32_t x220 = INT32_MIN;
	volatile int32_t t49 = -773;

	t49 = ((x217/x218)*(x219<=x220));

	if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x222 = -1LL;
	uint16_t x224 = UINT16_MAX;
	volatile int64_t t50 = 506LL;

	t50 = ((x221/x222)*(x223<=x224));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = 19979004;
	int64_t x227 = -1LL;
	uint16_t x228 = 1409U;
	volatile int32_t t51 = -117;

	t51 = ((x225/x226)*(x227<=x228));

	if (t51 != 609) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x230 = -828682LL;
	int16_t x231 = -1;
	volatile int8_t x232 = INT8_MIN;
	int64_t t52 = 4649088132LL;

	t52 = ((x229/x230)*(x231<=x232));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x234 = -1;
	int64_t x235 = INT64_MAX;
	volatile int32_t t53 = 216112214;

	t53 = ((x233/x234)*(x235<=x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x237 = INT16_MIN;
	static uint16_t x238 = 58U;
	uint64_t x239 = 1001LLU;
	static int32_t x240 = INT32_MAX;
	volatile int32_t t54 = -1448908;

	t54 = ((x237/x238)*(x239<=x240));

	if (t54 != -564) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = 36876170338647127LL;
	int16_t x242 = -1;
	static int32_t x243 = INT32_MIN;
	volatile uint8_t x244 = 79U;
	int64_t t55 = -110243512563432623LL;

	t55 = ((x241/x242)*(x243<=x244));

	if (t55 != -36876170338647127LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x246 = -1;
	uint32_t x248 = UINT32_MAX;
	static int32_t t56 = 176748;

	t56 = ((x245/x246)*(x247<=x248));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = INT64_MIN;
	uint64_t x254 = UINT64_MAX;
	volatile uint32_t x255 = 3595U;
	volatile uint64_t t57 = 5943LLU;

	t57 = ((x253/x254)*(x255<=x256));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x258 = -30889;
	int32_t x259 = INT32_MIN;
	static int32_t x260 = -531;
	static int32_t t58 = 424745;

	t58 = ((x257/x258)*(x259<=x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x261 = INT64_MIN;
	int8_t x262 = 4;
	uint32_t x263 = 242U;
	volatile int32_t x264 = INT32_MIN;
	int64_t t59 = 62506736LL;

	t59 = ((x261/x262)*(x263<=x264));

	if (t59 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x265 = UINT16_MAX;
	int32_t x266 = -1;
	uint8_t x267 = 5U;
	int32_t x268 = -225567;

	t60 = ((x265/x266)*(x267<=x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = -1;
	int16_t x270 = INT16_MIN;
	int64_t x271 = -3979LL;
	static volatile int32_t t61 = -735521944;

	t61 = ((x269/x270)*(x271<=x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x273 = INT64_MIN;
	static int8_t x274 = INT8_MAX;
	uint8_t x276 = 9U;
	static int64_t t62 = -426LL;

	t62 = ((x273/x274)*(x275<=x276));

	if (t62 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = INT16_MIN;
	uint32_t x279 = 71867U;
	static volatile uint16_t x280 = UINT16_MAX;
	static int32_t t63 = -15074942;

	t63 = ((x277/x278)*(x279<=x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x281 = INT32_MIN;
	static uint8_t x282 = 47U;
	volatile int8_t x283 = INT8_MAX;
	volatile int32_t t64 = -16682846;

	t64 = ((x281/x282)*(x283<=x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x285 = -35383;
	static volatile uint32_t x286 = 104367099U;
	int16_t x287 = INT16_MAX;
	uint8_t x288 = 0U;
	uint32_t t65 = 1869575U;

	t65 = ((x285/x286)*(x287<=x288));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x289 = 9U;
	static int64_t x291 = INT64_MIN;
	static uint32_t x292 = UINT32_MAX;
	int32_t t66 = -135;

	t66 = ((x289/x290)*(x291<=x292));

	if (t66 != -9) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x293 = 7U;
	volatile int64_t x296 = INT64_MAX;
	int32_t t67 = -323870495;

	t67 = ((x293/x294)*(x295<=x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = -171;
	static uint8_t x299 = UINT8_MAX;
	int32_t x300 = INT32_MAX;

	t68 = ((x297/x298)*(x299<=x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = -1;
	static uint64_t x303 = 435992LLU;
	static int8_t x304 = INT8_MIN;
	static uint32_t t69 = 1324795U;

	t69 = ((x301/x302)*(x303<=x304));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x305 = UINT8_MAX;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	static uint32_t x308 = 96339U;
	volatile int32_t t70 = 121550;

	t70 = ((x305/x306)*(x307<=x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = INT16_MIN;
	uint8_t x310 = 21U;
	int16_t x311 = -1;
	static uint32_t x312 = UINT32_MAX;
	static int32_t t71 = -10872041;

	t71 = ((x309/x310)*(x311<=x312));

	if (t71 != -1560) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x313 = -1;
	volatile uint16_t x314 = 6U;
	uint32_t x316 = 6U;
	int32_t t72 = -1;

	t72 = ((x313/x314)*(x315<=x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x318 = INT64_MIN;
	static int8_t x319 = INT8_MIN;
	volatile int64_t x320 = INT64_MIN;
	volatile uint64_t t73 = 1LLU;

	t73 = ((x317/x318)*(x319<=x320));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x321 = 3U;
	volatile int16_t x322 = 122;
	int16_t x323 = -10271;
	int32_t x324 = -1;
	int32_t t74 = 6374;

	t74 = ((x321/x322)*(x323<=x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = INT32_MIN;
	int16_t x326 = 3;
	int64_t x327 = INT64_MIN;
	static volatile uint8_t x328 = 2U;
	int32_t t75 = -100618;

	t75 = ((x325/x326)*(x327<=x328));

	if (t75 != -715827882) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = 0;
	volatile int64_t x330 = -1LL;
	volatile int8_t x331 = -1;
	int8_t x332 = -1;
	static int64_t t76 = 0LL;

	t76 = ((x329/x330)*(x331<=x332));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x333 = INT8_MIN;
	static int16_t x334 = INT16_MAX;
	uint8_t x335 = 0U;
	volatile int32_t x336 = INT32_MAX;
	volatile int32_t t77 = -190566778;

	t77 = ((x333/x334)*(x335<=x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = -1;
	uint8_t x338 = 1U;
	volatile uint64_t x340 = UINT64_MAX;
	static volatile int32_t t78 = -58947620;

	t78 = ((x337/x338)*(x339<=x340));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x341 = -12;
	uint64_t x342 = 124307301989LLU;
	int64_t x343 = INT64_MIN;
	volatile uint64_t t79 = 51398687389498LLU;

	t79 = ((x341/x342)*(x343<=x344));

	if (t79 != 148396303LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = INT8_MIN;
	static int16_t x346 = 1717;
	uint32_t x347 = UINT32_MAX;
	volatile int16_t x348 = 9;
	volatile int32_t t80 = 35339552;

	t80 = ((x345/x346)*(x347<=x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x353 = 8454295464LLU;
	uint32_t x355 = 4834U;
	static int64_t x356 = INT64_MIN;
	uint64_t t81 = 3629104845794403243LLU;

	t81 = ((x353/x354)*(x355<=x356));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x362 = -502;
	static uint32_t x363 = UINT32_MAX;
	static uint16_t x364 = UINT16_MAX;
	int32_t t82 = -3;

	t82 = ((x361/x362)*(x363<=x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MAX;
	int32_t x367 = -1;
	volatile int8_t x368 = 2;
	volatile int32_t t83 = 848137674;

	t83 = ((x365/x366)*(x367<=x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x369 = 6U;
	int32_t x370 = INT32_MIN;
	static volatile int32_t x371 = -1192174;
	int64_t x372 = 10LL;
	static volatile int32_t t84 = -323;

	t84 = ((x369/x370)*(x371<=x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x374 = INT32_MAX;
	volatile uint32_t x375 = 474U;
	int32_t t85 = -28;

	t85 = ((x373/x374)*(x375<=x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = -1;
	volatile int64_t x378 = -4055992LL;
	volatile int16_t x379 = INT16_MAX;
	volatile uint32_t x380 = 20640U;
	int64_t t86 = 6935179LL;

	t86 = ((x377/x378)*(x379<=x380));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x382 = -1LL;
	int8_t x383 = -1;
	int16_t x384 = INT16_MAX;
	volatile int64_t t87 = 528445175LL;

	t87 = ((x381/x382)*(x383<=x384));

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x385 = 56;
	int16_t x386 = INT16_MIN;
	int8_t x387 = INT8_MIN;
	int32_t x388 = INT32_MIN;

	t88 = ((x385/x386)*(x387<=x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x389 = 1084U;
	int8_t x390 = INT8_MAX;
	uint16_t x391 = 11826U;
	static int16_t x392 = INT16_MIN;
	int32_t t89 = 3588;

	t89 = ((x389/x390)*(x391<=x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x393 = 175U;
	uint32_t x394 = 190126150U;
	int16_t x396 = 7;
	uint32_t t90 = 861U;

	t90 = ((x393/x394)*(x395<=x396));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = INT64_MIN;
	int8_t x398 = 4;
	int64_t x400 = -1LL;
	int64_t t91 = 291058635225LL;

	t91 = ((x397/x398)*(x399<=x400));

	if (t91 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x401 = INT16_MIN;
	int16_t x402 = INT16_MIN;
	uint16_t x403 = UINT16_MAX;
	int64_t x404 = -1LL;
	volatile int32_t t92 = -155563149;

	t92 = ((x401/x402)*(x403<=x404));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x406 = 365U;
	int64_t x407 = INT64_MIN;
	int8_t x408 = -26;
	static uint32_t t93 = 1U;

	t93 = ((x405/x406)*(x407<=x408));

	if (t93 != 89U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x409 = -1;
	int32_t x410 = INT32_MIN;
	static int8_t x411 = INT8_MAX;
	int64_t x412 = -1LL;
	int32_t t94 = -512;

	t94 = ((x409/x410)*(x411<=x412));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x413 = UINT32_MAX;
	volatile int32_t x414 = INT32_MIN;
	int8_t x416 = INT8_MIN;
	volatile uint32_t t95 = 109U;

	t95 = ((x413/x414)*(x415<=x416));

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x421 = -1;
	static volatile int8_t x422 = INT8_MIN;
	int8_t x424 = -1;
	int32_t t96 = 165397;

	t96 = ((x421/x422)*(x423<=x424));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x425 = 5316552504123LLU;
	uint64_t x426 = 6LLU;
	volatile int16_t x427 = INT16_MIN;
	uint8_t x428 = UINT8_MAX;

	t97 = ((x425/x426)*(x427<=x428));

	if (t97 != 886092084020LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x429 = UINT8_MAX;
	int8_t x432 = INT8_MIN;
	int32_t t98 = -92441;

	t98 = ((x429/x430)*(x431<=x432));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x435 = -1;
	volatile int64_t x436 = -1LL;

	t99 = ((x433/x434)*(x435<=x436));

	if (t99 != 183) { NG(); } else { ; }
	
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


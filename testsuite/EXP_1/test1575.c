#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x14 = INT16_MIN;
int64_t x17 = 1081326LL;
volatile int32_t x21 = INT32_MIN;
uint16_t x25 = 86U;
int16_t x32 = -66;
int64_t t7 = 1760300132LL;
int16_t x37 = INT16_MAX;
static volatile int32_t x39 = -2042624;
static uint32_t x43 = 158131U;
int8_t x44 = INT8_MIN;
uint32_t t10 = 194U;
volatile int64_t t12 = -987753LL;
uint32_t x57 = UINT32_MAX;
int8_t x58 = INT8_MAX;
volatile int16_t x65 = INT16_MAX;
volatile int32_t x75 = INT32_MIN;
int32_t t17 = -464969442;
int32_t x82 = -4;
static int32_t t20 = 1111;
uint16_t x89 = 10U;
volatile uint32_t x92 = UINT32_MAX;
int8_t x99 = 1;
static uint16_t x105 = UINT16_MAX;
int8_t x109 = 6;
int16_t x111 = -1;
static int32_t t26 = -28166969;
int32_t x113 = INT32_MAX;
int8_t x117 = INT8_MIN;
int8_t x118 = 0;
int32_t x123 = 3576088;
uint32_t t29 = 55825U;
volatile int8_t x131 = -5;
uint16_t x133 = 43U;
static int16_t x148 = INT16_MIN;
int16_t x150 = -1;
int8_t x152 = -1;
volatile int8_t x154 = INT8_MIN;
int8_t x158 = 17;
volatile int32_t t38 = 3;
int64_t t39 = -437358771041290LL;
static uint8_t x176 = 0U;
volatile int32_t t42 = -1095059;
uint64_t t45 = 32010LLU;
int64_t x202 = INT64_MIN;
static volatile int8_t x204 = INT8_MIN;
int32_t x205 = INT32_MIN;
static volatile int64_t t50 = 217828323375193272LL;
static int32_t t51 = 0;
static int16_t x222 = INT16_MAX;
int32_t x231 = 245831;
int16_t x235 = -66;
int16_t x236 = INT16_MIN;
int64_t x247 = INT64_MIN;
volatile uint16_t x251 = 16U;
uint64_t x256 = 30138LLU;
uint64_t t61 = 762017288138277121LLU;
int32_t x266 = INT32_MAX;
uint16_t x269 = UINT16_MAX;
int32_t t64 = -1;
static int16_t x283 = INT16_MIN;
static int32_t t67 = -29266;
int16_t x289 = 3;
int32_t x292 = 7119;
int8_t x306 = INT8_MIN;
int16_t x311 = INT16_MIN;
static uint16_t x312 = 899U;
static int32_t x314 = -1;
uint64_t x321 = 3605011372225611230LLU;
uint8_t x328 = 54U;
volatile int32_t t77 = -1346081;
uint32_t x331 = UINT32_MAX;
int16_t x332 = -32;
volatile uint32_t t78 = 330371300U;
int32_t x350 = INT32_MAX;
static uint16_t x354 = UINT16_MAX;
uint64_t x360 = UINT64_MAX;
int16_t x361 = INT16_MIN;
static int16_t x362 = -1;
int32_t t85 = 475;
static uint32_t x367 = UINT32_MAX;
int16_t x378 = INT16_MAX;
volatile uint8_t x383 = 125U;
volatile int64_t x385 = 3LL;
uint32_t x389 = UINT32_MAX;
volatile int16_t x391 = -1;
uint32_t x393 = 25873U;
int16_t x395 = INT16_MIN;
int32_t t92 = -247956474;
static volatile uint8_t x403 = 15U;
uint16_t x407 = 164U;
int64_t x409 = INT64_MAX;
int16_t x412 = INT16_MAX;
static uint16_t x413 = UINT16_MAX;
uint16_t x419 = 10923U;
uint8_t x420 = 8U;
uint64_t x423 = 1695434484LLU;
static int8_t x426 = INT8_MAX;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	volatile int16_t x2 = 30;
	int8_t x3 = -1;
	static int8_t x4 = -11;
	int32_t t0 = 143537;

	t0 = (((x1<=x2)%x3)-x4);

	if (t0 != 11) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	int32_t x6 = INT32_MIN;
	int8_t x7 = -4;
	volatile uint32_t x8 = 8623U;
	volatile uint32_t t1 = 2U;

	t1 = (((x5<=x6)%x7)-x8);

	if (t1 != 4294958673U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	static uint32_t x10 = UINT32_MAX;
	volatile uint32_t x11 = 63702980U;
	int16_t x12 = INT16_MIN;
	uint32_t t2 = 66U;

	t2 = (((x9<=x10)%x11)-x12);

	if (t2 != 32769U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int64_t x15 = INT64_MIN;
	static int64_t x16 = 1164LL;
	static volatile int64_t t3 = -1LL;

	t3 = (((x13<=x14)%x15)-x16);

	if (t3 != -1164LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = -1;
	static int64_t x19 = -6200896330469LL;
	int32_t x20 = INT32_MIN;
	int64_t t4 = -6065777LL;

	t4 = (((x17<=x18)%x19)-x20);

	if (t4 != 2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x22 = -1;
	volatile uint16_t x23 = UINT16_MAX;
	static int8_t x24 = -2;
	volatile int32_t t5 = -42534;

	t5 = (((x21<=x22)%x23)-x24);

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	int32_t x27 = INT32_MAX;
	volatile int32_t x28 = INT32_MAX;
	static int32_t t6 = 29;

	t6 = (((x25<=x26)%x27)-x28);

	if (t6 != -2147483646) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 1;
	uint16_t x30 = UINT16_MAX;
	int64_t x31 = 3494875LL;

	t7 = (((x29<=x30)%x31)-x32);

	if (t7 != 67LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint16_t x34 = 31U;
	uint32_t x35 = 14U;
	static uint64_t x36 = 1761018240350613LLU;
	static volatile uint64_t t8 = 45200187759LLU;

	t8 = (((x33<=x34)%x35)-x36);

	if (t8 != 18444983055469201004LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = 59;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t9 = 2488387LLU;

	t9 = (((x37<=x38)%x39)-x40);

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x41 = 2465868333676979LL;
	int16_t x42 = 0;

	t10 = (((x41<=x42)%x43)-x44);

	if (t10 != 128U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	static volatile int32_t x50 = INT32_MIN;
	uint64_t x51 = 1437LLU;
	uint64_t x52 = UINT64_MAX;
	uint64_t t11 = 6717LLU;

	t11 = (((x49<=x50)%x51)-x52);

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	int64_t x54 = INT64_MAX;
	int64_t x55 = INT64_MIN;
	static int32_t x56 = INT32_MAX;

	t12 = (((x53<=x54)%x55)-x56);

	if (t12 != -2147483646LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x59 = INT8_MIN;
	int8_t x60 = -1;
	int32_t t13 = 1145;

	t13 = (((x57<=x58)%x59)-x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 3329564673893877LLU;
	volatile int8_t x62 = INT8_MIN;
	int64_t x63 = 3578753872079LL;
	volatile uint64_t x64 = 347838870453LLU;
	volatile uint64_t t14 = 338797LLU;

	t14 = (((x61<=x62)%x63)-x64);

	if (t14 != 18446743725870681164LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x66 = 0;
	static uint32_t x67 = 15U;
	int32_t x68 = INT32_MAX;
	uint32_t t15 = 39U;

	t15 = (((x65<=x66)%x67)-x68);

	if (t15 != 2147483649U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 58556LLU;
	volatile int16_t x70 = INT16_MIN;
	int8_t x71 = -1;
	uint64_t x72 = 502LLU;
	volatile uint64_t t16 = 2749LLU;

	t16 = (((x69<=x70)%x71)-x72);

	if (t16 != 18446744073709551114LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 30251521010LLU;
	uint16_t x74 = 99U;
	uint16_t x76 = 1U;

	t17 = (((x73<=x74)%x75)-x76);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 804;
	uint32_t x78 = 566U;
	volatile uint64_t x79 = 227862800247LLU;
	int8_t x80 = INT8_MAX;
	uint64_t t18 = 109LLU;

	t18 = (((x77<=x78)%x79)-x80);

	if (t18 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = UINT16_MAX;
	int32_t x83 = INT32_MIN;
	static uint8_t x84 = 0U;
	static volatile int32_t t19 = 19410491;

	t19 = (((x81<=x82)%x83)-x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = INT8_MIN;
	uint64_t x86 = 50734561825394238LLU;
	uint8_t x87 = 4U;
	static int16_t x88 = INT16_MIN;

	t20 = (((x85<=x86)%x87)-x88);

	if (t20 != 32768) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = INT64_MIN;
	uint64_t x91 = 21568LLU;
	static volatile uint64_t t21 = 1895099449494440LLU;

	t21 = (((x89<=x90)%x91)-x92);

	if (t21 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	uint64_t x94 = UINT64_MAX;
	uint64_t x95 = UINT64_MAX;
	static int16_t x96 = -1;
	static uint64_t t22 = 0LLU;

	t22 = (((x93<=x94)%x95)-x96);

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = 1319918U;
	static int32_t x98 = -1;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t23 = 267967602;

	t23 = (((x97<=x98)%x99)-x100);

	if (t23 != -65535) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MAX;
	volatile int32_t x103 = -17;
	static uint8_t x104 = 2U;
	static int32_t t24 = 15;

	t24 = (((x101<=x102)%x103)-x104);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x106 = INT64_MIN;
	uint16_t x107 = 7603U;
	volatile int8_t x108 = INT8_MIN;
	static volatile int32_t t25 = -32696058;

	t25 = (((x105<=x106)%x107)-x108);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x110 = -78481902LL;
	int16_t x112 = INT16_MAX;

	t26 = (((x109<=x110)%x111)-x112);

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x114 = -165902;
	int32_t x115 = INT32_MAX;
	static uint32_t x116 = UINT32_MAX;
	volatile uint32_t t27 = 2903U;

	t27 = (((x113<=x114)%x115)-x116);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x119 = 242548LLU;
	int16_t x120 = 82;
	volatile uint64_t t28 = 1LLU;

	t28 = (((x117<=x118)%x119)-x120);

	if (t28 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -1;
	static int32_t x122 = -51;
	static uint32_t x124 = UINT32_MAX;

	t29 = (((x121<=x122)%x123)-x124);

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = 10791U;
	uint32_t x126 = 56U;
	uint32_t x127 = 446U;
	int64_t x128 = -1LL;
	int64_t t30 = 87243271912434511LL;

	t30 = (((x125<=x126)%x127)-x128);

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x129 = 0;
	int64_t x130 = -4645396476LL;
	uint16_t x132 = 219U;
	volatile int32_t t31 = 61;

	t31 = (((x129<=x130)%x131)-x132);

	if (t31 != -219) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = INT32_MAX;
	uint32_t x135 = UINT32_MAX;
	uint16_t x136 = 115U;
	volatile uint32_t t32 = 21000U;

	t32 = (((x133<=x134)%x135)-x136);

	if (t32 != 4294967182U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 1U;
	int32_t x138 = INT32_MAX;
	volatile int32_t x139 = -1620;
	int16_t x140 = INT16_MAX;
	volatile int32_t t33 = 1289;

	t33 = (((x137<=x138)%x139)-x140);

	if (t33 != -32766) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = 4U;
	int16_t x146 = INT16_MAX;
	uint64_t x147 = UINT64_MAX;
	volatile uint64_t t34 = 84147404930877764LLU;

	t34 = (((x145<=x146)%x147)-x148);

	if (t34 != 32769LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MIN;
	int8_t x151 = 3;
	volatile int32_t t35 = 4608;

	t35 = (((x149<=x150)%x151)-x152);

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 8137U;
	static volatile int32_t x155 = -530937143;
	volatile int8_t x156 = INT8_MAX;
	int32_t t36 = -21399323;

	t36 = (((x153<=x154)%x155)-x156);

	if (t36 != -127) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = 1U;
	volatile int8_t x159 = INT8_MIN;
	uint64_t x160 = 420709941058259LLU;
	volatile uint64_t t37 = 160655804LLU;

	t37 = (((x157<=x158)%x159)-x160);

	if (t37 != 18446323363768493358LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = INT64_MAX;
	int8_t x162 = -27;
	static uint16_t x163 = 21U;
	uint16_t x164 = UINT16_MAX;

	t38 = (((x161<=x162)%x163)-x164);

	if (t38 != -65535) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	int8_t x166 = -23;
	volatile int32_t x167 = INT32_MIN;
	int64_t x168 = -686721181038LL;

	t39 = (((x165<=x166)%x167)-x168);

	if (t39 != 686721181039LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = 4091;
	int64_t x170 = -2489LL;
	uint8_t x171 = 127U;
	static uint32_t x172 = UINT32_MAX;
	static volatile uint32_t t40 = 1U;

	t40 = (((x169<=x170)%x171)-x172);

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x173 = UINT32_MAX;
	int32_t x174 = -1;
	int32_t x175 = 5831567;
	static volatile int32_t t41 = -128950160;

	t41 = (((x173<=x174)%x175)-x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MAX;
	static int16_t x178 = -13;
	int32_t x179 = -1;
	int16_t x180 = 1;

	t42 = (((x177<=x178)%x179)-x180);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = -383;
	volatile int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MIN;
	volatile int16_t x184 = 1;
	int64_t t43 = 5806LL;

	t43 = (((x181<=x182)%x183)-x184);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = INT64_MIN;
	int16_t x186 = -11954;
	int8_t x187 = INT8_MAX;
	uint32_t x188 = 466U;
	volatile uint32_t t44 = 931U;

	t44 = (((x185<=x186)%x187)-x188);

	if (t44 != 4294966831U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MIN;
	int32_t x190 = INT32_MIN;
	uint64_t x191 = 9LLU;
	volatile uint64_t x192 = 123724109LLU;

	t45 = (((x189<=x190)%x191)-x192);

	if (t45 != 18446744073585827508LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MAX;
	int32_t x194 = -1;
	int16_t x195 = -1;
	int8_t x196 = INT8_MIN;
	volatile int32_t t46 = -8122455;

	t46 = (((x193<=x194)%x195)-x196);

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = -1LL;
	static volatile int32_t x198 = INT32_MIN;
	int8_t x199 = INT8_MIN;
	volatile uint8_t x200 = 7U;
	static int32_t t47 = -5;

	t47 = (((x197<=x198)%x199)-x200);

	if (t47 != -7) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = 4U;
	volatile int32_t x203 = INT32_MAX;
	int32_t t48 = 23044;

	t48 = (((x201<=x202)%x203)-x204);

	if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x206 = INT32_MIN;
	int8_t x207 = -1;
	volatile uint8_t x208 = 1U;
	int32_t t49 = 75386011;

	t49 = (((x205<=x206)%x207)-x208);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = 53648930U;
	volatile int8_t x210 = 0;
	int64_t x211 = -67537060LL;
	static volatile int64_t x212 = 2603933698LL;

	t50 = (((x209<=x210)%x211)-x212);

	if (t50 != -2603933698LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x213 = INT64_MAX;
	int64_t x214 = INT64_MIN;
	static int16_t x215 = 15664;
	volatile uint8_t x216 = 22U;

	t51 = (((x213<=x214)%x215)-x216);

	if (t51 != -22) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = 4983959439LL;
	static int32_t x223 = -1;
	static uint16_t x224 = 1U;
	int32_t t52 = 148754;

	t52 = (((x221<=x222)%x223)-x224);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MAX;
	uint64_t x226 = 2855891753849759417LLU;
	uint16_t x227 = 1664U;
	static uint8_t x228 = 0U;
	volatile int32_t t53 = -25438;

	t53 = (((x225<=x226)%x227)-x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	uint64_t x230 = 17026424275LLU;
	int16_t x232 = 1182;
	static int32_t t54 = 45904246;

	t54 = (((x229<=x230)%x231)-x232);

	if (t54 != -1182) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = INT16_MIN;
	int8_t x234 = -1;
	int32_t t55 = -26;

	t55 = (((x233<=x234)%x235)-x236);

	if (t55 != 32769) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x237 = INT8_MIN;
	int64_t x238 = INT64_MIN;
	int16_t x239 = INT16_MIN;
	uint64_t x240 = 447552475984LLU;
	static volatile uint64_t t56 = 2123739808234759758LLU;

	t56 = (((x237<=x238)%x239)-x240);

	if (t56 != 18446743626157075632LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = UINT16_MAX;
	static int8_t x242 = -2;
	int64_t x243 = -1775LL;
	int64_t x244 = -1LL;
	volatile int64_t t57 = -5950150172LL;

	t57 = (((x241<=x242)%x243)-x244);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x245 = -4133482;
	int64_t x246 = INT64_MIN;
	int64_t x248 = 3973LL;
	int64_t t58 = -4250653958195273LL;

	t58 = (((x245<=x246)%x247)-x248);

	if (t58 != -3973LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x249 = 1158036619982324LLU;
	uint32_t x250 = 100624068U;
	volatile uint64_t x252 = 4LLU;
	static uint64_t t59 = 28378LLU;

	t59 = (((x249<=x250)%x251)-x252);

	if (t59 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = INT64_MAX;
	static int16_t x254 = 11365;
	volatile uint32_t x255 = UINT32_MAX;
	uint64_t t60 = 8305821055649LLU;

	t60 = (((x253<=x254)%x255)-x256);

	if (t60 != 18446744073709521478LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x257 = 89LLU;
	int32_t x258 = INT32_MIN;
	uint64_t x259 = UINT64_MAX;
	int64_t x260 = -4442314917520328LL;

	t61 = (((x257<=x258)%x259)-x260);

	if (t61 != 4442314917520329LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = 28;
	uint16_t x262 = UINT16_MAX;
	uint8_t x263 = UINT8_MAX;
	volatile uint64_t x264 = 431431045080LLU;
	uint64_t t62 = 84037084777827LLU;

	t62 = (((x261<=x262)%x263)-x264);

	if (t62 != 18446743642278506537LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = 64U;
	volatile int32_t x267 = -40405923;
	uint32_t x268 = 2U;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (((x265<=x266)%x267)-x268);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x270 = 462502490458292990LL;
	uint8_t x271 = 3U;
	volatile int8_t x272 = -1;

	t64 = (((x269<=x270)%x271)-x272);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = 24108LL;
	volatile uint32_t x274 = 11331U;
	uint16_t x275 = UINT16_MAX;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t65 = 5007046LLU;

	t65 = (((x273<=x274)%x275)-x276);

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x277 = INT16_MAX;
	static int64_t x278 = INT64_MIN;
	uint64_t x279 = UINT64_MAX;
	int32_t x280 = 32881349;
	uint64_t t66 = 268760503LLU;

	t66 = (((x277<=x278)%x279)-x280);

	if (t66 != 18446744073676670267LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = -1;
	int8_t x282 = 18;
	int8_t x284 = INT8_MIN;

	t67 = (((x281<=x282)%x283)-x284);

	if (t67 != 129) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x290 = 0;
	static volatile uint16_t x291 = UINT16_MAX;
	volatile int32_t t68 = -28013558;

	t68 = (((x289<=x290)%x291)-x292);

	if (t68 != -7119) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = INT16_MIN;
	uint16_t x294 = UINT16_MAX;
	volatile int16_t x295 = 3013;
	int32_t x296 = 1172299;
	int32_t t69 = 179391207;

	t69 = (((x293<=x294)%x295)-x296);

	if (t69 != -1172298) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x297 = -19;
	static volatile uint32_t x298 = UINT32_MAX;
	int16_t x299 = 30;
	int8_t x300 = INT8_MIN;
	int32_t t70 = -18622;

	t70 = (((x297<=x298)%x299)-x300);

	if (t70 != 129) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x301 = INT32_MIN;
	uint32_t x302 = 38935U;
	volatile uint32_t x303 = 1U;
	volatile uint64_t x304 = 7239LLU;
	volatile uint64_t t71 = 51610458544269219LLU;

	t71 = (((x301<=x302)%x303)-x304);

	if (t71 != 18446744073709544377LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x305 = INT64_MAX;
	volatile int32_t x307 = 30579;
	volatile int32_t x308 = INT32_MAX;
	static int32_t t72 = -6;

	t72 = (((x305<=x306)%x307)-x308);

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x309 = 0U;
	int16_t x310 = INT16_MIN;
	volatile int32_t t73 = 36;

	t73 = (((x309<=x310)%x311)-x312);

	if (t73 != -899) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x313 = 6242U;
	uint64_t x315 = UINT64_MAX;
	volatile int16_t x316 = 14;
	volatile uint64_t t74 = 1905LLU;

	t74 = (((x313<=x314)%x315)-x316);

	if (t74 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = INT16_MIN;
	volatile uint64_t x318 = 154537086LLU;
	static int8_t x319 = INT8_MIN;
	int32_t x320 = 86276075;
	int32_t t75 = -50890;

	t75 = (((x317<=x318)%x319)-x320);

	if (t75 != -86276075) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x322 = INT32_MIN;
	static uint8_t x323 = UINT8_MAX;
	int64_t x324 = -1LL;
	volatile int64_t t76 = 240LL;

	t76 = (((x321<=x322)%x323)-x324);

	if (t76 != 2LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MIN;
	int64_t x326 = -1LL;
	int8_t x327 = -1;

	t77 = (((x325<=x326)%x327)-x328);

	if (t77 != -54) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x329 = 14U;
	int32_t x330 = -1;

	t78 = (((x329<=x330)%x331)-x332);

	if (t78 != 32U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x333 = UINT16_MAX;
	int16_t x334 = INT16_MAX;
	volatile int16_t x335 = -1;
	int8_t x336 = -6;
	static int32_t t79 = 9;

	t79 = (((x333<=x334)%x335)-x336);

	if (t79 != 6) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MIN;
	volatile uint64_t x338 = 6LLU;
	int32_t x339 = INT32_MAX;
	int32_t x340 = 2;
	volatile int32_t t80 = 1;

	t80 = (((x337<=x338)%x339)-x340);

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x341 = 0U;
	int64_t x342 = 66LL;
	volatile int32_t x343 = -1;
	int8_t x344 = -1;
	int32_t t81 = 288995;

	t81 = (((x341<=x342)%x343)-x344);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x349 = 31U;
	volatile int64_t x351 = -159LL;
	int8_t x352 = 1;
	int64_t t82 = -32062389845156060LL;

	t82 = (((x349<=x350)%x351)-x352);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = -29;
	static uint64_t x355 = 392329210193LLU;
	static int32_t x356 = INT32_MIN;
	uint64_t t83 = 21226709338486479LLU;

	t83 = (((x353<=x354)%x355)-x356);

	if (t83 != 2147483649LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x357 = 3U;
	int32_t x358 = INT32_MIN;
	int8_t x359 = -6;
	volatile uint64_t t84 = 7504864150LLU;

	t84 = (((x357<=x358)%x359)-x360);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x363 = 14;
	int32_t x364 = -224755;

	t85 = (((x361<=x362)%x363)-x364);

	if (t85 != 224756) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = INT32_MIN;
	uint32_t x366 = 2017859U;
	int32_t x368 = INT32_MIN;
	static uint32_t t86 = 6030U;

	t86 = (((x365<=x366)%x367)-x368);

	if (t86 != 2147483648U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x369 = 0U;
	int8_t x370 = -1;
	int8_t x371 = INT8_MIN;
	int64_t x372 = -8346210660270419LL;
	static int64_t t87 = -1982987421955LL;

	t87 = (((x369<=x370)%x371)-x372);

	if (t87 != 8346210660270419LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x377 = INT32_MAX;
	volatile int16_t x379 = INT16_MIN;
	volatile int64_t x380 = -6847454LL;
	volatile int64_t t88 = -13049553LL;

	t88 = (((x377<=x378)%x379)-x380);

	if (t88 != 6847454LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = 172U;
	volatile int16_t x382 = -1;
	volatile uint32_t x384 = 108U;
	volatile uint32_t t89 = 21856819U;

	t89 = (((x381<=x382)%x383)-x384);

	if (t89 != 4294967189U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x386 = 106287072LL;
	uint8_t x387 = UINT8_MAX;
	int8_t x388 = INT8_MIN;
	volatile int32_t t90 = -2009;

	t90 = (((x385<=x386)%x387)-x388);

	if (t90 != 129) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x390 = 6215632225890LL;
	static uint16_t x392 = UINT16_MAX;
	volatile int32_t t91 = -118710;

	t91 = (((x389<=x390)%x391)-x392);

	if (t91 != -65535) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x394 = INT64_MIN;
	int8_t x396 = -1;

	t92 = (((x393<=x394)%x395)-x396);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x401 = UINT8_MAX;
	volatile int8_t x402 = -1;
	volatile int32_t x404 = -1;
	int32_t t93 = -221373;

	t93 = (((x401<=x402)%x403)-x404);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = INT8_MIN;
	int32_t x406 = INT32_MIN;
	volatile int64_t x408 = -1LL;
	int64_t t94 = -7108446729399LL;

	t94 = (((x405<=x406)%x407)-x408);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x410 = INT64_MIN;
	static uint16_t x411 = UINT16_MAX;
	static volatile int32_t t95 = 3237553;

	t95 = (((x409<=x410)%x411)-x412);

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x414 = INT64_MAX;
	int64_t x415 = INT64_MIN;
	int16_t x416 = 4;
	volatile int64_t t96 = 492LL;

	t96 = (((x413<=x414)%x415)-x416);

	if (t96 != -3LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x417 = INT32_MIN;
	uint16_t x418 = 86U;
	volatile int32_t t97 = 1815751;

	t97 = (((x417<=x418)%x419)-x420);

	if (t97 != -7) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x421 = 30777U;
	int32_t x422 = -3;
	volatile uint64_t x424 = 2088317LLU;
	uint64_t t98 = 13488228888LLU;

	t98 = (((x421<=x422)%x423)-x424);

	if (t98 != 18446744073707463300LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = 12745;
	int16_t x427 = 1611;
	static int32_t x428 = 30896;
	int32_t t99 = -1010;

	t99 = (((x425<=x426)%x427)-x428);

	if (t99 != -30896) { NG(); } else { ; }
	
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


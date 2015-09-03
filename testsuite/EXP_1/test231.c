#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 0;
static int32_t t1 = -185877375;
static int32_t x18 = INT32_MIN;
int8_t x19 = -25;
uint32_t x23 = UINT32_MAX;
int64_t x32 = 8230132937870LL;
int32_t x43 = -186746059;
int64_t x54 = 10291339830LL;
static int16_t x59 = INT16_MIN;
static uint32_t x70 = UINT32_MAX;
int32_t x77 = 103470594;
int64_t x81 = INT64_MAX;
int8_t x87 = INT8_MAX;
volatile int8_t x90 = INT8_MIN;
int32_t x92 = 1;
int64_t x93 = -336372LL;
int32_t t20 = 43665601;
volatile int64_t x99 = -1LL;
int8_t x103 = INT8_MIN;
volatile int64_t x115 = INT64_MAX;
volatile int32_t t27 = -1770;
int64_t x137 = 3322096028502866876LL;
volatile int32_t t30 = 227956437;
int8_t x146 = INT8_MAX;
static uint32_t x148 = 515996U;
uint32_t x150 = 112224907U;
static int16_t x152 = -559;
int32_t t33 = 0;
int64_t x154 = INT64_MAX;
uint64_t x157 = UINT64_MAX;
uint16_t x165 = 1859U;
int8_t x166 = INT8_MIN;
int16_t x170 = 1;
int32_t t38 = -1922;
volatile uint64_t x182 = UINT64_MAX;
int16_t x183 = 1;
int32_t t41 = -2211;
int16_t x197 = INT16_MIN;
uint32_t x199 = 1378190378U;
volatile int64_t x200 = 126019LL;
int32_t t43 = 1148086;
static int32_t t44 = -7433966;
volatile uint8_t x213 = UINT8_MAX;
static volatile int32_t t48 = -184573;
uint16_t x231 = 22721U;
int32_t x234 = 16256;
static volatile int32_t t50 = -55605162;
uint64_t x239 = 595134802LLU;
int8_t x241 = INT8_MAX;
volatile int32_t t55 = -27532971;
int16_t x272 = INT16_MAX;
int64_t x273 = INT64_MIN;
uint64_t x274 = UINT64_MAX;
int32_t t60 = 1;
int32_t x284 = -1;
int32_t t64 = -321767868;
volatile uint64_t x298 = UINT64_MAX;
uint16_t x299 = UINT16_MAX;
volatile int64_t x300 = INT64_MAX;
int16_t x314 = -1;
int32_t x315 = INT32_MAX;
int8_t x321 = 6;
int32_t t71 = 717202;
int32_t x327 = INT32_MIN;
volatile int16_t x329 = 6;
int16_t x332 = 14361;
int32_t t75 = 61008540;
int32_t x345 = -1;
uint32_t x360 = 477U;
static volatile int32_t x368 = -512632;
uint32_t x375 = 18U;
volatile int32_t x379 = INT32_MIN;
static int16_t x380 = -1;
int8_t x382 = INT8_MIN;
volatile int8_t x383 = -6;
uint16_t x388 = 1U;
volatile int32_t x392 = INT32_MIN;
int32_t t87 = 94;
static int32_t x399 = INT32_MIN;
static int32_t t89 = -53157;
int8_t x402 = -1;
static uint32_t x408 = UINT32_MAX;
volatile int32_t t92 = 1062;
uint64_t x413 = 89LLU;
static int8_t x416 = INT8_MAX;
int64_t x420 = INT64_MIN;
uint16_t x423 = 4900U;
static uint16_t x424 = UINT16_MAX;
int32_t t95 = 19;
int8_t x426 = -2;
int64_t x428 = -16150632978LL;
int32_t x430 = 2144;
int64_t x432 = INT64_MAX;
int32_t t97 = -20;
volatile int16_t x439 = 3;


void f0(void) {
	uint32_t x1 = 81U;
	uint8_t x2 = 56U;
	int32_t x3 = -130652579;
	volatile uint32_t x4 = 7547U;

	t0 = (((x1-x2)%x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 75621375;
	uint8_t x6 = UINT8_MAX;
	static int16_t x7 = -1;
	int64_t x8 = -1LL;

	t1 = (((x5-x6)%x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -19LL;
	volatile int32_t x10 = -1;
	int8_t x11 = -1;
	volatile int16_t x12 = INT16_MAX;
	volatile int32_t t2 = -5650;

	t2 = (((x9-x10)%x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 16184109302204040LLU;
	int16_t x20 = INT16_MIN;
	int32_t t3 = -760;

	t3 = (((x17-x18)%x19)<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	static int64_t x22 = INT64_MIN;
	uint16_t x24 = 787U;
	static volatile int32_t t4 = 433;

	t4 = (((x21-x22)%x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x25 = -2011490459207293631LL;
	int16_t x26 = 20;
	int8_t x27 = INT8_MIN;
	int64_t x28 = INT64_MIN;
	static int32_t t5 = 482227;

	t5 = (((x25-x26)%x27)<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x29 = 12U;
	int8_t x30 = -1;
	uint16_t x31 = 764U;
	static int32_t t6 = -9;

	t6 = (((x29-x30)%x31)<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MAX;
	volatile int64_t x34 = -28382258026594LL;
	volatile uint64_t x35 = 93648LLU;
	int8_t x36 = -1;
	static volatile int32_t t7 = 152407;

	t7 = (((x33-x34)%x35)<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int32_t x38 = -1;
	volatile int8_t x39 = -16;
	static uint32_t x40 = 51U;
	volatile int32_t t8 = 315935;

	t8 = (((x37-x38)%x39)<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	static int32_t x42 = INT32_MAX;
	int16_t x44 = -1;
	static int32_t t9 = -1920;

	t9 = (((x41-x42)%x43)<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -1LL;
	uint64_t x50 = UINT64_MAX;
	volatile int8_t x51 = -1;
	static uint64_t x52 = UINT64_MAX;
	volatile int32_t t10 = 1;

	t10 = (((x49-x50)%x51)<=x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x53 = 479U;
	int64_t x55 = INT64_MAX;
	uint64_t x56 = 133723265734330014LLU;
	volatile int32_t t11 = 123;

	t11 = (((x53-x54)%x55)<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	volatile int32_t x58 = INT32_MIN;
	int32_t x60 = -1;
	static volatile int32_t t12 = 481;

	t12 = (((x57-x58)%x59)<=x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	static volatile int32_t x62 = INT32_MAX;
	int64_t x63 = INT64_MAX;
	int8_t x64 = -47;
	static volatile int32_t t13 = 100;

	t13 = (((x61-x62)%x63)<=x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -1;
	volatile int32_t x66 = -1;
	int32_t x67 = -1;
	uint32_t x68 = 422865U;
	volatile int32_t t14 = -3627;

	t14 = (((x65-x66)%x67)<=x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = 6208LLU;
	static int32_t t15 = -3;

	t15 = (((x69-x70)%x71)<=x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x78 = 40U;
	uint8_t x79 = 6U;
	volatile int64_t x80 = 3473551086680LL;
	volatile int32_t t16 = 232;

	t16 = (((x77-x78)%x79)<=x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x82 = INT16_MAX;
	uint16_t x83 = 286U;
	int64_t x84 = 119LL;
	volatile int32_t t17 = -73369;

	t17 = (((x81-x82)%x83)<=x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	volatile uint8_t x86 = UINT8_MAX;
	int32_t x88 = -1;
	static int32_t t18 = 58332659;

	t18 = (((x85-x86)%x87)<=x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = -1;
	static int16_t x91 = INT16_MAX;
	static volatile int32_t t19 = -47198;

	t19 = (((x89-x90)%x91)<=x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x94 = 1;
	uint8_t x95 = UINT8_MAX;
	int16_t x96 = -1;

	t20 = (((x93-x94)%x95)<=x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = UINT64_MAX;
	int8_t x98 = INT8_MAX;
	int32_t x100 = -1;
	volatile int32_t t21 = -847243897;

	t21 = (((x97-x98)%x99)<=x100);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = 14824941860LL;
	int16_t x102 = -1719;
	int16_t x104 = INT16_MIN;
	volatile int32_t t22 = 1267198;

	t22 = (((x101-x102)%x103)<=x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -1;
	int16_t x106 = -1;
	int32_t x107 = -67;
	int16_t x108 = -1715;
	int32_t t23 = 3;

	t23 = (((x105-x106)%x107)<=x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = 3291;
	int16_t x110 = INT16_MAX;
	int8_t x111 = INT8_MIN;
	static uint8_t x112 = 21U;
	int32_t t24 = -61332141;

	t24 = (((x109-x110)%x111)<=x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = -1;
	int8_t x114 = 1;
	int8_t x116 = -1;
	int32_t t25 = -1683394;

	t25 = (((x113-x114)%x115)<=x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = 3;
	int16_t x118 = 1;
	static int32_t x119 = INT32_MIN;
	uint16_t x120 = 2U;
	volatile int32_t t26 = 29;

	t26 = (((x117-x118)%x119)<=x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = -7;
	uint32_t x122 = UINT32_MAX;
	static int16_t x123 = 1784;
	uint16_t x124 = 8674U;

	t27 = (((x121-x122)%x123)<=x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = 0;
	int8_t x130 = INT8_MIN;
	volatile int16_t x131 = INT16_MIN;
	static int8_t x132 = INT8_MIN;
	volatile int32_t t28 = -54245498;

	t28 = (((x129-x130)%x131)<=x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = UINT8_MAX;
	volatile int8_t x134 = -1;
	int64_t x135 = 252LL;
	volatile int8_t x136 = INT8_MIN;
	static int32_t t29 = 52;

	t29 = (((x133-x134)%x135)<=x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x138 = -592308055244482584LL;
	static int8_t x139 = INT8_MAX;
	static uint16_t x140 = 6608U;

	t30 = (((x137-x138)%x139)<=x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = INT16_MAX;
	uint32_t x142 = UINT32_MAX;
	int8_t x143 = -1;
	volatile int8_t x144 = 4;
	int32_t t31 = 27918;

	t31 = (((x141-x142)%x143)<=x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = UINT16_MAX;
	uint64_t x147 = 74865LLU;
	volatile int32_t t32 = -3589395;

	t32 = (((x145-x146)%x147)<=x148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x149 = 106LLU;
	int64_t x151 = INT64_MAX;

	t33 = (((x149-x150)%x151)<=x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x153 = 6U;
	int8_t x155 = -1;
	volatile uint32_t x156 = UINT32_MAX;
	volatile int32_t t34 = -15164;

	t34 = (((x153-x154)%x155)<=x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x158 = 0U;
	int16_t x159 = -527;
	int16_t x160 = -1;
	static volatile int32_t t35 = 39167;

	t35 = (((x157-x158)%x159)<=x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = INT16_MIN;
	static int32_t x162 = INT32_MIN;
	int32_t x163 = INT32_MIN;
	uint32_t x164 = 3U;
	volatile int32_t t36 = -67279668;

	t36 = (((x161-x162)%x163)<=x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x167 = 1958322428U;
	uint8_t x168 = 3U;
	volatile int32_t t37 = 11;

	t37 = (((x165-x166)%x167)<=x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -1;
	int64_t x171 = -1508090591LL;
	uint32_t x172 = 243332194U;

	t38 = (((x169-x170)%x171)<=x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x173 = UINT16_MAX;
	uint8_t x174 = UINT8_MAX;
	static uint64_t x175 = 2032104LLU;
	int32_t x176 = INT32_MAX;
	volatile int32_t t39 = -20083;

	t39 = (((x173-x174)%x175)<=x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = -5;
	int32_t x184 = INT32_MAX;
	volatile int32_t t40 = 2465;

	t40 = (((x181-x182)%x183)<=x184);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x185 = 4U;
	int64_t x186 = -3876LL;
	int32_t x187 = INT32_MIN;
	int16_t x188 = -1;

	t41 = (((x185-x186)%x187)<=x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = INT32_MIN;
	static int16_t x194 = -1;
	static uint64_t x195 = 1958084LLU;
	uint64_t x196 = 33693034357165LLU;
	volatile int32_t t42 = 296465;

	t42 = (((x193-x194)%x195)<=x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x198 = INT64_MIN;

	t43 = (((x197-x198)%x199)<=x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = INT16_MAX;
	int16_t x202 = -6;
	uint64_t x203 = 17078554572LLU;
	int8_t x204 = -11;

	t44 = (((x201-x202)%x203)<=x204);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = INT16_MAX;
	static uint32_t x206 = UINT32_MAX;
	static int8_t x207 = -1;
	int16_t x208 = -1;
	int32_t t45 = 160242808;

	t45 = (((x205-x206)%x207)<=x208);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x209 = 37U;
	uint64_t x210 = UINT64_MAX;
	int8_t x211 = INT8_MIN;
	int64_t x212 = INT64_MIN;
	int32_t t46 = -127556567;

	t46 = (((x209-x210)%x211)<=x212);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x214 = UINT16_MAX;
	volatile uint32_t x215 = 2025306546U;
	static int16_t x216 = INT16_MAX;
	int32_t t47 = -20807672;

	t47 = (((x213-x214)%x215)<=x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x225 = -1LL;
	int32_t x226 = INT32_MAX;
	static uint8_t x227 = 2U;
	int8_t x228 = 31;

	t48 = (((x225-x226)%x227)<=x228);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = -1;
	int64_t x230 = INT64_MIN;
	static uint64_t x232 = UINT64_MAX;
	int32_t t49 = 13;

	t49 = (((x229-x230)%x231)<=x232);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x233 = 684008517LLU;
	uint8_t x235 = 15U;
	uint8_t x236 = 127U;

	t50 = (((x233-x234)%x235)<=x236);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x237 = -40;
	int16_t x238 = 39;
	volatile int8_t x240 = -59;
	volatile int32_t t51 = 150736481;

	t51 = (((x237-x238)%x239)<=x240);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x242 = -1;
	uint16_t x243 = 417U;
	uint16_t x244 = 1U;
	int32_t t52 = -19087944;

	t52 = (((x241-x242)%x243)<=x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x245 = UINT16_MAX;
	int16_t x246 = INT16_MAX;
	volatile int32_t x247 = INT32_MIN;
	int32_t x248 = INT32_MIN;
	static int32_t t53 = -23843428;

	t53 = (((x245-x246)%x247)<=x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x249 = UINT32_MAX;
	static int32_t x250 = 9;
	static uint8_t x251 = 1U;
	uint32_t x252 = 0U;
	int32_t t54 = 44936555;

	t54 = (((x249-x250)%x251)<=x252);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = INT32_MIN;
	static int16_t x254 = INT16_MIN;
	int8_t x255 = INT8_MIN;
	int8_t x256 = INT8_MIN;

	t55 = (((x253-x254)%x255)<=x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x261 = 11U;
	static uint16_t x262 = 16686U;
	static int32_t x263 = INT32_MIN;
	uint8_t x264 = 1U;
	int32_t t56 = -1;

	t56 = (((x261-x262)%x263)<=x264);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x265 = INT32_MAX;
	uint16_t x266 = UINT16_MAX;
	uint32_t x267 = UINT32_MAX;
	int64_t x268 = INT64_MIN;
	int32_t t57 = -78144949;

	t57 = (((x265-x266)%x267)<=x268);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x269 = 44419U;
	int64_t x270 = 2LL;
	volatile int64_t x271 = INT64_MIN;
	int32_t t58 = -11930;

	t58 = (((x269-x270)%x271)<=x272);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x275 = 10LLU;
	int64_t x276 = 3LL;
	static volatile int32_t t59 = 103666911;

	t59 = (((x273-x274)%x275)<=x276);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x277 = 6751LL;
	volatile int32_t x278 = 2;
	uint32_t x279 = 1606882U;
	int32_t x280 = INT32_MIN;

	t60 = (((x277-x278)%x279)<=x280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x281 = -1;
	int16_t x282 = -1;
	int64_t x283 = INT64_MIN;
	volatile int32_t t61 = -35;

	t61 = (((x281-x282)%x283)<=x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = -14;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = INT32_MIN;
	uint8_t x288 = 28U;
	int32_t t62 = -9;

	t62 = (((x285-x286)%x287)<=x288);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x289 = 10733042LLU;
	static volatile int64_t x290 = INT64_MIN;
	static uint16_t x291 = 4U;
	uint64_t x292 = UINT64_MAX;
	int32_t t63 = -78774;

	t63 = (((x289-x290)%x291)<=x292);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x293 = INT64_MIN;
	int32_t x294 = INT32_MIN;
	static int64_t x295 = 264484333644708LL;
	static volatile int16_t x296 = -1;

	t64 = (((x293-x294)%x295)<=x296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x297 = INT32_MIN;
	volatile int32_t t65 = 797;

	t65 = (((x297-x298)%x299)<=x300);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x301 = UINT64_MAX;
	volatile int32_t x302 = -1;
	volatile int8_t x303 = INT8_MAX;
	volatile int16_t x304 = -1;
	static int32_t t66 = 909193231;

	t66 = (((x301-x302)%x303)<=x304);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int32_t x306 = -1;
	int64_t x307 = -1LL;
	static int32_t x308 = -592581;
	volatile int32_t t67 = 78;

	t67 = (((x305-x306)%x307)<=x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x309 = 65926420512035450LLU;
	int8_t x310 = INT8_MAX;
	int8_t x311 = INT8_MIN;
	static int64_t x312 = INT64_MIN;
	static volatile int32_t t68 = 9700;

	t68 = (((x309-x310)%x311)<=x312);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x313 = 1U;
	uint32_t x316 = 11087U;
	volatile int32_t t69 = 4078237;

	t69 = (((x313-x314)%x315)<=x316);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x317 = UINT8_MAX;
	int8_t x318 = -9;
	static uint8_t x319 = UINT8_MAX;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t70 = 2597;

	t70 = (((x317-x318)%x319)<=x320);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x322 = -1;
	int64_t x323 = -60LL;
	volatile uint32_t x324 = 58934U;

	t71 = (((x321-x322)%x323)<=x324);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x325 = -7732368904818872LL;
	int64_t x326 = -32771495084439217LL;
	volatile int32_t x328 = INT32_MIN;
	volatile int32_t t72 = 6504569;

	t72 = (((x325-x326)%x327)<=x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x330 = 1;
	volatile int8_t x331 = 2;
	int32_t t73 = -1;

	t73 = (((x329-x330)%x331)<=x332);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x333 = 12;
	volatile int64_t x334 = -32LL;
	volatile uint8_t x335 = 1U;
	volatile uint64_t x336 = UINT64_MAX;
	int32_t t74 = -885489;

	t74 = (((x333-x334)%x335)<=x336);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x337 = INT8_MIN;
	static volatile int64_t x338 = -1LL;
	int64_t x339 = INT64_MIN;
	static int8_t x340 = 5;

	t75 = (((x337-x338)%x339)<=x340);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x341 = UINT16_MAX;
	uint64_t x342 = UINT64_MAX;
	int8_t x343 = 1;
	uint16_t x344 = 15975U;
	volatile int32_t t76 = 1;

	t76 = (((x341-x342)%x343)<=x344);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x346 = -1;
	static int64_t x347 = INT64_MIN;
	volatile int16_t x348 = INT16_MAX;
	static int32_t t77 = -102704;

	t77 = (((x345-x346)%x347)<=x348);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x353 = 250LLU;
	int16_t x354 = 5830;
	int16_t x355 = -123;
	int16_t x356 = -1;
	static int32_t t78 = 5154236;

	t78 = (((x353-x354)%x355)<=x356);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = -1;
	int16_t x358 = 1893;
	volatile int32_t x359 = INT32_MAX;
	static int32_t t79 = -1474249;

	t79 = (((x357-x358)%x359)<=x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x361 = 3U;
	static uint64_t x362 = UINT64_MAX;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MIN;
	int32_t t80 = -40729;

	t80 = (((x361-x362)%x363)<=x364);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x365 = 2267U;
	int8_t x366 = INT8_MIN;
	volatile int16_t x367 = -42;
	int32_t t81 = -864144633;

	t81 = (((x365-x366)%x367)<=x368);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x369 = -1;
	static volatile int64_t x370 = INT64_MIN;
	volatile int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MIN;
	int32_t t82 = -171909409;

	t82 = (((x369-x370)%x371)<=x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = 61669308365329622LL;
	volatile int32_t x374 = -1;
	uint64_t x376 = UINT64_MAX;
	int32_t t83 = -12850;

	t83 = (((x373-x374)%x375)<=x376);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x377 = 2U;
	static uint32_t x378 = UINT32_MAX;
	int32_t t84 = -2959691;

	t84 = (((x377-x378)%x379)<=x380);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x381 = 7U;
	volatile uint32_t x384 = UINT32_MAX;
	static int32_t t85 = 15472043;

	t85 = (((x381-x382)%x383)<=x384);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = 6865341;
	uint32_t x386 = 4225189U;
	uint8_t x387 = UINT8_MAX;
	int32_t t86 = 6767696;

	t86 = (((x385-x386)%x387)<=x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x389 = INT16_MIN;
	int16_t x390 = INT16_MIN;
	int64_t x391 = 11LL;

	t87 = (((x389-x390)%x391)<=x392);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x393 = 4393695166562669LLU;
	volatile uint16_t x394 = UINT16_MAX;
	int64_t x395 = INT64_MAX;
	volatile uint32_t x396 = UINT32_MAX;
	int32_t t88 = -286571184;

	t88 = (((x393-x394)%x395)<=x396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x397 = 31327U;
	volatile int64_t x398 = 3866539LL;
	volatile int64_t x400 = -1LL;

	t89 = (((x397-x398)%x399)<=x400);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x401 = 380808705LLU;
	int32_t x403 = -57085679;
	static int8_t x404 = -1;
	volatile int32_t t90 = -256876;

	t90 = (((x401-x402)%x403)<=x404);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x405 = 772U;
	int16_t x406 = INT16_MIN;
	int32_t x407 = -7739400;
	volatile int32_t t91 = -453711;

	t91 = (((x405-x406)%x407)<=x408);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = INT16_MIN;
	int64_t x410 = INT64_MIN;
	static uint16_t x411 = UINT16_MAX;
	volatile int32_t x412 = -33;

	t92 = (((x409-x410)%x411)<=x412);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x414 = INT8_MAX;
	static int64_t x415 = INT64_MAX;
	static int32_t t93 = 1;

	t93 = (((x413-x414)%x415)<=x416);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x417 = 342659U;
	volatile uint16_t x418 = UINT16_MAX;
	static int16_t x419 = -1;
	int32_t t94 = -59678;

	t94 = (((x417-x418)%x419)<=x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x421 = 33480928784845LLU;
	static int32_t x422 = INT32_MIN;

	t95 = (((x421-x422)%x423)<=x424);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x425 = -1;
	int32_t x427 = -1;
	volatile int32_t t96 = 91;

	t96 = (((x425-x426)%x427)<=x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x429 = 26796998767LLU;
	int32_t x431 = 262163212;

	t97 = (((x429-x430)%x431)<=x432);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x433 = INT64_MIN;
	int8_t x434 = -1;
	int32_t x435 = INT32_MIN;
	int32_t x436 = -1;
	int32_t t98 = -199365;

	t98 = (((x433-x434)%x435)<=x436);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x437 = -1;
	int16_t x438 = INT16_MIN;
	int8_t x440 = -29;
	volatile int32_t t99 = -5306176;

	t99 = (((x437-x438)%x439)<=x440);

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


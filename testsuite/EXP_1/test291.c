#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = 19U;
static volatile int32_t t0 = 11;
int32_t x9 = -1;
uint8_t x12 = 56U;
static uint8_t x13 = UINT8_MAX;
int16_t x15 = INT16_MIN;
int32_t t3 = 14189;
static uint64_t x26 = 4LLU;
int16_t x30 = INT16_MIN;
static volatile int32_t t6 = -876;
int64_t x40 = 4788701993000LL;
int32_t t9 = -68006046;
int8_t x55 = INT8_MIN;
int32_t t11 = -353237;
volatile uint16_t x57 = UINT16_MAX;
int32_t t14 = -2;
static volatile int16_t x70 = -14;
uint32_t x74 = 107416U;
int64_t t17 = -47LL;
uint64_t x84 = 393067805805LLU;
int32_t t20 = 190072949;
static uint64_t t21 = 423183739916LLU;
int16_t x98 = -1;
int64_t x99 = -1871877028345LL;
int16_t x101 = INT16_MIN;
int16_t x102 = -1470;
uint16_t x103 = UINT16_MAX;
volatile int32_t t23 = -427983;
int32_t t24 = 41;
int32_t x109 = 14426339;
int64_t x117 = -2808530LL;
int64_t x119 = INT64_MIN;
int32_t t27 = 1488040;
static int32_t x133 = -312234;
volatile int64_t x137 = INT64_MAX;
int64_t x144 = INT64_MAX;
int16_t x152 = INT16_MIN;
static int16_t x158 = -36;
static uint16_t x161 = UINT16_MAX;
int32_t x164 = -1;
uint8_t x172 = 3U;
volatile int32_t t38 = -24312;
uint64_t x178 = 1262LLU;
volatile int16_t x181 = 105;
volatile int64_t t41 = 7647119877LL;
static int32_t x191 = INT32_MAX;
int64_t x192 = -108114398855854448LL;
int64_t t43 = 1334LL;
static int16_t x199 = -2;
static volatile int32_t x203 = INT32_MAX;
int32_t t46 = 1;
int8_t x207 = INT8_MIN;
uint64_t x212 = UINT64_MAX;
int8_t x216 = INT8_MIN;
static int32_t x217 = -2;
static uint8_t x227 = UINT8_MAX;
int32_t t52 = -671860782;
uint32_t x231 = UINT32_MAX;
int16_t x235 = INT16_MIN;
int64_t x244 = 517793LL;
static int32_t x245 = 87;
volatile int8_t x252 = INT8_MAX;
int8_t x255 = -11;
static int32_t t58 = -6634;
static int32_t x262 = 5929069;
int8_t x268 = 24;
uint32_t x275 = 833345560U;
int32_t t68 = -3;
uint16_t x306 = UINT16_MAX;
volatile int64_t x309 = INT64_MAX;
static volatile int64_t t72 = -195LL;
static volatile int8_t x335 = INT8_MAX;
uint8_t x340 = 1U;
int32_t t75 = -4;
int8_t x357 = INT8_MAX;
static int32_t x362 = INT32_MIN;
volatile int8_t x377 = 0;
int16_t x384 = INT16_MAX;
uint16_t x398 = 2522U;
uint8_t x400 = 1U;
static int16_t x402 = INT16_MIN;
int64_t x404 = 65215357LL;
static int16_t x412 = INT16_MAX;
int64_t x415 = -13409972799553LL;
volatile uint64_t x422 = UINT64_MAX;
uint16_t x425 = 12U;
int32_t x443 = -1243;
int8_t x444 = 1;
int8_t x447 = -3;
int32_t t97 = 3;
int32_t x450 = 8440129;
int16_t x451 = INT16_MIN;
volatile int64_t t98 = 13772415847544LL;
static uint8_t x455 = 51U;


void f0(void) {
	int16_t x2 = -1;
	volatile int16_t x3 = INT16_MIN;
	int8_t x4 = 1;

	t0 = (((x1-x2)<=x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	static uint64_t x6 = UINT64_MAX;
	uint32_t x7 = 3601U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 615542;

	t1 = (((x5-x6)<=x7)%x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MIN;
	int16_t x11 = -100;
	int32_t t2 = 50;

	t2 = (((x9-x10)<=x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -1;
	volatile int16_t x16 = -901;

	t3 = (((x13-x14)<=x15)%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 104U;
	int32_t x22 = -4716;
	uint8_t x23 = 40U;
	static uint32_t x24 = 32U;
	volatile uint32_t t4 = 105U;

	t4 = (((x21-x22)<=x23)%x24);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	uint8_t x27 = 97U;
	volatile int8_t x28 = -2;
	int32_t t5 = -3150;

	t5 = (((x25-x26)<=x27)%x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x29 = INT8_MIN;
	static volatile uint8_t x31 = UINT8_MAX;
	int32_t x32 = INT32_MIN;

	t6 = (((x29-x30)<=x31)%x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x33 = UINT32_MAX;
	int64_t x34 = 1975352589LL;
	int16_t x35 = INT16_MIN;
	uint16_t x36 = UINT16_MAX;
	int32_t t7 = -9;

	t7 = (((x33-x34)<=x35)%x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = 2772804;
	uint8_t x38 = 24U;
	int32_t x39 = -65;
	static volatile int64_t t8 = 1266832311LL;

	t8 = (((x37-x38)<=x39)%x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x41 = UINT64_MAX;
	int32_t x42 = INT32_MIN;
	int64_t x43 = 7LL;
	int16_t x44 = INT16_MIN;

	t9 = (((x41-x42)<=x43)%x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = -1;
	uint64_t x46 = 118LLU;
	int32_t x47 = -1;
	int32_t x48 = INT32_MIN;
	volatile int32_t t10 = 58372585;

	t10 = (((x45-x46)<=x47)%x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x53 = UINT32_MAX;
	static uint16_t x54 = 13531U;
	int8_t x56 = INT8_MAX;

	t11 = (((x53-x54)<=x55)%x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x58 = -1;
	uint64_t x59 = 61757255847147LLU;
	static int8_t x60 = INT8_MIN;
	volatile int32_t t12 = 77062;

	t12 = (((x57-x58)<=x59)%x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	int8_t x62 = -1;
	volatile uint32_t x63 = UINT32_MAX;
	int16_t x64 = -1;
	volatile int32_t t13 = -45;

	t13 = (((x61-x62)<=x63)%x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x65 = -1;
	static int8_t x66 = INT8_MIN;
	volatile int8_t x67 = -1;
	uint16_t x68 = UINT16_MAX;

	t14 = (((x65-x66)<=x67)%x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -1;
	uint64_t x71 = 115LLU;
	int32_t x72 = -33;
	static volatile int32_t t15 = -11658;

	t15 = (((x69-x70)<=x71)%x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x73 = -196LL;
	uint32_t x75 = UINT32_MAX;
	volatile uint8_t x76 = 1U;
	int32_t t16 = 765614;

	t16 = (((x73-x74)<=x75)%x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 0LLU;
	int16_t x78 = -1;
	int32_t x79 = 30097180;
	int64_t x80 = -104252319LL;

	t17 = (((x77-x78)<=x79)%x80);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -897790642287933LL;
	uint8_t x82 = 7U;
	uint32_t x83 = 1205U;
	uint64_t t18 = 18519061LLU;

	t18 = (((x81-x82)<=x83)%x84);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x85 = 109936177305LLU;
	int32_t x86 = INT32_MAX;
	int64_t x87 = 27LL;
	volatile uint16_t x88 = 1551U;
	int32_t t19 = -11;

	t19 = (((x85-x86)<=x87)%x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -1;
	volatile uint64_t x90 = UINT64_MAX;
	volatile uint8_t x91 = 3U;
	int32_t x92 = INT32_MIN;

	t20 = (((x89-x90)<=x91)%x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MAX;
	volatile int8_t x94 = INT8_MAX;
	uint64_t x95 = 30305925LLU;
	uint64_t x96 = 144299873043LLU;

	t21 = (((x93-x94)<=x95)%x96);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = 399448LL;
	int32_t x100 = INT32_MIN;
	static int32_t t22 = -1072;

	t22 = (((x97-x98)<=x99)%x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x104 = -1004;

	t23 = (((x101-x102)<=x103)%x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 4234U;
	static volatile int32_t x106 = 27354;
	uint32_t x107 = UINT32_MAX;
	int8_t x108 = -1;

	t24 = (((x105-x106)<=x107)%x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x110 = 1U;
	volatile int64_t x111 = INT64_MIN;
	int64_t x112 = -38209LL;
	int64_t t25 = -3037449357643LL;

	t25 = (((x109-x110)<=x111)%x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	int32_t x114 = -336445;
	volatile int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	int32_t t26 = -3;

	t26 = (((x113-x114)<=x115)%x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x118 = INT16_MIN;
	int8_t x120 = INT8_MAX;

	t27 = (((x117-x118)<=x119)%x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x121 = UINT64_MAX;
	int32_t x122 = 121442;
	volatile int8_t x123 = -2;
	volatile int64_t x124 = INT64_MIN;
	int64_t t28 = 1LL;

	t28 = (((x121-x122)<=x123)%x124);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x129 = -1LL;
	uint32_t x130 = 874U;
	int8_t x131 = -59;
	volatile int16_t x132 = INT16_MIN;
	volatile int32_t t29 = 269650653;

	t29 = (((x129-x130)<=x131)%x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x134 = -1LL;
	int64_t x135 = 3634887725700227LL;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t30 = 340917523;

	t30 = (((x133-x134)<=x135)%x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x138 = 20147613LL;
	int64_t x139 = -1LL;
	static uint64_t x140 = UINT64_MAX;
	volatile uint64_t t31 = 123923LLU;

	t31 = (((x137-x138)<=x139)%x140);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = 115537LL;
	static int8_t x142 = 1;
	uint8_t x143 = 11U;
	volatile int64_t t32 = 506003812903856831LL;

	t32 = (((x141-x142)<=x143)%x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = UINT32_MAX;
	int32_t x146 = INT32_MAX;
	volatile uint8_t x147 = 49U;
	volatile int32_t x148 = INT32_MIN;
	volatile int32_t t33 = 201;

	t33 = (((x145-x146)<=x147)%x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = 2U;
	static volatile uint8_t x150 = UINT8_MAX;
	static volatile int32_t x151 = 1365;
	volatile int32_t t34 = -171763260;

	t34 = (((x149-x150)<=x151)%x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x157 = 1199645LL;
	uint8_t x159 = 40U;
	int16_t x160 = -1;
	int32_t t35 = 310323;

	t35 = (((x157-x158)<=x159)%x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x162 = 3993662075642LLU;
	uint32_t x163 = 525U;
	volatile int32_t t36 = -48598967;

	t36 = (((x161-x162)<=x163)%x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x165 = -1;
	uint32_t x166 = 2497661U;
	static volatile uint8_t x167 = 2U;
	int16_t x168 = INT16_MIN;
	int32_t t37 = -87;

	t37 = (((x165-x166)<=x167)%x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = INT8_MAX;
	volatile int16_t x170 = INT16_MAX;
	int32_t x171 = 147070135;

	t38 = (((x169-x170)<=x171)%x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x173 = 2733U;
	static volatile int8_t x174 = INT8_MIN;
	int8_t x175 = -2;
	int32_t x176 = -165172;
	volatile int32_t t39 = 12;

	t39 = (((x173-x174)<=x175)%x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x177 = -1;
	int8_t x179 = INT8_MIN;
	int8_t x180 = -5;
	volatile int32_t t40 = -709;

	t40 = (((x177-x178)<=x179)%x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x182 = INT8_MIN;
	int8_t x183 = -3;
	int64_t x184 = INT64_MIN;

	t41 = (((x181-x182)<=x183)%x184);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = 1;
	uint64_t x186 = 4682555LLU;
	volatile int64_t x187 = INT64_MAX;
	int16_t x188 = INT16_MIN;
	volatile int32_t t42 = -1882;

	t42 = (((x185-x186)<=x187)%x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = -1;
	int32_t x190 = -30140;

	t43 = (((x189-x190)<=x191)%x192);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = UINT32_MAX;
	static int16_t x194 = INT16_MIN;
	static int16_t x195 = INT16_MIN;
	static int16_t x196 = INT16_MAX;
	int32_t t44 = -310499;

	t44 = (((x193-x194)<=x195)%x196);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = 439176LL;
	volatile int8_t x198 = 0;
	volatile int32_t x200 = INT32_MIN;
	int32_t t45 = 3020;

	t45 = (((x197-x198)<=x199)%x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x201 = UINT16_MAX;
	volatile int64_t x202 = INT64_MAX;
	volatile int32_t x204 = -1;

	t46 = (((x201-x202)<=x203)%x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x205 = 3U;
	int16_t x206 = INT16_MAX;
	int64_t x208 = -846580758008025334LL;
	static volatile int64_t t47 = -457350264528LL;

	t47 = (((x205-x206)<=x207)%x208);

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x209 = 68U;
	volatile int16_t x210 = INT16_MIN;
	uint32_t x211 = 197832U;
	uint64_t t48 = 4892746012417499LLU;

	t48 = (((x209-x210)<=x211)%x212);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = 34;
	int16_t x214 = INT16_MAX;
	uint64_t x215 = 6LLU;
	volatile int32_t t49 = -4;

	t49 = (((x213-x214)<=x215)%x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x218 = 5U;
	int64_t x219 = 157032154LL;
	static uint16_t x220 = UINT16_MAX;
	int32_t t50 = -4399;

	t50 = (((x217-x218)<=x219)%x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x221 = INT8_MIN;
	volatile int16_t x222 = 3;
	static int16_t x223 = INT16_MAX;
	static volatile int8_t x224 = -1;
	int32_t t51 = -7;

	t51 = (((x221-x222)<=x223)%x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = INT64_MIN;
	int8_t x226 = INT8_MIN;
	uint16_t x228 = 13955U;

	t52 = (((x225-x226)<=x227)%x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x229 = 2U;
	volatile int8_t x230 = -1;
	uint16_t x232 = 11U;
	int32_t t53 = -517589;

	t53 = (((x229-x230)<=x231)%x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x233 = 5LLU;
	volatile int32_t x234 = INT32_MAX;
	uint8_t x236 = 19U;
	int32_t t54 = -3542241;

	t54 = (((x233-x234)<=x235)%x236);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x241 = INT16_MIN;
	uint32_t x242 = 14161U;
	uint32_t x243 = 3733969U;
	volatile int64_t t55 = -3303408502280695LL;

	t55 = (((x241-x242)<=x243)%x244);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x246 = 57U;
	uint16_t x247 = 537U;
	volatile uint64_t x248 = UINT64_MAX;
	volatile uint64_t t56 = 7467201076070015LLU;

	t56 = (((x245-x246)<=x247)%x248);

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x249 = INT8_MAX;
	volatile int32_t x250 = 160768;
	int8_t x251 = INT8_MAX;
	int32_t t57 = -4;

	t57 = (((x249-x250)<=x251)%x252);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = -11177476925616LL;
	volatile int16_t x254 = INT16_MAX;
	int8_t x256 = INT8_MIN;

	t58 = (((x253-x254)<=x255)%x256);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x261 = UINT64_MAX;
	int16_t x263 = INT16_MAX;
	uint8_t x264 = 10U;
	volatile int32_t t59 = 6;

	t59 = (((x261-x262)<=x263)%x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x265 = UINT8_MAX;
	uint8_t x266 = 109U;
	volatile int64_t x267 = 60175849748596LL;
	volatile int32_t t60 = -66738;

	t60 = (((x265-x266)<=x267)%x268);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x269 = 0U;
	uint8_t x270 = 1U;
	uint64_t x271 = 28649829LLU;
	int64_t x272 = INT64_MIN;
	int64_t t61 = 413614482812LL;

	t61 = (((x269-x270)<=x271)%x272);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x273 = 2U;
	volatile int16_t x274 = -1;
	int16_t x276 = -1;
	int32_t t62 = -230983;

	t62 = (((x273-x274)<=x275)%x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = INT8_MIN;
	uint16_t x278 = UINT16_MAX;
	static volatile int8_t x279 = -49;
	static int8_t x280 = -2;
	int32_t t63 = -28705700;

	t63 = (((x277-x278)<=x279)%x280);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = INT8_MIN;
	uint16_t x282 = 23749U;
	static int8_t x283 = 1;
	int16_t x284 = INT16_MAX;
	volatile int32_t t64 = 3;

	t64 = (((x281-x282)<=x283)%x284);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x285 = INT8_MAX;
	int64_t x286 = INT64_MAX;
	static volatile uint32_t x287 = 2633U;
	static int32_t x288 = INT32_MIN;
	static int32_t t65 = -4;

	t65 = (((x285-x286)<=x287)%x288);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x289 = -19;
	int8_t x290 = INT8_MIN;
	static uint32_t x291 = 3347U;
	volatile int64_t x292 = -119337955674590510LL;
	volatile int64_t t66 = 39593677731084LL;

	t66 = (((x289-x290)<=x291)%x292);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x293 = INT16_MIN;
	uint8_t x294 = 1U;
	uint16_t x295 = UINT16_MAX;
	int64_t x296 = INT64_MAX;
	volatile int64_t t67 = 21484202782530LL;

	t67 = (((x293-x294)<=x295)%x296);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x297 = 2U;
	volatile uint16_t x298 = 17U;
	int8_t x299 = INT8_MIN;
	static int32_t x300 = INT32_MIN;

	t68 = (((x297-x298)<=x299)%x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x305 = 2550038706942017201LL;
	volatile int8_t x307 = INT8_MIN;
	int64_t x308 = -748160658588LL;
	int64_t t69 = -26416212095704137LL;

	t69 = (((x305-x306)<=x307)%x308);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x310 = 6U;
	static volatile uint8_t x311 = UINT8_MAX;
	int32_t x312 = INT32_MAX;
	int32_t t70 = 0;

	t70 = (((x309-x310)<=x311)%x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x313 = 27633U;
	uint64_t x314 = UINT64_MAX;
	volatile int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MAX;
	int32_t t71 = 41;

	t71 = (((x313-x314)<=x315)%x316);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x325 = -1;
	volatile int64_t x326 = -1LL;
	int32_t x327 = 1385347;
	int64_t x328 = -1LL;

	t72 = (((x325-x326)<=x327)%x328);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x329 = -159630519;
	volatile int8_t x330 = 24;
	int32_t x331 = INT32_MAX;
	int32_t x332 = -1;
	int32_t t73 = 189801;

	t73 = (((x329-x330)<=x331)%x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = INT16_MIN;
	static uint16_t x334 = 496U;
	volatile uint16_t x336 = 46U;
	int32_t t74 = 239151480;

	t74 = (((x333-x334)<=x335)%x336);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = 10552;
	volatile uint16_t x338 = UINT16_MAX;
	static uint8_t x339 = UINT8_MAX;

	t75 = (((x337-x338)<=x339)%x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x341 = UINT32_MAX;
	int64_t x342 = -374454449353241004LL;
	uint64_t x343 = 137540673748648LLU;
	static uint16_t x344 = 3U;
	static volatile int32_t t76 = -7;

	t76 = (((x341-x342)<=x343)%x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x349 = INT16_MAX;
	volatile uint16_t x350 = 1236U;
	int8_t x351 = -1;
	int32_t x352 = INT32_MAX;
	volatile int32_t t77 = -352012;

	t77 = (((x349-x350)<=x351)%x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x353 = 42LLU;
	uint8_t x354 = 15U;
	static uint32_t x355 = 25892U;
	uint8_t x356 = 1U;
	static volatile int32_t t78 = -547355159;

	t78 = (((x353-x354)<=x355)%x356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x358 = INT16_MIN;
	static uint32_t x359 = 32565U;
	static int32_t x360 = -1;
	int32_t t79 = -3469047;

	t79 = (((x357-x358)<=x359)%x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x361 = -40;
	static int16_t x363 = -96;
	int64_t x364 = -573927756971LL;
	static volatile int64_t t80 = 3892850756229LL;

	t80 = (((x361-x362)<=x363)%x364);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MIN;
	int16_t x371 = INT16_MIN;
	static int16_t x372 = 3856;
	volatile int32_t t81 = 173;

	t81 = (((x369-x370)<=x371)%x372);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x373 = 971116956LL;
	uint8_t x374 = 3U;
	int32_t x375 = -1;
	int32_t x376 = -1;
	int32_t t82 = -124341;

	t82 = (((x373-x374)<=x375)%x376);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x378 = UINT64_MAX;
	uint64_t x379 = 1018LLU;
	uint16_t x380 = 8U;
	int32_t t83 = -20;

	t83 = (((x377-x378)<=x379)%x380);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x381 = INT8_MIN;
	int8_t x382 = INT8_MIN;
	volatile uint16_t x383 = 451U;
	static int32_t t84 = 1;

	t84 = (((x381-x382)<=x383)%x384);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x386 = 1;
	volatile int64_t x387 = 4104924294387994LL;
	static volatile uint64_t x388 = 182200550854712LLU;
	uint64_t t85 = 631LLU;

	t85 = (((x385-x386)<=x387)%x388);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x389 = INT16_MIN;
	int16_t x390 = -1;
	int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MAX;
	static int32_t t86 = 912348201;

	t86 = (((x389-x390)<=x391)%x392);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = -810502133;
	int16_t x399 = 265;
	volatile int32_t t87 = -4;

	t87 = (((x397-x398)<=x399)%x400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x401 = 17U;
	static volatile int8_t x403 = INT8_MIN;
	int64_t t88 = -23254669LL;

	t88 = (((x401-x402)<=x403)%x404);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = 1617;
	volatile int64_t x406 = INT64_MAX;
	int32_t x407 = INT32_MAX;
	uint8_t x408 = 1U;
	int32_t t89 = -42515995;

	t89 = (((x405-x406)<=x407)%x408);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x409 = UINT8_MAX;
	static int32_t x410 = 685;
	int8_t x411 = INT8_MIN;
	static int32_t t90 = -219;

	t90 = (((x409-x410)<=x411)%x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x413 = 1U;
	static int64_t x414 = -4644445687LL;
	int16_t x416 = INT16_MIN;
	int32_t t91 = 22;

	t91 = (((x413-x414)<=x415)%x416);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x417 = 137U;
	int32_t x418 = -1;
	int64_t x419 = INT64_MIN;
	uint64_t x420 = 7465LLU;
	static volatile uint64_t t92 = 494881566681798LLU;

	t92 = (((x417-x418)<=x419)%x420);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = INT32_MIN;
	int16_t x423 = INT16_MIN;
	int8_t x424 = -3;
	volatile int32_t t93 = -12803;

	t93 = (((x421-x422)<=x423)%x424);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x426 = 84U;
	int8_t x427 = INT8_MIN;
	int32_t x428 = INT32_MIN;
	volatile int32_t t94 = -822;

	t94 = (((x425-x426)<=x427)%x428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x437 = -1;
	static int16_t x438 = INT16_MAX;
	volatile int16_t x439 = -1;
	uint8_t x440 = 10U;
	int32_t t95 = 456;

	t95 = (((x437-x438)<=x439)%x440);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x441 = INT16_MIN;
	static int16_t x442 = -7;
	volatile int32_t t96 = -3;

	t96 = (((x441-x442)<=x443)%x444);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x445 = -59103LL;
	uint8_t x446 = 13U;
	static int8_t x448 = INT8_MIN;

	t97 = (((x445-x446)<=x447)%x448);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x449 = 15968U;
	int64_t x452 = INT64_MIN;

	t98 = (((x449-x450)<=x451)%x452);

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x453 = INT64_MIN;
	int64_t x454 = INT64_MIN;
	uint16_t x456 = 3366U;
	int32_t t99 = -2610883;

	t99 = (((x453-x454)<=x455)%x456);

	if (t99 != 1) { NG(); } else { ; }
	
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


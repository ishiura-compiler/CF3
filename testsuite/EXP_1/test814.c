#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MIN;
int8_t x4 = INT8_MAX;
int8_t x8 = INT8_MIN;
volatile int32_t x17 = INT32_MIN;
uint32_t x20 = 4887U;
volatile int8_t x25 = -45;
uint8_t x26 = 6U;
int16_t x28 = 1;
volatile uint32_t x29 = 0U;
uint8_t x40 = 6U;
int64_t x41 = -8128509LL;
int32_t x55 = -1;
int32_t t14 = -5514299;
int16_t x70 = INT16_MAX;
uint32_t x71 = 107855U;
static uint16_t x76 = UINT16_MAX;
int32_t t19 = -225;
volatile uint8_t x82 = 79U;
volatile int32_t t20 = -1696298;
int16_t x86 = 1674;
uint16_t x90 = UINT16_MAX;
volatile int8_t x91 = 3;
volatile int64_t x94 = -1LL;
int8_t x96 = 4;
uint64_t x98 = UINT64_MAX;
static int8_t x109 = 1;
int16_t x113 = -1;
int32_t t28 = -67;
uint16_t x117 = 2079U;
uint64_t x118 = UINT64_MAX;
volatile int8_t x123 = INT8_MAX;
static volatile int32_t t30 = 220;
int16_t x128 = 61;
uint16_t x131 = 4U;
uint16_t x135 = 7226U;
int32_t t33 = -25897;
uint32_t x138 = 5723U;
int64_t x140 = 1471801801441LL;
int32_t t34 = -23;
int64_t x148 = -1LL;
volatile int32_t t38 = -69;
static int64_t x160 = INT64_MAX;
int32_t x164 = 6559871;
uint8_t x170 = UINT8_MAX;
uint8_t x173 = UINT8_MAX;
int32_t x175 = INT32_MIN;
int64_t x184 = INT64_MIN;
int32_t x187 = -3127;
volatile int64_t x189 = INT64_MIN;
int64_t x190 = -28LL;
static volatile int64_t x197 = -955964LL;
uint64_t x199 = UINT64_MAX;
int32_t x209 = INT32_MIN;
int16_t x220 = INT16_MIN;
int32_t x226 = INT32_MIN;
int64_t x233 = INT64_MAX;
volatile int32_t t58 = -1321323;
static int16_t x239 = -1;
int8_t x240 = INT8_MAX;
static uint8_t x242 = 5U;
static volatile int32_t t60 = -5959771;
uint64_t x247 = UINT64_MAX;
int32_t x248 = -44212787;
uint8_t x253 = 3U;
static uint32_t x254 = 102147326U;
static volatile int32_t t63 = 0;
static int64_t x257 = INT64_MIN;
uint32_t x258 = 77981U;
static int64_t x269 = -1LL;
static int16_t x272 = INT16_MAX;
uint32_t x281 = 1099681U;
volatile uint32_t x283 = 302U;
volatile int32_t t71 = -59938223;
volatile uint32_t x292 = 13647523U;
int32_t t73 = 924;
static int32_t t74 = 903;
int64_t x306 = INT64_MAX;
static int8_t x307 = INT8_MAX;
volatile int32_t t79 = 1;
uint8_t x326 = UINT8_MAX;
uint8_t x328 = UINT8_MAX;
int32_t t81 = 1;
int64_t x336 = INT64_MIN;
static volatile int32_t t84 = -56;
int32_t t85 = 65586;
uint64_t x347 = UINT64_MAX;
int8_t x362 = INT8_MIN;
uint16_t x364 = 27U;
int8_t x374 = -7;
volatile int8_t x390 = INT8_MAX;
static volatile int32_t x394 = INT32_MIN;
int32_t t99 = 12;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x3 = -1;
	volatile int32_t t0 = 6530;

	t0 = (((x1%x2)&x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -7LL;
	int32_t x6 = -1;
	int16_t x7 = -1;
	volatile int32_t t1 = 225867261;

	t1 = (((x5%x6)&x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	static int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MIN;
	uint64_t x12 = 138567814529LLU;
	int32_t t2 = 60;

	t2 = (((x9%x10)&x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -10245514133711995LL;
	uint64_t x14 = 5796054LLU;
	int16_t x15 = -1;
	int16_t x16 = INT16_MIN;
	static int32_t t3 = -8166;

	t3 = (((x13%x14)&x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -1;
	int32_t x19 = INT32_MIN;
	static int32_t t4 = 4245061;

	t4 = (((x17%x18)&x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	volatile int32_t x22 = INT32_MIN;
	volatile int8_t x23 = INT8_MIN;
	int16_t x24 = -1;
	int32_t t5 = 737455106;

	t5 = (((x21%x22)&x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x27 = -15805082;
	volatile int32_t t6 = 71742;

	t6 = (((x25%x26)&x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x30 = 1;
	uint16_t x31 = 0U;
	static int16_t x32 = 1;
	volatile int32_t t7 = 34;

	t7 = (((x29%x30)&x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = UINT64_MAX;
	static int16_t x34 = -1;
	int16_t x35 = -487;
	static uint16_t x36 = 4973U;
	volatile int32_t t8 = 144;

	t8 = (((x33%x34)&x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MAX;
	int16_t x38 = INT16_MIN;
	uint64_t x39 = 25717233605LLU;
	int32_t t9 = 1794;

	t9 = (((x37%x38)&x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MAX;
	uint32_t x43 = UINT32_MAX;
	int16_t x44 = -116;
	int32_t t10 = -1;

	t10 = (((x41%x42)&x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 3894144438373223013LL;
	int8_t x46 = -1;
	int16_t x47 = 97;
	int16_t x48 = -1;
	volatile int32_t t11 = -364624988;

	t11 = (((x45%x46)&x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int16_t x50 = INT16_MAX;
	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MAX;
	int32_t t12 = 6;

	t12 = (((x49%x50)&x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 15;
	volatile uint32_t x54 = 3603974U;
	volatile int64_t x56 = -5780140524161LL;
	int32_t t13 = 4911727;

	t13 = (((x53%x54)&x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 62U;
	uint64_t x58 = 246579LLU;
	int8_t x59 = -1;
	static uint8_t x60 = UINT8_MAX;

	t14 = (((x57%x58)&x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = UINT32_MAX;
	int64_t x62 = 39948LL;
	static int8_t x63 = 5;
	int32_t x64 = INT32_MAX;
	volatile int32_t t15 = 234;

	t15 = (((x61%x62)&x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1035LL;
	volatile int32_t x66 = -1;
	volatile uint16_t x67 = UINT16_MAX;
	int32_t x68 = 1;
	volatile int32_t t16 = 52;

	t16 = (((x65%x66)&x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -1;
	uint32_t x72 = 206U;
	int32_t t17 = -45;

	t17 = (((x69%x70)&x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	int16_t x74 = 22;
	static int32_t x75 = INT32_MIN;
	volatile int32_t t18 = 12312391;

	t18 = (((x73%x74)&x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 18679340225595597LLU;
	volatile uint32_t x78 = 1962996U;
	static int16_t x79 = INT16_MIN;
	static int16_t x80 = INT16_MIN;

	t19 = (((x77%x78)&x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 196289398;
	int64_t x83 = -1LL;
	static volatile int32_t x84 = 64149890;

	t20 = (((x81%x82)&x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	volatile int32_t x87 = 1412;
	int32_t x88 = -11790119;
	static int32_t t21 = 168;

	t21 = (((x85%x86)&x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -1301666933765695LL;
	volatile uint8_t x92 = 5U;
	volatile int32_t t22 = -158092540;

	t22 = (((x89%x90)&x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	int8_t x95 = INT8_MIN;
	volatile int32_t t23 = 3;

	t23 = (((x93%x94)&x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = -16;
	static uint8_t x99 = UINT8_MAX;
	volatile uint32_t x100 = UINT32_MAX;
	static volatile int32_t t24 = -845060;

	t24 = (((x97%x98)&x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 3U;
	static uint8_t x102 = UINT8_MAX;
	volatile int16_t x103 = -14621;
	uint8_t x104 = 61U;
	volatile int32_t t25 = -36;

	t25 = (((x101%x102)&x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -6;
	int32_t x106 = -1;
	int8_t x107 = INT8_MAX;
	uint8_t x108 = 0U;
	volatile int32_t t26 = -1;

	t26 = (((x105%x106)&x107)==x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x110 = INT8_MIN;
	int8_t x111 = 1;
	volatile int16_t x112 = -1;
	int32_t t27 = 30716936;

	t27 = (((x109%x110)&x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x114 = INT32_MAX;
	volatile uint64_t x115 = 3311371LLU;
	volatile int32_t x116 = INT32_MIN;

	t28 = (((x113%x114)&x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x119 = -1;
	int16_t x120 = INT16_MIN;
	int32_t t29 = 3388;

	t29 = (((x117%x118)&x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	static int8_t x122 = INT8_MIN;
	uint16_t x124 = 0U;

	t30 = (((x121%x122)&x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 12;
	uint16_t x126 = 1155U;
	volatile uint8_t x127 = 16U;
	int32_t t31 = 129863;

	t31 = (((x125%x126)&x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MAX;
	int16_t x130 = -1;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t32 = -15850;

	t32 = (((x129%x130)&x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x133 = -1;
	volatile uint8_t x134 = 43U;
	int8_t x136 = INT8_MIN;

	t33 = (((x133%x134)&x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	volatile int64_t x139 = INT64_MIN;

	t34 = (((x137%x138)&x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	static uint32_t x142 = 3387U;
	static int8_t x143 = INT8_MAX;
	static uint32_t x144 = UINT32_MAX;
	volatile int32_t t35 = 4015;

	t35 = (((x141%x142)&x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = -1;
	int64_t x146 = INT64_MAX;
	int32_t x147 = -50;
	volatile int32_t t36 = 913;

	t36 = (((x145%x146)&x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	int16_t x150 = -120;
	int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MIN;
	int32_t t37 = 120984145;

	t37 = (((x149%x150)&x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int16_t x154 = INT16_MIN;
	int32_t x155 = -629936642;
	volatile uint8_t x156 = 12U;

	t38 = (((x153%x154)&x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = UINT32_MAX;
	int32_t x158 = INT32_MIN;
	static int64_t x159 = INT64_MAX;
	int32_t t39 = 70086972;

	t39 = (((x157%x158)&x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int32_t x162 = INT32_MIN;
	volatile int32_t x163 = INT32_MIN;
	volatile int32_t t40 = 3722771;

	t40 = (((x161%x162)&x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	static uint8_t x166 = 1U;
	static int16_t x167 = INT16_MIN;
	int8_t x168 = INT8_MAX;
	int32_t t41 = -6465711;

	t41 = (((x165%x166)&x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile int32_t x171 = INT32_MAX;
	uint32_t x172 = 56582U;
	int32_t t42 = 0;

	t42 = (((x169%x170)&x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = -3;
	uint32_t x176 = UINT32_MAX;
	volatile int32_t t43 = -64101;

	t43 = (((x173%x174)&x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 712U;
	uint8_t x178 = 38U;
	uint32_t x179 = 6813U;
	int16_t x180 = 0;
	int32_t t44 = -39033823;

	t44 = (((x177%x178)&x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MIN;
	volatile int16_t x182 = -1;
	int64_t x183 = 1LL;
	static int32_t t45 = 0;

	t45 = (((x181%x182)&x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = INT64_MAX;
	int16_t x188 = INT16_MIN;
	int32_t t46 = -1178519;

	t46 = (((x185%x186)&x187)==x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x191 = 43U;
	static int64_t x192 = -1LL;
	int32_t t47 = 2;

	t47 = (((x189%x190)&x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	static int64_t x194 = INT64_MIN;
	int64_t x195 = 403051690825LL;
	int16_t x196 = INT16_MAX;
	volatile int32_t t48 = 237;

	t48 = (((x193%x194)&x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = 7;

	t49 = (((x197%x198)&x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 346U;
	volatile int8_t x202 = 4;
	int8_t x203 = 0;
	static int8_t x204 = INT8_MAX;
	int32_t t50 = -10;

	t50 = (((x201%x202)&x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 944918295605987LLU;
	static uint8_t x206 = UINT8_MAX;
	int8_t x207 = INT8_MAX;
	static volatile int16_t x208 = INT16_MAX;
	volatile int32_t t51 = -560;

	t51 = (((x205%x206)&x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x210 = 100U;
	uint64_t x211 = 2011699LLU;
	int16_t x212 = -1;
	int32_t t52 = -206379;

	t52 = (((x209%x210)&x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 0U;
	uint8_t x214 = 89U;
	volatile int32_t x215 = -1;
	uint8_t x216 = 92U;
	volatile int32_t t53 = 25254494;

	t53 = (((x213%x214)&x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	volatile uint64_t x218 = UINT64_MAX;
	int8_t x219 = INT8_MIN;
	static int32_t t54 = -14;

	t54 = (((x217%x218)&x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	volatile int16_t x222 = INT16_MIN;
	volatile uint32_t x223 = 3U;
	int16_t x224 = 486;
	volatile int32_t t55 = 3935;

	t55 = (((x221%x222)&x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 28U;
	int8_t x227 = INT8_MIN;
	static int32_t x228 = 4312;
	volatile int32_t t56 = -1;

	t56 = (((x225%x226)&x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 128529LLU;
	static int32_t x230 = -972772;
	uint8_t x231 = 62U;
	int32_t x232 = 33;
	int32_t t57 = 49;

	t57 = (((x229%x230)&x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x234 = 15LLU;
	int64_t x235 = -25696892908079221LL;
	volatile int16_t x236 = -1;

	t58 = (((x233%x234)&x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = UINT32_MAX;
	int16_t x238 = INT16_MIN;
	volatile int32_t t59 = 207157;

	t59 = (((x237%x238)&x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = -1;
	static int64_t x243 = -1LL;
	static uint32_t x244 = 483U;

	t60 = (((x241%x242)&x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	uint16_t x246 = UINT16_MAX;
	static volatile int32_t t61 = -102833853;

	t61 = (((x245%x246)&x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 2849U;
	int16_t x250 = INT16_MIN;
	static volatile uint8_t x251 = 109U;
	int16_t x252 = INT16_MAX;
	volatile int32_t t62 = 13495838;

	t62 = (((x249%x250)&x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x255 = 7420U;
	volatile int64_t x256 = -1LL;

	t63 = (((x253%x254)&x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x259 = -1;
	int16_t x260 = 1;
	static volatile int32_t t64 = 26;

	t64 = (((x257%x258)&x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 1;
	int64_t x262 = INT64_MAX;
	int32_t x263 = 51965176;
	int32_t x264 = -1;
	volatile int32_t t65 = 511001;

	t65 = (((x261%x262)&x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int16_t x266 = 2885;
	uint64_t x267 = 453865336591370441LLU;
	int32_t x268 = -96;
	volatile int32_t t66 = 156432;

	t66 = (((x265%x266)&x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = INT64_MIN;
	volatile uint64_t x271 = 29862511403012LLU;
	static int32_t t67 = 9413895;

	t67 = (((x269%x270)&x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = 24;
	uint16_t x274 = UINT16_MAX;
	static int32_t x275 = INT32_MIN;
	uint8_t x276 = 20U;
	int32_t t68 = 250;

	t68 = (((x273%x274)&x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x277 = UINT32_MAX;
	int16_t x278 = INT16_MIN;
	int8_t x279 = -1;
	volatile int64_t x280 = -711LL;
	static volatile int32_t t69 = 1;

	t69 = (((x277%x278)&x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x282 = 493U;
	volatile int16_t x284 = 31;
	int32_t t70 = 2302;

	t70 = (((x281%x282)&x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -52436340;
	static uint8_t x286 = UINT8_MAX;
	uint16_t x287 = 31U;
	int8_t x288 = INT8_MIN;

	t71 = (((x285%x286)&x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	int64_t x290 = 3737177950LL;
	static int8_t x291 = 30;
	volatile int32_t t72 = 35279;

	t72 = (((x289%x290)&x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	uint64_t x295 = 1731185LLU;
	int16_t x296 = 14413;

	t73 = (((x293%x294)&x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x297 = 16U;
	uint64_t x298 = 6683738556682LLU;
	uint32_t x299 = UINT32_MAX;
	int64_t x300 = INT64_MIN;

	t74 = (((x297%x298)&x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x301 = 52973998057843876LLU;
	int16_t x302 = -1;
	uint32_t x303 = UINT32_MAX;
	volatile int16_t x304 = INT16_MIN;
	int32_t t75 = 1;

	t75 = (((x301%x302)&x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = 10;
	uint16_t x308 = 421U;
	volatile int32_t t76 = 5355;

	t76 = (((x305%x306)&x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	static uint64_t x310 = 2988543516777906LLU;
	int8_t x311 = INT8_MAX;
	static int32_t x312 = INT32_MIN;
	volatile int32_t t77 = -1;

	t77 = (((x309%x310)&x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	static int64_t x314 = INT64_MAX;
	volatile uint16_t x315 = UINT16_MAX;
	int32_t x316 = -116;
	int32_t t78 = -269;

	t78 = (((x313%x314)&x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x317 = UINT16_MAX;
	uint8_t x318 = UINT8_MAX;
	int8_t x319 = INT8_MAX;
	static int64_t x320 = -1LL;

	t79 = (((x317%x318)&x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 32165U;
	int64_t x322 = 282LL;
	volatile int8_t x323 = INT8_MIN;
	uint8_t x324 = 38U;
	static int32_t t80 = 5;

	t80 = (((x321%x322)&x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 104946878193850LLU;
	static uint32_t x327 = UINT32_MAX;

	t81 = (((x325%x326)&x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MIN;
	int64_t x330 = INT64_MAX;
	uint16_t x331 = UINT16_MAX;
	int16_t x332 = INT16_MAX;
	volatile int32_t t82 = 1737;

	t82 = (((x329%x330)&x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	volatile int64_t x334 = 1048805962520LL;
	int32_t x335 = -1;
	volatile int32_t t83 = -227;

	t83 = (((x333%x334)&x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 13;
	int8_t x338 = INT8_MIN;
	volatile int8_t x339 = INT8_MIN;
	static volatile int64_t x340 = -7370130026284903LL;

	t84 = (((x337%x338)&x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = 15;
	int16_t x342 = INT16_MAX;
	volatile uint32_t x343 = 976U;
	uint32_t x344 = 1709977341U;

	t85 = (((x341%x342)&x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	int16_t x346 = 119;
	static int64_t x348 = -1LL;
	volatile int32_t t86 = -134892803;

	t86 = (((x345%x346)&x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	volatile int32_t x350 = INT32_MIN;
	uint8_t x351 = UINT8_MAX;
	int64_t x352 = INT64_MIN;
	volatile int32_t t87 = 13814;

	t87 = (((x349%x350)&x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	int16_t x354 = INT16_MIN;
	uint64_t x355 = UINT64_MAX;
	int16_t x356 = -1;
	int32_t t88 = 5059;

	t88 = (((x353%x354)&x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = INT8_MAX;
	int8_t x358 = 10;
	static uint64_t x359 = 15604LLU;
	volatile int64_t x360 = -1LL;
	volatile int32_t t89 = 0;

	t89 = (((x357%x358)&x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 1U;
	int32_t x363 = 22;
	static volatile int32_t t90 = -129144;

	t90 = (((x361%x362)&x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	volatile int8_t x366 = -19;
	uint16_t x367 = 6132U;
	int64_t x368 = -1LL;
	volatile int32_t t91 = 23509324;

	t91 = (((x365%x366)&x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MAX;
	uint32_t x371 = 155740391U;
	volatile int32_t x372 = 82776204;
	int32_t t92 = -493518526;

	t92 = (((x369%x370)&x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = INT8_MIN;
	static int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MAX;
	static int32_t t93 = -29770324;

	t93 = (((x373%x374)&x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	volatile int16_t x378 = -1;
	int8_t x379 = INT8_MAX;
	uint8_t x380 = 24U;
	volatile int32_t t94 = -37182213;

	t94 = (((x377%x378)&x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	uint32_t x382 = UINT32_MAX;
	int32_t x383 = INT32_MAX;
	int32_t x384 = 24828309;
	int32_t t95 = -178715702;

	t95 = (((x381%x382)&x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x385 = UINT8_MAX;
	uint32_t x386 = 335122U;
	int32_t x387 = INT32_MAX;
	int32_t x388 = INT32_MAX;
	int32_t t96 = -7;

	t96 = (((x385%x386)&x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MAX;
	static int64_t x391 = INT64_MIN;
	uint16_t x392 = 1U;
	static volatile int32_t t97 = 0;

	t97 = (((x389%x390)&x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x393 = 1958U;
	static volatile int8_t x395 = INT8_MIN;
	int64_t x396 = 4754128538LL;
	static volatile int32_t t98 = -79;

	t98 = (((x393%x394)&x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x397 = UINT8_MAX;
	int64_t x398 = -1LL;
	static volatile int64_t x399 = INT64_MIN;
	volatile int32_t x400 = INT32_MIN;

	t99 = (((x397%x398)&x399)==x400);

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


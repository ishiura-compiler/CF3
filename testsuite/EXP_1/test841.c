#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x7 = INT16_MIN;
uint32_t x8 = 248272U;
static int32_t x12 = INT32_MIN;
uint32_t x17 = 91803U;
int32_t x19 = 318;
static volatile int32_t t4 = 2921730;
int16_t x24 = INT16_MAX;
volatile int32_t t5 = 2;
int8_t x28 = INT8_MIN;
int32_t x40 = INT32_MIN;
uint64_t x44 = 8881209578555257LLU;
int32_t t10 = 29302;
int32_t x46 = INT32_MIN;
uint8_t x47 = UINT8_MAX;
uint64_t x57 = 23305LLU;
int64_t x58 = 1611LL;
uint16_t x59 = 52U;
int32_t x67 = -399;
int32_t x68 = 1;
int32_t x76 = INT32_MIN;
int64_t x77 = INT64_MAX;
uint16_t x78 = 1U;
volatile int32_t t19 = 56;
int8_t x84 = INT8_MIN;
static int32_t x86 = -1;
int32_t t25 = 65;
volatile int16_t x107 = 950;
int8_t x115 = 57;
volatile int8_t x116 = -15;
int8_t x118 = 4;
volatile int32_t t30 = 19746260;
int16_t x125 = INT16_MAX;
int32_t x129 = -80533;
int8_t x132 = INT8_MAX;
volatile int32_t t32 = -1;
int8_t x138 = INT8_MIN;
int32_t x147 = -1447;
volatile int16_t x149 = -1;
int64_t x150 = -1LL;
volatile int32_t t36 = 4;
int32_t t37 = 1;
uint32_t x158 = 91U;
static uint64_t x160 = UINT64_MAX;
uint32_t x162 = UINT32_MAX;
int32_t x163 = 2393;
uint8_t x167 = 0U;
volatile uint64_t x169 = 458239067088621857LLU;
volatile int32_t t41 = 48252;
int64_t x174 = -5100814950LL;
static volatile int8_t x175 = INT8_MIN;
static uint32_t x176 = 525538U;
volatile int32_t t44 = -101733;
volatile int64_t x190 = INT64_MIN;
int16_t x192 = -1;
static volatile int32_t t47 = 80333;
static int64_t x197 = 6LL;
int64_t x200 = INT64_MIN;
int8_t x201 = INT8_MAX;
static volatile int32_t x209 = INT32_MIN;
uint16_t x214 = UINT16_MAX;
int8_t x217 = INT8_MIN;
int64_t x225 = INT64_MIN;
volatile int64_t x229 = INT64_MAX;
int8_t x231 = INT8_MIN;
volatile int32_t t55 = 8600474;
volatile int32_t x234 = INT32_MIN;
volatile int32_t t56 = 81;
volatile int32_t x237 = -1;
int64_t x246 = 4356011714705942159LL;
int32_t x253 = 8268949;
uint8_t x256 = 0U;
volatile int32_t t61 = -29336541;
int8_t x259 = -1;
volatile int32_t t63 = 1004510;
int64_t x266 = INT64_MIN;
uint16_t x274 = 2U;
uint16_t x276 = 42U;
int8_t x278 = INT8_MIN;
uint32_t x280 = UINT32_MAX;
uint8_t x285 = UINT8_MAX;
volatile uint32_t x286 = 38458U;
volatile int32_t t69 = -1;
int32_t x293 = INT32_MAX;
int64_t x295 = INT64_MIN;
int8_t x304 = INT8_MAX;
int64_t x310 = INT64_MAX;
static volatile int32_t t75 = 16344043;
int16_t x320 = INT16_MAX;
volatile int16_t x321 = INT16_MIN;
uint32_t x322 = 897176725U;
static int16_t x331 = 4;
uint64_t x332 = 236649LLU;
int16_t x338 = -1;
volatile int8_t x341 = -22;
volatile int32_t t81 = 2;
uint32_t x347 = 763090560U;
int32_t t82 = 32;
int32_t x362 = -87032;
int32_t t88 = -790975700;
int32_t x374 = 4860406;
uint8_t x379 = 25U;
volatile int32_t t90 = -6;
static int32_t t91 = 2;
volatile int8_t x388 = 61;
volatile uint8_t x389 = 5U;
volatile int32_t x390 = INT32_MIN;
int32_t x395 = INT32_MIN;
int32_t x399 = 6388;
int32_t t95 = 3;
volatile int32_t t97 = -2;
uint16_t x412 = 0U;
int8_t x415 = INT8_MIN;
int64_t x416 = INT64_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x2 = -1;
	static int8_t x3 = INT8_MIN;
	static uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -5402;

	t0 = (((x1%x2)^x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	volatile int64_t x6 = INT64_MAX;
	int32_t t1 = 48;

	t1 = (((x5%x6)^x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int16_t x10 = 343;
	static int16_t x11 = 3;
	volatile int32_t t2 = -176967901;

	t2 = (((x9%x10)^x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -325437LL;
	volatile uint32_t x14 = 58U;
	volatile uint32_t x15 = 81419U;
	uint64_t x16 = 2LLU;
	int32_t t3 = 959042949;

	t3 = (((x13%x14)^x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -11519;
	static int16_t x20 = INT16_MAX;

	t4 = (((x17%x18)^x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 5U;
	uint16_t x22 = UINT16_MAX;
	static int8_t x23 = 0;

	t5 = (((x21%x22)^x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static volatile int16_t x26 = -1;
	volatile uint32_t x27 = UINT32_MAX;
	int32_t t6 = -59455302;

	t6 = (((x25%x26)^x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 1989838LLU;
	int32_t x30 = INT32_MIN;
	volatile int64_t x31 = INT64_MAX;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -805;

	t7 = (((x29%x30)^x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 1538736953U;
	static uint64_t x34 = 1783239285024LLU;
	int32_t x35 = 9434925;
	int8_t x36 = INT8_MAX;
	static int32_t t8 = 1;

	t8 = (((x33%x34)^x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 1U;
	static int8_t x38 = -1;
	int32_t x39 = -1;
	volatile int32_t t9 = -50400406;

	t9 = (((x37%x38)^x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 779U;
	uint32_t x42 = 112081297U;
	int64_t x43 = -860372558816LL;

	t10 = (((x41%x42)^x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 284964;

	t11 = (((x45%x46)^x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -1;
	int16_t x50 = INT16_MAX;
	int16_t x51 = 126;
	volatile int16_t x52 = -1;
	volatile int32_t t12 = 72152;

	t12 = (((x49%x50)^x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	static int16_t x54 = INT16_MIN;
	uint16_t x55 = 1593U;
	uint32_t x56 = 153362193U;
	volatile int32_t t13 = 1037943578;

	t13 = (((x53%x54)^x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x60 = INT8_MIN;
	int32_t t14 = 4042789;

	t14 = (((x57%x58)^x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 248397811025LLU;
	static uint8_t x62 = 59U;
	volatile int16_t x63 = -1;
	uint64_t x64 = 1592987916621LLU;
	int32_t t15 = -64112623;

	t15 = (((x61%x62)^x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	int8_t x66 = INT8_MAX;
	volatile int32_t t16 = 1657130;

	t16 = (((x65%x66)^x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 0U;
	static uint64_t x70 = UINT64_MAX;
	static int32_t x71 = -724653;
	static volatile int8_t x72 = 1;
	static volatile int32_t t17 = -9626;

	t17 = (((x69%x70)^x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = UINT16_MAX;
	int32_t x74 = INT32_MIN;
	static int32_t x75 = INT32_MIN;
	volatile int32_t t18 = -57378419;

	t18 = (((x73%x74)^x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x79 = 1U;
	int16_t x80 = INT16_MAX;

	t19 = (((x77%x78)^x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	int16_t x82 = INT16_MAX;
	int64_t x83 = -1LL;
	static volatile int32_t t20 = -587787;

	t20 = (((x81%x82)^x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	static int64_t x87 = INT64_MAX;
	uint16_t x88 = 44U;
	int32_t t21 = -43128;

	t21 = (((x85%x86)^x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = -1;
	volatile int32_t x90 = INT32_MAX;
	int32_t x91 = -40429;
	volatile uint64_t x92 = UINT64_MAX;
	volatile int32_t t22 = 378;

	t22 = (((x89%x90)^x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -6;
	int32_t x94 = INT32_MIN;
	volatile int8_t x95 = INT8_MIN;
	int64_t x96 = INT64_MAX;
	int32_t t23 = -1194375;

	t23 = (((x93%x94)^x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -79453LL;
	volatile int32_t x98 = 1;
	int8_t x99 = INT8_MAX;
	volatile uint8_t x100 = 0U;
	volatile int32_t t24 = -23240464;

	t24 = (((x97%x98)^x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 0U;
	int32_t x102 = INT32_MIN;
	uint16_t x103 = 20533U;
	uint16_t x104 = UINT16_MAX;

	t25 = (((x101%x102)^x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 14U;
	int16_t x106 = INT16_MIN;
	volatile int16_t x108 = -1;
	volatile int32_t t26 = -4032;

	t26 = (((x105%x106)^x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 3701767359832LLU;
	int8_t x110 = INT8_MAX;
	int16_t x111 = 0;
	static int32_t x112 = -1;
	int32_t t27 = -5;

	t27 = (((x109%x110)^x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	volatile uint64_t x114 = UINT64_MAX;
	int32_t t28 = -390;

	t28 = (((x113%x114)^x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x117 = 215085U;
	static int8_t x119 = INT8_MIN;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = -446;

	t29 = (((x117%x118)^x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 391LLU;
	uint64_t x122 = 43LLU;
	uint64_t x123 = UINT64_MAX;
	int16_t x124 = -252;

	t30 = (((x121%x122)^x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -15;
	int64_t x127 = 13849LL;
	int32_t x128 = -1;
	static int32_t t31 = -18517;

	t31 = (((x125%x126)^x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MIN;
	uint16_t x131 = 1U;

	t32 = (((x129%x130)^x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MAX;
	volatile uint16_t x139 = 126U;
	static int8_t x140 = 0;
	static int32_t t33 = -2510323;

	t33 = (((x137%x138)^x139)<x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x141 = 4288640542637832LLU;
	static int32_t x142 = -20773;
	uint8_t x143 = 22U;
	int32_t x144 = 524904;
	static int32_t t34 = 16;

	t34 = (((x141%x142)^x143)<x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 0U;
	uint8_t x146 = 83U;
	static uint8_t x148 = 1U;
	volatile int32_t t35 = -3384;

	t35 = (((x145%x146)^x147)<x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x151 = 1;
	static int16_t x152 = INT16_MIN;

	t36 = (((x149%x150)^x151)<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 8087946U;
	int8_t x154 = INT8_MAX;
	volatile int8_t x155 = -1;
	int64_t x156 = 916LL;

	t37 = (((x153%x154)^x155)<x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x157 = 3U;
	int16_t x159 = -1;
	volatile int32_t t38 = -153;

	t38 = (((x157%x158)^x159)<x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = UINT16_MAX;
	uint32_t x164 = 7534122U;
	static int32_t t39 = 64674;

	t39 = (((x161%x162)^x163)<x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 6U;
	int32_t x166 = -48;
	int32_t x168 = INT32_MIN;
	static int32_t t40 = -13;

	t40 = (((x165%x166)^x167)<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x170 = 2196674763067LL;
	volatile int32_t x171 = -1;
	static int64_t x172 = INT64_MIN;

	t41 = (((x169%x170)^x171)<x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -1;
	volatile int32_t t42 = 2960206;

	t42 = (((x173%x174)^x175)<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x177 = -93157LL;
	uint16_t x178 = 7355U;
	static uint32_t x179 = 152797U;
	volatile uint32_t x180 = 220U;
	volatile int32_t t43 = 1927388;

	t43 = (((x177%x178)^x179)<x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x181 = 24LLU;
	int16_t x182 = -1;
	uint16_t x183 = 82U;
	int64_t x184 = INT64_MIN;

	t44 = (((x181%x182)^x183)<x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 1911;
	int64_t x186 = INT64_MIN;
	static uint8_t x187 = 11U;
	static int32_t x188 = INT32_MIN;
	int32_t t45 = -3;

	t45 = (((x185%x186)^x187)<x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 6664U;
	int32_t x191 = INT32_MIN;
	int32_t t46 = 50746917;

	t46 = (((x189%x190)^x191)<x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x193 = UINT16_MAX;
	volatile uint16_t x194 = 59U;
	uint16_t x195 = 1U;
	volatile uint16_t x196 = 0U;

	t47 = (((x193%x194)^x195)<x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x198 = 164016898720LLU;
	static int16_t x199 = INT16_MIN;
	int32_t t48 = 778;

	t48 = (((x197%x198)^x199)<x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MAX;
	int16_t x204 = INT16_MIN;
	int32_t t49 = 0;

	t49 = (((x201%x202)^x203)<x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = -504923119;
	uint64_t x206 = 529075528LLU;
	volatile uint16_t x207 = 50U;
	int32_t x208 = INT32_MIN;
	volatile int32_t t50 = 0;

	t50 = (((x205%x206)^x207)<x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x210 = 4766;
	uint16_t x211 = 15U;
	int64_t x212 = 134928829833LL;
	volatile int32_t t51 = -75;

	t51 = (((x209%x210)^x211)<x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = UINT8_MAX;
	volatile uint8_t x215 = 38U;
	volatile int32_t x216 = -1;
	static int32_t t52 = -506;

	t52 = (((x213%x214)^x215)<x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x218 = INT16_MIN;
	int32_t x219 = -1;
	int8_t x220 = -1;
	volatile int32_t t53 = -1;

	t53 = (((x217%x218)^x219)<x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x226 = 238241;
	uint32_t x227 = 22U;
	uint64_t x228 = 16104643522758LLU;
	volatile int32_t t54 = -1;

	t54 = (((x225%x226)^x227)<x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x230 = INT16_MIN;
	volatile int64_t x232 = -1LL;

	t55 = (((x229%x230)^x231)<x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = 1045461U;
	uint16_t x235 = 1U;
	int32_t x236 = INT32_MIN;

	t56 = (((x233%x234)^x235)<x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x238 = 15U;
	uint64_t x239 = 3133090880LLU;
	uint16_t x240 = UINT16_MAX;
	int32_t t57 = 4782;

	t57 = (((x237%x238)^x239)<x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x241 = -1;
	static uint16_t x242 = UINT16_MAX;
	uint64_t x243 = 261866975157LLU;
	volatile int64_t x244 = -1884892415796516326LL;
	static volatile int32_t t58 = 1393;

	t58 = (((x241%x242)^x243)<x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x245 = 33415892050LLU;
	int64_t x247 = INT64_MIN;
	volatile int8_t x248 = INT8_MIN;
	int32_t t59 = 1;

	t59 = (((x245%x246)^x247)<x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = -1;
	int16_t x250 = INT16_MAX;
	uint16_t x251 = UINT16_MAX;
	volatile int16_t x252 = 0;
	volatile int32_t t60 = 1;

	t60 = (((x249%x250)^x251)<x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x254 = -1;
	static volatile int16_t x255 = INT16_MIN;

	t61 = (((x253%x254)^x255)<x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x257 = INT32_MIN;
	uint16_t x258 = 26U;
	volatile uint8_t x260 = UINT8_MAX;
	int32_t t62 = -3894228;

	t62 = (((x257%x258)^x259)<x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x261 = INT16_MIN;
	volatile uint16_t x262 = UINT16_MAX;
	int16_t x263 = 1;
	volatile uint16_t x264 = UINT16_MAX;

	t63 = (((x261%x262)^x263)<x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x265 = 52U;
	uint64_t x267 = 47499082279869779LLU;
	static int8_t x268 = 10;
	static volatile int32_t t64 = 77;

	t64 = (((x265%x266)^x267)<x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x269 = INT64_MIN;
	uint8_t x270 = 72U;
	int8_t x271 = -1;
	uint16_t x272 = 6U;
	volatile int32_t t65 = 926652614;

	t65 = (((x269%x270)^x271)<x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = -1;
	int16_t x275 = -1;
	volatile int32_t t66 = -1612932;

	t66 = (((x273%x274)^x275)<x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = -1;
	uint64_t x279 = UINT64_MAX;
	volatile int32_t t67 = 4645;

	t67 = (((x277%x278)^x279)<x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = INT16_MAX;
	volatile uint32_t x282 = 27851559U;
	static int32_t x283 = INT32_MIN;
	int64_t x284 = -1LL;
	volatile int32_t t68 = 714095;

	t68 = (((x281%x282)^x283)<x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x287 = UINT16_MAX;
	int16_t x288 = 3660;

	t69 = (((x285%x286)^x287)<x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x289 = UINT16_MAX;
	static volatile int32_t x290 = 7;
	int32_t x291 = INT32_MIN;
	volatile uint32_t x292 = 0U;
	volatile int32_t t70 = -12752833;

	t70 = (((x289%x290)^x291)<x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x294 = INT16_MIN;
	int32_t x296 = INT32_MIN;
	volatile int32_t t71 = -262162;

	t71 = (((x293%x294)^x295)<x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MIN;
	static int64_t x298 = -1LL;
	volatile int64_t x299 = -1LL;
	static int64_t x300 = INT64_MIN;
	static int32_t t72 = -618569164;

	t72 = (((x297%x298)^x299)<x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = 55U;
	volatile int32_t x302 = INT32_MAX;
	int32_t x303 = 1;
	volatile int32_t t73 = 38;

	t73 = (((x301%x302)^x303)<x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = 126;
	int64_t x306 = -365271024LL;
	int32_t x307 = 128491;
	int64_t x308 = INT64_MIN;
	int32_t t74 = 113792;

	t74 = (((x305%x306)^x307)<x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x309 = INT32_MIN;
	static volatile int8_t x311 = -1;
	int8_t x312 = INT8_MIN;

	t75 = (((x309%x310)^x311)<x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = 808LL;
	static int64_t x314 = -1LL;
	static int16_t x315 = INT16_MIN;
	volatile int8_t x316 = INT8_MIN;
	static volatile int32_t t76 = 7383;

	t76 = (((x313%x314)^x315)<x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x317 = UINT8_MAX;
	int16_t x318 = INT16_MIN;
	volatile uint16_t x319 = UINT16_MAX;
	int32_t t77 = 12160446;

	t77 = (((x317%x318)^x319)<x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x323 = -17689;
	uint32_t x324 = 4596226U;
	int32_t t78 = 323731;

	t78 = (((x321%x322)^x323)<x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = 135980813673091006LL;
	int32_t x330 = INT32_MIN;
	volatile int32_t t79 = -48628260;

	t79 = (((x329%x330)^x331)<x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x337 = UINT8_MAX;
	volatile uint64_t x339 = 971492795154198442LLU;
	int16_t x340 = INT16_MIN;
	static volatile int32_t t80 = 10168;

	t80 = (((x337%x338)^x339)<x340);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x342 = UINT8_MAX;
	uint8_t x343 = 1U;
	volatile int32_t x344 = INT32_MAX;

	t81 = (((x341%x342)^x343)<x344);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 10627U;
	uint32_t x346 = UINT32_MAX;
	int8_t x348 = -1;

	t82 = (((x345%x346)^x347)<x348);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x349 = INT16_MAX;
	int64_t x350 = INT64_MAX;
	int32_t x351 = -1;
	volatile int64_t x352 = INT64_MIN;
	static volatile int32_t t83 = 1;

	t83 = (((x349%x350)^x351)<x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = -604LL;
	volatile uint32_t x354 = 13778850U;
	int32_t x355 = INT32_MIN;
	volatile int8_t x356 = INT8_MIN;
	volatile int32_t t84 = 0;

	t84 = (((x353%x354)^x355)<x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x357 = -10;
	uint32_t x358 = 404158210U;
	int64_t x359 = INT64_MIN;
	volatile int32_t x360 = INT32_MAX;
	volatile int32_t t85 = 1108184;

	t85 = (((x357%x358)^x359)<x360);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = INT32_MIN;
	static int32_t x363 = 14;
	static int64_t x364 = 105491458272646LL;
	volatile int32_t t86 = -100064379;

	t86 = (((x361%x362)^x363)<x364);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = INT8_MIN;
	volatile int32_t x366 = INT32_MIN;
	int64_t x367 = INT64_MAX;
	volatile uint64_t x368 = 929581902164LLU;
	volatile int32_t t87 = 20682;

	t87 = (((x365%x366)^x367)<x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = -1;
	uint32_t x370 = 1862U;
	int32_t x371 = -1;
	int32_t x372 = -487388315;

	t88 = (((x369%x370)^x371)<x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = 507U;
	int8_t x375 = -1;
	int16_t x376 = INT16_MAX;
	int32_t t89 = -2422;

	t89 = (((x373%x374)^x375)<x376);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = INT32_MAX;
	int16_t x378 = -1632;
	static uint8_t x380 = 15U;

	t90 = (((x377%x378)^x379)<x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = -1;
	static int16_t x382 = INT16_MAX;
	volatile uint32_t x383 = 159637188U;
	int64_t x384 = 680747987LL;

	t91 = (((x381%x382)^x383)<x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = INT64_MAX;
	int16_t x386 = INT16_MIN;
	volatile int64_t x387 = INT64_MAX;
	static volatile int32_t t92 = 539;

	t92 = (((x385%x386)^x387)<x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x391 = INT64_MIN;
	static uint32_t x392 = 39345U;
	static int32_t t93 = 206522604;

	t93 = (((x389%x390)^x391)<x392);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = -1;
	uint32_t x394 = 168U;
	uint8_t x396 = 3U;
	volatile int32_t t94 = 0;

	t94 = (((x393%x394)^x395)<x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MAX;
	int32_t x398 = 237112;
	int64_t x400 = INT64_MIN;

	t95 = (((x397%x398)^x399)<x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x401 = 7070090LLU;
	int32_t x402 = -1;
	static uint64_t x403 = UINT64_MAX;
	int32_t x404 = INT32_MIN;
	volatile int32_t t96 = 475;

	t96 = (((x401%x402)^x403)<x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x405 = INT64_MAX;
	uint64_t x406 = UINT64_MAX;
	uint8_t x407 = UINT8_MAX;
	uint64_t x408 = 8173198459097114LLU;

	t97 = (((x405%x406)^x407)<x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = -35715378;
	uint32_t x410 = UINT32_MAX;
	static uint64_t x411 = 20185772695313LLU;
	volatile int32_t t98 = -7;

	t98 = (((x409%x410)^x411)<x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x413 = 73U;
	int32_t x414 = INT32_MIN;
	static int32_t t99 = 82;

	t99 = (((x413%x414)^x415)<x416);

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = -1;
static int32_t x15 = INT32_MAX;
int64_t x16 = INT64_MAX;
uint16_t x19 = 13504U;
int32_t x26 = INT32_MIN;
static volatile int32_t t5 = 5033;
static int64_t x32 = INT64_MAX;
int8_t x35 = 4;
int8_t x51 = INT8_MIN;
static uint64_t x57 = 2775879647275685304LLU;
volatile int32_t t13 = 172276717;
volatile int16_t x66 = -399;
int16_t x68 = -500;
uint64_t x75 = 7LLU;
static uint16_t x78 = UINT16_MAX;
volatile int32_t t17 = 13;
volatile int32_t t18 = -81;
int32_t x95 = INT32_MAX;
int8_t x105 = -1;
int16_t x113 = -3091;
volatile uint16_t x115 = 239U;
int32_t x117 = -1;
int32_t x121 = INT32_MIN;
int64_t x122 = 831032917171736LL;
static uint16_t x124 = UINT16_MAX;
static uint16_t x134 = 4544U;
int16_t x137 = INT16_MIN;
uint32_t x141 = 4129850U;
int32_t x145 = -1;
static int8_t x148 = INT8_MIN;
int16_t x164 = INT16_MIN;
volatile int8_t x173 = -1;
uint64_t x176 = 794771663959LLU;
volatile int8_t x179 = 1;
uint16_t x188 = 16U;
uint64_t x189 = 777636731LLU;
int16_t x190 = INT16_MIN;
static int16_t x193 = INT16_MIN;
volatile int64_t x195 = -1LL;
uint32_t x197 = 5689737U;
volatile int32_t t45 = -82299;
uint8_t x209 = 105U;
int32_t t48 = 1188337;
int8_t x232 = -1;
int8_t x239 = INT8_MIN;
uint16_t x242 = 2U;
volatile int32_t t54 = -2497760;
uint64_t x245 = 56976829038LLU;
int32_t x246 = INT32_MAX;
uint32_t x257 = 1981U;
int8_t x260 = 7;
uint16_t x262 = 353U;
int8_t x263 = 1;
int32_t t58 = 22157;
uint32_t x276 = 1266U;
int32_t t63 = -281632;
uint64_t x292 = 51259484716LLU;
int64_t x299 = INT64_MAX;
int32_t t65 = 1;
int16_t x315 = -127;
int8_t x318 = -1;
static volatile int32_t t68 = 89211132;
uint8_t x328 = UINT8_MAX;
volatile int32_t t70 = -78181;
volatile int16_t x334 = INT16_MIN;
int8_t x335 = 1;
volatile int32_t t72 = -45901;
volatile int32_t x349 = INT32_MIN;
int32_t x364 = INT32_MAX;
int16_t x365 = INT16_MIN;
static int16_t x368 = INT16_MAX;
int8_t x372 = INT8_MAX;
uint32_t x377 = 707377U;
int32_t x379 = -964;
int16_t x384 = INT16_MAX;
int64_t x393 = -6LL;
uint64_t x399 = 4337803LLU;
int16_t x400 = INT16_MIN;
uint16_t x407 = 15574U;
int16_t x410 = INT16_MIN;
int16_t x415 = -161;
volatile int32_t t87 = 39;
volatile int32_t t88 = -96;
static int16_t x440 = -6560;
volatile int32_t t92 = 2175175;
static uint64_t x446 = 1357LLU;
int16_t x448 = -1;
uint8_t x459 = 5U;
int16_t x460 = INT16_MAX;
volatile int8_t x461 = INT8_MIN;
uint32_t x469 = 219U;


void f0(void) {
	int8_t x5 = 1;
	int16_t x6 = -73;
	static uint16_t x8 = UINT16_MAX;
	int32_t t0 = 410820655;

	t0 = (((x5-x6)^x7)<=x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x9 = 4209664766235381955LLU;
	int16_t x10 = -1;
	uint64_t x11 = UINT64_MAX;
	volatile int16_t x12 = -5181;
	volatile int32_t t1 = -14673774;

	t1 = (((x9-x10)^x11)<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	uint8_t x14 = 36U;
	volatile int32_t t2 = 372;

	t2 = (((x13-x14)^x15)<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	uint8_t x18 = UINT8_MAX;
	int32_t x20 = 25722;
	volatile int32_t t3 = 72012624;

	t3 = (((x17-x18)^x19)<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = 1;
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = INT16_MIN;
	int16_t x24 = -1;
	int32_t t4 = 6;

	t4 = (((x21-x22)^x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = -26069278550756LL;
	static int32_t x27 = INT32_MIN;
	volatile int16_t x28 = -2055;

	t5 = (((x25-x26)^x27)<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 209550330U;
	int64_t x30 = -1052461142650658039LL;
	int64_t x31 = INT64_MIN;
	int32_t t6 = -747579;

	t6 = (((x29-x30)^x31)<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = 329;
	static int16_t x34 = -1;
	static int16_t x36 = -9;
	int32_t t7 = 52683428;

	t7 = (((x33-x34)^x35)<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 31U;
	int64_t x38 = 516971254274LL;
	volatile int64_t x39 = -1LL;
	static int16_t x40 = 3;
	volatile int32_t t8 = -21251457;

	t8 = (((x37-x38)^x39)<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x41 = 720748824508851LL;
	uint8_t x42 = 2U;
	int32_t x43 = INT32_MIN;
	volatile uint16_t x44 = 0U;
	int32_t t9 = -26;

	t9 = (((x41-x42)^x43)<=x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = INT32_MAX;
	int64_t x46 = -124269167172LL;
	int32_t x47 = 2;
	static int64_t x48 = INT64_MAX;
	int32_t t10 = 11698;

	t10 = (((x45-x46)^x47)<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = 7250513U;
	int8_t x50 = INT8_MIN;
	int64_t x52 = INT64_MAX;
	int32_t t11 = 5;

	t11 = (((x49-x50)^x51)<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	static volatile int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MIN;
	int64_t x56 = INT64_MIN;
	static int32_t t12 = 1;

	t12 = (((x53-x54)^x55)<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x58 = UINT32_MAX;
	volatile int8_t x59 = INT8_MIN;
	uint64_t x60 = 6703636077447LLU;

	t13 = (((x57-x58)^x59)<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = INT32_MIN;
	uint8_t x67 = UINT8_MAX;
	static int32_t t14 = 0;

	t14 = (((x65-x66)^x67)<=x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = UINT64_MAX;
	int32_t x70 = -88;
	volatile uint8_t x71 = UINT8_MAX;
	static int32_t x72 = -1;
	int32_t t15 = -2;

	t15 = (((x69-x70)^x71)<=x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = 78541701020392188LL;
	int32_t x74 = -1;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t16 = 299;

	t16 = (((x73-x74)^x75)<=x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 1U;
	int32_t x79 = -1043;
	uint16_t x80 = 1U;

	t17 = (((x77-x78)^x79)<=x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MAX;
	static volatile int32_t x83 = INT32_MIN;
	volatile int32_t x84 = -54949248;

	t18 = (((x81-x82)^x83)<=x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = UINT32_MAX;
	int8_t x86 = INT8_MAX;
	uint16_t x87 = 1785U;
	static int32_t x88 = INT32_MIN;
	static volatile int32_t t19 = 1693;

	t19 = (((x85-x86)^x87)<=x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -2;
	static int8_t x90 = INT8_MIN;
	volatile int8_t x91 = -18;
	uint16_t x92 = 12U;
	static volatile int32_t t20 = -15;

	t20 = (((x89-x90)^x91)<=x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x93 = 88U;
	static uint8_t x94 = 10U;
	static uint32_t x96 = UINT32_MAX;
	int32_t t21 = 1340;

	t21 = (((x93-x94)^x95)<=x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 2650U;
	int64_t x98 = -1LL;
	static volatile uint8_t x99 = 86U;
	int32_t x100 = INT32_MIN;
	volatile int32_t t22 = -360796;

	t22 = (((x97-x98)^x99)<=x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x101 = INT32_MAX;
	static uint32_t x102 = 27991U;
	static int8_t x103 = INT8_MIN;
	static volatile int32_t x104 = INT32_MAX;
	volatile int32_t t23 = 106864508;

	t23 = (((x101-x102)^x103)<=x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x106 = -1;
	static int32_t x107 = INT32_MAX;
	int64_t x108 = 7056897730LL;
	volatile int32_t t24 = 1010;

	t24 = (((x105-x106)^x107)<=x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -2;
	static uint8_t x110 = 0U;
	uint32_t x111 = 28375228U;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t25 = 323;

	t25 = (((x109-x110)^x111)<=x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x114 = 0;
	volatile int32_t x116 = INT32_MIN;
	int32_t t26 = 477671538;

	t26 = (((x113-x114)^x115)<=x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x118 = UINT64_MAX;
	uint8_t x119 = 3U;
	volatile uint32_t x120 = 1U;
	int32_t t27 = -18326962;

	t27 = (((x117-x118)^x119)<=x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x123 = UINT8_MAX;
	volatile int32_t t28 = -854;

	t28 = (((x121-x122)^x123)<=x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = UINT64_MAX;
	uint32_t x126 = 4533U;
	uint32_t x127 = 951090U;
	uint64_t x128 = 13820360LLU;
	int32_t t29 = -22441940;

	t29 = (((x125-x126)^x127)<=x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = 9;
	int32_t x130 = -1;
	volatile uint64_t x131 = 6544LLU;
	volatile int16_t x132 = -1;
	int32_t t30 = 26722;

	t30 = (((x129-x130)^x131)<=x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x133 = UINT32_MAX;
	volatile uint32_t x135 = 53321949U;
	static uint64_t x136 = 1902490455867709LLU;
	static int32_t t31 = -1;

	t31 = (((x133-x134)^x135)<=x136);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x138 = 15424954LLU;
	uint32_t x139 = 197U;
	volatile uint16_t x140 = 1119U;
	int32_t t32 = -485;

	t32 = (((x137-x138)^x139)<=x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x142 = INT64_MAX;
	uint8_t x143 = 32U;
	uint8_t x144 = UINT8_MAX;
	int32_t t33 = -3712981;

	t33 = (((x141-x142)^x143)<=x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x146 = -1;
	int8_t x147 = INT8_MAX;
	volatile int32_t t34 = -16678006;

	t34 = (((x145-x146)^x147)<=x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -31333214258849347LL;
	int32_t x150 = INT32_MAX;
	static int32_t x151 = 1554;
	int64_t x152 = INT64_MIN;
	static int32_t t35 = -1;

	t35 = (((x149-x150)^x151)<=x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = INT64_MAX;
	int8_t x162 = INT8_MAX;
	static uint16_t x163 = 7249U;
	volatile int32_t t36 = 1523;

	t36 = (((x161-x162)^x163)<=x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -806337;
	uint8_t x166 = 5U;
	static int32_t x167 = INT32_MIN;
	uint32_t x168 = UINT32_MAX;
	int32_t t37 = 735;

	t37 = (((x165-x166)^x167)<=x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x174 = INT8_MIN;
	static uint16_t x175 = 5U;
	int32_t t38 = 0;

	t38 = (((x173-x174)^x175)<=x176);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x177 = 2290U;
	int8_t x178 = INT8_MAX;
	volatile int8_t x180 = -1;
	volatile int32_t t39 = -26;

	t39 = (((x177-x178)^x179)<=x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x181 = 575104961;
	int8_t x182 = 47;
	uint32_t x183 = UINT32_MAX;
	int64_t x184 = -1LL;
	volatile int32_t t40 = -44;

	t40 = (((x181-x182)^x183)<=x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x185 = INT8_MAX;
	static int32_t x186 = INT32_MAX;
	static int8_t x187 = INT8_MIN;
	int32_t t41 = 190;

	t41 = (((x185-x186)^x187)<=x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x191 = 18LLU;
	uint8_t x192 = UINT8_MAX;
	int32_t t42 = 0;

	t42 = (((x189-x190)^x191)<=x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x194 = 1LL;
	static int64_t x196 = -506056039205538LL;
	static int32_t t43 = 7214;

	t43 = (((x193-x194)^x195)<=x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x198 = 14U;
	uint8_t x199 = 3U;
	int32_t x200 = -211151;
	volatile int32_t t44 = -46205;

	t44 = (((x197-x198)^x199)<=x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = -130;
	int32_t x202 = INT32_MIN;
	int64_t x203 = -13489842354LL;
	uint64_t x204 = 48223019414225LLU;

	t45 = (((x201-x202)^x203)<=x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x205 = 3968LLU;
	static volatile uint32_t x206 = 27188U;
	static uint32_t x207 = 11788179U;
	int16_t x208 = -714;
	int32_t t46 = 20;

	t46 = (((x205-x206)^x207)<=x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x210 = -1;
	int8_t x211 = -1;
	uint8_t x212 = 0U;
	volatile int32_t t47 = 169627264;

	t47 = (((x209-x210)^x211)<=x212);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = UINT8_MAX;
	uint64_t x214 = 1394493169166820143LLU;
	volatile int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MIN;

	t48 = (((x213-x214)^x215)<=x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = INT16_MIN;
	volatile uint32_t x222 = 98171872U;
	int32_t x223 = INT32_MIN;
	static uint64_t x224 = 9814150962988055LLU;
	volatile int32_t t49 = 488614619;

	t49 = (((x221-x222)^x223)<=x224);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = INT16_MAX;
	uint64_t x226 = UINT64_MAX;
	static int16_t x227 = -1;
	int32_t x228 = INT32_MIN;
	int32_t t50 = -4802918;

	t50 = (((x225-x226)^x227)<=x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x229 = -11;
	volatile int32_t x230 = -1;
	static uint8_t x231 = 14U;
	volatile int32_t t51 = 1;

	t51 = (((x229-x230)^x231)<=x232);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x233 = UINT32_MAX;
	int8_t x234 = -57;
	int32_t x235 = INT32_MIN;
	volatile uint64_t x236 = 463LLU;
	int32_t t52 = 2543;

	t52 = (((x233-x234)^x235)<=x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x237 = 227LL;
	uint8_t x238 = 10U;
	int64_t x240 = INT64_MIN;
	int32_t t53 = -1;

	t53 = (((x237-x238)^x239)<=x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = 884517826178102LL;
	int32_t x243 = -1;
	int32_t x244 = -1;

	t54 = (((x241-x242)^x243)<=x244);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x247 = INT16_MIN;
	int32_t x248 = -3;
	volatile int32_t t55 = 17;

	t55 = (((x245-x246)^x247)<=x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x249 = 1U;
	volatile int32_t x250 = -1;
	int16_t x251 = -8411;
	int16_t x252 = 0;
	int32_t t56 = -4155;

	t56 = (((x249-x250)^x251)<=x252);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x258 = INT8_MAX;
	int32_t x259 = INT32_MIN;
	int32_t t57 = -371606;

	t57 = (((x257-x258)^x259)<=x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x261 = 65U;
	uint32_t x264 = UINT32_MAX;

	t58 = (((x261-x262)^x263)<=x264);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = 30;
	int32_t x266 = INT32_MAX;
	uint16_t x267 = 0U;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t59 = 6;

	t59 = (((x265-x266)^x267)<=x268);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x269 = INT32_MIN;
	int32_t x270 = INT32_MIN;
	uint32_t x271 = UINT32_MAX;
	int8_t x272 = INT8_MIN;
	int32_t t60 = -1089553;

	t60 = (((x269-x270)^x271)<=x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x273 = INT16_MAX;
	static uint8_t x274 = UINT8_MAX;
	uint64_t x275 = 13041379445LLU;
	volatile int32_t t61 = 35;

	t61 = (((x273-x274)^x275)<=x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = -1;
	int32_t x278 = INT32_MIN;
	uint16_t x279 = 9944U;
	uint8_t x280 = 2U;
	static int32_t t62 = -16030000;

	t62 = (((x277-x278)^x279)<=x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = -1242262699687225296LL;
	int8_t x282 = INT8_MIN;
	int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MIN;

	t63 = (((x281-x282)^x283)<=x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = INT64_MAX;
	volatile int16_t x290 = INT16_MAX;
	volatile int64_t x291 = INT64_MIN;
	volatile int32_t t64 = 2095265;

	t64 = (((x289-x290)^x291)<=x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x297 = UINT32_MAX;
	int64_t x298 = -1LL;
	int32_t x300 = -1;

	t65 = (((x297-x298)^x299)<=x300);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x305 = 8046899364488244102LLU;
	int64_t x306 = INT64_MIN;
	static volatile int16_t x307 = INT16_MAX;
	static int32_t x308 = INT32_MIN;
	int32_t t66 = 1758944;

	t66 = (((x305-x306)^x307)<=x308);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = INT64_MIN;
	uint8_t x314 = 0U;
	int64_t x316 = -1LL;
	static volatile int32_t t67 = -1115984;

	t67 = (((x313-x314)^x315)<=x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x317 = INT32_MIN;
	uint64_t x319 = UINT64_MAX;
	int64_t x320 = -1LL;

	t68 = (((x317-x318)^x319)<=x320);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x321 = 4133;
	static volatile uint64_t x322 = 111908070861823380LLU;
	volatile int16_t x323 = INT16_MIN;
	int8_t x324 = -1;
	int32_t t69 = -17;

	t69 = (((x321-x322)^x323)<=x324);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = 213;
	int8_t x327 = 1;

	t70 = (((x325-x326)^x327)<=x328);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x329 = 118U;
	int8_t x330 = -6;
	static volatile int64_t x331 = INT64_MAX;
	int8_t x332 = -19;
	volatile int32_t t71 = -3040;

	t71 = (((x329-x330)^x331)<=x332);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x333 = 1676;
	volatile int16_t x336 = INT16_MAX;

	t72 = (((x333-x334)^x335)<=x336);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x337 = -1;
	uint32_t x338 = 3623U;
	volatile int32_t x339 = 4186;
	int32_t x340 = INT32_MIN;
	static volatile int32_t t73 = -28092;

	t73 = (((x337-x338)^x339)<=x340);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x341 = INT8_MIN;
	volatile int32_t x342 = INT32_MIN;
	int64_t x343 = -449383289874537LL;
	static volatile uint64_t x344 = 1783715936LLU;
	volatile int32_t t74 = 302534296;

	t74 = (((x341-x342)^x343)<=x344);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x350 = INT16_MIN;
	int16_t x351 = INT16_MAX;
	static int32_t x352 = INT32_MIN;
	int32_t t75 = 5129;

	t75 = (((x349-x350)^x351)<=x352);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x361 = 61U;
	uint64_t x362 = 582LLU;
	volatile uint16_t x363 = UINT16_MAX;
	static volatile int32_t t76 = -98;

	t76 = (((x361-x362)^x363)<=x364);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MIN;
	int32_t t77 = 3470;

	t77 = (((x365-x366)^x367)<=x368);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x369 = -703109;
	volatile int8_t x370 = INT8_MAX;
	static uint32_t x371 = 21620342U;
	volatile int32_t t78 = -23569;

	t78 = (((x369-x370)^x371)<=x372);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x373 = INT64_MAX;
	int32_t x374 = INT32_MAX;
	volatile int32_t x375 = 1083;
	int16_t x376 = INT16_MIN;
	volatile int32_t t79 = -887;

	t79 = (((x373-x374)^x375)<=x376);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x378 = INT32_MIN;
	volatile int32_t x380 = 4;
	volatile int32_t t80 = -292542343;

	t80 = (((x377-x378)^x379)<=x380);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x381 = INT32_MIN;
	uint32_t x382 = 2032447016U;
	volatile int64_t x383 = 3005260555451528LL;
	static int32_t t81 = -848;

	t81 = (((x381-x382)^x383)<=x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x394 = INT8_MAX;
	static int8_t x395 = INT8_MIN;
	static int64_t x396 = 8742LL;
	volatile int32_t t82 = 9;

	t82 = (((x393-x394)^x395)<=x396);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x397 = INT32_MIN;
	int8_t x398 = INT8_MIN;
	static int32_t t83 = 386127;

	t83 = (((x397-x398)^x399)<=x400);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x401 = -1;
	static volatile uint8_t x402 = 3U;
	volatile uint16_t x403 = 13643U;
	uint32_t x404 = 268784451U;
	static volatile int32_t t84 = 26918;

	t84 = (((x401-x402)^x403)<=x404);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x405 = INT16_MIN;
	static int8_t x406 = INT8_MAX;
	int64_t x408 = -248LL;
	static volatile int32_t t85 = 55;

	t85 = (((x405-x406)^x407)<=x408);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x409 = INT64_MIN;
	int64_t x411 = 5629204363823LL;
	static volatile uint8_t x412 = 2U;
	volatile int32_t t86 = 28474097;

	t86 = (((x409-x410)^x411)<=x412);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x413 = -1;
	uint8_t x414 = 0U;
	uint32_t x416 = 63U;

	t87 = (((x413-x414)^x415)<=x416);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x421 = INT64_MIN;
	int8_t x422 = INT8_MIN;
	static int64_t x423 = 1862920LL;
	volatile int32_t x424 = 14;

	t88 = (((x421-x422)^x423)<=x424);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x425 = INT16_MIN;
	static uint16_t x426 = UINT16_MAX;
	volatile uint8_t x427 = 15U;
	uint32_t x428 = 1U;
	volatile int32_t t89 = -5002;

	t89 = (((x425-x426)^x427)<=x428);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x429 = INT16_MIN;
	uint16_t x430 = 12816U;
	int16_t x431 = -1;
	int64_t x432 = -222763899150815LL;
	volatile int32_t t90 = 878;

	t90 = (((x429-x430)^x431)<=x432);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x433 = UINT8_MAX;
	uint16_t x434 = UINT16_MAX;
	uint32_t x435 = 6784U;
	int8_t x436 = INT8_MAX;
	static int32_t t91 = -446311;

	t91 = (((x433-x434)^x435)<=x436);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = 1319LL;
	int32_t x438 = -1;
	int32_t x439 = INT32_MIN;

	t92 = (((x437-x438)^x439)<=x440);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x445 = 12U;
	int32_t x447 = -380;
	static int32_t t93 = 695551178;

	t93 = (((x445-x446)^x447)<=x448);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x449 = 31U;
	volatile int32_t x450 = -440958;
	static uint64_t x451 = UINT64_MAX;
	int16_t x452 = 27;
	volatile int32_t t94 = 15;

	t94 = (((x449-x450)^x451)<=x452);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x453 = 95491058;
	volatile int8_t x454 = INT8_MAX;
	int32_t x455 = -629987312;
	static int8_t x456 = INT8_MIN;
	int32_t t95 = 13;

	t95 = (((x453-x454)^x455)<=x456);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x457 = 285U;
	int8_t x458 = INT8_MAX;
	volatile int32_t t96 = -97;

	t96 = (((x457-x458)^x459)<=x460);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x462 = INT16_MAX;
	int32_t x463 = INT32_MAX;
	int32_t x464 = -146;
	int32_t t97 = -6;

	t97 = (((x461-x462)^x463)<=x464);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x465 = INT64_MAX;
	int16_t x466 = 109;
	uint8_t x467 = 1U;
	static int16_t x468 = INT16_MAX;
	volatile int32_t t98 = -1;

	t98 = (((x465-x466)^x467)<=x468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x470 = -1;
	volatile int32_t x471 = -1;
	static uint8_t x472 = 11U;
	volatile int32_t t99 = 1;

	t99 = (((x469-x470)^x471)<=x472);

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


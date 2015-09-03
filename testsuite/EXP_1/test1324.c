#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
int64_t x6 = INT64_MIN;
int16_t x10 = INT16_MIN;
int16_t x18 = -132;
static int32_t x20 = -1;
int8_t x25 = -1;
volatile int64_t t6 = 495593234592550213LL;
static int16_t x31 = -1;
uint8_t x42 = UINT8_MAX;
int64_t x47 = 202992LL;
static uint16_t x55 = 2316U;
volatile int32_t t13 = -20399;
int8_t x57 = 28;
static int32_t t14 = -12690090;
int8_t x67 = INT8_MAX;
int32_t t16 = 854057088;
volatile int32_t t17 = 132545;
int64_t x77 = -1LL;
int64_t t19 = -6595435734LL;
static int64_t x81 = INT64_MAX;
static volatile int16_t x83 = -287;
int64_t t21 = -465LL;
uint8_t x106 = UINT8_MAX;
volatile uint64_t x118 = 19171614714LLU;
volatile uint32_t t30 = 219U;
static int32_t x129 = -30680835;
volatile int32_t t32 = -8896289;
int64_t x134 = -1LL;
static int64_t x136 = -812267186674415LL;
volatile uint64_t x138 = UINT64_MAX;
uint64_t t35 = 6530549941178099442LLU;
int32_t x145 = -1;
volatile int32_t t37 = -189197;
static uint64_t t38 = 1169074469LLU;
int16_t x159 = -1;
volatile uint32_t x161 = UINT32_MAX;
int16_t x163 = INT16_MIN;
uint64_t x167 = UINT64_MAX;
int8_t x171 = INT8_MAX;
uint8_t x172 = UINT8_MAX;
int8_t x175 = INT8_MIN;
static int32_t t44 = 8217;
int32_t x181 = INT32_MIN;
uint8_t x186 = 119U;
int16_t x187 = -1;
static uint16_t x188 = 870U;
static int32_t x193 = 82914161;
int32_t x195 = -1;
static uint32_t x209 = UINT32_MAX;
int16_t x225 = INT16_MIN;
int8_t x230 = -1;
int32_t x233 = INT32_MIN;
static uint8_t x235 = 29U;
volatile int32_t t59 = -565941;
static uint8_t x245 = UINT8_MAX;
int8_t x247 = INT8_MAX;
volatile int64_t x249 = 25076569LL;
static volatile uint64_t t64 = 1081388061775LLU;
static int64_t x266 = -1LL;
volatile uint32_t t66 = 373409U;
int64_t x272 = -1LL;
volatile int64_t t67 = -14009660417LL;
int32_t x274 = -63306907;
static int8_t x275 = -1;
int32_t x281 = -19;
int32_t x282 = -985155;
volatile int32_t t70 = 0;
uint64_t t71 = 42806366718689LLU;
int64_t x291 = -15162876343LL;
volatile int64_t x292 = -1LL;
static int64_t t72 = 32258650821426562LL;
int16_t x303 = INT16_MIN;
int16_t x304 = -1;
int32_t t75 = -773;
uint32_t x308 = 949U;
volatile uint64_t t77 = 86027LLU;
int32_t x314 = 2207143;
int64_t x319 = INT64_MIN;
int64_t t79 = 66LL;
volatile int64_t x329 = INT64_MAX;
static int32_t x331 = INT32_MIN;
static volatile int8_t x332 = INT8_MAX;
static uint16_t x334 = 15U;
int32_t x335 = 556;
uint8_t x339 = 1U;
uint8_t x340 = 2U;
static int32_t t85 = 6303;
int8_t x348 = INT8_MIN;
int32_t t86 = -483;
volatile uint8_t x350 = UINT8_MAX;
static int64_t t87 = -40002714389985LL;
uint16_t x354 = 1U;
int64_t x362 = INT64_MAX;
static uint32_t x364 = UINT32_MAX;
volatile int64_t x365 = INT64_MIN;
volatile int8_t x369 = INT8_MAX;
int8_t x372 = 7;
uint32_t x374 = UINT32_MAX;
static uint64_t t93 = 1LLU;
uint64_t x377 = 5427982498001803LLU;
int16_t x382 = INT16_MAX;
volatile int32_t t95 = -2669132;
uint32_t x387 = 4485U;
uint8_t x389 = 1U;
volatile int32_t t97 = 135052090;
volatile int32_t t99 = -125;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	volatile uint64_t x2 = 4397612513313LLU;
	volatile int64_t x3 = -1LL;
	volatile int64_t t0 = -529646253038LL;

	t0 = (((x1==x2)&x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	static int32_t x7 = 0;
	int16_t x8 = 68;
	volatile int32_t t1 = 3582;

	t1 = (((x5==x6)&x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	uint16_t x11 = UINT16_MAX;
	uint8_t x12 = 84U;
	int32_t t2 = 4;

	t2 = (((x9==x10)&x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int16_t x14 = -1;
	uint64_t x15 = UINT64_MAX;
	uint8_t x16 = 2U;
	volatile uint64_t t3 = 1236643899LLU;

	t3 = (((x13==x14)&x15)&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 77359349462154LLU;
	int16_t x19 = INT16_MIN;
	static int32_t t4 = -3;

	t4 = (((x17==x18)&x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	uint32_t x22 = 246370U;
	static int32_t x23 = -943670431;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 24;

	t5 = (((x21==x22)&x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	static int64_t x27 = INT64_MAX;
	static volatile int16_t x28 = -1;

	t6 = (((x25==x26)&x27)&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x30 = -1;
	int32_t x32 = 21888;
	volatile int32_t t7 = -961456;

	t7 = (((x29==x30)&x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MAX;
	volatile int8_t x34 = -5;
	uint16_t x35 = 104U;
	int32_t x36 = 19;
	volatile int32_t t8 = -1943066;

	t8 = (((x33==x34)&x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	uint8_t x38 = 9U;
	uint8_t x39 = UINT8_MAX;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -81;

	t9 = (((x37==x38)&x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MAX;
	static int64_t x43 = INT64_MAX;
	uint64_t x44 = UINT64_MAX;
	uint64_t t10 = 53542280647LLU;

	t10 = (((x41==x42)&x43)&x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = 969170838;
	int32_t x46 = INT32_MIN;
	int32_t x48 = -35278838;
	static volatile int64_t t11 = 7LL;

	t11 = (((x45==x46)&x47)&x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 1521831210308163LL;
	uint16_t x50 = 820U;
	static int32_t x51 = INT32_MAX;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -4;

	t12 = (((x49==x50)&x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 1U;
	static int16_t x54 = INT16_MIN;
	static int16_t x56 = -26;

	t13 = (((x53==x54)&x55)&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x58 = INT64_MIN;
	int16_t x59 = -5;
	static int8_t x60 = 1;

	t14 = (((x57==x58)&x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile int64_t x62 = 7726LL;
	static int16_t x63 = INT16_MIN;
	volatile int16_t x64 = 3;
	static volatile int32_t t15 = -8;

	t15 = (((x61==x62)&x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile int64_t x66 = -1LL;
	int16_t x68 = -1;

	t16 = (((x65==x66)&x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = UINT32_MAX;
	uint16_t x70 = UINT16_MAX;
	int32_t x71 = 36161;
	uint8_t x72 = UINT8_MAX;

	t17 = (((x69==x70)&x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = 143894763LL;
	volatile int64_t x74 = -763005954253774LL;
	int32_t x75 = 817;
	int32_t x76 = INT32_MIN;
	static volatile int32_t t18 = 105;

	t18 = (((x73==x74)&x75)&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = 12315791730LL;
	static int64_t x79 = -385077LL;
	static int64_t x80 = INT64_MAX;

	t19 = (((x77==x78)&x79)&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x82 = INT16_MIN;
	static int16_t x84 = INT16_MIN;
	int32_t t20 = 203;

	t20 = (((x81==x82)&x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 3799245LLU;
	int8_t x86 = 1;
	volatile int16_t x87 = INT16_MIN;
	int64_t x88 = -1LL;

	t21 = (((x85==x86)&x87)&x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MAX;
	int32_t x91 = 0;
	int64_t x92 = -188990567845946131LL;
	volatile int64_t t22 = -13260265749835LL;

	t22 = (((x89==x90)&x91)&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static volatile int8_t x94 = -1;
	uint32_t x95 = 13U;
	int16_t x96 = -1;
	volatile uint32_t t23 = 3856U;

	t23 = (((x93==x94)&x95)&x96);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 1471;
	uint64_t x98 = 1596214LLU;
	int64_t x99 = -1LL;
	static volatile int32_t x100 = 1818596;
	int64_t t24 = 162LL;

	t24 = (((x97==x98)&x99)&x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int32_t x102 = INT32_MIN;
	int16_t x103 = INT16_MIN;
	static int32_t x104 = 1556136;
	volatile int32_t t25 = -1284876;

	t25 = (((x101==x102)&x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	static volatile int8_t x107 = -4;
	uint16_t x108 = 793U;
	volatile int32_t t26 = 222;

	t26 = (((x105==x106)&x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	int32_t x110 = -2026246;
	uint8_t x111 = 7U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -4;

	t27 = (((x109==x110)&x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 52789307774204LLU;
	uint64_t x114 = 16428812LLU;
	uint64_t x115 = 347334LLU;
	uint64_t x116 = UINT64_MAX;
	uint64_t t28 = 561LLU;

	t28 = (((x113==x114)&x115)&x116);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = 3LL;
	static int16_t x119 = -1;
	int8_t x120 = 26;
	int32_t t29 = -5870;

	t29 = (((x117==x118)&x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 249;
	int8_t x122 = -28;
	int16_t x123 = INT16_MIN;
	static uint32_t x124 = 25U;

	t30 = (((x121==x122)&x123)&x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	uint64_t x126 = 41LLU;
	static int32_t x127 = INT32_MIN;
	volatile int8_t x128 = INT8_MIN;
	volatile int32_t t31 = -6872183;

	t31 = (((x125==x126)&x127)&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = -939;
	int16_t x131 = 781;
	uint8_t x132 = 126U;

	t32 = (((x129==x130)&x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = UINT16_MAX;
	uint32_t x135 = 1799U;
	int64_t t33 = 3434864276LL;

	t33 = (((x133==x134)&x135)&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 157703411430340334LLU;
	int8_t x139 = -1;
	volatile int8_t x140 = -1;
	volatile int32_t t34 = -501;

	t34 = (((x137==x138)&x139)&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -1;
	volatile int32_t x142 = INT32_MIN;
	uint64_t x143 = 1434LLU;
	uint8_t x144 = 3U;

	t35 = (((x141==x142)&x143)&x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MAX;
	uint64_t x147 = 6014512LLU;
	volatile uint8_t x148 = 1U;
	volatile uint64_t t36 = 521422042545641LLU;

	t36 = (((x145==x146)&x147)&x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static int32_t x150 = INT32_MAX;
	int8_t x151 = -1;
	int8_t x152 = 2;

	t37 = (((x149==x150)&x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	int64_t x154 = 0LL;
	static int8_t x155 = INT8_MIN;
	uint64_t x156 = 591225523LLU;

	t38 = (((x153==x154)&x155)&x156);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 1967795062LLU;
	static uint16_t x158 = 2U;
	int16_t x160 = INT16_MIN;
	int32_t t39 = 501;

	t39 = (((x157==x158)&x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MAX;
	int64_t x164 = -2LL;
	int64_t t40 = 219875LL;

	t40 = (((x161==x162)&x163)&x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -32;
	static int8_t x166 = INT8_MAX;
	static int64_t x168 = -23006799016971LL;
	volatile uint64_t t41 = 66LLU;

	t41 = (((x165==x166)&x167)&x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MIN;
	static volatile int16_t x170 = INT16_MAX;
	volatile int32_t t42 = 3;

	t42 = (((x169==x170)&x171)&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MIN;
	static volatile int32_t x176 = INT32_MIN;
	static int32_t t43 = 0;

	t43 = (((x173==x174)&x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	static uint16_t x178 = 276U;
	int32_t x179 = 1;
	static int32_t x180 = INT32_MAX;

	t44 = (((x177==x178)&x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = 94;
	int32_t x183 = INT32_MIN;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = -27;

	t45 = (((x181==x182)&x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	static volatile int32_t t46 = 39769;

	t46 = (((x185==x186)&x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 128696017974LLU;
	volatile int64_t x190 = INT64_MAX;
	uint16_t x191 = 1199U;
	uint16_t x192 = 14514U;
	int32_t t47 = 379;

	t47 = (((x189==x190)&x191)&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = INT8_MAX;
	volatile uint16_t x196 = 4U;
	static volatile int32_t t48 = -7177;

	t48 = (((x193==x194)&x195)&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = -54684LL;
	static int64_t x198 = -1LL;
	int16_t x199 = INT16_MAX;
	static int8_t x200 = INT8_MIN;
	volatile int32_t t49 = -328659857;

	t49 = (((x197==x198)&x199)&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	uint16_t x202 = 1U;
	uint8_t x203 = UINT8_MAX;
	int8_t x204 = INT8_MAX;
	static volatile int32_t t50 = -1;

	t50 = (((x201==x202)&x203)&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 1483794159U;
	uint8_t x206 = 4U;
	uint8_t x207 = UINT8_MAX;
	volatile int64_t x208 = -1LL;
	volatile int64_t t51 = 140132296746LL;

	t51 = (((x205==x206)&x207)&x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x210 = 25U;
	int32_t x211 = INT32_MAX;
	uint64_t x212 = 13177LLU;
	volatile uint64_t t52 = 60092LLU;

	t52 = (((x209==x210)&x211)&x212);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = 7410;
	uint64_t x214 = 218686755450LLU;
	int32_t x215 = INT32_MAX;
	int32_t x216 = -1;
	static volatile int32_t t53 = -42873443;

	t53 = (((x213==x214)&x215)&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	uint8_t x218 = 17U;
	static uint8_t x219 = 111U;
	uint64_t x220 = UINT64_MAX;
	uint64_t t54 = 63790954363874LLU;

	t54 = (((x217==x218)&x219)&x220);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 0U;
	int8_t x222 = INT8_MAX;
	static int16_t x223 = INT16_MIN;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t55 = 3325502LLU;

	t55 = (((x221==x222)&x223)&x224);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = -553;
	static int8_t x227 = INT8_MIN;
	uint16_t x228 = 16U;
	static int32_t t56 = 29;

	t56 = (((x225==x226)&x227)&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	int8_t x231 = INT8_MAX;
	uint8_t x232 = 55U;
	static volatile int32_t t57 = -5578;

	t57 = (((x229==x230)&x231)&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x234 = INT64_MIN;
	volatile int8_t x236 = -1;
	int32_t t58 = -207536832;

	t58 = (((x233==x234)&x235)&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -67;
	uint32_t x238 = 2774377U;
	volatile int8_t x239 = INT8_MIN;
	uint16_t x240 = UINT16_MAX;

	t59 = (((x237==x238)&x239)&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 1U;
	static int32_t x242 = INT32_MIN;
	int64_t x243 = INT64_MAX;
	static uint64_t x244 = UINT64_MAX;
	static uint64_t t60 = 541795LLU;

	t60 = (((x241==x242)&x243)&x244);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x246 = 6844540076LLU;
	int32_t x248 = -563047055;
	volatile int32_t t61 = -689;

	t61 = (((x245==x246)&x247)&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x250 = INT16_MIN;
	uint32_t x251 = 1023205U;
	int32_t x252 = INT32_MIN;
	uint32_t t62 = 23047U;

	t62 = (((x249==x250)&x251)&x252);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	volatile int32_t x254 = -1;
	int16_t x255 = INT16_MAX;
	uint16_t x256 = 28U;
	int32_t t63 = 3;

	t63 = (((x253==x254)&x255)&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MAX;
	uint64_t x258 = UINT64_MAX;
	uint64_t x259 = 79LLU;
	uint16_t x260 = UINT16_MAX;

	t64 = (((x257==x258)&x259)&x260);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x261 = UINT32_MAX;
	static volatile int16_t x262 = INT16_MAX;
	volatile int32_t x263 = INT32_MIN;
	int32_t x264 = 7974;
	int32_t t65 = 1954;

	t65 = (((x261==x262)&x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1090549470LL;
	uint32_t x267 = 14U;
	volatile uint32_t x268 = 14U;

	t66 = (((x265==x266)&x267)&x268);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	int8_t x270 = INT8_MAX;
	int8_t x271 = INT8_MIN;

	t67 = (((x269==x270)&x271)&x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	volatile uint8_t x276 = 6U;
	int32_t t68 = 17130273;

	t68 = (((x273==x274)&x275)&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int32_t x278 = -1;
	uint8_t x279 = 5U;
	uint16_t x280 = 2U;
	int32_t t69 = 341698;

	t69 = (((x277==x278)&x279)&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x283 = INT8_MIN;
	uint16_t x284 = 512U;

	t70 = (((x281==x282)&x283)&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	static volatile int16_t x286 = INT16_MIN;
	static int64_t x287 = -1LL;
	uint64_t x288 = 20LLU;

	t71 = (((x285==x286)&x287)&x288);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	uint8_t x290 = 0U;

	t72 = (((x289==x290)&x291)&x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -4290538906095LL;
	int16_t x294 = INT16_MIN;
	volatile int32_t x295 = INT32_MAX;
	volatile uint64_t x296 = UINT64_MAX;
	volatile uint64_t t73 = 14LLU;

	t73 = (((x293==x294)&x295)&x296);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 48U;
	int8_t x298 = INT8_MAX;
	int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MAX;
	int64_t t74 = 64139LL;

	t74 = (((x297==x298)&x299)&x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 166U;
	int16_t x302 = -1;

	t75 = (((x301==x302)&x303)&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = 1;
	int32_t x306 = INT32_MIN;
	static int32_t x307 = INT32_MIN;
	uint32_t t76 = 165U;

	t76 = (((x305==x306)&x307)&x308);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MAX;
	int16_t x310 = INT16_MIN;
	volatile uint64_t x311 = UINT64_MAX;
	uint32_t x312 = 13757847U;

	t77 = (((x309==x310)&x311)&x312);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MAX;
	int8_t x315 = -5;
	static int64_t x316 = INT64_MIN;
	volatile int64_t t78 = 879019458175LL;

	t78 = (((x313==x314)&x315)&x316);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = -10669;
	static uint8_t x318 = 2U;
	volatile int8_t x320 = -2;

	t79 = (((x317==x318)&x319)&x320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = 42U;
	uint16_t x322 = 2U;
	uint64_t x323 = 981656910727937LLU;
	int8_t x324 = INT8_MAX;
	uint64_t t80 = 278096266095665408LLU;

	t80 = (((x321==x322)&x323)&x324);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = 3LL;
	uint64_t x326 = 22014886LLU;
	volatile uint8_t x327 = 33U;
	static uint8_t x328 = 3U;
	static volatile int32_t t81 = 166;

	t81 = (((x325==x326)&x327)&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x330 = INT32_MIN;
	volatile int32_t t82 = 8;

	t82 = (((x329==x330)&x331)&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	int16_t x336 = INT16_MIN;
	volatile int32_t t83 = -12062;

	t83 = (((x333==x334)&x335)&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	volatile int32_t x338 = INT32_MAX;
	int32_t t84 = 18910;

	t84 = (((x337==x338)&x339)&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x341 = 0U;
	uint64_t x342 = UINT64_MAX;
	volatile int32_t x343 = 687872953;
	volatile uint16_t x344 = UINT16_MAX;

	t85 = (((x341==x342)&x343)&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	volatile uint64_t x346 = 59274745007LLU;
	volatile int32_t x347 = INT32_MIN;

	t86 = (((x345==x346)&x347)&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 30088LLU;
	int64_t x351 = -3436LL;
	int8_t x352 = INT8_MAX;

	t87 = (((x349==x350)&x351)&x352);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	uint8_t x355 = 0U;
	int32_t x356 = INT32_MIN;
	volatile int32_t t88 = -55643;

	t88 = (((x353==x354)&x355)&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x357 = INT64_MAX;
	static uint8_t x358 = 36U;
	int8_t x359 = INT8_MAX;
	int64_t x360 = INT64_MAX;
	int64_t t89 = 59673688852472LL;

	t89 = (((x357==x358)&x359)&x360);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x361 = UINT32_MAX;
	int32_t x363 = -2;
	static volatile uint32_t t90 = 686846U;

	t90 = (((x361==x362)&x363)&x364);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x366 = -59;
	uint8_t x367 = 0U;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = -6646;

	t91 = (((x365==x366)&x367)&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MIN;
	int8_t x371 = INT8_MAX;
	int32_t t92 = 5139610;

	t92 = (((x369==x370)&x371)&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x373 = 0U;
	int64_t x375 = INT64_MIN;
	static uint64_t x376 = 456104960982354LLU;

	t93 = (((x373==x374)&x375)&x376);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x378 = INT8_MAX;
	volatile int16_t x379 = -203;
	volatile int8_t x380 = -1;
	int32_t t94 = -32375;

	t94 = (((x377==x378)&x379)&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 1;
	int8_t x383 = INT8_MIN;
	uint8_t x384 = 13U;

	t95 = (((x381==x382)&x383)&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	uint8_t x386 = UINT8_MAX;
	static int8_t x388 = INT8_MIN;
	uint32_t t96 = 374669714U;

	t96 = (((x385==x386)&x387)&x388);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x390 = 4707729U;
	int32_t x391 = INT32_MAX;
	int8_t x392 = -2;

	t97 = (((x389==x390)&x391)&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	int8_t x394 = -1;
	volatile int8_t x395 = -1;
	int16_t x396 = 258;
	static volatile int32_t t98 = -13868693;

	t98 = (((x393==x394)&x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	static uint32_t x398 = UINT32_MAX;
	static uint8_t x399 = UINT8_MAX;
	uint8_t x400 = UINT8_MAX;

	t99 = (((x397==x398)&x399)&x400);

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


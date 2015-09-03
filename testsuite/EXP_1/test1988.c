#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
static uint16_t x12 = 33U;
int64_t x16 = INT64_MIN;
int16_t x18 = INT16_MIN;
int16_t x22 = -1;
int8_t x26 = -27;
uint8_t x27 = 57U;
uint32_t x33 = 1594975U;
volatile int8_t x37 = INT8_MIN;
int32_t x38 = 93186440;
int16_t x39 = INT16_MAX;
uint32_t x43 = UINT32_MAX;
int16_t x47 = 1923;
uint16_t x49 = 20840U;
static int32_t x63 = INT32_MAX;
int32_t x65 = INT32_MIN;
int8_t x66 = INT8_MAX;
volatile int64_t t16 = -491994LL;
int8_t x73 = INT8_MIN;
volatile int32_t x78 = 0;
int16_t x85 = INT16_MIN;
int32_t t21 = -154;
uint8_t x89 = 10U;
int8_t x91 = -1;
static uint32_t x94 = 26628U;
uint64_t x95 = UINT64_MAX;
int32_t t24 = -1;
volatile int32_t x101 = -1;
int32_t x107 = -1;
volatile uint64_t x109 = UINT64_MAX;
int32_t x111 = INT32_MAX;
int32_t x114 = INT32_MIN;
uint64_t x116 = UINT64_MAX;
uint8_t x118 = 1U;
static int16_t x121 = 14808;
uint8_t x125 = 19U;
volatile uint64_t t31 = 851683LLU;
volatile int32_t t32 = -104952;
uint8_t x133 = 3U;
volatile int16_t x134 = INT16_MIN;
static int32_t t33 = -8846246;
static uint64_t t34 = UINT64_MAX;
int32_t t35 = INT32_MAX;
int8_t x150 = INT8_MAX;
int16_t x155 = INT16_MIN;
static volatile int64_t x163 = -1LL;
static int8_t x170 = INT8_MIN;
volatile int32_t t42 = -234537;
volatile int32_t x178 = INT32_MAX;
static int8_t x179 = INT8_MAX;
int16_t x180 = INT16_MAX;
uint32_t x182 = UINT32_MAX;
static int16_t x185 = INT16_MIN;
int64_t x188 = INT64_MIN;
volatile int16_t x199 = INT16_MIN;
static int32_t x201 = -14;
volatile int32_t x204 = 14;
uint8_t x212 = 1U;
int32_t t52 = -1;
uint64_t x215 = UINT64_MAX;
uint8_t x216 = UINT8_MAX;
volatile int64_t t54 = INT64_MIN;
volatile int32_t t55 = -2569;
volatile uint64_t t56 = 5224046621008LLU;
int16_t x241 = INT16_MIN;
int64_t x249 = 2655007303LL;
volatile int8_t x262 = INT8_MAX;
int32_t t67 = -388;
volatile int64_t t69 = 1465319855938LL;
static int8_t x283 = INT8_MIN;
static int8_t x288 = INT8_MIN;
static uint8_t x289 = UINT8_MAX;
int16_t x292 = INT16_MIN;
static volatile int32_t x294 = INT32_MIN;
int32_t x296 = -38163;
static uint32_t x300 = 28U;
uint32_t t74 = 691442U;
int32_t x302 = INT32_MIN;
volatile int32_t t75 = 127;
static int64_t x308 = INT64_MAX;
static int8_t x310 = INT8_MIN;
int32_t x314 = INT32_MIN;
int64_t x315 = INT64_MIN;
int32_t x316 = -513584747;
int64_t x317 = INT64_MAX;
volatile int64_t x320 = INT64_MIN;
int16_t x330 = 14;
int32_t x334 = INT32_MAX;
static int64_t x344 = INT64_MAX;
uint8_t x348 = 1U;
volatile int64_t x349 = INT64_MIN;
static int16_t x350 = 55;
static int16_t x357 = 3;
uint64_t x365 = UINT64_MAX;
uint64_t x372 = 256163043LLU;
static uint16_t x373 = 188U;
int32_t x376 = -1;
static volatile int64_t x377 = 23LL;
static int64_t x378 = INT64_MIN;
uint16_t x385 = 2901U;
int16_t x387 = 54;
static int32_t t97 = 3599;
static uint64_t x393 = UINT64_MAX;
int16_t x398 = INT16_MIN;


void f0(void) {
	int16_t x1 = 1;
	uint64_t x2 = UINT64_MAX;
	static int64_t x4 = INT64_MAX;
	int64_t t0 = INT64_MAX;

	t0 = (((x1|x2)<=x3)|x4);

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1U;
	uint16_t x6 = UINT16_MAX;
	uint16_t x7 = 12673U;
	int8_t x8 = -46;
	static int32_t t1 = 292754373;

	t1 = (((x5|x6)<=x7)|x8);

	if (t1 != -46) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int8_t x10 = 1;
	static int64_t x11 = -32618LL;
	int32_t t2 = 60;

	t2 = (((x9|x10)<=x11)|x12);

	if (t2 != 33) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = -1;
	int8_t x15 = -30;
	int64_t t3 = INT64_MIN;

	t3 = (((x13|x14)<=x15)|x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	static int16_t x19 = INT16_MAX;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = 749432;

	t4 = (((x17|x18)<=x19)|x20);

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -2;
	static volatile uint8_t x23 = UINT8_MAX;
	static uint16_t x24 = 3U;
	volatile int32_t t5 = 109987;

	t5 = (((x21|x22)<=x23)|x24);

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int32_t x28 = INT32_MAX;
	volatile int32_t t6 = INT32_MAX;

	t6 = (((x25|x26)<=x27)|x28);

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int16_t x30 = -1554;
	int32_t x31 = -1;
	int64_t x32 = -1LL;
	volatile int64_t t7 = 201LL;

	t7 = (((x29|x30)<=x31)|x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -1;
	uint8_t x35 = 31U;
	int16_t x36 = INT16_MAX;
	static int32_t t8 = -69799;

	t8 = (((x33|x34)<=x35)|x36);

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x40 = 1;
	volatile int32_t t9 = 1;

	t9 = (((x37|x38)<=x39)|x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 67U;
	uint32_t x42 = 0U;
	uint32_t x44 = 109U;
	static uint32_t t10 = 216999943U;

	t10 = (((x41|x42)<=x43)|x44);

	if (t10 != 109U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int64_t x46 = 1032839LL;
	static int32_t x48 = INT32_MAX;
	volatile int32_t t11 = INT32_MAX;

	t11 = (((x45|x46)<=x47)|x48);

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = 14021LL;
	int16_t x51 = INT16_MIN;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t12 = 5;

	t12 = (((x49|x50)<=x51)|x52);

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	uint16_t x54 = UINT16_MAX;
	int16_t x55 = INT16_MIN;
	static uint16_t x56 = 127U;
	int32_t t13 = 62917;

	t13 = (((x53|x54)<=x55)|x56);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	static uint64_t x58 = 929525229466457LLU;
	int64_t x59 = 6LL;
	int32_t x60 = -374;
	volatile int32_t t14 = 5230;

	t14 = (((x57|x58)<=x59)|x60);

	if (t14 != -374) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x61 = 86U;
	uint32_t x62 = UINT32_MAX;
	static uint64_t x64 = 6375144170727594945LLU;
	static volatile uint64_t t15 = 6193729414621LLU;

	t15 = (((x61|x62)<=x63)|x64);

	if (t15 != 6375144170727594945LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x67 = INT64_MAX;
	int64_t x68 = 28801LL;

	t16 = (((x65|x66)<=x67)|x68);

	if (t16 != 28801LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -254584LL;
	int8_t x70 = INT8_MAX;
	static uint64_t x71 = 183269248765019LLU;
	int32_t x72 = INT32_MAX;
	volatile int32_t t17 = INT32_MAX;

	t17 = (((x69|x70)<=x71)|x72);

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x74 = INT32_MAX;
	static volatile uint32_t x75 = 5405234U;
	static volatile uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = 0;

	t18 = (((x73|x74)<=x75)|x76);

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int32_t x79 = -3;
	uint32_t x80 = 24U;
	uint32_t t19 = 1252191940U;

	t19 = (((x77|x78)<=x79)|x80);

	if (t19 != 24U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -816398186822077LL;
	int32_t x82 = INT32_MIN;
	int32_t x83 = -71684;
	static int64_t x84 = INT64_MIN;
	int64_t t20 = 869LL;

	t20 = (((x81|x82)<=x83)|x84);

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x86 = -1;
	uint16_t x87 = 22840U;
	volatile int8_t x88 = -1;

	t21 = (((x85|x86)<=x87)|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	uint64_t x92 = 2LLU;
	uint64_t t22 = 6712562171LLU;

	t22 = (((x89|x90)<=x91)|x92);

	if (t22 != 3LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	static int8_t x96 = -1;
	int32_t t23 = 30001829;

	t23 = (((x93|x94)<=x95)|x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	int8_t x98 = INT8_MAX;
	uint64_t x99 = UINT64_MAX;
	uint8_t x100 = 0U;

	t24 = (((x97|x98)<=x99)|x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = 8337U;
	static int8_t x103 = 0;
	volatile int64_t x104 = 38483799LL;
	static volatile int64_t t25 = 9582332976513LL;

	t25 = (((x101|x102)<=x103)|x104);

	if (t25 != 38483799LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	uint64_t x106 = 35474798109LLU;
	uint8_t x108 = 16U;
	static int32_t t26 = -13110503;

	t26 = (((x105|x106)<=x107)|x108);

	if (t26 != 17) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = UINT8_MAX;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = 1;

	t27 = (((x109|x110)<=x111)|x112);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int32_t x115 = INT32_MIN;
	static uint64_t t28 = UINT64_MAX;

	t28 = (((x113|x114)<=x115)|x116);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 0;
	int8_t x119 = INT8_MAX;
	int64_t x120 = INT64_MAX;
	int64_t t29 = INT64_MAX;

	t29 = (((x117|x118)<=x119)|x120);

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = -99954815048943732LL;
	int8_t x123 = INT8_MAX;
	uint16_t x124 = 3708U;
	int32_t t30 = 509;

	t30 = (((x121|x122)<=x123)|x124);

	if (t30 != 3709) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -1;
	uint16_t x127 = 7U;
	uint64_t x128 = 210344177659143275LLU;

	t31 = (((x125|x126)<=x127)|x128);

	if (t31 != 210344177659143275LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 3U;
	int64_t x130 = 555LL;
	static int64_t x131 = INT64_MIN;
	int8_t x132 = -2;

	t32 = (((x129|x130)<=x131)|x132);

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x135 = 58U;
	int8_t x136 = INT8_MAX;

	t33 = (((x133|x134)<=x135)|x136);

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = -4056;
	volatile uint64_t x138 = 312783264042925334LLU;
	int16_t x139 = 4;
	volatile uint64_t x140 = UINT64_MAX;

	t34 = (((x137|x138)<=x139)|x140);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	static int32_t x142 = -14;
	int8_t x143 = 0;
	int32_t x144 = INT32_MAX;

	t35 = (((x141|x142)<=x143)|x144);

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = -1;
	uint8_t x146 = 14U;
	int64_t x147 = INT64_MIN;
	uint8_t x148 = UINT8_MAX;
	int32_t t36 = 0;

	t36 = (((x145|x146)<=x147)|x148);

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 254;
	volatile int32_t x151 = -1;
	int8_t x152 = -1;
	volatile int32_t t37 = -26;

	t37 = (((x149|x150)<=x151)|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	volatile int16_t x154 = INT16_MIN;
	uint32_t x156 = 285402721U;
	volatile uint32_t t38 = 371409U;

	t38 = (((x153|x154)<=x155)|x156);

	if (t38 != 285402721U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = UINT32_MAX;
	int16_t x158 = INT16_MIN;
	volatile int16_t x159 = INT16_MIN;
	volatile int32_t x160 = 2;
	volatile int32_t t39 = 17223;

	t39 = (((x157|x158)<=x159)|x160);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = 0U;
	int32_t x162 = INT32_MIN;
	static int32_t x164 = INT32_MIN;
	static volatile int32_t t40 = INT32_MIN;

	t40 = (((x161|x162)<=x163)|x164);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	int16_t x166 = -6;
	uint32_t x167 = 12485744U;
	uint8_t x168 = 19U;
	volatile int32_t t41 = 18086;

	t41 = (((x165|x166)<=x167)|x168);

	if (t41 != 19) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x169 = 67065722416LL;
	int64_t x171 = -7587LL;
	static int32_t x172 = -22555;

	t42 = (((x169|x170)<=x171)|x172);

	if (t42 != -22555) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = -1;
	volatile uint8_t x174 = 3U;
	int32_t x175 = INT32_MAX;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 2;

	t43 = (((x173|x174)<=x175)|x176);

	if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 3110497U;
	static volatile int32_t t44 = 3;

	t44 = (((x177|x178)<=x179)|x180);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	static uint16_t x183 = UINT16_MAX;
	int16_t x184 = INT16_MAX;
	int32_t t45 = -16731435;

	t45 = (((x181|x182)<=x183)|x184);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x186 = 8;
	static int16_t x187 = -13141;
	static int64_t t46 = -853197970LL;

	t46 = (((x185|x186)<=x187)|x188);

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MIN;
	volatile uint16_t x191 = UINT16_MAX;
	int16_t x192 = -3825;
	static volatile int32_t t47 = -5005199;

	t47 = (((x189|x190)<=x191)|x192);

	if (t47 != -3825) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 3210U;
	int64_t x194 = -1290680011303783175LL;
	volatile int16_t x195 = 478;
	static uint64_t x196 = 11283LLU;
	static volatile uint64_t t48 = 57137585545405635LLU;

	t48 = (((x193|x194)<=x195)|x196);

	if (t48 != 11283LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x197 = 200376LLU;
	static int32_t x198 = INT32_MIN;
	static int8_t x200 = INT8_MIN;
	int32_t t49 = -866;

	t49 = (((x197|x198)<=x199)|x200);

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x202 = 545948049832941LLU;
	int8_t x203 = INT8_MIN;
	int32_t t50 = 0;

	t50 = (((x201|x202)<=x203)|x204);

	if (t50 != 14) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 509U;
	int64_t x206 = -1LL;
	volatile int16_t x207 = INT16_MIN;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = INT32_MIN;

	t51 = (((x205|x206)<=x207)|x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 83U;
	int16_t x210 = -1;
	static int16_t x211 = INT16_MAX;

	t52 = (((x209|x210)<=x211)|x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MIN;
	int32_t t53 = 329;

	t53 = (((x213|x214)<=x215)|x216);

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	static volatile uint64_t x218 = UINT64_MAX;
	volatile uint64_t x219 = 11918201LLU;
	static int64_t x220 = INT64_MIN;

	t54 = (((x217|x218)<=x219)|x220);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 1LL;
	volatile int32_t x222 = -116050;
	static uint16_t x223 = UINT16_MAX;
	int32_t x224 = -1051564;

	t55 = (((x221|x222)<=x223)|x224);

	if (t55 != -1051563) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int32_t x226 = -16030;
	uint16_t x227 = 2U;
	uint64_t x228 = 69746LLU;

	t56 = (((x225|x226)<=x227)|x228);

	if (t56 != 69747LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	uint16_t x230 = 9297U;
	static uint32_t x231 = 4890U;
	int8_t x232 = 2;
	volatile int32_t t57 = -2628616;

	t57 = (((x229|x230)<=x231)|x232);

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 17914554840190LLU;
	int32_t x234 = -1;
	volatile uint8_t x235 = 31U;
	uint64_t x236 = 26580386000LLU;
	uint64_t t58 = 839LLU;

	t58 = (((x233|x234)<=x235)|x236);

	if (t58 != 26580386000LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -213699877;
	volatile int64_t x238 = INT64_MIN;
	int16_t x239 = INT16_MIN;
	volatile int16_t x240 = -1;
	volatile int32_t t59 = 1645327;

	t59 = (((x237|x238)<=x239)|x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x242 = UINT64_MAX;
	int16_t x243 = -1;
	volatile int32_t x244 = 33770990;
	volatile int32_t t60 = 2;

	t60 = (((x241|x242)<=x243)|x244);

	if (t60 != 33770991) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	static int32_t x246 = -1;
	volatile uint64_t x247 = 4402592132LLU;
	volatile int16_t x248 = INT16_MIN;
	volatile int32_t t61 = -52;

	t61 = (((x245|x246)<=x247)|x248);

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = -15;
	int8_t x251 = 50;
	int64_t x252 = -1LL;
	volatile int64_t t62 = 3617873547470LL;

	t62 = (((x249|x250)<=x251)|x252);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MIN;
	static volatile int8_t x254 = 0;
	int16_t x255 = INT16_MAX;
	int8_t x256 = -1;
	volatile int32_t t63 = 0;

	t63 = (((x253|x254)<=x255)|x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	int64_t x258 = 9414559736804979LL;
	int16_t x259 = 877;
	int64_t x260 = -1LL;
	int64_t t64 = -4056941012824397LL;

	t64 = (((x257|x258)<=x259)|x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = INT32_MIN;
	int8_t x263 = INT8_MAX;
	uint16_t x264 = UINT16_MAX;
	static volatile int32_t t65 = -7405055;

	t65 = (((x261|x262)<=x263)|x264);

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = 1035108031783543LLU;
	int16_t x266 = -1;
	static uint16_t x267 = 28U;
	int32_t x268 = -1;
	int32_t t66 = -1009959;

	t66 = (((x265|x266)<=x267)|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = INT64_MIN;
	static volatile int64_t x270 = -12LL;
	int8_t x271 = INT8_MAX;
	static int8_t x272 = INT8_MIN;

	t67 = (((x269|x270)<=x271)|x272);

	if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	static int64_t x274 = -1LL;
	int8_t x275 = -11;
	volatile uint16_t x276 = 15U;
	static volatile int32_t t68 = -628088627;

	t68 = (((x273|x274)<=x275)|x276);

	if (t68 != 15) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = INT8_MIN;
	int32_t x278 = INT32_MIN;
	int16_t x279 = INT16_MIN;
	int64_t x280 = -14858413LL;

	t69 = (((x277|x278)<=x279)|x280);

	if (t69 != -14858413LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = UINT16_MAX;
	volatile uint8_t x282 = 109U;
	static uint16_t x284 = UINT16_MAX;
	static int32_t t70 = 3545;

	t70 = (((x281|x282)<=x283)|x284);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MIN;
	uint16_t x287 = 5427U;
	int32_t t71 = -28492360;

	t71 = (((x285|x286)<=x287)|x288);

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MAX;
	volatile int32_t t72 = 121;

	t72 = (((x289|x290)<=x291)|x292);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = UINT32_MAX;
	volatile int16_t x295 = 17;
	int32_t t73 = -1216983;

	t73 = (((x293|x294)<=x295)|x296);

	if (t73 != -38163) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	static volatile int8_t x298 = INT8_MIN;
	static volatile int8_t x299 = INT8_MAX;

	t74 = (((x297|x298)<=x299)|x300);

	if (t74 != 29U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile uint64_t x303 = 1015369303465LLU;
	static int16_t x304 = INT16_MIN;

	t75 = (((x301|x302)<=x303)|x304);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x305 = UINT64_MAX;
	uint64_t x306 = 48044509LLU;
	int32_t x307 = INT32_MIN;
	volatile int64_t t76 = INT64_MAX;

	t76 = (((x305|x306)<=x307)|x308);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -3;
	static int16_t x311 = INT16_MAX;
	uint32_t x312 = 2190668U;
	volatile uint32_t t77 = 1522275U;

	t77 = (((x309|x310)<=x311)|x312);

	if (t77 != 2190669U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x313 = 34U;
	int32_t t78 = -31882935;

	t78 = (((x313|x314)<=x315)|x316);

	if (t78 != -513584747) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x318 = INT8_MIN;
	static volatile uint32_t x319 = UINT32_MAX;
	volatile int64_t t79 = 1044451959254LL;

	t79 = (((x317|x318)<=x319)|x320);

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x321 = INT64_MIN;
	int64_t x322 = INT64_MIN;
	int8_t x323 = INT8_MIN;
	volatile int64_t x324 = -34967648930856813LL;
	int64_t t80 = -1895071146649LL;

	t80 = (((x321|x322)<=x323)|x324);

	if (t80 != -34967648930856813LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = UINT64_MAX;
	volatile int8_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	int64_t x328 = 123824993210950431LL;
	int64_t t81 = -56152569LL;

	t81 = (((x325|x326)<=x327)|x328);

	if (t81 != 123824993210950431LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int8_t x331 = INT8_MIN;
	static int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 25;

	t82 = (((x329|x330)<=x331)|x332);

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 19947469LL;
	volatile uint32_t x335 = UINT32_MAX;
	static int64_t x336 = INT64_MIN;
	int64_t t83 = 1LL;

	t83 = (((x333|x334)<=x335)|x336);

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	volatile uint64_t x338 = 439014468082523LLU;
	int16_t x339 = INT16_MIN;
	volatile int64_t x340 = 1082192LL;
	int64_t t84 = -12283091036569LL;

	t84 = (((x337|x338)<=x339)|x340);

	if (t84 != 1082193LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	uint16_t x342 = UINT16_MAX;
	int32_t x343 = INT32_MIN;
	int64_t t85 = INT64_MAX;

	t85 = (((x341|x342)<=x343)|x344);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	static int16_t x346 = 187;
	uint64_t x347 = 831334782454971LLU;
	volatile int32_t t86 = -2426;

	t86 = (((x345|x346)<=x347)|x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x351 = INT32_MIN;
	static int8_t x352 = INT8_MIN;
	int32_t t87 = -56641576;

	t87 = (((x349|x350)<=x351)|x352);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 13452U;
	int64_t x354 = INT64_MIN;
	uint64_t x355 = 1096231295191316978LLU;
	static volatile int32_t x356 = INT32_MAX;
	int32_t t88 = INT32_MAX;

	t88 = (((x353|x354)<=x355)|x356);

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x358 = 16123241U;
	int16_t x359 = -8;
	int8_t x360 = -1;
	int32_t t89 = 219866270;

	t89 = (((x357|x358)<=x359)|x360);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 16163U;
	static int16_t x362 = -828;
	uint32_t x363 = 1449U;
	uint16_t x364 = UINT16_MAX;
	static int32_t t90 = 290540247;

	t90 = (((x361|x362)<=x363)|x364);

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x366 = 9LLU;
	int16_t x367 = 3345;
	static int16_t x368 = -6;
	static volatile int32_t t91 = 187842569;

	t91 = (((x365|x366)<=x367)|x368);

	if (t91 != -6) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -6667;
	uint32_t x370 = 977637U;
	static int8_t x371 = INT8_MAX;
	volatile uint64_t t92 = 1LLU;

	t92 = (((x369|x370)<=x371)|x372);

	if (t92 != 256163043LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x374 = UINT8_MAX;
	int16_t x375 = -1;
	int32_t t93 = 456874496;

	t93 = (((x373|x374)<=x375)|x376);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x379 = 3447U;
	uint8_t x380 = UINT8_MAX;
	int32_t t94 = -6951411;

	t94 = (((x377|x378)<=x379)|x380);

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	int64_t x382 = -136704481910512LL;
	volatile uint16_t x383 = 13U;
	int64_t x384 = INT64_MIN;
	volatile int64_t t95 = -4753604934LL;

	t95 = (((x381|x382)<=x383)|x384);

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = INT32_MIN;
	uint64_t x388 = UINT64_MAX;
	static volatile uint64_t t96 = UINT64_MAX;

	t96 = (((x385|x386)<=x387)|x388);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x389 = INT8_MIN;
	uint32_t x390 = 1815U;
	volatile int32_t x391 = INT32_MAX;
	int32_t x392 = 1;

	t97 = (((x389|x390)<=x391)|x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x394 = -1;
	int16_t x395 = 13872;
	uint8_t x396 = 3U;
	volatile int32_t t98 = 59515210;

	t98 = (((x393|x394)<=x395)|x396);

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	int32_t x399 = INT32_MIN;
	volatile int8_t x400 = INT8_MIN;
	static int32_t t99 = -105936339;

	t99 = (((x397|x398)<=x399)|x400);

	if (t99 != -128) { NG(); } else { ; }
	
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


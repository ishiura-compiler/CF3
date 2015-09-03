#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x16 = 11U;
int64_t x24 = INT64_MAX;
int64_t t6 = -4007861LL;
static int32_t x29 = -1;
int32_t x36 = -1;
volatile int32_t t10 = -124820;
int32_t x52 = -8;
volatile uint32_t t17 = 38545U;
int64_t x73 = INT64_MAX;
static int64_t x78 = -1LL;
volatile uint16_t x80 = 3U;
volatile int32_t t19 = -278;
int32_t x81 = -17498172;
static int32_t t20 = -19026314;
static int8_t x89 = INT8_MAX;
volatile int16_t x90 = -1;
int32_t x96 = -1;
volatile int32_t t23 = 87050247;
int64_t t24 = -67535007885LL;
uint64_t x104 = 263567953945295LLU;
uint32_t x109 = 102445823U;
uint64_t x117 = UINT64_MAX;
int8_t x121 = INT8_MIN;
static int16_t x127 = -469;
int32_t t31 = -148130665;
uint8_t x129 = 1U;
int8_t x139 = INT8_MIN;
int16_t x140 = INT16_MIN;
static volatile int8_t x147 = INT8_MAX;
static int8_t x154 = 6;
int32_t x157 = 0;
int64_t x159 = INT64_MIN;
int8_t x164 = -24;
static int32_t x170 = -1;
int64_t x172 = -1LL;
volatile int16_t x174 = INT16_MIN;
int64_t x178 = INT64_MIN;
volatile int16_t x181 = -1;
uint64_t x186 = UINT64_MAX;
int32_t x188 = INT32_MIN;
int16_t x189 = INT16_MIN;
static int16_t x194 = INT16_MIN;
static uint64_t x203 = UINT64_MAX;
uint32_t t51 = 2939U;
uint32_t x215 = 1U;
static volatile int64_t x223 = -1LL;
int32_t t55 = -1;
uint16_t x226 = 0U;
static int32_t x233 = INT32_MIN;
static int64_t t58 = 47887949LL;
uint32_t x237 = 35U;
volatile int16_t x239 = INT16_MIN;
volatile int32_t x240 = 35;
int64_t x242 = INT64_MIN;
static volatile uint32_t x249 = UINT32_MAX;
uint16_t x260 = 7U;
volatile int8_t x263 = -1;
uint32_t t65 = 9U;
int32_t x266 = INT32_MAX;
uint8_t x267 = 0U;
static volatile int64_t t66 = 2304LL;
volatile int32_t t70 = 0;
int64_t x287 = INT64_MIN;
int32_t x288 = INT32_MIN;
int32_t t73 = 92190951;
int16_t x298 = INT16_MIN;
volatile int32_t t75 = -1;
static int32_t x307 = 60;
volatile int32_t x314 = INT32_MIN;
volatile uint64_t x318 = UINT64_MAX;
int64_t x328 = -1LL;
uint16_t x330 = 92U;
int16_t x334 = INT16_MIN;
int64_t x340 = 34609606126465LL;
int64_t t84 = 8292032173816689LL;
uint16_t x343 = 680U;
uint32_t x352 = UINT32_MAX;
static volatile int8_t x354 = -5;
int32_t x357 = INT32_MAX;
int16_t x361 = INT16_MIN;
static int64_t x364 = -10429929855268LL;
int16_t x370 = -1;
volatile int16_t x380 = INT16_MAX;
uint32_t x382 = 326567U;
uint16_t x385 = UINT16_MAX;
int64_t t96 = -25182LL;
static int16_t x389 = -15855;
int32_t t97 = -1759369;
static uint32_t x398 = 74454172U;
volatile int16_t x399 = INT16_MAX;


void f0(void) {
	volatile int32_t x1 = 2032;
	volatile int16_t x2 = INT16_MIN;
	volatile int32_t x3 = INT32_MIN;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = INT32_MIN;

	t0 = (((x1^x2)<=x3)^x4);

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int16_t x6 = INT16_MIN;
	static int32_t x7 = INT32_MIN;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -107660;

	t1 = (((x5^x6)<=x7)^x8);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 5806U;
	int16_t x10 = INT16_MIN;
	uint32_t x11 = 997002561U;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = UINT64_MAX;

	t2 = (((x9^x10)<=x11)^x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -15;
	static int16_t x14 = INT16_MIN;
	int16_t x15 = 8;
	volatile int32_t t3 = -2;

	t3 = (((x13^x14)<=x15)^x16);

	if (t3 != 11) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 36;
	int32_t x18 = INT32_MAX;
	int16_t x19 = -1;
	static volatile int8_t x20 = INT8_MAX;
	static volatile int32_t t4 = 1340619;

	t4 = (((x17^x18)<=x19)^x20);

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	uint32_t x22 = 755264866U;
	uint16_t x23 = 22458U;
	int64_t t5 = -14LL;

	t5 = (((x21^x22)<=x23)^x24);

	if (t5 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 45206636855LLU;
	static int8_t x26 = INT8_MIN;
	uint64_t x27 = UINT64_MAX;
	int64_t x28 = INT64_MIN;

	t6 = (((x25^x26)<=x27)^x28);

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 247U;
	volatile uint16_t x31 = UINT16_MAX;
	volatile int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -17;

	t7 = (((x29^x30)<=x31)^x32);

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -1;
	static volatile uint16_t x34 = 0U;
	volatile uint8_t x35 = 102U;
	int32_t t8 = 1;

	t8 = (((x33^x34)<=x35)^x36);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int32_t x38 = INT32_MAX;
	static int16_t x39 = INT16_MIN;
	volatile uint32_t x40 = 144U;
	volatile uint32_t t9 = 379963U;

	t9 = (((x37^x38)<=x39)^x40);

	if (t9 != 145U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int32_t x42 = 3473;
	int8_t x43 = 2;
	int16_t x44 = -1327;

	t10 = (((x41^x42)<=x43)^x44);

	if (t10 != -1327) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	volatile uint64_t x46 = UINT64_MAX;
	volatile uint8_t x47 = UINT8_MAX;
	int16_t x48 = -229;
	int32_t t11 = 79;

	t11 = (((x45^x46)<=x47)^x48);

	if (t11 != -229) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	volatile uint16_t x50 = 165U;
	int8_t x51 = INT8_MIN;
	volatile int32_t t12 = -300;

	t12 = (((x49^x50)<=x51)^x52);

	if (t12 != -7) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -1;
	int8_t x54 = -1;
	int32_t x55 = -33585;
	int32_t x56 = 1;
	volatile int32_t t13 = -2;

	t13 = (((x53^x54)<=x55)^x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	static int16_t x58 = -1;
	int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MIN;
	int64_t t14 = INT64_MIN;

	t14 = (((x57^x58)<=x59)^x60);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = UINT16_MAX;
	int16_t x62 = 2;
	static int16_t x63 = INT16_MAX;
	int8_t x64 = 44;
	int32_t t15 = -49601169;

	t15 = (((x61^x62)<=x63)^x64);

	if (t15 != 44) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 1;
	static int16_t x66 = -1;
	static int32_t x67 = 607;
	uint16_t x68 = 9U;
	int32_t t16 = -482546;

	t16 = (((x65^x66)<=x67)^x68);

	if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	volatile int8_t x71 = -52;
	uint32_t x72 = 1757819844U;

	t17 = (((x69^x70)<=x71)^x72);

	if (t17 != 1757819845U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = INT64_MIN;
	uint32_t x75 = UINT32_MAX;
	int32_t x76 = -1;
	volatile int32_t t18 = -2;

	t18 = (((x73^x74)<=x75)^x76);

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -3961;
	static uint32_t x79 = 1U;

	t19 = (((x77^x78)<=x79)^x80);

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x82 = 8137444U;
	volatile uint32_t x83 = 526279017U;
	static int8_t x84 = 60;

	t20 = (((x81^x82)<=x83)^x84);

	if (t20 != 60) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 59465U;
	static volatile int64_t x86 = -1LL;
	static int16_t x87 = -1;
	volatile int8_t x88 = INT8_MAX;
	volatile int32_t t21 = -204;

	t21 = (((x85^x86)<=x87)^x88);

	if (t21 != 126) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x91 = 26371U;
	uint16_t x92 = 444U;
	volatile int32_t t22 = -64824;

	t22 = (((x89^x90)<=x91)^x92);

	if (t22 != 445) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MIN;
	uint8_t x94 = 28U;
	static int16_t x95 = INT16_MAX;

	t23 = (((x93^x94)<=x95)^x96);

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x97 = 5341LLU;
	volatile int32_t x98 = -1;
	int64_t x99 = 298861745726574LL;
	int64_t x100 = -1LL;

	t24 = (((x97^x98)<=x99)^x100);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 47930838531038LL;
	int16_t x102 = -1;
	uint64_t x103 = 5LLU;
	volatile uint64_t t25 = 78738931004528LLU;

	t25 = (((x101^x102)<=x103)^x104);

	if (t25 != 263567953945295LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = 2816253830LLU;
	uint32_t x106 = 89640U;
	static uint16_t x107 = UINT16_MAX;
	uint64_t x108 = 5579916162603LLU;
	static uint64_t t26 = 243735549LLU;

	t26 = (((x105^x106)<=x107)^x108);

	if (t26 != 5579916162603LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = 16257;
	int32_t x111 = -4994347;
	volatile int32_t x112 = 1805069;
	static int32_t t27 = -7;

	t27 = (((x109^x110)<=x111)^x112);

	if (t27 != 1805068) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	uint32_t x114 = 101316U;
	static int64_t x115 = -2715638864LL;
	static uint8_t x116 = UINT8_MAX;
	int32_t t28 = 5;

	t28 = (((x113^x114)<=x115)^x116);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x118 = 74U;
	int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MAX;
	volatile int64_t t29 = INT64_MAX;

	t29 = (((x117^x118)<=x119)^x120);

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MAX;
	static uint64_t x124 = UINT64_MAX;
	uint64_t t30 = UINT64_MAX;

	t30 = (((x121^x122)<=x123)^x124);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = 105984430;
	uint8_t x128 = 13U;

	t31 = (((x125^x126)<=x127)^x128);

	if (t31 != 13) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = UINT16_MAX;
	static int32_t x131 = INT32_MIN;
	int64_t x132 = 15554LL;
	int64_t t32 = 1015LL;

	t32 = (((x129^x130)<=x131)^x132);

	if (t32 != 15554LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static uint64_t x134 = 2590LLU;
	static int64_t x135 = INT64_MAX;
	volatile int8_t x136 = 0;
	static int32_t t33 = -27384;

	t33 = (((x133^x134)<=x135)^x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	volatile uint32_t x138 = UINT32_MAX;
	volatile int32_t t34 = -254959;

	t34 = (((x137^x138)<=x139)^x140);

	if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 28U;
	int64_t x142 = INT64_MAX;
	int8_t x143 = INT8_MAX;
	int32_t x144 = -6471307;
	volatile int32_t t35 = -62117007;

	t35 = (((x141^x142)<=x143)^x144);

	if (t35 != -6471307) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	volatile int16_t x146 = -1;
	volatile int16_t x148 = 1222;
	static volatile int32_t t36 = -510;

	t36 = (((x145^x146)<=x147)^x148);

	if (t36 != 1223) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -1641;
	int16_t x150 = -386;
	static uint16_t x151 = 3907U;
	int8_t x152 = INT8_MAX;
	volatile int32_t t37 = 4;

	t37 = (((x149^x150)<=x151)^x152);

	if (t37 != 126) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 278LLU;
	uint64_t x155 = 7284992164LLU;
	static int16_t x156 = INT16_MIN;
	int32_t t38 = 223;

	t38 = (((x153^x154)<=x155)^x156);

	if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x158 = INT8_MIN;
	int8_t x160 = 5;
	volatile int32_t t39 = 0;

	t39 = (((x157^x158)<=x159)^x160);

	if (t39 != 5) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 33063U;
	volatile uint16_t x162 = 6U;
	int64_t x163 = INT64_MAX;
	int32_t t40 = -51;

	t40 = (((x161^x162)<=x163)^x164);

	if (t40 != -23) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	volatile int16_t x166 = -712;
	static int32_t x167 = 31896024;
	int16_t x168 = -106;
	volatile int32_t t41 = -31;

	t41 = (((x165^x166)<=x167)^x168);

	if (t41 != -105) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	uint16_t x171 = 12U;
	static int64_t t42 = 1994522875258LL;

	t42 = (((x169^x170)<=x171)^x172);

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	static uint32_t x175 = UINT32_MAX;
	int32_t x176 = 38872855;
	static int32_t t43 = 726640923;

	t43 = (((x173^x174)<=x175)^x176);

	if (t43 != 38872854) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = INT64_MIN;
	int16_t x179 = 15;
	volatile int16_t x180 = 6;
	volatile int32_t t44 = 1754261;

	t44 = (((x177^x178)<=x179)^x180);

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MIN;
	int16_t x183 = INT16_MAX;
	int32_t x184 = INT32_MAX;
	int32_t t45 = 1;

	t45 = (((x181^x182)<=x183)^x184);

	if (t45 != 2147483646) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int64_t x187 = 7547LL;
	static volatile int32_t t46 = INT32_MIN;

	t46 = (((x185^x186)<=x187)^x188);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x190 = UINT16_MAX;
	uint16_t x191 = 13076U;
	int64_t x192 = -47831166745965270LL;
	int64_t t47 = -1075540256325713LL;

	t47 = (((x189^x190)<=x191)^x192);

	if (t47 != -47831166745965269LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -13;
	volatile int8_t x195 = INT8_MAX;
	int64_t x196 = INT64_MIN;
	volatile int64_t t48 = INT64_MIN;

	t48 = (((x193^x194)<=x195)^x196);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MIN;
	uint64_t x198 = 89560697464368LLU;
	int64_t x199 = INT64_MIN;
	int64_t x200 = INT64_MAX;
	int64_t t49 = INT64_MAX;

	t49 = (((x197^x198)<=x199)^x200);

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 21900359873LL;
	int32_t x202 = -1;
	uint16_t x204 = 182U;
	volatile int32_t t50 = -7687;

	t50 = (((x201^x202)<=x203)^x204);

	if (t50 != 183) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 218LLU;
	int64_t x206 = -8156453412LL;
	int64_t x207 = INT64_MIN;
	uint32_t x208 = 508264U;

	t51 = (((x205^x206)<=x207)^x208);

	if (t51 != 508264U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = INT8_MIN;
	int16_t x211 = -1;
	volatile int16_t x212 = 1938;
	volatile int32_t t52 = 407379;

	t52 = (((x209^x210)<=x211)^x212);

	if (t52 != 1938) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = -1;
	int16_t x214 = INT16_MAX;
	uint16_t x216 = 1653U;
	volatile int32_t t53 = -2308204;

	t53 = (((x213^x214)<=x215)^x216);

	if (t53 != 1653) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	uint16_t x218 = 21166U;
	int64_t x219 = -1LL;
	uint8_t x220 = 0U;
	volatile int32_t t54 = -3774228;

	t54 = (((x217^x218)<=x219)^x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 6161U;
	int16_t x222 = INT16_MIN;
	int32_t x224 = INT32_MIN;

	t55 = (((x221^x222)<=x223)^x224);

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = UINT64_MAX;
	int64_t x227 = INT64_MIN;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = INT32_MIN;

	t56 = (((x225^x226)<=x227)^x228);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -1;
	static int16_t x230 = INT16_MIN;
	static int16_t x231 = 10726;
	int32_t x232 = 168911;
	int32_t t57 = -1;

	t57 = (((x229^x230)<=x231)^x232);

	if (t57 != 168911) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = INT8_MAX;
	uint64_t x235 = 1708295210LLU;
	int64_t x236 = -1982294016693210LL;

	t58 = (((x233^x234)<=x235)^x236);

	if (t58 != -1982294016693210LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = INT32_MIN;
	volatile int32_t t59 = 1208;

	t59 = (((x237^x238)<=x239)^x240);

	if (t59 != 34) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = 56;
	uint8_t x243 = 6U;
	uint32_t x244 = 130722U;
	volatile uint32_t t60 = 118517U;

	t60 = (((x241^x242)<=x243)^x244);

	if (t60 != 130723U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	int32_t x246 = -1;
	uint32_t x247 = UINT32_MAX;
	int16_t x248 = INT16_MIN;
	volatile int32_t t61 = 20;

	t61 = (((x245^x246)<=x247)^x248);

	if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x250 = 3U;
	volatile int16_t x251 = INT16_MAX;
	static int32_t x252 = 2209;
	int32_t t62 = 157;

	t62 = (((x249^x250)<=x251)^x252);

	if (t62 != 2209) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = 0U;
	int64_t x254 = INT64_MIN;
	int32_t x255 = -1073142053;
	static uint8_t x256 = UINT8_MAX;
	static int32_t t63 = -6;

	t63 = (((x253^x254)<=x255)^x256);

	if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 0;
	volatile int8_t x258 = INT8_MIN;
	int8_t x259 = -1;
	static volatile int32_t t64 = 1928661;

	t64 = (((x257^x258)<=x259)^x260);

	if (t64 != 6) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -1;
	uint32_t x262 = 0U;
	static uint32_t x264 = UINT32_MAX;

	t65 = (((x261^x262)<=x263)^x264);

	if (t65 != 4294967294U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x265 = 19386714860109908LLU;
	int64_t x268 = -19LL;

	t66 = (((x265^x266)<=x267)^x268);

	if (t66 != -19LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -78042340LL;
	int32_t x270 = -1;
	int64_t x271 = INT64_MAX;
	int64_t x272 = INT64_MIN;
	volatile int64_t t67 = 99547770198438LL;

	t67 = (((x269^x270)<=x271)^x272);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	static int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	int64_t x276 = INT64_MIN;
	int64_t t68 = -19LL;

	t68 = (((x273^x274)<=x275)^x276);

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int8_t x278 = 1;
	uint16_t x279 = 19751U;
	int16_t x280 = INT16_MIN;
	int32_t t69 = 2159;

	t69 = (((x277^x278)<=x279)^x280);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x281 = 706345944383LLU;
	int16_t x282 = INT16_MIN;
	uint8_t x283 = 4U;
	int32_t x284 = -85472;

	t70 = (((x281^x282)<=x283)^x284);

	if (t70 != -85472) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	static int64_t x286 = -474987619LL;
	static volatile int32_t t71 = INT32_MIN;

	t71 = (((x285^x286)<=x287)^x288);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	int64_t x290 = INT64_MIN;
	volatile int16_t x291 = -1;
	uint32_t x292 = 41U;
	uint32_t t72 = 281U;

	t72 = (((x289^x290)<=x291)^x292);

	if (t72 != 40U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	volatile int32_t x294 = INT32_MIN;
	int32_t x295 = 68085892;
	static int32_t x296 = -1550528;

	t73 = (((x293^x294)<=x295)^x296);

	if (t73 != -1550527) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 7184U;
	int16_t x299 = INT16_MIN;
	volatile int8_t x300 = INT8_MAX;
	volatile int32_t t74 = 0;

	t74 = (((x297^x298)<=x299)^x300);

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = -15;
	volatile int32_t x302 = INT32_MAX;
	volatile int8_t x303 = INT8_MAX;
	int8_t x304 = INT8_MIN;

	t75 = (((x301^x302)<=x303)^x304);

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -71;
	volatile uint8_t x306 = 21U;
	volatile uint32_t x308 = 11U;
	static uint32_t t76 = 365078091U;

	t76 = (((x305^x306)<=x307)^x308);

	if (t76 != 10U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	int32_t x310 = -93513928;
	static uint8_t x311 = 120U;
	static int64_t x312 = INT64_MIN;
	static volatile int64_t t77 = 10673LL;

	t77 = (((x309^x310)<=x311)^x312);

	if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	volatile int16_t x315 = 5398;
	volatile int8_t x316 = -1;
	int32_t t78 = 7461383;

	t78 = (((x313^x314)<=x315)^x316);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 0U;
	static int16_t x319 = 9605;
	uint8_t x320 = UINT8_MAX;
	static volatile int32_t t79 = -8272810;

	t79 = (((x317^x318)<=x319)^x320);

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	uint32_t x322 = UINT32_MAX;
	volatile int32_t x323 = -129;
	uint16_t x324 = 1370U;
	int32_t t80 = -585989782;

	t80 = (((x321^x322)<=x323)^x324);

	if (t80 != 1371) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = INT8_MIN;
	uint32_t x326 = 5652U;
	uint8_t x327 = UINT8_MAX;
	int64_t t81 = -1869463221179733LL;

	t81 = (((x325^x326)<=x327)^x328);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = UINT16_MAX;
	int32_t x331 = 110;
	int8_t x332 = 23;
	int32_t t82 = -1;

	t82 = (((x329^x330)<=x331)^x332);

	if (t82 != 23) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 4534;
	volatile int16_t x335 = INT16_MIN;
	int64_t x336 = -1LL;
	int64_t t83 = 113896LL;

	t83 = (((x333^x334)<=x335)^x336);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = UINT8_MAX;
	volatile int32_t x338 = -3087860;
	int32_t x339 = -168293896;

	t84 = (((x337^x338)<=x339)^x340);

	if (t84 != 34609606126465LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	uint32_t x342 = UINT32_MAX;
	int32_t x344 = INT32_MIN;
	volatile int32_t t85 = INT32_MIN;

	t85 = (((x341^x342)<=x343)^x344);

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -7;
	volatile int32_t x346 = -47975114;
	uint8_t x347 = 0U;
	volatile int64_t x348 = -20142959445LL;
	int64_t t86 = -20178976LL;

	t86 = (((x345^x346)<=x347)^x348);

	if (t86 != -20142959445LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 297973335LLU;
	int16_t x350 = INT16_MIN;
	volatile int64_t x351 = INT64_MIN;
	volatile uint32_t t87 = UINT32_MAX;

	t87 = (((x349^x350)<=x351)^x352);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x353 = UINT8_MAX;
	uint32_t x355 = 1023223U;
	int32_t x356 = INT32_MIN;
	volatile int32_t t88 = INT32_MIN;

	t88 = (((x353^x354)<=x355)^x356);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x358 = UINT8_MAX;
	uint16_t x359 = UINT16_MAX;
	int64_t x360 = INT64_MIN;
	int64_t t89 = INT64_MIN;

	t89 = (((x357^x358)<=x359)^x360);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = INT16_MIN;
	static uint64_t x363 = UINT64_MAX;
	static volatile int64_t t90 = -8837265659542LL;

	t90 = (((x361^x362)<=x363)^x364);

	if (t90 != -10429929855267LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	int32_t x366 = INT32_MIN;
	int8_t x367 = -1;
	uint8_t x368 = 0U;
	int32_t t91 = -6925;

	t91 = (((x365^x366)<=x367)^x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 677030077617173929LLU;
	static int32_t x371 = INT32_MIN;
	volatile int64_t x372 = 27344173441748255LL;
	volatile int64_t t92 = -79233557LL;

	t92 = (((x369^x370)<=x371)^x372);

	if (t92 != 27344173441748254LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x373 = 16497669517LLU;
	static int16_t x374 = INT16_MIN;
	uint32_t x375 = 80465U;
	int16_t x376 = 12290;
	volatile int32_t t93 = -205;

	t93 = (((x373^x374)<=x375)^x376);

	if (t93 != 12290) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = 5;
	static volatile uint32_t x378 = UINT32_MAX;
	static int16_t x379 = INT16_MIN;
	int32_t t94 = -352785;

	t94 = (((x377^x378)<=x379)^x380);

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 3925366938227LL;
	int64_t x383 = -259585820099277LL;
	int16_t x384 = -3;
	int32_t t95 = 101;

	t95 = (((x381^x382)<=x383)^x384);

	if (t95 != -3) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x386 = 30U;
	int64_t x387 = -15528703684964704LL;
	volatile int64_t x388 = -4196758606524LL;

	t96 = (((x385^x386)<=x387)^x388);

	if (t96 != -4196758606524LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x390 = -265;
	int64_t x391 = INT64_MIN;
	uint16_t x392 = 8401U;

	t97 = (((x389^x390)<=x391)^x392);

	if (t97 != 8401) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 3991291LLU;
	static volatile int8_t x394 = -50;
	uint8_t x395 = UINT8_MAX;
	volatile uint16_t x396 = 21U;
	int32_t t98 = 553628304;

	t98 = (((x393^x394)<=x395)^x396);

	if (t98 != 21) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = 204;
	uint8_t x400 = 31U;
	int32_t t99 = 36813;

	t99 = (((x397^x398)<=x399)^x400);

	if (t99 != 31) { NG(); } else { ; }
	
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


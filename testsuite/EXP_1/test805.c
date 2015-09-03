#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x13 = INT16_MAX;
volatile int32_t x17 = -1;
static volatile int64_t t4 = -1593LL;
int64_t x27 = INT64_MIN;
volatile int16_t x28 = INT16_MAX;
int16_t x32 = INT16_MAX;
volatile uint64_t x40 = UINT64_MAX;
static volatile int16_t x42 = INT16_MIN;
static int32_t x43 = -1;
int32_t x48 = INT32_MIN;
int8_t x50 = INT8_MIN;
int8_t x57 = -1;
uint32_t t16 = UINT32_MAX;
int16_t x93 = -1;
static volatile uint8_t x99 = 10U;
int32_t x107 = -1;
volatile int32_t x109 = INT32_MIN;
static uint8_t x113 = 1U;
static uint16_t x115 = 27U;
int32_t x116 = 2380908;
int16_t x122 = INT16_MIN;
int32_t x124 = INT32_MAX;
int16_t x125 = INT16_MAX;
int16_t x126 = 13;
uint8_t x131 = 11U;
int64_t x139 = -1LL;
static volatile int32_t t34 = INT32_MIN;
int8_t x143 = 11;
volatile int64_t t35 = 45LL;
volatile int16_t x151 = INT16_MAX;
static int8_t x155 = -1;
int16_t x159 = 59;
int8_t x163 = INT8_MAX;
int16_t x166 = -1;
uint16_t x172 = UINT16_MAX;
int16_t x179 = INT16_MAX;
int64_t x181 = INT64_MIN;
int64_t x188 = -9841373LL;
uint64_t x190 = UINT64_MAX;
static uint64_t x192 = 82184311LLU;
int32_t x193 = INT32_MIN;
uint64_t t48 = 12LLU;
uint16_t x198 = 1969U;
static volatile int8_t x200 = -1;
uint16_t x209 = UINT16_MAX;
int8_t x213 = INT8_MAX;
int16_t x215 = -1;
int32_t t53 = -37;
static uint32_t x221 = UINT32_MAX;
int64_t x223 = INT64_MIN;
int16_t x233 = INT16_MIN;
volatile int32_t t59 = -113987787;
uint32_t x243 = UINT32_MAX;
volatile int32_t t60 = -3529;
static int8_t x251 = -1;
int32_t t62 = 2351;
int64_t x260 = 245LL;
volatile int8_t x262 = INT8_MIN;
uint8_t x264 = 25U;
int64_t x267 = INT64_MIN;
volatile int64_t x272 = INT64_MIN;
int16_t x281 = INT16_MIN;
uint64_t x282 = 38LLU;
static uint16_t x283 = UINT16_MAX;
volatile int8_t x284 = -1;
static int32_t t70 = 1016721324;
volatile uint32_t t71 = UINT32_MAX;
int32_t x298 = -1;
volatile uint16_t x307 = 30083U;
static uint8_t x314 = 37U;
volatile int8_t x315 = INT8_MIN;
uint8_t x328 = 0U;
int64_t t83 = -57952LL;
static uint64_t t85 = UINT64_MAX;
volatile uint16_t x363 = UINT16_MAX;
int8_t x365 = INT8_MIN;
volatile uint64_t t90 = 1536838851LLU;
int64_t x375 = -1LL;
int32_t x376 = 608119248;
static volatile uint16_t x378 = 64U;
volatile int32_t t93 = INT32_MAX;
static volatile int64_t x385 = INT64_MAX;
static int8_t x386 = -1;
volatile int8_t x389 = INT8_MIN;
volatile uint8_t x394 = 45U;
int64_t x396 = -1LL;
int64_t x398 = INT64_MAX;
int64_t x400 = 823038810463357LL;


void f0(void) {
	int64_t x1 = 12525517433674LL;
	int16_t x2 = INT16_MAX;
	int8_t x3 = INT8_MIN;
	static uint8_t x4 = 1U;
	int32_t t0 = -405261;

	t0 = (((x1%x2)<=x3)|x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	volatile uint8_t x6 = 102U;
	static uint64_t x7 = 223LLU;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 70;

	t1 = (((x5%x6)<=x7)|x8);

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	volatile int16_t x10 = 80;
	uint16_t x11 = UINT16_MAX;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = 8939;

	t2 = (((x9%x10)<=x11)|x12);

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -1;
	uint64_t x15 = 101LLU;
	static uint8_t x16 = 1U;
	volatile int32_t t3 = -5;

	t3 = (((x13%x14)<=x15)|x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	int8_t x19 = -53;
	int64_t x20 = INT64_MIN;

	t4 = (((x17%x18)<=x19)|x20);

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 48U;
	int32_t x22 = INT32_MIN;
	uint32_t x23 = 9176U;
	static uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -152762049;

	t5 = (((x21%x22)<=x23)|x24);

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MAX;
	int32_t x26 = -565;
	int32_t t6 = 23507;

	t6 = (((x25%x26)<=x27)|x28);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -1LL;
	int16_t x30 = INT16_MIN;
	uint8_t x31 = 1U;
	int32_t t7 = 81692;

	t7 = (((x29%x30)<=x31)|x32);

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 3LLU;
	uint64_t x34 = 81LLU;
	int16_t x35 = INT16_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -14;

	t8 = (((x33%x34)<=x35)|x36);

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 1U;
	int16_t x38 = -1;
	volatile int32_t x39 = 3779082;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (((x37%x38)<=x39)|x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	int64_t x44 = -58061830LL;
	volatile int64_t t10 = 4817131088220861LL;

	t10 = (((x41%x42)<=x43)|x44);

	if (t10 != -58061829LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	static volatile int32_t x46 = -2;
	int64_t x47 = -1LL;
	volatile int32_t t11 = INT32_MIN;

	t11 = (((x45%x46)<=x47)|x48);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	int8_t x51 = INT8_MIN;
	uint8_t x52 = 0U;
	int32_t t12 = -6211803;

	t12 = (((x49%x50)<=x51)|x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	static int32_t x54 = -1167455;
	uint8_t x55 = UINT8_MAX;
	static int32_t x56 = INT32_MIN;
	int32_t t13 = -124;

	t13 = (((x53%x54)<=x55)|x56);

	if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -1538036804855502LL;
	uint8_t x59 = UINT8_MAX;
	int16_t x60 = INT16_MAX;
	volatile int32_t t14 = -800098;

	t14 = (((x57%x58)<=x59)|x60);

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 2;
	static int64_t x62 = 6344194780780698LL;
	volatile uint8_t x63 = UINT8_MAX;
	uint16_t x64 = 1947U;
	int32_t t15 = -573;

	t15 = (((x61%x62)<=x63)|x64);

	if (t15 != 1947) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 4U;
	int32_t x66 = INT32_MIN;
	static int8_t x67 = -1;
	uint32_t x68 = UINT32_MAX;

	t16 = (((x65%x66)<=x67)|x68);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	uint32_t x70 = 9U;
	uint64_t x71 = 97388033LLU;
	static uint32_t x72 = 238U;
	volatile uint32_t t17 = 99973155U;

	t17 = (((x69%x70)<=x71)|x72);

	if (t17 != 239U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 2132105128651495LLU;
	static uint64_t x74 = 100087196543LLU;
	static int64_t x75 = -55502661687981066LL;
	static int8_t x76 = -1;
	static volatile int32_t t18 = 779119130;

	t18 = (((x73%x74)<=x75)|x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -41798;
	int8_t x78 = INT8_MIN;
	static uint32_t x79 = 3014U;
	int32_t x80 = -1;
	int32_t t19 = -3738339;

	t19 = (((x77%x78)<=x79)|x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	uint32_t x84 = 28U;
	static volatile uint32_t t20 = 1106028844U;

	t20 = (((x81%x82)<=x83)|x84);

	if (t20 != 28U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	static volatile int64_t x86 = 912261196113LL;
	static int8_t x87 = -1;
	int16_t x88 = INT16_MAX;
	static int32_t t21 = 28409;

	t21 = (((x85%x86)<=x87)|x88);

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 2571343LLU;
	volatile int8_t x90 = -1;
	uint64_t x91 = 1301LLU;
	static volatile uint32_t x92 = 503519U;
	uint32_t t22 = 12068U;

	t22 = (((x89%x90)<=x91)|x92);

	if (t22 != 503519U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x94 = 10U;
	static int8_t x95 = -1;
	int16_t x96 = INT16_MIN;
	int32_t t23 = 698873996;

	t23 = (((x93%x94)<=x95)|x96);

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	uint16_t x98 = 870U;
	int16_t x100 = 16;
	static int32_t t24 = 6234479;

	t24 = (((x97%x98)<=x99)|x100);

	if (t24 != 16) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = -68;
	volatile uint32_t x102 = 85095U;
	int64_t x103 = -1LL;
	volatile int8_t x104 = -1;
	int32_t t25 = -891;

	t25 = (((x101%x102)<=x103)|x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 104227987U;
	int32_t x106 = -20120;
	int8_t x108 = INT8_MIN;
	volatile int32_t t26 = -339;

	t26 = (((x105%x106)<=x107)|x108);

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x110 = INT64_MAX;
	int64_t x111 = -1LL;
	int8_t x112 = -5;
	volatile int32_t t27 = -627048015;

	t27 = (((x109%x110)<=x111)|x112);

	if (t27 != -5) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = 33U;
	int32_t t28 = -109909;

	t28 = (((x113%x114)<=x115)|x116);

	if (t28 != 2380909) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -112;
	int16_t x118 = INT16_MIN;
	uint16_t x119 = UINT16_MAX;
	volatile int8_t x120 = -44;
	int32_t t29 = 31145;

	t29 = (((x117%x118)<=x119)|x120);

	if (t29 != -43) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 7730137205762459LLU;
	int8_t x123 = -1;
	volatile int32_t t30 = INT32_MAX;

	t30 = (((x121%x122)<=x123)|x124);

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x127 = INT64_MIN;
	uint16_t x128 = UINT16_MAX;
	static volatile int32_t t31 = 792;

	t31 = (((x125%x126)<=x127)|x128);

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x129 = 219;
	int8_t x130 = -1;
	int8_t x132 = INT8_MIN;
	int32_t t32 = 40007150;

	t32 = (((x129%x130)<=x131)|x132);

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 503281396092236718LLU;
	uint8_t x134 = 83U;
	int16_t x135 = -1;
	uint8_t x136 = 3U;
	volatile int32_t t33 = -1;

	t33 = (((x133%x134)<=x135)|x136);

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	volatile int64_t x138 = INT64_MAX;
	int32_t x140 = INT32_MIN;

	t34 = (((x137%x138)<=x139)|x140);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MIN;
	uint8_t x142 = 1U;
	int64_t x144 = INT64_MIN;

	t35 = (((x141%x142)<=x143)|x144);

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MAX;
	int64_t x146 = -1LL;
	int64_t x147 = -1LL;
	int16_t x148 = -1;
	int32_t t36 = 7821;

	t36 = (((x145%x146)<=x147)|x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 3U;
	uint64_t x150 = 181951LLU;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = -101;

	t37 = (((x149%x150)<=x151)|x152);

	if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	uint16_t x154 = UINT16_MAX;
	uint8_t x156 = 122U;
	int32_t t38 = -5;

	t38 = (((x153%x154)<=x155)|x156);

	if (t38 != 122) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = 7030568328LL;
	uint8_t x158 = UINT8_MAX;
	static volatile uint8_t x160 = 124U;
	volatile int32_t t39 = -95072;

	t39 = (((x157%x158)<=x159)|x160);

	if (t39 != 125) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 22LLU;
	int64_t x162 = INT64_MAX;
	uint16_t x164 = 21U;
	int32_t t40 = 336589293;

	t40 = (((x161%x162)<=x163)|x164);

	if (t40 != 21) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 346862LLU;
	int8_t x167 = -2;
	int8_t x168 = INT8_MIN;
	static int32_t t41 = 936;

	t41 = (((x165%x166)<=x167)|x168);

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = -1LL;
	int8_t x171 = -1;
	int32_t t42 = -230616104;

	t42 = (((x169%x170)<=x171)|x172);

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	int8_t x174 = -4;
	static int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MIN;
	static int32_t t43 = -28;

	t43 = (((x173%x174)<=x175)|x176);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x177 = -1;
	int32_t x178 = -1;
	int16_t x180 = -5767;
	int32_t t44 = 31886;

	t44 = (((x177%x178)<=x179)|x180);

	if (t44 != -5767) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = -24;
	int16_t x183 = 3;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -157;

	t45 = (((x181%x182)<=x183)|x184);

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 9928U;
	static uint64_t x186 = UINT64_MAX;
	int8_t x187 = 1;
	int64_t t46 = -60105372LL;

	t46 = (((x185%x186)<=x187)|x188);

	if (t46 != -9841373LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MIN;
	uint16_t x191 = 54U;
	static uint64_t t47 = 13147092365856LLU;

	t47 = (((x189%x190)<=x191)|x192);

	if (t47 != 82184311LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x194 = INT32_MIN;
	int8_t x195 = INT8_MIN;
	uint64_t x196 = 35LLU;

	t48 = (((x193%x194)<=x195)|x196);

	if (t48 != 35LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 21;
	int8_t x199 = -1;
	int32_t t49 = -93;

	t49 = (((x197%x198)<=x199)|x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	int32_t x202 = INT32_MAX;
	int32_t x203 = -1;
	uint8_t x204 = UINT8_MAX;
	static int32_t t50 = -139255;

	t50 = (((x201%x202)<=x203)|x204);

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	volatile uint8_t x206 = 7U;
	int8_t x207 = INT8_MIN;
	uint64_t x208 = 4436195876871789LLU;
	static uint64_t t51 = 41195322515324LLU;

	t51 = (((x205%x206)<=x207)|x208);

	if (t51 != 4436195876871789LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = 18;
	volatile int32_t x211 = INT32_MIN;
	volatile int16_t x212 = 0;
	int32_t t52 = 3;

	t52 = (((x209%x210)<=x211)|x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = UINT8_MAX;
	uint8_t x216 = 0U;

	t53 = (((x213%x214)<=x215)|x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	static int8_t x218 = INT8_MAX;
	int32_t x219 = -1;
	int16_t x220 = INT16_MAX;
	volatile int32_t t54 = 14484;

	t54 = (((x217%x218)<=x219)|x220);

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x222 = 4U;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = INT32_MIN;

	t55 = (((x221%x222)<=x223)|x224);

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MIN;
	int32_t x226 = INT32_MIN;
	static int64_t x227 = INT64_MAX;
	volatile int64_t x228 = -1LL;
	volatile int64_t t56 = 13010980400551LL;

	t56 = (((x225%x226)<=x227)|x228);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MIN;
	volatile uint64_t x230 = 76713894277739417LLU;
	int64_t x231 = INT64_MAX;
	static uint16_t x232 = 3987U;
	volatile int32_t t57 = -254;

	t57 = (((x229%x230)<=x231)|x232);

	if (t57 != 3987) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = INT64_MIN;
	static uint16_t x235 = 193U;
	int8_t x236 = INT8_MAX;
	volatile int32_t t58 = 86912283;

	t58 = (((x233%x234)<=x235)|x236);

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	int8_t x238 = INT8_MAX;
	int64_t x239 = INT64_MIN;
	volatile int16_t x240 = 0;

	t59 = (((x237%x238)<=x239)|x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x241 = 5067151U;
	uint32_t x242 = 706125839U;
	int8_t x244 = INT8_MIN;

	t60 = (((x241%x242)<=x243)|x244);

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	int8_t x246 = INT8_MAX;
	int16_t x247 = 2;
	volatile int64_t x248 = INT64_MIN;
	volatile int64_t t61 = -27839282719398700LL;

	t61 = (((x245%x246)<=x247)|x248);

	if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 1;
	int32_t x250 = INT32_MAX;
	volatile int8_t x252 = 1;

	t62 = (((x249%x250)<=x251)|x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	int64_t x254 = INT64_MIN;
	static int8_t x255 = INT8_MAX;
	int64_t x256 = 108812908854684863LL;
	int64_t t63 = -320LL;

	t63 = (((x253%x254)<=x255)|x256);

	if (t63 != 108812908854684863LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x257 = 51U;
	volatile uint16_t x258 = 9013U;
	uint32_t x259 = 0U;
	volatile int64_t t64 = -53858LL;

	t64 = (((x257%x258)<=x259)|x260);

	if (t64 != 245LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x261 = 37959LLU;
	volatile uint32_t x263 = UINT32_MAX;
	volatile int32_t t65 = 74;

	t65 = (((x261%x262)<=x263)|x264);

	if (t65 != 25) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -419124807;
	int64_t x266 = INT64_MIN;
	int8_t x268 = INT8_MAX;
	int32_t t66 = 14224;

	t66 = (((x265%x266)<=x267)|x268);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	static volatile uint16_t x270 = 3U;
	uint8_t x271 = UINT8_MAX;
	int64_t t67 = 265672206607854483LL;

	t67 = (((x269%x270)<=x271)|x272);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 8033U;
	int32_t x274 = -86597095;
	int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = 0;

	t68 = (((x273%x274)<=x275)|x276);

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = 244028029832899LLU;
	volatile uint8_t x278 = 25U;
	int16_t x279 = INT16_MIN;
	int32_t x280 = INT32_MIN;
	int32_t t69 = -643;

	t69 = (((x277%x278)<=x279)|x280);

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {


	t70 = (((x281%x282)<=x283)|x284);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	static int16_t x286 = 3;
	int8_t x287 = -1;
	volatile uint32_t x288 = UINT32_MAX;

	t71 = (((x285%x286)<=x287)|x288);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	volatile uint16_t x290 = UINT16_MAX;
	int8_t x291 = -2;
	int8_t x292 = INT8_MAX;
	volatile int32_t t72 = -83069;

	t72 = (((x289%x290)<=x291)|x292);

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = 88950410472293548LLU;
	int8_t x294 = INT8_MIN;
	uint16_t x295 = UINT16_MAX;
	uint8_t x296 = 98U;
	volatile int32_t t73 = 278;

	t73 = (((x293%x294)<=x295)|x296);

	if (t73 != 98) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = UINT64_MAX;
	static int64_t x299 = -89688689914956LL;
	uint32_t x300 = 373U;
	uint32_t t74 = 687429505U;

	t74 = (((x297%x298)<=x299)|x300);

	if (t74 != 373U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	static volatile int32_t x302 = INT32_MIN;
	int8_t x303 = -1;
	uint64_t x304 = 3641590237604545LLU;
	volatile uint64_t t75 = 2893674638538LLU;

	t75 = (((x301%x302)<=x303)|x304);

	if (t75 != 3641590237604545LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = 35U;
	static int16_t x306 = INT16_MIN;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 199365;

	t76 = (((x305%x306)<=x307)|x308);

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 4853;
	static int32_t x310 = INT32_MIN;
	int8_t x311 = 6;
	int64_t x312 = INT64_MIN;
	int64_t t77 = INT64_MIN;

	t77 = (((x309%x310)<=x311)|x312);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	uint16_t x316 = 15850U;
	int32_t t78 = 936747;

	t78 = (((x313%x314)<=x315)|x316);

	if (t78 != 15850) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x317 = 800376671600LLU;
	volatile int16_t x318 = -1;
	static uint16_t x319 = 0U;
	int8_t x320 = -1;
	volatile int32_t t79 = 220;

	t79 = (((x317%x318)<=x319)|x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x325 = 9578;
	volatile int64_t x326 = INT64_MAX;
	int16_t x327 = -12491;
	int32_t t80 = 86309;

	t80 = (((x325%x326)<=x327)|x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = -1;
	int64_t x335 = -215244062991LL;
	uint32_t x336 = 7U;
	static volatile uint32_t t81 = 12U;

	t81 = (((x333%x334)<=x335)|x336);

	if (t81 != 7U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x337 = 1;
	volatile int32_t x338 = -1;
	volatile uint8_t x339 = 26U;
	uint16_t x340 = 85U;
	int32_t t82 = -926;

	t82 = (((x337%x338)<=x339)|x340);

	if (t82 != 85) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x341 = INT64_MIN;
	static volatile int16_t x342 = -1;
	static uint8_t x343 = 31U;
	int64_t x344 = 0LL;

	t83 = (((x341%x342)<=x343)|x344);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = 2480;
	static int32_t x347 = 1420457;
	volatile int32_t x348 = INT32_MAX;
	static volatile int32_t t84 = INT32_MAX;

	t84 = (((x345%x346)<=x347)|x348);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x349 = 454LLU;
	int64_t x350 = INT64_MIN;
	volatile int16_t x351 = -1;
	static uint64_t x352 = UINT64_MAX;

	t85 = (((x349%x350)<=x351)|x352);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = 209LL;
	static uint16_t x354 = 2014U;
	int64_t x355 = INT64_MIN;
	uint16_t x356 = UINT16_MAX;
	int32_t t86 = -208;

	t86 = (((x353%x354)<=x355)|x356);

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x357 = -1813310036LL;
	static int8_t x358 = -2;
	static uint8_t x359 = 41U;
	uint8_t x360 = 0U;
	int32_t t87 = -1;

	t87 = (((x357%x358)<=x359)|x360);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x361 = 107254226949879LLU;
	int16_t x362 = -2;
	int16_t x364 = INT16_MIN;
	int32_t t88 = 1076;

	t88 = (((x361%x362)<=x363)|x364);

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x366 = 15;
	int32_t x367 = -1;
	int16_t x368 = 2033;
	volatile int32_t t89 = -120230;

	t89 = (((x365%x366)<=x367)|x368);

	if (t89 != 2033) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = 1;
	int64_t x370 = -885419LL;
	int16_t x371 = 9347;
	uint64_t x372 = 3228916187376LLU;

	t90 = (((x369%x370)<=x371)|x372);

	if (t90 != 3228916187377LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MIN;
	uint8_t x374 = 6U;
	int32_t t91 = -4097;

	t91 = (((x373%x374)<=x375)|x376);

	if (t91 != 608119249) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = -2745;
	volatile int32_t x379 = INT32_MIN;
	static uint32_t x380 = UINT32_MAX;
	uint32_t t92 = UINT32_MAX;

	t92 = (((x377%x378)<=x379)|x380);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = -1LL;
	volatile uint64_t x382 = UINT64_MAX;
	int16_t x383 = -1;
	static volatile int32_t x384 = INT32_MAX;

	t93 = (((x381%x382)<=x383)|x384);

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x387 = 4482572055019LL;
	int8_t x388 = -1;
	int32_t t94 = -344220;

	t94 = (((x385%x386)<=x387)|x388);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x390 = INT8_MAX;
	int32_t x391 = -3553158;
	int64_t x392 = INT64_MIN;
	static int64_t t95 = INT64_MIN;

	t95 = (((x389%x390)<=x391)|x392);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = INT16_MAX;
	static uint32_t x395 = UINT32_MAX;
	int64_t t96 = 1188659LL;

	t96 = (((x393%x394)<=x395)|x396);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x397 = 3U;
	int64_t x399 = 1LL;
	int64_t t97 = 2401927890764132LL;

	t97 = (((x397%x398)<=x399)|x400);

	if (t97 != 823038810463357LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x401 = -1LL;
	static int16_t x402 = INT16_MIN;
	uint64_t x403 = 220745LLU;
	static int64_t x404 = INT64_MAX;
	static int64_t t98 = INT64_MAX;

	t98 = (((x401%x402)<=x403)|x404);

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x405 = 118201855123692525LLU;
	static int64_t x406 = INT64_MAX;
	uint64_t x407 = UINT64_MAX;
	static int8_t x408 = INT8_MAX;
	volatile int32_t t99 = -21507588;

	t99 = (((x405%x406)<=x407)|x408);

	if (t99 != 127) { NG(); } else { ; }
	
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


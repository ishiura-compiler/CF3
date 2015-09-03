#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 1U;
volatile uint16_t x9 = UINT16_MAX;
int64_t x16 = 4707LL;
static uint8_t x17 = UINT8_MAX;
volatile int32_t t4 = 373866;
static int64_t x26 = INT64_MIN;
volatile int64_t x28 = INT64_MIN;
int32_t t6 = 13090;
uint32_t x35 = UINT32_MAX;
uint8_t x36 = 25U;
int64_t x39 = INT64_MAX;
static uint64_t x43 = UINT64_MAX;
int32_t x48 = INT32_MIN;
static int8_t x57 = -1;
uint8_t x61 = 1U;
uint64_t x66 = UINT64_MAX;
int8_t x67 = -3;
uint16_t x70 = 629U;
volatile int32_t t17 = 9633057;
static uint32_t x83 = UINT32_MAX;
int16_t x86 = -1;
uint32_t x88 = 70593U;
static int32_t x90 = 1;
uint8_t x91 = 119U;
uint8_t x93 = 9U;
volatile int32_t t23 = -21169;
int32_t t27 = -474;
static int64_t x114 = INT64_MIN;
int64_t x118 = INT64_MIN;
int32_t t29 = 39;
int64_t x123 = INT64_MAX;
static uint64_t x127 = 322969693LLU;
int32_t t31 = -85806;
int16_t x138 = INT16_MIN;
int64_t x140 = 31179064531023LL;
int8_t x145 = -1;
int32_t x146 = -570631857;
int64_t x148 = -440667432LL;
static volatile int8_t x149 = -6;
volatile int8_t x153 = INT8_MAX;
int16_t x154 = 7;
int32_t t38 = -4137596;
int16_t x157 = INT16_MIN;
static int64_t x158 = -5LL;
int16_t x163 = 2369;
uint32_t x165 = 1862543U;
uint16_t x174 = UINT16_MAX;
int32_t x179 = -1049;
static int16_t x182 = INT16_MIN;
volatile uint8_t x184 = 27U;
volatile int8_t x185 = 59;
int8_t x192 = -14;
uint16_t x193 = 0U;
uint16_t x194 = UINT16_MAX;
volatile int16_t x203 = INT16_MIN;
volatile int32_t t50 = -3201;
static uint16_t x209 = 596U;
int32_t x210 = INT32_MIN;
int64_t x212 = 1826021316575867LL;
uint32_t x213 = 39283U;
int16_t x221 = 0;
static volatile int16_t x228 = INT16_MIN;
uint64_t x232 = 4156916650582LLU;
volatile int16_t x234 = 99;
volatile int32_t t58 = 399015;
uint16_t x243 = 418U;
volatile int32_t x244 = INT32_MAX;
uint8_t x257 = 51U;
int16_t x263 = INT16_MIN;
static int64_t x265 = INT64_MIN;
static volatile int32_t x266 = -1;
int8_t x268 = INT8_MIN;
static volatile int16_t x270 = INT16_MAX;
int32_t x271 = -1770;
int32_t x283 = INT32_MIN;
uint8_t x290 = UINT8_MAX;
int32_t x291 = INT32_MIN;
int32_t t72 = -3;
volatile int16_t x293 = INT16_MAX;
static volatile int8_t x295 = 0;
volatile uint8_t x299 = UINT8_MAX;
int8_t x303 = 2;
volatile uint64_t x313 = 3065LLU;
volatile uint8_t x318 = 48U;
int32_t x319 = INT32_MIN;
static volatile uint16_t x324 = 12214U;
uint8_t x332 = 57U;
int16_t x338 = -1;
int32_t t84 = 1;
uint16_t x341 = UINT16_MAX;
int8_t x352 = 15;
int32_t x355 = INT32_MAX;
static volatile int16_t x358 = INT16_MIN;
volatile uint32_t x360 = UINT32_MAX;
static int8_t x362 = INT8_MAX;
int8_t x365 = 51;
int32_t t94 = 2326;
static uint32_t x381 = 25U;
static uint16_t x398 = 0U;
uint32_t x400 = UINT32_MAX;
int32_t t99 = -45099;


void f0(void) {
	int8_t x1 = -2;
	volatile int16_t x2 = -1;
	volatile int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 36;

	t0 = (((x1&x2)^x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MIN;
	int8_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	static int32_t t1 = 6;

	t1 = (((x5&x6)^x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 4229U;
	uint64_t x11 = UINT64_MAX;
	int16_t x12 = INT16_MAX;
	int32_t t2 = -1503812;

	t2 = (((x9&x10)^x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = -1;
	int64_t x15 = -1112385569220LL;
	int32_t t3 = 7514189;

	t3 = (((x13&x14)^x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = -1LL;
	uint16_t x19 = 96U;
	int64_t x20 = -1LL;

	t4 = (((x17&x18)^x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = 3191339318919112346LL;
	static int8_t x22 = 14;
	volatile int32_t x23 = INT32_MAX;
	uint8_t x24 = 18U;
	int32_t t5 = 0;

	t5 = (((x21&x22)^x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 57156752;
	volatile int16_t x27 = -1;

	t6 = (((x25&x26)^x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	uint8_t x30 = UINT8_MAX;
	volatile uint8_t x31 = UINT8_MAX;
	int16_t x32 = -25;
	volatile int32_t t7 = -498;

	t7 = (((x29&x30)^x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 75269;
	uint64_t x34 = 3612867807811010511LLU;
	volatile int32_t t8 = -167;

	t8 = (((x33&x34)^x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int8_t x38 = -1;
	int64_t x40 = INT64_MAX;
	static volatile int32_t t9 = -1019;

	t9 = (((x37&x38)^x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	int32_t x42 = 24238374;
	static uint16_t x44 = UINT16_MAX;
	static int32_t t10 = -1855;

	t10 = (((x41&x42)^x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 31638U;
	int16_t x46 = INT16_MAX;
	int32_t x47 = INT32_MIN;
	int32_t t11 = 8417;

	t11 = (((x45&x46)^x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 2077U;
	int32_t x50 = -7239;
	uint16_t x51 = UINT16_MAX;
	int64_t x52 = 58797463285LL;
	int32_t t12 = 383601578;

	t12 = (((x49&x50)^x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 2U;
	uint16_t x54 = UINT16_MAX;
	int64_t x55 = INT64_MAX;
	uint8_t x56 = UINT8_MAX;
	static volatile int32_t t13 = -6355;

	t13 = (((x53&x54)^x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x58 = 6224U;
	uint64_t x59 = 45040LLU;
	uint8_t x60 = 6U;
	static int32_t t14 = 64;

	t14 = (((x57&x58)^x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = INT8_MIN;
	uint16_t x63 = 90U;
	uint8_t x64 = 6U;
	volatile int32_t t15 = -86;

	t15 = (((x61&x62)^x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 319U;
	volatile int8_t x68 = -1;
	volatile int32_t t16 = -5676961;

	t16 = (((x65&x66)^x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -2864432871LL;
	int32_t x71 = -33479616;
	int8_t x72 = -62;

	t17 = (((x69&x70)^x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	uint16_t x74 = 25U;
	int8_t x75 = INT8_MIN;
	uint64_t x76 = UINT64_MAX;
	static volatile int32_t t18 = -103016286;

	t18 = (((x73&x74)^x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x77 = INT8_MAX;
	int64_t x78 = INT64_MIN;
	static int32_t x79 = -1;
	int8_t x80 = -1;
	static volatile int32_t t19 = 158528490;

	t19 = (((x77&x78)^x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int16_t x82 = -1;
	int8_t x84 = INT8_MIN;
	int32_t t20 = 124894;

	t20 = (((x81&x82)^x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 1LLU;
	int32_t x87 = -136220944;
	volatile int32_t t21 = -26035;

	t21 = (((x85&x86)^x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MIN;
	int16_t x92 = INT16_MIN;
	int32_t t22 = 6;

	t22 = (((x89&x90)^x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = 1110;
	int16_t x95 = 25;
	int16_t x96 = INT16_MAX;

	t23 = (((x93&x94)^x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 979905268235665LLU;
	int64_t x98 = INT64_MIN;
	int32_t x99 = INT32_MIN;
	int16_t x100 = -1;
	static int32_t t24 = 0;

	t24 = (((x97&x98)^x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MIN;
	int16_t x103 = -2025;
	volatile int64_t x104 = -114641785LL;
	volatile int32_t t25 = -28384528;

	t25 = (((x101&x102)^x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = 50059LLU;
	static int16_t x106 = INT16_MIN;
	volatile int64_t x107 = INT64_MAX;
	int16_t x108 = INT16_MIN;
	static int32_t t26 = 20;

	t26 = (((x105&x106)^x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MAX;
	int64_t x110 = -146025LL;
	volatile int8_t x111 = -1;
	volatile int16_t x112 = INT16_MIN;

	t27 = (((x109&x110)^x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	uint64_t x115 = 313055LLU;
	int8_t x116 = INT8_MIN;
	int32_t t28 = 13747;

	t28 = (((x113&x114)^x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	static volatile uint32_t x119 = UINT32_MAX;
	uint32_t x120 = 10U;

	t29 = (((x117&x118)^x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static volatile int32_t x122 = -1;
	static uint32_t x124 = UINT32_MAX;
	static volatile int32_t t30 = 1735381;

	t30 = (((x121&x122)^x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -48;
	volatile int32_t x126 = INT32_MIN;
	volatile int32_t x128 = INT32_MAX;

	t31 = (((x125&x126)^x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	int64_t x130 = INT64_MAX;
	int32_t x131 = INT32_MIN;
	uint8_t x132 = 1U;
	static volatile int32_t t32 = -5986;

	t32 = (((x129&x130)^x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int8_t x134 = 54;
	uint32_t x135 = UINT32_MAX;
	static int16_t x136 = 0;
	volatile int32_t t33 = -1698;

	t33 = (((x133&x134)^x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int8_t x139 = INT8_MIN;
	int32_t t34 = -21;

	t34 = (((x137&x138)^x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MAX;
	uint8_t x142 = UINT8_MAX;
	int32_t x143 = INT32_MIN;
	static volatile int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 21;

	t35 = (((x141&x142)^x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x147 = 922;
	volatile int32_t t36 = 6;

	t36 = (((x145&x146)^x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x150 = 1U;
	int32_t x151 = -1;
	static int32_t x152 = INT32_MAX;
	static volatile int32_t t37 = -1706677;

	t37 = (((x149&x150)^x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x155 = 23U;
	uint16_t x156 = 16U;

	t38 = (((x153&x154)^x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x159 = INT16_MIN;
	uint16_t x160 = UINT16_MAX;
	int32_t t39 = 4505340;

	t39 = (((x157&x158)^x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = -1;
	uint32_t x162 = UINT32_MAX;
	static int64_t x164 = 169433576070849345LL;
	volatile int32_t t40 = -5;

	t40 = (((x161&x162)^x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x166 = INT64_MAX;
	int64_t x167 = INT64_MIN;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = 101;

	t41 = (((x165&x166)^x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MIN;
	volatile uint32_t x170 = 48668U;
	volatile uint32_t x171 = UINT32_MAX;
	int64_t x172 = INT64_MIN;
	static volatile int32_t t42 = -8498;

	t42 = (((x169&x170)^x171)<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	volatile uint64_t x175 = UINT64_MAX;
	volatile uint8_t x176 = 5U;
	int32_t t43 = -25238;

	t43 = (((x173&x174)^x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	int32_t x178 = -32563151;
	volatile int32_t x180 = -21590810;
	volatile int32_t t44 = -1040;

	t44 = (((x177&x178)^x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	static int64_t x183 = -10296936632689LL;
	static int32_t t45 = -798927;

	t45 = (((x181&x182)^x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x186 = 7591U;
	int32_t x187 = INT32_MAX;
	int32_t x188 = INT32_MAX;
	static int32_t t46 = 55;

	t46 = (((x185&x186)^x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	int16_t x190 = INT16_MAX;
	static int64_t x191 = -1LL;
	static int32_t t47 = 0;

	t47 = (((x189&x190)^x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x195 = 1286271997U;
	int64_t x196 = INT64_MAX;
	volatile int32_t t48 = -1889444;

	t48 = (((x193&x194)^x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 0U;
	uint16_t x198 = 30U;
	int8_t x199 = -1;
	volatile uint64_t x200 = 175375896LLU;
	static int32_t t49 = 6;

	t49 = (((x197&x198)^x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 90072;
	static int8_t x202 = INT8_MIN;
	static int8_t x204 = INT8_MAX;

	t50 = (((x201&x202)^x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int16_t x206 = -1;
	uint32_t x207 = 408758U;
	volatile int16_t x208 = INT16_MAX;
	volatile int32_t t51 = 24616;

	t51 = (((x205&x206)^x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x211 = INT8_MIN;
	volatile int32_t t52 = -21;

	t52 = (((x209&x210)^x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x214 = UINT64_MAX;
	static volatile int32_t x215 = INT32_MIN;
	int8_t x216 = INT8_MAX;
	int32_t t53 = -811;

	t53 = (((x213&x214)^x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -11;
	volatile int8_t x218 = 10;
	uint16_t x219 = 574U;
	int64_t x220 = -39808507LL;
	int32_t t54 = 406;

	t54 = (((x217&x218)^x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = INT64_MAX;
	int32_t x223 = -5305298;
	uint32_t x224 = UINT32_MAX;
	static int32_t t55 = -195287;

	t55 = (((x221&x222)^x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = 1864378LLU;
	static uint32_t x226 = 7894615U;
	int16_t x227 = INT16_MIN;
	volatile int32_t t56 = -16387641;

	t56 = (((x225&x226)^x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = -773267542;
	static int16_t x230 = -1;
	int16_t x231 = 15189;
	volatile int32_t t57 = -31717;

	t57 = (((x229&x230)^x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	uint8_t x235 = 44U;
	volatile int8_t x236 = INT8_MIN;

	t58 = (((x233&x234)^x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 6U;
	uint64_t x238 = 1677003181157LLU;
	int32_t x239 = INT32_MIN;
	volatile int16_t x240 = -472;
	int32_t t59 = 2343040;

	t59 = (((x237&x238)^x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x241 = INT8_MIN;
	int32_t x242 = 1;
	int32_t t60 = 493337;

	t60 = (((x241&x242)^x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = 0;
	int8_t x246 = INT8_MIN;
	uint16_t x247 = 46U;
	static uint8_t x248 = 87U;
	int32_t t61 = 332816488;

	t61 = (((x245&x246)^x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	int8_t x250 = -1;
	uint32_t x251 = 182976U;
	static uint16_t x252 = 1661U;
	volatile int32_t t62 = -1141730;

	t62 = (((x249&x250)^x251)<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = INT8_MAX;
	volatile int32_t x254 = INT32_MIN;
	int64_t x255 = 0LL;
	volatile int16_t x256 = INT16_MAX;
	static int32_t t63 = -438020;

	t63 = (((x253&x254)^x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x258 = INT32_MIN;
	int64_t x259 = -1LL;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = 339115989;

	t64 = (((x257&x258)^x259)<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = UINT32_MAX;
	uint8_t x262 = UINT8_MAX;
	int64_t x264 = -1307296LL;
	volatile int32_t t65 = 1600;

	t65 = (((x261&x262)^x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x267 = UINT8_MAX;
	volatile int32_t t66 = -3;

	t66 = (((x265&x266)^x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	int32_t x272 = -13099;
	volatile int32_t t67 = 11631330;

	t67 = (((x269&x270)^x271)<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	static int64_t x274 = INT64_MAX;
	uint16_t x275 = 103U;
	static uint64_t x276 = 113609184LLU;
	int32_t t68 = 435757;

	t68 = (((x273&x274)^x275)<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 110U;
	static uint32_t x278 = 5442809U;
	volatile int64_t x279 = INT64_MAX;
	int64_t x280 = INT64_MAX;
	int32_t t69 = 7531081;

	t69 = (((x277&x278)^x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = INT8_MIN;
	int16_t x282 = INT16_MIN;
	volatile int16_t x284 = -15100;
	int32_t t70 = 6;

	t70 = (((x281&x282)^x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = -207100126;
	volatile int32_t x286 = 6;
	static uint32_t x287 = 727317U;
	uint8_t x288 = 5U;
	int32_t t71 = -254;

	t71 = (((x285&x286)^x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -8564301100354LL;
	int8_t x292 = INT8_MIN;

	t72 = (((x289&x290)^x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MIN;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t73 = -8358292;

	t73 = (((x293&x294)^x295)<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 1;
	int16_t x298 = INT16_MIN;
	uint64_t x300 = 487255769697LLU;
	int32_t t74 = -159;

	t74 = (((x297&x298)^x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x301 = -29;
	static uint32_t x302 = 1U;
	static int16_t x304 = INT16_MAX;
	int32_t t75 = -75;

	t75 = (((x301&x302)^x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 799U;
	int8_t x306 = -2;
	int8_t x307 = 1;
	int32_t x308 = INT32_MIN;
	static int32_t t76 = -117;

	t76 = (((x305&x306)^x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x309 = -79;
	volatile int64_t x310 = -1LL;
	uint16_t x311 = UINT16_MAX;
	uint16_t x312 = UINT16_MAX;
	int32_t t77 = 16428616;

	t77 = (((x309&x310)^x311)<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = INT8_MIN;
	uint64_t x315 = 14537LLU;
	volatile uint32_t x316 = 747696981U;
	volatile int32_t t78 = 23252;

	t78 = (((x313&x314)^x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = -20;
	int64_t x320 = -1LL;
	volatile int32_t t79 = 23863;

	t79 = (((x317&x318)^x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	volatile uint16_t x322 = 31U;
	volatile int32_t x323 = 341;
	int32_t t80 = 104;

	t80 = (((x321&x322)^x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = -37;
	int64_t x326 = INT64_MIN;
	volatile int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MAX;
	static int32_t t81 = -12;

	t81 = (((x325&x326)^x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = 1276LL;
	uint16_t x330 = 0U;
	volatile uint8_t x331 = 16U;
	volatile int32_t t82 = 108;

	t82 = (((x329&x330)^x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MAX;
	volatile uint64_t x334 = 175280713077LLU;
	uint64_t x335 = UINT64_MAX;
	uint8_t x336 = 28U;
	static int32_t t83 = 35;

	t83 = (((x333&x334)^x335)<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = 0;
	int64_t x339 = 12LL;
	int64_t x340 = -1LL;

	t84 = (((x337&x338)^x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x342 = -1;
	static volatile int16_t x343 = -1;
	volatile int64_t x344 = -1LL;
	volatile int32_t t85 = -6552233;

	t85 = (((x341&x342)^x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MIN;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = INT16_MIN;
	uint32_t x348 = 18U;
	volatile int32_t t86 = -998258072;

	t86 = (((x345&x346)^x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int64_t x350 = -1LL;
	static int64_t x351 = INT64_MAX;
	int32_t t87 = 215237;

	t87 = (((x349&x350)^x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	int8_t x354 = INT8_MAX;
	uint32_t x356 = UINT32_MAX;
	volatile int32_t t88 = -14;

	t88 = (((x353&x354)^x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = UINT8_MAX;
	uint64_t x359 = 8928305380234LLU;
	static int32_t t89 = -15252;

	t89 = (((x357&x358)^x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	volatile int8_t x363 = INT8_MAX;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 1;

	t90 = (((x361&x362)^x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x366 = UINT64_MAX;
	int32_t x367 = INT32_MIN;
	uint8_t x368 = 1U;
	volatile int32_t t91 = 1;

	t91 = (((x365&x366)^x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	static int16_t x370 = INT16_MAX;
	int8_t x371 = -1;
	int32_t x372 = 421371;
	volatile int32_t t92 = 10626773;

	t92 = (((x369&x370)^x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x373 = UINT32_MAX;
	int64_t x374 = INT64_MIN;
	int32_t x375 = INT32_MAX;
	static volatile int8_t x376 = 41;
	volatile int32_t t93 = 233301777;

	t93 = (((x373&x374)^x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MIN;
	int8_t x378 = INT8_MIN;
	uint16_t x379 = UINT16_MAX;
	int64_t x380 = -1LL;

	t94 = (((x377&x378)^x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = 6U;
	uint16_t x383 = UINT16_MAX;
	uint64_t x384 = 104739LLU;
	volatile int32_t t95 = 7;

	t95 = (((x381&x382)^x383)<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MIN;
	int32_t x386 = INT32_MAX;
	int32_t x387 = INT32_MIN;
	uint8_t x388 = UINT8_MAX;
	int32_t t96 = -72;

	t96 = (((x385&x386)^x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x389 = 414U;
	int8_t x390 = -1;
	int64_t x391 = -1795067501091172LL;
	volatile int8_t x392 = -1;
	int32_t t97 = 1247;

	t97 = (((x389&x390)^x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	int32_t x394 = 111237;
	static int16_t x395 = -1;
	uint8_t x396 = UINT8_MAX;
	static volatile int32_t t98 = -14695;

	t98 = (((x393&x394)^x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = 16U;
	int16_t x399 = INT16_MAX;

	t99 = (((x397&x398)^x399)<x400);

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


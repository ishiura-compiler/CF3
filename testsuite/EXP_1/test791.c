#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = INT32_MIN;
int8_t x15 = INT8_MAX;
static int32_t t5 = 83079531;
int64_t x25 = -3543035LL;
int8_t x30 = INT8_MAX;
uint8_t x34 = UINT8_MAX;
uint32_t x38 = 2U;
uint16_t x39 = 23449U;
uint16_t x41 = 7040U;
static uint64_t x44 = 330201739LLU;
volatile int8_t x47 = -1;
int32_t t11 = -86369;
int32_t x49 = -1;
int32_t x52 = INT32_MAX;
int32_t x60 = -1;
static int32_t t14 = 7285895;
volatile int32_t x61 = INT32_MIN;
static uint64_t x65 = 409733LLU;
int32_t x79 = INT32_MIN;
uint64_t x84 = 124748852178404LLU;
volatile int8_t x97 = -1;
volatile int8_t x98 = INT8_MIN;
int32_t x100 = -621837;
uint32_t t27 = 74129U;
volatile int16_t x113 = -1;
uint64_t x114 = 8534482851LLU;
int16_t x118 = INT16_MIN;
volatile uint16_t x119 = 195U;
uint64_t x120 = 5581057951LLU;
static volatile int16_t x123 = -1;
int32_t x124 = INT32_MIN;
volatile int8_t x128 = -1;
uint8_t x134 = 76U;
int32_t t33 = -804;
int32_t x143 = -6580;
volatile uint64_t x145 = 195LLU;
int32_t x149 = 4449;
volatile int32_t t37 = 558;
uint32_t x157 = UINT32_MAX;
volatile int8_t x161 = INT8_MAX;
static int8_t x162 = INT8_MIN;
uint32_t x164 = 97737843U;
int8_t x168 = -1;
volatile int8_t x176 = -6;
volatile int32_t t46 = 1;
uint16_t x190 = UINT16_MAX;
uint32_t t49 = 1U;
uint16_t x219 = 11U;
int32_t t54 = -167;
int8_t x223 = -8;
uint64_t x236 = 2066674807LLU;
static int64_t x237 = INT64_MAX;
int64_t x238 = -54441LL;
volatile int32_t x240 = -112583293;
volatile uint8_t x243 = 55U;
int16_t x248 = 2009;
uint8_t x251 = 5U;
int8_t x254 = INT8_MAX;
volatile int32_t x256 = 3752343;
int64_t x260 = INT64_MIN;
int32_t t67 = 1;
static int16_t x281 = 1;
int16_t x290 = INT16_MIN;
uint16_t x296 = 2721U;
volatile uint32_t t74 = 190U;
int32_t x307 = INT32_MAX;
volatile uint8_t x308 = UINT8_MAX;
int32_t t75 = 35840284;
uint32_t x309 = UINT32_MAX;
static uint8_t x310 = 59U;
static int32_t x311 = -1;
int32_t x313 = -1;
int16_t x320 = INT16_MIN;
int32_t t83 = -1334;
static uint16_t x344 = 0U;
int16_t x348 = -1;
static uint32_t x355 = 103193745U;
uint64_t x359 = UINT64_MAX;
int32_t t88 = -390467583;
static int16_t x367 = INT16_MAX;
int8_t x369 = 8;
int64_t x373 = -1LL;
uint64_t t93 = 58LLU;
uint8_t x386 = 7U;
int32_t x393 = -274;
volatile int16_t x394 = INT16_MIN;
volatile int32_t t97 = 26;
static uint16_t x397 = UINT16_MAX;
volatile int16_t x398 = -1;
static int32_t t99 = -55125;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile uint8_t x2 = 10U;
	static uint64_t x3 = 3449292392787056LLU;
	int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = -2554;

	t0 = (((x1%x2)<x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -105;
	int8_t x6 = -2;
	uint8_t x7 = UINT8_MAX;
	static int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 632710524;

	t1 = (((x5%x6)<x7)&x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 38;
	static uint16_t x10 = UINT16_MAX;
	uint16_t x11 = 147U;
	static volatile uint8_t x12 = 40U;
	volatile int32_t t2 = 8124;

	t2 = (((x9%x10)<x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = 7;
	volatile int32_t x16 = INT32_MAX;
	volatile int32_t t3 = -13990;

	t3 = (((x13%x14)<x15)&x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -1093018516227048LL;
	uint64_t x18 = 16053LLU;
	static uint64_t x19 = 2801825756285077LLU;
	uint64_t x20 = UINT64_MAX;
	uint64_t t4 = 4115931288120LLU;

	t4 = (((x17%x18)<x19)&x20);

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -28477LL;
	int32_t x22 = -1;
	int8_t x23 = INT8_MIN;
	uint16_t x24 = 22U;

	t5 = (((x21%x22)<x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x26 = 1;
	int8_t x27 = -1;
	volatile int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -51268;

	t6 = (((x25%x26)<x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 8U;
	volatile int16_t x31 = INT16_MIN;
	uint8_t x32 = 0U;
	int32_t t7 = 3875;

	t7 = (((x29%x30)<x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int16_t x35 = 0;
	int16_t x36 = 5;
	int32_t t8 = -165497805;

	t8 = (((x33%x34)<x35)&x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	uint32_t x40 = 754846077U;
	uint32_t t9 = 4299U;

	t9 = (((x37%x38)<x39)&x40);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = INT32_MIN;
	volatile int16_t x43 = -1856;
	static volatile uint64_t t10 = 60260LLU;

	t10 = (((x41%x42)<x43)&x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	uint32_t x46 = 230606872U;
	int32_t x48 = 380;

	t11 = (((x45%x46)<x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	int32_t x51 = INT32_MIN;
	int32_t t12 = 1089;

	t12 = (((x49%x50)<x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 122U;
	uint16_t x54 = 55U;
	int64_t x55 = -199881439662LL;
	int16_t x56 = INT16_MIN;
	int32_t t13 = -10;

	t13 = (((x53%x54)<x55)&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	volatile int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MIN;

	t14 = (((x57%x58)<x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x62 = UINT8_MAX;
	int64_t x63 = INT64_MIN;
	int16_t x64 = -1;
	volatile int32_t t15 = -14;

	t15 = (((x61%x62)<x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x66 = INT8_MIN;
	static int8_t x67 = INT8_MAX;
	int64_t x68 = 2LL;
	volatile int64_t t16 = 1056044LL;

	t16 = (((x65%x66)<x67)&x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	uint64_t x71 = 761LLU;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t17 = -2125;

	t17 = (((x69%x70)<x71)&x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -2;
	uint32_t x74 = 7699U;
	uint64_t x75 = 2LLU;
	uint64_t x76 = 29174227579579225LLU;
	volatile uint64_t t18 = 101319576637919323LLU;

	t18 = (((x73%x74)<x75)&x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -28;
	static int64_t x78 = INT64_MIN;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t19 = 7120028280230LLU;

	t19 = (((x77%x78)<x79)&x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 12817623961703LL;
	int8_t x82 = -1;
	volatile uint16_t x83 = 1U;
	volatile uint64_t t20 = 18368161856868LLU;

	t20 = (((x81%x82)<x83)&x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 94069813532LLU;
	uint16_t x86 = UINT16_MAX;
	int8_t x87 = 6;
	int32_t x88 = 110006;
	int32_t t21 = -305240;

	t21 = (((x85%x86)<x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = 90447LL;
	int32_t x90 = INT32_MIN;
	int32_t x91 = INT32_MAX;
	volatile uint32_t x92 = 10574U;
	volatile uint32_t t22 = 320301235U;

	t22 = (((x89%x90)<x91)&x92);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	uint16_t x94 = 3346U;
	int32_t x95 = INT32_MIN;
	int32_t x96 = INT32_MIN;
	volatile int32_t t23 = -1;

	t23 = (((x93%x94)<x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x99 = 43;
	static int32_t t24 = -370;

	t24 = (((x97%x98)<x99)&x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	uint8_t x102 = UINT8_MAX;
	static volatile int8_t x103 = 0;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t25 = 7990LLU;

	t25 = (((x101%x102)<x103)&x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	uint8_t x106 = UINT8_MAX;
	uint32_t x107 = 19866700U;
	volatile uint16_t x108 = UINT16_MAX;
	int32_t t26 = -1;

	t26 = (((x105%x106)<x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 365143156197536153LLU;
	int8_t x110 = -1;
	static int8_t x111 = INT8_MAX;
	uint32_t x112 = 15320U;

	t27 = (((x109%x110)<x111)&x112);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x115 = UINT32_MAX;
	int32_t x116 = INT32_MIN;
	int32_t t28 = 15;

	t28 = (((x113%x114)<x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = 226935;
	uint64_t t29 = 298765714180567LLU;

	t29 = (((x117%x118)<x119)&x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MAX;
	int32_t t30 = 16028;

	t30 = (((x121%x122)<x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	uint64_t x126 = 4326844LLU;
	static uint32_t x127 = UINT32_MAX;
	int32_t t31 = -21;

	t31 = (((x125%x126)<x127)&x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	volatile uint32_t x130 = UINT32_MAX;
	uint32_t x131 = 1U;
	uint8_t x132 = 9U;
	int32_t t32 = 5684868;

	t32 = (((x129%x130)<x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 96;
	int64_t x135 = INT64_MAX;
	int32_t x136 = 15289;

	t33 = (((x133%x134)<x135)&x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MIN;
	volatile int8_t x138 = 5;
	int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MIN;
	int64_t t34 = 57247633LL;

	t34 = (((x137%x138)<x139)&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x141 = 3207U;
	int64_t x142 = -94921982538LL;
	int8_t x144 = -3;
	volatile int32_t t35 = 147623;

	t35 = (((x141%x142)<x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x146 = 484681212U;
	int8_t x147 = -1;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -308649;

	t36 = (((x145%x146)<x147)&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = UINT64_MAX;
	static uint8_t x151 = UINT8_MAX;
	static uint16_t x152 = 63U;

	t37 = (((x149%x150)<x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	static uint32_t x154 = UINT32_MAX;
	int32_t x155 = -1;
	static int8_t x156 = -1;
	volatile int32_t t38 = 978;

	t38 = (((x153%x154)<x155)&x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MAX;
	int16_t x159 = -1;
	uint16_t x160 = 2990U;
	int32_t t39 = 12370330;

	t39 = (((x157%x158)<x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x163 = INT16_MIN;
	uint32_t t40 = 712490119U;

	t40 = (((x161%x162)<x163)&x164);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint32_t x166 = UINT32_MAX;
	uint32_t x167 = 15877U;
	volatile int32_t t41 = -1578;

	t41 = (((x165%x166)<x167)&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = 17LLU;
	static uint32_t x170 = UINT32_MAX;
	int32_t x171 = -1;
	uint8_t x172 = 18U;
	int32_t t42 = -36884;

	t42 = (((x169%x170)<x171)&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	uint32_t x174 = UINT32_MAX;
	int8_t x175 = -1;
	int32_t t43 = -1;

	t43 = (((x173%x174)<x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int16_t x178 = -1;
	int8_t x179 = -1;
	volatile uint64_t x180 = 13635LLU;
	uint64_t t44 = 28137350841097LLU;

	t44 = (((x177%x178)<x179)&x180);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = UINT8_MAX;
	int32_t x182 = -1;
	int32_t x183 = 12;
	int16_t x184 = INT16_MIN;
	static volatile int32_t t45 = 2293;

	t45 = (((x181%x182)<x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int32_t x186 = INT32_MIN;
	int16_t x187 = 1474;
	volatile uint16_t x188 = UINT16_MAX;

	t46 = (((x185%x186)<x187)&x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	static uint32_t x191 = 439U;
	int64_t x192 = -16358LL;
	int64_t t47 = 489955609585649LL;

	t47 = (((x189%x190)<x191)&x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 1766U;
	int16_t x194 = -1196;
	int8_t x195 = -1;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = 1;

	t48 = (((x193%x194)<x195)&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	volatile int32_t x198 = -794461955;
	int64_t x199 = INT64_MIN;
	volatile uint32_t x200 = UINT32_MAX;

	t49 = (((x197%x198)<x199)&x200);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x201 = UINT16_MAX;
	volatile int16_t x202 = -1;
	volatile uint32_t x203 = UINT32_MAX;
	int16_t x204 = INT16_MIN;
	int32_t t50 = -27197;

	t50 = (((x201%x202)<x203)&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 4253690524551966LLU;
	static int8_t x206 = INT8_MAX;
	int32_t x207 = -889133166;
	volatile uint64_t x208 = UINT64_MAX;
	uint64_t t51 = 422321682765952997LLU;

	t51 = (((x205%x206)<x207)&x208);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	uint8_t x210 = 42U;
	static int16_t x211 = -1;
	static int64_t x212 = INT64_MIN;
	int64_t t52 = -29836751950358507LL;

	t52 = (((x209%x210)<x211)&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 2979;
	uint64_t x214 = 26747LLU;
	int64_t x215 = INT64_MIN;
	int64_t x216 = -5168367581428971LL;
	static volatile int64_t t53 = -3509229737653208138LL;

	t53 = (((x213%x214)<x215)&x216);

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x217 = 13U;
	int32_t x218 = INT32_MIN;
	int8_t x220 = INT8_MIN;

	t54 = (((x217%x218)<x219)&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	uint16_t x222 = 9U;
	int32_t x224 = INT32_MAX;
	volatile int32_t t55 = -933288113;

	t55 = (((x221%x222)<x223)&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	volatile uint32_t x226 = 4233U;
	int32_t x227 = -1;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t56 = 17LLU;

	t56 = (((x225%x226)<x227)&x228);

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 64148U;
	volatile int16_t x230 = 12731;
	static uint8_t x231 = UINT8_MAX;
	int64_t x232 = INT64_MIN;
	static int64_t t57 = -70542664934845864LL;

	t57 = (((x229%x230)<x231)&x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	static int64_t x234 = INT64_MIN;
	uint32_t x235 = 25364380U;
	volatile uint64_t t58 = 95429409513LLU;

	t58 = (((x233%x234)<x235)&x236);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x239 = 8;
	volatile int32_t t59 = 6;

	t59 = (((x237%x238)<x239)&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	static volatile int64_t x242 = INT64_MIN;
	static int8_t x244 = INT8_MAX;
	int32_t t60 = -35575161;

	t60 = (((x241%x242)<x243)&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x245 = 21U;
	volatile int16_t x246 = INT16_MAX;
	uint8_t x247 = UINT8_MAX;
	volatile int32_t t61 = 1273782;

	t61 = (((x245%x246)<x247)&x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	uint64_t x250 = 1496269513955360LLU;
	volatile int8_t x252 = INT8_MIN;
	static int32_t t62 = 3;

	t62 = (((x249%x250)<x251)&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 100626LLU;
	int16_t x255 = INT16_MAX;
	int32_t t63 = -882523258;

	t63 = (((x253%x254)<x255)&x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 2941839739721LL;
	volatile uint32_t x258 = UINT32_MAX;
	volatile uint8_t x259 = UINT8_MAX;
	int64_t t64 = -11022271LL;

	t64 = (((x257%x258)<x259)&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	volatile int64_t x262 = INT64_MIN;
	int8_t x263 = 1;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t65 = -5206230;

	t65 = (((x261%x262)<x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	static int16_t x266 = INT16_MIN;
	volatile int8_t x267 = -1;
	int64_t x268 = INT64_MIN;
	int64_t t66 = 3524875928LL;

	t66 = (((x265%x266)<x267)&x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = UINT8_MAX;
	int8_t x270 = -6;
	static int8_t x271 = -1;
	int16_t x272 = INT16_MAX;

	t67 = (((x269%x270)<x271)&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = -1;
	uint16_t x278 = UINT16_MAX;
	static int32_t x279 = -1;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t68 = -2925;

	t68 = (((x277%x278)<x279)&x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x282 = 1U;
	static volatile int64_t x283 = INT64_MAX;
	uint16_t x284 = 26979U;
	volatile int32_t t69 = 4;

	t69 = (((x281%x282)<x283)&x284);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = UINT16_MAX;
	uint64_t x286 = UINT64_MAX;
	volatile int32_t x287 = INT32_MAX;
	uint64_t x288 = 113947LLU;
	static volatile uint64_t t70 = 447932960LLU;

	t70 = (((x285%x286)<x287)&x288);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = -1;
	int32_t x291 = 13563168;
	int8_t x292 = -1;
	volatile int32_t t71 = -1;

	t71 = (((x289%x290)<x291)&x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = -1LL;
	int64_t x294 = INT64_MIN;
	static uint64_t x295 = 46589351900LLU;
	int32_t t72 = -3868;

	t72 = (((x293%x294)<x295)&x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = -1;
	int16_t x298 = INT16_MAX;
	volatile uint16_t x299 = 813U;
	int16_t x300 = -43;
	volatile int32_t t73 = -1105;

	t73 = (((x297%x298)<x299)&x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = 380221634;
	uint64_t x302 = 9LLU;
	volatile int16_t x303 = -2;
	uint32_t x304 = 3U;

	t74 = (((x301%x302)<x303)&x304);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MIN;

	t75 = (((x305%x306)<x307)&x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x312 = -1;
	volatile int32_t t76 = -6259;

	t76 = (((x309%x310)<x311)&x312);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x314 = UINT16_MAX;
	static int16_t x315 = INT16_MAX;
	int8_t x316 = -2;
	int32_t t77 = 791;

	t77 = (((x313%x314)<x315)&x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x317 = -1;
	int64_t x318 = -1LL;
	static uint16_t x319 = 55U;
	int32_t t78 = 1062808;

	t78 = (((x317%x318)<x319)&x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = 0LL;
	uint32_t x322 = 14690705U;
	int8_t x323 = INT8_MAX;
	volatile uint16_t x324 = 4040U;
	static int32_t t79 = -28606;

	t79 = (((x321%x322)<x323)&x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x325 = 199U;
	volatile int8_t x326 = 1;
	uint64_t x327 = 4483593764531271LLU;
	int64_t x328 = -391961978LL;
	int64_t t80 = 88076427LL;

	t80 = (((x325%x326)<x327)&x328);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = INT16_MAX;
	int16_t x330 = -1;
	static int32_t x331 = -315;
	uint8_t x332 = 6U;
	int32_t t81 = -1068657894;

	t81 = (((x329%x330)<x331)&x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = INT64_MAX;
	uint64_t x334 = 29103040LLU;
	static uint64_t x335 = 703463448770LLU;
	int16_t x336 = 0;
	volatile int32_t t82 = -31054;

	t82 = (((x333%x334)<x335)&x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = -6592613226874705LL;
	static volatile int64_t x338 = INT64_MAX;
	int8_t x339 = INT8_MIN;
	uint16_t x340 = 0U;

	t83 = (((x337%x338)<x339)&x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x341 = INT16_MIN;
	int64_t x342 = INT64_MAX;
	int64_t x343 = INT64_MAX;
	int32_t t84 = 1922894;

	t84 = (((x341%x342)<x343)&x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = INT64_MIN;
	static volatile int16_t x346 = -126;
	uint16_t x347 = UINT16_MAX;
	int32_t t85 = -811369;

	t85 = (((x345%x346)<x347)&x348);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = INT8_MIN;
	int64_t x350 = -15557141281730789LL;
	volatile uint8_t x351 = 18U;
	uint64_t x352 = 38880918300355049LLU;
	volatile uint64_t t86 = 13811LLU;

	t86 = (((x349%x350)<x351)&x352);

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x353 = 62719949555712817LL;
	static uint16_t x354 = 50U;
	volatile int16_t x356 = INT16_MIN;
	int32_t t87 = 78761476;

	t87 = (((x353%x354)<x355)&x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x357 = 3444U;
	volatile uint32_t x358 = UINT32_MAX;
	uint8_t x360 = 31U;

	t88 = (((x357%x358)<x359)&x360);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x361 = INT32_MAX;
	int16_t x362 = -1;
	int16_t x363 = -1;
	int32_t x364 = INT32_MIN;
	static int32_t t89 = -177374194;

	t89 = (((x361%x362)<x363)&x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x365 = UINT16_MAX;
	int16_t x366 = INT16_MAX;
	int32_t x368 = -483786018;
	volatile int32_t t90 = 23590;

	t90 = (((x365%x366)<x367)&x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x370 = INT16_MIN;
	int8_t x371 = INT8_MAX;
	static uint32_t x372 = 11892093U;
	static uint32_t t91 = 3U;

	t91 = (((x369%x370)<x371)&x372);

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x374 = INT8_MIN;
	uint8_t x375 = 3U;
	int16_t x376 = INT16_MAX;
	int32_t t92 = -357197234;

	t92 = (((x373%x374)<x375)&x376);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x377 = INT8_MIN;
	static uint16_t x378 = UINT16_MAX;
	uint64_t x379 = 2829941436226LLU;
	static volatile uint64_t x380 = 482364237LLU;

	t93 = (((x377%x378)<x379)&x380);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x381 = 23901U;
	volatile uint8_t x382 = 58U;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	int32_t t94 = -4081972;

	t94 = (((x381%x382)<x383)&x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x385 = 6134LLU;
	int32_t x387 = -1;
	volatile int32_t x388 = 6;
	int32_t t95 = -249;

	t95 = (((x385%x386)<x387)&x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x389 = 1U;
	int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MIN;
	uint64_t x392 = 239889645639LLU;
	static uint64_t t96 = 12993LLU;

	t96 = (((x389%x390)<x391)&x392);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x395 = 24266U;
	volatile int8_t x396 = 61;

	t97 = (((x393%x394)<x395)&x396);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x399 = 4;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t98 = 1615893822LLU;

	t98 = (((x397%x398)<x399)&x400);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = -1;
	int16_t x402 = INT16_MAX;
	int32_t x403 = INT32_MAX;
	uint16_t x404 = 6U;

	t99 = (((x401%x402)<x403)&x404);

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


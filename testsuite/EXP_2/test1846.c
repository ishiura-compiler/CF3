#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = 56684621302164787LL;
static uint16_t x8 = 1U;
volatile uint32_t x9 = 1335162121U;
uint32_t x12 = 0U;
static int8_t x14 = INT8_MIN;
static volatile int64_t x21 = -3024043LL;
int16_t x28 = INT16_MIN;
int64_t x31 = INT64_MIN;
volatile uint32_t t8 = 2067203037U;
static int16_t x53 = INT16_MIN;
static int64_t x68 = -1547193240841LL;
int16_t x69 = -1;
static int32_t x71 = INT32_MIN;
static uint64_t x91 = 2178775157990609968LLU;
int16_t x93 = INT16_MIN;
uint64_t x94 = 52617065603652655LLU;
volatile uint64_t t23 = 6937663052LLU;
int32_t x100 = INT32_MIN;
uint64_t t25 = 75036420LLU;
volatile int32_t x106 = 3332;
volatile uint64_t x108 = 712LLU;
int16_t x112 = INT16_MIN;
int32_t t27 = 495623;
int64_t x126 = INT64_MIN;
volatile uint32_t x127 = UINT32_MAX;
int32_t x131 = 606135;
int64_t x132 = INT64_MIN;
static int64_t x133 = INT64_MIN;
int64_t t33 = 6136LL;
volatile uint16_t x141 = UINT16_MAX;
static int16_t x145 = -1740;
uint8_t x146 = 16U;
volatile int32_t x162 = -1;
int16_t x171 = INT16_MIN;
volatile int32_t t42 = 485044;
uint8_t x182 = 27U;
volatile int16_t x184 = -1;
int64_t x187 = -26284357037LL;
int8_t x199 = -2;
static volatile int64_t t52 = 9765720LL;
volatile uint64_t t53 = 82433898994LLU;
int16_t x217 = 1;
uint8_t x220 = UINT8_MAX;
static int64_t x223 = 14561256329LL;
uint64_t x225 = UINT64_MAX;
int32_t x229 = -160;
volatile int32_t x249 = -1;
static int8_t x272 = INT8_MIN;
static uint16_t x274 = 5U;
static volatile int16_t x281 = -1;
int32_t t72 = -182;
int8_t x300 = -41;
static volatile int8_t x307 = INT8_MAX;
int64_t t77 = -345LL;
uint64_t x321 = 182959LLU;
static int16_t x322 = INT16_MIN;
static int32_t x329 = 27516836;
volatile uint32_t x331 = 3U;
uint16_t x332 = 21U;
int64_t t82 = -3153969LL;
uint32_t t83 = 11U;
uint32_t x339 = 2878U;
int16_t x341 = INT16_MIN;
static int16_t x343 = -1;
int8_t x345 = INT8_MIN;
static int32_t x352 = INT32_MAX;
int16_t x357 = INT16_MIN;
int16_t x364 = -1;
int32_t x366 = 1;
int8_t x372 = INT8_MIN;
uint64_t x373 = UINT64_MAX;
int8_t x375 = INT8_MIN;
uint8_t x380 = 6U;
uint32_t x385 = 525U;
int32_t x391 = INT32_MIN;
volatile int32_t x393 = -1;
uint16_t x394 = 1015U;
int16_t x399 = -17;


void f0(void) {
	int8_t x1 = -9;
	volatile int64_t x2 = INT64_MIN;
	int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = 62602150861LL;

	t0 = ((x1|(x2&x3))^x4);

	if (t0 != 119LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	static int64_t x6 = INT64_MIN;
	volatile int64_t t1 = -64552249206240LL;

	t1 = ((x5|(x6&x7))^x8);

	if (t1 != -2LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = INT32_MAX;
	uint64_t x11 = 259040592935990032LLU;
	static uint64_t t2 = 3058329225648885367LLU;

	t2 = ((x9|(x10&x11))^x12);

	if (t2 != 2145384217LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -1LL;
	int32_t x15 = -774393739;
	int32_t x16 = INT32_MIN;
	volatile int64_t t3 = 115LL;

	t3 = ((x13|(x14&x15))^x16);

	if (t3 != 2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	volatile int32_t x18 = -2492219;
	uint16_t x19 = UINT16_MAX;
	volatile int32_t x20 = -1;
	volatile int32_t t4 = -88500;

	t4 = ((x17|(x18&x19))^x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;
	int32_t x23 = -1;
	int16_t x24 = INT16_MIN;
	volatile int64_t t5 = 775103185520LL;

	t5 = ((x21|(x22&x23))^x24);

	if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = -1;
	volatile int32_t x26 = 26474;
	int16_t x27 = INT16_MIN;
	int32_t t6 = -29417;

	t6 = ((x25|(x26&x27))^x28);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 108280205620LLU;
	uint32_t x30 = 67739U;
	static uint32_t x32 = UINT32_MAX;
	uint64_t t7 = 1659074282241709LLU;

	t7 = ((x29|(x30&x31))^x32);

	if (t7 != 110763126475LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	int8_t x34 = -1;
	uint32_t x35 = 28681772U;
	uint16_t x36 = 6310U;

	t8 = ((x33|(x34&x35))^x36);

	if (t8 != 28698457U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	uint16_t x38 = UINT16_MAX;
	int32_t x39 = -1;
	int8_t x40 = 1;
	static volatile int32_t t9 = 799;

	t9 = ((x37|(x38&x39))^x40);

	if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	volatile uint32_t x42 = UINT32_MAX;
	static volatile uint32_t x43 = UINT32_MAX;
	int64_t x44 = INT64_MIN;
	int64_t t10 = -4810934044296LL;

	t10 = ((x41|(x42&x43))^x44);

	if (t10 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MAX;
	uint16_t x46 = UINT16_MAX;
	uint32_t x47 = UINT32_MAX;
	int8_t x48 = -1;
	uint32_t t11 = 19860528U;

	t11 = ((x45|(x46&x47))^x48);

	if (t11 != 2147483648U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 886U;
	int16_t x50 = -1;
	int32_t x51 = -1;
	static volatile int32_t x52 = -1;
	volatile uint32_t t12 = 60U;

	t12 = ((x49|(x50&x51))^x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = 835;
	int64_t x55 = 925739415165LL;
	static int32_t x56 = INT32_MAX;
	volatile int64_t t13 = 33736882510062035LL;

	t13 = ((x53|(x54&x55))^x56);

	if (t13 != -2147451458LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 100LLU;
	volatile uint64_t x58 = 817052880928042963LLU;
	static int8_t x59 = -1;
	volatile uint32_t x60 = 67U;
	volatile uint64_t t14 = 9003707040476874LLU;

	t14 = ((x57|(x58&x59))^x60);

	if (t14 != 817052880928042932LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 0U;
	volatile uint64_t x62 = UINT64_MAX;
	volatile int8_t x63 = 1;
	static int16_t x64 = -107;
	uint64_t t15 = 1814LLU;

	t15 = ((x61|(x62&x63))^x64);

	if (t15 != 18446744073709551508LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -37928657649LL;
	int64_t x66 = 467LL;
	int32_t x67 = INT32_MAX;
	volatile int64_t t16 = 105669489LL;

	t16 = ((x65|(x66&x67))^x68);

	if (t16 != 1515844415272LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = UINT32_MAX;
	static int64_t x72 = -30504046884LL;
	int64_t t17 = -5831671LL;

	t17 = ((x69|(x70&x71))^x72);

	if (t17 != -33920462557LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -1;
	uint32_t x74 = 49U;
	int16_t x75 = -1;
	uint16_t x76 = 15197U;
	volatile uint32_t t18 = 1213866034U;

	t18 = ((x73|(x74&x75))^x76);

	if (t18 != 4294952098U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	static uint32_t x78 = UINT32_MAX;
	uint8_t x79 = 0U;
	int16_t x80 = -1;
	uint32_t t19 = 13U;

	t19 = ((x77|(x78&x79))^x80);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -2564;
	int16_t x82 = INT16_MIN;
	static uint8_t x83 = UINT8_MAX;
	int64_t x84 = -16LL;
	int64_t t20 = -3775618235LL;

	t20 = ((x81|(x82&x83))^x84);

	if (t20 != 2572LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -1LL;
	int16_t x86 = INT16_MIN;
	int16_t x87 = INT16_MIN;
	int16_t x88 = 82;
	int64_t t21 = -402LL;

	t21 = ((x85|(x86&x87))^x88);

	if (t21 != -83LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static int32_t x90 = -23722;
	volatile uint16_t x92 = UINT16_MAX;
	volatile uint64_t t22 = 29694526309629LLU;

	t22 = ((x89|(x90&x91))^x92);

	if (t22 != 18446744073331638255LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x95 = INT16_MIN;
	int16_t x96 = -1;

	t23 = ((x93|(x94&x95))^x96);

	if (t23 != 32767LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 0;
	static uint32_t x98 = 272154968U;
	volatile int32_t x99 = 172479723;
	uint32_t t24 = 155123015U;

	t24 = ((x97|(x98&x99))^x100);

	if (t24 != 2147532872U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = INT64_MIN;
	static uint64_t x102 = UINT64_MAX;
	int64_t x103 = INT64_MAX;
	volatile int16_t x104 = 52;

	t25 = ((x101|(x102&x103))^x104);

	if (t25 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 4;
	uint8_t x107 = UINT8_MAX;
	static volatile uint64_t t26 = 8LLU;

	t26 = ((x105|(x106&x107))^x108);

	if (t26 != 716LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int16_t x110 = -55;
	static int16_t x111 = -1089;

	t27 = ((x109|(x110&x111))^x112);

	if (t27 != 32649) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	static int64_t x114 = INT64_MIN;
	static int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MIN;
	volatile int64_t t28 = 0LL;

	t28 = ((x113|(x114&x115))^x116);

	if (t28 != 2147483647LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = 14U;
	int32_t x118 = INT32_MIN;
	static uint16_t x119 = 17186U;
	static volatile int8_t x120 = INT8_MIN;
	static volatile int32_t t29 = 1445;

	t29 = ((x117|(x118&x119))^x120);

	if (t29 != -114) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = UINT8_MAX;
	int64_t x122 = INT64_MIN;
	int64_t x123 = INT64_MIN;
	int32_t x124 = 1;
	int64_t t30 = 106395265094289LL;

	t30 = ((x121|(x122&x123))^x124);

	if (t30 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	uint64_t x128 = 1664421170153LLU;
	uint64_t t31 = 5515358475488LLU;

	t31 = ((x125|(x126&x127))^x128);

	if (t31 != 18446742409288381462LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = 1792660992000LLU;
	volatile uint32_t x130 = 526U;
	uint64_t t32 = 0LLU;

	t32 = ((x129|(x130&x131))^x132);

	if (t32 != 9223373829515768326LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x134 = 2U;
	int64_t x135 = -185697302394263466LL;
	volatile uint32_t x136 = UINT32_MAX;

	t33 = ((x133|(x134&x135))^x136);

	if (t33 != -9223372032559808515LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = 4381441U;
	uint8_t x138 = 127U;
	int32_t x139 = 158682297;
	volatile uint16_t x140 = 212U;
	uint32_t t34 = 1014U;

	t34 = ((x137|(x138&x139))^x140);

	if (t34 != 4381677U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x142 = 19033214U;
	uint32_t x143 = 1U;
	static int32_t x144 = INT32_MIN;
	volatile uint32_t t35 = 47U;

	t35 = ((x141|(x142&x143))^x144);

	if (t35 != 2147549183U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x147 = INT64_MAX;
	int16_t x148 = INT16_MIN;
	volatile int64_t t36 = 25819517634885LL;

	t36 = ((x145|(x146&x147))^x148);

	if (t36 != 31028LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	volatile int32_t x150 = INT32_MAX;
	uint32_t x151 = 41499024U;
	uint8_t x152 = UINT8_MAX;
	uint32_t t37 = 3U;

	t37 = ((x149|(x150&x151))^x152);

	if (t37 != 4294949231U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = -1;
	static int32_t x154 = INT32_MIN;
	uint32_t x155 = 493322017U;
	int8_t x156 = 26;
	uint32_t t38 = 7U;

	t38 = ((x153|(x154&x155))^x156);

	if (t38 != 4294967269U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x157 = -1;
	static uint32_t x158 = 223285774U;
	static int64_t x159 = INT64_MIN;
	int8_t x160 = 2;
	int64_t t39 = -640853239910759LL;

	t39 = ((x157|(x158&x159))^x160);

	if (t39 != -3LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	int32_t x163 = INT32_MIN;
	int16_t x164 = INT16_MIN;
	static volatile int32_t t40 = INT32_MAX;

	t40 = ((x161|(x162&x163))^x164);

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 1LLU;
	int64_t x166 = INT64_MIN;
	uint64_t x167 = UINT64_MAX;
	int16_t x168 = -1;
	volatile uint64_t t41 = 2LLU;

	t41 = ((x165|(x166&x167))^x168);

	if (t41 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 16410;
	static int8_t x170 = INT8_MAX;
	int16_t x172 = -1;

	t42 = ((x169|(x170&x171))^x172);

	if (t42 != -16411) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MIN;
	static int8_t x174 = INT8_MIN;
	int64_t x175 = INT64_MAX;
	int8_t x176 = INT8_MAX;
	int64_t t43 = -169472395639LL;

	t43 = ((x173|(x174&x175))^x176);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 19U;
	int8_t x178 = 0;
	volatile int8_t x179 = INT8_MAX;
	int8_t x180 = INT8_MAX;
	static volatile int32_t t44 = -589637376;

	t44 = ((x177|(x178&x179))^x180);

	if (t44 != 108) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	uint32_t x183 = UINT32_MAX;
	static uint32_t t45 = 16151672U;

	t45 = ((x181|(x182&x183))^x184);

	if (t45 != 32740U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = -1LL;
	uint8_t x186 = 17U;
	volatile int8_t x188 = -1;
	static int64_t t46 = 63LL;

	t46 = ((x185|(x186&x187))^x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	uint16_t x190 = 1U;
	volatile int8_t x191 = 1;
	volatile int64_t x192 = INT64_MIN;
	volatile int64_t t47 = 970353287454931051LL;

	t47 = ((x189|(x190&x191))^x192);

	if (t47 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MIN;
	int16_t x194 = INT16_MAX;
	volatile int16_t x195 = -1;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t48 = 5729261067LLU;

	t48 = ((x193|(x194&x195))^x196);

	if (t48 != 2147450880LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	static int64_t x198 = -1LL;
	uint64_t x200 = UINT64_MAX;
	volatile uint64_t t49 = 563898620LLU;

	t49 = ((x197|(x198&x199))^x200);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int8_t x202 = -1;
	uint32_t x203 = UINT32_MAX;
	int64_t x204 = -2545LL;
	int64_t t50 = -80LL;

	t50 = ((x201|(x202&x203))^x204);

	if (t50 != 9223372032559811056LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	static int32_t x206 = -5;
	volatile int64_t x207 = INT64_MIN;
	volatile int16_t x208 = -1;
	static int64_t t51 = -15891349508294301LL;

	t51 = ((x205|(x206&x207))^x208);

	if (t51 != 2147483647LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 89773671302LL;
	volatile int64_t x210 = -652579434LL;
	int16_t x211 = -1;
	volatile int16_t x212 = INT16_MIN;

	t52 = ((x209|(x210&x211))^x212);

	if (t52 != 28566LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	volatile uint64_t x214 = 50341060LLU;
	volatile int8_t x215 = -12;
	static int32_t x216 = 95348474;

	t53 = ((x213|(x214&x215))^x216);

	if (t53 != 112105733LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MAX;
	volatile int8_t x219 = -61;
	int32_t t54 = 245;

	t54 = ((x217|(x218&x219))^x220);

	if (t54 != 32572) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 0;
	static int32_t x222 = INT32_MIN;
	uint16_t x224 = 68U;
	static volatile int64_t t55 = 24226LL;

	t55 = ((x221|(x222&x223))^x224);

	if (t55 != 12884901956LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x226 = -1;
	uint64_t x227 = 542952045034205LLU;
	uint8_t x228 = 3U;
	volatile uint64_t t56 = 956257LLU;

	t56 = ((x225|(x226&x227))^x228);

	if (t56 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x230 = 999;
	volatile uint64_t x231 = 4755168834284040949LLU;
	int16_t x232 = -1;
	volatile uint64_t t57 = 1LLU;

	t57 = ((x229|(x230&x231))^x232);

	if (t57 != 26LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x233 = 1U;
	int64_t x234 = -1LL;
	uint32_t x235 = 1248720U;
	int64_t x236 = INT64_MIN;
	int64_t t58 = 40LL;

	t58 = ((x233|(x234&x235))^x236);

	if (t58 != -9223372036853527087LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	static uint32_t x238 = 149U;
	int8_t x239 = INT8_MIN;
	int8_t x240 = INT8_MIN;
	uint32_t t59 = 18U;

	t59 = ((x237|(x238&x239))^x240);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	int8_t x242 = -1;
	static volatile int8_t x243 = INT8_MIN;
	int8_t x244 = 7;
	static volatile int32_t t60 = -2897832;

	t60 = ((x241|(x242&x243))^x244);

	if (t60 != -8) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 12;
	int16_t x246 = INT16_MAX;
	int16_t x247 = -4041;
	int64_t x248 = -1LL;
	int64_t t61 = -274826942LL;

	t61 = ((x245|(x246&x247))^x248);

	if (t61 != -28736LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x250 = -1;
	static int16_t x251 = -464;
	static uint16_t x252 = 191U;
	int32_t t62 = 743967424;

	t62 = ((x249|(x250&x251))^x252);

	if (t62 != -192) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = -20;
	uint8_t x254 = 33U;
	static volatile uint64_t x255 = 0LLU;
	int64_t x256 = -69144565652954LL;
	uint64_t t63 = 62576705775247521LLU;

	t63 = ((x253|(x254&x255))^x256);

	if (t63 != 69144565652938LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = 3;
	uint8_t x258 = UINT8_MAX;
	int8_t x259 = INT8_MAX;
	static int16_t x260 = INT16_MIN;
	int32_t t64 = 4808;

	t64 = ((x257|(x258&x259))^x260);

	if (t64 != -32641) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = 1;
	int64_t x262 = INT64_MAX;
	int8_t x263 = INT8_MAX;
	int64_t x264 = -1LL;
	int64_t t65 = 962365LL;

	t65 = ((x261|(x262&x263))^x264);

	if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = INT64_MIN;
	uint32_t x266 = 356U;
	int64_t x267 = INT64_MIN;
	int16_t x268 = 2553;
	int64_t t66 = -29042293308891343LL;

	t66 = ((x265|(x266&x267))^x268);

	if (t66 != -9223372036854773255LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -19;
	volatile int64_t x270 = -25LL;
	uint64_t x271 = 26459004LLU;
	volatile uint64_t t67 = 61110998LLU;

	t67 = ((x269|(x270&x271))^x272);

	if (t67 != 109LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x273 = 1U;
	volatile uint8_t x275 = UINT8_MAX;
	int64_t x276 = -308841660110LL;
	int64_t t68 = -774143LL;

	t68 = ((x273|(x274&x275))^x276);

	if (t68 != -308841660105LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 6040685U;
	int16_t x278 = -1;
	static int8_t x279 = 3;
	int64_t x280 = -315848875670LL;
	int64_t t69 = 94001134123490621LL;

	t69 = ((x277|(x278&x279))^x280);

	if (t69 != -315853337339LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = INT16_MIN;
	int32_t x283 = 901434807;
	static int8_t x284 = -1;
	int32_t t70 = 7638;

	t70 = ((x281|(x282&x283))^x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	volatile int32_t x286 = -1;
	uint32_t x287 = 133948U;
	static int8_t x288 = 0;
	volatile uint32_t t71 = 588U;

	t71 = ((x285|(x286&x287))^x288);

	if (t71 != 2147483647U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	volatile uint8_t x290 = 26U;
	static int32_t x291 = -1;
	int8_t x292 = -38;

	t72 = ((x289|(x290&x291))^x292);

	if (t72 != 2147483584) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 30;
	static int32_t x294 = -1;
	static uint8_t x295 = 3U;
	int8_t x296 = INT8_MAX;
	volatile int32_t t73 = -36320;

	t73 = ((x293|(x294&x295))^x296);

	if (t73 != 96) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	uint32_t x298 = 19944U;
	int16_t x299 = -149;
	int64_t t74 = 2245092536894LL;

	t74 = ((x297|(x298&x299))^x300);

	if (t74 != 40LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	volatile uint32_t x302 = 396761U;
	int32_t x303 = -1841;
	int32_t x304 = -78866819;
	static volatile uint32_t t75 = 1963774765U;

	t75 = ((x301|(x302&x303))^x304);

	if (t75 != 78866818U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	uint64_t x306 = UINT64_MAX;
	static int8_t x308 = INT8_MIN;
	volatile uint64_t t76 = 36830241372LLU;

	t76 = ((x305|(x306&x307))^x308);

	if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MAX;
	static int64_t x310 = INT64_MAX;
	int32_t x311 = 5207742;
	int16_t x312 = INT16_MIN;

	t77 = ((x309|(x310&x311))^x312);

	if (t77 != -2147450881LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 30;
	int16_t x314 = INT16_MIN;
	static int32_t x315 = INT32_MIN;
	int16_t x316 = 3805;
	static int32_t t78 = 5;

	t78 = ((x313|(x314&x315))^x316);

	if (t78 != -2147479869) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 0U;
	volatile int8_t x318 = 2;
	volatile uint32_t x319 = 0U;
	uint8_t x320 = UINT8_MAX;
	uint32_t t79 = 1U;

	t79 = ((x317|(x318&x319))^x320);

	if (t79 != 255U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x323 = INT64_MAX;
	int64_t x324 = -7504479151805992LL;
	static volatile uint64_t t80 = 6272947LLU;

	t80 = ((x321|(x322&x323))^x324);

	if (t80 != 9230876516006585207LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 5U;
	int32_t x326 = -24836;
	uint16_t x327 = 7U;
	volatile int16_t x328 = -10610;
	volatile int32_t t81 = 304402754;

	t81 = ((x325|(x326&x327))^x328);

	if (t81 != -10613) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = 412419662216128885LL;

	t82 = ((x329|(x330&x331))^x332);

	if (t82 != 27516848LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 2U;
	uint32_t x334 = 583735339U;
	int8_t x335 = -3;
	int16_t x336 = INT16_MAX;

	t83 = ((x333|(x334&x335))^x336);

	if (t83 != 583755732U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 9017349420897122088LLU;
	int32_t x338 = INT32_MIN;
	int64_t x340 = INT64_MAX;
	volatile uint64_t t84 = 81168979LLU;

	t84 = ((x337|(x338&x339))^x340);

	if (t84 != 206022615957653719LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = 10583;
	uint8_t x344 = 1U;
	int32_t t85 = 52;

	t85 = ((x341|(x342&x343))^x344);

	if (t85 != -22186) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = 21079;
	int64_t x347 = INT64_MIN;
	static int32_t x348 = INT32_MIN;
	static volatile int64_t t86 = -3LL;

	t86 = ((x345|(x346&x347))^x348);

	if (t86 != 2147483520LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	uint16_t x350 = 1292U;
	volatile int16_t x351 = -1;
	static int32_t t87 = 42;

	t87 = ((x349|(x350&x351))^x352);

	if (t87 != -2147483533) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = UINT32_MAX;
	volatile int32_t x354 = -1;
	int32_t x355 = 124;
	static uint8_t x356 = 1U;
	uint32_t t88 = 135U;

	t88 = ((x353|(x354&x355))^x356);

	if (t88 != 4294967294U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x358 = UINT64_MAX;
	int8_t x359 = -1;
	static int16_t x360 = INT16_MIN;
	uint64_t t89 = 33052963637603LLU;

	t89 = ((x357|(x358&x359))^x360);

	if (t89 != 32767LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 0U;
	static int8_t x362 = INT8_MIN;
	int32_t x363 = 23;
	volatile int32_t t90 = 112155;

	t90 = ((x361|(x362&x363))^x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int32_t x367 = -1;
	int32_t x368 = INT32_MAX;
	int32_t t91 = -2310;

	t91 = ((x365|(x366&x367))^x368);

	if (t91 != -2147450882) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x369 = INT32_MAX;
	uint32_t x370 = 3392U;
	static volatile uint16_t x371 = 199U;
	volatile uint32_t t92 = 464U;

	t92 = ((x369|(x370&x371))^x372);

	if (t92 != 2147483775U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = INT32_MIN;
	int16_t x376 = -1;
	uint64_t t93 = 5459164192LLU;

	t93 = ((x373|(x374&x375))^x376);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	uint64_t x378 = 2123885052595LLU;
	uint8_t x379 = UINT8_MAX;
	uint64_t t94 = 37006720LLU;

	t94 = ((x377|(x378&x379))^x380);

	if (t94 != 18446744073709519029LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -10;
	volatile int64_t x382 = 13259231347130LL;
	static volatile uint8_t x383 = 1U;
	uint16_t x384 = 2673U;
	int64_t t95 = 3428338550174158434LL;

	t95 = ((x381|(x382&x383))^x384);

	if (t95 != -2681LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MIN;
	uint32_t x388 = UINT32_MAX;
	volatile int64_t t96 = 15641042967548525LL;

	t96 = ((x385|(x386&x387))^x388);

	if (t96 != -9223372032559809038LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 0;
	volatile int16_t x390 = -3;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 27154;

	t97 = ((x389|(x390&x391))^x392);

	if (t97 != 2147450880) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x395 = -1;
	static int16_t x396 = 30;
	volatile int32_t t98 = -76580730;

	t98 = ((x393|(x394&x395))^x396);

	if (t98 != -31) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x397 = 3U;
	volatile int32_t x398 = 83293;
	static volatile uint16_t x400 = 11693U;
	static volatile int32_t t99 = -129779754;

	t99 = ((x397|(x398&x399))^x400);

	if (t99 != 92386) { NG(); } else { ; }
	
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


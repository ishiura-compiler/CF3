#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = INT64_MAX;
int8_t x17 = 1;
int64_t x24 = 1052365615LL;
static int32_t x28 = 46328421;
static int8_t x29 = -34;
int64_t x40 = INT64_MIN;
static int64_t x48 = -238LL;
int32_t x49 = -1;
int64_t x50 = -2186552946LL;
int8_t x55 = INT8_MIN;
volatile int16_t x57 = -1;
volatile int32_t t15 = -117312;
int32_t x65 = INT32_MIN;
static int32_t x76 = INT32_MIN;
uint32_t x77 = UINT32_MAX;
uint64_t x82 = 157131LLU;
volatile int16_t x85 = INT16_MAX;
volatile uint64_t t22 = 9012220921979581LLU;
volatile int32_t t23 = 719;
volatile uint64_t t24 = 231LLU;
int8_t x108 = INT8_MIN;
uint32_t x110 = 114U;
int8_t x123 = INT8_MIN;
int16_t x126 = INT16_MAX;
static volatile uint32_t x132 = 1454275U;
uint8_t x134 = 1U;
int16_t x135 = -1;
int32_t t34 = -9419031;
int8_t x156 = INT8_MAX;
static volatile int64_t t38 = 45940333LL;
volatile int64_t x157 = -30025821LL;
uint8_t x158 = 10U;
int64_t t40 = 14553434658LL;
int32_t x171 = INT32_MAX;
int8_t x177 = 6;
int16_t x180 = 251;
uint8_t x185 = 2U;
static int8_t x186 = -1;
static volatile int64_t x189 = -1LL;
uint8_t x194 = 18U;
static volatile int32_t t48 = 3549;
static uint64_t t50 = 2556040879LLU;
static int8_t x207 = INT8_MAX;
static uint16_t x208 = 453U;
int64_t x213 = INT64_MAX;
int16_t x219 = INT16_MIN;
int8_t x222 = 34;
int16_t x231 = INT16_MIN;
uint16_t x237 = 3588U;
static int32_t x241 = 2306;
int16_t x252 = INT16_MIN;
volatile int32_t t62 = -33274872;
volatile uint16_t x258 = UINT16_MAX;
int64_t x259 = 65378648236806LL;
int8_t x264 = -1;
static volatile int32_t t65 = 54116;
volatile uint8_t x266 = 5U;
int16_t x274 = -1;
volatile int32_t t68 = INT32_MIN;
int8_t x277 = INT8_MAX;
int64_t t69 = -12505LL;
int32_t x283 = -1;
int8_t x288 = INT8_MIN;
static int32_t t72 = -193103;
uint64_t t73 = 147567749894151618LLU;
uint32_t x301 = 916462983U;
volatile uint32_t x303 = UINT32_MAX;
static uint32_t t75 = 130U;
uint16_t x308 = 13614U;
uint32_t x311 = 1272805438U;
int8_t x312 = INT8_MIN;
uint32_t t77 = 5884U;
int64_t x313 = -1LL;
static int32_t x315 = -1;
volatile int64_t x328 = -1LL;
volatile int64_t t81 = 1845579LL;
int32_t t83 = INT32_MIN;
int16_t x339 = INT16_MIN;
volatile uint16_t x340 = 169U;
uint32_t x341 = 234U;
static uint8_t x345 = 6U;
uint16_t x352 = 396U;
int64_t x355 = -206483512199347LL;
int32_t x359 = INT32_MAX;
int16_t x375 = INT16_MIN;
int8_t x381 = INT8_MAX;
int64_t x388 = INT64_MIN;
int16_t x400 = -1954;


void f0(void) {
	uint8_t x1 = 1U;
	static int8_t x2 = INT8_MAX;
	uint32_t x4 = 172250736U;
	int64_t t0 = 5024520LL;

	t0 = (((x1<=x2)^x3)&x4);

	if (t0 != 172250736LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int16_t x6 = 1;
	int8_t x7 = INT8_MAX;
	int32_t x8 = INT32_MIN;
	int32_t t1 = -880146423;

	t1 = (((x5<=x6)^x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint64_t x10 = 760LLU;
	static int16_t x11 = INT16_MIN;
	static volatile int64_t x12 = 414LL;
	volatile int64_t t2 = 801LL;

	t2 = (((x9<=x10)^x11)&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	int32_t x14 = -7919825;
	int8_t x15 = 26;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -329;

	t3 = (((x13<=x14)^x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = 46LL;
	volatile int16_t x19 = 3533;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 0;

	t4 = (((x17<=x18)^x19)&x20);

	if (t4 != 3456) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -12;
	volatile int32_t x22 = INT32_MIN;
	volatile int8_t x23 = INT8_MIN;
	static int64_t t5 = -879222LL;

	t5 = (((x21<=x22)^x23)&x24);

	if (t5 != 1052365568LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	int32_t x26 = -1;
	int32_t x27 = INT32_MIN;
	int32_t t6 = 11401482;

	t6 = (((x25<=x26)^x27)&x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	static int8_t x31 = INT8_MIN;
	uint32_t x32 = 2348949U;
	volatile uint32_t t7 = 8153U;

	t7 = (((x29<=x30)^x31)&x32);

	if (t7 != 2348928U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int64_t x34 = 345353260487981788LL;
	uint64_t x35 = UINT64_MAX;
	int32_t x36 = -163;
	static volatile uint64_t t8 = 74326015801LLU;

	t8 = (((x33<=x34)^x35)&x36);

	if (t8 != 18446744073709551452LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = UINT64_MAX;
	uint16_t x38 = 230U;
	volatile int16_t x39 = INT16_MIN;
	int64_t t9 = INT64_MIN;

	t9 = (((x37<=x38)^x39)&x40);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 1U;
	int32_t x42 = INT32_MIN;
	int64_t x43 = -1LL;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = INT64_MIN;

	t10 = (((x41<=x42)^x43)&x44);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 64995U;
	int8_t x46 = INT8_MIN;
	int32_t x47 = -267;
	volatile int64_t t11 = -10280344180913099LL;

	t11 = (((x45<=x46)^x47)&x48);

	if (t11 != -496LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x51 = 83386993995278993LL;
	uint64_t x52 = 5LLU;
	static volatile uint64_t t12 = 324LLU;

	t12 = (((x49<=x50)^x51)&x52);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -12;
	uint32_t x54 = 33U;
	volatile int32_t x56 = INT32_MAX;
	int32_t t13 = -250522;

	t13 = (((x53<=x54)^x55)&x56);

	if (t13 != 2147483520) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = UINT8_MAX;
	uint8_t x59 = 97U;
	static uint64_t x60 = 7LLU;
	volatile uint64_t t14 = 25456LLU;

	t14 = (((x57<=x58)^x59)&x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 22969U;
	uint64_t x62 = UINT64_MAX;
	static uint8_t x63 = 7U;
	int8_t x64 = -1;

	t15 = (((x61<=x62)^x63)&x64);

	if (t15 != 6) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	static volatile int32_t x67 = INT32_MAX;
	int8_t x68 = INT8_MAX;
	volatile int32_t t16 = -497;

	t16 = (((x65<=x66)^x67)&x68);

	if (t16 != 126) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 0;
	volatile uint16_t x70 = 758U;
	int8_t x71 = 11;
	uint32_t x72 = 251713211U;
	static volatile uint32_t t17 = 24698203U;

	t17 = (((x69<=x70)^x71)&x72);

	if (t17 != 10U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 2U;
	volatile uint8_t x74 = 2U;
	int16_t x75 = INT16_MIN;
	int32_t t18 = INT32_MIN;

	t18 = (((x73<=x74)^x75)&x76);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MAX;
	volatile int8_t x79 = INT8_MAX;
	static uint32_t x80 = 38U;
	volatile uint32_t t19 = 61U;

	t19 = (((x77<=x78)^x79)&x80);

	if (t19 != 38U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 0;
	static uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MIN;
	int32_t t20 = -173201490;

	t20 = (((x81<=x82)^x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x86 = 149218LLU;
	int8_t x87 = INT8_MAX;
	static uint8_t x88 = 1U;
	int32_t t21 = -137809027;

	t21 = (((x85<=x86)^x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MIN;
	int16_t x90 = INT16_MIN;
	volatile int16_t x91 = -3811;
	volatile uint64_t x92 = UINT64_MAX;

	t22 = (((x89<=x90)^x91)&x92);

	if (t22 != 18446744073709547804LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = 0U;
	volatile int32_t x94 = 100;
	int16_t x95 = INT16_MAX;
	static uint8_t x96 = 9U;

	t23 = (((x93<=x94)^x95)&x96);

	if (t23 != 8) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 226725219271199953LLU;
	static int64_t x98 = INT64_MIN;
	uint64_t x99 = UINT64_MAX;
	static uint32_t x100 = 1328599040U;

	t24 = (((x97<=x98)^x99)&x100);

	if (t24 != 1328599040LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = -1LL;
	uint32_t x102 = 148U;
	uint32_t x103 = UINT32_MAX;
	uint16_t x104 = UINT16_MAX;
	volatile uint32_t t25 = 5215U;

	t25 = (((x101<=x102)^x103)&x104);

	if (t25 != 65534U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	uint32_t x106 = 7U;
	uint8_t x107 = 23U;
	volatile int32_t t26 = 233;

	t26 = (((x105<=x106)^x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 1530U;
	uint32_t x111 = UINT32_MAX;
	uint64_t x112 = 76106731LLU;
	uint64_t t27 = 14485295678075234LLU;

	t27 = (((x109<=x110)^x111)&x112);

	if (t27 != 76106731LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int8_t x114 = INT8_MIN;
	static int64_t x115 = -1LL;
	uint16_t x116 = UINT16_MAX;
	int64_t t28 = 0LL;

	t28 = (((x113<=x114)^x115)&x116);

	if (t28 != 65535LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	volatile uint8_t x118 = UINT8_MAX;
	volatile int64_t x119 = INT64_MIN;
	volatile uint8_t x120 = 1U;
	volatile int64_t t29 = 109LL;

	t29 = (((x117<=x118)^x119)&x120);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x121 = 2LL;
	int16_t x122 = INT16_MIN;
	uint16_t x124 = UINT16_MAX;
	int32_t t30 = -1328861;

	t30 = (((x121<=x122)^x123)&x124);

	if (t30 != 65408) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 4;
	static uint8_t x127 = 9U;
	static int32_t x128 = INT32_MIN;
	int32_t t31 = -801346;

	t31 = (((x125<=x126)^x127)&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	uint8_t x130 = 0U;
	int64_t x131 = INT64_MAX;
	static volatile int64_t t32 = -1095398639526LL;

	t32 = (((x129<=x130)^x131)&x132);

	if (t32 != 1454274LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MIN;
	int8_t x136 = INT8_MAX;
	volatile int32_t t33 = 1;

	t33 = (((x133<=x134)^x135)&x136);

	if (t33 != 126) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = INT8_MAX;
	int64_t x138 = INT64_MIN;
	volatile uint16_t x139 = 13414U;
	uint8_t x140 = 104U;

	t34 = (((x137<=x138)^x139)&x140);

	if (t34 != 96) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x141 = UINT8_MAX;
	static int8_t x142 = -41;
	static uint32_t x143 = 2U;
	int64_t x144 = 83LL;
	volatile int64_t t35 = 8702762806211LL;

	t35 = (((x141<=x142)^x143)&x144);

	if (t35 != 2LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	static int8_t x146 = 8;
	int16_t x147 = INT16_MIN;
	uint32_t x148 = 126541U;
	volatile uint32_t t36 = 20077392U;

	t36 = (((x145<=x146)^x147)&x148);

	if (t36 != 98304U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	int64_t x150 = INT64_MIN;
	volatile int16_t x151 = INT16_MAX;
	volatile int8_t x152 = 0;
	volatile int32_t t37 = -43691;

	t37 = (((x149<=x150)^x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 1815068557359LLU;
	int8_t x154 = INT8_MAX;
	volatile int64_t x155 = -792632020321LL;

	t38 = (((x153<=x154)^x155)&x156);

	if (t38 != 31LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x159 = UINT8_MAX;
	static int32_t x160 = 5;
	volatile int32_t t39 = -371835;

	t39 = (((x157<=x158)^x159)&x160);

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MAX;
	uint16_t x162 = 1722U;
	int64_t x163 = -1LL;
	int64_t x164 = -1LL;

	t40 = (((x161<=x162)^x163)&x164);

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 23U;
	uint32_t x166 = UINT32_MAX;
	static uint16_t x167 = UINT16_MAX;
	int64_t x168 = 48592439218763LL;
	volatile int64_t t41 = -520682551169141443LL;

	t41 = (((x165<=x166)^x167)&x168);

	if (t41 != 4682LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	int64_t x170 = -1LL;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 407310;

	t42 = (((x169<=x170)^x171)&x172);

	if (t42 != 2147483520) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 467544LLU;
	int8_t x174 = 0;
	int32_t x175 = 1846169;
	uint64_t x176 = 19269184LLU;
	static volatile uint64_t t43 = 3074226080509LLU;

	t43 = (((x173<=x174)^x175)&x176);

	if (t43 != 262656LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = 36U;
	static int8_t x179 = INT8_MIN;
	static int32_t t44 = -353043533;

	t44 = (((x177<=x178)^x179)&x180);

	if (t44 != 129) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	volatile int8_t x182 = INT8_MIN;
	uint8_t x183 = UINT8_MAX;
	int64_t x184 = INT64_MIN;
	static int64_t t45 = 93545480779LL;

	t45 = (((x181<=x182)^x183)&x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = 351;
	int32_t t46 = 8016045;

	t46 = (((x185<=x186)^x187)&x188);

	if (t46 != 95) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = UINT8_MAX;
	uint64_t x191 = 19294710LLU;
	int8_t x192 = -1;
	volatile uint64_t t47 = 61LLU;

	t47 = (((x189<=x190)^x191)&x192);

	if (t47 != 19294711LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	uint8_t x195 = 1U;
	uint16_t x196 = 1U;

	t48 = (((x193<=x194)^x195)&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	uint16_t x198 = 13647U;
	int64_t x199 = 2853064LL;
	uint16_t x200 = 3899U;
	volatile int64_t t49 = -546231848692779189LL;

	t49 = (((x197<=x198)^x199)&x200);

	if (t49 != 2057LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MIN;
	volatile uint64_t x204 = UINT64_MAX;

	t50 = (((x201<=x202)^x203)&x204);

	if (t50 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MIN;
	static volatile int32_t t51 = -6183083;

	t51 = (((x205<=x206)^x207)&x208);

	if (t51 != 68) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	static int16_t x210 = INT16_MIN;
	uint8_t x211 = 112U;
	int8_t x212 = 0;
	static volatile int32_t t52 = 981923;

	t52 = (((x209<=x210)^x211)&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = INT32_MAX;
	int64_t x215 = INT64_MIN;
	int16_t x216 = INT16_MIN;
	int64_t t53 = INT64_MIN;

	t53 = (((x213<=x214)^x215)&x216);

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x217 = 372;
	int32_t x218 = -519753;
	static uint64_t x220 = UINT64_MAX;
	volatile uint64_t t54 = 7591284493LLU;

	t54 = (((x217<=x218)^x219)&x220);

	if (t54 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MIN;
	uint8_t x223 = 0U;
	int16_t x224 = -1;
	int32_t t55 = -1;

	t55 = (((x221<=x222)^x223)&x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	uint16_t x226 = 5U;
	static int16_t x227 = -1;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t56 = 1LLU;

	t56 = (((x225<=x226)^x227)&x228);

	if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	int32_t x230 = -662738;
	static volatile uint64_t x232 = UINT64_MAX;
	uint64_t t57 = 532476755LLU;

	t57 = (((x229<=x230)^x231)&x232);

	if (t57 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	volatile int8_t x234 = 1;
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;
	int32_t t58 = -8765598;

	t58 = (((x233<=x234)^x235)&x236);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = -1;
	int16_t x239 = 29;
	int32_t x240 = 6;
	static int32_t t59 = 209;

	t59 = (((x237<=x238)^x239)&x240);

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = 14;
	int64_t x243 = INT64_MIN;
	static uint64_t x244 = 811640224LLU;
	uint64_t t60 = 15204LLU;

	t60 = (((x241<=x242)^x243)&x244);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int64_t x246 = INT64_MIN;
	uint32_t x247 = UINT32_MAX;
	static int16_t x248 = 42;
	uint32_t t61 = 981384U;

	t61 = (((x245<=x246)^x247)&x248);

	if (t61 != 42U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 1;
	volatile int32_t x250 = 98480;
	static uint16_t x251 = 25252U;

	t62 = (((x249<=x250)^x251)&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	static int32_t x254 = INT32_MIN;
	volatile int8_t x255 = INT8_MIN;
	int16_t x256 = 15240;
	volatile int32_t t63 = -469086;

	t63 = (((x253<=x254)^x255)&x256);

	if (t63 != 15232) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MIN;
	static uint32_t x260 = 222658038U;
	volatile int64_t t64 = 2804LL;

	t64 = (((x257<=x258)^x259)&x260);

	if (t64 != 83894534LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	int32_t x262 = -1;
	int16_t x263 = 2976;

	t65 = (((x261<=x262)^x263)&x264);

	if (t65 != 2977) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	uint32_t x267 = UINT32_MAX;
	volatile int8_t x268 = 12;
	static volatile uint32_t t66 = 42980205U;

	t66 = (((x265<=x266)^x267)&x268);

	if (t66 != 12U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = 12U;
	static volatile int8_t x270 = -1;
	static int8_t x271 = INT8_MIN;
	uint8_t x272 = 0U;
	int32_t t67 = -44731158;

	t67 = (((x269<=x270)^x271)&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = UINT32_MAX;
	static volatile int32_t x275 = INT32_MIN;
	static int16_t x276 = INT16_MIN;

	t68 = (((x273<=x274)^x275)&x276);

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x278 = 163768091401LLU;
	volatile int32_t x279 = INT32_MIN;
	int64_t x280 = INT64_MAX;

	t69 = (((x277<=x278)^x279)&x280);

	if (t69 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = INT32_MAX;
	static volatile uint16_t x282 = 360U;
	static int64_t x284 = INT64_MIN;
	volatile int64_t t70 = INT64_MIN;

	t70 = (((x281<=x282)^x283)&x284);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	volatile int32_t x286 = INT32_MIN;
	static int16_t x287 = INT16_MIN;
	volatile int32_t t71 = 2;

	t71 = (((x285<=x286)^x287)&x288);

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 1253236185395LL;
	int64_t x290 = 78737110LL;
	volatile uint8_t x291 = 53U;
	int8_t x292 = INT8_MIN;

	t72 = (((x289<=x290)^x291)&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	static uint64_t x294 = 1315171LLU;
	static volatile int32_t x295 = -1;
	uint64_t x296 = 54653922686203549LLU;

	t73 = (((x293<=x294)^x295)&x296);

	if (t73 != 54653922686203548LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int64_t x298 = -1LL;
	volatile int8_t x299 = 3;
	int8_t x300 = INT8_MIN;
	static int32_t t74 = 266860801;

	t74 = (((x297<=x298)^x299)&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x302 = 7U;
	volatile uint8_t x304 = UINT8_MAX;

	t75 = (((x301<=x302)^x303)&x304);

	if (t75 != 255U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = 748455101395LLU;
	volatile int32_t x306 = INT32_MIN;
	int16_t x307 = -1;
	static volatile int32_t t76 = 6554055;

	t76 = (((x305<=x306)^x307)&x308);

	if (t76 != 13614) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -929372197320LL;
	int32_t x310 = -581119;

	t77 = (((x309<=x310)^x311)&x312);

	if (t77 != 1272805376U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x314 = 0U;
	static volatile int16_t x316 = INT16_MIN;
	int32_t t78 = 1;

	t78 = (((x313<=x314)^x315)&x316);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = 5020827;
	static int16_t x318 = INT16_MAX;
	volatile uint64_t x319 = UINT64_MAX;
	int64_t x320 = 8565775896899920LL;
	volatile uint64_t t79 = 4432914727294290LLU;

	t79 = (((x317<=x318)^x319)&x320);

	if (t79 != 8565775896899920LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = INT64_MIN;
	volatile int16_t x322 = -24;
	int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MAX;
	static volatile int64_t t80 = 0LL;

	t80 = (((x321<=x322)^x323)&x324);

	if (t80 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	static uint32_t x326 = 42U;
	int32_t x327 = -1;

	t81 = (((x325<=x326)^x327)&x328);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = 15;
	int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MAX;
	volatile int64_t x332 = INT64_MIN;
	static int64_t t82 = -11275LL;

	t82 = (((x329<=x330)^x331)&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	uint16_t x334 = 554U;
	int8_t x335 = -1;
	int32_t x336 = INT32_MIN;

	t83 = (((x333<=x334)^x335)&x336);

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = -2087406188LL;
	uint32_t x338 = 16684310U;
	static int32_t t84 = -283510;

	t84 = (((x337<=x338)^x339)&x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x342 = UINT16_MAX;
	int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	int32_t t85 = INT32_MIN;

	t85 = (((x341<=x342)^x343)&x344);

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x346 = UINT16_MAX;
	volatile int32_t x347 = -433425994;
	volatile int16_t x348 = INT16_MAX;
	volatile int32_t t86 = 688834;

	t86 = (((x345<=x346)^x347)&x348);

	if (t86 != 29111) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = 14599809;
	int32_t x350 = INT32_MIN;
	volatile int16_t x351 = INT16_MIN;
	int32_t t87 = -16207152;

	t87 = (((x349<=x350)^x351)&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = 6489001130406952LLU;
	uint32_t x354 = UINT32_MAX;
	int16_t x356 = 23;
	int64_t t88 = 52820LL;

	t88 = (((x353<=x354)^x355)&x356);

	if (t88 != 5LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 163554817U;
	int32_t x358 = INT32_MAX;
	uint8_t x360 = 1U;
	int32_t t89 = -399638720;

	t89 = (((x357<=x358)^x359)&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = UINT16_MAX;
	int32_t x362 = INT32_MIN;
	static uint64_t x363 = 1811502204548043419LLU;
	int64_t x364 = INT64_MIN;
	static volatile uint64_t t90 = 397104774LLU;

	t90 = (((x361<=x362)^x363)&x364);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 217282;
	static volatile int16_t x366 = -45;
	int32_t x367 = 1;
	int32_t x368 = -60;
	int32_t t91 = -2;

	t91 = (((x365<=x366)^x367)&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	static uint16_t x370 = UINT16_MAX;
	int32_t x371 = 105;
	int64_t x372 = -1LL;
	volatile int64_t t92 = -64098667LL;

	t92 = (((x369<=x370)^x371)&x372);

	if (t92 != 105LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x373 = 7178795258LLU;
	int16_t x374 = INT16_MAX;
	int64_t x376 = 0LL;
	static volatile int64_t t93 = -166420656LL;

	t93 = (((x373<=x374)^x375)&x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	int8_t x378 = INT8_MAX;
	int8_t x379 = 8;
	static int16_t x380 = -1;
	int32_t t94 = 1853390;

	t94 = (((x377<=x378)^x379)&x380);

	if (t94 != 8) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x382 = UINT16_MAX;
	uint8_t x383 = 1U;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = -151733218;

	t95 = (((x381<=x382)^x383)&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	volatile int16_t x386 = 1023;
	uint8_t x387 = UINT8_MAX;
	int64_t t96 = 116LL;

	t96 = (((x385<=x386)^x387)&x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MAX;
	int16_t x392 = -42;
	volatile int32_t t97 = 30826792;

	t97 = (((x389<=x390)^x391)&x392);

	if (t97 != 2147483606) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1641;
	int32_t x394 = 47160226;
	static uint64_t x395 = 65LLU;
	uint8_t x396 = 6U;
	volatile uint64_t t98 = 29870164880514LLU;

	t98 = (((x393<=x394)^x395)&x396);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	uint8_t x398 = 113U;
	int8_t x399 = INT8_MAX;
	int32_t t99 = 56694041;

	t99 = (((x397<=x398)^x399)&x400);

	if (t99 != 94) { NG(); } else { ; }
	
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


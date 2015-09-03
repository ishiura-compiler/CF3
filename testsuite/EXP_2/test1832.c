#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x5 = INT8_MIN;
volatile uint16_t x6 = 11U;
volatile uint16_t x8 = UINT16_MAX;
static uint64_t x13 = UINT64_MAX;
uint8_t x16 = UINT8_MAX;
static uint64_t x23 = 29845548006241160LLU;
volatile uint64_t t5 = 1812944LLU;
static volatile int64_t x25 = -1LL;
static int64_t x26 = 5122541143595LL;
volatile int64_t x32 = -10205636794731LL;
int32_t x34 = -1;
int32_t t8 = 27;
volatile int64_t x47 = -208231LL;
int8_t x61 = INT8_MAX;
static uint32_t x62 = 80508055U;
volatile int64_t t16 = -3LL;
static uint32_t x105 = 126U;
int64_t x106 = INT64_MAX;
volatile int64_t t26 = 6308992177864LL;
static int32_t x109 = INT32_MIN;
uint16_t x111 = 1U;
uint16_t x113 = 10285U;
static int16_t x120 = INT16_MIN;
static uint32_t x129 = UINT32_MAX;
int16_t x132 = -1;
static int64_t x135 = 2932926798LL;
uint32_t x144 = 18249U;
uint32_t x145 = 4007781U;
uint16_t x149 = UINT16_MAX;
uint64_t t37 = 1090562684690LLU;
volatile int16_t x153 = INT16_MIN;
int64_t x156 = -5740LL;
volatile int64_t t38 = -118984752LL;
int8_t x157 = INT8_MIN;
volatile uint8_t x160 = 3U;
int32_t x173 = INT32_MIN;
int16_t x175 = -31;
volatile uint16_t x184 = UINT16_MAX;
int16_t x185 = INT16_MIN;
int16_t x186 = -1;
volatile uint32_t t46 = UINT32_MAX;
uint16_t x189 = 24U;
int16_t x196 = -1;
volatile int64_t t48 = -143LL;
static int32_t x198 = INT32_MIN;
static int16_t x199 = -1;
int16_t x200 = INT16_MIN;
volatile uint64_t x203 = UINT64_MAX;
uint8_t x216 = 108U;
volatile int32_t x221 = INT32_MAX;
int32_t x224 = 977;
volatile int64_t x230 = INT64_MAX;
int64_t x232 = INT64_MIN;
static volatile int8_t x233 = INT8_MIN;
int8_t x239 = INT8_MIN;
int32_t x240 = -851;
static uint64_t t60 = 1545LLU;
volatile int32_t x251 = INT32_MIN;
int64_t x253 = -1LL;
uint64_t t63 = 69592LLU;
int16_t x258 = -1;
int8_t x265 = INT8_MIN;
int8_t x282 = INT8_MIN;
int64_t t70 = -932LL;
int32_t x285 = INT32_MIN;
uint64_t t71 = 516012LLU;
int8_t x294 = INT8_MIN;
int32_t x295 = 19;
static uint32_t x296 = 8991286U;
uint32_t t73 = 25767U;
static volatile int16_t x299 = -1;
static volatile int64_t x301 = -119936848LL;
uint16_t x304 = UINT16_MAX;
int8_t x305 = -1;
int8_t x313 = INT8_MIN;
volatile uint32_t x314 = UINT32_MAX;
int32_t x315 = -3569;
volatile uint32_t t78 = 1895320738U;
static volatile uint16_t x322 = UINT16_MAX;
static int8_t x327 = INT8_MAX;
int16_t x331 = 5;
int64_t x335 = 70626812LL;
uint32_t x341 = 15925U;
int16_t x347 = -1;
uint16_t x350 = UINT16_MAX;
volatile uint32_t x352 = 1603U;
static volatile uint64_t t87 = 6075LLU;
static int8_t x354 = INT8_MAX;
static int16_t x357 = -227;
uint16_t x359 = UINT16_MAX;
volatile int8_t x361 = -46;
volatile uint64_t t90 = 1094341145303LLU;
static volatile uint32_t t91 = UINT32_MAX;
static uint8_t x370 = UINT8_MAX;
uint64_t x372 = 17712LLU;
int32_t x374 = INT32_MIN;
static uint16_t x396 = UINT16_MAX;
volatile int64_t x399 = 2355857861LL;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static int16_t x2 = INT16_MIN;
	int32_t x3 = -351078461;
	int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 3775LLU;

	t0 = ((x1&(x2&x3))|x4);

	if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x7 = 21808859493LL;
	volatile int64_t t1 = -457120632LL;

	t1 = ((x5&(x6&x7))|x8);

	if (t1 != 65535LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = 214296;
	uint16_t x10 = 1U;
	int8_t x11 = INT8_MAX;
	int8_t x12 = -1;
	volatile int32_t t2 = -1;

	t2 = ((x9&(x10&x11))|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = INT16_MAX;
	uint8_t x15 = 57U;
	volatile uint64_t t3 = 1610LLU;

	t3 = ((x13&(x14&x15))|x16);

	if (t3 != 255LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	uint64_t x18 = UINT64_MAX;
	uint64_t x19 = 3970312021LLU;
	int16_t x20 = 1172;
	volatile uint64_t t4 = 117583467130LLU;

	t4 = ((x17&(x18&x19))|x20);

	if (t4 != 1172LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = 22;
	uint8_t x22 = 0U;
	volatile uint32_t x24 = 54990U;

	t5 = ((x21&(x22&x23))|x24);

	if (t5 != 54990LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x27 = 0U;
	uint16_t x28 = UINT16_MAX;
	volatile int64_t t6 = -170147643974311200LL;

	t6 = ((x25&(x26&x27))|x28);

	if (t6 != 65535LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1944521106793966254LL;
	volatile int8_t x30 = INT8_MIN;
	int32_t x31 = INT32_MIN;
	volatile int64_t t7 = -237LL;

	t7 = ((x29&(x30&x31))|x32);

	if (t7 != -1100306127211LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MAX;
	static uint8_t x35 = 1U;
	int16_t x36 = INT16_MAX;

	t8 = ((x33&(x34&x35))|x36);

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = 47;
	int64_t x38 = -1LL;
	volatile int16_t x39 = 26;
	uint8_t x40 = UINT8_MAX;
	volatile int64_t t9 = -40691818659899LL;

	t9 = ((x37&(x38&x39))|x40);

	if (t9 != 255LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -1LL;
	uint64_t x42 = 24292440744LLU;
	uint8_t x43 = 7U;
	volatile int64_t x44 = INT64_MIN;
	static volatile uint64_t t10 = 989754257504LLU;

	t10 = ((x41&(x42&x43))|x44);

	if (t10 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1844;
	static int32_t x46 = INT32_MIN;
	int8_t x48 = INT8_MAX;
	volatile int64_t t11 = 62580670LL;

	t11 = ((x45&(x46&x47))|x48);

	if (t11 != -2147483521LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	static uint16_t x50 = UINT16_MAX;
	uint64_t x51 = 4681358796129LLU;
	volatile int32_t x52 = INT32_MIN;
	volatile uint64_t t12 = 8601051039082299LLU;

	t12 = ((x49&(x50&x51))|x52);

	if (t12 != 18446744071562093921LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile int16_t x54 = INT16_MAX;
	int32_t x55 = -1;
	int8_t x56 = -1;
	static volatile int32_t t13 = -1861;

	t13 = ((x53&(x54&x55))|x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 53056446615393661LLU;
	uint8_t x58 = 0U;
	int8_t x59 = -10;
	static int8_t x60 = 17;
	uint64_t t14 = 9LLU;

	t14 = ((x57&(x58&x59))|x60);

	if (t14 != 17LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x63 = 553LL;
	volatile int16_t x64 = INT16_MAX;
	int64_t t15 = 401537330508296LL;

	t15 = ((x61&(x62&x63))|x64);

	if (t15 != 32767LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 1239U;
	uint32_t x66 = 6043U;
	int32_t x67 = INT32_MIN;
	int64_t x68 = -2929LL;

	t16 = ((x65&(x66&x67))|x68);

	if (t16 != -2929LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = 939843438LLU;
	volatile int16_t x70 = INT16_MIN;
	uint16_t x71 = 880U;
	static int16_t x72 = INT16_MIN;
	volatile uint64_t t17 = 4042880536153LLU;

	t17 = ((x69&(x70&x71))|x72);

	if (t17 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 18961U;
	static uint32_t x74 = UINT32_MAX;
	static int16_t x75 = -1;
	int8_t x76 = 2;
	static uint32_t t18 = 96U;

	t18 = ((x73&(x74&x75))|x76);

	if (t18 != 18963U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = 21250;
	int64_t x78 = INT64_MIN;
	static int64_t x79 = INT64_MIN;
	uint16_t x80 = 46U;
	int64_t t19 = -6523869440376LL;

	t19 = ((x77&(x78&x79))|x80);

	if (t19 != 46LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	static int64_t x82 = 0LL;
	volatile uint32_t x83 = 131U;
	int16_t x84 = 406;
	volatile int64_t t20 = -8369625LL;

	t20 = ((x81&(x82&x83))|x84);

	if (t20 != 406LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 435573436U;
	volatile uint64_t x86 = 1200792358183891LLU;
	int32_t x87 = INT32_MIN;
	uint32_t x88 = 48279587U;
	volatile uint64_t t21 = 645838502604990LLU;

	t21 = ((x85&(x86&x87))|x88);

	if (t21 != 48279587LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	int64_t x90 = INT64_MIN;
	int64_t x91 = -227LL;
	static int64_t x92 = -1LL;
	uint64_t t22 = UINT64_MAX;

	t22 = ((x89&(x90&x91))|x92);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MIN;
	volatile int8_t x95 = -59;
	uint32_t x96 = 31199U;
	static volatile uint32_t t23 = 212463U;

	t23 = ((x93&(x94&x95))|x96);

	if (t23 != 4294965727U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 3U;
	int32_t x98 = -1;
	volatile int16_t x99 = INT16_MAX;
	int32_t x100 = INT32_MAX;
	uint32_t t24 = 43U;

	t24 = ((x97&(x98&x99))|x100);

	if (t24 != 2147483647U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	uint32_t x102 = 2100843273U;
	int8_t x103 = INT8_MAX;
	uint8_t x104 = UINT8_MAX;
	volatile uint32_t t25 = 189256234U;

	t25 = ((x101&(x102&x103))|x104);

	if (t25 != 255U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x107 = INT64_MIN;
	int64_t x108 = 6343LL;

	t26 = ((x105&(x106&x107))|x108);

	if (t26 != 6343LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = -188952898527949303LL;
	int8_t x112 = INT8_MAX;
	int64_t t27 = 4125431081148288LL;

	t27 = ((x109&(x110&x111))|x112);

	if (t27 != 127LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MIN;
	static uint64_t x115 = 9542072191842LLU;
	volatile int32_t x116 = 45531611;
	uint64_t t28 = 27849638818LLU;

	t28 = ((x113&(x114&x115))|x116);

	if (t28 != 45533659LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	static int16_t x118 = -4469;
	volatile uint16_t x119 = 88U;
	volatile int32_t t29 = -909179;

	t29 = ((x117&(x118&x119))|x120);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -1037;
	uint64_t x122 = 183933511353834952LLU;
	uint64_t x123 = 462703801804LLU;
	volatile int16_t x124 = INT16_MIN;
	uint64_t t30 = 11075LLU;

	t30 = ((x121&(x122&x123))|x124);

	if (t30 != 18446744073709523392LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = UINT16_MAX;
	int8_t x126 = INT8_MIN;
	uint8_t x127 = 102U;
	int32_t x128 = 935188067;
	volatile int32_t t31 = 304;

	t31 = ((x125&(x126&x127))|x128);

	if (t31 != 935188067) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = -1LL;
	volatile uint64_t x131 = 3LLU;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = ((x129&(x130&x131))|x132);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	static int16_t x134 = -1;
	volatile int32_t x136 = -1003;
	volatile int64_t t33 = -1668704LL;

	t33 = ((x133&(x134&x135))|x136);

	if (t33 != -673LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int64_t x138 = 96LL;
	static uint32_t x139 = 80564U;
	static uint8_t x140 = 0U;
	int64_t t34 = -743LL;

	t34 = ((x137&(x138&x139))|x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MAX;
	volatile int32_t x142 = -1;
	static int32_t x143 = -1;
	static uint32_t t35 = 5605U;

	t35 = ((x141&(x142&x143))|x144);

	if (t35 != 32767U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MIN;
	static int16_t x147 = -1669;
	static uint64_t x148 = 36460985276LLU;
	volatile uint64_t t36 = 33851128661393178LLU;

	t36 = ((x145&(x146&x147))|x148);

	if (t36 != 36460985276LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x150 = UINT16_MAX;
	int32_t x151 = -78196475;
	uint64_t x152 = 1098664LLU;

	t37 = ((x149&(x150&x151))|x152);

	if (t37 != 1102765LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = -86;
	static int16_t x155 = INT16_MAX;

	t38 = ((x153&(x154&x155))|x156);

	if (t38 != -5740LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = 103;
	int8_t x159 = 1;
	int32_t t39 = -131;

	t39 = ((x157&(x158&x159))|x160);

	if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	int64_t x162 = 572228626667LL;
	static int64_t x163 = -1LL;
	int32_t x164 = -3;
	volatile int64_t t40 = -116519789987LL;

	t40 = ((x161&(x162&x163))|x164);

	if (t40 != -3LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MAX;
	uint16_t x166 = 0U;
	static uint64_t x167 = UINT64_MAX;
	int16_t x168 = INT16_MIN;
	static volatile uint64_t t41 = 606502348773LLU;

	t41 = ((x165&(x166&x167))|x168);

	if (t41 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 859;
	int16_t x170 = INT16_MIN;
	int64_t x171 = -4042945663565LL;
	int64_t x172 = INT64_MAX;
	int64_t t42 = INT64_MAX;

	t42 = ((x169&(x170&x171))|x172);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x174 = INT32_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t43 = -196;

	t43 = ((x173&(x174&x175))|x176);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	static uint64_t x178 = 1658154514LLU;
	uint16_t x179 = 1284U;
	static int16_t x180 = INT16_MAX;
	volatile uint64_t t44 = 66348179462LLU;

	t44 = ((x177&(x178&x179))|x180);

	if (t44 != 32767LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int32_t x182 = INT32_MIN;
	int32_t x183 = INT32_MAX;
	int32_t t45 = -1;

	t45 = ((x181&(x182&x183))|x184);

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x187 = 167U;
	int16_t x188 = -1;

	t46 = ((x185&(x186&x187))|x188);

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = INT64_MAX;
	uint8_t x191 = 103U;
	int32_t x192 = -1;
	static int64_t t47 = 882303977135604LL;

	t47 = ((x189&(x190&x191))|x192);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x193 = 3660199387LL;
	static uint8_t x194 = 3U;
	uint16_t x195 = 3U;

	t48 = ((x193&(x194&x195))|x196);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = -1;
	static volatile int32_t t49 = 1060073663;

	t49 = ((x197&(x198&x199))|x200);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 2375U;
	int8_t x202 = -1;
	int16_t x204 = INT16_MIN;
	uint64_t t50 = 15901456LLU;

	t50 = ((x201&(x202&x203))|x204);

	if (t50 != 18446744073709521223LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = -4;
	int16_t x207 = -1;
	int32_t x208 = INT32_MIN;
	int64_t t51 = 382382816714220695LL;

	t51 = ((x205&(x206&x207))|x208);

	if (t51 != -2147483648LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 3U;
	int8_t x210 = -1;
	uint64_t x211 = 153282757288775LLU;
	volatile int32_t x212 = -1;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = ((x209&(x210&x211))|x212);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x213 = 2LLU;
	int8_t x214 = INT8_MIN;
	int16_t x215 = INT16_MIN;
	uint64_t t53 = 1681LLU;

	t53 = ((x213&(x214&x215))|x216);

	if (t53 != 108LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 27U;
	uint8_t x218 = UINT8_MAX;
	int64_t x219 = INT64_MIN;
	int32_t x220 = INT32_MAX;
	int64_t t54 = -118652605993LL;

	t54 = ((x217&(x218&x219))|x220);

	if (t54 != 2147483647LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x222 = INT32_MAX;
	uint16_t x223 = 39U;
	int32_t t55 = 5586;

	t55 = ((x221&(x222&x223))|x224);

	if (t55 != 1015) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	volatile int32_t x226 = INT32_MAX;
	static int8_t x227 = -1;
	volatile int32_t x228 = INT32_MIN;
	int32_t t56 = INT32_MIN;

	t56 = ((x225&(x226&x227))|x228);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	uint8_t x231 = UINT8_MAX;
	int64_t t57 = -3075763LL;

	t57 = ((x229&(x230&x231))|x232);

	if (t57 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x234 = -3;
	static int8_t x235 = INT8_MAX;
	static volatile uint16_t x236 = UINT16_MAX;
	int32_t t58 = 423;

	t58 = ((x233&(x234&x235))|x236);

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -636;
	volatile int16_t x238 = INT16_MIN;
	volatile int32_t t59 = -9222625;

	t59 = ((x237&(x238&x239))|x240);

	if (t59 != -851) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	uint8_t x242 = UINT8_MAX;
	int32_t x243 = -1;
	volatile int16_t x244 = INT16_MIN;

	t60 = ((x241&(x242&x243))|x244);

	if (t60 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x245 = UINT32_MAX;
	uint16_t x246 = 1U;
	int8_t x247 = INT8_MAX;
	uint16_t x248 = 333U;
	volatile uint32_t t61 = 390024U;

	t61 = ((x245&(x246&x247))|x248);

	if (t61 != 333U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 14853;
	int32_t x250 = INT32_MAX;
	uint32_t x252 = 7U;
	uint32_t t62 = 32514U;

	t62 = ((x249&(x250&x251))|x252);

	if (t62 != 7U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = -325;
	uint64_t x255 = UINT64_MAX;
	int16_t x256 = -16;

	t63 = ((x253&(x254&x255))|x256);

	if (t63 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = UINT32_MAX;
	uint32_t x259 = 53655U;
	static int32_t x260 = INT32_MIN;
	volatile uint32_t t64 = 1U;

	t64 = ((x257&(x258&x259))|x260);

	if (t64 != 2147537303U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int16_t x262 = INT16_MIN;
	int8_t x263 = 53;
	volatile uint8_t x264 = 20U;
	int32_t t65 = -1;

	t65 = ((x261&(x262&x263))|x264);

	if (t65 != 20) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x266 = INT32_MIN;
	int8_t x267 = 2;
	uint16_t x268 = 122U;
	static volatile int32_t t66 = -196;

	t66 = ((x265&(x266&x267))|x268);

	if (t66 != 122) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	int64_t x270 = INT64_MIN;
	static uint8_t x271 = 11U;
	int8_t x272 = INT8_MIN;
	volatile int64_t t67 = -6170458892473106LL;

	t67 = ((x269&(x270&x271))|x272);

	if (t67 != -128LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = 95151587405LLU;
	int32_t x274 = -6179;
	int64_t x275 = -518396LL;
	static volatile uint32_t x276 = 11U;
	volatile uint64_t t68 = 0LLU;

	t68 = ((x273&(x274&x275))|x276);

	if (t68 != 95151456271LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 384830528215436074LL;
	static volatile int64_t x278 = INT64_MIN;
	uint16_t x279 = 1U;
	volatile int16_t x280 = INT16_MIN;
	int64_t t69 = 156211LL;

	t69 = ((x277&(x278&x279))|x280);

	if (t69 != -32768LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = 51949178LL;
	uint32_t x283 = 245897001U;
	volatile int16_t x284 = 3;

	t70 = ((x281&(x282&x283))|x284);

	if (t70 != 34080259LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = 165;
	int16_t x287 = INT16_MAX;
	volatile uint64_t x288 = 319707LLU;

	t71 = ((x285&(x286&x287))|x288);

	if (t71 != 319707LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x289 = 1U;
	volatile uint64_t x290 = UINT64_MAX;
	uint8_t x291 = 0U;
	static uint32_t x292 = 5261U;
	volatile uint64_t t72 = 476821LLU;

	t72 = ((x289&(x290&x291))|x292);

	if (t72 != 5261LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;

	t73 = ((x293&(x294&x295))|x296);

	if (t73 != 8991286U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	int16_t x298 = -4460;
	uint16_t x300 = UINT16_MAX;
	static int32_t t74 = 453862;

	t74 = ((x297&(x298&x299))|x300);

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MAX;
	uint16_t x303 = UINT16_MAX;
	volatile int64_t t75 = 50620017392657123LL;

	t75 = ((x301&(x302&x303))|x304);

	if (t75 != 65535LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MIN;
	uint8_t x308 = UINT8_MAX;
	int32_t t76 = 595076;

	t76 = ((x305&(x306&x307))|x308);

	if (t76 != -32513) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x309 = 2131216965LLU;
	static int16_t x310 = -1;
	static int32_t x311 = -1;
	volatile uint8_t x312 = 0U;
	static uint64_t t77 = 215863566160302LLU;

	t77 = ((x309&(x310&x311))|x312);

	if (t77 != 2131216965LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x316 = INT16_MIN;

	t78 = ((x313&(x314&x315))|x316);

	if (t78 != 4294963712U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 8322944873501673LLU;
	uint32_t x318 = 3U;
	uint8_t x319 = 55U;
	uint32_t x320 = 1U;
	uint64_t t79 = 207682434LLU;

	t79 = ((x317&(x318&x319))|x320);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	uint32_t x323 = UINT32_MAX;
	uint16_t x324 = 2541U;
	uint32_t t80 = 854713U;

	t80 = ((x321&(x322&x323))|x324);

	if (t80 != 2559U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x325 = -1;
	int32_t x326 = INT32_MAX;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = -94848;

	t81 = ((x325&(x326&x327))|x328);

	if (t81 != -32641) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MIN;
	volatile int16_t x332 = INT16_MIN;
	int32_t t82 = -82361;

	t82 = ((x329&(x330&x331))|x332);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = -1;
	uint8_t x334 = 16U;
	int64_t x336 = -2786771LL;
	volatile int64_t t83 = -14091131639LL;

	t83 = ((x333&(x334&x335))|x336);

	if (t83 != -2786755LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -31811;
	int32_t x338 = -152;
	uint8_t x339 = 3U;
	int16_t x340 = -1;
	volatile int32_t t84 = -31;

	t84 = ((x337&(x338&x339))|x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x342 = INT8_MIN;
	int64_t x343 = -7613613679590LL;
	static uint8_t x344 = 3U;
	volatile int64_t t85 = 6643000206524LL;

	t85 = ((x341&(x342&x343))|x344);

	if (t85 != 7171LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x345 = INT32_MIN;
	int16_t x346 = -6001;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = INT32_MIN;

	t86 = ((x345&(x346&x347))|x348);

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = 2065038763001283LLU;
	int64_t x351 = INT64_MIN;

	t87 = ((x349&(x350&x351))|x352);

	if (t87 != 1603LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	static uint8_t x355 = 7U;
	static int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 43;

	t88 = ((x353&(x354&x355))|x356);

	if (t88 != -32761) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x358 = 18U;
	uint32_t x360 = 0U;
	uint32_t t89 = 1104639538U;

	t89 = ((x357&(x358&x359))|x360);

	if (t89 != 16U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x362 = UINT64_MAX;
	static int8_t x363 = 1;
	static volatile uint32_t x364 = 2U;

	t90 = ((x361&(x362&x363))|x364);

	if (t90 != 2LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	uint32_t x366 = 108757899U;
	int16_t x367 = INT16_MIN;
	volatile int32_t x368 = -1;

	t91 = ((x365&(x366&x367))|x368);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 6U;
	uint32_t x371 = UINT32_MAX;
	static uint64_t t92 = 10197533099LLU;

	t92 = ((x369&(x370&x371))|x372);

	if (t92 != 17718LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	volatile int32_t x375 = INT32_MIN;
	int8_t x376 = -10;
	int64_t t93 = -2249746394836LL;

	t93 = ((x373&(x374&x375))|x376);

	if (t93 != -10LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	volatile int16_t x378 = INT16_MAX;
	int64_t x379 = INT64_MIN;
	int16_t x380 = -92;
	int64_t t94 = 104800143LL;

	t94 = ((x377&(x378&x379))|x380);

	if (t94 != -92LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 713U;
	int64_t x382 = 7341746271386230LL;
	volatile int8_t x383 = INT8_MAX;
	uint16_t x384 = 1409U;
	static int64_t t95 = 165514982418971LL;

	t95 = ((x381&(x382&x383))|x384);

	if (t95 != 1473LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 11U;
	uint8_t x386 = UINT8_MAX;
	int32_t x387 = INT32_MIN;
	int64_t x388 = -48755544847LL;
	static volatile int64_t t96 = -302LL;

	t96 = ((x385&(x386&x387))|x388);

	if (t96 != -48755544847LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x389 = 1U;
	static volatile uint64_t x390 = 487292342LLU;
	int8_t x391 = -1;
	volatile int8_t x392 = INT8_MIN;
	static volatile uint64_t t97 = 400890LLU;

	t97 = ((x389&(x390&x391))|x392);

	if (t97 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = 1;
	uint64_t x395 = 952887410LLU;
	volatile uint64_t t98 = 1637105648831LLU;

	t98 = ((x393&(x394&x395))|x396);

	if (t98 != 65535LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	static int16_t x398 = -3;
	int32_t x400 = 28236;
	int64_t t99 = -65855463078304570LL;

	t99 = ((x397&(x398&x399))|x400);

	if (t99 != 2355883981LL) { NG(); } else { ; }
	
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


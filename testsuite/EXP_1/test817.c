#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 0U;
int16_t x3 = -1;
static int64_t x5 = -4288912716LL;
uint32_t x11 = 178U;
int32_t x20 = 497573912;
int8_t x21 = INT8_MAX;
int64_t t5 = 1254327927LL;
uint16_t x30 = 6456U;
volatile int16_t x35 = INT16_MAX;
int16_t x37 = INT16_MIN;
int16_t x46 = INT16_MIN;
static int8_t x47 = -5;
volatile int64_t x51 = INT64_MAX;
int32_t x54 = -4398;
int64_t x61 = -1LL;
uint64_t x74 = 65629413LLU;
volatile uint64_t x84 = 6LLU;
int16_t x89 = -1;
uint16_t x91 = 1U;
int8_t x92 = INT8_MIN;
int16_t x97 = -1;
static int64_t x100 = INT64_MIN;
int8_t x110 = 51;
int16_t x114 = 15;
int32_t x116 = INT32_MIN;
static int8_t x126 = INT8_MIN;
volatile uint64_t t30 = 3588271281109779LLU;
int16_t x131 = INT16_MIN;
uint32_t x138 = 4U;
int64_t x139 = INT64_MIN;
int64_t x148 = INT64_MIN;
uint16_t x150 = UINT16_MAX;
int8_t x163 = INT8_MIN;
static volatile int32_t x165 = 8311617;
int16_t x168 = INT16_MAX;
uint16_t x174 = UINT16_MAX;
volatile uint64_t t42 = 41294893LLU;
volatile int32_t t45 = 412;
volatile uint64_t t46 = 12860989079LLU;
int64_t x198 = INT64_MIN;
static volatile uint16_t x203 = 58U;
int16_t x207 = 285;
volatile uint64_t t49 = 1LLU;
uint64_t x210 = 7408803487984906824LLU;
int8_t x214 = INT8_MAX;
int8_t x215 = -1;
int32_t x222 = 1305651;
int64_t x224 = 365LL;
int8_t x229 = 1;
uint64_t x231 = 2265LLU;
volatile uint64_t t55 = 70248227LLU;
int16_t x236 = INT16_MIN;
volatile int64_t t56 = -643515086049129058LL;
static volatile uint32_t x247 = 27U;
int8_t x250 = INT8_MIN;
int16_t x252 = 0;
volatile uint32_t t60 = 1851581709U;
static volatile int8_t x271 = -1;
uint8_t x273 = 27U;
int32_t x275 = 720611;
volatile int64_t x278 = 425065LL;
static int64_t t66 = -3LL;
static int16_t x288 = INT16_MAX;
volatile uint64_t t68 = 38635LLU;
int8_t x290 = INT8_MAX;
uint32_t t69 = 70405143U;
uint16_t x293 = 1U;
volatile uint16_t x295 = 590U;
uint64_t t70 = 154963618909008LLU;
static uint32_t x301 = 1654U;
static volatile int64_t x307 = -1LL;
int16_t x310 = INT16_MIN;
int32_t x314 = -1;
volatile uint8_t x316 = 36U;
volatile uint64_t t77 = 210243LLU;
volatile uint64_t x327 = 2LLU;
volatile uint64_t t78 = 66866226019LLU;
int64_t x331 = INT64_MIN;
int16_t x334 = 5;
uint32_t x337 = 641955647U;
static volatile int16_t x340 = INT16_MIN;
int64_t x344 = INT64_MIN;
int32_t x348 = -1;
uint64_t t83 = 6679301987750298LLU;
volatile uint8_t x354 = UINT8_MAX;
int64_t x360 = INT64_MIN;
uint16_t x371 = 127U;
volatile int64_t t89 = 184572LL;
int32_t x380 = INT32_MAX;
int64_t x381 = INT64_MIN;
static int64_t x388 = INT64_MIN;
uint32_t t94 = 80968251U;
volatile int32_t x395 = INT32_MAX;
int8_t x404 = INT8_MIN;
static volatile int16_t x408 = INT16_MIN;
int16_t x409 = -1;


void f0(void) {
	int32_t x2 = INT32_MAX;
	int16_t x4 = -1;
	volatile int32_t t0 = -1476622;

	t0 = (((x1%x2)&x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = -217;
	volatile int16_t x8 = -1;
	int64_t t1 = 30LL;

	t1 = (((x5%x6)&x7)&x8);

	if (t1 != -221LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int16_t x10 = INT16_MAX;
	int8_t x12 = INT8_MIN;
	uint32_t t2 = 3180U;

	t2 = (((x9%x10)&x11)&x12);

	if (t2 != 128U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int8_t x14 = -1;
	uint16_t x15 = UINT16_MAX;
	static uint64_t x16 = 723262671LLU;
	volatile uint64_t t3 = 7934509995LLU;

	t3 = (((x13%x14)&x15)&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = 15063;
	volatile int32_t x19 = 55;
	int32_t t4 = 51767;

	t4 = (((x17%x18)&x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -4836871LL;
	uint16_t x23 = 3530U;
	int32_t x24 = INT32_MAX;

	t5 = (((x21%x22)&x23)&x24);

	if (t5 != 74LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = 815507224738367331LL;
	int64_t x27 = INT64_MAX;
	uint32_t x28 = 265U;
	static volatile int64_t t6 = 61721218383635844LL;

	t6 = (((x25%x26)&x27)&x28);

	if (t6 != 256LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	int64_t x31 = -22532260366LL;
	volatile int16_t x32 = INT16_MAX;
	int64_t t7 = 155058793LL;

	t7 = (((x29%x30)&x31)&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 27;
	int8_t x34 = INT8_MAX;
	int64_t x36 = -26759670LL;
	int64_t t8 = -1LL;

	t8 = (((x33%x34)&x35)&x36);

	if (t8 != 10LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x38 = 1U;
	int8_t x39 = INT8_MAX;
	int64_t x40 = -1LL;
	volatile int64_t t9 = -3887LL;

	t9 = (((x37%x38)&x39)&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int16_t x42 = INT16_MAX;
	uint8_t x43 = UINT8_MAX;
	uint32_t x44 = 8971042U;
	volatile uint32_t t10 = 28U;

	t10 = (((x41%x42)&x43)&x44);

	if (t10 != 34U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint32_t x48 = 491033U;
	int64_t t11 = -10LL;

	t11 = (((x45%x46)&x47)&x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	static int16_t x50 = INT16_MAX;
	uint16_t x52 = 303U;
	static volatile int64_t t12 = 395LL;

	t12 = (((x49%x50)&x51)&x52);

	if (t12 != 256LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 24U;
	static volatile int8_t x55 = -1;
	volatile int16_t x56 = INT16_MIN;
	static volatile int32_t t13 = 273;

	t13 = (((x53%x54)&x55)&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MIN;
	int16_t x58 = -13;
	uint16_t x59 = UINT16_MAX;
	int64_t x60 = INT64_MIN;
	volatile int64_t t14 = -32093LL;

	t14 = (((x57%x58)&x59)&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x62 = UINT8_MAX;
	static uint8_t x63 = UINT8_MAX;
	static int8_t x64 = 1;
	int64_t t15 = -966LL;

	t15 = (((x61%x62)&x63)&x64);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	volatile int16_t x66 = 94;
	int32_t x67 = -1;
	int64_t x68 = 91235945636LL;
	volatile int64_t t16 = -1393201481137818564LL;

	t16 = (((x65%x66)&x67)&x68);

	if (t16 != 36LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 4U;
	static int32_t x70 = INT32_MIN;
	int16_t x71 = INT16_MAX;
	volatile uint8_t x72 = 1U;
	volatile int32_t t17 = 3;

	t17 = (((x69%x70)&x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	static int8_t x75 = -1;
	int16_t x76 = INT16_MIN;
	static uint64_t t18 = 1857100476994181970LLU;

	t18 = (((x73%x74)&x75)&x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 3;
	static int16_t x78 = INT16_MIN;
	int16_t x79 = -1;
	static uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = 872334062;

	t19 = (((x77%x78)&x79)&x80);

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 29218U;
	volatile uint64_t x82 = UINT64_MAX;
	int32_t x83 = -1;
	uint64_t t20 = 226199368802001270LLU;

	t20 = (((x81%x82)&x83)&x84);

	if (t20 != 2LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 971U;
	uint16_t x86 = 91U;
	uint32_t x87 = 136181147U;
	int64_t x88 = -8614510644LL;
	static volatile int64_t t21 = 39716731623LL;

	t21 = (((x85%x86)&x87)&x88);

	if (t21 != 8LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x90 = 31226U;
	static volatile int32_t t22 = -963933;

	t22 = (((x89%x90)&x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int16_t x94 = INT16_MAX;
	static uint8_t x95 = UINT8_MAX;
	volatile uint32_t x96 = 26707443U;
	volatile uint32_t t23 = 184069U;

	t23 = (((x93%x94)&x95)&x96);

	if (t23 != 243U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x98 = -169500191900104LL;
	volatile uint8_t x99 = UINT8_MAX;
	static volatile int64_t t24 = -7043636508629181LL;

	t24 = (((x97%x98)&x99)&x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 18U;
	static int32_t x106 = -1;
	uint16_t x107 = UINT16_MAX;
	int8_t x108 = -1;
	int32_t t25 = 2256;

	t25 = (((x105%x106)&x107)&x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	static volatile uint32_t x111 = UINT32_MAX;
	static volatile int16_t x112 = INT16_MAX;
	uint32_t t26 = 867453856U;

	t26 = (((x109%x110)&x111)&x112);

	if (t26 != 32742U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x113 = INT64_MIN;
	int32_t x115 = -1;
	volatile int64_t t27 = 1LL;

	t27 = (((x113%x114)&x115)&x116);

	if (t27 != -2147483648LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x117 = 13812U;
	int32_t x118 = INT32_MAX;
	uint16_t x119 = 13970U;
	static int64_t x120 = INT64_MIN;
	volatile int64_t t28 = 42393646542832509LL;

	t28 = (((x117%x118)&x119)&x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = 46566078U;
	static uint16_t x122 = UINT16_MAX;
	uint16_t x123 = 1148U;
	int64_t x124 = 40408614138LL;
	volatile int64_t t29 = -660903678689905LL;

	t29 = (((x121%x122)&x123)&x124);

	if (t29 != 1024LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	static volatile int32_t x127 = INT32_MIN;
	uint64_t x128 = UINT64_MAX;

	t30 = (((x125%x126)&x127)&x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = UINT8_MAX;
	uint16_t x130 = 6U;
	int8_t x132 = INT8_MIN;
	int32_t t31 = -278562;

	t31 = (((x129%x130)&x131)&x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x133 = INT16_MIN;
	volatile int8_t x134 = 40;
	int64_t x135 = INT64_MIN;
	volatile int32_t x136 = INT32_MAX;
	static int64_t t32 = -27LL;

	t32 = (((x133%x134)&x135)&x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = 18;
	uint32_t x140 = 16237842U;
	int64_t t33 = 2080LL;

	t33 = (((x137%x138)&x139)&x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x145 = 137984169U;
	uint16_t x146 = 1926U;
	int32_t x147 = INT32_MAX;
	volatile int64_t t34 = 102584228196180086LL;

	t34 = (((x145%x146)&x147)&x148);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x149 = 313918301U;
	int16_t x151 = -6;
	uint8_t x152 = 0U;
	volatile uint32_t t35 = 22U;

	t35 = (((x149%x150)&x151)&x152);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = INT8_MIN;
	uint16_t x154 = 175U;
	uint16_t x155 = UINT16_MAX;
	int16_t x156 = -1;
	int32_t t36 = -39202;

	t36 = (((x153%x154)&x155)&x156);

	if (t36 != 65408) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x157 = 126U;
	int8_t x158 = INT8_MIN;
	uint64_t x159 = 55119446LLU;
	volatile int32_t x160 = INT32_MIN;
	volatile uint64_t t37 = 3189116LLU;

	t37 = (((x157%x158)&x159)&x160);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = 60;
	volatile int16_t x162 = INT16_MIN;
	uint8_t x164 = 10U;
	int32_t t38 = -217;

	t38 = (((x161%x162)&x163)&x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x166 = -1LL;
	volatile uint16_t x167 = UINT16_MAX;
	int64_t t39 = 677740105LL;

	t39 = (((x165%x166)&x167)&x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -1;
	int8_t x170 = 1;
	int32_t x171 = -3831754;
	uint32_t x172 = 247456U;
	uint32_t t40 = 49267U;

	t40 = (((x169%x170)&x171)&x172);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = -51;
	int16_t x175 = 105;
	uint8_t x176 = 2U;
	volatile int32_t t41 = -10095;

	t41 = (((x173%x174)&x175)&x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = 3U;
	static int8_t x178 = -4;
	uint8_t x179 = 13U;
	volatile uint64_t x180 = 210578268622LLU;

	t42 = (((x177%x178)&x179)&x180);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x181 = -1;
	static uint8_t x182 = UINT8_MAX;
	static volatile int64_t x183 = INT64_MIN;
	int8_t x184 = -1;
	static volatile int64_t t43 = INT64_MIN;

	t43 = (((x181%x182)&x183)&x184);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x185 = UINT16_MAX;
	volatile uint32_t x186 = UINT32_MAX;
	int32_t x187 = -1;
	static uint64_t x188 = 9LLU;
	uint64_t t44 = 18128707773103052LLU;

	t44 = (((x185%x186)&x187)&x188);

	if (t44 != 9LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	volatile int16_t x191 = INT16_MIN;
	volatile int16_t x192 = -1;

	t45 = (((x189%x190)&x191)&x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 559313851542LLU;
	uint64_t x194 = UINT64_MAX;
	uint16_t x195 = 58U;
	int16_t x196 = INT16_MIN;

	t46 = (((x193%x194)&x195)&x196);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = 16245;
	uint8_t x199 = 0U;
	uint16_t x200 = 12409U;
	volatile int64_t t47 = -254296215LL;

	t47 = (((x197%x198)&x199)&x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = 10704;
	int64_t x202 = INT64_MAX;
	volatile uint8_t x204 = 1U;
	volatile int64_t t48 = -14LL;

	t48 = (((x201%x202)&x203)&x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x205 = UINT64_MAX;
	uint8_t x206 = 22U;
	static int32_t x208 = INT32_MIN;

	t49 = (((x205%x206)&x207)&x208);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = -1LL;
	uint64_t x211 = 130537184LLU;
	static uint64_t x212 = 14277382139989356LLU;
	uint64_t t50 = 0LLU;

	t50 = (((x209%x210)&x211)&x212);

	if (t50 != 46137440LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	volatile int64_t x216 = INT64_MIN;
	static int64_t t51 = INT64_MIN;

	t51 = (((x213%x214)&x215)&x216);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = -12;
	static uint32_t x218 = UINT32_MAX;
	volatile uint16_t x219 = UINT16_MAX;
	int8_t x220 = INT8_MAX;
	uint32_t t52 = 20270581U;

	t52 = (((x217%x218)&x219)&x220);

	if (t52 != 116U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x221 = INT8_MIN;
	int32_t x223 = -1;
	volatile int64_t t53 = 142LL;

	t53 = (((x221%x222)&x223)&x224);

	if (t53 != 256LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MIN;
	static uint8_t x226 = UINT8_MAX;
	static int64_t x227 = 15176906250LL;
	static int32_t x228 = 1433;
	int64_t t54 = -189LL;

	t54 = (((x225%x226)&x227)&x228);

	if (t54 != 1024LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x230 = INT8_MIN;
	uint64_t x232 = UINT64_MAX;

	t55 = (((x229%x230)&x231)&x232);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x233 = -1;
	int32_t x234 = -1;
	int64_t x235 = INT64_MIN;

	t56 = (((x233%x234)&x235)&x236);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x237 = 15LLU;
	static uint8_t x238 = UINT8_MAX;
	int8_t x239 = INT8_MIN;
	static int64_t x240 = -1LL;
	uint64_t t57 = 8898333909829423803LLU;

	t57 = (((x237%x238)&x239)&x240);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x245 = INT16_MIN;
	uint8_t x246 = 9U;
	static int16_t x248 = -1;
	uint32_t t58 = 87U;

	t58 = (((x245%x246)&x247)&x248);

	if (t58 != 24U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = INT16_MIN;
	int64_t x251 = INT64_MIN;
	volatile int64_t t59 = 8442297172794629LL;

	t59 = (((x249%x250)&x251)&x252);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x253 = UINT16_MAX;
	static volatile uint32_t x254 = UINT32_MAX;
	int16_t x255 = 0;
	uint32_t x256 = 999723482U;

	t60 = (((x253%x254)&x255)&x256);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x257 = 92U;
	int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	volatile int64_t x260 = INT64_MAX;
	volatile int64_t t61 = -17LL;

	t61 = (((x257%x258)&x259)&x260);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x261 = 30U;
	int8_t x262 = 2;
	int32_t x263 = -66322329;
	int8_t x264 = -1;
	volatile int32_t t62 = -5117;

	t62 = (((x261%x262)&x263)&x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x265 = -1;
	volatile int64_t x266 = -1009LL;
	int8_t x267 = -1;
	uint32_t x268 = UINT32_MAX;
	volatile int64_t t63 = 2105LL;

	t63 = (((x265%x266)&x267)&x268);

	if (t63 != 4294967295LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = -1;
	volatile int64_t x270 = INT64_MIN;
	static volatile int32_t x272 = INT32_MIN;
	volatile int64_t t64 = 1176673209LL;

	t64 = (((x269%x270)&x271)&x272);

	if (t64 != -2147483648LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x274 = -3;
	int8_t x276 = INT8_MIN;
	volatile int32_t t65 = -7;

	t65 = (((x273%x274)&x275)&x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = INT16_MAX;
	uint8_t x279 = 9U;
	static uint8_t x280 = 80U;

	t66 = (((x277%x278)&x279)&x280);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x281 = INT8_MAX;
	volatile int64_t x282 = -82244LL;
	static volatile int8_t x283 = 0;
	volatile int16_t x284 = INT16_MIN;
	int64_t t67 = 2644LL;

	t67 = (((x281%x282)&x283)&x284);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x285 = 6144179LLU;
	static uint16_t x286 = 12134U;
	static int64_t x287 = INT64_MAX;

	t68 = (((x285%x286)&x287)&x288);

	if (t68 != 4375LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x289 = UINT32_MAX;
	uint32_t x291 = UINT32_MAX;
	int8_t x292 = INT8_MAX;

	t69 = (((x289%x290)&x291)&x292);

	if (t69 != 15U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x294 = UINT64_MAX;
	volatile uint32_t x296 = 1390U;

	t70 = (((x293%x294)&x295)&x296);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x297 = 1U;
	uint64_t x298 = UINT64_MAX;
	int32_t x299 = INT32_MIN;
	uint16_t x300 = UINT16_MAX;
	volatile uint64_t t71 = 64821603166954LLU;

	t71 = (((x297%x298)&x299)&x300);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x302 = 1076358480U;
	int32_t x303 = 218;
	int64_t x304 = -1LL;
	volatile int64_t t72 = 43651104433LL;

	t72 = (((x301%x302)&x303)&x304);

	if (t72 != 82LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x305 = 290217218U;
	volatile int64_t x306 = -1LL;
	volatile int16_t x308 = -2;
	volatile int64_t t73 = 160964LL;

	t73 = (((x305%x306)&x307)&x308);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = 204LLU;
	uint64_t x311 = UINT64_MAX;
	int32_t x312 = -1;
	uint64_t t74 = 3370908651775732313LLU;

	t74 = (((x309%x310)&x311)&x312);

	if (t74 != 204LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x313 = UINT16_MAX;
	volatile int16_t x315 = 13091;
	int32_t t75 = -446677200;

	t75 = (((x313%x314)&x315)&x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = -7797;
	uint16_t x318 = 3U;
	uint16_t x319 = UINT16_MAX;
	int64_t x320 = 43900254705525470LL;
	volatile int64_t t76 = 112757244248963LL;

	t76 = (((x317%x318)&x319)&x320);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = -3048;
	int64_t x322 = 13727274358561LL;
	uint64_t x323 = 3814955052LLU;
	int8_t x324 = -1;

	t77 = (((x321%x322)&x323)&x324);

	if (t77 != 3814952968LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x325 = UINT8_MAX;
	int16_t x326 = INT16_MIN;
	int8_t x328 = -1;

	t78 = (((x325%x326)&x327)&x328);

	if (t78 != 2LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = -2794;
	static int32_t x330 = INT32_MIN;
	static uint64_t x332 = 4027675699393721948LLU;
	static uint64_t t79 = 183931266072645LLU;

	t79 = (((x329%x330)&x331)&x332);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x333 = INT32_MIN;
	static volatile int64_t x335 = INT64_MIN;
	int32_t x336 = -3812;
	volatile int64_t t80 = INT64_MIN;

	t80 = (((x333%x334)&x335)&x336);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x338 = 1163;
	int8_t x339 = INT8_MAX;
	volatile uint32_t t81 = 257334882U;

	t81 = (((x337%x338)&x339)&x340);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x341 = UINT32_MAX;
	static uint8_t x342 = 1U;
	static volatile int16_t x343 = -1;
	int64_t t82 = -83361LL;

	t82 = (((x341%x342)&x343)&x344);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = INT64_MIN;
	uint64_t x346 = 264791384335LLU;
	volatile int8_t x347 = INT8_MIN;

	t83 = (((x345%x346)&x347)&x348);

	if (t83 != 192450223360LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x349 = INT8_MAX;
	static int32_t x350 = INT32_MIN;
	int64_t x351 = INT64_MIN;
	static int8_t x352 = INT8_MAX;
	int64_t t84 = -2163LL;

	t84 = (((x349%x350)&x351)&x352);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x353 = 6U;
	uint16_t x355 = 1102U;
	int8_t x356 = INT8_MIN;
	int32_t t85 = 301212686;

	t85 = (((x353%x354)&x355)&x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = INT64_MAX;
	uint64_t x358 = 1063803233645LLU;
	uint16_t x359 = 719U;
	uint64_t t86 = 278411561028012LLU;

	t86 = (((x357%x358)&x359)&x360);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = UINT16_MAX;
	uint64_t x362 = 95331698935LLU;
	int16_t x363 = -1;
	uint16_t x364 = UINT16_MAX;
	uint64_t t87 = 91069LLU;

	t87 = (((x361%x362)&x363)&x364);

	if (t87 != 65535LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x365 = 117023513593LLU;
	int64_t x366 = -593836446071425333LL;
	int16_t x367 = INT16_MIN;
	uint32_t x368 = UINT32_MAX;
	static volatile uint64_t t88 = 169633868LLU;

	t88 = (((x365%x366)&x367)&x368);

	if (t88 != 1059389440LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x369 = 699;
	int64_t x370 = -1LL;
	volatile uint8_t x372 = 1U;

	t89 = (((x369%x370)&x371)&x372);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = INT64_MAX;
	volatile int16_t x374 = -1;
	uint64_t x375 = 1097307131745643790LLU;
	volatile int32_t x376 = INT32_MIN;
	static volatile uint64_t t90 = 318LLU;

	t90 = (((x373%x374)&x375)&x376);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = -1LL;
	int64_t x378 = -1LL;
	int32_t x379 = -1;
	int64_t t91 = -883720366LL;

	t91 = (((x377%x378)&x379)&x380);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x382 = UINT32_MAX;
	volatile int32_t x383 = -1;
	int16_t x384 = INT16_MIN;
	volatile int64_t t92 = 5593210168LL;

	t92 = (((x381%x382)&x383)&x384);

	if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x385 = 7U;
	int16_t x386 = -72;
	int16_t x387 = INT16_MIN;
	int64_t t93 = 12926237129LL;

	t93 = (((x385%x386)&x387)&x388);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x389 = -5;
	uint8_t x390 = 5U;
	volatile uint32_t x391 = UINT32_MAX;
	uint8_t x392 = 0U;

	t94 = (((x389%x390)&x391)&x392);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x393 = 3U;
	static int64_t x394 = -1421398344005122LL;
	volatile int32_t x396 = INT32_MIN;
	volatile int64_t t95 = 52241662214738879LL;

	t95 = (((x393%x394)&x395)&x396);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = -1;
	int64_t x398 = INT64_MIN;
	uint64_t x399 = 222864442926LLU;
	volatile int16_t x400 = INT16_MAX;
	uint64_t t96 = 11065LLU;

	t96 = (((x397%x398)&x399)&x400);

	if (t96 != 1582LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = INT32_MIN;
	int32_t x402 = 923482892;
	uint32_t x403 = 139387U;
	uint32_t t97 = 391895U;

	t97 = (((x401%x402)&x403)&x404);

	if (t97 != 139264U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x405 = 0U;
	int16_t x406 = -1;
	static uint32_t x407 = 125294U;
	uint32_t t98 = 12368130U;

	t98 = (((x405%x406)&x407)&x408);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x410 = 1U;
	uint64_t x411 = UINT64_MAX;
	static uint16_t x412 = UINT16_MAX;
	uint64_t t99 = 6150608LLU;

	t99 = (((x409%x410)&x411)&x412);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


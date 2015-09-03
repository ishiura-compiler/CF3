#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MAX;
int64_t x5 = INT64_MAX;
volatile int64_t x7 = -1LL;
uint32_t x14 = 3482359U;
uint32_t t3 = 549827998U;
static volatile int32_t x21 = 20;
int32_t x24 = INT32_MAX;
static int32_t t5 = 727143;
int64_t x37 = INT64_MIN;
volatile int64_t x40 = INT64_MAX;
uint32_t x45 = 34U;
int8_t x48 = INT8_MIN;
int64_t t12 = -5LL;
volatile uint64_t x53 = 19LLU;
int16_t x54 = INT16_MIN;
uint64_t t13 = 2219194181276LLU;
int16_t x61 = -1;
int32_t x66 = -238513;
static int32_t x68 = INT32_MAX;
uint8_t x70 = 18U;
uint8_t x73 = UINT8_MAX;
static uint16_t x79 = 991U;
int64_t x86 = -1LL;
int32_t x91 = 1005105998;
uint64_t t22 = 1000059346513899492LLU;
int32_t x94 = -125540;
volatile uint32_t t23 = 1U;
int64_t x98 = 39856702333LL;
int8_t x100 = 7;
int64_t x101 = -5113296965LL;
static int32_t x102 = -52479;
int16_t x104 = -1;
uint64_t x112 = 2733LLU;
int64_t x113 = INT64_MIN;
static int64_t x118 = 0LL;
static int8_t x120 = INT8_MIN;
static int8_t x126 = INT8_MIN;
uint8_t x129 = 16U;
int32_t x136 = 0;
volatile int16_t x146 = 413;
static int32_t t35 = -40976;
uint64_t x156 = 4398197163LLU;
uint32_t x157 = 1U;
int16_t x177 = INT16_MAX;
static int8_t x179 = INT8_MIN;
volatile int64_t x182 = INT64_MIN;
int64_t x187 = INT64_MAX;
volatile uint64_t t44 = 536807744176LLU;
static int32_t x193 = INT32_MIN;
int16_t x199 = INT16_MAX;
static int64_t x200 = 26LL;
int8_t x205 = -1;
int32_t x210 = INT32_MAX;
uint64_t x219 = 14779491128LLU;
static int16_t x225 = INT16_MIN;
volatile int32_t t53 = -1;
uint32_t x239 = 39U;
volatile int32_t t55 = 3174;
int64_t x249 = INT64_MAX;
static uint32_t x253 = 1592632U;
int16_t x254 = INT16_MIN;
volatile int64_t x262 = -1LL;
volatile int32_t t61 = 7851;
int8_t x269 = INT8_MAX;
uint8_t x270 = UINT8_MAX;
uint64_t x275 = 3269134918LLU;
uint8_t x280 = UINT8_MAX;
uint64_t t65 = 1279687457182728967LLU;
int32_t t66 = 59469319;
int8_t x300 = 4;
volatile int32_t t72 = -258986011;
static int32_t t73 = -14306;
uint32_t x325 = UINT32_MAX;
int8_t x329 = 9;
int64_t x330 = INT64_MIN;
volatile int8_t x331 = -1;
volatile int32_t t75 = 580107149;
static int16_t x334 = INT16_MIN;
uint32_t t76 = 222327U;
int32_t x338 = 21066721;
volatile int8_t x347 = INT8_MIN;
static int64_t x352 = -216383941065LL;
int64_t t80 = -921639LL;
int8_t x354 = INT8_MIN;
volatile int8_t x356 = -1;
int8_t x364 = 16;
int64_t x366 = INT64_MIN;
int8_t x402 = INT8_MIN;
int32_t t93 = -5021238;
uint32_t x409 = UINT32_MAX;
int8_t x416 = -1;
int16_t x420 = INT16_MIN;
int16_t x422 = INT16_MIN;
int8_t x428 = INT8_MIN;
volatile int64_t x430 = -1LL;


void f0(void) {
	static uint8_t x1 = 3U;
	static int8_t x2 = -1;
	static int16_t x3 = INT16_MIN;
	volatile int64_t t0 = 850530LL;

	t0 = ((x1&(x2<=x3))-x4);

	if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MAX;
	int16_t x8 = -317;
	static int64_t t1 = -36728409LL;

	t1 = ((x5&(x6<=x7))-x8);

	if (t1 != 317LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -24;
	uint64_t x10 = 65080575974107LLU;
	uint16_t x11 = 248U;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -2;

	t2 = ((x9&(x10<=x11))-x12);

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MIN;

	t3 = ((x13&(x14<=x15))-x16);

	if (t3 != 2147483649U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int32_t x18 = 1;
	volatile int64_t x19 = INT64_MAX;
	volatile uint64_t x20 = 0LLU;
	uint64_t t4 = 820635536968276572LLU;

	t4 = ((x17&(x18<=x19))-x20);

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = -16084;
	volatile int16_t x23 = INT16_MIN;

	t5 = ((x21&(x22<=x23))-x24);

	if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 13695576U;
	uint16_t x26 = 2U;
	uint16_t x27 = 12U;
	uint32_t x28 = 794364079U;
	volatile uint32_t t6 = 1895113770U;

	t6 = ((x25&(x26<=x27))-x28);

	if (t6 != 3500603217U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	int64_t x30 = INT64_MIN;
	uint16_t x31 = 123U;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = 6502456LLU;

	t7 = ((x29&(x30<=x31))-x32);

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int8_t x34 = 1;
	int32_t x35 = INT32_MIN;
	int8_t x36 = INT8_MIN;
	static int32_t t8 = 16465844;

	t8 = ((x33&(x34<=x35))-x36);

	if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = INT64_MIN;
	static volatile int64_t x39 = 1185957550767094450LL;
	int64_t t9 = 6406685LL;

	t9 = ((x37&(x38<=x39))-x40);

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint8_t x42 = 16U;
	int64_t x43 = INT64_MAX;
	static int8_t x44 = INT8_MIN;
	volatile int64_t t10 = -2642316LL;

	t10 = ((x41&(x42<=x43))-x44);

	if (t10 != 128LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 1963U;
	int16_t x47 = 11;
	volatile uint32_t t11 = 11422U;

	t11 = ((x45&(x46<=x47))-x48);

	if (t11 != 128U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int32_t x50 = INT32_MIN;
	int8_t x51 = -1;
	static int64_t x52 = INT64_MAX;

	t12 = ((x49&(x50<=x51))-x52);

	if (t12 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x55 = INT8_MIN;
	uint32_t x56 = UINT32_MAX;

	t13 = ((x53&(x54<=x55))-x56);

	if (t13 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 59U;
	int16_t x58 = INT16_MIN;
	int64_t x59 = -1LL;
	volatile int16_t x60 = 27;
	int32_t t14 = 486821;

	t14 = ((x57&(x58<=x59))-x60);

	if (t14 != -26) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MIN;
	uint64_t x63 = 87945177587LLU;
	int8_t x64 = INT8_MIN;
	int32_t t15 = -1;

	t15 = ((x61&(x62<=x63))-x64);

	if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	static uint64_t x67 = 15874179704556LLU;
	static volatile int32_t t16 = 16;

	t16 = ((x65&(x66<=x67))-x68);

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = UINT32_MAX;
	static int32_t x71 = 0;
	int16_t x72 = INT16_MAX;
	static volatile uint32_t t17 = 1881U;

	t17 = ((x69&(x70<=x71))-x72);

	if (t17 != 4294934529U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MIN;
	static volatile int64_t x75 = INT64_MIN;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = -181;

	t18 = ((x73&(x74<=x75))-x76);

	if (t18 != -255) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = UINT16_MAX;
	uint16_t x78 = UINT16_MAX;
	volatile int16_t x80 = INT16_MAX;
	volatile int32_t t19 = -127132;

	t19 = ((x77&(x78<=x79))-x80);

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MAX;
	volatile int64_t t20 = 25416855548041768LL;

	t20 = ((x81&(x82<=x83))-x84);

	if (t20 != -32766LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	int8_t x87 = INT8_MIN;
	static int16_t x88 = -1;
	int64_t t21 = -51LL;

	t21 = ((x85&(x86<=x87))-x88);

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 1U;
	uint64_t x90 = 16385937LLU;
	static uint64_t x92 = 5636730522026612LLU;

	t22 = ((x89&(x90<=x91))-x92);

	if (t22 != 18441107343187525005LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	int8_t x95 = 1;
	uint32_t x96 = 254641U;

	t23 = ((x93&(x94<=x95))-x96);

	if (t23 != 4294712656U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 0U;
	static volatile int32_t x99 = INT32_MIN;
	int32_t t24 = 321;

	t24 = ((x97&(x98<=x99))-x100);

	if (t24 != -7) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x103 = UINT32_MAX;
	static volatile int64_t t25 = -1243680908784397625LL;

	t25 = ((x101&(x102<=x103))-x104);

	if (t25 != 2LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1472821698LL;
	volatile int32_t x106 = INT32_MAX;
	volatile uint32_t x107 = 1956704U;
	int16_t x108 = -10;
	int64_t t26 = 2253033LL;

	t26 = ((x105&(x106<=x107))-x108);

	if (t26 != 10LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MIN;
	int64_t x110 = -1LL;
	static volatile int8_t x111 = INT8_MAX;
	uint64_t t27 = 431452284028122710LLU;

	t27 = ((x109&(x110<=x111))-x112);

	if (t27 != 18446744073709548883LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = 14870;
	int64_t x115 = INT64_MIN;
	static int32_t x116 = INT32_MAX;
	int64_t t28 = 8549212432911LL;

	t28 = ((x113&(x114<=x115))-x116);

	if (t28 != -2147483647LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	uint32_t x119 = UINT32_MAX;
	volatile int32_t t29 = 1311301;

	t29 = ((x117&(x118<=x119))-x120);

	if (t29 != 129) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MIN;
	int16_t x122 = INT16_MIN;
	int32_t x123 = -1;
	volatile int16_t x124 = -1;
	int32_t t30 = -123373;

	t30 = ((x121&(x122<=x123))-x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x125 = 126U;
	static volatile uint16_t x127 = 749U;
	volatile uint8_t x128 = 54U;
	volatile int32_t t31 = 250459;

	t31 = ((x125&(x126<=x127))-x128);

	if (t31 != -54) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = INT16_MAX;
	uint64_t x131 = 87286088LLU;
	uint64_t x132 = 1793238061848LLU;
	static volatile uint64_t t32 = 3803412338LLU;

	t32 = ((x129&(x130<=x131))-x132);

	if (t32 != 18446742280471489768LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	static int16_t x134 = INT16_MIN;
	uint32_t x135 = UINT32_MAX;
	static volatile int32_t t33 = -337;

	t33 = ((x133&(x134<=x135))-x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -2352707;
	static int16_t x147 = -1;
	uint8_t x148 = UINT8_MAX;
	int32_t t34 = -36203455;

	t34 = ((x145&(x146<=x147))-x148);

	if (t34 != -255) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x149 = INT16_MIN;
	int32_t x150 = INT32_MIN;
	int8_t x151 = INT8_MAX;
	volatile uint8_t x152 = 0U;

	t35 = ((x149&(x150<=x151))-x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = 52;
	static int32_t x154 = -1;
	int32_t x155 = INT32_MIN;
	uint64_t t36 = 21LLU;

	t36 = ((x153&(x154<=x155))-x156);

	if (t36 != 18446744069311354453LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x158 = -7;
	static volatile uint8_t x159 = 18U;
	int64_t x160 = 177729LL;
	volatile int64_t t37 = 70210LL;

	t37 = ((x157&(x158<=x159))-x160);

	if (t37 != -177728LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x161 = UINT16_MAX;
	int16_t x162 = INT16_MIN;
	uint8_t x163 = UINT8_MAX;
	static volatile uint32_t x164 = 27U;
	volatile uint32_t t38 = 196936U;

	t38 = ((x161&(x162<=x163))-x164);

	if (t38 != 4294967270U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x165 = 64079465U;
	static volatile uint32_t x166 = 12982586U;
	int16_t x167 = INT16_MIN;
	volatile int8_t x168 = -3;
	static uint32_t t39 = 3050432U;

	t39 = ((x165&(x166<=x167))-x168);

	if (t39 != 4U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 58U;
	static int8_t x170 = 50;
	static int32_t x171 = -1;
	static int64_t x172 = -1LL;
	volatile int64_t t40 = -6151027LL;

	t40 = ((x169&(x170<=x171))-x172);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x178 = 1234376228563LL;
	uint32_t x180 = UINT32_MAX;
	uint32_t t41 = 0U;

	t41 = ((x177&(x178<=x179))-x180);

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x183 = INT64_MIN;
	static volatile int8_t x184 = INT8_MIN;
	static uint32_t t42 = 32142U;

	t42 = ((x181&(x182<=x183))-x184);

	if (t42 != 129U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = UINT32_MAX;
	uint16_t x186 = UINT16_MAX;
	static int16_t x188 = INT16_MIN;
	static uint32_t t43 = 12602945U;

	t43 = ((x185&(x186<=x187))-x188);

	if (t43 != 32769U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 357806586521LLU;
	int8_t x190 = -1;
	uint32_t x191 = UINT32_MAX;
	uint32_t x192 = 1U;

	t44 = ((x189&(x190<=x191))-x192);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x194 = INT32_MIN;
	uint16_t x195 = 7071U;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t45 = 30033803;

	t45 = ((x193&(x194<=x195))-x196);

	if (t45 != -255) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x197 = 6425U;
	static uint16_t x198 = 1U;
	volatile int64_t t46 = 7509100409120046LL;

	t46 = ((x197&(x198<=x199))-x200);

	if (t46 != -25LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = 3U;
	static uint8_t x202 = 0U;
	uint8_t x203 = 31U;
	int8_t x204 = INT8_MAX;
	volatile int32_t t47 = 20;

	t47 = ((x201&(x202<=x203))-x204);

	if (t47 != -126) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x206 = -1;
	uint16_t x207 = UINT16_MAX;
	int32_t x208 = -8369227;
	volatile int32_t t48 = 708918862;

	t48 = ((x205&(x206<=x207))-x208);

	if (t48 != 8369228) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x209 = INT8_MIN;
	int8_t x211 = INT8_MAX;
	int32_t x212 = -1823998;
	volatile int32_t t49 = -2;

	t49 = ((x209&(x210<=x211))-x212);

	if (t49 != 1823998) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = UINT32_MAX;
	uint16_t x214 = UINT16_MAX;
	int8_t x215 = -1;
	uint16_t x216 = 18185U;
	uint32_t t50 = 19U;

	t50 = ((x213&(x214<=x215))-x216);

	if (t50 != 4294949111U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = 0;
	uint64_t x218 = UINT64_MAX;
	static uint64_t x220 = 1800LLU;
	static uint64_t t51 = 21681628LLU;

	t51 = ((x217&(x218<=x219))-x220);

	if (t51 != 18446744073709549816LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x221 = 1408U;
	int64_t x222 = -666631165LL;
	int16_t x223 = INT16_MAX;
	int16_t x224 = 1;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = ((x221&(x222<=x223))-x224);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x226 = 3158U;
	static int8_t x227 = INT8_MIN;
	static int16_t x228 = INT16_MAX;

	t53 = ((x225&(x226<=x227))-x228);

	if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = UINT32_MAX;
	int16_t x230 = -1;
	volatile int8_t x231 = -1;
	int32_t x232 = INT32_MIN;
	uint32_t t54 = 512026987U;

	t54 = ((x229&(x230<=x231))-x232);

	if (t54 != 2147483649U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x237 = 1128U;
	static int32_t x238 = INT32_MIN;
	static uint16_t x240 = 79U;

	t55 = ((x237&(x238<=x239))-x240);

	if (t55 != -79) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = UINT64_MAX;
	uint64_t x242 = 4860900113269258568LLU;
	volatile uint32_t x243 = UINT32_MAX;
	volatile int32_t x244 = -1471;
	volatile uint64_t t56 = 494509774104076LLU;

	t56 = ((x241&(x242<=x243))-x244);

	if (t56 != 1471LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = -2307;
	volatile uint64_t x246 = UINT64_MAX;
	uint32_t x247 = 3826616U;
	uint32_t x248 = 851U;
	uint32_t t57 = 65206U;

	t57 = ((x245&(x246<=x247))-x248);

	if (t57 != 4294966445U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x250 = UINT16_MAX;
	uint64_t x251 = 24136263324300LLU;
	int32_t x252 = 5213980;
	int64_t t58 = 377071238LL;

	t58 = ((x249&(x250<=x251))-x252);

	if (t58 != -5213979LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x255 = INT8_MIN;
	static uint32_t x256 = UINT32_MAX;
	uint32_t t59 = 200U;

	t59 = ((x253&(x254<=x255))-x256);

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x257 = UINT8_MAX;
	int16_t x258 = INT16_MIN;
	int32_t x259 = -1;
	volatile uint16_t x260 = 1U;
	int32_t t60 = 272019;

	t60 = ((x257&(x258<=x259))-x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x261 = 18U;
	static uint32_t x263 = 3U;
	int8_t x264 = -1;

	t61 = ((x261&(x262<=x263))-x264);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x271 = UINT8_MAX;
	static uint32_t x272 = 1U;
	volatile uint32_t t62 = 1U;

	t62 = ((x269&(x270<=x271))-x272);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = -1;
	volatile int32_t x274 = 22;
	int8_t x276 = INT8_MIN;
	volatile int32_t t63 = 2877544;

	t63 = ((x273&(x274<=x275))-x276);

	if (t63 != 129) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x277 = 0;
	int64_t x278 = INT64_MIN;
	uint64_t x279 = UINT64_MAX;
	int32_t t64 = -3640855;

	t64 = ((x277&(x278<=x279))-x280);

	if (t64 != -255) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = INT64_MIN;
	static int32_t x282 = -1;
	int32_t x283 = 146181807;
	uint64_t x284 = 2LLU;

	t65 = ((x281&(x282<=x283))-x284);

	if (t65 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = INT32_MIN;
	static int64_t x286 = 58149425752178LL;
	int64_t x287 = -1LL;
	int16_t x288 = INT16_MIN;

	t66 = ((x285&(x286<=x287))-x288);

	if (t66 != 32768) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x289 = 8286426U;
	int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MIN;
	volatile int8_t x292 = -1;
	uint32_t t67 = 12U;

	t67 = ((x289&(x290<=x291))-x292);

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = 6U;
	int64_t x294 = INT64_MIN;
	uint16_t x295 = 783U;
	volatile int16_t x296 = 635;
	uint32_t t68 = 279738U;

	t68 = ((x293&(x294<=x295))-x296);

	if (t68 != 4294966661U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = -1;
	int8_t x298 = INT8_MIN;
	int16_t x299 = 4;
	int32_t t69 = 80831;

	t69 = ((x297&(x298<=x299))-x300);

	if (t69 != -3) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = -27;
	int32_t x302 = INT32_MIN;
	uint8_t x303 = 80U;
	volatile int16_t x304 = 9792;
	static volatile int32_t t70 = 5;

	t70 = ((x301&(x302<=x303))-x304);

	if (t70 != -9791) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = INT8_MIN;
	volatile int8_t x310 = -1;
	int8_t x311 = INT8_MIN;
	uint8_t x312 = 7U;
	int32_t t71 = -1672;

	t71 = ((x309&(x310<=x311))-x312);

	if (t71 != -7) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x313 = -2;
	int8_t x314 = INT8_MIN;
	volatile int8_t x315 = -1;
	static int8_t x316 = INT8_MAX;

	t72 = ((x313&(x314<=x315))-x316);

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x321 = -2;
	int16_t x322 = -1;
	static int32_t x323 = -68;
	volatile int8_t x324 = 2;

	t73 = ((x321&(x322<=x323))-x324);

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x326 = 17967U;
	volatile int8_t x327 = 14;
	volatile uint64_t x328 = 3218724535627LLU;
	volatile uint64_t t74 = 141929177LLU;

	t74 = ((x325&(x326<=x327))-x328);

	if (t74 != 18446740854985015989LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x332 = -1;

	t75 = ((x329&(x330<=x331))-x332);

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = 1;
	volatile int8_t x335 = -3;
	uint32_t x336 = 9U;

	t76 = ((x333&(x334<=x335))-x336);

	if (t76 != 4294967288U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x337 = INT8_MIN;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = -4;
	int32_t t77 = 209;

	t77 = ((x337&(x338<=x339))-x340);

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x341 = UINT32_MAX;
	static int32_t x342 = INT32_MAX;
	volatile int16_t x343 = INT16_MAX;
	volatile int16_t x344 = INT16_MAX;
	volatile uint32_t t78 = 37190U;

	t78 = ((x341&(x342<=x343))-x344);

	if (t78 != 4294934529U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x345 = INT64_MAX;
	int16_t x346 = INT16_MIN;
	uint8_t x348 = 14U;
	static int64_t t79 = 5797440LL;

	t79 = ((x345&(x346<=x347))-x348);

	if (t79 != -13LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x349 = 2;
	int64_t x350 = INT64_MIN;
	uint16_t x351 = UINT16_MAX;

	t80 = ((x349&(x350<=x351))-x352);

	if (t80 != 216383941065LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x353 = INT32_MAX;
	int32_t x355 = INT32_MIN;
	volatile int32_t t81 = -116754189;

	t81 = ((x353&(x354<=x355))-x356);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x357 = INT32_MIN;
	int64_t x358 = INT64_MIN;
	int16_t x359 = INT16_MIN;
	int64_t x360 = -1LL;
	volatile int64_t t82 = -1044720246961LL;

	t82 = ((x357&(x358<=x359))-x360);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x361 = -46LL;
	int32_t x362 = INT32_MIN;
	static int64_t x363 = -1LL;
	int64_t t83 = -485601060354509590LL;

	t83 = ((x361&(x362<=x363))-x364);

	if (t83 != -16LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x365 = 30353LLU;
	uint8_t x367 = 0U;
	int32_t x368 = -1;
	uint64_t t84 = 342LLU;

	t84 = ((x365&(x366<=x367))-x368);

	if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x369 = 2U;
	int64_t x370 = 16454644172593907LL;
	int8_t x371 = 45;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t85 = -18879264;

	t85 = ((x369&(x370<=x371))-x372);

	if (t85 != -65535) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = INT16_MIN;
	int16_t x374 = INT16_MIN;
	static volatile int16_t x375 = 509;
	int8_t x376 = INT8_MIN;
	int32_t t86 = 237760;

	t86 = ((x373&(x374<=x375))-x376);

	if (t86 != 128) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x377 = 28;
	int16_t x378 = -1;
	int8_t x379 = -1;
	volatile int32_t x380 = 3;
	int32_t t87 = 18889;

	t87 = ((x377&(x378<=x379))-x380);

	if (t87 != -3) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x381 = INT32_MIN;
	volatile uint64_t x382 = UINT64_MAX;
	volatile int16_t x383 = -1;
	int8_t x384 = INT8_MIN;
	static int32_t t88 = -77818;

	t88 = ((x381&(x382<=x383))-x384);

	if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x385 = 218U;
	static volatile int64_t x386 = INT64_MIN;
	uint32_t x387 = 50U;
	static int16_t x388 = INT16_MIN;
	uint32_t t89 = 212U;

	t89 = ((x385&(x386<=x387))-x388);

	if (t89 != 32768U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = 1210299;
	int8_t x390 = INT8_MIN;
	volatile int64_t x391 = -7029493695LL;
	uint64_t x392 = UINT64_MAX;
	static volatile uint64_t t90 = 4922LLU;

	t90 = ((x389&(x390<=x391))-x392);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = INT32_MIN;
	uint8_t x394 = 24U;
	uint16_t x395 = UINT16_MAX;
	int8_t x396 = -3;
	int32_t t91 = -35869;

	t91 = ((x393&(x394<=x395))-x396);

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x397 = UINT64_MAX;
	uint32_t x398 = 15U;
	int32_t x399 = INT32_MAX;
	static int16_t x400 = 6;
	volatile uint64_t t92 = 3LLU;

	t92 = ((x397&(x398<=x399))-x400);

	if (t92 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x401 = 15440;
	volatile int32_t x403 = -1;
	uint16_t x404 = 8137U;

	t93 = ((x401&(x402<=x403))-x404);

	if (t93 != -8137) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x410 = -1;
	int16_t x411 = INT16_MIN;
	uint64_t x412 = 38LLU;
	volatile uint64_t t94 = 15723LLU;

	t94 = ((x409&(x410<=x411))-x412);

	if (t94 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x413 = INT8_MIN;
	uint64_t x414 = 255992097104LLU;
	int16_t x415 = INT16_MIN;
	int32_t t95 = 60520315;

	t95 = ((x413&(x414<=x415))-x416);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x417 = INT64_MIN;
	volatile int8_t x418 = INT8_MAX;
	volatile int8_t x419 = INT8_MAX;
	volatile int64_t t96 = 3855544134434LL;

	t96 = ((x417&(x418<=x419))-x420);

	if (t96 != 32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x421 = -38;
	uint32_t x423 = 3810U;
	static int64_t x424 = INT64_MAX;
	int64_t t97 = 7967LL;

	t97 = ((x421&(x422<=x423))-x424);

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x425 = 240759546;
	static uint16_t x426 = 1701U;
	int32_t x427 = INT32_MIN;
	volatile int32_t t98 = 125;

	t98 = ((x425&(x426<=x427))-x428);

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x429 = -1;
	uint32_t x431 = 22326663U;
	volatile int16_t x432 = INT16_MAX;
	volatile int32_t t99 = 35037542;

	t99 = ((x429&(x430<=x431))-x432);

	if (t99 != -32766) { NG(); } else { ; }
	
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


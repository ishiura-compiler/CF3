#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 1U;
volatile int64_t t0 = 2220805653LL;
static volatile uint16_t x5 = 74U;
volatile int16_t x8 = INT16_MAX;
int32_t x16 = -32092;
static int32_t t6 = 4934;
static int64_t x33 = -23LL;
int16_t x35 = 11393;
uint32_t x36 = 127022U;
int8_t x38 = -3;
uint32_t x43 = UINT32_MAX;
static int16_t x44 = INT16_MIN;
volatile uint32_t x47 = UINT32_MAX;
int64_t x50 = -7LL;
uint8_t x51 = 1U;
uint16_t x59 = 866U;
static volatile int64_t t14 = 0LL;
volatile int8_t x64 = 1;
volatile int64_t t15 = -4651326870571LL;
int64_t x65 = INT64_MAX;
volatile int64_t x67 = INT64_MAX;
int8_t x68 = INT8_MIN;
uint16_t x69 = 492U;
int64_t x70 = INT64_MIN;
int16_t x73 = INT16_MAX;
volatile int64_t x77 = INT64_MIN;
int64_t t20 = -4010579445182485464LL;
uint32_t t22 = 1513042U;
uint8_t x99 = UINT8_MAX;
static int8_t x100 = INT8_MIN;
int16_t x101 = INT16_MAX;
uint8_t x104 = UINT8_MAX;
int8_t x110 = -2;
static volatile int8_t x114 = 3;
volatile int8_t x116 = -24;
static int16_t x122 = -1;
int16_t x123 = INT16_MIN;
int32_t t29 = -1;
int16_t x134 = INT16_MIN;
volatile uint64_t x136 = 26523645LLU;
uint64_t t31 = 14947LLU;
static int8_t x137 = -1;
uint8_t x140 = 4U;
int32_t x142 = INT32_MIN;
int32_t x147 = INT32_MIN;
static int32_t x151 = -2902;
static int64_t x156 = -1LL;
int64_t x162 = INT64_MAX;
uint16_t x164 = UINT16_MAX;
int64_t t39 = -1937LL;
int8_t x180 = 1;
volatile int64_t t41 = 4369072855215427LL;
uint32_t x182 = UINT32_MAX;
int64_t x185 = INT64_MIN;
volatile int64_t x186 = -170220088106367LL;
int16_t x189 = INT16_MIN;
volatile int64_t t44 = 26283965901141LL;
int32_t x193 = -1;
static int8_t x194 = INT8_MAX;
volatile uint64_t x198 = 2893674735089098643LLU;
static volatile uint32_t x202 = 19U;
static volatile uint64_t x205 = 100LLU;
int64_t x208 = INT64_MIN;
uint16_t x210 = 852U;
uint64_t x216 = 10071987LLU;
uint32_t x218 = UINT32_MAX;
int64_t x221 = -1602341942LL;
static int16_t x222 = -1011;
static int64_t x225 = INT64_MIN;
static uint8_t x227 = 61U;
static uint8_t x247 = UINT8_MAX;
volatile uint64_t t57 = 23813LLU;
static volatile int16_t x249 = INT16_MIN;
static int8_t x254 = INT8_MAX;
volatile int16_t x255 = INT16_MIN;
static int32_t x256 = -1723018;
int32_t t59 = 6;
static int64_t x262 = INT64_MIN;
static uint16_t x266 = UINT16_MAX;
static int32_t x268 = INT32_MIN;
static int64_t t61 = 1510706498979LL;
int8_t x272 = 1;
int32_t x273 = INT32_MIN;
volatile int32_t t65 = 1125;
volatile int32_t t66 = -210;
volatile int8_t x301 = -1;
uint16_t x302 = 0U;
int64_t x305 = -1LL;
static uint32_t x311 = 256859292U;
uint8_t x312 = 103U;
static uint8_t x322 = 2U;
static uint64_t x323 = 7960721968641351165LLU;
int8_t x327 = INT8_MIN;
uint8_t x330 = 0U;
volatile int8_t x340 = INT8_MAX;
volatile int32_t x341 = INT32_MIN;
int32_t x342 = INT32_MAX;
uint16_t x345 = 1U;
volatile uint64_t x354 = UINT64_MAX;
int8_t x358 = INT8_MIN;
static int16_t x360 = -1;
int32_t x361 = -12375772;
int16_t x375 = INT16_MIN;
volatile int64_t x376 = INT64_MAX;
uint64_t x380 = UINT64_MAX;
static int8_t x387 = INT8_MIN;
int64_t x392 = INT64_MIN;
int8_t x393 = INT8_MIN;
static int8_t x395 = -1;
int8_t x400 = INT8_MIN;
volatile uint64_t t93 = 3858694LLU;
static int8_t x402 = INT8_MAX;
uint32_t x407 = 64451U;
int16_t x409 = 1;
int8_t x419 = -1;
int64_t x421 = -407110LL;


void f0(void) {
	volatile int32_t x1 = 65413034;
	static int64_t x2 = -1LL;
	volatile int8_t x4 = INT8_MAX;

	t0 = (x1&(x2^(x3/x4)));

	if (t0 != 65413034LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	volatile int8_t x7 = INT8_MIN;
	volatile int32_t t1 = 44972;

	t1 = (x5&(x6^(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 878218115904LLU;
	uint32_t x10 = 129888U;
	volatile uint8_t x11 = 38U;
	static int32_t x12 = INT32_MIN;
	static volatile uint64_t t2 = 11LLU;

	t2 = (x9&(x10^(x11/x12)));

	if (t2 != 64320LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 3U;
	static int64_t x14 = INT64_MIN;
	volatile int64_t x15 = INT64_MAX;
	int64_t t3 = 1LL;

	t3 = (x13&(x14^(x15/x16)));

	if (t3 != 3LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 1656635736882814LL;
	int32_t x18 = -537396;
	uint16_t x19 = UINT16_MAX;
	static int8_t x20 = INT8_MIN;
	int64_t t4 = -188343371963LL;

	t4 = (x17&(x18^(x19/x20)));

	if (t4 != 537164LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint16_t x22 = 1818U;
	int8_t x23 = INT8_MIN;
	volatile uint32_t x24 = 1U;
	int64_t t5 = -24581857552953074LL;

	t5 = (x21&(x22^(x23/x24)));

	if (t5 != 4294965402LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = 3;
	int32_t x26 = -91471;
	uint8_t x27 = 9U;
	int16_t x28 = INT16_MIN;

	t6 = (x25&(x26^(x27/x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int8_t x30 = INT8_MIN;
	int64_t x31 = -1LL;
	int32_t x32 = INT32_MIN;
	volatile int64_t t7 = -540566496795326902LL;

	t7 = (x29&(x30^(x31/x32)));

	if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -8031LL;
	volatile int64_t t8 = 4741119660809124LL;

	t8 = (x33&(x34^(x35/x36)));

	if (t8 != -8031LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -55;
	static int16_t x39 = INT16_MIN;
	volatile uint8_t x40 = UINT8_MAX;
	int32_t t9 = 1;

	t9 = (x37&(x38^(x39/x40)));

	if (t9 != 73) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int16_t x42 = -643;
	volatile uint32_t t10 = 30894U;

	t10 = (x41&(x42^(x43/x44)));

	if (t10 != 4294966528U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 0;
	uint8_t x46 = 0U;
	int16_t x48 = 88;
	static volatile uint32_t t11 = 1U;

	t11 = (x45&(x46^(x47/x48)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 1;
	int16_t x52 = 45;
	volatile int64_t t12 = 3052743745LL;

	t12 = (x49&(x50^(x51/x52)));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	static int8_t x54 = -3;
	int8_t x55 = -3;
	uint16_t x56 = 22U;
	uint32_t t13 = 519U;

	t13 = (x53&(x54^(x55/x56)));

	if (t13 != 4294967293U) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -49216;
	int64_t x58 = INT64_MAX;
	int64_t x60 = INT64_MIN;

	t14 = (x57&(x58^(x59/x60)));

	if (t14 != 9223372036854726592LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int64_t x62 = -202LL;
	static int16_t x63 = INT16_MIN;

	t15 = (x61&(x62^(x63/x64)));

	if (t15 != 32566LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	static volatile int64_t t16 = 26989086LL;

	t16 = (x65&(x66^(x67/x68)));

	if (t16 != 9151314442816847873LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x71 = -9LL;
	static int16_t x72 = 3;
	volatile int64_t t17 = -1100868964479358LL;

	t17 = (x69&(x70^(x71/x72)));

	if (t17 != 492LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MIN;
	static volatile int16_t x75 = INT16_MAX;
	static uint32_t x76 = 346U;
	uint32_t t18 = 1239U;

	t18 = (x73&(x74^(x75/x76)));

	if (t18 != 94U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = 0;
	int16_t x79 = -1785;
	int64_t x80 = 3033660026396LL;
	volatile int64_t t19 = -3934827103954019LL;

	t19 = (x77&(x78^(x79/x80)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MIN;
	static uint32_t x82 = 14667630U;
	uint16_t x83 = 2U;
	int64_t x84 = -1LL;

	t20 = (x81&(x82^(x83/x84)));

	if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 2U;
	int16_t x90 = -56;
	uint16_t x91 = 1U;
	static volatile int64_t x92 = 8263LL;
	static int64_t t21 = 440LL;

	t21 = (x89&(x90^(x91/x92)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -1;
	uint8_t x94 = 1U;
	uint32_t x95 = 7U;
	int32_t x96 = INT32_MAX;

	t22 = (x93&(x94^(x95/x96)));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x97 = INT16_MIN;
	uint32_t x98 = 164576445U;
	uint32_t t23 = 73417U;

	t23 = (x97&(x98^(x99/x100)));

	if (t23 != 4130373632U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x102 = 5891U;
	volatile int8_t x103 = -3;
	uint32_t t24 = 117U;

	t24 = (x101&(x102^(x103/x104)));

	if (t24 != 5891U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MAX;
	int16_t x106 = -276;
	uint8_t x107 = 14U;
	static uint16_t x108 = 492U;
	volatile int32_t t25 = -38;

	t25 = (x105&(x106^(x107/x108)));

	if (t25 != 108) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MIN;
	uint8_t x111 = 14U;
	static int64_t x112 = INT64_MAX;
	int64_t t26 = INT64_MIN;

	t26 = (x109&(x110^(x111/x112)));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	int64_t x115 = 474054548683525725LL;
	volatile int64_t t27 = 104572LL;

	t27 = (x113&(x114^(x115/x116)));

	if (t27 != -19752272861813632LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 453U;
	int8_t x118 = 0;
	static int32_t x119 = -226;
	int8_t x120 = INT8_MIN;
	uint32_t t28 = 181U;

	t28 = (x117&(x118^(x119/x120)));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = -61048775;
	volatile int32_t x124 = 1;

	t29 = (x121&(x122^(x123/x124)));

	if (t29 != 30777) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -1;
	int64_t x130 = INT64_MIN;
	uint8_t x131 = 1U;
	int64_t x132 = -3524786327668LL;
	static int64_t t30 = INT64_MIN;

	t30 = (x129&(x130^(x131/x132)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = 43;
	volatile uint32_t x135 = 57355U;

	t31 = (x133&(x134^(x135/x136)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x138 = -1;
	int64_t x139 = INT64_MIN;
	volatile int64_t t32 = 2LL;

	t32 = (x137&(x138^(x139/x140)));

	if (t32 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x141 = -1LL;
	volatile int32_t x143 = INT32_MIN;
	uint64_t x144 = 542742641217464136LLU;
	volatile uint64_t t33 = 201112LLU;

	t33 = (x141&(x142^(x143/x144)));

	if (t33 != 18446744071562068001LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x145 = INT32_MIN;
	static int16_t x146 = INT16_MIN;
	static volatile uint32_t x148 = 69182149U;
	uint32_t t34 = 9878884U;

	t34 = (x145&(x146^(x147/x148)));

	if (t34 != 2147483648U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = -6;
	int16_t x150 = INT16_MIN;
	static uint32_t x152 = 113437477U;
	uint32_t t35 = 46025U;

	t35 = (x149&(x150^(x151/x152)));

	if (t35 != 4294934560U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	static int32_t x154 = INT32_MIN;
	int8_t x155 = -1;
	int64_t t36 = 3959932468977694LL;

	t36 = (x153&(x154^(x155/x156)));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x157 = 0U;
	int64_t x158 = INT64_MIN;
	uint16_t x159 = 1571U;
	static uint8_t x160 = UINT8_MAX;
	int64_t t37 = 0LL;

	t37 = (x157&(x158^(x159/x160)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = 58U;
	int32_t x163 = INT32_MAX;
	int64_t t38 = 15293625118543LL;

	t38 = (x161&(x162^(x163/x164)));

	if (t38 != 58LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	int16_t x166 = 55;
	int64_t x167 = 5649671900312154LL;
	int64_t x168 = INT64_MIN;

	t39 = (x165&(x166^(x167/x168)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x169 = INT16_MAX;
	int16_t x170 = INT16_MIN;
	uint8_t x171 = 33U;
	uint16_t x172 = 12U;
	volatile int32_t t40 = 0;

	t40 = (x169&(x170^(x171/x172)));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = INT64_MIN;
	int16_t x179 = INT16_MIN;

	t41 = (x177&(x178^(x179/x180)));

	if (t41 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = INT64_MAX;
	uint32_t x183 = UINT32_MAX;
	int16_t x184 = INT16_MAX;
	int64_t t42 = 457344252111LL;

	t42 = (x181&(x182^(x183/x184)));

	if (t42 != 4294836219LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x187 = INT64_MIN;
	int16_t x188 = INT16_MIN;
	int64_t t43 = INT64_MIN;

	t43 = (x185&(x186^(x187/x188)));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x190 = -11550LL;
	int16_t x191 = INT16_MIN;
	volatile int32_t x192 = INT32_MAX;

	t44 = (x189&(x190^(x191/x192)));

	if (t44 != -32768LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x195 = INT8_MIN;
	int8_t x196 = INT8_MAX;
	static int32_t t45 = 0;

	t45 = (x193&(x194^(x195/x196)));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = 62U;
	volatile uint8_t x199 = UINT8_MAX;
	static int64_t x200 = -1LL;
	volatile uint64_t t46 = 13750484547240LLU;

	t46 = (x197&(x198^(x199/x200)));

	if (t46 != 18LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x201 = 37LLU;
	int8_t x203 = INT8_MIN;
	volatile int8_t x204 = INT8_MIN;
	volatile uint64_t t47 = 695796195574LLU;

	t47 = (x201&(x202^(x203/x204)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x206 = UINT16_MAX;
	int8_t x207 = 0;
	uint64_t t48 = 3737459634002160LLU;

	t48 = (x205&(x206^(x207/x208)));

	if (t48 != 100LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = -782;
	static int32_t x211 = INT32_MIN;
	static uint8_t x212 = 1U;
	volatile int32_t t49 = 3586705;

	t49 = (x209&(x210^(x211/x212)));

	if (t49 != -2147483568) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x213 = UINT16_MAX;
	uint8_t x214 = 3U;
	volatile uint8_t x215 = 0U;
	static uint64_t t50 = 3411LLU;

	t50 = (x213&(x214^(x215/x216)));

	if (t50 != 3LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x217 = INT16_MIN;
	int32_t x219 = INT32_MIN;
	int16_t x220 = 379;
	volatile uint32_t t51 = 1483588919U;

	t51 = (x217&(x218^(x219/x220)));

	if (t51 != 5636096U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x223 = INT16_MAX;
	int32_t x224 = INT32_MIN;
	int64_t t52 = -5318262788080613LL;

	t52 = (x221&(x222^(x223/x224)));

	if (t52 != -1602342904LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x226 = 15U;
	int32_t x228 = -112491;
	static int64_t t53 = -21212287269LL;

	t53 = (x225&(x226^(x227/x228)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x233 = 207U;
	static uint16_t x234 = 22674U;
	int64_t x235 = INT64_MAX;
	int8_t x236 = -6;
	static int64_t t54 = 4032509LL;

	t54 = (x233&(x234^(x235/x236)));

	if (t54 != 9LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = INT8_MIN;
	volatile int8_t x238 = 18;
	static int64_t x239 = INT64_MIN;
	int64_t x240 = 1708155722357LL;
	volatile int64_t t55 = -50582974031692564LL;

	t55 = (x237&(x238^(x239/x240)));

	if (t55 != -5399680LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x241 = UINT16_MAX;
	int64_t x242 = INT64_MIN;
	volatile uint16_t x243 = 17U;
	static uint32_t x244 = UINT32_MAX;
	volatile int64_t t56 = -16655250LL;

	t56 = (x241&(x242^(x243/x244)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x245 = UINT64_MAX;
	volatile int8_t x246 = -1;
	int16_t x248 = -1;

	t57 = (x245&(x246^(x247/x248)));

	if (t57 != 254LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x250 = 205978673U;
	int16_t x251 = INT16_MAX;
	uint64_t x252 = 21081816663469326LLU;
	uint64_t t58 = 75909568084LLU;

	t58 = (x249&(x250^(x251/x252)));

	if (t58 != 205946880LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x253 = 26U;

	t59 = (x253&(x254^(x255/x256)));

	if (t59 != 26) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MIN;
	uint8_t x263 = 7U;
	static int64_t x264 = INT64_MIN;
	int64_t t60 = INT64_MIN;

	t60 = (x261&(x262^(x263/x264)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x265 = 11865910U;
	int64_t x267 = -1LL;

	t61 = (x265&(x266^(x267/x268)));

	if (t61 != 3894LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = -1;
	int64_t x270 = INT64_MIN;
	static uint16_t x271 = 1893U;
	int64_t t62 = -394LL;

	t62 = (x269&(x270^(x271/x272)));

	if (t62 != -9223372036854773915LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x274 = UINT64_MAX;
	int64_t x275 = 1165629166LL;
	static volatile uint32_t x276 = 555847U;
	volatile uint64_t t63 = 228711555351793LLU;

	t63 = (x273&(x274^(x275/x276)));

	if (t63 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x277 = -216;
	int64_t x278 = -1LL;
	static int8_t x279 = INT8_MIN;
	static int64_t x280 = -15LL;
	static int64_t t64 = -36236LL;

	t64 = (x277&(x278^(x279/x280)));

	if (t64 != -224LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x281 = -1;
	static int16_t x282 = 0;
	int8_t x283 = INT8_MIN;
	int16_t x284 = INT16_MAX;

	t65 = (x281&(x282^(x283/x284)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x285 = 5;
	uint16_t x286 = 21417U;
	int32_t x287 = -1;
	volatile int16_t x288 = INT16_MIN;

	t66 = (x285&(x286^(x287/x288)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = 25;
	volatile int32_t x290 = 12;
	uint64_t x291 = 64LLU;
	uint16_t x292 = 5390U;
	static volatile uint64_t t67 = 1896492893996429014LLU;

	t67 = (x289&(x290^(x291/x292)));

	if (t67 != 8LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x293 = INT8_MIN;
	uint16_t x294 = UINT16_MAX;
	volatile int8_t x295 = INT8_MIN;
	uint32_t x296 = 290U;
	volatile uint32_t t68 = 2U;

	t68 = (x293&(x294^(x295/x296)));

	if (t68 != 14746496U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x297 = INT16_MIN;
	static int16_t x298 = -154;
	uint16_t x299 = UINT16_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t69 = 29510736;

	t69 = (x297&(x298^(x299/x300)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x303 = INT32_MAX;
	int64_t x304 = -3939LL;
	int64_t t70 = -4367990499978LL;

	t70 = (x301&(x302^(x303/x304)));

	if (t70 != -545184LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x306 = -1;
	uint8_t x307 = 41U;
	static volatile uint16_t x308 = 8737U;
	int64_t t71 = 4LL;

	t71 = (x305&(x306^(x307/x308)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = -1;
	int8_t x310 = 15;
	volatile uint32_t t72 = 1U;

	t72 = (x309&(x310^(x311/x312)));

	if (t72 != 2493788U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x313 = 63U;
	volatile int16_t x314 = 845;
	int32_t x315 = 6493;
	volatile int64_t x316 = INT64_MIN;
	int64_t t73 = 429LL;

	t73 = (x313&(x314^(x315/x316)));

	if (t73 != 13LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x317 = 1473U;
	int64_t x318 = INT64_MIN;
	int8_t x319 = 37;
	static volatile int8_t x320 = -1;
	int64_t t74 = 1009112815229550LL;

	t74 = (x317&(x318^(x319/x320)));

	if (t74 != 1473LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = INT8_MIN;
	static int32_t x324 = -1;
	volatile uint64_t t75 = 16251868993LLU;

	t75 = (x321&(x322^(x323/x324)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x325 = INT8_MAX;
	int8_t x326 = -1;
	uint16_t x328 = 83U;
	volatile int32_t t76 = -15;

	t76 = (x325&(x326^(x327/x328)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = INT8_MIN;
	int64_t x331 = -1465162908319LL;
	int8_t x332 = -15;
	static int64_t t77 = 104LL;

	t77 = (x329&(x330^(x331/x332)));

	if (t77 != 97677527168LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x333 = -12;
	int64_t x334 = -1LL;
	uint32_t x335 = 1823082775U;
	volatile uint16_t x336 = 19360U;
	volatile int64_t t78 = -256991219241291LL;

	t78 = (x333&(x334^(x335/x336)));

	if (t78 != -94176LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x337 = UINT32_MAX;
	uint8_t x338 = UINT8_MAX;
	int8_t x339 = -1;
	volatile uint32_t t79 = 315687488U;

	t79 = (x337&(x338^(x339/x340)));

	if (t79 != 255U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x343 = INT64_MAX;
	int8_t x344 = 3;
	volatile int64_t t80 = 173122042685312525LL;

	t80 = (x341&(x342^(x343/x344)));

	if (t80 != 3074457344902430720LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x346 = INT8_MIN;
	volatile int8_t x347 = 45;
	int8_t x348 = -1;
	int32_t t81 = -25315;

	t81 = (x345&(x346^(x347/x348)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x349 = INT64_MIN;
	static int64_t x350 = 0LL;
	int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MAX;
	int64_t t82 = 76163349249LL;

	t82 = (x349&(x350^(x351/x352)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x353 = -1;
	uint8_t x355 = UINT8_MAX;
	int64_t x356 = 58342LL;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (x353&(x354^(x355/x356)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = -29227795419LL;
	int32_t x359 = INT32_MAX;
	static int64_t t84 = -65867706060LL;

	t84 = (x357&(x358^(x359/x360)));

	if (t84 != 836975617LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x362 = 25U;
	int16_t x363 = INT16_MIN;
	static volatile int8_t x364 = -1;
	int32_t t85 = 91;

	t85 = (x361&(x362^(x363/x364)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x369 = INT16_MAX;
	uint8_t x370 = UINT8_MAX;
	volatile uint32_t x371 = 0U;
	int8_t x372 = -1;
	uint32_t t86 = 19212033U;

	t86 = (x369&(x370^(x371/x372)));

	if (t86 != 255U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x373 = UINT8_MAX;
	int16_t x374 = 0;
	int64_t t87 = -9870420703315LL;

	t87 = (x373&(x374^(x375/x376)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x377 = 94LLU;
	int32_t x378 = INT32_MAX;
	uint64_t x379 = UINT64_MAX;
	volatile uint64_t t88 = 976963512707482LLU;

	t88 = (x377&(x378^(x379/x380)));

	if (t88 != 94LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x381 = INT32_MAX;
	uint8_t x382 = 3U;
	static uint32_t x383 = 1274840050U;
	uint64_t x384 = 1116360835LLU;
	static uint64_t t89 = 107398241962241LLU;

	t89 = (x381&(x382^(x383/x384)));

	if (t89 != 2LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = INT32_MIN;
	static uint8_t x386 = 1U;
	int32_t x388 = -106791273;
	static volatile int32_t t90 = 7655;

	t90 = (x385&(x386^(x387/x388)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x389 = UINT8_MAX;
	uint64_t x390 = UINT64_MAX;
	uint32_t x391 = 708076538U;
	volatile uint64_t t91 = 92LLU;

	t91 = (x389&(x390^(x391/x392)));

	if (t91 != 255LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x394 = INT32_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t92 = 0;

	t92 = (x393&(x394^(x395/x396)));

	if (t92 != 2147483520) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x397 = UINT64_MAX;
	volatile uint64_t x398 = 1894070609291276LLU;
	int16_t x399 = INT16_MIN;

	t93 = (x397&(x398^(x399/x400)));

	if (t93 != 1894070609291532LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x401 = -459315199744LL;
	uint16_t x403 = 5190U;
	int64_t x404 = INT64_MIN;
	int64_t t94 = -126223LL;

	t94 = (x401&(x402^(x403/x404)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x405 = UINT8_MAX;
	volatile uint16_t x406 = 549U;
	int64_t x408 = 411LL;
	int64_t t95 = -2LL;

	t95 = (x405&(x406^(x407/x408)));

	if (t95 != 185LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x410 = 231U;
	int64_t x411 = -8108LL;
	int64_t x412 = INT64_MAX;
	int64_t t96 = -9807333LL;

	t96 = (x409&(x410^(x411/x412)));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x413 = UINT32_MAX;
	static volatile int64_t x414 = INT64_MAX;
	int64_t x415 = INT64_MIN;
	int16_t x416 = 94;
	static int64_t t97 = 283823LL;

	t97 = (x413&(x414^(x415/x416)));

	if (t97 != 3106997617LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x417 = UINT8_MAX;
	int32_t x418 = INT32_MAX;
	uint64_t x420 = 14126062LLU;
	uint64_t t98 = 7166565LLU;

	t98 = (x417&(x418^(x419/x420)));

	if (t98 != 39LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x422 = INT64_MIN;
	static int64_t x423 = 29120126607LL;
	static uint32_t x424 = UINT32_MAX;
	volatile int64_t t99 = -23116948466553556LL;

	t99 = (x421&(x422^(x423/x424)));

	if (t99 != -9223372036854775806LL) { NG(); } else { ; }
	
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


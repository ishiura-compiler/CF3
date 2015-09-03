#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MAX;
static uint32_t x9 = 214014955U;
static volatile int32_t x13 = 3358;
uint32_t x20 = UINT32_MAX;
uint64_t x25 = 8462370707LLU;
uint64_t t5 = 294939500731542LLU;
uint16_t x34 = UINT16_MAX;
uint8_t x46 = 2U;
static int16_t x48 = -46;
volatile int16_t x50 = INT16_MIN;
static uint8_t x54 = 59U;
int8_t x56 = -1;
int32_t t11 = -526834011;
int8_t x59 = INT8_MIN;
int64_t x62 = -212500169375630LL;
int64_t t13 = -5557113393856068LL;
int64_t x72 = INT64_MAX;
uint8_t x82 = 21U;
int32_t x95 = INT32_MIN;
int16_t x102 = -35;
int8_t x107 = INT8_MIN;
int32_t x120 = INT32_MIN;
volatile int16_t x129 = 143;
uint8_t x135 = UINT8_MAX;
int16_t x137 = -1862;
static int64_t t31 = 64202LL;
int32_t x141 = -1;
int8_t x143 = INT8_MAX;
int8_t x144 = -1;
int8_t x149 = INT8_MAX;
static volatile uint64_t t38 = 3714030LLU;
uint16_t x171 = UINT16_MAX;
volatile int32_t x179 = INT32_MIN;
volatile int16_t x192 = INT16_MIN;
volatile int64_t t43 = -31804127966LL;
uint64_t t45 = 18271321LLU;
uint64_t t46 = 3953794LLU;
int64_t x211 = -1LL;
int16_t x215 = 2294;
uint64_t x216 = 78819LLU;
volatile int64_t x217 = 312960LL;
static int64_t x219 = INT64_MIN;
uint64_t x221 = UINT64_MAX;
volatile uint16_t x222 = 5573U;
int16_t x224 = INT16_MAX;
volatile uint64_t t51 = 8267182LLU;
int32_t x227 = INT32_MAX;
int32_t x231 = -1832368;
int64_t x233 = 208583244829604LL;
volatile int8_t x237 = -1;
int16_t x238 = 42;
volatile uint32_t t57 = 156505U;
int64_t x255 = -1LL;
volatile uint16_t x257 = 14U;
int8_t x260 = -1;
uint16_t x261 = 0U;
uint16_t x262 = 144U;
volatile int32_t t61 = -336835317;
static int16_t x270 = INT16_MAX;
int8_t x275 = INT8_MAX;
int32_t t64 = -6;
uint16_t x279 = 13U;
volatile int32_t x281 = INT32_MIN;
int8_t x285 = -8;
static int64_t x291 = 52349574667175LL;
uint64_t t69 = 26LLU;
static int32_t x297 = INT32_MIN;
volatile uint32_t x301 = 1465584U;
int16_t x303 = INT16_MAX;
volatile uint32_t t72 = 43714U;
int32_t x310 = INT32_MIN;
int64_t t73 = 107847485535472480LL;
int8_t x313 = 49;
int32_t x315 = -72551;
volatile int8_t x324 = -1;
int64_t t76 = -3LL;
int16_t x334 = INT16_MIN;
static int32_t x343 = 1100412;
uint8_t x344 = UINT8_MAX;
int64_t t81 = 207707375324LL;
int32_t x354 = -1;
static uint64_t x356 = UINT64_MAX;
int8_t x359 = INT8_MIN;
int32_t x360 = INT32_MIN;
int32_t t85 = -55298;
volatile int64_t t87 = -18697134LL;
int16_t x376 = 37;
volatile uint64_t x380 = 131110739LLU;
int16_t x382 = -2;
int32_t t91 = 12810;
int64_t x392 = INT64_MIN;
int16_t x399 = INT16_MAX;
int64_t x403 = -1LL;
static int64_t x405 = -14LL;
static int8_t x415 = 39;


void f0(void) {
	int64_t x1 = -1LL;
	int32_t x2 = -1;
	int64_t x3 = 107162038LL;
	volatile int64_t t0 = -34LL;

	t0 = ((x1&(x2&x3))/x4);

	if (t0 != 843795LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	volatile uint32_t x6 = 205461273U;
	uint8_t x7 = 97U;
	volatile int32_t x8 = INT32_MIN;
	static volatile uint32_t t1 = 14U;

	t1 = ((x5&(x6&x7))/x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -42402717;
	int32_t x11 = -1;
	volatile uint8_t x12 = 13U;
	volatile uint32_t t2 = 10393981U;

	t2 = ((x9&(x10&x11))/x12);

	if (t2 != 15812300U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x14 = 3;
	static volatile int8_t x15 = 21;
	uint32_t x16 = UINT32_MAX;
	volatile uint32_t t3 = 1U;

	t3 = ((x13&(x14&x15))/x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	static int8_t x18 = -1;
	volatile int32_t x19 = 29;
	int64_t t4 = 21514LL;

	t4 = ((x17&(x18&x19))/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = 119773;
	static int8_t x27 = -39;
	int8_t x28 = -1;

	t5 = ((x25&(x26&x27))/x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 6125U;
	int8_t x30 = INT8_MIN;
	uint8_t x31 = 48U;
	uint64_t x32 = 57921LLU;
	volatile uint64_t t6 = 7499380LLU;

	t6 = ((x29&(x30&x31))/x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int64_t x35 = INT64_MIN;
	static int64_t x36 = INT64_MAX;
	volatile int64_t t7 = 1657LL;

	t7 = ((x33&(x34&x35))/x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	int64_t x42 = -1LL;
	int16_t x43 = -1;
	uint64_t x44 = UINT64_MAX;
	uint64_t t8 = 82085404411273783LLU;

	t8 = ((x41&(x42&x43))/x44);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = INT8_MAX;
	volatile int64_t x47 = INT64_MIN;
	static int64_t t9 = 59672288355591LL;

	t9 = ((x45&(x46&x47))/x48);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = 79U;
	volatile int8_t x51 = -26;
	uint64_t x52 = UINT64_MAX;
	uint64_t t10 = 1446801926LLU;

	t10 = ((x49&(x50&x51))/x52);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	int32_t x55 = INT32_MIN;

	t11 = ((x53&(x54&x55))/x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	volatile int64_t x58 = INT64_MAX;
	int32_t x60 = INT32_MAX;
	volatile int64_t t12 = -8494420186LL;

	t12 = ((x57&(x58&x59))/x60);

	if (t12 != 4294967297LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = INT64_MAX;
	int8_t x63 = INT8_MIN;
	uint16_t x64 = UINT16_MAX;

	t13 = ((x61&(x62&x63))/x64);

	if (t13 != 140736393327006LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	int32_t x66 = -5481990;
	int32_t x67 = -1;
	static int64_t x68 = 105934361956575072LL;
	int64_t t14 = -14901223239000852LL;

	t14 = ((x65&(x66&x67))/x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	uint16_t x70 = 288U;
	uint64_t x71 = UINT64_MAX;
	uint64_t t15 = 38129LLU;

	t15 = ((x69&(x70&x71))/x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -12;
	uint8_t x74 = 82U;
	static volatile uint32_t x75 = 700478699U;
	int16_t x76 = INT16_MIN;
	uint32_t t16 = 40411U;

	t16 = ((x73&(x74&x75))/x76);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 7U;
	volatile int64_t x78 = -1LL;
	static int64_t x79 = -4055855LL;
	volatile int8_t x80 = -14;
	volatile int64_t t17 = 225206180303138LL;

	t17 = ((x77&(x78&x79))/x80);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -2874150160650LL;
	volatile uint64_t x83 = 123179LLU;
	static volatile int8_t x84 = INT8_MIN;
	uint64_t t18 = 12322301600886LLU;

	t18 = ((x81&(x82&x83))/x84);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	uint8_t x86 = UINT8_MAX;
	uint8_t x87 = UINT8_MAX;
	uint64_t x88 = 3145918354500393LLU;
	uint64_t t19 = 738693986487686227LLU;

	t19 = ((x85&(x86&x87))/x88);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x89 = UINT64_MAX;
	static uint16_t x90 = 89U;
	static int16_t x91 = INT16_MAX;
	static uint32_t x92 = 731988489U;
	uint64_t t20 = 965464152272LLU;

	t20 = ((x89&(x90&x91))/x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = 25U;
	int16_t x94 = INT16_MIN;
	volatile int32_t x96 = INT32_MAX;
	volatile int32_t t21 = 12;

	t21 = ((x93&(x94&x95))/x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 32639U;
	int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	int32_t x100 = -1;
	int32_t t22 = -16885303;

	t22 = ((x97&(x98&x99))/x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 121;
	int8_t x103 = -1;
	int16_t x104 = -22;
	volatile int32_t t23 = -7134855;

	t23 = ((x101&(x102&x103))/x104);

	if (t23 != -4) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 3U;
	volatile uint32_t x106 = 3843U;
	static uint64_t x108 = 19773416819708LLU;
	volatile uint64_t t24 = 1456026769120044LLU;

	t24 = ((x105&(x106&x107))/x108);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	static uint16_t x110 = UINT16_MAX;
	static volatile int64_t x111 = 492507883LL;
	static int64_t x112 = INT64_MIN;
	int64_t t25 = 3830LL;

	t25 = ((x109&(x110&x111))/x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = INT16_MIN;
	volatile int16_t x114 = -1;
	uint8_t x115 = 12U;
	int16_t x116 = INT16_MIN;
	volatile int32_t t26 = 1448;

	t26 = ((x113&(x114&x115))/x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = 2;
	int64_t x118 = -2621296496337705066LL;
	int8_t x119 = -60;
	volatile int64_t t27 = -1409338545LL;

	t27 = ((x117&(x118&x119))/x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = 1;
	static volatile int16_t x123 = -1;
	static volatile int32_t x124 = -1;
	int64_t t28 = 41LL;

	t28 = ((x121&(x122&x123))/x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x130 = 1U;
	int64_t x131 = INT64_MIN;
	uint64_t x132 = 25503933334172320LLU;
	volatile uint64_t t29 = 2062148182902LLU;

	t29 = ((x129&(x130&x131))/x132);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -51;
	int64_t x134 = -1LL;
	int32_t x136 = -43537;
	volatile int64_t t30 = 121925367LL;

	t30 = ((x133&(x134&x135))/x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x138 = -5;
	int16_t x139 = 1076;
	int64_t x140 = INT64_MIN;

	t31 = ((x137&(x138&x139))/x140);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x142 = 119;
	int32_t t32 = 106126;

	t32 = ((x141&(x142&x143))/x144);

	if (t32 != -119) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 2006LLU;
	static uint64_t x146 = 4394990222045081327LLU;
	int64_t x147 = -41398LL;
	uint32_t x148 = 102506U;
	uint64_t t33 = 3070LLU;

	t33 = ((x145&(x146&x147))/x148);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x150 = 29229U;
	static volatile uint8_t x151 = 4U;
	int8_t x152 = INT8_MIN;
	int32_t t34 = 1;

	t34 = ((x149&(x150&x151))/x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = 222679950U;
	static int32_t x154 = INT32_MIN;
	int64_t x155 = -548821436467213743LL;
	uint64_t x156 = 163666LLU;
	uint64_t t35 = 2203677919644141LLU;

	t35 = ((x153&(x154&x155))/x156);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = 43U;
	uint8_t x158 = 0U;
	volatile int8_t x159 = INT8_MIN;
	int16_t x160 = -1;
	volatile uint32_t t36 = 19U;

	t36 = ((x157&(x158&x159))/x160);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = -1;
	int32_t x162 = INT32_MIN;
	int64_t x163 = -4LL;
	uint32_t x164 = 1525438U;
	volatile int64_t t37 = -6191706258LL;

	t37 = ((x161&(x162&x163))/x164);

	if (t37 != -1407LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -1;
	int64_t x166 = INT64_MIN;
	uint64_t x167 = 79530LLU;
	static int32_t x168 = INT32_MIN;

	t38 = ((x165&(x166&x167))/x168);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = -5;
	int32_t x170 = 55961;
	static int64_t x172 = INT64_MAX;
	int64_t t39 = 27593206621023LL;

	t39 = ((x169&(x170&x171))/x172);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = 16;
	uint32_t x178 = 0U;
	static int16_t x180 = -524;
	volatile uint32_t t40 = 243237U;

	t40 = ((x177&(x178&x179))/x180);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x181 = -1;
	uint8_t x182 = 0U;
	volatile int32_t x183 = INT32_MAX;
	uint32_t x184 = 29U;
	volatile uint32_t t41 = 363U;

	t41 = ((x181&(x182&x183))/x184);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MAX;
	int32_t x186 = INT32_MIN;
	int32_t x187 = INT32_MIN;
	int64_t x188 = -15LL;
	int64_t t42 = -1LL;

	t42 = ((x185&(x186&x187))/x188);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MIN;
	static int16_t x190 = -1;
	int32_t x191 = INT32_MAX;

	t43 = ((x189&(x190&x191))/x192);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = -1LL;
	int32_t x195 = -1;
	volatile uint64_t x196 = UINT64_MAX;
	uint64_t t44 = 35252LLU;

	t44 = ((x193&(x194&x195))/x196);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x197 = 42250544009LLU;
	int32_t x198 = INT32_MIN;
	volatile uint16_t x199 = 211U;
	uint8_t x200 = 9U;

	t45 = ((x197&(x198&x199))/x200);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = 5LLU;
	uint16_t x202 = 122U;
	int64_t x203 = INT64_MIN;
	int16_t x204 = -292;

	t46 = ((x201&(x202&x203))/x204);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x205 = -166036LL;
	int64_t x206 = 53113552LL;
	int32_t x207 = INT32_MIN;
	uint64_t x208 = UINT64_MAX;
	uint64_t t47 = 305153LLU;

	t47 = ((x205&(x206&x207))/x208);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x209 = 62547764660LLU;
	int8_t x210 = -1;
	int64_t x212 = INT64_MIN;
	volatile uint64_t t48 = 7200LLU;

	t48 = ((x209&(x210&x211))/x212);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = 54;
	volatile uint64_t x214 = 371355968570016081LLU;
	uint64_t t49 = 0LLU;

	t49 = ((x213&(x214&x215))/x216);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x218 = INT64_MAX;
	int64_t x220 = 47LL;
	int64_t t50 = 1529122407LL;

	t50 = ((x217&(x218&x219))/x220);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x223 = INT64_MIN;

	t51 = ((x221&(x222&x223))/x224);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = INT64_MAX;
	int64_t x228 = -1LL;
	static int64_t t52 = 138594713861661002LL;

	t52 = ((x225&(x226&x227))/x228);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x229 = 1488224U;
	volatile uint32_t x230 = UINT32_MAX;
	int8_t x232 = INT8_MIN;
	static volatile uint32_t t53 = 143U;

	t53 = ((x229&(x230&x231))/x232);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x234 = -15019064LL;
	int64_t x235 = INT64_MAX;
	int32_t x236 = -861657509;
	int64_t t54 = -466563754714065626LL;

	t54 = ((x233&(x234&x235))/x236);

	if (t54 != -242072LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x239 = 45029203U;
	uint32_t x240 = 8385908U;
	static volatile uint32_t t55 = 12460U;

	t55 = ((x237&(x238&x239))/x240);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x241 = 232756;
	uint64_t x242 = UINT64_MAX;
	int16_t x243 = INT16_MIN;
	uint8_t x244 = 14U;
	volatile uint64_t t56 = 29165843LLU;

	t56 = ((x241&(x242&x243))/x244);

	if (t56 != 16384LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = INT32_MIN;
	uint16_t x246 = UINT16_MAX;
	static int8_t x247 = -1;
	uint32_t x248 = 238009920U;

	t57 = ((x245&(x246&x247))/x248);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = INT32_MIN;
	int32_t x250 = 11753546;
	int64_t x251 = -1LL;
	int8_t x252 = INT8_MIN;
	volatile int64_t t58 = -109766761754589213LL;

	t58 = ((x249&(x250&x251))/x252);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = 15855U;
	int64_t x254 = INT64_MAX;
	static int64_t x256 = INT64_MAX;
	static volatile int64_t t59 = 358995LL;

	t59 = ((x253&(x254&x255))/x256);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x258 = 1396U;
	int64_t x259 = 0LL;
	volatile int64_t t60 = 171453688906588LL;

	t60 = ((x257&(x258&x259))/x260);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x263 = 21U;
	volatile int8_t x264 = -50;

	t61 = ((x261&(x262&x263))/x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = INT16_MIN;
	static volatile uint32_t x266 = 3U;
	int32_t x267 = -1;
	uint16_t x268 = UINT16_MAX;
	uint32_t t62 = 250905927U;

	t62 = ((x265&(x266&x267))/x268);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MAX;
	volatile uint8_t x271 = UINT8_MAX;
	volatile uint16_t x272 = UINT16_MAX;
	volatile int64_t t63 = -1LL;

	t63 = ((x269&(x270&x271))/x272);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MAX;
	int8_t x274 = 1;
	volatile uint16_t x276 = 178U;

	t64 = ((x273&(x274&x275))/x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x277 = 2881713U;
	int32_t x278 = -1;
	static int32_t x280 = INT32_MAX;
	uint32_t t65 = 2011U;

	t65 = ((x277&(x278&x279))/x280);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x282 = -3291750;
	int8_t x283 = INT8_MAX;
	uint8_t x284 = UINT8_MAX;
	static volatile int32_t t66 = -6837849;

	t66 = ((x281&(x282&x283))/x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x286 = 24848073U;
	static int32_t x287 = INT32_MIN;
	static uint32_t x288 = 54162U;
	volatile uint32_t t67 = 312U;

	t67 = ((x285&(x286&x287))/x288);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MIN;
	static int8_t x292 = INT8_MAX;
	volatile int64_t t68 = 1501937814325206804LL;

	t68 = ((x289&(x290&x291))/x292);

	if (t68 != 412198495175LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x293 = 205U;
	volatile uint64_t x294 = 6LLU;
	int32_t x295 = -198;
	int8_t x296 = 3;

	t69 = ((x293&(x294&x295))/x296);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x298 = INT64_MAX;
	uint32_t x299 = 90587U;
	static uint16_t x300 = 158U;
	int64_t t70 = 56476LL;

	t70 = ((x297&(x298&x299))/x300);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x302 = INT64_MAX;
	volatile uint16_t x304 = UINT16_MAX;
	volatile int64_t t71 = -483869226227632193LL;

	t71 = ((x301&(x302&x303))/x304);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x305 = UINT32_MAX;
	int32_t x306 = -1;
	int8_t x307 = INT8_MAX;
	volatile int32_t x308 = INT32_MIN;

	t72 = ((x305&(x306&x307))/x308);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x309 = INT16_MIN;
	int64_t x311 = INT64_MAX;
	int16_t x312 = INT16_MIN;

	t73 = ((x309&(x310&x311))/x312);

	if (t73 != -281474976645120LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x314 = UINT16_MAX;
	int64_t x316 = 3666350679LL;
	volatile int64_t t74 = 8623733528289LL;

	t74 = ((x313&(x314&x315))/x316);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = 1;
	uint16_t x318 = UINT16_MAX;
	int32_t x319 = -183710;
	volatile uint32_t x320 = UINT32_MAX;
	uint32_t t75 = 4956434U;

	t75 = ((x317&(x318&x319))/x320);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x321 = 2223U;
	volatile int64_t x322 = -66226798058708765LL;
	uint16_t x323 = 1U;

	t76 = ((x321&(x322&x323))/x324);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x325 = 2353890U;
	int64_t x326 = 5445253285835525LL;
	static int64_t x327 = -1LL;
	uint64_t x328 = 2264906404399LLU;
	static uint64_t t77 = 2804309956325284LLU;

	t77 = ((x325&(x326&x327))/x328);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x329 = 73U;
	int16_t x330 = -220;
	int8_t x331 = INT8_MIN;
	volatile uint16_t x332 = 79U;
	static volatile int32_t t78 = -112167232;

	t78 = ((x329&(x330&x331))/x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = -1LL;
	volatile uint8_t x335 = UINT8_MAX;
	int32_t x336 = -1;
	int64_t t79 = 207718018779898LL;

	t79 = ((x333&(x334&x335))/x336);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x337 = INT64_MAX;
	int32_t x338 = -12;
	static volatile uint64_t x339 = 158625162763394LLU;
	int16_t x340 = INT16_MIN;
	uint64_t t80 = 7878LLU;

	t80 = ((x337&(x338&x339))/x340);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = -4LL;
	int8_t x342 = -55;

	t81 = ((x341&(x342&x343))/x344);

	if (t81 != 4315LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 5937713U;
	int16_t x346 = INT16_MAX;
	static uint64_t x347 = UINT64_MAX;
	int64_t x348 = -3749426459LL;
	static uint64_t t82 = 18888983LLU;

	t82 = ((x345&(x346&x347))/x348);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x349 = 8079421597554419LLU;
	int8_t x350 = INT8_MAX;
	int8_t x351 = INT8_MAX;
	int16_t x352 = INT16_MIN;
	uint64_t t83 = 1628418360LLU;

	t83 = ((x349&(x350&x351))/x352);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x353 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	uint64_t t84 = 18559019752802LLU;

	t84 = ((x353&(x354&x355))/x356);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = 7U;
	int16_t x358 = INT16_MIN;

	t85 = ((x357&(x358&x359))/x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = 31;
	volatile uint16_t x362 = UINT16_MAX;
	int64_t x363 = -296241LL;
	int8_t x364 = -1;
	volatile int64_t t86 = -1896196967482670433LL;

	t86 = ((x361&(x362&x363))/x364);

	if (t86 != -15LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x365 = 56U;
	static int8_t x366 = INT8_MIN;
	static int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MIN;

	t87 = ((x365&(x366&x367))/x368);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x369 = -1;
	volatile uint32_t x370 = 571U;
	volatile int8_t x371 = INT8_MIN;
	int8_t x372 = -1;
	volatile uint32_t t88 = 78U;

	t88 = ((x369&(x370&x371))/x372);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = -24832249;
	int32_t x374 = INT32_MIN;
	static int8_t x375 = 2;
	static int32_t t89 = -92789;

	t89 = ((x373&(x374&x375))/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = 6U;
	static uint16_t x378 = 992U;
	static uint32_t x379 = UINT32_MAX;
	uint64_t t90 = 47494LLU;

	t90 = ((x377&(x378&x379))/x380);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x381 = 49U;
	static uint16_t x383 = 617U;
	uint8_t x384 = 83U;

	t91 = ((x381&(x382&x383))/x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = -1LL;
	volatile int16_t x386 = INT16_MIN;
	int8_t x387 = 1;
	uint8_t x388 = 28U;
	volatile int64_t t92 = 31883959LL;

	t92 = ((x385&(x386&x387))/x388);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x389 = 15540U;
	volatile int8_t x390 = INT8_MAX;
	int8_t x391 = INT8_MAX;
	volatile int64_t t93 = -15LL;

	t93 = ((x389&(x390&x391))/x392);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x393 = 12337U;
	int16_t x394 = INT16_MAX;
	volatile int16_t x395 = INT16_MIN;
	int32_t x396 = -1;
	volatile uint32_t t94 = 1U;

	t94 = ((x393&(x394&x395))/x396);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x397 = UINT8_MAX;
	int64_t x398 = INT64_MIN;
	int64_t x400 = INT64_MAX;
	volatile int64_t t95 = 44174LL;

	t95 = ((x397&(x398&x399))/x400);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	uint16_t x402 = UINT16_MAX;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t96 = 170LLU;

	t96 = ((x401&(x402&x403))/x404);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x406 = -1;
	volatile int64_t x407 = INT64_MIN;
	int32_t x408 = INT32_MIN;
	int64_t t97 = -100271322086986331LL;

	t97 = ((x405&(x406&x407))/x408);

	if (t97 != 4294967296LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x409 = -1;
	static int64_t x410 = -1LL;
	volatile int16_t x411 = -5490;
	static uint32_t x412 = 2266U;
	volatile int64_t t98 = 37LL;

	t98 = ((x409&(x410&x411))/x412);

	if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = INT64_MAX;
	int16_t x414 = INT16_MAX;
	int64_t x416 = -383401276641366287LL;
	volatile int64_t t99 = -114924663858536LL;

	t99 = ((x413&(x414&x415))/x416);

	if (t99 != 0LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -1;
int32_t t0 = -84435;
static uint64_t x7 = 3307044183678LLU;
int8_t x8 = 5;
uint16_t x10 = 2U;
uint16_t x12 = 2U;
volatile int32_t t2 = 103;
uint32_t x15 = UINT32_MAX;
int64_t x17 = -1LL;
int32_t x28 = -20675223;
int8_t x47 = INT8_MIN;
static uint16_t x53 = 93U;
int32_t x56 = INT32_MIN;
volatile int64_t t16 = -97009510202728LL;
int64_t x75 = INT64_MIN;
volatile int32_t t18 = 50;
int32_t x81 = INT32_MIN;
int64_t t19 = 4157078406LL;
int16_t x88 = -10;
int32_t t20 = -217493501;
int16_t x92 = INT16_MAX;
int16_t x97 = INT16_MAX;
int64_t x98 = 478892331360593LL;
int16_t x104 = 2761;
uint32_t x120 = 24U;
int8_t x121 = INT8_MIN;
int16_t x122 = INT16_MIN;
volatile int64_t t29 = -20086511LL;
uint16_t x127 = 4027U;
int8_t x129 = -1;
static volatile int8_t x135 = 4;
int8_t x143 = INT8_MIN;
static int8_t x146 = -1;
static int64_t x159 = 0LL;
uint64_t t38 = 7662016529427409LLU;
volatile int16_t x168 = INT16_MIN;
int32_t x171 = -1;
int32_t x173 = INT32_MIN;
static int16_t x181 = -1545;
uint64_t x185 = 139LLU;
int32_t x191 = INT32_MAX;
volatile uint64_t t47 = 5LLU;
static volatile int8_t x204 = -1;
static uint64_t x210 = UINT64_MAX;
volatile int32_t t51 = -38888;
int64_t x214 = -105865382877552355LL;
int16_t x227 = 0;
int8_t x239 = -1;
static int8_t x248 = -1;
static volatile int32_t t59 = 16900230;
static volatile uint32_t x253 = 1567718047U;
uint32_t x263 = UINT32_MAX;
int64_t x268 = -31373441744769LL;
uint8_t x273 = 20U;
int16_t x276 = INT16_MIN;
static volatile int32_t t66 = -1;
volatile int8_t x278 = 6;
int16_t x280 = INT16_MIN;
static int8_t x281 = INT8_MIN;
static int32_t x289 = -1;
uint32_t x291 = 4U;
volatile uint8_t x299 = 0U;
volatile int8_t x300 = -1;
static int64_t t71 = -797693608LL;
int16_t x305 = INT16_MAX;
static int32_t x307 = 127845802;
int16_t x308 = INT16_MAX;
int64_t x310 = INT64_MAX;
int32_t t73 = 50513115;
volatile uint32_t x313 = UINT32_MAX;
int16_t x315 = INT16_MAX;
int64_t x316 = -1LL;
int32_t x317 = INT32_MIN;
uint32_t x321 = 52U;
static uint16_t x324 = 6117U;
volatile int64_t x327 = 132382046019926LL;
int64_t t77 = 6187040477LL;
static int32_t t78 = 0;
uint32_t x336 = 7537335U;
volatile uint32_t t79 = 40650U;
volatile uint32_t x343 = UINT32_MAX;
int16_t x348 = -7472;
static volatile int32_t t82 = -333735;
volatile int32_t t83 = 229;
static uint8_t x361 = 4U;
int64_t x370 = INT64_MIN;
int64_t x372 = -1134495LL;
uint16_t x374 = 11U;
static int8_t x378 = INT8_MIN;
static int64_t t91 = 3046LL;
volatile int16_t x385 = 0;
int8_t x389 = INT8_MIN;
int32_t t93 = 7513;
int16_t x395 = INT16_MAX;
int8_t x400 = INT8_MIN;
static int64_t x402 = INT64_MIN;
volatile int8_t x405 = -1;
int32_t x409 = INT32_MIN;
uint16_t x410 = 1350U;
uint32_t x411 = 1U;
int64_t t98 = 1672717022LL;
static uint64_t x414 = UINT64_MAX;


void f0(void) {
	static int8_t x1 = 3;
	uint64_t x2 = 997625145059LLU;
	volatile uint8_t x4 = 22U;

	t0 = (((x1%x2)==x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = -102422236363LL;
	uint16_t x6 = UINT16_MAX;
	volatile int32_t t1 = 104;

	t1 = (((x5%x6)==x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 68U;
	uint64_t x11 = 14497278103844400LLU;

	t2 = (((x9%x10)==x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static int16_t x14 = INT16_MIN;
	volatile int64_t x16 = -1LL;
	volatile int64_t t3 = 1LL;

	t3 = (((x13%x14)==x15)&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -142196304;
	volatile uint32_t x19 = 16489473U;
	uint64_t x20 = 1010889170190707LLU;
	volatile uint64_t t4 = 47935LLU;

	t4 = (((x17%x18)==x19)&x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = INT8_MAX;
	int16_t x22 = 7;
	uint32_t x23 = 12U;
	int8_t x24 = 13;
	int32_t t5 = 1;

	t5 = (((x21%x22)==x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -388;
	int32_t x26 = INT32_MIN;
	int32_t x27 = INT32_MIN;
	static int32_t t6 = -276;

	t6 = (((x25%x26)==x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	uint32_t x30 = UINT32_MAX;
	int16_t x31 = INT16_MIN;
	int64_t x32 = INT64_MIN;
	int64_t t7 = 8LL;

	t7 = (((x29%x30)==x31)&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	static uint16_t x34 = UINT16_MAX;
	static int32_t x35 = INT32_MIN;
	volatile int64_t x36 = INT64_MAX;
	static volatile int64_t t8 = 2071267698LL;

	t8 = (((x33%x34)==x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -352550211055336088LL;
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = INT16_MAX;
	int8_t x40 = 10;
	int32_t t9 = -2863;

	t9 = (((x37%x38)==x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	volatile uint32_t x42 = 2795U;
	uint64_t x43 = UINT64_MAX;
	static int8_t x44 = INT8_MIN;
	int32_t t10 = -27;

	t10 = (((x41%x42)==x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	volatile int64_t x46 = INT64_MIN;
	static uint16_t x48 = 0U;
	volatile int32_t t11 = -187735250;

	t11 = (((x45%x46)==x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 60U;
	uint8_t x50 = UINT8_MAX;
	int32_t x51 = -7076;
	static uint8_t x52 = 1U;
	volatile int32_t t12 = -44944;

	t12 = (((x49%x50)==x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 4944159LLU;
	uint32_t x55 = 2U;
	int32_t t13 = 13;

	t13 = (((x53%x54)==x55)&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = -1;
	static uint8_t x62 = 96U;
	volatile int8_t x63 = -1;
	int64_t x64 = INT64_MIN;
	volatile int64_t t14 = -10794621LL;

	t14 = (((x61%x62)==x63)&x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MAX;
	static uint16_t x66 = 696U;
	int64_t x67 = -1LL;
	int64_t x68 = -1LL;
	static int64_t t15 = -118677448579753LL;

	t15 = (((x65%x66)==x67)&x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = 7400486492LLU;
	uint32_t x70 = 631056376U;
	uint8_t x71 = UINT8_MAX;
	int64_t x72 = INT64_MIN;

	t16 = (((x69%x70)==x71)&x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 615LL;
	uint64_t x74 = 300LLU;
	volatile uint32_t x76 = 0U;
	volatile uint32_t t17 = 654U;

	t17 = (((x73%x74)==x75)&x76);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x77 = UINT32_MAX;
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = INT64_MIN;
	uint16_t x80 = 108U;

	t18 = (((x77%x78)==x79)&x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x82 = 28081323LLU;
	int32_t x83 = INT32_MAX;
	static int64_t x84 = 425783LL;

	t19 = (((x81%x82)==x83)&x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -16160;
	static int64_t x86 = -11843531096381LL;
	int64_t x87 = INT64_MIN;

	t20 = (((x85%x86)==x87)&x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x89 = 28789;
	int32_t x90 = INT32_MIN;
	volatile int8_t x91 = INT8_MIN;
	int32_t t21 = 4296;

	t21 = (((x89%x90)==x91)&x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -1LL;
	volatile int16_t x94 = -1;
	int16_t x95 = INT16_MIN;
	volatile int64_t x96 = -1LL;
	volatile int64_t t22 = 2060LL;

	t22 = (((x93%x94)==x95)&x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x99 = 1LLU;
	int64_t x100 = INT64_MIN;
	int64_t t23 = -256231LL;

	t23 = (((x97%x98)==x99)&x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = 977;
	static int32_t x102 = 142323;
	int32_t x103 = INT32_MIN;
	volatile int32_t t24 = 1841;

	t24 = (((x101%x102)==x103)&x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 37LLU;
	int64_t x106 = INT64_MIN;
	static uint8_t x107 = 122U;
	int16_t x108 = INT16_MAX;
	volatile int32_t t25 = -14953607;

	t25 = (((x105%x106)==x107)&x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x109 = 29U;
	volatile uint64_t x110 = UINT64_MAX;
	int64_t x111 = -1LL;
	int16_t x112 = 0;
	int32_t t26 = 9;

	t26 = (((x109%x110)==x111)&x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x113 = UINT8_MAX;
	volatile uint32_t x114 = UINT32_MAX;
	int64_t x115 = 115LL;
	volatile int16_t x116 = INT16_MAX;
	int32_t t27 = 1;

	t27 = (((x113%x114)==x115)&x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = 0;
	int16_t x118 = INT16_MAX;
	int16_t x119 = 0;
	volatile uint32_t t28 = 1U;

	t28 = (((x117%x118)==x119)&x120);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x123 = INT16_MIN;
	static int64_t x124 = 88LL;

	t29 = (((x121%x122)==x123)&x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x125 = INT8_MIN;
	int32_t x126 = 10010;
	volatile int32_t x128 = INT32_MIN;
	volatile int32_t t30 = -258212;

	t30 = (((x125%x126)==x127)&x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x130 = -5194;
	int8_t x131 = -1;
	int16_t x132 = INT16_MIN;
	int32_t t31 = -16533;

	t31 = (((x129%x130)==x131)&x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = INT8_MIN;
	static int8_t x134 = -1;
	uint32_t x136 = UINT32_MAX;
	uint32_t t32 = 1645U;

	t32 = (((x133%x134)==x135)&x136);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 19081884102LLU;
	static int16_t x138 = 5187;
	uint8_t x139 = 13U;
	int32_t x140 = 0;
	int32_t t33 = 28547533;

	t33 = (((x137%x138)==x139)&x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	volatile int8_t x142 = INT8_MIN;
	int32_t x144 = INT32_MAX;
	int32_t t34 = 787807;

	t34 = (((x141%x142)==x143)&x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	volatile uint8_t x147 = 22U;
	uint64_t x148 = 45229178417LLU;
	static volatile uint64_t t35 = 27LLU;

	t35 = (((x145%x146)==x147)&x148);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MAX;
	static uint32_t x150 = UINT32_MAX;
	volatile int32_t x151 = -41501763;
	int16_t x152 = INT16_MAX;
	static volatile int32_t t36 = 126789;

	t36 = (((x149%x150)==x151)&x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MIN;
	uint8_t x154 = 113U;
	int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MIN;
	volatile int64_t t37 = 341375071481144681LL;

	t37 = (((x153%x154)==x155)&x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x157 = 3704449U;
	uint8_t x158 = 2U;
	uint64_t x160 = 3LLU;

	t38 = (((x157%x158)==x159)&x160);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MAX;
	int16_t x162 = INT16_MIN;
	int64_t x163 = INT64_MIN;
	static volatile int16_t x164 = INT16_MIN;
	volatile int32_t t39 = 1238;

	t39 = (((x161%x162)==x163)&x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x165 = -17;
	uint32_t x166 = UINT32_MAX;
	uint16_t x167 = 349U;
	int32_t t40 = 1126;

	t40 = (((x165%x166)==x167)&x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MIN;
	int32_t x170 = INT32_MIN;
	int16_t x172 = -5;
	int32_t t41 = -832649;

	t41 = (((x169%x170)==x171)&x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x174 = INT16_MIN;
	int64_t x175 = INT64_MIN;
	uint8_t x176 = UINT8_MAX;
	int32_t t42 = 75912653;

	t42 = (((x173%x174)==x175)&x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = -1;
	volatile int64_t x178 = INT64_MAX;
	int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	int32_t t43 = -650;

	t43 = (((x177%x178)==x179)&x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x182 = 3196U;
	int8_t x183 = 2;
	int32_t x184 = 59;
	volatile int32_t t44 = 268;

	t44 = (((x181%x182)==x183)&x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x186 = -1;
	int8_t x187 = 14;
	static int32_t x188 = -1;
	int32_t t45 = -2640;

	t45 = (((x185%x186)==x187)&x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = UINT16_MAX;
	int64_t x190 = INT64_MIN;
	static uint16_t x192 = 31U;
	static int32_t t46 = -622514;

	t46 = (((x189%x190)==x191)&x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x193 = 1;
	static int32_t x194 = INT32_MIN;
	uint8_t x195 = 14U;
	uint64_t x196 = 295662410LLU;

	t47 = (((x193%x194)==x195)&x196);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = INT16_MIN;
	uint64_t x198 = 12166LLU;
	int8_t x199 = INT8_MIN;
	int8_t x200 = -1;
	volatile int32_t t48 = 694;

	t48 = (((x197%x198)==x199)&x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x201 = INT64_MIN;
	static int64_t x202 = 1LL;
	int64_t x203 = -3655942111067004LL;
	int32_t t49 = -1;

	t49 = (((x201%x202)==x203)&x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x205 = -6;
	volatile uint16_t x206 = 14813U;
	int8_t x207 = 0;
	int32_t x208 = INT32_MIN;
	int32_t t50 = 424016;

	t50 = (((x205%x206)==x207)&x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x209 = INT32_MIN;
	int16_t x211 = -14;
	volatile int32_t x212 = INT32_MIN;

	t51 = (((x209%x210)==x211)&x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -745759;
	uint32_t x215 = 128U;
	volatile uint8_t x216 = UINT8_MAX;
	static volatile int32_t t52 = 1;

	t52 = (((x213%x214)==x215)&x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x217 = -20LL;
	int32_t x218 = 32;
	int16_t x219 = INT16_MIN;
	volatile int16_t x220 = INT16_MAX;
	volatile int32_t t53 = 312834;

	t53 = (((x217%x218)==x219)&x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x221 = INT16_MAX;
	uint64_t x222 = 1114850112619LLU;
	volatile uint64_t x223 = 426616LLU;
	volatile int8_t x224 = INT8_MIN;
	int32_t t54 = -3;

	t54 = (((x221%x222)==x223)&x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x225 = -1LL;
	static volatile uint16_t x226 = 143U;
	int8_t x228 = -30;
	volatile int32_t t55 = -626884;

	t55 = (((x225%x226)==x227)&x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x229 = -1151423497435LL;
	int16_t x230 = 1;
	static uint32_t x231 = 99U;
	static volatile uint16_t x232 = 2U;
	int32_t t56 = -25501970;

	t56 = (((x229%x230)==x231)&x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MIN;
	static uint16_t x234 = UINT16_MAX;
	int64_t x235 = -166784269897LL;
	uint16_t x236 = 2027U;
	volatile int32_t t57 = 40061;

	t57 = (((x233%x234)==x235)&x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x237 = 1730U;
	uint16_t x238 = UINT16_MAX;
	volatile uint16_t x240 = 799U;
	volatile int32_t t58 = -3433;

	t58 = (((x237%x238)==x239)&x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = UINT16_MAX;
	int32_t x246 = INT32_MAX;
	static int16_t x247 = INT16_MAX;

	t59 = (((x245%x246)==x247)&x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = 0;
	static volatile uint16_t x250 = 113U;
	int32_t x251 = INT32_MIN;
	static uint32_t x252 = 857336651U;
	static uint32_t t60 = 5405918U;

	t60 = (((x249%x250)==x251)&x252);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x254 = INT16_MIN;
	int32_t x255 = 342528321;
	uint16_t x256 = UINT16_MAX;
	int32_t t61 = -1468;

	t61 = (((x253%x254)==x255)&x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x257 = -1752;
	int32_t x258 = -1;
	static uint16_t x259 = UINT16_MAX;
	uint64_t x260 = 224982986188LLU;
	volatile uint64_t t62 = 4958170LLU;

	t62 = (((x257%x258)==x259)&x260);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = UINT8_MAX;
	volatile int16_t x262 = INT16_MIN;
	volatile int16_t x264 = -1;
	volatile int32_t t63 = 6;

	t63 = (((x261%x262)==x263)&x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x265 = 25U;
	int16_t x266 = INT16_MIN;
	volatile int8_t x267 = INT8_MIN;
	int64_t t64 = -2800461LL;

	t64 = (((x265%x266)==x267)&x268);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = 1U;
	uint16_t x270 = 1968U;
	uint16_t x271 = 353U;
	uint64_t x272 = 1031400307815696LLU;
	static uint64_t t65 = 25669LLU;

	t65 = (((x269%x270)==x271)&x272);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x274 = INT16_MIN;
	int8_t x275 = -1;

	t66 = (((x273%x274)==x275)&x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = INT32_MIN;
	int8_t x279 = INT8_MAX;
	int32_t t67 = -154721;

	t67 = (((x277%x278)==x279)&x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x282 = 290185677U;
	static int32_t x283 = -627;
	uint8_t x284 = 10U;
	volatile int32_t t68 = -13;

	t68 = (((x281%x282)==x283)&x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x290 = INT8_MIN;
	static int64_t x292 = INT64_MAX;
	int64_t t69 = -207986875LL;

	t69 = (((x289%x290)==x291)&x292);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x297 = UINT32_MAX;
	int32_t x298 = INT32_MIN;
	int32_t t70 = -60744;

	t70 = (((x297%x298)==x299)&x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x301 = INT8_MIN;
	int32_t x302 = INT32_MAX;
	volatile uint32_t x303 = 59818U;
	volatile int64_t x304 = -44008LL;

	t71 = (((x301%x302)==x303)&x304);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x306 = -1;
	static volatile int32_t t72 = 785165681;

	t72 = (((x305%x306)==x307)&x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = INT64_MIN;
	int64_t x311 = 4104507492LL;
	static uint8_t x312 = 0U;

	t73 = (((x309%x310)==x311)&x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x314 = -4492515LL;
	int64_t t74 = 8695243858315LL;

	t74 = (((x313%x314)==x315)&x316);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x318 = INT64_MIN;
	int32_t x319 = -1;
	int32_t x320 = INT32_MAX;
	static volatile int32_t t75 = -361;

	t75 = (((x317%x318)==x319)&x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x322 = INT8_MIN;
	volatile int32_t x323 = INT32_MIN;
	static volatile int32_t t76 = -25994508;

	t76 = (((x321%x322)==x323)&x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = 464221004;
	int16_t x326 = INT16_MIN;
	volatile int64_t x328 = 26087722962498638LL;

	t77 = (((x325%x326)==x327)&x328);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = 6707011LL;
	static int32_t x330 = INT32_MIN;
	int16_t x331 = 105;
	int16_t x332 = -1;

	t78 = (((x329%x330)==x331)&x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x333 = 146680U;
	volatile int64_t x334 = INT64_MAX;
	int8_t x335 = -1;

	t79 = (((x333%x334)==x335)&x336);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x337 = INT16_MAX;
	int16_t x338 = 380;
	uint8_t x339 = 8U;
	int8_t x340 = -1;
	int32_t t80 = -110;

	t80 = (((x337%x338)==x339)&x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = 113U;
	int32_t x342 = -185;
	int16_t x344 = INT16_MIN;
	int32_t t81 = 1534;

	t81 = (((x341%x342)==x343)&x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x345 = INT16_MAX;
	static uint64_t x346 = 2223038LLU;
	volatile int16_t x347 = 1;

	t82 = (((x345%x346)==x347)&x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = -191620574980LL;
	static int64_t x350 = INT64_MAX;
	int64_t x351 = INT64_MIN;
	static uint16_t x352 = 0U;

	t83 = (((x349%x350)==x351)&x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x353 = 0U;
	static int16_t x354 = 465;
	int8_t x355 = -1;
	int8_t x356 = INT8_MIN;
	volatile int32_t t84 = 17770;

	t84 = (((x353%x354)==x355)&x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x357 = -1;
	int64_t x358 = INT64_MIN;
	uint16_t x359 = 38U;
	int32_t x360 = INT32_MIN;
	static int32_t t85 = -308;

	t85 = (((x357%x358)==x359)&x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x362 = INT8_MIN;
	volatile int16_t x363 = INT16_MIN;
	int64_t x364 = -1LL;
	volatile int64_t t86 = 12LL;

	t86 = (((x361%x362)==x363)&x364);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x365 = UINT64_MAX;
	int16_t x366 = INT16_MIN;
	static int32_t x367 = INT32_MIN;
	uint32_t x368 = 3482U;
	uint32_t t87 = 29126837U;

	t87 = (((x365%x366)==x367)&x368);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x369 = -1;
	static int8_t x371 = 12;
	volatile int64_t t88 = -82707LL;

	t88 = (((x369%x370)==x371)&x372);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = 100219700514904630LL;
	int64_t x375 = INT64_MAX;
	static uint8_t x376 = 20U;
	static int32_t t89 = 1788;

	t89 = (((x373%x374)==x375)&x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x377 = 2U;
	uint32_t x379 = 1U;
	static uint8_t x380 = 12U;
	int32_t t90 = -757750;

	t90 = (((x377%x378)==x379)&x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x381 = 5000636LLU;
	static uint8_t x382 = 4U;
	static int32_t x383 = -1;
	static int64_t x384 = -27LL;

	t91 = (((x381%x382)==x383)&x384);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x386 = -362157905382764LL;
	int64_t x387 = 20589071LL;
	uint64_t x388 = UINT64_MAX;
	uint64_t t92 = 37517LLU;

	t92 = (((x385%x386)==x387)&x388);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x390 = INT8_MIN;
	int64_t x391 = 1584039807311LL;
	int16_t x392 = 7;

	t93 = (((x389%x390)==x391)&x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = 0;
	int32_t x394 = 941;
	static uint64_t x396 = 619536898936899LLU;
	volatile uint64_t t94 = 134982563275619LLU;

	t94 = (((x393%x394)==x395)&x396);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = -890;
	volatile int16_t x398 = -1;
	int32_t x399 = INT32_MIN;
	volatile int32_t t95 = 215;

	t95 = (((x397%x398)==x399)&x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = INT32_MAX;
	int64_t x403 = 1481067269896LL;
	int8_t x404 = INT8_MAX;
	static volatile int32_t t96 = -15565;

	t96 = (((x401%x402)==x403)&x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x406 = INT64_MIN;
	int32_t x407 = 48282485;
	int32_t x408 = 125203613;
	int32_t t97 = 1;

	t97 = (((x405%x406)==x407)&x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x412 = -40455LL;

	t98 = (((x409%x410)==x411)&x412);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = INT64_MIN;
	uint16_t x415 = 1485U;
	int64_t x416 = INT64_MIN;
	volatile int64_t t99 = 2270946LL;

	t99 = (((x413%x414)==x415)&x416);

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


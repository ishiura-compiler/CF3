#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 5U;
volatile int32_t x7 = 2558144;
int16_t x10 = -1;
uint8_t x11 = UINT8_MAX;
volatile int32_t x12 = -1;
volatile int32_t t2 = -566;
int16_t x13 = -3;
int16_t x21 = 3154;
uint64_t x22 = UINT64_MAX;
uint8_t x24 = 14U;
uint64_t x26 = 2246495852423LLU;
int32_t x30 = INT32_MIN;
static uint8_t x41 = 0U;
volatile int32_t t10 = -12006975;
static volatile uint64_t x45 = 945LLU;
static int64_t x48 = 1259LL;
volatile int32_t t12 = 182;
uint64_t x62 = 139LLU;
uint16_t x67 = 617U;
int32_t x69 = INT32_MIN;
int16_t x70 = INT16_MIN;
volatile int64_t x75 = INT64_MIN;
int32_t t18 = -73265319;
static int64_t x78 = -1LL;
int64_t x90 = INT64_MIN;
volatile int32_t x93 = -1;
int8_t x96 = INT8_MAX;
int32_t x109 = 265258;
int32_t x113 = -12;
static uint8_t x131 = 4U;
int32_t t32 = 500011;
uint64_t x135 = 3059LLU;
int32_t x142 = 54686710;
volatile int32_t t35 = 17305;
static int8_t x148 = INT8_MIN;
int8_t x152 = INT8_MIN;
int16_t x153 = INT16_MAX;
static volatile uint16_t x154 = 653U;
volatile int32_t t39 = -5550748;
int64_t x162 = INT64_MIN;
int8_t x164 = INT8_MIN;
int64_t x167 = 1LL;
volatile uint8_t x168 = 47U;
int64_t x169 = 15260377LL;
static uint64_t x170 = 643588292LLU;
int8_t x171 = INT8_MIN;
volatile int64_t x172 = INT64_MIN;
int32_t t42 = 109736921;
static int8_t x174 = -1;
volatile int64_t x177 = -1LL;
static int8_t x187 = 1;
int8_t x188 = INT8_MIN;
uint8_t x190 = 48U;
static int8_t x196 = -1;
int16_t x200 = -188;
volatile int32_t t51 = -849293427;
int16_t x211 = 1126;
static volatile int32_t t52 = 164304;
volatile int64_t x216 = -1LL;
volatile int32_t t53 = 927737733;
static volatile int64_t x226 = -1LL;
static volatile int32_t t56 = 249;
volatile uint16_t x229 = 21551U;
volatile int32_t t57 = 121587;
volatile int64_t x242 = 99266440LL;
int64_t x250 = INT64_MIN;
int8_t x251 = -4;
int16_t x252 = INT16_MIN;
int32_t t62 = 886;
int16_t x262 = -51;
static volatile int32_t t66 = 62337;
volatile int64_t x270 = -15905842448LL;
int32_t x274 = -1;
volatile int32_t t70 = 2607;
int8_t x300 = 22;
int8_t x302 = -19;
volatile int8_t x303 = 1;
int64_t x308 = -7185LL;
volatile int8_t x309 = 0;
uint32_t x316 = 932U;
int32_t t79 = -1;
volatile int32_t t80 = 453;
int32_t x325 = 746971835;
volatile int32_t t81 = -4807732;
volatile uint8_t x329 = 1U;
int8_t x334 = -1;
int16_t x336 = INT16_MIN;
uint32_t x337 = 21362140U;
static uint32_t x338 = 124776440U;
int8_t x351 = INT8_MIN;
int32_t t87 = -518625526;
volatile uint16_t x355 = UINT16_MAX;
int8_t x362 = INT8_MIN;
volatile uint64_t x363 = 3LLU;
int32_t t91 = -2364206;
volatile uint16_t x385 = 550U;
int8_t x388 = INT8_MAX;
static int32_t t96 = -9089;
static int64_t x391 = INT64_MIN;
volatile int8_t x398 = 7;
int32_t x400 = 5;


void f0(void) {
	static int32_t x2 = -1;
	int32_t x3 = -1;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = -65010;

	t0 = ((x1&(x2<=x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int64_t x6 = INT64_MAX;
	uint64_t x8 = 5844428293628024529LLU;
	static int32_t t1 = 313840183;

	t1 = ((x5&(x6<=x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;

	t2 = ((x9&(x10<=x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 434769637877594878LLU;
	int16_t x15 = -191;
	volatile uint16_t x16 = UINT16_MAX;
	int32_t t3 = 658;

	t3 = ((x13&(x14<=x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int32_t x18 = 7848;
	volatile int32_t x19 = INT32_MAX;
	int8_t x20 = INT8_MIN;
	int32_t t4 = -2700881;

	t4 = ((x17&(x18<=x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x23 = 0U;
	volatile int32_t t5 = -1747;

	t5 = ((x21&(x22<=x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	int16_t x27 = -1;
	uint32_t x28 = 30U;
	int32_t t6 = -788040;

	t6 = ((x25&(x26<=x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x29 = 178191901997LLU;
	static uint16_t x31 = 993U;
	static int8_t x32 = -1;
	static volatile int32_t t7 = 0;

	t7 = ((x29&(x30<=x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x33 = 50243LLU;
	int64_t x34 = -1LL;
	static int8_t x35 = INT8_MIN;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = -58272808;

	t8 = ((x33&(x34<=x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -1;
	volatile int16_t x38 = INT16_MAX;
	int32_t x39 = -1;
	volatile int32_t x40 = INT32_MIN;
	int32_t t9 = 41845346;

	t9 = ((x37&(x38<=x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = UINT16_MAX;
	static int64_t x43 = 3083982608573967410LL;
	uint32_t x44 = 43U;

	t10 = ((x41&(x42<=x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 496899U;
	uint64_t x47 = UINT64_MAX;
	int32_t t11 = -1273;

	t11 = ((x45&(x46<=x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int64_t x50 = -75734899509649LL;
	int32_t x51 = 127;
	static int64_t x52 = -18188175861297283LL;

	t12 = ((x49&(x50<=x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = UINT32_MAX;
	static uint16_t x54 = 0U;
	volatile int16_t x55 = 207;
	uint64_t x56 = 43333873773745371LLU;
	volatile int32_t t13 = -25943;

	t13 = ((x53&(x54<=x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 239200U;
	static volatile int64_t x58 = INT64_MIN;
	int64_t x59 = -1LL;
	uint32_t x60 = 447U;
	int32_t t14 = -10455106;

	t14 = ((x57&(x58<=x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	static uint16_t x63 = UINT16_MAX;
	volatile int8_t x64 = -54;
	volatile int32_t t15 = 646;

	t15 = ((x61&(x62<=x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	static uint64_t x66 = UINT64_MAX;
	static int16_t x68 = INT16_MIN;
	int32_t t16 = 5217165;

	t16 = ((x65&(x66<=x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x71 = INT32_MAX;
	int8_t x72 = 3;
	volatile int32_t t17 = -1;

	t17 = ((x69&(x70<=x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 30;
	uint64_t x74 = UINT64_MAX;
	volatile int8_t x76 = 0;

	t18 = ((x73&(x74<=x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	static int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 2;

	t19 = ((x77&(x78<=x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	volatile int16_t x82 = -16220;
	static int16_t x83 = INT16_MAX;
	volatile uint16_t x84 = 745U;
	int32_t t20 = 446795163;

	t20 = ((x81&(x82<=x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MIN;
	int64_t x86 = INT64_MIN;
	static int64_t x87 = INT64_MIN;
	int8_t x88 = INT8_MAX;
	int32_t t21 = -193;

	t21 = ((x85&(x86<=x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 678992084LLU;
	int8_t x91 = 5;
	static int32_t x92 = INT32_MAX;
	int32_t t22 = 520587;

	t22 = ((x89&(x90<=x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x94 = -1LL;
	uint64_t x95 = 1409061064838LLU;
	volatile int32_t t23 = 0;

	t23 = ((x93&(x94<=x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	static uint64_t x98 = 2665989040LLU;
	uint64_t x99 = 2LLU;
	static volatile uint16_t x100 = 32687U;
	int32_t t24 = -372;

	t24 = ((x97&(x98<=x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 0U;
	int16_t x102 = 18;
	volatile uint32_t x103 = UINT32_MAX;
	uint8_t x104 = UINT8_MAX;
	int32_t t25 = 46833786;

	t25 = ((x101&(x102<=x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 20U;
	volatile int16_t x106 = INT16_MIN;
	uint64_t x107 = UINT64_MAX;
	uint32_t x108 = 1924433665U;
	int32_t t26 = -60;

	t26 = ((x105&(x106<=x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 1U;
	int64_t x111 = INT64_MIN;
	int16_t x112 = -1;
	int32_t t27 = 146;

	t27 = ((x109&(x110<=x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x114 = -11;
	static uint64_t x115 = UINT64_MAX;
	static volatile int32_t x116 = INT32_MAX;
	int32_t t28 = 27934;

	t28 = ((x113&(x114<=x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	volatile int8_t x118 = 0;
	static uint64_t x119 = 53866970455267395LLU;
	uint32_t x120 = 201771U;
	volatile int32_t t29 = -1490169;

	t29 = ((x117&(x118<=x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	uint64_t x122 = 20340LLU;
	int64_t x123 = INT64_MIN;
	volatile int64_t x124 = INT64_MIN;
	volatile int32_t t30 = 54;

	t30 = ((x121&(x122<=x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = -1;
	uint16_t x126 = 1191U;
	int64_t x127 = 45271549195701LL;
	static uint8_t x128 = 25U;
	int32_t t31 = -267644659;

	t31 = ((x125&(x126<=x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 1754;
	int32_t x130 = INT32_MAX;
	int32_t x132 = INT32_MIN;

	t32 = ((x129&(x130<=x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MIN;
	int64_t x134 = INT64_MAX;
	uint16_t x136 = 0U;
	int32_t t33 = -178016;

	t33 = ((x133&(x134<=x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MAX;
	static int64_t x139 = INT64_MIN;
	int16_t x140 = -1;
	volatile int32_t t34 = -40225082;

	t34 = ((x137&(x138<=x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x141 = INT64_MAX;
	int8_t x143 = -1;
	volatile uint16_t x144 = UINT16_MAX;

	t35 = ((x141&(x142<=x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	static volatile int16_t x146 = -1;
	int32_t x147 = INT32_MIN;
	int32_t t36 = -70;

	t36 = ((x145&(x146<=x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 103U;
	uint32_t x150 = UINT32_MAX;
	volatile int32_t x151 = INT32_MIN;
	volatile int32_t t37 = 1046156205;

	t37 = ((x149&(x150<=x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x155 = -1;
	static int32_t x156 = INT32_MIN;
	int32_t t38 = -207468;

	t38 = ((x153&(x154<=x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = -1LL;
	uint32_t x158 = UINT32_MAX;
	int8_t x159 = INT8_MIN;
	int64_t x160 = INT64_MIN;

	t39 = ((x157&(x158<=x159))<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -25;
	static uint64_t x163 = 894294960755LLU;
	static int32_t t40 = -1695;

	t40 = ((x161&(x162<=x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = UINT64_MAX;
	volatile int8_t x166 = -3;
	static volatile int32_t t41 = 11978;

	t41 = ((x165&(x166<=x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {


	t42 = ((x169&(x170<=x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x173 = 1U;
	static int16_t x175 = INT16_MAX;
	volatile int16_t x176 = -1;
	int32_t t43 = -37;

	t43 = ((x173&(x174<=x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = -1;
	uint16_t x179 = 4539U;
	int8_t x180 = -22;
	volatile int32_t t44 = 1698074;

	t44 = ((x177&(x178<=x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = -67;
	int8_t x182 = INT8_MIN;
	volatile uint32_t x183 = 51529144U;
	int64_t x184 = INT64_MAX;
	static int32_t t45 = -6748;

	t45 = ((x181&(x182<=x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -12;
	volatile uint64_t x186 = UINT64_MAX;
	volatile int32_t t46 = 757;

	t46 = ((x185&(x186<=x187))<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 886963U;
	volatile int8_t x191 = 57;
	static uint16_t x192 = 2898U;
	int32_t t47 = -8205;

	t47 = ((x189&(x190<=x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 8U;
	volatile int64_t x194 = 2LL;
	uint32_t x195 = 123583159U;
	int32_t t48 = 21226359;

	t48 = ((x193&(x194<=x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -7LL;
	volatile int32_t x198 = INT32_MAX;
	int32_t x199 = -1;
	volatile int32_t t49 = 2111508;

	t49 = ((x197&(x198<=x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = 110U;
	volatile int32_t x202 = INT32_MAX;
	int32_t x203 = 9587142;
	uint8_t x204 = UINT8_MAX;
	static volatile int32_t t50 = 227134;

	t50 = ((x201&(x202<=x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	static int64_t x206 = -1LL;
	static uint32_t x207 = 291145U;
	volatile int8_t x208 = 30;

	t51 = ((x205&(x206<=x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 0U;
	static volatile int16_t x210 = -1;
	uint16_t x212 = 470U;

	t52 = ((x209&(x210<=x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	uint64_t x214 = 4043291074384648LLU;
	uint32_t x215 = 19604585U;

	t53 = ((x213&(x214<=x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = 0LLU;
	int16_t x218 = INT16_MAX;
	uint64_t x219 = 8LLU;
	int16_t x220 = -1;
	volatile int32_t t54 = 3134;

	t54 = ((x217&(x218<=x219))<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 50;
	int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MIN;
	volatile int64_t x224 = INT64_MIN;
	int32_t t55 = 4600248;

	t55 = ((x221&(x222<=x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x225 = 0U;
	volatile int64_t x227 = INT64_MAX;
	static uint32_t x228 = 8200308U;

	t56 = ((x225&(x226<=x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x230 = -1;
	static int64_t x231 = -1LL;
	static uint64_t x232 = 83739023017491LLU;

	t57 = ((x229&(x230<=x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = -371;
	volatile int16_t x234 = -827;
	int32_t x235 = INT32_MIN;
	int8_t x236 = INT8_MAX;
	static int32_t t58 = 1;

	t58 = ((x233&(x234<=x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 5359U;
	uint16_t x238 = 5189U;
	int16_t x239 = -1003;
	int64_t x240 = -1LL;
	volatile int32_t t59 = -424957804;

	t59 = ((x237&(x238<=x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 521773037324259LLU;
	static int16_t x243 = INT16_MAX;
	uint8_t x244 = 3U;
	int32_t t60 = -485;

	t60 = ((x241&(x242<=x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -15;
	int32_t x246 = INT32_MAX;
	int32_t x247 = -1;
	volatile uint64_t x248 = 21LLU;
	int32_t t61 = 1243583;

	t61 = ((x245&(x246<=x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 2;

	t62 = ((x249&(x250<=x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 30101468;
	static int32_t x254 = 2088;
	static uint16_t x255 = UINT16_MAX;
	int64_t x256 = -18859156655LL;
	volatile int32_t t63 = 0;

	t63 = ((x253&(x254<=x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x257 = INT64_MAX;
	volatile uint16_t x258 = 27U;
	int32_t x259 = 10969236;
	uint32_t x260 = UINT32_MAX;
	volatile int32_t t64 = 468939;

	t64 = ((x257&(x258<=x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	volatile int64_t x263 = INT64_MIN;
	volatile int32_t x264 = INT32_MIN;
	static volatile int32_t t65 = -20011098;

	t65 = ((x261&(x262<=x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = 49;
	uint64_t x266 = 6785436202461LLU;
	int16_t x267 = INT16_MIN;
	volatile uint16_t x268 = UINT16_MAX;

	t66 = ((x265&(x266<=x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 14U;
	uint32_t x271 = 927U;
	uint16_t x272 = 0U;
	int32_t t67 = -26;

	t67 = ((x269&(x270<=x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 4U;
	static int8_t x275 = INT8_MAX;
	int64_t x276 = INT64_MAX;
	volatile int32_t t68 = -19972704;

	t68 = ((x273&(x274<=x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = INT16_MIN;
	uint64_t x278 = 40764774126463235LLU;
	volatile int32_t x279 = INT32_MAX;
	int32_t x280 = 353;
	int32_t t69 = -1454077;

	t69 = ((x277&(x278<=x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 41676LL;
	int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	static uint64_t x284 = UINT64_MAX;

	t70 = ((x281&(x282<=x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 41U;
	uint64_t x286 = 7615210814LLU;
	volatile int8_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t71 = 51819865;

	t71 = ((x285&(x286<=x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	int8_t x290 = -10;
	int8_t x291 = INT8_MAX;
	int8_t x292 = INT8_MAX;
	int32_t t72 = -224971;

	t72 = ((x289&(x290<=x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 1101810664373363LLU;
	int16_t x294 = INT16_MAX;
	uint32_t x295 = 62U;
	int32_t x296 = 1;
	volatile int32_t t73 = -30749;

	t73 = ((x293&(x294<=x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = 1647003413583415013LLU;
	volatile int32_t x298 = 1;
	int16_t x299 = INT16_MAX;
	int32_t t74 = 789745;

	t74 = ((x297&(x298<=x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	int8_t x304 = INT8_MAX;
	int32_t t75 = 1708164;

	t75 = ((x301&(x302<=x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = 0;
	uint16_t x306 = 13731U;
	int64_t x307 = -273568857282LL;
	int32_t t76 = 344;

	t76 = ((x305&(x306<=x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = INT32_MAX;
	static uint32_t x311 = 3U;
	int64_t x312 = 2LL;
	static int32_t t77 = 14426437;

	t77 = ((x309&(x310<=x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 17U;
	int16_t x314 = -980;
	int16_t x315 = 73;
	int32_t t78 = 245236;

	t78 = ((x313&(x314<=x315))<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 72U;
	static volatile int32_t x318 = -1;
	volatile int64_t x319 = INT64_MIN;
	uint32_t x320 = 755305U;

	t79 = ((x317&(x318<=x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = 1;
	uint32_t x322 = 999725U;
	static int32_t x323 = INT32_MIN;
	uint16_t x324 = UINT16_MAX;

	t80 = ((x321&(x322<=x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x326 = INT64_MAX;
	static int64_t x327 = INT64_MIN;
	uint16_t x328 = UINT16_MAX;

	t81 = ((x325&(x326<=x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MIN;
	volatile int16_t x331 = INT16_MIN;
	int32_t x332 = INT32_MAX;
	static volatile int32_t t82 = 2932012;

	t82 = ((x329&(x330<=x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = 0;
	int64_t x335 = INT64_MIN;
	volatile int32_t t83 = -9;

	t83 = ((x333&(x334<=x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x339 = 58665115380499329LLU;
	static int16_t x340 = INT16_MIN;
	int32_t t84 = -2;

	t84 = ((x337&(x338<=x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	int64_t x342 = -1LL;
	int64_t x343 = INT64_MAX;
	int64_t x344 = INT64_MIN;
	int32_t t85 = -13763910;

	t85 = ((x341&(x342<=x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 15U;
	volatile int16_t x346 = -5;
	volatile int64_t x347 = -1LL;
	static int64_t x348 = 111366590LL;
	int32_t t86 = -845377;

	t86 = ((x345&(x346<=x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = UINT64_MAX;
	volatile int32_t x350 = INT32_MIN;
	uint32_t x352 = UINT32_MAX;

	t87 = ((x349&(x350<=x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	static int64_t x354 = INT64_MIN;
	int16_t x356 = INT16_MIN;
	int32_t t88 = -113;

	t88 = ((x353&(x354<=x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = -1;
	int16_t x358 = -55;
	volatile int64_t x359 = INT64_MIN;
	volatile int16_t x360 = 334;
	static volatile int32_t t89 = 391013102;

	t89 = ((x357&(x358<=x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = 314;
	static uint64_t x364 = 481LLU;
	int32_t t90 = 44998530;

	t90 = ((x361&(x362<=x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 5U;
	static volatile int64_t x366 = 22LL;
	volatile int32_t x367 = INT32_MAX;
	int32_t x368 = INT32_MAX;

	t91 = ((x365&(x366<=x367))<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MAX;
	int32_t x370 = 55;
	static int16_t x371 = INT16_MIN;
	uint32_t x372 = 86808023U;
	volatile int32_t t92 = -11942055;

	t92 = ((x369&(x370<=x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 1010LLU;
	volatile int16_t x374 = INT16_MAX;
	static int8_t x375 = INT8_MIN;
	uint8_t x376 = 1U;
	static volatile int32_t t93 = -879;

	t93 = ((x373&(x374<=x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	static int16_t x378 = -7;
	int16_t x379 = INT16_MIN;
	static uint8_t x380 = 1U;
	static volatile int32_t t94 = 102409;

	t94 = ((x377&(x378<=x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x381 = -95;
	uint16_t x382 = 0U;
	int16_t x383 = INT16_MAX;
	int8_t x384 = INT8_MIN;
	int32_t t95 = -6783124;

	t95 = ((x381&(x382<=x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x386 = 0U;
	int32_t x387 = INT32_MIN;

	t96 = ((x385&(x386<=x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int64_t x390 = 260LL;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = -470;

	t97 = ((x389&(x390<=x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 4LLU;
	volatile int8_t x394 = -1;
	int8_t x395 = INT8_MAX;
	static uint64_t x396 = 130412231281644LLU;
	static volatile int32_t t98 = -3;

	t98 = ((x393&(x394<=x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x397 = -1;
	int8_t x399 = 1;
	static int32_t t99 = -1689186;

	t99 = ((x397&(x398<=x399))<x400);

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 90U;
int8_t x6 = -40;
int32_t x8 = INT32_MAX;
volatile int32_t t1 = -941710796;
uint8_t x10 = 70U;
static int32_t t2 = -112798605;
static volatile uint64_t x14 = 1598440289LLU;
volatile int8_t x21 = 58;
volatile int32_t t5 = -390363;
int16_t x31 = INT16_MIN;
volatile int32_t x32 = -3513181;
volatile int32_t t9 = -797;
int16_t x48 = 2;
int64_t x51 = 1LL;
int16_t x55 = INT16_MIN;
uint8_t x60 = 92U;
static volatile int32_t t14 = -1252307;
uint64_t x63 = 6264600202172LLU;
int64_t x64 = 1020456493703298LL;
int64_t x69 = INT64_MIN;
int32_t x74 = INT32_MIN;
int16_t x76 = INT16_MAX;
int64_t x83 = -1LL;
volatile int16_t x84 = INT16_MAX;
static int16_t x88 = -1;
int16_t x90 = INT16_MAX;
uint64_t x96 = 7236994438473LLU;
uint16_t x100 = UINT16_MAX;
int16_t x106 = -7;
volatile uint64_t x108 = 61075118247LLU;
int32_t t26 = -172;
int64_t x109 = -1LL;
volatile uint16_t x118 = 1806U;
int16_t x122 = 1019;
volatile int32_t t31 = 2209;
static uint32_t x129 = 3279U;
uint8_t x140 = 5U;
int32_t x143 = -1;
int8_t x147 = INT8_MIN;
volatile int8_t x148 = INT8_MIN;
static volatile int32_t t36 = -2731703;
static int32_t x149 = -2962488;
uint16_t x150 = 448U;
int64_t x153 = -1LL;
int64_t x154 = -1LL;
static uint16_t x157 = 13846U;
static int16_t x165 = -3725;
static int32_t t43 = 1898;
int32_t x183 = INT32_MAX;
int32_t t45 = -157138;
static int32_t x188 = 5162;
int16_t x194 = INT16_MIN;
volatile int32_t t48 = 1;
int8_t x198 = -1;
int16_t x203 = -286;
static int32_t x207 = INT32_MIN;
uint32_t x208 = UINT32_MAX;
uint16_t x209 = 1018U;
uint64_t x210 = 114018319LLU;
int16_t x214 = -1023;
volatile int32_t t53 = 20;
int64_t x218 = INT64_MIN;
volatile uint16_t x220 = 2297U;
volatile int32_t t54 = -51892;
uint32_t x221 = 1U;
int64_t x233 = INT64_MIN;
volatile int32_t t59 = -80281844;
int32_t t60 = -489;
int8_t x247 = -6;
int16_t x256 = -2;
static uint64_t x260 = UINT64_MAX;
int32_t t64 = -107;
uint8_t x263 = 1U;
int8_t x264 = 13;
volatile int32_t x265 = INT32_MIN;
int8_t x266 = -1;
int64_t x267 = -2512433277LL;
static uint16_t x274 = UINT16_MAX;
volatile int32_t t69 = 2380;
static volatile int8_t x281 = INT8_MAX;
int64_t x285 = -1LL;
int8_t x286 = 0;
int32_t t71 = 1;
uint8_t x289 = 3U;
static int16_t x290 = INT16_MIN;
int32_t x291 = INT32_MIN;
uint32_t x292 = 1U;
static uint32_t x296 = UINT32_MAX;
uint64_t x304 = 232230LLU;
volatile int64_t x319 = INT64_MAX;
int8_t x320 = INT8_MIN;
static int64_t x322 = INT64_MAX;
int8_t x327 = -13;
int64_t x342 = -1LL;
static int64_t x344 = INT64_MAX;
int16_t x352 = -1;
uint64_t x361 = 3LLU;
int32_t t90 = -61;
static int8_t x373 = -1;
static uint32_t x374 = UINT32_MAX;
uint8_t x376 = 9U;
int32_t t94 = -111;
uint64_t x387 = 205130044762902590LLU;
int64_t x388 = -1LL;
int32_t t96 = -491151745;
volatile int32_t t97 = -3977455;
int8_t x394 = INT8_MAX;
uint16_t x395 = 10U;
volatile int32_t t98 = 110;
volatile int64_t x397 = 226008856LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x3 = 0;
	int64_t x4 = 85847LL;
	int32_t t0 = -157034611;

	t0 = ((x1&(x2==x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static int16_t x7 = INT16_MIN;

	t1 = ((x5&(x6==x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -501439LL;
	uint32_t x11 = 7U;
	static volatile int64_t x12 = INT64_MAX;

	t2 = ((x9&(x10==x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 7;
	volatile uint64_t x15 = 0LLU;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 46250;

	t3 = ((x13&(x14==x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	static int64_t x18 = -1LL;
	volatile int32_t x19 = INT32_MIN;
	uint64_t x20 = 3249552501513349LLU;
	static volatile int32_t t4 = 126616;

	t4 = ((x17&(x18==x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -9;
	volatile int8_t x23 = INT8_MIN;
	int32_t x24 = INT32_MIN;

	t5 = ((x21&(x22==x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -3;
	int8_t x26 = INT8_MIN;
	int32_t x27 = INT32_MIN;
	int16_t x28 = -1;
	static volatile int32_t t6 = -26761;

	t6 = ((x25&(x26==x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	volatile uint16_t x30 = UINT16_MAX;
	int32_t t7 = -22420;

	t7 = ((x29&(x30==x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = 3;
	volatile int16_t x34 = INT16_MAX;
	int16_t x35 = INT16_MAX;
	int8_t x36 = -1;
	static int32_t t8 = -1454043;

	t8 = ((x33&(x34==x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	int16_t x38 = 6;
	int32_t x39 = -1;
	static int32_t x40 = INT32_MIN;

	t9 = ((x37&(x38==x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 6U;
	int64_t x42 = INT64_MIN;
	uint64_t x43 = 20876759033LLU;
	static int32_t x44 = -17;
	volatile int32_t t10 = -425845;

	t10 = ((x41&(x42==x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = UINT32_MAX;
	uint8_t x46 = UINT8_MAX;
	int8_t x47 = -1;
	int32_t t11 = -372079852;

	t11 = ((x45&(x46==x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 25U;
	static uint64_t x50 = 1269636424488103633LLU;
	static int32_t x52 = INT32_MAX;
	static volatile int32_t t12 = -1961759;

	t12 = ((x49&(x50==x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 6617200;
	volatile int16_t x54 = INT16_MIN;
	uint32_t x56 = 3218229U;
	volatile int32_t t13 = -1;

	t13 = ((x53&(x54==x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile int16_t x58 = 3;
	static int32_t x59 = 14;

	t14 = ((x57&(x58==x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MIN;
	static volatile int32_t t15 = 1727690;

	t15 = ((x61&(x62==x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x65 = 2U;
	int16_t x66 = INT16_MIN;
	volatile uint64_t x67 = UINT64_MAX;
	int16_t x68 = 12260;
	static int32_t t16 = 445;

	t16 = ((x65&(x66==x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MIN;
	static volatile int16_t x71 = 248;
	uint8_t x72 = 72U;
	int32_t t17 = -562;

	t17 = ((x69&(x70==x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	static volatile uint32_t x75 = 48157214U;
	int32_t t18 = -12;

	t18 = ((x73&(x74==x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	static int64_t x78 = INT64_MIN;
	int64_t x79 = -1LL;
	int16_t x80 = 1;
	int32_t t19 = -2764869;

	t19 = ((x77&(x78==x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -7;
	volatile uint16_t x82 = UINT16_MAX;
	volatile int32_t t20 = -18472901;

	t20 = ((x81&(x82==x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int8_t x86 = 31;
	static uint16_t x87 = 8U;
	volatile int32_t t21 = -3;

	t21 = ((x85&(x86==x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = 13;
	int32_t x91 = INT32_MAX;
	int32_t x92 = INT32_MIN;
	int32_t t22 = -823284;

	t22 = ((x89&(x90==x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static volatile int16_t x94 = -1;
	int64_t x95 = INT64_MAX;
	static volatile int32_t t23 = -121538;

	t23 = ((x93&(x94==x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = 2;
	uint8_t x98 = UINT8_MAX;
	int64_t x99 = INT64_MIN;
	int32_t t24 = 101339;

	t24 = ((x97&(x98==x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 5U;
	int8_t x102 = 4;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 59100;

	t25 = ((x101&(x102==x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -4481883052631839757LL;
	int8_t x107 = INT8_MIN;

	t26 = ((x105&(x106==x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = UINT8_MAX;
	static volatile int8_t x111 = INT8_MIN;
	int64_t x112 = INT64_MIN;
	volatile int32_t t27 = 213175;

	t27 = ((x109&(x110==x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	uint64_t x114 = 467295968231642366LLU;
	int32_t x115 = INT32_MIN;
	uint32_t x116 = UINT32_MAX;
	static volatile int32_t t28 = -727851198;

	t28 = ((x113&(x114==x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	uint32_t x119 = 938941429U;
	int32_t x120 = INT32_MAX;
	int32_t t29 = -47;

	t29 = ((x117&(x118==x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -6;
	uint32_t x123 = 17934048U;
	int64_t x124 = INT64_MAX;
	int32_t t30 = -24;

	t30 = ((x121&(x122==x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x125 = 3U;
	int32_t x126 = 0;
	uint16_t x127 = 22587U;
	int32_t x128 = 3346031;

	t31 = ((x125&(x126==x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = UINT16_MAX;
	int16_t x131 = -2;
	volatile uint64_t x132 = UINT64_MAX;
	static volatile int32_t t32 = 245;

	t32 = ((x129&(x130==x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 40307U;
	volatile uint16_t x134 = 8U;
	uint32_t x135 = 24U;
	static int16_t x136 = 3801;
	static int32_t t33 = 296103;

	t33 = ((x133&(x134==x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = INT64_MIN;
	uint64_t x138 = 84997336388LLU;
	static int8_t x139 = INT8_MIN;
	volatile int32_t t34 = 511;

	t34 = ((x137&(x138==x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int8_t x142 = -1;
	int64_t x144 = 59802LL;
	volatile int32_t t35 = 17368;

	t35 = ((x141&(x142==x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 7646U;
	uint8_t x146 = UINT8_MAX;

	t36 = ((x145&(x146==x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x151 = INT16_MIN;
	int8_t x152 = -1;
	volatile int32_t t37 = 445851;

	t37 = ((x149&(x150==x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x155 = 0U;
	uint16_t x156 = UINT16_MAX;
	int32_t t38 = -16;

	t38 = ((x153&(x154==x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x158 = INT32_MIN;
	volatile uint32_t x159 = UINT32_MAX;
	uint16_t x160 = 13414U;
	int32_t t39 = -123;

	t39 = ((x157&(x158==x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	volatile uint16_t x162 = 174U;
	int16_t x163 = INT16_MIN;
	int8_t x164 = INT8_MIN;
	int32_t t40 = -79;

	t40 = ((x161&(x162==x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = 55U;
	static volatile int8_t x167 = 1;
	volatile uint8_t x168 = UINT8_MAX;
	int32_t t41 = 13661;

	t41 = ((x165&(x166==x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 469681U;
	uint64_t x170 = 243270726623651LLU;
	int32_t x171 = INT32_MIN;
	static int64_t x172 = -1LL;
	volatile int32_t t42 = 48534273;

	t42 = ((x169&(x170==x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = INT8_MIN;
	uint64_t x175 = UINT64_MAX;
	uint64_t x176 = 1869036578224922LLU;

	t43 = ((x173&(x174==x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	int16_t x178 = -5;
	int16_t x179 = INT16_MAX;
	uint64_t x180 = 607752630987LLU;
	static int32_t t44 = 287830;

	t44 = ((x177&(x178==x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	static int64_t x182 = INT64_MAX;
	int8_t x184 = -1;

	t45 = ((x181&(x182==x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	static int32_t x186 = -83575182;
	volatile int32_t x187 = 20;
	volatile int32_t t46 = 1;

	t46 = ((x185&(x186==x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MIN;
	uint8_t x190 = UINT8_MAX;
	volatile int32_t x191 = -195;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t47 = -7;

	t47 = ((x189&(x190==x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 154256370974813LLU;
	int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MAX;

	t48 = ((x193&(x194==x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x197 = 34U;
	int32_t x199 = -1;
	int8_t x200 = 1;
	volatile int32_t t49 = 425;

	t49 = ((x197&(x198==x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MIN;
	volatile int64_t x202 = INT64_MIN;
	int8_t x204 = INT8_MAX;
	int32_t t50 = -458;

	t50 = ((x201&(x202==x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x205 = 28418U;
	int32_t x206 = -223378;
	volatile int32_t t51 = 28;

	t51 = ((x205&(x206==x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x211 = 0;
	uint64_t x212 = 4494747071307LLU;
	static int32_t t52 = 461855;

	t52 = ((x209&(x210==x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 116U;
	int8_t x215 = INT8_MAX;
	int8_t x216 = 8;

	t53 = ((x213&(x214==x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = -4;
	uint32_t x219 = 134351U;

	t54 = ((x217&(x218==x219))<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x222 = 109U;
	static uint16_t x223 = 4U;
	int64_t x224 = 29812LL;
	static volatile int32_t t55 = 15;

	t55 = ((x221&(x222==x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	int8_t x226 = INT8_MAX;
	int32_t x227 = INT32_MIN;
	uint64_t x228 = 5223038740LLU;
	static volatile int32_t t56 = 3447;

	t56 = ((x225&(x226==x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = INT16_MAX;
	int8_t x230 = INT8_MAX;
	int64_t x231 = INT64_MAX;
	volatile int64_t x232 = INT64_MAX;
	static int32_t t57 = 414195308;

	t57 = ((x229&(x230==x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = -1;
	static volatile uint16_t x235 = UINT16_MAX;
	static int8_t x236 = INT8_MIN;
	volatile int32_t t58 = 7;

	t58 = ((x233&(x234==x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 0U;
	int32_t x238 = INT32_MIN;
	volatile uint8_t x239 = 1U;
	int16_t x240 = -1;

	t59 = ((x237&(x238==x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	uint64_t x242 = UINT64_MAX;
	static int64_t x243 = INT64_MAX;
	static volatile uint32_t x244 = UINT32_MAX;

	t60 = ((x241&(x242==x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 410432633U;
	uint64_t x246 = 4546622197438601LLU;
	int8_t x248 = INT8_MAX;
	int32_t t61 = 172141064;

	t61 = ((x245&(x246==x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = 196U;
	uint64_t x250 = 12414623428613LLU;
	uint8_t x251 = 5U;
	int32_t x252 = -7740;
	volatile int32_t t62 = 3;

	t62 = ((x249&(x250==x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MAX;
	int8_t x254 = INT8_MAX;
	int8_t x255 = -1;
	int32_t t63 = 7209;

	t63 = ((x253&(x254==x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MIN;
	volatile uint32_t x258 = 2U;
	int64_t x259 = -1LL;

	t64 = ((x257&(x258==x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	volatile int32_t x262 = -48470;
	static int32_t t65 = 386329;

	t65 = ((x261&(x262==x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x268 = INT16_MAX;
	static int32_t t66 = -25519120;

	t66 = ((x265&(x266==x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 61502194LL;
	int32_t x270 = INT32_MIN;
	volatile uint16_t x271 = 3292U;
	int64_t x272 = INT64_MIN;
	volatile int32_t t67 = 1;

	t67 = ((x269&(x270==x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 185720144;
	int8_t x275 = -1;
	uint64_t x276 = 15445LLU;
	int32_t t68 = -10;

	t68 = ((x273&(x274==x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 50032907124941LLU;
	int64_t x278 = -60804292861212914LL;
	volatile int8_t x279 = -5;
	uint64_t x280 = UINT64_MAX;

	t69 = ((x277&(x278==x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x282 = INT16_MAX;
	int32_t x283 = INT32_MIN;
	static int16_t x284 = INT16_MAX;
	static volatile int32_t t70 = 3163792;

	t70 = ((x281&(x282==x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x287 = INT32_MAX;
	volatile uint64_t x288 = 43LLU;

	t71 = ((x285&(x286==x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t t72 = -42;

	t72 = ((x289&(x290==x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int16_t x294 = -5;
	int64_t x295 = INT64_MIN;
	static int32_t t73 = 6041;

	t73 = ((x293&(x294==x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 263U;
	uint8_t x298 = UINT8_MAX;
	uint64_t x299 = UINT64_MAX;
	static int32_t x300 = INT32_MIN;
	volatile int32_t t74 = 1097;

	t74 = ((x297&(x298==x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 34;
	int16_t x302 = 1;
	int16_t x303 = INT16_MIN;
	int32_t t75 = 64;

	t75 = ((x301&(x302==x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	int64_t x306 = INT64_MIN;
	int16_t x307 = 3960;
	static volatile int8_t x308 = INT8_MIN;
	int32_t t76 = 3;

	t76 = ((x305&(x306==x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	volatile uint64_t x310 = 134655469000LLU;
	static volatile int16_t x311 = -465;
	static uint32_t x312 = UINT32_MAX;
	volatile int32_t t77 = -36;

	t77 = ((x309&(x310==x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	static uint64_t x314 = 3235061124LLU;
	int64_t x315 = INT64_MAX;
	static int64_t x316 = INT64_MIN;
	int32_t t78 = 136133461;

	t78 = ((x313&(x314==x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MIN;
	int64_t x318 = -12964LL;
	int32_t t79 = -26030;

	t79 = ((x317&(x318==x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -1;
	uint32_t x323 = 1000641U;
	uint64_t x324 = 99192110416190LLU;
	int32_t t80 = 3721;

	t80 = ((x321&(x322==x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	int64_t x326 = INT64_MIN;
	static int16_t x328 = 0;
	static volatile int32_t t81 = -13;

	t81 = ((x325&(x326==x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MIN;
	int8_t x330 = 6;
	uint8_t x331 = 3U;
	static int32_t x332 = INT32_MAX;
	int32_t t82 = 193317128;

	t82 = ((x329&(x330==x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = UINT64_MAX;
	volatile int64_t x334 = -8620833224505664LL;
	static int16_t x335 = 0;
	uint16_t x336 = UINT16_MAX;
	volatile int32_t t83 = -744;

	t83 = ((x333&(x334==x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	volatile int8_t x338 = -1;
	uint8_t x339 = UINT8_MAX;
	int64_t x340 = 3801165710371938LL;
	int32_t t84 = 208;

	t84 = ((x337&(x338==x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	volatile int64_t x343 = INT64_MIN;
	volatile int32_t t85 = -568265;

	t85 = ((x341&(x342==x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = 2;
	volatile int64_t x347 = -33220074856LL;
	volatile int16_t x348 = INT16_MIN;
	volatile int32_t t86 = -50881;

	t86 = ((x345&(x346==x347))<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	static int8_t x350 = INT8_MIN;
	int16_t x351 = -1760;
	volatile int32_t t87 = -855357931;

	t87 = ((x349&(x350==x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 119U;
	static int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MIN;
	uint8_t x356 = 3U;
	int32_t t88 = -9;

	t88 = ((x353&(x354==x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x357 = 3034U;
	int16_t x358 = INT16_MIN;
	uint8_t x359 = UINT8_MAX;
	volatile int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 1;

	t89 = ((x357&(x358==x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x362 = -1;
	int32_t x363 = INT32_MAX;
	int16_t x364 = INT16_MIN;

	t90 = ((x361&(x362==x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	uint8_t x366 = 99U;
	uint16_t x367 = 1808U;
	int64_t x368 = INT64_MIN;
	volatile int32_t t91 = 23;

	t91 = ((x365&(x366==x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = -1;
	static uint16_t x370 = 17269U;
	int8_t x371 = 1;
	static volatile uint8_t x372 = UINT8_MAX;
	static int32_t t92 = -2834;

	t92 = ((x369&(x370==x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x375 = INT8_MIN;
	volatile int32_t t93 = -1;

	t93 = ((x373&(x374==x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = 6833LL;
	int8_t x378 = INT8_MIN;
	int32_t x379 = -1;
	int8_t x380 = INT8_MAX;

	t94 = ((x377&(x378==x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	static int16_t x382 = -1;
	uint32_t x383 = 1666U;
	int16_t x384 = INT16_MIN;
	static volatile int32_t t95 = 0;

	t95 = ((x381&(x382==x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 434616602241098608LLU;
	uint16_t x386 = UINT16_MAX;

	t96 = ((x385&(x386==x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -63;
	volatile uint8_t x390 = UINT8_MAX;
	int32_t x391 = INT32_MIN;
	static int16_t x392 = -1270;

	t97 = ((x389&(x390==x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = INT64_MIN;
	int16_t x396 = INT16_MAX;

	t98 = ((x393&(x394==x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = -2;
	int64_t x399 = -1LL;
	static int8_t x400 = -1;
	int32_t t99 = -18041;

	t99 = ((x397&(x398==x399))<x400);

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


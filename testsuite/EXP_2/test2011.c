#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -4;
static volatile int32_t t0 = 833267;
int32_t x7 = -357;
uint32_t x8 = UINT32_MAX;
static volatile int32_t x15 = 1479427;
volatile uint64_t x17 = 3421LLU;
volatile int64_t x19 = INT64_MIN;
int8_t x29 = INT8_MAX;
static uint64_t x40 = 27034612713LLU;
uint16_t x42 = 251U;
volatile uint32_t x44 = 229064U;
int8_t x45 = INT8_MAX;
uint16_t x50 = 1156U;
int32_t x54 = 3456026;
int16_t x60 = INT16_MIN;
volatile int32_t x61 = 2;
int32_t t15 = -177678336;
volatile int64_t x66 = INT64_MAX;
int32_t x71 = INT32_MIN;
volatile int64_t x77 = INT64_MAX;
static volatile int32_t t19 = -52191900;
int16_t x81 = INT16_MIN;
int32_t x87 = INT32_MIN;
static int16_t x91 = 1;
volatile int32_t t23 = 640;
volatile int32_t x104 = 45;
static volatile int64_t x106 = -127538LL;
int32_t t26 = 378724660;
int32_t x115 = INT32_MIN;
int64_t x118 = INT64_MAX;
uint32_t x119 = UINT32_MAX;
static int32_t t29 = -3;
int32_t t32 = -567008615;
static int16_t x133 = -32;
volatile int32_t t33 = -65857457;
uint8_t x140 = 8U;
int16_t x152 = INT16_MAX;
int16_t x154 = INT16_MIN;
int32_t t39 = 5958;
volatile int32_t x161 = -31;
static uint16_t x163 = UINT16_MAX;
int32_t t41 = 2070243;
int32_t x169 = -930;
int64_t x171 = INT64_MIN;
int64_t x174 = INT64_MIN;
int8_t x176 = 0;
static int16_t x186 = INT16_MIN;
int64_t x187 = -1LL;
int16_t x193 = -1;
int32_t x195 = -1;
int16_t x208 = -947;
static uint32_t x211 = UINT32_MAX;
int32_t t52 = 132305;
int32_t x214 = INT32_MIN;
volatile int32_t t54 = -4027567;
int16_t x224 = -211;
int64_t x232 = INT64_MAX;
volatile uint32_t x233 = UINT32_MAX;
int8_t x243 = -4;
static int64_t x245 = INT64_MIN;
uint64_t x248 = 12395922450040184LLU;
int32_t x250 = INT32_MAX;
int32_t x251 = -1;
static int32_t t62 = -46904;
static volatile int32_t t64 = -14;
volatile int32_t t67 = 568889218;
int64_t x287 = INT64_MIN;
int8_t x288 = INT8_MAX;
static int16_t x290 = -19;
int8_t x291 = INT8_MAX;
volatile int64_t x294 = -1LL;
static int64_t x299 = INT64_MIN;
volatile int32_t t76 = 352807903;
uint8_t x309 = 1U;
int64_t x313 = INT64_MIN;
int64_t x315 = -1956463415LL;
int32_t t78 = 65058;
int8_t x324 = INT8_MAX;
volatile int32_t t81 = -5;
uint64_t x332 = UINT64_MAX;
int64_t x340 = -1LL;
int32_t t84 = -7;
int64_t x343 = INT64_MIN;
static int64_t x346 = INT64_MIN;
static volatile int8_t x354 = INT8_MIN;
uint8_t x359 = UINT8_MAX;
volatile int32_t x360 = -1;
int8_t x361 = INT8_MAX;
uint16_t x362 = 5U;
volatile int16_t x364 = -1;
int32_t t92 = 44419637;
int8_t x374 = INT8_MIN;
int64_t x378 = 808407LL;
int32_t t95 = -103;
volatile int32_t t97 = -83285791;
static volatile int8_t x395 = -19;
uint16_t x399 = 191U;


void f0(void) {
	int16_t x1 = 10;
	int16_t x2 = -1;
	uint32_t x4 = UINT32_MAX;

	t0 = ((x1|(x2|x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 6;
	int64_t x6 = INT64_MIN;
	volatile int32_t t1 = 8283;

	t1 = ((x5|(x6|x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static int64_t x10 = -1LL;
	static int8_t x11 = INT8_MIN;
	uint64_t x12 = UINT64_MAX;
	static int32_t t2 = -1582388;

	t2 = ((x9|(x10|x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 2773LLU;
	int32_t x14 = INT32_MAX;
	static uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 975806613;

	t3 = ((x13|(x14|x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 251121;

	t4 = ((x17|(x18|x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 168LLU;
	volatile uint32_t x22 = UINT32_MAX;
	static int16_t x23 = -821;
	volatile int16_t x24 = 10699;
	volatile int32_t t5 = 171721109;

	t5 = ((x21|(x22|x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 70U;
	static int64_t x26 = INT64_MAX;
	static int8_t x27 = -1;
	int8_t x28 = -4;
	volatile int32_t t6 = 385278571;

	t6 = ((x25|(x26|x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = INT16_MIN;
	uint64_t x31 = 25445697LLU;
	int8_t x32 = INT8_MIN;
	int32_t t7 = 412601172;

	t7 = ((x29|(x30|x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	uint8_t x34 = 6U;
	int64_t x35 = -1LL;
	volatile int16_t x36 = -1;
	int32_t t8 = -987612822;

	t8 = ((x33|(x34|x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	static volatile uint64_t x38 = 1108LLU;
	int16_t x39 = INT16_MAX;
	volatile int32_t t9 = -943534759;

	t9 = ((x37|(x38|x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MAX;
	volatile int16_t x43 = 3;
	static int32_t t10 = -8330531;

	t10 = ((x41|(x42|x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -1LL;
	static int16_t x47 = 15654;
	volatile uint8_t x48 = UINT8_MAX;
	int32_t t11 = 144484277;

	t11 = ((x45|(x46|x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 392U;
	uint8_t x51 = UINT8_MAX;
	static int64_t x52 = -1LL;
	volatile int32_t t12 = -1229;

	t12 = ((x49|(x50|x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	static volatile uint32_t x55 = 18U;
	int32_t x56 = 7311;
	volatile int32_t t13 = 1;

	t13 = ((x53|(x54|x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -53109;
	uint32_t x58 = 3297U;
	static uint16_t x59 = 1U;
	int32_t t14 = -41;

	t14 = ((x57|(x58|x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x62 = -15;
	int16_t x63 = 4;
	int16_t x64 = -1;

	t15 = ((x61|(x62|x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 5;
	int32_t x67 = -1;
	int32_t x68 = -242806314;
	volatile int32_t t16 = -4331;

	t16 = ((x65|(x66|x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MAX;
	int8_t x72 = 25;
	int32_t t17 = -1;

	t17 = ((x69|(x70|x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 712;
	int64_t x74 = -1LL;
	static int8_t x75 = INT8_MAX;
	int64_t x76 = -402854901868LL;
	volatile int32_t t18 = 556;

	t18 = ((x73|(x74|x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MIN;
	volatile uint16_t x79 = 0U;
	static int8_t x80 = -2;

	t19 = ((x77|(x78|x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = 5U;
	int64_t x83 = -2477789918838LL;
	static int64_t x84 = -1LL;
	static int32_t t20 = -1;

	t20 = ((x81|(x82|x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -23;
	uint8_t x86 = 2U;
	int8_t x88 = -1;
	volatile int32_t t21 = 11530970;

	t21 = ((x85|(x86|x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 3334809757979LLU;
	uint32_t x90 = 1U;
	int32_t x92 = -37;
	static volatile int32_t t22 = 33110159;

	t22 = ((x89|(x90|x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	static int32_t x94 = -44;
	int16_t x95 = INT16_MIN;
	static int8_t x96 = INT8_MIN;

	t23 = ((x93|(x94|x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -4832296664953LL;
	int64_t x98 = INT64_MAX;
	int64_t x99 = -1757329LL;
	int16_t x100 = INT16_MAX;
	int32_t t24 = -6;

	t24 = ((x97|(x98|x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	int8_t x102 = INT8_MIN;
	volatile int8_t x103 = INT8_MAX;
	static int32_t t25 = 92641540;

	t25 = ((x101|(x102|x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -476;
	uint32_t x107 = 442U;
	int16_t x108 = INT16_MIN;

	t26 = ((x105|(x106|x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 921U;
	int16_t x110 = INT16_MAX;
	uint32_t x111 = 7U;
	int64_t x112 = -421912474174LL;
	int32_t t27 = -38328;

	t27 = ((x109|(x110|x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 155LL;
	int16_t x114 = -1;
	uint16_t x116 = 14750U;
	static volatile int32_t t28 = -1;

	t28 = ((x113|(x114|x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 1125134313LL;
	volatile int64_t x120 = INT64_MAX;

	t29 = ((x117|(x118|x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 466043082480005067LLU;
	uint64_t x122 = UINT64_MAX;
	uint16_t x123 = 29349U;
	int32_t x124 = INT32_MIN;
	int32_t t30 = 1976;

	t30 = ((x121|(x122|x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MAX;
	uint64_t x126 = UINT64_MAX;
	int32_t x127 = 109098;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = -1247;

	t31 = ((x125|(x126|x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = UINT32_MAX;
	uint8_t x130 = UINT8_MAX;
	volatile int8_t x131 = INT8_MIN;
	int64_t x132 = -1LL;

	t32 = ((x129|(x130|x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MIN;
	volatile int64_t x135 = -5322944430485LL;
	int64_t x136 = INT64_MAX;

	t33 = ((x133|(x134|x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 36174597147530LL;
	uint16_t x138 = 2U;
	uint16_t x139 = 6655U;
	volatile int32_t t34 = 31;

	t34 = ((x137|(x138|x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	static int64_t x142 = INT64_MAX;
	uint64_t x143 = 58049728634LLU;
	int16_t x144 = INT16_MIN;
	static int32_t t35 = 920;

	t35 = ((x141|(x142|x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	uint64_t x146 = 6669011633LLU;
	static volatile int32_t x147 = -1;
	static int8_t x148 = INT8_MAX;
	static volatile int32_t t36 = 5360;

	t36 = ((x145|(x146|x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = 15369LLU;
	static volatile int32_t x150 = INT32_MAX;
	static int8_t x151 = INT8_MIN;
	int32_t t37 = -27900;

	t37 = ((x149|(x150|x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MAX;
	int32_t x155 = INT32_MIN;
	volatile int8_t x156 = 3;
	int32_t t38 = 518954;

	t38 = ((x153|(x154|x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = 1229U;
	int8_t x158 = INT8_MAX;
	static int64_t x159 = INT64_MIN;
	int8_t x160 = 2;

	t39 = ((x157|(x158|x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = 2968524925181LL;
	int16_t x164 = 0;
	int32_t t40 = 3;

	t40 = ((x161|(x162|x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = -1LL;
	uint64_t x166 = 926LLU;
	int32_t x167 = 1;
	uint16_t x168 = 323U;

	t41 = ((x165|(x166|x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x170 = 3LLU;
	static volatile int64_t x172 = 146340359LL;
	static volatile int32_t t42 = -19662;

	t42 = ((x169|(x170|x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = -1LL;
	uint8_t x175 = UINT8_MAX;
	int32_t t43 = 12823609;

	t43 = ((x173|(x174|x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	volatile uint64_t x178 = UINT64_MAX;
	static int32_t x179 = INT32_MAX;
	uint32_t x180 = 1U;
	int32_t t44 = -279234945;

	t44 = ((x177|(x178|x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -724;
	int32_t x182 = INT32_MAX;
	uint16_t x183 = UINT16_MAX;
	int32_t x184 = 1226;
	volatile int32_t t45 = -119244;

	t45 = ((x181|(x182|x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = -1;
	int32_t x188 = INT32_MAX;
	int32_t t46 = 5165;

	t46 = ((x185|(x186|x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = 34356699689673267LLU;
	volatile int32_t x190 = INT32_MIN;
	static int32_t x191 = INT32_MIN;
	volatile uint64_t x192 = 196705151608529068LLU;
	int32_t t47 = 1171492;

	t47 = ((x189|(x190|x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = -398702251443LL;
	int64_t x196 = INT64_MIN;
	int32_t t48 = 6339227;

	t48 = ((x193|(x194|x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 2039LLU;
	int64_t x198 = INT64_MIN;
	uint16_t x199 = 7692U;
	uint64_t x200 = 52054LLU;
	volatile int32_t t49 = 2838488;

	t49 = ((x197|(x198|x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	volatile uint16_t x202 = UINT16_MAX;
	int8_t x203 = -1;
	int32_t x204 = INT32_MAX;
	int32_t t50 = -1955291;

	t50 = ((x201|(x202|x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -5;
	volatile uint16_t x206 = 238U;
	uint16_t x207 = 502U;
	volatile int32_t t51 = 149178529;

	t51 = ((x205|(x206|x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 5U;
	int64_t x210 = INT64_MIN;
	int16_t x212 = 279;

	t52 = ((x209|(x210|x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 15;
	int16_t x215 = -1;
	int32_t x216 = -358748266;
	int32_t t53 = 46315;

	t53 = ((x213|(x214|x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = 3447404U;
	int64_t x218 = -1LL;
	uint8_t x219 = 18U;
	int64_t x220 = INT64_MIN;

	t54 = ((x217|(x218|x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -2;
	int16_t x222 = 0;
	static uint16_t x223 = UINT16_MAX;
	volatile int32_t t55 = -114247;

	t55 = ((x221|(x222|x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MAX;
	int32_t x227 = -775109090;
	int32_t x228 = 2644;
	volatile int32_t t56 = 49;

	t56 = ((x225|(x226|x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	static volatile uint32_t x230 = UINT32_MAX;
	int32_t x231 = INT32_MIN;
	int32_t t57 = -1685107;

	t57 = ((x229|(x230|x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = INT8_MIN;
	static int64_t x235 = INT64_MAX;
	static int32_t x236 = INT32_MIN;
	volatile int32_t t58 = 57446;

	t58 = ((x233|(x234|x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = -12814;
	int64_t x238 = INT64_MAX;
	volatile int64_t x239 = -1LL;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t59 = -1;

	t59 = ((x237|(x238|x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	int64_t x242 = INT64_MIN;
	int16_t x244 = INT16_MIN;
	static volatile int32_t t60 = 3083221;

	t60 = ((x241|(x242|x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x246 = 1U;
	int8_t x247 = INT8_MAX;
	volatile int32_t t61 = 0;

	t61 = ((x245|(x246|x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = 47392407;
	int8_t x252 = INT8_MAX;

	t62 = ((x249|(x250|x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 4U;
	static uint16_t x254 = 28248U;
	uint32_t x255 = 727U;
	int32_t x256 = -733148;
	volatile int32_t t63 = -736915;

	t63 = ((x253|(x254|x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = 26;
	int16_t x259 = -427;
	int16_t x260 = INT16_MIN;

	t64 = ((x257|(x258|x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 0;
	uint32_t x262 = 4U;
	uint64_t x263 = UINT64_MAX;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 209;

	t65 = ((x261|(x262|x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	static uint8_t x266 = UINT8_MAX;
	uint32_t x267 = 2109537U;
	uint8_t x268 = UINT8_MAX;
	static volatile int32_t t66 = -57697965;

	t66 = ((x265|(x266|x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MIN;
	uint16_t x270 = 1U;
	int8_t x271 = INT8_MAX;
	volatile int16_t x272 = INT16_MIN;

	t67 = ((x269|(x270|x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	int32_t x274 = -1;
	uint64_t x275 = 4756490194176281094LLU;
	volatile int32_t x276 = -1;
	int32_t t68 = 2;

	t68 = ((x273|(x274|x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 1076U;
	static uint32_t x278 = UINT32_MAX;
	int64_t x279 = INT64_MIN;
	int64_t x280 = INT64_MAX;
	int32_t t69 = -3;

	t69 = ((x277|(x278|x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 49U;
	int8_t x282 = INT8_MIN;
	volatile int32_t x283 = 4465;
	int64_t x284 = INT64_MAX;
	int32_t t70 = -243;

	t70 = ((x281|(x282|x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 0U;
	int16_t x286 = -2023;
	static volatile int32_t t71 = 101;

	t71 = ((x285|(x286|x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = 30858422259LL;
	uint32_t x292 = 23U;
	int32_t t72 = -44702;

	t72 = ((x289|(x290|x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = 487521U;
	int8_t x295 = INT8_MAX;
	static int8_t x296 = -1;
	static volatile int32_t t73 = -1712070;

	t73 = ((x293|(x294|x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MIN;
	static int16_t x298 = -1;
	int8_t x300 = INT8_MIN;
	int32_t t74 = 2868;

	t74 = ((x297|(x298|x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	uint64_t x302 = 3378215290598664LLU;
	int8_t x303 = 1;
	int64_t x304 = 503LL;
	static volatile int32_t t75 = -273;

	t75 = ((x301|(x302|x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static int8_t x306 = INT8_MIN;
	int64_t x307 = -4230937167LL;
	int32_t x308 = -1;

	t76 = ((x305|(x306|x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = INT32_MIN;
	int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MIN;
	int32_t t77 = -16618884;

	t77 = ((x309|(x310|x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = -1880;
	static int32_t x316 = INT32_MIN;

	t78 = ((x313|(x314|x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 251;
	int64_t x318 = INT64_MAX;
	int16_t x319 = INT16_MIN;
	volatile int32_t x320 = -1;
	int32_t t79 = -4076;

	t79 = ((x317|(x318|x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	volatile int32_t x322 = INT32_MIN;
	static uint8_t x323 = UINT8_MAX;
	volatile int32_t t80 = 3076103;

	t80 = ((x321|(x322|x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	int8_t x326 = INT8_MIN;
	volatile int64_t x327 = 15LL;
	volatile int16_t x328 = -1;

	t81 = ((x325|(x326|x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MAX;
	static int64_t x330 = INT64_MIN;
	volatile int64_t x331 = INT64_MIN;
	int32_t t82 = -10698;

	t82 = ((x329|(x330|x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	int16_t x334 = -1;
	int8_t x335 = INT8_MIN;
	static int8_t x336 = INT8_MAX;
	volatile int32_t t83 = -3228347;

	t83 = ((x333|(x334|x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	volatile int8_t x338 = INT8_MIN;
	int16_t x339 = -2939;

	t84 = ((x337|(x338|x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x341 = UINT32_MAX;
	int64_t x342 = -498232441802420424LL;
	volatile uint64_t x344 = UINT64_MAX;
	volatile int32_t t85 = 293;

	t85 = ((x341|(x342|x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	volatile int16_t x347 = INT16_MIN;
	uint32_t x348 = 17U;
	static volatile int32_t t86 = 28678;

	t86 = ((x345|(x346|x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 7769023053900LL;
	static volatile int32_t x350 = 9909;
	uint64_t x351 = 36288LLU;
	int16_t x352 = INT16_MIN;
	int32_t t87 = 17320;

	t87 = ((x349|(x350|x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int64_t x355 = INT64_MAX;
	int16_t x356 = INT16_MAX;
	volatile int32_t t88 = 1215;

	t88 = ((x353|(x354|x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = -1;
	uint16_t x358 = UINT16_MAX;
	volatile int32_t t89 = 131;

	t89 = ((x357|(x358|x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x363 = -1;
	volatile int32_t t90 = -114225544;

	t90 = ((x361|(x362|x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x365 = UINT16_MAX;
	volatile int8_t x366 = INT8_MIN;
	uint16_t x367 = 0U;
	uint64_t x368 = UINT64_MAX;
	static volatile int32_t t91 = 3675;

	t91 = ((x365|(x366|x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 15U;
	uint64_t x370 = 165387LLU;
	static int8_t x371 = INT8_MIN;
	volatile uint32_t x372 = UINT32_MAX;

	t92 = ((x369|(x370|x371))<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 1;
	int32_t x375 = INT32_MAX;
	int64_t x376 = INT64_MAX;
	int32_t t93 = 345741;

	t93 = ((x373|(x374|x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x377 = 3435155U;
	static int8_t x379 = -1;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = -1;

	t94 = ((x377|(x378|x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MAX;
	uint8_t x382 = UINT8_MAX;
	int16_t x383 = INT16_MIN;
	int32_t x384 = INT32_MIN;

	t95 = ((x381|(x382|x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x385 = -1;
	volatile int16_t x386 = INT16_MIN;
	static int8_t x387 = INT8_MAX;
	int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 48;

	t96 = ((x385|(x386|x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x389 = INT32_MIN;
	int64_t x390 = -1585385531587LL;
	int32_t x391 = INT32_MIN;
	volatile int8_t x392 = INT8_MIN;

	t97 = ((x389|(x390|x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 36;
	static int64_t x394 = -13089007LL;
	int16_t x396 = 1736;
	int32_t t98 = 15;

	t98 = ((x393|(x394|x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 77;
	int64_t x398 = INT64_MIN;
	int8_t x400 = -1;
	volatile int32_t t99 = 7;

	t99 = ((x397|(x398|x399))<x400);

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


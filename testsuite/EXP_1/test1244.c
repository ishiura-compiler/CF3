#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = UINT32_MAX;
int64_t x12 = INT64_MIN;
volatile uint32_t x16 = 511653U;
static uint32_t x20 = 17590221U;
static volatile int32_t t5 = 1686;
volatile int32_t x30 = INT32_MIN;
volatile int8_t x31 = INT8_MIN;
static int64_t x32 = INT64_MIN;
int32_t t7 = -68729;
int16_t x33 = -1;
int64_t x43 = -1LL;
static volatile int32_t t10 = -4116;
static volatile int8_t x49 = -1;
volatile int8_t x51 = INT8_MAX;
int32_t x53 = INT32_MIN;
int64_t x59 = INT64_MAX;
uint8_t x61 = 1U;
volatile int32_t x62 = INT32_MIN;
uint32_t x63 = 165203424U;
int16_t x69 = 10933;
int16_t x70 = INT16_MIN;
volatile int32_t t17 = -2;
int64_t x74 = INT64_MIN;
volatile int32_t t18 = 8951;
volatile int8_t x78 = INT8_MIN;
uint32_t x81 = 256543U;
int64_t x82 = 1595531641LL;
volatile int64_t x84 = -10LL;
int8_t x88 = 15;
volatile int64_t x89 = INT64_MIN;
volatile int8_t x92 = -1;
int32_t t22 = 58993689;
int16_t x96 = INT16_MIN;
int8_t x112 = -7;
int64_t x116 = INT64_MIN;
int32_t t30 = 23;
static volatile int16_t x126 = INT16_MIN;
int32_t x128 = INT32_MIN;
uint32_t x131 = 3636081U;
int16_t x139 = -1;
int8_t x140 = 0;
static int8_t x159 = -10;
static volatile int8_t x160 = -5;
volatile int32_t t38 = -16645979;
volatile int16_t x165 = INT16_MIN;
int8_t x166 = INT8_MIN;
static int16_t x173 = 2508;
int32_t x174 = 0;
volatile int64_t x178 = INT64_MIN;
int32_t t43 = 3;
int8_t x189 = -1;
volatile uint8_t x191 = 44U;
int8_t x200 = INT8_MIN;
int32_t t48 = 28371;
volatile int32_t x207 = 1;
uint64_t x208 = UINT64_MAX;
volatile int32_t t50 = 1;
int32_t x209 = 10081955;
int32_t x219 = INT32_MIN;
volatile int32_t t54 = -1;
uint32_t x225 = 452655578U;
int32_t t55 = -40894;
int8_t x229 = INT8_MAX;
uint8_t x230 = 0U;
static uint64_t x231 = 3619329931490148948LLU;
volatile int32_t t57 = 21979;
int32_t x240 = 3056;
int8_t x241 = INT8_MAX;
static int16_t x242 = -1;
static volatile int64_t x247 = 15434LL;
int8_t x250 = -1;
int64_t x254 = -76140300607LL;
volatile int16_t x262 = INT16_MIN;
static uint8_t x270 = UINT8_MAX;
int8_t x279 = INT8_MAX;
int8_t x287 = -4;
int64_t x291 = -130LL;
int8_t x292 = INT8_MIN;
static int8_t x296 = 2;
uint64_t x303 = 177LLU;
int32_t x306 = INT32_MIN;
static uint8_t x308 = 1U;
static int64_t x315 = INT64_MIN;
volatile int32_t t77 = 2078366;
static int32_t x319 = INT32_MIN;
int32_t t78 = -539;
uint32_t x329 = 5U;
int32_t x330 = INT32_MAX;
static volatile int32_t t81 = 107813;
int32_t x339 = -1;
static int64_t x345 = INT64_MIN;
volatile int64_t x348 = INT64_MAX;
volatile int64_t x352 = INT64_MAX;
static int32_t x353 = -1;
int64_t x362 = INT64_MIN;
volatile int32_t x364 = 231;
uint64_t x366 = 69LLU;
volatile int32_t t90 = -3698379;
static volatile int32_t x372 = 5108;
static uint64_t x374 = 53308497LLU;
volatile int32_t t92 = 11;
int16_t x379 = INT16_MIN;
int64_t x380 = INT64_MIN;
int64_t x381 = INT64_MIN;
static uint16_t x382 = 505U;
int32_t x383 = INT32_MAX;
int32_t t96 = -53;
static int64_t x394 = -2521207LL;
int32_t x397 = INT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int64_t x2 = -24384810632LL;
	int16_t x3 = INT16_MIN;
	volatile int64_t x4 = INT64_MAX;
	volatile int32_t t0 = 55726;

	t0 = (((x1==x2)%x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 14U;
	static uint32_t x7 = 5439738U;
	uint16_t x8 = 8U;
	int32_t t1 = 578;

	t1 = (((x5==x6)%x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int32_t x10 = INT32_MIN;
	static int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -5837580;

	t2 = (((x9==x10)%x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -7211LL;
	uint32_t x14 = 30216449U;
	static volatile int32_t x15 = INT32_MIN;
	volatile int32_t t3 = 15882;

	t3 = (((x13==x14)%x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 4U;
	uint8_t x18 = UINT8_MAX;
	uint8_t x19 = 40U;
	volatile int32_t t4 = -1;

	t4 = (((x17==x18)%x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint32_t x22 = UINT32_MAX;
	static uint16_t x23 = UINT16_MAX;
	int8_t x24 = -1;

	t5 = (((x21==x22)%x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 5341U;
	int32_t x26 = -1;
	int8_t x27 = -58;
	int64_t x28 = -1298354921894797LL;
	volatile int32_t t6 = -56;

	t6 = (((x25==x26)%x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;

	t7 = (((x29==x30)%x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x34 = 18214350849LLU;
	int16_t x35 = -321;
	uint64_t x36 = 48169811440463LLU;
	volatile int32_t t8 = -2;

	t8 = (((x33==x34)%x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MIN;
	uint64_t x38 = 1392611054LLU;
	uint8_t x39 = 15U;
	uint8_t x40 = 78U;
	volatile int32_t t9 = 10884;

	t9 = (((x37==x38)%x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MAX;
	uint64_t x42 = UINT64_MAX;
	uint16_t x44 = UINT16_MAX;

	t10 = (((x41==x42)%x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	uint32_t x46 = 69060158U;
	static int16_t x47 = -1;
	int16_t x48 = INT16_MAX;
	volatile int32_t t11 = 1;

	t11 = (((x45==x46)%x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x50 = 33298;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 12541;

	t12 = (((x49==x50)%x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	static volatile uint32_t x55 = 141U;
	static int32_t x56 = -683704;
	int32_t t13 = 0;

	t13 = (((x53==x54)%x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	uint64_t x58 = 762LLU;
	volatile int32_t x60 = INT32_MIN;
	int32_t t14 = 27212;

	t14 = (((x57==x58)%x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x64 = 368706021155LL;
	volatile int32_t t15 = -347;

	t15 = (((x61==x62)%x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	static int64_t x66 = INT64_MAX;
	int8_t x67 = INT8_MIN;
	static int32_t x68 = -2954;
	int32_t t16 = 125;

	t16 = (((x65==x66)%x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x71 = -15252;
	volatile uint32_t x72 = 249350U;

	t17 = (((x69==x70)%x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MIN;
	uint8_t x75 = UINT8_MAX;
	uint16_t x76 = 2U;

	t18 = (((x73==x74)%x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 7820157LLU;
	int32_t x79 = -6;
	int64_t x80 = -1LL;
	int32_t t19 = -198;

	t19 = (((x77==x78)%x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x83 = INT16_MIN;
	volatile int32_t t20 = 327807123;

	t20 = (((x81==x82)%x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	volatile int64_t x86 = INT64_MIN;
	int32_t x87 = -14948360;
	volatile int32_t t21 = 29307593;

	t21 = (((x85==x86)%x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MAX;
	volatile int8_t x91 = -1;

	t22 = (((x89==x90)%x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = -1LL;
	int64_t x94 = 12470LL;
	int32_t x95 = INT32_MIN;
	volatile int32_t t23 = -402842;

	t23 = (((x93==x94)%x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	static volatile int64_t x98 = INT64_MIN;
	volatile int8_t x99 = INT8_MIN;
	int8_t x100 = -1;
	int32_t t24 = -10240234;

	t24 = (((x97==x98)%x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	static int16_t x102 = -13535;
	uint32_t x103 = UINT32_MAX;
	uint16_t x104 = 21262U;
	volatile int32_t t25 = 27;

	t25 = (((x101==x102)%x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 6U;
	uint16_t x106 = 29111U;
	static int64_t x107 = -1LL;
	uint64_t x108 = 146192606297606LLU;
	static volatile int32_t t26 = 18689;

	t26 = (((x105==x106)%x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 1U;
	volatile int32_t x110 = INT32_MIN;
	uint8_t x111 = UINT8_MAX;
	volatile int32_t t27 = 75;

	t27 = (((x109==x110)%x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int64_t x114 = -43065LL;
	volatile uint16_t x115 = 26363U;
	int32_t t28 = 97;

	t28 = (((x113==x114)%x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = 0;
	uint64_t x118 = UINT64_MAX;
	int16_t x119 = -1;
	int64_t x120 = INT64_MAX;
	volatile int32_t t29 = -2132702;

	t29 = (((x117==x118)%x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -1;
	int64_t x122 = INT64_MIN;
	uint64_t x123 = 14300LLU;
	int8_t x124 = INT8_MIN;

	t30 = (((x121==x122)%x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	static int32_t t31 = -20;

	t31 = (((x125==x126)%x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 23985038405LLU;
	int64_t x130 = -94890548LL;
	uint64_t x132 = 14460984LLU;
	volatile int32_t t32 = 73988639;

	t32 = (((x129==x130)%x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 18U;
	volatile int8_t x134 = -1;
	int64_t x135 = INT64_MIN;
	static uint64_t x136 = 586524859626665629LLU;
	int32_t t33 = -15614;

	t33 = (((x133==x134)%x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int16_t x138 = -485;
	volatile int32_t t34 = 323;

	t34 = (((x137==x138)%x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 15022646462262999LLU;
	volatile uint16_t x142 = UINT16_MAX;
	static int32_t x143 = 23;
	uint32_t x144 = 54386318U;
	int32_t t35 = 23;

	t35 = (((x141==x142)%x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = 1582486611873816LL;
	int8_t x150 = 24;
	int64_t x151 = 3735895239438077883LL;
	volatile uint16_t x152 = 1U;
	volatile int32_t t36 = -25401450;

	t36 = (((x149==x150)%x151)<x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MIN;
	int32_t x154 = INT32_MAX;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = 31U;
	int32_t t37 = 180;

	t37 = (((x153==x154)%x155)<x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MIN;
	volatile int32_t x158 = -1;

	t38 = (((x157==x158)%x159)<x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = 9;
	static uint8_t x162 = 3U;
	volatile int8_t x163 = INT8_MIN;
	int64_t x164 = 11261491409530049LL;
	int32_t t39 = 398;

	t39 = (((x161==x162)%x163)<x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x167 = -1;
	int64_t x168 = INT64_MIN;
	int32_t t40 = 4754686;

	t40 = (((x165==x166)%x167)<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = UINT16_MAX;
	static volatile int16_t x170 = -444;
	int64_t x171 = -1LL;
	volatile int8_t x172 = INT8_MIN;
	static volatile int32_t t41 = -1;

	t41 = (((x169==x170)%x171)<x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x175 = INT32_MAX;
	static uint32_t x176 = UINT32_MAX;
	static int32_t t42 = -100581;

	t42 = (((x173==x174)%x175)<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x177 = -1;
	uint32_t x179 = UINT32_MAX;
	int8_t x180 = 47;

	t43 = (((x177==x178)%x179)<x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x181 = INT32_MIN;
	uint16_t x182 = UINT16_MAX;
	int32_t x183 = INT32_MIN;
	int64_t x184 = INT64_MAX;
	int32_t t44 = -12139094;

	t44 = (((x181==x182)%x183)<x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = -453954;
	static uint16_t x186 = UINT16_MAX;
	volatile int8_t x187 = INT8_MAX;
	uint8_t x188 = 0U;
	static volatile int32_t t45 = -8398966;

	t45 = (((x185==x186)%x187)<x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x190 = -1;
	volatile int8_t x192 = INT8_MIN;
	volatile int32_t t46 = -685956282;

	t46 = (((x189==x190)%x191)<x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = 8419U;
	uint8_t x194 = 0U;
	volatile uint16_t x195 = 6U;
	int8_t x196 = 0;
	volatile int32_t t47 = -247;

	t47 = (((x193==x194)%x195)<x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x197 = INT16_MIN;
	int8_t x198 = -1;
	static int16_t x199 = 448;

	t48 = (((x197==x198)%x199)<x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	static uint16_t x202 = 12U;
	int32_t x203 = 8;
	static uint64_t x204 = UINT64_MAX;
	volatile int32_t t49 = -8;

	t49 = (((x201==x202)%x203)<x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x205 = INT16_MAX;
	uint8_t x206 = UINT8_MAX;

	t50 = (((x205==x206)%x207)<x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x210 = -4028403;
	int16_t x211 = -1;
	int16_t x212 = -1;
	static int32_t t51 = -30;

	t51 = (((x209==x210)%x211)<x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x213 = -1LL;
	int16_t x214 = 218;
	uint8_t x215 = UINT8_MAX;
	int64_t x216 = 85539705LL;
	volatile int32_t t52 = 279741347;

	t52 = (((x213==x214)%x215)<x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = -55;
	uint64_t x218 = UINT64_MAX;
	int64_t x220 = INT64_MIN;
	volatile int32_t t53 = -13376652;

	t53 = (((x217==x218)%x219)<x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = 22U;
	static uint8_t x222 = UINT8_MAX;
	int64_t x223 = INT64_MIN;
	uint64_t x224 = 407852014654LLU;

	t54 = (((x221==x222)%x223)<x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x226 = -2983LL;
	volatile int64_t x227 = INT64_MIN;
	static int64_t x228 = INT64_MAX;

	t55 = (((x225==x226)%x227)<x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x232 = 4431;
	int32_t t56 = -1769;

	t56 = (((x229==x230)%x231)<x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MIN;
	uint8_t x234 = UINT8_MAX;
	volatile uint16_t x235 = UINT16_MAX;
	uint32_t x236 = UINT32_MAX;

	t57 = (((x233==x234)%x235)<x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = -1;
	int32_t x238 = -6081;
	volatile int16_t x239 = INT16_MIN;
	int32_t t58 = -25;

	t58 = (((x237==x238)%x239)<x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x243 = -1;
	int8_t x244 = INT8_MIN;
	volatile int32_t t59 = 2396;

	t59 = (((x241==x242)%x243)<x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = 0U;
	int32_t x246 = INT32_MIN;
	volatile int64_t x248 = 19769457564LL;
	int32_t t60 = 87721;

	t60 = (((x245==x246)%x247)<x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x249 = UINT32_MAX;
	uint8_t x251 = 66U;
	int16_t x252 = INT16_MAX;
	volatile int32_t t61 = -134103973;

	t61 = (((x249==x250)%x251)<x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = INT32_MAX;
	static int16_t x255 = 1;
	int64_t x256 = -6LL;
	static volatile int32_t t62 = 4074335;

	t62 = (((x253==x254)%x255)<x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = -98;
	uint32_t x259 = UINT32_MAX;
	int32_t x260 = INT32_MIN;
	volatile int32_t t63 = -2930;

	t63 = (((x257==x258)%x259)<x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = INT16_MAX;
	uint32_t x263 = 189279U;
	static int8_t x264 = -1;
	int32_t t64 = 807031;

	t64 = (((x261==x262)%x263)<x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x265 = 23202522U;
	uint16_t x266 = UINT16_MAX;
	static int8_t x267 = -1;
	uint32_t x268 = 0U;
	volatile int32_t t65 = -34056635;

	t65 = (((x265==x266)%x267)<x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = -1;
	int8_t x271 = INT8_MIN;
	volatile uint16_t x272 = 1U;
	volatile int32_t t66 = 2;

	t66 = (((x269==x270)%x271)<x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x273 = INT32_MIN;
	uint16_t x274 = 6679U;
	volatile int64_t x275 = -939875850LL;
	uint32_t x276 = 51U;
	volatile int32_t t67 = -196936212;

	t67 = (((x273==x274)%x275)<x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x277 = -1LL;
	int64_t x278 = -1LL;
	int64_t x280 = -59528988LL;
	volatile int32_t t68 = 25;

	t68 = (((x277==x278)%x279)<x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x281 = INT8_MIN;
	uint8_t x282 = 6U;
	volatile int64_t x283 = -77174LL;
	int32_t x284 = INT32_MIN;
	volatile int32_t t69 = -631;

	t69 = (((x281==x282)%x283)<x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x285 = -1;
	uint64_t x286 = UINT64_MAX;
	volatile uint32_t x288 = 863654U;
	volatile int32_t t70 = -2;

	t70 = (((x285==x286)%x287)<x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x289 = -98;
	int64_t x290 = -14120394777287LL;
	volatile int32_t t71 = 1;

	t71 = (((x289==x290)%x291)<x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = 123U;
	static int16_t x294 = 161;
	uint8_t x295 = UINT8_MAX;
	int32_t t72 = -1871711;

	t72 = (((x293==x294)%x295)<x296);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = -1;
	volatile int16_t x298 = -1;
	static volatile int32_t x299 = 237;
	int16_t x300 = INT16_MAX;
	volatile int32_t t73 = 5;

	t73 = (((x297==x298)%x299)<x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x301 = 9U;
	static int8_t x302 = -5;
	uint16_t x304 = 13U;
	static volatile int32_t t74 = 9;

	t74 = (((x301==x302)%x303)<x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = INT64_MIN;
	int64_t x307 = -2928547185183LL;
	static int32_t t75 = -74710;

	t75 = (((x305==x306)%x307)<x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = -1;
	int64_t x310 = INT64_MIN;
	uint8_t x311 = UINT8_MAX;
	int16_t x312 = -1;
	static volatile int32_t t76 = 372859;

	t76 = (((x309==x310)%x311)<x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MIN;
	uint16_t x314 = 0U;
	int32_t x316 = INT32_MIN;

	t77 = (((x313==x314)%x315)<x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = INT8_MAX;
	static uint8_t x318 = 0U;
	int64_t x320 = 4LL;

	t78 = (((x317==x318)%x319)<x320);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x321 = 19U;
	int16_t x322 = -1;
	uint64_t x323 = 117LLU;
	uint16_t x324 = 6U;
	volatile int32_t t79 = 14470;

	t79 = (((x321==x322)%x323)<x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = -29769123518071LL;
	int32_t x326 = 2247666;
	uint16_t x327 = 51U;
	int16_t x328 = -6121;
	volatile int32_t t80 = -117;

	t80 = (((x325==x326)%x327)<x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x331 = UINT32_MAX;
	static int8_t x332 = -1;

	t81 = (((x329==x330)%x331)<x332);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = 491965194069LL;
	int16_t x334 = 2618;
	int16_t x335 = INT16_MIN;
	static int64_t x336 = 731633LL;
	static int32_t t82 = -123;

	t82 = (((x333==x334)%x335)<x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x337 = -48265498;
	int32_t x338 = -1;
	static int32_t x340 = INT32_MAX;
	static int32_t t83 = 349168;

	t83 = (((x337==x338)%x339)<x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x341 = 436LLU;
	int8_t x342 = -15;
	uint64_t x343 = 5628015LLU;
	static int16_t x344 = 13082;
	volatile int32_t t84 = 2574;

	t84 = (((x341==x342)%x343)<x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x346 = -1;
	int64_t x347 = -5403470548891LL;
	volatile int32_t t85 = 1;

	t85 = (((x345==x346)%x347)<x348);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = 21;
	uint32_t x350 = 2U;
	static int16_t x351 = -1;
	int32_t t86 = 228;

	t86 = (((x349==x350)%x351)<x352);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x354 = INT64_MAX;
	volatile uint32_t x355 = UINT32_MAX;
	int16_t x356 = INT16_MAX;
	int32_t t87 = -1;

	t87 = (((x353==x354)%x355)<x356);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x357 = 382536036U;
	int8_t x358 = INT8_MIN;
	int32_t x359 = INT32_MIN;
	int32_t x360 = -516967;
	int32_t t88 = -50332;

	t88 = (((x357==x358)%x359)<x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = UINT64_MAX;
	int8_t x363 = -6;
	volatile int32_t t89 = -69757510;

	t89 = (((x361==x362)%x363)<x364);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x365 = -31876;
	static int8_t x367 = -1;
	int16_t x368 = 0;

	t90 = (((x365==x366)%x367)<x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x369 = INT16_MAX;
	int16_t x370 = 8;
	int16_t x371 = -1;
	volatile int32_t t91 = -112677;

	t91 = (((x369==x370)%x371)<x372);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = INT32_MIN;
	int16_t x375 = INT16_MIN;
	int16_t x376 = -150;

	t92 = (((x373==x374)%x375)<x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x377 = INT16_MIN;
	static int32_t x378 = -19023485;
	volatile int32_t t93 = -1;

	t93 = (((x377==x378)%x379)<x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x384 = -7899;
	int32_t t94 = 6647230;

	t94 = (((x381==x382)%x383)<x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x385 = 4403217786908LLU;
	uint16_t x386 = UINT16_MAX;
	int8_t x387 = -1;
	static int8_t x388 = -1;
	static int32_t t95 = 180961886;

	t95 = (((x385==x386)%x387)<x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = -3;
	int8_t x390 = INT8_MIN;
	int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MAX;

	t96 = (((x389==x390)%x391)<x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x393 = 58U;
	static int8_t x395 = INT8_MIN;
	uint16_t x396 = 0U;
	int32_t t97 = -105;

	t97 = (((x393==x394)%x395)<x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x398 = -1;
	int64_t x399 = INT64_MIN;
	volatile uint8_t x400 = UINT8_MAX;
	int32_t t98 = 61;

	t98 = (((x397==x398)%x399)<x400);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = -20;
	int64_t x402 = INT64_MAX;
	uint16_t x403 = 4452U;
	uint16_t x404 = 1U;
	int32_t t99 = 0;

	t99 = (((x401==x402)%x403)<x404);

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


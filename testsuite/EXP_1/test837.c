#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x5 = UINT8_MAX;
uint32_t t2 = 25U;
int8_t x13 = -1;
volatile int8_t x14 = INT8_MAX;
static int32_t x16 = INT32_MAX;
volatile int64_t x21 = INT64_MAX;
int16_t x22 = -7660;
int64_t x28 = INT64_MIN;
static uint16_t x35 = 570U;
uint8_t x40 = 45U;
volatile uint64_t x42 = UINT64_MAX;
uint16_t x45 = UINT16_MAX;
int64_t x46 = INT64_MIN;
int64_t x50 = -1376642LL;
int64_t x52 = 15LL;
volatile uint16_t x55 = UINT16_MAX;
int16_t x61 = -771;
int8_t x64 = -3;
uint32_t x65 = 418U;
int16_t x73 = INT16_MIN;
volatile uint32_t t18 = 855265480U;
static uint32_t x84 = 7668U;
uint16_t x92 = 27815U;
int32_t x93 = -1;
int8_t x100 = -1;
uint8_t x103 = 3U;
volatile int8_t x111 = INT8_MIN;
volatile int64_t t27 = -8013768121901730LL;
volatile uint32_t t28 = 3163718U;
int8_t x118 = INT8_MIN;
int32_t x120 = -1572;
static volatile uint16_t x123 = 0U;
volatile int64_t x131 = INT64_MIN;
int32_t x132 = INT32_MIN;
static int16_t x135 = INT16_MAX;
uint32_t x136 = UINT32_MAX;
int32_t x137 = INT32_MIN;
int8_t x138 = 1;
volatile int32_t t33 = -46023073;
uint32_t x148 = UINT32_MAX;
int16_t x149 = INT16_MIN;
int64_t x150 = -3012772LL;
int8_t x154 = -1;
static volatile int64_t t38 = -31632368804038780LL;
static int16_t x161 = INT16_MIN;
int8_t x167 = -1;
uint64_t x170 = UINT64_MAX;
uint64_t t41 = 91792058LLU;
int64_t t42 = -820494877415936LL;
uint32_t x185 = UINT32_MAX;
volatile int8_t x187 = -1;
static uint64_t x194 = 269998LLU;
uint16_t x198 = UINT16_MAX;
uint16_t x208 = 117U;
int8_t x210 = -6;
int16_t x214 = -815;
int32_t x215 = INT32_MAX;
int8_t x216 = INT8_MIN;
int32_t t52 = 1;
int16_t x239 = 13;
uint32_t x248 = 133U;
volatile int64_t x251 = INT64_MIN;
static int32_t x256 = -680;
int64_t x260 = -1LL;
static uint32_t x263 = 233144380U;
volatile int64_t x266 = 140LL;
volatile uint64_t t65 = 2664LLU;
static int64_t t67 = -805LL;
int16_t x281 = 6;
int16_t x288 = 116;
uint8_t x302 = UINT8_MAX;
int32_t x305 = INT32_MIN;
volatile int64_t x307 = 303818209783LL;
static int16_t x312 = 29;
volatile uint32_t t76 = 5718U;
volatile uint64_t x313 = 10659133944583658LLU;
volatile uint64_t t78 = 413418263397376940LLU;
uint8_t x325 = UINT8_MAX;
volatile uint64_t t81 = 7488LLU;
volatile uint8_t x335 = 6U;
int32_t t82 = -470146639;
int8_t x337 = INT8_MIN;
int32_t x341 = -1727;
int32_t x346 = INT32_MIN;
int32_t x354 = INT32_MIN;
volatile int16_t x360 = INT16_MIN;
int32_t t88 = -1;
int64_t x364 = -1LL;
int64_t t89 = 6955497523249751LL;
static int8_t x373 = INT8_MIN;
int32_t t92 = 1352;
int64_t x379 = 1953644103LL;
int64_t t93 = 1862230249451269LL;
int32_t x385 = INT32_MIN;
static uint8_t x388 = UINT8_MAX;
int16_t x397 = -1;
int32_t x400 = 118;
int32_t x410 = INT32_MIN;
int32_t x411 = -1;
uint64_t t99 = 643476333LLU;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile int32_t x2 = -1;
	static int32_t x3 = -1;
	static volatile uint16_t x4 = UINT16_MAX;
	volatile int64_t t0 = -8544534283321LL;

	t0 = (((x1%x2)^x3)%x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = UINT64_MAX;
	int16_t x7 = -1;
	int64_t x8 = -1LL;
	volatile uint64_t t1 = 2510996342317LLU;

	t1 = (((x5%x6)^x7)%x8);

	if (t1 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 548U;
	int32_t x10 = INT32_MIN;
	uint32_t x11 = 15181971U;
	int32_t x12 = INT32_MAX;

	t2 = (((x9%x10)^x11)%x12);

	if (t2 != 15182519U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x15 = 902339730149172LL;
	int64_t t3 = -2703125524087LL;

	t3 = (((x13%x14)^x15)%x16);

	if (t3 != -1461418125LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int32_t x18 = -4079498;
	static int64_t x19 = INT64_MIN;
	volatile int8_t x20 = 22;
	volatile int64_t t4 = -51329107408LL;

	t4 = (((x17%x18)^x19)%x20);

	if (t4 != -19LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x23 = INT64_MAX;
	static uint16_t x24 = UINT16_MAX;
	int64_t t5 = -1886683LL;

	t5 = (((x21%x22)^x23)%x24);

	if (t5 != 26760LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	uint32_t x26 = 200U;
	int64_t x27 = 538346069LL;
	volatile int64_t t6 = 451469LL;

	t6 = (((x25%x26)^x27)%x28);

	if (t6 != 538345994LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	static volatile int16_t x30 = 1013;
	volatile uint32_t x31 = 14845339U;
	static int64_t x32 = INT64_MIN;
	volatile int64_t t7 = -388LL;

	t7 = (((x29%x30)^x31)%x32);

	if (t7 != 14845938LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int64_t x34 = INT64_MIN;
	volatile int64_t x36 = INT64_MAX;
	int64_t t8 = -1LL;

	t8 = (((x33%x34)^x35)%x36);

	if (t8 != 9223372036854775237LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = INT8_MIN;
	uint32_t x38 = 4395U;
	static int32_t x39 = INT32_MIN;
	uint32_t t9 = 3858917U;

	t9 = (((x37%x38)^x39)%x40);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int8_t x43 = INT8_MIN;
	int16_t x44 = 37;
	uint64_t t10 = 209587925621LLU;

	t10 = (((x41%x42)^x43)%x44);

	if (t10 != 6LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x47 = UINT32_MAX;
	int16_t x48 = INT16_MIN;
	volatile int64_t t11 = 9926810LL;

	t11 = (((x45%x46)^x47)%x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 579U;
	int64_t x51 = INT64_MAX;
	volatile int64_t t12 = -956509501LL;

	t12 = (((x49%x50)^x51)%x52);

	if (t12 != 13LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	uint32_t x54 = UINT32_MAX;
	uint64_t x56 = 15953466940LLU;
	static uint64_t t13 = 4089963601LLU;

	t13 = (((x53%x54)^x55)%x56);

	if (t13 != 2512431780LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	static int8_t x58 = -1;
	uint32_t x59 = UINT32_MAX;
	static uint64_t x60 = 283497428027LLU;
	uint64_t t14 = 31112189113LLU;

	t14 = (((x57%x58)^x59)%x60);

	if (t14 != 4294967295LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x62 = INT32_MIN;
	int16_t x63 = INT16_MAX;
	volatile int32_t t15 = -66575;

	t15 = (((x61%x62)^x63)%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = -43;
	uint16_t x67 = 4U;
	static int16_t x68 = -642;
	volatile uint32_t t16 = 1U;

	t16 = (((x65%x66)^x67)%x68);

	if (t16 != 422U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MIN;
	int64_t x71 = INT64_MIN;
	static volatile int32_t x72 = INT32_MIN;
	static int64_t t17 = -5LL;

	t17 = (((x69%x70)^x71)%x72);

	if (t17 != 2147450880LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = 1638U;
	volatile int8_t x75 = -41;
	uint32_t x76 = 38761077U;

	t18 = (((x73%x74)^x75)%x76);

	if (t18 != 47U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	uint8_t x78 = UINT8_MAX;
	static int8_t x79 = INT8_MIN;
	volatile uint32_t x80 = 35U;
	static uint32_t t19 = 42975U;

	t19 = (((x77%x78)^x79)%x80);

	if (t19 != 23U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = 1;
	uint32_t x83 = 15U;
	uint32_t t20 = 146333U;

	t20 = (((x81%x82)^x83)%x84);

	if (t20 != 15U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = -356586815LL;
	int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MAX;
	volatile int64_t t21 = -1034346LL;

	t21 = (((x85%x86)^x87)%x88);

	if (t21 != 2147483520LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x89 = UINT16_MAX;
	static volatile uint32_t x90 = 14826U;
	volatile int8_t x91 = INT8_MIN;
	volatile uint32_t t22 = 8196U;

	t22 = (((x89%x90)^x91)%x92);

	if (t22 != 19146U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = 26U;
	volatile int64_t x95 = 1980LL;
	int32_t x96 = INT32_MAX;
	static int64_t t23 = -51952202LL;

	t23 = (((x93%x94)^x95)%x96);

	if (t23 != -1981LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	uint64_t x98 = 2017956LLU;
	static volatile uint16_t x99 = UINT16_MAX;
	volatile uint64_t t24 = 1207737020537769980LLU;

	t24 = (((x97%x98)^x99)%x100);

	if (t24 != 1528991LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	uint32_t x102 = 350467287U;
	int64_t x104 = INT64_MIN;
	static int64_t t25 = 1393LL;

	t25 = (((x101%x102)^x103)%x104);

	if (t25 != 89359848LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 1;
	uint16_t x106 = UINT16_MAX;
	uint32_t x107 = 25692U;
	static int64_t x108 = INT64_MIN;
	int64_t t26 = 200LL;

	t26 = (((x105%x106)^x107)%x108);

	if (t26 != 25693LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	uint32_t x110 = UINT32_MAX;
	int32_t x112 = -1;

	t27 = (((x109%x110)^x111)%x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 12317162U;
	int32_t x114 = INT32_MIN;
	uint32_t x115 = 10137U;
	int8_t x116 = 26;

	t28 = (((x113%x114)^x115)%x116);

	if (t28 != 15U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = UINT32_MAX;
	volatile int64_t x119 = INT64_MIN;
	int64_t t29 = 1LL;

	t29 = (((x117%x118)^x119)%x120);

	if (t29 != -757LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = -1LL;
	static int16_t x122 = 541;
	int64_t x124 = -5805918LL;
	int64_t t30 = -41791451476LL;

	t30 = (((x121%x122)^x123)%x124);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	static int64_t x130 = 3990574LL;
	static volatile int64_t t31 = 70605150LL;

	t31 = (((x129%x130)^x131)%x132);

	if (t31 != 2147483520LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	uint16_t x134 = UINT16_MAX;
	volatile uint32_t t32 = 10234U;

	t32 = (((x133%x134)^x135)%x136);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x139 = -509821880;
	uint16_t x140 = UINT16_MAX;

	t33 = (((x137%x138)^x139)%x140);

	if (t33 != -25115) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 2U;
	int64_t x142 = INT64_MIN;
	static int8_t x143 = INT8_MIN;
	volatile int64_t x144 = -15058LL;
	int64_t t34 = 4346328388LL;

	t34 = (((x141%x142)^x143)%x144);

	if (t34 != -126LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x145 = -5;
	int8_t x146 = INT8_MIN;
	int16_t x147 = 22;
	uint32_t t35 = 51579U;

	t35 = (((x145%x146)^x147)%x148);

	if (t35 != 4294967277U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x151 = INT8_MAX;
	static uint64_t x152 = 13318126356LLU;
	uint64_t t36 = 26728492913883759LLU;

	t36 = (((x149%x150)^x151)%x152);

	if (t36 != 11256669363LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MIN;
	int32_t x155 = -30007;
	volatile int16_t x156 = INT16_MIN;
	static int32_t t37 = 1;

	t37 = (((x153%x154)^x155)%x156);

	if (t37 != -30007) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x157 = -42525756902198372LL;
	int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MAX;
	int8_t x160 = -1;

	t38 = (((x157%x158)^x159)%x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x162 = INT16_MAX;
	int16_t x163 = INT16_MAX;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t39 = 1432643207U;

	t39 = (((x161%x162)^x163)%x164);

	if (t39 != 4294934528U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -2033139011960966LL;
	int32_t x166 = 124147707;
	static uint8_t x168 = 3U;
	int64_t t40 = 1700142LL;

	t40 = (((x165%x166)^x167)%x168);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = UINT64_MAX;
	uint16_t x171 = 1U;
	static uint8_t x172 = 1U;

	t41 = (((x169%x170)^x171)%x172);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -1;
	int16_t x174 = -1;
	volatile int8_t x175 = INT8_MAX;
	int64_t x176 = -35120918208LL;

	t42 = (((x173%x174)^x175)%x176);

	if (t42 != 127LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x177 = -25;
	static int32_t x178 = INT32_MIN;
	static int16_t x179 = INT16_MAX;
	int32_t x180 = INT32_MIN;
	int32_t t43 = 87015099;

	t43 = (((x177%x178)^x179)%x180);

	if (t43 != -32744) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = 175903967U;
	uint32_t x182 = 1405417705U;
	uint32_t x183 = 15U;
	volatile uint16_t x184 = 2923U;
	uint32_t t44 = 252U;

	t44 = (((x181%x182)^x183)%x184);

	if (t44 != 735U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x186 = -1;
	volatile uint64_t x188 = 8037429059463797020LLU;
	volatile uint64_t t45 = 130064267908LLU;

	t45 = (((x185%x186)^x187)%x188);

	if (t45 != 4294967295LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x189 = -1;
	int32_t x190 = -1;
	int16_t x191 = -1;
	int64_t x192 = INT64_MIN;
	int64_t t46 = 17178364126LL;

	t46 = (((x189%x190)^x191)%x192);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = -413295657;
	volatile int64_t x195 = INT64_MAX;
	int8_t x196 = INT8_MIN;
	volatile uint64_t t47 = 3LLU;

	t47 = (((x193%x194)^x195)%x196);

	if (t47 != 9223372036854734240LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 3U;
	static int64_t x199 = INT64_MAX;
	int32_t x200 = INT32_MIN;
	static int64_t t48 = -45068LL;

	t48 = (((x197%x198)^x199)%x200);

	if (t48 != 2147483644LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x201 = 0;
	uint64_t x202 = 104231859LLU;
	int64_t x203 = -1LL;
	int64_t x204 = -1LL;
	uint64_t t49 = 128LLU;

	t49 = (((x201%x202)^x203)%x204);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = 874;
	volatile int16_t x206 = INT16_MIN;
	int16_t x207 = 12;
	volatile int32_t t50 = -15689726;

	t50 = (((x205%x206)^x207)%x208);

	if (t50 != 51) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MIN;
	int32_t x211 = INT32_MAX;
	int32_t x212 = -19984;
	volatile int32_t t51 = -102;

	t51 = (((x209%x210)^x211)%x212);

	if (t51 != -3007) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x213 = UINT8_MAX;

	t52 = (((x213%x214)^x215)%x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = -1LL;
	uint64_t x218 = 22427578625283LLU;
	int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MAX;
	volatile uint64_t t53 = 31298LLU;

	t53 = (((x217%x218)^x219)%x220);

	if (t53 != 16685LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 103LLU;
	volatile int32_t x222 = -1;
	uint64_t x223 = UINT64_MAX;
	static int16_t x224 = -1;
	volatile uint64_t t54 = 629950561LLU;

	t54 = (((x221%x222)^x223)%x224);

	if (t54 != 18446744073709551512LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = 1804;
	int64_t x226 = INT64_MAX;
	int8_t x227 = INT8_MIN;
	int64_t x228 = -1LL;
	volatile int64_t t55 = -1LL;

	t55 = (((x225%x226)^x227)%x228);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = -1LL;
	int64_t x230 = INT64_MIN;
	static uint64_t x231 = 65069554071570389LLU;
	volatile uint64_t x232 = 8042096LLU;
	volatile uint64_t t56 = 30083865205285LLU;

	t56 = (((x229%x230)^x231)%x232);

	if (t56 != 1615530LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = -218;
	static int32_t x234 = -325314552;
	int16_t x235 = INT16_MIN;
	uint16_t x236 = UINT16_MAX;
	static int32_t t57 = 19289;

	t57 = (((x233%x234)^x235)%x236);

	if (t57 != 32550) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x237 = INT32_MAX;
	uint8_t x238 = 2U;
	static int64_t x240 = INT64_MIN;
	volatile int64_t t58 = -24038LL;

	t58 = (((x237%x238)^x239)%x240);

	if (t58 != 12LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MIN;
	uint16_t x242 = 3645U;
	int32_t x243 = 431230;
	int16_t x244 = INT16_MIN;
	int32_t t59 = -864737000;

	t59 = (((x241%x242)^x243)%x244);

	if (t59 != -6762) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x245 = 20917157U;
	int32_t x246 = -1;
	int16_t x247 = -1;
	volatile uint32_t t60 = 398U;

	t60 = (((x245%x246)^x247)%x248);

	if (t60 != 43U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = -13;
	static int32_t x250 = -1;
	int64_t x252 = INT64_MIN;
	volatile int64_t t61 = -123675649638LL;

	t61 = (((x249%x250)^x251)%x252);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = -1LL;
	uint64_t x254 = 3089020LLU;
	uint64_t x255 = UINT64_MAX;
	static uint64_t t62 = 31LLU;

	t62 = (((x253%x254)^x255)%x256);

	if (t62 != 18446744073707409900LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x257 = -1LL;
	uint8_t x258 = UINT8_MAX;
	uint32_t x259 = UINT32_MAX;
	volatile int64_t t63 = 11367698048802LL;

	t63 = (((x257%x258)^x259)%x260);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = -1720;
	int64_t x262 = INT64_MIN;
	uint32_t x264 = 92542U;
	volatile int64_t t64 = 101388620004219LL;

	t64 = (((x261%x262)^x263)%x264);

	if (t64 != -32698LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MIN;
	int16_t x267 = INT16_MAX;
	uint64_t x268 = 242540603LLU;

	t65 = (((x265%x266)^x267)%x268);

	if (t65 != 220819476LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x269 = 9182609LLU;
	int8_t x270 = 32;
	volatile int32_t x271 = INT32_MAX;
	int8_t x272 = -3;
	static uint64_t t66 = 929879033LLU;

	t66 = (((x269%x270)^x271)%x272);

	if (t66 != 2147483630LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = INT64_MAX;
	int8_t x274 = INT8_MIN;
	static volatile int8_t x275 = 30;
	int16_t x276 = -1;

	t67 = (((x273%x274)^x275)%x276);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x277 = UINT32_MAX;
	uint16_t x278 = 779U;
	uint16_t x279 = UINT16_MAX;
	volatile uint32_t x280 = 3457U;
	volatile uint32_t t68 = 1519842609U;

	t68 = (((x277%x278)^x279)%x280);

	if (t68 != 2658U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x282 = -1;
	int64_t x283 = INT64_MAX;
	int16_t x284 = -1;
	volatile int64_t t69 = 1LL;

	t69 = (((x281%x282)^x283)%x284);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x285 = UINT64_MAX;
	int8_t x286 = 48;
	static int16_t x287 = 0;
	static uint64_t t70 = 340319LLU;

	t70 = (((x285%x286)^x287)%x288);

	if (t70 != 15LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x289 = INT16_MAX;
	int64_t x290 = INT64_MIN;
	static int32_t x291 = INT32_MAX;
	int16_t x292 = INT16_MAX;
	volatile int64_t t71 = 6758898628261LL;

	t71 = (((x289%x290)^x291)%x292);

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = -1;
	int64_t x294 = 1101824LL;
	int16_t x295 = INT16_MAX;
	static int16_t x296 = 7660;
	int64_t t72 = -1165LL;

	t72 = (((x293%x294)^x295)%x296);

	if (t72 != -2128LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x297 = 1072519633U;
	int32_t x298 = -2682;
	int8_t x299 = INT8_MAX;
	uint16_t x300 = 48U;
	uint32_t t73 = 33822U;

	t73 = (((x297%x298)^x299)%x300);

	if (t73 != 14U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x301 = UINT64_MAX;
	volatile uint16_t x303 = 2U;
	static int16_t x304 = 26;
	static volatile uint64_t t74 = 21148898LLU;

	t74 = (((x301%x302)^x303)%x304);

	if (t74 != 2LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x306 = INT16_MAX;
	static volatile int16_t x308 = 1347;
	int64_t t75 = 3133195LL;

	t75 = (((x305%x306)^x307)%x308);

	if (t75 != -1186LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x309 = 8;
	volatile uint16_t x310 = 19U;
	uint32_t x311 = 317556U;

	t76 = (((x309%x310)^x311)%x312);

	if (t76 != 14U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x314 = INT16_MIN;
	volatile int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MIN;
	volatile uint64_t t77 = 87334062557236LLU;

	t77 = (((x313%x314)^x315)%x316);

	if (t77 != 9212712902910192234LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x317 = UINT64_MAX;
	int8_t x318 = 1;
	volatile uint32_t x319 = 76045U;
	int64_t x320 = INT64_MAX;

	t78 = (((x317%x318)^x319)%x320);

	if (t78 != 76045LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x321 = UINT8_MAX;
	int64_t x322 = 3883869LL;
	static volatile int16_t x323 = INT16_MIN;
	uint16_t x324 = 1191U;
	static volatile int64_t t79 = 7010758970LL;

	t79 = (((x321%x322)^x323)%x324);

	if (t79 != -356LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x326 = -1LL;
	int8_t x327 = 2;
	volatile int32_t x328 = -1;
	volatile int64_t t80 = 13703532LL;

	t80 = (((x325%x326)^x327)%x328);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x329 = 344503017U;
	uint32_t x330 = 124361U;
	uint64_t x331 = 899LLU;
	static uint16_t x332 = 12922U;

	t81 = (((x329%x330)^x331)%x332);

	if (t81 != 9994LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x333 = 4558U;
	int8_t x334 = INT8_MIN;
	int32_t x336 = -1;

	t82 = (((x333%x334)^x335)%x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x338 = INT8_MAX;
	int32_t x339 = 1;
	int16_t x340 = -1;
	int32_t t83 = 401601;

	t83 = (((x337%x338)^x339)%x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x342 = 1;
	int32_t x343 = INT32_MIN;
	volatile int64_t x344 = INT64_MAX;
	int64_t t84 = -190368143148698078LL;

	t84 = (((x341%x342)^x343)%x344);

	if (t84 != -2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = INT16_MAX;
	int64_t x347 = INT64_MIN;
	uint16_t x348 = UINT16_MAX;
	volatile int64_t t85 = 107345927LL;

	t85 = (((x345%x346)^x347)%x348);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MIN;
	volatile uint8_t x351 = UINT8_MAX;
	int32_t x352 = INT32_MAX;
	int32_t t86 = -254065;

	t86 = (((x349%x350)^x351)%x352);

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = 19;
	volatile int32_t x355 = INT32_MIN;
	uint16_t x356 = UINT16_MAX;
	int32_t t87 = 7;

	t87 = (((x353%x354)^x355)%x356);

	if (t87 != -32749) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x357 = INT8_MAX;
	int8_t x358 = -54;
	int16_t x359 = -73;

	t88 = (((x357%x358)^x359)%x360);

	if (t88 != -92) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x361 = INT64_MIN;
	uint32_t x362 = 1808U;
	int8_t x363 = INT8_MIN;

	t89 = (((x361%x362)^x363)%x364);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = 11;
	int64_t x367 = INT64_MAX;
	int64_t x368 = INT64_MIN;
	int64_t t90 = 912LL;

	t90 = (((x365%x366)^x367)%x368);

	if (t90 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x369 = -1;
	static int8_t x370 = 15;
	int8_t x371 = INT8_MAX;
	int8_t x372 = INT8_MAX;
	int32_t t91 = -7;

	t91 = (((x369%x370)^x371)%x372);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x374 = UINT8_MAX;
	volatile uint16_t x375 = 14875U;
	int32_t x376 = INT32_MAX;

	t92 = (((x373%x374)^x375)%x376);

	if (t92 != -14949) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x377 = 11793U;
	int16_t x378 = -2745;
	int8_t x380 = 1;

	t93 = (((x377%x378)^x379)%x380);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x386 = -743627LL;
	static int64_t x387 = -5769892LL;
	volatile int64_t t94 = -217LL;

	t94 = (((x385%x386)^x387)%x388);

	if (t94 != 15LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = INT32_MAX;
	volatile int32_t x390 = INT32_MIN;
	volatile uint8_t x391 = UINT8_MAX;
	uint8_t x392 = 28U;
	volatile int32_t t95 = -16107223;

	t95 = (((x389%x390)^x391)%x392);

	if (t95 != 12) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x393 = UINT16_MAX;
	static uint16_t x394 = UINT16_MAX;
	uint32_t x395 = UINT32_MAX;
	uint32_t x396 = 184202885U;
	uint32_t t96 = 983610208U;

	t96 = (((x393%x394)^x395)%x396);

	if (t96 != 58300940U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x398 = 1941;
	int64_t x399 = 305LL;
	volatile int64_t t97 = -3899179484106LL;

	t97 = (((x397%x398)^x399)%x400);

	if (t97 != -70LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = INT64_MIN;
	static int64_t x402 = INT64_MIN;
	static int64_t x403 = INT64_MAX;
	int16_t x404 = INT16_MIN;
	volatile int64_t t98 = 1LL;

	t98 = (((x401%x402)^x403)%x404);

	if (t98 != 32767LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = 1981220557LLU;
	int32_t x412 = -1;

	t99 = (((x409%x410)^x411)%x412);

	if (t99 != 18446744071728331058LLU) { NG(); } else { ; }
	
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


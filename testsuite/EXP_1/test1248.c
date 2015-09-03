#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1814;
static int64_t x4 = INT64_MIN;
static volatile uint64_t t0 = 16LLU;
static uint16_t x5 = 1U;
static int16_t x6 = -1;
volatile int64_t x9 = INT64_MIN;
int64_t x15 = -1LL;
int64_t t4 = 0LL;
static int16_t x28 = INT16_MIN;
int16_t x29 = INT16_MAX;
volatile int32_t t7 = 133;
volatile int32_t x35 = 1;
static uint32_t x37 = UINT32_MAX;
int64_t x49 = INT64_MIN;
static uint64_t x50 = 12400253489LLU;
int8_t x51 = INT8_MIN;
volatile int8_t x52 = -13;
int16_t x57 = INT16_MIN;
int16_t x71 = INT16_MIN;
uint32_t x77 = 37892070U;
uint64_t x79 = 2375192621106605LLU;
int32_t t20 = 1415032;
uint16_t x96 = UINT16_MAX;
static uint64_t x99 = UINT64_MAX;
volatile uint64_t t24 = 200919LLU;
int16_t x104 = INT16_MAX;
uint64_t x106 = 31730908702833332LLU;
int32_t t26 = 34;
volatile int32_t x112 = INT32_MIN;
static volatile uint32_t t31 = 17620U;
uint8_t x130 = 4U;
uint16_t x134 = UINT16_MAX;
int64_t x135 = INT64_MAX;
volatile int64_t t33 = INT64_MIN;
int32_t x144 = INT32_MIN;
volatile uint64_t t35 = 6527106974276LLU;
volatile int64_t t37 = 21847035583LL;
int16_t x153 = INT16_MIN;
int8_t x154 = INT8_MAX;
uint32_t x161 = UINT32_MAX;
volatile int64_t x164 = INT64_MIN;
volatile uint32_t t41 = UINT32_MAX;
static uint16_t x183 = UINT16_MAX;
int64_t t45 = 13938LL;
static volatile int64_t t46 = INT64_MIN;
volatile int64_t t47 = -185100238650LL;
volatile int64_t t48 = 750270384LL;
volatile int32_t x200 = 7326;
volatile uint32_t x207 = 184204840U;
int16_t x212 = -1;
int16_t x213 = INT16_MIN;
int16_t x218 = INT16_MIN;
uint32_t t55 = UINT32_MAX;
volatile uint64_t t57 = 41873LLU;
int16_t x242 = INT16_MAX;
int64_t x257 = INT64_MAX;
uint64_t x262 = UINT64_MAX;
volatile uint64_t x266 = 6LLU;
int16_t x267 = INT16_MIN;
static int16_t x274 = INT16_MIN;
int64_t t67 = 26568521LL;
int32_t x280 = INT32_MIN;
int64_t x283 = -96LL;
static int64_t x285 = INT64_MAX;
volatile uint32_t t72 = 900641584U;
volatile uint16_t x301 = UINT16_MAX;
uint32_t x307 = 13042U;
int32_t t76 = 14314;
int16_t x315 = INT16_MAX;
int16_t x316 = INT16_MAX;
volatile int32_t x317 = -1;
static int16_t x319 = 1;
volatile int32_t t79 = -47990;
volatile int64_t x331 = INT64_MAX;
static int8_t x338 = -1;
volatile uint32_t x341 = UINT32_MAX;
int32_t x342 = -1;
volatile uint32_t t85 = 58128442U;
volatile uint8_t x350 = 1U;
int32_t x355 = INT32_MAX;
int32_t x360 = 8953339;
int32_t t88 = -270;
volatile int64_t t90 = -182LL;
volatile int64_t x372 = -1LL;
volatile int64_t t91 = -3079734138222LL;
int16_t x373 = -1;
uint32_t x379 = 4004U;
uint64_t x380 = 364624205822LLU;
volatile uint64_t x383 = UINT64_MAX;
int64_t t95 = 0LL;
int8_t x389 = 1;
int32_t x400 = INT32_MAX;
static uint8_t x402 = 7U;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint64_t x3 = 15LLU;

	t0 = (((x1==x2)%x3)^x4);

	if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = -1;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = INT32_MAX;

	t1 = (((x5==x6)%x7)^x8);

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x10 = 1183798U;
	uint32_t x11 = 3U;
	int32_t x12 = INT32_MAX;
	volatile uint32_t t2 = 251680U;

	t2 = (((x9==x10)%x11)^x12);

	if (t2 != 2147483647U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	int16_t x14 = INT16_MIN;
	static int16_t x16 = INT16_MIN;
	int64_t t3 = 63LL;

	t3 = (((x13==x14)%x15)^x16);

	if (t3 != -32768LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 6700U;
	int64_t x18 = 96LL;
	static int64_t x19 = 3LL;
	static volatile int32_t x20 = INT32_MIN;

	t4 = (((x17==x18)%x19)^x20);

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1U;
	uint64_t x22 = 2840LLU;
	int16_t x23 = -89;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -31210;

	t5 = (((x21==x22)%x23)^x24);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 28;
	static int32_t x26 = -11805;
	int16_t x27 = -1;
	volatile int32_t t6 = 35843;

	t6 = (((x25==x26)%x27)^x28);

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x30 = UINT64_MAX;
	int8_t x31 = INT8_MAX;
	static int32_t x32 = -1;

	t7 = (((x29==x30)%x31)^x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 1912710853U;
	volatile int32_t x34 = -1;
	static int64_t x36 = 123300103595011LL;
	static int64_t t8 = 888712233094642LL;

	t8 = (((x33==x34)%x35)^x36);

	if (t8 != 123300103595011LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -1;
	int16_t x39 = 51;
	int64_t x40 = INT64_MAX;
	int64_t t9 = 345727441335LL;

	t9 = (((x37==x38)%x39)^x40);

	if (t9 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 1U;
	uint8_t x42 = UINT8_MAX;
	static int64_t x43 = INT64_MIN;
	static uint8_t x44 = 2U;
	volatile int64_t t10 = -65984678LL;

	t10 = (((x41==x42)%x43)^x44);

	if (t10 != 2LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x45 = 3U;
	int16_t x46 = INT16_MAX;
	int64_t x47 = INT64_MIN;
	int16_t x48 = -1;
	volatile int64_t t11 = -783LL;

	t11 = (((x45==x46)%x47)^x48);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t t12 = 63;

	t12 = (((x49==x50)%x51)^x52);

	if (t12 != -13) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 498U;
	int16_t x54 = -1;
	uint8_t x55 = 25U;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = INT32_MIN;

	t13 = (((x53==x54)%x55)^x56);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = UINT64_MAX;
	int32_t x59 = -1;
	int64_t x60 = 232830769170405048LL;
	int64_t t14 = 215037566972022547LL;

	t14 = (((x57==x58)%x59)^x60);

	if (t14 != 232830769170405048LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 30095LLU;
	int8_t x62 = INT8_MIN;
	volatile int32_t x63 = INT32_MIN;
	int8_t x64 = -21;
	int32_t t15 = 42467;

	t15 = (((x61==x62)%x63)^x64);

	if (t15 != -21) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	static uint8_t x66 = 12U;
	static volatile int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MIN;
	int32_t t16 = INT32_MIN;

	t16 = (((x65==x66)%x67)^x68);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 86893365899LLU;
	uint8_t x70 = UINT8_MAX;
	uint32_t x72 = 209U;
	static uint32_t t17 = 17783U;

	t17 = (((x69==x70)%x71)^x72);

	if (t17 != 209U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 309358524;
	int64_t x74 = -1697481388394330LL;
	int16_t x75 = -10627;
	uint64_t x76 = 52932945765LLU;
	static uint64_t t18 = 141269376LLU;

	t18 = (((x73==x74)%x75)^x76);

	if (t18 != 52932945765LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MIN;
	int8_t x80 = INT8_MAX;
	uint64_t t19 = 73361950350974654LLU;

	t19 = (((x77==x78)%x79)^x80);

	if (t19 != 127LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -64768658305LL;
	static volatile int8_t x82 = 23;
	volatile int8_t x83 = -1;
	volatile int8_t x84 = 1;

	t20 = (((x81==x82)%x83)^x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 2U;
	volatile int8_t x86 = INT8_MAX;
	volatile int16_t x87 = INT16_MIN;
	uint64_t x88 = 125730715LLU;
	static volatile uint64_t t21 = 2100300585588547681LLU;

	t21 = (((x85==x86)%x87)^x88);

	if (t21 != 125730715LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 13U;
	uint64_t x90 = UINT64_MAX;
	static int32_t x91 = 3414173;
	int16_t x92 = INT16_MIN;
	int32_t t22 = 266784925;

	t22 = (((x89==x90)%x91)^x92);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static volatile int8_t x94 = 49;
	int64_t x95 = INT64_MIN;
	static volatile int64_t t23 = -7LL;

	t23 = (((x93==x94)%x95)^x96);

	if (t23 != 65535LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = UINT16_MAX;
	int32_t x98 = INT32_MAX;
	uint32_t x100 = 122522145U;

	t24 = (((x97==x98)%x99)^x100);

	if (t24 != 122522145LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MIN;
	static uint64_t x102 = UINT64_MAX;
	int16_t x103 = -1;
	volatile int32_t t25 = -1899561;

	t25 = (((x101==x102)%x103)^x104);

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -1;
	int32_t x107 = 139;
	int8_t x108 = INT8_MIN;

	t26 = (((x105==x106)%x107)^x108);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = 867;
	int64_t x110 = -13404546343LL;
	static int16_t x111 = INT16_MAX;
	int32_t t27 = INT32_MIN;

	t27 = (((x109==x110)%x111)^x112);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 195U;
	uint16_t x114 = 3933U;
	static volatile int32_t x115 = -310355;
	int16_t x116 = INT16_MIN;
	int32_t t28 = -155;

	t28 = (((x113==x114)%x115)^x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	uint8_t x118 = 5U;
	uint8_t x119 = UINT8_MAX;
	volatile uint8_t x120 = 60U;
	static int32_t t29 = -6942122;

	t29 = (((x117==x118)%x119)^x120);

	if (t29 != 60) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = UINT8_MAX;
	volatile int8_t x122 = INT8_MIN;
	volatile uint64_t x123 = 255206LLU;
	int64_t x124 = INT64_MIN;
	uint64_t t30 = 10785313854LLU;

	t30 = (((x121==x122)%x123)^x124);

	if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MIN;
	int32_t x126 = INT32_MIN;
	uint32_t x127 = 19042U;
	int32_t x128 = -1;

	t31 = (((x125==x126)%x127)^x128);

	if (t31 != 4294967294U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int8_t x131 = -44;
	int16_t x132 = -1;
	int32_t t32 = -9161;

	t32 = (((x129==x130)%x131)^x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -4;
	volatile int64_t x136 = INT64_MIN;

	t33 = (((x133==x134)%x135)^x136);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	int64_t x138 = 61LL;
	volatile int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MIN;
	int64_t t34 = 90089206102036610LL;

	t34 = (((x137==x138)%x139)^x140);

	if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = UINT32_MAX;
	volatile int32_t x142 = INT32_MAX;
	uint64_t x143 = 166891961LLU;

	t35 = (((x141==x142)%x143)^x144);

	if (t35 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 4U;
	uint16_t x146 = UINT16_MAX;
	int32_t x147 = INT32_MIN;
	uint16_t x148 = 438U;
	volatile int32_t t36 = -315768;

	t36 = (((x145==x146)%x147)^x148);

	if (t36 != 438) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 14U;
	static int64_t x150 = INT64_MIN;
	int64_t x151 = -33919555LL;
	int16_t x152 = 3;

	t37 = (((x149==x150)%x151)^x152);

	if (t37 != 3LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x155 = -1;
	int8_t x156 = -1;
	int32_t t38 = -1;

	t38 = (((x153==x154)%x155)^x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = 3;
	volatile uint32_t x158 = UINT32_MAX;
	int64_t x159 = -1LL;
	int16_t x160 = INT16_MAX;
	int64_t t39 = -231656LL;

	t39 = (((x157==x158)%x159)^x160);

	if (t39 != 32767LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x162 = 7273U;
	int8_t x163 = INT8_MAX;
	int64_t t40 = INT64_MIN;

	t40 = (((x161==x162)%x163)^x164);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 0U;
	volatile uint16_t x166 = 355U;
	int32_t x167 = 1;
	uint32_t x168 = UINT32_MAX;

	t41 = (((x165==x166)%x167)^x168);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int16_t x170 = -1;
	uint64_t x171 = UINT64_MAX;
	uint32_t x172 = UINT32_MAX;
	volatile uint64_t t42 = 3LLU;

	t42 = (((x169==x170)%x171)^x172);

	if (t42 != 4294967295LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	int32_t x174 = -120403;
	uint64_t x175 = UINT64_MAX;
	static volatile uint16_t x176 = UINT16_MAX;
	uint64_t t43 = 122590105LLU;

	t43 = (((x173==x174)%x175)^x176);

	if (t43 != 65535LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	static int16_t x178 = -1177;
	int16_t x179 = -1;
	static int16_t x180 = -1;
	static volatile int32_t t44 = 0;

	t44 = (((x177==x178)%x179)^x180);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MIN;
	int8_t x182 = -1;
	int64_t x184 = -1LL;

	t45 = (((x181==x182)%x183)^x184);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x185 = 29U;
	int64_t x186 = -1LL;
	uint16_t x187 = UINT16_MAX;
	static int64_t x188 = INT64_MIN;

	t46 = (((x185==x186)%x187)^x188);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -315;
	uint64_t x190 = 34233353926655LLU;
	static int64_t x191 = 806373378LL;
	int32_t x192 = 195293;

	t47 = (((x189==x190)%x191)^x192);

	if (t47 != 195293LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = UINT64_MAX;
	int64_t x194 = INT64_MIN;
	volatile int64_t x195 = INT64_MIN;
	volatile int32_t x196 = -1;

	t48 = (((x193==x194)%x195)^x196);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 18U;
	volatile int8_t x198 = INT8_MAX;
	volatile int8_t x199 = INT8_MIN;
	static volatile int32_t t49 = 0;

	t49 = (((x197==x198)%x199)^x200);

	if (t49 != 7326) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 3U;
	int16_t x206 = 0;
	volatile int64_t x208 = INT64_MAX;
	static int64_t t50 = INT64_MAX;

	t50 = (((x205==x206)%x207)^x208);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x209 = -1;
	volatile int16_t x210 = INT16_MAX;
	volatile int32_t x211 = 69222;
	static volatile int32_t t51 = -350;

	t51 = (((x209==x210)%x211)^x212);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x214 = -1;
	volatile int32_t x215 = INT32_MIN;
	static uint8_t x216 = UINT8_MAX;
	int32_t t52 = 29;

	t52 = (((x213==x214)%x215)^x216);

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x217 = -1;
	int64_t x219 = -3250301692554330LL;
	static int32_t x220 = INT32_MAX;
	int64_t t53 = -2LL;

	t53 = (((x217==x218)%x219)^x220);

	if (t53 != 2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = UINT64_MAX;
	volatile int32_t x222 = -4;
	int8_t x223 = INT8_MIN;
	int64_t x224 = 3833LL;
	static volatile int64_t t54 = -38608980441676363LL;

	t54 = (((x221==x222)%x223)^x224);

	if (t54 != 3833LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = -4;
	static int64_t x226 = INT64_MAX;
	uint8_t x227 = 30U;
	volatile uint32_t x228 = UINT32_MAX;

	t55 = (((x225==x226)%x227)^x228);

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x229 = UINT64_MAX;
	static int32_t x230 = -102;
	uint16_t x231 = 1U;
	volatile uint16_t x232 = UINT16_MAX;
	int32_t t56 = -1014;

	t56 = (((x229==x230)%x231)^x232);

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MAX;
	static uint32_t x234 = UINT32_MAX;
	volatile int32_t x235 = INT32_MIN;
	static uint64_t x236 = 63352909551754221LLU;

	t57 = (((x233==x234)%x235)^x236);

	if (t57 != 63352909551754221LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = UINT32_MAX;
	int64_t x238 = INT64_MAX;
	int32_t x239 = -1;
	uint16_t x240 = 13U;
	volatile int32_t t58 = 24;

	t58 = (((x237==x238)%x239)^x240);

	if (t58 != 13) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = 49669752LL;
	int32_t x243 = -25501;
	int8_t x244 = INT8_MIN;
	volatile int32_t t59 = -5192672;

	t59 = (((x241==x242)%x243)^x244);

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = -1;
	volatile int16_t x246 = -50;
	int8_t x247 = INT8_MIN;
	uint8_t x248 = UINT8_MAX;
	int32_t t60 = -555;

	t60 = (((x245==x246)%x247)^x248);

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x249 = 4LLU;
	int64_t x250 = INT64_MAX;
	static int32_t x251 = INT32_MAX;
	uint32_t x252 = 23U;
	volatile uint32_t t61 = 6U;

	t61 = (((x249==x250)%x251)^x252);

	if (t61 != 23U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = UINT8_MAX;
	static int64_t x254 = INT64_MAX;
	volatile int32_t x255 = INT32_MIN;
	uint8_t x256 = 120U;
	static volatile int32_t t62 = -470032;

	t62 = (((x253==x254)%x255)^x256);

	if (t62 != 120) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x258 = INT16_MIN;
	volatile int16_t x259 = INT16_MAX;
	uint8_t x260 = UINT8_MAX;
	static volatile int32_t t63 = 2161;

	t63 = (((x257==x258)%x259)^x260);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = INT16_MIN;
	int16_t x263 = INT16_MAX;
	int16_t x264 = INT16_MIN;
	int32_t t64 = -1;

	t64 = (((x261==x262)%x263)^x264);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = 1;
	int32_t x268 = -1;
	int32_t t65 = -2;

	t65 = (((x265==x266)%x267)^x268);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = INT64_MAX;
	static int16_t x270 = -83;
	int64_t x271 = -1LL;
	volatile uint32_t x272 = 53U;
	volatile int64_t t66 = -1743LL;

	t66 = (((x269==x270)%x271)^x272);

	if (t66 != 53LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = 0;
	int64_t x275 = INT64_MIN;
	int8_t x276 = INT8_MIN;

	t67 = (((x273==x274)%x275)^x276);

	if (t67 != -128LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x277 = INT8_MIN;
	volatile int16_t x278 = INT16_MIN;
	volatile int64_t x279 = INT64_MIN;
	volatile int64_t t68 = 195783653982LL;

	t68 = (((x277==x278)%x279)^x280);

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x281 = INT8_MAX;
	volatile int16_t x282 = INT16_MAX;
	static uint64_t x284 = 1LLU;
	volatile uint64_t t69 = 15739567LLU;

	t69 = (((x281==x282)%x283)^x284);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x286 = 11U;
	uint16_t x287 = 15840U;
	static uint8_t x288 = 9U;
	int32_t t70 = 740928164;

	t70 = (((x285==x286)%x287)^x288);

	if (t70 != 9) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = -388156324679726301LL;
	int64_t x290 = -1LL;
	int64_t x291 = INT64_MIN;
	int32_t x292 = -1;
	int64_t t71 = 58767232854LL;

	t71 = (((x289==x290)%x291)^x292);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = -184LL;
	volatile int64_t x294 = INT64_MIN;
	volatile int8_t x295 = INT8_MIN;
	uint32_t x296 = 5908U;

	t72 = (((x293==x294)%x295)^x296);

	if (t72 != 5908U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = -1;
	uint8_t x298 = UINT8_MAX;
	int16_t x299 = 18;
	int8_t x300 = -7;
	static volatile int32_t t73 = -925371046;

	t73 = (((x297==x298)%x299)^x300);

	if (t73 != -7) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x302 = 1231817650U;
	int32_t x303 = INT32_MAX;
	int64_t x304 = INT64_MAX;
	volatile int64_t t74 = INT64_MAX;

	t74 = (((x301==x302)%x303)^x304);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = INT64_MIN;
	uint8_t x306 = 3U;
	int32_t x308 = 822867;
	volatile uint32_t t75 = 185U;

	t75 = (((x305==x306)%x307)^x308);

	if (t75 != 822867U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x309 = 100U;
	static int16_t x310 = 0;
	int8_t x311 = INT8_MIN;
	static volatile int32_t x312 = 15;

	t76 = (((x309==x310)%x311)^x312);

	if (t76 != 15) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x313 = 14937209655LLU;
	uint8_t x314 = 2U;
	static int32_t t77 = -3709016;

	t77 = (((x313==x314)%x315)^x316);

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x318 = INT64_MIN;
	uint32_t x320 = 17732U;
	volatile uint32_t t78 = 1865U;

	t78 = (((x317==x318)%x319)^x320);

	if (t78 != 17732U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x321 = -15340648563LL;
	int64_t x322 = INT64_MAX;
	uint16_t x323 = UINT16_MAX;
	volatile uint8_t x324 = 1U;

	t79 = (((x321==x322)%x323)^x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = 0;
	static int8_t x326 = -1;
	int8_t x327 = -1;
	int64_t x328 = -1LL;
	static volatile int64_t t80 = -443116LL;

	t80 = (((x325==x326)%x327)^x328);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = INT8_MAX;
	int64_t x330 = -1LL;
	int32_t x332 = INT32_MIN;
	volatile int64_t t81 = -4312018072086042565LL;

	t81 = (((x329==x330)%x331)^x332);

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = INT16_MIN;
	uint64_t x334 = UINT64_MAX;
	int16_t x335 = INT16_MAX;
	volatile int16_t x336 = INT16_MAX;
	int32_t t82 = 22;

	t82 = (((x333==x334)%x335)^x336);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = INT16_MIN;
	uint32_t x339 = 31335U;
	static int64_t x340 = -9667663LL;
	volatile int64_t t83 = -6487LL;

	t83 = (((x337==x338)%x339)^x340);

	if (t83 != -9667663LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x343 = 16U;
	int8_t x344 = -1;
	int32_t t84 = -163643606;

	t84 = (((x341==x342)%x343)^x344);

	if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = INT32_MAX;
	int32_t x346 = INT32_MAX;
	uint32_t x347 = 233798062U;
	uint32_t x348 = 870U;

	t85 = (((x345==x346)%x347)^x348);

	if (t85 != 871U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = 60;
	static uint32_t x351 = 11U;
	int64_t x352 = INT64_MIN;
	int64_t t86 = INT64_MIN;

	t86 = (((x349==x350)%x351)^x352);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x353 = UINT16_MAX;
	volatile int64_t x354 = INT64_MIN;
	int64_t x356 = INT64_MIN;
	static int64_t t87 = INT64_MIN;

	t87 = (((x353==x354)%x355)^x356);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MIN;
	volatile int16_t x359 = -3111;

	t88 = (((x357==x358)%x359)^x360);

	if (t88 != 8953338) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = INT64_MIN;
	static volatile int32_t x362 = INT32_MAX;
	static int8_t x363 = INT8_MIN;
	int64_t x364 = INT64_MIN;
	volatile int64_t t89 = INT64_MIN;

	t89 = (((x361==x362)%x363)^x364);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x365 = 615LLU;
	static uint64_t x366 = UINT64_MAX;
	volatile int64_t x367 = -1LL;
	volatile int8_t x368 = 14;

	t90 = (((x365==x366)%x367)^x368);

	if (t90 != 14LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x369 = 18U;
	int8_t x370 = -1;
	uint8_t x371 = 5U;

	t91 = (((x369==x370)%x371)^x372);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x374 = -1;
	int64_t x375 = INT64_MIN;
	static int32_t x376 = INT32_MIN;
	volatile int64_t t92 = -6953LL;

	t92 = (((x373==x374)%x375)^x376);

	if (t92 != -2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x377 = 607785568U;
	uint64_t x378 = 80933327210905LLU;
	volatile uint64_t t93 = 11442634565LLU;

	t93 = (((x377==x378)%x379)^x380);

	if (t93 != 364624205822LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = INT64_MIN;
	uint64_t x382 = 76794378024460275LLU;
	int64_t x384 = -1LL;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (((x381==x382)%x383)^x384);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x385 = INT8_MAX;
	int8_t x386 = 25;
	int64_t x387 = INT64_MIN;
	static int32_t x388 = INT32_MAX;

	t95 = (((x385==x386)%x387)^x388);

	if (t95 != 2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x390 = INT64_MIN;
	uint32_t x391 = 120755U;
	int16_t x392 = INT16_MIN;
	uint32_t t96 = 9U;

	t96 = (((x389==x390)%x391)^x392);

	if (t96 != 4294934528U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x393 = -8101;
	int32_t x394 = -40034306;
	int32_t x395 = INT32_MIN;
	uint64_t x396 = 3838662443673404LLU;
	uint64_t t97 = 192992708545LLU;

	t97 = (((x393==x394)%x395)^x396);

	if (t97 != 3838662443673404LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x397 = -1;
	int16_t x398 = -1;
	int32_t x399 = -1;
	int32_t t98 = INT32_MAX;

	t98 = (((x397==x398)%x399)^x400);

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = INT32_MIN;
	int16_t x403 = -1;
	uint64_t x404 = 57842558644999706LLU;
	volatile uint64_t t99 = 13135390LLU;

	t99 = (((x401==x402)%x403)^x404);

	if (t99 != 57842558644999706LLU) { NG(); } else { ; }
	
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


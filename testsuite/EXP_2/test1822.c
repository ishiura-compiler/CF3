#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MAX;
int32_t x9 = INT32_MIN;
volatile uint64_t t2 = 70LLU;
volatile int16_t x13 = INT16_MIN;
static uint32_t x18 = 618364U;
volatile int64_t x20 = -1390914668LL;
int8_t x22 = INT8_MIN;
static volatile int32_t t6 = -1;
uint16_t x34 = 1524U;
int8_t x47 = 1;
uint8_t x49 = 18U;
int8_t x51 = INT8_MAX;
static volatile int32_t x58 = -1;
int32_t t12 = 1002126007;
int64_t x64 = -1LL;
uint64_t t14 = 953007LLU;
int16_t x69 = 1;
uint8_t x70 = 3U;
int32_t x72 = INT32_MAX;
int32_t x73 = INT32_MIN;
int8_t x80 = INT8_MAX;
int32_t x84 = INT32_MIN;
volatile int64_t x88 = 6388293133481LL;
int64_t x103 = -1LL;
uint64_t x107 = UINT64_MAX;
int64_t x109 = INT64_MAX;
int64_t x113 = 10950708457886204LL;
static int16_t x114 = INT16_MIN;
uint16_t x116 = 3U;
volatile int64_t t26 = -1424LL;
static uint32_t x121 = UINT32_MAX;
static int32_t x126 = 3;
volatile int16_t x129 = INT16_MIN;
static uint64_t t30 = 68163531LLU;
int32_t x138 = 0;
uint32_t x142 = 1U;
int32_t x143 = INT32_MIN;
volatile int64_t t34 = -2059543745970368128LL;
uint8_t x151 = 105U;
int32_t t35 = -1757898;
uint8_t x171 = UINT8_MAX;
uint16_t x180 = 14652U;
uint16_t x183 = UINT16_MAX;
int64_t x188 = INT64_MAX;
int64_t t43 = -2417270LL;
uint64_t x206 = 129488009063LLU;
volatile int32_t x207 = INT32_MIN;
volatile int32_t t48 = 6951;
static int8_t x215 = INT8_MIN;
uint16_t x216 = 0U;
uint32_t t49 = 12U;
static uint8_t x223 = 10U;
int8_t x225 = INT8_MIN;
int32_t t52 = 47908478;
uint32_t x231 = 3U;
static volatile int64_t x232 = -118313114LL;
static int16_t x240 = INT16_MIN;
int64_t x243 = 2301615090LL;
int64_t x244 = -1803379LL;
int16_t x246 = -10266;
static volatile int8_t x254 = INT8_MIN;
volatile int16_t x256 = INT16_MIN;
int32_t x259 = -3520;
uint64_t t60 = 6905984736512831LLU;
int64_t x261 = 8079268874872LL;
static int8_t x267 = INT8_MAX;
volatile int16_t x276 = -2;
int8_t x277 = INT8_MIN;
int32_t x287 = INT32_MIN;
int16_t x288 = -1;
int32_t x293 = -1;
uint8_t x301 = 4U;
static volatile int64_t x303 = -1LL;
static int16_t x308 = -1;
uint64_t x319 = 12133LLU;
uint32_t x324 = UINT32_MAX;
int64_t x325 = INT64_MIN;
uint16_t x326 = 82U;
volatile int32_t x329 = -17033;
volatile int32_t x333 = INT32_MIN;
static int64_t x335 = -2031212543LL;
static uint8_t x340 = 45U;
uint16_t x347 = 4U;
static int32_t t80 = 243020;
int32_t x350 = INT32_MIN;
volatile uint64_t x352 = 8369781LLU;
int16_t x353 = INT16_MIN;
volatile int16_t x367 = -1;
uint8_t x388 = 60U;
volatile uint64_t t90 = 3553485248539121LLU;
int16_t x390 = INT16_MAX;
static int32_t x391 = INT32_MAX;
volatile int64_t t91 = -16081401LL;
int8_t x399 = -1;
uint16_t x405 = UINT16_MAX;
int8_t x413 = INT8_MAX;
int8_t x419 = 63;
int64_t x421 = INT64_MIN;
uint8_t x422 = UINT8_MAX;
int64_t x427 = INT64_MIN;
uint16_t x428 = UINT16_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile uint16_t x2 = 44U;
	int64_t x3 = INT64_MIN;
	int64_t x4 = -35055782LL;
	int64_t t0 = -8167916448640842LL;

	t0 = ((x1&(x2&x3))-x4);

	if (t0 != 35055782LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = -49345994;
	int32_t x7 = INT32_MIN;
	int16_t x8 = INT16_MIN;
	volatile int64_t t1 = -6282330764LL;

	t1 = ((x5&(x6&x7))-x8);

	if (t1 != 9223372034707324928LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = 1908774080615LLU;
	int8_t x11 = INT8_MAX;
	uint16_t x12 = 73U;

	t2 = ((x9&(x10&x11))-x12);

	if (t2 != 18446744073709551543LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x14 = 56608LL;
	int16_t x15 = -1;
	int64_t x16 = -1LL;
	int64_t t3 = -18LL;

	t3 = ((x13&(x14&x15))-x16);

	if (t3 != 32769LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MAX;
	volatile uint64_t x19 = UINT64_MAX;
	static volatile uint64_t t4 = 3580559539765145880LLU;

	t4 = ((x17&(x18&x19))-x20);

	if (t4 != 1391533032LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = 373759LL;
	int64_t x23 = -1LL;
	int64_t x24 = INT64_MAX;
	volatile int64_t t5 = 17105775999276929LL;

	t5 = ((x21&(x22&x23))-x24);

	if (t5 != -9223372036854402175LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x25 = 70U;
	static int8_t x26 = -1;
	int32_t x27 = INT32_MAX;
	int8_t x28 = -1;

	t6 = ((x25&(x26&x27))-x28);

	if (t6 != 71) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 0;
	volatile int8_t x30 = -1;
	static int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MIN;
	volatile int64_t t7 = 10LL;

	t7 = ((x29&(x30&x31))-x32);

	if (t7 != 128LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = -429;
	static volatile int16_t x35 = INT16_MIN;
	uint16_t x36 = 743U;
	volatile int32_t t8 = -439;

	t8 = ((x33&(x34&x35))-x36);

	if (t8 != -743) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	uint64_t x38 = UINT64_MAX;
	uint16_t x39 = 55U;
	uint8_t x40 = 15U;
	volatile uint64_t t9 = 6650422LLU;

	t9 = ((x37&(x38&x39))-x40);

	if (t9 != 40LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 4997276U;
	int64_t x46 = -6904507880343LL;
	volatile uint8_t x48 = 4U;
	volatile int64_t t10 = -6203284643017LL;

	t10 = ((x45&(x46&x47))-x48);

	if (t10 != -4LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x50 = 3U;
	int64_t x52 = -34710688352985868LL;
	volatile int64_t t11 = 115LL;

	t11 = ((x49&(x50&x51))-x52);

	if (t11 != 34710688352985870LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	int8_t x59 = INT8_MIN;
	int32_t x60 = -1;

	t12 = ((x57&(x58&x59))-x60);

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x61 = 0;
	uint32_t x62 = 13202U;
	static int32_t x63 = 0;
	int64_t t13 = -2968254781940813753LL;

	t13 = ((x61&(x62&x63))-x64);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MAX;
	static int64_t x66 = -1098244520034LL;
	volatile uint64_t x67 = 1LLU;
	int64_t x68 = INT64_MAX;

	t14 = ((x65&(x66&x67))-x68);

	if (t14 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x71 = INT64_MIN;
	static volatile int64_t t15 = 262040412759217LL;

	t15 = ((x69&(x70&x71))-x72);

	if (t15 != -2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x74 = 12U;
	static uint64_t x75 = 254441716238LLU;
	uint32_t x76 = 732414237U;
	uint64_t t16 = 19LLU;

	t16 = ((x73&(x74&x75))-x76);

	if (t16 != 18446744072977137379LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	static uint16_t x78 = 11031U;
	volatile uint8_t x79 = UINT8_MAX;
	volatile int32_t t17 = 1327;

	t17 = ((x77&(x78&x79))-x80);

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	static int32_t x82 = INT32_MAX;
	volatile int64_t x83 = INT64_MAX;
	volatile int64_t t18 = -434431968264911087LL;

	t18 = ((x81&(x82&x83))-x84);

	if (t18 != 2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = -1;
	static volatile int16_t x87 = INT16_MAX;
	int64_t t19 = -6334029LL;

	t19 = ((x85&(x86&x87))-x88);

	if (t19 != -6388293100841LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 23U;
	uint16_t x90 = UINT16_MAX;
	static int8_t x91 = INT8_MAX;
	int8_t x92 = -1;
	volatile int32_t t20 = 973288;

	t20 = ((x89&(x90&x91))-x92);

	if (t20 != 24) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = -8;
	volatile uint32_t x94 = UINT32_MAX;
	static uint8_t x95 = 51U;
	uint8_t x96 = UINT8_MAX;
	uint32_t t21 = 1U;

	t21 = ((x93&(x94&x95))-x96);

	if (t21 != 4294967089U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 31385U;
	int16_t x98 = INT16_MAX;
	static int16_t x99 = -1;
	int32_t x100 = INT32_MIN;
	volatile uint32_t t22 = 19659U;

	t22 = ((x97&(x98&x99))-x100);

	if (t22 != 2147515033U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = 2;
	static volatile int32_t x102 = -1;
	int16_t x104 = INT16_MIN;
	volatile int64_t t23 = -1LL;

	t23 = ((x101&(x102&x103))-x104);

	if (t23 != 32770LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -1;
	static uint64_t x106 = 8472897863066LLU;
	static uint32_t x108 = UINT32_MAX;
	volatile uint64_t t24 = 695167541LLU;

	t24 = ((x105&(x106&x107))-x108);

	if (t24 != 8468602895771LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x110 = UINT32_MAX;
	int64_t x111 = INT64_MAX;
	static int32_t x112 = INT32_MAX;
	static int64_t t25 = 8091084LL;

	t25 = ((x109&(x110&x111))-x112);

	if (t25 != 2147483648LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x115 = 1292175850096LL;

	t26 = ((x113&(x114&x115))-x116);

	if (t26 != 1152589135869LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x117 = 2U;
	uint16_t x118 = UINT16_MAX;
	static uint32_t x119 = UINT32_MAX;
	static int64_t x120 = -1LL;
	int64_t t27 = -987193126LL;

	t27 = ((x117&(x118&x119))-x120);

	if (t27 != 3LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x122 = 76U;
	static uint64_t x123 = 21848106216589098LLU;
	volatile int32_t x124 = INT32_MAX;
	volatile uint64_t t28 = 4694LLU;

	t28 = ((x121&(x122&x123))-x124);

	if (t28 != 18446744071562067977LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = UINT16_MAX;
	int8_t x127 = -1;
	volatile int32_t x128 = 0;
	static volatile int32_t t29 = -43334494;

	t29 = ((x125&(x126&x127))-x128);

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x130 = 6U;
	volatile int32_t x131 = -1;
	uint64_t x132 = 176526181830488183LLU;

	t30 = ((x129&(x130&x131))-x132);

	if (t30 != 18270217891879063433LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = 27U;
	uint8_t x134 = 2U;
	int8_t x135 = 29;
	static int64_t x136 = -1LL;
	volatile int64_t t31 = 445082160496700LL;

	t31 = ((x133&(x134&x135))-x136);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x137 = 15774U;
	uint64_t x139 = 152681423791987LLU;
	volatile int8_t x140 = 3;
	uint64_t t32 = 3635131562LLU;

	t32 = ((x137&(x138&x139))-x140);

	if (t32 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = 1776785687648986LL;
	static int32_t x144 = -1;
	int64_t t33 = 57509804927LL;

	t33 = ((x141&(x142&x143))-x144);

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -1LL;
	static int8_t x146 = INT8_MIN;
	int16_t x147 = 0;
	int64_t x148 = INT64_MAX;

	t34 = ((x145&(x146&x147))-x148);

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -4100;
	static int32_t x150 = INT32_MIN;
	uint16_t x152 = 510U;

	t35 = ((x149&(x150&x151))-x152);

	if (t35 != -510) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x153 = INT16_MAX;
	uint8_t x154 = 122U;
	uint16_t x155 = 6287U;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t36 = 325245;

	t36 = ((x153&(x154&x155))-x156);

	if (t36 != 32778) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x165 = UINT8_MAX;
	int32_t x166 = -2073837;
	static int8_t x167 = INT8_MIN;
	int16_t x168 = -1;
	int32_t t37 = 1;

	t37 = ((x165&(x166&x167))-x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MIN;
	uint16_t x172 = 986U;
	static volatile int64_t t38 = 223010021LL;

	t38 = ((x169&(x170&x171))-x172);

	if (t38 != -986LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x173 = 9U;
	static int8_t x174 = -57;
	uint64_t x175 = UINT64_MAX;
	volatile int16_t x176 = INT16_MIN;
	uint64_t t39 = 136792LLU;

	t39 = ((x173&(x174&x175))-x176);

	if (t39 != 32769LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MAX;
	static uint64_t x178 = 121892183LLU;
	int8_t x179 = 56;
	uint64_t t40 = 2756LLU;

	t40 = ((x177&(x178&x179))-x180);

	if (t40 != 18446744073709536980LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x181 = 4469291924645073LLU;
	static int16_t x182 = -6;
	volatile int64_t x184 = INT64_MAX;
	static volatile uint64_t t41 = 188813226736LLU;

	t41 = ((x181&(x182&x183))-x184);

	if (t41 != 9223372036854834385LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x185 = 386749020256812707LLU;
	uint16_t x186 = 28U;
	static int8_t x187 = 0;
	volatile uint64_t t42 = 533828292452LLU;

	t42 = ((x185&(x186&x187))-x188);

	if (t42 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = -1LL;
	uint16_t x190 = UINT16_MAX;
	static int8_t x191 = INT8_MAX;
	int64_t x192 = INT64_MAX;

	t43 = ((x189&(x190&x191))-x192);

	if (t43 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x193 = INT16_MAX;
	volatile uint64_t x194 = 42124LLU;
	int64_t x195 = 530348756962LL;
	uint32_t x196 = 31U;
	volatile uint64_t t44 = 38252LLU;

	t44 = ((x193&(x194&x195))-x196);

	if (t44 != 1121LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x197 = 75U;
	int32_t x198 = INT32_MAX;
	int8_t x199 = 1;
	int32_t x200 = 721998847;
	int32_t t45 = 2610790;

	t45 = ((x197&(x198&x199))-x200);

	if (t45 != -721998846) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = -1LL;
	static volatile int16_t x202 = -16;
	uint32_t x203 = 1U;
	int8_t x204 = INT8_MIN;
	int64_t t46 = -102833192406690LL;

	t46 = ((x201&(x202&x203))-x204);

	if (t46 != 128LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = 2;
	static uint8_t x208 = 37U;
	static volatile uint64_t t47 = 16291399LLU;

	t47 = ((x205&(x206&x207))-x208);

	if (t47 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x209 = 0;
	int16_t x210 = INT16_MIN;
	volatile uint16_t x211 = 14747U;
	volatile uint16_t x212 = 9732U;

	t48 = ((x209&(x210&x211))-x212);

	if (t48 != -9732) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x213 = INT16_MIN;
	static uint32_t x214 = 7923U;

	t49 = ((x213&(x214&x215))-x216);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x217 = INT16_MAX;
	static volatile int16_t x218 = -5792;
	volatile int8_t x219 = -1;
	static int16_t x220 = INT16_MIN;
	int32_t t50 = 31;

	t50 = ((x217&(x218&x219))-x220);

	if (t50 != 59744) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = -1LL;
	int64_t x222 = -1LL;
	int8_t x224 = INT8_MIN;
	static int64_t t51 = -6717787586LL;

	t51 = ((x221&(x222&x223))-x224);

	if (t51 != 138LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x226 = INT16_MIN;
	volatile int32_t x227 = -7411492;
	int8_t x228 = INT8_MAX;

	t52 = ((x225&(x226&x227))-x228);

	if (t52 != -7438463) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x229 = 1;
	static int8_t x230 = INT8_MIN;
	int64_t t53 = 0LL;

	t53 = ((x229&(x230&x231))-x232);

	if (t53 != 118313114LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = -1;
	int64_t x234 = INT64_MIN;
	int8_t x235 = INT8_MIN;
	static uint64_t x236 = 1269488050517LLU;
	uint64_t t54 = 0LLU;

	t54 = ((x233&(x234&x235))-x236);

	if (t54 != 9223370767366725291LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = INT32_MAX;
	volatile uint8_t x238 = 1U;
	int8_t x239 = INT8_MIN;
	volatile int32_t t55 = -1868758;

	t55 = ((x237&(x238&x239))-x240);

	if (t55 != 32768) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = INT8_MAX;
	int16_t x242 = -12189;
	int64_t t56 = 10763998929LL;

	t56 = ((x241&(x242&x243))-x244);

	if (t56 != 1803477LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MAX;
	static int8_t x247 = -1;
	uint32_t x248 = 1816U;
	static volatile int64_t t57 = 3358LL;

	t57 = ((x245&(x246&x247))-x248);

	if (t57 != 9223372036854763726LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = 0;
	int16_t x250 = INT16_MIN;
	int16_t x251 = 12180;
	int32_t x252 = INT32_MAX;
	volatile int32_t t58 = 181;

	t58 = ((x249&(x250&x251))-x252);

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = 11872U;
	uint32_t x255 = UINT32_MAX;
	volatile uint32_t t59 = 1010862U;

	t59 = ((x253&(x254&x255))-x256);

	if (t59 != 44544U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x257 = INT32_MIN;
	static volatile uint64_t x258 = 2552864306377094437LLU;
	volatile int64_t x260 = -139531195762LL;

	t60 = ((x257&(x258&x259))-x260);

	if (t60 != 2552864445415363954LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x262 = INT32_MIN;
	uint16_t x263 = 2012U;
	uint32_t x264 = 8046U;
	int64_t t61 = -27589LL;

	t61 = ((x261&(x262&x263))-x264);

	if (t61 != -8046LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x265 = UINT8_MAX;
	int16_t x266 = -26;
	int8_t x268 = 43;
	volatile int32_t t62 = -52968;

	t62 = ((x265&(x266&x267))-x268);

	if (t62 != 59) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x269 = UINT64_MAX;
	int8_t x270 = -5;
	uint8_t x271 = 106U;
	int32_t x272 = -54591498;
	volatile uint64_t t63 = 25847215148LLU;

	t63 = ((x269&(x270&x271))-x272);

	if (t63 != 54591604LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = -1;
	uint8_t x274 = 0U;
	uint64_t x275 = 188549LLU;
	volatile uint64_t t64 = 22702066943LLU;

	t64 = ((x273&(x274&x275))-x276);

	if (t64 != 2LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x278 = -60;
	volatile int16_t x279 = INT16_MAX;
	int32_t x280 = -1;
	static volatile int32_t t65 = -17107;

	t65 = ((x277&(x278&x279))-x280);

	if (t65 != 32641) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = INT32_MAX;
	static int16_t x282 = INT16_MIN;
	uint32_t x283 = 13U;
	int8_t x284 = INT8_MIN;
	volatile uint32_t t66 = 18941035U;

	t66 = ((x281&(x282&x283))-x284);

	if (t66 != 128U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = -4;
	static int16_t x286 = INT16_MIN;
	volatile int32_t t67 = -329872;

	t67 = ((x285&(x286&x287))-x288);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MAX;
	static volatile int8_t x291 = 32;
	uint16_t x292 = 42U;
	int32_t t68 = -6986790;

	t68 = ((x289&(x290&x291))-x292);

	if (t68 != -10) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x294 = 0LLU;
	uint16_t x295 = 14015U;
	int32_t x296 = INT32_MIN;
	uint64_t t69 = 47LLU;

	t69 = ((x293&(x294&x295))-x296);

	if (t69 != 2147483648LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x297 = UINT8_MAX;
	int8_t x298 = -1;
	int32_t x299 = -1;
	static int32_t x300 = INT32_MAX;
	int32_t t70 = 6651957;

	t70 = ((x297&(x298&x299))-x300);

	if (t70 != -2147483392) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x302 = 0U;
	int64_t x304 = INT64_MAX;
	int64_t t71 = -304608293387LL;

	t71 = ((x301&(x302&x303))-x304);

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = -2013;
	int8_t x306 = 0;
	static int64_t x307 = INT64_MIN;
	static volatile int64_t t72 = -131588279564LL;

	t72 = ((x305&(x306&x307))-x308);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = 0;
	int32_t x318 = -1;
	int16_t x320 = INT16_MAX;
	volatile uint64_t t73 = 8278344946818085LLU;

	t73 = ((x317&(x318&x319))-x320);

	if (t73 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x321 = 2U;
	volatile int32_t x322 = 26;
	uint64_t x323 = 0LLU;
	volatile uint64_t t74 = 3388692LLU;

	t74 = ((x321&(x322&x323))-x324);

	if (t74 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x327 = INT8_MIN;
	int8_t x328 = INT8_MAX;
	volatile int64_t t75 = 12499LL;

	t75 = ((x325&(x326&x327))-x328);

	if (t75 != -127LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x330 = INT8_MAX;
	int64_t x331 = -44308746034841LL;
	static int16_t x332 = -13763;
	volatile int64_t t76 = -94213596609LL;

	t76 = ((x329&(x330&x331))-x332);

	if (t76 != 13866LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x334 = INT8_MAX;
	uint64_t x336 = UINT64_MAX;
	uint64_t t77 = 5564606LLU;

	t77 = ((x333&(x334&x335))-x336);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x337 = 2873U;
	static int64_t x338 = INT64_MAX;
	int64_t x339 = -1LL;
	volatile int64_t t78 = 63585034LL;

	t78 = ((x337&(x338&x339))-x340);

	if (t78 != 2828LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x341 = 605817LLU;
	int64_t x342 = INT64_MAX;
	uint8_t x343 = UINT8_MAX;
	uint64_t x344 = 31840908893562263LLU;
	volatile uint64_t t79 = 7423807LLU;

	t79 = ((x341&(x342&x343))-x344);

	if (t79 != 18414903164815989474LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x345 = -1;
	static int16_t x346 = INT16_MIN;
	volatile int8_t x348 = INT8_MIN;

	t80 = ((x345&(x346&x347))-x348);

	if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x349 = UINT32_MAX;
	uint8_t x351 = UINT8_MAX;
	volatile uint64_t t81 = 3621492LLU;

	t81 = ((x349&(x350&x351))-x352);

	if (t81 != 18446744073701181835LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x354 = 6;
	int16_t x355 = 1;
	int64_t x356 = INT64_MAX;
	volatile int64_t t82 = -223297LL;

	t82 = ((x353&(x354&x355))-x356);

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x357 = -1LL;
	int32_t x358 = INT32_MIN;
	volatile uint16_t x359 = 309U;
	volatile int16_t x360 = -1;
	static int64_t t83 = -2203874LL;

	t83 = ((x357&(x358&x359))-x360);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x361 = -1LL;
	int16_t x362 = -7;
	static uint64_t x363 = UINT64_MAX;
	static int64_t x364 = -151747344402LL;
	uint64_t t84 = 302983LLU;

	t84 = ((x361&(x362&x363))-x364);

	if (t84 != 151747344395LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x365 = 43U;
	int32_t x366 = INT32_MAX;
	static int64_t x368 = INT64_MAX;
	volatile int64_t t85 = -8398743431016LL;

	t85 = ((x365&(x366&x367))-x368);

	if (t85 != -9223372036854775764LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x369 = 739;
	uint8_t x370 = UINT8_MAX;
	int32_t x371 = -1;
	uint32_t x372 = UINT32_MAX;
	volatile uint32_t t86 = 955012U;

	t86 = ((x369&(x370&x371))-x372);

	if (t86 != 228U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x373 = -1;
	int16_t x374 = 488;
	int64_t x375 = INT64_MAX;
	volatile uint8_t x376 = 1U;
	volatile int64_t t87 = -189701445LL;

	t87 = ((x373&(x374&x375))-x376);

	if (t87 != 487LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = INT8_MAX;
	static uint8_t x378 = 4U;
	volatile uint32_t x379 = 2158641U;
	int8_t x380 = -1;
	volatile uint32_t t88 = 396U;

	t88 = ((x377&(x378&x379))-x380);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x381 = 92;
	static int64_t x382 = -7761404689918076LL;
	uint8_t x383 = UINT8_MAX;
	volatile uint64_t x384 = 490036986440LLU;
	static volatile uint64_t t89 = 12705LLU;

	t89 = ((x381&(x382&x383))-x384);

	if (t89 != 18446743583672565180LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = 1;
	static volatile uint32_t x386 = 1015511167U;
	static uint64_t x387 = 3LLU;

	t90 = ((x385&(x386&x387))-x388);

	if (t90 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = INT64_MAX;
	volatile int64_t x392 = -2020435LL;

	t91 = ((x389&(x390&x391))-x392);

	if (t91 != 2053202LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x393 = 0U;
	int32_t x394 = 5575017;
	int16_t x395 = -23;
	uint32_t x396 = 120U;
	static uint32_t t92 = 1U;

	t92 = ((x393&(x394&x395))-x396);

	if (t92 != 4294967176U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = 15;
	int16_t x398 = INT16_MIN;
	int64_t x400 = -1LL;
	int64_t t93 = 80271885422LL;

	t93 = ((x397&(x398&x399))-x400);

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x401 = INT64_MIN;
	int64_t x402 = INT64_MIN;
	static uint8_t x403 = 38U;
	uint32_t x404 = 6557553U;
	volatile int64_t t94 = 4117600539LL;

	t94 = ((x401&(x402&x403))-x404);

	if (t94 != -6557553LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x406 = UINT64_MAX;
	int16_t x407 = INT16_MIN;
	int64_t x408 = INT64_MIN;
	static volatile uint64_t t95 = 2632852220516604567LLU;

	t95 = ((x405&(x406&x407))-x408);

	if (t95 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x414 = INT8_MIN;
	uint64_t x415 = UINT64_MAX;
	static int8_t x416 = -1;
	uint64_t t96 = 19061484LLU;

	t96 = ((x413&(x414&x415))-x416);

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x417 = 49U;
	int64_t x418 = -1LL;
	int8_t x420 = 0;
	int64_t t97 = 1948703LL;

	t97 = ((x417&(x418&x419))-x420);

	if (t97 != 49LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x423 = INT64_MIN;
	uint8_t x424 = 14U;
	volatile int64_t t98 = 16329064222378936LL;

	t98 = ((x421&(x422&x423))-x424);

	if (t98 != -14LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x425 = 10418;
	volatile int16_t x426 = 14958;
	int64_t t99 = -889733032LL;

	t99 = ((x425&(x426&x427))-x428);

	if (t99 != -65535LL) { NG(); } else { ; }
	
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


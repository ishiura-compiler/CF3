#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
volatile int32_t x13 = -1;
static volatile uint16_t x14 = 81U;
static uint16_t x16 = UINT16_MAX;
static volatile int32_t x25 = INT32_MAX;
volatile uint8_t x26 = 4U;
int16_t x30 = -1;
int32_t x32 = INT32_MIN;
volatile int64_t t8 = 836849734930LL;
uint16_t x40 = 14U;
static int8_t x46 = INT8_MIN;
int64_t t12 = -60001605482276LL;
static int64_t x53 = -1LL;
int16_t x56 = INT16_MAX;
static int64_t t13 = -1LL;
uint8_t x57 = UINT8_MAX;
int8_t x63 = INT8_MIN;
int32_t x75 = INT32_MIN;
static int16_t x78 = INT16_MAX;
uint32_t x80 = UINT32_MAX;
volatile int8_t x85 = INT8_MIN;
int64_t x90 = INT64_MIN;
uint64_t x92 = UINT64_MAX;
int16_t x95 = INT16_MIN;
volatile int64_t t23 = -50293506682457419LL;
int64_t x100 = -1LL;
int32_t x103 = INT32_MIN;
volatile int8_t x108 = -1;
int32_t x114 = 26839111;
volatile int64_t x116 = -1LL;
static int16_t x123 = -187;
static int8_t x127 = INT8_MIN;
int8_t x128 = -1;
int8_t x134 = -1;
static uint32_t t33 = 114U;
volatile uint32_t x137 = UINT32_MAX;
static int32_t x139 = INT32_MAX;
uint32_t t34 = 1833999088U;
int64_t x147 = INT64_MAX;
static uint32_t x151 = 251U;
volatile uint32_t t37 = 0U;
int32_t x160 = INT32_MAX;
uint16_t x167 = UINT16_MAX;
volatile int32_t t42 = -887223015;
uint64_t x175 = UINT64_MAX;
volatile uint8_t x185 = UINT8_MAX;
uint64_t x192 = 17954885LLU;
int8_t x193 = -10;
uint64_t t49 = 889519538LLU;
volatile int64_t t50 = -67LL;
static uint8_t x209 = 12U;
int16_t x213 = INT16_MIN;
uint8_t x217 = 12U;
int64_t t55 = 70368892149300836LL;
uint8_t x231 = 24U;
int8_t x239 = INT8_MIN;
static int32_t x240 = 509;
uint8_t x243 = 26U;
uint32_t x257 = 0U;
int32_t x261 = -517995;
uint64_t x262 = UINT64_MAX;
uint64_t t65 = 4134341729143563LLU;
volatile int64_t t66 = 405483694LL;
int64_t x269 = -1LL;
int8_t x271 = -1;
volatile int64_t x273 = -1LL;
int64_t x275 = -13320877702819889LL;
int8_t x283 = INT8_MIN;
volatile uint32_t x284 = 7994941U;
volatile uint32_t t69 = 7207271U;
int16_t x290 = INT16_MAX;
volatile int64_t x291 = INT64_MIN;
uint32_t x296 = 29528U;
static int8_t x300 = INT8_MIN;
volatile int64_t x309 = INT64_MIN;
static int64_t x313 = INT64_MAX;
int32_t x315 = INT32_MIN;
volatile int64_t t79 = -4097654LL;
int8_t x327 = INT8_MIN;
volatile int64_t x331 = -1LL;
int64_t t81 = 229LL;
uint8_t x333 = UINT8_MAX;
int32_t x334 = INT32_MIN;
int32_t x337 = INT32_MIN;
int32_t x338 = -1;
int16_t x346 = 2526;
int64_t x348 = INT64_MAX;
int32_t x350 = 1;
int64_t x352 = INT64_MIN;
volatile int64_t t86 = 1723581561LL;
static int32_t x353 = INT32_MIN;
int16_t x354 = 1;
volatile int32_t t87 = -2361;
int32_t x359 = -2960190;
int32_t x361 = INT32_MIN;
volatile int16_t x370 = INT16_MIN;
int32_t x378 = 79506100;
static uint64_t x379 = UINT64_MAX;
volatile uint32_t x380 = UINT32_MAX;
int16_t x383 = -46;
static uint16_t x384 = 88U;
uint64_t t94 = 253369672LLU;
uint8_t x395 = 7U;
static volatile int16_t x397 = INT16_MAX;


void f0(void) {
	static uint64_t x1 = 0LLU;
	uint64_t x2 = 5808147441LLU;
	int32_t x3 = INT32_MIN;
	volatile uint16_t x4 = 8U;
	uint64_t t0 = 492020279328457355LLU;

	t0 = ((x1&(x2%x3))&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint32_t x6 = 13791U;
	int32_t x7 = -1;
	static uint32_t t1 = 866U;

	t1 = ((x5&(x6%x7))&x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint8_t x10 = 5U;
	static uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MIN;
	volatile uint64_t t2 = 2949872597LLU;

	t2 = ((x9&(x10%x11))&x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x15 = INT32_MAX;
	int32_t t3 = 71422802;

	t3 = ((x13&(x14%x15))&x16);

	if (t3 != 81) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 12490544;
	int16_t x18 = INT16_MIN;
	static int16_t x19 = INT16_MIN;
	volatile uint64_t x20 = 514815449324LLU;
	uint64_t t4 = 8911LLU;

	t4 = ((x17&(x18%x19))&x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 21509LLU;
	int8_t x22 = INT8_MAX;
	static int32_t x23 = -1;
	static volatile int64_t x24 = INT64_MIN;
	volatile uint64_t t5 = 308LLU;

	t5 = ((x21&(x22%x23))&x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MAX;
	static int32_t t6 = 1380764;

	t6 = ((x25&(x26%x27))&x28);

	if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	static uint32_t x31 = UINT32_MAX;
	uint32_t t7 = 0U;

	t7 = ((x29&(x30%x31))&x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 1;
	int64_t x34 = -1LL;
	int32_t x35 = 44;
	static int16_t x36 = -1;

	t8 = ((x33&(x34%x35))&x36);

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -228;
	uint32_t x38 = 1U;
	int16_t x39 = -1;
	uint32_t t9 = 4U;

	t9 = ((x37&(x38%x39))&x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	uint8_t x42 = UINT8_MAX;
	static uint64_t x43 = 16807609632154084LLU;
	static uint16_t x44 = 3677U;
	static volatile uint64_t t10 = 59055178LLU;

	t10 = ((x41&(x42%x43))&x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	volatile int16_t x47 = INT16_MAX;
	static volatile int8_t x48 = INT8_MIN;
	int32_t t11 = -616729;

	t11 = ((x45&(x46%x47))&x48);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	uint8_t x50 = 62U;
	int64_t x51 = -1LL;
	uint16_t x52 = UINT16_MAX;

	t12 = ((x49&(x50%x51))&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MAX;
	int64_t x55 = INT64_MIN;

	t13 = ((x53&(x54%x55))&x56);

	if (t13 != 32767LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x58 = INT64_MAX;
	static volatile int64_t x59 = -1LL;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t14 = 75258043LLU;

	t14 = ((x57&(x58%x59))&x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 0U;
	static volatile int8_t x62 = 13;
	static volatile int8_t x64 = INT8_MIN;
	static volatile int32_t t15 = -1142;

	t15 = ((x61&(x62%x63))&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MIN;
	uint32_t x66 = UINT32_MAX;
	uint32_t x67 = 54202U;
	int16_t x68 = 11;
	static uint32_t t16 = 436052634U;

	t16 = ((x65&(x66%x67))&x68);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int64_t x70 = INT64_MIN;
	uint32_t x71 = 92U;
	uint16_t x72 = UINT16_MAX;
	int64_t t17 = -17LL;

	t17 = ((x69&(x70%x71))&x72);

	if (t17 != 65464LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 110;
	volatile uint8_t x74 = 56U;
	int64_t x76 = -1LL;
	int64_t t18 = -473LL;

	t18 = ((x73&(x74%x75))&x76);

	if (t18 != 40LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 7633436315821149552LLU;
	int32_t x79 = -27474;
	uint64_t t19 = 129173564712110734LLU;

	t19 = ((x77&(x78%x79))&x80);

	if (t19 != 1056LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -20;
	int64_t x82 = INT64_MIN;
	int64_t x83 = INT64_MIN;
	int32_t x84 = -610712;
	volatile int64_t t20 = 86LL;

	t20 = ((x81&(x82%x83))&x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x86 = -1;
	int32_t x87 = -1;
	volatile int32_t x88 = -230903;
	int32_t t21 = -935548807;

	t21 = ((x85&(x86%x87))&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 838U;
	static int64_t x91 = INT64_MIN;
	uint64_t t22 = 38450LLU;

	t22 = ((x89&(x90%x91))&x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	volatile int32_t x94 = -1;
	int64_t x96 = INT64_MIN;

	t23 = ((x93&(x94%x95))&x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int8_t x98 = INT8_MAX;
	volatile uint8_t x99 = 47U;
	static volatile int64_t t24 = 6157LL;

	t24 = ((x97&(x98%x99))&x100);

	if (t24 != 33LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	uint8_t x102 = 3U;
	uint32_t x104 = 241282U;
	uint32_t t25 = 23U;

	t25 = ((x101&(x102%x103))&x104);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 1005;
	uint64_t x106 = 8678655369264LLU;
	int32_t x107 = INT32_MAX;
	uint64_t t26 = 3581494107430LLU;

	t26 = ((x105&(x106%x107))&x108);

	if (t26 != 1001LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = INT64_MAX;
	static int16_t x110 = INT16_MIN;
	int64_t x111 = -3LL;
	int16_t x112 = INT16_MIN;
	int64_t t27 = -513242459LL;

	t27 = ((x109&(x110%x111))&x112);

	if (t27 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int8_t x115 = -1;
	volatile int64_t t28 = 5042065113259375LL;

	t28 = ((x113&(x114%x115))&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 964398642249LLU;
	int32_t x118 = -1;
	volatile uint8_t x119 = 21U;
	int16_t x120 = 28;
	uint64_t t29 = 260973794159411LLU;

	t29 = ((x117&(x118%x119))&x120);

	if (t29 != 8LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -9881895673758LL;
	uint16_t x122 = 729U;
	int16_t x124 = INT16_MAX;
	int64_t t30 = -47246044LL;

	t30 = ((x121&(x122%x123))&x124);

	if (t30 != 32LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 1;
	static volatile uint64_t x126 = 1193839LLU;
	uint64_t t31 = 22LLU;

	t31 = ((x125&(x126%x127))&x128);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	volatile int16_t x130 = -1;
	int32_t x131 = 748;
	static uint16_t x132 = 10725U;
	int32_t t32 = -3821;

	t32 = ((x129&(x130%x131))&x132);

	if (t32 != 10725) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	uint32_t x135 = 1408339223U;
	int8_t x136 = INT8_MAX;

	t33 = ((x133&(x134%x135))&x136);

	if (t33 != 58U) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x138 = INT32_MIN;
	uint16_t x140 = UINT16_MAX;

	t34 = ((x137&(x138%x139))&x140);

	if (t34 != 65535U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	volatile uint32_t x142 = 1U;
	int8_t x143 = -1;
	uint16_t x144 = UINT16_MAX;
	uint32_t t35 = 2U;

	t35 = ((x141&(x142%x143))&x144);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MAX;
	int16_t x146 = -222;
	int16_t x148 = INT16_MIN;
	volatile int64_t t36 = 313396LL;

	t36 = ((x145&(x146%x147))&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x149 = UINT16_MAX;
	volatile uint16_t x150 = 53U;
	int8_t x152 = -1;

	t37 = ((x149&(x150%x151))&x152);

	if (t37 != 53U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = -1;
	int16_t x154 = -66;
	int32_t x155 = -30;
	int8_t x156 = INT8_MAX;
	static int32_t t38 = -962319878;

	t38 = ((x153&(x154%x155))&x156);

	if (t38 != 122) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 16U;
	uint64_t x158 = UINT64_MAX;
	uint32_t x159 = UINT32_MAX;
	uint64_t t39 = 975561LLU;

	t39 = ((x157&(x158%x159))&x160);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = 76U;
	int8_t x162 = INT8_MIN;
	int16_t x163 = 4;
	int16_t x164 = -11;
	volatile uint32_t t40 = 816U;

	t40 = ((x161&(x162%x163))&x164);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	uint8_t x166 = 1U;
	volatile int32_t x168 = -1;
	int32_t t41 = -2832046;

	t41 = ((x165&(x166%x167))&x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = 70655790;
	static uint16_t x170 = 1U;
	static int8_t x171 = INT8_MIN;
	int16_t x172 = 26;

	t42 = ((x169&(x170%x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MIN;
	static volatile int8_t x174 = INT8_MIN;
	int8_t x176 = INT8_MIN;
	volatile uint64_t t43 = 149146546LLU;

	t43 = ((x173&(x174%x175))&x176);

	if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x177 = 5U;
	uint64_t x178 = 8941761753674597LLU;
	uint32_t x179 = 338970U;
	static volatile uint32_t x180 = 35U;
	static volatile uint64_t t44 = 360410064601927196LLU;

	t44 = ((x177&(x178%x179))&x180);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MAX;
	int64_t x182 = -1LL;
	uint8_t x183 = 122U;
	int8_t x184 = INT8_MIN;
	int64_t t45 = 768609LL;

	t45 = ((x181&(x182%x183))&x184);

	if (t45 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x186 = 495LLU;
	int16_t x187 = 1182;
	static volatile uint32_t x188 = UINT32_MAX;
	static uint64_t t46 = 98336LLU;

	t46 = ((x185&(x186%x187))&x188);

	if (t46 != 239LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	uint8_t x190 = UINT8_MAX;
	int16_t x191 = 5;
	static volatile uint64_t t47 = 3582182LLU;

	t47 = ((x189&(x190%x191))&x192);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x194 = INT8_MIN;
	int8_t x195 = -1;
	static int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -7;

	t48 = ((x193&(x194%x195))&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	uint16_t x198 = UINT16_MAX;
	static volatile int32_t x199 = INT32_MIN;
	static uint64_t x200 = 226762836582LLU;

	t49 = ((x197&(x198%x199))&x200);

	if (t49 != 19046LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	static int64_t x202 = INT64_MAX;
	static uint8_t x203 = 6U;
	uint32_t x204 = 145U;

	t50 = ((x201&(x202%x203))&x204);

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = UINT16_MAX;
	int64_t x206 = INT64_MIN;
	int16_t x207 = -7647;
	uint64_t x208 = 28485LLU;
	volatile uint64_t t51 = 10014079344372528LLU;

	t51 = ((x205&(x206%x207))&x208);

	if (t51 != 25920LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x210 = INT8_MAX;
	static volatile int8_t x211 = INT8_MAX;
	int16_t x212 = 1;
	int32_t t52 = -1027;

	t52 = ((x209&(x210%x211))&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x214 = 1970U;
	int64_t x215 = 433457663894398LL;
	static volatile int16_t x216 = -13666;
	volatile int64_t t53 = 940117083320LL;

	t53 = ((x213&(x214%x215))&x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x218 = UINT16_MAX;
	volatile uint64_t x219 = 306893547956404959LLU;
	uint32_t x220 = 217U;
	uint64_t t54 = 22886813847LLU;

	t54 = ((x217&(x218%x219))&x220);

	if (t54 != 8LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	volatile int16_t x222 = INT16_MAX;
	static uint16_t x223 = UINT16_MAX;
	int64_t x224 = 997794LL;

	t55 = ((x221&(x222%x223))&x224);

	if (t55 != 14754LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	int8_t x226 = INT8_MAX;
	int16_t x227 = INT16_MIN;
	int64_t x228 = -59844754LL;
	volatile int64_t t56 = 975134LL;

	t56 = ((x225&(x226%x227))&x228);

	if (t56 != 110LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	int8_t x230 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	int64_t t57 = -632LL;

	t57 = ((x229&(x230%x231))&x232);

	if (t57 != -128LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 1232238646U;
	uint32_t x234 = 85701U;
	int32_t x235 = INT32_MIN;
	int8_t x236 = INT8_MAX;
	uint32_t t58 = 502888U;

	t58 = ((x233&(x234%x235))&x236);

	if (t58 != 4U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	int64_t x238 = INT64_MIN;
	int64_t t59 = -742LL;

	t59 = ((x237&(x238%x239))&x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MIN;
	static volatile uint64_t x242 = UINT64_MAX;
	int32_t x244 = INT32_MAX;
	uint64_t t60 = 123LLU;

	t60 = ((x241&(x242%x243))&x244);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	uint64_t x246 = 5812822008LLU;
	uint16_t x247 = UINT16_MAX;
	uint16_t x248 = 13780U;
	volatile uint64_t t61 = 388014036LLU;

	t61 = ((x245&(x246%x247))&x248);

	if (t61 != 12368LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	int16_t x250 = -7;
	int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MAX;
	volatile int32_t t62 = -27493330;

	t62 = ((x249&(x250%x251))&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = INT32_MAX;
	volatile uint32_t x254 = UINT32_MAX;
	uint16_t x255 = UINT16_MAX;
	volatile uint32_t x256 = 97595114U;
	static volatile uint32_t t63 = 82304U;

	t63 = ((x253&(x254%x255))&x256);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MAX;
	int8_t x259 = 43;
	int32_t x260 = INT32_MAX;
	volatile int64_t t64 = 29472688353LL;

	t64 = ((x257&(x258%x259))&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x263 = -1;
	int32_t x264 = INT32_MAX;

	t65 = ((x261&(x262%x263))&x264);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MAX;
	static int64_t x266 = 12831102528607LL;
	static volatile int32_t x267 = INT32_MAX;
	int32_t x268 = INT32_MAX;

	t66 = ((x265&(x266%x267))&x268);

	if (t66 != 2035221429LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x270 = 67191705809LL;
	int64_t x272 = 8893LL;
	static int64_t t67 = -3379804LL;

	t67 = ((x269&(x270%x271))&x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x274 = -94;
	static uint8_t x276 = 5U;
	static int64_t t68 = -1068261551823469305LL;

	t68 = ((x273&(x274%x275))&x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = UINT8_MAX;
	static int8_t x282 = -1;

	t69 = ((x281&(x282%x283))&x284);

	if (t69 != 61U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = INT8_MIN;
	volatile int8_t x286 = INT8_MIN;
	volatile uint16_t x287 = 3327U;
	static int64_t x288 = INT64_MIN;
	int64_t t70 = INT64_MIN;

	t70 = ((x285&(x286%x287))&x288);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = 8;
	int32_t x292 = INT32_MIN;
	volatile int64_t t71 = 97891647766LL;

	t71 = ((x289&(x290%x291))&x292);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = UINT16_MAX;
	int64_t x294 = INT64_MIN;
	int64_t x295 = INT64_MIN;
	int64_t t72 = -238262850LL;

	t72 = ((x293&(x294%x295))&x296);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MIN;
	static uint16_t x298 = UINT16_MAX;
	static int8_t x299 = INT8_MAX;
	static volatile int32_t t73 = 257969389;

	t73 = ((x297&(x298%x299))&x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x301 = 9U;
	uint64_t x302 = 0LLU;
	int32_t x303 = INT32_MAX;
	uint64_t x304 = 625LLU;
	static volatile uint64_t t74 = 126886LLU;

	t74 = ((x301&(x302%x303))&x304);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x305 = INT8_MAX;
	uint64_t x306 = 190577995713517334LLU;
	uint16_t x307 = UINT16_MAX;
	volatile int8_t x308 = -1;
	uint64_t t75 = 156368598472LLU;

	t75 = ((x305&(x306%x307))&x308);

	if (t75 != 107LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x310 = -1LL;
	int32_t x311 = INT32_MAX;
	int64_t x312 = -1LL;
	int64_t t76 = INT64_MIN;

	t76 = ((x309&(x310%x311))&x312);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x314 = 1;
	int32_t x316 = 11990070;
	volatile int64_t t77 = 8LL;

	t77 = ((x313&(x314%x315))&x316);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MIN;
	uint64_t x318 = UINT64_MAX;
	uint64_t x319 = 2LLU;
	int32_t x320 = -1;
	uint64_t t78 = 8020858370603944046LLU;

	t78 = ((x317&(x318%x319))&x320);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = INT16_MIN;
	volatile int64_t x322 = INT64_MIN;
	int8_t x323 = 2;
	int8_t x324 = INT8_MIN;

	t79 = ((x321&(x322%x323))&x324);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x325 = UINT16_MAX;
	int64_t x326 = INT64_MAX;
	uint8_t x328 = 114U;
	int64_t t80 = -875LL;

	t80 = ((x325&(x326%x327))&x328);

	if (t80 != 114LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	int64_t x332 = -1LL;

	t81 = ((x329&(x330%x331))&x332);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x335 = INT16_MIN;
	int16_t x336 = INT16_MAX;
	int32_t t82 = 68;

	t82 = ((x333&(x334%x335))&x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x339 = -1LL;
	int8_t x340 = -1;
	static volatile int64_t t83 = -4640695751432LL;

	t83 = ((x337&(x338%x339))&x340);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x341 = 15249448U;
	int64_t x342 = INT64_MIN;
	static int32_t x343 = INT32_MIN;
	uint32_t x344 = 1522U;
	int64_t t84 = -2LL;

	t84 = ((x341&(x342%x343))&x344);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x345 = -1;
	int64_t x347 = INT64_MAX;
	volatile int64_t t85 = -31190556490637LL;

	t85 = ((x345&(x346%x347))&x348);

	if (t85 != 2526LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x349 = INT8_MIN;
	int64_t x351 = INT64_MAX;

	t86 = ((x349&(x350%x351))&x352);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x355 = 36U;
	int8_t x356 = INT8_MIN;

	t87 = ((x353&(x354%x355))&x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x357 = 15335574LLU;
	int32_t x358 = -797826126;
	volatile int16_t x360 = INT16_MIN;
	uint64_t t88 = 1760337LLU;

	t88 = ((x357&(x358%x359))&x360);

	if (t88 != 15204352LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x362 = -1;
	int64_t x363 = INT64_MIN;
	volatile int16_t x364 = 15487;
	int64_t t89 = -51049600240LL;

	t89 = ((x361&(x362%x363))&x364);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = 12338LL;
	uint16_t x366 = 2U;
	static uint32_t x367 = UINT32_MAX;
	int16_t x368 = INT16_MIN;
	volatile int64_t t90 = -52LL;

	t90 = ((x365&(x366%x367))&x368);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x369 = 0U;
	static volatile int8_t x371 = INT8_MAX;
	int32_t x372 = INT32_MAX;
	int32_t t91 = -3633;

	t91 = ((x369&(x370%x371))&x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x373 = 3U;
	int16_t x374 = -55;
	int8_t x375 = -11;
	volatile int8_t x376 = 0;
	int32_t t92 = -136;

	t92 = ((x373&(x374%x375))&x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = -158159LL;
	uint64_t t93 = 238646212551504307LLU;

	t93 = ((x377&(x378%x379))&x380);

	if (t93 != 79495728LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x381 = UINT64_MAX;
	static volatile int16_t x382 = INT16_MIN;

	t94 = ((x381&(x382%x383))&x384);

	if (t94 != 80LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = -16083;
	volatile int32_t x386 = INT32_MIN;
	volatile int16_t x387 = 124;
	volatile int16_t x388 = -15;
	int32_t t95 = 2857897;

	t95 = ((x385&(x386%x387))&x388);

	if (t95 != -16128) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = 3;
	uint16_t x390 = 223U;
	volatile int8_t x391 = -26;
	int8_t x392 = -14;
	volatile int32_t t96 = 50;

	t96 = ((x389&(x390%x391))&x392);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = INT32_MAX;
	int32_t x394 = -1;
	uint16_t x396 = UINT16_MAX;
	int32_t t97 = -40495629;

	t97 = ((x393&(x394%x395))&x396);

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x398 = UINT8_MAX;
	int64_t x399 = INT64_MIN;
	int32_t x400 = 241911308;
	static volatile int64_t t98 = -66514757307LL;

	t98 = ((x397&(x398%x399))&x400);

	if (t98 != 12LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = -1;
	int16_t x402 = -1;
	uint16_t x403 = 15057U;
	int64_t x404 = INT64_MIN;
	int64_t t99 = INT64_MIN;

	t99 = ((x401&(x402%x403))&x404);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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


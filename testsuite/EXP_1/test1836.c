#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 87885LL;
volatile uint64_t t0 = 1052092592683870872LLU;
int32_t x6 = INT32_MIN;
uint16_t x11 = 99U;
volatile int16_t x30 = INT16_MIN;
static int8_t x37 = 0;
int32_t x40 = INT32_MIN;
int8_t x45 = INT8_MIN;
int64_t x51 = 96488050817LL;
uint64_t t10 = 3533151LLU;
uint16_t x77 = 14U;
static volatile int16_t x90 = -1;
uint64_t t15 = 52490741LLU;
int8_t x100 = -1;
static int16_t x104 = -155;
static volatile int64_t t18 = -688LL;
int16_t x106 = -3;
uint16_t x114 = UINT16_MAX;
uint16_t x116 = UINT16_MAX;
volatile int32_t t20 = -226;
static int16_t x122 = INT16_MIN;
int8_t x124 = -3;
int8_t x127 = INT8_MAX;
volatile uint8_t x138 = UINT8_MAX;
int64_t x142 = INT64_MIN;
int8_t x143 = -1;
int64_t x145 = -1LL;
static int64_t t28 = -14165462996868396LL;
int8_t x154 = INT8_MIN;
int16_t x159 = 3;
static uint32_t x167 = UINT32_MAX;
volatile uint32_t t32 = 144U;
int8_t x179 = -1;
uint16_t x180 = UINT16_MAX;
volatile int32_t x191 = INT32_MIN;
static volatile uint8_t x209 = 12U;
int64_t x225 = -11847766LL;
uint64_t x237 = 456487063112167LLU;
int64_t x240 = INT64_MIN;
int64_t x241 = -511044772697238300LL;
int64_t x242 = INT64_MIN;
volatile uint64_t t46 = 2LLU;
volatile uint8_t x253 = 0U;
int16_t x257 = INT16_MIN;
uint32_t x262 = UINT32_MAX;
int64_t x269 = INT64_MIN;
int32_t x271 = -619591;
volatile uint16_t x272 = 532U;
int16_t x284 = -382;
uint64_t x288 = 19631851LLU;
volatile uint64_t t55 = 325808465942743716LLU;
static volatile int32_t x290 = INT32_MIN;
int32_t t58 = 314086995;
uint32_t x310 = 174U;
uint32_t t59 = 1694319928U;
static uint16_t x325 = 0U;
volatile int64_t t63 = -11601LL;
int64_t t64 = 48465987468569LL;
uint32_t x345 = 12591426U;
static int8_t x349 = INT8_MAX;
uint16_t x350 = 2U;
int8_t x358 = -4;
int32_t x360 = INT32_MAX;
volatile uint32_t t70 = 717U;
volatile uint8_t x361 = UINT8_MAX;
volatile uint64_t x366 = 1138821921LLU;
int32_t x373 = -5;
uint16_t x376 = 2822U;
volatile int32_t x383 = INT32_MIN;
volatile int16_t x394 = INT16_MAX;
uint64_t x397 = 14465216113LLU;
int8_t x400 = 1;
static volatile uint64_t x402 = 3508449LLU;
uint64_t x407 = 43208845044326LLU;
volatile uint64_t t82 = 677863413347072741LLU;
int64_t t84 = -2729243426LL;
volatile uint16_t x425 = 954U;
int16_t x426 = -1;
uint64_t x436 = 145LLU;
int16_t x448 = -1;
int64_t x450 = INT64_MIN;
volatile int64_t t89 = 48439101278LL;
uint16_t x465 = 5U;
uint32_t x466 = UINT32_MAX;
uint16_t x475 = 2U;
int8_t x480 = -14;
uint32_t t95 = 207U;
volatile int8_t x488 = INT8_MIN;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int16_t x3 = INT16_MIN;
	int16_t x4 = INT16_MAX;

	t0 = (((x1&x2)|x3)*x4);

	if (t0 != 18446744073368152243LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static int32_t x7 = -1;
	int16_t x8 = 4758;
	volatile int32_t t1 = -164626276;

	t1 = (((x5&x6)|x7)*x8);

	if (t1 != -4758) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int16_t x10 = -1;
	int8_t x12 = INT8_MIN;
	uint32_t t2 = 1966020806U;

	t2 = (((x9&x10)|x11)*x12);

	if (t2 != 128U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = INT8_MIN;
	int32_t x22 = 1;
	volatile uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t3 = 360265;

	t3 = (((x21&x22)|x23)*x24);

	if (t3 != -2147450880) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -1LL;
	int16_t x26 = 5221;
	uint32_t x27 = 1707978U;
	volatile int8_t x28 = -1;
	static volatile int64_t t4 = -481865531516LL;

	t4 = (((x25&x26)|x27)*x28);

	if (t4 != -1712111LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 0U;
	uint64_t x31 = 759926266LLU;
	int64_t x32 = INT64_MAX;
	static volatile uint64_t t5 = 127154327LLU;

	t5 = (((x29&x30)|x31)*x32);

	if (t5 != 18446744072949625350LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x38 = -1;
	uint32_t x39 = UINT32_MAX;
	static uint32_t t6 = 895U;

	t6 = (((x37&x38)|x39)*x40);

	if (t6 != 2147483648U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x41 = 47LLU;
	int8_t x42 = 0;
	int32_t x43 = 3157171;
	volatile int64_t x44 = 89520LL;
	volatile uint64_t t7 = 105142432876889716LLU;

	t7 = (((x41&x42)|x43)*x44);

	if (t7 != 282629947920LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x46 = INT32_MIN;
	static int32_t x47 = -35;
	volatile uint32_t x48 = 254U;
	uint32_t t8 = 3624U;

	t8 = (((x45&x46)|x47)*x48);

	if (t8 != 4294958406U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MIN;
	uint16_t x50 = UINT16_MAX;
	uint16_t x52 = 1U;
	int64_t t9 = 225333213554118LL;

	t9 = (((x49&x50)|x51)*x52);

	if (t9 != 96488050817LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = 438LLU;
	int64_t x62 = INT64_MAX;
	static uint8_t x63 = 101U;
	int8_t x64 = 1;

	t10 = (((x61&x62)|x63)*x64);

	if (t10 != 503LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x65 = INT16_MAX;
	uint8_t x66 = 2U;
	uint16_t x67 = 1U;
	int32_t x68 = -1;
	static int32_t t11 = 28112758;

	t11 = (((x65&x66)|x67)*x68);

	if (t11 != -3) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x69 = INT16_MIN;
	static int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MIN;
	static volatile uint16_t x72 = 9U;
	volatile int32_t t12 = 46562661;

	t12 = (((x69&x70)|x71)*x72);

	if (t12 != -294912) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x78 = 18U;
	int64_t x79 = 6986114LL;
	uint32_t x80 = 2177U;
	volatile int64_t t13 = 256682475LL;

	t13 = (((x77&x78)|x79)*x80);

	if (t13 != 15208770178LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = 63;
	uint64_t x82 = 434200361929319LLU;
	int32_t x83 = INT32_MAX;
	int8_t x84 = -1;
	uint64_t t14 = 250LLU;

	t14 = (((x81&x82)|x83)*x84);

	if (t14 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = 17710603662202086LLU;
	uint64_t x91 = 858607LLU;
	volatile int16_t x92 = INT16_MIN;

	t15 = (((x89&x90)|x91)*x92);

	if (t15 != 9954749547001970688LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x93 = -1;
	volatile int64_t x94 = -2349323264964507085LL;
	int16_t x95 = INT16_MIN;
	uint32_t x96 = UINT32_MAX;
	static volatile int64_t t16 = 21458LL;

	t16 = (((x93&x94)|x95)*x96);

	if (t16 != -59154584554035LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x97 = 449931;
	int16_t x98 = -1;
	uint32_t x99 = 1U;
	static volatile uint32_t t17 = 0U;

	t17 = (((x97&x98)|x99)*x100);

	if (t17 != 4294517365U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x101 = -1LL;
	static uint8_t x102 = 6U;
	volatile uint16_t x103 = UINT16_MAX;

	t18 = (((x101&x102)|x103)*x104);

	if (t18 != -10157925LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x105 = -1;
	volatile uint32_t x107 = 22083U;
	uint16_t x108 = 30U;
	volatile uint32_t t19 = 155U;

	t19 = (((x105&x106)|x107)*x108);

	if (t19 != 4294967266U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x113 = 1U;
	volatile uint8_t x115 = UINT8_MAX;

	t20 = (((x113&x114)|x115)*x116);

	if (t20 != 16711425) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MAX;
	int32_t x119 = -35;
	volatile uint32_t x120 = 862330U;
	volatile uint32_t t21 = 56725U;

	t21 = (((x117&x118)|x119)*x120);

	if (t21 != 4264785746U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x121 = 3LL;
	int16_t x123 = -172;
	volatile int64_t t22 = -4783638358718124LL;

	t22 = (((x121&x122)|x123)*x124);

	if (t22 != 516LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x126 = UINT8_MAX;
	int32_t x128 = -1;
	static int32_t t23 = 241;

	t23 = (((x125&x126)|x127)*x128);

	if (t23 != -255) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x129 = 147620930318LLU;
	int16_t x130 = -1039;
	int8_t x131 = 1;
	static uint64_t x132 = 8352354575943LLU;
	volatile uint64_t t24 = 841311507947641660LLU;

	t24 = (((x129&x130)|x131)*x132);

	if (t24 != 1978851183002639175LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x133 = -1;
	volatile int16_t x134 = -1258;
	uint64_t x135 = 8574939270158550071LLU;
	uint64_t x136 = UINT64_MAX;
	uint64_t t25 = 3008LLU;

	t25 = (((x133&x134)|x135)*x136);

	if (t25 != 201LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x137 = 7119030637650102LLU;
	int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MIN;
	uint64_t t26 = 36447531987069LLU;

	t26 = (((x137&x138)|x139)*x140);

	if (t26 != 18446744073703587840LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x141 = 4358LLU;
	uint64_t x144 = 49LLU;
	volatile uint64_t t27 = 37010983443LLU;

	t27 = (((x141&x142)|x143)*x144);

	if (t27 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x146 = UINT8_MAX;
	uint16_t x147 = 444U;
	static uint16_t x148 = 56U;

	t28 = (((x145&x146)|x147)*x148);

	if (t28 != 28616LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x149 = INT16_MIN;
	static int32_t x150 = -1;
	int64_t x151 = 59050LL;
	volatile int64_t x152 = -1LL;
	volatile int64_t t29 = 913448644325LL;

	t29 = (((x149&x150)|x151)*x152);

	if (t29 != 6486LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x153 = 31U;
	static int32_t x155 = -15;
	int8_t x156 = INT8_MAX;
	volatile int32_t t30 = 881;

	t30 = (((x153&x154)|x155)*x156);

	if (t30 != -1905) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x157 = 60235569597LLU;
	static uint64_t x158 = 53779996678410257LLU;
	int16_t x160 = -1;
	uint64_t t31 = 743113393LLU;

	t31 = (((x157&x158)|x159)*x160);

	if (t31 != 18446744013479227373LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = INT16_MIN;
	volatile int32_t x166 = INT32_MIN;
	int8_t x168 = -1;

	t32 = (((x165&x166)|x167)*x168);

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x177 = INT16_MAX;
	int8_t x178 = INT8_MIN;
	int32_t t33 = 12964;

	t33 = (((x177&x178)|x179)*x180);

	if (t33 != -65535) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x185 = 454903691U;
	int8_t x186 = -12;
	int8_t x187 = 11;
	static volatile int16_t x188 = INT16_MIN;
	volatile uint32_t t34 = 440316386U;

	t34 = (((x185&x186)|x187)*x188);

	if (t34 != 1547337728U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x189 = 9U;
	int8_t x190 = INT8_MAX;
	uint16_t x192 = 0U;
	volatile int32_t t35 = -51194;

	t35 = (((x189&x190)|x191)*x192);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x197 = INT16_MAX;
	static int16_t x198 = -35;
	int8_t x199 = INT8_MAX;
	uint32_t x200 = UINT32_MAX;
	volatile uint32_t t36 = 6119956U;

	t36 = (((x197&x198)|x199)*x200);

	if (t36 != 4294934529U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x201 = 85U;
	volatile int8_t x202 = 6;
	int64_t x203 = -1LL;
	volatile int32_t x204 = INT32_MIN;
	static volatile int64_t t37 = -178126126LL;

	t37 = (((x201&x202)|x203)*x204);

	if (t37 != 2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x210 = INT8_MAX;
	uint64_t x211 = 2999684347309LLU;
	int16_t x212 = INT16_MIN;
	static uint64_t t38 = 6199LLU;

	t38 = (((x209&x210)|x211)*x212);

	if (t38 != 18348450417016930304LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x213 = 49611774;
	int8_t x214 = INT8_MIN;
	volatile int8_t x215 = INT8_MIN;
	uint32_t x216 = UINT32_MAX;
	uint32_t t39 = 464673U;

	t39 = (((x213&x214)|x215)*x216);

	if (t39 != 128U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int8_t x218 = -1;
	int32_t x219 = -1;
	int16_t x220 = INT16_MIN;
	volatile int32_t t40 = -350;

	t40 = (((x217&x218)|x219)*x220);

	if (t40 != 32768) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x221 = INT32_MIN;
	static volatile int8_t x222 = INT8_MIN;
	volatile int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MAX;
	static volatile int32_t t41 = -10835459;

	t41 = (((x221&x222)|x223)*x224);

	if (t41 != -1073709056) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x226 = 500486745U;
	static volatile int16_t x227 = -1;
	int8_t x228 = INT8_MAX;
	volatile int64_t t42 = -1594492LL;

	t42 = (((x225&x226)|x227)*x228);

	if (t42 != -127LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x229 = 3137166505303LLU;
	volatile int8_t x230 = 4;
	int32_t x231 = INT32_MIN;
	volatile uint32_t x232 = 0U;
	volatile uint64_t t43 = 174361824767198035LLU;

	t43 = (((x229&x230)|x231)*x232);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x238 = INT16_MIN;
	int8_t x239 = 0;
	static volatile uint64_t t44 = 17164223596LLU;

	t44 = (((x237&x238)|x239)*x240);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x243 = INT16_MIN;
	volatile int32_t x244 = INT32_MAX;
	volatile int64_t t45 = 160LL;

	t45 = (((x241&x242)|x243)*x244);

	if (t45 != -70368744144896LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x245 = INT16_MIN;
	int64_t x246 = -161796390104LL;
	static uint64_t x247 = UINT64_MAX;
	uint16_t x248 = 295U;

	t46 = (((x245&x246)|x247)*x248);

	if (t46 != 18446744073709551321LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x249 = UINT32_MAX;
	uint64_t x250 = 6LLU;
	int16_t x251 = INT16_MAX;
	static int16_t x252 = INT16_MAX;
	static volatile uint64_t t47 = 298585823652481404LLU;

	t47 = (((x249&x250)|x251)*x252);

	if (t47 != 1073676289LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x254 = INT64_MIN;
	uint64_t x255 = 2746489769693349LLU;
	uint64_t x256 = 4868LLU;
	static volatile uint64_t t48 = 96LLU;

	t48 = (((x253&x254)|x255)*x256);

	if (t48 != 13369912198867222932LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x258 = -806;
	volatile int32_t x259 = 5575282;
	int8_t x260 = INT8_MAX;
	int32_t t49 = -25095;

	t49 = (((x257&x258)|x259)*x260);

	if (t49 != -3561842) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x261 = INT8_MIN;
	int64_t x263 = -1LL;
	int32_t x264 = -156;
	int64_t t50 = -30358LL;

	t50 = (((x261&x262)|x263)*x264);

	if (t50 != 156LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x265 = INT64_MAX;
	int16_t x266 = 1516;
	int8_t x267 = -1;
	int32_t x268 = INT32_MAX;
	int64_t t51 = -508596906210LL;

	t51 = (((x265&x266)|x267)*x268);

	if (t51 != -2147483647LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x270 = 6694LL;
	static volatile int64_t t52 = 6956459044162LL;

	t52 = (((x269&x270)|x271)*x272);

	if (t52 != -329622412LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x273 = 21362U;
	int16_t x274 = -1;
	int8_t x275 = INT8_MIN;
	int32_t x276 = 4729339;
	uint32_t t53 = 1233331783U;

	t53 = (((x273&x274)|x275)*x276);

	if (t53 != 4228756550U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x281 = 46022096758LL;
	int16_t x282 = -1;
	static int8_t x283 = -1;
	int64_t t54 = 17610118519695410LL;

	t54 = (((x281&x282)|x283)*x284);

	if (t54 != 382LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x285 = 2241926741375590944LLU;
	volatile int64_t x286 = INT64_MIN;
	volatile uint16_t x287 = 347U;

	t55 = (((x285&x286)|x287)*x288);

	if (t55 != 6812252297LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x289 = INT64_MIN;
	int8_t x291 = INT8_MIN;
	int8_t x292 = 0;
	int64_t t56 = 109199045816408399LL;

	t56 = (((x289&x290)|x291)*x292);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x293 = INT16_MAX;
	static int64_t x294 = INT64_MAX;
	int32_t x295 = INT32_MIN;
	volatile int32_t x296 = 19433218;
	static volatile int64_t t57 = 37492639764LL;

	t57 = (((x293&x294)|x295)*x296);

	if (t57 != -41731881114765058LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x297 = INT16_MAX;
	uint16_t x298 = UINT16_MAX;
	int8_t x299 = -33;
	uint8_t x300 = 2U;

	t58 = (((x297&x298)|x299)*x300);

	if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x309 = UINT16_MAX;
	int8_t x311 = INT8_MIN;
	int8_t x312 = INT8_MIN;

	t59 = (((x309&x310)|x311)*x312);

	if (t59 != 10496U) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x313 = -1LL;
	uint8_t x314 = 1U;
	uint32_t x315 = 69771U;
	static volatile int32_t x316 = -1;
	volatile int64_t t60 = 39316176989LL;

	t60 = (((x313&x314)|x315)*x316);

	if (t60 != -69771LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x317 = UINT32_MAX;
	int64_t x318 = INT64_MAX;
	volatile uint16_t x319 = 826U;
	int16_t x320 = 35;
	int64_t t61 = 62LL;

	t61 = (((x317&x318)|x319)*x320);

	if (t61 != 150323855325LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x321 = 71365U;
	int64_t x322 = INT64_MIN;
	static volatile uint8_t x323 = 11U;
	int16_t x324 = INT16_MIN;
	volatile int64_t t62 = 383234546859LL;

	t62 = (((x321&x322)|x323)*x324);

	if (t62 != -360448LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x326 = INT8_MIN;
	int64_t x327 = -1LL;
	uint8_t x328 = 26U;

	t63 = (((x325&x326)|x327)*x328);

	if (t63 != -26LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x329 = INT16_MAX;
	int64_t x330 = INT64_MIN;
	uint16_t x331 = 208U;
	uint8_t x332 = 9U;

	t64 = (((x329&x330)|x331)*x332);

	if (t64 != 1872LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x337 = INT64_MAX;
	int64_t x338 = INT64_MAX;
	int16_t x339 = INT16_MIN;
	uint32_t x340 = 2498255U;
	int64_t t65 = -6876405730286719LL;

	t65 = (((x337&x338)|x339)*x340);

	if (t65 != -2498255LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x341 = -87496418544LL;
	int64_t x342 = INT64_MAX;
	volatile int16_t x343 = INT16_MIN;
	int64_t x344 = -1LL;
	static volatile int64_t t66 = 0LL;

	t66 = (((x341&x342)|x343)*x344);

	if (t66 != 25840LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x346 = -1;
	int16_t x347 = INT16_MAX;
	int32_t x348 = 344;
	uint32_t t67 = 494508579U;

	t67 = (((x345&x346)|x347)*x348);

	if (t67 != 44826280U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x351 = -1;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t68 = -105;

	t68 = (((x349&x350)|x351)*x352);

	if (t68 != -255) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x353 = UINT16_MAX;
	uint16_t x354 = 210U;
	int16_t x355 = INT16_MIN;
	uint8_t x356 = 26U;
	volatile int32_t t69 = -1014;

	t69 = (((x353&x354)|x355)*x356);

	if (t69 != -846508) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x357 = UINT32_MAX;
	static int32_t x359 = -1;

	t70 = (((x357&x358)|x359)*x360);

	if (t70 != 2147483649U) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x362 = -1;
	int32_t x363 = -4135854;
	uint8_t x364 = 2U;
	volatile int32_t t71 = -17173487;

	t71 = (((x361&x362)|x363)*x364);

	if (t71 != -8271362) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x365 = -99LL;
	static int64_t x367 = -1184835208901356414LL;
	int8_t x368 = 17;
	static uint64_t t72 = 8LLU;

	t72 = (((x365&x366)|x367)*x368);

	if (t72 != 16751289615454902195LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x369 = 947U;
	uint64_t x370 = 33389286366406LLU;
	uint8_t x371 = 2U;
	int32_t x372 = INT32_MAX;
	static volatile uint64_t t73 = 52185669619346LLU;

	t73 = (((x369&x370)|x371)*x372);

	if (t73 != 279172874110LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x374 = UINT8_MAX;
	int32_t x375 = 915;
	static volatile int32_t t74 = -85999;

	t74 = (((x373&x374)|x375)*x376);

	if (t74 != 2875618) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x377 = -501962LL;
	int64_t x378 = INT64_MAX;
	int16_t x379 = -1;
	int8_t x380 = 59;
	volatile int64_t t75 = -1537016LL;

	t75 = (((x377&x378)|x379)*x380);

	if (t75 != -59LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x381 = INT64_MIN;
	int8_t x382 = -1;
	uint32_t x384 = 11791U;
	int64_t t76 = 123592296771LL;

	t76 = (((x381&x382)|x383)*x384);

	if (t76 != -25320979693568LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x385 = -1814616617014984022LL;
	static int8_t x386 = INT8_MIN;
	uint8_t x387 = 1U;
	int8_t x388 = -1;
	static volatile int64_t t77 = -15019LL;

	t77 = (((x385&x386)|x387)*x388);

	if (t77 != 1814616617014984063LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x389 = -1;
	int16_t x390 = INT16_MIN;
	int16_t x391 = 0;
	volatile uint8_t x392 = 1U;
	static int32_t t78 = -14846036;

	t78 = (((x389&x390)|x391)*x392);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x393 = 47LLU;
	uint16_t x395 = UINT16_MAX;
	uint32_t x396 = 42803907U;
	uint64_t t79 = 5084012LLU;

	t79 = (((x393&x394)|x395)*x396);

	if (t79 != 2805154045245LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x398 = INT32_MIN;
	int32_t x399 = -268;
	volatile uint64_t t80 = 272397452912840LLU;

	t80 = (((x397&x398)|x399)*x400);

	if (t80 != 18446744073709551348LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x401 = 20U;
	int64_t x403 = -1LL;
	int16_t x404 = -223;
	volatile uint64_t t81 = 16312098LLU;

	t81 = (((x401&x402)|x403)*x404);

	if (t81 != 223LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x405 = 185266414U;
	uint8_t x406 = 59U;
	uint64_t x408 = 141126LLU;

	t82 = (((x405&x406)|x407)*x408);

	if (t82 != 6097891465726680084LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x417 = INT16_MIN;
	int32_t x418 = INT32_MIN;
	int16_t x419 = -83;
	uint32_t x420 = 2U;
	volatile uint32_t t83 = 34U;

	t83 = (((x417&x418)|x419)*x420);

	if (t83 != 4294967130U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x421 = -924110881;
	volatile int16_t x422 = -1;
	static int64_t x423 = INT64_MAX;
	int32_t x424 = 1793205;

	t84 = (((x421&x422)|x423)*x424);

	if (t84 != -1793205LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x427 = INT8_MAX;
	static int8_t x428 = INT8_MIN;
	static volatile int32_t t85 = -301058292;

	t85 = (((x425&x426)|x427)*x428);

	if (t85 != -130944) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x433 = 0;
	int32_t x434 = INT32_MIN;
	static volatile uint16_t x435 = UINT16_MAX;
	static volatile uint64_t t86 = 24136762459LLU;

	t86 = (((x433&x434)|x435)*x436);

	if (t86 != 9502575LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x441 = 1275159492011035LLU;
	static volatile int64_t x442 = INT64_MIN;
	int32_t x443 = INT32_MIN;
	volatile int8_t x444 = INT8_MAX;
	uint64_t t87 = 131305921859154792LLU;

	t87 = (((x441&x442)|x443)*x444);

	if (t87 != 18446743800979128320LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x445 = INT16_MIN;
	volatile int8_t x446 = INT8_MIN;
	static volatile int32_t x447 = INT32_MAX;
	int32_t t88 = -479359;

	t88 = (((x445&x446)|x447)*x448);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x449 = 1;
	static uint16_t x451 = UINT16_MAX;
	int32_t x452 = INT32_MIN;

	t89 = (((x449&x450)|x451)*x452);

	if (t89 != -140735340871680LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x453 = INT32_MIN;
	int32_t x454 = -1;
	int64_t x455 = INT64_MIN;
	int32_t x456 = INT32_MIN;
	volatile int64_t t90 = 31815696676653LL;

	t90 = (((x453&x454)|x455)*x456);

	if (t90 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x457 = 180U;
	int32_t x458 = INT32_MIN;
	int8_t x459 = INT8_MIN;
	int8_t x460 = INT8_MIN;
	uint32_t t91 = 15844U;

	t91 = (((x457&x458)|x459)*x460);

	if (t91 != 16384U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x467 = 17U;
	int8_t x468 = 2;
	uint32_t t92 = 24206976U;

	t92 = (((x465&x466)|x467)*x468);

	if (t92 != 42U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x469 = UINT16_MAX;
	uint64_t x470 = 6167055LLU;
	static int16_t x471 = INT16_MIN;
	int8_t x472 = INT8_MAX;
	uint64_t t93 = 8380LLU;

	t93 = (((x469&x470)|x471)*x472);

	if (t93 != 18446744073706237297LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x473 = 502850LLU;
	int64_t x474 = -1LL;
	static int16_t x476 = -2764;
	uint64_t t94 = 1920271260LLU;

	t94 = (((x473&x474)|x475)*x476);

	if (t94 != 18446744072319674216LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x477 = 3U;
	uint16_t x478 = 6614U;
	int8_t x479 = 0;

	t95 = (((x477&x478)|x479)*x480);

	if (t95 != 4294967268U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x481 = INT8_MIN;
	uint32_t x482 = UINT32_MAX;
	static uint16_t x483 = UINT16_MAX;
	volatile int32_t x484 = 312929299;
	volatile uint32_t t96 = 8147U;

	t96 = (((x481&x482)|x483)*x484);

	if (t96 != 3982037997U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x485 = -3497;
	static int8_t x486 = INT8_MIN;
	volatile int32_t x487 = -1;
	volatile int32_t t97 = 0;

	t97 = (((x485&x486)|x487)*x488);

	if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x489 = INT8_MIN;
	static int32_t x490 = -540201;
	uint16_t x491 = 115U;
	volatile uint64_t x492 = UINT64_MAX;
	static uint64_t t98 = 1336521753537499055LLU;

	t98 = (((x489&x490)|x491)*x492);

	if (t98 != 540173LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x493 = 7U;
	int32_t x494 = INT32_MIN;
	static volatile int32_t x495 = 347;
	uint32_t x496 = 24U;
	uint32_t t99 = 1455831U;

	t99 = (((x493&x494)|x495)*x496);

	if (t99 != 8328U) { NG(); } else { ; }
	
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


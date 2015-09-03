#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 0U;
uint8_t x4 = 3U;
volatile uint8_t x6 = UINT8_MAX;
static int8_t x7 = INT8_MAX;
uint32_t x9 = 1U;
volatile int8_t x10 = INT8_MIN;
static uint32_t x11 = 1826459341U;
uint32_t t2 = 78283U;
volatile int32_t x14 = INT32_MAX;
int64_t x19 = INT64_MIN;
int16_t x21 = -1;
volatile uint16_t x33 = UINT16_MAX;
static int64_t x35 = -1LL;
volatile int64_t x43 = 69684004LL;
volatile int32_t x65 = INT32_MAX;
volatile uint64_t t16 = 173605796LLU;
int64_t x86 = -1LL;
int64_t x96 = INT64_MIN;
volatile int64_t t18 = -398LL;
static uint64_t x99 = 12699554166901758LLU;
int8_t x108 = -1;
volatile int32_t t20 = INT32_MAX;
int16_t x113 = 1;
uint8_t x115 = UINT8_MAX;
int64_t t23 = 1977833219986LL;
int8_t x128 = 26;
uint64_t t25 = 11947LLU;
uint8_t x136 = 9U;
int16_t x144 = INT16_MAX;
volatile int32_t t27 = 366;
int8_t x149 = -19;
static int16_t x168 = 0;
volatile uint64_t t33 = 13LLU;
int32_t t34 = -20680445;
volatile uint16_t x181 = 4146U;
int64_t t35 = 0LL;
int8_t x186 = -1;
uint32_t x188 = 26U;
volatile uint64_t x195 = 62LLU;
static uint32_t x198 = 6613U;
volatile int32_t x199 = 408646;
int32_t x200 = -1;
static int32_t t39 = 0;
uint8_t x204 = UINT8_MAX;
static int32_t t40 = 24;
int32_t x207 = -1;
volatile uint32_t t41 = 94037U;
int16_t x209 = 24;
uint8_t x213 = UINT8_MAX;
volatile uint16_t x214 = 261U;
static int8_t x216 = INT8_MIN;
volatile uint8_t x221 = 101U;
static uint64_t x223 = 62040771155555LLU;
volatile uint64_t t44 = 184276487737698LLU;
uint32_t x230 = 3280U;
static uint16_t x232 = 4U;
static volatile int32_t t45 = 1856;
uint32_t x259 = 456696U;
static uint32_t t48 = 70716U;
int64_t x263 = -1LL;
int16_t x264 = INT16_MIN;
volatile int32_t t50 = -47060250;
static volatile int32_t x281 = 893326;
volatile uint64_t t54 = 319040110933LLU;
int16_t x294 = -1;
int8_t x295 = INT8_MAX;
int32_t t56 = 13917;
volatile int16_t x297 = INT16_MAX;
int16_t x298 = INT16_MIN;
int8_t x314 = 1;
int32_t t61 = -185282;
int32_t x319 = 50;
int64_t x325 = -1LL;
uint32_t x345 = 30089U;
int16_t x355 = INT16_MIN;
int32_t x367 = -1;
int32_t t70 = -5027;
static uint8_t x379 = UINT8_MAX;
int16_t x380 = INT16_MIN;
int16_t x387 = INT16_MIN;
volatile uint64_t x388 = 737474LLU;
volatile int32_t x390 = INT32_MIN;
static volatile int32_t t73 = 804;
static volatile int16_t x400 = INT16_MIN;
int32_t t74 = -2577;
int16_t x405 = INT16_MIN;
static int32_t x406 = 2;
uint32_t x408 = 42U;
uint16_t x421 = 22U;
volatile uint64_t t79 = 6625054732347LLU;
int32_t x427 = 16440631;
int16_t x430 = INT16_MIN;
uint8_t x431 = 125U;
volatile int32_t t81 = 5397;
static int8_t x436 = INT8_MAX;
volatile int8_t x438 = -1;
static uint8_t x444 = 53U;
volatile uint16_t x454 = 1216U;
int32_t x464 = -1;
static int32_t t88 = 233590;
uint32_t x465 = UINT32_MAX;
volatile uint8_t x470 = 9U;
int16_t x484 = INT16_MIN;
int32_t x487 = -1;
int64_t x488 = -1LL;
volatile int8_t x511 = INT8_MIN;
int16_t x512 = -54;
volatile int32_t t97 = 85229;
int16_t x514 = INT16_MIN;
int16_t x515 = INT16_MIN;
static volatile uint64_t x521 = UINT64_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint8_t x3 = 1U;
	volatile int32_t t0 = -1;

	t0 = (((x1<x2)^x3)*x4);

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = UINT64_MAX;
	static uint32_t x8 = UINT32_MAX;
	static uint32_t t1 = 11702U;

	t1 = (((x5<x6)^x7)*x8);

	if (t1 != 4294967169U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x12 = INT32_MIN;

	t2 = (((x9<x10)^x11)*x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -4594;
	int32_t x15 = INT32_MIN;
	volatile uint32_t x16 = 64674664U;
	volatile uint32_t t3 = 23844U;

	t3 = (((x13<x14)^x15)*x16);

	if (t3 != 64674664U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 79046LLU;
	uint64_t x18 = 13339397LLU;
	int8_t x20 = -1;
	volatile int64_t t4 = INT64_MAX;

	t4 = (((x17<x18)^x19)*x20);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = UINT8_MAX;
	uint32_t x23 = 455U;
	static int32_t x24 = -1;
	static volatile uint32_t t5 = 38764U;

	t5 = (((x21<x22)^x23)*x24);

	if (t5 != 4294966842U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = 4;
	uint32_t x26 = 271U;
	uint16_t x27 = 126U;
	volatile uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 1LLU;

	t6 = (((x25<x26)^x27)*x28);

	if (t6 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = UINT64_MAX;
	uint32_t x30 = UINT32_MAX;
	int64_t x31 = 77360LL;
	volatile int32_t x32 = INT32_MIN;
	static volatile int64_t t7 = 5734LL;

	t7 = (((x29<x30)^x31)*x32);

	if (t7 != -166129335009280LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MAX;
	static uint64_t x36 = 0LLU;
	static uint64_t t8 = 576058LLU;

	t8 = (((x33<x34)^x35)*x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MAX;
	int8_t x42 = INT8_MIN;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t9 = 0LLU;

	t9 = (((x41<x42)^x43)*x44);

	if (t9 != 18446744073639867612LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MIN;
	volatile uint32_t x47 = UINT32_MAX;
	volatile int32_t x48 = INT32_MAX;
	uint32_t t10 = 480679450U;

	t10 = (((x45<x46)^x47)*x48);

	if (t10 != 2147483649U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x49 = 320416065LLU;
	int32_t x50 = INT32_MIN;
	uint32_t x51 = 15644U;
	int32_t x52 = -1;
	volatile uint32_t t11 = 477636779U;

	t11 = (((x49<x50)^x51)*x52);

	if (t11 != 4294951651U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = -2210241279452325854LL;
	volatile uint64_t x59 = 984LLU;
	int16_t x60 = -1;
	uint64_t t12 = 1970480LLU;

	t12 = (((x57<x58)^x59)*x60);

	if (t12 != 18446744073709550632LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	int64_t x62 = INT64_MIN;
	int64_t x63 = INT64_MAX;
	uint8_t x64 = 1U;
	int64_t t13 = INT64_MAX;

	t13 = (((x61<x62)^x63)*x64);

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x66 = 52431010209122529LLU;
	int32_t x67 = 732465803;
	uint64_t x68 = UINT64_MAX;
	static volatile uint64_t t14 = 2812535681743884LLU;

	t14 = (((x65<x66)^x67)*x68);

	if (t14 != 18446744072977085814LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 136U;
	static uint16_t x74 = UINT16_MAX;
	int64_t x75 = -30730734833802639LL;
	int32_t x76 = -1;
	volatile int64_t t15 = 2LL;

	t15 = (((x73<x74)^x75)*x76);

	if (t15 != 30730734833802640LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -14477LL;
	volatile int8_t x78 = -1;
	volatile uint64_t x79 = UINT64_MAX;
	int8_t x80 = -1;

	t16 = (((x77<x78)^x79)*x80);

	if (t16 != 2LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = INT64_MAX;
	uint8_t x87 = 16U;
	uint64_t x88 = 225LLU;
	uint64_t t17 = 268LLU;

	t17 = (((x85<x86)^x87)*x88);

	if (t17 != 3600LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x93 = 15721U;
	volatile uint16_t x94 = UINT16_MAX;
	int32_t x95 = 1;

	t18 = (((x93<x94)^x95)*x96);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x97 = 369U;
	int8_t x98 = INT8_MIN;
	uint32_t x100 = 3005695U;
	volatile uint64_t t19 = 2096850942141193172LLU;

	t19 = (((x97<x98)^x99)*x100);

	if (t19 != 4672973180717218306LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = -160952154;
	int16_t x106 = INT16_MIN;
	int32_t x107 = INT32_MIN;

	t20 = (((x105<x106)^x107)*x108);

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MAX;
	uint32_t x112 = UINT32_MAX;
	uint32_t t21 = 29797U;

	t21 = (((x109<x110)^x111)*x112);

	if (t21 != 4294967170U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x114 = INT8_MIN;
	volatile uint64_t x116 = UINT64_MAX;
	volatile uint64_t t22 = 266LLU;

	t22 = (((x113<x114)^x115)*x116);

	if (t22 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x121 = 8295085U;
	uint16_t x122 = UINT16_MAX;
	int32_t x123 = -1;
	int64_t x124 = -239816701LL;

	t23 = (((x121<x122)^x123)*x124);

	if (t23 != 239816701LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x125 = -1LL;
	int16_t x126 = INT16_MAX;
	int16_t x127 = -1;
	volatile int32_t t24 = 755896;

	t24 = (((x125<x126)^x127)*x128);

	if (t24 != -52) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = 58;
	int8_t x130 = -1;
	volatile uint64_t x131 = UINT64_MAX;
	volatile int8_t x132 = INT8_MIN;

	t25 = (((x129<x130)^x131)*x132);

	if (t25 != 128LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = INT8_MIN;
	static uint32_t x134 = UINT32_MAX;
	int16_t x135 = INT16_MIN;
	static int32_t t26 = -1;

	t26 = (((x133<x134)^x135)*x136);

	if (t26 != -294903) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x141 = 519590U;
	uint8_t x142 = UINT8_MAX;
	uint16_t x143 = 195U;

	t27 = (((x141<x142)^x143)*x144);

	if (t27 != 6389565) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x145 = 607U;
	static uint8_t x146 = UINT8_MAX;
	uint32_t x147 = 52019375U;
	uint32_t x148 = 6457194U;
	uint32_t t28 = 803581619U;

	t28 = (((x145<x146)^x147)*x148);

	if (t28 != 2688815478U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x150 = 57U;
	uint16_t x151 = UINT16_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t29 = 0;

	t29 = (((x149<x150)^x151)*x152);

	if (t29 != -2147418112) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = 7994;
	int32_t x158 = -1;
	int32_t x159 = -1;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t30 = -957706;

	t30 = (((x157<x158)^x159)*x160);

	if (t30 != -255) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = INT64_MIN;
	int16_t x162 = 7605;
	int32_t x163 = INT32_MIN;
	int32_t x164 = -1;
	int32_t t31 = INT32_MAX;

	t31 = (((x161<x162)^x163)*x164);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x165 = UINT64_MAX;
	int32_t x166 = -268;
	static volatile int16_t x167 = -727;
	volatile int32_t t32 = -7;

	t32 = (((x165<x166)^x167)*x168);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x169 = 4170U;
	static int32_t x170 = INT32_MAX;
	uint64_t x171 = 456365217006LLU;
	uint32_t x172 = 4U;

	t33 = (((x169<x170)^x171)*x172);

	if (t33 != 1825460868028LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x177 = 3U;
	int64_t x178 = 2708658121528LL;
	volatile int8_t x179 = -2;
	static int32_t x180 = -221542;

	t34 = (((x177<x178)^x179)*x180);

	if (t34 != 221542) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x182 = 5U;
	int64_t x183 = -1LL;
	volatile int8_t x184 = INT8_MIN;

	t35 = (((x181<x182)^x183)*x184);

	if (t35 != 128LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = -8;
	static uint32_t x187 = 181U;
	uint32_t t36 = 1333635017U;

	t36 = (((x185<x186)^x187)*x188);

	if (t36 != 4680U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x189 = 0U;
	static int64_t x190 = INT64_MAX;
	uint16_t x191 = 0U;
	volatile int32_t x192 = INT32_MIN;
	int32_t t37 = INT32_MIN;

	t37 = (((x189<x190)^x191)*x192);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x193 = 188593904U;
	uint8_t x194 = 0U;
	volatile int32_t x196 = -4958;
	volatile uint64_t t38 = 31571LLU;

	t38 = (((x193<x194)^x195)*x196);

	if (t38 != 18446744073709244220LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x197 = INT32_MAX;

	t39 = (((x197<x198)^x199)*x200);

	if (t39 != -408646) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x201 = INT64_MIN;
	static int16_t x202 = 6;
	static int8_t x203 = -1;

	t40 = (((x201<x202)^x203)*x204);

	if (t40 != -510) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x205 = 45037736;
	static uint64_t x206 = 22LLU;
	uint32_t x208 = UINT32_MAX;

	t41 = (((x205<x206)^x207)*x208);

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x210 = UINT32_MAX;
	int64_t x211 = 1LL;
	int32_t x212 = INT32_MIN;
	int64_t t42 = -49LL;

	t42 = (((x209<x210)^x211)*x212);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x215 = 1660;
	int32_t t43 = 0;

	t43 = (((x213<x214)^x215)*x216);

	if (t43 != -212608) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x222 = 20U;
	int32_t x224 = INT32_MIN;

	t44 = (((x221<x222)^x223)*x224);

	if (t44 != 9290878539664457728LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x229 = 854;
	static int8_t x231 = -4;

	t45 = (((x229<x230)^x231)*x232);

	if (t45 != -12) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x237 = -1LL;
	int32_t x238 = -4091048;
	uint32_t x239 = 428735654U;
	int32_t x240 = INT32_MIN;
	uint32_t t46 = 938773U;

	t46 = (((x237<x238)^x239)*x240);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x245 = -5;
	int8_t x246 = 0;
	static int32_t x247 = INT32_MAX;
	static int32_t x248 = 0;
	int32_t t47 = -9000;

	t47 = (((x245<x246)^x247)*x248);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x257 = -1LL;
	static int32_t x258 = INT32_MAX;
	static int8_t x260 = INT8_MIN;

	t48 = (((x257<x258)^x259)*x260);

	if (t48 != 4236510080U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x261 = INT16_MAX;
	int16_t x262 = INT16_MAX;
	int64_t t49 = 2765035187LL;

	t49 = (((x261<x262)^x263)*x264);

	if (t49 != 32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x265 = INT64_MIN;
	volatile int32_t x266 = -1;
	volatile int32_t x267 = -5509;
	static volatile int32_t x268 = 15;

	t50 = (((x265<x266)^x267)*x268);

	if (t50 != -82650) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x269 = 76264769973074091LLU;
	uint8_t x270 = UINT8_MAX;
	uint32_t x271 = 19U;
	int8_t x272 = INT8_MIN;
	volatile uint32_t t51 = 4U;

	t51 = (((x269<x270)^x271)*x272);

	if (t51 != 4294964864U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x273 = -295LL;
	uint8_t x274 = 0U;
	uint32_t x275 = 915944U;
	uint32_t x276 = UINT32_MAX;
	static volatile uint32_t t52 = 209563U;

	t52 = (((x273<x274)^x275)*x276);

	if (t52 != 4294051351U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x277 = INT16_MIN;
	int32_t x278 = INT32_MAX;
	volatile uint32_t x279 = 12613356U;
	int32_t x280 = 1751;
	static volatile uint32_t t53 = 50U;

	t53 = (((x277<x278)^x279)*x280);

	if (t53 != 611151627U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x282 = 7U;
	int32_t x283 = -1;
	uint64_t x284 = 93116LLU;

	t54 = (((x281<x282)^x283)*x284);

	if (t54 != 18446744073709458500LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x289 = UINT32_MAX;
	uint8_t x290 = UINT8_MAX;
	int32_t x291 = 2;
	volatile int8_t x292 = 0;
	int32_t t55 = 14;

	t55 = (((x289<x290)^x291)*x292);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x293 = INT64_MIN;
	uint8_t x296 = UINT8_MAX;

	t56 = (((x293<x294)^x295)*x296);

	if (t56 != 32130) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x299 = 126484762659LLU;
	uint64_t x300 = 64635574596726383LLU;
	static uint64_t t57 = 68701101518713LLU;

	t57 = (((x297<x298)^x299)*x300);

	if (t57 != 2262590807571646765LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x301 = INT16_MAX;
	uint8_t x302 = 9U;
	int64_t x303 = INT64_MIN;
	volatile uint64_t x304 = 64990LLU;
	uint64_t t58 = 223201660180631LLU;

	t58 = (((x301<x302)^x303)*x304);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x305 = UINT64_MAX;
	static int64_t x306 = INT64_MAX;
	int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MAX;
	static int32_t t59 = 0;

	t59 = (((x305<x306)^x307)*x308);

	if (t59 != -4161536) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x309 = INT16_MAX;
	static uint64_t x310 = 5154697LLU;
	static volatile int16_t x311 = INT16_MIN;
	int32_t x312 = 1;
	volatile int32_t t60 = -45;

	t60 = (((x309<x310)^x311)*x312);

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x313 = -2005;
	int16_t x315 = INT16_MIN;
	static volatile int8_t x316 = INT8_MAX;

	t61 = (((x313<x314)^x315)*x316);

	if (t61 != -4161409) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x317 = 2;
	static int8_t x318 = INT8_MIN;
	int32_t x320 = 0;
	static int32_t t62 = 229506;

	t62 = (((x317<x318)^x319)*x320);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x326 = INT8_MIN;
	static int16_t x327 = -1447;
	int16_t x328 = 4692;
	int32_t t63 = -490332720;

	t63 = (((x325<x326)^x327)*x328);

	if (t63 != -6789324) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x333 = 119294374U;
	volatile uint16_t x334 = 4981U;
	int8_t x335 = -1;
	uint32_t x336 = 5U;
	static volatile uint32_t t64 = 206294U;

	t64 = (((x333<x334)^x335)*x336);

	if (t64 != 4294967291U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x341 = INT16_MIN;
	int32_t x342 = INT32_MIN;
	int64_t x343 = -2076846LL;
	volatile uint32_t x344 = 70010691U;
	static volatile int64_t t65 = -65286LL;

	t65 = (((x341<x342)^x343)*x344);

	if (t65 != -145401423560586LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x346 = -57620LL;
	static uint32_t x347 = UINT32_MAX;
	uint32_t x348 = 43623U;
	uint32_t t66 = 294457829U;

	t66 = (((x345<x346)^x347)*x348);

	if (t66 != 4294923673U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x353 = -1;
	static volatile int64_t x354 = INT64_MIN;
	int16_t x356 = INT16_MAX;
	volatile int32_t t67 = -17;

	t67 = (((x353<x354)^x355)*x356);

	if (t67 != -1073709056) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x357 = INT16_MIN;
	static uint16_t x358 = UINT16_MAX;
	static uint16_t x359 = 3463U;
	static int8_t x360 = 1;
	volatile int32_t t68 = 15044;

	t68 = (((x357<x358)^x359)*x360);

	if (t68 != 3462) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x361 = -814;
	uint32_t x362 = 2715665U;
	int16_t x363 = -1;
	int64_t x364 = -31016393LL;
	int64_t t69 = -4097981126532LL;

	t69 = (((x361<x362)^x363)*x364);

	if (t69 != 31016393LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x365 = UINT8_MAX;
	int32_t x366 = INT32_MIN;
	static uint16_t x368 = 12090U;

	t70 = (((x365<x366)^x367)*x368);

	if (t70 != -12090) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x377 = 46;
	static uint16_t x378 = 3488U;
	volatile int32_t t71 = 981;

	t71 = (((x377<x378)^x379)*x380);

	if (t71 != -8323072) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x385 = 2665184U;
	static int16_t x386 = -24;
	static uint64_t t72 = 1969623863221818151LLU;

	t72 = (((x385<x386)^x387)*x388);

	if (t72 != 18446744049544741058LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x389 = INT16_MIN;
	int32_t x391 = INT32_MAX;
	volatile uint16_t x392 = 0U;

	t73 = (((x389<x390)^x391)*x392);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x397 = 2830U;
	int32_t x398 = -1;
	uint16_t x399 = UINT16_MAX;

	t74 = (((x397<x398)^x399)*x400);

	if (t74 != -2147450880) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x401 = UINT32_MAX;
	volatile int64_t x402 = INT64_MIN;
	volatile uint64_t x403 = 16755170477325LLU;
	uint64_t x404 = UINT64_MAX;
	uint64_t t75 = 78869497LLU;

	t75 = (((x401<x402)^x403)*x404);

	if (t75 != 18446727318539074291LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x407 = -2393;
	uint32_t t76 = 21U;

	t76 = (((x405<x406)^x407)*x408);

	if (t76 != 4294866748U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x413 = -3;
	static volatile int8_t x414 = INT8_MIN;
	uint16_t x415 = 1703U;
	volatile int32_t x416 = -5256;
	int32_t t77 = 5270221;

	t77 = (((x413<x414)^x415)*x416);

	if (t77 != -8950968) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x417 = 122950LLU;
	static int32_t x418 = -1;
	volatile int16_t x419 = INT16_MAX;
	volatile int16_t x420 = INT16_MIN;
	static int32_t t78 = 2636;

	t78 = (((x417<x418)^x419)*x420);

	if (t78 != -1073676288) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x422 = INT8_MIN;
	uint64_t x423 = 266967018503LLU;
	int16_t x424 = INT16_MIN;

	t79 = (((x421<x422)^x423)*x424);

	if (t79 != 18437996098447245312LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x425 = -1;
	volatile int8_t x426 = INT8_MIN;
	int16_t x428 = -1;
	static volatile int32_t t80 = -454966;

	t80 = (((x425<x426)^x427)*x428);

	if (t80 != -16440631) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x429 = UINT16_MAX;
	int8_t x432 = -1;

	t81 = (((x429<x430)^x431)*x432);

	if (t81 != -125) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x433 = UINT32_MAX;
	int64_t x434 = -47026608LL;
	int64_t x435 = 402LL;
	static volatile int64_t t82 = -23217226902LL;

	t82 = (((x433<x434)^x435)*x436);

	if (t82 != 51054LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x437 = INT8_MIN;
	volatile int64_t x439 = 5930LL;
	volatile int32_t x440 = INT32_MIN;
	volatile int64_t t83 = -33373753619621605LL;

	t83 = (((x437<x438)^x439)*x440);

	if (t83 != -12736725516288LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x441 = 0;
	static uint8_t x442 = 78U;
	static uint8_t x443 = UINT8_MAX;
	static int32_t t84 = 73333;

	t84 = (((x441<x442)^x443)*x444);

	if (t84 != 13462) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x449 = INT64_MIN;
	int64_t x450 = INT64_MIN;
	uint16_t x451 = 381U;
	uint64_t x452 = 55110910641LLU;
	uint64_t t85 = 2849770935976295LLU;

	t85 = (((x449<x450)^x451)*x452);

	if (t85 != 20997256954221LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x453 = 903566042814LLU;
	static uint16_t x455 = 3954U;
	uint8_t x456 = UINT8_MAX;
	static int32_t t86 = -77576;

	t86 = (((x453<x454)^x455)*x456);

	if (t86 != 1008270) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x457 = INT16_MIN;
	volatile int16_t x458 = -5;
	int64_t x459 = INT64_MIN;
	int8_t x460 = -1;
	volatile int64_t t87 = INT64_MAX;

	t87 = (((x457<x458)^x459)*x460);

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x461 = UINT64_MAX;
	int8_t x462 = INT8_MIN;
	uint16_t x463 = 1801U;

	t88 = (((x461<x462)^x463)*x464);

	if (t88 != -1801) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x466 = INT16_MAX;
	uint32_t x467 = UINT32_MAX;
	static uint64_t x468 = 1695842166785LLU;
	volatile uint64_t t89 = 6LLU;

	t89 = (((x465<x466)^x467)*x468);

	if (t89 != 15569478781946959871LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x469 = -1;
	uint64_t x471 = UINT64_MAX;
	volatile uint8_t x472 = 42U;
	uint64_t t90 = 6215714791613675549LLU;

	t90 = (((x469<x470)^x471)*x472);

	if (t90 != 18446744073709551532LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x477 = UINT8_MAX;
	int64_t x478 = -1LL;
	int8_t x479 = INT8_MIN;
	static int16_t x480 = INT16_MIN;
	volatile int32_t t91 = 11;

	t91 = (((x477<x478)^x479)*x480);

	if (t91 != 4194304) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x481 = 5U;
	int64_t x482 = -1LL;
	uint16_t x483 = 73U;
	static int32_t t92 = 205116601;

	t92 = (((x481<x482)^x483)*x484);

	if (t92 != -2392064) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x485 = 18LLU;
	uint32_t x486 = 170U;
	volatile int64_t t93 = -2113235762431LL;

	t93 = (((x485<x486)^x487)*x488);

	if (t93 != 2LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x493 = 777535U;
	int32_t x494 = INT32_MIN;
	int32_t x495 = -1;
	static int64_t x496 = 1865009295288LL;
	int64_t t94 = 52963608258LL;

	t94 = (((x493<x494)^x495)*x496);

	if (t94 != -3730018590576LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x501 = 114128176U;
	uint8_t x502 = 1U;
	int16_t x503 = -1;
	uint64_t x504 = UINT64_MAX;
	uint64_t t95 = 8986236439747361LLU;

	t95 = (((x501<x502)^x503)*x504);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x505 = -1LL;
	uint8_t x506 = 2U;
	volatile int16_t x507 = -1;
	int8_t x508 = INT8_MAX;
	volatile int32_t t96 = -159;

	t96 = (((x505<x506)^x507)*x508);

	if (t96 != -254) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x509 = 0U;
	uint16_t x510 = 97U;

	t97 = (((x509<x510)^x511)*x512);

	if (t97 != 6858) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x513 = 2474U;
	int32_t x516 = -1;
	volatile int32_t t98 = 0;

	t98 = (((x513<x514)^x515)*x516);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x522 = INT32_MIN;
	int8_t x523 = -1;
	int8_t x524 = -1;
	volatile int32_t t99 = -57641;

	t99 = (((x521<x522)^x523)*x524);

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


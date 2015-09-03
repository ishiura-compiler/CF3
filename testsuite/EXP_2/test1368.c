#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x17 = 4;
uint16_t x18 = 781U;
uint8_t x23 = 6U;
volatile int32_t x28 = -1;
int32_t t2 = 108586460;
uint8_t x32 = 28U;
int8_t x53 = INT8_MIN;
volatile int32_t x63 = INT32_MIN;
volatile uint64_t t7 = 2146460LLU;
int8_t x82 = -1;
uint32_t x103 = UINT32_MAX;
int64_t x109 = 2LL;
int64_t x111 = INT64_MIN;
uint16_t x113 = 3938U;
volatile uint32_t x125 = 3U;
volatile uint32_t t17 = 61U;
static int16_t x131 = -1;
volatile uint32_t t18 = 188936161U;
int8_t x134 = INT8_MIN;
static int8_t x140 = INT8_MIN;
uint32_t x144 = 809758083U;
static volatile int16_t x147 = 0;
static volatile int32_t t22 = 2586230;
static volatile int32_t x154 = INT32_MAX;
volatile int8_t x161 = INT8_MAX;
volatile int64_t x165 = -1LL;
int64_t x166 = -1LL;
int16_t x169 = INT16_MAX;
int32_t x186 = -1;
uint16_t x187 = 1639U;
int16_t x194 = -1;
volatile int64_t x195 = -1LL;
uint16_t x200 = UINT16_MAX;
volatile int8_t x213 = INT8_MIN;
static uint16_t x214 = 6U;
uint32_t x219 = UINT32_MAX;
volatile int8_t x224 = 0;
uint32_t x226 = UINT32_MAX;
int16_t x230 = INT16_MIN;
int32_t t37 = 80;
uint64_t x233 = 174345726LLU;
volatile uint64_t t38 = 1698LLU;
volatile int16_t x246 = INT16_MIN;
static uint32_t x248 = 511388U;
uint8_t x270 = 7U;
static int8_t x272 = INT8_MIN;
static int32_t t42 = 235;
int16_t x275 = INT16_MIN;
int16_t x278 = -119;
uint8_t x279 = UINT8_MAX;
int16_t x285 = -1;
int16_t x292 = -1;
volatile int16_t x305 = -1;
int16_t x309 = INT16_MIN;
int64_t x311 = INT64_MIN;
uint8_t x314 = 15U;
uint16_t x315 = 0U;
volatile int16_t x317 = INT16_MAX;
int16_t x324 = -1;
uint8_t x336 = UINT8_MAX;
int8_t x337 = -1;
volatile int64_t t59 = 0LL;
uint64_t x357 = UINT64_MAX;
volatile int8_t x364 = -46;
uint32_t x369 = UINT32_MAX;
int16_t x372 = 2819;
uint64_t x376 = 541104358901339LLU;
volatile uint64_t t64 = 0LLU;
uint64_t t65 = 642553129357LLU;
uint64_t x392 = 6LLU;
uint64_t t66 = 36438071431LLU;
uint8_t x402 = 0U;
static volatile uint32_t t69 = 77U;
uint32_t x413 = 1752289U;
volatile int32_t t72 = -70;
int8_t x433 = -1;
static volatile uint16_t x437 = 54U;
static int64_t x447 = INT64_MIN;
int32_t x448 = -1;
volatile uint8_t x459 = 27U;
volatile int32_t t80 = -1617604;
int8_t x465 = -1;
uint64_t t84 = 1044LLU;
volatile int32_t t85 = 4529529;
volatile uint64_t x497 = UINT64_MAX;
volatile uint8_t x500 = 109U;
static int64_t x522 = -1LL;
static int64_t x524 = 194038LL;
volatile int64_t t90 = -203389LL;
uint8_t x527 = UINT8_MAX;
volatile uint8_t x532 = UINT8_MAX;
int32_t t92 = 101301;
static int32_t x534 = 122;
static volatile uint64_t t95 = 1258LLU;
int16_t x553 = INT16_MIN;
volatile int32_t t96 = 2987367;
uint32_t x562 = 22259051U;
int32_t t97 = 17960;
uint8_t x568 = 22U;
int32_t t98 = -395230;
static uint32_t t99 = 360474171U;


void f0(void) {
	volatile uint64_t x19 = 268271309LLU;
	static int8_t x20 = 0;
	int32_t t0 = 2;

	t0 = ((x17-(x18<x19))*x20);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x21 = -147;
	volatile int8_t x22 = -4;
	int32_t x24 = -3351;
	int32_t t1 = -142719597;

	t1 = ((x21-(x22<x23))*x24);

	if (t1 != 495948) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x25 = -1;
	static uint32_t x26 = UINT32_MAX;
	uint16_t x27 = 2602U;

	t2 = ((x25-(x26<x27))*x28);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = INT8_MIN;
	int8_t x30 = INT8_MIN;
	static uint16_t x31 = UINT16_MAX;
	int32_t t3 = 934;

	t3 = ((x29-(x30<x31))*x32);

	if (t3 != -3612) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x33 = 9;
	static int16_t x34 = INT16_MAX;
	uint32_t x35 = 227897U;
	volatile int64_t x36 = -1LL;
	static int64_t t4 = -143226LL;

	t4 = ((x33-(x34<x35))*x36);

	if (t4 != -8LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x41 = 24;
	static volatile int64_t x42 = INT64_MAX;
	int32_t x43 = INT32_MIN;
	static volatile int64_t x44 = 352115083LL;
	int64_t t5 = 28LL;

	t5 = ((x41-(x42<x43))*x44);

	if (t5 != 8450761992LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x54 = 785LL;
	int8_t x55 = 1;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t6 = -52259460;

	t6 = ((x53-(x54<x55))*x56);

	if (t6 != -32640) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x61 = 428591449575439LLU;
	int16_t x62 = -19;
	uint64_t x64 = 35585LLU;

	t7 = ((x61-(x62<x63))*x64);

	if (t7 != 15251426733141996815LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x73 = -1;
	int8_t x74 = 0;
	int8_t x75 = -1;
	uint8_t x76 = 6U;
	int32_t t8 = 321;

	t8 = ((x73-(x74<x75))*x76);

	if (t8 != -6) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x81 = -88;
	volatile int32_t x83 = INT32_MIN;
	static volatile int8_t x84 = -1;
	volatile int32_t t9 = 66;

	t9 = ((x81-(x82<x83))*x84);

	if (t9 != 88) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x85 = INT8_MIN;
	uint32_t x86 = 1599122U;
	volatile int16_t x87 = INT16_MIN;
	int16_t x88 = 524;
	static int32_t t10 = -1;

	t10 = ((x85-(x86<x87))*x88);

	if (t10 != -67596) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x93 = INT8_MAX;
	int16_t x94 = 1;
	int64_t x95 = INT64_MIN;
	volatile int16_t x96 = INT16_MIN;
	volatile int32_t t11 = 204;

	t11 = ((x93-(x94<x95))*x96);

	if (t11 != -4161536) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x97 = -3;
	uint64_t x98 = 96671168LLU;
	int16_t x99 = INT16_MAX;
	static int64_t x100 = -1LL;
	volatile int64_t t12 = 1LL;

	t12 = ((x97-(x98<x99))*x100);

	if (t12 != 3LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x101 = INT8_MIN;
	uint64_t x102 = 466403789373396538LLU;
	int16_t x104 = -1;
	int32_t t13 = -123488;

	t13 = ((x101-(x102<x103))*x104);

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x105 = 31881896U;
	static volatile uint16_t x106 = UINT16_MAX;
	volatile int64_t x107 = INT64_MIN;
	int8_t x108 = -1;
	uint32_t t14 = 226932581U;

	t14 = ((x105-(x106<x107))*x108);

	if (t14 != 4263085400U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x110 = -1;
	static int64_t x112 = -1LL;
	int64_t t15 = 25634117011674491LL;

	t15 = ((x109-(x110<x111))*x112);

	if (t15 != -2LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x114 = UINT8_MAX;
	int64_t x115 = -3LL;
	uint64_t x116 = 5LLU;
	volatile uint64_t t16 = 0LLU;

	t16 = ((x113-(x114<x115))*x116);

	if (t16 != 19690LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x126 = 114488561U;
	int8_t x127 = INT8_MIN;
	volatile uint8_t x128 = 6U;

	t17 = ((x125-(x126<x127))*x128);

	if (t17 != 12U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x129 = 2U;
	int8_t x130 = INT8_MIN;
	uint32_t x132 = 36376U;

	t18 = ((x129-(x130<x131))*x132);

	if (t18 != 36376U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x133 = 1;
	static uint64_t x135 = 6LLU;
	int8_t x136 = -1;
	volatile int32_t t19 = 848;

	t19 = ((x133-(x134<x135))*x136);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x137 = UINT16_MAX;
	int8_t x138 = INT8_MIN;
	int8_t x139 = -1;
	static volatile int32_t t20 = 7748496;

	t20 = ((x137-(x138<x139))*x140);

	if (t20 != -8388352) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x141 = 50U;
	uint32_t x142 = 9846U;
	int16_t x143 = -1026;
	static uint32_t t21 = 70365111U;

	t21 = ((x141-(x142<x143))*x144);

	if (t21 != 1023440403U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x145 = UINT8_MAX;
	static int16_t x146 = INT16_MIN;
	int8_t x148 = -1;

	t22 = ((x145-(x146<x147))*x148);

	if (t22 != -254) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x149 = 482U;
	int64_t x150 = INT64_MIN;
	static uint8_t x151 = 15U;
	volatile int16_t x152 = INT16_MIN;
	volatile uint32_t t23 = 324U;

	t23 = ((x149-(x150<x151))*x152);

	if (t23 != 4279205888U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x153 = -1;
	uint64_t x155 = UINT64_MAX;
	uint64_t x156 = 161643347LLU;
	static uint64_t t24 = 53340674871LLU;

	t24 = ((x153-(x154<x155))*x156);

	if (t24 != 18446744073386264922LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x162 = 1045U;
	int64_t x163 = INT64_MIN;
	static int8_t x164 = 18;
	volatile int32_t t25 = -136;

	t25 = ((x161-(x162<x163))*x164);

	if (t25 != 2286) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = -1;
	volatile int64_t t26 = 938063LL;

	t26 = ((x165-(x166<x167))*x168);

	if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x170 = -4464;
	int8_t x171 = 4;
	int16_t x172 = INT16_MIN;
	int32_t t27 = 173454;

	t27 = ((x169-(x170<x171))*x172);

	if (t27 != -1073676288) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x185 = 0;
	int8_t x188 = -3;
	static int32_t t28 = 18507;

	t28 = ((x185-(x186<x187))*x188);

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x189 = 4092U;
	uint32_t x190 = UINT32_MAX;
	static int16_t x191 = INT16_MIN;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t29 = 8136;

	t29 = ((x189-(x190<x191))*x192);

	if (t29 != -134086656) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x193 = 2012703490279LLU;
	int8_t x196 = 38;
	static volatile uint64_t t30 = 470940044478056703LLU;

	t30 = ((x193-(x194<x195))*x196);

	if (t30 != 76482732630602LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x197 = 37;
	int64_t x198 = -1LL;
	volatile int64_t x199 = INT64_MIN;
	int32_t t31 = -28;

	t31 = ((x197-(x198<x199))*x200);

	if (t31 != 2424795) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x205 = UINT64_MAX;
	static volatile uint64_t x206 = UINT64_MAX;
	int64_t x207 = INT64_MAX;
	static volatile int32_t x208 = -1;
	uint64_t t32 = 6240974LLU;

	t32 = ((x205-(x206<x207))*x208);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x215 = -13;
	uint64_t x216 = UINT64_MAX;
	static volatile uint64_t t33 = 2031081275LLU;

	t33 = ((x213-(x214<x215))*x216);

	if (t33 != 128LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x217 = -2657203LL;
	int16_t x218 = INT16_MAX;
	static uint32_t x220 = 2681U;
	int64_t t34 = 0LL;

	t34 = ((x217-(x218<x219))*x220);

	if (t34 != -7123963924LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x221 = 172U;
	uint64_t x222 = UINT64_MAX;
	static uint64_t x223 = UINT64_MAX;
	int32_t t35 = 250925;

	t35 = ((x221-(x222<x223))*x224);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x225 = 56800022LLU;
	int8_t x227 = 0;
	static int16_t x228 = -1;
	uint64_t t36 = 1077824883282290986LLU;

	t36 = ((x225-(x226<x227))*x228);

	if (t36 != 18446744073652751594LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x229 = -1;
	static int32_t x231 = INT32_MAX;
	int32_t x232 = -9;

	t37 = ((x229-(x230<x231))*x232);

	if (t37 != 18) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x234 = INT8_MIN;
	int32_t x235 = 162361;
	int16_t x236 = -7899;

	t38 = ((x233-(x234<x235))*x236);

	if (t38 != 18446742696552669841LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x245 = UINT32_MAX;
	static int64_t x247 = -1LL;
	volatile uint32_t t39 = 85009223U;

	t39 = ((x245-(x246<x247))*x248);

	if (t39 != 4293944520U) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x257 = 11;
	int8_t x258 = INT8_MIN;
	uint64_t x259 = 60906856729472LLU;
	int16_t x260 = 1;
	static volatile int32_t t40 = -347415988;

	t40 = ((x257-(x258<x259))*x260);

	if (t40 != 11) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x265 = 1U;
	volatile uint8_t x266 = UINT8_MAX;
	volatile int16_t x267 = -1;
	uint32_t x268 = UINT32_MAX;
	uint32_t t41 = UINT32_MAX;

	t41 = ((x265-(x266<x267))*x268);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x269 = INT16_MAX;
	uint64_t x271 = UINT64_MAX;

	t42 = ((x269-(x270<x271))*x272);

	if (t42 != -4194048) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x273 = 360770U;
	volatile int16_t x274 = 26;
	uint64_t x276 = 254422566LLU;
	uint64_t t43 = 45LLU;

	t43 = ((x273-(x274<x275))*x276);

	if (t43 != 91788029135820LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x277 = 5304U;
	volatile uint32_t x280 = 2113U;
	static uint32_t t44 = 945027613U;

	t44 = ((x277-(x278<x279))*x280);

	if (t44 != 11205239U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x286 = 0;
	volatile int32_t x287 = -1018;
	int32_t x288 = 20031658;
	volatile int32_t t45 = -219;

	t45 = ((x285-(x286<x287))*x288);

	if (t45 != -20031658) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x289 = -878LL;
	uint64_t x290 = 5216722521388LLU;
	int32_t x291 = INT32_MAX;
	int64_t t46 = -51218052LL;

	t46 = ((x289-(x290<x291))*x292);

	if (t46 != 878LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x293 = 9727U;
	static volatile uint32_t x294 = UINT32_MAX;
	static uint64_t x295 = UINT64_MAX;
	uint8_t x296 = 9U;
	volatile int32_t t47 = 6080;

	t47 = ((x293-(x294<x295))*x296);

	if (t47 != 87534) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x297 = -12;
	int8_t x298 = INT8_MIN;
	int32_t x299 = 1120;
	int8_t x300 = INT8_MIN;
	volatile int32_t t48 = 382374;

	t48 = ((x297-(x298<x299))*x300);

	if (t48 != 1664) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x301 = 7786;
	int16_t x302 = INT16_MIN;
	int16_t x303 = -1;
	uint64_t x304 = 1727148455979173LLU;
	uint64_t t49 = 4427279006671980LLU;

	t49 = ((x301-(x302<x303))*x304);

	if (t49 != 13445850729797861805LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x306 = UINT64_MAX;
	int16_t x307 = INT16_MAX;
	uint64_t x308 = 1LLU;
	uint64_t t50 = UINT64_MAX;

	t50 = ((x305-(x306<x307))*x308);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x310 = INT8_MIN;
	int64_t x312 = 11899973859LL;
	volatile int64_t t51 = 234512958235254168LL;

	t51 = ((x309-(x310<x311))*x312);

	if (t51 != -389938343411712LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x313 = 67844462U;
	int16_t x316 = INT16_MIN;
	volatile uint32_t t52 = 32U;

	t52 = ((x313-(x314<x315))*x316);

	if (t52 != 1665728512U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x318 = 4U;
	int8_t x319 = INT8_MAX;
	int16_t x320 = INT16_MIN;
	static int32_t t53 = 110785971;

	t53 = ((x317-(x318<x319))*x320);

	if (t53 != -1073676288) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x321 = UINT16_MAX;
	volatile uint8_t x322 = UINT8_MAX;
	uint16_t x323 = 379U;
	volatile int32_t t54 = 60;

	t54 = ((x321-(x322<x323))*x324);

	if (t54 != -65534) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x329 = UINT64_MAX;
	static int16_t x330 = 0;
	static int64_t x331 = -1LL;
	int16_t x332 = 1304;
	volatile uint64_t t55 = 34727736987725861LLU;

	t55 = ((x329-(x330<x331))*x332);

	if (t55 != 18446744073709550312LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x333 = 118U;
	int64_t x334 = INT64_MIN;
	int64_t x335 = -1LL;
	volatile int32_t t56 = -444347;

	t56 = ((x333-(x334<x335))*x336);

	if (t56 != 29835) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x338 = -22870417LL;
	int16_t x339 = -1;
	int64_t x340 = -31036957621LL;
	volatile int64_t t57 = -375548703LL;

	t57 = ((x337-(x338<x339))*x340);

	if (t57 != 62073915242LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x349 = 760989;
	int32_t x350 = -1;
	volatile uint64_t x351 = UINT64_MAX;
	int8_t x352 = -1;
	volatile int32_t t58 = -109;

	t58 = ((x349-(x350<x351))*x352);

	if (t58 != -760989) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x353 = 27;
	int32_t x354 = INT32_MIN;
	uint32_t x355 = UINT32_MAX;
	int64_t x356 = 356730346LL;

	t59 = ((x353-(x354<x355))*x356);

	if (t59 != 9274988996LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x358 = INT64_MIN;
	int16_t x359 = -1;
	int8_t x360 = INT8_MIN;
	volatile uint64_t t60 = 762157LLU;

	t60 = ((x357-(x358<x359))*x360);

	if (t60 != 256LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x361 = INT16_MIN;
	volatile int8_t x362 = INT8_MAX;
	volatile int16_t x363 = INT16_MIN;
	static volatile int32_t t61 = 3566;

	t61 = ((x361-(x362<x363))*x364);

	if (t61 != 1507328) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x365 = 46U;
	int8_t x366 = 15;
	static int8_t x367 = 13;
	uint16_t x368 = 213U;
	volatile int32_t t62 = -270;

	t62 = ((x365-(x366<x367))*x368);

	if (t62 != 9798) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x370 = INT16_MIN;
	int64_t x371 = -127331558986398723LL;
	volatile uint32_t t63 = 145U;

	t63 = ((x369-(x370<x371))*x372);

	if (t63 != 4294964477U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x373 = 25832640527LL;
	int32_t x374 = 5160895;
	static volatile uint64_t x375 = UINT64_MAX;

	t64 = ((x373-(x374<x375))*x376);

	if (t64 != 4941488049983179002LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x381 = INT16_MAX;
	volatile uint32_t x382 = 10842U;
	static int32_t x383 = -394;
	volatile uint64_t x384 = 39308522243LLU;

	t65 = ((x381-(x382<x383))*x384);

	if (t65 != 1287983039814138LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x389 = 491LLU;
	volatile uint8_t x390 = 7U;
	int8_t x391 = INT8_MAX;

	t66 = ((x389-(x390<x391))*x392);

	if (t66 != 2940LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x393 = INT16_MIN;
	uint16_t x394 = 12989U;
	static int64_t x395 = INT64_MAX;
	volatile uint8_t x396 = 0U;
	volatile int32_t t67 = 480;

	t67 = ((x393-(x394<x395))*x396);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x401 = 0U;
	uint64_t x403 = 1127728887486353726LLU;
	int64_t x404 = -825234LL;
	static int64_t t68 = 21440039472298979LL;

	t68 = ((x401-(x402<x403))*x404);

	if (t68 != -3544353040722030LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x405 = 135146243U;
	uint16_t x406 = 10U;
	int64_t x407 = INT64_MAX;
	int32_t x408 = -1;

	t69 = ((x405-(x406<x407))*x408);

	if (t69 != 4159821054U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x409 = UINT8_MAX;
	volatile int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MAX;
	uint8_t x412 = 5U;
	static volatile int32_t t70 = 270101;

	t70 = ((x409-(x410<x411))*x412);

	if (t70 != 1270) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x414 = 9U;
	uint64_t x415 = 16977216780865705LLU;
	int32_t x416 = -1;
	uint32_t t71 = 355U;

	t71 = ((x413-(x414<x415))*x416);

	if (t71 != 4293215008U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x417 = INT16_MIN;
	int16_t x418 = -4978;
	int64_t x419 = INT64_MIN;
	int16_t x420 = INT16_MIN;

	t72 = ((x417-(x418<x419))*x420);

	if (t72 != 1073741824) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x421 = 32154451121LL;
	int16_t x422 = INT16_MIN;
	uint64_t x423 = 172361639675LLU;
	uint8_t x424 = UINT8_MAX;
	volatile int64_t t73 = -115135775774457126LL;

	t73 = ((x421-(x422<x423))*x424);

	if (t73 != 8199385035855LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x425 = 921;
	int16_t x426 = INT16_MAX;
	volatile int32_t x427 = 2301804;
	volatile int16_t x428 = INT16_MIN;
	int32_t t74 = -8;

	t74 = ((x425-(x426<x427))*x428);

	if (t74 != -30146560) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x429 = -1;
	static uint32_t x430 = 3603392U;
	int8_t x431 = -1;
	static uint16_t x432 = 51U;
	volatile int32_t t75 = 80608;

	t75 = ((x429-(x430<x431))*x432);

	if (t75 != -102) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x434 = INT16_MIN;
	volatile uint64_t x435 = 1066701618726LLU;
	int64_t x436 = 35LL;
	static int64_t t76 = 756949217627429LL;

	t76 = ((x433-(x434<x435))*x436);

	if (t76 != -35LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x438 = INT64_MIN;
	int32_t x439 = -5692639;
	static int8_t x440 = 20;
	int32_t t77 = -859;

	t77 = ((x437-(x438<x439))*x440);

	if (t77 != 1060) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x445 = 2835079488LL;
	int64_t x446 = -1LL;
	volatile int64_t t78 = 1LL;

	t78 = ((x445-(x446<x447))*x448);

	if (t78 != -2835079488LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x457 = -5;
	int16_t x458 = INT16_MIN;
	uint64_t x460 = 53404709LLU;
	uint64_t t79 = 3942150508583382678LLU;

	t79 = ((x457-(x458<x459))*x460);

	if (t79 != 18446744073389123362LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x461 = -1;
	int8_t x462 = INT8_MIN;
	uint64_t x463 = UINT64_MAX;
	static uint8_t x464 = 1U;

	t80 = ((x461-(x462<x463))*x464);

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x466 = 10532U;
	int64_t x467 = INT64_MIN;
	int16_t x468 = INT16_MIN;
	int32_t t81 = -4286761;

	t81 = ((x465-(x466<x467))*x468);

	if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x469 = INT32_MIN;
	static volatile int16_t x470 = INT16_MIN;
	static volatile uint64_t x471 = 5498629654585LLU;
	volatile uint32_t x472 = 11U;
	uint32_t t82 = 639091694U;

	t82 = ((x469-(x470<x471))*x472);

	if (t82 != 2147483648U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x477 = 58088973LLU;
	int8_t x478 = INT8_MAX;
	int8_t x479 = -28;
	static uint64_t x480 = UINT64_MAX;
	volatile uint64_t t83 = 7838LLU;

	t83 = ((x477-(x478<x479))*x480);

	if (t83 != 18446744073651462643LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x489 = 95LLU;
	uint64_t x490 = 5420LLU;
	uint8_t x491 = 0U;
	int8_t x492 = INT8_MAX;

	t84 = ((x489-(x490<x491))*x492);

	if (t84 != 12065LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x493 = INT8_MIN;
	uint64_t x494 = 810240620773508467LLU;
	volatile int32_t x495 = 138195;
	int16_t x496 = -32;

	t85 = ((x493-(x494<x495))*x496);

	if (t85 != 4096) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x498 = 2U;
	uint8_t x499 = 1U;
	uint64_t t86 = 695567045986LLU;

	t86 = ((x497-(x498<x499))*x500);

	if (t86 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x501 = INT16_MIN;
	int8_t x502 = INT8_MIN;
	uint32_t x503 = 776U;
	int64_t x504 = 0LL;
	volatile int64_t t87 = 98187065070493LL;

	t87 = ((x501-(x502<x503))*x504);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x513 = INT8_MAX;
	volatile uint8_t x514 = 0U;
	int16_t x515 = INT16_MIN;
	uint16_t x516 = 857U;
	int32_t t88 = -9167;

	t88 = ((x513-(x514<x515))*x516);

	if (t88 != 108839) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x517 = 4;
	int16_t x518 = INT16_MIN;
	int16_t x519 = INT16_MIN;
	int64_t x520 = -1LL;
	static int64_t t89 = -8570684032193LL;

	t89 = ((x517-(x518<x519))*x520);

	if (t89 != -4LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x521 = INT16_MIN;
	static int8_t x523 = INT8_MIN;

	t90 = ((x521-(x522<x523))*x524);

	if (t90 != -6358237184LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x525 = 1;
	uint32_t x526 = 435U;
	static uint32_t x528 = 349864729U;
	uint32_t t91 = 1353199U;

	t91 = ((x525-(x526<x527))*x528);

	if (t91 != 349864729U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x529 = INT16_MIN;
	int64_t x530 = -1LL;
	static uint64_t x531 = UINT64_MAX;

	t92 = ((x529-(x530<x531))*x532);

	if (t92 != -8355840) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x533 = INT8_MAX;
	static uint8_t x535 = UINT8_MAX;
	uint8_t x536 = 3U;
	volatile int32_t t93 = 7;

	t93 = ((x533-(x534<x535))*x536);

	if (t93 != 378) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x537 = 1;
	static volatile uint32_t x538 = UINT32_MAX;
	volatile int32_t x539 = INT32_MAX;
	int32_t x540 = INT32_MIN;
	static volatile int32_t t94 = INT32_MIN;

	t94 = ((x537-(x538<x539))*x540);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x545 = UINT8_MAX;
	static volatile int32_t x546 = INT32_MIN;
	static uint32_t x547 = 7U;
	uint64_t x548 = 4035877464973LLU;

	t95 = ((x545-(x546<x547))*x548);

	if (t95 != 1029148753568115LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x554 = 3LLU;
	static volatile uint8_t x555 = 0U;
	uint8_t x556 = UINT8_MAX;

	t96 = ((x553-(x554<x555))*x556);

	if (t96 != -8355840) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x561 = INT16_MIN;
	int64_t x563 = INT64_MIN;
	uint8_t x564 = UINT8_MAX;

	t97 = ((x561-(x562<x563))*x564);

	if (t97 != -8355840) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x565 = -1;
	int8_t x566 = INT8_MIN;
	int16_t x567 = INT16_MIN;

	t98 = ((x565-(x566<x567))*x568);

	if (t98 != -22) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x569 = 14330U;
	int64_t x570 = -1LL;
	volatile int64_t x571 = INT64_MIN;
	int32_t x572 = -414048905;

	t99 = ((x569-(x570<x571))*x572);

	if (t99 != 2323994422U) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int8_t x2 = -6;
uint16_t x4 = 960U;
int64_t x10 = 11565LL;
int32_t x13 = -127580269;
int32_t x22 = -1;
volatile uint16_t x23 = UINT16_MAX;
uint16_t x31 = 16887U;
int8_t x32 = -1;
static int32_t t6 = 1;
int8_t x35 = 1;
int16_t x36 = 63;
volatile uint32_t t8 = 2123420001U;
uint16_t x41 = 32U;
uint32_t x47 = 448470U;
int16_t x72 = -11;
uint16_t x76 = 5976U;
int8_t x88 = -1;
int64_t x92 = INT64_MIN;
volatile int32_t t20 = 1831151;
int16_t x102 = INT16_MIN;
volatile int64_t x103 = INT64_MAX;
volatile int16_t x104 = -24;
int64_t x111 = INT64_MIN;
volatile int16_t x112 = INT16_MAX;
int8_t x116 = INT8_MAX;
volatile uint64_t t28 = 162231735728178LLU;
int8_t x131 = -1;
int8_t x133 = -1;
int8_t x143 = INT8_MIN;
int64_t x145 = 1LL;
uint16_t x149 = 2427U;
static uint64_t x153 = UINT64_MAX;
int32_t x154 = -1;
volatile int8_t x155 = INT8_MIN;
int32_t x163 = -1;
volatile int64_t x170 = INT64_MIN;
static int32_t x174 = -1;
static uint16_t x181 = UINT16_MAX;
int32_t x183 = INT32_MAX;
int8_t x185 = INT8_MIN;
int64_t x192 = -141188439LL;
int64_t t43 = 36LL;
int16_t x200 = -1;
int32_t t45 = -170064;
int16_t x201 = -1;
volatile int32_t t48 = INT32_MAX;
int64_t x213 = -1LL;
static uint16_t x215 = 12U;
volatile int64_t x226 = -40625729487712LL;
int16_t x227 = INT16_MAX;
static volatile int32_t x236 = INT32_MIN;
volatile uint32_t t55 = 28873U;
int8_t x247 = INT8_MAX;
static volatile int32_t t58 = INT32_MIN;
volatile int8_t x261 = INT8_MAX;
uint64_t x265 = 4421738430LLU;
int16_t x272 = INT16_MIN;
static int64_t x273 = -437LL;
int8_t x275 = INT8_MIN;
int32_t x277 = -2813006;
volatile int32_t t66 = INT32_MIN;
volatile int16_t x285 = INT16_MIN;
uint64_t x289 = 21LLU;
volatile int16_t x291 = -1;
int64_t x293 = INT64_MIN;
int8_t x295 = -11;
int32_t t69 = 1465;
int8_t x298 = INT8_MIN;
static uint32_t t71 = 5U;
volatile uint8_t x307 = UINT8_MAX;
int16_t x312 = -1870;
volatile int32_t x319 = 2;
uint16_t x328 = 14U;
static uint16_t x330 = UINT16_MAX;
int16_t x338 = -5203;
int32_t x339 = 9;
volatile uint16_t x340 = UINT16_MAX;
int8_t x342 = 9;
int16_t x347 = 1853;
static int8_t x353 = 50;
uint32_t x355 = 0U;
volatile uint64_t t84 = 843568270171040285LLU;
uint8_t x361 = 4U;
volatile int16_t x363 = INT16_MIN;
volatile int32_t t85 = 768422;
int64_t x371 = INT64_MIN;
int64_t t87 = -3810LL;
static uint64_t t89 = 61862298462LLU;
static int8_t x385 = INT8_MIN;
static volatile int16_t x395 = INT16_MIN;
static volatile uint64_t x400 = 6LLU;
int8_t x402 = INT8_MAX;
int32_t x403 = 5190739;
int32_t t94 = 185755946;
int32_t x411 = -16525790;
volatile int32_t x413 = 395041;
volatile int32_t t97 = 54;
volatile int16_t x419 = INT16_MIN;
int8_t x420 = -1;
uint64_t x421 = UINT64_MAX;
volatile uint64_t x422 = 10LLU;
int32_t x424 = INT32_MAX;


void f0(void) {
	volatile int16_t x3 = INT16_MAX;
	int32_t t0 = 2628762;

	t0 = ((x1<=(x2<x3))+x4);

	if (t0 != 961) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MIN;
	volatile int64_t x11 = -1LL;
	int64_t x12 = INT64_MIN;
	volatile int64_t t1 = -7446LL;

	t1 = ((x9<=(x10<x11))+x12);

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x14 = UINT32_MAX;
	volatile int16_t x15 = INT16_MIN;
	int64_t x16 = 190133705LL;
	int64_t t2 = -3537837448LL;

	t2 = ((x13<=(x14<x15))+x16);

	if (t2 != 190133706LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	uint8_t x18 = 4U;
	int16_t x19 = -1;
	static int64_t x20 = 25779113LL;
	int64_t t3 = -110LL;

	t3 = ((x17<=(x18<x19))+x20);

	if (t3 != 25779113LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = 497;
	static int64_t x24 = 382023747LL;
	volatile int64_t t4 = -205LL;

	t4 = ((x21<=(x22<x23))+x24);

	if (t4 != 382023747LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	int8_t x26 = -1;
	uint8_t x27 = UINT8_MAX;
	int8_t x28 = INT8_MIN;
	volatile int32_t t5 = -53;

	t5 = ((x25<=(x26<x27))+x28);

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = 3U;
	int64_t x30 = 2232808220LL;

	t6 = ((x29<=(x30<x31))+x32);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -2;
	uint64_t x34 = 776785LLU;
	volatile int32_t t7 = -261344574;

	t7 = ((x33<=(x34<x35))+x36);

	if (t7 != 64) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 360U;
	uint16_t x38 = 7U;
	uint8_t x39 = 22U;
	volatile uint32_t x40 = 2U;

	t8 = ((x37<=(x38<x39))+x40);

	if (t8 != 2U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = INT8_MIN;
	int64_t x43 = -1LL;
	volatile uint32_t x44 = 44367418U;
	uint32_t t9 = 4006311U;

	t9 = ((x41<=(x42<x43))+x44);

	if (t9 != 44367418U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MIN;
	int8_t x46 = INT8_MIN;
	int16_t x48 = -15646;
	volatile int32_t t10 = -1007;

	t10 = ((x45<=(x46<x47))+x48);

	if (t10 != -15645) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x49 = INT64_MIN;
	volatile int8_t x50 = -7;
	int8_t x51 = -1;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t11 = 1013LLU;

	t11 = ((x49<=(x50<x51))+x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x57 = 32U;
	int16_t x58 = INT16_MIN;
	int64_t x59 = -1LL;
	volatile int32_t x60 = INT32_MAX;
	volatile int32_t t12 = INT32_MAX;

	t12 = ((x57<=(x58<x59))+x60);

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	volatile uint32_t x62 = 31U;
	volatile int16_t x63 = 5;
	uint64_t x64 = UINT64_MAX;
	static volatile uint64_t t13 = UINT64_MAX;

	t13 = ((x61<=(x62<x63))+x64);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = INT8_MAX;
	uint32_t x71 = 126176U;
	int32_t t14 = -65;

	t14 = ((x69<=(x70<x71))+x72);

	if (t14 != -10) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x73 = 20U;
	int32_t x74 = INT32_MIN;
	static int32_t x75 = INT32_MIN;
	static int32_t t15 = -181204;

	t15 = ((x73<=(x74<x75))+x76);

	if (t15 != 5976) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = INT8_MAX;
	int16_t x79 = 0;
	int64_t x80 = INT64_MIN;
	int64_t t16 = -184605194439LL;

	t16 = ((x77<=(x78<x79))+x80);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x81 = UINT8_MAX;
	int64_t x82 = 3178551074LL;
	int16_t x83 = INT16_MAX;
	int64_t x84 = 2236133LL;
	int64_t t17 = 226522752071286LL;

	t17 = ((x81<=(x82<x83))+x84);

	if (t17 != 2236133LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x85 = 81186283378027LLU;
	uint16_t x86 = UINT16_MAX;
	uint32_t x87 = UINT32_MAX;
	static volatile int32_t t18 = -253012;

	t18 = ((x85<=(x86<x87))+x88);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x89 = INT32_MAX;
	int64_t x90 = -1838014LL;
	static int32_t x91 = -4820591;
	static volatile int64_t t19 = INT64_MIN;

	t19 = ((x89<=(x90<x91))+x92);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x93 = INT8_MIN;
	int32_t x94 = -208273255;
	static volatile uint8_t x95 = 1U;
	int16_t x96 = INT16_MIN;

	t20 = ((x93<=(x94<x95))+x96);

	if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x97 = -2;
	int64_t x98 = -123935246596258LL;
	int32_t x99 = -211437960;
	uint64_t x100 = 197117092LLU;
	static uint64_t t21 = 62650267024530LLU;

	t21 = ((x97<=(x98<x99))+x100);

	if (t21 != 197117093LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x101 = -22;
	static volatile int32_t t22 = 403705;

	t22 = ((x101<=(x102<x103))+x104);

	if (t22 != -23) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x105 = 113;
	static uint8_t x106 = UINT8_MAX;
	volatile uint16_t x107 = 2U;
	uint16_t x108 = UINT16_MAX;
	static int32_t t23 = -920281239;

	t23 = ((x105<=(x106<x107))+x108);

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 22U;
	uint64_t x110 = 69999370989548LLU;
	volatile int32_t t24 = 6077417;

	t24 = ((x109<=(x110<x111))+x112);

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 0U;
	int16_t x114 = -59;
	volatile int8_t x115 = -1;
	int32_t t25 = -555371;

	t25 = ((x113<=(x114<x115))+x116);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MAX;
	int8_t x118 = -31;
	int8_t x119 = INT8_MAX;
	int32_t x120 = -1;
	volatile int32_t t26 = -49;

	t26 = ((x117<=(x118<x119))+x120);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = -7;
	int32_t x122 = 1;
	volatile uint16_t x123 = 0U;
	uint8_t x124 = 0U;
	static int32_t t27 = -594553650;

	t27 = ((x121<=(x122<x123))+x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = -1;
	uint64_t x126 = 41LLU;
	int8_t x127 = 6;
	static uint64_t x128 = 42458838050233LLU;

	t28 = ((x125<=(x126<x127))+x128);

	if (t28 != 42458838050234LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = -1;
	uint32_t x130 = 1015117U;
	static uint8_t x132 = 62U;
	volatile int32_t t29 = 1021891;

	t29 = ((x129<=(x130<x131))+x132);

	if (t29 != 63) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x134 = INT64_MIN;
	int8_t x135 = 10;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t30 = 1779;

	t30 = ((x133<=(x134<x135))+x136);

	if (t30 != 65536) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = -1LL;
	static int16_t x144 = -1;
	int32_t t31 = -383388;

	t31 = ((x141<=(x142<x143))+x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x146 = 27867U;
	volatile uint16_t x147 = 1U;
	static uint32_t x148 = 31493421U;
	static uint32_t t32 = 119U;

	t32 = ((x145<=(x146<x147))+x148);

	if (t32 != 31493421U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x150 = INT32_MIN;
	volatile uint32_t x151 = UINT32_MAX;
	static int32_t x152 = -1;
	int32_t t33 = 27255;

	t33 = ((x149<=(x150<x151))+x152);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x156 = -94905272071274576LL;
	int64_t t34 = -2525770198LL;

	t34 = ((x153<=(x154<x155))+x156);

	if (t34 != -94905272071274576LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = 62082062U;
	int8_t x158 = 1;
	volatile uint8_t x159 = UINT8_MAX;
	int8_t x160 = INT8_MAX;
	static int32_t t35 = 2;

	t35 = ((x157<=(x158<x159))+x160);

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x161 = -1LL;
	int16_t x162 = INT16_MAX;
	int16_t x164 = INT16_MIN;
	int32_t t36 = 10762537;

	t36 = ((x161<=(x162<x163))+x164);

	if (t36 != -32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 1126U;
	static int32_t x166 = INT32_MAX;
	static int16_t x167 = -1;
	static uint32_t x168 = 413459679U;
	uint32_t t37 = 152603U;

	t37 = ((x165<=(x166<x167))+x168);

	if (t37 != 413459679U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x169 = INT16_MIN;
	volatile int16_t x171 = INT16_MAX;
	int8_t x172 = INT8_MAX;
	volatile int32_t t38 = -518954;

	t38 = ((x169<=(x170<x171))+x172);

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = UINT32_MAX;
	int16_t x175 = INT16_MIN;
	volatile int64_t x176 = INT64_MIN;
	int64_t t39 = INT64_MIN;

	t39 = ((x173<=(x174<x175))+x176);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x177 = 23184LLU;
	volatile int16_t x178 = INT16_MIN;
	int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MIN;
	static volatile int64_t t40 = INT64_MIN;

	t40 = ((x177<=(x178<x179))+x180);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x182 = INT64_MIN;
	volatile int32_t x184 = INT32_MIN;
	static volatile int32_t t41 = INT32_MIN;

	t41 = ((x181<=(x182<x183))+x184);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x186 = 2U;
	uint16_t x187 = 195U;
	int16_t x188 = INT16_MIN;
	static int32_t t42 = 63759288;

	t42 = ((x185<=(x186<x187))+x188);

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = INT16_MIN;
	uint8_t x190 = 2U;
	int8_t x191 = -1;

	t43 = ((x189<=(x190<x191))+x192);

	if (t43 != -141188438LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = INT16_MAX;
	uint16_t x194 = UINT16_MAX;
	volatile int16_t x195 = -5526;
	volatile int64_t x196 = -1LL;
	volatile int64_t t44 = 173502789LL;

	t44 = ((x193<=(x194<x195))+x196);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x197 = INT8_MAX;
	volatile int32_t x198 = -1;
	int8_t x199 = 39;

	t45 = ((x197<=(x198<x199))+x200);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x202 = -1;
	int64_t x203 = 38LL;
	uint64_t x204 = 248706596LLU;
	static uint64_t t46 = 3441306744LLU;

	t46 = ((x201<=(x202<x203))+x204);

	if (t46 != 248706597LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x205 = 88U;
	int16_t x206 = 162;
	int8_t x207 = 0;
	static volatile int64_t x208 = INT64_MIN;
	volatile int64_t t47 = INT64_MIN;

	t47 = ((x205<=(x206<x207))+x208);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x209 = 47453U;
	int16_t x210 = -126;
	int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MAX;

	t48 = ((x209<=(x210<x211))+x212);

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x214 = INT64_MIN;
	static int8_t x216 = 0;
	volatile int32_t t49 = -25;

	t49 = ((x213<=(x214<x215))+x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = 24;
	volatile int64_t x219 = 370361LL;
	int16_t x220 = -3154;
	int32_t t50 = -471;

	t50 = ((x217<=(x218<x219))+x220);

	if (t50 != -3153) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x221 = 1U;
	uint16_t x222 = 61U;
	uint16_t x223 = UINT16_MAX;
	volatile int8_t x224 = INT8_MIN;
	int32_t t51 = -199953;

	t51 = ((x221<=(x222<x223))+x224);

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = 156;
	volatile uint16_t x228 = 3840U;
	volatile int32_t t52 = -809710;

	t52 = ((x225<=(x226<x227))+x228);

	if (t52 != 3840) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x229 = 7;
	int16_t x230 = -1;
	volatile int64_t x231 = -34519343958466339LL;
	static int16_t x232 = -1;
	int32_t t53 = 32926514;

	t53 = ((x229<=(x230<x231))+x232);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x233 = -1;
	int16_t x234 = 0;
	int32_t x235 = -1;
	int32_t t54 = 4788;

	t54 = ((x233<=(x234<x235))+x236);

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x237 = 9795U;
	int64_t x238 = INT64_MAX;
	volatile int8_t x239 = -1;
	uint32_t x240 = 77787U;

	t55 = ((x237<=(x238<x239))+x240);

	if (t55 != 77787U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x241 = 51U;
	int8_t x242 = INT8_MIN;
	static int32_t x243 = INT32_MIN;
	static volatile int8_t x244 = -1;
	static int32_t t56 = 48038554;

	t56 = ((x241<=(x242<x243))+x244);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x245 = UINT32_MAX;
	static int16_t x246 = INT16_MIN;
	int64_t x248 = -655115LL;
	static volatile int64_t t57 = 10405154642651LL;

	t57 = ((x245<=(x246<x247))+x248);

	if (t57 != -655115LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x249 = 38U;
	volatile int16_t x250 = -1;
	int8_t x251 = 46;
	volatile int32_t x252 = INT32_MIN;

	t58 = ((x249<=(x250<x251))+x252);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x253 = UINT32_MAX;
	volatile uint64_t x254 = 1665878095824648LLU;
	int32_t x255 = INT32_MAX;
	volatile uint16_t x256 = 25515U;
	int32_t t59 = 106627669;

	t59 = ((x253<=(x254<x255))+x256);

	if (t59 != 25515) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x257 = 2U;
	uint64_t x258 = 7151879890605711870LLU;
	static int64_t x259 = INT64_MAX;
	int64_t x260 = 862881698009167LL;
	static volatile int64_t t60 = -3096739681954329LL;

	t60 = ((x257<=(x258<x259))+x260);

	if (t60 != 862881698009167LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x262 = -32983131LL;
	uint8_t x263 = 3U;
	int16_t x264 = INT16_MAX;
	int32_t t61 = 3258362;

	t61 = ((x261<=(x262<x263))+x264);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x266 = INT8_MAX;
	int16_t x267 = -1;
	int32_t x268 = INT32_MIN;
	int32_t t62 = INT32_MIN;

	t62 = ((x265<=(x266<x267))+x268);

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x269 = 33980U;
	int8_t x270 = INT8_MAX;
	static int8_t x271 = -1;
	static volatile int32_t t63 = -28;

	t63 = ((x269<=(x270<x271))+x272);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x274 = INT32_MIN;
	int64_t x276 = -2031682LL;
	static int64_t t64 = 25629929199LL;

	t64 = ((x273<=(x274<x275))+x276);

	if (t64 != -2031681LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x278 = INT8_MIN;
	int32_t x279 = INT32_MIN;
	int32_t x280 = 47;
	int32_t t65 = -44100;

	t65 = ((x277<=(x278<x279))+x280);

	if (t65 != 48) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x281 = UINT64_MAX;
	int16_t x282 = INT16_MIN;
	int64_t x283 = INT64_MIN;
	volatile int32_t x284 = INT32_MIN;

	t66 = ((x281<=(x282<x283))+x284);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x286 = -1;
	uint16_t x287 = 54U;
	volatile int8_t x288 = INT8_MIN;
	static int32_t t67 = 3;

	t67 = ((x285<=(x286<x287))+x288);

	if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x290 = UINT32_MAX;
	int32_t x292 = -1;
	static volatile int32_t t68 = 0;

	t68 = ((x289<=(x290<x291))+x292);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x294 = 4U;
	int32_t x296 = 838763;

	t69 = ((x293<=(x294<x295))+x296);

	if (t69 != 838764) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = UINT16_MAX;
	int16_t x299 = 12;
	static int8_t x300 = INT8_MIN;
	int32_t t70 = -16764071;

	t70 = ((x297<=(x298<x299))+x300);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = -1;
	uint64_t x303 = UINT64_MAX;
	uint32_t x304 = 5799244U;

	t71 = ((x301<=(x302<x303))+x304);

	if (t71 != 5799245U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = -646;
	static uint64_t x306 = UINT64_MAX;
	volatile int8_t x308 = INT8_MIN;
	volatile int32_t t72 = 420;

	t72 = ((x305<=(x306<x307))+x308);

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = INT64_MIN;
	uint16_t x310 = 107U;
	uint16_t x311 = UINT16_MAX;
	volatile int32_t t73 = 1787;

	t73 = ((x309<=(x310<x311))+x312);

	if (t73 != -1869) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = 1890;
	int8_t x314 = INT8_MAX;
	int64_t x315 = -1LL;
	int64_t x316 = -1LL;
	volatile int64_t t74 = 144373723808815LL;

	t74 = ((x313<=(x314<x315))+x316);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x317 = UINT64_MAX;
	static uint8_t x318 = 2U;
	int16_t x320 = 8;
	volatile int32_t t75 = -1;

	t75 = ((x317<=(x318<x319))+x320);

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = INT32_MAX;
	int8_t x322 = -10;
	static int64_t x323 = 815422LL;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t76 = -1;

	t76 = ((x321<=(x322<x323))+x324);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x325 = -1;
	static int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MAX;
	static int32_t t77 = -3243078;

	t77 = ((x325<=(x326<x327))+x328);

	if (t77 != 15) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = INT32_MIN;
	volatile uint8_t x331 = 27U;
	uint32_t x332 = UINT32_MAX;
	uint32_t t78 = 3360948U;

	t78 = ((x329<=(x330<x331))+x332);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x333 = 8314934797LLU;
	uint32_t x334 = 20254U;
	uint16_t x335 = UINT16_MAX;
	static uint16_t x336 = 3U;
	volatile int32_t t79 = -35889991;

	t79 = ((x333<=(x334<x335))+x336);

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x337 = 11902152425LLU;
	int32_t t80 = 4264;

	t80 = ((x337<=(x338<x339))+x340);

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = INT8_MIN;
	int64_t x343 = -1LL;
	int8_t x344 = -1;
	int32_t t81 = -8;

	t81 = ((x341<=(x342<x343))+x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x345 = UINT16_MAX;
	uint16_t x346 = 413U;
	int16_t x348 = -1;
	static volatile int32_t t82 = 24;

	t82 = ((x345<=(x346<x347))+x348);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x354 = UINT8_MAX;
	volatile int8_t x356 = 0;
	volatile int32_t t83 = 380207289;

	t83 = ((x353<=(x354<x355))+x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = INT32_MAX;
	uint8_t x358 = UINT8_MAX;
	int8_t x359 = INT8_MAX;
	uint64_t x360 = 44752673315806749LLU;

	t84 = ((x357<=(x358<x359))+x360);

	if (t84 != 44752673315806749LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x362 = INT32_MAX;
	int16_t x364 = INT16_MIN;

	t85 = ((x361<=(x362<x363))+x364);

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = 0;
	uint16_t x367 = 5641U;
	int16_t x368 = -1;
	int32_t t86 = -94455;

	t86 = ((x365<=(x366<x367))+x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x369 = -1;
	int8_t x370 = -36;
	int64_t x372 = 2480834LL;

	t87 = ((x369<=(x370<x371))+x372);

	if (t87 != 2480835LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x373 = 85U;
	uint32_t x374 = 38692U;
	int8_t x375 = -5;
	int8_t x376 = INT8_MAX;
	int32_t t88 = 1;

	t88 = ((x373<=(x374<x375))+x376);

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = INT64_MAX;
	int64_t x378 = -70999680LL;
	static int32_t x379 = -323628371;
	uint64_t x380 = 36502784302LLU;

	t89 = ((x377<=(x378<x379))+x380);

	if (t89 != 36502784302LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x386 = 8;
	int8_t x387 = -1;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t90 = -11210028;

	t90 = ((x385<=(x386<x387))+x388);

	if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = 156008;
	int8_t x391 = INT8_MIN;
	static int64_t x392 = INT64_MIN;
	static int64_t t91 = 3382980395642753LL;

	t91 = ((x389<=(x390<x391))+x392);

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = -39;
	static volatile int16_t x394 = -181;
	int8_t x396 = 11;
	int32_t t92 = -4628;

	t92 = ((x393<=(x394<x395))+x396);

	if (t92 != 12) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = -13708230;
	static int32_t x398 = INT32_MIN;
	int16_t x399 = INT16_MIN;
	volatile uint64_t t93 = 73372180006722639LLU;

	t93 = ((x397<=(x398<x399))+x400);

	if (t93 != 7LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = INT32_MIN;
	int8_t x404 = INT8_MAX;

	t94 = ((x401<=(x402<x403))+x404);

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = -1;
	uint64_t x406 = UINT64_MAX;
	static int8_t x407 = INT8_MIN;
	int16_t x408 = 94;
	static volatile int32_t t95 = -117;

	t95 = ((x405<=(x406<x407))+x408);

	if (t95 != 95) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = 43813;
	uint64_t x410 = UINT64_MAX;
	volatile uint32_t x412 = 527997807U;
	uint32_t t96 = 464U;

	t96 = ((x409<=(x410<x411))+x412);

	if (t96 != 527997807U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x414 = INT64_MIN;
	int64_t x415 = -973756832634082LL;
	volatile int8_t x416 = INT8_MIN;

	t97 = ((x413<=(x414<x415))+x416);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x417 = -3;
	static int16_t x418 = INT16_MIN;
	int32_t t98 = -1374;

	t98 = ((x417<=(x418<x419))+x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x423 = INT64_MIN;
	int32_t t99 = INT32_MAX;

	t99 = ((x421<=(x422<x423))+x424);

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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


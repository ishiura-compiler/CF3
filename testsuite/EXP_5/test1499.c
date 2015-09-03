#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x6 = 4006;
int32_t t1 = -213026169;
volatile uint32_t x10 = UINT32_MAX;
static volatile int32_t x11 = -1;
static int8_t x14 = INT8_MIN;
int64_t x16 = INT64_MIN;
volatile uint64_t t3 = 1215200874LLU;
uint64_t x18 = UINT64_MAX;
uint8_t x20 = 4U;
uint16_t x24 = 474U;
volatile int16_t x31 = 5443;
uint8_t x49 = 0U;
int16_t x50 = 996;
uint64_t x63 = UINT64_MAX;
volatile int8_t x64 = -1;
volatile uint8_t x71 = UINT8_MAX;
int16_t x72 = -2;
int64_t x76 = INT64_MIN;
int8_t x86 = INT8_MAX;
int64_t x87 = INT64_MAX;
int32_t t20 = 0;
volatile int32_t x89 = INT32_MAX;
uint16_t x90 = UINT16_MAX;
int8_t x92 = INT8_MIN;
int32_t x95 = -1366632;
int32_t x96 = INT32_MAX;
static int8_t x97 = -1;
static volatile int32_t x98 = INT32_MAX;
int64_t x99 = INT64_MAX;
int64_t x101 = INT64_MIN;
static int64_t x103 = 3963947280LL;
int8_t x107 = -1;
int64_t x111 = INT64_MIN;
static uint16_t x114 = UINT16_MAX;
int32_t t28 = -121590585;
uint8_t x123 = 11U;
int16_t x133 = 232;
volatile uint64_t x135 = 24LLU;
int16_t x137 = -1;
int64_t x139 = -269134655458LL;
volatile int8_t x140 = INT8_MIN;
static uint32_t x142 = 2311834U;
int16_t x143 = INT16_MAX;
volatile uint8_t x145 = UINT8_MAX;
volatile uint64_t x148 = 8707172852875690643LLU;
int64_t x150 = INT64_MAX;
int8_t x156 = INT8_MIN;
int32_t x158 = INT32_MIN;
uint8_t x161 = 14U;
uint16_t x165 = 12U;
int32_t t40 = -140;
static int32_t x174 = INT32_MIN;
static volatile uint64_t x177 = 19704866491261588LLU;
uint8_t x183 = UINT8_MAX;
int8_t x190 = 0;
uint16_t x194 = 3U;
uint64_t x198 = 4357LLU;
int8_t x200 = 15;
volatile int32_t t48 = 951;
uint64_t x201 = 49982408349256LLU;
int16_t x206 = INT16_MAX;
int16_t x208 = 1;
int8_t x213 = -1;
int16_t x219 = -1;
volatile int32_t t53 = 3;
int16_t x223 = -1;
volatile int32_t x224 = 307902847;
int16_t x233 = 12971;
static int32_t x238 = -1;
static int8_t x239 = INT8_MAX;
static int32_t t60 = -3220403;
volatile int8_t x250 = INT8_MAX;
int64_t x253 = INT64_MIN;
int8_t x266 = INT8_MIN;
int16_t x269 = INT16_MIN;
uint8_t x270 = UINT8_MAX;
uint16_t x272 = 6U;
uint8_t x274 = 1U;
int16_t x276 = 7702;
int32_t t67 = -15;
static int16_t x278 = -1;
volatile int64_t t69 = -75876067593LL;
int16_t x289 = INT16_MIN;
volatile int8_t x291 = 24;
static volatile uint8_t x294 = 45U;
volatile uint32_t x298 = UINT32_MAX;
uint64_t x302 = 341263915LLU;
volatile int32_t t73 = -240;
int16_t x306 = INT16_MIN;
static volatile uint64_t x307 = UINT64_MAX;
static volatile int16_t x309 = INT16_MIN;
int8_t x314 = INT8_MIN;
static int16_t x320 = INT16_MIN;
uint8_t x324 = 96U;
int32_t x335 = INT32_MIN;
int32_t x343 = INT32_MAX;
uint32_t x345 = 45852U;
uint16_t x352 = 21U;
volatile int32_t x358 = INT32_MIN;
static uint8_t x359 = UINT8_MAX;
uint64_t x360 = UINT64_MAX;
uint8_t x365 = 56U;
static int32_t x371 = 1;
volatile uint16_t x372 = UINT16_MAX;
int32_t x375 = -1;
volatile int32_t t91 = 463;
int16_t x379 = -9490;
uint8_t x381 = 0U;
int64_t x383 = INT64_MAX;
static int32_t x402 = INT32_MAX;
int64_t x405 = INT64_MIN;
int8_t x406 = INT8_MIN;
int32_t x408 = 835685;
volatile int32_t x412 = -1699;
int16_t x414 = INT16_MAX;
int8_t x416 = INT8_MAX;


void f0(void) {
	uint32_t x1 = 55426U;
	int16_t x2 = -1;
	static int16_t x3 = INT16_MIN;
	uint8_t x4 = UINT8_MAX;
	uint32_t t0 = 9325U;

	t0 = (x1/((x2<x3)|x4));

	if (t0 != 217U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	int8_t x7 = INT8_MIN;
	static uint16_t x8 = UINT16_MAX;

	t1 = (x5/((x6<x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 4U;
	volatile uint8_t x12 = UINT8_MAX;
	int32_t t2 = 45551;

	t2 = (x9/((x10<x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 16792826821864083LLU;
	int64_t x15 = -1LL;

	t3 = (x13/((x14<x15)|x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int64_t x19 = INT64_MAX;
	volatile uint64_t t4 = 2262943265220730025LLU;

	t4 = (x17/((x18<x19)|x20));

	if (t4 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 3U;
	int16_t x22 = INT16_MIN;
	uint32_t x23 = 1231U;
	volatile int32_t t5 = -285366439;

	t5 = (x21/((x22<x23)|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = -1;
	int64_t x26 = -28684307LL;
	int64_t x27 = 114563028371LL;
	uint8_t x28 = 6U;
	int32_t t6 = -5883;

	t6 = (x25/((x26<x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -14;
	volatile int32_t x30 = -1;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 6479796LL;

	t7 = (x29/((x30<x31)|x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	static int8_t x34 = INT8_MIN;
	int16_t x35 = -1;
	int64_t x36 = INT64_MAX;
	volatile int64_t t8 = -3641238945192182LL;

	t8 = (x33/((x34<x35)|x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int32_t x38 = 303;
	int64_t x39 = INT64_MAX;
	int64_t x40 = 221LL;
	int64_t t9 = 1LL;

	t9 = (x37/((x38<x39)|x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 2U;
	static int16_t x42 = 0;
	int32_t x43 = INT32_MIN;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = -607099LL;

	t10 = (x41/((x42<x43)|x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	volatile uint8_t x46 = 3U;
	int64_t x47 = INT64_MIN;
	int32_t x48 = INT32_MIN;
	volatile uint32_t t11 = 516299739U;

	t11 = (x45/((x46<x47)|x48));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x51 = -13021;
	volatile int16_t x52 = INT16_MIN;
	static int32_t t12 = 17761;

	t12 = (x49/((x50<x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -32;
	uint16_t x54 = 3258U;
	volatile int16_t x55 = -1;
	static int64_t x56 = INT64_MAX;
	int64_t t13 = 13806792438014LL;

	t13 = (x53/((x54<x55)|x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -1;
	static volatile int16_t x58 = INT16_MIN;
	volatile uint64_t x59 = 3551406LLU;
	uint16_t x60 = 31U;
	static volatile int32_t t14 = -1658;

	t14 = (x57/((x58<x59)|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 2U;
	int16_t x62 = INT16_MAX;
	static volatile int32_t t15 = -405;

	t15 = (x61/((x62<x63)|x64));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 11479LL;
	int16_t x66 = INT16_MIN;
	volatile int64_t x67 = INT64_MIN;
	int8_t x68 = -1;
	int64_t t16 = -106264785LL;

	t16 = (x65/((x66<x67)|x68));

	if (t16 != -11479LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	volatile int64_t x70 = 321281LL;
	volatile int64_t t17 = 1934LL;

	t17 = (x69/((x70<x71)|x72));

	if (t17 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	int32_t x74 = -1;
	int64_t x75 = -1LL;
	static int64_t t18 = 86592389LL;

	t18 = (x73/((x74<x75)|x76));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -5471188555068947LL;
	int32_t x78 = -1;
	uint8_t x79 = 15U;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t19 = 229327468868087563LLU;

	t19 = (x77/((x78<x79)|x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	static volatile int8_t x88 = INT8_MIN;

	t20 = (x85/((x86<x87)|x88));

	if (t20 != 16909320) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x91 = UINT16_MAX;
	int32_t t21 = 132645416;

	t21 = (x89/((x90<x91)|x92));

	if (t21 != -16777215) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x93 = 15U;
	volatile int64_t x94 = INT64_MIN;
	volatile int32_t t22 = -6;

	t22 = (x93/((x94<x95)|x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x100 = 61U;
	static uint32_t t23 = 13718056U;

	t23 = (x97/((x98<x99)|x100));

	if (t23 != 70409299U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x102 = -1;
	int64_t x104 = INT64_MAX;
	int64_t t24 = 204267248498217237LL;

	t24 = (x101/((x102<x103)|x104));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x105 = -5621764;
	int32_t x106 = 1;
	static uint64_t x108 = 207317126525086741LLU;
	volatile uint64_t t25 = 912LLU;

	t25 = (x105/((x106<x107)|x108));

	if (t25 != 88LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MAX;
	int8_t x110 = INT8_MIN;
	static volatile int16_t x112 = -1;
	static int32_t t26 = 14806836;

	t26 = (x109/((x110<x111)|x112));

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 41U;
	int8_t x115 = INT8_MIN;
	uint8_t x116 = 29U;
	int32_t t27 = -2938;

	t27 = (x113/((x114<x115)|x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	static uint16_t x118 = UINT16_MAX;
	uint8_t x119 = 47U;
	volatile uint8_t x120 = 85U;

	t28 = (x117/((x118<x119)|x120));

	if (t28 != -25264513) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = -1;
	int32_t x124 = INT32_MIN;
	int64_t t29 = 2150LL;

	t29 = (x121/((x122<x123)|x124));

	if (t29 != 4294967298LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	static int64_t x126 = -1LL;
	uint64_t x127 = 1032284302049LLU;
	int64_t x128 = INT64_MIN;
	static volatile int64_t t30 = 224055267764994LL;

	t30 = (x125/((x126<x127)|x128));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -1;
	int16_t x130 = INT16_MIN;
	int32_t x131 = -6988;
	int16_t x132 = INT16_MAX;
	volatile int32_t t31 = 3366101;

	t31 = (x129/((x130<x131)|x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x134 = INT8_MAX;
	int8_t x136 = -1;
	volatile int32_t t32 = 0;

	t32 = (x133/((x134<x135)|x136));

	if (t32 != -232) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x138 = 161117881LLU;
	static int32_t t33 = -15492325;

	t33 = (x137/((x138<x139)|x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x141 = 91837LLU;
	uint16_t x144 = UINT16_MAX;
	volatile uint64_t t34 = 4072702813LLU;

	t34 = (x141/((x142<x143)|x144));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x146 = INT64_MAX;
	int64_t x147 = -1LL;
	volatile uint64_t t35 = 257940652879074LLU;

	t35 = (x145/((x146<x147)|x148));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MAX;
	int8_t x151 = -2;
	int64_t x152 = INT64_MAX;
	static volatile int64_t t36 = -389LL;

	t36 = (x149/((x150<x151)|x152));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = 1;
	static int64_t x154 = -1LL;
	int16_t x155 = 44;
	static volatile int32_t t37 = 21671;

	t37 = (x153/((x154<x155)|x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x157 = -2358620;
	int8_t x159 = 14;
	int8_t x160 = INT8_MIN;
	volatile int32_t t38 = 6;

	t38 = (x157/((x158<x159)|x160));

	if (t38 != 18571) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x162 = INT8_MIN;
	static volatile int32_t x163 = INT32_MAX;
	volatile uint16_t x164 = 5742U;
	int32_t t39 = 2;

	t39 = (x161/((x162<x163)|x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x166 = 971U;
	static uint32_t x167 = 1U;
	static int8_t x168 = INT8_MIN;

	t40 = (x165/((x166<x167)|x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x169 = -1;
	static int64_t x170 = INT64_MAX;
	static int64_t x171 = INT64_MIN;
	volatile uint8_t x172 = 56U;
	volatile int32_t t41 = 1;

	t41 = (x169/((x170<x171)|x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x173 = 1724271LLU;
	int64_t x175 = -305486LL;
	int8_t x176 = -27;
	static uint64_t t42 = 528260965786141LLU;

	t42 = (x173/((x174<x175)|x176));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x178 = 0;
	static uint64_t x179 = 4573747881494404122LLU;
	uint8_t x180 = 118U;
	volatile uint64_t t43 = 37LLU;

	t43 = (x177/((x178<x179)|x180));

	if (t43 != 165587113371946LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MAX;
	static volatile int64_t x182 = -1LL;
	static int32_t x184 = INT32_MAX;
	int64_t t44 = -276LL;

	t44 = (x181/((x182<x183)|x184));

	if (t44 != 4294967298LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x185 = 1U;
	static uint8_t x186 = UINT8_MAX;
	static int16_t x187 = INT16_MIN;
	volatile uint8_t x188 = 93U;
	int32_t t45 = 2410;

	t45 = (x185/((x186<x187)|x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = 0;
	uint8_t x191 = 0U;
	static volatile int16_t x192 = INT16_MIN;
	volatile int32_t t46 = 572501;

	t46 = (x189/((x190<x191)|x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = -1;
	int8_t x195 = -9;
	int8_t x196 = INT8_MIN;
	volatile int32_t t47 = -50614;

	t47 = (x193/((x194<x195)|x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MAX;
	int8_t x199 = INT8_MIN;

	t48 = (x197/((x198<x199)|x200));

	if (t48 != 143165576) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x202 = INT64_MIN;
	int32_t x203 = -1;
	static uint16_t x204 = UINT16_MAX;
	uint64_t t49 = 32525834LLU;

	t49 = (x201/((x202<x203)|x204));

	if (t49 != 762682663LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x205 = 1630U;
	static int8_t x207 = -1;
	volatile uint32_t t50 = 5502391U;

	t50 = (x205/((x206<x207)|x208));

	if (t50 != 1630U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = INT64_MAX;
	volatile int8_t x210 = -1;
	static int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MAX;
	int64_t t51 = -2167LL;

	t51 = (x209/((x210<x211)|x212));

	if (t51 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x214 = -44;
	static uint32_t x215 = 1U;
	static uint16_t x216 = 248U;
	volatile int32_t t52 = -666786;

	t52 = (x213/((x214<x215)|x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x217 = 104U;
	static int8_t x218 = INT8_MAX;
	static uint8_t x220 = 51U;

	t53 = (x217/((x218<x219)|x220));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = -1;
	int8_t x222 = 6;
	volatile int32_t t54 = -32;

	t54 = (x221/((x222<x223)|x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MAX;
	int32_t x227 = 0;
	static int32_t x228 = -3364802;
	int32_t t55 = -82055;

	t55 = (x225/((x226<x227)|x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x229 = 1LLU;
	volatile int32_t x230 = -1;
	uint32_t x231 = UINT32_MAX;
	int16_t x232 = -13694;
	static volatile uint64_t t56 = 46249292915198991LLU;

	t56 = (x229/((x230<x231)|x232));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x234 = 424U;
	static int16_t x235 = -1;
	int32_t x236 = INT32_MIN;
	volatile int32_t t57 = 141;

	t57 = (x233/((x234<x235)|x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x237 = 31U;
	uint32_t x240 = 819128393U;
	volatile uint32_t t58 = 19302U;

	t58 = (x237/((x238<x239)|x240));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x241 = -1;
	static volatile int16_t x242 = 5984;
	volatile int16_t x243 = -1;
	int64_t x244 = 85953791898LL;
	int64_t t59 = 11LL;

	t59 = (x241/((x242<x243)|x244));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x245 = UINT16_MAX;
	static uint16_t x246 = UINT16_MAX;
	int32_t x247 = 23293623;
	static volatile int16_t x248 = -1;

	t60 = (x245/((x246<x247)|x248));

	if (t60 != -65535) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = -1;
	uint32_t x251 = 1U;
	int64_t x252 = INT64_MAX;
	int64_t t61 = 3246214LL;

	t61 = (x249/((x250<x251)|x252));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x254 = 10U;
	static uint16_t x255 = 15478U;
	int16_t x256 = -4070;
	volatile int64_t t62 = -1482543LL;

	t62 = (x253/((x254<x255)|x256));

	if (t62 != 2266741714636219LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x257 = 5U;
	int8_t x258 = INT8_MAX;
	int64_t x259 = 1373226691LL;
	int64_t x260 = 107375217963709LL;
	int64_t t63 = -800436033996674LL;

	t63 = (x257/((x258<x259)|x260));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x261 = UINT32_MAX;
	int64_t x262 = -43918251799398315LL;
	int8_t x263 = INT8_MAX;
	int32_t x264 = INT32_MIN;
	volatile uint32_t t64 = 53U;

	t64 = (x261/((x262<x263)|x264));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = -113;
	int16_t x267 = INT16_MIN;
	static uint32_t x268 = 569U;
	volatile uint32_t t65 = 2U;

	t65 = (x265/((x266<x267)|x268));

	if (t65 != 7548272U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x271 = -4;
	static volatile int32_t t66 = 10143;

	t66 = (x269/((x270<x271)|x272));

	if (t66 != -5461) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x273 = 24;
	volatile int8_t x275 = INT8_MIN;

	t67 = (x273/((x274<x275)|x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = INT16_MIN;
	static uint16_t x279 = 54U;
	static int32_t x280 = INT32_MIN;
	static int32_t t68 = -3;

	t68 = (x277/((x278<x279)|x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = INT64_MIN;
	volatile uint16_t x282 = 468U;
	static uint32_t x283 = 39U;
	uint32_t x284 = UINT32_MAX;

	t69 = (x281/((x282<x283)|x284));

	if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x290 = INT16_MIN;
	static uint16_t x292 = UINT16_MAX;
	int32_t t70 = 38951;

	t70 = (x289/((x290<x291)|x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x293 = INT64_MAX;
	int32_t x295 = -1;
	int16_t x296 = -1;
	int64_t t71 = 2233343341928591LL;

	t71 = (x293/((x294<x295)|x296));

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = INT16_MAX;
	int64_t x299 = INT64_MAX;
	volatile int8_t x300 = INT8_MIN;
	volatile int32_t t72 = 6760;

	t72 = (x297/((x298<x299)|x300));

	if (t72 != -258) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x301 = -1;
	int32_t x303 = 379;
	int8_t x304 = INT8_MAX;

	t73 = (x301/((x302<x303)|x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x305 = INT8_MAX;
	int32_t x308 = INT32_MIN;
	volatile int32_t t74 = 300638565;

	t74 = (x305/((x306<x307)|x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x310 = -56;
	int32_t x311 = -1;
	volatile int64_t x312 = -1LL;
	volatile int64_t t75 = -26LL;

	t75 = (x309/((x310<x311)|x312));

	if (t75 != 32768LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = 196537U;
	static volatile int32_t x315 = 13;
	int16_t x316 = INT16_MIN;
	uint32_t t76 = 217846U;

	t76 = (x313/((x314<x315)|x316));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x317 = INT16_MIN;
	int32_t x318 = INT32_MIN;
	volatile int64_t x319 = INT64_MIN;
	int32_t t77 = 0;

	t77 = (x317/((x318<x319)|x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x321 = 0;
	static int8_t x322 = -1;
	static volatile uint32_t x323 = 22983163U;
	int32_t t78 = 7692155;

	t78 = (x321/((x322<x323)|x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MIN;
	int8_t x326 = -1;
	int16_t x327 = 97;
	volatile int64_t x328 = INT64_MIN;
	int64_t t79 = -14437418709727LL;

	t79 = (x325/((x326<x327)|x328));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x329 = 42U;
	int32_t x330 = INT32_MIN;
	int32_t x331 = -1;
	static uint32_t x332 = UINT32_MAX;
	volatile uint32_t t80 = 2206U;

	t80 = (x329/((x330<x331)|x332));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x333 = 7;
	int8_t x334 = -3;
	static int8_t x336 = INT8_MIN;
	int32_t t81 = -297;

	t81 = (x333/((x334<x335)|x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = 3U;
	static int8_t x338 = -1;
	volatile int8_t x339 = INT8_MIN;
	uint8_t x340 = UINT8_MAX;
	uint32_t t82 = 227978U;

	t82 = (x337/((x338<x339)|x340));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 10573U;
	volatile uint32_t x342 = 1991U;
	static volatile int16_t x344 = INT16_MIN;
	volatile int32_t t83 = 302;

	t83 = (x341/((x342<x343)|x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x346 = 10;
	uint64_t x347 = UINT64_MAX;
	volatile int64_t x348 = INT64_MIN;
	volatile int64_t t84 = -26LL;

	t84 = (x345/((x346<x347)|x348));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = -201;
	static int32_t x350 = -13159;
	uint32_t x351 = UINT32_MAX;
	volatile int32_t t85 = 330;

	t85 = (x349/((x350<x351)|x352));

	if (t85 != -9) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = -1547940;
	int16_t x354 = INT16_MIN;
	int16_t x355 = 1741;
	uint16_t x356 = 17362U;
	int32_t t86 = 4705;

	t86 = (x353/((x354<x355)|x356));

	if (t86 != -89) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = INT32_MIN;
	uint64_t t87 = 711LLU;

	t87 = (x357/((x358<x359)|x360));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = 239229583286LL;
	volatile int16_t x362 = -1;
	int64_t x363 = INT64_MAX;
	static volatile int16_t x364 = -1;
	static volatile int64_t t88 = -635LL;

	t88 = (x361/((x362<x363)|x364));

	if (t88 != -239229583286LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x366 = -1LL;
	int32_t x367 = INT32_MAX;
	static uint64_t x368 = UINT64_MAX;
	volatile uint64_t t89 = 517007LLU;

	t89 = (x365/((x366<x367)|x368));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x369 = UINT16_MAX;
	static int8_t x370 = 0;
	int32_t t90 = 4013782;

	t90 = (x369/((x370<x371)|x372));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x373 = UINT8_MAX;
	uint32_t x374 = 101U;
	int32_t x376 = -116;

	t91 = (x373/((x374<x375)|x376));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = -16;
	int16_t x378 = INT16_MIN;
	volatile int32_t x380 = 2;
	static volatile int32_t t92 = -8908;

	t92 = (x377/((x378<x379)|x380));

	if (t92 != -5) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x382 = -108238437;
	volatile uint8_t x384 = UINT8_MAX;
	int32_t t93 = 1;

	t93 = (x381/((x382<x383)|x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x389 = UINT8_MAX;
	static int32_t x390 = 0;
	int16_t x391 = INT16_MAX;
	uint32_t x392 = UINT32_MAX;
	uint32_t t94 = 148948592U;

	t94 = (x389/((x390<x391)|x392));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MAX;
	int16_t x394 = INT16_MIN;
	int64_t x395 = INT64_MAX;
	int32_t x396 = INT32_MIN;
	int64_t t95 = -3LL;

	t95 = (x393/((x394<x395)|x396));

	if (t95 != -4294967298LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x401 = INT32_MIN;
	static volatile int8_t x403 = 52;
	int16_t x404 = INT16_MIN;
	volatile int32_t t96 = -673;

	t96 = (x401/((x402<x403)|x404));

	if (t96 != 65536) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x407 = INT8_MIN;
	volatile int64_t t97 = -2193LL;

	t97 = (x405/((x406<x407)|x408));

	if (t97 != -11036900311546LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x409 = 0LLU;
	volatile int32_t x410 = 3535;
	static int8_t x411 = INT8_MIN;
	volatile uint64_t t98 = 188525879LLU;

	t98 = (x409/((x410<x411)|x412));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x413 = -1;
	static uint8_t x415 = 12U;
	volatile int32_t t99 = -203247910;

	t99 = (x413/((x414<x415)|x416));

	if (t99 != 0) { NG(); } else { ; }
	
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


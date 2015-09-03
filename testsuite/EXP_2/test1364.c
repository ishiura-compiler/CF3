#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x9 = -1;
int16_t x10 = -1;
int32_t t2 = -1759;
volatile int64_t t3 = 198300999LL;
int32_t x21 = -1;
volatile int32_t x22 = -37;
uint8_t x39 = UINT8_MAX;
static int8_t x43 = INT8_MAX;
static volatile uint8_t x52 = UINT8_MAX;
volatile int16_t x55 = 1318;
int16_t x64 = INT16_MAX;
volatile int32_t t15 = 348143024;
int8_t x65 = 0;
uint64_t x69 = 143LLU;
int32_t x77 = INT32_MIN;
int32_t t18 = 17221;
volatile uint32_t x88 = 1449326278U;
static int32_t x96 = INT32_MIN;
int16_t x104 = INT16_MAX;
int32_t t25 = 1815906;
uint64_t t27 = UINT64_MAX;
volatile int64_t t28 = -14727360LL;
volatile int64_t x129 = 95LL;
uint32_t x132 = UINT32_MAX;
int64_t t31 = -162147LL;
uint32_t x133 = 97610U;
uint32_t t32 = 192441605U;
static uint32_t x138 = UINT32_MAX;
int8_t x140 = INT8_MAX;
int64_t x141 = 753119755LL;
int32_t x145 = -1;
int8_t x147 = -37;
volatile uint8_t x154 = 43U;
static int32_t x155 = INT32_MIN;
int32_t x159 = INT32_MIN;
int16_t x175 = -4;
volatile int64_t x184 = 71056898664LL;
volatile int8_t x203 = INT8_MIN;
uint32_t t52 = 7990U;
int32_t x219 = -1;
int8_t x222 = -3;
uint32_t x223 = 4481924U;
volatile int16_t x228 = -1;
int32_t x239 = -1;
uint16_t x244 = 22U;
int16_t x250 = -125;
int32_t x253 = -1;
int8_t x258 = -1;
int16_t x259 = -1;
volatile int64_t t65 = -1LL;
volatile int16_t x283 = -1;
volatile int64_t x291 = INT64_MIN;
int8_t x298 = 47;
uint32_t x306 = 172956882U;
static int32_t t72 = 36551060;
int16_t x313 = 40;
uint16_t x316 = UINT16_MAX;
volatile int32_t x318 = -1;
static int8_t x324 = INT8_MAX;
uint32_t x340 = 3073U;
volatile int32_t x342 = 531672;
uint32_t x344 = 640U;
uint8_t x345 = 58U;
int64_t x348 = INT64_MIN;
volatile uint16_t x349 = 1758U;
int16_t x353 = INT16_MAX;
volatile int8_t x354 = -1;
volatile int8_t x358 = INT8_MIN;
int64_t x360 = INT64_MIN;
volatile int32_t t85 = -140836119;
static volatile int16_t x365 = INT16_MAX;
int16_t x369 = 53;
uint8_t x370 = 4U;
int16_t x372 = INT16_MIN;
static int16_t x373 = 16066;
int16_t x374 = INT16_MAX;
uint8_t x378 = 30U;
static uint64_t x381 = 161LLU;
int16_t x394 = INT16_MIN;
uint64_t x396 = 3098225670LLU;
int64_t x398 = -1LL;
volatile uint8_t x399 = UINT8_MAX;
uint32_t x402 = 4764U;
int64_t x407 = INT64_MIN;
static uint16_t x411 = 525U;
uint32_t x414 = 60684573U;


void f0(void) {
	int8_t x1 = -23;
	uint8_t x2 = 8U;
	static uint64_t x3 = 31576LLU;
	int8_t x4 = -1;
	volatile int32_t t0 = 3574;

	t0 = ((x1+(x2<x3))|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 11U;
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MAX;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -1;

	t1 = ((x5+(x6<x7))|x8);

	if (t1 != -32756) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x11 = 3U;
	uint16_t x12 = 16813U;

	t2 = ((x9+(x10<x11))|x12);

	if (t2 != 16813) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = 0;
	uint16_t x15 = 752U;
	uint16_t x16 = 6U;

	t3 = ((x13+(x14<x15))|x16);

	if (t3 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	uint64_t x18 = UINT64_MAX;
	int32_t x19 = INT32_MAX;
	int16_t x20 = -14;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = ((x17+(x18<x19))|x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x23 = INT8_MAX;
	volatile int8_t x24 = 1;
	volatile int32_t t5 = -276131;

	t5 = ((x21+(x22<x23))|x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	static volatile uint16_t x26 = 1U;
	static uint32_t x27 = UINT32_MAX;
	int32_t x28 = 491;
	int64_t t6 = 5241632LL;

	t6 = ((x25+(x26<x27))|x28);

	if (t6 != -9223372036854775317LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int8_t x30 = INT8_MIN;
	int16_t x31 = -1;
	static uint8_t x32 = 11U;
	uint32_t t7 = 43570942U;

	t7 = ((x29+(x30<x31))|x32);

	if (t7 != 11U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MAX;
	static int32_t x35 = INT32_MAX;
	static uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = ((x33+(x34<x35))|x36);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	volatile int16_t x38 = -1;
	static uint16_t x40 = 62U;
	int32_t t9 = -3400;

	t9 = ((x37+(x38<x39))|x40);

	if (t9 != 62) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x42 = INT8_MIN;
	static uint8_t x44 = 0U;
	uint64_t t10 = 1801LLU;

	t10 = ((x41+(x42<x43))|x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = 72U;
	int8_t x46 = 3;
	static int8_t x47 = -1;
	uint32_t x48 = 19056U;
	volatile uint32_t t11 = 2669U;

	t11 = ((x45+(x46<x47))|x48);

	if (t11 != 19064U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 3383499590136LLU;
	uint32_t x50 = UINT32_MAX;
	int8_t x51 = INT8_MAX;
	uint64_t t12 = 118773LLU;

	t12 = ((x49+(x50<x51))|x52);

	if (t12 != 3383499590143LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -47;
	uint32_t x54 = 5188281U;
	static uint8_t x56 = UINT8_MAX;
	static volatile int32_t t13 = -353;

	t13 = ((x53+(x54<x55))|x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint32_t x58 = 836729U;
	uint32_t x59 = 3203367U;
	int8_t x60 = 31;
	volatile int32_t t14 = -1;

	t14 = ((x57+(x58<x59))|x60);

	if (t14 != -97) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint8_t x62 = 0U;
	int32_t x63 = -369227828;

	t15 = ((x61+(x62<x63))|x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -6648;
	int16_t x67 = INT16_MAX;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = 4;

	t16 = ((x65+(x66<x67))|x68);

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MIN;
	static int32_t x71 = -1;
	int32_t x72 = -6;
	uint64_t t17 = 3566097258641LLU;

	t17 = ((x69+(x70<x71))|x72);

	if (t17 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = INT32_MAX;
	static int64_t x79 = -1LL;
	static uint8_t x80 = UINT8_MAX;

	t18 = ((x77+(x78<x79))|x80);

	if (t18 != -2147483393) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	uint16_t x82 = 409U;
	int8_t x83 = -1;
	volatile uint64_t x84 = 16837392202057LLU;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = ((x81+(x82<x83))|x84);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	static uint32_t x86 = 421553674U;
	int16_t x87 = INT16_MAX;
	uint32_t t20 = 9873U;

	t20 = ((x85+(x86<x87))|x88);

	if (t20 != 2147483647U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -3;
	int64_t x90 = 45290705862664LL;
	int16_t x91 = -5;
	uint8_t x92 = 82U;
	volatile int32_t t21 = -22831;

	t21 = ((x89+(x90<x91))|x92);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	volatile int64_t x94 = 1LL;
	int16_t x95 = INT16_MIN;
	volatile int32_t t22 = 36944847;

	t22 = ((x93+(x94<x95))|x96);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = 12635U;
	int64_t x98 = INT64_MIN;
	static int32_t x99 = INT32_MAX;
	volatile int16_t x100 = INT16_MIN;
	volatile uint32_t t23 = 105731U;

	t23 = ((x97+(x98<x99))|x100);

	if (t23 != 4294947164U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = 27U;
	volatile uint64_t x102 = 3857755873114LLU;
	int8_t x103 = 0;
	static int32_t t24 = -1;

	t24 = ((x101+(x102<x103))|x104);

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	int16_t x106 = INT16_MIN;
	int64_t x107 = -1LL;
	uint16_t x108 = 13355U;

	t25 = ((x105+(x106<x107))|x108);

	if (t25 != 46123) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -1;
	static int32_t x110 = -1;
	static int16_t x111 = 203;
	static volatile int64_t x112 = INT64_MIN;
	static int64_t t26 = INT64_MIN;

	t26 = ((x109+(x110<x111))|x112);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x113 = UINT32_MAX;
	volatile uint32_t x114 = 12U;
	uint8_t x115 = 50U;
	static uint64_t x116 = UINT64_MAX;

	t27 = ((x113+(x114<x115))|x116);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = UINT8_MAX;
	uint8_t x118 = 15U;
	static volatile int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MIN;

	t28 = ((x117+(x118<x119))|x120);

	if (t28 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = 24U;
	int32_t x122 = INT32_MIN;
	uint16_t x123 = 23436U;
	volatile int32_t x124 = 108;
	volatile int32_t t29 = 142125;

	t29 = ((x121+(x122<x123))|x124);

	if (t29 != 125) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = 3;
	int16_t x126 = 17;
	volatile int16_t x127 = 1;
	int64_t x128 = INT64_MAX;
	volatile int64_t t30 = INT64_MAX;

	t30 = ((x125+(x126<x127))|x128);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x130 = -1LL;
	uint64_t x131 = 917LLU;

	t31 = ((x129+(x130<x131))|x132);

	if (t31 != 4294967295LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x134 = UINT8_MAX;
	int8_t x135 = -24;
	volatile uint8_t x136 = 0U;

	t32 = ((x133+(x134<x135))|x136);

	if (t32 != 97610U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = 3318548U;
	volatile int64_t x139 = -1LL;
	static uint32_t t33 = 20U;

	t33 = ((x137+(x138<x139))|x140);

	if (t33 != 3318655U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x142 = 2321U;
	uint32_t x143 = UINT32_MAX;
	volatile uint16_t x144 = 0U;
	volatile int64_t t34 = 10767593213725542LL;

	t34 = ((x141+(x142<x143))|x144);

	if (t34 != 753119756LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x146 = INT64_MAX;
	uint16_t x148 = 14332U;
	static int32_t t35 = 41697850;

	t35 = ((x145+(x146<x147))|x148);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = 0U;
	int64_t x150 = 62LL;
	int8_t x151 = -1;
	volatile int32_t x152 = INT32_MAX;
	int32_t t36 = INT32_MAX;

	t36 = ((x149+(x150<x151))|x152);

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -49020232;
	static uint32_t x156 = UINT32_MAX;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = ((x153+(x154<x155))|x156);

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x157 = 7;
	volatile int8_t x158 = 0;
	uint64_t x160 = 3272LLU;
	uint64_t t38 = 12989905LLU;

	t38 = ((x157+(x158<x159))|x160);

	if (t38 != 3279LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = UINT16_MAX;
	volatile int8_t x162 = INT8_MIN;
	uint16_t x163 = UINT16_MAX;
	static uint16_t x164 = UINT16_MAX;
	volatile int32_t t39 = 517963;

	t39 = ((x161+(x162<x163))|x164);

	if (t39 != 131071) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = -1;
	volatile int64_t x166 = -251232LL;
	int64_t x167 = INT64_MIN;
	int64_t x168 = INT64_MIN;
	volatile int64_t t40 = 2323LL;

	t40 = ((x165+(x166<x167))|x168);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x169 = -7081;
	int16_t x170 = 2842;
	static uint16_t x171 = 6916U;
	static int16_t x172 = 1815;
	volatile int32_t t41 = -33;

	t41 = ((x169+(x170<x171))|x172);

	if (t41 != -6305) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -2259794892084672822LL;
	uint8_t x174 = 34U;
	uint32_t x176 = UINT32_MAX;
	volatile int64_t t42 = 592469LL;

	t42 = ((x173+(x174<x175))|x176);

	if (t42 != -2259794891011784705LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x177 = UINT64_MAX;
	static int8_t x178 = INT8_MAX;
	int64_t x179 = -1LL;
	static int8_t x180 = 3;
	static volatile uint64_t t43 = UINT64_MAX;

	t43 = ((x177+(x178<x179))|x180);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x181 = INT64_MIN;
	uint64_t x182 = UINT64_MAX;
	uint16_t x183 = 1U;
	volatile int64_t t44 = -1LL;

	t44 = ((x181+(x182<x183))|x184);

	if (t44 != -9223371965797877144LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MAX;
	int16_t x186 = INT16_MIN;
	int64_t x187 = -578206594LL;
	int32_t x188 = -1;
	int32_t t45 = 432;

	t45 = ((x185+(x186<x187))|x188);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MAX;
	int16_t x190 = -1;
	volatile uint8_t x191 = 58U;
	volatile int64_t x192 = 3563204193428326LL;
	volatile int64_t t46 = 194479660028797LL;

	t46 = ((x189+(x190<x191))|x192);

	if (t46 != 3563204193461094LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = UINT8_MAX;
	static int16_t x194 = -2;
	static int32_t x195 = INT32_MIN;
	int8_t x196 = 0;
	int32_t t47 = 645119206;

	t47 = ((x193+(x194<x195))|x196);

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	volatile uint64_t x199 = UINT64_MAX;
	int16_t x200 = INT16_MAX;
	volatile int32_t t48 = 117554;

	t48 = ((x197+(x198<x199))|x200);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = 264;
	static uint16_t x202 = 1U;
	int8_t x204 = INT8_MIN;
	volatile int32_t t49 = -3352924;

	t49 = ((x201+(x202<x203))|x204);

	if (t49 != -120) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = 101LLU;
	static uint16_t x206 = 1350U;
	uint16_t x207 = UINT16_MAX;
	int32_t x208 = INT32_MIN;
	volatile uint64_t t50 = 162248LLU;

	t50 = ((x205+(x206<x207))|x208);

	if (t50 != 18446744071562068070LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = -918;
	volatile int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MAX;
	int64_t x212 = INT64_MAX;
	volatile int64_t t51 = 17087149475LL;

	t51 = ((x209+(x210<x211))|x212);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x213 = 1U;
	uint16_t x214 = 14U;
	int64_t x215 = INT64_MIN;
	static uint32_t x216 = 277154392U;

	t52 = ((x213+(x214<x215))|x216);

	if (t52 != 277154393U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = -1;
	int16_t x218 = 90;
	static uint32_t x220 = 0U;
	static volatile uint32_t t53 = UINT32_MAX;

	t53 = ((x217+(x218<x219))|x220);

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x221 = INT64_MAX;
	static int8_t x224 = INT8_MIN;
	volatile int64_t t54 = -640113667809067LL;

	t54 = ((x221+(x222<x223))|x224);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = 156581029647865366LL;
	volatile int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MAX;
	volatile int64_t t55 = -12028608LL;

	t55 = ((x225+(x226<x227))|x228);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x233 = -179716;
	int8_t x234 = -1;
	uint16_t x235 = 540U;
	int8_t x236 = -1;
	volatile int32_t t56 = 1357;

	t56 = ((x233+(x234<x235))|x236);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x237 = -1LL;
	uint16_t x238 = UINT16_MAX;
	volatile int32_t x240 = INT32_MAX;
	volatile int64_t t57 = 19726962LL;

	t57 = ((x237+(x238<x239))|x240);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = INT8_MIN;
	int16_t x242 = -23;
	int64_t x243 = -526644630615177LL;
	volatile int32_t t58 = -409108;

	t58 = ((x241+(x242<x243))|x244);

	if (t58 != -106) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = -1;
	static volatile uint32_t x251 = 7U;
	int64_t x252 = 1LL;
	int64_t t59 = -22407147LL;

	t59 = ((x249+(x250<x251))|x252);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x254 = INT16_MIN;
	uint32_t x255 = 3589U;
	int64_t x256 = -1LL;
	int64_t t60 = 92117LL;

	t60 = ((x253+(x254<x255))|x256);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = 505U;
	int16_t x260 = -1;
	int32_t t61 = 38722;

	t61 = ((x257+(x258<x259))|x260);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x261 = -430;
	uint8_t x262 = UINT8_MAX;
	static volatile int16_t x263 = INT16_MIN;
	int64_t x264 = -1LL;
	static int64_t t62 = -9653749LL;

	t62 = ((x261+(x262<x263))|x264);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x265 = -1092;
	int64_t x266 = -9593526014LL;
	volatile int64_t x267 = INT64_MAX;
	int32_t x268 = -1;
	int32_t t63 = -134998;

	t63 = ((x265+(x266<x267))|x268);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x269 = INT8_MAX;
	int16_t x270 = 4705;
	static int16_t x271 = 7303;
	int64_t x272 = INT64_MIN;
	volatile int64_t t64 = -1112388677290LL;

	t64 = ((x269+(x270<x271))|x272);

	if (t64 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = INT8_MAX;
	int16_t x278 = -1;
	int16_t x279 = INT16_MIN;
	static int64_t x280 = INT64_MIN;

	t65 = ((x277+(x278<x279))|x280);

	if (t65 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x281 = INT8_MIN;
	volatile int16_t x282 = -1;
	uint8_t x284 = 0U;
	static volatile int32_t t66 = 62596003;

	t66 = ((x281+(x282<x283))|x284);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x285 = 0U;
	static uint32_t x286 = UINT32_MAX;
	volatile int8_t x287 = INT8_MIN;
	static volatile int16_t x288 = -1;
	uint32_t t67 = UINT32_MAX;

	t67 = ((x285+(x286<x287))|x288);

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x289 = UINT16_MAX;
	volatile int16_t x290 = INT16_MIN;
	int32_t x292 = INT32_MIN;
	static int32_t t68 = 1;

	t68 = ((x289+(x290<x291))|x292);

	if (t68 != -2147418113) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x293 = INT16_MIN;
	static volatile int16_t x294 = INT16_MIN;
	uint8_t x295 = UINT8_MAX;
	volatile int32_t x296 = -1;
	int32_t t69 = 358302;

	t69 = ((x293+(x294<x295))|x296);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x297 = INT8_MIN;
	int32_t x299 = 8038754;
	int64_t x300 = INT64_MIN;
	static volatile int64_t t70 = 21405374721LL;

	t70 = ((x297+(x298<x299))|x300);

	if (t70 != -127LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = -1;
	int32_t x302 = 173861310;
	int16_t x303 = -1;
	int32_t x304 = -6;
	volatile int32_t t71 = -8828454;

	t71 = ((x301+(x302<x303))|x304);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x305 = UINT8_MAX;
	static volatile int16_t x307 = INT16_MIN;
	int16_t x308 = -1;

	t72 = ((x305+(x306<x307))|x308);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MIN;
	int32_t x310 = -13742;
	uint16_t x311 = 769U;
	uint8_t x312 = UINT8_MAX;
	static int32_t t73 = -2;

	t73 = ((x309+(x310<x311))|x312);

	if (t73 != -32513) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x314 = INT32_MIN;
	int8_t x315 = INT8_MAX;
	volatile int32_t t74 = -424888021;

	t74 = ((x313+(x314<x315))|x316);

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x317 = INT8_MIN;
	static int8_t x319 = 6;
	int64_t x320 = 1LL;
	volatile int64_t t75 = 302694759361987LL;

	t75 = ((x317+(x318<x319))|x320);

	if (t75 != -127LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x321 = UINT16_MAX;
	volatile int32_t x322 = INT32_MIN;
	static uint64_t x323 = 1120833673345593LLU;
	int32_t t76 = 31;

	t76 = ((x321+(x322<x323))|x324);

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x325 = INT8_MIN;
	uint64_t x326 = 4455LLU;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = -1;
	volatile int32_t t77 = -2;

	t77 = ((x325+(x326<x327))|x328);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x333 = INT16_MIN;
	int16_t x334 = -1;
	volatile int32_t x335 = 109;
	int64_t x336 = -1595315599257876116LL;
	static volatile int64_t t78 = 396204LL;

	t78 = ((x333+(x334<x335))|x336);

	if (t78 != -13971LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = INT8_MIN;
	uint32_t x338 = 2250674U;
	uint16_t x339 = UINT16_MAX;
	static uint32_t t79 = 2825788U;

	t79 = ((x337+(x338<x339))|x340);

	if (t79 != 4294967169U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x341 = 3U;
	int64_t x343 = INT64_MAX;
	uint32_t t80 = 1849148U;

	t80 = ((x341+(x342<x343))|x344);

	if (t80 != 644U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x346 = 6U;
	int64_t x347 = INT64_MIN;
	static volatile int64_t t81 = -27727901003196LL;

	t81 = ((x345+(x346<x347))|x348);

	if (t81 != -9223372036854775750LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x350 = 1U;
	uint8_t x351 = 1U;
	volatile int16_t x352 = 0;
	int32_t t82 = 46;

	t82 = ((x349+(x350<x351))|x352);

	if (t82 != 1758) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x355 = -1;
	uint64_t x356 = 115274LLU;
	uint64_t t83 = 529602042654832LLU;

	t83 = ((x353+(x354<x355))|x356);

	if (t83 != 131071LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x357 = INT32_MAX;
	int16_t x359 = INT16_MIN;
	int64_t t84 = -2959886664033LL;

	t84 = ((x357+(x358<x359))|x360);

	if (t84 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = INT16_MAX;
	uint16_t x362 = UINT16_MAX;
	volatile int16_t x363 = -53;
	volatile uint16_t x364 = 2146U;

	t85 = ((x361+(x362<x363))|x364);

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x366 = 11738LLU;
	static uint8_t x367 = 14U;
	volatile int8_t x368 = 6;
	int32_t t86 = 487241008;

	t86 = ((x365+(x366<x367))|x368);

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x371 = -2671;
	int32_t t87 = 283;

	t87 = ((x369+(x370<x371))|x372);

	if (t87 != -32715) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x375 = INT8_MAX;
	int64_t x376 = INT64_MIN;
	int64_t t88 = 555LL;

	t88 = ((x373+(x374<x375))|x376);

	if (t88 != -9223372036854759742LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = -61627600001538LL;
	uint32_t x379 = 454U;
	int64_t x380 = -1LL;
	volatile int64_t t89 = 47764450326LL;

	t89 = ((x377+(x378<x379))|x380);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x382 = INT64_MIN;
	static int64_t x383 = INT64_MIN;
	static int8_t x384 = 63;
	volatile uint64_t t90 = 3942620445768644LLU;

	t90 = ((x381+(x382<x383))|x384);

	if (t90 != 191LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x385 = -1;
	int64_t x386 = 1972LL;
	static volatile int32_t x387 = INT32_MAX;
	uint32_t x388 = UINT32_MAX;
	uint32_t t91 = UINT32_MAX;

	t91 = ((x385+(x386<x387))|x388);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x389 = 3962848U;
	static int64_t x390 = INT64_MIN;
	int64_t x391 = -1LL;
	int64_t x392 = INT64_MIN;
	int64_t t92 = 3541491114561256LL;

	t92 = ((x389+(x390<x391))|x392);

	if (t92 != -9223372036850812959LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = INT8_MAX;
	uint64_t x395 = 3LLU;
	volatile uint64_t t93 = 2956LLU;

	t93 = ((x393+(x394<x395))|x396);

	if (t93 != 3098225791LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x397 = 1LL;
	int8_t x400 = 52;
	int64_t t94 = -45864366LL;

	t94 = ((x397+(x398<x399))|x400);

	if (t94 != 54LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = INT32_MIN;
	int64_t x403 = -59635655LL;
	uint8_t x404 = 46U;
	volatile int32_t t95 = 84215;

	t95 = ((x401+(x402<x403))|x404);

	if (t95 != -2147483602) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = 0U;
	int32_t x406 = INT32_MIN;
	int8_t x408 = INT8_MIN;
	volatile uint32_t t96 = 3U;

	t96 = ((x405+(x406<x407))|x408);

	if (t96 != 4294967168U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x409 = UINT64_MAX;
	int64_t x410 = -1LL;
	uint8_t x412 = UINT8_MAX;
	volatile uint64_t t97 = 8991635768435LLU;

	t97 = ((x409+(x410<x411))|x412);

	if (t97 != 255LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = -2384;
	uint16_t x415 = UINT16_MAX;
	uint16_t x416 = UINT16_MAX;
	static int32_t t98 = -200927;

	t98 = ((x413+(x414<x415))|x416);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = -1;
	uint32_t x418 = 8803228U;
	volatile int32_t x419 = INT32_MIN;
	static uint16_t x420 = 2U;
	int32_t t99 = -4017;

	t99 = ((x417+(x418<x419))|x420);

	if (t99 != 2) { NG(); } else { ; }
	
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


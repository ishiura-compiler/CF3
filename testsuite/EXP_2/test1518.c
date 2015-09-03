#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 71542659468LLU;
int8_t x9 = -1;
uint32_t x12 = 155984155U;
static int64_t x14 = INT64_MIN;
int32_t t3 = 712;
static uint8_t x23 = UINT8_MAX;
uint64_t x25 = UINT64_MAX;
volatile int16_t x26 = INT16_MIN;
static uint32_t x29 = 14U;
volatile uint64_t x40 = 1441LLU;
int16_t x49 = INT16_MAX;
volatile int32_t x52 = INT32_MAX;
int8_t x55 = INT8_MIN;
uint64_t x56 = 18239703482867LLU;
uint32_t x65 = UINT32_MAX;
static int32_t t16 = 47990712;
static int64_t x69 = -1LL;
int32_t x73 = -1;
static int8_t x75 = -8;
int32_t x79 = -1;
static int32_t x81 = -255639142;
int32_t x84 = INT32_MIN;
int32_t x87 = INT32_MIN;
uint64_t x88 = 8065497414574LLU;
static int64_t x90 = -1LL;
int32_t x95 = -65365234;
volatile int32_t t23 = 2823864;
volatile int32_t t25 = 3;
int64_t x107 = -5511380586319LL;
int8_t x112 = 22;
static volatile uint8_t x115 = 11U;
int64_t x119 = 2992296740199743LL;
static int32_t t30 = 859;
uint16_t x129 = 1U;
static uint64_t x132 = UINT64_MAX;
volatile int64_t x135 = -1LL;
volatile int16_t x136 = 105;
int32_t t33 = 3282;
uint16_t x138 = UINT16_MAX;
static uint64_t x147 = 5LLU;
int16_t x154 = INT16_MAX;
static int32_t t38 = -7;
static int8_t x159 = INT8_MAX;
volatile int32_t t39 = -754085;
int32_t x166 = 0;
int32_t t41 = 99707304;
uint16_t x170 = 318U;
uint32_t x179 = 383071530U;
static uint32_t x185 = 29U;
volatile int16_t x188 = INT16_MAX;
int32_t x189 = INT32_MIN;
static uint32_t x195 = 1192224945U;
uint64_t x196 = UINT64_MAX;
static int8_t x205 = INT8_MAX;
int8_t x210 = INT8_MIN;
uint8_t x212 = 62U;
static volatile int32_t x216 = INT32_MIN;
volatile int64_t x219 = INT64_MIN;
volatile int8_t x220 = INT8_MIN;
volatile int32_t t54 = 10138;
int32_t t56 = -709849128;
volatile uint64_t x237 = 2880784929190052364LLU;
volatile uint8_t x247 = 32U;
int16_t x248 = 5;
volatile int32_t t62 = -7;
static int32_t x260 = 171094;
static int8_t x264 = 10;
int8_t x265 = -1;
uint8_t x266 = UINT8_MAX;
static int64_t x268 = -1LL;
uint64_t x270 = 319804620019640554LLU;
int32_t t67 = -308697585;
int32_t x273 = INT32_MIN;
static volatile uint8_t x274 = UINT8_MAX;
static uint32_t x281 = UINT32_MAX;
int32_t x287 = INT32_MIN;
static int16_t x294 = INT16_MIN;
uint8_t x297 = 3U;
uint16_t x299 = 1U;
int32_t x305 = INT32_MAX;
int32_t x307 = -3;
volatile int32_t t77 = -34009;
static int32_t x326 = INT32_MIN;
static int32_t t85 = 3851288;
volatile uint8_t x355 = 3U;
volatile uint8_t x360 = 0U;
static uint8_t x362 = 3U;
static uint8_t x363 = 6U;
volatile int32_t t90 = 58296;
int16_t x367 = INT16_MAX;
int32_t t91 = 287545730;
int64_t x376 = 3161399861646LL;
volatile int64_t x377 = -1LL;
int8_t x379 = -1;
int64_t x384 = 530450358LL;
uint8_t x385 = UINT8_MAX;
int16_t x386 = -1;
int32_t t96 = -3;
static int8_t x390 = -1;
int32_t t97 = -3641100;
int64_t x398 = -42229733LL;
uint16_t x400 = UINT16_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	volatile int32_t x2 = INT32_MIN;
	int8_t x3 = -10;
	static int16_t x4 = -84;
	int32_t t0 = -450293216;

	t0 = ((x1^(x2<x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	uint64_t x7 = UINT64_MAX;
	volatile uint32_t x8 = UINT32_MAX;
	int32_t t1 = -244657;

	t1 = ((x5^(x6<x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x10 = INT16_MIN;
	volatile uint32_t x11 = UINT32_MAX;
	int32_t t2 = 711390;

	t2 = ((x9^(x10<x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MAX;
	int8_t x15 = -2;
	uint16_t x16 = UINT16_MAX;

	t3 = ((x13^(x14<x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 40U;
	uint8_t x18 = 38U;
	volatile int32_t x19 = INT32_MAX;
	int16_t x20 = INT16_MAX;
	static volatile int32_t t4 = 0;

	t4 = ((x17^(x18<x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int8_t x22 = INT8_MAX;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = 323;

	t5 = ((x21^(x22<x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x27 = INT16_MIN;
	static int16_t x28 = INT16_MIN;
	int32_t t6 = 32118;

	t6 = ((x25^(x26<x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	static volatile int64_t x31 = 11LL;
	uint8_t x32 = UINT8_MAX;
	static int32_t t7 = 0;

	t7 = ((x29^(x30<x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 5776820229344560630LLU;
	int32_t x34 = INT32_MAX;
	int16_t x35 = 14653;
	static uint16_t x36 = 6636U;
	int32_t t8 = 8277;

	t8 = ((x33^(x34<x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x37 = UINT32_MAX;
	static int16_t x38 = -1;
	uint64_t x39 = 173592865707283553LLU;
	volatile int32_t t9 = -127;

	t9 = ((x37^(x38<x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int32_t x42 = INT32_MAX;
	uint16_t x43 = 2U;
	volatile uint64_t x44 = 470000478744LLU;
	int32_t t10 = -9633580;

	t10 = ((x41^(x42<x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	static int32_t x46 = 300462442;
	static volatile int64_t x47 = -30978303027684LL;
	uint32_t x48 = UINT32_MAX;
	int32_t t11 = -28546;

	t11 = ((x45^(x46<x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x50 = UINT32_MAX;
	int16_t x51 = -1;
	int32_t t12 = 22493;

	t12 = ((x49^(x50<x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -2;
	static int16_t x54 = INT16_MIN;
	volatile int32_t t13 = 89528805;

	t13 = ((x53^(x54<x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int32_t x58 = INT32_MIN;
	int32_t x59 = -59437892;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = -7687;

	t14 = ((x57^(x58<x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x61 = 31346852225LLU;
	uint64_t x62 = 2819378863147LLU;
	int8_t x63 = INT8_MIN;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 468379482;

	t15 = ((x61^(x62<x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x66 = INT16_MAX;
	int64_t x67 = -1LL;
	int8_t x68 = INT8_MIN;

	t16 = ((x65^(x66<x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x70 = UINT16_MAX;
	uint64_t x71 = UINT64_MAX;
	volatile uint64_t x72 = 5018975LLU;
	int32_t t17 = -19;

	t17 = ((x69^(x70<x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = UINT64_MAX;
	volatile int16_t x76 = INT16_MIN;
	static int32_t t18 = 15;

	t18 = ((x73^(x74<x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	uint16_t x78 = 7U;
	uint8_t x80 = 9U;
	static int32_t t19 = 0;

	t19 = ((x77^(x78<x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x82 = UINT8_MAX;
	int32_t x83 = 7358;
	static volatile int32_t t20 = -32619875;

	t20 = ((x81^(x82<x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int64_t x86 = -1LL;
	volatile int32_t t21 = -12;

	t21 = ((x85^(x86<x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	static int64_t x91 = INT64_MAX;
	volatile uint32_t x92 = 1U;
	volatile int32_t t22 = 468;

	t22 = ((x89^(x90<x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = UINT64_MAX;
	volatile int8_t x94 = INT8_MIN;
	int16_t x96 = 1;

	t23 = ((x93^(x94<x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = 126731772U;
	int8_t x98 = INT8_MAX;
	int8_t x99 = INT8_MAX;
	uint32_t x100 = UINT32_MAX;
	volatile int32_t t24 = -308;

	t24 = ((x97^(x98<x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	uint64_t x102 = 2LLU;
	volatile int32_t x103 = 149926;
	volatile int32_t x104 = 7324177;

	t25 = ((x101^(x102<x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 88U;
	static int16_t x106 = INT16_MIN;
	int64_t x108 = INT64_MIN;
	int32_t t26 = -1810;

	t26 = ((x105^(x106<x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -205636408843355747LL;
	static volatile uint32_t x110 = 115U;
	static int8_t x111 = INT8_MIN;
	int32_t t27 = -5;

	t27 = ((x109^(x110<x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 6922180LLU;
	int64_t x114 = -1656948LL;
	static int64_t x116 = -250339417325902016LL;
	int32_t t28 = 3;

	t28 = ((x113^(x114<x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -883697;
	static uint16_t x118 = 63U;
	static int32_t x120 = -1;
	int32_t t29 = -766094;

	t29 = ((x117^(x118<x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 1U;
	uint16_t x122 = 0U;
	int64_t x123 = 41153LL;
	int16_t x124 = -1;

	t30 = ((x121^(x122<x123))<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	uint16_t x126 = UINT16_MAX;
	static int16_t x127 = -2786;
	int32_t x128 = INT32_MAX;
	static volatile int32_t t31 = 221123165;

	t31 = ((x125^(x126<x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x130 = INT8_MIN;
	uint16_t x131 = UINT16_MAX;
	static int32_t t32 = 23459;

	t32 = ((x129^(x130<x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int8_t x134 = 6;

	t33 = ((x133^(x134<x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = UINT8_MAX;
	uint32_t x139 = 37U;
	volatile uint64_t x140 = UINT64_MAX;
	static volatile int32_t t34 = 17848863;

	t34 = ((x137^(x138<x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x141 = 1125888524U;
	int16_t x142 = 5;
	static int32_t x143 = -1;
	uint8_t x144 = UINT8_MAX;
	static int32_t t35 = -634817734;

	t35 = ((x141^(x142<x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x145 = INT16_MAX;
	static volatile int32_t x146 = INT32_MAX;
	int32_t x148 = -3127041;
	int32_t t36 = 135;

	t36 = ((x145^(x146<x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x149 = INT32_MIN;
	int32_t x150 = 0;
	volatile int8_t x151 = INT8_MIN;
	static uint16_t x152 = 907U;
	int32_t t37 = 19188625;

	t37 = ((x149^(x150<x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MAX;
	static uint32_t x155 = 6103394U;
	static volatile int32_t x156 = -1;

	t38 = ((x153^(x154<x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	static uint8_t x158 = 2U;
	volatile uint32_t x160 = 160U;

	t39 = ((x157^(x158<x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 0;
	int8_t x162 = 7;
	int32_t x163 = -115;
	volatile int64_t x164 = INT64_MIN;
	int32_t t40 = -2493231;

	t40 = ((x161^(x162<x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	uint8_t x167 = UINT8_MAX;
	volatile int8_t x168 = -1;

	t41 = ((x165^(x166<x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = UINT16_MAX;
	uint8_t x171 = 58U;
	int64_t x172 = INT64_MAX;
	volatile int32_t t42 = -4209199;

	t42 = ((x169^(x170<x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 21427U;
	int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MAX;
	int16_t x176 = -1;
	volatile int32_t t43 = 2137;

	t43 = ((x173^(x174<x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = UINT32_MAX;
	int32_t x178 = INT32_MIN;
	int64_t x180 = -1LL;
	int32_t t44 = -32002465;

	t44 = ((x177^(x178<x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	uint64_t x182 = 218210813990LLU;
	int32_t x183 = INT32_MIN;
	static int16_t x184 = INT16_MIN;
	int32_t t45 = -1;

	t45 = ((x181^(x182<x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x186 = 27575U;
	int32_t x187 = 155;
	volatile int32_t t46 = -531606910;

	t46 = ((x185^(x186<x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x190 = UINT16_MAX;
	volatile int8_t x191 = 0;
	static int32_t x192 = INT32_MIN;
	int32_t t47 = -10058;

	t47 = ((x189^(x190<x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	uint16_t x194 = 3955U;
	int32_t t48 = -7761003;

	t48 = ((x193^(x194<x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 182U;
	static volatile int8_t x198 = INT8_MAX;
	volatile int64_t x199 = INT64_MIN;
	uint32_t x200 = UINT32_MAX;
	static volatile int32_t t49 = 6;

	t49 = ((x197^(x198<x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	int32_t x202 = -1;
	volatile uint16_t x203 = 1328U;
	int32_t x204 = -1;
	static int32_t t50 = 8;

	t50 = ((x201^(x202<x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -1;
	int8_t x207 = INT8_MIN;
	uint16_t x208 = 190U;
	int32_t t51 = -2185;

	t51 = ((x205^(x206<x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 1242997154481LLU;
	uint64_t x211 = UINT64_MAX;
	volatile int32_t t52 = 2490;

	t52 = ((x209^(x210<x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = INT8_MAX;
	int32_t x214 = -1;
	int8_t x215 = -1;
	static int32_t t53 = -1190876;

	t53 = ((x213^(x214<x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static uint32_t x218 = 3981U;

	t54 = ((x217^(x218<x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 97202323720LLU;
	volatile int32_t x222 = -979;
	uint32_t x223 = 401U;
	int8_t x224 = -11;
	volatile int32_t t55 = -89729001;

	t55 = ((x221^(x222<x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x225 = UINT64_MAX;
	uint64_t x226 = 4647343542LLU;
	int64_t x227 = INT64_MAX;
	int64_t x228 = -1LL;

	t56 = ((x225^(x226<x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = 1000022U;
	int8_t x230 = INT8_MIN;
	int32_t x231 = -1;
	static uint16_t x232 = 38U;
	volatile int32_t t57 = 875774395;

	t57 = ((x229^(x230<x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 53U;
	volatile int16_t x234 = -345;
	volatile int32_t x235 = INT32_MIN;
	int32_t x236 = INT32_MIN;
	static int32_t t58 = -9437334;

	t58 = ((x233^(x234<x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x238 = -1;
	static int8_t x239 = INT8_MAX;
	int8_t x240 = INT8_MIN;
	int32_t t59 = 225171030;

	t59 = ((x237^(x238<x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 7185;
	int64_t x242 = -1402107LL;
	static volatile int64_t x243 = -1LL;
	int16_t x244 = INT16_MIN;
	int32_t t60 = -374029;

	t60 = ((x241^(x242<x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 5336884;
	int16_t x246 = -1;
	int32_t t61 = -49;

	t61 = ((x245^(x246<x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	static int8_t x250 = INT8_MIN;
	static uint32_t x251 = 831938U;
	int16_t x252 = INT16_MIN;

	t62 = ((x249^(x250<x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = 1;
	uint32_t x254 = 1434870243U;
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = -1;
	int32_t t63 = 20937442;

	t63 = ((x253^(x254<x255))<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	volatile int8_t x258 = 11;
	volatile uint16_t x259 = 1329U;
	int32_t t64 = 2;

	t64 = ((x257^(x258<x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x261 = INT32_MIN;
	uint8_t x262 = 49U;
	int32_t x263 = INT32_MAX;
	volatile int32_t t65 = -205;

	t65 = ((x261^(x262<x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x267 = INT16_MAX;
	int32_t t66 = -169234055;

	t66 = ((x265^(x266<x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	static uint32_t x271 = 1673183U;
	int16_t x272 = 939;

	t67 = ((x269^(x270<x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x275 = INT64_MIN;
	uint64_t x276 = UINT64_MAX;
	int32_t t68 = -1;

	t68 = ((x273^(x274<x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MIN;
	uint32_t x279 = 14623584U;
	int8_t x280 = 0;
	volatile int32_t t69 = 469186;

	t69 = ((x277^(x278<x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x282 = 4331;
	static int16_t x283 = INT16_MIN;
	static int64_t x284 = INT64_MIN;
	int32_t t70 = 63;

	t70 = ((x281^(x282<x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int32_t x286 = -464556304;
	uint8_t x288 = 18U;
	int32_t t71 = 0;

	t71 = ((x285^(x286<x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	uint8_t x290 = 3U;
	int8_t x291 = INT8_MIN;
	int64_t x292 = 2971330LL;
	volatile int32_t t72 = -89093;

	t72 = ((x289^(x290<x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = -5;
	int8_t x295 = -1;
	volatile int16_t x296 = 449;
	static int32_t t73 = -24;

	t73 = ((x293^(x294<x295))<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = -33LL;
	int16_t x300 = INT16_MAX;
	int32_t t74 = 284023455;

	t74 = ((x297^(x298<x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MIN;
	int32_t x303 = INT32_MIN;
	uint16_t x304 = 1U;
	static volatile int32_t t75 = -7302963;

	t75 = ((x301^(x302<x303))<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x306 = INT64_MIN;
	volatile int32_t x308 = -84;
	static volatile int32_t t76 = -976;

	t76 = ((x305^(x306<x307))<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	static uint16_t x310 = UINT16_MAX;
	int64_t x311 = 1959320739980668LL;
	int32_t x312 = -1;

	t77 = ((x309^(x310<x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = INT64_MIN;
	static int64_t x314 = INT64_MIN;
	int32_t x315 = -1;
	int32_t x316 = INT32_MIN;
	int32_t t78 = -122504;

	t78 = ((x313^(x314<x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	int64_t x318 = -1LL;
	int32_t x319 = -14;
	int16_t x320 = -1;
	static int32_t t79 = 29;

	t79 = ((x317^(x318<x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	uint8_t x322 = UINT8_MAX;
	static uint16_t x323 = 26598U;
	int16_t x324 = INT16_MAX;
	volatile int32_t t80 = 3892263;

	t80 = ((x321^(x322<x323))<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MIN;
	volatile int16_t x327 = INT16_MAX;
	int16_t x328 = -1;
	volatile int32_t t81 = -931821702;

	t81 = ((x325^(x326<x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = INT8_MIN;
	int64_t x330 = INT64_MIN;
	int16_t x331 = -1;
	int64_t x332 = -6LL;
	int32_t t82 = 126518;

	t82 = ((x329^(x330<x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	uint64_t x334 = UINT64_MAX;
	static volatile uint32_t x335 = UINT32_MAX;
	uint32_t x336 = UINT32_MAX;
	int32_t t83 = -214;

	t83 = ((x333^(x334<x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = INT16_MAX;
	uint32_t x339 = UINT32_MAX;
	static int32_t x340 = 125065125;
	static volatile int32_t t84 = 4680641;

	t84 = ((x337^(x338<x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = -1LL;
	int8_t x343 = -1;
	static uint64_t x344 = 38844449359412LLU;

	t85 = ((x341^(x342<x343))<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 121;
	uint8_t x346 = UINT8_MAX;
	int64_t x347 = 1604LL;
	uint16_t x348 = 7573U;
	static int32_t t86 = 670676276;

	t86 = ((x345^(x346<x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 1272;
	int32_t x350 = -1;
	int8_t x351 = -1;
	volatile int64_t x352 = INT64_MIN;
	volatile int32_t t87 = -8839;

	t87 = ((x349^(x350<x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 315495530U;
	int32_t x354 = INT32_MAX;
	int32_t x356 = -1;
	volatile int32_t t88 = -635;

	t88 = ((x353^(x354<x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int8_t x358 = INT8_MIN;
	volatile int16_t x359 = -1;
	static volatile int32_t t89 = -19252;

	t89 = ((x357^(x358<x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x361 = 37LLU;
	int16_t x364 = -1;

	t90 = ((x361^(x362<x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	static int16_t x366 = -1;
	volatile int8_t x368 = -1;

	t91 = ((x365^(x366<x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	uint8_t x370 = 2U;
	int32_t x371 = -1;
	int16_t x372 = INT16_MAX;
	int32_t t92 = -37;

	t92 = ((x369^(x370<x371))<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	static uint8_t x374 = UINT8_MAX;
	static volatile int32_t x375 = -76;
	volatile int32_t t93 = 518042;

	t93 = ((x373^(x374<x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MIN;
	static uint64_t x380 = UINT64_MAX;
	volatile int32_t t94 = 28668827;

	t94 = ((x377^(x378<x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 2090494707U;
	volatile int64_t x382 = INT64_MIN;
	uint8_t x383 = 52U;
	int32_t t95 = -3116402;

	t95 = ((x381^(x382<x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x387 = -2271907;
	uint64_t x388 = UINT64_MAX;

	t96 = ((x385^(x386<x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	int32_t x391 = INT32_MAX;
	uint32_t x392 = 1222U;

	t97 = ((x389^(x390<x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x393 = 185;
	uint8_t x394 = 21U;
	static uint64_t x395 = UINT64_MAX;
	int8_t x396 = INT8_MAX;
	int32_t t98 = -6;

	t98 = ((x393^(x394<x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 32U;
	uint8_t x399 = UINT8_MAX;
	volatile int32_t t99 = 70;

	t99 = ((x397^(x398<x399))<=x400);

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


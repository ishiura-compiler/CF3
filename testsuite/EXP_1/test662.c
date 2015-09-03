#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
volatile uint32_t t1 = 341408U;
static volatile int8_t x20 = INT8_MIN;
uint32_t x21 = 12U;
uint32_t x24 = 0U;
volatile int16_t x32 = INT16_MAX;
volatile int8_t x35 = INT8_MAX;
int8_t x38 = 1;
volatile int64_t t10 = 4504561737526LL;
uint8_t x46 = 10U;
int64_t t11 = INT64_MAX;
uint8_t x54 = 3U;
int8_t x58 = -1;
volatile uint64_t t13 = UINT64_MAX;
uint16_t x62 = 29034U;
static uint32_t x80 = 940977U;
int32_t x82 = INT32_MIN;
int16_t x86 = -1;
int8_t x88 = INT8_MIN;
static int16_t x91 = INT16_MIN;
int16_t x93 = INT16_MIN;
volatile int32_t t22 = 3450865;
static volatile uint32_t t23 = 20071327U;
int8_t x103 = INT8_MAX;
static uint8_t x104 = 5U;
uint32_t t24 = 53984U;
int16_t x109 = 3;
int8_t x110 = -4;
int32_t t25 = 9143215;
int32_t x115 = INT32_MAX;
uint64_t x133 = UINT64_MAX;
uint8_t x135 = 79U;
static volatile int32_t x139 = INT32_MAX;
static uint32_t t32 = 0U;
uint8_t x146 = 29U;
uint32_t x147 = UINT32_MAX;
volatile uint64_t t35 = 7440346LLU;
int8_t x154 = -2;
volatile int8_t x157 = -1;
int16_t x161 = -1;
static volatile uint64_t x163 = 8LLU;
static volatile uint64_t t38 = 873LLU;
volatile int64_t t41 = 447535354LL;
int16_t x177 = 238;
uint64_t x185 = UINT64_MAX;
int32_t x192 = INT32_MIN;
int32_t x195 = INT32_MIN;
int32_t t46 = 14155500;
uint32_t x200 = 6U;
int64_t x204 = INT64_MIN;
int64_t t48 = -5364845787LL;
int64_t x215 = INT64_MIN;
uint64_t x233 = 5849LLU;
static int64_t x234 = -1LL;
static volatile uint32_t t56 = UINT32_MAX;
int32_t x243 = INT32_MAX;
uint8_t x253 = UINT8_MAX;
int64_t x256 = INT64_MAX;
volatile int64_t t59 = 1795195LL;
int8_t x257 = -5;
int32_t x260 = -1;
static int32_t t60 = 19;
static int32_t x264 = INT32_MIN;
volatile int64_t t61 = 1991LL;
static int64_t t62 = -804028870330566432LL;
uint64_t x273 = 12906238168LLU;
static int64_t x274 = INT64_MIN;
int8_t x278 = INT8_MIN;
int64_t x280 = -34857415621165LL;
int32_t x291 = INT32_MIN;
int8_t x295 = INT8_MAX;
volatile int64_t x298 = 84292738LL;
uint16_t x316 = 6U;
uint16_t x323 = UINT16_MAX;
static uint64_t t74 = 673LLU;
uint32_t x325 = 109642U;
int32_t x326 = -1;
int8_t x331 = 1;
static volatile int32_t x333 = INT32_MIN;
int64_t x337 = -997749LL;
static int32_t x345 = INT32_MAX;
int8_t x356 = -44;
uint8_t x361 = UINT8_MAX;
int64_t t84 = 100820747181611667LL;
int16_t x367 = INT16_MIN;
int16_t x370 = INT16_MAX;
volatile uint32_t t86 = 789U;
int32_t x383 = 2954;
uint64_t t89 = 9514610LLU;
static int8_t x387 = INT8_MIN;
int16_t x389 = INT16_MAX;
uint16_t x391 = 1U;
int32_t x395 = 500377;
int32_t t93 = 246205;
static uint32_t x411 = 732238U;
volatile uint32_t t95 = 5U;
uint8_t x413 = 2U;
volatile uint32_t t96 = UINT32_MAX;
int8_t x418 = -53;
uint64_t x419 = UINT64_MAX;
int32_t x422 = -1;
volatile int32_t t99 = -11358415;


void f0(void) {
	uint8_t x1 = 11U;
	uint32_t x2 = UINT32_MAX;
	int16_t x3 = INT16_MIN;
	uint8_t x4 = 122U;
	uint32_t t0 = 0U;

	t0 = (((x1/x2)|x3)|x4);

	if (t0 != 4294934650U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 17U;
	uint32_t x7 = 92675218U;
	uint8_t x8 = UINT8_MAX;

	t1 = (((x5/x6)|x7)|x8);

	if (t1 != 4294966527U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint16_t x10 = 2U;
	int16_t x11 = INT16_MIN;
	volatile uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (((x9/x10)|x11)|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 12U;
	int64_t x14 = INT64_MIN;
	static uint8_t x15 = 1U;
	int8_t x16 = INT8_MIN;
	int64_t t3 = -383LL;

	t3 = (((x13/x14)|x15)|x16);

	if (t3 != -127LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	uint32_t x18 = 3164832U;
	static uint32_t x19 = 1054007825U;
	volatile uint32_t t4 = 20U;

	t4 = (((x17/x18)|x19)|x20);

	if (t4 != 4294967185U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MIN;
	uint16_t x23 = UINT16_MAX;
	volatile uint32_t t5 = 690767970U;

	t5 = (((x21/x22)|x23)|x24);

	if (t5 != 65535U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -886803;
	volatile int64_t x26 = -619LL;
	uint16_t x27 = 66U;
	int64_t x28 = 401799LL;
	static int64_t t6 = 2399898687LL;

	t6 = (((x25/x26)|x27)|x28);

	if (t6 != 402911LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	static int8_t x30 = 33;
	static int16_t x31 = INT16_MIN;
	static volatile int32_t t7 = -84;

	t7 = (((x29/x30)|x31)|x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int16_t x34 = INT16_MIN;
	int32_t x36 = INT32_MAX;
	volatile int32_t t8 = 40955;

	t8 = (((x33/x34)|x35)|x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile int16_t x39 = INT16_MAX;
	volatile int8_t x40 = -40;
	volatile int32_t t9 = 123;

	t9 = (((x37/x38)|x39)|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	volatile uint32_t x42 = UINT32_MAX;
	uint16_t x43 = UINT16_MAX;
	int64_t x44 = -1LL;

	t10 = (((x41/x42)|x43)|x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	int64_t x47 = INT64_MAX;
	int16_t x48 = 7;

	t11 = (((x45/x46)|x47)|x48);

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 7U;
	uint8_t x55 = 45U;
	int16_t x56 = 401;
	static volatile uint32_t t12 = 25390U;

	t12 = (((x53/x54)|x55)|x56);

	if (t12 != 447U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 1;
	uint8_t x59 = UINT8_MAX;
	uint64_t x60 = 187914858554LLU;

	t13 = (((x57/x58)|x59)|x60);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	static uint8_t x63 = UINT8_MAX;
	uint8_t x64 = 19U;
	volatile int32_t t14 = -15099;

	t14 = (((x61/x62)|x63)|x64);

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	static int8_t x66 = -1;
	uint8_t x67 = 5U;
	uint8_t x68 = UINT8_MAX;
	int32_t t15 = 0;

	t15 = (((x65/x66)|x67)|x68);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	volatile int32_t x70 = INT32_MIN;
	int32_t x71 = -1;
	static int64_t x72 = INT64_MAX;
	int64_t t16 = 1505471414313119LL;

	t16 = (((x69/x70)|x71)|x72);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x73 = 331007485043938283LLU;
	int64_t x74 = INT64_MIN;
	volatile int16_t x75 = 62;
	volatile uint16_t x76 = 3650U;
	uint64_t t17 = 86372625198584LLU;

	t17 = (((x73/x74)|x75)|x76);

	if (t17 != 3710LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MAX;
	int32_t x79 = -3528205;
	uint32_t t18 = 972853U;

	t18 = (((x77/x78)|x79)|x80);

	if (t18 != 4291722227U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 3U;
	static int16_t x83 = 1967;
	static int8_t x84 = INT8_MAX;
	volatile int32_t t19 = 352947959;

	t19 = (((x81/x82)|x83)|x84);

	if (t19 != 2047) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	int32_t x87 = 19565;
	int32_t t20 = 74;

	t20 = (((x85/x86)|x87)|x88);

	if (t20 != -19) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -1LL;
	uint64_t x90 = 16999984047356847LLU;
	uint8_t x92 = 99U;
	volatile uint64_t t21 = 4031637407989122023LLU;

	t21 = (((x89/x90)|x91)|x92);

	if (t21 != 18446744073709519999LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = -141;
	int8_t x95 = INT8_MIN;
	int8_t x96 = 0;

	t22 = (((x93/x94)|x95)|x96);

	if (t22 != -24) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x97 = UINT32_MAX;
	uint32_t x98 = 68201U;
	int8_t x99 = INT8_MAX;
	uint16_t x100 = 3U;

	t23 = (((x97/x98)|x99)|x100);

	if (t23 != 62975U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x101 = -1;
	uint32_t x102 = 3226U;

	t24 = (((x101/x102)|x103)|x104);

	if (t24 != 1331455U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x111 = 0;
	static int16_t x112 = -14;

	t25 = (((x109/x110)|x111)|x112);

	if (t25 != -14) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -74315524893264341LL;
	int16_t x114 = 216;
	int8_t x116 = INT8_MIN;
	volatile int64_t t26 = -9911030364442099LL;

	t26 = (((x113/x114)|x115)|x116);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -3;
	int32_t x118 = INT32_MAX;
	uint16_t x119 = 1U;
	static int32_t x120 = INT32_MIN;
	volatile int32_t t27 = 42719600;

	t27 = (((x117/x118)|x119)|x120);

	if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MIN;
	static int8_t x122 = INT8_MIN;
	static uint64_t x123 = 5902355LLU;
	int64_t x124 = 1LL;
	volatile uint64_t t28 = 759482869198LLU;

	t28 = (((x121/x122)|x123)|x124);

	if (t28 != 5902355LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x125 = INT8_MAX;
	uint64_t x126 = 426634348368795LLU;
	int32_t x127 = -1;
	volatile int64_t x128 = INT64_MIN;
	uint64_t t29 = UINT64_MAX;

	t29 = (((x125/x126)|x127)|x128);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MIN;
	uint8_t x130 = UINT8_MAX;
	volatile uint32_t x131 = 30273U;
	volatile uint32_t x132 = 2375884U;
	static volatile int64_t t30 = -8106567250570200LL;

	t30 = (((x129/x130)|x131)|x132);

	if (t30 != -36170086419038259LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x134 = INT32_MIN;
	uint32_t x136 = UINT32_MAX;
	static volatile uint64_t t31 = 165337LLU;

	t31 = (((x133/x134)|x135)|x136);

	if (t31 != 4294967295LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 1560640U;
	int32_t x138 = INT32_MAX;
	static uint16_t x140 = 355U;

	t32 = (((x137/x138)|x139)|x140);

	if (t32 != 2147483647U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x141 = 117476806810723LL;
	int32_t x142 = INT32_MAX;
	volatile int8_t x143 = 0;
	int32_t x144 = INT32_MAX;
	int64_t t33 = -1777LL;

	t33 = (((x141/x142)|x143)|x144);

	if (t33 != 2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = 5U;
	uint8_t x148 = UINT8_MAX;
	static uint32_t t34 = UINT32_MAX;

	t34 = (((x145/x146)|x147)|x148);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = 394LLU;
	uint16_t x150 = 1245U;
	int8_t x151 = INT8_MAX;
	volatile int32_t x152 = INT32_MIN;

	t35 = (((x149/x150)|x151)|x152);

	if (t35 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = UINT16_MAX;
	int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MIN;
	int64_t t36 = -2189507581462LL;

	t36 = (((x153/x154)|x155)|x156);

	if (t36 != -32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x158 = 5U;
	static int32_t x159 = INT32_MIN;
	int8_t x160 = 0;
	volatile int32_t t37 = INT32_MIN;

	t37 = (((x157/x158)|x159)|x160);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x162 = -7;
	uint16_t x164 = 133U;

	t38 = (((x161/x162)|x163)|x164);

	if (t38 != 141LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = 13;
	int8_t x167 = INT8_MIN;
	uint8_t x168 = 10U;
	int32_t t39 = 6600653;

	t39 = (((x165/x166)|x167)|x168);

	if (t39 != -86) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 7U;
	int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MAX;
	int16_t x172 = INT16_MIN;
	int64_t t40 = 2204809622829109LL;

	t40 = (((x169/x170)|x171)|x172);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = 64282U;
	int8_t x174 = INT8_MAX;
	int64_t x175 = INT64_MIN;
	int32_t x176 = INT32_MIN;

	t41 = (((x173/x174)|x175)|x176);

	if (t41 != -2147483142LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x178 = 422U;
	int8_t x179 = INT8_MIN;
	volatile int64_t x180 = INT64_MIN;
	static int64_t t42 = -8435531401079773LL;

	t42 = (((x177/x178)|x179)|x180);

	if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x181 = 94U;
	int16_t x182 = -5948;
	static int16_t x183 = INT16_MAX;
	int32_t x184 = INT32_MIN;
	volatile int32_t t43 = -174615;

	t43 = (((x181/x182)|x183)|x184);

	if (t43 != -2147450881) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x186 = -1;
	static int64_t x187 = INT64_MIN;
	int16_t x188 = INT16_MIN;
	volatile uint64_t t44 = 11330567148420LLU;

	t44 = (((x185/x186)|x187)|x188);

	if (t44 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x189 = -109785711;
	uint32_t x190 = 18U;
	static uint8_t x191 = UINT8_MAX;
	volatile uint32_t t45 = 14764U;

	t45 = (((x189/x190)|x191)|x192);

	if (t45 != 2379993855U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = 10873;
	int16_t x194 = -1;
	int8_t x196 = 1;

	t46 = (((x193/x194)|x195)|x196);

	if (t46 != -10873) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = -2995249;
	uint16_t x198 = UINT16_MAX;
	int8_t x199 = -6;
	uint32_t t47 = UINT32_MAX;

	t47 = (((x197/x198)|x199)|x200);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MAX;
	static int8_t x202 = INT8_MIN;
	volatile uint32_t x203 = 410U;

	t48 = (((x201/x202)|x203)|x204);

	if (t48 != -9223372032559808613LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MIN;
	int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MAX;
	static int8_t x208 = 2;
	volatile int32_t t49 = -57819;

	t49 = (((x205/x206)|x207)|x208);

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -32;
	int64_t x210 = INT64_MIN;
	int64_t x211 = 709LL;
	uint64_t x212 = 59725212224809LLU;
	volatile uint64_t t50 = 1288772LLU;

	t50 = (((x209/x210)|x211)|x212);

	if (t50 != 59725212225517LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x213 = UINT32_MAX;
	static int16_t x214 = -3;
	int32_t x216 = -1;
	volatile int64_t t51 = -1LL;

	t51 = (((x213/x214)|x215)|x216);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = UINT64_MAX;
	int8_t x222 = -10;
	uint8_t x223 = 13U;
	int64_t x224 = INT64_MIN;
	static volatile uint64_t t52 = 12758522168569501LLU;

	t52 = (((x221/x222)|x223)|x224);

	if (t52 != 9223372036854775821LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = 9U;
	static uint16_t x226 = 170U;
	uint32_t x227 = 927746U;
	int16_t x228 = 1256;
	volatile uint32_t t53 = 19230200U;

	t53 = (((x225/x226)|x227)|x228);

	if (t53 != 929002U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = UINT8_MAX;
	int64_t x230 = INT64_MAX;
	int32_t x231 = -89;
	static uint32_t x232 = 26U;
	int64_t t54 = -5LL;

	t54 = (((x229/x230)|x231)|x232);

	if (t54 != -65LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x235 = -2165819965LL;
	volatile int8_t x236 = -1;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (((x233/x234)|x235)|x236);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = 2U;
	uint8_t x238 = 26U;
	int8_t x239 = -1;
	int16_t x240 = INT16_MAX;

	t56 = (((x237/x238)|x239)|x240);

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = -1;
	volatile int64_t x242 = -5953LL;
	volatile uint32_t x244 = UINT32_MAX;
	int64_t t57 = 47739LL;

	t57 = (((x241/x242)|x243)|x244);

	if (t57 != 4294967295LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x245 = INT8_MAX;
	static uint16_t x246 = 8191U;
	static int32_t x247 = 15620792;
	int16_t x248 = -1;
	static int32_t t58 = 0;

	t58 = (((x245/x246)|x247)|x248);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x254 = 12U;
	volatile int32_t x255 = INT32_MIN;

	t59 = (((x253/x254)|x255)|x256);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x258 = -7108;
	int8_t x259 = 30;

	t60 = (((x257/x258)|x259)|x260);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = INT64_MIN;
	int32_t x262 = -24421961;
	volatile int32_t x263 = -1;

	t61 = (((x261/x262)|x263)|x264);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = INT8_MIN;
	int64_t x266 = INT64_MAX;
	static uint8_t x267 = 0U;
	int32_t x268 = 722;

	t62 = (((x265/x266)|x267)|x268);

	if (t62 != 722LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = -1;
	int16_t x270 = INT16_MAX;
	volatile int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t63 = 933795485;

	t63 = (((x269/x270)|x271)|x272);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x275 = 2U;
	int8_t x276 = -7;
	volatile uint64_t t64 = 409LLU;

	t64 = (((x273/x274)|x275)|x276);

	if (t64 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x277 = INT16_MIN;
	int8_t x279 = -1;
	volatile int64_t t65 = 1LL;

	t65 = (((x277/x278)|x279)|x280);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x281 = INT64_MIN;
	uint32_t x282 = 20666U;
	int8_t x283 = -1;
	static int32_t x284 = -1141;
	volatile int64_t t66 = -3439204923996LL;

	t66 = (((x281/x282)|x283)|x284);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x285 = INT16_MAX;
	int32_t x286 = INT32_MIN;
	volatile int8_t x287 = INT8_MIN;
	static int32_t x288 = 3;
	volatile int32_t t67 = -504079;

	t67 = (((x285/x286)|x287)|x288);

	if (t67 != -125) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MIN;
	static int32_t x290 = INT32_MIN;
	uint16_t x292 = UINT16_MAX;
	int32_t t68 = 0;

	t68 = (((x289/x290)|x291)|x292);

	if (t68 != -2147418113) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = INT16_MAX;
	volatile int8_t x294 = INT8_MAX;
	uint16_t x296 = 19U;
	static volatile int32_t t69 = -4;

	t69 = (((x293/x294)|x295)|x296);

	if (t69 != 383) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x297 = -47;
	uint32_t x299 = UINT32_MAX;
	int64_t x300 = -1LL;
	volatile int64_t t70 = 218391692866197LL;

	t70 = (((x297/x298)|x299)|x300);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MIN;
	uint64_t x303 = UINT64_MAX;
	static int64_t x304 = INT64_MIN;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (((x301/x302)|x303)|x304);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x309 = -1;
	int32_t x310 = INT32_MAX;
	int32_t x311 = INT32_MAX;
	int16_t x312 = 1;
	int32_t t72 = INT32_MAX;

	t72 = (((x309/x310)|x311)|x312);

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x313 = INT8_MIN;
	int16_t x314 = -1;
	volatile int16_t x315 = -1;
	volatile int32_t t73 = 16036;

	t73 = (((x313/x314)|x315)|x316);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x321 = 6041005344LLU;
	int32_t x322 = 32;
	uint16_t x324 = 25763U;

	t74 = (((x321/x322)|x323)|x324);

	if (t74 != 188809215LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x327 = UINT32_MAX;
	int64_t x328 = 459112289519275LL;
	static volatile int64_t t75 = -50289618789LL;

	t75 = (((x325/x326)|x327)|x328);

	if (t75 != 459114824073215LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x329 = 5U;
	volatile int16_t x330 = 66;
	static uint16_t x332 = 101U;
	volatile int32_t t76 = -7;

	t76 = (((x329/x330)|x331)|x332);

	if (t76 != 101) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x334 = INT8_MIN;
	static uint8_t x335 = UINT8_MAX;
	int8_t x336 = -7;
	int32_t t77 = -539444578;

	t77 = (((x333/x334)|x335)|x336);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x338 = -5;
	int16_t x339 = INT16_MIN;
	static int64_t x340 = 77LL;
	static volatile int64_t t78 = 41393726LL;

	t78 = (((x337/x338)|x339)|x340);

	if (t78 != -29827LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x341 = -1;
	int8_t x342 = -4;
	int64_t x343 = 2LL;
	int16_t x344 = INT16_MIN;
	int64_t t79 = -63286555460LL;

	t79 = (((x341/x342)|x343)|x344);

	if (t79 != -32766LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x346 = -1;
	uint8_t x347 = UINT8_MAX;
	uint16_t x348 = UINT16_MAX;
	static int32_t t80 = 584467;

	t80 = (((x345/x346)|x347)|x348);

	if (t80 != -2147418113) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = -576167288345216376LL;
	uint16_t x350 = UINT16_MAX;
	uint16_t x351 = 6515U;
	int32_t x352 = -1;
	volatile int64_t t81 = 66LL;

	t81 = (((x349/x350)|x351)|x352);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x353 = UINT8_MAX;
	int64_t x354 = INT64_MIN;
	volatile uint64_t x355 = 15682590236531933LLU;
	uint64_t t82 = 442962LLU;

	t82 = (((x353/x354)|x355)|x356);

	if (t82 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x357 = 63U;
	volatile int64_t x358 = INT64_MAX;
	volatile int16_t x359 = -1;
	volatile int32_t x360 = 192;
	volatile int64_t t83 = -1291LL;

	t83 = (((x357/x358)|x359)|x360);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x362 = 123LL;
	volatile uint32_t x363 = 30157U;
	static int16_t x364 = INT16_MAX;

	t84 = (((x361/x362)|x363)|x364);

	if (t84 != 32767LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x365 = 0;
	static int32_t x366 = 1696;
	int32_t x368 = INT32_MIN;
	static int32_t t85 = -150492;

	t85 = (((x365/x366)|x367)|x368);

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x369 = UINT32_MAX;
	static int32_t x371 = 513;
	int16_t x372 = INT16_MIN;

	t86 = (((x369/x370)|x371)|x372);

	if (t86 != 4294935045U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x373 = INT32_MAX;
	static volatile int32_t x374 = -1;
	int32_t x375 = -45495248;
	static uint32_t x376 = 22U;
	uint32_t t87 = 3411U;

	t87 = (((x373/x374)|x375)|x376);

	if (t87 != 4249472055U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x377 = INT32_MIN;
	volatile int8_t x378 = INT8_MIN;
	uint8_t x379 = 3U;
	int32_t x380 = INT32_MIN;
	volatile int32_t t88 = -503960392;

	t88 = (((x377/x378)|x379)|x380);

	if (t88 != -2130706429) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x381 = 225706008563869087LLU;
	volatile int32_t x382 = -4899;
	uint16_t x384 = UINT16_MAX;

	t89 = (((x381/x382)|x383)|x384);

	if (t89 != 65535LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x385 = 375448975;
	uint8_t x386 = UINT8_MAX;
	uint8_t x388 = 8U;
	static volatile int32_t t90 = 19;

	t90 = (((x385/x386)|x387)|x388);

	if (t90 != -36) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x390 = 14U;
	static int8_t x392 = INT8_MIN;
	uint32_t t91 = 358106U;

	t91 = (((x389/x390)|x391)|x392);

	if (t91 != 4294967205U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = -85731564;
	int64_t x394 = INT64_MIN;
	static uint64_t x396 = UINT64_MAX;
	uint64_t t92 = UINT64_MAX;

	t92 = (((x393/x394)|x395)|x396);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x397 = INT32_MAX;
	uint8_t x398 = 2U;
	uint16_t x399 = 3U;
	static int8_t x400 = -1;

	t93 = (((x397/x398)|x399)|x400);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x401 = UINT16_MAX;
	volatile int32_t x402 = INT32_MAX;
	uint16_t x403 = 40U;
	uint64_t x404 = 18043159862LLU;
	uint64_t t94 = 1234195LLU;

	t94 = (((x401/x402)|x403)|x404);

	if (t94 != 18043159870LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x409 = 70415U;
	static volatile int32_t x410 = INT32_MIN;
	int8_t x412 = INT8_MIN;

	t95 = (((x409/x410)|x411)|x412);

	if (t95 != 4294967246U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x414 = -226133;
	uint32_t x415 = UINT32_MAX;
	volatile int16_t x416 = -1;

	t96 = (((x413/x414)|x415)|x416);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x417 = INT16_MIN;
	int64_t x420 = INT64_MAX;
	uint64_t t97 = UINT64_MAX;

	t97 = (((x417/x418)|x419)|x420);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = INT8_MIN;
	uint64_t x423 = UINT64_MAX;
	volatile int8_t x424 = INT8_MIN;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (((x421/x422)|x423)|x424);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x425 = 7;
	int32_t x426 = INT32_MIN;
	int8_t x427 = INT8_MAX;
	volatile int8_t x428 = INT8_MAX;

	t99 = (((x425/x426)|x427)|x428);

	if (t99 != 127) { NG(); } else { ; }
	
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


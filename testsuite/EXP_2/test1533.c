#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
static int16_t x7 = INT16_MIN;
int64_t x14 = INT64_MIN;
static uint16_t x17 = 0U;
volatile int32_t t4 = -51;
volatile int32_t x24 = 88656;
int32_t x38 = INT32_MAX;
static volatile int32_t t10 = 633105243;
int8_t x52 = -1;
volatile uint8_t x55 = 55U;
static int32_t t12 = 1014;
uint64_t t13 = 287205LLU;
static volatile uint16_t x63 = UINT16_MAX;
uint64_t x64 = 176611581820086792LLU;
static int32_t x70 = -1;
int64_t x74 = -1LL;
int8_t x77 = 3;
volatile int32_t t18 = 62322666;
static uint64_t x85 = 79886526306276LLU;
uint64_t t20 = UINT64_MAX;
static volatile uint16_t x92 = 10272U;
int32_t t22 = -240974;
volatile int8_t x107 = 2;
volatile int64_t x109 = INT64_MIN;
volatile int64_t t26 = -20270758297332LL;
volatile int64_t x115 = INT64_MAX;
static uint64_t x118 = 39LLU;
static int8_t x120 = INT8_MAX;
static int32_t x122 = INT32_MIN;
int8_t x128 = INT8_MIN;
uint16_t x137 = UINT16_MAX;
uint16_t x138 = 981U;
int32_t x142 = -1;
int8_t x143 = INT8_MIN;
volatile int32_t t34 = -65680575;
volatile int8_t x149 = INT8_MIN;
int32_t x151 = INT32_MAX;
static int32_t t35 = 792453;
uint32_t x164 = UINT32_MAX;
static int8_t x167 = -1;
uint64_t x169 = UINT64_MAX;
volatile int64_t t43 = -5945497481524LL;
static uint32_t x186 = UINT32_MAX;
volatile uint32_t x189 = 48085867U;
int8_t x190 = 1;
int16_t x191 = -2;
int16_t x195 = INT16_MIN;
static uint64_t t46 = 3LLU;
static uint32_t x201 = 6399U;
uint32_t t48 = 4U;
uint16_t x205 = 65U;
uint64_t t49 = 4097LLU;
int32_t x211 = INT32_MIN;
static int8_t x212 = INT8_MIN;
int8_t x213 = -1;
int16_t x215 = -1;
volatile int64_t t52 = -56274762258LL;
uint8_t x222 = 1U;
int32_t x224 = INT32_MAX;
uint64_t x228 = UINT64_MAX;
int16_t x231 = INT16_MIN;
uint64_t x233 = 322378523237623LLU;
int16_t x239 = 0;
static int64_t x241 = INT64_MIN;
volatile int8_t x242 = -1;
volatile int64_t t58 = -35658084084064874LL;
static volatile uint64_t t59 = UINT64_MAX;
int64_t x260 = 21413816270147025LL;
static int8_t x261 = -1;
int32_t t63 = -1123182;
static uint8_t x267 = UINT8_MAX;
volatile int64_t x271 = INT64_MIN;
volatile int64_t t66 = 461377LL;
int64_t x282 = INT64_MIN;
uint32_t x284 = 19931202U;
uint64_t t68 = 2193826163909LLU;
volatile int32_t t69 = 3786494;
static uint8_t x294 = 64U;
int8_t x296 = INT8_MIN;
int16_t x302 = 4538;
uint64_t t72 = 63266663LLU;
int32_t x306 = -1;
static int64_t x309 = 3830LL;
volatile int16_t x314 = INT16_MAX;
static uint16_t x315 = UINT16_MAX;
uint32_t x317 = 240U;
int32_t x324 = 1;
uint64_t x334 = 57654LLU;
volatile int8_t x339 = INT8_MAX;
uint64_t x340 = 1591286517250LLU;
static int16_t x341 = INT16_MIN;
uint32_t x345 = 13767246U;
static volatile uint16_t x348 = 11478U;
static volatile int64_t t84 = INT64_MIN;
volatile uint8_t x353 = 53U;
int32_t x361 = -1;
int64_t x364 = INT64_MIN;
volatile uint16_t x374 = 85U;
volatile uint16_t x375 = UINT16_MAX;
static int32_t x376 = INT32_MIN;
static volatile int16_t x382 = 34;
int8_t x384 = INT8_MIN;
int32_t x386 = INT32_MIN;
static uint16_t x390 = 27U;
int64_t x391 = -1LL;
int8_t x393 = INT8_MIN;
int16_t x398 = INT16_MIN;
int64_t x400 = INT64_MAX;
volatile int64_t t96 = INT64_MAX;
int32_t x406 = -1;
static uint16_t x413 = 2U;


void f0(void) {
	volatile uint64_t x1 = 15398000171LLU;
	int64_t x2 = INT64_MIN;
	static int32_t x3 = INT32_MAX;
	uint32_t x4 = 324042U;
	volatile uint64_t t0 = 3579282LLU;

	t0 = ((x1+(x2<=x3))|x4);

	if (t0 != 15398270958LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int64_t x8 = 1217LL;
	volatile int64_t t1 = 1098195958024LL;

	t1 = ((x5+(x6<=x7))|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	int64_t x10 = INT64_MIN;
	int16_t x11 = 5543;
	int32_t x12 = -1;
	volatile int32_t t2 = -1;

	t2 = ((x9+(x10<=x11))|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 14U;
	uint64_t x15 = UINT64_MAX;
	uint8_t x16 = 3U;
	static int32_t t3 = 5652054;

	t3 = ((x13+(x14<=x15))|x16);

	if (t3 != 15) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	int16_t x19 = INT16_MIN;
	int32_t x20 = 38988982;

	t4 = ((x17+(x18<=x19))|x20);

	if (t4 != 38988982) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 1;
	static int32_t x22 = INT32_MIN;
	static int32_t x23 = INT32_MIN;
	volatile int32_t t5 = 11;

	t5 = ((x21+(x22<=x23))|x24);

	if (t5 != 88658) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x25 = 247U;
	int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	static uint32_t x28 = UINT32_MAX;
	static uint32_t t6 = UINT32_MAX;

	t6 = ((x25+(x26<=x27))|x28);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = 1;
	volatile uint8_t x30 = 17U;
	static volatile int16_t x31 = 26;
	int8_t x32 = 0;
	int32_t t7 = 145;

	t7 = ((x29+(x30<=x31))|x32);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = UINT64_MAX;
	static int64_t x34 = INT64_MIN;
	int8_t x35 = 25;
	int32_t x36 = 18316;
	uint64_t t8 = 12564377728LLU;

	t8 = ((x33+(x34<=x35))|x36);

	if (t8 != 18316LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint8_t x39 = 24U;
	int64_t x40 = INT64_MIN;
	static int64_t t9 = -6LL;

	t9 = ((x37+(x38<=x39))|x40);

	if (t9 != -2147483648LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	static volatile uint32_t x46 = 398U;
	static uint32_t x47 = UINT32_MAX;
	uint8_t x48 = UINT8_MAX;

	t10 = ((x45+(x46<=x47))|x48);

	if (t10 != -2147483393) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int64_t x50 = INT64_MIN;
	int32_t x51 = INT32_MIN;
	uint32_t t11 = UINT32_MAX;

	t11 = ((x49+(x50<=x51))|x52);

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -2002;
	volatile uint64_t x54 = 40927217045983370LLU;
	int32_t x56 = -1;

	t12 = ((x53+(x54<=x55))|x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = 2;
	int16_t x58 = INT16_MIN;
	static volatile uint64_t x59 = 12543760LLU;
	static uint64_t x60 = 728463193LLU;

	t13 = ((x57+(x58<=x59))|x60);

	if (t13 != 728463195LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 1244U;
	static int32_t x62 = -1;
	volatile uint64_t t14 = 677542645526036LLU;

	t14 = ((x61+(x62<=x63))|x64);

	if (t14 != 176611581820088029LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x65 = UINT32_MAX;
	int64_t x66 = INT64_MIN;
	static int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MAX;
	uint32_t t15 = 1143298U;

	t15 = ((x65+(x66<=x67))|x68);

	if (t15 != 2147483647U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 146U;
	int8_t x71 = -1;
	int64_t x72 = INT64_MIN;
	int64_t t16 = 6059141116LL;

	t16 = ((x69+(x70<=x71))|x72);

	if (t16 != -9223372036854775661LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	static int16_t x75 = INT16_MAX;
	static int32_t x76 = -28294506;
	int64_t t17 = 4048669383526897962LL;

	t17 = ((x73+(x74<=x75))|x76);

	if (t17 != -28294505LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MIN;
	int8_t x80 = INT8_MIN;

	t18 = ((x77+(x78<=x79))|x80);

	if (t18 != -124) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MAX;
	int16_t x82 = 0;
	static int32_t x83 = INT32_MIN;
	int8_t x84 = -1;
	volatile int64_t t19 = -737409198052727LL;

	t19 = ((x81+(x82<=x83))|x84);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x86 = -1;
	static int8_t x87 = INT8_MIN;
	volatile int32_t x88 = -1;

	t20 = ((x85+(x86<=x87))|x88);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -1;
	volatile int8_t x90 = INT8_MAX;
	int64_t x91 = INT64_MAX;
	volatile int32_t t21 = 0;

	t21 = ((x89+(x90<=x91))|x92);

	if (t21 != 10272) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -1;
	int8_t x94 = INT8_MIN;
	int8_t x95 = -3;
	int8_t x96 = 1;

	t22 = ((x93+(x94<=x95))|x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 11U;
	volatile int64_t x98 = INT64_MIN;
	static int8_t x99 = INT8_MAX;
	volatile uint8_t x100 = 45U;
	volatile int32_t t23 = 0;

	t23 = ((x97+(x98<=x99))|x100);

	if (t23 != 45) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MAX;
	uint32_t x102 = 5006650U;
	int16_t x103 = INT16_MAX;
	uint8_t x104 = 3U;
	volatile int64_t t24 = INT64_MAX;

	t24 = ((x101+(x102<=x103))|x104);

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = 3;
	int16_t x106 = INT16_MAX;
	int64_t x108 = 41014945207524LL;
	volatile int64_t t25 = -24229LL;

	t25 = ((x105+(x106<=x107))|x108);

	if (t25 != 41014945207527LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x110 = INT64_MIN;
	int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MIN;

	t26 = ((x109+(x110<=x111))|x112);

	if (t26 != -127LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = 13071223207057353LL;
	int32_t x114 = -3899;
	int16_t x116 = INT16_MIN;
	int64_t t27 = -26LL;

	t27 = ((x113+(x114<=x115))|x116);

	if (t27 != -10294LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x117 = INT64_MIN;
	uint64_t x119 = 137209599187385LLU;
	int64_t t28 = 1012598923669374555LL;

	t28 = ((x117+(x118<=x119))|x120);

	if (t28 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x123 = INT64_MAX;
	static int32_t x124 = 426;
	static volatile int32_t t29 = -2409;

	t29 = ((x121+(x122<=x123))|x124);

	if (t29 != 426) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 8U;
	int64_t x126 = -1LL;
	int32_t x127 = -1;
	volatile int32_t t30 = -4061;

	t30 = ((x125+(x126<=x127))|x128);

	if (t30 != -119) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x129 = INT16_MIN;
	volatile int16_t x130 = -3298;
	static int16_t x131 = 12935;
	volatile int32_t x132 = INT32_MIN;
	volatile int32_t t31 = -59;

	t31 = ((x129+(x130<=x131))|x132);

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x139 = INT64_MAX;
	uint64_t x140 = 6353423LLU;
	volatile uint64_t t32 = 23454624LLU;

	t32 = ((x137+(x138<=x139))|x140);

	if (t32 != 6418959LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -1;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = ((x141+(x142<=x143))|x144);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x145 = INT32_MIN;
	uint16_t x146 = 230U;
	uint8_t x147 = 9U;
	int16_t x148 = 13582;

	t34 = ((x145+(x146<=x147))|x148);

	if (t34 != -2147470066) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x150 = -437243301;
	static int16_t x152 = INT16_MAX;

	t35 = ((x149+(x150<=x151))|x152);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MAX;
	volatile uint16_t x154 = UINT16_MAX;
	int32_t x155 = -1;
	volatile uint64_t x156 = UINT64_MAX;
	uint64_t t36 = UINT64_MAX;

	t36 = ((x153+(x154<=x155))|x156);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x157 = INT64_MIN;
	static int32_t x158 = INT32_MIN;
	uint64_t x159 = 1313768447848LLU;
	int32_t x160 = INT32_MAX;
	static volatile int64_t t37 = -4691227658627LL;

	t37 = ((x157+(x158<=x159))|x160);

	if (t37 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = -1LL;
	int64_t x162 = -1LL;
	int16_t x163 = INT16_MAX;
	int64_t t38 = -7977298678LL;

	t38 = ((x161+(x162<=x163))|x164);

	if (t38 != 4294967295LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x165 = 1720809LLU;
	uint16_t x166 = UINT16_MAX;
	uint8_t x168 = 11U;
	static volatile uint64_t t39 = 7LLU;

	t39 = ((x165+(x166<=x167))|x168);

	if (t39 != 1720811LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x170 = 3U;
	volatile int8_t x171 = INT8_MIN;
	int64_t x172 = 0LL;
	uint64_t t40 = UINT64_MAX;

	t40 = ((x169+(x170<=x171))|x172);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	int64_t x174 = INT64_MIN;
	int64_t x175 = -18940768LL;
	static volatile uint32_t x176 = UINT32_MAX;
	static volatile uint32_t t41 = UINT32_MAX;

	t41 = ((x173+(x174<=x175))|x176);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 2U;
	uint16_t x178 = 371U;
	volatile uint32_t x179 = 0U;
	int16_t x180 = INT16_MAX;
	static int32_t t42 = 12;

	t42 = ((x177+(x178<=x179))|x180);

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = -1LL;
	int32_t x183 = -11;
	int8_t x184 = INT8_MIN;

	t43 = ((x181+(x182<=x183))|x184);

	if (t43 != -128LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x185 = INT64_MIN;
	uint8_t x187 = 51U;
	int8_t x188 = -7;
	int64_t t44 = 14581716291043194LL;

	t44 = ((x185+(x186<=x187))|x188);

	if (t44 != -7LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = ((x189+(x190<=x191))|x192);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x193 = 10231675272LLU;
	static volatile uint16_t x194 = 9U;
	int64_t x196 = INT64_MIN;

	t46 = ((x193+(x194<=x195))|x196);

	if (t46 != 9223372047086451080LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = 1224842874113833LL;
	static uint8_t x198 = 13U;
	uint32_t x199 = 179225U;
	uint16_t x200 = UINT16_MAX;
	volatile int64_t t47 = 1LL;

	t47 = ((x197+(x198<=x199))|x200);

	if (t47 != 1224842874126335LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x202 = -3;
	static int32_t x203 = 64322;
	volatile int16_t x204 = INT16_MAX;

	t48 = ((x201+(x202<=x203))|x204);

	if (t48 != 32767U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x206 = 38421478LLU;
	volatile int32_t x207 = INT32_MIN;
	static uint64_t x208 = 17LLU;

	t49 = ((x205+(x206<=x207))|x208);

	if (t49 != 83LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = UINT32_MAX;
	volatile int8_t x210 = INT8_MIN;
	uint32_t t50 = UINT32_MAX;

	t50 = ((x209+(x210<=x211))|x212);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x214 = 3U;
	volatile int8_t x216 = 0;
	int32_t t51 = 58092;

	t51 = ((x213+(x214<=x215))|x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = 210050295LL;
	static volatile int8_t x218 = INT8_MIN;
	int16_t x219 = INT16_MIN;
	int32_t x220 = 214343;

	t52 = ((x217+(x218<=x219))|x220);

	if (t52 != 210198007LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = -1;
	static volatile int16_t x223 = INT16_MAX;
	static int32_t t53 = INT32_MAX;

	t53 = ((x221+(x222<=x223))|x224);

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = -1;
	int32_t x226 = -362809;
	int8_t x227 = -4;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = ((x225+(x226<=x227))|x228);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x229 = 191U;
	uint64_t x230 = 211542398284925615LLU;
	int8_t x232 = -1;
	int32_t t55 = -51494437;

	t55 = ((x229+(x230<=x231))|x232);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x234 = 978843254780LLU;
	static uint16_t x235 = UINT16_MAX;
	volatile int32_t x236 = INT32_MIN;
	volatile uint64_t t56 = 706905945LLU;

	t56 = ((x233+(x234<=x235))|x236);

	if (t56 != 18446744071987551479LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x237 = UINT64_MAX;
	int16_t x238 = -5072;
	uint8_t x240 = 60U;
	volatile uint64_t t57 = 13LLU;

	t57 = ((x237+(x238<=x239))|x240);

	if (t57 != 60LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x243 = UINT32_MAX;
	int8_t x244 = INT8_MIN;

	t58 = ((x241+(x242<=x243))|x244);

	if (t58 != -127LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = -1;
	static uint8_t x246 = UINT8_MAX;
	int64_t x247 = -1LL;
	static uint64_t x248 = 71470010518LLU;

	t59 = ((x245+(x246<=x247))|x248);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -1LL;
	int16_t x250 = -67;
	int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MAX;
	int64_t t60 = -7391196LL;

	t60 = ((x249+(x250<=x251))|x252);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = 143201;
	int8_t x254 = INT8_MAX;
	int16_t x255 = -1;
	uint8_t x256 = UINT8_MAX;
	int32_t t61 = 0;

	t61 = ((x253+(x254<=x255))|x256);

	if (t61 != 143359) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MIN;
	int32_t x258 = 474935;
	int8_t x259 = 0;
	volatile int64_t t62 = -3810308LL;

	t62 = ((x257+(x258<=x259))|x260);

	if (t62 != -47LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x262 = INT16_MIN;
	volatile int32_t x263 = INT32_MIN;
	static int16_t x264 = INT16_MIN;

	t63 = ((x261+(x262<=x263))|x264);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = 346330LLU;
	int64_t x266 = INT64_MIN;
	int64_t x268 = -1LL;
	uint64_t t64 = UINT64_MAX;

	t64 = ((x265+(x266<=x267))|x268);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x269 = 7041888U;
	int64_t x270 = INT64_MAX;
	volatile uint16_t x272 = UINT16_MAX;
	static uint32_t t65 = 89771315U;

	t65 = ((x269+(x270<=x271))|x272);

	if (t65 != 7077887U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = 26513318375LL;
	uint32_t x274 = 54U;
	volatile uint8_t x275 = UINT8_MAX;
	int8_t x276 = 2;

	t66 = ((x273+(x274<=x275))|x276);

	if (t66 != 26513318378LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = -778096934;
	uint16_t x283 = 3293U;
	uint32_t t67 = 1018U;

	t67 = ((x281+(x282<=x283))|x284);

	if (t67 != 3518967515U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x285 = 11389LLU;
	uint8_t x286 = 112U;
	static uint8_t x287 = UINT8_MAX;
	int32_t x288 = INT32_MIN;

	t68 = ((x285+(x286<=x287))|x288);

	if (t68 != 18446744071562079358LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x289 = INT16_MAX;
	int32_t x290 = INT32_MAX;
	int64_t x291 = INT64_MIN;
	volatile uint8_t x292 = 92U;

	t69 = ((x289+(x290<=x291))|x292);

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = INT64_MAX;
	int64_t x295 = 13LL;
	static volatile int64_t t70 = 696LL;

	t70 = ((x293+(x294<=x295))|x296);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = 1125;
	int32_t x298 = 1;
	uint16_t x299 = 2U;
	int16_t x300 = INT16_MIN;
	int32_t t71 = 3714;

	t71 = ((x297+(x298<=x299))|x300);

	if (t71 != -31642) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x301 = 13LLU;
	static volatile int32_t x303 = 35342;
	uint32_t x304 = UINT32_MAX;

	t72 = ((x301+(x302<=x303))|x304);

	if (t72 != 4294967295LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = INT64_MIN;
	int8_t x307 = -39;
	static uint8_t x308 = 1U;
	static int64_t t73 = -39743LL;

	t73 = ((x305+(x306<=x307))|x308);

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x310 = -27;
	static int8_t x311 = INT8_MIN;
	int32_t x312 = -1;
	volatile int64_t t74 = -63LL;

	t74 = ((x309+(x310<=x311))|x312);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x313 = 620U;
	static int8_t x316 = -1;
	int32_t t75 = -11367194;

	t75 = ((x313+(x314<=x315))|x316);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x318 = -21704912LL;
	int32_t x319 = INT32_MIN;
	int64_t x320 = 5179LL;
	int64_t t76 = -13LL;

	t76 = ((x317+(x318<=x319))|x320);

	if (t76 != 5371LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x321 = 1727038;
	uint16_t x322 = UINT16_MAX;
	static uint32_t x323 = 2889529U;
	int32_t t77 = 2103214;

	t77 = ((x321+(x322<=x323))|x324);

	if (t77 != 1727039) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = 17180LLU;
	uint32_t x326 = 1051U;
	static uint16_t x327 = UINT16_MAX;
	static volatile uint8_t x328 = 18U;
	static volatile uint64_t t78 = 4234819879977LLU;

	t78 = ((x325+(x326<=x327))|x328);

	if (t78 != 17183LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = 1LL;
	volatile uint32_t x330 = UINT32_MAX;
	int8_t x331 = INT8_MAX;
	int16_t x332 = INT16_MIN;
	int64_t t79 = 2184023503LL;

	t79 = ((x329+(x330<=x331))|x332);

	if (t79 != -32767LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x333 = -1LL;
	int64_t x335 = 7157473378985914LL;
	int16_t x336 = 0;
	int64_t t80 = -3836922LL;

	t80 = ((x333+(x334<=x335))|x336);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = 196212096639506519LL;
	int32_t x338 = INT32_MAX;
	uint64_t t81 = 2799223976610LLU;

	t81 = ((x337+(x338<=x339))|x340);

	if (t81 != 196212242668412503LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x342 = 100U;
	static int8_t x343 = INT8_MAX;
	volatile int64_t x344 = 7682276052LL;
	volatile int64_t t82 = -86729LL;

	t82 = ((x341+(x342<=x343))|x344);

	if (t82 != -17707LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x346 = INT8_MIN;
	volatile uint8_t x347 = 7U;
	uint32_t t83 = 1U;

	t83 = ((x345+(x346<=x347))|x348);

	if (t83 != 13778655U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x349 = UINT32_MAX;
	uint8_t x350 = 111U;
	int32_t x351 = INT32_MAX;
	int64_t x352 = INT64_MIN;

	t84 = ((x349+(x350<=x351))|x352);

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x354 = -1LL;
	uint16_t x355 = 2U;
	int16_t x356 = INT16_MAX;
	volatile int32_t t85 = -121487;

	t85 = ((x353+(x354<=x355))|x356);

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 7248U;
	uint16_t x358 = 867U;
	volatile uint16_t x359 = 14U;
	int64_t x360 = INT64_MIN;
	int64_t t86 = 290LL;

	t86 = ((x357+(x358<=x359))|x360);

	if (t86 != -9223372036854768560LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x362 = INT8_MAX;
	volatile int16_t x363 = 0;
	int64_t t87 = 1939980080211444LL;

	t87 = ((x361+(x362<=x363))|x364);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = 5678LL;
	static int64_t x366 = 8122486LL;
	int32_t x367 = -1;
	volatile int32_t x368 = -1;
	int64_t t88 = -49920944605014LL;

	t88 = ((x365+(x366<=x367))|x368);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x369 = UINT64_MAX;
	uint8_t x370 = 6U;
	uint8_t x371 = 1U;
	static int16_t x372 = INT16_MAX;
	static volatile uint64_t t89 = UINT64_MAX;

	t89 = ((x369+(x370<=x371))|x372);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = INT16_MIN;
	int32_t t90 = -5507;

	t90 = ((x373+(x374<=x375))|x376);

	if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x377 = UINT32_MAX;
	uint8_t x378 = UINT8_MAX;
	uint16_t x379 = 0U;
	int64_t x380 = -1LL;
	static int64_t t91 = -8097LL;

	t91 = ((x377+(x378<=x379))|x380);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x381 = 3U;
	static int64_t x383 = 1LL;
	volatile int32_t t92 = 0;

	t92 = ((x381+(x382<=x383))|x384);

	if (t92 != -125) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MIN;
	uint32_t x387 = 56004U;
	uint64_t x388 = 6465478134435579219LLU;
	volatile uint64_t t93 = 153539055247LLU;

	t93 = ((x385+(x386<=x387))|x388);

	if (t93 != 18446744073709551571LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x389 = 1619U;
	int64_t x392 = 12824838577LL;
	volatile int64_t t94 = 816LL;

	t94 = ((x389+(x390<=x391))|x392);

	if (t94 != 12824840179LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x394 = INT64_MAX;
	uint16_t x395 = 26697U;
	volatile uint16_t x396 = 1U;
	int32_t t95 = -94424268;

	t95 = ((x393+(x394<=x395))|x396);

	if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = -1;
	static volatile int32_t x399 = 0;

	t96 = ((x397+(x398<=x399))|x400);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x405 = 2599;
	int64_t x407 = -99LL;
	static int8_t x408 = INT8_MIN;
	volatile int32_t t97 = 0;

	t97 = ((x405+(x406<=x407))|x408);

	if (t97 != -89) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x409 = INT32_MAX;
	int32_t x410 = 1864378;
	int16_t x411 = -27;
	uint16_t x412 = 1U;
	volatile int32_t t98 = INT32_MAX;

	t98 = ((x409+(x410<=x411))|x412);

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x414 = INT64_MIN;
	int16_t x415 = -1;
	int32_t x416 = -220768755;
	int32_t t99 = 1901;

	t99 = ((x413+(x414<=x415))|x416);

	if (t99 != -220768753) { NG(); } else { ; }
	
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


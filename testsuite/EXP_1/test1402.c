#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MAX;
uint64_t t2 = 4323299697LLU;
int64_t t4 = -652362521LL;
static volatile int16_t x24 = 41;
int64_t x25 = -38230428063643LL;
static uint64_t t6 = 7LLU;
int8_t x32 = INT8_MIN;
volatile int32_t t7 = -52355;
uint32_t x34 = UINT32_MAX;
volatile uint16_t x44 = 1U;
int32_t t11 = 12198;
int8_t x55 = INT8_MIN;
volatile int64_t x58 = 4912141053990863LL;
int8_t x60 = -7;
static volatile uint8_t x66 = 5U;
int32_t x74 = 1;
uint32_t t17 = 116U;
int16_t x78 = -5109;
static volatile uint16_t x80 = 148U;
int64_t x82 = 210765581LL;
uint16_t x92 = 30U;
int8_t x95 = -1;
int8_t x96 = -1;
volatile int32_t t22 = 1;
int32_t x100 = INT32_MIN;
int8_t x101 = INT8_MIN;
uint64_t x104 = 480435LLU;
uint64_t x110 = 8915LLU;
int32_t x116 = -117;
volatile int32_t x130 = -1;
int16_t x131 = INT16_MIN;
int8_t x132 = -54;
static int16_t x137 = INT16_MIN;
static volatile int8_t x140 = INT8_MIN;
volatile int64_t x141 = 12690LL;
volatile uint16_t x148 = 36U;
volatile uint32_t x149 = 296U;
volatile uint32_t t36 = 70530U;
int32_t t37 = 0;
uint64_t x159 = UINT64_MAX;
uint64_t x160 = 6413509179LLU;
int32_t x163 = INT32_MAX;
static int16_t x170 = INT16_MIN;
int32_t x175 = INT32_MIN;
int64_t x176 = INT64_MAX;
int64_t x178 = INT64_MIN;
uint8_t x179 = 12U;
int32_t t43 = -6317;
uint64_t t45 = 109LLU;
uint32_t x194 = UINT32_MAX;
int32_t x197 = INT32_MAX;
int16_t x198 = INT16_MIN;
int64_t x199 = -60096192663LL;
uint64_t x207 = 1996098765LLU;
volatile uint16_t x227 = 3827U;
int8_t x228 = 3;
int32_t t55 = 10795;
static int64_t x230 = INT64_MAX;
volatile uint64_t x233 = 6028699842852162LLU;
volatile uint8_t x234 = UINT8_MAX;
volatile int32_t t58 = 58372;
static int16_t x254 = INT16_MIN;
int32_t x255 = 6235166;
int32_t x260 = INT32_MIN;
volatile int64_t t62 = -216148442375LL;
int32_t x263 = -1;
static volatile int16_t x268 = INT16_MIN;
static volatile int64_t x270 = INT64_MIN;
uint32_t x276 = 93U;
volatile uint64_t t66 = 5455846LLU;
uint32_t x277 = UINT32_MAX;
int32_t x285 = INT32_MIN;
int16_t x289 = INT16_MIN;
int8_t x291 = 1;
int64_t x296 = INT64_MIN;
int64_t t71 = 4414444169266385705LL;
int64_t x302 = -35670LL;
volatile uint32_t x307 = 25279704U;
int8_t x310 = -1;
uint64_t x313 = 66342997406906658LLU;
uint16_t x318 = UINT16_MAX;
volatile uint32_t x320 = 96915857U;
volatile uint64_t t77 = 7305181434668294LLU;
static volatile int32_t x324 = 7133;
volatile int16_t x339 = -1;
uint16_t x340 = 11296U;
volatile int32_t t82 = 880731659;
volatile int64_t x349 = -1LL;
uint32_t x352 = 783621U;
int16_t x358 = 2;
int64_t x359 = INT64_MAX;
volatile uint16_t x360 = 2533U;
volatile uint8_t x362 = 106U;
int32_t x374 = INT32_MIN;
uint16_t x379 = UINT16_MAX;
uint32_t x383 = 758U;
int16_t x384 = -1;
int64_t x387 = INT64_MAX;
static int64_t t93 = 34954016LL;
int64_t t94 = -171113724216212LL;
static int32_t t96 = 172;
static uint32_t t97 = 799534398U;
volatile int32_t t98 = 27;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int64_t x2 = INT64_MIN;
	uint64_t x3 = 121442580255LLU;
	int32_t x4 = -61916;
	uint64_t t0 = 533LLU;

	t0 = (((x1<x2)/x3)&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 2;
	int16_t x6 = 1;
	volatile uint8_t x7 = UINT8_MAX;
	static int32_t t1 = 3462106;

	t1 = (((x5<x6)/x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int32_t x10 = 280;
	int16_t x11 = -10783;
	uint64_t x12 = 131938731324668LLU;

	t2 = (((x9<x10)/x11)&x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint16_t x14 = 28U;
	int8_t x15 = INT8_MIN;
	uint32_t x16 = 121U;
	volatile uint32_t t3 = 21U;

	t3 = (((x13<x14)/x15)&x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint32_t x18 = UINT32_MAX;
	int64_t x19 = INT64_MAX;
	static volatile uint8_t x20 = 3U;

	t4 = (((x17<x18)/x19)&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x21 = 21361U;
	volatile int8_t x22 = INT8_MIN;
	volatile int32_t x23 = -1;
	volatile int32_t t5 = 2555;

	t5 = (((x21<x22)/x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	uint64_t x27 = UINT64_MAX;
	volatile int8_t x28 = INT8_MIN;

	t6 = (((x25<x26)/x27)&x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = 13818;
	volatile int16_t x30 = -43;
	static int16_t x31 = INT16_MIN;

	t7 = (((x29<x30)/x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static uint64_t x35 = UINT64_MAX;
	uint32_t x36 = UINT32_MAX;
	uint64_t t8 = 6891LLU;

	t8 = (((x33<x34)/x35)&x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 15;
	int64_t x38 = INT64_MIN;
	int16_t x39 = -1829;
	int16_t x40 = 3991;
	volatile int32_t t9 = 1;

	t9 = (((x37<x38)/x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 178202564640306LLU;
	static uint32_t x42 = 17513U;
	static volatile int8_t x43 = -2;
	static volatile int32_t t10 = 950;

	t10 = (((x41<x42)/x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 0U;
	int64_t x50 = -1906712LL;
	int16_t x51 = INT16_MIN;
	int16_t x52 = INT16_MAX;

	t11 = (((x49<x50)/x51)&x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	int16_t x54 = INT16_MIN;
	int64_t x56 = 205969941886LL;
	int64_t t12 = 1248LL;

	t12 = (((x53<x54)/x55)&x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = 2044U;
	static uint8_t x59 = 30U;
	volatile int32_t t13 = 32021;

	t13 = (((x57<x58)/x59)&x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = 79;
	int32_t x62 = INT32_MIN;
	static volatile int64_t x63 = -1LL;
	int8_t x64 = INT8_MIN;
	volatile int64_t t14 = 0LL;

	t14 = (((x61<x62)/x63)&x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	uint32_t x67 = 210U;
	uint32_t x68 = 913U;
	uint32_t t15 = 6391U;

	t15 = (((x65<x66)/x67)&x68);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = 24;
	static volatile uint16_t x70 = UINT16_MAX;
	int8_t x71 = INT8_MIN;
	static int16_t x72 = INT16_MIN;
	int32_t t16 = -7;

	t16 = (((x69<x70)/x71)&x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x73 = 13U;
	uint32_t x75 = 15U;
	volatile int8_t x76 = INT8_MIN;

	t17 = (((x73<x74)/x75)&x76);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = -1;
	uint64_t x79 = 25227LLU;
	volatile uint64_t t18 = 110065954520362342LLU;

	t18 = (((x77<x78)/x79)&x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = INT16_MAX;
	int64_t x83 = -2694LL;
	volatile uint16_t x84 = 4U;
	static volatile int64_t t19 = 6320942717LL;

	t19 = (((x81<x82)/x83)&x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MAX;
	static int64_t x86 = INT64_MAX;
	volatile int8_t x87 = INT8_MAX;
	static int64_t x88 = -458636007847LL;
	int64_t t20 = -1104271777159608LL;

	t20 = (((x85<x86)/x87)&x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MAX;
	volatile uint64_t x90 = 15559LLU;
	int16_t x91 = 3945;
	static int32_t t21 = 165603;

	t21 = (((x89<x90)/x91)&x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MAX;
	uint64_t x94 = UINT64_MAX;

	t22 = (((x93<x94)/x95)&x96);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x97 = 3;
	static int32_t x98 = -1;
	volatile int32_t x99 = -784;
	static volatile int32_t t23 = 24649721;

	t23 = (((x97<x98)/x99)&x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x102 = 53U;
	int64_t x103 = -1LL;
	static uint64_t t24 = 46339262073636767LLU;

	t24 = (((x101<x102)/x103)&x104);

	if (t24 != 480435LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = 285474487244LL;
	int16_t x106 = 5518;
	uint64_t x107 = 58092LLU;
	volatile int32_t x108 = INT32_MIN;
	uint64_t t25 = 2447801810LLU;

	t25 = (((x105<x106)/x107)&x108);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -1;
	int16_t x111 = INT16_MAX;
	static int64_t x112 = 127667899750979131LL;
	int64_t t26 = 85447LL;

	t26 = (((x109<x110)/x111)&x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x113 = 253841U;
	int8_t x114 = INT8_MIN;
	volatile int64_t x115 = -1LL;
	volatile int64_t t27 = 531559LL;

	t27 = (((x113<x114)/x115)&x116);

	if (t27 != -117LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = 17U;
	uint32_t x118 = 9U;
	int32_t x119 = -10657166;
	uint64_t x120 = 4965LLU;
	static volatile uint64_t t28 = 1090124244561LLU;

	t28 = (((x117<x118)/x119)&x120);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -14;
	int8_t x122 = INT8_MIN;
	volatile int32_t x123 = -1;
	uint8_t x124 = 1U;
	volatile int32_t t29 = 242;

	t29 = (((x121<x122)/x123)&x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x125 = INT32_MIN;
	volatile int32_t x126 = -23745;
	uint64_t x127 = UINT64_MAX;
	static volatile int8_t x128 = INT8_MAX;
	uint64_t t30 = 1680522075314LLU;

	t30 = (((x125<x126)/x127)&x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 59U;
	int32_t t31 = -26054163;

	t31 = (((x129<x130)/x131)&x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = UINT8_MAX;
	int32_t x134 = -1;
	int64_t x135 = -1LL;
	static int8_t x136 = INT8_MIN;
	volatile int64_t t32 = 3638964LL;

	t32 = (((x133<x134)/x135)&x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x138 = 24;
	int64_t x139 = -2611955611107LL;
	volatile int64_t t33 = -485LL;

	t33 = (((x137<x138)/x139)&x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x142 = INT8_MAX;
	uint32_t x143 = UINT32_MAX;
	static uint32_t x144 = 2918666U;
	volatile uint32_t t34 = 9U;

	t34 = (((x141<x142)/x143)&x144);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 57U;
	int8_t x146 = 1;
	int16_t x147 = INT16_MAX;
	int32_t t35 = 15740837;

	t35 = (((x145<x146)/x147)&x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x150 = UINT8_MAX;
	static uint32_t x151 = UINT32_MAX;
	static volatile uint16_t x152 = UINT16_MAX;

	t36 = (((x149<x150)/x151)&x152);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x153 = -1;
	int8_t x154 = 38;
	static int32_t x155 = INT32_MAX;
	static uint16_t x156 = UINT16_MAX;

	t37 = (((x153<x154)/x155)&x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x157 = 4677626919824LLU;
	int8_t x158 = INT8_MIN;
	uint64_t t38 = 5975516548LLU;

	t38 = (((x157<x158)/x159)&x160);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x161 = INT16_MIN;
	int64_t x162 = INT64_MAX;
	int64_t x164 = INT64_MIN;
	int64_t t39 = -68LL;

	t39 = (((x161<x162)/x163)&x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x165 = INT16_MIN;
	uint64_t x166 = 120740085LLU;
	static volatile int64_t x167 = -2019936149667577LL;
	volatile int64_t x168 = -1LL;
	static volatile int64_t t40 = 2535813LL;

	t40 = (((x165<x166)/x167)&x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MAX;
	uint16_t x171 = 4U;
	int64_t x172 = 487886266372667521LL;
	volatile int64_t t41 = 35666392LL;

	t41 = (((x169<x170)/x171)&x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = 1LL;
	uint64_t x174 = 2LLU;
	int64_t t42 = 130283268418LL;

	t42 = (((x173<x174)/x175)&x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x177 = -1LL;
	int16_t x180 = INT16_MIN;

	t43 = (((x177<x178)/x179)&x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MIN;
	static uint64_t x182 = 326LLU;
	static volatile int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MAX;
	static volatile int32_t t44 = 252;

	t44 = (((x181<x182)/x183)&x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = UINT8_MAX;
	int16_t x186 = 0;
	uint64_t x187 = 2016LLU;
	int8_t x188 = -1;

	t45 = (((x185<x186)/x187)&x188);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MAX;
	volatile uint64_t x190 = 349296LLU;
	int32_t x191 = -1;
	int64_t x192 = INT64_MIN;
	int64_t t46 = INT64_MIN;

	t46 = (((x189<x190)/x191)&x192);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MIN;
	static volatile int8_t x195 = 10;
	int8_t x196 = -3;
	static volatile int32_t t47 = 1;

	t47 = (((x193<x194)/x195)&x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x200 = -105207504;
	volatile int64_t t48 = 1684343562476038LL;

	t48 = (((x197<x198)/x199)&x200);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -791LL;
	int32_t x202 = INT32_MIN;
	uint32_t x203 = 963082U;
	uint64_t x204 = UINT64_MAX;
	static uint64_t t49 = 15413845LLU;

	t49 = (((x201<x202)/x203)&x204);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = 0;
	static uint64_t x206 = 184447934LLU;
	uint32_t x208 = 3892534U;
	volatile uint64_t t50 = 129LLU;

	t50 = (((x205<x206)/x207)&x208);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MAX;
	int32_t x210 = INT32_MIN;
	static uint8_t x211 = 107U;
	uint8_t x212 = 2U;
	volatile int32_t t51 = -328681;

	t51 = (((x209<x210)/x211)&x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x213 = -24;
	uint8_t x214 = 5U;
	int32_t x215 = INT32_MIN;
	int16_t x216 = -11;
	int32_t t52 = 105;

	t52 = (((x213<x214)/x215)&x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x217 = 2861892U;
	volatile uint16_t x218 = 1058U;
	int16_t x219 = 1;
	static uint64_t x220 = 4310LLU;
	volatile uint64_t t53 = 271057911373430LLU;

	t53 = (((x217<x218)/x219)&x220);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x221 = 171U;
	uint16_t x222 = 243U;
	volatile int32_t x223 = -1;
	volatile int32_t x224 = INT32_MAX;
	int32_t t54 = INT32_MAX;

	t54 = (((x221<x222)/x223)&x224);

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	uint64_t x226 = 5LLU;

	t55 = (((x225<x226)/x227)&x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x229 = 1U;
	int32_t x231 = INT32_MIN;
	static int32_t x232 = -3;
	static volatile int32_t t56 = 66650048;

	t56 = (((x229<x230)/x231)&x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x235 = 2577U;
	uint64_t x236 = 514891829766LLU;
	uint64_t t57 = 486910150LLU;

	t57 = (((x233<x234)/x235)&x236);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x237 = INT8_MIN;
	static int64_t x238 = -1LL;
	static int32_t x239 = INT32_MIN;
	int16_t x240 = INT16_MAX;

	t58 = (((x237<x238)/x239)&x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x241 = INT64_MAX;
	volatile int8_t x242 = -1;
	int64_t x243 = -1LL;
	static int8_t x244 = -3;
	volatile int64_t t59 = -11331129LL;

	t59 = (((x241<x242)/x243)&x244);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x249 = UINT64_MAX;
	int8_t x250 = INT8_MIN;
	uint32_t x251 = 150U;
	volatile int64_t x252 = INT64_MAX;
	int64_t t60 = -716983891LL;

	t60 = (((x249<x250)/x251)&x252);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x253 = 361226617U;
	uint64_t x256 = 59760350LLU;
	volatile uint64_t t61 = 863230066706969957LLU;

	t61 = (((x253<x254)/x255)&x256);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = UINT64_MAX;
	int64_t x258 = INT64_MIN;
	volatile int64_t x259 = INT64_MIN;

	t62 = (((x257<x258)/x259)&x260);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MIN;
	uint16_t x262 = 57U;
	static int16_t x264 = INT16_MIN;
	int32_t t63 = -864;

	t63 = (((x261<x262)/x263)&x264);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = 5738U;
	static uint32_t x266 = UINT32_MAX;
	int64_t x267 = INT64_MIN;
	int64_t t64 = -1370438630001950LL;

	t64 = (((x265<x266)/x267)&x268);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x269 = INT64_MAX;
	int16_t x271 = INT16_MIN;
	static volatile int32_t x272 = 7957;
	int32_t t65 = 263876;

	t65 = (((x269<x270)/x271)&x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x273 = 4847U;
	uint16_t x274 = 5U;
	uint64_t x275 = 7041338799LLU;

	t66 = (((x273<x274)/x275)&x276);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x278 = 0;
	volatile int16_t x279 = INT16_MAX;
	int32_t x280 = INT32_MAX;
	int32_t t67 = 0;

	t67 = (((x277<x278)/x279)&x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = 1927U;
	static int64_t x282 = -1LL;
	uint32_t x283 = 31980U;
	uint64_t x284 = UINT64_MAX;
	uint64_t t68 = 29197LLU;

	t68 = (((x281<x282)/x283)&x284);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x286 = -39750;
	int32_t x287 = -207;
	static int16_t x288 = 0;
	int32_t t69 = -315840;

	t69 = (((x285<x286)/x287)&x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x290 = INT8_MIN;
	static volatile int32_t x292 = INT32_MAX;
	static int32_t t70 = 795;

	t70 = (((x289<x290)/x291)&x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x293 = UINT32_MAX;
	static volatile int8_t x294 = 2;
	uint16_t x295 = 26U;

	t71 = (((x293<x294)/x295)&x296);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x297 = INT64_MAX;
	int8_t x298 = INT8_MIN;
	uint32_t x299 = UINT32_MAX;
	int16_t x300 = INT16_MIN;
	volatile uint32_t t72 = 1U;

	t72 = (((x297<x298)/x299)&x300);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	volatile uint64_t x303 = 1173085552422LLU;
	uint8_t x304 = UINT8_MAX;
	volatile uint64_t t73 = 37749766LLU;

	t73 = (((x301<x302)/x303)&x304);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 27866U;
	int32_t x306 = INT32_MIN;
	volatile int8_t x308 = INT8_MIN;
	volatile uint32_t t74 = 15U;

	t74 = (((x305<x306)/x307)&x308);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x309 = 360048497842389LLU;
	int8_t x311 = -1;
	volatile int32_t x312 = INT32_MIN;
	static volatile int32_t t75 = INT32_MIN;

	t75 = (((x309<x310)/x311)&x312);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x314 = 644591173254651674LL;
	int64_t x315 = 400192383320374LL;
	static int8_t x316 = 20;
	int64_t t76 = -29281LL;

	t76 = (((x313<x314)/x315)&x316);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = 1U;
	static volatile uint64_t x319 = 50251083LLU;

	t77 = (((x317<x318)/x319)&x320);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int64_t x322 = INT64_MIN;
	uint8_t x323 = 52U;
	static volatile int32_t t78 = -5;

	t78 = (((x321<x322)/x323)&x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x325 = UINT64_MAX;
	int32_t x326 = -5804179;
	volatile int32_t x327 = -13;
	static int32_t x328 = -1;
	int32_t t79 = 758653;

	t79 = (((x325<x326)/x327)&x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x329 = INT64_MAX;
	int8_t x330 = -1;
	volatile int16_t x331 = INT16_MAX;
	int8_t x332 = INT8_MAX;
	int32_t t80 = 175;

	t80 = (((x329<x330)/x331)&x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = INT64_MIN;
	int16_t x338 = INT16_MIN;
	int32_t t81 = -117256;

	t81 = (((x337<x338)/x339)&x340);

	if (t81 != 11296) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = INT16_MAX;
	int8_t x342 = -1;
	int8_t x343 = 1;
	int8_t x344 = INT8_MIN;

	t82 = (((x341<x342)/x343)&x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x345 = UINT8_MAX;
	uint64_t x346 = UINT64_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	volatile uint64_t x348 = 4528631931877946LLU;
	static uint64_t t83 = 28LLU;

	t83 = (((x345<x346)/x347)&x348);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x350 = 967;
	volatile int8_t x351 = -50;
	uint32_t t84 = 13423309U;

	t84 = (((x349<x350)/x351)&x352);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = -1;
	int8_t x354 = INT8_MIN;
	int16_t x355 = -31;
	uint64_t x356 = UINT64_MAX;
	uint64_t t85 = 6400616576521LLU;

	t85 = (((x353<x354)/x355)&x356);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x357 = 64718840029277LLU;
	volatile int64_t t86 = 0LL;

	t86 = (((x357<x358)/x359)&x360);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x361 = 1LL;
	int16_t x363 = -1;
	volatile uint8_t x364 = 4U;
	volatile int32_t t87 = 3269;

	t87 = (((x361<x362)/x363)&x364);

	if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	int16_t x367 = -3;
	volatile int8_t x368 = -57;
	int32_t t88 = 18174282;

	t88 = (((x365<x366)/x367)&x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = UINT32_MAX;
	int64_t x370 = -1LL;
	uint32_t x371 = 50127U;
	int16_t x372 = 3396;
	uint32_t t89 = 123626486U;

	t89 = (((x369<x370)/x371)&x372);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x373 = -1;
	volatile int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MAX;
	static volatile int64_t t90 = 236LL;

	t90 = (((x373<x374)/x375)&x376);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x377 = INT64_MIN;
	uint32_t x378 = 16U;
	uint32_t x380 = 439U;
	volatile uint32_t t91 = 23831U;

	t91 = (((x377<x378)/x379)&x380);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x381 = -1LL;
	uint64_t x382 = 474LLU;
	volatile uint32_t t92 = 146282098U;

	t92 = (((x381<x382)/x383)&x384);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = INT64_MAX;
	static int16_t x386 = -7484;
	int32_t x388 = -1;

	t93 = (((x385<x386)/x387)&x388);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = -1;
	int32_t x390 = INT32_MIN;
	int8_t x391 = 3;
	int64_t x392 = 11425453098297615LL;

	t94 = (((x389<x390)/x391)&x392);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = -3;
	int16_t x394 = -8;
	int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MAX;
	static int32_t t95 = -5067739;

	t95 = (((x393<x394)/x395)&x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x397 = 0U;
	static int32_t x398 = -12412083;
	static uint16_t x399 = 4759U;
	static int16_t x400 = -1189;

	t96 = (((x397<x398)/x399)&x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = -1LL;
	int32_t x402 = -448628;
	int16_t x403 = INT16_MIN;
	uint32_t x404 = 27U;

	t97 = (((x401<x402)/x403)&x404);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x405 = 60U;
	uint16_t x406 = UINT16_MAX;
	uint8_t x407 = 106U;
	uint16_t x408 = 20991U;

	t98 = (((x405<x406)/x407)&x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x409 = -1LL;
	int16_t x410 = INT16_MAX;
	volatile uint64_t x411 = 20280538568368663LLU;
	static uint8_t x412 = 1U;
	volatile uint64_t t99 = 267LLU;

	t99 = (((x409<x410)/x411)&x412);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


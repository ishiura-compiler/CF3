#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
uint16_t x3 = 3308U;
static int32_t x4 = -1;
uint32_t x5 = UINT32_MAX;
int16_t x7 = -423;
int32_t t1 = 27;
int32_t x11 = -6764203;
int16_t x13 = -376;
static int32_t x14 = INT32_MIN;
static uint8_t x15 = UINT8_MAX;
static uint32_t x18 = 114944U;
int8_t x30 = INT8_MIN;
int32_t t6 = 1205433;
static int16_t x38 = 8090;
int16_t x39 = INT16_MIN;
int32_t t9 = -1;
uint32_t x49 = UINT32_MAX;
uint64_t x56 = 1LLU;
uint64_t x60 = UINT64_MAX;
int32_t t13 = -114;
int32_t x65 = INT32_MIN;
uint8_t x66 = 0U;
uint16_t x72 = 7U;
int16_t x85 = 1;
int64_t x87 = -1LL;
static volatile int32_t t21 = -17652;
int64_t x93 = 155496029315LL;
uint8_t x94 = UINT8_MAX;
int8_t x99 = 33;
static int32_t t23 = 136364;
int32_t t24 = 151988;
static int32_t x112 = INT32_MIN;
volatile int32_t t28 = -102;
uint64_t x127 = UINT64_MAX;
static int32_t t29 = -105293;
int8_t x134 = 0;
int32_t x141 = INT32_MAX;
int32_t t33 = 15719;
uint32_t x146 = 4U;
int64_t x152 = -1LL;
uint16_t x156 = 5U;
int16_t x166 = 0;
uint8_t x168 = 17U;
uint64_t x169 = 874434LLU;
volatile int8_t x170 = 0;
static volatile uint8_t x172 = 71U;
volatile int32_t t40 = 58292;
volatile int32_t x175 = INT32_MIN;
volatile int32_t t42 = -40097;
static int8_t x181 = 5;
int32_t x182 = INT32_MAX;
volatile int64_t x190 = 9653794LL;
uint8_t x194 = UINT8_MAX;
int8_t x195 = -1;
int64_t x200 = INT64_MIN;
volatile uint8_t x211 = 0U;
uint64_t x212 = 347LLU;
int32_t x224 = INT32_MAX;
uint16_t x225 = 479U;
volatile int32_t t54 = 58;
volatile uint16_t x244 = 130U;
static volatile int64_t x247 = INT64_MIN;
int64_t x250 = INT64_MIN;
volatile int32_t t62 = -30515;
int32_t x261 = INT32_MIN;
volatile uint32_t x263 = 65972513U;
uint8_t x275 = 14U;
int32_t t65 = -255;
int64_t x284 = -38613LL;
static uint16_t x285 = UINT16_MAX;
static int64_t x287 = -1LL;
volatile int8_t x297 = -3;
int8_t x299 = 34;
static int32_t t71 = 813468117;
int8_t x308 = 25;
int32_t t72 = -580329;
int8_t x309 = -1;
int8_t x310 = -1;
uint8_t x311 = UINT8_MAX;
volatile int32_t t73 = -1;
uint8_t x320 = 114U;
int32_t x323 = 18746;
static int64_t x326 = 2708422024147LL;
int32_t t78 = 11;
static int16_t x334 = -168;
volatile int64_t x335 = INT64_MAX;
int64_t x350 = INT64_MIN;
uint8_t x351 = 8U;
static volatile int32_t t83 = 6242466;
static int16_t x354 = INT16_MAX;
int32_t t85 = 36614997;
volatile int16_t x362 = INT16_MAX;
static uint32_t x365 = 60532040U;
int64_t x367 = -235501096966473LL;
int32_t t87 = 1;
static int32_t t88 = -9712206;
uint64_t x374 = UINT64_MAX;
volatile int64_t x379 = INT64_MIN;
int32_t x384 = 415684961;
static volatile int64_t x387 = -1LL;
int64_t x391 = 428930LL;
volatile int32_t t93 = -100;
int32_t x401 = -1;
int32_t x407 = INT32_MIN;
int16_t x409 = -1;
uint64_t x412 = UINT64_MAX;
int32_t x413 = INT32_MAX;


void f0(void) {
	static uint64_t x1 = 1684889516063LLU;
	int32_t t0 = 5;

	t0 = (x1<=((x2<x3)/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = INT8_MIN;
	uint64_t x8 = 4906LLU;

	t1 = (x5<=((x6<x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static volatile uint32_t x10 = 110U;
	int32_t x12 = 384;
	int32_t t2 = 4;

	t2 = (x9<=((x10<x11)/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x16 = 123594957448827210LLU;
	volatile int32_t t3 = -47666063;

	t3 = (x13<=((x14<x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	uint64_t x19 = 3610461567LLU;
	volatile int64_t x20 = -871249470407975LL;
	int32_t t4 = -24720;

	t4 = (x17<=((x18<x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 6U;
	volatile int16_t x22 = -1070;
	uint32_t x23 = 280813U;
	uint8_t x24 = 1U;
	int32_t t5 = 28;

	t5 = (x21<=((x22<x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 43;
	int64_t x31 = -1LL;
	int64_t x32 = INT64_MAX;

	t6 = (x29<=((x30<x31)/x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x33 = 52692963LLU;
	int8_t x34 = 23;
	int64_t x35 = -30LL;
	int8_t x36 = INT8_MAX;
	int32_t t7 = 26357649;

	t7 = (x33<=((x34<x35)/x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = INT64_MIN;
	int16_t x40 = -33;
	static volatile int32_t t8 = -12424;

	t8 = (x37<=((x38<x39)/x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 447U;
	int8_t x42 = INT8_MIN;
	uint64_t x43 = UINT64_MAX;
	int8_t x44 = INT8_MIN;

	t9 = (x41<=((x42<x43)/x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	int32_t x46 = 179048;
	int16_t x47 = -1;
	static uint8_t x48 = 5U;
	int32_t t10 = 1;

	t10 = (x45<=((x46<x47)/x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = -45;
	volatile uint32_t x51 = 6091U;
	int16_t x52 = -1;
	volatile int32_t t11 = -6484641;

	t11 = (x49<=((x50<x51)/x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	int16_t x54 = 88;
	int8_t x55 = INT8_MIN;
	int32_t t12 = 13816;

	t12 = (x53<=((x54<x55)/x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	uint32_t x58 = UINT32_MAX;
	volatile uint64_t x59 = 5934202LLU;

	t13 = (x57<=((x58<x59)/x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 0U;
	static int64_t x62 = INT64_MIN;
	volatile uint8_t x63 = 0U;
	static int32_t x64 = INT32_MIN;
	int32_t t14 = -224255030;

	t14 = (x61<=((x62<x63)/x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x67 = 5171;
	uint64_t x68 = 97140524991069554LLU;
	int32_t t15 = 1231;

	t15 = (x65<=((x66<x67)/x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -1;
	static int64_t x70 = INT64_MIN;
	int16_t x71 = INT16_MIN;
	int32_t t16 = 536742253;

	t16 = (x69<=((x70<x71)/x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -13;
	int16_t x74 = INT16_MIN;
	volatile int8_t x75 = 1;
	uint32_t x76 = UINT32_MAX;
	int32_t t17 = -3;

	t17 = (x73<=((x74<x75)/x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MAX;
	int32_t x79 = -13;
	uint64_t x80 = 36039290LLU;
	volatile int32_t t18 = 0;

	t18 = (x77<=((x78<x79)/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x82 = 173U;
	static int16_t x83 = -1;
	static uint16_t x84 = 5U;
	int32_t t19 = -1024;

	t19 = (x81<=((x82<x83)/x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = INT8_MIN;
	static int16_t x88 = INT16_MIN;
	static int32_t t20 = -14862736;

	t20 = (x85<=((x86<x87)/x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 31U;
	volatile int32_t x90 = -10067;
	uint16_t x91 = 156U;
	int8_t x92 = INT8_MAX;

	t21 = (x89<=((x90<x91)/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x95 = 1;
	int32_t x96 = 7503;
	int32_t t22 = -12892;

	t22 = (x93<=((x94<x95)/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = UINT64_MAX;
	int32_t x98 = INT32_MIN;
	volatile int32_t x100 = -59838;

	t23 = (x97<=((x98<x99)/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x101 = -1;
	int64_t x102 = INT64_MIN;
	int32_t x103 = 29;
	int32_t x104 = -1;

	t24 = (x101<=((x102<x103)/x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = 3;
	static uint64_t x107 = 2LLU;
	static uint32_t x108 = UINT32_MAX;
	int32_t t25 = -513202;

	t25 = (x105<=((x106<x107)/x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MIN;
	int32_t t26 = -240;

	t26 = (x109<=((x110<x111)/x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = -1;
	static int16_t x114 = INT16_MIN;
	static int8_t x115 = INT8_MAX;
	int32_t x116 = INT32_MIN;
	volatile int32_t t27 = 287475;

	t27 = (x113<=((x114<x115)/x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = -4;
	int64_t x118 = -1LL;
	int16_t x119 = 0;
	volatile int16_t x120 = 6807;

	t28 = (x117<=((x118<x119)/x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x125 = 2U;
	int64_t x126 = INT64_MAX;
	static uint64_t x128 = 7884712LLU;

	t29 = (x125<=((x126<x127)/x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x129 = 252188537LL;
	volatile uint32_t x130 = 51932U;
	int64_t x131 = -1762809345729125LL;
	uint8_t x132 = 6U;
	int32_t t30 = 0;

	t30 = (x129<=((x130<x131)/x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x133 = -1;
	int64_t x135 = INT64_MAX;
	int8_t x136 = -25;
	volatile int32_t t31 = -127;

	t31 = (x133<=((x134<x135)/x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x137 = -63;
	int8_t x138 = 12;
	uint32_t x139 = UINT32_MAX;
	int32_t x140 = -1;
	int32_t t32 = -12;

	t32 = (x137<=((x138<x139)/x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x142 = -25907794293553087LL;
	static volatile int32_t x143 = INT32_MIN;
	int32_t x144 = -175;

	t33 = (x141<=((x142<x143)/x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -5468693;
	uint64_t x147 = 156262LLU;
	static uint16_t x148 = 7U;
	volatile int32_t t34 = 0;

	t34 = (x145<=((x146<x147)/x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = 42081LLU;
	static uint32_t x150 = 12U;
	int8_t x151 = -11;
	volatile int32_t t35 = -43061276;

	t35 = (x149<=((x150<x151)/x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = 5;
	int8_t x154 = 0;
	uint64_t x155 = UINT64_MAX;
	static volatile int32_t t36 = 29958;

	t36 = (x153<=((x154<x155)/x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 19403U;
	static int16_t x158 = -8037;
	uint32_t x159 = UINT32_MAX;
	volatile uint16_t x160 = 1030U;
	volatile int32_t t37 = -206010419;

	t37 = (x157<=((x158<x159)/x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x161 = INT32_MIN;
	int64_t x162 = 2187LL;
	uint8_t x163 = UINT8_MAX;
	uint64_t x164 = UINT64_MAX;
	volatile int32_t t38 = 3743099;

	t38 = (x161<=((x162<x163)/x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	int16_t x167 = INT16_MIN;
	int32_t t39 = 41507;

	t39 = (x165<=((x166<x167)/x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x171 = INT64_MIN;

	t40 = (x169<=((x170<x171)/x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = 402056081U;
	uint64_t x174 = 17499LLU;
	static uint16_t x176 = UINT16_MAX;
	volatile int32_t t41 = -3;

	t41 = (x173<=((x174<x175)/x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x177 = 2;
	uint64_t x178 = 73049000156LLU;
	static int32_t x179 = INT32_MAX;
	static int8_t x180 = 54;

	t42 = (x177<=((x178<x179)/x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x183 = UINT32_MAX;
	int16_t x184 = -1;
	static int32_t t43 = -27761;

	t43 = (x181<=((x182<x183)/x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = -1LL;
	uint32_t x186 = 2U;
	uint32_t x187 = 122U;
	int64_t x188 = 119857645670LL;
	volatile int32_t t44 = -8886;

	t44 = (x185<=((x186<x187)/x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = UINT64_MAX;
	static int16_t x191 = INT16_MAX;
	static int8_t x192 = INT8_MIN;
	int32_t t45 = -98660130;

	t45 = (x189<=((x190<x191)/x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x193 = 4U;
	int64_t x196 = INT64_MIN;
	volatile int32_t t46 = -2727;

	t46 = (x193<=((x194<x195)/x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x197 = 265821972U;
	static volatile int64_t x198 = INT64_MIN;
	int32_t x199 = INT32_MAX;
	int32_t t47 = -2268299;

	t47 = (x197<=((x198<x199)/x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x201 = 8LLU;
	uint8_t x202 = 52U;
	static uint64_t x203 = 3LLU;
	volatile uint8_t x204 = 51U;
	static int32_t t48 = -25203;

	t48 = (x201<=((x202<x203)/x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MIN;
	uint8_t x206 = 14U;
	uint16_t x207 = 1677U;
	uint64_t x208 = 134451LLU;
	volatile int32_t t49 = -2652;

	t49 = (x205<=((x206<x207)/x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x209 = 1LLU;
	int32_t x210 = INT32_MAX;
	volatile int32_t t50 = -378661;

	t50 = (x209<=((x210<x211)/x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = 1;
	uint32_t x214 = UINT32_MAX;
	volatile uint8_t x215 = 108U;
	int8_t x216 = INT8_MIN;
	volatile int32_t t51 = -18409889;

	t51 = (x213<=((x214<x215)/x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x217 = INT64_MAX;
	int32_t x218 = 0;
	int16_t x219 = INT16_MIN;
	volatile uint64_t x220 = 10293738025254823LLU;
	volatile int32_t t52 = -36065;

	t52 = (x217<=((x218<x219)/x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x221 = 253;
	uint64_t x222 = 255135470096LLU;
	int32_t x223 = -1;
	int32_t t53 = 272;

	t53 = (x221<=((x222<x223)/x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x226 = INT32_MAX;
	int16_t x227 = INT16_MIN;
	int8_t x228 = -1;

	t54 = (x225<=((x226<x227)/x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x229 = 6663213U;
	volatile int16_t x230 = INT16_MIN;
	int16_t x231 = INT16_MIN;
	static uint8_t x232 = 9U;
	static int32_t t55 = -534256736;

	t55 = (x229<=((x230<x231)/x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = -821590823;
	volatile uint16_t x234 = 1647U;
	static int8_t x235 = -7;
	volatile uint8_t x236 = 55U;
	int32_t t56 = 28195;

	t56 = (x233<=((x234<x235)/x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x237 = UINT8_MAX;
	int64_t x238 = 0LL;
	int16_t x239 = 0;
	uint8_t x240 = UINT8_MAX;
	int32_t t57 = 2005;

	t57 = (x237<=((x238<x239)/x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x241 = INT16_MIN;
	static uint32_t x242 = UINT32_MAX;
	int16_t x243 = -1;
	volatile int32_t t58 = 9;

	t58 = (x241<=((x242<x243)/x244));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MIN;
	volatile uint32_t x246 = 2565193U;
	int32_t x248 = INT32_MIN;
	volatile int32_t t59 = 1;

	t59 = (x245<=((x246<x247)/x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -1004207650LL;
	static int16_t x251 = INT16_MIN;
	uint8_t x252 = 8U;
	static volatile int32_t t60 = -4;

	t60 = (x249<=((x250<x251)/x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x253 = INT32_MIN;
	int32_t x254 = INT32_MIN;
	uint16_t x255 = UINT16_MAX;
	volatile int16_t x256 = INT16_MAX;
	volatile int32_t t61 = -72962;

	t61 = (x253<=((x254<x255)/x256));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 4758927680503688424LLU;
	int16_t x258 = INT16_MIN;
	static int8_t x259 = -1;
	int8_t x260 = INT8_MIN;

	t62 = (x257<=((x258<x259)/x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x262 = INT8_MIN;
	int32_t x264 = INT32_MIN;
	static int32_t t63 = 120;

	t63 = (x261<=((x262<x263)/x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x269 = 0;
	static int8_t x270 = 4;
	int64_t x271 = INT64_MIN;
	int64_t x272 = 13542LL;
	volatile int32_t t64 = -26;

	t64 = (x269<=((x270<x271)/x272));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x273 = INT32_MIN;
	volatile int32_t x274 = -1;
	int64_t x276 = INT64_MIN;

	t65 = (x273<=((x274<x275)/x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = -1LL;
	volatile int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;
	uint16_t x280 = 13U;
	static int32_t t66 = 39678309;

	t66 = (x277<=((x278<x279)/x280));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x281 = INT8_MIN;
	uint16_t x282 = 3502U;
	static int32_t x283 = INT32_MIN;
	volatile int32_t t67 = 39062890;

	t67 = (x281<=((x282<x283)/x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x286 = UINT64_MAX;
	static int32_t x288 = -21019438;
	int32_t t68 = -254801424;

	t68 = (x285<=((x286<x287)/x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = -3;
	static volatile int8_t x294 = -1;
	uint8_t x295 = 49U;
	uint8_t x296 = UINT8_MAX;
	static int32_t t69 = -974266;

	t69 = (x293<=((x294<x295)/x296));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x298 = -1;
	int32_t x300 = INT32_MIN;
	volatile int32_t t70 = -277736107;

	t70 = (x297<=((x298<x299)/x300));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x301 = 3826U;
	uint32_t x302 = 848238U;
	volatile int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;

	t71 = (x301<=((x302<x303)/x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = 40U;
	int32_t x306 = 1;
	int32_t x307 = INT32_MIN;

	t72 = (x305<=((x306<x307)/x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x312 = INT16_MIN;

	t73 = (x309<=((x310<x311)/x312));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x313 = 964438726;
	int32_t x314 = INT32_MIN;
	int64_t x315 = INT64_MIN;
	int64_t x316 = 68470078740LL;
	volatile int32_t t74 = 678873;

	t74 = (x313<=((x314<x315)/x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = -294;
	int16_t x318 = -1;
	static uint64_t x319 = 7517LLU;
	int32_t t75 = -10741;

	t75 = (x317<=((x318<x319)/x320));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = -183248;
	int32_t x322 = INT32_MIN;
	volatile uint8_t x324 = 61U;
	static volatile int32_t t76 = 7221;

	t76 = (x321<=((x322<x323)/x324));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x325 = UINT64_MAX;
	int32_t x327 = INT32_MIN;
	static uint16_t x328 = 7U;
	static int32_t t77 = 7187;

	t77 = (x325<=((x326<x327)/x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x329 = 119;
	uint64_t x330 = UINT64_MAX;
	uint32_t x331 = UINT32_MAX;
	static uint8_t x332 = 1U;

	t78 = (x329<=((x330<x331)/x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = -1;
	static uint8_t x336 = UINT8_MAX;
	volatile int32_t t79 = 0;

	t79 = (x333<=((x334<x335)/x336));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = 1901561626519LLU;
	volatile int16_t x338 = -1;
	volatile int64_t x339 = INT64_MIN;
	int32_t x340 = -1;
	volatile int32_t t80 = -466567704;

	t80 = (x337<=((x338<x339)/x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x341 = INT32_MIN;
	int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MAX;
	volatile int32_t x344 = -456037;
	volatile int32_t t81 = -622578;

	t81 = (x341<=((x342<x343)/x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = UINT16_MAX;
	volatile int64_t x346 = INT64_MAX;
	int16_t x347 = INT16_MAX;
	uint32_t x348 = 3323U;
	int32_t t82 = -14106845;

	t82 = (x345<=((x346<x347)/x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x349 = INT32_MIN;
	int64_t x352 = -1LL;

	t83 = (x349<=((x350<x351)/x352));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = -46;
	volatile int8_t x355 = INT8_MIN;
	volatile int32_t x356 = -1;
	static volatile int32_t t84 = 2942;

	t84 = (x353<=((x354<x355)/x356));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = -305LL;
	volatile uint32_t x358 = 1761227781U;
	volatile int32_t x359 = 2;
	static uint32_t x360 = UINT32_MAX;

	t85 = (x357<=((x358<x359)/x360));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x361 = 3;
	int64_t x363 = -1LL;
	int8_t x364 = INT8_MIN;
	volatile int32_t t86 = -432466958;

	t86 = (x361<=((x362<x363)/x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x366 = UINT16_MAX;
	int64_t x368 = 520135306LL;

	t87 = (x365<=((x366<x367)/x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = INT8_MIN;
	static uint64_t x370 = 2316LLU;
	int64_t x371 = INT64_MIN;
	uint8_t x372 = 2U;

	t88 = (x369<=((x370<x371)/x372));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x373 = -1;
	volatile int8_t x375 = 29;
	int16_t x376 = 829;
	static volatile int32_t t89 = -3563;

	t89 = (x373<=((x374<x375)/x376));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x377 = 1454114U;
	int16_t x378 = INT16_MAX;
	int16_t x380 = INT16_MIN;
	volatile int32_t t90 = -14;

	t90 = (x377<=((x378<x379)/x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x381 = 1327LL;
	static uint64_t x382 = 4108LLU;
	uint64_t x383 = UINT64_MAX;
	int32_t t91 = -9992;

	t91 = (x381<=((x382<x383)/x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x385 = 4353U;
	uint32_t x386 = 35U;
	static int64_t x388 = -29629202901LL;
	volatile int32_t t92 = 0;

	t92 = (x385<=((x386<x387)/x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = 1;
	int32_t x390 = 44425829;
	static volatile int8_t x392 = -8;

	t93 = (x389<=((x390<x391)/x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = -598598587028LL;
	volatile uint64_t x394 = UINT64_MAX;
	uint8_t x395 = UINT8_MAX;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t94 = -9870861;

	t94 = (x393<=((x394<x395)/x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = 212051729LL;
	uint8_t x398 = 6U;
	int16_t x399 = INT16_MIN;
	int64_t x400 = INT64_MIN;
	volatile int32_t t95 = 6572;

	t95 = (x397<=((x398<x399)/x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x402 = 93U;
	int8_t x403 = 0;
	uint32_t x404 = 3688802U;
	int32_t t96 = 216077;

	t96 = (x401<=((x402<x403)/x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = INT8_MIN;
	static uint32_t x406 = 20U;
	static uint8_t x408 = 5U;
	int32_t t97 = 329506625;

	t97 = (x405<=((x406<x407)/x408));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x410 = 3774468307LL;
	int64_t x411 = 6700138774061LL;
	volatile int32_t t98 = 183;

	t98 = (x409<=((x410<x411)/x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x414 = 38U;
	volatile uint64_t x415 = 141275509LLU;
	int32_t x416 = INT32_MIN;
	int32_t t99 = -195798;

	t99 = (x413<=((x414<x415)/x416));

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


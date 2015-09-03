#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x6 = -1;
int8_t x8 = INT8_MIN;
static int32_t x15 = INT32_MAX;
static int16_t x16 = -1;
static int32_t t3 = 14;
uint32_t x18 = 152U;
int32_t t4 = 308390576;
static int32_t x27 = -1;
static volatile int32_t t6 = 2952;
uint16_t x43 = 174U;
volatile int16_t x44 = INT16_MIN;
volatile int32_t t11 = 537471987;
int32_t x51 = INT32_MAX;
static int64_t x57 = INT64_MIN;
volatile int32_t t14 = -3;
volatile int32_t t15 = 29;
int16_t x68 = 1;
static int32_t t16 = 3;
static volatile int32_t x90 = -1;
static int32_t x95 = INT32_MAX;
int32_t t23 = -142611;
static volatile int16_t x97 = INT16_MIN;
int32_t x99 = -1;
int32_t t24 = 14764;
static volatile int8_t x102 = INT8_MIN;
static int32_t t25 = 0;
int32_t x105 = INT32_MIN;
uint8_t x115 = 94U;
uint32_t x119 = UINT32_MAX;
volatile uint32_t x126 = 3U;
uint8_t x130 = 51U;
volatile int32_t x136 = INT32_MIN;
int16_t x140 = -8;
int16_t x143 = 40;
uint64_t x148 = UINT64_MAX;
volatile int16_t x149 = INT16_MAX;
static int16_t x153 = INT16_MIN;
int32_t x158 = -1461352;
int32_t x172 = -1;
int8_t x173 = -1;
static uint32_t x175 = UINT32_MAX;
volatile int32_t t43 = -792;
volatile int32_t t45 = 79;
uint16_t x197 = 353U;
uint32_t x198 = 675520U;
int32_t x202 = -11832205;
static uint64_t x210 = 468394798993706511LLU;
int32_t x230 = -2572562;
int16_t x234 = INT16_MIN;
int64_t x243 = INT64_MAX;
int64_t x245 = -245243187LL;
int16_t x246 = INT16_MAX;
int64_t x247 = INT64_MIN;
static uint8_t x249 = 26U;
int32_t x255 = -1;
volatile int32_t t63 = -124;
int16_t x269 = INT16_MIN;
int16_t x277 = INT16_MIN;
int32_t x278 = INT32_MIN;
int16_t x283 = INT16_MIN;
int32_t x290 = INT32_MIN;
volatile int32_t t71 = 2065;
uint8_t x295 = 26U;
static int32_t t74 = -142;
volatile int32_t t77 = 0;
volatile int32_t t81 = -20174;
uint32_t x334 = UINT32_MAX;
int32_t x338 = INT32_MIN;
volatile int64_t x342 = 249714801702414LL;
volatile int64_t x343 = INT64_MIN;
uint16_t x346 = UINT16_MAX;
static int32_t t85 = -105;
int16_t x360 = 191;
int16_t x362 = -1;
uint8_t x366 = 12U;
uint32_t x367 = 24U;
volatile int32_t t90 = 15574;
uint16_t x376 = 19921U;
int32_t t92 = -176;
static volatile uint16_t x377 = 386U;
volatile int8_t x378 = 13;
int8_t x380 = -1;
static volatile int32_t t94 = -122766;
volatile int64_t x386 = INT64_MIN;
int32_t x391 = INT32_MAX;
static volatile int32_t t97 = 84755;
uint16_t x401 = UINT16_MAX;


void f0(void) {
	static int64_t x1 = 29385537LL;
	int8_t x2 = INT8_MIN;
	int16_t x3 = INT16_MIN;
	uint16_t x4 = 100U;
	volatile int32_t t0 = 534621208;

	t0 = (x1<((x2<=x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int64_t x7 = INT64_MAX;
	volatile int32_t t1 = 15;

	t1 = (x5<((x6<=x7)/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x10 = -3;
	int32_t x11 = -14;
	static volatile int16_t x12 = INT16_MIN;
	static int32_t t2 = 28923397;

	t2 = (x9<((x10<=x11)/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MAX;
	volatile int16_t x14 = INT16_MAX;

	t3 = (x13<((x14<=x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int16_t x19 = 4;
	int32_t x20 = -1;

	t4 = (x17<((x18<=x19)/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = -13574;
	int16_t x23 = -1;
	static int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = 314618;

	t5 = (x21<((x22<=x23)/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -218LL;
	int16_t x26 = INT16_MIN;
	int32_t x28 = -1;

	t6 = (x25<((x26<=x27)/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int16_t x30 = INT16_MIN;
	volatile int8_t x31 = INT8_MIN;
	int32_t x32 = -801;
	int32_t t7 = -316;

	t7 = (x29<((x30<=x31)/x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 0;
	int32_t x34 = 464992;
	static volatile int16_t x35 = 99;
	int8_t x36 = 3;
	volatile int32_t t8 = 11;

	t8 = (x33<((x34<=x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -859;
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = 25;
	int8_t x40 = 1;
	static int32_t t9 = 203;

	t9 = (x37<((x38<=x39)/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 2LL;
	volatile uint16_t x42 = 10U;
	static volatile int32_t t10 = -239201;

	t10 = (x41<((x42<=x43)/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	static int8_t x46 = INT8_MAX;
	int8_t x47 = 16;
	uint16_t x48 = UINT16_MAX;

	t11 = (x45<((x46<=x47)/x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x49 = -1;
	static int8_t x50 = -1;
	static int16_t x52 = INT16_MAX;
	static int32_t t12 = -276257755;

	t12 = (x49<((x50<=x51)/x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -3;
	int32_t x54 = INT32_MIN;
	int64_t x55 = 14960843477411LL;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 157;

	t13 = (x53<((x54<=x55)/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 3724U;
	int8_t x59 = -1;
	int8_t x60 = 55;

	t14 = (x57<((x58<=x59)/x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 12U;
	int8_t x62 = -1;
	volatile int8_t x63 = INT8_MAX;
	int32_t x64 = 867;

	t15 = (x61<((x62<=x63)/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	volatile uint32_t x66 = 5802900U;
	static int8_t x67 = 0;

	t16 = (x65<((x66<=x67)/x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int32_t x70 = -9444;
	volatile int16_t x71 = -209;
	volatile int8_t x72 = INT8_MIN;
	int32_t t17 = 1127244;

	t17 = (x69<((x70<=x71)/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	volatile uint16_t x74 = 724U;
	int8_t x75 = -1;
	int8_t x76 = -49;
	volatile int32_t t18 = 1120300;

	t18 = (x73<((x74<=x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int32_t x78 = -1;
	uint64_t x79 = UINT64_MAX;
	uint8_t x80 = UINT8_MAX;
	int32_t t19 = 363;

	t19 = (x77<((x78<=x79)/x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	volatile int8_t x82 = INT8_MAX;
	uint32_t x83 = 7323766U;
	volatile int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 10822819;

	t20 = (x81<((x82<=x83)/x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x85 = UINT32_MAX;
	int32_t x86 = INT32_MIN;
	int64_t x87 = 111961126LL;
	static int64_t x88 = INT64_MAX;
	int32_t t21 = -7;

	t21 = (x85<((x86<=x87)/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 5;
	uint32_t x91 = 1051059179U;
	static uint64_t x92 = UINT64_MAX;
	static int32_t t22 = -179;

	t22 = (x89<((x90<=x91)/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MAX;
	uint8_t x96 = 1U;

	t23 = (x93<((x94<=x95)/x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = UINT16_MAX;
	volatile int8_t x100 = -1;

	t24 = (x97<((x98<=x99)/x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = INT64_MIN;
	volatile int32_t x103 = INT32_MAX;
	uint8_t x104 = 7U;

	t25 = (x101<((x102<=x103)/x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x106 = 29U;
	uint32_t x107 = UINT32_MAX;
	volatile int64_t x108 = -1LL;
	int32_t t26 = 484605871;

	t26 = (x105<((x106<=x107)/x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = INT64_MIN;
	volatile int32_t x110 = -342472;
	int8_t x111 = -1;
	volatile uint64_t x112 = UINT64_MAX;
	int32_t t27 = -3993;

	t27 = (x109<((x110<=x111)/x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x113 = 228LLU;
	static int8_t x114 = INT8_MIN;
	static int8_t x116 = -1;
	volatile int32_t t28 = -3;

	t28 = (x113<((x114<=x115)/x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 359534;
	uint32_t x118 = UINT32_MAX;
	uint64_t x120 = UINT64_MAX;
	int32_t t29 = -12203922;

	t29 = (x117<((x118<=x119)/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 129737626;
	int32_t x122 = -291526;
	int32_t x123 = INT32_MIN;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = 175;

	t30 = (x121<((x122<=x123)/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint16_t x127 = 3291U;
	uint8_t x128 = 32U;
	volatile int32_t t31 = -104;

	t31 = (x125<((x126<=x127)/x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int16_t x131 = INT16_MAX;
	int16_t x132 = 1;
	volatile int32_t t32 = 12439;

	t32 = (x129<((x130<=x131)/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 3U;
	int32_t x134 = 1028140;
	int8_t x135 = 1;
	int32_t t33 = -21;

	t33 = (x133<((x134<=x135)/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	int64_t x138 = INT64_MIN;
	static int8_t x139 = -1;
	int32_t t34 = 1;

	t34 = (x137<((x138<=x139)/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 1;
	volatile int64_t x142 = -608116098LL;
	volatile int64_t x144 = -1LL;
	volatile int32_t t35 = -13390739;

	t35 = (x141<((x142<=x143)/x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 247718LLU;
	int8_t x146 = INT8_MIN;
	uint64_t x147 = 19681193LLU;
	volatile int32_t t36 = -985632;

	t36 = (x145<((x146<=x147)/x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x150 = INT32_MIN;
	int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MAX;
	volatile int32_t t37 = -321;

	t37 = (x149<((x150<=x151)/x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = -1;
	uint64_t x155 = UINT64_MAX;
	int64_t x156 = -1LL;
	volatile int32_t t38 = 0;

	t38 = (x153<((x154<=x155)/x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static uint8_t x159 = UINT8_MAX;
	int8_t x160 = INT8_MIN;
	int32_t t39 = -507;

	t39 = (x157<((x158<=x159)/x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -49242;
	int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MIN;
	static int8_t x164 = INT8_MIN;
	volatile int32_t t40 = -5338;

	t40 = (x161<((x162<=x163)/x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	int64_t x166 = INT64_MAX;
	int32_t x167 = -1;
	volatile int64_t x168 = -1LL;
	volatile int32_t t41 = -7983901;

	t41 = (x165<((x166<=x167)/x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int64_t x170 = INT64_MIN;
	uint16_t x171 = 1975U;
	int32_t t42 = -117756573;

	t42 = (x169<((x170<=x171)/x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x174 = 16U;
	uint64_t x176 = UINT64_MAX;

	t43 = (x173<((x174<=x175)/x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = -2033048683624176LL;
	uint32_t x179 = 203194U;
	volatile uint8_t x180 = 88U;
	int32_t t44 = -35;

	t44 = (x177<((x178<=x179)/x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = 424U;
	static uint64_t x182 = 3LLU;
	static uint8_t x183 = 2U;
	int32_t x184 = -42043737;

	t45 = (x181<((x182<=x183)/x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = -21;
	static int8_t x187 = 9;
	int16_t x188 = INT16_MIN;
	volatile int32_t t46 = 23;

	t46 = (x185<((x186<=x187)/x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x193 = INT16_MAX;
	static volatile int32_t x194 = -1;
	int16_t x195 = INT16_MAX;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t47 = -1436335;

	t47 = (x193<((x194<=x195)/x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x199 = 101LLU;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t48 = 138;

	t48 = (x197<((x198<=x199)/x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = 810U;
	int16_t x203 = 1620;
	static int64_t x204 = -1LL;
	int32_t t49 = 33040383;

	t49 = (x201<((x202<=x203)/x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = -1;
	uint64_t x206 = 1979LLU;
	volatile int8_t x207 = INT8_MAX;
	static int32_t x208 = INT32_MAX;
	volatile int32_t t50 = 454;

	t50 = (x205<((x206<=x207)/x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x209 = -43138292;
	int64_t x211 = INT64_MAX;
	static int64_t x212 = INT64_MIN;
	int32_t t51 = 263642;

	t51 = (x209<((x210<=x211)/x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = 141LLU;
	int8_t x214 = -1;
	uint8_t x215 = UINT8_MAX;
	static int8_t x216 = -1;
	static int32_t t52 = 3;

	t52 = (x213<((x214<=x215)/x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -1;
	int8_t x218 = INT8_MIN;
	volatile int64_t x219 = INT64_MIN;
	int64_t x220 = -1LL;
	int32_t t53 = -15025;

	t53 = (x217<((x218<=x219)/x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x221 = 40LL;
	int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MAX;
	volatile uint16_t x224 = 26612U;
	int32_t t54 = 409479;

	t54 = (x221<((x222<=x223)/x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = -1;
	static uint32_t x226 = 3773554U;
	uint32_t x227 = UINT32_MAX;
	volatile uint32_t x228 = UINT32_MAX;
	volatile int32_t t55 = -1008344;

	t55 = (x225<((x226<=x227)/x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x229 = -1;
	uint8_t x231 = 2U;
	int64_t x232 = INT64_MAX;
	static int32_t t56 = -1;

	t56 = (x229<((x230<=x231)/x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MIN;
	volatile int32_t x235 = INT32_MIN;
	volatile int8_t x236 = 4;
	volatile int32_t t57 = -16176256;

	t57 = (x233<((x234<=x235)/x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x237 = INT16_MAX;
	uint64_t x238 = 949LLU;
	volatile uint32_t x239 = UINT32_MAX;
	volatile int64_t x240 = 301980879LL;
	int32_t t58 = 737028;

	t58 = (x237<((x238<=x239)/x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = 555343389222791LLU;
	static uint16_t x242 = UINT16_MAX;
	int64_t x244 = -4519767LL;
	int32_t t59 = -196180;

	t59 = (x241<((x242<=x243)/x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x248 = INT16_MIN;
	int32_t t60 = -7549120;

	t60 = (x245<((x246<=x247)/x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x250 = UINT64_MAX;
	uint16_t x251 = 412U;
	int16_t x252 = -3950;
	static volatile int32_t t61 = 63;

	t61 = (x249<((x250<=x251)/x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x253 = -1;
	uint8_t x254 = UINT8_MAX;
	int8_t x256 = INT8_MIN;
	int32_t t62 = 1;

	t62 = (x253<((x254<=x255)/x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = 54;
	int16_t x258 = INT16_MIN;
	uint16_t x259 = UINT16_MAX;
	int16_t x260 = -16111;

	t63 = (x257<((x258<=x259)/x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = -1;
	uint64_t x262 = 5LLU;
	static volatile int16_t x263 = INT16_MIN;
	int8_t x264 = -1;
	static int32_t t64 = -50459712;

	t64 = (x261<((x262<=x263)/x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MIN;
	uint16_t x266 = 24708U;
	volatile int16_t x267 = -1;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t65 = -327825800;

	t65 = (x265<((x266<=x267)/x268));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x270 = 1U;
	uint64_t x271 = 478360689LLU;
	int8_t x272 = INT8_MIN;
	int32_t t66 = 12263741;

	t66 = (x269<((x270<=x271)/x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = 4LL;
	volatile int8_t x274 = INT8_MIN;
	uint32_t x275 = 14924U;
	volatile uint32_t x276 = 207U;
	int32_t t67 = -222512;

	t67 = (x273<((x274<=x275)/x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x279 = 155LLU;
	int16_t x280 = -4;
	volatile int32_t t68 = 113;

	t68 = (x277<((x278<=x279)/x280));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = UINT64_MAX;
	static int16_t x282 = INT16_MIN;
	int16_t x284 = 16;
	static int32_t t69 = 665;

	t69 = (x281<((x282<=x283)/x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = 1651;
	int16_t x286 = INT16_MIN;
	int64_t x287 = -1LL;
	uint64_t x288 = 803LLU;
	static volatile int32_t t70 = -216153971;

	t70 = (x285<((x286<=x287)/x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = INT32_MIN;
	volatile int8_t x291 = INT8_MAX;
	static int32_t x292 = INT32_MIN;

	t71 = (x289<((x290<=x291)/x292));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = INT8_MIN;
	static uint32_t x294 = UINT32_MAX;
	int16_t x296 = -1591;
	volatile int32_t t72 = 28388;

	t72 = (x293<((x294<=x295)/x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = INT8_MIN;
	uint32_t x298 = UINT32_MAX;
	int8_t x299 = INT8_MAX;
	int64_t x300 = -21124133897LL;
	volatile int32_t t73 = 660347433;

	t73 = (x297<((x298<=x299)/x300));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	static uint16_t x303 = UINT16_MAX;
	int8_t x304 = INT8_MIN;

	t74 = (x301<((x302<=x303)/x304));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x305 = 18U;
	int8_t x306 = INT8_MAX;
	int64_t x307 = INT64_MAX;
	volatile uint16_t x308 = 1U;
	volatile int32_t t75 = -1;

	t75 = (x305<((x306<=x307)/x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x309 = 25LLU;
	static volatile int8_t x310 = INT8_MIN;
	volatile uint32_t x311 = 1229158U;
	int32_t x312 = INT32_MIN;
	static volatile int32_t t76 = 401;

	t76 = (x309<((x310<=x311)/x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = 44U;
	uint16_t x314 = UINT16_MAX;
	volatile int64_t x315 = INT64_MIN;
	static int32_t x316 = -30946;

	t77 = (x313<((x314<=x315)/x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = -1;
	int64_t x318 = -1LL;
	static int64_t x319 = -1LL;
	uint64_t x320 = 12750288LLU;
	volatile int32_t t78 = -466995;

	t78 = (x317<((x318<=x319)/x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = -1;
	uint8_t x322 = 0U;
	int16_t x323 = INT16_MAX;
	int32_t x324 = -2;
	volatile int32_t t79 = -1;

	t79 = (x321<((x322<=x323)/x324));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = 1513786221946LL;
	volatile uint16_t x326 = 5506U;
	int8_t x327 = INT8_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t80 = 167;

	t80 = (x325<((x326<=x327)/x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x329 = 1755U;
	int64_t x330 = -1LL;
	int64_t x331 = INT64_MAX;
	static int8_t x332 = INT8_MIN;

	t81 = (x329<((x330<=x331)/x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x333 = 1U;
	int32_t x335 = 52573945;
	static int16_t x336 = 18;
	static volatile int32_t t82 = -144651;

	t82 = (x333<((x334<=x335)/x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = INT64_MIN;
	static uint32_t x339 = 622U;
	static uint64_t x340 = 8092LLU;
	int32_t t83 = 192;

	t83 = (x337<((x338<=x339)/x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x341 = 4393U;
	static volatile int32_t x344 = INT32_MIN;
	static int32_t t84 = 1912498;

	t84 = (x341<((x342<=x343)/x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = INT32_MIN;
	uint32_t x347 = 16634893U;
	static uint32_t x348 = 622U;

	t85 = (x345<((x346<=x347)/x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = -1LL;
	int64_t x350 = INT64_MIN;
	volatile uint32_t x351 = 2228U;
	int64_t x352 = -1LL;
	int32_t t86 = -794096;

	t86 = (x349<((x350<=x351)/x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = -2214886;
	volatile int16_t x354 = -131;
	volatile uint16_t x355 = 11140U;
	volatile uint8_t x356 = 2U;
	volatile int32_t t87 = 14616221;

	t87 = (x353<((x354<=x355)/x356));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x357 = 753U;
	int8_t x358 = 0;
	int64_t x359 = -22005832139356LL;
	volatile int32_t t88 = 665242945;

	t88 = (x357<((x358<=x359)/x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x361 = 3U;
	int8_t x363 = INT8_MIN;
	volatile uint8_t x364 = UINT8_MAX;
	int32_t t89 = 2696;

	t89 = (x361<((x362<=x363)/x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x365 = 94082;
	static uint64_t x368 = 65154730765408879LLU;

	t90 = (x365<((x366<=x367)/x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = -1;
	uint8_t x370 = 1U;
	static int8_t x371 = INT8_MIN;
	volatile int16_t x372 = INT16_MIN;
	int32_t t91 = 4374;

	t91 = (x369<((x370<=x371)/x372));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = INT32_MIN;
	static volatile int64_t x374 = 1106362344LL;
	static int64_t x375 = 876723LL;

	t92 = (x373<((x374<=x375)/x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x379 = INT16_MIN;
	static int32_t t93 = 532873103;

	t93 = (x377<((x378<=x379)/x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x381 = INT64_MAX;
	static int16_t x382 = INT16_MIN;
	uint32_t x383 = UINT32_MAX;
	static volatile int64_t x384 = INT64_MIN;

	t94 = (x381<((x382<=x383)/x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = INT16_MIN;
	volatile int16_t x387 = -339;
	volatile int64_t x388 = 28LL;
	volatile int32_t t95 = -20013050;

	t95 = (x385<((x386<=x387)/x388));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x389 = INT16_MIN;
	uint32_t x390 = UINT32_MAX;
	uint16_t x392 = 13U;
	static volatile int32_t t96 = -150439;

	t96 = (x389<((x390<=x391)/x392));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x393 = 3U;
	volatile uint32_t x394 = 6009U;
	int8_t x395 = INT8_MIN;
	uint64_t x396 = 226208458954021384LLU;

	t97 = (x393<((x394<=x395)/x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = -1;
	int16_t x398 = -1;
	uint8_t x399 = 1U;
	int32_t x400 = -124;
	int32_t t98 = 88;

	t98 = (x397<((x398<=x399)/x400));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x402 = -1LL;
	uint16_t x403 = 201U;
	volatile int32_t x404 = INT32_MIN;
	int32_t t99 = 173407213;

	t99 = (x401<((x402<=x403)/x404));

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


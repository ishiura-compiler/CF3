#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MAX;
uint32_t x6 = 193993042U;
static int8_t x8 = 8;
int8_t x11 = INT8_MAX;
int8_t x12 = 1;
static int16_t x15 = INT16_MIN;
int32_t x16 = -1;
int32_t t3 = -39;
volatile uint32_t x22 = UINT32_MAX;
int64_t x23 = INT64_MIN;
int64_t x24 = INT64_MIN;
volatile int16_t x26 = INT16_MAX;
uint16_t x30 = UINT16_MAX;
int8_t x40 = -31;
volatile int32_t t11 = -18846;
int32_t x49 = -74727;
volatile int64_t x52 = -2494272055LL;
static int32_t x53 = INT32_MAX;
int32_t x54 = 144395006;
int16_t x67 = -62;
volatile int16_t x72 = INT16_MIN;
int64_t x76 = INT64_MIN;
int32_t x77 = 13028;
volatile int32_t t19 = 15303;
uint64_t x102 = 462910829351338628LLU;
uint8_t x104 = 113U;
volatile int32_t t25 = -52937;
int32_t x106 = -1;
static int32_t x113 = -1;
uint8_t x118 = UINT8_MAX;
int8_t x119 = 8;
volatile int32_t t29 = -324689;
int8_t x131 = -1;
int64_t x140 = INT64_MAX;
uint32_t x142 = 521987U;
static uint8_t x145 = 8U;
volatile int64_t x146 = INT64_MAX;
static uint8_t x147 = 19U;
volatile int32_t x149 = -1;
static int8_t x151 = -1;
int16_t x154 = INT16_MAX;
volatile uint32_t x160 = UINT32_MAX;
int32_t x165 = INT32_MIN;
static int32_t x166 = 64661;
volatile int64_t x172 = INT64_MIN;
volatile int8_t x174 = 45;
int16_t x175 = INT16_MIN;
static int32_t t43 = -6;
volatile int16_t x178 = -8075;
int32_t t44 = 1;
int32_t x188 = 0;
int16_t x190 = -1;
static int8_t x194 = 1;
static int16_t x196 = INT16_MAX;
int32_t x200 = -1;
int32_t t51 = 43998156;
uint32_t x215 = 7346182U;
int32_t x218 = INT32_MIN;
static int32_t x220 = INT32_MIN;
static int32_t t54 = 3501;
int16_t x226 = INT16_MIN;
uint8_t x231 = 3U;
volatile int64_t x233 = -1LL;
static int32_t x235 = INT32_MAX;
volatile int32_t t58 = 13494015;
int64_t x239 = 2596754063LL;
uint8_t x250 = 5U;
static int32_t x255 = -1417538;
int16_t x256 = INT16_MIN;
static int32_t t63 = 7;
volatile int32_t t64 = 6109;
volatile int64_t x262 = INT64_MIN;
int32_t x266 = -54065922;
int16_t x267 = INT16_MIN;
int8_t x271 = INT8_MIN;
int64_t x272 = INT64_MIN;
volatile int32_t t68 = 15750009;
volatile int32_t x277 = INT32_MIN;
static int8_t x283 = INT8_MIN;
volatile int32_t t70 = 1;
int32_t x286 = -1;
int16_t x301 = INT16_MIN;
int32_t t75 = -13;
int8_t x306 = INT8_MIN;
int32_t t76 = 62964;
static int32_t x311 = INT32_MIN;
uint8_t x318 = UINT8_MAX;
int32_t x321 = INT32_MIN;
uint16_t x328 = UINT16_MAX;
int64_t x331 = INT64_MIN;
uint32_t x335 = UINT32_MAX;
uint16_t x341 = 1U;
uint8_t x342 = UINT8_MAX;
volatile int8_t x343 = INT8_MAX;
int64_t x348 = INT64_MIN;
volatile uint16_t x364 = 15U;
static int8_t x365 = INT8_MAX;
int64_t x371 = 4929745647484LL;
static int32_t t92 = 53;
int64_t x373 = 4087205568516377197LL;
static uint64_t x378 = 514420LLU;
int8_t x380 = -1;
volatile int64_t x388 = INT64_MIN;
uint16_t x391 = UINT16_MAX;
uint32_t x398 = 145075746U;
int8_t x400 = INT8_MIN;


void f0(void) {
	uint64_t x2 = 15381LLU;
	volatile int16_t x3 = 2658;
	volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -7083474;

	t0 = (x1<((x2<=x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 530233257;
	uint16_t x7 = 99U;
	volatile int32_t t1 = 36513;

	t1 = (x5<((x6<=x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int32_t x10 = INT32_MAX;
	volatile int32_t t2 = 14;

	t2 = (x9<((x10<=x11)<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = -1LL;

	t3 = (x13<((x14<=x15)<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 103618650U;
	static int8_t x18 = INT8_MIN;
	int8_t x19 = -1;
	int64_t x20 = 129657LL;
	volatile int32_t t4 = 81;

	t4 = (x17<((x18<=x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int32_t t5 = -3185986;

	t5 = (x21<((x22<=x23)<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 38583209U;
	static int16_t x27 = -1;
	int64_t x28 = -1LL;
	volatile int32_t t6 = -1149;

	t6 = (x25<((x26<=x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 8U;
	volatile uint8_t x31 = 38U;
	uint16_t x32 = 39U;
	volatile int32_t t7 = 1;

	t7 = (x29<((x30<=x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int32_t x34 = 44242621;
	int32_t x35 = 45;
	static int32_t x36 = INT32_MIN;
	int32_t t8 = 127273;

	t8 = (x33<((x34<=x35)<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 0;
	int64_t x38 = INT64_MAX;
	static int64_t x39 = -1LL;
	volatile int32_t t9 = 22;

	t9 = (x37<((x38<=x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 4U;
	static int32_t x42 = -1;
	int16_t x43 = -1;
	volatile int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 0;

	t10 = (x41<((x42<=x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint32_t x46 = UINT32_MAX;
	static int8_t x47 = INT8_MIN;
	static uint16_t x48 = 517U;

	t11 = (x45<((x46<=x47)<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MIN;
	static int32_t x51 = INT32_MIN;
	volatile int32_t t12 = 4634;

	t12 = (x49<((x50<=x51)<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x55 = -1;
	uint8_t x56 = 86U;
	volatile int32_t t13 = -59;

	t13 = (x53<((x54<=x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	volatile uint16_t x58 = UINT16_MAX;
	int8_t x59 = -1;
	int32_t x60 = INT32_MIN;
	static volatile int32_t t14 = 253741179;

	t14 = (x57<((x58<=x59)<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 21;
	uint16_t x62 = 20U;
	int32_t x63 = INT32_MIN;
	int8_t x64 = -39;
	volatile int32_t t15 = -2368;

	t15 = (x61<((x62<=x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int8_t x66 = -1;
	int64_t x68 = -22414333139653LL;
	volatile int32_t t16 = -459;

	t16 = (x65<((x66<=x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = 25593475U;
	uint64_t x70 = 6746527547981530LLU;
	int16_t x71 = -16314;
	static volatile int32_t t17 = -2476217;

	t17 = (x69<((x70<=x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 1115U;
	int32_t x74 = INT32_MIN;
	volatile uint32_t x75 = 552503215U;
	volatile int32_t t18 = -2210;

	t18 = (x73<((x74<=x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = 232399706U;
	int64_t x79 = INT64_MIN;
	uint8_t x80 = 0U;

	t19 = (x77<((x78<=x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	uint32_t x82 = 22U;
	uint64_t x83 = 174181284801LLU;
	volatile int64_t x84 = 599407189LL;
	static volatile int32_t t20 = 6;

	t20 = (x81<((x82<=x83)<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 14720004996LLU;
	static uint8_t x86 = UINT8_MAX;
	int32_t x87 = -16746;
	uint16_t x88 = 3586U;
	int32_t t21 = 45400436;

	t21 = (x85<((x86<=x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	volatile int8_t x90 = INT8_MIN;
	static volatile int32_t x91 = -421;
	int8_t x92 = INT8_MIN;
	int32_t t22 = 45;

	t22 = (x89<((x90<=x91)<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 86411830603668102LLU;
	int32_t x94 = INT32_MAX;
	int8_t x95 = INT8_MIN;
	int16_t x96 = INT16_MIN;
	int32_t t23 = -116106;

	t23 = (x93<((x94<=x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	static uint64_t x98 = 390786615644515LLU;
	static uint64_t x99 = 511101110243LLU;
	int8_t x100 = 0;
	int32_t t24 = -564019;

	t24 = (x97<((x98<=x99)<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int64_t x103 = INT64_MIN;

	t25 = (x101<((x102<=x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	uint16_t x107 = 3U;
	static int32_t x108 = INT32_MIN;
	volatile int32_t t26 = -937;

	t26 = (x105<((x106<=x107)<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MAX;
	static volatile int8_t x110 = INT8_MIN;
	int16_t x111 = 1679;
	int8_t x112 = 2;
	volatile int32_t t27 = 164522;

	t27 = (x109<((x110<=x111)<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = 1U;
	int8_t x115 = 53;
	int8_t x116 = INT8_MIN;
	static int32_t t28 = -62;

	t28 = (x113<((x114<=x115)<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	static int16_t x120 = 1;

	t29 = (x117<((x118<=x119)<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int16_t x122 = -1;
	int8_t x123 = -1;
	int64_t x124 = INT64_MIN;
	static int32_t t30 = -1;

	t30 = (x121<((x122<=x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int32_t x126 = INT32_MIN;
	int8_t x127 = INT8_MIN;
	uint64_t x128 = 554958LLU;
	int32_t t31 = 44;

	t31 = (x125<((x126<=x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MAX;
	int8_t x130 = -1;
	int32_t x132 = INT32_MAX;
	volatile int32_t t32 = -8132430;

	t32 = (x129<((x130<=x131)<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = -1;
	static int8_t x134 = INT8_MIN;
	uint16_t x135 = 149U;
	int8_t x136 = INT8_MIN;
	int32_t t33 = 862466977;

	t33 = (x133<((x134<=x135)<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	volatile int64_t x138 = INT64_MIN;
	int8_t x139 = INT8_MAX;
	volatile int32_t t34 = -428541;

	t34 = (x137<((x138<=x139)<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -14523;
	static int16_t x143 = INT16_MAX;
	int32_t x144 = 55;
	volatile int32_t t35 = -3717706;

	t35 = (x141<((x142<=x143)<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x148 = -4072163LL;
	int32_t t36 = -1473612;

	t36 = (x145<((x146<=x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x150 = 1U;
	int32_t x152 = INT32_MAX;
	int32_t t37 = 34126;

	t37 = (x149<((x150<=x151)<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = UINT16_MAX;
	volatile uint64_t x155 = 973LLU;
	static int32_t x156 = 92987;
	static volatile int32_t t38 = -3933;

	t38 = (x153<((x154<=x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = INT16_MIN;
	int16_t x158 = INT16_MIN;
	uint16_t x159 = 0U;
	int32_t t39 = 9840878;

	t39 = (x157<((x158<=x159)<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 296059;
	int32_t x162 = INT32_MAX;
	int32_t x163 = -1;
	volatile int32_t x164 = 35016266;
	int32_t t40 = 3235;

	t40 = (x161<((x162<=x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x167 = UINT64_MAX;
	int32_t x168 = INT32_MIN;
	static int32_t t41 = 13064540;

	t41 = (x165<((x166<=x167)<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 134;
	int8_t x170 = INT8_MIN;
	int8_t x171 = INT8_MIN;
	static volatile int32_t t42 = 834702;

	t42 = (x169<((x170<=x171)<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -55;
	uint8_t x176 = UINT8_MAX;

	t43 = (x173<((x174<=x175)<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 12U;
	uint8_t x179 = 92U;
	int64_t x180 = 2323059592315LL;

	t44 = (x177<((x178<=x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	static volatile int8_t x182 = INT8_MIN;
	int64_t x183 = INT64_MIN;
	volatile int8_t x184 = 0;
	int32_t t45 = -1589;

	t45 = (x181<((x182<=x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 927U;
	int16_t x186 = INT16_MAX;
	int32_t x187 = 99394;
	volatile int32_t t46 = -34996;

	t46 = (x185<((x186<=x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 167775176875670LLU;
	uint64_t x191 = UINT64_MAX;
	volatile int8_t x192 = INT8_MIN;
	static int32_t t47 = 397;

	t47 = (x189<((x190<=x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x193 = 112U;
	static int16_t x195 = INT16_MAX;
	int32_t t48 = 3161;

	t48 = (x193<((x194<=x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MAX;
	uint16_t x198 = UINT16_MAX;
	int16_t x199 = INT16_MIN;
	int32_t t49 = -248516935;

	t49 = (x197<((x198<=x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -29;
	volatile int8_t x202 = INT8_MIN;
	static uint8_t x203 = 0U;
	int16_t x204 = -1;
	int32_t t50 = 9460704;

	t50 = (x201<((x202<=x203)<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	static uint32_t x206 = UINT32_MAX;
	int32_t x207 = -1;
	int8_t x208 = INT8_MAX;

	t51 = (x205<((x206<=x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 30LLU;
	static uint8_t x210 = 18U;
	int8_t x211 = 1;
	volatile uint64_t x212 = 201533494037LLU;
	int32_t t52 = -4394082;

	t52 = (x209<((x210<=x211)<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -13;
	int16_t x214 = INT16_MIN;
	volatile int32_t x216 = 360219858;
	volatile int32_t t53 = 92;

	t53 = (x213<((x214<=x215)<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	static int16_t x219 = -1;

	t54 = (x217<((x218<=x219)<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 98U;
	int16_t x222 = INT16_MAX;
	static volatile uint16_t x223 = 479U;
	int32_t x224 = 0;
	static volatile int32_t t55 = 248063;

	t55 = (x221<((x222<=x223)<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int64_t x227 = INT64_MAX;
	static volatile int32_t x228 = INT32_MAX;
	volatile int32_t t56 = 1;

	t56 = (x225<((x226<=x227)<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 91579300862448LLU;
	static int8_t x230 = 0;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = -426975073;

	t57 = (x229<((x230<=x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x234 = INT32_MIN;
	uint16_t x236 = UINT16_MAX;

	t58 = (x233<((x234<=x235)<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	uint32_t x238 = UINT32_MAX;
	uint16_t x240 = 466U;
	static volatile int32_t t59 = 612792;

	t59 = (x237<((x238<=x239)<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	uint16_t x242 = UINT16_MAX;
	int16_t x243 = -91;
	int64_t x244 = INT64_MIN;
	volatile int32_t t60 = -3060;

	t60 = (x241<((x242<=x243)<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x245 = UINT32_MAX;
	volatile int16_t x246 = INT16_MIN;
	uint32_t x247 = 75323934U;
	int32_t x248 = 2032846;
	int32_t t61 = -658;

	t61 = (x245<((x246<=x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -10997;
	volatile int16_t x251 = INT16_MIN;
	volatile uint16_t x252 = UINT16_MAX;
	int32_t t62 = 17877761;

	t62 = (x249<((x250<=x251)<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1965367968056LL;
	int8_t x254 = INT8_MAX;

	t63 = (x253<((x254<=x255)<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MAX;
	volatile int8_t x258 = INT8_MIN;
	int8_t x259 = -20;
	uint16_t x260 = 0U;

	t64 = (x257<((x258<=x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	uint8_t x263 = 7U;
	volatile uint16_t x264 = 7U;
	volatile int32_t t65 = -795642531;

	t65 = (x261<((x262<=x263)<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 31U;
	static int16_t x268 = INT16_MAX;
	volatile int32_t t66 = -343;

	t66 = (x265<((x266<=x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	uint32_t x270 = 35624451U;
	int32_t t67 = 214;

	t67 = (x269<((x270<=x271)<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = -199115039558779LL;
	int8_t x274 = 10;
	static uint64_t x275 = 17133554057LLU;
	int16_t x276 = 29;

	t68 = (x273<((x274<=x275)<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = -301428631066965388LL;
	int8_t x279 = INT8_MAX;
	static int8_t x280 = -1;
	volatile int32_t t69 = -75057125;

	t69 = (x277<((x278<=x279)<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	static volatile int64_t x282 = INT64_MIN;
	static volatile int32_t x284 = 5294275;

	t70 = (x281<((x282<=x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = 179734U;
	uint64_t x287 = 8696LLU;
	uint16_t x288 = 4U;
	static volatile int32_t t71 = -7811;

	t71 = (x285<((x286<=x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x289 = UINT8_MAX;
	volatile uint64_t x290 = UINT64_MAX;
	uint16_t x291 = UINT16_MAX;
	uint8_t x292 = UINT8_MAX;
	int32_t t72 = 86;

	t72 = (x289<((x290<=x291)<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x293 = INT32_MIN;
	static int16_t x294 = INT16_MIN;
	int16_t x295 = 4491;
	static int32_t x296 = INT32_MIN;
	int32_t t73 = -11482153;

	t73 = (x293<((x294<=x295)<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = 1492189913384LL;
	int64_t x299 = -553986527273417511LL;
	volatile int16_t x300 = INT16_MIN;
	int32_t t74 = 745133;

	t74 = (x297<((x298<=x299)<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x302 = 13199;
	int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MIN;

	t75 = (x301<((x302<=x303)<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int32_t x307 = INT32_MAX;
	int32_t x308 = -1;

	t76 = (x305<((x306<=x307)<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	static int32_t x310 = 283486;
	int64_t x312 = 93163627510348LL;
	static volatile int32_t t77 = 32819481;

	t77 = (x309<((x310<=x311)<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 3311;
	volatile uint32_t x314 = UINT32_MAX;
	volatile uint32_t x315 = UINT32_MAX;
	uint8_t x316 = 3U;
	volatile int32_t t78 = -923667;

	t78 = (x313<((x314<=x315)<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int64_t x319 = 231931182LL;
	uint32_t x320 = 235754U;
	int32_t t79 = -51184;

	t79 = (x317<((x318<=x319)<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x322 = 4563756894141LLU;
	static int16_t x323 = INT16_MIN;
	volatile uint8_t x324 = UINT8_MAX;
	volatile int32_t t80 = -165;

	t80 = (x321<((x322<=x323)<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 7016951868LL;
	volatile int32_t x326 = INT32_MIN;
	volatile int8_t x327 = -1;
	volatile int32_t t81 = -23275155;

	t81 = (x325<((x326<=x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = 115U;
	uint16_t x330 = 2U;
	uint16_t x332 = 1500U;
	static int32_t t82 = -200582954;

	t82 = (x329<((x330<=x331)<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	static int16_t x334 = 0;
	uint16_t x336 = 1U;
	volatile int32_t t83 = -27;

	t83 = (x333<((x334<=x335)<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MAX;
	volatile int8_t x338 = -1;
	int64_t x339 = -1LL;
	volatile int8_t x340 = -1;
	int32_t t84 = -14;

	t84 = (x337<((x338<=x339)<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x344 = 2021072202695440LL;
	volatile int32_t t85 = -487142030;

	t85 = (x341<((x342<=x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = -1LL;
	uint32_t x346 = 15722U;
	uint16_t x347 = UINT16_MAX;
	volatile int32_t t86 = -234867693;

	t86 = (x345<((x346<=x347)<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = 621U;
	volatile uint32_t x350 = UINT32_MAX;
	int16_t x351 = 1014;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 90847650;

	t87 = (x349<((x350<=x351)<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	volatile int8_t x354 = INT8_MAX;
	uint64_t x355 = UINT64_MAX;
	int64_t x356 = -65844305052LL;
	volatile int32_t t88 = 70;

	t88 = (x353<((x354<=x355)<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = 243216320273367LL;
	int16_t x358 = INT16_MIN;
	int16_t x359 = -93;
	int32_t x360 = -1;
	volatile int32_t t89 = -46986778;

	t89 = (x357<((x358<=x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	int16_t x362 = -1;
	int8_t x363 = INT8_MIN;
	int32_t t90 = -909531712;

	t90 = (x361<((x362<=x363)<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = -1;
	static int8_t x367 = 1;
	volatile int16_t x368 = -31;
	volatile int32_t t91 = 1044;

	t91 = (x365<((x366<=x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 330;
	int64_t x370 = INT64_MAX;
	int32_t x372 = INT32_MIN;

	t92 = (x369<((x370<=x371)<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x374 = INT16_MIN;
	uint32_t x375 = 90U;
	int32_t x376 = INT32_MIN;
	static volatile int32_t t93 = 5;

	t93 = (x373<((x374<=x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int64_t x379 = INT64_MAX;
	volatile int32_t t94 = -1003;

	t94 = (x377<((x378<=x379)<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	static uint16_t x382 = 31U;
	int32_t x383 = -1;
	static int8_t x384 = -1;
	static volatile int32_t t95 = -507060;

	t95 = (x381<((x382<=x383)<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int8_t x386 = INT8_MIN;
	int16_t x387 = 250;
	static volatile int32_t t96 = -11;

	t96 = (x385<((x386<=x387)<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 2;
	int32_t x390 = -5281406;
	static int8_t x392 = INT8_MIN;
	volatile int32_t t97 = 1;

	t97 = (x389<((x390<=x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = -1;
	uint8_t x394 = 1U;
	uint16_t x395 = 0U;
	static uint16_t x396 = 27235U;
	volatile int32_t t98 = -106036;

	t98 = (x393<((x394<=x395)<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	static int64_t x399 = INT64_MAX;
	static volatile int32_t t99 = -32365408;

	t99 = (x397<((x398<=x399)<=x400));

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


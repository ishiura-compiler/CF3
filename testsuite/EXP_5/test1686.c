#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -1LL;
volatile int16_t x10 = INT16_MIN;
int64_t x11 = -133650428LL;
int32_t x12 = INT32_MAX;
volatile int64_t x18 = -1LL;
int16_t x20 = INT16_MIN;
volatile uint8_t x22 = 2U;
int16_t x25 = 8342;
int32_t x27 = -1346;
static int32_t t6 = 134918;
uint8_t x40 = 21U;
int16_t x41 = -120;
static volatile int32_t x42 = INT32_MIN;
int16_t x43 = INT16_MIN;
uint32_t x60 = 606U;
static volatile int32_t t14 = 1871;
int8_t x81 = -1;
int32_t x82 = -6863;
uint32_t x83 = UINT32_MAX;
int64_t x87 = INT64_MIN;
uint64_t x89 = 118151326673LLU;
volatile int32_t x99 = INT32_MIN;
uint8_t x100 = 3U;
int8_t x102 = -18;
int16_t x103 = -1;
static int32_t t26 = 362824;
volatile uint16_t x109 = UINT16_MAX;
int32_t t27 = 2510121;
int32_t t28 = -23795;
uint8_t x121 = 42U;
uint64_t x122 = UINT64_MAX;
int64_t x125 = 45187LL;
uint16_t x128 = UINT16_MAX;
volatile int32_t t35 = -4;
uint8_t x150 = 0U;
volatile uint64_t x154 = 19487553LLU;
int16_t x155 = 1937;
int64_t x159 = INT64_MIN;
int32_t t40 = -65227939;
static uint8_t x170 = UINT8_MAX;
volatile int16_t x172 = INT16_MIN;
int8_t x175 = 3;
int8_t x179 = INT8_MAX;
static volatile int8_t x183 = INT8_MAX;
int32_t t45 = 8;
uint32_t x186 = 373987U;
uint64_t x190 = 970314LLU;
int64_t x192 = INT64_MIN;
uint32_t x196 = UINT32_MAX;
volatile uint16_t x204 = 26U;
uint64_t x205 = UINT64_MAX;
uint64_t x206 = 3893074LLU;
volatile uint32_t x207 = UINT32_MAX;
volatile int8_t x212 = INT8_MIN;
int16_t x213 = INT16_MIN;
uint32_t x214 = 396U;
int64_t x219 = -1782100624091LL;
static uint32_t x226 = 7260U;
int8_t x227 = INT8_MIN;
volatile int16_t x245 = -1;
int64_t x255 = -1LL;
uint16_t x258 = 8373U;
static volatile int32_t t64 = 1001511248;
uint16_t x268 = 7612U;
int32_t t66 = -2;
int64_t x269 = INT64_MIN;
int32_t x274 = INT32_MIN;
int32_t t68 = -1;
uint16_t x277 = 2026U;
volatile uint16_t x280 = UINT16_MAX;
static int8_t x284 = -1;
int32_t x285 = -11430;
int64_t x290 = -1LL;
uint8_t x294 = UINT8_MAX;
volatile int32_t t73 = -3747;
volatile uint64_t x298 = 2LLU;
int32_t x309 = INT32_MIN;
static int32_t x312 = 42679;
static volatile uint64_t x319 = 4042740555985LLU;
int32_t x323 = INT32_MIN;
static uint16_t x325 = 232U;
int64_t x328 = INT64_MIN;
static int32_t x329 = INT32_MIN;
int32_t x331 = 362952;
static uint64_t x343 = 3LLU;
int32_t x349 = INT32_MIN;
int64_t x362 = INT64_MIN;
uint32_t x371 = 440029U;
int16_t x380 = -1;
uint64_t x389 = UINT64_MAX;
int8_t x399 = -1;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile uint8_t x2 = UINT8_MAX;
	static int8_t x3 = INT8_MIN;
	int32_t x4 = -1;
	int32_t t0 = 26334356;

	t0 = (x1<((x2<=x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1870U;
	int8_t x7 = -1;
	int16_t x8 = -1;
	int32_t t1 = -25;

	t1 = (x5<((x6<=x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	int32_t t2 = 3754;

	t2 = (x9<((x10<=x11)^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	int32_t x14 = -1;
	volatile int16_t x15 = -1;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -168181901;

	t3 = (x13<((x14<=x15)^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -822655083;
	static int64_t x19 = -22497129807048LL;
	volatile int32_t t4 = -785387926;

	t4 = (x17<((x18<=x19)^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint32_t x23 = 48157660U;
	int8_t x24 = -2;
	int32_t t5 = -121479;

	t5 = (x21<((x22<=x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MAX;
	volatile int32_t x28 = INT32_MIN;

	t6 = (x25<((x26<=x27)^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 49U;
	uint8_t x30 = 1U;
	int64_t x31 = 2478518509882242809LL;
	static int32_t x32 = -299;
	int32_t t7 = -2;

	t7 = (x29<((x30<=x31)^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 5;
	static int16_t x34 = -402;
	int16_t x35 = 10682;
	static uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = 200871;

	t8 = (x33<((x34<=x35)^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1;
	int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MIN;
	static volatile int32_t t9 = 107644693;

	t9 = (x37<((x38<=x39)^x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x44 = 54165;
	volatile int32_t t10 = -55;

	t10 = (x41<((x42<=x43)^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 103612347LLU;
	int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MAX;
	int32_t x48 = INT32_MIN;
	int32_t t11 = 1;

	t11 = (x45<((x46<=x47)^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	int32_t x50 = INT32_MIN;
	int64_t x51 = INT64_MIN;
	volatile int16_t x52 = INT16_MAX;
	volatile int32_t t12 = 1;

	t12 = (x49<((x50<=x51)^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 4390;
	static int16_t x54 = -525;
	int8_t x55 = INT8_MAX;
	int64_t x56 = -1LL;
	int32_t t13 = 118808;

	t13 = (x53<((x54<=x55)^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int16_t x58 = -1;
	int16_t x59 = INT16_MAX;

	t14 = (x57<((x58<=x59)^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	volatile int16_t x62 = INT16_MAX;
	int32_t x63 = INT32_MIN;
	int32_t x64 = -2550;
	int32_t t15 = -2152;

	t15 = (x61<((x62<=x63)^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = 1;
	uint32_t x66 = 1363U;
	volatile uint8_t x67 = UINT8_MAX;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 1;

	t16 = (x65<((x66<=x67)^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = 236387148LL;
	volatile uint64_t x71 = 15440984243LLU;
	volatile int64_t x72 = INT64_MIN;
	volatile int32_t t17 = 3885;

	t17 = (x69<((x70<=x71)^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1LL;
	volatile uint16_t x74 = 89U;
	static int8_t x75 = 1;
	int8_t x76 = INT8_MAX;
	volatile int32_t t18 = -12873250;

	t18 = (x73<((x74<=x75)^x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	static int32_t x78 = INT32_MIN;
	uint16_t x79 = UINT16_MAX;
	volatile int64_t x80 = INT64_MIN;
	volatile int32_t t19 = 0;

	t19 = (x77<((x78<=x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x84 = INT16_MIN;
	volatile int32_t t20 = 341933401;

	t20 = (x81<((x82<=x83)^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int8_t x86 = INT8_MAX;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = 44;

	t21 = (x85<((x86<=x87)^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MIN;
	static int32_t x91 = -206507;
	int16_t x92 = -1;
	static volatile int32_t t22 = -6411044;

	t22 = (x89<((x90<=x91)^x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 450937141U;
	int16_t x94 = INT16_MIN;
	int16_t x95 = 13;
	int32_t x96 = 15;
	static volatile int32_t t23 = 1;

	t23 = (x93<((x94<=x95)^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	static int64_t x98 = INT64_MIN;
	volatile int32_t t24 = -59518;

	t24 = (x97<((x98<=x99)^x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	int16_t x104 = -1;
	int32_t t25 = -22269946;

	t25 = (x101<((x102<=x103)^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MIN;
	uint64_t x107 = 3478527948LLU;
	static int16_t x108 = -1;

	t26 = (x105<((x106<=x107)^x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = INT32_MIN;
	volatile int8_t x111 = INT8_MAX;
	uint8_t x112 = 25U;

	t27 = (x109<((x110<=x111)^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 2134442312607300293LLU;
	int64_t x114 = 36416731LL;
	static uint8_t x115 = UINT8_MAX;
	uint64_t x116 = 120945357876LLU;

	t28 = (x113<((x114<=x115)^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 6169;
	uint16_t x118 = UINT16_MAX;
	volatile int32_t x119 = 1219221;
	volatile uint32_t x120 = 9791U;
	static int32_t t29 = -1935701;

	t29 = (x117<((x118<=x119)^x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x123 = 0;
	int32_t x124 = -1;
	int32_t t30 = 183964611;

	t30 = (x121<((x122<=x123)^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MAX;
	int8_t x127 = INT8_MAX;
	volatile int32_t t31 = -14454;

	t31 = (x125<((x126<=x127)^x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MAX;
	static volatile uint16_t x130 = 13U;
	static int16_t x131 = 1390;
	int32_t x132 = INT32_MAX;
	volatile int32_t t32 = -761;

	t32 = (x129<((x130<=x131)^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = 2;
	volatile int64_t x135 = INT64_MIN;
	static uint64_t x136 = 14444289552LLU;
	int32_t t33 = -32;

	t33 = (x133<((x134<=x135)^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -6;
	static int32_t x138 = INT32_MIN;
	static uint8_t x139 = 40U;
	int16_t x140 = -163;
	volatile int32_t t34 = -467144;

	t34 = (x137<((x138<=x139)^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 0;
	int8_t x142 = INT8_MIN;
	int32_t x143 = -1;
	int64_t x144 = INT64_MIN;

	t35 = (x141<((x142<=x143)^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	int64_t x146 = INT64_MAX;
	static volatile int64_t x147 = -28781444029786LL;
	int64_t x148 = 23302136254LL;
	static volatile int32_t t36 = -899755023;

	t36 = (x145<((x146<=x147)^x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 3085U;
	int16_t x151 = INT16_MIN;
	uint16_t x152 = 97U;
	volatile int32_t t37 = 441457;

	t37 = (x149<((x150<=x151)^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = UINT16_MAX;
	volatile int8_t x156 = -7;
	volatile int32_t t38 = -3;

	t38 = (x153<((x154<=x155)^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = 14;
	int32_t x158 = -1;
	volatile int64_t x160 = 2664261445796423967LL;
	volatile int32_t t39 = 28;

	t39 = (x157<((x158<=x159)^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	static uint64_t x162 = UINT64_MAX;
	static int64_t x163 = -1LL;
	int64_t x164 = -6LL;

	t40 = (x161<((x162<=x163)^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = UINT32_MAX;
	int16_t x166 = -3326;
	int64_t x167 = 66LL;
	static uint64_t x168 = 9772325474LLU;
	volatile int32_t t41 = 2947583;

	t41 = (x165<((x166<=x167)^x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 110168860LLU;
	int32_t x171 = INT32_MAX;
	volatile int32_t t42 = 62728921;

	t42 = (x169<((x170<=x171)^x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x173 = UINT8_MAX;
	static uint32_t x174 = 28076877U;
	int64_t x176 = INT64_MAX;
	volatile int32_t t43 = 5170;

	t43 = (x173<((x174<=x175)^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	int8_t x178 = INT8_MAX;
	int8_t x180 = -6;
	volatile int32_t t44 = -3689216;

	t44 = (x177<((x178<=x179)^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	volatile int16_t x182 = INT16_MAX;
	uint8_t x184 = UINT8_MAX;

	t45 = (x181<((x182<=x183)^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 1;
	int32_t x187 = -1;
	uint64_t x188 = 5502450970023LLU;
	int32_t t46 = -11879970;

	t46 = (x185<((x186<=x187)^x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	uint64_t x191 = 113LLU;
	static int32_t t47 = 33026857;

	t47 = (x189<((x190<=x191)^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = -1;
	static int8_t x194 = INT8_MAX;
	volatile uint64_t x195 = UINT64_MAX;
	int32_t t48 = -84312;

	t48 = (x193<((x194<=x195)^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	int32_t x198 = -1;
	static uint16_t x199 = UINT16_MAX;
	int8_t x200 = 33;
	volatile int32_t t49 = 146547117;

	t49 = (x197<((x198<=x199)^x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 130224766U;
	static uint16_t x202 = 5595U;
	volatile int64_t x203 = INT64_MIN;
	int32_t t50 = 261738121;

	t50 = (x201<((x202<=x203)^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x208 = INT16_MIN;
	int32_t t51 = -13743835;

	t51 = (x205<((x206<=x207)^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 34084624977LL;
	int64_t x210 = INT64_MAX;
	int32_t x211 = INT32_MIN;
	static volatile int32_t t52 = 60;

	t52 = (x209<((x210<=x211)^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x215 = INT64_MAX;
	int16_t x216 = INT16_MIN;
	int32_t t53 = 465178;

	t53 = (x213<((x214<=x215)^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	uint16_t x218 = 1796U;
	static int64_t x220 = INT64_MAX;
	volatile int32_t t54 = 11;

	t54 = (x217<((x218<=x219)^x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	static int64_t x222 = -1LL;
	uint16_t x223 = 2112U;
	int16_t x224 = INT16_MAX;
	volatile int32_t t55 = 26;

	t55 = (x221<((x222<=x223)^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = -22LL;
	int16_t x228 = INT16_MIN;
	static volatile int32_t t56 = 15951113;

	t56 = (x225<((x226<=x227)^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -42812;
	uint8_t x230 = 3U;
	int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MAX;
	static volatile int32_t t57 = -243021;

	t57 = (x229<((x230<=x231)^x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = UINT8_MAX;
	int8_t x234 = 1;
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;
	int32_t t58 = 5;

	t58 = (x233<((x234<=x235)^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	static volatile uint8_t x238 = 25U;
	int64_t x239 = -1LL;
	int8_t x240 = INT8_MIN;
	static int32_t t59 = 129747635;

	t59 = (x237<((x238<=x239)^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = -3;
	int64_t x242 = -1354988891232LL;
	volatile int32_t x243 = INT32_MAX;
	static int32_t x244 = -1;
	static int32_t t60 = 0;

	t60 = (x241<((x242<=x243)^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = -96440549;
	uint64_t x247 = 4492238338004270055LLU;
	int16_t x248 = 1495;
	int32_t t61 = 32318;

	t61 = (x245<((x246<=x247)^x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MAX;
	uint8_t x250 = 0U;
	uint64_t x251 = UINT64_MAX;
	uint32_t x252 = 30U;
	volatile int32_t t62 = 7956487;

	t62 = (x249<((x250<=x251)^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x253 = 0U;
	volatile uint16_t x254 = UINT16_MAX;
	volatile int64_t x256 = -1LL;
	int32_t t63 = -2;

	t63 = (x253<((x254<=x255)^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 5U;
	int32_t x259 = 78907083;
	static int32_t x260 = -1;

	t64 = (x257<((x258<=x259)^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 0LL;
	uint32_t x262 = UINT32_MAX;
	int16_t x263 = INT16_MAX;
	int8_t x264 = -7;
	volatile int32_t t65 = 26360913;

	t65 = (x261<((x262<=x263)^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = UINT32_MAX;
	volatile int16_t x266 = INT16_MIN;
	int16_t x267 = -1;

	t66 = (x265<((x266<=x267)^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x270 = 2258049699788050336LLU;
	int32_t x271 = -139061;
	int32_t x272 = -2005;
	int32_t t67 = 95767375;

	t67 = (x269<((x270<=x271)^x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 2733LLU;
	uint64_t x275 = UINT64_MAX;
	volatile int64_t x276 = INT64_MIN;

	t68 = (x273<((x274<=x275)^x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x278 = INT8_MAX;
	int64_t x279 = -1LL;
	int32_t t69 = 222;

	t69 = (x277<((x278<=x279)^x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x281 = 434397663U;
	static uint8_t x282 = 1U;
	uint16_t x283 = 12U;
	int32_t t70 = 128687727;

	t70 = (x281<((x282<=x283)^x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x286 = 1U;
	int64_t x287 = INT64_MIN;
	uint16_t x288 = UINT16_MAX;
	static volatile int32_t t71 = -860;

	t71 = (x285<((x286<=x287)^x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	static int16_t x291 = 6120;
	int64_t x292 = 3LL;
	static int32_t t72 = 112977;

	t72 = (x289<((x290<=x291)^x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	static int64_t x295 = -2080600717146292LL;
	static uint16_t x296 = 1U;

	t73 = (x293<((x294<=x295)^x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	static uint16_t x299 = 561U;
	static volatile int64_t x300 = INT64_MAX;
	int32_t t74 = -1;

	t74 = (x297<((x298<=x299)^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int8_t x302 = -1;
	static volatile uint64_t x303 = 62443LLU;
	static int16_t x304 = INT16_MIN;
	volatile int32_t t75 = -451462;

	t75 = (x301<((x302<=x303)^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = INT64_MIN;
	volatile int64_t x306 = INT64_MAX;
	static int32_t x307 = -1;
	int8_t x308 = 0;
	volatile int32_t t76 = 5946;

	t76 = (x305<((x306<=x307)^x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = -1LL;
	int32_t x311 = 108908515;
	volatile int32_t t77 = -14686783;

	t77 = (x309<((x310<=x311)^x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	static int16_t x314 = -1;
	static uint64_t x315 = 3419696040227989750LLU;
	int64_t x316 = INT64_MIN;
	volatile int32_t t78 = 1784539;

	t78 = (x313<((x314<=x315)^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = INT8_MIN;
	volatile int8_t x318 = INT8_MIN;
	int64_t x320 = 22LL;
	volatile int32_t t79 = 2647773;

	t79 = (x317<((x318<=x319)^x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MIN;
	uint16_t x324 = UINT16_MAX;
	int32_t t80 = -952;

	t80 = (x321<((x322<=x323)^x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MIN;
	int64_t x327 = -1LL;
	volatile int32_t t81 = 142;

	t81 = (x325<((x326<=x327)^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MAX;
	int8_t x332 = -1;
	volatile int32_t t82 = 353503368;

	t82 = (x329<((x330<=x331)^x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = 0;
	uint32_t x334 = UINT32_MAX;
	int32_t x335 = 3;
	int32_t x336 = INT32_MIN;
	int32_t t83 = -1777097;

	t83 = (x333<((x334<=x335)^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	volatile int32_t x338 = 696960;
	volatile int16_t x339 = 1;
	int64_t x340 = -60987459178252707LL;
	int32_t t84 = -253205;

	t84 = (x337<((x338<=x339)^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x342 = INT8_MIN;
	int32_t x344 = INT32_MIN;
	static volatile int32_t t85 = -68340835;

	t85 = (x341<((x342<=x343)^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 0;
	int16_t x346 = -1;
	uint64_t x347 = 286617242878LLU;
	static int32_t x348 = 18476;
	int32_t t86 = 1;

	t86 = (x345<((x346<=x347)^x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = 33U;
	volatile uint32_t x351 = 1464U;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = -3468;

	t87 = (x349<((x350<=x351)^x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = 443974635;
	uint16_t x354 = UINT16_MAX;
	volatile int8_t x355 = INT8_MIN;
	uint8_t x356 = 4U;
	int32_t t88 = 302;

	t88 = (x353<((x354<=x355)^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = INT8_MAX;
	int8_t x358 = 18;
	int16_t x359 = INT16_MIN;
	uint64_t x360 = 235LLU;
	static int32_t t89 = 244955;

	t89 = (x357<((x358<=x359)^x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x361 = 4U;
	uint64_t x363 = UINT64_MAX;
	uint32_t x364 = UINT32_MAX;
	int32_t t90 = 33;

	t90 = (x361<((x362<=x363)^x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x365 = -1830244402107296246LL;
	volatile int64_t x366 = 55113148965937LL;
	uint32_t x367 = UINT32_MAX;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t91 = -509;

	t91 = (x365<((x366<=x367)^x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 17U;
	volatile int16_t x370 = -99;
	int8_t x372 = 52;
	volatile int32_t t92 = 1157542;

	t92 = (x369<((x370<=x371)^x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	uint32_t x374 = 417424U;
	int16_t x375 = -37;
	int8_t x376 = -1;
	int32_t t93 = -285;

	t93 = (x373<((x374<=x375)^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	uint16_t x378 = UINT16_MAX;
	int8_t x379 = INT8_MAX;
	int32_t t94 = -32;

	t94 = (x377<((x378<=x379)^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	static int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MAX;
	uint16_t x384 = 2264U;
	static volatile int32_t t95 = 76;

	t95 = (x381<((x382<=x383)^x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	volatile int16_t x386 = INT16_MIN;
	uint64_t x387 = UINT64_MAX;
	int8_t x388 = INT8_MIN;
	static int32_t t96 = -9873380;

	t96 = (x385<((x386<=x387)^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x390 = 127U;
	int64_t x391 = -10LL;
	uint32_t x392 = 424618999U;
	volatile int32_t t97 = -42128;

	t97 = (x389<((x390<=x391)^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	int8_t x394 = -1;
	static uint64_t x395 = UINT64_MAX;
	uint64_t x396 = 69764493181993876LLU;
	int32_t t98 = 161693110;

	t98 = (x393<((x394<=x395)^x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 240U;
	static int64_t x398 = -360089603228LL;
	volatile int16_t x400 = 1;
	int32_t t99 = 5546312;

	t99 = (x397<((x398<=x399)^x400));

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


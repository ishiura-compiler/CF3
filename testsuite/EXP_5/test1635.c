#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = 935247;
int16_t x7 = 0;
static int32_t t1 = -394634880;
volatile uint64_t x9 = 1461969847LLU;
volatile int32_t x12 = INT32_MIN;
volatile int32_t t2 = -1;
int32_t t3 = 5853;
int64_t x18 = INT64_MIN;
int32_t x22 = 837183;
int8_t x23 = -1;
int32_t x24 = -2;
int32_t t5 = -5;
static volatile int32_t t6 = 1085;
static int8_t x30 = 31;
uint8_t x32 = 3U;
static int32_t t9 = -15;
int32_t x41 = INT32_MAX;
uint32_t x43 = 242U;
int16_t x52 = INT16_MIN;
int32_t t12 = -4135010;
static int16_t x53 = INT16_MIN;
int64_t x57 = -1LL;
int64_t x63 = INT64_MIN;
uint64_t x67 = 36LLU;
static int32_t t18 = -2800140;
int32_t t19 = 806071859;
volatile int32_t t20 = -247030;
static volatile int32_t x86 = -1;
int8_t x87 = -1;
volatile uint8_t x93 = 0U;
uint64_t x94 = 48LLU;
int16_t x98 = -1709;
uint8_t x99 = UINT8_MAX;
int64_t x100 = -8LL;
static volatile int32_t t27 = 27936386;
int8_t x117 = INT8_MAX;
int16_t x119 = -5935;
volatile int32_t x120 = -486808;
int32_t x125 = INT32_MIN;
volatile int32_t x130 = -40690568;
int64_t x131 = INT64_MIN;
uint16_t x132 = 44U;
volatile int32_t t32 = 132042;
int32_t x133 = -1;
int32_t x134 = INT32_MIN;
volatile int32_t t33 = -6356;
volatile uint32_t x140 = 13675249U;
uint32_t x141 = 1U;
volatile uint8_t x149 = 10U;
volatile int32_t t37 = 837568013;
static volatile int32_t x153 = -1;
int16_t x154 = INT16_MAX;
uint64_t x156 = 3859677868503LLU;
uint8_t x160 = UINT8_MAX;
static volatile uint32_t x161 = 1717922268U;
volatile int32_t t40 = -7196311;
int8_t x177 = INT8_MIN;
uint16_t x183 = UINT16_MAX;
uint32_t x185 = UINT32_MAX;
int32_t t48 = -1;
volatile int8_t x210 = INT8_MIN;
static uint32_t x211 = UINT32_MAX;
int8_t x215 = INT8_MAX;
int32_t t55 = -78;
volatile int16_t x227 = INT16_MIN;
static int32_t x229 = INT32_MIN;
static uint64_t x236 = 6073294242451LLU;
volatile int32_t x238 = 60;
int64_t x246 = INT64_MAX;
int32_t x254 = -8;
int8_t x259 = -1;
int32_t t64 = -15;
static uint16_t x263 = UINT16_MAX;
int32_t t66 = 3901;
int16_t x271 = -1;
volatile int64_t x274 = 27117347LL;
int32_t x292 = 1738798;
int64_t x295 = INT64_MIN;
volatile int32_t t75 = -3911653;
static volatile int32_t x314 = 79;
int16_t x320 = INT16_MIN;
uint64_t x324 = 33444687877LLU;
int64_t x327 = -13750705983LL;
volatile uint32_t x329 = 4023182U;
static int8_t x330 = -1;
static uint8_t x333 = 0U;
int8_t x336 = INT8_MAX;
uint64_t x342 = UINT64_MAX;
uint8_t x346 = 56U;
int32_t t86 = 6121446;
int32_t x355 = 0;
volatile int32_t t88 = 1;
int16_t x365 = INT16_MAX;
volatile uint32_t x367 = 769973U;
int32_t t91 = 378686;
int32_t t92 = -165634878;
static uint32_t x380 = 62461196U;
uint32_t x382 = 0U;
int32_t x388 = INT32_MAX;
volatile int32_t t96 = 13;
int8_t x394 = -43;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int64_t x2 = INT64_MIN;
	int64_t x3 = 2257LL;
	uint16_t x4 = UINT16_MAX;

	t0 = (x1<=((x2<=x3)<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int32_t x6 = 3592;
	volatile int64_t x8 = INT64_MIN;

	t1 = (x5<=((x6<=x7)<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	int16_t x11 = -1;

	t2 = (x9<=((x10<=x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 25496U;
	uint8_t x14 = 1U;
	int8_t x15 = -1;
	uint16_t x16 = 29U;

	t3 = (x13<=((x14<=x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MAX;
	int16_t x19 = 6197;
	int16_t x20 = INT16_MAX;
	static volatile int32_t t4 = -108716237;

	t4 = (x17<=((x18<=x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = 45287;

	t5 = (x21<=((x22<=x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	volatile int64_t x26 = 1691443729LL;
	static int8_t x27 = INT8_MIN;
	volatile int16_t x28 = INT16_MIN;

	t6 = (x25<=((x26<=x27)<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = -1;
	int8_t x31 = INT8_MAX;
	volatile int32_t t7 = -7896409;

	t7 = (x29<=((x30<=x31)<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int32_t x34 = -1;
	static volatile int8_t x35 = 1;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = 258508424;

	t8 = (x33<=((x34<=x35)<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1148848311LL;
	int8_t x38 = -34;
	int16_t x39 = INT16_MIN;
	int32_t x40 = -1;

	t9 = (x37<=((x38<=x39)<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x42 = INT8_MIN;
	int16_t x44 = -1;
	int32_t t10 = -6;

	t10 = (x41<=((x42<=x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 0U;
	int32_t x46 = 0;
	uint16_t x47 = UINT16_MAX;
	static uint32_t x48 = UINT32_MAX;
	int32_t t11 = 1703;

	t11 = (x45<=((x46<=x47)<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 1;
	int8_t x50 = INT8_MIN;
	volatile int8_t x51 = 21;

	t12 = (x49<=((x50<=x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MIN;
	int16_t x55 = INT16_MIN;
	volatile uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = 267042;

	t13 = (x53<=((x54<=x55)<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MIN;
	volatile int32_t x60 = INT32_MIN;
	int32_t t14 = 1636853;

	t14 = (x57<=((x58<=x59)<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 1U;
	uint32_t x62 = 953461158U;
	static volatile uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = 34;

	t15 = (x61<=((x62<=x63)<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -14957;
	int32_t x66 = 4086;
	static uint8_t x68 = 5U;
	volatile int32_t t16 = 1468;

	t16 = (x65<=((x66<=x67)<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 2416U;
	uint64_t x70 = UINT64_MAX;
	int32_t x71 = INT32_MIN;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -53;

	t17 = (x69<=((x70<=x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static volatile uint32_t x74 = 5U;
	int16_t x75 = INT16_MAX;
	int64_t x76 = INT64_MAX;

	t18 = (x73<=((x74<=x75)<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = UINT64_MAX;
	static int64_t x78 = INT64_MIN;
	int64_t x79 = 564527427LL;
	int32_t x80 = INT32_MIN;

	t19 = (x77<=((x78<=x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = 964717422035492063LL;
	uint64_t x83 = 3990LLU;
	int32_t x84 = INT32_MIN;

	t20 = (x81<=((x82<=x83)<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	int64_t x88 = INT64_MAX;
	static int32_t t21 = -1532196;

	t21 = (x85<=((x86<=x87)<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 118641064761638032LL;
	int8_t x90 = 1;
	int32_t x91 = -6;
	volatile int8_t x92 = INT8_MAX;
	static volatile int32_t t22 = 592334;

	t22 = (x89<=((x90<=x91)<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x95 = -1;
	int64_t x96 = INT64_MAX;
	int32_t t23 = 1045;

	t23 = (x93<=((x94<=x95)<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	static int32_t t24 = -12;

	t24 = (x97<=((x98<=x99)<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 85390627143LLU;
	int16_t x102 = INT16_MIN;
	static int64_t x103 = INT64_MIN;
	int64_t x104 = INT64_MIN;
	int32_t t25 = -2;

	t25 = (x101<=((x102<=x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 6879U;
	int8_t x106 = INT8_MIN;
	int64_t x107 = -1LL;
	static uint8_t x108 = 16U;
	int32_t t26 = 147313537;

	t26 = (x105<=((x106<=x107)<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	int64_t x110 = 29014188498LL;
	int32_t x111 = -325418536;
	volatile int8_t x112 = INT8_MIN;

	t27 = (x109<=((x110<=x111)<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = 2674;
	int8_t x115 = -1;
	int8_t x116 = 1;
	volatile int32_t t28 = -3143409;

	t28 = (x113<=((x114<=x115)<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = 109U;
	volatile int32_t t29 = -6544976;

	t29 = (x117<=((x118<=x119)<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 1;
	uint8_t x122 = 9U;
	int8_t x123 = INT8_MIN;
	static int8_t x124 = INT8_MIN;
	static volatile int32_t t30 = 356529968;

	t30 = (x121<=((x122<=x123)<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x126 = 1U;
	int32_t x127 = 14;
	uint16_t x128 = UINT16_MAX;
	static int32_t t31 = -26308275;

	t31 = (x125<=((x126<=x127)<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;

	t32 = (x129<=((x130<=x131)<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x135 = INT32_MIN;
	static int64_t x136 = 7LL;

	t33 = (x133<=((x134<=x135)<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	int64_t x138 = -51506LL;
	int8_t x139 = INT8_MAX;
	int32_t t34 = -832536;

	t34 = (x137<=((x138<=x139)<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = INT8_MIN;
	int16_t x143 = -1;
	uint16_t x144 = 42U;
	volatile int32_t t35 = 18338;

	t35 = (x141<=((x142<=x143)<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x145 = UINT64_MAX;
	int64_t x146 = -1LL;
	int16_t x147 = -1;
	uint8_t x148 = 2U;
	static volatile int32_t t36 = -179;

	t36 = (x145<=((x146<=x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x150 = INT8_MIN;
	static int64_t x151 = 34210222651686237LL;
	static volatile uint32_t x152 = 28353087U;

	t37 = (x149<=((x150<=x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x155 = INT64_MIN;
	volatile int32_t t38 = 7032546;

	t38 = (x153<=((x154<=x155)<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 3U;
	int16_t x158 = 1;
	uint64_t x159 = 8210483LLU;
	volatile int32_t t39 = -284;

	t39 = (x157<=((x158<=x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = 1048885018U;
	int64_t x163 = INT64_MAX;
	uint64_t x164 = 60861156LLU;

	t40 = (x161<=((x162<=x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -13LL;
	int8_t x166 = INT8_MIN;
	volatile int32_t x167 = -1;
	uint16_t x168 = 63U;
	static volatile int32_t t41 = -277594;

	t41 = (x165<=((x166<=x167)<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	static int16_t x170 = INT16_MIN;
	static int32_t x171 = INT32_MIN;
	int64_t x172 = -1LL;
	static int32_t t42 = -1;

	t42 = (x169<=((x170<=x171)<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MAX;
	int64_t x174 = -2277739553240162723LL;
	int32_t x175 = INT32_MIN;
	static volatile uint64_t x176 = 2616149640962255397LLU;
	volatile int32_t t43 = -55464;

	t43 = (x173<=((x174<=x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x178 = INT16_MIN;
	int16_t x179 = -1;
	static int8_t x180 = 13;
	int32_t t44 = -14;

	t44 = (x177<=((x178<=x179)<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = 116LL;
	static uint8_t x182 = UINT8_MAX;
	volatile int8_t x184 = INT8_MAX;
	int32_t t45 = -406;

	t45 = (x181<=((x182<=x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x186 = 200728U;
	int8_t x187 = -18;
	volatile int16_t x188 = 291;
	volatile int32_t t46 = -3549;

	t46 = (x185<=((x186<=x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int32_t x190 = INT32_MIN;
	static volatile int16_t x191 = -1;
	int64_t x192 = -1LL;
	static int32_t t47 = 0;

	t47 = (x189<=((x190<=x191)<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	static int32_t x194 = INT32_MIN;
	int8_t x195 = -7;
	static int32_t x196 = INT32_MAX;

	t48 = (x193<=((x194<=x195)<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x197 = 173U;
	uint64_t x198 = 289900512616745LLU;
	volatile int16_t x199 = -1;
	volatile int32_t x200 = -4981;
	volatile int32_t t49 = -1;

	t49 = (x197<=((x198<=x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MIN;
	uint16_t x202 = 977U;
	static int8_t x203 = INT8_MIN;
	int8_t x204 = -1;
	static int32_t t50 = 762531;

	t50 = (x201<=((x202<=x203)<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	static uint16_t x206 = UINT16_MAX;
	int32_t x207 = -1;
	static int32_t x208 = INT32_MIN;
	int32_t t51 = -3970048;

	t51 = (x205<=((x206<=x207)<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = -1;
	volatile int16_t x212 = -4084;
	static volatile int32_t t52 = 1;

	t52 = (x209<=((x210<=x211)<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	uint64_t x216 = 496893LLU;
	static volatile int32_t t53 = -5;

	t53 = (x213<=((x214<=x215)<x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	int32_t x218 = INT32_MIN;
	uint8_t x219 = UINT8_MAX;
	int16_t x220 = -28;
	static volatile int32_t t54 = -97803;

	t54 = (x217<=((x218<=x219)<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 1061U;
	static uint8_t x222 = 0U;
	int64_t x223 = 1LL;
	int16_t x224 = INT16_MAX;

	t55 = (x221<=((x222<=x223)<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	uint16_t x226 = 3U;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = 2;

	t56 = (x225<=((x226<=x227)<x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = 22376272448078315LLU;
	int32_t x231 = INT32_MIN;
	int64_t x232 = INT64_MIN;
	static volatile int32_t t57 = -67861375;

	t57 = (x229<=((x230<=x231)<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	uint8_t x234 = UINT8_MAX;
	int16_t x235 = 684;
	int32_t t58 = 15562;

	t58 = (x233<=((x234<=x235)<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x237 = -2615;
	uint8_t x239 = UINT8_MAX;
	volatile int32_t x240 = -1;
	static volatile int32_t t59 = -461758094;

	t59 = (x237<=((x238<=x239)<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MIN;
	int64_t x243 = 1098399462625407LL;
	volatile int64_t x244 = INT64_MIN;
	volatile int32_t t60 = 13;

	t60 = (x241<=((x242<=x243)<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	static uint64_t x247 = 67LLU;
	int16_t x248 = 2;
	volatile int32_t t61 = 31513;

	t61 = (x245<=((x246<=x247)<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -3148;
	static int8_t x250 = INT8_MIN;
	static int32_t x251 = -1;
	int8_t x252 = -1;
	volatile int32_t t62 = 25829;

	t62 = (x249<=((x250<=x251)<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 7U;
	static int16_t x255 = INT16_MAX;
	static uint8_t x256 = 1U;
	volatile int32_t t63 = 19;

	t63 = (x253<=((x254<=x255)<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MAX;
	uint32_t x260 = UINT32_MAX;

	t64 = (x257<=((x258<=x259)<x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 0;
	uint8_t x262 = UINT8_MAX;
	uint32_t x264 = UINT32_MAX;
	int32_t t65 = 232;

	t65 = (x261<=((x262<=x263)<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 12930398LLU;
	int64_t x266 = INT64_MAX;
	volatile int8_t x267 = -47;
	int16_t x268 = INT16_MIN;

	t66 = (x265<=((x266<=x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = 8455U;
	int16_t x270 = -2730;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t67 = 0;

	t67 = (x269<=((x270<=x271)<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 245274498U;
	volatile int64_t x275 = -5492354018269529LL;
	int8_t x276 = -1;
	volatile int32_t t68 = -43;

	t68 = (x273<=((x274<=x275)<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	uint16_t x278 = 56U;
	uint16_t x279 = UINT16_MAX;
	uint64_t x280 = 1377907366LLU;
	static volatile int32_t t69 = -1260;

	t69 = (x277<=((x278<=x279)<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = UINT64_MAX;
	uint32_t x282 = UINT32_MAX;
	uint32_t x283 = 30214363U;
	volatile int8_t x284 = INT8_MAX;
	volatile int32_t t70 = 1407540;

	t70 = (x281<=((x282<=x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -1;
	static int64_t x286 = 158769220449274201LL;
	volatile int8_t x287 = INT8_MAX;
	static int32_t x288 = INT32_MIN;
	static volatile int32_t t71 = -30;

	t71 = (x285<=((x286<=x287)<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -3179227972391281LL;
	int32_t x290 = INT32_MAX;
	int64_t x291 = 442830021240LL;
	volatile int32_t t72 = -61749;

	t72 = (x289<=((x290<=x291)<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MIN;
	static uint32_t x294 = UINT32_MAX;
	static volatile int16_t x296 = -2895;
	static int32_t t73 = -409701659;

	t73 = (x293<=((x294<=x295)<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 1952;
	int16_t x298 = INT16_MAX;
	uint16_t x299 = 60U;
	static int8_t x300 = -57;
	int32_t t74 = -246397;

	t74 = (x297<=((x298<=x299)<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	uint64_t x302 = 1174893LLU;
	uint32_t x303 = UINT32_MAX;
	int16_t x304 = -40;

	t75 = (x301<=((x302<=x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MAX;
	volatile int16_t x306 = INT16_MIN;
	volatile int64_t x307 = -1LL;
	static int64_t x308 = -258533272091LL;
	volatile int32_t t76 = -80427;

	t76 = (x305<=((x306<=x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 420U;
	int8_t x310 = -1;
	int8_t x311 = -1;
	int64_t x312 = INT64_MIN;
	volatile int32_t t77 = -125904;

	t77 = (x309<=((x310<=x311)<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1504;
	uint32_t x315 = 90U;
	int8_t x316 = INT8_MIN;
	int32_t t78 = 324;

	t78 = (x313<=((x314<=x315)<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = -1LL;
	int32_t x318 = INT32_MIN;
	int32_t x319 = INT32_MIN;
	int32_t t79 = 35378;

	t79 = (x317<=((x318<=x319)<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	volatile int16_t x322 = INT16_MAX;
	volatile int8_t x323 = 0;
	int32_t t80 = 1;

	t80 = (x321<=((x322<=x323)<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x325 = 19361U;
	static int16_t x326 = 4649;
	int16_t x328 = INT16_MIN;
	static int32_t t81 = -737529157;

	t81 = (x325<=((x326<=x327)<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x331 = 38904741770181743LLU;
	int32_t x332 = INT32_MIN;
	static volatile int32_t t82 = -1624;

	t82 = (x329<=((x330<=x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x334 = UINT8_MAX;
	int16_t x335 = INT16_MAX;
	static volatile int32_t t83 = -2012967;

	t83 = (x333<=((x334<=x335)<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	volatile int16_t x338 = 813;
	int64_t x339 = INT64_MAX;
	uint32_t x340 = 32502U;
	volatile int32_t t84 = 437468763;

	t84 = (x337<=((x338<=x339)<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	int8_t x343 = INT8_MIN;
	int8_t x344 = -62;
	volatile int32_t t85 = -64590927;

	t85 = (x341<=((x342<=x343)<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 4085212982407805447LLU;
	uint16_t x347 = 122U;
	uint32_t x348 = 27268683U;

	t86 = (x345<=((x346<=x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 31475105LLU;
	int32_t x350 = 464794016;
	uint8_t x351 = UINT8_MAX;
	int16_t x352 = INT16_MAX;
	volatile int32_t t87 = -680;

	t87 = (x349<=((x350<=x351)<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	uint64_t x354 = UINT64_MAX;
	uint32_t x356 = UINT32_MAX;

	t88 = (x353<=((x354<=x355)<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = UINT64_MAX;
	uint16_t x358 = 2356U;
	volatile uint32_t x359 = UINT32_MAX;
	int64_t x360 = -53193639LL;
	int32_t t89 = 1029923103;

	t89 = (x357<=((x358<=x359)<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MIN;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = INT8_MAX;
	volatile uint32_t x364 = 391U;
	volatile int32_t t90 = -7;

	t90 = (x361<=((x362<=x363)<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x366 = INT64_MIN;
	static volatile int32_t x368 = INT32_MIN;

	t91 = (x365<=((x366<=x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	int16_t x371 = 3;
	volatile int32_t x372 = INT32_MAX;

	t92 = (x369<=((x370<=x371)<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -5;
	uint32_t x374 = 21010U;
	static int64_t x375 = INT64_MIN;
	static uint32_t x376 = UINT32_MAX;
	int32_t t93 = 772;

	t93 = (x373<=((x374<=x375)<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MAX;
	volatile uint64_t x378 = 815001528269968560LLU;
	int64_t x379 = INT64_MIN;
	int32_t t94 = -23126544;

	t94 = (x377<=((x378<=x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MIN;
	uint8_t x383 = UINT8_MAX;
	int64_t x384 = INT64_MAX;
	static int32_t t95 = 0;

	t95 = (x381<=((x382<=x383)<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = -1LL;
	static int16_t x386 = INT16_MIN;
	volatile int64_t x387 = 67472135003407393LL;

	t96 = (x385<=((x386<=x387)<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 0U;
	volatile int8_t x390 = INT8_MAX;
	uint64_t x391 = 1014170382784772LLU;
	int8_t x392 = INT8_MIN;
	volatile int32_t t97 = 239;

	t97 = (x389<=((x390<=x391)<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x393 = UINT8_MAX;
	int8_t x395 = INT8_MIN;
	uint64_t x396 = UINT64_MAX;
	int32_t t98 = 2;

	t98 = (x393<=((x394<=x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	static uint64_t x398 = 12546283560127330LLU;
	int16_t x399 = 1;
	uint16_t x400 = 0U;
	int32_t t99 = 42696;

	t99 = (x397<=((x398<=x399)<x400));

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


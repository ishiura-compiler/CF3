#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MIN;
int8_t x16 = INT8_MIN;
static int64_t x24 = INT64_MIN;
int32_t t6 = -230119290;
int8_t x33 = INT8_MAX;
volatile int16_t x35 = -2;
static uint16_t x36 = UINT16_MAX;
static int8_t x37 = INT8_MIN;
static int16_t x38 = INT16_MIN;
int64_t x44 = 62619184LL;
static int32_t x45 = -1;
int8_t x47 = INT8_MIN;
uint32_t x54 = UINT32_MAX;
uint32_t x59 = UINT32_MAX;
int32_t t16 = 8479604;
static int8_t x70 = INT8_MIN;
uint8_t x73 = 1U;
uint16_t x75 = 36U;
volatile int32_t t19 = 77205172;
int64_t x81 = -1LL;
static int32_t x83 = -30173;
static volatile int8_t x89 = INT8_MIN;
int16_t x96 = -456;
int32_t t23 = 15219253;
int8_t x97 = INT8_MIN;
volatile uint32_t x100 = 707U;
static int16_t x103 = -1;
int32_t x104 = -1;
uint64_t x106 = UINT64_MAX;
int8_t x107 = INT8_MIN;
static int8_t x108 = INT8_MIN;
volatile int32_t t26 = 1033331;
uint32_t x112 = UINT32_MAX;
uint64_t x120 = 10717846555217998LLU;
int16_t x121 = INT16_MAX;
volatile int64_t x143 = INT64_MIN;
static int16_t x150 = INT16_MIN;
static volatile int32_t t38 = 2440159;
uint32_t x157 = 960U;
int8_t x164 = -1;
static int32_t x167 = 57919;
static uint8_t x168 = 0U;
int32_t t41 = 152;
uint64_t x175 = 2LLU;
int16_t x177 = -1;
int32_t x178 = -1;
int8_t x183 = INT8_MIN;
volatile int32_t t45 = -235449;
volatile int32_t t46 = 596788;
static uint8_t x208 = 13U;
volatile uint8_t x220 = 13U;
uint16_t x224 = 376U;
volatile int32_t t54 = -1104657;
static uint8_t x228 = 1U;
volatile uint16_t x229 = 1842U;
int64_t x230 = INT64_MAX;
uint64_t x236 = 332587LLU;
int64_t x241 = 1415664410969LL;
volatile int16_t x244 = -1;
int16_t x263 = -4;
int32_t x264 = -1;
volatile uint8_t x268 = 4U;
int32_t x277 = INT32_MIN;
int8_t x283 = INT8_MAX;
volatile int16_t x287 = -63;
int32_t x288 = 4;
volatile int8_t x289 = -1;
int32_t x292 = 494;
static int32_t x294 = INT32_MAX;
int64_t x302 = -2706682914644LL;
volatile uint32_t x307 = 0U;
volatile int32_t t75 = 137987481;
int64_t x313 = -2979443685897LL;
volatile int64_t x314 = -583LL;
volatile uint16_t x316 = 10U;
uint32_t x328 = 12514U;
uint32_t x329 = 134U;
uint16_t x330 = UINT16_MAX;
static int64_t x331 = -1LL;
int8_t x334 = 0;
int64_t x341 = INT64_MAX;
int16_t x345 = INT16_MIN;
static uint16_t x353 = 1994U;
uint32_t x357 = UINT32_MAX;
int8_t x358 = -1;
int8_t x380 = INT8_MIN;
int16_t x392 = -1;
volatile uint32_t x394 = 5U;
int8_t x398 = -3;
volatile uint32_t x399 = UINT32_MAX;
uint8_t x402 = UINT8_MAX;


void f0(void) {
	int64_t x1 = INT64_MAX;
	uint8_t x2 = UINT8_MAX;
	static volatile uint8_t x3 = 17U;
	int16_t x4 = -3637;
	static int32_t t0 = 23322;

	t0 = (x1<=((x2==x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 4;
	int8_t x6 = 0;
	static int16_t x7 = INT16_MIN;
	int32_t t1 = -216946;

	t1 = (x5<=((x6==x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -645585223916926LL;
	uint16_t x10 = 4738U;
	int16_t x11 = INT16_MAX;
	uint32_t x12 = 259U;
	volatile int32_t t2 = 0;

	t2 = (x9<=((x10==x11)+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	volatile int64_t x14 = -1LL;
	int64_t x15 = 504136889981232747LL;
	int32_t t3 = -3836;

	t3 = (x13<=((x14==x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 0;
	int16_t x18 = 5598;
	volatile int8_t x19 = INT8_MAX;
	uint32_t x20 = 24355U;
	int32_t t4 = 11;

	t4 = (x17<=((x18==x19)+x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 8980LLU;
	int16_t x22 = 55;
	int8_t x23 = -1;
	int32_t t5 = 38074;

	t5 = (x21<=((x22==x23)+x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile int16_t x26 = INT16_MAX;
	volatile int32_t x27 = -1;
	static int16_t x28 = -1;

	t6 = (x25<=((x26==x27)+x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -23;
	int8_t x30 = INT8_MAX;
	int8_t x31 = -16;
	uint32_t x32 = 1618309U;
	int32_t t7 = 392;

	t7 = (x29<=((x30==x31)+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x34 = INT32_MIN;
	int32_t t8 = -15;

	t8 = (x33<=((x34==x35)+x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x39 = UINT16_MAX;
	int32_t x40 = INT32_MAX;
	int32_t t9 = 26691;

	t9 = (x37<=((x38==x39)+x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = UINT32_MAX;
	int16_t x42 = INT16_MIN;
	uint8_t x43 = 1U;
	int32_t t10 = -23740;

	t10 = (x41<=((x42==x43)+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = 0U;
	int8_t x48 = INT8_MAX;
	int32_t t11 = 172247;

	t11 = (x45<=((x46==x47)+x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	uint64_t x50 = UINT64_MAX;
	volatile int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t12 = -439655;

	t12 = (x49<=((x50==x51)+x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = 6512;
	static int16_t x55 = INT16_MAX;
	int32_t x56 = INT32_MAX;
	static volatile int32_t t13 = -1530;

	t13 = (x53<=((x54==x55)+x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 2141665711909621214LLU;
	int64_t x58 = INT64_MIN;
	int16_t x60 = 1;
	int32_t t14 = -1;

	t14 = (x57<=((x58==x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 2U;
	int8_t x62 = INT8_MAX;
	int32_t x63 = INT32_MIN;
	static int8_t x64 = -1;
	int32_t t15 = 9799;

	t15 = (x61<=((x62==x63)+x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	int32_t x66 = -1;
	volatile int64_t x67 = -49143739LL;
	int64_t x68 = 69350315590323LL;

	t16 = (x65<=((x66==x67)+x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 2U;
	volatile int8_t x71 = 3;
	static int8_t x72 = -1;
	static volatile int32_t t17 = -312213;

	t17 = (x69<=((x70==x71)+x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = 1285779;
	uint64_t x76 = 14776LLU;
	int32_t t18 = -1;

	t18 = (x73<=((x74==x75)+x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 1U;
	static int16_t x78 = 2953;
	static volatile uint32_t x79 = UINT32_MAX;
	static uint8_t x80 = 7U;

	t19 = (x77<=((x78==x79)+x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x82 = -1344007;
	volatile uint64_t x84 = UINT64_MAX;
	int32_t t20 = -9;

	t20 = (x81<=((x82==x83)+x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	int16_t x86 = INT16_MIN;
	uint8_t x87 = UINT8_MAX;
	volatile int32_t x88 = INT32_MAX;
	volatile int32_t t21 = 804425;

	t21 = (x85<=((x86==x87)+x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x90 = 235;
	volatile int8_t x91 = INT8_MAX;
	int16_t x92 = 11;
	int32_t t22 = -73;

	t22 = (x89<=((x90==x91)+x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MAX;
	uint64_t x95 = 201317646LLU;

	t23 = (x93<=((x94==x95)+x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x98 = 1534215093LL;
	uint8_t x99 = UINT8_MAX;
	int32_t t24 = 1337;

	t24 = (x97<=((x98==x99)+x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MIN;
	static int64_t x102 = INT64_MAX;
	volatile int32_t t25 = -4;

	t25 = (x101<=((x102==x103)+x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MIN;

	t26 = (x105<=((x106==x107)+x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x109 = 7066461U;
	static volatile int16_t x110 = 602;
	static int8_t x111 = -1;
	volatile int32_t t27 = 619269;

	t27 = (x109<=((x110==x111)+x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = -13;
	static volatile int16_t x114 = INT16_MAX;
	static uint64_t x115 = 21656172078LLU;
	int16_t x116 = -1;
	int32_t t28 = -1044471;

	t28 = (x113<=((x114==x115)+x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 10624U;
	static int16_t x118 = 1;
	int32_t x119 = INT32_MIN;
	volatile int32_t t29 = -9;

	t29 = (x117<=((x118==x119)+x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x122 = INT16_MAX;
	static int64_t x123 = 1321019683398LL;
	int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -4;

	t30 = (x121<=((x122==x123)+x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 199723352;
	volatile uint32_t x126 = 15972676U;
	int64_t x127 = -1LL;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 133;

	t31 = (x125<=((x126==x127)+x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	volatile int8_t x130 = -1;
	int16_t x131 = 2;
	uint32_t x132 = 5U;
	static int32_t t32 = 241457050;

	t32 = (x129<=((x130==x131)+x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	volatile uint32_t x134 = 361U;
	static int8_t x135 = INT8_MAX;
	int16_t x136 = -1;
	volatile int32_t t33 = 10;

	t33 = (x133<=((x134==x135)+x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 0U;
	int16_t x138 = 204;
	int64_t x139 = 61LL;
	int32_t x140 = -153165195;
	volatile int32_t t34 = 6750576;

	t34 = (x137<=((x138==x139)+x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 615;
	volatile int16_t x142 = INT16_MIN;
	static int16_t x144 = -194;
	int32_t t35 = 1;

	t35 = (x141<=((x142==x143)+x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int8_t x146 = 16;
	int8_t x147 = -1;
	int8_t x148 = 1;
	int32_t t36 = -9207;

	t36 = (x145<=((x146==x147)+x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 1;
	int64_t x151 = -517451232809662LL;
	volatile int64_t x152 = -1LL;
	int32_t t37 = 2354022;

	t37 = (x149<=((x150==x151)+x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	static int8_t x154 = 3;
	int64_t x155 = -37LL;
	volatile uint16_t x156 = UINT16_MAX;

	t38 = (x153<=((x154==x155)+x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x158 = UINT16_MAX;
	static uint8_t x159 = 29U;
	volatile int32_t x160 = 15;
	volatile int32_t t39 = 1919173;

	t39 = (x157<=((x158==x159)+x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -4;
	int8_t x162 = 0;
	int8_t x163 = 0;
	volatile int32_t t40 = 187;

	t40 = (x161<=((x162==x163)+x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	volatile int16_t x166 = INT16_MIN;

	t41 = (x165<=((x166==x167)+x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 12580U;
	int32_t x170 = 714;
	uint8_t x171 = UINT8_MAX;
	static uint16_t x172 = 23860U;
	int32_t t42 = 99141054;

	t42 = (x169<=((x170==x171)+x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int8_t x174 = 14;
	int64_t x176 = INT64_MIN;
	int32_t t43 = -438929479;

	t43 = (x173<=((x174==x175)+x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x179 = 11U;
	int64_t x180 = 12839933870LL;
	volatile int32_t t44 = 387005158;

	t44 = (x177<=((x178==x179)+x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	static int64_t x182 = INT64_MIN;
	uint64_t x184 = 8106780209LLU;

	t45 = (x181<=((x182==x183)+x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = -1;
	int16_t x186 = -1;
	volatile int16_t x187 = INT16_MIN;
	uint8_t x188 = UINT8_MAX;

	t46 = (x185<=((x186==x187)+x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = 6U;
	volatile uint32_t x190 = 69620U;
	int64_t x191 = -3059706152375482LL;
	int16_t x192 = INT16_MAX;
	int32_t t47 = 78;

	t47 = (x189<=((x190==x191)+x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = -1615703562543118LL;
	uint32_t x196 = 56064U;
	int32_t t48 = -82771248;

	t48 = (x193<=((x194==x195)+x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = 6U;
	int8_t x202 = -1;
	int16_t x203 = 16;
	static int8_t x204 = INT8_MAX;
	volatile int32_t t49 = 57169771;

	t49 = (x201<=((x202==x203)+x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = 123473238LLU;
	static volatile int16_t x206 = 2014;
	int8_t x207 = -1;
	int32_t t50 = -41929;

	t50 = (x205<=((x206==x207)+x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x209 = INT16_MIN;
	int64_t x210 = -1LL;
	static volatile uint16_t x211 = UINT16_MAX;
	static int64_t x212 = INT64_MIN;
	volatile int32_t t51 = 1353345;

	t51 = (x209<=((x210==x211)+x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = -4787;
	uint64_t x214 = 3520078LLU;
	static volatile int64_t x215 = INT64_MIN;
	uint32_t x216 = UINT32_MAX;
	static int32_t t52 = -811;

	t52 = (x213<=((x214==x215)+x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = -1;
	int8_t x218 = -1;
	int16_t x219 = INT16_MIN;
	volatile int32_t t53 = -128085;

	t53 = (x217<=((x218==x219)+x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x221 = -1;
	static int8_t x222 = 0;
	volatile int16_t x223 = -97;

	t54 = (x221<=((x222==x223)+x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x225 = INT64_MAX;
	static volatile int64_t x226 = INT64_MIN;
	int16_t x227 = INT16_MAX;
	static volatile int32_t t55 = -1646744;

	t55 = (x225<=((x226==x227)+x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x231 = 52;
	int8_t x232 = INT8_MAX;
	int32_t t56 = -11689831;

	t56 = (x229<=((x230==x231)+x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x233 = INT8_MIN;
	volatile int64_t x234 = INT64_MIN;
	static int32_t x235 = 526856991;
	int32_t t57 = 63279;

	t57 = (x233<=((x234==x235)+x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = 7;
	static int8_t x239 = INT8_MIN;
	static int16_t x240 = -14899;
	static volatile int32_t t58 = 942247992;

	t58 = (x237<=((x238==x239)+x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x242 = -1;
	volatile int8_t x243 = INT8_MAX;
	volatile int32_t t59 = 16780531;

	t59 = (x241<=((x242==x243)+x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x245 = 6036081785509LLU;
	int64_t x246 = -1LL;
	volatile int32_t x247 = INT32_MIN;
	uint32_t x248 = 3979U;
	volatile int32_t t60 = 7716;

	t60 = (x245<=((x246==x247)+x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = 5325891765276892LL;
	int32_t x250 = INT32_MIN;
	int64_t x251 = INT64_MAX;
	int16_t x252 = -1;
	int32_t t61 = 24;

	t61 = (x249<=((x250==x251)+x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = INT64_MAX;
	uint64_t x254 = UINT64_MAX;
	int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MAX;
	volatile int32_t t62 = 3885;

	t62 = (x253<=((x254==x255)+x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = -292410LL;
	uint8_t x258 = UINT8_MAX;
	volatile int8_t x259 = -2;
	int32_t x260 = -51;
	int32_t t63 = -30258878;

	t63 = (x257<=((x258==x259)+x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = INT32_MAX;
	int8_t x262 = -1;
	int32_t t64 = 146;

	t64 = (x261<=((x262==x263)+x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MAX;
	static uint64_t x266 = 11291955263513350LLU;
	static volatile int32_t x267 = INT32_MIN;
	volatile int32_t t65 = 369;

	t65 = (x265<=((x266==x267)+x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x269 = -508LL;
	int32_t x270 = INT32_MAX;
	int16_t x271 = -15047;
	int64_t x272 = INT64_MIN;
	static int32_t t66 = 18089489;

	t66 = (x269<=((x270==x271)+x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = INT16_MIN;
	volatile int8_t x274 = INT8_MIN;
	static volatile int64_t x275 = -1073608559142213685LL;
	uint16_t x276 = 13350U;
	volatile int32_t t67 = -58373960;

	t67 = (x273<=((x274==x275)+x276));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x278 = -1;
	volatile int64_t x279 = -1LL;
	static int16_t x280 = 0;
	volatile int32_t t68 = -457514564;

	t68 = (x277<=((x278==x279)+x280));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = UINT8_MAX;
	volatile int16_t x282 = INT16_MIN;
	static volatile int8_t x284 = -2;
	volatile int32_t t69 = 20335734;

	t69 = (x281<=((x282==x283)+x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x285 = -4;
	int8_t x286 = -1;
	volatile int32_t t70 = -165693973;

	t70 = (x285<=((x286==x287)+x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x290 = 729;
	static uint32_t x291 = 12U;
	int32_t t71 = -30287529;

	t71 = (x289<=((x290==x291)+x292));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = -97;
	int64_t x295 = -1LL;
	static int8_t x296 = -1;
	volatile int32_t t72 = -4941957;

	t72 = (x293<=((x294==x295)+x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = 44;
	volatile int16_t x298 = INT16_MAX;
	static uint64_t x299 = 535240250313760LLU;
	uint64_t x300 = 188376LLU;
	volatile int32_t t73 = 7;

	t73 = (x297<=((x298==x299)+x300));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MIN;
	volatile int64_t x303 = INT64_MAX;
	uint64_t x304 = 1LLU;
	static int32_t t74 = 58582;

	t74 = (x301<=((x302==x303)+x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = 1;
	volatile int32_t x306 = INT32_MIN;
	static uint64_t x308 = 33412635198LLU;

	t75 = (x305<=((x306==x307)+x308));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = INT8_MIN;
	static uint64_t x310 = 302856803332LLU;
	uint64_t x311 = UINT64_MAX;
	uint16_t x312 = UINT16_MAX;
	int32_t t76 = -1;

	t76 = (x309<=((x310==x311)+x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x315 = -1;
	int32_t t77 = -2;

	t77 = (x313<=((x314==x315)+x316));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x317 = INT32_MIN;
	int64_t x318 = 562698169699991877LL;
	int64_t x319 = INT64_MIN;
	uint8_t x320 = 1U;
	volatile int32_t t78 = -26074601;

	t78 = (x317<=((x318==x319)+x320));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x321 = 7376LLU;
	int32_t x322 = 40;
	int8_t x323 = INT8_MAX;
	int64_t x324 = -1LL;
	volatile int32_t t79 = 66578;

	t79 = (x321<=((x322==x323)+x324));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = UINT64_MAX;
	int32_t x326 = INT32_MIN;
	uint32_t x327 = UINT32_MAX;
	volatile int32_t t80 = -14;

	t80 = (x325<=((x326==x327)+x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x332 = -1;
	static volatile int32_t t81 = 500836607;

	t81 = (x329<=((x330==x331)+x332));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = INT32_MIN;
	int64_t x335 = INT64_MIN;
	volatile int32_t x336 = -1;
	volatile int32_t t82 = 8387422;

	t82 = (x333<=((x334==x335)+x336));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = INT32_MIN;
	static int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MAX;
	static int8_t x340 = 12;
	volatile int32_t t83 = 7726;

	t83 = (x337<=((x338==x339)+x340));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x342 = -5;
	uint8_t x343 = 1U;
	static int8_t x344 = 9;
	volatile int32_t t84 = 9649958;

	t84 = (x341<=((x342==x343)+x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x346 = 2U;
	uint8_t x347 = 0U;
	static int32_t x348 = -1;
	int32_t t85 = 927320101;

	t85 = (x345<=((x346==x347)+x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x349 = 1LLU;
	int32_t x350 = INT32_MIN;
	int32_t x351 = 1;
	static uint32_t x352 = 23081U;
	int32_t t86 = 183148;

	t86 = (x349<=((x350==x351)+x352));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x354 = INT8_MIN;
	static int64_t x355 = 404806193909128270LL;
	int32_t x356 = INT32_MAX;
	volatile int32_t t87 = -1;

	t87 = (x353<=((x354==x355)+x356));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x359 = UINT32_MAX;
	volatile uint8_t x360 = 29U;
	int32_t t88 = -154357;

	t88 = (x357<=((x358==x359)+x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = INT16_MIN;
	int32_t x362 = INT32_MAX;
	int64_t x363 = INT64_MAX;
	uint32_t x364 = UINT32_MAX;
	int32_t t89 = 530812;

	t89 = (x361<=((x362==x363)+x364));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = INT64_MAX;
	int8_t x366 = -1;
	int64_t x367 = -249431172264336LL;
	int16_t x368 = -172;
	static volatile int32_t t90 = 3421712;

	t90 = (x365<=((x366==x367)+x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x369 = 0LLU;
	static uint64_t x370 = 250LLU;
	int32_t x371 = INT32_MIN;
	uint32_t x372 = 102U;
	volatile int32_t t91 = 0;

	t91 = (x369<=((x370==x371)+x372));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = 5;
	int64_t x374 = INT64_MIN;
	int32_t x375 = INT32_MIN;
	uint8_t x376 = 1U;
	static volatile int32_t t92 = 121671267;

	t92 = (x373<=((x374==x375)+x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = INT8_MAX;
	int32_t x378 = -4;
	int32_t x379 = INT32_MAX;
	int32_t t93 = -2031299;

	t93 = (x377<=((x378==x379)+x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x381 = -1;
	int16_t x382 = INT16_MAX;
	int32_t x383 = INT32_MIN;
	int16_t x384 = -1;
	volatile int32_t t94 = 105171;

	t94 = (x381<=((x382==x383)+x384));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x385 = INT32_MAX;
	int32_t x386 = -1;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t95 = 987865883;

	t95 = (x385<=((x386==x387)+x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x389 = 127351163U;
	uint64_t x390 = 55LLU;
	int16_t x391 = -1;
	static volatile int32_t t96 = -109;

	t96 = (x389<=((x390==x391)+x392));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x393 = 32133805LLU;
	int32_t x395 = -1;
	static volatile int32_t x396 = -1;
	volatile int32_t t97 = 96780070;

	t97 = (x393<=((x394==x395)+x396));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x397 = 1U;
	int32_t x400 = -1;
	volatile int32_t t98 = -1;

	t98 = (x397<=((x398==x399)+x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x401 = 2U;
	int8_t x403 = 16;
	static int16_t x404 = 1308;
	volatile int32_t t99 = 19839988;

	t99 = (x401<=((x402==x403)+x404));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
volatile uint32_t x6 = 35231651U;
int32_t x7 = INT32_MIN;
volatile int32_t x15 = 3115;
static int64_t x20 = INT64_MAX;
int32_t t4 = -4187;
uint32_t x29 = UINT32_MAX;
static volatile int32_t t10 = 193240127;
int32_t x49 = 8;
uint64_t x59 = 205530LLU;
int8_t x65 = INT8_MIN;
volatile uint8_t x77 = 1U;
static volatile int32_t t19 = -660807512;
static uint16_t x81 = 13768U;
uint64_t x83 = UINT64_MAX;
int8_t x86 = -1;
volatile int64_t x90 = -1LL;
static int32_t t22 = -1591731;
uint8_t x93 = 34U;
int64_t x94 = INT64_MIN;
uint64_t x98 = 1LLU;
int32_t x113 = -9236778;
uint32_t x127 = 427501845U;
int8_t x132 = 0;
int16_t x134 = 480;
uint64_t x139 = UINT64_MAX;
int16_t x142 = -36;
int64_t x146 = 24374883LL;
volatile int64_t x150 = INT64_MIN;
int16_t x151 = 28;
volatile int32_t t38 = -150;
volatile uint8_t x164 = 1U;
volatile uint64_t x165 = UINT64_MAX;
volatile uint8_t x166 = UINT8_MAX;
static volatile int32_t x172 = INT32_MAX;
volatile int32_t t43 = 2211174;
int32_t t44 = -4294404;
uint16_t x186 = 38U;
int64_t x187 = -1LL;
int32_t x194 = INT32_MIN;
int8_t x201 = INT8_MIN;
uint16_t x202 = 214U;
int64_t x210 = 443905508LL;
int64_t x216 = -1LL;
int32_t x217 = INT32_MIN;
int64_t x220 = -1LL;
uint16_t x224 = 14502U;
static uint8_t x231 = 8U;
int32_t t58 = -54;
volatile int64_t x240 = INT64_MAX;
int32_t t59 = -220;
static int64_t x246 = -7LL;
int16_t x261 = -49;
int32_t x264 = INT32_MIN;
int32_t t65 = 0;
volatile int64_t x268 = INT64_MAX;
static volatile int32_t t66 = -6926215;
int8_t x272 = -3;
int64_t x273 = 2LL;
static uint8_t x274 = 19U;
static int32_t x280 = INT32_MIN;
uint64_t x282 = 15653LLU;
static int16_t x289 = 191;
uint64_t x294 = 225708LLU;
int16_t x297 = 76;
volatile int64_t x299 = INT64_MIN;
volatile uint32_t x300 = UINT32_MAX;
int32_t t74 = -3;
uint32_t x302 = 1802U;
int8_t x317 = INT8_MAX;
uint16_t x322 = UINT16_MAX;
uint8_t x323 = 75U;
int32_t t83 = -126933913;
volatile int8_t x337 = 15;
uint64_t x339 = 51272272LLU;
volatile int64_t x343 = INT64_MIN;
int32_t x347 = INT32_MAX;
volatile int32_t t88 = -1;
volatile int8_t x359 = INT8_MAX;
static volatile int8_t x362 = INT8_MIN;
volatile uint16_t x367 = UINT16_MAX;
volatile int32_t t92 = 75;
static int16_t x374 = 7;
static int32_t t93 = -2093;
uint64_t x382 = 6550885155716407LLU;
uint64_t x384 = UINT64_MAX;
static volatile int32_t t95 = -16443201;
int64_t x386 = -127788924323277438LL;
volatile uint32_t x396 = 8U;
volatile int32_t t98 = -1;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	volatile int32_t x2 = INT32_MAX;
	static volatile uint16_t x4 = UINT16_MAX;
	static int32_t t0 = 638266228;

	t0 = (x1==((x2<x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 264587078;
	int16_t x8 = 0;
	volatile int32_t t1 = -17669889;

	t1 = (x5==((x6<x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 43U;
	uint64_t x10 = 49430564LLU;
	int8_t x11 = INT8_MAX;
	static uint16_t x12 = 25U;
	int32_t t2 = 86905;

	t2 = (x9==((x10<x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 18U;
	volatile int16_t x14 = -1;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 6;

	t3 = (x13==((x14<x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = INT32_MIN;
	volatile uint16_t x19 = 92U;

	t4 = (x17==((x18<x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	int16_t x22 = INT16_MAX;
	int8_t x23 = -1;
	static int32_t x24 = -1;
	int32_t t5 = -428694;

	t5 = (x21==((x22<x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 4234;
	static volatile int16_t x26 = -1;
	static int64_t x27 = INT64_MIN;
	uint16_t x28 = 7896U;
	int32_t t6 = 3984941;

	t6 = (x25==((x26<x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MAX;
	int64_t x31 = INT64_MIN;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 1;

	t7 = (x29==((x30<x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	static int64_t x34 = INT64_MIN;
	uint32_t x35 = UINT32_MAX;
	volatile uint64_t x36 = UINT64_MAX;
	static int32_t t8 = -61923685;

	t8 = (x33==((x34<x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 16266103LLU;
	int8_t x38 = INT8_MIN;
	uint16_t x39 = 13U;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -3247607;

	t9 = (x37==((x38<x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = UINT32_MAX;
	int64_t x42 = 72384583837LL;
	int16_t x43 = INT16_MIN;
	int16_t x44 = 1;

	t10 = (x41==((x42<x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 13;
	int16_t x46 = INT16_MAX;
	static uint32_t x47 = 78737126U;
	int64_t x48 = -1LL;
	volatile int32_t t11 = 545632;

	t11 = (x45==((x46<x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 30883834686952LLU;
	uint8_t x51 = 2U;
	uint64_t x52 = 643435257676839762LLU;
	int32_t t12 = 444768;

	t12 = (x49==((x50<x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int32_t x54 = INT32_MIN;
	static int32_t x55 = -1;
	int8_t x56 = INT8_MAX;
	int32_t t13 = -19;

	t13 = (x53==((x54<x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = -428LL;
	volatile uint16_t x60 = 29U;
	volatile int32_t t14 = 339;

	t14 = (x57==((x58<x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = -24;
	int8_t x62 = -1;
	uint16_t x63 = 116U;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 121664;

	t15 = (x61==((x62<x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = -1;
	int32_t x67 = INT32_MAX;
	int32_t x68 = INT32_MIN;
	int32_t t16 = 11615;

	t16 = (x65==((x66<x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint8_t x70 = UINT8_MAX;
	uint32_t x71 = 3607892U;
	static volatile int8_t x72 = INT8_MIN;
	int32_t t17 = -20611;

	t17 = (x69==((x70<x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MAX;
	volatile int8_t x74 = -57;
	int32_t x75 = -1;
	uint16_t x76 = UINT16_MAX;
	static volatile int32_t t18 = -7753444;

	t18 = (x73==((x74<x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x78 = -1;
	volatile uint64_t x79 = UINT64_MAX;
	uint64_t x80 = 133349245911747LLU;

	t19 = (x77==((x78<x79)<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x82 = -1LL;
	volatile int8_t x84 = INT8_MIN;
	static int32_t t20 = 212606976;

	t20 = (x81==((x82<x83)<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = 864906140;
	int64_t x87 = 187166901674LL;
	int8_t x88 = 0;
	int32_t t21 = 0;

	t21 = (x85==((x86<x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	volatile int8_t x91 = INT8_MAX;
	static uint16_t x92 = 27932U;

	t22 = (x89==((x90<x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x95 = -1;
	volatile int64_t x96 = 1LL;
	volatile int32_t t23 = -659;

	t23 = (x93==((x94<x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	static int64_t x99 = -7151707LL;
	uint64_t x100 = UINT64_MAX;
	volatile int32_t t24 = 27217628;

	t24 = (x97==((x98<x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 0U;
	int8_t x102 = 0;
	static int8_t x103 = -3;
	int64_t x104 = -1LL;
	volatile int32_t t25 = 25;

	t25 = (x101==((x102<x103)<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MIN;
	static uint8_t x106 = UINT8_MAX;
	int32_t x107 = INT32_MIN;
	volatile int8_t x108 = INT8_MIN;
	volatile int32_t t26 = -6387;

	t26 = (x105==((x106<x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 0;
	int32_t x110 = INT32_MIN;
	uint32_t x111 = 9U;
	volatile uint16_t x112 = 6348U;
	volatile int32_t t27 = 64;

	t27 = (x109==((x110<x111)<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = UINT16_MAX;
	int32_t x115 = INT32_MAX;
	uint64_t x116 = UINT64_MAX;
	int32_t t28 = 1909734;

	t28 = (x113==((x114<x115)<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = 2269LLU;
	uint16_t x118 = 6U;
	volatile int32_t x119 = -79267548;
	uint8_t x120 = 107U;
	volatile int32_t t29 = 1;

	t29 = (x117==((x118<x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	static volatile int64_t x122 = INT64_MIN;
	static uint16_t x123 = UINT16_MAX;
	int16_t x124 = 6;
	int32_t t30 = 1;

	t30 = (x121==((x122<x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x125 = 15556041823527LLU;
	int32_t x126 = INT32_MIN;
	static int16_t x128 = 0;
	int32_t t31 = 2013;

	t31 = (x125==((x126<x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	uint8_t x130 = UINT8_MAX;
	volatile uint64_t x131 = UINT64_MAX;
	int32_t t32 = 2108747;

	t32 = (x129==((x130<x131)<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 1391755684U;
	uint32_t x135 = 12758404U;
	uint32_t x136 = 1465364214U;
	static volatile int32_t t33 = -1035305;

	t33 = (x133==((x134<x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	int8_t x138 = 1;
	volatile int32_t x140 = -1;
	volatile int32_t t34 = -16016889;

	t34 = (x137==((x138<x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	static uint64_t x143 = 1177501424874486241LLU;
	uint32_t x144 = 28U;
	int32_t t35 = 930;

	t35 = (x141==((x142<x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 28625LLU;
	uint32_t x147 = 24253231U;
	volatile int8_t x148 = INT8_MAX;
	static volatile int32_t t36 = 316744;

	t36 = (x145==((x146<x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = UINT64_MAX;
	int16_t x152 = INT16_MAX;
	volatile int32_t t37 = -97943;

	t37 = (x149==((x150<x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 242066926LLU;
	uint32_t x154 = 14312815U;
	static int64_t x155 = INT64_MAX;
	volatile int32_t x156 = -9441600;

	t38 = (x153==((x154<x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = UINT32_MAX;
	static int16_t x158 = INT16_MIN;
	int16_t x159 = -30;
	volatile int16_t x160 = INT16_MAX;
	volatile int32_t t39 = -4054;

	t39 = (x157==((x158<x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = 2492422442904LL;
	int32_t x162 = INT32_MAX;
	uint8_t x163 = 3U;
	static volatile int32_t t40 = 0;

	t40 = (x161==((x162<x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x167 = 8U;
	static volatile uint32_t x168 = 361430U;
	volatile int32_t t41 = -48386562;

	t41 = (x165==((x166<x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	int16_t x170 = -1;
	uint8_t x171 = 97U;
	volatile int32_t t42 = 1;

	t42 = (x169==((x170<x171)<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int64_t x174 = INT64_MIN;
	static int64_t x175 = 95095948282LL;
	int16_t x176 = 16;

	t43 = (x173==((x174<x175)<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1060;
	uint32_t x178 = 0U;
	static int32_t x179 = 1855;
	static uint8_t x180 = 29U;

	t44 = (x177==((x178<x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	volatile int64_t x182 = -3549LL;
	static volatile uint8_t x183 = 2U;
	int32_t x184 = INT32_MAX;
	int32_t t45 = 29;

	t45 = (x181==((x182<x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	int16_t x188 = 0;
	int32_t t46 = 1265987;

	t46 = (x185==((x186<x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MAX;
	int16_t x190 = INT16_MAX;
	uint32_t x191 = UINT32_MAX;
	int64_t x192 = -1LL;
	int32_t t47 = 0;

	t47 = (x189==((x190<x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 0U;
	static int16_t x195 = -1;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 6;

	t48 = (x193==((x194<x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	static int8_t x198 = INT8_MAX;
	int16_t x199 = -286;
	static volatile int16_t x200 = -10;
	volatile int32_t t49 = -12;

	t49 = (x197==((x198<x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x203 = INT16_MAX;
	uint32_t x204 = 88U;
	static volatile int32_t t50 = 142014539;

	t50 = (x201==((x202<x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = 3681936;
	int16_t x206 = 401;
	int32_t x207 = INT32_MAX;
	static int64_t x208 = -229LL;
	volatile int32_t t51 = 12990525;

	t51 = (x205==((x206<x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	volatile uint8_t x211 = 60U;
	volatile uint64_t x212 = 819192LLU;
	static volatile int32_t t52 = 2;

	t52 = (x209==((x210<x211)<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	uint16_t x214 = UINT16_MAX;
	int8_t x215 = INT8_MIN;
	int32_t t53 = 17389;

	t53 = (x213==((x214<x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x218 = 4U;
	static uint64_t x219 = 284LLU;
	volatile int32_t t54 = -2;

	t54 = (x217==((x218<x219)<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	static uint8_t x222 = 16U;
	uint32_t x223 = 21924U;
	volatile int32_t t55 = 347516061;

	t55 = (x221==((x222<x223)<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 291LL;
	static uint32_t x226 = UINT32_MAX;
	uint8_t x227 = 4U;
	int32_t x228 = -1;
	static volatile int32_t t56 = -278610;

	t56 = (x225==((x226<x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -937;
	int8_t x230 = -1;
	int8_t x232 = INT8_MIN;
	int32_t t57 = 1;

	t57 = (x229==((x230<x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = -613725921LL;
	uint32_t x234 = 1U;
	int16_t x235 = INT16_MAX;
	int8_t x236 = -1;

	t58 = (x233==((x234<x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = 1LL;
	uint8_t x238 = 75U;
	int8_t x239 = 2;

	t59 = (x237==((x238<x239)<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MIN;
	int32_t x242 = -1;
	volatile int8_t x243 = INT8_MIN;
	int32_t x244 = -1;
	volatile int32_t t60 = 834;

	t60 = (x241==((x242<x243)<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = -1;
	volatile uint32_t x247 = 3945U;
	static int8_t x248 = -1;
	int32_t t61 = 0;

	t61 = (x245==((x246<x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 14241153543LLU;
	int8_t x250 = -2;
	int32_t x251 = INT32_MIN;
	static volatile int32_t x252 = -1;
	int32_t t62 = 7738;

	t62 = (x249==((x250<x251)<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	int8_t x254 = INT8_MIN;
	uint8_t x255 = 29U;
	uint64_t x256 = UINT64_MAX;
	int32_t t63 = 1004565;

	t63 = (x253==((x254<x255)<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	volatile int16_t x258 = INT16_MAX;
	uint64_t x259 = UINT64_MAX;
	uint8_t x260 = UINT8_MAX;
	static volatile int32_t t64 = -1000;

	t64 = (x257==((x258<x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x262 = INT32_MIN;
	uint8_t x263 = 31U;

	t65 = (x261==((x262<x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x266 = INT8_MAX;
	int8_t x267 = 0;

	t66 = (x265==((x266<x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	uint32_t x270 = 4411U;
	uint8_t x271 = UINT8_MAX;
	int32_t t67 = -99565907;

	t67 = (x269==((x270<x271)<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x275 = 5U;
	static int32_t x276 = 1633783;
	volatile int32_t t68 = 154094387;

	t68 = (x273==((x274<x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	uint32_t x278 = UINT32_MAX;
	int32_t x279 = INT32_MIN;
	volatile int32_t t69 = 54738933;

	t69 = (x277==((x278<x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 300505633LLU;
	int32_t x283 = INT32_MAX;
	int64_t x284 = 56917LL;
	int32_t t70 = 35839;

	t70 = (x281==((x282<x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 66330U;
	int32_t x286 = 1;
	int64_t x287 = INT64_MAX;
	volatile uint16_t x288 = UINT16_MAX;
	static volatile int32_t t71 = 5271;

	t71 = (x285==((x286<x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x290 = 51531U;
	static uint8_t x291 = 4U;
	int64_t x292 = INT64_MAX;
	int32_t t72 = -6655;

	t72 = (x289==((x290<x291)<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 113447LLU;
	uint32_t x295 = 1074735343U;
	uint16_t x296 = 57U;
	int32_t t73 = -41;

	t73 = (x293==((x294<x295)<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MIN;

	t74 = (x297==((x298<x299)<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 1659034206616LL;
	uint64_t x303 = UINT64_MAX;
	static int8_t x304 = -2;
	volatile int32_t t75 = -123;

	t75 = (x301==((x302<x303)<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	int16_t x306 = -1;
	static int32_t x307 = INT32_MIN;
	int16_t x308 = 2;
	volatile int32_t t76 = 194036058;

	t76 = (x305==((x306<x307)<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 816U;
	int64_t x310 = -1LL;
	static volatile int8_t x311 = -4;
	int8_t x312 = -6;
	int32_t t77 = 358164690;

	t77 = (x309==((x310<x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	int64_t x314 = -3651793211485LL;
	uint8_t x315 = 0U;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t78 = 63182478;

	t78 = (x313==((x314<x315)<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = -1;
	volatile uint8_t x319 = 88U;
	int16_t x320 = INT16_MIN;
	volatile int32_t t79 = 3283900;

	t79 = (x317==((x318<x319)<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	int16_t x324 = 1;
	int32_t t80 = 2873;

	t80 = (x321==((x322<x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = UINT16_MAX;
	int64_t x326 = INT64_MIN;
	int64_t x327 = INT64_MIN;
	int8_t x328 = INT8_MIN;
	int32_t t81 = -265280806;

	t81 = (x325==((x326<x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 2067U;
	static int8_t x330 = INT8_MIN;
	uint16_t x331 = UINT16_MAX;
	int32_t x332 = INT32_MAX;
	volatile int32_t t82 = -643181725;

	t82 = (x329==((x330<x331)<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = INT8_MIN;
	int64_t x334 = INT64_MIN;
	uint32_t x335 = UINT32_MAX;
	volatile uint32_t x336 = UINT32_MAX;

	t83 = (x333==((x334<x335)<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x338 = 8U;
	volatile int16_t x340 = INT16_MAX;
	int32_t t84 = -6;

	t84 = (x337==((x338<x339)<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	uint8_t x342 = 40U;
	uint16_t x344 = 715U;
	volatile int32_t t85 = 5049;

	t85 = (x341==((x342<x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x345 = INT8_MAX;
	volatile int32_t x346 = INT32_MIN;
	uint32_t x348 = UINT32_MAX;
	volatile int32_t t86 = 3460679;

	t86 = (x345==((x346<x347)<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -642;
	int16_t x350 = INT16_MIN;
	int8_t x351 = -1;
	volatile int32_t x352 = -8;
	int32_t t87 = 31;

	t87 = (x349==((x350<x351)<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -45450661006097350LL;
	uint16_t x354 = 2U;
	static uint16_t x355 = UINT16_MAX;
	int16_t x356 = -373;

	t88 = (x353==((x354<x355)<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	int64_t x358 = INT64_MIN;
	int32_t x360 = -51;
	int32_t t89 = 668;

	t89 = (x357==((x358<x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	int16_t x363 = 203;
	int8_t x364 = -1;
	volatile int32_t t90 = -111779;

	t90 = (x361==((x362<x363)<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -33437232LL;
	volatile int32_t x366 = INT32_MIN;
	int16_t x368 = INT16_MIN;
	int32_t t91 = -184828;

	t91 = (x365==((x366<x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	int32_t x370 = INT32_MIN;
	int16_t x371 = 12163;
	static int16_t x372 = INT16_MIN;

	t92 = (x369==((x370<x371)<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x373 = INT16_MIN;
	uint32_t x375 = 4U;
	int16_t x376 = 525;

	t93 = (x373==((x374<x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -3254;
	int64_t x378 = 6819238857195811LL;
	uint16_t x379 = 27U;
	static uint8_t x380 = 15U;
	volatile int32_t t94 = -5;

	t94 = (x377==((x378<x379)<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x381 = 3416514;
	uint16_t x383 = 1U;

	t95 = (x381==((x382<x383)<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -6873;
	static int8_t x387 = -1;
	int64_t x388 = 13362406180LL;
	int32_t t96 = 1;

	t96 = (x385==((x386<x387)<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x389 = 8U;
	volatile int16_t x390 = -9;
	volatile int8_t x391 = INT8_MIN;
	int16_t x392 = -1;
	int32_t t97 = 166911157;

	t97 = (x389==((x390<x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = INT32_MIN;
	uint64_t x394 = 90778LLU;
	static int16_t x395 = INT16_MAX;

	t98 = (x393==((x394<x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = 89LL;
	int8_t x398 = INT8_MAX;
	uint16_t x399 = UINT16_MAX;
	volatile int32_t x400 = -1;
	volatile int32_t t99 = 3701;

	t99 = (x397==((x398<x399)<=x400));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = -18566;
static volatile int64_t x7 = -1LL;
int32_t x8 = INT32_MAX;
volatile int32_t t2 = -60372608;
uint64_t x14 = 453685498702LLU;
volatile uint32_t x32 = UINT32_MAX;
int32_t t7 = -89771296;
int8_t x34 = INT8_MIN;
int64_t x36 = -1LL;
int32_t t8 = 807;
uint8_t x49 = UINT8_MAX;
static int16_t x50 = -2026;
int32_t t13 = 0;
uint32_t x62 = 2475U;
static uint16_t x65 = 235U;
uint8_t x66 = 12U;
int32_t x67 = INT32_MIN;
static uint32_t x68 = 17450U;
uint32_t x74 = 6U;
int32_t t18 = -3;
volatile int8_t x87 = -1;
int64_t x88 = INT64_MAX;
volatile int32_t x90 = INT32_MIN;
volatile int16_t x93 = -1;
int64_t x101 = -1LL;
int16_t x106 = INT16_MIN;
static volatile int32_t t26 = 19458430;
uint64_t x116 = UINT64_MAX;
int32_t t29 = -445;
int32_t t30 = -5137;
static volatile uint32_t x130 = UINT32_MAX;
volatile int32_t t32 = 1;
int32_t x134 = INT32_MIN;
int32_t t33 = 57;
static int8_t x140 = 14;
static int32_t x144 = INT32_MIN;
uint16_t x145 = UINT16_MAX;
uint64_t x148 = 963572LLU;
static volatile int32_t t36 = -3744718;
int8_t x153 = INT8_MAX;
volatile int32_t t38 = 4;
static int64_t x157 = INT64_MIN;
static int32_t x163 = 3;
int32_t t40 = 20790051;
int32_t x165 = -29;
int64_t x166 = -1LL;
volatile int8_t x170 = INT8_MIN;
int64_t x178 = 1032LL;
volatile int16_t x180 = INT16_MIN;
int16_t x183 = INT16_MIN;
uint8_t x187 = UINT8_MAX;
int32_t t47 = 2272;
volatile int16_t x199 = INT16_MIN;
volatile int8_t x202 = -2;
int16_t x208 = INT16_MIN;
static uint64_t x212 = UINT64_MAX;
static int64_t x215 = -754816438239267924LL;
static int16_t x218 = INT16_MIN;
int16_t x219 = INT16_MIN;
volatile uint64_t x222 = 627413LLU;
uint8_t x228 = 0U;
volatile int32_t t56 = 8876;
volatile int32_t x243 = INT32_MIN;
int32_t t63 = -500984;
static int16_t x259 = INT16_MIN;
volatile int32_t t65 = 172963882;
static int16_t x266 = -1515;
int8_t x269 = INT8_MAX;
int64_t x272 = 7LL;
int8_t x278 = 23;
volatile int32_t x283 = -1;
uint16_t x285 = UINT16_MAX;
int8_t x286 = INT8_MAX;
uint32_t x288 = 0U;
volatile int32_t t71 = 14274;
int32_t x304 = 177;
volatile uint64_t x309 = 1956585LLU;
static int32_t x312 = -1;
volatile int64_t x321 = 479LL;
uint32_t x322 = 3245062U;
uint16_t x325 = 4U;
uint64_t x329 = UINT64_MAX;
volatile int32_t x331 = INT32_MIN;
uint8_t x336 = UINT8_MAX;
int64_t x339 = INT64_MIN;
volatile int32_t x340 = 2;
uint32_t x352 = 29545U;
volatile int8_t x353 = INT8_MIN;
volatile uint16_t x354 = UINT16_MAX;
uint8_t x364 = 6U;
uint16_t x367 = 45U;
int16_t x369 = 7414;
static int16_t x373 = -1;
static int64_t x375 = INT64_MAX;
static volatile int32_t t95 = 0;
static int64_t x387 = INT64_MIN;
int32_t x392 = -1049146379;
int8_t x393 = INT8_MIN;


void f0(void) {
	int8_t x2 = INT8_MAX;
	static int8_t x3 = INT8_MAX;
	uint16_t x4 = 1U;
	int32_t t0 = -415973281;

	t0 = ((x1<=(x2==x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -21;
	static volatile int8_t x6 = -1;
	volatile int32_t t1 = -61247;

	t1 = ((x5<=(x6==x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 11326426U;
	static int64_t x10 = -1LL;
	static int32_t x11 = -1;
	int16_t x12 = INT16_MIN;

	t2 = ((x9<=(x10==x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int64_t x15 = INT64_MAX;
	int64_t x16 = 438066066LL;
	volatile int32_t t3 = -164204;

	t3 = ((x13<=(x14==x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	uint16_t x18 = UINT16_MAX;
	static int8_t x19 = INT8_MAX;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 1298339;

	t4 = ((x17<=(x18==x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int16_t x22 = INT16_MAX;
	static volatile uint64_t x23 = 257292386827623LLU;
	int16_t x24 = -1;
	volatile int32_t t5 = 821646909;

	t5 = ((x21<=(x22==x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 7313U;
	volatile uint16_t x26 = UINT16_MAX;
	int64_t x27 = INT64_MIN;
	int64_t x28 = INT64_MAX;
	int32_t t6 = 138;

	t6 = ((x25<=(x26==x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	static volatile int16_t x30 = -65;
	int8_t x31 = INT8_MIN;

	t7 = ((x29<=(x30==x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	volatile int32_t x35 = -1;

	t8 = ((x33<=(x34==x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 7U;
	int16_t x38 = -1;
	int32_t x39 = -1;
	int8_t x40 = INT8_MAX;
	static int32_t t9 = -24970040;

	t9 = ((x37<=(x38==x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = 1;
	int32_t x42 = -1;
	uint32_t x43 = UINT32_MAX;
	static volatile int8_t x44 = -25;
	volatile int32_t t10 = -897834;

	t10 = ((x41<=(x42==x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	uint16_t x46 = UINT16_MAX;
	uint32_t x47 = 2899U;
	int64_t x48 = INT64_MAX;
	volatile int32_t t11 = -1000775;

	t11 = ((x45<=(x46==x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x51 = -1LL;
	uint16_t x52 = UINT16_MAX;
	int32_t t12 = -24;

	t12 = ((x49<=(x50==x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MAX;
	int64_t x54 = INT64_MAX;
	int32_t x55 = -1;
	uint16_t x56 = 0U;

	t13 = ((x53<=(x54==x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	static int32_t x58 = INT32_MAX;
	static uint8_t x59 = UINT8_MAX;
	int32_t x60 = 13;
	static int32_t t14 = 44821248;

	t14 = ((x57<=(x58==x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 219U;
	uint64_t x63 = 3651781984660LLU;
	static uint8_t x64 = UINT8_MAX;
	static volatile int32_t t15 = 1;

	t15 = ((x61<=(x62==x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t t16 = 910;

	t16 = ((x65<=(x66==x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int8_t x70 = -1;
	int64_t x71 = 1695010LL;
	int8_t x72 = INT8_MAX;
	volatile int32_t t17 = -3;

	t17 = ((x69<=(x70==x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 54U;
	uint32_t x75 = 499U;
	int8_t x76 = INT8_MIN;

	t18 = ((x73<=(x74==x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 28U;
	volatile int16_t x78 = 1;
	int8_t x79 = INT8_MIN;
	uint8_t x80 = 2U;
	int32_t t19 = -1459;

	t19 = ((x77<=(x78==x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 3U;
	static int64_t x82 = INT64_MIN;
	int32_t x83 = -1;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = -141;

	t20 = ((x81<=(x82==x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 51955;
	int8_t x86 = INT8_MAX;
	int32_t t21 = -5914880;

	t21 = ((x85<=(x86==x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -320155324317828772LL;
	int32_t x91 = 44;
	uint64_t x92 = UINT64_MAX;
	int32_t t22 = -5;

	t22 = ((x89<=(x90==x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x94 = INT32_MIN;
	int32_t x95 = -1;
	uint8_t x96 = UINT8_MAX;
	int32_t t23 = -5;

	t23 = ((x93<=(x94==x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = 0;
	static int8_t x98 = -1;
	int8_t x99 = INT8_MIN;
	static int16_t x100 = INT16_MIN;
	int32_t t24 = 38;

	t24 = ((x97<=(x98==x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = 2;
	int16_t x103 = -1745;
	static uint8_t x104 = 1U;
	volatile int32_t t25 = 14;

	t25 = ((x101<=(x102==x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -99360567;
	volatile int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MIN;

	t26 = ((x105<=(x106==x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x109 = INT8_MIN;
	int8_t x110 = INT8_MAX;
	uint64_t x111 = 4570745260843779997LLU;
	uint32_t x112 = 58U;
	int32_t t27 = -6;

	t27 = ((x109<=(x110==x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x113 = 19514U;
	volatile uint64_t x114 = 1277348178030267LLU;
	int8_t x115 = INT8_MIN;
	volatile int32_t t28 = -5532541;

	t28 = ((x113<=(x114==x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x117 = 3U;
	int64_t x118 = INT64_MIN;
	int64_t x119 = 23797680003LL;
	static int32_t x120 = 1;

	t29 = ((x117<=(x118==x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	volatile int16_t x122 = -211;
	int32_t x123 = INT32_MIN;
	int16_t x124 = INT16_MAX;

	t30 = ((x121<=(x122==x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = UINT16_MAX;
	int32_t x126 = -1;
	volatile int16_t x127 = INT16_MIN;
	uint16_t x128 = 1449U;
	int32_t t31 = 5797814;

	t31 = ((x125<=(x126==x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = 31U;
	volatile int16_t x131 = INT16_MIN;
	int32_t x132 = -206;

	t32 = ((x129<=(x130==x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x133 = INT64_MIN;
	int32_t x135 = INT32_MAX;
	uint16_t x136 = 3U;

	t33 = ((x133<=(x134==x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	volatile uint16_t x138 = 599U;
	volatile uint16_t x139 = 8369U;
	int32_t t34 = -22787952;

	t34 = ((x137<=(x138==x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = -3;
	int32_t x142 = -1;
	int32_t x143 = INT32_MIN;
	volatile int32_t t35 = -1043;

	t35 = ((x141<=(x142==x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = 88141010803718LLU;
	uint32_t x147 = 2U;

	t36 = ((x145<=(x146==x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 1U;
	int32_t x150 = 33;
	int8_t x151 = -1;
	int64_t x152 = INT64_MAX;
	int32_t t37 = -5;

	t37 = ((x149<=(x150==x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = -17;
	uint16_t x155 = 463U;
	static uint16_t x156 = 11045U;

	t38 = ((x153<=(x154==x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = 14;
	int32_t x159 = INT32_MIN;
	int32_t x160 = 1785443;
	int32_t t39 = -75831505;

	t39 = ((x157<=(x158==x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = -1LL;
	volatile uint16_t x162 = 6154U;
	uint16_t x164 = UINT16_MAX;

	t40 = ((x161<=(x162==x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x167 = 7036U;
	int64_t x168 = -1LL;
	int32_t t41 = 199734061;

	t41 = ((x165<=(x166==x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = UINT32_MAX;
	static int32_t x171 = INT32_MAX;
	static int64_t x172 = INT64_MIN;
	int32_t t42 = -163991;

	t42 = ((x169<=(x170==x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int8_t x174 = 1;
	uint16_t x175 = UINT16_MAX;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 16;

	t43 = ((x173<=(x174==x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	int32_t x179 = -16;
	int32_t t44 = -58549853;

	t44 = ((x177<=(x178==x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 1068799075LLU;
	static volatile uint16_t x182 = 7U;
	uint16_t x184 = 6U;
	volatile int32_t t45 = 7587069;

	t45 = ((x181<=(x182==x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 3;
	uint8_t x186 = 14U;
	volatile int64_t x188 = 10LL;
	static volatile int32_t t46 = 20801810;

	t46 = ((x185<=(x186==x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MIN;
	static uint16_t x190 = 62U;
	int16_t x191 = INT16_MAX;
	int64_t x192 = 6420149731LL;

	t47 = ((x189<=(x190==x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -45;
	static volatile int32_t x194 = 201906921;
	int64_t x195 = INT64_MIN;
	int8_t x196 = INT8_MIN;
	int32_t t48 = 982;

	t48 = ((x193<=(x194==x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	int8_t x198 = -1;
	volatile uint64_t x200 = 1325LLU;
	int32_t t49 = -17063558;

	t49 = ((x197<=(x198==x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 103U;
	int64_t x203 = INT64_MIN;
	int64_t x204 = 743258225490995514LL;
	volatile int32_t t50 = 0;

	t50 = ((x201<=(x202==x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	static int8_t x206 = INT8_MIN;
	int8_t x207 = -1;
	volatile int32_t t51 = 268640;

	t51 = ((x205<=(x206==x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 1LL;
	static int64_t x210 = -1LL;
	volatile int8_t x211 = -1;
	int32_t t52 = 0;

	t52 = ((x209<=(x210==x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	volatile int64_t x214 = 1011148858LL;
	volatile uint8_t x216 = UINT8_MAX;
	int32_t t53 = 498;

	t53 = ((x213<=(x214==x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 9U;
	int8_t x220 = -1;
	int32_t t54 = -53122;

	t54 = ((x217<=(x218==x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MAX;
	static int64_t x223 = 17493972075780841LL;
	volatile int32_t x224 = INT32_MAX;
	volatile int32_t t55 = -107;

	t55 = ((x221<=(x222==x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MIN;
	int32_t x226 = INT32_MIN;
	uint64_t x227 = 942029LLU;

	t56 = ((x225<=(x226==x227))<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	static uint64_t x230 = 5659023604220892504LLU;
	volatile uint16_t x231 = 0U;
	int64_t x232 = -1LL;
	int32_t t57 = -157206;

	t57 = ((x229<=(x230==x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MAX;
	int64_t x236 = -1LL;
	int32_t t58 = -12291128;

	t58 = ((x233<=(x234==x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 8U;
	int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MAX;
	volatile uint32_t x240 = 401U;
	int32_t t59 = 250368502;

	t59 = ((x237<=(x238==x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 38U;
	int64_t x242 = 10887LL;
	uint32_t x244 = UINT32_MAX;
	int32_t t60 = 185;

	t60 = ((x241<=(x242==x243))<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	uint8_t x246 = 30U;
	uint64_t x247 = 4139601395997160LLU;
	static uint8_t x248 = UINT8_MAX;
	volatile int32_t t61 = 996;

	t61 = ((x245<=(x246==x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 11;
	static int16_t x250 = -1;
	volatile uint8_t x251 = UINT8_MAX;
	volatile int8_t x252 = INT8_MIN;
	volatile int32_t t62 = 224;

	t62 = ((x249<=(x250==x251))<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MAX;
	static volatile int64_t x254 = INT64_MIN;
	static int8_t x255 = -50;
	int64_t x256 = INT64_MIN;

	t63 = ((x253<=(x254==x255))<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 3924U;
	int32_t x258 = INT32_MAX;
	int64_t x260 = INT64_MAX;
	volatile int32_t t64 = 1702;

	t64 = ((x257<=(x258==x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = -1;
	uint32_t x262 = UINT32_MAX;
	int8_t x263 = 24;
	int16_t x264 = INT16_MAX;

	t65 = ((x261<=(x262==x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MAX;
	int8_t x267 = INT8_MIN;
	uint64_t x268 = UINT64_MAX;
	volatile int32_t t66 = 238;

	t66 = ((x265<=(x266==x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x270 = 427;
	int8_t x271 = INT8_MAX;
	static volatile int32_t t67 = -10264;

	t67 = ((x269<=(x270==x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	static volatile int64_t x274 = 14269LL;
	static volatile uint8_t x275 = 1U;
	uint16_t x276 = UINT16_MAX;
	int32_t t68 = -167535;

	t68 = ((x273<=(x274==x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int64_t x279 = -1LL;
	uint32_t x280 = 14585U;
	static int32_t t69 = -24458;

	t69 = ((x277<=(x278==x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 1;
	volatile int8_t x282 = INT8_MIN;
	int16_t x284 = INT16_MIN;
	volatile int32_t t70 = -18604257;

	t70 = ((x281<=(x282==x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x287 = INT16_MIN;

	t71 = ((x285<=(x286==x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	int32_t x290 = -1;
	volatile int8_t x291 = INT8_MAX;
	int64_t x292 = INT64_MAX;
	int32_t t72 = -3605593;

	t72 = ((x289<=(x290==x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	uint32_t x294 = UINT32_MAX;
	uint8_t x295 = UINT8_MAX;
	static int64_t x296 = 40636186204LL;
	volatile int32_t t73 = 7720994;

	t73 = ((x293<=(x294==x295))<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MIN;
	static volatile int16_t x298 = INT16_MAX;
	volatile uint16_t x299 = UINT16_MAX;
	int16_t x300 = INT16_MIN;
	static int32_t t74 = -3641;

	t74 = ((x297<=(x298==x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 21U;
	static int64_t x302 = INT64_MAX;
	int64_t x303 = INT64_MAX;
	volatile int32_t t75 = 784;

	t75 = ((x301<=(x302==x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = -49;
	static int32_t x306 = INT32_MIN;
	int16_t x307 = -763;
	uint32_t x308 = 12U;
	volatile int32_t t76 = -22;

	t76 = ((x305<=(x306==x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = INT64_MIN;
	static volatile int16_t x311 = INT16_MIN;
	volatile int32_t t77 = -33868385;

	t77 = ((x309<=(x310==x311))<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = -3600;
	volatile uint16_t x314 = 9427U;
	int16_t x315 = -3101;
	volatile int64_t x316 = INT64_MIN;
	int32_t t78 = 116;

	t78 = ((x313<=(x314==x315))<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 5952046U;
	static int64_t x318 = -9180034499LL;
	static int16_t x319 = INT16_MAX;
	int64_t x320 = -1LL;
	volatile int32_t t79 = 7386696;

	t79 = ((x317<=(x318==x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x323 = INT32_MIN;
	int8_t x324 = -1;
	int32_t t80 = 51550;

	t80 = ((x321<=(x322==x323))<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = 3980U;
	static int8_t x327 = INT8_MIN;
	uint32_t x328 = UINT32_MAX;
	static int32_t t81 = 4226525;

	t81 = ((x325<=(x326==x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x330 = INT32_MIN;
	int64_t x332 = 3067LL;
	volatile int32_t t82 = -13576124;

	t82 = ((x329<=(x330==x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	volatile int16_t x334 = INT16_MIN;
	static int16_t x335 = 2561;
	static volatile int32_t t83 = 1;

	t83 = ((x333<=(x334==x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	uint16_t x338 = 7618U;
	volatile int32_t t84 = 6626685;

	t84 = ((x337<=(x338==x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	uint8_t x342 = UINT8_MAX;
	static uint8_t x343 = UINT8_MAX;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 280694;

	t85 = ((x341<=(x342==x343))<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = 19000;
	int32_t x346 = -13;
	static int32_t x347 = INT32_MAX;
	uint8_t x348 = 4U;
	static volatile int32_t t86 = -1561895;

	t86 = ((x345<=(x346==x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	int64_t x350 = -1LL;
	int32_t x351 = 63186765;
	int32_t t87 = -858580940;

	t87 = ((x349<=(x350==x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x355 = INT32_MIN;
	int64_t x356 = INT64_MIN;
	static int32_t t88 = -276498244;

	t88 = ((x353<=(x354==x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x357 = -1;
	uint8_t x358 = 0U;
	int8_t x359 = -1;
	int32_t x360 = 3;
	volatile int32_t t89 = -213;

	t89 = ((x357<=(x358==x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	int16_t x362 = INT16_MIN;
	int16_t x363 = -1;
	int32_t t90 = -4042095;

	t90 = ((x361<=(x362==x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -48800LL;
	int32_t x366 = INT32_MIN;
	int8_t x368 = INT8_MIN;
	int32_t t91 = -146925;

	t91 = ((x365<=(x366==x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x370 = 385U;
	int32_t x371 = INT32_MAX;
	int16_t x372 = INT16_MIN;
	int32_t t92 = -28;

	t92 = ((x369<=(x370==x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = UINT32_MAX;
	static int32_t x376 = INT32_MIN;
	static int32_t t93 = 885;

	t93 = ((x373<=(x374==x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 6;
	int64_t x378 = INT64_MAX;
	int64_t x379 = INT64_MIN;
	uint16_t x380 = 2230U;
	volatile int32_t t94 = -165467985;

	t94 = ((x377<=(x378==x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	static volatile int8_t x382 = -6;
	int32_t x383 = -1;
	int8_t x384 = INT8_MIN;

	t95 = ((x381<=(x382==x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 533869574208523LL;
	static uint16_t x386 = UINT16_MAX;
	uint32_t x388 = 227662348U;
	int32_t t96 = 367292;

	t96 = ((x385<=(x386==x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = INT8_MIN;
	uint16_t x390 = 708U;
	uint16_t x391 = 7537U;
	int32_t t97 = -20846308;

	t97 = ((x389<=(x390==x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x394 = 498U;
	int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MAX;
	int32_t t98 = 33971;

	t98 = ((x393<=(x394==x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = 241U;
	int16_t x398 = INT16_MAX;
	uint8_t x399 = 6U;
	int64_t x400 = INT64_MIN;
	volatile int32_t t99 = -396;

	t99 = ((x397<=(x398==x399))<=x400);

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


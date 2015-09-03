#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -2;
int64_t x12 = -2753538885087306431LL;
volatile int32_t x23 = 21;
volatile int8_t x26 = INT8_MIN;
int32_t t7 = 2106;
int8_t x37 = INT8_MIN;
volatile int32_t t9 = 1;
int32_t x46 = INT32_MIN;
int32_t x48 = INT32_MAX;
uint16_t x49 = 367U;
static int64_t x54 = INT64_MIN;
int16_t x58 = -44;
int8_t x64 = -1;
int16_t x65 = -1;
static int32_t x69 = -2;
int16_t x73 = INT16_MAX;
int32_t t20 = 20;
uint8_t x95 = 123U;
volatile int32_t t23 = 1;
volatile int32_t x97 = -1;
uint8_t x106 = 3U;
volatile uint8_t x107 = 22U;
volatile int8_t x110 = INT8_MIN;
uint8_t x112 = 0U;
static int16_t x114 = 1;
int32_t t29 = -1420;
volatile int16_t x128 = INT16_MIN;
static int64_t x129 = INT64_MIN;
uint16_t x132 = 27603U;
volatile int8_t x133 = -1;
int32_t t33 = 48;
uint32_t x139 = 12U;
int32_t x143 = -74697;
int64_t x145 = -174464730948086LL;
uint64_t x147 = 2176512LLU;
volatile int32_t x149 = INT32_MAX;
int64_t x154 = -1LL;
volatile int32_t t38 = 3670021;
int32_t x164 = -1;
int64_t x171 = INT64_MIN;
int32_t t43 = 61450941;
static int8_t x179 = INT8_MIN;
volatile int64_t x180 = -1LL;
uint32_t x185 = 3U;
int64_t x187 = INT64_MIN;
volatile uint8_t x189 = 45U;
uint32_t x196 = UINT32_MAX;
int32_t t48 = -4836;
volatile int32_t t49 = 27;
uint32_t x220 = 0U;
static int8_t x221 = INT8_MIN;
static int8_t x222 = INT8_MIN;
uint16_t x230 = 3U;
int8_t x232 = -2;
static volatile int32_t t57 = -195989;
static int8_t x253 = INT8_MIN;
volatile int64_t x254 = INT64_MIN;
int64_t x256 = INT64_MIN;
static uint8_t x258 = 8U;
static int64_t x263 = -1509033LL;
static int16_t x265 = -1;
uint16_t x266 = 15U;
volatile int64_t x272 = INT64_MAX;
int32_t x283 = INT32_MIN;
uint8_t x288 = 1U;
volatile int32_t t71 = -2;
static uint64_t x289 = 565762110893370720LLU;
volatile int32_t t72 = 9762;
volatile int16_t x295 = -1;
int16_t x302 = 33;
volatile int32_t t77 = 94;
int16_t x320 = -30;
int32_t x323 = INT32_MIN;
int32_t t83 = -519250;
volatile uint16_t x338 = UINT16_MAX;
volatile int64_t x340 = INT64_MIN;
int8_t x342 = -8;
int32_t x343 = INT32_MAX;
volatile int32_t t85 = 106;
uint16_t x347 = UINT16_MAX;
volatile uint64_t x368 = 2227138479810661604LLU;
static int64_t x369 = -1LL;
int16_t x372 = 7;
static uint8_t x374 = 24U;
int32_t x375 = INT32_MAX;
uint64_t x377 = 2301973828901LLU;
static volatile int16_t x383 = INT16_MIN;
static uint64_t x400 = UINT64_MAX;


void f0(void) {
	int8_t x2 = -45;
	volatile int8_t x3 = INT8_MIN;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -4;

	t0 = (x1<=(x2==(x3^x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 137;
	volatile uint64_t x6 = 35527LLU;
	uint32_t x7 = 3U;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = 5350474;

	t1 = (x5<=(x6==(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 2U;
	int32_t x10 = -32785048;
	int32_t x11 = -430046;
	volatile int32_t t2 = -14;

	t2 = (x9<=(x10==(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MAX;
	int16_t x15 = INT16_MIN;
	uint64_t x16 = 1842257731920LLU;
	volatile int32_t t3 = -7;

	t3 = (x13<=(x14==(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 39;
	int8_t x18 = 2;
	int64_t x19 = INT64_MIN;
	int8_t x20 = 1;
	volatile int32_t t4 = 25;

	t4 = (x17<=(x18==(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	volatile int64_t x22 = 68554045LL;
	int8_t x24 = -9;
	volatile int32_t t5 = 23;

	t5 = (x21<=(x22==(x23^x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int64_t x27 = -1LL;
	static int16_t x28 = -1;
	static int32_t t6 = -180817;

	t6 = (x25<=(x26==(x27^x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -1LL;
	uint16_t x30 = 417U;
	int64_t x31 = -1LL;
	static uint16_t x32 = 53U;

	t7 = (x29<=(x30==(x31^x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	static int8_t x34 = INT8_MIN;
	int32_t x35 = 8;
	int64_t x36 = INT64_MAX;
	int32_t t8 = 7468;

	t8 = (x33<=(x34==(x35^x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = 3;
	int8_t x39 = -1;
	uint16_t x40 = UINT16_MAX;

	t9 = (x37<=(x38==(x39^x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	volatile uint8_t x42 = 96U;
	uint8_t x43 = 55U;
	int32_t x44 = 17329;
	volatile int32_t t10 = 2036;

	t10 = (x41<=(x42==(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = 7U;
	uint64_t x47 = 21037721327LLU;
	static volatile int32_t t11 = -91699;

	t11 = (x45<=(x46==(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	int8_t x51 = -1;
	static int32_t x52 = 3;
	int32_t t12 = -1;

	t12 = (x49<=(x50==(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 50420LL;
	int16_t x55 = -1;
	uint64_t x56 = 10354002191LLU;
	int32_t t13 = 19801;

	t13 = (x53<=(x54==(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 14;
	volatile int32_t x59 = -232300;
	volatile int16_t x60 = -1909;
	int32_t t14 = 251326;

	t14 = (x57<=(x58==(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 1941U;
	volatile uint32_t x62 = 345678938U;
	volatile uint16_t x63 = 730U;
	int32_t t15 = 311687142;

	t15 = (x61<=(x62==(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x66 = INT32_MIN;
	uint8_t x67 = UINT8_MAX;
	int16_t x68 = 418;
	volatile int32_t t16 = -1;

	t16 = (x65<=(x66==(x67^x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x70 = INT32_MAX;
	int8_t x71 = 11;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 2083120;

	t17 = (x69<=(x70==(x71^x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = 3294;
	static int32_t x75 = -153762;
	volatile int16_t x76 = -1;
	int32_t t18 = -1;

	t18 = (x73<=(x74==(x75^x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	volatile int32_t x78 = -10;
	int8_t x79 = 1;
	volatile uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = -88008;

	t19 = (x77<=(x78==(x79^x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = UINT64_MAX;
	int32_t x82 = INT32_MIN;
	int64_t x83 = 2846908384448556LL;
	int64_t x84 = INT64_MIN;

	t20 = (x81<=(x82==(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	volatile int64_t x86 = -1115375968454LL;
	int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MIN;
	static int32_t t21 = -17553;

	t21 = (x85<=(x86==(x87^x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	static int32_t x90 = -1;
	static uint8_t x91 = 0U;
	int8_t x92 = -1;
	volatile int32_t t22 = -147659;

	t22 = (x89<=(x90==(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MAX;
	int8_t x96 = -2;

	t23 = (x93<=(x94==(x95^x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = INT64_MAX;
	uint64_t x99 = UINT64_MAX;
	int8_t x100 = -62;
	int32_t t24 = -5;

	t24 = (x97<=(x98==(x99^x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	int64_t x102 = INT64_MIN;
	uint64_t x103 = UINT64_MAX;
	int32_t x104 = INT32_MIN;
	static int32_t t25 = -22471884;

	t25 = (x101<=(x102==(x103^x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	int16_t x108 = -1;
	volatile int32_t t26 = 0;

	t26 = (x105<=(x106==(x107^x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	uint16_t x111 = 14U;
	volatile int32_t t27 = 44;

	t27 = (x109<=(x110==(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int32_t x115 = -1;
	uint16_t x116 = UINT16_MAX;
	int32_t t28 = 101422009;

	t28 = (x113<=(x114==(x115^x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 1764829141LLU;
	int16_t x118 = INT16_MAX;
	static int64_t x119 = INT64_MIN;
	static int32_t x120 = 355385086;

	t29 = (x117<=(x118==(x119^x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 1847473472153309168LL;
	static int64_t x122 = 33686393285LL;
	uint8_t x123 = 121U;
	uint32_t x124 = 118994873U;
	int32_t t30 = -211030;

	t30 = (x121<=(x122==(x123^x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	static int32_t x126 = -9492635;
	static uint16_t x127 = 1U;
	int32_t t31 = -45897359;

	t31 = (x125<=(x126==(x127^x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x130 = UINT32_MAX;
	int8_t x131 = -1;
	static int32_t t32 = 5591831;

	t32 = (x129<=(x130==(x131^x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 24U;
	static int8_t x135 = INT8_MAX;
	static volatile uint8_t x136 = UINT8_MAX;

	t33 = (x133<=(x134==(x135^x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = UINT32_MAX;
	int32_t x138 = INT32_MIN;
	volatile int64_t x140 = 52LL;
	int32_t t34 = -18;

	t34 = (x137<=(x138==(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = 192160LL;
	int32_t x142 = -1;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t35 = 0;

	t35 = (x141<=(x142==(x143^x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	volatile uint16_t x148 = 611U;
	static volatile int32_t t36 = 29;

	t36 = (x145<=(x146==(x147^x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = INT64_MAX;
	uint64_t x151 = UINT64_MAX;
	int64_t x152 = INT64_MAX;
	int32_t t37 = 0;

	t37 = (x149<=(x150==(x151^x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 32U;
	int16_t x155 = 149;
	int64_t x156 = INT64_MAX;

	t38 = (x153<=(x154==(x155^x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x157 = INT8_MAX;
	uint32_t x158 = 195488U;
	uint32_t x159 = 714143324U;
	static uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -1;

	t39 = (x157<=(x158==(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	int32_t x162 = INT32_MIN;
	int16_t x163 = INT16_MIN;
	volatile int32_t t40 = 6;

	t40 = (x161<=(x162==(x163^x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = 23U;
	volatile int32_t x166 = -104944;
	static uint32_t x167 = UINT32_MAX;
	int32_t x168 = -1;
	volatile int32_t t41 = -150051314;

	t41 = (x165<=(x166==(x167^x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	volatile int64_t x170 = -2053787184900784LL;
	int64_t x172 = -1LL;
	int32_t t42 = -5950;

	t42 = (x169<=(x170==(x171^x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	int32_t x174 = -1;
	volatile int64_t x175 = INT64_MAX;
	volatile int16_t x176 = INT16_MAX;

	t43 = (x173<=(x174==(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	volatile uint16_t x178 = 773U;
	int32_t t44 = -429;

	t44 = (x177<=(x178==(x179^x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MIN;
	uint16_t x182 = 25U;
	uint64_t x183 = UINT64_MAX;
	static uint16_t x184 = 4096U;
	volatile int32_t t45 = 152797;

	t45 = (x181<=(x182==(x183^x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x186 = 50111LLU;
	uint32_t x188 = 6U;
	static int32_t t46 = 1844596;

	t46 = (x185<=(x186==(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MAX;
	int32_t x192 = -7932;
	volatile int32_t t47 = 104967;

	t47 = (x189<=(x190==(x191^x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MAX;
	static int16_t x194 = INT16_MIN;
	static int64_t x195 = INT64_MAX;

	t48 = (x193<=(x194==(x195^x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 2928;
	uint32_t x198 = 4121U;
	static int8_t x199 = -1;
	int8_t x200 = 38;

	t49 = (x197<=(x198==(x199^x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -7131591752130LL;
	uint16_t x202 = 45U;
	int16_t x203 = 3;
	int32_t x204 = -5848887;
	int32_t t50 = -22105;

	t50 = (x201<=(x202==(x203^x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 1940;
	static int64_t x206 = INT64_MIN;
	int32_t x207 = -1;
	static int8_t x208 = INT8_MAX;
	int32_t t51 = 6;

	t51 = (x205<=(x206==(x207^x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int32_t x210 = -94904;
	static volatile uint8_t x211 = 28U;
	uint8_t x212 = 3U;
	int32_t t52 = 1;

	t52 = (x209<=(x210==(x211^x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 61;
	static int32_t x214 = INT32_MIN;
	static uint32_t x215 = 268180245U;
	uint32_t x216 = 1961U;
	volatile int32_t t53 = -57;

	t53 = (x213<=(x214==(x215^x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	int16_t x218 = INT16_MIN;
	volatile int32_t x219 = 48592372;
	static int32_t t54 = -340763157;

	t54 = (x217<=(x218==(x219^x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x223 = INT32_MIN;
	uint64_t x224 = UINT64_MAX;
	int32_t t55 = -25577978;

	t55 = (x221<=(x222==(x223^x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int8_t x226 = INT8_MIN;
	uint64_t x227 = UINT64_MAX;
	int16_t x228 = 2629;
	volatile int32_t t56 = -822;

	t56 = (x225<=(x226==(x227^x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 69U;
	static int64_t x231 = INT64_MIN;

	t57 = (x229<=(x230==(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int64_t x234 = -1LL;
	int64_t x235 = INT64_MAX;
	int8_t x236 = INT8_MIN;
	int32_t t58 = -16320;

	t58 = (x233<=(x234==(x235^x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -114457821239181LL;
	volatile int16_t x238 = INT16_MAX;
	static int16_t x239 = INT16_MIN;
	int8_t x240 = -1;
	int32_t t59 = 9059;

	t59 = (x237<=(x238==(x239^x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 243U;
	static volatile uint16_t x242 = 102U;
	int8_t x243 = 5;
	int64_t x244 = 190551782013027LL;
	static volatile int32_t t60 = 0;

	t60 = (x241<=(x242==(x243^x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1127;
	uint8_t x246 = 1U;
	volatile int64_t x247 = 3LL;
	volatile int16_t x248 = -1;
	static int32_t t61 = 63098;

	t61 = (x245<=(x246==(x247^x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	volatile int8_t x250 = 1;
	int32_t x251 = 162373;
	static int8_t x252 = -1;
	int32_t t62 = -1;

	t62 = (x249<=(x250==(x251^x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x255 = -1;
	int32_t t63 = 85;

	t63 = (x253<=(x254==(x255^x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1LL;
	int16_t x259 = 12;
	uint32_t x260 = 6U;
	int32_t t64 = 839;

	t64 = (x257<=(x258==(x259^x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	uint16_t x262 = UINT16_MAX;
	int8_t x264 = INT8_MIN;
	static int32_t t65 = 0;

	t65 = (x261<=(x262==(x263^x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x267 = INT32_MIN;
	int64_t x268 = INT64_MIN;
	int32_t t66 = -65;

	t66 = (x265<=(x266==(x267^x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	volatile int32_t x270 = -1;
	uint64_t x271 = UINT64_MAX;
	int32_t t67 = 307897;

	t67 = (x269<=(x270==(x271^x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	volatile uint32_t x274 = 13846U;
	int64_t x275 = -1LL;
	static int8_t x276 = -1;
	volatile int32_t t68 = -7796295;

	t68 = (x273<=(x274==(x275^x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	uint32_t x278 = 882232U;
	uint64_t x279 = UINT64_MAX;
	int16_t x280 = -2;
	int32_t t69 = -1291;

	t69 = (x277<=(x278==(x279^x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	uint16_t x282 = 469U;
	uint16_t x284 = 115U;
	volatile int32_t t70 = -3159606;

	t70 = (x281<=(x282==(x283^x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	int16_t x286 = -1;
	int64_t x287 = -1LL;

	t71 = (x285<=(x286==(x287^x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x290 = -1591LL;
	uint8_t x291 = 104U;
	int64_t x292 = INT64_MIN;

	t72 = (x289<=(x290==(x291^x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	int16_t x294 = 0;
	uint32_t x296 = UINT32_MAX;
	int32_t t73 = 723501;

	t73 = (x293<=(x294==(x295^x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	uint8_t x298 = UINT8_MAX;
	uint8_t x299 = UINT8_MAX;
	int64_t x300 = -1LL;
	int32_t t74 = -128040;

	t74 = (x297<=(x298==(x299^x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	int16_t x303 = -1;
	int64_t x304 = -460091775646277251LL;
	volatile int32_t t75 = -925;

	t75 = (x301<=(x302==(x303^x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -116466;
	int16_t x306 = -218;
	volatile uint32_t x307 = UINT32_MAX;
	int16_t x308 = 7;
	int32_t t76 = -9;

	t76 = (x305<=(x306==(x307^x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int64_t x310 = INT64_MIN;
	uint16_t x311 = 4U;
	int16_t x312 = INT16_MIN;

	t77 = (x309<=(x310==(x311^x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x313 = INT32_MIN;
	static uint32_t x314 = UINT32_MAX;
	static volatile int64_t x315 = -1LL;
	static volatile int32_t x316 = 24;
	static volatile int32_t t78 = 4;

	t78 = (x313<=(x314==(x315^x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = -1;
	volatile int64_t x318 = INT64_MIN;
	int16_t x319 = INT16_MIN;
	volatile int32_t t79 = 1;

	t79 = (x317<=(x318==(x319^x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	static int16_t x322 = -1;
	int8_t x324 = INT8_MAX;
	volatile int32_t t80 = 58;

	t80 = (x321<=(x322==(x323^x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	volatile uint64_t x326 = UINT64_MAX;
	int64_t x327 = -19150956LL;
	int8_t x328 = 32;
	volatile int32_t t81 = 3;

	t81 = (x325<=(x326==(x327^x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 1U;
	static int64_t x330 = INT64_MAX;
	uint8_t x331 = UINT8_MAX;
	volatile int64_t x332 = 9568453574043LL;
	int32_t t82 = 1152;

	t82 = (x329<=(x330==(x331^x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = 386429;
	uint8_t x334 = UINT8_MAX;
	int64_t x335 = INT64_MIN;
	uint8_t x336 = 35U;

	t83 = (x333<=(x334==(x335^x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = -60;
	int16_t x339 = -1988;
	volatile int32_t t84 = 41;

	t84 = (x337<=(x338==(x339^x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MIN;
	int32_t x344 = -1;

	t85 = (x341<=(x342==(x343^x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int32_t x346 = INT32_MAX;
	static int64_t x348 = INT64_MIN;
	volatile int32_t t86 = 2031;

	t86 = (x345<=(x346==(x347^x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = UINT16_MAX;
	volatile int32_t x350 = -1;
	uint8_t x351 = UINT8_MAX;
	uint16_t x352 = 408U;
	volatile int32_t t87 = -24772466;

	t87 = (x349<=(x350==(x351^x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	int32_t x354 = 666;
	int16_t x355 = -1;
	int64_t x356 = -1853189069LL;
	static volatile int32_t t88 = 4;

	t88 = (x353<=(x354==(x355^x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 254U;
	static uint64_t x358 = 652537LLU;
	uint32_t x359 = UINT32_MAX;
	int32_t x360 = -481724497;
	int32_t t89 = 6;

	t89 = (x357<=(x358==(x359^x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x361 = UINT32_MAX;
	int32_t x362 = -1;
	int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MIN;
	int32_t t90 = 6;

	t90 = (x361<=(x362==(x363^x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = UINT16_MAX;
	uint16_t x366 = 6U;
	volatile int16_t x367 = 6;
	int32_t t91 = -255625663;

	t91 = (x365<=(x366==(x367^x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x370 = 0;
	volatile int64_t x371 = INT64_MAX;
	volatile int32_t t92 = 233;

	t92 = (x369<=(x370==(x371^x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 3608U;
	static uint32_t x376 = UINT32_MAX;
	static volatile int32_t t93 = 0;

	t93 = (x373<=(x374==(x375^x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x378 = INT16_MAX;
	int16_t x379 = INT16_MAX;
	volatile int8_t x380 = -59;
	volatile int32_t t94 = 102240811;

	t94 = (x377<=(x378==(x379^x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	uint64_t x382 = 0LLU;
	uint16_t x384 = 0U;
	static volatile int32_t t95 = -7103353;

	t95 = (x381<=(x382==(x383^x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	volatile int16_t x386 = -1;
	static int8_t x387 = INT8_MAX;
	int32_t x388 = INT32_MIN;
	int32_t t96 = 441073;

	t96 = (x385<=(x386==(x387^x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 12671U;
	static volatile int32_t x390 = -1;
	int16_t x391 = -9956;
	int64_t x392 = INT64_MAX;
	int32_t t97 = 30;

	t97 = (x389<=(x390==(x391^x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x393 = -23;
	uint16_t x394 = 2U;
	uint32_t x395 = UINT32_MAX;
	static uint32_t x396 = 35829U;
	int32_t t98 = 478472;

	t98 = (x393<=(x394==(x395^x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = -1;
	static volatile int32_t x398 = 2478622;
	int16_t x399 = INT16_MAX;
	int32_t t99 = 14902496;

	t99 = (x397<=(x398==(x399^x400)));

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


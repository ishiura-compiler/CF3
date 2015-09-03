#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MAX;
static volatile int32_t t0 = 7;
uint8_t x5 = 0U;
volatile int8_t x8 = 1;
static int32_t t1 = 16126;
uint32_t x13 = UINT32_MAX;
int64_t x15 = -1LL;
int16_t x19 = 15176;
int16_t x20 = -1;
volatile int16_t x23 = -5;
volatile int8_t x28 = -29;
static uint64_t x31 = 11LLU;
volatile uint32_t x36 = 3198423U;
int8_t x38 = -1;
int16_t x46 = 7;
static uint8_t x48 = 21U;
uint8_t x52 = 9U;
volatile int32_t x53 = INT32_MIN;
int8_t x56 = 6;
int32_t x57 = INT32_MIN;
static int32_t x60 = INT32_MAX;
uint16_t x61 = 4061U;
volatile int32_t x71 = INT32_MAX;
int32_t t17 = -2769;
int32_t x73 = -12006246;
int16_t x76 = -1;
volatile int32_t t18 = -8062;
int32_t x78 = INT32_MIN;
volatile int64_t x79 = 96LL;
int32_t t19 = -4536;
int32_t x91 = -45935197;
int32_t x92 = 371;
static volatile int32_t t22 = -7826;
int8_t x94 = INT8_MIN;
static int32_t t24 = 1;
int32_t x103 = INT32_MIN;
uint32_t x117 = UINT32_MAX;
uint32_t x121 = UINT32_MAX;
static int16_t x129 = INT16_MIN;
static volatile uint32_t x134 = UINT32_MAX;
int64_t x135 = INT64_MAX;
int8_t x136 = INT8_MIN;
volatile int32_t t34 = 4;
uint8_t x148 = 116U;
uint32_t x149 = 42U;
int8_t x151 = -26;
int8_t x152 = -62;
static uint8_t x162 = UINT8_MAX;
volatile uint16_t x166 = UINT16_MAX;
static int32_t t41 = 916;
volatile int8_t x183 = INT8_MAX;
int8_t x190 = INT8_MAX;
volatile uint8_t x194 = UINT8_MAX;
volatile int32_t t48 = -160;
int32_t t49 = -384697;
volatile int32_t t50 = 5432;
int32_t x210 = -6;
static int8_t x215 = INT8_MIN;
int64_t x222 = INT64_MAX;
int64_t x223 = INT64_MAX;
int32_t t56 = -2429303;
volatile int8_t x230 = INT8_MAX;
int32_t x233 = INT32_MAX;
uint16_t x239 = 0U;
volatile int32_t t59 = 21227792;
uint16_t x247 = UINT16_MAX;
static uint32_t x248 = 431278U;
int8_t x252 = INT8_MIN;
int64_t x257 = -19558793649608135LL;
uint8_t x263 = UINT8_MAX;
int32_t x267 = INT32_MAX;
int8_t x269 = -1;
volatile uint32_t x275 = UINT32_MAX;
static int64_t x286 = INT64_MIN;
int16_t x293 = -116;
static int32_t t73 = 56707934;
int16_t x303 = INT16_MIN;
volatile int32_t x308 = -31;
int64_t x311 = -1LL;
int16_t x319 = INT16_MIN;
volatile int8_t x333 = -1;
int32_t t83 = 12;
volatile int32_t t84 = 24;
volatile int32_t x346 = INT32_MIN;
int32_t x350 = INT32_MIN;
volatile uint64_t x351 = UINT64_MAX;
int8_t x354 = -1;
int32_t t88 = 992309922;
int32_t x358 = -1;
static int8_t x359 = INT8_MIN;
uint32_t x372 = 139561U;
int32_t x375 = 384;
static int32_t t93 = 0;
static uint16_t x377 = UINT16_MAX;
volatile uint32_t x379 = 15U;
uint32_t x380 = 935803U;
int8_t x384 = -41;
static int8_t x393 = -1;
int16_t x395 = 1;
uint32_t x396 = UINT32_MAX;
uint16_t x397 = 53U;
uint64_t x399 = 28998933595690LLU;


void f0(void) {
	volatile int64_t x1 = -261LL;
	static int64_t x2 = INT64_MIN;
	uint32_t x3 = UINT32_MAX;

	t0 = (x1<((x2<=x3)<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 3584497U;
	uint8_t x7 = 88U;

	t1 = (x5<((x6<=x7)<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	static volatile int16_t x10 = INT16_MAX;
	uint8_t x11 = 19U;
	static int64_t x12 = -4872908766LL;
	int32_t t2 = 46413896;

	t2 = (x9<((x10<=x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x14 = 12138497126LLU;
	uint32_t x16 = 0U;
	int32_t t3 = -117359;

	t3 = (x13<((x14<=x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 34447844LLU;
	volatile int8_t x18 = INT8_MAX;
	volatile int32_t t4 = 16;

	t4 = (x17<((x18<=x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 1344U;
	int16_t x22 = 5540;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -14;

	t5 = (x21<((x22<=x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 12960865U;
	int64_t x26 = INT64_MIN;
	static uint16_t x27 = UINT16_MAX;
	int32_t t6 = 11;

	t6 = (x25<((x26<=x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 25U;
	uint8_t x30 = 1U;
	static int64_t x32 = INT64_MIN;
	int32_t t7 = 141207;

	t7 = (x29<((x30<=x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint16_t x34 = 3U;
	int64_t x35 = INT64_MIN;
	int32_t t8 = -225715;

	t8 = (x33<((x34<=x35)<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 4U;
	int32_t x39 = INT32_MIN;
	volatile int16_t x40 = -1;
	int32_t t9 = 485723;

	t9 = (x37<((x38<=x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 5641U;
	int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MAX;
	uint32_t x44 = 141U;
	static int32_t t10 = 0;

	t10 = (x41<((x42<=x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MAX;
	static uint64_t x47 = UINT64_MAX;
	static int32_t t11 = 201780174;

	t11 = (x45<((x46<=x47)<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MIN;
	static volatile int8_t x51 = INT8_MAX;
	volatile int32_t t12 = -19;

	t12 = (x49<((x50<=x51)<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 24920U;
	volatile int16_t x55 = INT16_MIN;
	int32_t t13 = -298753;

	t13 = (x53<((x54<=x55)<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x58 = UINT32_MAX;
	volatile int16_t x59 = INT16_MIN;
	static int32_t t14 = -63591;

	t14 = (x57<((x58<=x59)<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x62 = INT64_MIN;
	int32_t x63 = -1;
	int64_t x64 = INT64_MIN;
	int32_t t15 = -2039933;

	t15 = (x61<((x62<=x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MIN;
	uint64_t x68 = UINT64_MAX;
	static volatile int32_t t16 = 437571;

	t16 = (x65<((x66<=x67)<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 2611U;
	uint32_t x70 = UINT32_MAX;
	uint16_t x72 = UINT16_MAX;

	t17 = (x69<((x70<=x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MIN;

	t18 = (x73<((x74<=x75)<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int64_t x80 = 1LL;

	t19 = (x77<((x78<=x79)<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 267549540LL;
	uint16_t x82 = 13154U;
	uint64_t x83 = 1LLU;
	static int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -58;

	t20 = (x81<((x82<=x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 362LLU;
	uint8_t x86 = 18U;
	uint16_t x87 = 1248U;
	volatile uint32_t x88 = UINT32_MAX;
	volatile int32_t t21 = 12374;

	t21 = (x85<((x86<=x87)<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 370U;
	static uint8_t x90 = UINT8_MAX;

	t22 = (x89<((x90<=x91)<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 8156920196964540LL;
	volatile int32_t x95 = -15782;
	uint8_t x96 = 6U;
	volatile int32_t t23 = -308231;

	t23 = (x93<((x94<=x95)<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = -6;
	static volatile int32_t x98 = INT32_MIN;
	static uint16_t x99 = 626U;
	uint32_t x100 = 7142U;

	t24 = (x97<((x98<=x99)<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = INT8_MAX;
	uint32_t x104 = UINT32_MAX;
	volatile int32_t t25 = 500;

	t25 = (x101<((x102<=x103)<x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	int32_t x106 = -1;
	int64_t x107 = INT64_MAX;
	int8_t x108 = -30;
	int32_t t26 = -235040817;

	t26 = (x105<((x106<=x107)<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MIN;
	int32_t x112 = 63187;
	int32_t t27 = -10263491;

	t27 = (x109<((x110<=x111)<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 5412U;
	int16_t x114 = INT16_MIN;
	int32_t x115 = 41996;
	static int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 39;

	t28 = (x113<((x114<=x115)<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x118 = -1;
	int16_t x119 = INT16_MAX;
	int32_t x120 = -12;
	static volatile int32_t t29 = -124;

	t29 = (x117<((x118<=x119)<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x122 = 106U;
	int64_t x123 = 1785478226247LL;
	int8_t x124 = -1;
	static volatile int32_t t30 = -13365;

	t30 = (x121<((x122<=x123)<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	static volatile int32_t x126 = INT32_MIN;
	int16_t x127 = INT16_MIN;
	int32_t x128 = INT32_MAX;
	volatile int32_t t31 = 6163;

	t31 = (x125<((x126<=x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x130 = -26;
	uint32_t x131 = UINT32_MAX;
	static volatile uint8_t x132 = UINT8_MAX;
	int32_t t32 = -31650;

	t32 = (x129<((x130<=x131)<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 2U;
	int32_t t33 = 657344;

	t33 = (x133<((x134<=x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 56;
	volatile int32_t x138 = -1;
	uint32_t x139 = 60706276U;
	int64_t x140 = INT64_MIN;

	t34 = (x137<((x138<=x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 1U;
	uint8_t x142 = 5U;
	static uint8_t x143 = 1U;
	uint8_t x144 = 83U;
	static int32_t t35 = 117261436;

	t35 = (x141<((x142<=x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	int64_t x146 = INT64_MAX;
	static volatile int8_t x147 = INT8_MAX;
	int32_t t36 = -931064;

	t36 = (x145<((x146<=x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = -1LL;
	volatile int32_t t37 = 554863431;

	t37 = (x149<((x150<=x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = UINT16_MAX;
	volatile int8_t x154 = 1;
	volatile int32_t x155 = INT32_MIN;
	int8_t x156 = -57;
	int32_t t38 = 260;

	t38 = (x153<((x154<=x155)<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x157 = 584U;
	static int64_t x158 = -1LL;
	int64_t x159 = -1LL;
	volatile int8_t x160 = 26;
	volatile int32_t t39 = 821846269;

	t39 = (x157<((x158<=x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MIN;
	static int8_t x163 = -1;
	volatile uint64_t x164 = UINT64_MAX;
	int32_t t40 = 375;

	t40 = (x161<((x162<=x163)<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 4027U;
	int64_t x167 = INT64_MAX;
	uint8_t x168 = 9U;

	t41 = (x165<((x166<=x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = 5;
	uint32_t x170 = 1007419U;
	int16_t x171 = 5;
	static int32_t x172 = INT32_MAX;
	volatile int32_t t42 = -42;

	t42 = (x169<((x170<=x171)<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int64_t x174 = -178748LL;
	int64_t x175 = INT64_MIN;
	int16_t x176 = 1858;
	int32_t t43 = 5;

	t43 = (x173<((x174<=x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = -1LL;
	static uint16_t x178 = UINT16_MAX;
	int16_t x179 = -2;
	int32_t x180 = INT32_MIN;
	int32_t t44 = -109442;

	t44 = (x177<((x178<=x179)<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	int16_t x182 = INT16_MIN;
	int64_t x184 = INT64_MAX;
	static int32_t t45 = 760190535;

	t45 = (x181<((x182<=x183)<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x185 = 6583LLU;
	uint32_t x186 = 59237U;
	uint64_t x187 = 769405LLU;
	int16_t x188 = 0;
	static int32_t t46 = -1203689;

	t46 = (x185<((x186<=x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 8U;
	int32_t x191 = INT32_MIN;
	int8_t x192 = INT8_MIN;
	static int32_t t47 = 963743741;

	t47 = (x189<((x190<=x191)<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 50464990119778688LLU;
	volatile int64_t x195 = INT64_MAX;
	static uint8_t x196 = 12U;

	t48 = (x193<((x194<=x195)<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -319517457LL;
	static uint8_t x198 = UINT8_MAX;
	static int8_t x199 = 22;
	int32_t x200 = -1;

	t49 = (x197<((x198<=x199)<x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	uint32_t x202 = UINT32_MAX;
	int32_t x203 = -8167;
	int32_t x204 = INT32_MAX;

	t50 = (x201<((x202<=x203)<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 0U;
	int8_t x206 = -10;
	static int32_t x207 = 553835736;
	int32_t x208 = INT32_MIN;
	int32_t t51 = 35500018;

	t51 = (x205<((x206<=x207)<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int64_t x211 = INT64_MIN;
	int8_t x212 = INT8_MIN;
	static volatile int32_t t52 = -113153;

	t52 = (x209<((x210<=x211)<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 4687;
	volatile uint16_t x214 = UINT16_MAX;
	int32_t x216 = 5710553;
	static volatile int32_t t53 = 853907;

	t53 = (x213<((x214<=x215)<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 6540U;
	static int8_t x218 = INT8_MAX;
	uint32_t x219 = 100175885U;
	volatile uint8_t x220 = 34U;
	volatile int32_t t54 = -226;

	t54 = (x217<((x218<=x219)<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	volatile uint32_t x224 = 134439U;
	int32_t t55 = 830927267;

	t55 = (x221<((x222<=x223)<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int64_t x226 = INT64_MIN;
	int8_t x227 = INT8_MAX;
	uint64_t x228 = UINT64_MAX;

	t56 = (x225<((x226<=x227)<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	int32_t x231 = INT32_MAX;
	static uint64_t x232 = UINT64_MAX;
	volatile int32_t t57 = 935007;

	t57 = (x229<((x230<=x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	static volatile int16_t x236 = INT16_MIN;
	volatile int32_t t58 = -38;

	t58 = (x233<((x234<=x235)<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	uint8_t x238 = 0U;
	volatile int64_t x240 = INT64_MIN;

	t59 = (x237<((x238<=x239)<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	uint8_t x242 = UINT8_MAX;
	static int32_t x243 = INT32_MIN;
	static uint64_t x244 = 281535906494140093LLU;
	static int32_t t60 = -11395995;

	t60 = (x241<((x242<=x243)<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 0U;
	int16_t x246 = 31;
	int32_t t61 = 2;

	t61 = (x245<((x246<=x247)<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	static int32_t x250 = 0;
	static int16_t x251 = INT16_MIN;
	volatile int32_t t62 = 3;

	t62 = (x249<((x250<=x251)<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = -1;
	static volatile int64_t x254 = -17852773LL;
	static int32_t x255 = 244619659;
	int32_t x256 = 26;
	static volatile int32_t t63 = 1021;

	t63 = (x253<((x254<=x255)<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x258 = 30U;
	int16_t x259 = INT16_MIN;
	uint16_t x260 = 65U;
	volatile int32_t t64 = 3110;

	t64 = (x257<((x258<=x259)<x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = INT8_MIN;
	int32_t x262 = INT32_MAX;
	volatile uint8_t x264 = UINT8_MAX;
	volatile int32_t t65 = -102656;

	t65 = (x261<((x262<=x263)<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	int64_t x266 = INT64_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t66 = 14494285;

	t66 = (x265<((x266<=x267)<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = INT64_MIN;
	uint8_t x271 = 0U;
	uint32_t x272 = UINT32_MAX;
	int32_t t67 = -71068;

	t67 = (x269<((x270<=x271)<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	static int16_t x274 = INT16_MAX;
	volatile uint64_t x276 = UINT64_MAX;
	volatile int32_t t68 = 0;

	t68 = (x273<((x274<=x275)<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 3U;
	int8_t x278 = INT8_MAX;
	uint16_t x279 = UINT16_MAX;
	static uint16_t x280 = 5666U;
	int32_t t69 = -8284776;

	t69 = (x277<((x278<=x279)<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = 117626LLU;
	static int64_t x282 = -361427172977LL;
	int32_t x283 = INT32_MIN;
	uint32_t x284 = UINT32_MAX;
	int32_t t70 = 79604910;

	t70 = (x281<((x282<=x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x285 = -2;
	volatile uint32_t x287 = 343517U;
	int32_t x288 = INT32_MIN;
	int32_t t71 = -16747;

	t71 = (x285<((x286<=x287)<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	volatile int64_t x290 = -1LL;
	uint16_t x291 = 11217U;
	static uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = -227173256;

	t72 = (x289<((x290<=x291)<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x294 = 3U;
	static int8_t x295 = -6;
	volatile int64_t x296 = INT64_MAX;

	t73 = (x293<((x294<=x295)<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	static int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = 3064346;

	t74 = (x297<((x298<=x299)<x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	int8_t x302 = INT8_MAX;
	int32_t x304 = INT32_MIN;
	int32_t t75 = -19;

	t75 = (x301<((x302<=x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 2U;
	int16_t x306 = INT16_MIN;
	uint8_t x307 = UINT8_MAX;
	volatile int32_t t76 = 0;

	t76 = (x305<((x306<=x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = -33;
	uint8_t x310 = 53U;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -1;

	t77 = (x309<((x310<=x311)<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = 0U;
	int32_t x314 = -41258810;
	int16_t x315 = INT16_MIN;
	int64_t x316 = -1LL;
	volatile int32_t t78 = -885397;

	t78 = (x313<((x314<=x315)<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	static int8_t x318 = INT8_MAX;
	int16_t x320 = -1;
	int32_t t79 = 14;

	t79 = (x317<((x318<=x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 9U;
	int32_t x322 = 320834;
	uint16_t x323 = UINT16_MAX;
	int16_t x324 = -1;
	int32_t t80 = 1446859;

	t80 = (x321<((x322<=x323)<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x325 = 18U;
	uint32_t x326 = UINT32_MAX;
	volatile int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;
	int32_t t81 = 3;

	t81 = (x325<((x326<=x327)<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = 210354U;
	int64_t x330 = 3320LL;
	uint16_t x331 = 21589U;
	int64_t x332 = INT64_MIN;
	int32_t t82 = -395224;

	t82 = (x329<((x330<=x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x334 = 6U;
	volatile int32_t x335 = INT32_MIN;
	uint32_t x336 = UINT32_MAX;

	t83 = (x333<((x334<=x335)<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	uint32_t x338 = 259724U;
	static int8_t x339 = INT8_MIN;
	uint8_t x340 = 19U;

	t84 = (x337<((x338<=x339)<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 1U;
	volatile int64_t x342 = INT64_MIN;
	uint8_t x343 = 24U;
	int32_t x344 = 2095039;
	int32_t t85 = -8608;

	t85 = (x341<((x342<=x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 496U;
	int16_t x347 = INT16_MIN;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = 32712;

	t86 = (x345<((x346<=x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = UINT64_MAX;
	static uint64_t x352 = UINT64_MAX;
	static volatile int32_t t87 = 14;

	t87 = (x349<((x350<=x351)<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	volatile uint64_t x355 = 157LLU;
	static uint64_t x356 = 2154726090806LLU;

	t88 = (x353<((x354<=x355)<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t89 = -80;

	t89 = (x357<((x358<=x359)<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	int64_t x362 = 14205285991133LL;
	uint16_t x363 = 2697U;
	volatile int64_t x364 = INT64_MAX;
	volatile int32_t t90 = -358634;

	t90 = (x361<((x362<=x363)<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = 1U;
	volatile uint8_t x366 = UINT8_MAX;
	volatile uint64_t x367 = 499872295606752304LLU;
	int8_t x368 = INT8_MAX;
	volatile int32_t t91 = -1797;

	t91 = (x365<((x366<=x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	volatile int32_t x370 = INT32_MIN;
	uint8_t x371 = UINT8_MAX;
	static int32_t t92 = -2;

	t92 = (x369<((x370<=x371)<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = 2067LL;
	int32_t x374 = -953911;
	static volatile uint32_t x376 = UINT32_MAX;

	t93 = (x373<((x374<=x375)<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x378 = UINT32_MAX;
	int32_t t94 = -21705;

	t94 = (x377<((x378<=x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 201U;
	int64_t x382 = -1LL;
	int16_t x383 = INT16_MIN;
	int32_t t95 = 1;

	t95 = (x381<((x382<=x383)<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 472149LLU;
	int16_t x386 = INT16_MIN;
	uint8_t x387 = 13U;
	uint64_t x388 = 792529LLU;
	int32_t t96 = 26616745;

	t96 = (x385<((x386<=x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = -1;
	int8_t x390 = INT8_MAX;
	uint16_t x391 = 14U;
	int64_t x392 = 15925810LL;
	int32_t t97 = 162;

	t97 = (x389<((x390<=x391)<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x394 = INT8_MIN;
	int32_t t98 = -755760931;

	t98 = (x393<((x394<=x395)<x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = 233U;
	static uint8_t x400 = 24U;
	int32_t t99 = 1064942042;

	t99 = (x397<((x398<=x399)<x400));

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


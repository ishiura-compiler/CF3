#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = -2;
static int32_t x7 = 10998764;
int32_t x15 = INT32_MIN;
int32_t t3 = -3;
uint32_t x19 = 104121065U;
static volatile int32_t x21 = 2568;
int64_t x25 = INT64_MAX;
volatile int8_t x28 = INT8_MIN;
volatile uint64_t x37 = UINT64_MAX;
volatile uint64_t t9 = 261958510LLU;
int16_t x70 = INT16_MIN;
int32_t x74 = INT32_MIN;
uint64_t t18 = UINT64_MAX;
volatile int16_t x80 = INT16_MAX;
uint8_t x81 = UINT8_MAX;
int64_t x91 = INT64_MAX;
static int16_t x96 = -628;
int8_t x99 = INT8_MIN;
static volatile int32_t t23 = 382;
int16_t x118 = INT16_MAX;
uint16_t x131 = 30U;
int64_t x140 = -28LL;
static int64_t x143 = INT64_MIN;
uint32_t x146 = 40614533U;
volatile int32_t x148 = -1;
static volatile int8_t x149 = INT8_MIN;
int8_t x150 = INT8_MIN;
int8_t x155 = 0;
int64_t x156 = INT64_MIN;
volatile int16_t x159 = INT16_MAX;
volatile int32_t t37 = -45246;
uint32_t x161 = UINT32_MAX;
int16_t x162 = 23;
int32_t x163 = INT32_MIN;
volatile int16_t x164 = INT16_MIN;
volatile uint32_t t38 = 486857U;
static volatile uint32_t t40 = 46U;
int16_t x176 = -459;
static int16_t x180 = INT16_MIN;
volatile uint64_t x184 = 55491822LLU;
static int8_t x191 = 3;
uint32_t x192 = 19883U;
int16_t x196 = INT16_MIN;
int64_t x198 = INT64_MIN;
volatile int64_t t47 = 13LL;
uint32_t t48 = 105363761U;
volatile int8_t x210 = INT8_MIN;
uint8_t x211 = UINT8_MAX;
volatile int32_t x214 = 24148914;
int32_t x216 = INT32_MIN;
static uint32_t t51 = 8459U;
uint8_t x217 = 16U;
int64_t x231 = 25LL;
int64_t x232 = 1114694LL;
int16_t x236 = INT16_MAX;
int64_t t58 = -56153101LL;
int8_t x245 = INT8_MAX;
int16_t x246 = -1;
int32_t x247 = INT32_MAX;
static int16_t x249 = -1;
int64_t x255 = -1LL;
int16_t x258 = INT16_MAX;
static int16_t x259 = INT16_MAX;
volatile uint32_t t62 = 377U;
volatile int64_t t64 = 7726773473824LL;
volatile int32_t t65 = -7834006;
volatile int8_t x276 = INT8_MAX;
static volatile uint64_t t66 = 1655738LLU;
int16_t x281 = INT16_MIN;
static int16_t x282 = INT16_MAX;
uint16_t x287 = UINT16_MAX;
int8_t x291 = -1;
int64_t t70 = 8430792647822LL;
static uint64_t x299 = UINT64_MAX;
int64_t x301 = -1LL;
static int64_t x308 = 132LL;
static volatile uint64_t t75 = 117114679498969907LLU;
int64_t x325 = INT64_MAX;
int32_t x334 = INT32_MIN;
uint32_t x341 = 13424U;
uint32_t x343 = UINT32_MAX;
volatile int8_t x352 = -8;
int16_t x360 = -1;
int32_t x363 = INT32_MIN;
uint8_t x365 = 122U;
int8_t x366 = INT8_MAX;
int64_t x374 = 99888075975626959LL;
int16_t x380 = INT16_MIN;
uint8_t x391 = 57U;
int64_t x399 = INT64_MAX;
volatile int32_t x402 = 16647;
uint64_t x407 = 0LLU;
int16_t x409 = INT16_MIN;
int32_t x411 = -7503813;
int16_t x412 = INT16_MIN;
volatile int8_t x413 = -1;
uint16_t x415 = 7428U;
int8_t x420 = INT8_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int8_t x2 = INT8_MAX;
	int32_t x3 = -1;
	uint8_t x4 = 3U;
	volatile uint32_t t0 = 3666962U;

	t0 = ((x1%x2)|(x3/x4));

	if (t0 != 15U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	volatile uint16_t x8 = 2U;
	volatile int32_t t1 = -63331;

	t1 = ((x5%x6)|(x7/x8));

	if (t1 != 5499382) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static uint16_t x10 = 535U;
	uint8_t x11 = 4U;
	static int16_t x12 = INT16_MIN;
	int32_t t2 = 856;

	t2 = ((x9%x10)|(x11/x12));

	if (t2 != -68) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint8_t x14 = 71U;
	static volatile int16_t x16 = -206;

	t3 = ((x13%x14)|(x15/x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int32_t x18 = INT32_MAX;
	uint16_t x20 = 688U;
	uint32_t t4 = 203U;

	t4 = ((x17%x18)|(x19/x20));

	if (t4 != 196607U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 1353820LLU;
	int8_t x23 = 1;
	uint32_t x24 = UINT32_MAX;
	uint64_t t5 = 211903864877646245LLU;

	t5 = ((x21%x22)|(x23/x24));

	if (t5 != 2568LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = 57U;
	int8_t x27 = INT8_MAX;
	int64_t t6 = 34503476213136998LL;

	t6 = ((x25%x26)|(x27/x28));

	if (t6 != 55LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 63LLU;
	int16_t x30 = INT16_MIN;
	int16_t x31 = 5037;
	volatile int64_t x32 = -1LL;
	volatile uint64_t t7 = 197475823439752111LLU;

	t7 = ((x29%x30)|(x31/x32));

	if (t7 != 18446744073709546623LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	volatile int32_t x34 = -1;
	int64_t x35 = 4015LL;
	static int32_t x36 = INT32_MIN;
	int64_t t8 = 1928123695LL;

	t8 = ((x33%x34)|(x35/x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x38 = INT32_MAX;
	int16_t x39 = 5;
	volatile int16_t x40 = -7;

	t9 = ((x37%x38)|(x39/x40));

	if (t9 != 3LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int8_t x42 = -30;
	int8_t x43 = INT8_MIN;
	int16_t x44 = 44;
	int32_t t10 = 249685;

	t10 = ((x41%x42)|(x43/x44));

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	static int16_t x46 = -28;
	int32_t x47 = 157995799;
	int16_t x48 = 15001;
	volatile int32_t t11 = 0;

	t11 = ((x45%x46)|(x47/x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 2;
	int16_t x50 = INT16_MIN;
	static int64_t x51 = INT64_MIN;
	volatile int16_t x52 = INT16_MIN;
	volatile int64_t t12 = 1LL;

	t12 = ((x49%x50)|(x51/x52));

	if (t12 != 281474976710658LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = UINT16_MAX;
	int16_t x54 = 105;
	int16_t x55 = 1;
	volatile int64_t x56 = -1LL;
	volatile int64_t t13 = -26288631879LL;

	t13 = ((x53%x54)|(x55/x56));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 13U;
	uint32_t x58 = 99130623U;
	int32_t x59 = INT32_MIN;
	int64_t x60 = -1LL;
	int64_t t14 = 266943LL;

	t14 = ((x57%x58)|(x59/x60));

	if (t14 != 2147483661LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	volatile uint32_t x62 = 6U;
	uint16_t x63 = UINT16_MAX;
	int32_t x64 = INT32_MIN;
	static volatile uint32_t t15 = 851993U;

	t15 = ((x61%x62)|(x63/x64));

	if (t15 != 3U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 383136U;
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	uint64_t x68 = UINT64_MAX;
	uint64_t t16 = 1612039644728LLU;

	t16 = ((x65%x66)|(x67/x68));

	if (t16 != 383136LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int32_t x71 = 444;
	uint16_t x72 = 31U;
	volatile int32_t t17 = -3;

	t17 = ((x69%x70)|(x71/x72));

	if (t17 != -114) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	volatile uint64_t x75 = UINT64_MAX;
	int64_t x76 = INT64_MAX;

	t18 = ((x73%x74)|(x75/x76));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int32_t x78 = INT32_MAX;
	uint64_t x79 = UINT64_MAX;
	uint64_t t19 = UINT64_MAX;

	t19 = ((x77%x78)|(x79/x80));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = 1;
	static int32_t x83 = INT32_MIN;
	uint8_t x84 = 31U;
	int32_t t20 = 1025234;

	t20 = ((x81%x82)|(x83/x84));

	if (t20 != -69273666) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x89 = UINT32_MAX;
	static uint64_t x90 = 700LLU;
	static int8_t x92 = INT8_MAX;
	volatile uint64_t t21 = 5583162756109LLU;

	t21 = ((x89%x90)|(x91/x92));

	if (t21 != 72624976668148107LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -3;
	static uint16_t x94 = 9U;
	int64_t x95 = INT64_MAX;
	volatile int64_t t22 = 3418491460469437548LL;

	t22 = ((x93%x94)|(x95/x96));

	if (t22 != -3LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	volatile int8_t x98 = -59;
	volatile int16_t x100 = 11;

	t23 = ((x97%x98)|(x99/x100));

	if (t23 != -9) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -1;
	uint64_t x102 = 771538604411385LLU;
	uint64_t x103 = 2301556LLU;
	int16_t x104 = INT16_MIN;
	uint64_t t24 = 2981121242106629697LLU;

	t24 = ((x101%x102)|(x103/x104));

	if (t24 != 27580837747650LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	int8_t x106 = INT8_MIN;
	uint8_t x107 = 22U;
	volatile uint64_t x108 = UINT64_MAX;
	static volatile uint64_t t25 = 335211958475859286LLU;

	t25 = ((x105%x106)|(x107/x108));

	if (t25 != 127LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x109 = UINT16_MAX;
	static int64_t x110 = INT64_MIN;
	uint8_t x111 = 41U;
	volatile int16_t x112 = INT16_MIN;
	volatile int64_t t26 = 1033623LL;

	t26 = ((x109%x110)|(x111/x112));

	if (t26 != 65535LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	volatile uint8_t x114 = 1U;
	uint8_t x115 = 11U;
	volatile uint16_t x116 = 312U;
	volatile int32_t t27 = 2958;

	t27 = ((x113%x114)|(x115/x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = INT16_MIN;
	int16_t x119 = INT16_MIN;
	int16_t x120 = -562;
	int32_t t28 = -22324254;

	t28 = ((x117%x118)|(x119/x120));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = 0;
	uint16_t x122 = 1U;
	static uint16_t x123 = 14U;
	int32_t x124 = INT32_MAX;
	volatile int32_t t29 = -49;

	t29 = ((x121%x122)|(x123/x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -34243891793LL;
	static uint16_t x130 = UINT16_MAX;
	static volatile int64_t x132 = 552LL;
	int64_t t30 = -3995LL;

	t30 = ((x129%x130)|(x131/x132));

	if (t30 != -19313LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -83329;
	int32_t x134 = -10;
	int8_t x135 = -12;
	uint32_t x136 = 6859U;
	volatile uint32_t t31 = 684567103U;

	t31 = ((x133%x134)|(x135/x136));

	if (t31 != 4294967287U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MAX;
	int32_t x138 = INT32_MIN;
	int64_t x139 = INT64_MIN;
	volatile int64_t t32 = -58080993212086856LL;

	t32 = ((x137%x138)|(x139/x140));

	if (t32 != 329406146014085119LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = UINT32_MAX;
	volatile uint8_t x142 = UINT8_MAX;
	int16_t x144 = -14741;
	int64_t t33 = -614291342098606LL;

	t33 = ((x141%x142)|(x143/x144));

	if (t33 != 625695138515350LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = -1;
	uint32_t x147 = UINT32_MAX;
	uint32_t t34 = 46U;

	t34 = ((x145%x146)|(x147/x148));

	if (t34 != 30441331U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x151 = INT16_MIN;
	int64_t x152 = -1LL;
	static int64_t t35 = -1944823526LL;

	t35 = ((x149%x150)|(x151/x152));

	if (t35 != 32768LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = 355391417115475LLU;
	volatile uint8_t x154 = UINT8_MAX;
	volatile uint64_t t36 = 6342790711LLU;

	t36 = ((x153%x154)|(x155/x156));

	if (t36 != 100LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x157 = UINT8_MAX;
	volatile uint8_t x158 = 2U;
	int32_t x160 = INT32_MAX;

	t37 = ((x157%x158)|(x159/x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {


	t38 = ((x161%x162)|(x163/x164));

	if (t38 != 65547U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = -1;
	static int32_t x166 = INT32_MIN;
	int16_t x167 = -1;
	volatile uint16_t x168 = 242U;
	int32_t t39 = 0;

	t39 = ((x165%x166)|(x167/x168));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x169 = UINT16_MAX;
	int16_t x170 = -1;
	uint32_t x171 = 18U;
	volatile int32_t x172 = INT32_MIN;

	t40 = ((x169%x170)|(x171/x172));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = -1LL;
	int16_t x174 = 559;
	uint16_t x175 = UINT16_MAX;
	volatile int64_t t41 = -2421LL;

	t41 = ((x173%x174)|(x175/x176));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = INT32_MIN;
	uint64_t x178 = 57LLU;
	uint16_t x179 = 13752U;
	volatile uint64_t t42 = 643837604244979475LLU;

	t42 = ((x177%x178)|(x179/x180));

	if (t42 != 14LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	uint8_t x182 = 61U;
	int64_t x183 = INT64_MAX;
	static volatile uint64_t t43 = 3LLU;

	t43 = ((x181%x182)|(x183/x184));

	if (t43 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = UINT32_MAX;
	uint16_t x186 = 2U;
	int16_t x187 = INT16_MIN;
	int64_t x188 = INT64_MIN;
	volatile int64_t t44 = 29LL;

	t44 = ((x185%x186)|(x187/x188));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = -1;
	uint64_t x190 = 9534047702LLU;
	uint64_t t45 = 8014676LLU;

	t45 = ((x189%x190)|(x191/x192));

	if (t45 != 5756186275LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = -439607;
	int64_t x194 = INT64_MAX;
	uint64_t x195 = 197101799684563LLU;
	volatile uint64_t t46 = 4766082LLU;

	t46 = ((x193%x194)|(x195/x196));

	if (t46 != 18446744073709112009LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x197 = 1678506U;
	static uint16_t x199 = 6U;
	volatile int64_t x200 = INT64_MIN;

	t47 = ((x197%x198)|(x199/x200));

	if (t47 != 1678506LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x201 = 185U;
	uint32_t x202 = 3U;
	int8_t x203 = INT8_MAX;
	int16_t x204 = INT16_MAX;

	t48 = ((x201%x202)|(x203/x204));

	if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x205 = INT16_MIN;
	volatile int8_t x206 = 1;
	volatile uint64_t x207 = UINT64_MAX;
	int32_t x208 = INT32_MIN;
	uint64_t t49 = 886LLU;

	t49 = ((x205%x206)|(x207/x208));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -1;
	volatile int64_t x212 = INT64_MAX;
	int64_t t50 = -150847645LL;

	t50 = ((x209%x210)|(x211/x212));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x213 = -456;
	uint32_t x215 = 402288U;

	t51 = ((x213%x214)|(x215/x216));

	if (t51 != 4294966840U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x218 = -192LL;
	int8_t x219 = -1;
	static volatile uint8_t x220 = UINT8_MAX;
	int64_t t52 = -56073201466343LL;

	t52 = ((x217%x218)|(x219/x220));

	if (t52 != 16LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = -14833120591410LL;
	int16_t x222 = INT16_MIN;
	volatile int8_t x223 = INT8_MAX;
	int16_t x224 = 1510;
	volatile int64_t t53 = -4557936840706LL;

	t53 = ((x221%x222)|(x223/x224));

	if (t53 != -15922LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = 10U;
	uint8_t x226 = UINT8_MAX;
	uint64_t x227 = 66LLU;
	int32_t x228 = -1;
	static uint64_t t54 = 397800028236744LLU;

	t54 = ((x225%x226)|(x227/x228));

	if (t54 != 10LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x229 = UINT8_MAX;
	static int64_t x230 = INT64_MIN;
	static int64_t t55 = 5962185795130LL;

	t55 = ((x229%x230)|(x231/x232));

	if (t55 != 255LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x233 = 49688488;
	static uint64_t x234 = 221846452282724LLU;
	volatile int64_t x235 = 327007747LL;
	volatile uint64_t t56 = 177574326040LLU;

	t56 = ((x233%x234)|(x235/x236));

	if (t56 != 49688571LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 3566U;
	int16_t x238 = -61;
	int16_t x239 = INT16_MAX;
	int8_t x240 = INT8_MIN;
	int32_t t57 = -815737287;

	t57 = ((x237%x238)|(x239/x240));

	if (t57 != -227) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x241 = 2U;
	int32_t x242 = INT32_MAX;
	int16_t x243 = INT16_MAX;
	volatile int64_t x244 = -1LL;

	t58 = ((x241%x242)|(x243/x244));

	if (t58 != -32765LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x248 = INT16_MIN;
	static int32_t t59 = -9323;

	t59 = ((x245%x246)|(x247/x248));

	if (t59 != -65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x250 = UINT16_MAX;
	uint16_t x251 = 4U;
	int32_t x252 = -1;
	int32_t t60 = 0;

	t60 = ((x249%x250)|(x251/x252));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x253 = INT8_MIN;
	int16_t x254 = INT16_MIN;
	int16_t x256 = INT16_MAX;
	static int64_t t61 = 698LL;

	t61 = ((x253%x254)|(x255/x256));

	if (t61 != -128LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = 227655484U;
	uint32_t x260 = 4U;

	t62 = ((x257%x258)|(x259/x260));

	if (t62 != 24575U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x261 = INT32_MIN;
	static int32_t x262 = -1;
	int32_t x263 = INT32_MIN;
	static int8_t x264 = INT8_MAX;
	int32_t t63 = -3269695;

	t63 = ((x261%x262)|(x263/x264));

	if (t63 != -16909320) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MAX;
	uint16_t x266 = UINT16_MAX;
	int16_t x267 = INT16_MIN;
	volatile int64_t x268 = INT64_MIN;

	t64 = ((x265%x266)|(x267/x268));

	if (t64 != 127LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MAX;
	volatile int16_t x270 = INT16_MIN;
	int16_t x271 = 955;
	int32_t x272 = INT32_MIN;

	t65 = ((x269%x270)|(x271/x272));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x273 = 404929807457712007LLU;
	static int32_t x274 = -1;
	int8_t x275 = -1;

	t66 = ((x273%x274)|(x275/x276));

	if (t66 != 404929807457712007LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = 4855413U;
	int8_t x278 = 2;
	volatile int8_t x279 = INT8_MAX;
	int16_t x280 = 52;
	volatile uint32_t t67 = 6926U;

	t67 = ((x277%x278)|(x279/x280));

	if (t67 != 3U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x283 = UINT64_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = ((x281%x282)|(x283/x284));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x285 = 23U;
	static uint64_t x286 = 3988116LLU;
	int16_t x288 = INT16_MIN;
	uint64_t t69 = UINT64_MAX;

	t69 = ((x285%x286)|(x287/x288));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = 0;
	uint8_t x290 = 16U;
	int64_t x292 = INT64_MAX;

	t70 = ((x289%x290)|(x291/x292));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = -49;
	static int16_t x294 = INT16_MIN;
	static volatile int8_t x295 = INT8_MIN;
	static uint32_t x296 = 2820147U;
	uint32_t t71 = UINT32_MAX;

	t71 = ((x293%x294)|(x295/x296));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = -1LL;
	static int64_t x298 = -1LL;
	int32_t x300 = -1;
	static uint64_t t72 = 1131969LLU;

	t72 = ((x297%x298)|(x299/x300));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x302 = INT64_MAX;
	int64_t x303 = INT64_MAX;
	int16_t x304 = -1;
	int64_t t73 = 491927LL;

	t73 = ((x301%x302)|(x303/x304));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x305 = UINT64_MAX;
	int8_t x306 = -47;
	int32_t x307 = 5640883;
	static uint64_t t74 = 14504538LLU;

	t74 = ((x305%x306)|(x307/x308));

	if (t74 != 42735LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x313 = UINT64_MAX;
	int32_t x314 = INT32_MAX;
	uint8_t x315 = UINT8_MAX;
	static int16_t x316 = INT16_MIN;

	t75 = ((x313%x314)|(x315/x316));

	if (t75 != 3LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x317 = UINT8_MAX;
	uint32_t x318 = 4498U;
	static int32_t x319 = -38680342;
	int32_t x320 = INT32_MIN;
	volatile uint32_t t76 = 529252U;

	t76 = ((x317%x318)|(x319/x320));

	if (t76 != 255U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x326 = INT32_MIN;
	int64_t x327 = INT64_MIN;
	int16_t x328 = INT16_MIN;
	int64_t t77 = 1LL;

	t77 = ((x325%x326)|(x327/x328));

	if (t77 != 281477124194303LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x329 = UINT8_MAX;
	uint16_t x330 = 320U;
	int32_t x331 = 55594918;
	static int8_t x332 = 10;
	int32_t t78 = 15;

	t78 = ((x329%x330)|(x331/x332));

	if (t78 != 5559551) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x333 = UINT8_MAX;
	int16_t x335 = 168;
	uint16_t x336 = 1U;
	static volatile int32_t t79 = -45;

	t79 = ((x333%x334)|(x335/x336));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x337 = 1U;
	int32_t x338 = -1;
	int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MIN;
	int32_t t80 = -1;

	t80 = ((x337%x338)|(x339/x340));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x342 = -113;
	int64_t x344 = INT64_MIN;
	volatile int64_t t81 = 912317254645LL;

	t81 = ((x341%x342)|(x343/x344));

	if (t81 != 13424LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x349 = 1U;
	volatile int64_t x350 = 53975249LL;
	static int16_t x351 = -1;
	int64_t t82 = 4531356199LL;

	t82 = ((x349%x350)|(x351/x352));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = INT32_MAX;
	volatile int64_t x354 = -1LL;
	static int8_t x355 = -1;
	uint32_t x356 = 1504452U;
	int64_t t83 = 67093996483LL;

	t83 = ((x353%x354)|(x355/x356));

	if (t83 != 2854LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x357 = 1U;
	volatile uint64_t x358 = 2LLU;
	int16_t x359 = INT16_MIN;
	volatile uint64_t t84 = 85381LLU;

	t84 = ((x357%x358)|(x359/x360));

	if (t84 != 32769LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = INT8_MIN;
	static uint32_t x362 = 1U;
	int64_t x364 = INT64_MAX;
	volatile int64_t t85 = -474332042LL;

	t85 = ((x361%x362)|(x363/x364));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x367 = -1;
	volatile int16_t x368 = -1;
	volatile int32_t t86 = 490;

	t86 = ((x365%x366)|(x367/x368));

	if (t86 != 123) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MIN;
	uint8_t x371 = UINT8_MAX;
	uint8_t x372 = 114U;
	static int64_t t87 = -4300070271LL;

	t87 = ((x369%x370)|(x371/x372));

	if (t87 != 2LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x373 = 0U;
	int16_t x375 = INT16_MIN;
	uint32_t x376 = UINT32_MAX;
	int64_t t88 = 19811LL;

	t88 = ((x373%x374)|(x375/x376));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = INT32_MIN;
	static uint16_t x378 = 9236U;
	int32_t x379 = 2247;
	int32_t t89 = 8;

	t89 = ((x377%x378)|(x379/x380));

	if (t89 != -2816) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x381 = UINT16_MAX;
	int32_t x382 = INT32_MIN;
	static uint64_t x383 = 1LLU;
	int16_t x384 = -82;
	volatile uint64_t t90 = 81030269LLU;

	t90 = ((x381%x382)|(x383/x384));

	if (t90 != 65535LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = INT8_MAX;
	uint64_t x386 = 92026LLU;
	static uint16_t x387 = 252U;
	static int8_t x388 = INT8_MIN;
	uint64_t t91 = UINT64_MAX;

	t91 = ((x385%x386)|(x387/x388));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = INT8_MIN;
	volatile uint64_t x390 = UINT64_MAX;
	int32_t x392 = -1;
	uint64_t t92 = 1697989LLU;

	t92 = ((x389%x390)|(x391/x392));

	if (t92 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x393 = INT64_MAX;
	int16_t x394 = INT16_MAX;
	uint64_t x395 = UINT64_MAX;
	int64_t x396 = INT64_MAX;
	static uint64_t t93 = 488237LLU;

	t93 = ((x393%x394)|(x395/x396));

	if (t93 != 7LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x397 = 132164784381LLU;
	int32_t x398 = INT32_MIN;
	static int16_t x400 = -1;
	volatile uint64_t t94 = 5LLU;

	t94 = ((x397%x398)|(x399/x400));

	if (t94 != 9223372169019560189LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x401 = UINT64_MAX;
	int16_t x403 = INT16_MIN;
	int64_t x404 = 1LL;
	static uint64_t t95 = 12774445LLU;

	t95 = ((x401%x402)|(x403/x404));

	if (t95 != 18446744073709526489LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x405 = -1754267329275181LL;
	int64_t x406 = -2693914913020LL;
	static int64_t x408 = 58834597LL;
	uint64_t t96 = 12228161771LLU;

	t96 = ((x405%x406)|(x407/x408));

	if (t96 != 18446743544988652455LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x410 = 2128105266LL;
	static int64_t t97 = 1129133292449469LL;

	t97 = ((x409%x410)|(x411/x412));

	if (t97 != -32540LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x414 = 1;
	int16_t x416 = INT16_MIN;
	static int32_t t98 = 3037;

	t98 = ((x413%x414)|(x415/x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x417 = 93;
	uint8_t x418 = 28U;
	static int64_t x419 = -737001360782LL;
	volatile int64_t t99 = 65168640876416LL;

	t99 = ((x417%x418)|(x419/x420));

	if (t99 != -5803160321LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 1;
static uint32_t x8 = UINT32_MAX;
volatile int32_t t2 = 53;
uint16_t x17 = UINT16_MAX;
int64_t x20 = 135006943771969LL;
int16_t x22 = INT16_MIN;
int64_t x23 = -1LL;
uint32_t x32 = 81U;
uint8_t x33 = 20U;
int32_t t8 = -457278080;
int32_t x39 = INT32_MAX;
uint64_t x43 = 19LLU;
int32_t t11 = 245911341;
int32_t x56 = 3;
volatile int32_t t13 = -412;
int32_t x59 = INT32_MAX;
volatile int32_t t14 = -47453;
static int16_t x64 = 1;
volatile int32_t t16 = 4685100;
uint64_t x78 = UINT64_MAX;
static int8_t x80 = INT8_MIN;
int32_t x84 = 2026;
volatile int32_t x94 = -7;
int8_t x104 = INT8_MIN;
static int32_t x106 = INT32_MAX;
int32_t x108 = -1;
int16_t x115 = 7;
volatile int64_t x117 = -24571981784864561LL;
int64_t x140 = -1LL;
volatile int32_t t34 = -116;
int16_t x148 = 14143;
int64_t x154 = INT64_MAX;
int64_t x155 = INT64_MAX;
static int64_t x157 = INT64_MIN;
int32_t t41 = -352564140;
int64_t x169 = INT64_MIN;
int32_t x171 = -6354;
volatile int64_t x177 = INT64_MAX;
static uint16_t x184 = 1988U;
int64_t x198 = INT64_MIN;
int64_t x208 = INT64_MIN;
int8_t x210 = -1;
int16_t x211 = 381;
volatile int32_t t52 = -14;
int32_t x213 = 835764859;
int32_t x224 = INT32_MIN;
volatile uint32_t x225 = 47U;
static volatile int32_t x227 = INT32_MAX;
volatile uint64_t x234 = UINT64_MAX;
uint64_t x241 = UINT64_MAX;
volatile int8_t x243 = INT8_MAX;
volatile int32_t t60 = 634190928;
int64_t x250 = INT64_MAX;
int32_t x252 = INT32_MIN;
int8_t x257 = INT8_MIN;
uint16_t x265 = UINT16_MAX;
int32_t t66 = 4;
int32_t x271 = -1;
int32_t t67 = 24;
static uint64_t x275 = 978797319LLU;
int8_t x276 = INT8_MIN;
int8_t x277 = INT8_MAX;
int32_t t71 = 48;
int8_t x289 = INT8_MIN;
volatile int32_t t72 = 102289548;
int8_t x300 = INT8_MAX;
uint64_t x307 = 3388653697941999860LLU;
int64_t x310 = INT64_MAX;
uint64_t x318 = 17LLU;
int32_t t79 = 459943386;
volatile int64_t x325 = INT64_MIN;
volatile uint64_t x329 = UINT64_MAX;
static int64_t x331 = -1LL;
uint64_t x337 = UINT64_MAX;
int32_t t85 = -241200667;
volatile int64_t x346 = 254298013LL;
static uint16_t x350 = 83U;
int64_t x352 = -59584561918667LL;
int64_t x354 = 49360536LL;
static int32_t x362 = INT32_MIN;
volatile int8_t x365 = -6;
int64_t x366 = INT64_MIN;
volatile int32_t t91 = 28974;
uint64_t x371 = 493951532748419113LLU;
int64_t x372 = 61379237149282LL;
int64_t x374 = INT64_MIN;
int64_t x377 = -13722068796017LL;
int32_t t94 = -146533;
volatile int32_t t96 = 30;
volatile uint64_t x393 = 15705273LLU;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = -1LL;
	static int32_t x3 = -1;
	uint8_t x4 = UINT8_MAX;

	t0 = ((x1|x2)==(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 3374;
	uint16_t x6 = 77U;
	volatile int64_t x7 = -1LL;
	int32_t t1 = -40;

	t1 = ((x5|x6)==(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 3U;
	int64_t x10 = INT64_MIN;
	static volatile uint64_t x11 = 2LLU;
	int64_t x12 = INT64_MIN;

	t2 = ((x9|x10)==(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	volatile int32_t x14 = INT32_MIN;
	int64_t x15 = INT64_MIN;
	int64_t x16 = 14205039LL;
	int32_t t3 = -43;

	t3 = ((x13|x14)==(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 2184894724579230LLU;
	static int64_t x19 = INT64_MIN;
	static int32_t t4 = 115802492;

	t4 = ((x17|x18)==(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int8_t x24 = INT8_MAX;
	int32_t t5 = 8;

	t5 = ((x21|x22)==(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 645U;
	int8_t x26 = INT8_MAX;
	int16_t x27 = INT16_MAX;
	uint16_t x28 = 123U;
	volatile int32_t t6 = 5508;

	t6 = ((x25|x26)==(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	uint16_t x30 = UINT16_MAX;
	int16_t x31 = -1;
	volatile int32_t t7 = -821;

	t7 = ((x29|x30)==(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x34 = INT64_MIN;
	volatile uint32_t x35 = 379714511U;
	volatile uint16_t x36 = 2173U;

	t8 = ((x33|x34)==(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1050750336LL;
	volatile uint8_t x38 = 9U;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -242125877;

	t9 = ((x37|x38)==(x39&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -85111;
	static uint64_t x42 = UINT64_MAX;
	uint64_t x44 = 0LLU;
	volatile int32_t t10 = -25361;

	t10 = ((x41|x42)==(x43&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 0U;
	int16_t x46 = -1;
	int8_t x47 = 1;
	volatile int8_t x48 = INT8_MIN;

	t11 = ((x45|x46)==(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	volatile int8_t x50 = INT8_MIN;
	volatile int16_t x51 = -1;
	int32_t x52 = INT32_MAX;
	static int32_t t12 = 25;

	t12 = ((x49|x50)==(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 38;
	int32_t x54 = INT32_MIN;
	int64_t x55 = -24553518761578655LL;

	t13 = ((x53|x54)==(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -1LL;
	uint16_t x58 = 88U;
	int64_t x60 = -1468102755LL;

	t14 = ((x57|x58)==(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	static int32_t x62 = INT32_MAX;
	static uint64_t x63 = 143155563872547755LLU;
	static int32_t t15 = 810867;

	t15 = ((x61|x62)==(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int16_t x66 = -1203;
	int16_t x67 = INT16_MAX;
	static uint16_t x68 = 241U;

	t16 = ((x65|x66)==(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 3683U;
	int8_t x70 = 1;
	int8_t x71 = -1;
	uint8_t x72 = 4U;
	volatile int32_t t17 = 7;

	t17 = ((x69|x70)==(x71&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 259650LLU;
	uint8_t x74 = 1U;
	int32_t x75 = -1;
	volatile uint32_t x76 = UINT32_MAX;
	int32_t t18 = -26;

	t18 = ((x73|x74)==(x75&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 4411U;
	int16_t x79 = -40;
	volatile int32_t t19 = 13041;

	t19 = ((x77|x78)==(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -529;
	volatile uint8_t x82 = 55U;
	uint64_t x83 = 10619706138134038LLU;
	int32_t t20 = 65020152;

	t20 = ((x81|x82)==(x83&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 1U;
	static int8_t x86 = -53;
	uint16_t x87 = UINT16_MAX;
	static int64_t x88 = INT64_MIN;
	volatile int32_t t21 = -218239;

	t21 = ((x85|x86)==(x87&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x89 = UINT8_MAX;
	volatile uint32_t x90 = 3885273U;
	int64_t x91 = INT64_MAX;
	static volatile uint8_t x92 = 72U;
	volatile int32_t t22 = -1;

	t22 = ((x89|x90)==(x91&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -6006408;
	int32_t x95 = -1;
	int8_t x96 = INT8_MAX;
	int32_t t23 = -11672;

	t23 = ((x93|x94)==(x95&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	volatile int64_t x98 = 3740614130650339LL;
	int16_t x99 = -13144;
	int64_t x100 = 1LL;
	int32_t t24 = 3;

	t24 = ((x97|x98)==(x99&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 1U;
	int32_t x102 = INT32_MIN;
	int16_t x103 = -1;
	volatile int32_t t25 = 718;

	t25 = ((x101|x102)==(x103&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int32_t x107 = -153;
	volatile int32_t t26 = 1004771999;

	t26 = ((x105|x106)==(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = 19U;
	int8_t x110 = INT8_MAX;
	volatile int64_t x111 = INT64_MIN;
	int16_t x112 = INT16_MIN;
	int32_t t27 = -1;

	t27 = ((x109|x110)==(x111&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	uint32_t x114 = UINT32_MAX;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = 505;

	t28 = ((x113|x114)==(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = 0;
	int16_t x119 = INT16_MIN;
	static int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -653;

	t29 = ((x117|x118)==(x119&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = 0U;
	static uint64_t x122 = UINT64_MAX;
	int16_t x123 = INT16_MIN;
	uint16_t x124 = 260U;
	volatile int32_t t30 = -1;

	t30 = ((x121|x122)==(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	int64_t x126 = INT64_MAX;
	int8_t x127 = 0;
	volatile int32_t x128 = 1012538;
	int32_t t31 = -94827207;

	t31 = ((x125|x126)==(x127&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = -1;
	uint8_t x130 = UINT8_MAX;
	int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = 2;

	t32 = ((x129|x130)==(x131&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	volatile uint64_t x134 = UINT64_MAX;
	volatile uint64_t x135 = UINT64_MAX;
	int32_t x136 = INT32_MIN;
	static volatile int32_t t33 = -843;

	t33 = ((x133|x134)==(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	uint16_t x138 = 108U;
	uint16_t x139 = UINT16_MAX;

	t34 = ((x137|x138)==(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = 492008LLU;
	int32_t x143 = INT32_MAX;
	int32_t x144 = INT32_MAX;
	volatile int32_t t35 = 1680269;

	t35 = ((x141|x142)==(x143&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 4264;
	int32_t x146 = -1418080;
	static uint64_t x147 = 7LLU;
	static volatile int32_t t36 = -219;

	t36 = ((x145|x146)==(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	static uint8_t x150 = UINT8_MAX;
	static uint32_t x151 = 521399U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 1954;

	t37 = ((x149|x150)==(x151&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = INT8_MIN;
	static int8_t x156 = 1;
	volatile int32_t t38 = -298739;

	t38 = ((x153|x154)==(x155&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = 2;
	uint64_t x159 = UINT64_MAX;
	uint16_t x160 = 3U;
	static volatile int32_t t39 = 946543;

	t39 = ((x157|x158)==(x159&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = 4600;
	uint32_t x162 = 2024277U;
	int16_t x163 = -1;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t40 = -4163690;

	t40 = ((x161|x162)==(x163&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x165 = UINT16_MAX;
	int64_t x166 = INT64_MIN;
	int8_t x167 = -1;
	int32_t x168 = -1;

	t41 = ((x165|x166)==(x167&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MIN;
	int32_t x172 = INT32_MIN;
	volatile int32_t t42 = -29844823;

	t42 = ((x169|x170)==(x171&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 979;
	int32_t x174 = -541;
	int32_t x175 = INT32_MIN;
	static int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 1748;

	t43 = ((x173|x174)==(x175&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = INT8_MAX;
	static int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MIN;
	int32_t t44 = 461;

	t44 = ((x177|x178)==(x179&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x181 = 0U;
	uint16_t x182 = 2764U;
	int64_t x183 = -7309627172LL;
	volatile int32_t t45 = 1944452;

	t45 = ((x181|x182)==(x183&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 54;
	static int16_t x186 = INT16_MIN;
	int16_t x187 = 13416;
	int32_t x188 = INT32_MAX;
	int32_t t46 = 6858;

	t46 = ((x185|x186)==(x187&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -429537799599LL;
	int8_t x190 = 1;
	int32_t x191 = INT32_MIN;
	volatile uint64_t x192 = UINT64_MAX;
	static volatile int32_t t47 = 296671;

	t47 = ((x189|x190)==(x191&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MAX;
	int8_t x194 = 1;
	uint16_t x195 = 14383U;
	static int64_t x196 = INT64_MAX;
	volatile int32_t t48 = 491773033;

	t48 = ((x193|x194)==(x195&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 1;
	static int32_t x199 = -36033;
	volatile int64_t x200 = -1LL;
	volatile int32_t t49 = 30933306;

	t49 = ((x197|x198)==(x199&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	volatile int8_t x202 = INT8_MAX;
	volatile uint64_t x203 = 130000962513004LLU;
	int8_t x204 = -12;
	int32_t t50 = 15112205;

	t50 = ((x201|x202)==(x203&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = 3U;
	static int8_t x206 = INT8_MIN;
	volatile uint8_t x207 = 15U;
	static int32_t t51 = -1006357858;

	t51 = ((x205|x206)==(x207&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -11;
	static int16_t x212 = 201;

	t52 = ((x209|x210)==(x211&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = -19;
	volatile int64_t x215 = -1LL;
	int32_t x216 = -1;
	int32_t t53 = -7;

	t53 = ((x213|x214)==(x215&x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = INT64_MIN;
	int8_t x218 = 0;
	volatile int8_t x219 = 1;
	uint8_t x220 = 1U;
	volatile int32_t t54 = -1368483;

	t54 = ((x217|x218)==(x219&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 34283U;
	int16_t x222 = -1;
	static uint64_t x223 = 124LLU;
	volatile int32_t t55 = 4;

	t55 = ((x221|x222)==(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x226 = UINT64_MAX;
	int64_t x228 = INT64_MIN;
	int32_t t56 = -1;

	t56 = ((x225|x226)==(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	int8_t x230 = INT8_MAX;
	int32_t x231 = 11396849;
	static uint8_t x232 = 0U;
	int32_t t57 = -59705540;

	t57 = ((x229|x230)==(x231&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	uint8_t x235 = 9U;
	int64_t x236 = INT64_MAX;
	static volatile int32_t t58 = 12421;

	t58 = ((x233|x234)==(x235&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 655641LLU;
	int16_t x238 = -1;
	static int16_t x239 = -1739;
	int32_t x240 = -2066827;
	volatile int32_t t59 = 106489554;

	t59 = ((x237|x238)==(x239&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = 19U;
	int32_t x244 = -1;

	t60 = ((x241|x242)==(x243&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 5;
	static int8_t x246 = -1;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = INT8_MAX;
	static volatile int32_t t61 = 222365;

	t61 = ((x245|x246)==(x247&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -3;
	volatile uint64_t x251 = 179285LLU;
	static volatile int32_t t62 = 40;

	t62 = ((x249|x250)==(x251&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MIN;
	int8_t x254 = 1;
	uint16_t x255 = 11040U;
	int16_t x256 = -5;
	int32_t t63 = -73597;

	t63 = ((x253|x254)==(x255&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x258 = -21;
	int32_t x259 = -5477012;
	int32_t x260 = INT32_MAX;
	volatile int32_t t64 = 49301;

	t64 = ((x257|x258)==(x259&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 48565309100LLU;
	uint16_t x262 = UINT16_MAX;
	static uint64_t x263 = 3171491908247201LLU;
	uint16_t x264 = 5U;
	static int32_t t65 = -6275;

	t65 = ((x261|x262)==(x263&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = INT64_MAX;
	static uint16_t x267 = 2U;
	int8_t x268 = 1;

	t66 = ((x265|x266)==(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 3874U;
	uint8_t x270 = 125U;
	int16_t x272 = INT16_MIN;

	t67 = ((x269|x270)==(x271&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	int64_t x274 = -4911602148720LL;
	volatile int32_t t68 = 0;

	t68 = ((x273|x274)==(x275&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = -2;
	uint16_t x279 = 29499U;
	static uint16_t x280 = 149U;
	int32_t t69 = 0;

	t69 = ((x277|x278)==(x279&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int32_t x282 = 3641;
	uint8_t x283 = UINT8_MAX;
	volatile int8_t x284 = INT8_MAX;
	volatile int32_t t70 = -4;

	t70 = ((x281|x282)==(x283&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 1;
	int32_t x286 = 746;
	uint64_t x287 = UINT64_MAX;
	uint8_t x288 = 1U;

	t71 = ((x285|x286)==(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x290 = UINT16_MAX;
	int32_t x291 = INT32_MAX;
	int16_t x292 = 3;

	t72 = ((x289|x290)==(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MAX;
	static uint16_t x295 = UINT16_MAX;
	uint8_t x296 = 3U;
	volatile int32_t t73 = -2;

	t73 = ((x293|x294)==(x295&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = -1LL;
	int32_t x298 = INT32_MIN;
	int32_t x299 = INT32_MIN;
	int32_t t74 = 2354321;

	t74 = ((x297|x298)==(x299&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = -1;
	int8_t x302 = -1;
	uint64_t x303 = UINT64_MAX;
	int8_t x304 = INT8_MIN;
	int32_t t75 = 7105;

	t75 = ((x301|x302)==(x303&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	volatile int64_t x306 = INT64_MAX;
	int64_t x308 = -1LL;
	int32_t t76 = -517;

	t76 = ((x305|x306)==(x307&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	int8_t x311 = INT8_MIN;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -12;

	t77 = ((x309|x310)==(x311&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 0;
	int64_t x314 = INT64_MIN;
	volatile uint64_t x315 = 8775515651LLU;
	static uint32_t x316 = UINT32_MAX;
	int32_t t78 = -8;

	t78 = ((x313|x314)==(x315&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 17U;
	int16_t x319 = INT16_MIN;
	uint16_t x320 = 3U;

	t79 = ((x317|x318)==(x319&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 21;
	int8_t x322 = -1;
	static volatile uint8_t x323 = 80U;
	int32_t x324 = -181348;
	volatile int32_t t80 = 54;

	t80 = ((x321|x322)==(x323&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x326 = 33402949U;
	int8_t x327 = 6;
	uint32_t x328 = 9784U;
	int32_t t81 = 1009211667;

	t81 = ((x325|x326)==(x327&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x330 = 597696541LLU;
	int64_t x332 = 25629917LL;
	volatile int32_t t82 = -29581;

	t82 = ((x329|x330)==(x331&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -1;
	int16_t x334 = INT16_MIN;
	int16_t x335 = INT16_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t83 = -2;

	t83 = ((x333|x334)==(x335&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = INT32_MAX;
	uint64_t x339 = 559LLU;
	static int16_t x340 = -1;
	volatile int32_t t84 = 18174;

	t84 = ((x337|x338)==(x339&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x341 = -460;
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = INT8_MIN;
	int32_t x344 = -1;

	t85 = ((x341|x342)==(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = -1;
	volatile int8_t x347 = -30;
	int16_t x348 = 9679;
	int32_t t86 = 15824;

	t86 = ((x345|x346)==(x347&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = INT64_MIN;
	volatile int64_t x351 = -1LL;
	int32_t t87 = 1533553;

	t87 = ((x349|x350)==(x351&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x353 = UINT64_MAX;
	uint32_t x355 = 37U;
	int64_t x356 = -1LL;
	volatile int32_t t88 = 31748489;

	t88 = ((x353|x354)==(x355&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = -14;
	static int16_t x358 = -8;
	uint8_t x359 = 0U;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -890274;

	t89 = ((x357|x358)==(x359&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x361 = 1147512U;
	int16_t x363 = -3;
	int32_t x364 = INT32_MAX;
	volatile int32_t t90 = -1844144;

	t90 = ((x361|x362)==(x363&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x367 = -1;
	uint64_t x368 = 2775452LLU;

	t91 = ((x365|x366)==(x367&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	volatile int32_t x370 = INT32_MIN;
	static volatile int32_t t92 = -29964;

	t92 = ((x369|x370)==(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 962618;
	static int16_t x375 = INT16_MAX;
	uint64_t x376 = 305273742LLU;
	static int32_t t93 = -32736;

	t93 = ((x373|x374)==(x375&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x378 = INT32_MIN;
	static int32_t x379 = INT32_MIN;
	int8_t x380 = -1;

	t94 = ((x377|x378)==(x379&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x381 = 206U;
	static int8_t x382 = -2;
	volatile int32_t x383 = INT32_MIN;
	int64_t x384 = 408207LL;
	int32_t t95 = 44;

	t95 = ((x381|x382)==(x383&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MAX;
	int64_t x387 = INT64_MIN;
	int16_t x388 = -1;

	t96 = ((x385|x386)==(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = 2;
	int64_t x390 = INT64_MIN;
	int64_t x391 = INT64_MIN;
	static uint16_t x392 = UINT16_MAX;
	volatile int32_t t97 = 169086;

	t97 = ((x389|x390)==(x391&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x394 = UINT8_MAX;
	static volatile int64_t x395 = 507947977272401964LL;
	int64_t x396 = INT64_MAX;
	volatile int32_t t98 = 1;

	t98 = ((x393|x394)==(x395&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = 100U;
	static int32_t x398 = -31987024;
	uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MAX;
	int32_t t99 = -737311;

	t99 = ((x397|x398)==(x399&x400));

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


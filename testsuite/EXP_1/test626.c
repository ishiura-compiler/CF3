#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
int64_t x7 = 25780142352622LL;
int64_t x14 = INT64_MAX;
int16_t x22 = 82;
static volatile int32_t t6 = -5846;
static int8_t x33 = -1;
int16_t x34 = INT16_MIN;
static int8_t x50 = -1;
volatile int64_t x51 = INT64_MIN;
int32_t x53 = INT32_MIN;
int8_t x63 = INT8_MIN;
int64_t t13 = 105816286656712LL;
int32_t x67 = -1;
volatile int8_t x73 = INT8_MIN;
int32_t x78 = -882050875;
static uint8_t x83 = UINT8_MAX;
volatile int32_t t18 = -239964;
volatile int32_t t19 = -608320;
int32_t t20 = -110908939;
static uint64_t x98 = 48425394953195195LLU;
static uint64_t x100 = 6LLU;
uint64_t t21 = 8780840149766647119LLU;
static int32_t x101 = INT32_MAX;
uint16_t x107 = 2U;
static volatile int64_t x111 = INT64_MIN;
static uint32_t x113 = 41U;
static int16_t x126 = INT16_MIN;
uint32_t x131 = UINT32_MAX;
volatile int16_t x133 = -3;
volatile int32_t x136 = -1;
int8_t x141 = 30;
int16_t x145 = -1;
static int8_t x148 = INT8_MAX;
volatile int64_t x157 = -1LL;
volatile int64_t x160 = -8501992754649212LL;
volatile int64_t t34 = -18LL;
int8_t x167 = -1;
static int8_t x168 = INT8_MIN;
int16_t x169 = INT16_MAX;
static uint64_t x176 = 2122917591948LLU;
static int64_t t39 = -18237233LL;
int32_t x185 = 111209004;
static int64_t x186 = INT64_MAX;
int8_t x189 = -19;
uint16_t x192 = UINT16_MAX;
static int16_t x198 = INT16_MIN;
uint32_t x199 = 5161U;
int32_t x204 = INT32_MAX;
volatile uint8_t x223 = UINT8_MAX;
int8_t x225 = -1;
static uint32_t x244 = 29810163U;
int32_t x246 = INT32_MIN;
volatile uint16_t x250 = 4U;
volatile int64_t x263 = -1LL;
static volatile int32_t t55 = -7630433;
int32_t x275 = INT32_MIN;
int32_t t57 = 2195497;
int64_t x283 = 400891212287488LL;
static int8_t x284 = INT8_MIN;
volatile int32_t t58 = 7;
uint64_t x288 = 10078LLU;
static int16_t x295 = INT16_MIN;
int16_t x309 = INT16_MAX;
static int64_t x310 = -1LL;
static int16_t x311 = INT16_MIN;
int64_t x316 = 4139LL;
int16_t x319 = INT16_MIN;
volatile int32_t t66 = 2;
uint64_t x323 = UINT64_MAX;
uint16_t x327 = UINT16_MAX;
uint64_t x337 = UINT64_MAX;
uint32_t x347 = 20779015U;
int64_t x359 = -1LL;
uint16_t x360 = 0U;
uint64_t x362 = 15471436510268LLU;
volatile int8_t x364 = INT8_MIN;
int32_t t74 = 493629;
volatile int64_t x365 = 468482038697078832LL;
int8_t x366 = INT8_MIN;
static int8_t x368 = 0;
volatile int32_t t75 = -206;
int32_t x372 = -1;
volatile int32_t t76 = 0;
int16_t x375 = INT16_MIN;
static volatile int16_t x382 = -5;
static uint8_t x383 = 7U;
int16_t x386 = INT16_MAX;
uint8_t x394 = UINT8_MAX;
volatile int32_t t82 = 319891;
volatile int8_t x399 = -35;
volatile uint8_t x401 = UINT8_MAX;
static int32_t x408 = 109;
int8_t x410 = -1;
uint64_t x418 = 210435401369LLU;
static uint64_t t89 = 21335955871373LLU;
static int8_t x436 = INT8_MIN;
static int32_t t91 = 1200380;
int16_t x437 = INT16_MIN;
int32_t t92 = 29;
volatile int8_t x448 = 0;
int32_t x473 = -1;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x2 = INT8_MIN;
	volatile int8_t x3 = INT8_MAX;
	int32_t t0 = 5;

	t0 = (((x1/x2)<=x3)-x4);

	if (t0 != -255) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	volatile int8_t x6 = -2;
	int8_t x8 = -1;
	volatile int32_t t1 = 1;

	t1 = (((x5/x6)<=x7)-x8);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int16_t x10 = INT16_MAX;
	int16_t x11 = INT16_MAX;
	int8_t x12 = -1;
	volatile int32_t t2 = 11;

	t2 = (((x9/x10)<=x11)-x12);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 26U;
	uint32_t x15 = 0U;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 163;

	t3 = (((x13/x14)<=x15)-x16);

	if (t3 != -65534) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 239181U;
	static uint8_t x18 = 110U;
	int64_t x19 = -281802772798308210LL;
	uint32_t x20 = 11474080U;
	uint32_t t4 = 125U;

	t4 = (((x17/x18)<=x19)-x20);

	if (t4 != 4283493216U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = -6730638032LL;
	volatile uint16_t x23 = 66U;
	int8_t x24 = 1;
	int32_t t5 = -193;

	t5 = (((x21/x22)<=x23)-x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = INT16_MIN;
	int16_t x30 = INT16_MIN;
	int8_t x31 = -13;
	int32_t x32 = -1;

	t6 = (((x29/x30)<=x31)-x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x35 = 67;
	int8_t x36 = INT8_MIN;
	int32_t t7 = -369113;

	t7 = (((x33/x34)<=x35)-x36);

	if (t7 != 129) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = -1;
	uint32_t x38 = 31757U;
	static int8_t x39 = 19;
	uint32_t x40 = 536040132U;
	static uint32_t t8 = 2U;

	t8 = (((x37/x38)<=x39)-x40);

	if (t8 != 3758927164U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 1092490046648294412LLU;
	static int32_t x42 = INT32_MIN;
	static int64_t x43 = INT64_MIN;
	uint64_t x44 = 1034367831299081LLU;
	static uint64_t t9 = 4530LLU;

	t9 = (((x41/x42)<=x43)-x44);

	if (t9 != 18445709705878252536LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 510U;
	uint64_t x52 = 955016321283211LLU;
	volatile uint64_t t10 = 3588LLU;

	t10 = (((x49/x50)<=x51)-x52);

	if (t10 != 18445789057388268405LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x54 = 741891U;
	int32_t x55 = 360867107;
	int8_t x56 = INT8_MIN;
	static int32_t t11 = -6699;

	t11 = (((x53/x54)<=x55)-x56);

	if (t11 != 129) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	static int8_t x58 = INT8_MAX;
	int64_t x59 = INT64_MIN;
	int64_t x60 = -159739970575LL;
	volatile int64_t t12 = 326580LL;

	t12 = (((x57/x58)<=x59)-x60);

	if (t12 != 159739970575LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	int64_t x62 = -1LL;
	int64_t x64 = INT64_MAX;

	t13 = (((x61/x62)<=x63)-x64);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = -1LL;
	volatile uint64_t x66 = UINT64_MAX;
	int8_t x68 = -1;
	int32_t t14 = -173506;

	t14 = (((x65/x66)<=x67)-x68);

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x74 = 9244009LLU;
	int16_t x75 = INT16_MAX;
	int32_t x76 = -1;
	int32_t t15 = 22;

	t15 = (((x73/x74)<=x75)-x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = INT8_MIN;
	uint32_t x79 = 799937U;
	int64_t x80 = -304221690740845LL;
	static volatile int64_t t16 = -55772444945106938LL;

	t16 = (((x77/x78)<=x79)-x80);

	if (t16 != 304221690740846LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = 158;
	static int64_t x82 = INT64_MIN;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t17 = 1782527158984725LLU;

	t17 = (((x81/x82)<=x83)-x84);

	if (t17 != 2LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = INT16_MAX;
	static uint16_t x87 = 2310U;
	int8_t x88 = INT8_MAX;

	t18 = (((x85/x86)<=x87)-x88);

	if (t18 != -126) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x89 = UINT16_MAX;
	volatile int16_t x90 = -1;
	uint16_t x91 = UINT16_MAX;
	uint8_t x92 = 3U;

	t19 = (((x89/x90)<=x91)-x92);

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MAX;
	uint16_t x94 = 56U;
	static int64_t x95 = INT64_MIN;
	int8_t x96 = -23;

	t20 = (((x93/x94)<=x95)-x96);

	if (t20 != 23) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x97 = 1451LL;
	static int64_t x99 = -43864746248333586LL;

	t21 = (((x97/x98)<=x99)-x100);

	if (t21 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MAX;
	static uint32_t x104 = 11797600U;
	static uint32_t t22 = 377074U;

	t22 = (((x101/x102)<=x103)-x104);

	if (t22 != 4283169697U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x105 = UINT32_MAX;
	static volatile uint16_t x106 = UINT16_MAX;
	static int64_t x108 = -68856664629358LL;
	int64_t t23 = 3258931772LL;

	t23 = (((x105/x106)<=x107)-x108);

	if (t23 != 68856664629358LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x109 = UINT16_MAX;
	static int16_t x110 = -1;
	int64_t x112 = -97572166030058934LL;
	volatile int64_t t24 = 48766104LL;

	t24 = (((x109/x110)<=x111)-x112);

	if (t24 != 97572166030058934LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x114 = 18444214LLU;
	volatile uint64_t x115 = 11118LLU;
	uint64_t x116 = UINT64_MAX;
	static volatile uint64_t t25 = 6376604002538175983LLU;

	t25 = (((x113/x114)<=x115)-x116);

	if (t25 != 2LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = INT64_MIN;
	int8_t x118 = INT8_MIN;
	volatile int32_t x119 = -812391481;
	static int8_t x120 = 3;
	static volatile int32_t t26 = 1457448;

	t26 = (((x117/x118)<=x119)-x120);

	if (t26 != -3) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	uint32_t x127 = 18887394U;
	uint16_t x128 = UINT16_MAX;
	int32_t t27 = 57751983;

	t27 = (((x125/x126)<=x127)-x128);

	if (t27 != -65534) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -1;
	int64_t x130 = INT64_MIN;
	int32_t x132 = -1;
	volatile int32_t t28 = -3111;

	t28 = (((x129/x130)<=x131)-x132);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MIN;
	int32_t t29 = 22977;

	t29 = (((x133/x134)<=x135)-x136);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x142 = 55200U;
	uint64_t x143 = 31129704LLU;
	static uint64_t x144 = 1876889LLU;
	volatile uint64_t t30 = 1958LLU;

	t30 = (((x141/x142)<=x143)-x144);

	if (t30 != 18446744073707674728LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x146 = UINT32_MAX;
	int64_t x147 = INT64_MIN;
	volatile int32_t t31 = -3830;

	t31 = (((x145/x146)<=x147)-x148);

	if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x149 = 119U;
	int16_t x150 = 3;
	int64_t x151 = INT64_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t32 = 70791;

	t32 = (((x149/x150)<=x151)-x152);

	if (t32 != 32769) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = INT8_MAX;
	int8_t x154 = -1;
	static volatile int32_t x155 = INT32_MIN;
	volatile int8_t x156 = INT8_MIN;
	static int32_t t33 = 1286741;

	t33 = (((x153/x154)<=x155)-x156);

	if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x158 = 539599696878644LL;
	int64_t x159 = -1LL;

	t34 = (((x157/x158)<=x159)-x160);

	if (t34 != 8501992754649212LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = 13498;
	int16_t x166 = -164;
	static int32_t t35 = 86180;

	t35 = (((x165/x166)<=x167)-x168);

	if (t35 != 129) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x170 = 2348970U;
	static uint16_t x171 = UINT16_MAX;
	volatile int32_t x172 = -1;
	volatile int32_t t36 = 628267977;

	t36 = (((x169/x170)<=x171)-x172);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = -1;
	volatile uint16_t x174 = 2U;
	int64_t x175 = INT64_MIN;
	volatile uint64_t t37 = 11LLU;

	t37 = (((x173/x174)<=x175)-x176);

	if (t37 != 18446741950791959668LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MIN;
	int64_t x179 = -238LL;
	int16_t x180 = -1;
	volatile int32_t t38 = 65805019;

	t38 = (((x177/x178)<=x179)-x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = 2433U;
	int64_t x182 = 74LL;
	int16_t x183 = -30;
	int64_t x184 = INT64_MAX;

	t39 = (((x181/x182)<=x183)-x184);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x187 = -560;
	int64_t x188 = -2384169191LL;
	int64_t t40 = -3230210789630LL;

	t40 = (((x185/x186)<=x187)-x188);

	if (t40 != 2384169191LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x190 = -1;
	volatile int64_t x191 = -1LL;
	int32_t t41 = -33270974;

	t41 = (((x189/x190)<=x191)-x192);

	if (t41 != -65535) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x197 = INT64_MAX;
	int32_t x200 = -1;
	int32_t t42 = -54;

	t42 = (((x197/x198)<=x199)-x200);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = INT32_MIN;
	uint16_t x202 = 3U;
	static uint32_t x203 = UINT32_MAX;
	int32_t t43 = 81588;

	t43 = (((x201/x202)<=x203)-x204);

	if (t43 != -2147483646) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x205 = -1;
	int32_t x206 = 56066818;
	volatile int8_t x207 = INT8_MAX;
	volatile int16_t x208 = INT16_MIN;
	int32_t t44 = -80129983;

	t44 = (((x205/x206)<=x207)-x208);

	if (t44 != 32769) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x209 = 23787390U;
	int64_t x210 = -1LL;
	volatile int16_t x211 = -1523;
	static int8_t x212 = INT8_MIN;
	int32_t t45 = -318;

	t45 = (((x209/x210)<=x211)-x212);

	if (t45 != 129) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x221 = 38;
	int64_t x222 = -1LL;
	static uint64_t x224 = 91LLU;
	volatile uint64_t t46 = 448811273565LLU;

	t46 = (((x221/x222)<=x223)-x224);

	if (t46 != 18446744073709551526LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x226 = INT8_MIN;
	int16_t x227 = -1;
	static int16_t x228 = -1;
	int32_t t47 = -1;

	t47 = (((x225/x226)<=x227)-x228);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = INT8_MAX;
	volatile int32_t x238 = -1;
	int8_t x239 = -1;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t48 = 14132LLU;

	t48 = (((x237/x238)<=x239)-x240);

	if (t48 != 2LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x241 = 20;
	uint32_t x242 = 286383U;
	static int16_t x243 = -9;
	volatile uint32_t t49 = 2433389U;

	t49 = (((x241/x242)<=x243)-x244);

	if (t49 != 4265157134U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x245 = 19U;
	uint16_t x247 = UINT16_MAX;
	int8_t x248 = 26;
	volatile int32_t t50 = 955852062;

	t50 = (((x245/x246)<=x247)-x248);

	if (t50 != -25) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = -1402;
	static int8_t x251 = INT8_MAX;
	static volatile uint32_t x252 = 140U;
	volatile uint32_t t51 = 2456862U;

	t51 = (((x249/x250)<=x251)-x252);

	if (t51 != 4294967157U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x253 = -3;
	int64_t x254 = INT64_MAX;
	int64_t x255 = INT64_MAX;
	uint16_t x256 = 3551U;
	int32_t t52 = -2848730;

	t52 = (((x253/x254)<=x255)-x256);

	if (t52 != -3550) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x257 = UINT32_MAX;
	uint32_t x258 = 189086U;
	uint32_t x259 = UINT32_MAX;
	uint8_t x260 = 113U;
	volatile int32_t t53 = 276137846;

	t53 = (((x257/x258)<=x259)-x260);

	if (t53 != -112) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x261 = -1;
	static int8_t x262 = INT8_MAX;
	int16_t x264 = INT16_MIN;
	volatile int32_t t54 = -4;

	t54 = (((x261/x262)<=x263)-x264);

	if (t54 != 32768) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x265 = UINT8_MAX;
	uint16_t x266 = 501U;
	volatile int16_t x267 = -3798;
	volatile int8_t x268 = INT8_MAX;

	t55 = (((x265/x266)<=x267)-x268);

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MIN;
	int64_t x271 = -1LL;
	volatile uint16_t x272 = UINT16_MAX;
	int32_t t56 = -32;

	t56 = (((x269/x270)<=x271)-x272);

	if (t56 != -65535) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x273 = 48U;
	uint32_t x274 = 38989U;
	volatile uint16_t x276 = 6307U;

	t57 = (((x273/x274)<=x275)-x276);

	if (t57 != -6306) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x281 = 5985U;
	uint8_t x282 = 1U;

	t58 = (((x281/x282)<=x283)-x284);

	if (t58 != 129) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x285 = INT64_MIN;
	static int16_t x286 = -3982;
	int32_t x287 = INT32_MAX;
	volatile uint64_t t59 = 5095931073LLU;

	t59 = (((x285/x286)<=x287)-x288);

	if (t59 != 18446744073709541538LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x289 = INT8_MIN;
	static int32_t x290 = INT32_MIN;
	volatile int8_t x291 = INT8_MIN;
	int64_t x292 = 1400396316LL;
	volatile int64_t t60 = 45LL;

	t60 = (((x289/x290)<=x291)-x292);

	if (t60 != -1400396316LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x293 = 0U;
	uint8_t x294 = 43U;
	static int32_t x296 = -1;
	int32_t t61 = 8;

	t61 = (((x293/x294)<=x295)-x296);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x301 = 190856281788LLU;
	int64_t x302 = -1LL;
	int16_t x303 = INT16_MAX;
	volatile int8_t x304 = -6;
	static int32_t t62 = 7725;

	t62 = (((x301/x302)<=x303)-x304);

	if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MAX;
	uint32_t x307 = UINT32_MAX;
	int8_t x308 = -1;
	static int32_t t63 = -877078894;

	t63 = (((x305/x306)<=x307)-x308);

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x312 = 3239522263526991148LLU;
	volatile uint64_t t64 = 60030LLU;

	t64 = (((x309/x310)<=x311)-x312);

	if (t64 != 15207221810182560468LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x313 = -1;
	static int16_t x314 = INT16_MAX;
	volatile uint8_t x315 = 6U;
	int64_t t65 = -4120403493364LL;

	t65 = (((x313/x314)<=x315)-x316);

	if (t65 != -4138LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x317 = UINT64_MAX;
	volatile uint8_t x318 = 2U;
	int8_t x320 = INT8_MIN;

	t66 = (((x317/x318)<=x319)-x320);

	if (t66 != 129) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x321 = 1U;
	int8_t x322 = -1;
	volatile int8_t x324 = -14;
	int32_t t67 = 4230;

	t67 = (((x321/x322)<=x323)-x324);

	if (t67 != 15) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x325 = UINT8_MAX;
	int64_t x326 = INT64_MIN;
	uint16_t x328 = 4713U;
	int32_t t68 = -110088;

	t68 = (((x325/x326)<=x327)-x328);

	if (t68 != -4712) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = 4102;
	static int32_t x334 = -1;
	int32_t x335 = INT32_MIN;
	int16_t x336 = INT16_MIN;
	int32_t t69 = -15;

	t69 = (((x333/x334)<=x335)-x336);

	if (t69 != 32768) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x338 = 51U;
	int64_t x339 = 51131766LL;
	static int8_t x340 = INT8_MAX;
	int32_t t70 = -411672498;

	t70 = (((x337/x338)<=x339)-x340);

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x345 = INT32_MIN;
	volatile int64_t x346 = 29LL;
	uint8_t x348 = 5U;
	volatile int32_t t71 = 396827;

	t71 = (((x345/x346)<=x347)-x348);

	if (t71 != -4) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x349 = 4LLU;
	int8_t x350 = INT8_MAX;
	int32_t x351 = 2;
	int16_t x352 = INT16_MIN;
	static int32_t t72 = -4;

	t72 = (((x349/x350)<=x351)-x352);

	if (t72 != 32769) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x357 = 87LLU;
	int64_t x358 = 6593697597646LL;
	static int32_t t73 = 490;

	t73 = (((x357/x358)<=x359)-x360);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x361 = -1;
	volatile int8_t x363 = 1;

	t74 = (((x361/x362)<=x363)-x364);

	if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x367 = UINT64_MAX;

	t75 = (((x365/x366)<=x367)-x368);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x369 = 0LL;
	int64_t x370 = INT64_MIN;
	int16_t x371 = INT16_MIN;

	t76 = (((x369/x370)<=x371)-x372);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x373 = -1LL;
	int32_t x374 = 37751776;
	uint16_t x376 = 649U;
	volatile int32_t t77 = 60388;

	t77 = (((x373/x374)<=x375)-x376);

	if (t77 != -649) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x377 = -1;
	int64_t x378 = INT64_MIN;
	uint32_t x379 = 50U;
	int64_t x380 = -1LL;
	volatile int64_t t78 = -410LL;

	t78 = (((x377/x378)<=x379)-x380);

	if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x381 = -1;
	uint8_t x384 = 6U;
	int32_t t79 = -97;

	t79 = (((x381/x382)<=x383)-x384);

	if (t79 != -5) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x385 = -165739LL;
	int64_t x387 = INT64_MAX;
	int16_t x388 = -1;
	int32_t t80 = 71;

	t80 = (((x385/x386)<=x387)-x388);

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x389 = INT32_MAX;
	volatile int16_t x390 = 4;
	static int8_t x391 = INT8_MIN;
	int32_t x392 = -1;
	volatile int32_t t81 = 2888397;

	t81 = (((x389/x390)<=x391)-x392);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x393 = 5U;
	int16_t x395 = INT16_MIN;
	static int8_t x396 = INT8_MIN;

	t82 = (((x393/x394)<=x395)-x396);

	if (t82 != 129) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x397 = UINT32_MAX;
	int32_t x398 = INT32_MIN;
	static int8_t x400 = -2;
	volatile int32_t t83 = -119519790;

	t83 = (((x397/x398)<=x399)-x400);

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x402 = 7;
	static volatile int8_t x403 = -1;
	uint32_t x404 = UINT32_MAX;
	uint32_t t84 = 773516U;

	t84 = (((x401/x402)<=x403)-x404);

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x405 = 3184U;
	static uint64_t x406 = UINT64_MAX;
	int16_t x407 = INT16_MIN;
	static volatile int32_t t85 = -50677;

	t85 = (((x405/x406)<=x407)-x408);

	if (t85 != -108) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x409 = -1;
	uint64_t x411 = 479710272953LLU;
	static uint16_t x412 = 5U;
	int32_t t86 = 47;

	t86 = (((x409/x410)<=x411)-x412);

	if (t86 != -4) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x417 = 1695330028571638266LL;
	uint16_t x419 = 534U;
	uint64_t x420 = 1687202747372271LLU;
	volatile uint64_t t87 = 104LLU;

	t87 = (((x417/x418)<=x419)-x420);

	if (t87 != 18445056870962179345LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x421 = 3346642964043190662LLU;
	int64_t x422 = -910LL;
	uint64_t x423 = 591LLU;
	uint16_t x424 = 158U;
	volatile int32_t t88 = -252458;

	t88 = (((x421/x422)<=x423)-x424);

	if (t88 != -157) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x425 = INT64_MIN;
	uint16_t x426 = 2U;
	static volatile uint16_t x427 = UINT16_MAX;
	volatile uint64_t x428 = 13506074823494306LLU;

	t89 = (((x425/x426)<=x427)-x428);

	if (t89 != 18433237998886057311LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x429 = 66U;
	uint64_t x430 = 3940LLU;
	int8_t x431 = 13;
	static uint64_t x432 = UINT64_MAX;
	static volatile uint64_t t90 = 984LLU;

	t90 = (((x429/x430)<=x431)-x432);

	if (t90 != 2LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x433 = INT32_MIN;
	static uint8_t x434 = 5U;
	int8_t x435 = INT8_MIN;

	t91 = (((x433/x434)<=x435)-x436);

	if (t91 != 129) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x438 = -1;
	int64_t x439 = -53140263548LL;
	volatile int32_t x440 = 958501;

	t92 = (((x437/x438)<=x439)-x440);

	if (t92 != -958501) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = 10448;
	static int8_t x442 = -1;
	int16_t x443 = INT16_MAX;
	volatile int16_t x444 = 536;
	static volatile int32_t t93 = -1;

	t93 = (((x441/x442)<=x443)-x444);

	if (t93 != -535) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x445 = -1;
	int8_t x446 = INT8_MAX;
	volatile int64_t x447 = -1LL;
	int32_t t94 = -48;

	t94 = (((x445/x446)<=x447)-x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x449 = -1LL;
	int8_t x450 = -4;
	int32_t x451 = INT32_MIN;
	volatile uint8_t x452 = 85U;
	volatile int32_t t95 = -467800570;

	t95 = (((x449/x450)<=x451)-x452);

	if (t95 != -85) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x457 = UINT8_MAX;
	int8_t x458 = 1;
	static volatile int16_t x459 = -1;
	int16_t x460 = INT16_MIN;
	int32_t t96 = -6;

	t96 = (((x457/x458)<=x459)-x460);

	if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x461 = INT32_MIN;
	int16_t x462 = 2253;
	static int32_t x463 = INT32_MIN;
	static uint8_t x464 = 3U;
	int32_t t97 = 149;

	t97 = (((x461/x462)<=x463)-x464);

	if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x469 = INT32_MIN;
	int8_t x470 = 8;
	uint8_t x471 = UINT8_MAX;
	volatile int8_t x472 = INT8_MIN;
	static volatile int32_t t98 = 4037771;

	t98 = (((x469/x470)<=x471)-x472);

	if (t98 != 129) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x474 = INT16_MIN;
	uint8_t x475 = 47U;
	int16_t x476 = INT16_MIN;
	int32_t t99 = 241142915;

	t99 = (((x473/x474)<=x475)-x476);

	if (t99 != 32769) { NG(); } else { ; }
	
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


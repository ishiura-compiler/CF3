#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = -1;
int64_t x3 = INT64_MAX;
int32_t t2 = 508;
volatile int32_t t3 = 919857885;
int8_t x22 = 2;
uint64_t x26 = 1018424797LLU;
int32_t x37 = INT32_MAX;
int8_t x41 = -1;
uint16_t x42 = 0U;
int32_t t8 = -47031216;
volatile int8_t x50 = INT8_MIN;
volatile int32_t t10 = 1;
uint16_t x59 = 9334U;
int32_t x61 = INT32_MAX;
uint32_t x76 = UINT32_MAX;
volatile int32_t t14 = -973172526;
static uint32_t x83 = 6147534U;
int64_t x107 = INT64_MAX;
volatile int8_t x110 = INT8_MAX;
int32_t x113 = -1;
int32_t x115 = INT32_MAX;
static int32_t t22 = 14572740;
static int16_t x127 = INT16_MIN;
int32_t x137 = INT32_MAX;
static volatile uint8_t x140 = 107U;
static int64_t x144 = -301944899423281LL;
int32_t t29 = -251729;
int32_t t30 = -14;
static uint8_t x155 = 106U;
static int16_t x158 = 0;
int16_t x159 = -12;
volatile uint64_t x161 = UINT64_MAX;
int32_t t33 = -1021;
int8_t x168 = -1;
uint8_t x171 = 3U;
uint16_t x174 = UINT16_MAX;
static volatile int64_t x175 = -1LL;
int32_t x176 = 6116;
uint16_t x181 = 31955U;
int16_t x189 = 47;
int32_t x195 = INT32_MAX;
volatile int32_t t42 = 62;
static uint32_t x205 = 159071999U;
static int16_t x209 = INT16_MIN;
static int16_t x217 = -3596;
static int32_t x224 = INT32_MAX;
uint8_t x229 = UINT8_MAX;
static int16_t x238 = -1;
int8_t x243 = 34;
uint16_t x245 = 458U;
int32_t t52 = 727245;
volatile int32_t x261 = 7;
volatile int32_t t55 = -99;
static int32_t x268 = 581292855;
int32_t t56 = 77309676;
static int64_t x279 = 25666740LL;
int32_t t60 = 363;
int16_t x297 = INT16_MIN;
static int32_t x299 = INT32_MAX;
static int64_t x307 = INT64_MIN;
int8_t x310 = INT8_MAX;
uint8_t x311 = 2U;
int8_t x317 = 7;
volatile int32_t x318 = 2083;
uint16_t x320 = UINT16_MAX;
int32_t t67 = -3;
static uint16_t x327 = 195U;
int32_t t68 = 137014971;
static int32_t t74 = -2779;
volatile int64_t x358 = -1LL;
uint32_t x360 = 383543U;
uint16_t x366 = UINT16_MAX;
int32_t x377 = -3418183;
volatile int16_t x391 = 3;
volatile int16_t x392 = INT16_MAX;
int64_t x393 = 1LL;
int32_t x395 = -750760080;
volatile int32_t t81 = -860342;
int64_t x401 = INT64_MIN;
uint16_t x409 = UINT16_MAX;
int32_t x411 = -2;
static int16_t x415 = INT16_MIN;
int64_t x420 = 1122514802719924146LL;
uint8_t x428 = 0U;
uint8_t x431 = 5U;
volatile int32_t t89 = -119099800;
int64_t x452 = INT64_MAX;
uint16_t x458 = 5430U;
static int8_t x459 = INT8_MIN;
int32_t x462 = -1;
static int32_t t96 = -8975;
volatile int16_t x473 = INT16_MIN;
int8_t x481 = -13;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint32_t x4 = UINT32_MAX;
	static int32_t t0 = 4361;

	t0 = (x1<(x2==(x3-x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static uint16_t x6 = 29097U;
	int32_t x7 = INT32_MIN;
	volatile int64_t x8 = 657664751902877LL;
	int32_t t1 = -1;

	t1 = (x5<(x6==(x7-x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 31;
	uint8_t x14 = 6U;
	static int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MIN;

	t2 = (x13<(x14==(x15-x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 12816473774238512LLU;
	int8_t x18 = INT8_MAX;
	int64_t x19 = INT64_MAX;
	volatile int8_t x20 = INT8_MAX;

	t3 = (x17<(x18==(x19-x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MAX;
	int32_t x23 = 1;
	int8_t x24 = 0;
	int32_t t4 = -28;

	t4 = (x21<(x22==(x23-x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x25 = UINT8_MAX;
	int8_t x27 = INT8_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t5 = 699193;

	t5 = (x25<(x26==(x27-x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x38 = 3589777865527601184LLU;
	static uint8_t x39 = UINT8_MAX;
	int64_t x40 = INT64_MAX;
	int32_t t6 = -5519;

	t6 = (x37<(x38==(x39-x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x43 = 422207191087163128LL;
	int8_t x44 = INT8_MIN;
	volatile int32_t t7 = 118;

	t7 = (x41<(x42==(x43-x44)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MAX;
	int64_t x46 = -1LL;
	int8_t x47 = -1;
	int32_t x48 = INT32_MIN;

	t8 = (x45<(x46==(x47-x48)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MAX;
	int32_t x51 = -1;
	int32_t x52 = 419255046;
	volatile int32_t t9 = 0;

	t9 = (x49<(x50==(x51-x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = -3;
	static int32_t x55 = -81994;
	static int64_t x56 = -1LL;

	t10 = (x53<(x54==(x55-x56)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x57 = UINT32_MAX;
	int32_t x58 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	int32_t t11 = -3;

	t11 = (x57<(x58==(x59-x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x62 = INT64_MIN;
	int8_t x63 = -1;
	int8_t x64 = -2;
	int32_t t12 = -3981;

	t12 = (x61<(x62==(x63-x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x73 = 0U;
	uint8_t x74 = UINT8_MAX;
	int32_t x75 = 89035;
	volatile int32_t t13 = 1407;

	t13 = (x73<(x74==(x75-x76)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x77 = UINT64_MAX;
	static volatile uint32_t x78 = 108U;
	int16_t x79 = INT16_MIN;
	volatile int64_t x80 = -1LL;

	t14 = (x77<(x78==(x79-x80)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MIN;
	uint32_t x82 = 764567U;
	uint32_t x84 = 917704U;
	int32_t t15 = -22928;

	t15 = (x81<(x82==(x83-x84)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x85 = UINT16_MAX;
	int32_t x86 = INT32_MAX;
	static int32_t x87 = -1;
	int16_t x88 = -2166;
	volatile int32_t t16 = 161313;

	t16 = (x85<(x86==(x87-x88)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x89 = -1;
	uint32_t x90 = 0U;
	static int8_t x91 = 1;
	int32_t x92 = INT32_MAX;
	static int32_t t17 = -65;

	t17 = (x89<(x90==(x91-x92)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x101 = INT64_MIN;
	int8_t x102 = -23;
	uint32_t x103 = 7288U;
	volatile int16_t x104 = INT16_MAX;
	volatile int32_t t18 = 757025015;

	t18 = (x101<(x102==(x103-x104)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x105 = 268987282178917832LLU;
	int32_t x106 = INT32_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t19 = -380;

	t19 = (x105<(x106==(x107-x108)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x109 = 6U;
	static volatile int32_t x111 = INT32_MAX;
	int64_t x112 = -25737334319721794LL;
	volatile int32_t t20 = 1;

	t20 = (x109<(x110==(x111-x112)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x114 = UINT32_MAX;
	int64_t x116 = 15LL;
	int32_t t21 = -54;

	t21 = (x113<(x114==(x115-x116)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x117 = UINT16_MAX;
	int64_t x118 = 1476795LL;
	uint16_t x119 = UINT16_MAX;
	volatile int16_t x120 = -1;

	t22 = (x117<(x118==(x119-x120)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = -213;
	static uint8_t x122 = UINT8_MAX;
	volatile int64_t x123 = INT64_MIN;
	volatile int64_t x124 = INT64_MIN;
	volatile int32_t t23 = 248629;

	t23 = (x121<(x122==(x123-x124)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x125 = 3;
	uint32_t x126 = 15157320U;
	volatile uint16_t x128 = UINT16_MAX;
	volatile int32_t t24 = -10489;

	t24 = (x125<(x126==(x127-x128)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x129 = 6LLU;
	uint8_t x130 = 2U;
	int8_t x131 = INT8_MIN;
	int64_t x132 = -58588761008420LL;
	static volatile int32_t t25 = -54195112;

	t25 = (x129<(x130==(x131-x132)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = INT8_MIN;
	static volatile int16_t x134 = 8602;
	int32_t x135 = -89068070;
	volatile uint32_t x136 = UINT32_MAX;
	volatile int32_t t26 = -1762;

	t26 = (x133<(x134==(x135-x136)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x138 = -1;
	volatile int16_t x139 = INT16_MIN;
	volatile int32_t t27 = -585471868;

	t27 = (x137<(x138==(x139-x140)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = -258LL;
	int32_t x142 = INT32_MIN;
	int32_t x143 = -1;
	int32_t t28 = 27829485;

	t28 = (x141<(x142==(x143-x144)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = INT64_MIN;
	int16_t x146 = INT16_MIN;
	uint16_t x147 = 10208U;
	static int64_t x148 = -1443767727293599107LL;

	t29 = (x145<(x146==(x147-x148)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = INT16_MIN;
	uint32_t x150 = UINT32_MAX;
	int8_t x151 = INT8_MIN;
	uint16_t x152 = 6009U;

	t30 = (x149<(x150==(x151-x152)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = -146986210;
	static volatile uint32_t x154 = 1973479178U;
	int16_t x156 = INT16_MIN;
	volatile int32_t t31 = 404;

	t31 = (x153<(x154==(x155-x156)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x157 = 17693U;
	int16_t x160 = 54;
	volatile int32_t t32 = 1;

	t32 = (x157<(x158==(x159-x160)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x162 = -1;
	int32_t x163 = 280;
	volatile uint16_t x164 = UINT16_MAX;

	t33 = (x161<(x162==(x163-x164)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = 463;
	static uint32_t x166 = 1U;
	int64_t x167 = -1LL;
	volatile int32_t t34 = 134172;

	t34 = (x165<(x166==(x167-x168)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = -1;
	int16_t x170 = INT16_MAX;
	int64_t x172 = -43010LL;
	volatile int32_t t35 = -4;

	t35 = (x169<(x170==(x171-x172)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x173 = -15719818765004607LL;
	volatile int32_t t36 = 437639;

	t36 = (x173<(x174==(x175-x176)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x177 = INT32_MIN;
	volatile int32_t x178 = 17413;
	uint8_t x179 = 7U;
	static int64_t x180 = 3LL;
	static int32_t t37 = -29;

	t37 = (x177<(x178==(x179-x180)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x182 = -1;
	int32_t x183 = INT32_MAX;
	static uint64_t x184 = 5362881395LLU;
	static volatile int32_t t38 = 2;

	t38 = (x181<(x182==(x183-x184)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x185 = UINT16_MAX;
	static volatile uint32_t x186 = UINT32_MAX;
	uint32_t x187 = UINT32_MAX;
	uint32_t x188 = 64U;
	volatile int32_t t39 = -9;

	t39 = (x185<(x186==(x187-x188)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x190 = 0U;
	int8_t x191 = 17;
	uint8_t x192 = 33U;
	int32_t t40 = 2019065;

	t40 = (x189<(x190==(x191-x192)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = INT16_MIN;
	uint16_t x194 = UINT16_MAX;
	uint32_t x196 = 835262U;
	static int32_t t41 = 6;

	t41 = (x193<(x194==(x195-x196)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x197 = 3U;
	volatile int64_t x198 = 0LL;
	volatile uint16_t x199 = UINT16_MAX;
	int8_t x200 = INT8_MIN;

	t42 = (x197<(x198==(x199-x200)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x201 = 0U;
	uint64_t x202 = 19389762236634LLU;
	int64_t x203 = INT64_MAX;
	uint16_t x204 = UINT16_MAX;
	int32_t t43 = 121388118;

	t43 = (x201<(x202==(x203-x204)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x206 = 247U;
	uint8_t x207 = UINT8_MAX;
	int8_t x208 = INT8_MIN;
	static int32_t t44 = 101575;

	t44 = (x205<(x206==(x207-x208)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x210 = -1;
	static int64_t x211 = 15581650LL;
	int8_t x212 = INT8_MAX;
	static int32_t t45 = -43;

	t45 = (x209<(x210==(x211-x212)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x218 = 3;
	static volatile int16_t x219 = INT16_MAX;
	volatile uint32_t x220 = UINT32_MAX;
	int32_t t46 = 3;

	t46 = (x217<(x218==(x219-x220)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x221 = 6U;
	uint16_t x222 = 2U;
	uint8_t x223 = 26U;
	volatile int32_t t47 = 42093800;

	t47 = (x221<(x222==(x223-x224)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x230 = INT16_MIN;
	int64_t x231 = INT64_MIN;
	int64_t x232 = -1LL;
	volatile int32_t t48 = 1460;

	t48 = (x229<(x230==(x231-x232)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = INT64_MIN;
	int64_t x234 = -1LL;
	uint64_t x235 = UINT64_MAX;
	int32_t x236 = INT32_MIN;
	volatile int32_t t49 = -12273479;

	t49 = (x233<(x234==(x235-x236)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x237 = UINT64_MAX;
	static uint8_t x239 = 1U;
	volatile int8_t x240 = -15;
	volatile int32_t t50 = -26284327;

	t50 = (x237<(x238==(x239-x240)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = INT8_MAX;
	int32_t x242 = -12362;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t51 = 47497781;

	t51 = (x241<(x242==(x243-x244)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x246 = 22U;
	uint32_t x247 = 2U;
	volatile uint64_t x248 = 380LLU;

	t52 = (x245<(x246==(x247-x248)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x249 = -133135625407LL;
	int32_t x250 = 1861;
	static int8_t x251 = INT8_MIN;
	int64_t x252 = INT64_MIN;
	volatile int32_t t53 = -395150891;

	t53 = (x249<(x250==(x251-x252)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x253 = 6;
	static int64_t x254 = INT64_MIN;
	uint8_t x255 = 1U;
	static uint64_t x256 = 498983LLU;
	int32_t t54 = 1;

	t54 = (x253<(x254==(x255-x256)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x262 = 1LL;
	int8_t x263 = -1;
	int32_t x264 = INT32_MIN;

	t55 = (x261<(x262==(x263-x264)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = INT32_MIN;
	static int32_t x266 = INT32_MIN;
	int8_t x267 = 22;

	t56 = (x265<(x266==(x267-x268)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = INT64_MIN;
	int64_t x274 = -10609LL;
	static int64_t x275 = -1LL;
	uint32_t x276 = 30U;
	volatile int32_t t57 = -859301911;

	t57 = (x273<(x274==(x275-x276)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x277 = 0LL;
	static uint8_t x278 = 2U;
	static int8_t x280 = INT8_MIN;
	static int32_t t58 = 911063;

	t58 = (x277<(x278==(x279-x280)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x285 = INT32_MAX;
	volatile uint32_t x286 = 110U;
	static volatile int32_t x287 = INT32_MIN;
	uint64_t x288 = UINT64_MAX;
	static volatile int32_t t59 = -246;

	t59 = (x285<(x286==(x287-x288)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = INT16_MAX;
	uint16_t x290 = UINT16_MAX;
	static int16_t x291 = INT16_MIN;
	static int16_t x292 = -81;

	t60 = (x289<(x290==(x291-x292)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x298 = UINT16_MAX;
	static uint64_t x300 = UINT64_MAX;
	int32_t t61 = -121726;

	t61 = (x297<(x298==(x299-x300)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x301 = UINT32_MAX;
	uint16_t x302 = 4649U;
	int8_t x303 = INT8_MIN;
	uint64_t x304 = 3LLU;
	int32_t t62 = -356826;

	t62 = (x301<(x302==(x303-x304)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = 40;
	int8_t x306 = INT8_MAX;
	int32_t x308 = INT32_MIN;
	static int32_t t63 = -3752075;

	t63 = (x305<(x306==(x307-x308)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x309 = INT32_MIN;
	int64_t x312 = 22698LL;
	static volatile int32_t t64 = -89477;

	t64 = (x309<(x310==(x311-x312)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x313 = -76719025598963061LL;
	int8_t x314 = -14;
	uint16_t x315 = 54U;
	uint64_t x316 = 324510LLU;
	int32_t t65 = -1;

	t65 = (x313<(x314==(x315-x316)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x319 = INT16_MIN;
	volatile int32_t t66 = 3198438;

	t66 = (x317<(x318==(x319-x320)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x321 = UINT64_MAX;
	uint8_t x322 = 9U;
	uint64_t x323 = 56197983045LLU;
	volatile int16_t x324 = INT16_MIN;

	t67 = (x321<(x322==(x323-x324)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x325 = -1;
	int16_t x326 = 2529;
	int64_t x328 = -1LL;

	t68 = (x325<(x326==(x327-x328)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x329 = INT32_MAX;
	uint32_t x330 = 137600U;
	uint64_t x331 = 6138658LLU;
	volatile uint8_t x332 = UINT8_MAX;
	static int32_t t69 = -537251363;

	t69 = (x329<(x330==(x331-x332)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x333 = 23;
	volatile int64_t x334 = INT64_MAX;
	volatile uint8_t x335 = 1U;
	int32_t x336 = -1;
	int32_t t70 = 199119;

	t70 = (x333<(x334==(x335-x336)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x337 = INT64_MIN;
	int64_t x338 = INT64_MIN;
	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MIN;
	int32_t t71 = -459;

	t71 = (x337<(x338==(x339-x340)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x341 = UINT8_MAX;
	volatile uint16_t x342 = UINT16_MAX;
	uint16_t x343 = UINT16_MAX;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t72 = 15811608;

	t72 = (x341<(x342==(x343-x344)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x345 = 59U;
	volatile uint16_t x346 = UINT16_MAX;
	uint64_t x347 = 3356711096678263LLU;
	int8_t x348 = 19;
	static volatile int32_t t73 = 132864302;

	t73 = (x345<(x346==(x347-x348)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x353 = 40030412710683454LLU;
	int64_t x354 = -1LL;
	uint8_t x355 = 9U;
	int32_t x356 = -1;

	t74 = (x353<(x354==(x355-x356)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x357 = 3U;
	int16_t x359 = 1878;
	volatile int32_t t75 = -1;

	t75 = (x357<(x358==(x359-x360)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x361 = INT64_MIN;
	volatile int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MIN;
	uint64_t x364 = UINT64_MAX;
	int32_t t76 = -99005;

	t76 = (x361<(x362==(x363-x364)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x365 = INT32_MAX;
	uint64_t x367 = UINT64_MAX;
	int64_t x368 = -1LL;
	volatile int32_t t77 = -121980687;

	t77 = (x365<(x366==(x367-x368)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x378 = 0;
	int8_t x379 = INT8_MIN;
	volatile uint64_t x380 = UINT64_MAX;
	int32_t t78 = -3281;

	t78 = (x377<(x378==(x379-x380)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x385 = INT64_MIN;
	volatile int32_t x386 = INT32_MIN;
	int32_t x387 = 1;
	int32_t x388 = 25846;
	static volatile int32_t t79 = -227907717;

	t79 = (x385<(x386==(x387-x388)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x389 = -2068903500LL;
	static volatile uint8_t x390 = 0U;
	int32_t t80 = 109367;

	t80 = (x389<(x390==(x391-x392)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x394 = INT16_MIN;
	volatile uint8_t x396 = 13U;

	t81 = (x393<(x394==(x395-x396)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x402 = INT32_MIN;
	uint32_t x403 = 456670475U;
	int32_t x404 = INT32_MIN;
	int32_t t82 = -69;

	t82 = (x401<(x402==(x403-x404)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x405 = 19441616;
	int8_t x406 = -4;
	volatile uint32_t x407 = 1434088U;
	static int16_t x408 = INT16_MIN;
	volatile int32_t t83 = -1;

	t83 = (x405<(x406==(x407-x408)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x410 = INT32_MAX;
	volatile uint64_t x412 = UINT64_MAX;
	int32_t t84 = -5456818;

	t84 = (x409<(x410==(x411-x412)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x413 = 6U;
	static volatile int64_t x414 = INT64_MAX;
	int64_t x416 = -1LL;
	static volatile int32_t t85 = -6626;

	t85 = (x413<(x414==(x415-x416)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x417 = UINT8_MAX;
	volatile int16_t x418 = INT16_MIN;
	uint64_t x419 = 56LLU;
	int32_t t86 = -18292034;

	t86 = (x417<(x418==(x419-x420)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x425 = 0U;
	int32_t x426 = INT32_MIN;
	uint64_t x427 = UINT64_MAX;
	static volatile int32_t t87 = -106044996;

	t87 = (x425<(x426==(x427-x428)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x429 = INT16_MIN;
	static int64_t x430 = INT64_MAX;
	int64_t x432 = INT64_MAX;
	static int32_t t88 = -3696263;

	t88 = (x429<(x430==(x431-x432)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x433 = 29714580;
	uint32_t x434 = 1503994432U;
	uint64_t x435 = UINT64_MAX;
	static volatile int8_t x436 = -4;

	t89 = (x433<(x434==(x435-x436)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x441 = UINT8_MAX;
	uint64_t x442 = 1627730273664LLU;
	uint8_t x443 = 9U;
	static int8_t x444 = INT8_MIN;
	volatile int32_t t90 = 1;

	t90 = (x441<(x442==(x443-x444)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x445 = UINT32_MAX;
	static int16_t x446 = 706;
	uint32_t x447 = 1226615U;
	int32_t x448 = -1;
	int32_t t91 = -3741786;

	t91 = (x445<(x446==(x447-x448)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x449 = -1;
	int32_t x450 = INT32_MAX;
	int16_t x451 = -1;
	int32_t t92 = 11484692;

	t92 = (x449<(x450==(x451-x452)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x453 = -1;
	int32_t x454 = INT32_MIN;
	static uint8_t x455 = 0U;
	int16_t x456 = INT16_MIN;
	volatile int32_t t93 = 734;

	t93 = (x453<(x454==(x455-x456)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x457 = 838018529;
	volatile uint32_t x460 = UINT32_MAX;
	volatile int32_t t94 = -2027;

	t94 = (x457<(x458==(x459-x460)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x461 = 1388167U;
	static uint32_t x463 = 98355575U;
	volatile uint64_t x464 = 21073795291421822LLU;
	int32_t t95 = -256;

	t95 = (x461<(x462==(x463-x464)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x469 = 104214745393LLU;
	volatile int64_t x470 = -1LL;
	int32_t x471 = INT32_MAX;
	uint16_t x472 = 445U;

	t96 = (x469<(x470==(x471-x472)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x474 = 11U;
	static uint32_t x475 = 1U;
	volatile int32_t x476 = INT32_MAX;
	int32_t t97 = 698;

	t97 = (x473<(x474==(x475-x476)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x477 = -1;
	volatile uint8_t x478 = 3U;
	static int16_t x479 = -43;
	int16_t x480 = INT16_MAX;
	volatile int32_t t98 = -124153206;

	t98 = (x477<(x478==(x479-x480)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x482 = UINT8_MAX;
	static volatile int16_t x483 = -1;
	static volatile int32_t x484 = 15;
	int32_t t99 = 3254458;

	t99 = (x481<(x482==(x483-x484)));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x8 = -1;
int16_t x10 = -1;
volatile int32_t t3 = 53126027;
int32_t t5 = -5651185;
int16_t x28 = INT16_MAX;
volatile int32_t t6 = -110010;
volatile int32_t t7 = -1;
int32_t t8 = -32470848;
int32_t t10 = 820131100;
static int32_t x46 = INT32_MIN;
uint16_t x47 = 97U;
int8_t x49 = INT8_MAX;
int8_t x54 = 3;
static volatile int64_t x59 = INT64_MIN;
int32_t x60 = -20;
volatile int16_t x68 = -29;
int8_t x69 = -1;
int16_t x70 = -748;
static uint64_t x85 = 6530209093489LLU;
int64_t x90 = INT64_MIN;
volatile int64_t x93 = -1LL;
static int16_t x101 = INT16_MIN;
int32_t t25 = 69968;
int64_t x106 = INT64_MIN;
int32_t x109 = -1;
int32_t t29 = -48879;
uint16_t x127 = UINT16_MAX;
int64_t x134 = INT64_MAX;
int32_t t33 = -39688311;
int8_t x138 = 1;
int32_t x144 = INT32_MAX;
volatile int32_t t35 = -7719;
int32_t t36 = 1;
int16_t x150 = INT16_MAX;
uint32_t x151 = UINT32_MAX;
int8_t x153 = 0;
uint64_t x155 = 5744767016095168253LLU;
uint32_t x159 = 269U;
int32_t t40 = -2;
static int32_t x168 = -66422268;
int16_t x172 = 2193;
int64_t x174 = 2094208969755548LL;
volatile int32_t t43 = 0;
int8_t x182 = -1;
int16_t x183 = -1377;
int64_t x185 = 139329417LL;
volatile int32_t x192 = INT32_MAX;
static uint32_t x197 = 15671567U;
int32_t t49 = -78467;
static uint16_t x201 = 26805U;
int32_t x210 = INT32_MIN;
static int16_t x219 = INT16_MIN;
int8_t x222 = INT8_MIN;
static volatile int32_t t55 = -418628400;
int8_t x225 = INT8_MIN;
int8_t x226 = -1;
int32_t t56 = 1009;
volatile uint32_t x229 = 852U;
int64_t x241 = INT64_MAX;
static volatile int32_t t60 = 12581;
uint8_t x249 = UINT8_MAX;
volatile int32_t x253 = INT32_MIN;
static int32_t x255 = INT32_MAX;
volatile uint8_t x265 = 0U;
static volatile int16_t x275 = 185;
int32_t t68 = -284542263;
int8_t x279 = INT8_MIN;
int8_t x284 = -1;
int32_t t70 = -184;
int64_t x288 = 34453008201748013LL;
static int32_t x295 = INT32_MAX;
static volatile int8_t x306 = 20;
static volatile int64_t x308 = 611035LL;
volatile int16_t x311 = 1;
int32_t t77 = -247164246;
volatile int64_t x313 = 586442480LL;
static int8_t x314 = 0;
volatile uint32_t x317 = 56253U;
uint8_t x324 = UINT8_MAX;
static int32_t t82 = 9634477;
int16_t x335 = INT16_MIN;
volatile int32_t t83 = 93414155;
int32_t t84 = -535326;
int16_t x341 = INT16_MAX;
int16_t x352 = INT16_MAX;
static uint16_t x358 = 0U;
int16_t x359 = 1;
int8_t x370 = INT8_MAX;
uint32_t x374 = UINT32_MAX;
static uint8_t x376 = UINT8_MAX;
volatile int32_t t94 = -319;
int64_t x389 = 3LL;
uint8_t x393 = UINT8_MAX;
int32_t x394 = 0;
volatile int8_t x396 = -1;
int32_t x399 = -1;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MIN;
	static int16_t x3 = -57;
	static volatile uint64_t x4 = 58LLU;
	int32_t t0 = 28999802;

	t0 = (x1<(x2*(x3==x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = -1;
	uint32_t x7 = UINT32_MAX;
	volatile int32_t t1 = -141339661;

	t1 = (x5<(x6*(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int32_t x11 = INT32_MIN;
	uint16_t x12 = 303U;
	volatile int32_t t2 = 13358;

	t2 = (x9<(x10*(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 15;
	int16_t x14 = 107;
	volatile uint32_t x15 = UINT32_MAX;
	int64_t x16 = -18938586127960LL;

	t3 = (x13<(x14*(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	static int16_t x18 = -3708;
	int32_t x19 = INT32_MAX;
	static int8_t x20 = INT8_MAX;
	volatile int32_t t4 = -1029715;

	t4 = (x17<(x18*(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = 54748743LL;
	static volatile uint16_t x22 = UINT16_MAX;
	int32_t x23 = INT32_MIN;
	int8_t x24 = INT8_MAX;

	t5 = (x21<(x22*(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 1U;
	int32_t x26 = INT32_MAX;
	int8_t x27 = INT8_MIN;

	t6 = (x25<(x26*(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int16_t x30 = -1;
	int64_t x31 = INT64_MIN;
	int16_t x32 = INT16_MAX;

	t7 = (x29<(x30*(x31==x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	volatile int64_t x34 = -83226165LL;
	volatile uint16_t x35 = 720U;
	int32_t x36 = -1;

	t8 = (x33<(x34*(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x37 = 3731U;
	int16_t x38 = INT16_MIN;
	static uint16_t x39 = 12U;
	uint16_t x40 = 6650U;
	static volatile int32_t t9 = 62;

	t9 = (x37<(x38*(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 565578919LLU;
	volatile int8_t x42 = -13;
	int16_t x43 = 0;
	int16_t x44 = INT16_MIN;

	t10 = (x41<(x42*(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 10026557681175LLU;
	uint8_t x48 = 9U;
	volatile int32_t t11 = -1338597;

	t11 = (x45<(x46*(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = 15;
	int64_t x51 = INT64_MIN;
	static uint64_t x52 = 49486928474277LLU;
	volatile int32_t t12 = -2624990;

	t12 = (x49<(x50*(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = 11;
	static int64_t x55 = INT64_MAX;
	int64_t x56 = INT64_MAX;
	static volatile int32_t t13 = -3906618;

	t13 = (x53<(x54*(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 4;
	int32_t x58 = INT32_MIN;
	static int32_t t14 = 157158908;

	t14 = (x57<(x58*(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	uint32_t x62 = 11480849U;
	int16_t x63 = -3515;
	static int64_t x64 = INT64_MAX;
	static volatile int32_t t15 = -47414;

	t15 = (x61<(x62*(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = 210LLU;
	int32_t x66 = INT32_MIN;
	uint16_t x67 = UINT16_MAX;
	int32_t t16 = 234;

	t16 = (x65<(x66*(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x71 = UINT8_MAX;
	volatile int8_t x72 = -1;
	volatile int32_t t17 = -8456;

	t17 = (x69<(x70*(x71==x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -1;
	static volatile int16_t x74 = INT16_MAX;
	static volatile int32_t x75 = -1;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = -1;

	t18 = (x73<(x74*(x75==x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int8_t x78 = -1;
	int16_t x79 = 5484;
	static volatile uint8_t x80 = 27U;
	volatile int32_t t19 = 6;

	t19 = (x77<(x78*(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 4U;
	int8_t x82 = -53;
	uint64_t x83 = 1277222324112164LLU;
	uint16_t x84 = 7U;
	static volatile int32_t t20 = -1;

	t20 = (x81<(x82*(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = -507;
	uint8_t x87 = 103U;
	int64_t x88 = INT64_MIN;
	int32_t t21 = -71562392;

	t21 = (x85<(x86*(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MIN;
	uint32_t x91 = 1322U;
	volatile int64_t x92 = INT64_MIN;
	int32_t t22 = -77531503;

	t22 = (x89<(x90*(x91==x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x94 = 64U;
	static int8_t x95 = 49;
	int64_t x96 = INT64_MAX;
	volatile int32_t t23 = 257197728;

	t23 = (x93<(x94*(x95==x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = -109;
	volatile int64_t x98 = -963681205864826LL;
	int8_t x99 = INT8_MIN;
	uint32_t x100 = 691039U;
	int32_t t24 = -5;

	t24 = (x97<(x98*(x99==x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MAX;
	static int64_t x104 = INT64_MIN;

	t25 = (x101<(x102*(x103==x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 14479U;
	int64_t x107 = -12911448926LL;
	int16_t x108 = -1;
	int32_t t26 = 15;

	t26 = (x105<(x106*(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x110 = -1;
	uint16_t x111 = UINT16_MAX;
	int8_t x112 = -1;
	volatile int32_t t27 = 853031;

	t27 = (x109<(x110*(x111==x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = UINT8_MAX;
	static int32_t x114 = INT32_MIN;
	int32_t x115 = 641;
	int8_t x116 = INT8_MIN;
	static int32_t t28 = -13910930;

	t28 = (x113<(x114*(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = UINT64_MAX;
	uint64_t x118 = 5597503LLU;
	uint8_t x119 = 1U;
	int16_t x120 = INT16_MAX;

	t29 = (x117<(x118*(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	int8_t x122 = INT8_MIN;
	static int8_t x123 = 6;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -925557002;

	t30 = (x121<(x122*(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 57176LLU;
	uint64_t x126 = 99889707463544LLU;
	uint16_t x128 = 204U;
	volatile int32_t t31 = 240;

	t31 = (x125<(x126*(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 7;
	static int64_t x130 = -27LL;
	uint8_t x131 = 115U;
	volatile uint8_t x132 = 26U;
	volatile int32_t t32 = 25;

	t32 = (x129<(x130*(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = 16266695U;
	static int32_t x135 = INT32_MIN;
	uint32_t x136 = UINT32_MAX;

	t33 = (x133<(x134*(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = -1;
	int64_t x139 = INT64_MAX;
	volatile int16_t x140 = -1;
	volatile int32_t t34 = 1;

	t34 = (x137<(x138*(x139==x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MIN;
	volatile uint8_t x142 = UINT8_MAX;
	uint32_t x143 = UINT32_MAX;

	t35 = (x141<(x142*(x143==x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	static uint8_t x146 = 0U;
	uint16_t x147 = 1U;
	uint8_t x148 = 7U;

	t36 = (x145<(x146*(x147==x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	volatile int16_t x152 = INT16_MIN;
	static int32_t t37 = 409;

	t37 = (x149<(x150*(x151==x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x154 = -1;
	int8_t x156 = -1;
	volatile int32_t t38 = -61795354;

	t38 = (x153<(x154*(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	int32_t x158 = -1;
	static volatile int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 1032051;

	t39 = (x157<(x158*(x159==x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	int8_t x162 = INT8_MAX;
	int16_t x163 = 1324;
	volatile int8_t x164 = INT8_MAX;

	t40 = (x161<(x162*(x163==x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	uint64_t x166 = 20206508LLU;
	static int8_t x167 = INT8_MAX;
	int32_t t41 = 7;

	t41 = (x165<(x166*(x167==x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 1;
	uint16_t x170 = UINT16_MAX;
	volatile uint32_t x171 = 77878U;
	int32_t t42 = 4496;

	t42 = (x169<(x170*(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	static int32_t x175 = INT32_MIN;
	int64_t x176 = -1LL;

	t43 = (x173<(x174*(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 4;
	uint16_t x178 = 1U;
	int8_t x179 = -1;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 71459484;

	t44 = (x177<(x178*(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int8_t x184 = -1;
	volatile int32_t t45 = 12;

	t45 = (x181<(x182*(x183==x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x186 = 45U;
	int8_t x187 = INT8_MIN;
	static int8_t x188 = INT8_MIN;
	static volatile int32_t t46 = -116545410;

	t46 = (x185<(x186*(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	volatile int32_t x190 = 11907;
	uint16_t x191 = 6U;
	volatile int32_t t47 = 224570;

	t47 = (x189<(x190*(x191==x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = 13;
	int8_t x194 = INT8_MAX;
	volatile int32_t x195 = -530379884;
	uint8_t x196 = 2U;
	static int32_t t48 = -659;

	t48 = (x193<(x194*(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x198 = UINT32_MAX;
	static int8_t x199 = INT8_MAX;
	int8_t x200 = INT8_MAX;

	t49 = (x197<(x198*(x199==x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x202 = INT8_MIN;
	static uint64_t x203 = 15847771610LLU;
	int16_t x204 = -1;
	volatile int32_t t50 = 3;

	t50 = (x201<(x202*(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	int64_t x206 = INT64_MAX;
	int8_t x207 = 15;
	int32_t x208 = -1;
	int32_t t51 = -15;

	t51 = (x205<(x206*(x207==x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	static uint8_t x211 = 20U;
	int32_t x212 = 16737751;
	int32_t t52 = 3058090;

	t52 = (x209<(x210*(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	volatile int32_t x214 = -1;
	int8_t x215 = -35;
	int32_t x216 = -1;
	static volatile int32_t t53 = -940220221;

	t53 = (x213<(x214*(x215==x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = 14LLU;
	volatile int64_t x218 = INT64_MIN;
	static volatile uint32_t x220 = 237U;
	int32_t t54 = 5165687;

	t54 = (x217<(x218*(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = -1;
	int8_t x223 = INT8_MAX;
	uint8_t x224 = 32U;

	t55 = (x221<(x222*(x223==x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x227 = 7014U;
	int64_t x228 = INT64_MIN;

	t56 = (x225<(x226*(x227==x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x230 = 45U;
	uint32_t x231 = 2U;
	int16_t x232 = -852;
	volatile int32_t t57 = -3889856;

	t57 = (x229<(x230*(x231==x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 0U;
	static uint64_t x234 = UINT64_MAX;
	static uint64_t x235 = 0LLU;
	int8_t x236 = INT8_MIN;
	int32_t t58 = -324501250;

	t58 = (x233<(x234*(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 100919631435LL;
	uint8_t x238 = UINT8_MAX;
	volatile uint32_t x239 = 411300760U;
	int64_t x240 = 640324507053372LL;
	volatile int32_t t59 = 7400;

	t59 = (x237<(x238*(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = 2009719;
	uint16_t x243 = 62U;
	static int16_t x244 = 57;

	t60 = (x241<(x242*(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	int16_t x246 = INT16_MAX;
	volatile int32_t x247 = INT32_MIN;
	uint16_t x248 = UINT16_MAX;
	static volatile int32_t t61 = 26;

	t61 = (x245<(x246*(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x250 = 38618U;
	static int64_t x251 = INT64_MIN;
	static uint16_t x252 = UINT16_MAX;
	volatile int32_t t62 = -3;

	t62 = (x249<(x250*(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x254 = 42U;
	int8_t x256 = -46;
	int32_t t63 = -6911;

	t63 = (x253<(x254*(x255==x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MAX;
	static int16_t x258 = INT16_MAX;
	int16_t x259 = -1;
	volatile uint64_t x260 = 853631LLU;
	static int32_t t64 = -4598996;

	t64 = (x257<(x258*(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	static int16_t x262 = INT16_MIN;
	int16_t x263 = -23;
	int64_t x264 = -1LL;
	volatile int32_t t65 = -1;

	t65 = (x261<(x262*(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x266 = INT32_MIN;
	int8_t x267 = -1;
	static int8_t x268 = INT8_MAX;
	volatile int32_t t66 = 384049;

	t66 = (x265<(x266*(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int64_t x270 = INT64_MIN;
	volatile int8_t x271 = INT8_MIN;
	uint16_t x272 = 4676U;
	static int32_t t67 = 0;

	t67 = (x269<(x270*(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = -1;
	int8_t x274 = 2;
	int64_t x276 = INT64_MIN;

	t68 = (x273<(x274*(x275==x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	static int64_t x278 = -2155261895LL;
	int64_t x280 = -63369018468865LL;
	int32_t t69 = -101413;

	t69 = (x277<(x278*(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = 30488533U;
	uint8_t x282 = 5U;
	int32_t x283 = 2199;

	t70 = (x281<(x282*(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 1;
	int16_t x286 = 22;
	static int8_t x287 = -1;
	volatile int32_t t71 = 0;

	t71 = (x285<(x286*(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	uint16_t x290 = UINT16_MAX;
	volatile int32_t x291 = INT32_MAX;
	volatile int16_t x292 = INT16_MIN;
	int32_t t72 = 1;

	t72 = (x289<(x290*(x291==x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = 6065629855LL;
	static int64_t x294 = -1LL;
	int64_t x296 = -1LL;
	int32_t t73 = -7;

	t73 = (x293<(x294*(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	static int8_t x298 = INT8_MAX;
	volatile int64_t x299 = -1LL;
	volatile int16_t x300 = INT16_MIN;
	volatile int32_t t74 = -38663;

	t74 = (x297<(x298*(x299==x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x301 = UINT8_MAX;
	int16_t x302 = -123;
	int64_t x303 = INT64_MIN;
	int8_t x304 = 1;
	static volatile int32_t t75 = -28409954;

	t75 = (x301<(x302*(x303==x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int32_t x307 = INT32_MIN;
	volatile int32_t t76 = 29;

	t76 = (x305<(x306*(x307==x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x309 = UINT32_MAX;
	static uint16_t x310 = UINT16_MAX;
	static int16_t x312 = INT16_MIN;

	t77 = (x309<(x310*(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x315 = UINT32_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t78 = -148173;

	t78 = (x313<(x314*(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = INT16_MIN;
	int64_t x319 = -1LL;
	volatile int32_t x320 = INT32_MIN;
	volatile int32_t t79 = -1204;

	t79 = (x317<(x318*(x319==x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = 0;
	int64_t x322 = -1LL;
	static int64_t x323 = INT64_MAX;
	volatile int32_t t80 = 622980651;

	t80 = (x321<(x322*(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = 0;
	volatile int16_t x326 = INT16_MAX;
	int16_t x327 = -1;
	int64_t x328 = 1LL;
	volatile int32_t t81 = 6;

	t81 = (x325<(x326*(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = 2LL;
	uint64_t x330 = UINT64_MAX;
	static int8_t x331 = INT8_MAX;
	int8_t x332 = -2;

	t82 = (x329<(x330*(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x333 = 2U;
	uint32_t x334 = 32U;
	uint32_t x336 = 226793398U;

	t83 = (x333<(x334*(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 232119LLU;
	static uint16_t x338 = 1U;
	int8_t x339 = INT8_MIN;
	static uint64_t x340 = 7877943153355075LLU;

	t84 = (x337<(x338*(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x342 = 0U;
	static int32_t x343 = INT32_MAX;
	static int32_t x344 = -20639;
	volatile int32_t t85 = 10676395;

	t85 = (x341<(x342*(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	volatile int16_t x346 = INT16_MIN;
	uint64_t x347 = 45769126LLU;
	uint8_t x348 = UINT8_MAX;
	int32_t t86 = 387284;

	t86 = (x345<(x346*(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = 33392U;
	volatile uint16_t x350 = 3296U;
	int16_t x351 = -3152;
	volatile int32_t t87 = -19;

	t87 = (x349<(x350*(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x353 = 754995U;
	int8_t x354 = -5;
	uint64_t x355 = UINT64_MAX;
	int32_t x356 = INT32_MIN;
	int32_t t88 = 787;

	t88 = (x353<(x354*(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	uint8_t x360 = 43U;
	volatile int32_t t89 = -10126782;

	t89 = (x357<(x358*(x359==x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	int32_t x362 = INT32_MAX;
	int8_t x363 = 0;
	static uint8_t x364 = 85U;
	int32_t t90 = -3287;

	t90 = (x361<(x362*(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 5U;
	static int8_t x366 = INT8_MIN;
	uint32_t x367 = UINT32_MAX;
	volatile int64_t x368 = -3264245LL;
	volatile int32_t t91 = 106295;

	t91 = (x365<(x366*(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	static uint8_t x371 = 5U;
	uint16_t x372 = UINT16_MAX;
	int32_t t92 = 0;

	t92 = (x369<(x370*(x371==x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	int32_t x375 = INT32_MAX;
	volatile int32_t t93 = 1;

	t93 = (x373<(x374*(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MAX;
	int16_t x378 = INT16_MIN;
	int8_t x379 = INT8_MIN;
	int64_t x380 = -875569LL;

	t94 = (x377<(x378*(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = -1;
	volatile int8_t x383 = INT8_MAX;
	static volatile uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = -2107;

	t95 = (x381<(x382*(x383==x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 125333U;
	int64_t x386 = 3057LL;
	volatile uint32_t x387 = 14530U;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t96 = 0;

	t96 = (x385<(x386*(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x390 = 1U;
	static volatile uint8_t x391 = 0U;
	uint16_t x392 = UINT16_MAX;
	int32_t t97 = -1452491;

	t97 = (x389<(x390*(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x395 = INT8_MIN;
	volatile int32_t t98 = -27;

	t98 = (x393<(x394*(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -171;
	volatile uint32_t x398 = UINT32_MAX;
	int16_t x400 = INT16_MAX;
	int32_t t99 = -9;

	t99 = (x397<(x398*(x399==x400)));

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


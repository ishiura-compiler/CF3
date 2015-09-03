#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x2 = 4U;
uint16_t x3 = 582U;
uint32_t x4 = UINT32_MAX;
int32_t x12 = INT32_MIN;
volatile int32_t t3 = 45;
int32_t t5 = -73165899;
int8_t x27 = -2;
int8_t x28 = INT8_MAX;
uint64_t x30 = 64650946LLU;
static volatile int32_t t7 = 49466359;
int16_t x50 = INT16_MIN;
static int32_t t13 = -5539;
static int32_t x59 = INT32_MIN;
volatile int32_t x61 = INT32_MIN;
static volatile int32_t t15 = -3275;
int64_t x67 = INT64_MIN;
static int32_t t16 = -1014;
volatile uint32_t x77 = 15729U;
int8_t x79 = 1;
volatile int32_t t19 = 317145621;
int16_t x84 = INT16_MAX;
int64_t x89 = INT64_MIN;
static uint8_t x91 = UINT8_MAX;
static uint32_t x98 = 1U;
static int64_t x99 = INT64_MIN;
volatile int32_t t24 = -7558;
int64_t x102 = INT64_MAX;
int32_t x110 = INT32_MAX;
static uint8_t x114 = 60U;
int8_t x116 = 7;
volatile int32_t x122 = -1;
uint16_t x123 = 2150U;
volatile uint32_t x130 = 563752751U;
static int8_t x133 = INT8_MIN;
uint8_t x141 = 36U;
uint32_t x145 = 27U;
int8_t x146 = INT8_MIN;
static volatile int32_t t36 = 1433549;
int8_t x154 = 0;
volatile int32_t t39 = 324957;
volatile int32_t t42 = 4;
uint64_t x179 = 146144624372LLU;
volatile int32_t t44 = -128806;
static volatile uint8_t x183 = 121U;
uint64_t x184 = 35LLU;
uint8_t x185 = 0U;
volatile int64_t x188 = INT64_MAX;
static int64_t x190 = INT64_MAX;
static int64_t x191 = INT64_MAX;
int16_t x193 = -4951;
static int64_t x195 = INT64_MIN;
static int32_t t48 = 1251701;
volatile int32_t x199 = INT32_MIN;
int32_t t50 = -9124158;
static uint16_t x205 = 63U;
volatile int8_t x211 = INT8_MAX;
static volatile int8_t x217 = -1;
static uint16_t x220 = 8U;
uint64_t x222 = UINT64_MAX;
static uint64_t x226 = UINT64_MAX;
int32_t x234 = -32019;
int64_t x238 = -59048932661LL;
uint8_t x241 = 5U;
volatile int16_t x249 = 15;
int16_t x250 = INT16_MIN;
volatile int64_t x251 = INT64_MAX;
int32_t t62 = -868;
int32_t x264 = INT32_MAX;
int32_t t65 = -710;
volatile uint64_t x267 = UINT64_MAX;
volatile int32_t t66 = 9;
uint8_t x278 = UINT8_MAX;
uint64_t x282 = UINT64_MAX;
int16_t x284 = INT16_MAX;
volatile uint64_t x293 = 3LLU;
int32_t x295 = INT32_MIN;
int64_t x301 = INT64_MAX;
uint16_t x302 = 2U;
int16_t x310 = INT16_MIN;
int32_t t77 = 207892;
int16_t x316 = 22;
static uint64_t x320 = 1861660LLU;
int32_t t79 = 155;
int8_t x322 = -3;
int32_t t81 = -731;
volatile int64_t x332 = INT64_MAX;
int32_t t82 = -1736;
static int16_t x338 = INT16_MIN;
volatile int16_t x339 = INT16_MIN;
static volatile int32_t t84 = 920;
static int32_t t85 = 109803207;
int64_t x347 = INT64_MAX;
int64_t x352 = INT64_MAX;
volatile int32_t t87 = -1907927;
volatile int32_t x353 = -830;
int16_t x359 = INT16_MIN;
volatile int32_t t89 = -10562318;
static int32_t x368 = -1;
int64_t x369 = INT64_MAX;
static uint32_t x371 = 27329700U;
int8_t x379 = INT8_MAX;
int64_t x380 = 733282478579303LL;
uint8_t x381 = 1U;
static uint32_t x383 = 1U;
uint64_t x386 = 3493827254136635LLU;
uint8_t x394 = 6U;
volatile int64_t x397 = INT64_MIN;
uint8_t x398 = 20U;
static int64_t x400 = INT64_MIN;
int32_t t99 = 76950;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int32_t t0 = 1;

	t0 = ((x1==x2)^(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 14892415309LLU;
	int8_t x6 = INT8_MIN;
	uint8_t x7 = 70U;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -9604;

	t1 = ((x5==x6)^(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint16_t x10 = 26U;
	int8_t x11 = INT8_MAX;
	volatile int32_t t2 = -3005799;

	t2 = ((x9==x10)^(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int32_t x14 = INT32_MIN;
	volatile int8_t x15 = -1;
	volatile uint64_t x16 = 2135591115814021LLU;

	t3 = ((x13==x14)^(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	volatile int16_t x18 = -1;
	int32_t x19 = INT32_MAX;
	int8_t x20 = -1;
	int32_t t4 = 2747057;

	t4 = ((x17==x18)^(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = UINT8_MAX;
	static int8_t x22 = 1;
	int64_t x23 = -1LL;
	volatile int64_t x24 = -1LL;

	t5 = ((x21==x22)^(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 0;
	volatile uint8_t x26 = UINT8_MAX;
	static int32_t t6 = -8102;

	t6 = ((x25==x26)^(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 16430682U;
	int32_t x31 = INT32_MIN;
	uint64_t x32 = 1694LLU;

	t7 = ((x29==x30)^(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 20LLU;
	volatile int32_t x34 = 1028812023;
	volatile int16_t x35 = -1;
	volatile uint16_t x36 = 10114U;
	static int32_t t8 = -168905;

	t8 = ((x33==x34)^(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	volatile int32_t x38 = INT32_MAX;
	static int64_t x39 = -1LL;
	uint8_t x40 = 9U;
	int32_t t9 = 20841986;

	t9 = ((x37==x38)^(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 7330349505231LLU;
	int16_t x42 = -1;
	volatile int16_t x43 = INT16_MIN;
	uint64_t x44 = 26185697569211912LLU;
	static int32_t t10 = -535512376;

	t10 = ((x41==x42)^(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 73082LL;
	int16_t x46 = -1;
	int8_t x47 = INT8_MIN;
	uint32_t x48 = 1314527126U;
	int32_t t11 = 4;

	t11 = ((x45==x46)^(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile int8_t x51 = -1;
	static uint8_t x52 = 30U;
	volatile int32_t t12 = -1139599;

	t12 = ((x49==x50)^(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int8_t x54 = INT8_MIN;
	static int64_t x55 = INT64_MIN;
	static uint32_t x56 = 422U;

	t13 = ((x53==x54)^(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MIN;
	int64_t x58 = INT64_MIN;
	static int32_t x60 = INT32_MIN;
	static int32_t t14 = -330963;

	t14 = ((x57==x58)^(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = INT8_MAX;
	int32_t x63 = -1;
	int8_t x64 = -1;

	t15 = ((x61==x62)^(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	uint16_t x66 = 3U;
	static volatile int16_t x68 = INT16_MIN;

	t16 = ((x65==x66)^(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -4;
	volatile int64_t x70 = INT64_MIN;
	int8_t x71 = INT8_MAX;
	static int32_t x72 = 351769;
	int32_t t17 = 1;

	t17 = ((x69==x70)^(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int64_t x74 = -1LL;
	int16_t x75 = INT16_MIN;
	int16_t x76 = -1;
	static int32_t t18 = -105638;

	t18 = ((x73==x74)^(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = INT32_MAX;
	int64_t x80 = 171LL;

	t19 = ((x77==x78)^(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 7934057LLU;
	static uint16_t x82 = 18U;
	int16_t x83 = INT16_MIN;
	int32_t t20 = 3;

	t20 = ((x81==x82)^(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 0;
	uint8_t x86 = UINT8_MAX;
	volatile int64_t x87 = 607420114LL;
	volatile uint32_t x88 = UINT32_MAX;
	int32_t t21 = -186239377;

	t21 = ((x85==x86)^(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x90 = INT32_MIN;
	int64_t x92 = -1LL;
	volatile int32_t t22 = 146;

	t22 = ((x89==x90)^(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int16_t x94 = 4022;
	volatile int16_t x95 = 1634;
	int32_t x96 = -1;
	volatile int32_t t23 = -7;

	t23 = ((x93==x94)^(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = UINT16_MAX;
	uint32_t x100 = 36114U;

	t24 = ((x97==x98)^(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 107426U;
	static uint32_t x103 = 104541841U;
	int16_t x104 = -1;
	volatile int32_t t25 = 115434;

	t25 = ((x101==x102)^(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	static int8_t x106 = -1;
	int8_t x107 = 6;
	static int64_t x108 = -239098401244390068LL;
	volatile int32_t t26 = 1;

	t26 = ((x105==x106)^(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 6252542U;
	static int16_t x111 = -1;
	volatile int16_t x112 = INT16_MIN;
	static volatile int32_t t27 = 58872027;

	t27 = ((x109==x110)^(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x113 = 0U;
	volatile uint64_t x115 = UINT64_MAX;
	static volatile int32_t t28 = 175;

	t28 = ((x113==x114)^(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MIN;
	int16_t x119 = -1;
	int8_t x120 = INT8_MAX;
	int32_t t29 = -1;

	t29 = ((x117==x118)^(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	volatile int64_t x124 = INT64_MAX;
	static volatile int32_t t30 = 1;

	t30 = ((x121==x122)^(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	volatile int8_t x126 = -1;
	uint8_t x127 = UINT8_MAX;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = -415597335;

	t31 = ((x125==x126)^(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 2U;
	int8_t x131 = -5;
	int32_t x132 = INT32_MIN;
	int32_t t32 = 24203315;

	t32 = ((x129==x130)^(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = -1LL;
	uint32_t x135 = 44853577U;
	int16_t x136 = INT16_MAX;
	int32_t t33 = -1172154;

	t33 = ((x133==x134)^(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MIN;
	volatile uint64_t x138 = UINT64_MAX;
	uint32_t x139 = UINT32_MAX;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 15422;

	t34 = ((x137==x138)^(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MAX;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MAX;
	int32_t t35 = -104654;

	t35 = ((x141==x142)^(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x147 = 157140023U;
	static uint8_t x148 = 4U;

	t36 = ((x145==x146)^(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 188LL;
	int16_t x150 = INT16_MAX;
	uint8_t x151 = 108U;
	int8_t x152 = -1;
	static int32_t t37 = -16031;

	t37 = ((x149==x150)^(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 4;
	int64_t x155 = INT64_MIN;
	volatile int64_t x156 = INT64_MIN;
	int32_t t38 = -96048133;

	t38 = ((x153==x154)^(x155==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	volatile int16_t x158 = INT16_MIN;
	int16_t x159 = -5;
	int8_t x160 = -1;

	t39 = ((x157==x158)^(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 22U;
	volatile uint8_t x162 = UINT8_MAX;
	volatile int16_t x163 = 0;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t40 = 3782126;

	t40 = ((x161==x162)^(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 781152431U;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = 1;
	uint32_t x168 = 1745514585U;
	static volatile int32_t t41 = -998609;

	t41 = ((x165==x166)^(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = -1;
	int32_t x170 = -1954;
	volatile uint64_t x171 = 161551LLU;
	static int64_t x172 = -1LL;

	t42 = ((x169==x170)^(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = INT32_MIN;
	static volatile int64_t x174 = -1LL;
	volatile uint32_t x175 = UINT32_MAX;
	static volatile uint32_t x176 = 1716831U;
	static volatile int32_t t43 = 178335218;

	t43 = ((x173==x174)^(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	volatile int16_t x178 = INT16_MIN;
	volatile int32_t x180 = 96970;

	t44 = ((x177==x178)^(x179==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 0U;
	volatile int16_t x182 = INT16_MIN;
	static volatile int32_t t45 = -43885;

	t45 = ((x181==x182)^(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = 0;
	volatile int32_t x187 = -1;
	volatile int32_t t46 = 941252099;

	t46 = ((x185==x186)^(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = -1;
	int32_t x192 = INT32_MIN;
	static int32_t t47 = 2291173;

	t47 = ((x189==x190)^(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = INT32_MIN;
	int32_t x196 = INT32_MIN;

	t48 = ((x193==x194)^(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 1;
	int8_t x198 = INT8_MIN;
	uint8_t x200 = UINT8_MAX;
	int32_t t49 = -12;

	t49 = ((x197==x198)^(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = INT64_MIN;
	int16_t x202 = INT16_MIN;
	volatile int64_t x203 = INT64_MIN;
	static uint64_t x204 = UINT64_MAX;

	t50 = ((x201==x202)^(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x206 = INT64_MIN;
	int32_t x207 = -1;
	int64_t x208 = INT64_MIN;
	volatile int32_t t51 = 876;

	t51 = ((x205==x206)^(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -522689;
	int32_t x210 = 45071;
	int8_t x212 = INT8_MIN;
	static int32_t t52 = 717;

	t52 = ((x209==x210)^(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	static int64_t x214 = INT64_MIN;
	int64_t x215 = -1LL;
	uint32_t x216 = 8047932U;
	int32_t t53 = 404830711;

	t53 = ((x213==x214)^(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x218 = UINT8_MAX;
	int8_t x219 = INT8_MIN;
	int32_t t54 = 3972;

	t54 = ((x217==x218)^(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 2319U;
	static int8_t x223 = INT8_MIN;
	uint32_t x224 = 28460530U;
	int32_t t55 = 5;

	t55 = ((x221==x222)^(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x225 = 6U;
	static int16_t x227 = INT16_MAX;
	uint64_t x228 = 2018471LLU;
	volatile int32_t t56 = -230;

	t56 = ((x225==x226)^(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = INT16_MIN;
	uint32_t x230 = UINT32_MAX;
	int64_t x231 = 952543898LL;
	int32_t x232 = 2;
	int32_t t57 = -586372582;

	t57 = ((x229==x230)^(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 258853U;
	volatile int32_t x235 = -1;
	uint16_t x236 = 56U;
	int32_t t58 = -4;

	t58 = ((x233==x234)^(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = 1;
	int32_t x239 = INT32_MIN;
	int8_t x240 = -1;
	int32_t t59 = 299509;

	t59 = ((x237==x238)^(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = 1;
	int16_t x243 = -1;
	uint64_t x244 = 1LLU;
	int32_t t60 = 13;

	t60 = ((x241==x242)^(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	volatile int64_t x246 = INT64_MIN;
	int8_t x247 = -1;
	int8_t x248 = -1;
	volatile int32_t t61 = 44918;

	t61 = ((x245==x246)^(x247==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x252 = INT32_MIN;

	t62 = ((x249==x250)^(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 1;
	uint16_t x254 = 1U;
	uint64_t x255 = UINT64_MAX;
	int32_t x256 = -1;
	int32_t t63 = -710;

	t63 = ((x253==x254)^(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	uint64_t x258 = 21475LLU;
	int32_t x259 = -27;
	static uint16_t x260 = UINT16_MAX;
	int32_t t64 = -1080;

	t64 = ((x257==x258)^(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 10907U;
	volatile int64_t x262 = -17566LL;
	int16_t x263 = -1;

	t65 = ((x261==x262)^(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	int16_t x266 = INT16_MIN;
	int64_t x268 = 263858344139LL;

	t66 = ((x265==x266)^(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	volatile int16_t x270 = -14512;
	int16_t x271 = -1;
	static uint16_t x272 = UINT16_MAX;
	int32_t t67 = -10265;

	t67 = ((x269==x270)^(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MIN;
	uint16_t x274 = 4U;
	uint32_t x275 = 7839093U;
	uint8_t x276 = 51U;
	int32_t t68 = 16561;

	t68 = ((x273==x274)^(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = 77679;
	int64_t x279 = INT64_MIN;
	static volatile int16_t x280 = INT16_MIN;
	int32_t t69 = 0;

	t69 = ((x277==x278)^(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	uint64_t x283 = 63783198526982934LLU;
	static volatile int32_t t70 = 16735080;

	t70 = ((x281==x282)^(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	uint8_t x286 = 18U;
	uint64_t x287 = 618LLU;
	volatile uint64_t x288 = UINT64_MAX;
	int32_t t71 = -6985;

	t71 = ((x285==x286)^(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MAX;
	int8_t x290 = -24;
	int16_t x291 = INT16_MIN;
	static volatile int32_t x292 = 1559805;
	static int32_t t72 = 14;

	t72 = ((x289==x290)^(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = -1;
	int32_t x296 = INT32_MIN;
	int32_t t73 = -88785495;

	t73 = ((x293==x294)^(x295==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = UINT8_MAX;
	uint8_t x298 = 4U;
	volatile int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = -13987;

	t74 = ((x297==x298)^(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x303 = 30231079118873LLU;
	static volatile uint16_t x304 = 1U;
	static int32_t t75 = 31330652;

	t75 = ((x301==x302)^(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x305 = 2U;
	int32_t x306 = -1;
	int8_t x307 = INT8_MAX;
	uint16_t x308 = 1422U;
	int32_t t76 = 37218973;

	t76 = ((x305==x306)^(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	uint32_t x311 = UINT32_MAX;
	uint64_t x312 = 28686581271070LLU;

	t77 = ((x309==x310)^(x311==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MIN;
	uint8_t x314 = 4U;
	static int8_t x315 = INT8_MIN;
	volatile int32_t t78 = -12082;

	t78 = ((x313==x314)^(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	volatile uint32_t x318 = 372520U;
	uint64_t x319 = 790315952370LLU;

	t79 = ((x317==x318)^(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MIN;
	volatile int32_t t80 = 5;

	t80 = ((x321==x322)^(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = -1;
	uint64_t x326 = 7930203LLU;
	int32_t x327 = -2661;
	int16_t x328 = 413;

	t81 = ((x325==x326)^(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	volatile int16_t x330 = 5;
	static int16_t x331 = -462;

	t82 = ((x329==x330)^(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 2760525444110911LLU;
	int16_t x334 = -1;
	uint64_t x335 = 495709946351LLU;
	int8_t x336 = INT8_MAX;
	int32_t t83 = 56509147;

	t83 = ((x333==x334)^(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = -1;
	static int8_t x340 = -1;

	t84 = ((x337==x338)^(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 4U;
	int8_t x342 = INT8_MAX;
	uint32_t x343 = 201073U;
	int32_t x344 = INT32_MIN;

	t85 = ((x341==x342)^(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	static uint64_t x346 = UINT64_MAX;
	static int64_t x348 = -1LL;
	int32_t t86 = -26843;

	t86 = ((x345==x346)^(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = INT64_MIN;
	uint8_t x350 = 20U;
	uint32_t x351 = UINT32_MAX;

	t87 = ((x349==x350)^(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x354 = INT16_MAX;
	int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MAX;
	volatile int32_t t88 = 32995356;

	t88 = ((x353==x354)^(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	uint8_t x358 = UINT8_MAX;
	volatile int64_t x360 = -9671LL;

	t89 = ((x357==x358)^(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	static volatile uint32_t x362 = 413U;
	uint32_t x363 = 2761U;
	static int16_t x364 = INT16_MAX;
	int32_t t90 = 40594547;

	t90 = ((x361==x362)^(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	uint16_t x366 = 2U;
	uint16_t x367 = UINT16_MAX;
	volatile int32_t t91 = 12;

	t91 = ((x365==x366)^(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x370 = UINT16_MAX;
	int64_t x372 = INT64_MIN;
	volatile int32_t t92 = -12248;

	t92 = ((x369==x370)^(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	static volatile int8_t x374 = INT8_MIN;
	uint64_t x375 = UINT64_MAX;
	uint16_t x376 = 2U;
	volatile int32_t t93 = -5791;

	t93 = ((x373==x374)^(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	static int64_t x378 = 0LL;
	volatile int32_t t94 = -2868006;

	t94 = ((x377==x378)^(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x382 = 4052U;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = 78;

	t95 = ((x381==x382)^(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 63;
	uint32_t x387 = 1620666769U;
	int16_t x388 = INT16_MIN;
	int32_t t96 = 82306;

	t96 = ((x385==x386)^(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = INT64_MIN;
	static int32_t x391 = INT32_MAX;
	uint32_t x392 = 9U;
	static int32_t t97 = -15580925;

	t97 = ((x389==x390)^(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x393 = -1;
	static int64_t x395 = -229LL;
	int32_t x396 = -23569;
	static volatile int32_t t98 = -56855939;

	t98 = ((x393==x394)^(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x399 = INT64_MIN;

	t99 = ((x397==x398)^(x399==x400));

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


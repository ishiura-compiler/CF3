#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 154982851;
int8_t x8 = 5;
uint64_t x9 = 1695505796647239LLU;
int32_t t6 = -87979;
int32_t x33 = 887;
static volatile int16_t x35 = -1;
int16_t x36 = INT16_MIN;
int32_t t9 = 12696342;
int16_t x42 = -42;
static uint16_t x50 = 54U;
static int8_t x55 = INT8_MIN;
volatile int32_t t13 = -256897461;
int64_t x57 = INT64_MIN;
volatile int32_t x58 = INT32_MAX;
int32_t t14 = -37357;
int8_t x65 = INT8_MIN;
int16_t x70 = INT16_MIN;
volatile int32_t t17 = 28316;
int32_t x86 = 2;
int32_t x88 = INT32_MIN;
static volatile int8_t x94 = -1;
int16_t x95 = -7050;
int8_t x112 = INT8_MIN;
int32_t x124 = INT32_MIN;
uint32_t x127 = UINT32_MAX;
volatile int64_t x144 = -1LL;
int32_t t35 = -50;
uint64_t x145 = UINT64_MAX;
static int64_t x146 = -6772960459720LL;
static volatile int32_t t36 = 190134;
volatile int8_t x149 = 4;
int32_t x150 = -6;
volatile uint64_t x151 = 1087458021762821345LLU;
uint8_t x156 = UINT8_MAX;
int8_t x160 = -17;
static int32_t x163 = -1;
uint32_t x169 = UINT32_MAX;
int32_t t45 = -62;
int8_t x188 = INT8_MAX;
uint8_t x192 = 21U;
volatile int32_t t47 = -1643580;
volatile int8_t x196 = 60;
uint32_t x210 = UINT32_MAX;
int8_t x214 = INT8_MAX;
static uint8_t x219 = UINT8_MAX;
volatile int32_t t55 = -895848682;
static int16_t x228 = INT16_MIN;
int16_t x233 = INT16_MAX;
volatile int32_t x234 = INT32_MIN;
static int16_t x252 = INT16_MAX;
uint32_t x261 = UINT32_MAX;
static uint8_t x264 = 12U;
volatile uint16_t x270 = 7247U;
int32_t x275 = 1349768;
static int32_t t69 = -15753;
uint64_t x282 = UINT64_MAX;
int64_t x284 = -379523112LL;
int32_t t71 = -485241;
int64_t x289 = 1761206618986LL;
int16_t x293 = -1;
volatile int32_t x301 = -15;
int32_t t76 = -8;
int16_t x316 = 2098;
int32_t x318 = -1;
int16_t x320 = INT16_MIN;
int16_t x330 = -1;
int16_t x332 = INT16_MIN;
uint64_t x338 = 2008211790087104995LLU;
static int32_t t84 = -6673;
static uint16_t x344 = 206U;
uint16_t x347 = UINT16_MAX;
int32_t t86 = 1;
int8_t x350 = INT8_MAX;
int32_t t87 = 2217714;
int32_t x354 = INT32_MIN;
volatile int32_t t89 = -813636;
static int64_t x361 = -175152992LL;
static uint64_t x366 = UINT64_MAX;
static int64_t x368 = -4742377LL;
int16_t x372 = -37;
uint8_t x384 = 16U;
volatile uint64_t x386 = 10556383941LLU;
static int32_t t99 = -1;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint16_t x2 = 370U;
	int32_t x3 = 26514;
	uint16_t x4 = 1005U;

	t0 = (x1==((x2&x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x6 = INT16_MIN;
	uint32_t x7 = UINT32_MAX;
	volatile int32_t t1 = -1;

	t1 = (x5==((x6&x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x10 = 6472U;
	int32_t x11 = INT32_MAX;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -12020;

	t2 = (x9==((x10&x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 10431LLU;
	volatile uint32_t x14 = 28326433U;
	static uint8_t x15 = 0U;
	int64_t x16 = INT64_MIN;
	volatile int32_t t3 = 1;

	t3 = (x13==((x14&x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 124U;
	int8_t x18 = 0;
	static uint32_t x19 = 23U;
	int32_t x20 = INT32_MAX;
	int32_t t4 = 387;

	t4 = (x17==((x18&x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 41790LLU;
	int16_t x22 = -2542;
	uint16_t x23 = 7U;
	int8_t x24 = -1;
	int32_t t5 = -139167;

	t5 = (x21==((x22&x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = INT16_MIN;
	uint32_t x27 = 1U;
	int8_t x28 = 0;

	t6 = (x25==((x26&x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int32_t x30 = INT32_MIN;
	static int8_t x31 = -1;
	uint8_t x32 = 0U;
	volatile int32_t t7 = -1;

	t7 = (x29==((x30&x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	int32_t t8 = 5778;

	t8 = (x33==((x34&x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = INT32_MIN;
	static uint32_t x38 = 2236U;
	static volatile uint64_t x39 = 4689LLU;
	int8_t x40 = INT8_MIN;

	t9 = (x37==((x38&x39)&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 17731149402LLU;
	uint16_t x43 = 27197U;
	volatile int64_t x44 = INT64_MIN;
	int32_t t10 = -1;

	t10 = (x41==((x42&x43)&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int16_t x46 = 3;
	uint16_t x47 = 44U;
	static int64_t x48 = INT64_MIN;
	int32_t t11 = 3;

	t11 = (x45==((x46&x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int8_t x51 = -28;
	static volatile int32_t x52 = INT32_MIN;
	int32_t t12 = -3177240;

	t12 = (x49==((x50&x51)&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 1622U;
	volatile int8_t x54 = 10;
	static int32_t x56 = 2056178;

	t13 = (x53==((x54&x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x59 = UINT32_MAX;
	static volatile uint64_t x60 = 46706LLU;

	t14 = (x57==((x58&x59)&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x61 = UINT64_MAX;
	uint32_t x62 = UINT32_MAX;
	int16_t x63 = -1;
	uint32_t x64 = 814059U;
	int32_t t15 = -34;

	t15 = (x61==((x62&x63)&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MAX;
	int64_t x67 = INT64_MIN;
	static int16_t x68 = INT16_MIN;
	static volatile int32_t t16 = -123;

	t16 = (x65==((x66&x67)&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x69 = INT16_MIN;
	uint16_t x71 = 132U;
	int64_t x72 = -137064585000647306LL;

	t17 = (x69==((x70&x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint32_t x74 = 12914U;
	uint16_t x75 = 3U;
	volatile int32_t x76 = 675;
	static volatile int32_t t18 = 0;

	t18 = (x73==((x74&x75)&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MIN;
	volatile uint32_t x78 = 89U;
	int64_t x79 = INT64_MIN;
	static int16_t x80 = -3406;
	volatile int32_t t19 = 114;

	t19 = (x77==((x78&x79)&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	static int32_t x82 = 457;
	static int64_t x83 = INT64_MIN;
	uint8_t x84 = 1U;
	volatile int32_t t20 = -54298;

	t20 = (x81==((x82&x83)&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	int8_t x87 = INT8_MIN;
	static int32_t t21 = 14;

	t21 = (x85==((x86&x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = -35867685LL;
	int16_t x90 = INT16_MIN;
	int32_t x91 = -43;
	int32_t x92 = -1;
	int32_t t22 = -290;

	t22 = (x89==((x90&x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	volatile int8_t x96 = -1;
	int32_t t23 = -255322;

	t23 = (x93==((x94&x95)&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 7344U;
	volatile uint16_t x98 = 3289U;
	uint32_t x99 = 142622958U;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t24 = 4044402;

	t24 = (x97==((x98&x99)&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MAX;
	int32_t x102 = INT32_MIN;
	uint32_t x103 = 470088U;
	uint8_t x104 = 6U;
	volatile int32_t t25 = -602524660;

	t25 = (x101==((x102&x103)&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 2;
	volatile int8_t x106 = INT8_MAX;
	int32_t x107 = INT32_MAX;
	volatile uint8_t x108 = UINT8_MAX;
	volatile int32_t t26 = 1101;

	t26 = (x105==((x106&x107)&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = INT32_MAX;
	int32_t x110 = INT32_MAX;
	volatile int8_t x111 = 0;
	volatile int32_t t27 = -32;

	t27 = (x109==((x110&x111)&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint64_t x114 = 152194LLU;
	volatile int32_t x115 = -169;
	static int8_t x116 = 0;
	volatile int32_t t28 = 322;

	t28 = (x113==((x114&x115)&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x117 = 1879902761655649243LL;
	uint64_t x118 = UINT64_MAX;
	uint64_t x119 = 0LLU;
	uint8_t x120 = 10U;
	int32_t t29 = 362666084;

	t29 = (x117==((x118&x119)&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -4LL;
	uint32_t x122 = UINT32_MAX;
	int32_t x123 = -405192;
	volatile int32_t t30 = 108592356;

	t30 = (x121==((x122&x123)&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int8_t x126 = INT8_MAX;
	volatile uint64_t x128 = 22531290750115506LLU;
	static volatile int32_t t31 = -235806;

	t31 = (x125==((x126&x127)&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 1971;
	volatile uint32_t x130 = 1U;
	int8_t x131 = -9;
	volatile int8_t x132 = INT8_MIN;
	volatile int32_t t32 = 350929864;

	t32 = (x129==((x130&x131)&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 1U;
	volatile int8_t x134 = INT8_MAX;
	uint64_t x135 = 2060703769LLU;
	volatile int16_t x136 = -5;
	volatile int32_t t33 = 10;

	t33 = (x133==((x134&x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 634921;
	int64_t x138 = INT64_MIN;
	static int64_t x139 = -1LL;
	static int32_t x140 = -705;
	volatile int32_t t34 = -41405;

	t34 = (x137==((x138&x139)&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 140992;
	int16_t x142 = -1;
	int8_t x143 = 2;

	t35 = (x141==((x142&x143)&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x147 = INT8_MAX;
	volatile int16_t x148 = INT16_MIN;

	t36 = (x145==((x146&x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x152 = -2863LL;
	static volatile int32_t t37 = 478;

	t37 = (x149==((x150&x151)&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	uint8_t x154 = 36U;
	uint8_t x155 = 4U;
	volatile int32_t t38 = 252;

	t38 = (x153==((x154&x155)&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = 493818U;
	static int32_t x158 = INT32_MAX;
	int32_t x159 = INT32_MIN;
	static int32_t t39 = -503;

	t39 = (x157==((x158&x159)&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = 19;
	uint64_t x162 = 194399813LLU;
	uint32_t x164 = 24692U;
	volatile int32_t t40 = 3;

	t40 = (x161==((x162&x163)&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 100U;
	int64_t x166 = 132707046604465629LL;
	uint16_t x167 = 250U;
	volatile uint8_t x168 = UINT8_MAX;
	int32_t t41 = 1;

	t41 = (x165==((x166&x167)&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = INT32_MIN;
	static int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = 480930290;

	t42 = (x169==((x170&x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 1179LLU;
	int16_t x174 = INT16_MAX;
	uint16_t x175 = 46U;
	static int64_t x176 = -1LL;
	int32_t t43 = -3;

	t43 = (x173==((x174&x175)&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MAX;
	static uint8_t x178 = 1U;
	int8_t x179 = -1;
	int8_t x180 = INT8_MAX;
	volatile int32_t t44 = 13;

	t44 = (x177==((x178&x179)&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 57315LL;
	static uint64_t x182 = 20074374499321476LLU;
	int64_t x183 = -1273930211LL;
	int16_t x184 = 334;

	t45 = (x181==((x182&x183)&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = 466U;
	int64_t x186 = 273634472400627LL;
	uint8_t x187 = 15U;
	static int32_t t46 = 403844;

	t46 = (x185==((x186&x187)&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 42;
	int16_t x190 = -9;
	int8_t x191 = INT8_MIN;

	t47 = (x189==((x190&x191)&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x193 = 498;
	int32_t x194 = INT32_MAX;
	static volatile int8_t x195 = INT8_MIN;
	int32_t t48 = -15;

	t48 = (x193==((x194&x195)&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	uint64_t x198 = 23488240LLU;
	int32_t x199 = 6348;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = 21;

	t49 = (x197==((x198&x199)&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int16_t x202 = -1;
	volatile uint16_t x203 = UINT16_MAX;
	int32_t x204 = INT32_MIN;
	static int32_t t50 = -25147;

	t50 = (x201==((x202&x203)&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 49164381U;
	volatile int32_t x206 = -1;
	uint32_t x207 = 70U;
	uint8_t x208 = UINT8_MAX;
	static volatile int32_t t51 = -104530611;

	t51 = (x205==((x206&x207)&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 1U;
	uint32_t x211 = UINT32_MAX;
	int16_t x212 = 958;
	volatile int32_t t52 = 113794179;

	t52 = (x209==((x210&x211)&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 8177U;
	int8_t x215 = -1;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t53 = -128366;

	t53 = (x213==((x214&x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	int64_t x218 = 3190537520691096LL;
	int8_t x220 = -3;
	volatile int32_t t54 = 1;

	t54 = (x217==((x218&x219)&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 3117U;
	volatile uint8_t x222 = 36U;
	int64_t x223 = INT64_MIN;
	static int32_t x224 = INT32_MIN;

	t55 = (x221==((x222&x223)&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	uint32_t x226 = 558151U;
	uint64_t x227 = 222105701704168LLU;
	static volatile int32_t t56 = 15;

	t56 = (x225==((x226&x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -216;
	int8_t x230 = INT8_MIN;
	static uint16_t x231 = 7244U;
	uint8_t x232 = 103U;
	volatile int32_t t57 = 2;

	t57 = (x229==((x230&x231)&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x235 = INT32_MAX;
	int16_t x236 = INT16_MAX;
	volatile int32_t t58 = -604938625;

	t58 = (x233==((x234&x235)&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	int64_t x238 = INT64_MIN;
	uint64_t x239 = 2076397217638LLU;
	static int16_t x240 = -1;
	volatile int32_t t59 = 470382268;

	t59 = (x237==((x238&x239)&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	volatile uint32_t x242 = UINT32_MAX;
	int32_t x243 = 8;
	uint8_t x244 = 2U;
	volatile int32_t t60 = 41310687;

	t60 = (x241==((x242&x243)&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 65904241U;
	int32_t x246 = 593995;
	int8_t x247 = INT8_MIN;
	int64_t x248 = -45LL;
	volatile int32_t t61 = -4872367;

	t61 = (x245==((x246&x247)&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MIN;
	uint8_t x250 = UINT8_MAX;
	static uint8_t x251 = 89U;
	int32_t t62 = -63202;

	t62 = (x249==((x250&x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	uint8_t x254 = UINT8_MAX;
	int32_t x255 = -27617110;
	uint16_t x256 = UINT16_MAX;
	int32_t t63 = 8293;

	t63 = (x253==((x254&x255)&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MAX;
	int32_t x258 = INT32_MAX;
	static int64_t x259 = INT64_MIN;
	static int32_t x260 = -1;
	int32_t t64 = 4910036;

	t64 = (x257==((x258&x259)&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = 76562860;
	static int64_t x263 = INT64_MIN;
	static int32_t t65 = 101179881;

	t65 = (x261==((x262&x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MAX;
	uint16_t x266 = UINT16_MAX;
	int32_t x267 = INT32_MIN;
	uint32_t x268 = 175201U;
	volatile int32_t t66 = 4600;

	t66 = (x265==((x266&x267)&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int32_t x271 = 227218;
	int32_t x272 = 232;
	volatile int32_t t67 = -73822444;

	t67 = (x269==((x270&x271)&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = 1U;
	int32_t x274 = INT32_MIN;
	volatile uint64_t x276 = UINT64_MAX;
	volatile int32_t t68 = 5;

	t68 = (x273==((x274&x275)&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -5;
	int16_t x278 = -1;
	int32_t x279 = INT32_MIN;
	uint64_t x280 = 2964108968LLU;

	t69 = (x277==((x278&x279)&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = 63233741;
	static int8_t x283 = -1;
	volatile int32_t t70 = 59188;

	t70 = (x281==((x282&x283)&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = 466175296;
	volatile int8_t x286 = -2;
	static int64_t x287 = INT64_MIN;
	static int8_t x288 = INT8_MIN;

	t71 = (x285==((x286&x287)&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x290 = -10;
	volatile uint8_t x291 = UINT8_MAX;
	volatile uint32_t x292 = 204797U;
	volatile int32_t t72 = 3769;

	t72 = (x289==((x290&x291)&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x294 = INT64_MAX;
	int8_t x295 = INT8_MAX;
	int32_t x296 = -1;
	static int32_t t73 = 803994107;

	t73 = (x293==((x294&x295)&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x298 = 7U;
	volatile int8_t x299 = INT8_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t74 = 225054866;

	t74 = (x297==((x298&x299)&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = -327978;
	uint32_t x303 = UINT32_MAX;
	volatile int64_t x304 = -116187819821LL;
	volatile int32_t t75 = -3;

	t75 = (x301==((x302&x303)&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = UINT16_MAX;
	static int32_t x306 = 910;
	int32_t x307 = -1;
	uint8_t x308 = 11U;

	t76 = (x305==((x306&x307)&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 6284842LL;
	int8_t x310 = INT8_MIN;
	int16_t x311 = -1;
	int8_t x312 = -13;
	static int32_t t77 = -231023;

	t77 = (x309==((x310&x311)&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 2U;
	int8_t x314 = -1;
	int64_t x315 = INT64_MAX;
	int32_t t78 = 17345;

	t78 = (x313==((x314&x315)&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	static int64_t x319 = INT64_MAX;
	volatile int32_t t79 = 622;

	t79 = (x317==((x318&x319)&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MAX;
	int32_t x322 = -985;
	volatile int8_t x323 = INT8_MAX;
	uint64_t x324 = 353622213832730LLU;
	volatile int32_t t80 = 73;

	t80 = (x321==((x322&x323)&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 5304U;
	int32_t x326 = -1618;
	static uint32_t x327 = 848510U;
	int16_t x328 = 929;
	static int32_t t81 = -3352;

	t81 = (x325==((x326&x327)&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 0LLU;
	int8_t x331 = INT8_MIN;
	int32_t t82 = -22995690;

	t82 = (x329==((x330&x331)&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = UINT64_MAX;
	int64_t x334 = INT64_MIN;
	int8_t x335 = 39;
	int8_t x336 = 4;
	volatile int32_t t83 = -20741;

	t83 = (x333==((x334&x335)&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MIN;
	uint8_t x339 = UINT8_MAX;
	uint8_t x340 = 1U;

	t84 = (x337==((x338&x339)&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = -3;
	static uint16_t x342 = 18U;
	static volatile int16_t x343 = INT16_MAX;
	static volatile int32_t t85 = -1;

	t85 = (x341==((x342&x343)&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = -126283092269170LL;
	static volatile int16_t x346 = INT16_MAX;
	uint32_t x348 = UINT32_MAX;

	t86 = (x345==((x346&x347)&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = UINT32_MAX;
	static int64_t x351 = INT64_MIN;
	int16_t x352 = 0;

	t87 = (x349==((x350&x351)&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1365;
	volatile int16_t x355 = 2624;
	uint32_t x356 = UINT32_MAX;
	int32_t t88 = 2317;

	t88 = (x353==((x354&x355)&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	uint8_t x358 = 7U;
	int32_t x359 = -1;
	volatile int64_t x360 = 4120736060524373895LL;

	t89 = (x357==((x358&x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x362 = UINT64_MAX;
	int64_t x363 = -1143989853055449213LL;
	uint64_t x364 = 227409389LLU;
	int32_t t90 = 3475;

	t90 = (x361==((x362&x363)&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = 3LL;
	volatile int16_t x367 = INT16_MAX;
	volatile int32_t t91 = -23725967;

	t91 = (x365==((x366&x367)&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x369 = UINT64_MAX;
	int32_t x370 = INT32_MIN;
	uint32_t x371 = UINT32_MAX;
	volatile int32_t t92 = -3772;

	t92 = (x369==((x370&x371)&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x373 = UINT64_MAX;
	int8_t x374 = INT8_MAX;
	static volatile int8_t x375 = -46;
	volatile int64_t x376 = -635LL;
	int32_t t93 = 1040470;

	t93 = (x373==((x374&x375)&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 301U;
	int16_t x378 = 2026;
	uint8_t x379 = UINT8_MAX;
	int64_t x380 = INT64_MIN;
	static int32_t t94 = -1;

	t94 = (x377==((x378&x379)&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 0LLU;
	uint16_t x382 = 4634U;
	int8_t x383 = INT8_MAX;
	static volatile int32_t t95 = 473353;

	t95 = (x381==((x382&x383)&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -60;
	int8_t x387 = 48;
	volatile uint64_t x388 = 1904LLU;
	int32_t t96 = 13;

	t96 = (x385==((x386&x387)&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = INT8_MAX;
	int8_t x390 = -1;
	uint64_t x391 = 30239276494210074LLU;
	int16_t x392 = INT16_MIN;
	static volatile int32_t t97 = 19102;

	t97 = (x389==((x390&x391)&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 510U;
	int8_t x394 = INT8_MAX;
	int8_t x395 = 7;
	uint8_t x396 = 1U;
	static int32_t t98 = 9;

	t98 = (x393==((x394&x395)&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 57270953305575192LL;
	int8_t x398 = INT8_MIN;
	volatile int32_t x399 = INT32_MAX;
	static int8_t x400 = INT8_MAX;

	t99 = (x397==((x398&x399)&x400));

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


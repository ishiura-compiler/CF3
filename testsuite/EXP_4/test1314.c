#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x7 = UINT64_MAX;
static volatile int64_t x9 = -1LL;
uint64_t x14 = 46511522025075607LLU;
uint32_t x15 = 594486100U;
int64_t x16 = INT64_MIN;
volatile uint64_t t4 = 15648246023488832LLU;
static int32_t x30 = 25;
int32_t t7 = -92795452;
static volatile int8_t x37 = INT8_MIN;
volatile int64_t x38 = INT64_MAX;
volatile int64_t t9 = 6618022LL;
int16_t x41 = INT16_MAX;
uint8_t x49 = UINT8_MAX;
static volatile int16_t x58 = -1;
int16_t x64 = 1392;
uint64_t x70 = 18469165841533274LLU;
volatile int16_t x72 = -1;
volatile uint8_t x73 = 7U;
uint32_t x75 = 940393069U;
uint64_t x76 = UINT64_MAX;
int8_t x80 = INT8_MIN;
volatile int32_t t19 = -151;
static int64_t x91 = -1LL;
uint64_t t22 = 4724971LLU;
int8_t x100 = 1;
int32_t t25 = 1405079;
int8_t x108 = 0;
uint64_t x109 = UINT64_MAX;
int8_t x114 = 15;
static int8_t x115 = -1;
int8_t x117 = -2;
int64_t x120 = INT64_MIN;
int32_t t29 = 54548731;
int8_t x128 = INT8_MAX;
uint32_t x132 = 53364U;
uint32_t x140 = UINT32_MAX;
volatile int64_t t34 = 98487266790265193LL;
int32_t x141 = INT32_MIN;
uint64_t x143 = 816732213159372527LLU;
volatile int32_t t35 = INT32_MIN;
volatile int32_t x148 = 29010;
uint32_t x151 = 1009119U;
int16_t x153 = INT16_MIN;
uint8_t x155 = UINT8_MAX;
int64_t x162 = 1810LL;
volatile int16_t x163 = INT16_MAX;
volatile int32_t x167 = -401;
uint32_t t41 = 772U;
int64_t x170 = INT64_MIN;
int32_t x171 = INT32_MAX;
volatile uint64_t x175 = 796678422538LLU;
int16_t x176 = INT16_MIN;
int8_t x185 = -1;
static uint8_t x216 = 20U;
volatile int32_t t55 = 12;
int16_t x228 = 4821;
int16_t x238 = -1;
int8_t x239 = -4;
volatile int32_t t59 = 1;
static uint64_t x244 = UINT64_MAX;
uint8_t x248 = 15U;
uint32_t x250 = 2024793975U;
int32_t x251 = 9;
uint32_t x257 = 16619U;
int8_t x261 = 3;
int8_t x264 = INT8_MIN;
volatile uint8_t x277 = UINT8_MAX;
int8_t x281 = INT8_MAX;
volatile int32_t x286 = INT32_MAX;
int64_t x299 = -178LL;
static uint16_t x304 = 8U;
uint8_t x306 = UINT8_MAX;
volatile int32_t t77 = -475;
uint8_t x315 = 3U;
static uint32_t x317 = UINT32_MAX;
volatile int8_t x320 = INT8_MIN;
static int64_t x329 = -212545575LL;
volatile int8_t x337 = -6;
int32_t x351 = 264;
volatile int32_t t88 = INT32_MIN;
static uint16_t x358 = UINT16_MAX;
volatile int32_t t89 = -1062411462;
volatile int32_t x362 = -1;
static uint8_t x365 = 119U;
int16_t x371 = INT16_MIN;
int64_t x376 = INT64_MAX;
volatile int64_t t93 = 13360LL;
static uint32_t x378 = UINT32_MAX;
int8_t x379 = INT8_MAX;
int16_t x391 = 0;
int8_t x393 = 1;


void f0(void) {
	static uint16_t x1 = 5404U;
	volatile uint32_t x2 = UINT32_MAX;
	static int16_t x3 = -18;
	uint16_t x4 = 121U;
	volatile uint32_t t0 = 10533234U;

	t0 = (x1+(x2&(x3==x4)));

	if (t0 != 5404U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 464U;
	int32_t x6 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 6493282;

	t1 = (x5+(x6&(x7==x8)));

	if (t1 != 464) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MAX;
	static uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MIN;
	int64_t t2 = 202142LL;

	t2 = (x9+(x10&(x11==x12)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 10;
	volatile uint64_t t3 = 9388493239611LLU;

	t3 = (x13+(x14&(x15==x16)));

	if (t3 != 10LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 31U;
	volatile uint64_t x18 = UINT64_MAX;
	uint32_t x19 = 2885U;
	uint16_t x20 = UINT16_MAX;

	t4 = (x17+(x18&(x19==x20)));

	if (t4 != 31LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -11119;
	int64_t x22 = -312653LL;
	static int64_t x23 = INT64_MIN;
	static int32_t x24 = INT32_MIN;
	volatile int64_t t5 = 16055752LL;

	t5 = (x21+(x22&(x23==x24)));

	if (t5 != -11119LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	uint32_t x26 = 702420773U;
	int16_t x27 = 26;
	uint32_t x28 = UINT32_MAX;
	uint32_t t6 = 0U;

	t6 = (x25+(x26&(x27==x28)));

	if (t6 != 4294934528U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	volatile int16_t x31 = INT16_MAX;
	int32_t x32 = INT32_MIN;

	t7 = (x29+(x30&(x31==x32)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 4182;
	volatile uint64_t x34 = 112899761689408518LLU;
	int8_t x35 = 0;
	static int32_t x36 = INT32_MAX;
	static volatile uint64_t t8 = 1685171819554740571LLU;

	t8 = (x33+(x34&(x35==x36)));

	if (t8 != 4182LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x39 = 13U;
	int64_t x40 = -1LL;

	t9 = (x37+(x38&(x39==x40)));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	static int64_t x43 = 238277500431681365LL;
	uint64_t x44 = 3556699976LLU;
	int32_t t10 = -9670;

	t10 = (x41+(x42&(x43==x44)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 2176340168861089LLU;
	uint32_t x46 = UINT32_MAX;
	uint32_t x47 = UINT32_MAX;
	static uint32_t x48 = 194107055U;
	volatile uint64_t t11 = 1583LLU;

	t11 = (x45+(x46&(x47==x48)));

	if (t11 != 2176340168861089LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = 19U;
	int32_t x51 = INT32_MIN;
	int64_t x52 = -1LL;
	static int32_t t12 = -6204;

	t12 = (x49+(x50&(x51==x52)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 5850134U;
	uint8_t x54 = 1U;
	static int32_t x55 = -456652786;
	uint32_t x56 = 4857736U;
	volatile uint32_t t13 = 10804U;

	t13 = (x53+(x54&(x55==x56)));

	if (t13 != 5850134U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	static int16_t x59 = -1;
	int8_t x60 = 1;
	int32_t t14 = -30212;

	t14 = (x57+(x58&(x59==x60)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int64_t x62 = -5878030LL;
	int8_t x63 = -3;
	int64_t t15 = 10698LL;

	t15 = (x61+(x62&(x63==x64)));

	if (t15 != 2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 1;
	uint16_t x66 = 13U;
	volatile uint32_t x67 = 1081U;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 0;

	t16 = (x65+(x66&(x67==x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 2;
	static volatile int64_t x71 = -1LL;
	uint64_t t17 = 15632565873050LLU;

	t17 = (x69+(x70&(x71==x72)));

	if (t17 != 2LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = 72;
	int32_t t18 = 0;

	t18 = (x73+(x74&(x75==x76)));

	if (t18 != 7) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -1;
	int16_t x78 = INT16_MIN;
	int16_t x79 = INT16_MIN;

	t19 = (x77+(x78&(x79==x80)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MAX;
	static int64_t x84 = -1LL;
	volatile int64_t t20 = -2468LL;

	t20 = (x81+(x82&(x83==x84)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	int8_t x86 = -1;
	volatile int16_t x87 = -1;
	int64_t x88 = -8LL;
	int32_t t21 = -123;

	t21 = (x85+(x86&(x87==x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x89 = INT8_MIN;
	volatile uint64_t x90 = 589047424LLU;
	uint8_t x92 = UINT8_MAX;

	t22 = (x89+(x90&(x91==x92)));

	if (t22 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MAX;
	int16_t x94 = INT16_MIN;
	volatile int64_t x95 = INT64_MIN;
	static int64_t x96 = INT64_MIN;
	int32_t t23 = 24556254;

	t23 = (x93+(x94&(x95==x96)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = -1;
	static int16_t x98 = -6940;
	static int16_t x99 = -1;
	volatile int32_t t24 = 1;

	t24 = (x97+(x98&(x99==x100)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	int16_t x102 = -1;
	static volatile int32_t x103 = INT32_MIN;
	uint16_t x104 = 3925U;

	t25 = (x101+(x102&(x103==x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x105 = UINT32_MAX;
	uint64_t x106 = 3801362222728812LLU;
	static uint16_t x107 = 3U;
	uint64_t t26 = 469321LLU;

	t26 = (x105+(x106&(x107==x108)));

	if (t26 != 4294967295LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x110 = 7938;
	volatile int8_t x111 = 6;
	int8_t x112 = 54;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (x109+(x110&(x111==x112)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = -12;
	volatile int64_t x116 = -286346753319LL;
	static int32_t t28 = -6360539;

	t28 = (x113+(x114&(x115==x116)));

	if (t28 != -12) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = INT32_MAX;
	volatile int64_t x119 = INT64_MIN;

	t29 = (x117+(x118&(x119==x120)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 4864LLU;
	volatile uint8_t x122 = 12U;
	int32_t x123 = INT32_MAX;
	int16_t x124 = -5;
	static uint64_t t30 = 6334LLU;

	t30 = (x121+(x122&(x123==x124)));

	if (t30 != 4864LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int8_t x126 = INT8_MIN;
	volatile int64_t x127 = INT64_MIN;
	int32_t t31 = -1;

	t31 = (x125+(x126&(x127==x128)));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 4237247U;
	static volatile int16_t x130 = 8551;
	uint32_t x131 = 12166U;
	uint32_t t32 = 25940317U;

	t32 = (x129+(x130&(x131==x132)));

	if (t32 != 4237247U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	uint8_t x134 = UINT8_MAX;
	uint32_t x135 = UINT32_MAX;
	static uint64_t x136 = 41LLU;
	int32_t t33 = 43;

	t33 = (x133+(x134&(x135==x136)));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 3U;
	static volatile int64_t x138 = 12LL;
	int16_t x139 = -10354;

	t34 = (x137+(x138&(x139==x140)));

	if (t34 != 3LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x142 = -1;
	int16_t x144 = INT16_MIN;

	t35 = (x141+(x142&(x143==x144)));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	static int64_t x146 = INT64_MIN;
	uint16_t x147 = 1861U;
	int64_t t36 = INT64_MIN;

	t36 = (x145+(x146&(x147==x148)));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MIN;
	static int16_t x150 = -1;
	volatile uint64_t x152 = 147760592LLU;
	static volatile int64_t t37 = INT64_MIN;

	t37 = (x149+(x150&(x151==x152)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x154 = INT64_MIN;
	uint8_t x156 = 1U;
	int64_t t38 = -1LL;

	t38 = (x153+(x154&(x155==x156)));

	if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x157 = 27570U;
	static int32_t x158 = INT32_MIN;
	uint16_t x159 = 2U;
	uint16_t x160 = 14U;
	volatile int32_t t39 = -1;

	t39 = (x157+(x158&(x159==x160)));

	if (t39 != 27570) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = UINT32_MAX;
	int64_t x164 = INT64_MIN;
	int64_t t40 = -542029LL;

	t40 = (x161+(x162&(x163==x164)));

	if (t40 != 4294967295LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 263508131U;
	int16_t x166 = 15;
	uint32_t x168 = UINT32_MAX;

	t41 = (x165+(x166&(x167==x168)));

	if (t41 != 263508131U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = INT64_MAX;
	volatile int8_t x172 = INT8_MIN;
	static int64_t t42 = INT64_MAX;

	t42 = (x169+(x170&(x171==x172)));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	int8_t x174 = 0;
	static int32_t t43 = INT32_MIN;

	t43 = (x173+(x174&(x175==x176)));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x177 = 69U;
	uint32_t x178 = 102774844U;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MAX;
	uint32_t t44 = 45U;

	t44 = (x177+(x178&(x179==x180)));

	if (t44 != 69U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = 964;
	volatile int64_t x182 = INT64_MIN;
	static int8_t x183 = INT8_MIN;
	volatile int8_t x184 = INT8_MAX;
	static volatile int64_t t45 = 48532798LL;

	t45 = (x181+(x182&(x183==x184)));

	if (t45 != 964LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = INT32_MAX;
	static int8_t x187 = INT8_MIN;
	uint8_t x188 = 39U;
	volatile int32_t t46 = 6497583;

	t46 = (x185+(x186&(x187==x188)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	uint8_t x190 = 2U;
	static uint16_t x191 = 14U;
	int32_t x192 = INT32_MIN;
	static int64_t t47 = INT64_MAX;

	t47 = (x189+(x190&(x191==x192)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -17;
	static volatile int8_t x194 = 1;
	int16_t x195 = 4654;
	int64_t x196 = 4593481827260LL;
	static int32_t t48 = -292;

	t48 = (x193+(x194&(x195==x196)));

	if (t48 != -17) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 27400U;
	int8_t x198 = -2;
	int32_t x199 = INT32_MAX;
	int8_t x200 = INT8_MIN;
	int32_t t49 = -1835534;

	t49 = (x197+(x198&(x199==x200)));

	if (t49 != 27400) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 20U;
	int8_t x202 = INT8_MIN;
	int8_t x203 = -1;
	uint64_t x204 = 30057431254327LLU;
	static int32_t t50 = -943202;

	t50 = (x201+(x202&(x203==x204)));

	if (t50 != 20) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 1606813522590LLU;
	volatile int32_t x206 = -1;
	volatile uint16_t x207 = 2464U;
	volatile int16_t x208 = INT16_MAX;
	uint64_t t51 = 11742144906604LLU;

	t51 = (x205+(x206&(x207==x208)));

	if (t51 != 1606813522590LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x209 = 10340500U;
	int32_t x210 = INT32_MAX;
	uint32_t x211 = 1390U;
	int16_t x212 = -289;
	uint32_t t52 = 319732482U;

	t52 = (x209+(x210&(x211==x212)));

	if (t52 != 10340500U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = INT32_MAX;
	volatile int8_t x214 = -27;
	int64_t x215 = INT64_MIN;
	int32_t t53 = INT32_MAX;

	t53 = (x213+(x214&(x215==x216)));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 65U;
	int16_t x218 = 0;
	int16_t x219 = 0;
	volatile uint16_t x220 = UINT16_MAX;
	volatile uint32_t t54 = 131U;

	t54 = (x217+(x218&(x219==x220)));

	if (t54 != 65U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -8;
	volatile uint8_t x222 = 3U;
	uint64_t x223 = 97171586787750LLU;
	int16_t x224 = -1;

	t55 = (x221+(x222&(x223==x224)));

	if (t55 != -8) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = -1;
	int32_t x226 = INT32_MAX;
	static int64_t x227 = -1LL;
	volatile int32_t t56 = 120676248;

	t56 = (x225+(x226&(x227==x228)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int64_t x230 = INT64_MIN;
	int8_t x231 = -60;
	static uint16_t x232 = 0U;
	int64_t t57 = 5054761579400LL;

	t57 = (x229+(x230&(x231==x232)));

	if (t57 != -2147483648LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x233 = 11U;
	static uint8_t x234 = 1U;
	volatile int32_t x235 = INT32_MIN;
	static int32_t x236 = INT32_MIN;
	volatile int32_t t58 = 9;

	t58 = (x233+(x234&(x235==x236)));

	if (t58 != 12) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	static uint16_t x240 = 3U;

	t59 = (x237+(x238&(x239==x240)));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	uint16_t x242 = UINT16_MAX;
	int8_t x243 = 60;
	static int32_t t60 = 560708552;

	t60 = (x241+(x242&(x243==x244)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	uint8_t x246 = 33U;
	int64_t x247 = INT64_MIN;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (x245+(x246&(x247==x248)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	uint16_t x252 = 16U;
	uint32_t t62 = 2U;

	t62 = (x249+(x250&(x251==x252)));

	if (t62 != 2147483648U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x253 = 240981124U;
	int8_t x254 = -1;
	int32_t x255 = INT32_MAX;
	uint64_t x256 = 2971529238LLU;
	uint32_t t63 = 1880909855U;

	t63 = (x253+(x254&(x255==x256)));

	if (t63 != 240981124U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x258 = INT64_MAX;
	int64_t x259 = INT64_MAX;
	volatile int32_t x260 = -1;
	volatile int64_t t64 = 70677293686LL;

	t64 = (x257+(x258&(x259==x260)));

	if (t64 != 16619LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x262 = 3U;
	int16_t x263 = INT16_MIN;
	int32_t t65 = 757;

	t65 = (x261+(x262&(x263==x264)));

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static int16_t x266 = -1;
	int16_t x267 = -1;
	int16_t x268 = 1399;
	int64_t t66 = INT64_MIN;

	t66 = (x265+(x266&(x267==x268)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = INT32_MAX;
	int8_t x270 = 1;
	int16_t x271 = 0;
	static uint8_t x272 = UINT8_MAX;
	static int32_t t67 = INT32_MAX;

	t67 = (x269+(x270&(x271==x272)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = 11U;
	uint16_t x274 = 11276U;
	int16_t x275 = INT16_MIN;
	uint64_t x276 = 5410905892LLU;
	static volatile int32_t t68 = -1651610;

	t68 = (x273+(x274&(x275==x276)));

	if (t68 != 11) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = UINT8_MAX;
	int64_t x279 = INT64_MIN;
	volatile int8_t x280 = -6;
	volatile int32_t t69 = 7740;

	t69 = (x277+(x278&(x279==x280)));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = -449;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = INT64_MAX;
	volatile int32_t t70 = -743928;

	t70 = (x281+(x282&(x283==x284)));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int64_t x287 = -1LL;
	static int64_t x288 = -64385242653037LL;
	volatile int32_t t71 = -7;

	t71 = (x285+(x286&(x287==x288)));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	volatile int16_t x290 = -1;
	uint8_t x291 = 1U;
	int8_t x292 = -1;
	int32_t t72 = INT32_MIN;

	t72 = (x289+(x290&(x291==x292)));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = 1;
	volatile int8_t x294 = INT8_MIN;
	volatile int8_t x295 = INT8_MIN;
	uint64_t x296 = UINT64_MAX;
	int32_t t73 = -1;

	t73 = (x293+(x294&(x295==x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int32_t x298 = 27;
	int16_t x300 = -82;
	volatile int32_t t74 = -2;

	t74 = (x297+(x298&(x299==x300)));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = INT16_MAX;
	int16_t x302 = INT16_MIN;
	uint8_t x303 = 6U;
	volatile int32_t t75 = 809601;

	t75 = (x301+(x302&(x303==x304)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	int64_t x307 = -567760940591733123LL;
	volatile int8_t x308 = 25;
	static int32_t t76 = -7;

	t76 = (x305+(x306&(x307==x308)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 0U;
	int16_t x310 = -1;
	volatile uint16_t x311 = 6301U;
	int16_t x312 = INT16_MAX;

	t77 = (x309+(x310&(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 508497149U;
	volatile uint8_t x314 = UINT8_MAX;
	uint8_t x316 = 2U;
	volatile uint32_t t78 = 160002U;

	t78 = (x313+(x314&(x315==x316)));

	if (t78 != 508497149U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x318 = 3954;
	volatile int64_t x319 = 26369861142877LL;
	static volatile uint32_t t79 = UINT32_MAX;

	t79 = (x317+(x318&(x319==x320)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -53;
	int64_t x322 = 2810319368043LL;
	uint8_t x323 = 2U;
	static int64_t x324 = INT64_MIN;
	int64_t t80 = -160651LL;

	t80 = (x321+(x322&(x323==x324)));

	if (t80 != -53LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	int32_t x326 = INT32_MIN;
	uint64_t x327 = 1LLU;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = 1371;

	t81 = (x325+(x326&(x327==x328)));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x330 = UINT8_MAX;
	int64_t x331 = INT64_MIN;
	volatile int64_t x332 = INT64_MAX;
	volatile int64_t t82 = 763LL;

	t82 = (x329+(x330&(x331==x332)));

	if (t82 != -212545575LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	int64_t x334 = -1365871716339LL;
	static volatile int64_t x335 = INT64_MAX;
	int64_t x336 = -1LL;
	int64_t t83 = -3066074768423684LL;

	t83 = (x333+(x334&(x335==x336)));

	if (t83 != -32768LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MAX;
	static int16_t x340 = 156;
	static volatile int32_t t84 = -12089;

	t84 = (x337+(x338&(x339==x340)));

	if (t84 != -6) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x341 = 4U;
	volatile int32_t x342 = -1;
	uint32_t x343 = 13U;
	uint8_t x344 = 24U;
	volatile int32_t t85 = 30387;

	t85 = (x341+(x342&(x343==x344)));

	if (t85 != 4) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = -1;
	uint8_t x346 = UINT8_MAX;
	volatile int64_t x347 = -1LL;
	uint16_t x348 = 12U;
	int32_t t86 = -28037;

	t86 = (x345+(x346&(x347==x348)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = -1LL;
	static int32_t x350 = -1;
	int64_t x352 = INT64_MAX;
	volatile int64_t t87 = 19956164LL;

	t87 = (x349+(x350&(x351==x352)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	int16_t x354 = INT16_MIN;
	uint16_t x355 = 581U;
	uint8_t x356 = 2U;

	t88 = (x353+(x354&(x355==x356)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MIN;
	int32_t x359 = INT32_MIN;
	volatile int8_t x360 = INT8_MIN;

	t89 = (x357+(x358&(x359==x360)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -1;
	int64_t x363 = INT64_MIN;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 853518441;

	t90 = (x361+(x362&(x363==x364)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x366 = 57221446U;
	uint16_t x367 = 0U;
	uint16_t x368 = 5987U;
	uint32_t t91 = 1845436U;

	t91 = (x365+(x366&(x367==x368)));

	if (t91 != 119U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int64_t x370 = -3038822941907268LL;
	uint64_t x372 = UINT64_MAX;
	static volatile int64_t t92 = -1141855751875361LL;

	t92 = (x369+(x370&(x371==x372)));

	if (t92 != -128LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 4026LL;
	int64_t x374 = INT64_MIN;
	static uint16_t x375 = 1U;

	t93 = (x373+(x374&(x375==x376)));

	if (t93 != 4026LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	static int64_t x380 = INT64_MIN;
	volatile uint32_t t94 = 21U;

	t94 = (x377+(x378&(x379==x380)));

	if (t94 != 65535U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	volatile int16_t x382 = INT16_MIN;
	int32_t x383 = -46;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t95 = -451;

	t95 = (x381+(x382&(x383==x384)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	static volatile int8_t x386 = 0;
	int8_t x387 = INT8_MAX;
	uint64_t x388 = 28458568216317LLU;
	int32_t t96 = 0;

	t96 = (x385+(x386&(x387==x388)));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 3;
	uint32_t x390 = 6U;
	uint32_t x392 = 197600U;
	uint32_t t97 = 194U;

	t97 = (x389+(x390&(x391==x392)));

	if (t97 != 3U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = 74;
	static int64_t x395 = -65793844012602908LL;
	static int32_t x396 = 27027;
	static int32_t t98 = -325;

	t98 = (x393+(x394&(x395==x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 0;
	int64_t x398 = INT64_MIN;
	volatile int8_t x399 = INT8_MAX;
	volatile int16_t x400 = INT16_MAX;
	int64_t t99 = 4393714843668878022LL;

	t99 = (x397+(x398&(x399==x400)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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


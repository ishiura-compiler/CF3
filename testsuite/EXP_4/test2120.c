#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MIN;
int16_t x6 = 66;
static volatile int32_t t1 = -17;
uint16_t x11 = 62U;
int32_t x12 = -1;
int32_t x20 = INT32_MIN;
volatile int32_t x27 = -134;
static int16_t x29 = 19;
static uint16_t x43 = 1012U;
static int32_t x44 = INT32_MIN;
uint64_t x56 = 14LLU;
int64_t x57 = -1LL;
uint32_t x58 = UINT32_MAX;
int32_t x59 = -1;
volatile int32_t x60 = INT32_MIN;
int64_t t14 = 295429897LL;
uint32_t x61 = 13U;
uint8_t x64 = UINT8_MAX;
volatile int32_t t16 = INT32_MIN;
int32_t x70 = INT32_MIN;
int32_t x74 = INT32_MIN;
uint64_t x81 = 1690LLU;
int32_t x83 = INT32_MIN;
uint64_t t20 = 2007987724386764909LLU;
static volatile int16_t x85 = -1;
int64_t x86 = INT64_MIN;
static int8_t x87 = INT8_MIN;
int64_t x96 = INT64_MAX;
volatile int64_t t24 = INT64_MIN;
static int64_t x101 = INT64_MIN;
volatile uint16_t x103 = 18887U;
int64_t t25 = INT64_MIN;
volatile int8_t x107 = 0;
volatile uint64_t t26 = UINT64_MAX;
uint32_t x112 = UINT32_MAX;
int8_t x119 = 13;
uint64_t x121 = 10197798LLU;
static int64_t x124 = INT64_MIN;
int32_t x125 = INT32_MAX;
int32_t t33 = -87;
static int32_t x139 = -7751;
static int16_t x147 = INT16_MIN;
int8_t x159 = INT8_MIN;
static uint8_t x161 = UINT8_MAX;
int32_t x163 = -84;
int32_t t40 = -4025175;
static uint8_t x169 = 7U;
volatile int64_t x172 = INT64_MAX;
volatile int16_t x182 = INT16_MIN;
int32_t t46 = -19953;
int32_t x193 = INT32_MIN;
volatile uint16_t x199 = 476U;
volatile uint64_t t53 = UINT64_MAX;
volatile uint32_t t54 = 654714U;
volatile uint8_t x224 = UINT8_MAX;
volatile int32_t t55 = INT32_MAX;
uint32_t x227 = 0U;
int64_t t57 = INT64_MIN;
int8_t x238 = INT8_MIN;
int32_t x242 = INT32_MIN;
int8_t x244 = -1;
volatile int64_t x252 = -5201439723LL;
uint64_t t62 = UINT64_MAX;
int16_t x253 = -1;
static int16_t x255 = INT16_MIN;
int64_t x257 = -274102666826204LL;
static volatile int16_t x260 = INT16_MIN;
int16_t x262 = INT16_MIN;
static volatile int32_t t65 = -666;
int64_t x269 = -1LL;
int16_t x271 = INT16_MIN;
uint16_t x275 = UINT16_MAX;
static int64_t t68 = INT64_MIN;
int16_t x277 = 397;
int64_t x283 = -1LL;
static uint8_t x294 = UINT8_MAX;
static int8_t x295 = INT8_MIN;
static int64_t t73 = 1204243942438591366LL;
uint64_t x301 = 2642LLU;
uint8_t x302 = 20U;
static int32_t x304 = INT32_MIN;
int8_t x305 = 55;
volatile int64_t x308 = -9205866LL;
int32_t x318 = INT32_MAX;
static volatile uint16_t x320 = 2U;
int64_t t79 = -3970LL;
uint16_t x323 = 0U;
int32_t t81 = -3245;
int16_t x329 = -99;
volatile uint8_t x330 = UINT8_MAX;
volatile int32_t x335 = INT32_MIN;
int16_t x338 = -1;
uint8_t x343 = 1U;
static int32_t t85 = 15679140;
int8_t x346 = INT8_MAX;
volatile uint32_t x347 = 4U;
uint8_t x348 = 0U;
int32_t x351 = -89;
int16_t x355 = INT16_MIN;
int32_t x359 = INT32_MAX;
uint64_t x365 = UINT64_MAX;
int16_t x369 = 9488;
volatile int8_t x372 = INT8_MIN;
int8_t x374 = INT8_MIN;
uint32_t t93 = 16U;
int32_t x378 = -228;
static volatile int32_t x380 = INT32_MIN;
int32_t t95 = -1;
volatile int16_t x391 = -1;
static volatile int8_t x393 = INT8_MIN;
int8_t x396 = INT8_MIN;


void f0(void) {
	volatile int16_t x1 = -1;
	static int16_t x2 = -4;
	uint32_t x3 = UINT32_MAX;
	int32_t t0 = 3;

	t0 = (x1+(x2==(x3^x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 9;
	uint8_t x7 = UINT8_MAX;
	uint8_t x8 = 1U;

	t1 = (x5+(x6==(x7^x8)));

	if (t1 != 9) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 61U;
	static volatile int32_t x10 = -224816;
	int32_t t2 = -4910;

	t2 = (x9+(x10==(x11^x12)));

	if (t2 != 61) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 1467579LLU;
	int8_t x14 = 1;
	static int16_t x15 = -140;
	int16_t x16 = -1;
	uint64_t t3 = 558748716089LLU;

	t3 = (x13+(x14==(x15^x16)));

	if (t3 != 1467579LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MAX;
	uint8_t x18 = 0U;
	int32_t x19 = -1;
	int64_t t4 = INT64_MAX;

	t4 = (x17+(x18==(x19^x20)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	static volatile int32_t x22 = 15;
	int32_t x23 = INT32_MIN;
	static int64_t x24 = -22055679474LL;
	int64_t t5 = INT64_MAX;

	t5 = (x21+(x22==(x23^x24)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int32_t x26 = 150;
	int8_t x28 = -2;
	uint32_t t6 = UINT32_MAX;

	t6 = (x25+(x26==(x27^x28)));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x30 = 6LL;
	uint64_t x31 = 303LLU;
	int8_t x32 = -1;
	static volatile int32_t t7 = 1743737;

	t7 = (x29+(x30==(x31^x32)));

	if (t7 != 19) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	volatile int64_t x34 = INT64_MAX;
	static uint32_t x35 = 897074U;
	int64_t x36 = INT64_MIN;
	int32_t t8 = 88;

	t8 = (x33+(x34==(x35^x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -22;
	volatile uint32_t x38 = 6591907U;
	static uint8_t x39 = 122U;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t9 = 11;

	t9 = (x37+(x38==(x39^x40)));

	if (t9 != -22) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int64_t x42 = -37391382794125970LL;
	static int32_t t10 = INT32_MIN;

	t10 = (x41+(x42==(x43^x44)));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int16_t x46 = 146;
	int32_t x47 = -2;
	uint32_t x48 = 932U;
	volatile int32_t t11 = -118;

	t11 = (x45+(x46==(x47^x48)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x50 = INT8_MIN;
	static int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t12 = 4252;

	t12 = (x49+(x50==(x51^x52)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = 7491721759595LL;
	int64_t x54 = -1LL;
	int8_t x55 = INT8_MIN;
	static int64_t t13 = -4209LL;

	t13 = (x53+(x54==(x55^x56)));

	if (t13 != 7491721759595LL) { NG(); } else { ; }
	
}

void f14(void) {


	t14 = (x57+(x58==(x59^x60)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = -308;
	uint16_t x63 = 0U;
	uint32_t t15 = 53137924U;

	t15 = (x61+(x62==(x63^x64)));

	if (t15 != 13U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = 1;
	int64_t x67 = INT64_MAX;
	static int16_t x68 = INT16_MIN;

	t16 = (x65+(x66==(x67^x68)));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int16_t x71 = -1;
	int16_t x72 = INT16_MAX;
	int32_t t17 = -98;

	t17 = (x69+(x70==(x71^x72)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	int16_t x75 = -1;
	volatile uint8_t x76 = 3U;
	static volatile int32_t t18 = 27;

	t18 = (x73+(x74==(x75^x76)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -8;
	int32_t x78 = -1;
	int32_t x79 = -1;
	int8_t x80 = -1;
	int32_t t19 = 11182;

	t19 = (x77+(x78==(x79^x80)));

	if (t19 != -8) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 75137552U;
	int32_t x84 = INT32_MIN;

	t20 = (x81+(x82==(x83^x84)));

	if (t20 != 1690LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x88 = INT16_MIN;
	static int32_t t21 = -23375;

	t21 = (x85+(x86==(x87^x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	int16_t x90 = -259;
	int8_t x91 = -1;
	volatile int16_t x92 = -397;
	int32_t t22 = INT32_MAX;

	t22 = (x89+(x90==(x91^x92)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = 1LLU;
	int16_t x94 = INT16_MAX;
	int8_t x95 = -1;
	static volatile uint64_t t23 = 10949787LLU;

	t23 = (x93+(x94==(x95^x96)));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	static int32_t x98 = -5493;
	static uint16_t x99 = 625U;
	int8_t x100 = INT8_MAX;

	t24 = (x97+(x98==(x99^x100)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = INT16_MIN;
	volatile int16_t x104 = -5;

	t25 = (x101+(x102==(x103^x104)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	int64_t x106 = -1LL;
	uint64_t x108 = 4762892140LLU;

	t26 = (x105+(x106==(x107^x108)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 31567200500LLU;
	int8_t x110 = INT8_MIN;
	uint16_t x111 = UINT16_MAX;
	volatile uint64_t t27 = 8605296684LLU;

	t27 = (x109+(x110==(x111^x112)));

	if (t27 != 31567200500LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -1;
	int16_t x114 = -1;
	uint64_t x115 = 3228676324648LLU;
	volatile int64_t x116 = INT64_MAX;
	static int32_t t28 = 3259429;

	t28 = (x113+(x114==(x115^x116)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MIN;
	int64_t x118 = INT64_MIN;
	static uint64_t x120 = 63270LLU;
	volatile int32_t t29 = -527815117;

	t29 = (x117+(x118==(x119^x120)));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = INT64_MIN;
	uint32_t x123 = 1U;
	uint64_t t30 = 212LLU;

	t30 = (x121+(x122==(x123^x124)));

	if (t30 != 10197798LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -1;
	uint64_t x127 = 20720865LLU;
	int32_t x128 = 57115560;
	int32_t t31 = INT32_MAX;

	t31 = (x125+(x126==(x127^x128)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MAX;
	int16_t x131 = INT16_MIN;
	int16_t x132 = 1235;
	volatile int32_t t32 = INT32_MIN;

	t32 = (x129+(x130==(x131^x132)));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MAX;
	uint64_t x134 = UINT64_MAX;
	int16_t x135 = INT16_MAX;
	int64_t x136 = 1LL;

	t33 = (x133+(x134==(x135^x136)));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 1;
	uint64_t x138 = 53LLU;
	uint16_t x140 = 108U;
	volatile int32_t t34 = 10908;

	t34 = (x137+(x138==(x139^x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	static uint32_t x142 = 4U;
	static int16_t x143 = 2995;
	int32_t x144 = -4678202;
	int64_t t35 = INT64_MAX;

	t35 = (x141+(x142==(x143^x144)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	static uint16_t x146 = 23420U;
	int8_t x148 = -27;
	volatile int32_t t36 = -16005520;

	t36 = (x145+(x146==(x147^x148)));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MAX;
	volatile uint16_t x151 = UINT16_MAX;
	volatile int8_t x152 = 0;
	static int32_t t37 = INT32_MIN;

	t37 = (x149+(x150==(x151^x152)));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 31617U;
	volatile int16_t x154 = INT16_MIN;
	int32_t x155 = -30829601;
	static uint16_t x156 = 0U;
	int32_t t38 = 2129199;

	t38 = (x153+(x154==(x155^x156)));

	if (t38 != 31617) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x157 = UINT64_MAX;
	static int8_t x158 = INT8_MIN;
	static int64_t x160 = -1795214313LL;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (x157+(x158==(x159^x160)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = -5;
	int32_t x164 = INT32_MIN;

	t40 = (x161+(x162==(x163^x164)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = -1LL;
	int32_t x166 = INT32_MAX;
	uint16_t x167 = 17108U;
	int32_t x168 = -11;
	static volatile int64_t t41 = 10311407986LL;

	t41 = (x165+(x166==(x167^x168)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x170 = UINT32_MAX;
	int8_t x171 = INT8_MIN;
	volatile int32_t t42 = -132346;

	t42 = (x169+(x170==(x171^x172)));

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int64_t x174 = -26168562LL;
	int64_t x175 = INT64_MAX;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = (x173+(x174==(x175^x176)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = 60U;
	static volatile uint64_t x178 = UINT64_MAX;
	int8_t x179 = INT8_MIN;
	int8_t x180 = 6;
	volatile int32_t t44 = -1;

	t44 = (x177+(x178==(x179^x180)));

	if (t44 != 60) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x181 = UINT16_MAX;
	int32_t x183 = INT32_MAX;
	static volatile uint64_t x184 = 1063150572799066LLU;
	volatile int32_t t45 = 10;

	t45 = (x181+(x182==(x183^x184)));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int64_t x186 = -1LL;
	volatile int64_t x187 = INT64_MAX;
	int32_t x188 = INT32_MIN;

	t46 = (x185+(x186==(x187^x188)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = -2;
	uint8_t x190 = 6U;
	static volatile int32_t x191 = INT32_MIN;
	uint64_t x192 = 28LLU;
	int32_t t47 = -14599151;

	t47 = (x189+(x190==(x191^x192)));

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = 106;
	uint16_t x195 = 24U;
	int16_t x196 = -1;
	static int32_t t48 = INT32_MIN;

	t48 = (x193+(x194==(x195^x196)));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x197 = 25455U;
	int64_t x198 = INT64_MIN;
	int16_t x200 = INT16_MAX;
	int32_t t49 = 1468781;

	t49 = (x197+(x198==(x199^x200)));

	if (t49 != 25455) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	static int16_t x202 = INT16_MAX;
	volatile int8_t x203 = -1;
	volatile uint32_t x204 = 377857539U;
	static int64_t t50 = INT64_MIN;

	t50 = (x201+(x202==(x203^x204)));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 60;
	int8_t x206 = INT8_MAX;
	int64_t x207 = -1LL;
	int16_t x208 = INT16_MIN;
	int32_t t51 = -1526187;

	t51 = (x205+(x206==(x207^x208)));

	if (t51 != 60) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -2258608022217LL;
	uint64_t x210 = 541116071221466LLU;
	uint16_t x211 = UINT16_MAX;
	uint8_t x212 = 8U;
	int64_t t52 = -1LL;

	t52 = (x209+(x210==(x211^x212)));

	if (t52 != -2258608022217LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = UINT64_MAX;
	static uint32_t x214 = 102300U;
	int32_t x215 = INT32_MIN;
	static uint32_t x216 = 2304U;

	t53 = (x213+(x214==(x215^x216)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 1656414270U;
	volatile int8_t x218 = -1;
	static int64_t x219 = INT64_MIN;
	int64_t x220 = INT64_MIN;

	t54 = (x217+(x218==(x219^x220)));

	if (t54 != 1656414270U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	int64_t x222 = -1LL;
	int32_t x223 = -1;

	t55 = (x221+(x222==(x223^x224)));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	static uint16_t x226 = UINT16_MAX;
	int32_t x228 = INT32_MIN;
	int64_t t56 = INT64_MIN;

	t56 = (x225+(x226==(x227^x228)));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = INT64_MIN;
	volatile int16_t x230 = -10;
	static volatile int64_t x231 = -1LL;
	static int32_t x232 = INT32_MIN;

	t57 = (x229+(x230==(x231^x232)));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 458101441999LLU;
	int64_t x234 = INT64_MIN;
	uint8_t x235 = UINT8_MAX;
	static volatile uint16_t x236 = 379U;
	uint64_t t58 = 916816343899045142LLU;

	t58 = (x233+(x234==(x235^x236)));

	if (t58 != 458101441999LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MAX;
	int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MAX;
	static int32_t t59 = -9;

	t59 = (x237+(x238==(x239^x240)));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	int32_t x243 = 7105646;
	int64_t t60 = INT64_MAX;

	t60 = (x241+(x242==(x243^x244)));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = -1LL;
	uint64_t x247 = UINT64_MAX;
	uint32_t x248 = UINT32_MAX;
	volatile int32_t t61 = -921548048;

	t61 = (x245+(x246==(x247^x248)));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int16_t x250 = INT16_MAX;
	volatile int32_t x251 = -1;

	t62 = (x249+(x250==(x251^x252)));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = -3965;
	int16_t x256 = INT16_MAX;
	volatile int32_t t63 = 0;

	t63 = (x253+(x254==(x255^x256)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = INT8_MIN;
	int16_t x259 = -1;
	volatile int64_t t64 = 1LL;

	t64 = (x257+(x258==(x259^x260)));

	if (t64 != -274102666826204LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	volatile int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MIN;

	t65 = (x261+(x262==(x263^x264)));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	int64_t x266 = -56720008791117257LL;
	static uint64_t x267 = 0LLU;
	int32_t x268 = INT32_MAX;
	static int32_t t66 = INT32_MAX;

	t66 = (x265+(x266==(x267^x268)));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = UINT8_MAX;
	volatile uint8_t x272 = UINT8_MAX;
	static int64_t t67 = 30665LL;

	t67 = (x269+(x270==(x271^x272)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int32_t x274 = INT32_MIN;
	uint64_t x276 = UINT64_MAX;

	t68 = (x273+(x274==(x275^x276)));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = INT32_MIN;
	uint16_t x279 = UINT16_MAX;
	uint32_t x280 = UINT32_MAX;
	int32_t t69 = 100282;

	t69 = (x277+(x278==(x279^x280)));

	if (t69 != 397) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = INT16_MIN;
	uint16_t x282 = 125U;
	static int8_t x284 = -24;
	int32_t t70 = -1;

	t70 = (x281+(x282==(x283^x284)));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = 5;
	int32_t x286 = 8197134;
	int16_t x287 = -40;
	int64_t x288 = -1411011LL;
	int32_t t71 = 1076;

	t71 = (x285+(x286==(x287^x288)));

	if (t71 != 5) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = INT16_MIN;
	uint64_t x290 = UINT64_MAX;
	static uint16_t x291 = UINT16_MAX;
	volatile int32_t x292 = INT32_MAX;
	volatile int32_t t72 = 67196;

	t72 = (x289+(x290==(x291^x292)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	volatile int16_t x296 = INT16_MIN;

	t73 = (x293+(x294==(x295^x296)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 2427;
	int32_t x298 = INT32_MAX;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = -1;
	int32_t t74 = 3537;

	t74 = (x297+(x298==(x299^x300)));

	if (t74 != 2427) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x303 = 1;
	static uint64_t t75 = 181149348515907LLU;

	t75 = (x301+(x302==(x303^x304)));

	if (t75 != 2642LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MIN;
	volatile int64_t x307 = 854489176902172844LL;
	static int32_t t76 = 0;

	t76 = (x305+(x306==(x307^x308)));

	if (t76 != 55) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = 1U;
	uint16_t x310 = 18U;
	int32_t x311 = 77;
	int32_t x312 = -1;
	volatile uint32_t t77 = 2139419U;

	t77 = (x309+(x310==(x311^x312)));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x313 = 1U;
	int8_t x314 = 15;
	int16_t x315 = -1;
	int64_t x316 = INT64_MIN;
	int32_t t78 = 941819896;

	t78 = (x313+(x314==(x315^x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	int8_t x319 = -1;

	t79 = (x317+(x318==(x319^x320)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 5686048U;
	uint32_t x322 = 674568U;
	int8_t x324 = 5;
	static volatile uint32_t t80 = 2U;

	t80 = (x321+(x322==(x323^x324)));

	if (t80 != 5686048U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MIN;
	int32_t x326 = -1;
	int32_t x327 = -16133075;
	static uint16_t x328 = UINT16_MAX;

	t81 = (x325+(x326==(x327^x328)));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x331 = UINT8_MAX;
	int32_t x332 = -1;
	int32_t t82 = -19512213;

	t82 = (x329+(x330==(x331^x332)));

	if (t82 != -99) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	volatile int64_t x334 = INT64_MIN;
	uint32_t x336 = UINT32_MAX;
	static volatile int32_t t83 = -254;

	t83 = (x333+(x334==(x335^x336)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 3890U;
	int64_t x339 = INT64_MIN;
	int16_t x340 = INT16_MIN;
	volatile int32_t t84 = 1808257;

	t84 = (x337+(x338==(x339^x340)));

	if (t84 != 3890) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x341 = 32535U;
	static int64_t x342 = -1LL;
	static volatile uint16_t x344 = 15921U;

	t85 = (x341+(x342==(x343^x344)));

	if (t85 != 32535) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = 4893628109563434654LLU;
	volatile uint64_t t86 = 260539012320LLU;

	t86 = (x345+(x346==(x347^x348)));

	if (t86 != 4893628109563434654LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	uint16_t x350 = 3U;
	uint64_t x352 = 188624940368699LLU;
	int32_t t87 = -120;

	t87 = (x349+(x350==(x351^x352)));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x353 = UINT8_MAX;
	uint64_t x354 = 1546821642562682LLU;
	int32_t x356 = INT32_MIN;
	volatile int32_t t88 = -24083;

	t88 = (x353+(x354==(x355^x356)));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -4;
	volatile uint16_t x358 = 1440U;
	static int8_t x360 = -1;
	volatile int32_t t89 = 163;

	t89 = (x357+(x358==(x359^x360)));

	if (t89 != -4) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	static int64_t x362 = -1LL;
	uint32_t x363 = 962U;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t90 = INT32_MIN;

	t90 = (x361+(x362==(x363^x364)));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x366 = INT32_MAX;
	int32_t x367 = -1;
	int64_t x368 = -1LL;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (x365+(x366==(x367^x368)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x370 = 55416635U;
	static volatile int32_t x371 = INT32_MIN;
	static int32_t t92 = -118513;

	t92 = (x369+(x370==(x371^x372)));

	if (t92 != 9488) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x373 = 245794469U;
	static int8_t x375 = -1;
	int64_t x376 = -1LL;

	t93 = (x373+(x374==(x375^x376)));

	if (t93 != 245794469U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MIN;
	static volatile int32_t x379 = -1742;
	volatile int32_t t94 = 193135581;

	t94 = (x377+(x378==(x379^x380)));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 0U;
	static int64_t x382 = -34314927LL;
	static uint8_t x383 = 0U;
	volatile int8_t x384 = 35;

	t95 = (x381+(x382==(x383^x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MAX;
	uint64_t x387 = UINT64_MAX;
	static int16_t x388 = 4089;
	int32_t t96 = 5800;

	t96 = (x385+(x386==(x387^x388)));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int32_t x390 = INT32_MIN;
	int64_t x392 = -1LL;
	int32_t t97 = -922622374;

	t97 = (x389+(x390==(x391^x392)));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = INT8_MAX;
	int16_t x395 = 1;
	volatile int32_t t98 = 484955;

	t98 = (x393+(x394==(x395^x396)));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 131U;
	static volatile int16_t x398 = INT16_MIN;
	static int8_t x399 = 0;
	uint8_t x400 = 99U;
	static volatile int32_t t99 = 88532;

	t99 = (x397+(x398==(x399^x400)));

	if (t99 != 131) { NG(); } else { ; }
	
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


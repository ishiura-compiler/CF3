#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = 9;
int32_t x3 = INT32_MIN;
uint8_t x9 = 11U;
int64_t x16 = INT64_MAX;
int64_t x17 = INT64_MIN;
volatile int8_t x20 = INT8_MIN;
static int64_t t4 = INT64_MIN;
static int8_t x24 = INT8_MAX;
volatile uint32_t x25 = UINT32_MAX;
int32_t x32 = 4867;
int32_t x38 = INT32_MAX;
int8_t x44 = -2;
int32_t x46 = 11;
uint16_t x48 = UINT16_MAX;
volatile int8_t x50 = 13;
volatile int32_t t12 = 7125;
volatile int64_t x56 = 137763307131LL;
static int16_t x62 = -1;
uint64_t x72 = 15LLU;
uint32_t x90 = 61655528U;
int64_t x92 = 99534LL;
volatile int64_t t23 = -555493611046LL;
int32_t x98 = INT32_MIN;
int32_t x99 = -1;
volatile int64_t t28 = -7294424LL;
int32_t x117 = -1;
static uint8_t x119 = 44U;
volatile int32_t t29 = -1;
int64_t x122 = 913LL;
static uint64_t x126 = UINT64_MAX;
int16_t x127 = -10;
int8_t x128 = -42;
int32_t x136 = INT32_MAX;
static int8_t x140 = INT8_MIN;
uint32_t x150 = 345873919U;
int32_t t37 = 135470919;
volatile int16_t x155 = -169;
int8_t x158 = 1;
volatile int8_t x160 = INT8_MAX;
uint8_t x167 = 72U;
static volatile int32_t t41 = 20808077;
volatile uint8_t x175 = 61U;
int64_t x177 = -1LL;
int16_t x178 = -1;
static int16_t x180 = INT16_MIN;
uint8_t x185 = 7U;
volatile int64_t t46 = 81689651635090568LL;
volatile uint8_t x190 = UINT8_MAX;
uint8_t x191 = 6U;
int64_t t47 = 10969987953784LL;
uint32_t x195 = 6410U;
uint8_t x196 = 2U;
int16_t x201 = 14;
uint8_t x207 = 124U;
static volatile int64_t t51 = 0LL;
int16_t x210 = -2;
int8_t x213 = INT8_MIN;
int32_t x214 = INT32_MIN;
static uint8_t x218 = UINT8_MAX;
int64_t x219 = -1257LL;
volatile int64_t x223 = INT64_MIN;
uint64_t x224 = 18935410LLU;
static uint64_t t55 = 3440742221506230957LLU;
int8_t x226 = INT8_MIN;
int64_t x227 = -1LL;
volatile int64_t x232 = -1LL;
volatile int64_t x250 = 2703LL;
static uint16_t x254 = UINT16_MAX;
uint32_t x257 = 7389U;
volatile int64_t t64 = -19LL;
int32_t x261 = INT32_MIN;
int8_t x269 = INT8_MIN;
int16_t x271 = -31;
volatile int32_t x272 = INT32_MIN;
volatile uint16_t x273 = UINT16_MAX;
uint32_t x276 = 22644U;
int32_t t70 = 0;
int64_t x290 = INT64_MIN;
uint32_t x291 = 919048U;
uint32_t x294 = UINT32_MAX;
volatile uint16_t x301 = 40U;
volatile int8_t x312 = -1;
volatile uint32_t x315 = UINT32_MAX;
int8_t x318 = 0;
int64_t t79 = -8515380237926909LL;
int32_t x322 = INT32_MAX;
volatile int64_t t80 = -59LL;
uint32_t x332 = UINT32_MAX;
uint32_t x336 = 12790U;
uint32_t x338 = 2U;
int32_t x340 = -1;
int32_t x344 = -111;
int64_t t85 = -8056LL;
uint64_t x346 = 266332049910LLU;
uint64_t x347 = UINT64_MAX;
uint64_t t86 = 99LLU;
volatile int32_t x357 = -2;
uint64_t x360 = 14309309LLU;
int8_t x366 = 58;
int16_t x368 = INT16_MIN;
uint8_t x371 = 27U;
int16_t x377 = INT16_MAX;
int16_t x378 = INT16_MAX;
uint64_t x383 = UINT64_MAX;
volatile int64_t t95 = INT64_MIN;
volatile int32_t x388 = -58;
uint64_t t98 = 1141394952495573455LLU;
int16_t x398 = INT16_MIN;


void f0(void) {
	int64_t x2 = INT64_MIN;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 657;

	t0 = (x1&((x2==x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 12U;
	int8_t x6 = INT8_MAX;
	volatile int8_t x7 = 1;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 2275104;

	t1 = (x5&((x6==x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 5011U;
	static int32_t x11 = INT32_MAX;
	int8_t x12 = -1;
	static volatile int32_t t2 = -1169;

	t2 = (x9&((x10==x11)+x12));

	if (t2 != 11) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int64_t x14 = INT64_MIN;
	volatile int32_t x15 = 886165728;
	int64_t t3 = INT64_MAX;

	t3 = (x13&((x14==x15)+x16));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = 478;
	int32_t x19 = INT32_MIN;

	t4 = (x17&((x18==x19)+x20));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -1;
	int32_t x22 = INT32_MIN;
	int8_t x23 = INT8_MIN;
	volatile int32_t t5 = 63057;

	t5 = (x21&((x22==x23)+x24));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MAX;
	uint8_t x27 = 14U;
	static int32_t x28 = -1;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = (x25&((x26==x27)+x28));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = UINT64_MAX;
	int8_t x30 = INT8_MIN;
	static uint32_t x31 = 1801637548U;
	uint64_t t7 = 17741571663635LLU;

	t7 = (x29&((x30==x31)+x32));

	if (t7 != 4867LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = -347484526283641LL;
	volatile int64_t x34 = INT64_MIN;
	int8_t x35 = -1;
	int64_t x36 = INT64_MIN;
	volatile int64_t t8 = INT64_MIN;

	t8 = (x33&((x34==x35)+x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 7432647U;
	int8_t x39 = INT8_MIN;
	volatile int64_t x40 = -1LL;
	int64_t t9 = 396364081030414LL;

	t9 = (x37&((x38==x39)+x40));

	if (t9 != 7432647LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 6081U;
	volatile int8_t x42 = 3;
	int8_t x43 = -16;
	int32_t t10 = -7914;

	t10 = (x41&((x42==x43)+x44));

	if (t10 != 6080) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	static uint64_t x47 = 3859LLU;
	static volatile uint32_t t11 = 2U;

	t11 = (x45&((x46==x47)+x48));

	if (t11 != 65535U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MIN;

	t12 = (x49&((x50==x51)+x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static int8_t x54 = INT8_MIN;
	int8_t x55 = -1;
	static volatile int64_t t13 = 4667804LL;

	t13 = (x53&((x54==x55)+x56));

	if (t13 != 137763307008LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 636U;
	volatile uint32_t x58 = 35U;
	int64_t x59 = 2766219791447259LL;
	int32_t x60 = INT32_MIN;
	int32_t t14 = -101631696;

	t14 = (x57&((x58==x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MIN;
	int64_t x63 = -1LL;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = INT32_MIN;

	t15 = (x61&((x62==x63)+x64));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -1;
	int8_t x66 = INT8_MIN;
	uint16_t x67 = 10395U;
	uint8_t x68 = 13U;
	int32_t t16 = -7;

	t16 = (x65&((x66==x67)+x68));

	if (t16 != 13) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 77108;
	int64_t x70 = INT64_MAX;
	volatile int64_t x71 = -1LL;
	uint64_t t17 = 1LLU;

	t17 = (x69&((x70==x71)+x72));

	if (t17 != 4LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static int64_t x74 = INT64_MIN;
	uint16_t x75 = 20150U;
	static int64_t x76 = 614LL;
	int64_t t18 = 463LL;

	t18 = (x73&((x74==x75)+x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -106334776LL;
	static volatile uint8_t x78 = 25U;
	int8_t x79 = INT8_MAX;
	uint16_t x80 = 176U;
	volatile int64_t t19 = 28LL;

	t19 = (x77&((x78==x79)+x80));

	if (t19 != 128LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = 403553610965798974LLU;
	int64_t x82 = -1LL;
	uint64_t x83 = UINT64_MAX;
	int8_t x84 = -1;
	uint64_t t20 = 7863562165138824LLU;

	t20 = (x81&((x82==x83)+x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	static int8_t x86 = 0;
	static int16_t x87 = 15801;
	int16_t x88 = INT16_MIN;
	int64_t t21 = INT64_MIN;

	t21 = (x85&((x86==x87)+x88));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	static volatile int8_t x91 = INT8_MIN;
	volatile int64_t t22 = -313006334806525807LL;

	t22 = (x89&((x90==x91)+x92));

	if (t22 != 99534LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MAX;
	uint8_t x95 = 0U;
	static int64_t x96 = 185451591020744LL;

	t23 = (x93&((x94==x95)+x96));

	if (t23 != 185451591008256LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = INT64_MIN;
	int16_t x100 = INT16_MAX;
	int64_t t24 = 7777610678269LL;

	t24 = (x97&((x98==x99)+x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int32_t x102 = -1;
	int32_t x103 = -7857699;
	uint8_t x104 = 1U;
	int32_t t25 = 13987;

	t25 = (x101&((x102==x103)+x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint64_t x106 = UINT64_MAX;
	uint8_t x107 = 1U;
	volatile int64_t x108 = -112LL;
	int64_t t26 = 3979LL;

	t26 = (x105&((x106==x107)+x108));

	if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 28U;
	uint16_t x110 = 7461U;
	int64_t x111 = 2092LL;
	int8_t x112 = -1;
	volatile int32_t t27 = -1022;

	t27 = (x109&((x110==x111)+x112));

	if (t27 != 28) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -2534LL;
	int32_t x114 = 53916;
	static int16_t x115 = -1;
	int32_t x116 = INT32_MIN;

	t28 = (x113&((x114==x115)+x116));

	if (t28 != -2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -1;
	static uint16_t x120 = UINT16_MAX;

	t29 = (x117&((x118==x119)+x120));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	static int16_t x123 = INT16_MIN;
	uint16_t x124 = 0U;
	int64_t t30 = 70305612139LL;

	t30 = (x121&((x122==x123)+x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = 1119142;
	static volatile int32_t t31 = -84;

	t31 = (x125&((x126==x127)+x128));

	if (t31 != 1119110) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 8U;
	uint8_t x130 = 2U;
	static int64_t x131 = INT64_MIN;
	volatile int16_t x132 = -14309;
	static volatile int32_t t32 = -522132;

	t32 = (x129&((x130==x131)+x132));

	if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 0LL;
	volatile int64_t x134 = -12756381026630286LL;
	int8_t x135 = INT8_MIN;
	static volatile int64_t t33 = -85911LL;

	t33 = (x133&((x134==x135)+x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 13LLU;
	uint64_t x138 = UINT64_MAX;
	int64_t x139 = 13863511LL;
	static volatile uint64_t t34 = 6054LLU;

	t34 = (x137&((x138==x139)+x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int64_t x142 = INT64_MIN;
	volatile int32_t x143 = INT32_MIN;
	uint16_t x144 = 11476U;
	volatile int32_t t35 = -3881263;

	t35 = (x141&((x142==x143)+x144));

	if (t35 != 11476) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	int64_t x146 = INT64_MAX;
	int16_t x147 = 7;
	static int8_t x148 = INT8_MIN;
	static volatile int32_t t36 = 136;

	t36 = (x145&((x146==x147)+x148));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	int32_t x151 = 1;
	uint16_t x152 = 37U;

	t37 = (x149&((x150==x151)+x152));

	if (t37 != 37) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	int8_t x154 = 4;
	uint32_t x156 = UINT32_MAX;
	uint32_t t38 = 5U;

	t38 = (x153&((x154==x155)+x156));

	if (t38 != 2147483648U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 9U;
	static int32_t x159 = -1;
	static volatile int32_t t39 = 15637;

	t39 = (x157&((x158==x159)+x160));

	if (t39 != 9) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 524732948LLU;
	volatile uint8_t x162 = 0U;
	int8_t x163 = INT8_MIN;
	static int16_t x164 = INT16_MIN;
	uint64_t t40 = 1107287650886LLU;

	t40 = (x161&((x162==x163)+x164));

	if (t40 != 524713984LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = -1;
	uint32_t x166 = 16311U;
	static int8_t x168 = INT8_MIN;

	t41 = (x165&((x166==x167)+x168));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	static uint16_t x170 = 37U;
	static uint32_t x171 = 0U;
	int32_t x172 = -1;
	volatile int32_t t42 = -566086863;

	t42 = (x169&((x170==x171)+x172));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x173 = 100U;
	static volatile int32_t x174 = INT32_MIN;
	int64_t x176 = 32684876540385LL;
	static int64_t t43 = -428626LL;

	t43 = (x173&((x174==x175)+x176));

	if (t43 != 96LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x179 = UINT64_MAX;
	int64_t t44 = -290467LL;

	t44 = (x177&((x178==x179)+x180));

	if (t44 != -32767LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	int16_t x182 = INT16_MIN;
	volatile int8_t x183 = INT8_MAX;
	int64_t x184 = INT64_MAX;
	int64_t t45 = -638158911527180LL;

	t45 = (x181&((x182==x183)+x184));

	if (t45 != 4294967295LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x186 = -4;
	static int8_t x187 = 4;
	volatile int64_t x188 = INT64_MIN;

	t46 = (x185&((x186==x187)+x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = -1;
	volatile int64_t x192 = -988875983549LL;

	t47 = (x189&((x190==x191)+x192));

	if (t47 != -988875983549LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 336244;
	static int64_t x194 = INT64_MIN;
	int32_t t48 = -15711;

	t48 = (x193&((x194==x195)+x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	volatile int8_t x198 = INT8_MAX;
	static volatile int16_t x199 = INT16_MIN;
	int64_t x200 = -2077937323808539898LL;
	volatile int64_t t49 = 540LL;

	t49 = (x197&((x198==x199)+x200));

	if (t49 != -2077937323808539898LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = INT8_MIN;
	int64_t x203 = 850897193754937LL;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t50 = 356655866023838LLU;

	t50 = (x201&((x202==x203)+x204));

	if (t50 != 14LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -3116129LL;
	static int32_t x206 = 859143793;
	static int8_t x208 = -1;

	t51 = (x205&((x206==x207)+x208));

	if (t51 != -3116129LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	int8_t x211 = INT8_MIN;
	volatile int32_t x212 = 0;
	int32_t t52 = -1440;

	t52 = (x209&((x210==x211)+x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x215 = INT64_MIN;
	static int32_t x216 = -1;
	volatile int32_t t53 = 6384398;

	t53 = (x213&((x214==x215)+x216));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = INT64_MAX;
	int64_t x220 = -1927482242436666LL;
	int64_t t54 = -3443371940883398243LL;

	t54 = (x217&((x218==x219)+x220));

	if (t54 != 9221444554612339142LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	static volatile int32_t x222 = INT32_MIN;

	t55 = (x221&((x222==x223)+x224));

	if (t55 != 28274LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 3;
	int8_t x228 = INT8_MAX;
	volatile int32_t t56 = -157;

	t56 = (x225&((x226==x227)+x228));

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 52986LLU;
	int8_t x230 = INT8_MIN;
	int64_t x231 = -1970852007LL;
	uint64_t t57 = 38925LLU;

	t57 = (x229&((x230==x231)+x232));

	if (t57 != 52986LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	volatile uint16_t x234 = 0U;
	volatile uint16_t x235 = UINT16_MAX;
	int32_t x236 = -1;
	int32_t t58 = 1;

	t58 = (x233&((x234==x235)+x236));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int16_t x238 = INT16_MIN;
	volatile uint16_t x239 = 1U;
	volatile uint16_t x240 = UINT16_MAX;
	static volatile int32_t t59 = -1515928;

	t59 = (x237&((x238==x239)+x240));

	if (t59 != 32768) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1887;
	int8_t x242 = 1;
	int8_t x243 = INT8_MIN;
	int32_t x244 = -137771412;
	volatile int32_t t60 = -3105;

	t60 = (x241&((x242==x243)+x244));

	if (t60 != -137773024) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = -1;
	int32_t x246 = -154;
	int32_t x247 = -8653669;
	static volatile int16_t x248 = -55;
	int32_t t61 = 7748427;

	t61 = (x245&((x246==x247)+x248));

	if (t61 != -55) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = UINT64_MAX;
	int16_t x251 = INT16_MIN;
	int64_t x252 = -1LL;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (x249&((x250==x251)+x252));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 503LLU;
	volatile int16_t x255 = INT16_MAX;
	static int32_t x256 = INT32_MIN;
	static uint64_t t63 = 14733LLU;

	t63 = (x253&((x254==x255)+x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MAX;
	int64_t x260 = -44LL;

	t64 = (x257&((x258==x259)+x260));

	if (t64 != 7380LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x262 = INT8_MIN;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = INT32_MIN;

	t65 = (x261&((x262==x263)+x264));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = 1U;
	uint8_t x266 = 22U;
	uint16_t x267 = 1939U;
	int32_t x268 = 17843591;
	volatile int32_t t66 = 1;

	t66 = (x265&((x266==x267)+x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = 4U;
	volatile int32_t t67 = INT32_MIN;

	t67 = (x269&((x270==x271)+x272));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = -51530642;
	static int8_t x275 = -1;
	volatile uint32_t t68 = 10U;

	t68 = (x273&((x274==x275)+x276));

	if (t68 != 22644U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = -33;
	int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MIN;
	uint8_t x280 = 7U;
	int32_t t69 = -58280;

	t69 = (x277&((x278==x279)+x280));

	if (t69 != 7) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 50U;
	uint16_t x282 = 5U;
	static int32_t x283 = INT32_MAX;
	volatile int32_t x284 = INT32_MAX;

	t70 = (x281&((x282==x283)+x284));

	if (t70 != 50) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	static int16_t x286 = -197;
	uint64_t x287 = 1595902915768777013LLU;
	uint32_t x288 = 518U;
	volatile uint32_t t71 = 0U;

	t71 = (x285&((x286==x287)+x288));

	if (t71 != 518U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 48538765558282608LL;
	static uint64_t x292 = 152284942669271439LLU;
	uint64_t t72 = 127076784087252LLU;

	t72 = (x289&((x290==x291)+x292));

	if (t72 != 3377974604812544LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = 44;
	int64_t x295 = INT64_MIN;
	int32_t x296 = -1;
	volatile int32_t t73 = -1096;

	t73 = (x293&((x294==x295)+x296));

	if (t73 != 44) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MIN;
	uint32_t x298 = 317503U;
	uint8_t x299 = UINT8_MAX;
	int8_t x300 = 2;
	int32_t t74 = -20;

	t74 = (x297&((x298==x299)+x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x302 = 1778U;
	int32_t x303 = INT32_MIN;
	int32_t x304 = -64561;
	volatile int32_t t75 = 3205;

	t75 = (x301&((x302==x303)+x304));

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	volatile int32_t x306 = -1114;
	static int16_t x307 = -55;
	int8_t x308 = -2;
	volatile int32_t t76 = -32;

	t76 = (x305&((x306==x307)+x308));

	if (t76 != 126) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	uint32_t x310 = 117506173U;
	int8_t x311 = -1;
	static int32_t t77 = -12;

	t77 = (x309&((x310==x311)+x312));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = -1;
	int16_t x314 = -1;
	int16_t x316 = -2450;
	volatile int32_t t78 = 98;

	t78 = (x313&((x314==x315)+x316));

	if (t78 != -2449) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = 1147LL;
	uint32_t x319 = 99450U;
	volatile int16_t x320 = INT16_MIN;

	t79 = (x317&((x318==x319)+x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	uint64_t x323 = 147160011802LLU;
	int64_t x324 = 1972715282LL;

	t80 = (x321&((x322==x323)+x324));

	if (t80 != 18LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 49;
	static volatile uint32_t x326 = UINT32_MAX;
	int8_t x327 = INT8_MAX;
	int16_t x328 = INT16_MIN;
	int32_t t81 = 4002061;

	t81 = (x325&((x326==x327)+x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 2;
	int8_t x330 = -1;
	uint8_t x331 = 34U;
	uint32_t t82 = 868U;

	t82 = (x329&((x330==x331)+x332));

	if (t82 != 2U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = UINT64_MAX;
	static uint16_t x334 = UINT16_MAX;
	uint8_t x335 = 25U;
	volatile uint64_t t83 = 3214077281111LLU;

	t83 = (x333&((x334==x335)+x336));

	if (t83 != 12790LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	uint16_t x339 = 3592U;
	uint32_t t84 = UINT32_MAX;

	t84 = (x337&((x338==x339)+x340));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -2069457317873LL;
	int64_t x342 = INT64_MIN;
	volatile int32_t x343 = -64851412;

	t85 = (x341&((x342==x343)+x344));

	if (t85 != -2069457317887LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 215870655736570852LLU;
	uint16_t x348 = UINT16_MAX;

	t86 = (x345&((x346==x347)+x348));

	if (t86 != 58340LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MIN;
	static volatile int32_t x351 = INT32_MIN;
	uint64_t x352 = 9343295540LLU;
	volatile uint64_t t87 = 59643681946LLU;

	t87 = (x349&((x350==x351)+x352));

	if (t87 != 9343270912LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	volatile uint16_t x354 = 506U;
	int16_t x355 = INT16_MAX;
	volatile uint32_t x356 = 66131578U;
	static uint32_t t88 = 1004U;

	t88 = (x353&((x354==x355)+x356));

	if (t88 != 5754U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x358 = UINT64_MAX;
	static int64_t x359 = -1LL;
	uint64_t t89 = 7LLU;

	t89 = (x357&((x358==x359)+x360));

	if (t89 != 14309310LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 4242099697080LLU;
	uint64_t x362 = 5843753LLU;
	int8_t x363 = INT8_MIN;
	static int16_t x364 = INT16_MAX;
	uint64_t t90 = 4702555500LLU;

	t90 = (x361&((x362==x363)+x364));

	if (t90 != 30136LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	static uint32_t x367 = 12661692U;
	int32_t t91 = 5730397;

	t91 = (x365&((x366==x367)+x368));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 2956U;
	volatile uint16_t x370 = UINT16_MAX;
	uint8_t x372 = 46U;
	int32_t t92 = -41;

	t92 = (x369&((x370==x371)+x372));

	if (t92 != 12) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	int8_t x374 = INT8_MIN;
	uint16_t x375 = UINT16_MAX;
	static uint64_t x376 = 74LLU;
	volatile uint64_t t93 = 658834997604121LLU;

	t93 = (x373&((x374==x375)+x376));

	if (t93 != 74LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x379 = INT32_MAX;
	int16_t x380 = INT16_MIN;
	volatile int32_t t94 = 2550;

	t94 = (x377&((x378==x379)+x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	volatile uint8_t x382 = 0U;
	int64_t x384 = INT64_MIN;

	t95 = (x381&((x382==x383)+x384));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	int16_t x386 = INT16_MAX;
	volatile int32_t x387 = -26478;
	int32_t t96 = -331562579;

	t96 = (x385&((x386==x387)+x388));

	if (t96 != 32710) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1LL;
	uint32_t x390 = 487857U;
	volatile int32_t x391 = 923;
	volatile int16_t x392 = 23;
	volatile int64_t t97 = -374326272479LL;

	t97 = (x389&((x390==x391)+x392));

	if (t97 != 23LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 489355973687325LL;
	static uint8_t x394 = 3U;
	int8_t x395 = 1;
	uint64_t x396 = 0LLU;

	t98 = (x393&((x394==x395)+x396));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 84U;
	int8_t x399 = INT8_MIN;
	static uint16_t x400 = 17U;
	static int32_t t99 = -1;

	t99 = (x397&((x398==x399)+x400));

	if (t99 != 16) { NG(); } else { ; }
	
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


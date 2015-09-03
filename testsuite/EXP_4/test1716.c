#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 3U;
volatile int64_t t1 = -8LL;
volatile int64_t x10 = INT64_MAX;
int8_t x19 = INT8_MIN;
int64_t x21 = -47647602921LL;
static int16_t x22 = INT16_MIN;
static volatile int64_t t5 = -2LL;
static volatile uint64_t t6 = 691960388856LLU;
static int32_t x30 = -1;
uint8_t x32 = UINT8_MAX;
volatile int64_t t8 = 47LL;
volatile uint32_t x46 = 111U;
static volatile uint32_t t11 = 37081U;
int32_t x49 = INT32_MAX;
int16_t x50 = 8714;
int16_t x60 = INT16_MIN;
int32_t x65 = -1;
volatile uint8_t x71 = UINT8_MAX;
uint32_t x79 = 17372161U;
uint32_t t17 = 687182U;
int16_t x86 = INT16_MAX;
int8_t x88 = INT8_MAX;
volatile int32_t x93 = INT32_MAX;
int16_t x95 = INT16_MIN;
static uint16_t x103 = UINT16_MAX;
volatile uint8_t x107 = 2U;
int64_t t22 = -166643327555031823LL;
volatile int64_t x112 = INT64_MIN;
static uint16_t x116 = 912U;
static uint64_t t25 = 185225300011787028LLU;
int16_t x122 = INT16_MAX;
volatile int64_t t27 = 1LL;
int64_t x139 = INT64_MIN;
uint32_t x149 = UINT32_MAX;
int32_t x150 = 207;
volatile int8_t x151 = INT8_MIN;
int16_t x152 = INT16_MAX;
volatile uint64_t t36 = 225LLU;
volatile int16_t x171 = 147;
int32_t x175 = INT32_MIN;
uint16_t x180 = 624U;
int64_t t40 = 114619731LL;
volatile int8_t x181 = -16;
static int64_t x184 = -29610745LL;
uint8_t x185 = UINT8_MAX;
static uint8_t x186 = 4U;
volatile uint64_t t44 = 52421372LLU;
int64_t x209 = -417516737177462202LL;
uint32_t x211 = 1289484963U;
int64_t t48 = -2620465LL;
uint8_t x213 = 3U;
volatile int64_t t51 = 37LL;
volatile int16_t x228 = INT16_MIN;
volatile uint32_t t52 = 1U;
volatile uint8_t x241 = UINT8_MAX;
volatile int32_t x244 = -1;
int64_t x248 = 29182LL;
static volatile int16_t x258 = 57;
int8_t x266 = -1;
uint32_t x267 = UINT32_MAX;
volatile uint64_t t61 = 3LLU;
int8_t x277 = -1;
int16_t x279 = -488;
uint64_t t62 = 192582539779LLU;
uint16_t x291 = 17U;
int64_t x305 = 1674873195658022253LL;
int16_t x308 = -1;
int8_t x309 = 7;
volatile int64_t t67 = -130296LL;
volatile uint64_t x314 = UINT64_MAX;
uint64_t x318 = 108659640046763504LLU;
uint16_t x322 = 0U;
int16_t x327 = 0;
volatile int64_t t72 = 4110188358LL;
int16_t x343 = INT16_MAX;
uint8_t x344 = 7U;
volatile int64_t t76 = 6397LL;
volatile int64_t t79 = 6LL;
uint64_t x375 = 23717101025LLU;
int8_t x376 = INT8_MIN;
int64_t x381 = -1LL;
static uint32_t x385 = 63867U;
volatile uint8_t x387 = 41U;
int32_t x390 = INT32_MIN;
static int64_t x392 = INT64_MIN;
volatile uint32_t t91 = 186U;
static int64_t x433 = INT64_MIN;
volatile int32_t t93 = -248413627;
static volatile uint16_t x442 = 10U;
static uint8_t x443 = UINT8_MAX;
uint32_t x445 = 98U;
volatile uint32_t x447 = UINT32_MAX;
int64_t x450 = -1LL;
int32_t x452 = INT32_MAX;
volatile uint32_t x454 = 1186U;
volatile uint32_t t97 = 882U;
volatile int32_t x463 = 30;
int32_t t99 = -63525;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	static uint16_t x2 = 2698U;
	static uint8_t x4 = 2U;
	int32_t t0 = -5;

	t0 = (x1^(x2-(x3&x4)));

	if (t0 != -2147480952) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t x6 = 102183424758LL;
	static uint32_t x7 = UINT32_MAX;
	uint32_t x8 = 24018606U;

	t1 = (x5^(x6-(x7&x8)));

	if (t1 != -9223371934695369656LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int64_t x11 = -1LL;
	volatile int8_t x12 = 3;
	static int64_t t2 = -45369438160376633LL;

	t2 = (x9^(x10-(x11&x12)));

	if (t2 != 3LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint64_t x14 = UINT64_MAX;
	int16_t x15 = INT16_MAX;
	volatile uint16_t x16 = 650U;
	static volatile uint64_t t3 = 13019546LLU;

	t3 = (x13^(x14-(x15&x16)));

	if (t3 != 9223372036854775157LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int32_t x18 = -1;
	int16_t x20 = INT16_MAX;
	int32_t t4 = -224;

	t4 = (x17^(x18-(x19&x20)));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x23 = INT32_MIN;
	int64_t x24 = -1LL;

	t5 = (x21^(x22-(x23&x24)));

	if (t5 != -48989157609LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 198171U;
	uint64_t x26 = UINT64_MAX;
	volatile int16_t x27 = -43;
	volatile int16_t x28 = -1;

	t6 = (x25^(x26-(x27&x28)));

	if (t6 != 198193LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 2U;
	int16_t x31 = -1;
	static int32_t t7 = -71;

	t7 = (x29^(x30-(x31&x32)));

	if (t7 != -254) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 1654LL;
	int16_t x34 = -44;
	int32_t x35 = INT32_MIN;
	static uint8_t x36 = UINT8_MAX;

	t8 = (x33^(x34-(x35&x36)));

	if (t8 != -1630LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MAX;
	int8_t x38 = INT8_MAX;
	uint16_t x39 = UINT16_MAX;
	int8_t x40 = -4;
	static volatile int32_t t9 = 24966842;

	t9 = (x37^(x38-(x39&x40)));

	if (t9 != -2147418244) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -14126084997480LL;
	int64_t x42 = -63359135665657562LL;
	volatile int8_t x43 = INT8_MAX;
	volatile int32_t x44 = INT32_MIN;
	static volatile int64_t t10 = -513431748997746899LL;

	t10 = (x41^(x42-(x43&x44)));

	if (t10 != 63353948759119806LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = 19U;
	volatile int32_t x47 = -1;
	int8_t x48 = 5;

	t11 = (x45^(x46-(x47&x48)));

	if (t11 != 121U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x51 = INT32_MAX;
	volatile int16_t x52 = -308;
	int32_t t12 = -67227535;

	t12 = (x49^(x50-(x51&x52)));

	if (t12 != -9023) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	volatile int64_t x54 = INT64_MAX;
	uint32_t x55 = 2849U;
	volatile int64_t x56 = -1308942091781131LL;
	volatile int64_t t13 = 274621318535116LL;

	t13 = (x53^(x54-(x55&x56)));

	if (t13 != -9223372036854772959LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -4410;
	static int16_t x58 = INT16_MIN;
	volatile int16_t x59 = INT16_MAX;
	static int32_t t14 = -1847991;

	t14 = (x57^(x58-(x59&x60)));

	if (t14 != 28358) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = INT16_MIN;
	int16_t x67 = 1;
	uint32_t x68 = UINT32_MAX;
	volatile uint32_t t15 = 11542U;

	t15 = (x65^(x66-(x67&x68)));

	if (t15 != 32768U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MAX;
	uint32_t x70 = UINT32_MAX;
	int16_t x72 = -20;
	volatile uint32_t t16 = 50095U;

	t16 = (x69^(x70-(x71&x72)));

	if (t16 != 4294934764U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	volatile uint8_t x78 = 1U;
	int32_t x80 = INT32_MAX;

	t17 = (x77^(x78-(x79&x80)));

	if (t17 != 2130111488U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 1U;
	int64_t x87 = INT64_MAX;
	volatile int64_t t18 = 38975983700LL;

	t18 = (x85^(x86-(x87&x88)));

	if (t18 != 32641LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x94 = -20;
	int16_t x96 = 337;
	int32_t t19 = -1360;

	t19 = (x93^(x94-(x95&x96)));

	if (t19 != -2147483629) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = -130249LL;
	volatile uint64_t x98 = 127764989989333773LLU;
	int32_t x99 = INT32_MIN;
	uint8_t x100 = 0U;
	volatile uint64_t t20 = 80095527882445LLU;

	t20 = (x97^(x98-(x99&x100)));

	if (t20 != 18318979083720304698LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x101 = INT32_MIN;
	static int32_t x102 = INT32_MIN;
	int64_t x104 = -9394247LL;
	volatile int64_t t21 = -204444676827LL;

	t21 = (x101^(x102-(x103&x104)));

	if (t21 != 4294924359LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = UINT32_MAX;
	volatile int64_t x106 = -1LL;
	int16_t x108 = INT16_MIN;

	t22 = (x105^(x106-(x107&x108)));

	if (t22 != -4294967296LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = -772567617604LL;
	int64_t x111 = -31089935LL;
	volatile int64_t t23 = 685328182905LL;

	t23 = (x109^(x110-(x111&x112)));

	if (t23 != -9223371265381650500LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x113 = INT8_MIN;
	int8_t x114 = -1;
	int32_t x115 = -182996666;
	volatile int32_t t24 = 41;

	t24 = (x113^(x114-(x115&x116)));

	if (t24 != 383) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x117 = 2U;
	uint64_t x118 = 4LLU;
	int16_t x119 = -4561;
	static volatile int32_t x120 = INT32_MIN;

	t25 = (x117^(x118-(x119&x120)));

	if (t25 != 2147483654LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = -16;
	uint16_t x123 = UINT16_MAX;
	static int64_t x124 = -28164181434261LL;
	volatile int64_t t26 = 499865LL;

	t26 = (x121^(x122-(x123&x124)));

	if (t26 != -8092LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = 858U;
	int8_t x126 = INT8_MIN;
	volatile uint16_t x127 = 378U;
	int64_t x128 = INT64_MAX;

	t27 = (x125^(x126-(x127&x128)));

	if (t27 != -676LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x129 = UINT64_MAX;
	int64_t x130 = 15960547LL;
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = INT32_MIN;
	volatile uint64_t t28 = 1LLU;

	t28 = (x129^(x130-(x131&x132)));

	if (t28 != 18446744073693591068LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x133 = INT32_MIN;
	int16_t x134 = 3027;
	uint64_t x135 = UINT64_MAX;
	int8_t x136 = -1;
	volatile uint64_t t29 = 5983129450733784034LLU;

	t29 = (x133^(x134-(x135&x136)));

	if (t29 != 18446744071562070996LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MIN;
	uint32_t x138 = UINT32_MAX;
	int16_t x140 = INT16_MAX;
	static int64_t t30 = -33672318LL;

	t30 = (x137^(x138-(x139&x140)));

	if (t30 != -2147483649LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x141 = -2071LL;
	volatile int16_t x142 = INT16_MIN;
	int16_t x143 = 3;
	int8_t x144 = INT8_MIN;
	static int64_t t31 = 991301LL;

	t31 = (x141^(x142-(x143&x144)));

	if (t31 != 30697LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = -29300494065LL;
	uint16_t x146 = 7U;
	volatile uint8_t x147 = 0U;
	int64_t x148 = INT64_MIN;
	int64_t t32 = -2483341873436565LL;

	t32 = (x145^(x146-(x147&x148)));

	if (t32 != -29300494072LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t t33 = 420U;

	t33 = (x149^(x150-(x151&x152)));

	if (t33 != 32432U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x153 = INT64_MIN;
	int64_t x154 = INT64_MIN;
	int64_t x155 = 366540LL;
	volatile int32_t x156 = INT32_MIN;
	volatile int64_t t34 = 948681921074LL;

	t34 = (x153^(x154-(x155&x156)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x157 = INT16_MIN;
	int32_t x158 = INT32_MIN;
	uint32_t x159 = 11U;
	volatile int64_t x160 = -7LL;
	volatile int64_t t35 = 14849532075374626LL;

	t35 = (x157^(x158-(x159&x160)));

	if (t35 != 2147516407LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = 1376364962468570521LLU;
	uint16_t x162 = 5U;
	static volatile int16_t x163 = -107;
	int16_t x164 = INT16_MIN;

	t36 = (x161^(x162-(x163&x164)));

	if (t36 != 1376364962468537756LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = -1;
	int16_t x166 = 350;
	static int16_t x167 = INT16_MAX;
	int64_t x168 = INT64_MIN;
	static volatile int64_t t37 = -4540841278LL;

	t37 = (x165^(x166-(x167&x168)));

	if (t37 != -351LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x169 = 396;
	static int32_t x170 = INT32_MIN;
	int16_t x172 = INT16_MIN;
	int32_t t38 = -329693006;

	t38 = (x169^(x170-(x171&x172)));

	if (t38 != -2147483252) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = UINT8_MAX;
	static int16_t x174 = INT16_MIN;
	static uint32_t x176 = 164582972U;
	volatile uint32_t t39 = 1U;

	t39 = (x173^(x174-(x175&x176)));

	if (t39 != 4294934783U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MAX;
	volatile int64_t x178 = INT64_MAX;
	uint8_t x179 = 3U;

	t40 = (x177^(x178-(x179&x180)));

	if (t40 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x182 = 42U;
	int8_t x183 = INT8_MIN;
	int64_t t41 = -4557056LL;

	t41 = (x181^(x182-(x183&x184)));

	if (t41 != -29610790LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x187 = 308;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t42 = -2620396;

	t42 = (x185^(x186-(x187&x188)));

	if (t42 != -209) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = INT32_MIN;
	static volatile uint64_t x190 = 2582723898101481LLU;
	volatile int64_t x191 = INT64_MIN;
	uint8_t x192 = UINT8_MAX;
	uint64_t t43 = 85063573LLU;

	t43 = (x189^(x190-(x191&x192)));

	if (t43 != 18444161349962419945LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = 276270196LLU;
	int64_t x194 = -136788594344900528LL;
	int8_t x195 = INT8_MAX;
	uint32_t x196 = 28425U;

	t44 = (x193^(x194-(x195&x196)));

	if (t44 != 18309955479633708083LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MIN;
	static int64_t x199 = INT64_MAX;
	volatile uint8_t x200 = 14U;
	volatile int64_t t45 = 47LL;

	t45 = (x197^(x198-(x199&x200)));

	if (t45 != 2147483762LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = INT64_MIN;
	volatile int16_t x202 = INT16_MAX;
	int32_t x203 = 72598;
	volatile int16_t x204 = INT16_MIN;
	int64_t t46 = 200LL;

	t46 = (x201^(x202-(x203&x204)));

	if (t46 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = 0LL;
	static volatile int16_t x206 = -1;
	int16_t x207 = INT16_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile int64_t t47 = -6900793967422103LL;

	t47 = (x205^(x206-(x207&x208)));

	if (t47 != 32767LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x210 = INT16_MAX;
	int32_t x212 = -1;

	t48 = (x209^(x210-(x211&x212)));

	if (t48 != -417516734708883686LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x214 = 106;
	uint32_t x215 = 2156U;
	int32_t x216 = 6318;
	volatile uint32_t t49 = 31U;

	t49 = (x213^(x214-(x215&x216)));

	if (t49 != 4294965309U) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x217 = INT64_MIN;
	static int16_t x218 = -1;
	int16_t x219 = -2358;
	volatile int16_t x220 = -1;
	int64_t t50 = -4196312640LL;

	t50 = (x217^(x218-(x219&x220)));

	if (t50 != -9223372036854773451LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = -1;
	int64_t x222 = -1LL;
	static int32_t x223 = INT32_MIN;
	static volatile int8_t x224 = INT8_MIN;

	t51 = (x221^(x222-(x223&x224)));

	if (t51 != -2147483648LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x225 = 0U;
	uint16_t x226 = 56U;
	volatile uint32_t x227 = 115746384U;

	t52 = (x225^(x226-(x227&x228)));

	if (t52 != 4179230776U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x229 = UINT32_MAX;
	int32_t x230 = INT32_MIN;
	int32_t x231 = INT32_MIN;
	static int32_t x232 = INT32_MIN;
	volatile uint32_t t53 = UINT32_MAX;

	t53 = (x229^(x230-(x231&x232)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -1LL;
	int8_t x234 = -1;
	volatile uint8_t x235 = UINT8_MAX;
	int8_t x236 = -1;
	int64_t t54 = 12432143796570837LL;

	t54 = (x233^(x234-(x235&x236)));

	if (t54 != 255LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x242 = 1723U;
	uint8_t x243 = 3U;
	static uint32_t t55 = 20U;

	t55 = (x241^(x242-(x243&x244)));

	if (t55 != 1607U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x245 = 0U;
	int16_t x246 = INT16_MAX;
	int64_t x247 = INT64_MAX;
	int64_t t56 = -3878LL;

	t56 = (x245^(x246-(x247&x248)));

	if (t56 != 3585LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x249 = UINT16_MAX;
	int16_t x250 = INT16_MAX;
	volatile int64_t x251 = -134258808502501LL;
	uint8_t x252 = 9U;
	volatile int64_t t57 = -1003LL;

	t57 = (x249^(x250-(x251&x252)));

	if (t57 != 32777LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = -1;
	int64_t x254 = INT64_MAX;
	int64_t x255 = -1LL;
	uint8_t x256 = UINT8_MAX;
	volatile int64_t t58 = 142LL;

	t58 = (x253^(x254-(x255&x256)));

	if (t58 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x257 = -1540683;
	int32_t x259 = INT32_MIN;
	static uint32_t x260 = 12908097U;
	uint32_t t59 = 24U;

	t59 = (x257^(x258-(x259&x260)));

	if (t59 != 4293426572U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MIN;
	uint8_t x262 = 11U;
	int8_t x263 = -2;
	uint8_t x264 = 59U;
	static volatile int32_t t60 = -8;

	t60 = (x261^(x262-(x263&x264)));

	if (t60 != 32721) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = 426;
	uint64_t x268 = 636635254LLU;

	t61 = (x265^(x266-(x267&x268)));

	if (t61 != 18446744073072916003LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x278 = 2930823842LLU;
	uint8_t x280 = UINT8_MAX;

	t62 = (x277^(x278-(x279&x280)));

	if (t62 != 18446744070778727797LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x285 = -1;
	int32_t x286 = INT32_MIN;
	volatile int32_t x287 = INT32_MIN;
	int32_t x288 = INT32_MIN;
	volatile int32_t t63 = 1;

	t63 = (x285^(x286-(x287&x288)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x289 = INT16_MIN;
	uint16_t x290 = UINT16_MAX;
	int16_t x292 = -1;
	volatile int32_t t64 = 2887;

	t64 = (x289^(x290-(x291&x292)));

	if (t64 != -32786) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x293 = 3170978LLU;
	volatile int8_t x294 = -1;
	uint16_t x295 = 4427U;
	int64_t x296 = -1LL;
	volatile uint64_t t65 = 61LLU;

	t65 = (x293^(x294-(x295&x296)));

	if (t65 != 18446744073706376214LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x306 = -14;
	volatile uint8_t x307 = 0U;
	volatile int64_t t66 = 1916484776389915LL;

	t66 = (x305^(x306-(x307&x308)));

	if (t66 != -1674873195658022241LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x310 = -29;
	uint16_t x311 = 21U;
	static int64_t x312 = 1672464932752985LL;

	t67 = (x309^(x310-(x311&x312)));

	if (t67 != -43LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x313 = 122U;
	volatile int32_t x315 = INT32_MIN;
	int64_t x316 = 37733745471189404LL;
	volatile uint64_t t68 = 350668285528LLU;

	t68 = (x313^(x314-(x315&x316)));

	if (t68 != 18409010329292898181LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MAX;
	int16_t x319 = INT16_MIN;
	int16_t x320 = -1;
	static volatile uint64_t t69 = 29912322479LLU;

	t69 = (x317^(x318-(x319&x320)));

	if (t69 != 108659640046797327LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x321 = 1661697U;
	volatile uint32_t x323 = 90U;
	int64_t x324 = INT64_MIN;
	volatile int64_t t70 = -141924660833LL;

	t70 = (x321^(x322-(x323&x324)));

	if (t70 != 1661697LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x325 = 3U;
	uint64_t x326 = UINT64_MAX;
	static uint32_t x328 = 41132U;
	volatile uint64_t t71 = 248570730802LLU;

	t71 = (x325^(x326-(x327&x328)));

	if (t71 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x329 = INT8_MIN;
	static volatile int32_t x330 = INT32_MIN;
	uint32_t x331 = 56U;
	static int64_t x332 = 14LL;

	t72 = (x329^(x330-(x331&x332)));

	if (t72 != 2147483768LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x333 = 0;
	uint32_t x334 = 1814U;
	int16_t x335 = INT16_MIN;
	uint64_t x336 = 176259230LLU;
	static volatile uint64_t t73 = 210LLU;

	t73 = (x333^(x334-(x335&x336)));

	if (t73 != 18446744073533294358LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x337 = 87U;
	int32_t x338 = INT32_MIN;
	int64_t x339 = -3954809LL;
	static int64_t x340 = INT64_MIN;
	volatile int64_t t74 = 23483389LL;

	t74 = (x337^(x338-(x339&x340)));

	if (t74 != 9223372034707292247LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x341 = INT16_MIN;
	int32_t x342 = 4908046;
	int32_t t75 = 173693980;

	t75 = (x341^(x342-(x343&x344)));

	if (t75 != -4889593) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x353 = INT8_MAX;
	volatile uint8_t x354 = 3U;
	int64_t x355 = INT64_MIN;
	int16_t x356 = 1;

	t76 = (x353^(x354-(x355&x356)));

	if (t76 != 124LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x357 = UINT16_MAX;
	int16_t x358 = -1;
	int8_t x359 = INT8_MIN;
	volatile int16_t x360 = 10;
	volatile int32_t t77 = -107;

	t77 = (x357^(x358-(x359&x360)));

	if (t77 != -65536) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x365 = 15U;
	int64_t x366 = INT64_MIN;
	int32_t x367 = -1;
	int32_t x368 = -1;
	static int64_t t78 = 3926322LL;

	t78 = (x365^(x366-(x367&x368)));

	if (t78 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = INT16_MIN;
	uint16_t x370 = 124U;
	static volatile uint16_t x371 = 32263U;
	volatile int64_t x372 = INT64_MIN;

	t79 = (x369^(x370-(x371&x372)));

	if (t79 != -32644LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x373 = 24340925126780526LLU;
	int16_t x374 = 230;
	volatile uint64_t t80 = 11785LLU;

	t80 = (x373^(x374-(x375&x376)));

	if (t80 != 18422403133510935816LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x377 = 290396116196729375LL;
	int32_t x378 = -5221;
	uint8_t x379 = 107U;
	volatile uint64_t x380 = 71971732855651LLU;
	uint64_t t81 = 125207394514222LLU;

	t81 = (x377^(x378-(x379&x380)));

	if (t81 != 18156347957512816935LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x382 = -1;
	static uint8_t x383 = 117U;
	static volatile int64_t x384 = INT64_MAX;
	int64_t t82 = 22394034931559LL;

	t82 = (x381^(x382-(x383&x384)));

	if (t82 != 117LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x386 = -1;
	volatile uint32_t x388 = 26910599U;
	uint32_t t83 = 1338157773U;

	t83 = (x385^(x386-(x387&x388)));

	if (t83 != 4294903429U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x389 = 269769937658921842LLU;
	int16_t x391 = -2;
	volatile uint64_t t84 = 14947244327LLU;

	t84 = (x389^(x390-(x391&x392)));

	if (t84 != 8953602098969002866LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x393 = -1;
	volatile uint32_t x394 = 7U;
	uint32_t x395 = UINT32_MAX;
	int16_t x396 = INT16_MIN;
	volatile uint32_t t85 = 473464023U;

	t85 = (x393^(x394-(x395&x396)));

	if (t85 != 4294934520U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x401 = 21237U;
	volatile int32_t x402 = 32140497;
	uint16_t x403 = 4567U;
	int32_t x404 = -1;
	int32_t t86 = -277;

	t86 = (x401^(x402-(x403&x404)));

	if (t86 != 32114703) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x409 = 4547U;
	uint16_t x410 = 2U;
	int32_t x411 = -17;
	volatile uint8_t x412 = 3U;
	int32_t t87 = 420978;

	t87 = (x409^(x410-(x411&x412)));

	if (t87 != -4548) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = INT16_MIN;
	int32_t x414 = INT32_MIN;
	volatile int8_t x415 = -1;
	int32_t x416 = INT32_MIN;
	volatile int32_t t88 = -150802;

	t88 = (x413^(x414-(x415&x416)));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x417 = 68542708781990350LLU;
	uint8_t x418 = UINT8_MAX;
	static int8_t x419 = INT8_MIN;
	uint32_t x420 = UINT32_MAX;
	volatile uint64_t t89 = 82884LLU;

	t89 = (x417^(x418-(x419&x420)));

	if (t89 != 68542708781990065LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x425 = 22U;
	uint8_t x426 = 51U;
	volatile int16_t x427 = 33;
	int64_t x428 = -1LL;
	int64_t t90 = 123714810618073331LL;

	t90 = (x425^(x426-(x427&x428)));

	if (t90 != 4LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x429 = INT16_MAX;
	uint8_t x430 = 5U;
	uint32_t x431 = 5562257U;
	int32_t x432 = -172;

	t91 = (x429^(x430-(x431&x432)));

	if (t91 != 4289421066U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x434 = 63;
	int64_t x435 = -1690967985599718LL;
	int32_t x436 = INT32_MAX;
	volatile int64_t t92 = -1203828819LL;

	t92 = (x433^(x434-(x435&x436)));

	if (t92 != 9223372035413751077LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x437 = -45;
	int16_t x438 = INT16_MAX;
	volatile int32_t x439 = INT32_MIN;
	static int16_t x440 = INT16_MAX;

	t93 = (x437^(x438-(x439&x440)));

	if (t93 != -32724) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x441 = INT64_MIN;
	static int16_t x444 = -1;
	static volatile int64_t t94 = -5LL;

	t94 = (x441^(x442-(x443&x444)));

	if (t94 != 9223372036854775563LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x446 = -1450;
	static int16_t x448 = INT16_MAX;
	uint32_t t95 = 109299U;

	t95 = (x445^(x446-(x447&x448)));

	if (t95 != 4294933045U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x449 = INT64_MIN;
	int8_t x451 = -1;
	volatile int64_t t96 = -330829214LL;

	t96 = (x449^(x450-(x451&x452)));

	if (t96 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x453 = -1;
	uint8_t x455 = 93U;
	static int8_t x456 = 31;

	t97 = (x453^(x454-(x455&x456)));

	if (t97 != 4294966138U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x457 = INT64_MIN;
	volatile int8_t x458 = INT8_MAX;
	uint8_t x459 = 1U;
	uint8_t x460 = 100U;
	int64_t t98 = -2529167259085181629LL;

	t98 = (x457^(x458-(x459&x460)));

	if (t98 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x461 = -1545;
	uint16_t x462 = 17597U;
	volatile int8_t x464 = 46;

	t99 = (x461^(x462-(x463&x464)));

	if (t99 != -17064) { NG(); } else { ; }
	
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


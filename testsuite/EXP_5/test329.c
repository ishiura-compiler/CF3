#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 3326669LL;
static int32_t x11 = INT32_MIN;
volatile int64_t t2 = -1LL;
int64_t x16 = -6298LL;
static volatile int32_t x17 = 1;
volatile uint64_t t4 = 110481432406177LLU;
uint64_t x24 = 2492044472016801LLU;
int32_t t6 = 309398;
int64_t x41 = INT64_MIN;
static volatile uint64_t x42 = 5285LLU;
int16_t x45 = 0;
volatile int64_t x47 = INT64_MIN;
volatile uint64_t t11 = 26708053761290991LLU;
static int16_t x52 = -12457;
int32_t x53 = -509417;
int8_t x59 = 1;
int8_t x64 = -1;
static volatile int32_t t17 = -3118722;
int32_t x75 = INT32_MAX;
int8_t x77 = INT8_MIN;
int8_t x79 = -16;
int8_t x85 = 59;
volatile int64_t t21 = 43450613LL;
uint64_t x89 = 355LLU;
uint32_t x91 = 2181166U;
int32_t x92 = INT32_MIN;
int32_t x116 = INT32_MAX;
int16_t x119 = INT16_MIN;
int64_t x120 = -1LL;
volatile uint8_t x122 = UINT8_MAX;
static int32_t x124 = -1;
int32_t x126 = -1;
volatile uint64_t x128 = 31905749499LLU;
uint64_t t29 = 3674983LLU;
uint32_t x129 = UINT32_MAX;
volatile uint64_t x131 = 3867379712872863LLU;
uint16_t x137 = UINT16_MAX;
int16_t x138 = -1;
static int8_t x139 = INT8_MAX;
volatile int32_t x154 = -1;
int8_t x156 = INT8_MAX;
volatile int32_t x158 = INT32_MAX;
int8_t x159 = INT8_MAX;
static int64_t x168 = INT64_MIN;
int64_t t38 = 702LL;
volatile int64_t t39 = 11096LL;
int8_t x174 = INT8_MIN;
uint64_t x178 = 986LLU;
uint16_t x184 = UINT16_MAX;
volatile uint8_t x185 = 16U;
int16_t x194 = -1;
int32_t x196 = 68;
int64_t x199 = 108LL;
int8_t x200 = INT8_MIN;
int64_t x204 = INT64_MAX;
static volatile int64_t x206 = 258645758313902475LL;
static int32_t x207 = -99818;
volatile int64_t x211 = -1LL;
static int8_t x212 = INT8_MAX;
uint32_t x218 = 26U;
int16_t x224 = 1;
int16_t x234 = INT16_MAX;
static int32_t x237 = INT32_MIN;
static int32_t x240 = -4516;
volatile int32_t x252 = -146896169;
uint16_t x253 = 26996U;
int8_t x255 = INT8_MIN;
volatile uint16_t x257 = UINT16_MAX;
uint64_t x269 = 1752883860457216LLU;
volatile int16_t x271 = -1;
uint64_t x282 = 538981275374316LLU;
volatile int16_t x289 = -136;
int8_t x300 = -3;
uint64_t t68 = 27514570LLU;
volatile int64_t t69 = 10207410121217188LL;
static uint64_t x308 = 7LLU;
volatile uint32_t t71 = 1U;
static volatile int16_t x313 = INT16_MIN;
volatile uint64_t t73 = 16028626169015253LLU;
static int64_t x323 = -53243902898LL;
static volatile int64_t t75 = -79317029418290419LL;
int8_t x344 = -1;
uint64_t x346 = 1312670LLU;
int64_t x368 = INT64_MIN;
int32_t x370 = -1;
volatile int32_t x383 = -1;
int64_t t89 = 3841429LL;
volatile int64_t t90 = -7LL;
static int64_t x397 = 615474215435593534LL;
static int64_t x403 = -1LL;
volatile int32_t t94 = -175;
int32_t t95 = -9;
int32_t t97 = -1;
int32_t x425 = 97342113;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	volatile int8_t x2 = 1;
	int64_t x3 = -62141627LL;
	int8_t x4 = 0;

	t0 = (x1/((x2-x3)^x4));

	if (t0 != -34LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	static volatile int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	static uint16_t x8 = 692U;
	volatile uint32_t t1 = 4589U;

	t1 = (x5/((x6-x7)^x8));

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MIN;
	uint8_t x12 = 7U;

	t2 = (x9/((x10-x11)^x12));

	if (t2 != -4295032818LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile uint16_t x14 = 7U;
	int64_t x15 = INT64_MAX;
	int64_t t3 = -1021104233891LL;

	t3 = (x13/((x14-x15)^x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 153984484599447184LLU;
	int64_t x19 = INT64_MAX;
	static volatile uint8_t x20 = 8U;

	t4 = (x17/((x18-x19)^x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 4502U;
	uint8_t x22 = UINT8_MAX;
	int8_t x23 = INT8_MAX;
	uint64_t t5 = 100188LLU;

	t5 = (x21/((x22-x23)^x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	uint16_t x26 = UINT16_MAX;
	static volatile int8_t x27 = INT8_MIN;
	uint16_t x28 = 2U;

	t6 = (x25/((x26-x27)^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 54357886;
	int32_t x30 = 54717;
	uint32_t x31 = 7488U;
	int16_t x32 = -1;
	static uint32_t t7 = 10634U;

	t7 = (x29/((x30-x31)^x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	uint32_t x34 = 2U;
	static int16_t x35 = INT16_MIN;
	int64_t x36 = -46600411388LL;
	volatile int64_t t8 = -139495LL;

	t8 = (x33/((x34-x35)^x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MAX;
	uint64_t x38 = 0LLU;
	uint64_t x39 = UINT64_MAX;
	uint32_t x40 = 11249409U;
	volatile uint64_t t9 = 26716LLU;

	t9 = (x37/((x38-x39)^x40));

	if (t9 != 190LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x43 = -1;
	static int32_t x44 = INT32_MIN;
	static volatile uint64_t t10 = 14LLU;

	t10 = (x41/((x42-x43)^x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 230093644969680041LLU;
	uint16_t x48 = 12U;

	t11 = (x45/((x46-x47)^x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	int8_t x50 = -6;
	static int64_t x51 = INT64_MIN;
	volatile int64_t t12 = 115548027899002842LL;

	t12 = (x49/((x50-x51)^x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = 121;
	int16_t x55 = INT16_MIN;
	static int16_t x56 = 0;
	int32_t t13 = 139853;

	t13 = (x53/((x54-x55)^x56));

	if (t13 != -15) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -1;
	uint64_t x58 = 98759946982LLU;
	uint16_t x60 = 1717U;
	uint64_t t14 = 2LLU;

	t14 = (x57/((x58-x59)^x60));

	if (t14 != 186783656LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int32_t x62 = -510;
	int64_t x63 = -1LL;
	static int64_t t15 = -87292028LL;

	t15 = (x61/((x62-x63)^x64));

	if (t15 != -4227330LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = -7320142275964LL;
	uint32_t x67 = 434881U;
	static uint8_t x68 = 6U;
	int64_t t16 = -69384LL;

	t16 = (x65/((x66-x67)^x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 55U;
	volatile int16_t x70 = INT16_MIN;
	volatile int8_t x71 = -1;
	int8_t x72 = INT8_MIN;

	t17 = (x69/((x70-x71)^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint32_t x74 = 4U;
	static int32_t x76 = -563162623;
	static int64_t t18 = 1LL;

	t18 = (x73/((x74-x75)^x76));

	if (t18 != -5821656011LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	uint64_t x80 = UINT64_MAX;
	static uint64_t t19 = 147935997112731LLU;

	t19 = (x77/((x78-x79)^x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	volatile int64_t x82 = INT64_MIN;
	volatile int8_t x83 = INT8_MIN;
	static volatile int64_t x84 = 318654200LL;
	volatile int64_t t20 = -50802LL;

	t20 = (x81/((x82-x83)^x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	static int16_t x87 = -28;
	int64_t x88 = 5402252LL;

	t21 = (x85/((x86-x87)^x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MIN;
	uint64_t t22 = 5535294951LLU;

	t22 = (x89/((x90-x91)^x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 37;
	int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	uint32_t x96 = 132505636U;
	uint32_t t23 = 975046U;

	t23 = (x93/((x94-x95)^x96));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	int32_t x102 = INT32_MIN;
	uint16_t x103 = 0U;
	int64_t x104 = INT64_MIN;
	volatile int64_t t24 = -1LL;

	t24 = (x101/((x102-x103)^x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = 337768528;
	volatile int8_t x106 = -1;
	volatile uint16_t x107 = 4497U;
	uint64_t x108 = 10690595545LLU;
	uint64_t t25 = 1114402LLU;

	t25 = (x105/((x106-x107)^x108));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	static uint32_t x114 = 0U;
	int16_t x115 = -420;
	int64_t t26 = -13563093642435482LL;

	t26 = (x113/((x114-x115)^x116));

	if (t26 != -4294968138LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x117 = 15U;
	int32_t x118 = INT32_MIN;
	static int64_t t27 = 89LL;

	t27 = (x117/((x118-x119)^x120));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MIN;
	static uint32_t x123 = UINT32_MAX;
	volatile uint32_t t28 = 2U;

	t28 = (x121/((x122-x123)^x124));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = -1;
	uint16_t x127 = UINT16_MAX;

	t29 = (x125/((x126-x127)^x128));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x130 = UINT8_MAX;
	static int16_t x132 = INT16_MIN;
	static volatile uint64_t t30 = 70LLU;

	t30 = (x129/((x130-x131)^x132));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = -215499LL;
	static int64_t x134 = -38LL;
	volatile int64_t x135 = -6134058170LL;
	static int8_t x136 = 3;
	volatile int64_t t31 = -2LL;

	t31 = (x133/((x134-x135)^x136));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x140 = -12237;
	int32_t t32 = -5872182;

	t32 = (x137/((x138-x139)^x140));

	if (t32 != 5) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x141 = 436U;
	int8_t x142 = INT8_MIN;
	volatile int32_t x143 = 2870089;
	int64_t x144 = INT64_MIN;
	static volatile int64_t t33 = -412875766988666LL;

	t33 = (x141/((x142-x143)^x144));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MAX;
	uint16_t x146 = 1U;
	int8_t x147 = 5;
	uint32_t x148 = 38247583U;
	int64_t t34 = 3389227207989141931LL;

	t34 = (x145/((x146-x147)^x148));

	if (t34 != 2166779270LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = -1LL;
	uint64_t x151 = 2020963372818509LLU;
	int8_t x152 = INT8_MAX;
	uint64_t t35 = 6264146006076495005LLU;

	t35 = (x149/((x150-x151)^x152));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x153 = -1;
	uint16_t x155 = 7U;
	int32_t t36 = 223;

	t36 = (x153/((x154-x155)^x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x157 = INT64_MIN;
	int8_t x160 = INT8_MAX;
	volatile int64_t t37 = 12693721267LL;

	t37 = (x157/((x158-x159)^x160));

	if (t37 != -4294967298LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = INT16_MAX;
	static int64_t x166 = INT64_MIN;
	static int32_t x167 = INT32_MIN;

	t38 = (x165/((x166-x167)^x168));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x169 = -1LL;
	int8_t x170 = INT8_MIN;
	int32_t x171 = -1;
	static int16_t x172 = -1;

	t39 = (x169/((x170-x171)^x172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MAX;
	int64_t x175 = 58506410542LL;
	int32_t x176 = INT32_MAX;
	int64_t t40 = 80665951523LL;

	t40 = (x173/((x174-x175)^x176));

	if (t40 != -154741089LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MIN;
	int64_t x179 = INT64_MAX;
	uint64_t x180 = 192177LLU;
	volatile uint64_t t41 = 147018379090006LLU;

	t41 = (x177/((x178-x179)^x180));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x181 = INT32_MIN;
	int64_t x182 = -238008687189191LL;
	int8_t x183 = 1;
	volatile int64_t t42 = 20080LL;

	t42 = (x181/((x182-x183)^x184));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x186 = -14;
	volatile int64_t x187 = INT64_MIN;
	uint64_t x188 = 2828519355153463032LLU;
	volatile uint64_t t43 = 82834731315LLU;

	t43 = (x185/((x186-x187)^x188));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 12U;
	static int16_t x190 = INT16_MIN;
	volatile int16_t x191 = INT16_MIN;
	int32_t x192 = -1;
	volatile int32_t t44 = 321;

	t44 = (x189/((x190-x191)^x192));

	if (t44 != -12) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	int8_t x195 = 1;
	volatile int32_t t45 = -27;

	t45 = (x193/((x194-x195)^x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = 14U;
	static int64_t x198 = INT64_MAX;
	int64_t t46 = 5927371330414147LL;

	t46 = (x197/((x198-x199)^x200));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = -1LL;
	int64_t x202 = -179628408892LL;
	int64_t x203 = 1601LL;
	int64_t t47 = 4840LL;

	t47 = (x201/((x202-x203)^x204));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = -893509;
	uint16_t x208 = 28273U;
	volatile int64_t t48 = -1085004524881152LL;

	t48 = (x205/((x206-x207)^x208));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x209 = UINT64_MAX;
	int8_t x210 = 2;
	uint64_t t49 = 268LLU;

	t49 = (x209/((x210-x211)^x212));

	if (t49 != 148764065110560900LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x213 = -1;
	static int32_t x214 = INT32_MIN;
	int32_t x215 = -220965569;
	static int32_t x216 = INT32_MIN;
	int32_t t50 = 1;

	t50 = (x213/((x214-x215)^x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MAX;
	volatile uint64_t x219 = UINT64_MAX;
	uint8_t x220 = 25U;
	volatile uint64_t t51 = 158860LLU;

	t51 = (x217/((x218-x219)^x220));

	if (t51 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x221 = UINT8_MAX;
	int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	volatile int32_t t52 = -4;

	t52 = (x221/((x222-x223)^x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x225 = UINT16_MAX;
	volatile uint16_t x226 = 8U;
	volatile int8_t x227 = -1;
	int64_t x228 = INT64_MIN;
	volatile int64_t t53 = 538677260793LL;

	t53 = (x225/((x226-x227)^x228));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MAX;
	int32_t x230 = -3097;
	volatile uint32_t x231 = UINT32_MAX;
	static int16_t x232 = -6;
	volatile uint32_t t54 = 3931085U;

	t54 = (x229/((x230-x231)^x232));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = INT64_MIN;
	static uint8_t x235 = 2U;
	volatile int8_t x236 = INT8_MIN;
	int64_t t55 = 682701532708LL;

	t55 = (x233/((x234-x235)^x236));

	if (t55 != 282552830219488LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x238 = INT64_MIN;
	int16_t x239 = INT16_MIN;
	int64_t t56 = -29839790947LL;

	t56 = (x237/((x238-x239)^x240));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = -6;
	uint8_t x242 = UINT8_MAX;
	uint64_t x243 = 240914921LLU;
	uint8_t x244 = 46U;
	volatile uint64_t t57 = 7977153364LLU;

	t57 = (x241/((x242-x243)^x244));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = INT64_MIN;
	uint16_t x250 = 6518U;
	uint64_t x251 = 1558591LLU;
	static volatile uint64_t t58 = 56001999179LLU;

	t58 = (x249/((x250-x251)^x252));

	if (t58 != 62194549196LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x254 = UINT64_MAX;
	volatile uint64_t x256 = 75624990268LLU;
	uint64_t t59 = 45452777634LLU;

	t59 = (x253/((x254-x255)^x256));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x258 = UINT64_MAX;
	uint8_t x259 = UINT8_MAX;
	static uint8_t x260 = 94U;
	uint64_t t60 = 258034206795718511LLU;

	t60 = (x257/((x258-x259)^x260));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x265 = 326U;
	volatile int16_t x266 = -1;
	int64_t x267 = -763941095200LL;
	volatile uint16_t x268 = 24818U;
	static int64_t t61 = 3476912570LL;

	t61 = (x265/((x266-x267)^x268));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x270 = -1;
	int16_t x272 = INT16_MIN;
	uint64_t t62 = 5646943833408855LLU;

	t62 = (x269/((x270-x271)^x272));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x273 = INT64_MAX;
	int16_t x274 = -17;
	int32_t x275 = -1;
	volatile int64_t x276 = 171771539945394286LL;
	static volatile int64_t t63 = -626647LL;

	t63 = (x273/((x274-x275)^x276));

	if (t63 != -53LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x281 = UINT64_MAX;
	static volatile int32_t x283 = INT32_MIN;
	int32_t x284 = -1;
	uint64_t t64 = 34881836025394LLU;

	t64 = (x281/((x282-x283)^x284));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = -4852520;
	volatile int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MAX;
	static int32_t x288 = INT32_MAX;
	volatile int32_t t65 = 525768719;

	t65 = (x285/((x286-x287)^x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x290 = -1LL;
	static uint16_t x291 = UINT16_MAX;
	int16_t x292 = -6435;
	int64_t t66 = -5270194780736LL;

	t66 = (x289/((x290-x291)^x292));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x293 = 15;
	int64_t x294 = INT64_MIN;
	int16_t x295 = INT16_MIN;
	static int16_t x296 = INT16_MIN;
	int64_t t67 = 18444LL;

	t67 = (x293/((x294-x295)^x296));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x297 = 1895U;
	uint32_t x298 = 599U;
	uint64_t x299 = UINT64_MAX;

	t68 = (x297/((x298-x299)^x300));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MAX;
	volatile uint32_t x303 = 166U;
	volatile int16_t x304 = -1445;

	t69 = (x301/((x302-x303)^x304));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x305 = INT32_MAX;
	static uint32_t x306 = 1U;
	int32_t x307 = 14453075;
	uint64_t t70 = 400181LLU;

	t70 = (x305/((x306-x307)^x308));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x309 = INT32_MAX;
	uint8_t x310 = 90U;
	volatile int16_t x311 = 104;
	uint32_t x312 = 15U;

	t71 = (x309/((x310-x311)^x312));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x314 = -1;
	static int64_t x315 = INT64_MIN;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t72 = 3842503452005563LLU;

	t72 = (x313/((x314-x315)^x316));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x317 = UINT64_MAX;
	int64_t x318 = 504685LL;
	volatile int8_t x319 = -1;
	int8_t x320 = INT8_MAX;

	t73 = (x317/((x318-x319)^x320));

	if (t73 != 36557669396344LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x321 = UINT64_MAX;
	static volatile uint8_t x322 = UINT8_MAX;
	int16_t x324 = INT16_MIN;
	static uint64_t t74 = 3933596609598449789LLU;

	t74 = (x321/((x322-x323)^x324));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = -208;
	static int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MIN;
	uint32_t x328 = 6U;

	t75 = (x325/((x326-x327)^x328));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x329 = 38U;
	int16_t x330 = -7988;
	volatile int16_t x331 = -1;
	volatile int64_t x332 = INT64_MIN;
	volatile int64_t t76 = 25063520LL;

	t76 = (x329/((x330-x331)^x332));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = -1;
	volatile uint64_t x334 = 1077933436LLU;
	int32_t x335 = INT32_MAX;
	uint32_t x336 = 1821488U;
	uint64_t t77 = 5LLU;

	t77 = (x333/((x334-x335)^x336));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = INT32_MAX;
	int16_t x338 = -1;
	uint64_t x339 = UINT64_MAX;
	static int16_t x340 = -955;
	volatile uint64_t t78 = 12863907197539166LLU;

	t78 = (x337/((x338-x339)^x340));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = INT16_MAX;
	uint8_t x342 = UINT8_MAX;
	int16_t x343 = -1;
	int32_t t79 = 117421643;

	t79 = (x341/((x342-x343)^x344));

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = 0;
	static volatile int16_t x347 = -1;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t80 = 208721383166LLU;

	t80 = (x345/((x346-x347)^x348));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x349 = INT64_MAX;
	volatile int64_t x350 = 4593LL;
	uint64_t x351 = 853549402332LLU;
	int32_t x352 = -1;
	uint64_t t81 = 3312LLU;

	t81 = (x349/((x350-x351)^x352));

	if (t81 != 10805903LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x357 = 32U;
	static int64_t x358 = 236120034LL;
	uint16_t x359 = 848U;
	static volatile int64_t x360 = -1LL;
	int64_t t82 = 1LL;

	t82 = (x357/((x358-x359)^x360));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x361 = UINT32_MAX;
	volatile uint8_t x362 = 10U;
	uint64_t x363 = 5303753961565LLU;
	static uint32_t x364 = 236554U;
	static uint64_t t83 = 97244763145358830LLU;

	t83 = (x361/((x362-x363)^x364));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x365 = INT64_MIN;
	int16_t x366 = 2;
	int16_t x367 = INT16_MIN;
	volatile int64_t t84 = -203813464340946LL;

	t84 = (x365/((x366-x367)^x368));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x369 = -10;
	volatile uint64_t x371 = 12265LLU;
	int16_t x372 = INT16_MIN;
	volatile uint64_t t85 = 56483176714090194LLU;

	t85 = (x369/((x370-x371)^x372));

	if (t85 != 899753393508416LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = -1;
	uint8_t x374 = 10U;
	int16_t x375 = -21;
	uint16_t x376 = 860U;
	static volatile int32_t t86 = 1;

	t86 = (x373/((x374-x375)^x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x377 = INT64_MAX;
	int32_t x378 = INT32_MAX;
	uint16_t x379 = 10U;
	int64_t x380 = INT64_MAX;
	volatile int64_t t87 = 6101971514118198LL;

	t87 = (x377/((x378-x379)^x380));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = INT64_MAX;
	int16_t x382 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x381/((x382-x383)^x384));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x385 = 0;
	static int64_t x386 = INT64_MIN;
	volatile int64_t x387 = INT64_MIN;
	int16_t x388 = -1;

	t89 = (x385/((x386-x387)^x388));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x389 = -1;
	volatile int64_t x390 = -128255333575588416LL;
	uint32_t x391 = UINT32_MAX;
	uint16_t x392 = 0U;

	t90 = (x389/((x390-x391)^x392));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x393 = 0U;
	int64_t x394 = -1LL;
	int32_t x395 = INT32_MIN;
	int8_t x396 = INT8_MAX;
	volatile int64_t t91 = -34286LL;

	t91 = (x393/((x394-x395)^x396));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x398 = -1;
	int8_t x399 = 47;
	int16_t x400 = -1;
	int64_t t92 = -8412964177601413LL;

	t92 = (x397/((x398-x399)^x400));

	if (t92 != 13095196073097734LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x401 = 500445889408LLU;
	static uint16_t x402 = UINT16_MAX;
	uint32_t x404 = UINT32_MAX;
	volatile uint64_t t93 = 2960400LLU;

	t93 = (x401/((x402-x403)^x404));

	if (t93 != 116LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x405 = INT16_MIN;
	volatile int32_t x406 = -369;
	uint16_t x407 = 0U;
	int8_t x408 = -1;

	t94 = (x405/((x406-x407)^x408));

	if (t94 != -89) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x409 = 56;
	int32_t x410 = INT32_MIN;
	int32_t x411 = -307958;
	int32_t x412 = -1;

	t95 = (x409/((x410-x411)^x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x413 = 3LLU;
	int32_t x414 = 255;
	int64_t x415 = -1LL;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t96 = 364925099245592457LLU;

	t96 = (x413/((x414-x415)^x416));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x417 = 114U;
	int16_t x418 = 24;
	static int8_t x419 = INT8_MIN;
	int8_t x420 = -18;

	t97 = (x417/((x418-x419)^x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x421 = UINT8_MAX;
	volatile int32_t x422 = INT32_MIN;
	int16_t x423 = INT16_MIN;
	volatile int32_t x424 = -187112;
	volatile int32_t t98 = 7646;

	t98 = (x421/((x422-x423)^x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x426 = INT16_MAX;
	int8_t x427 = INT8_MIN;
	int16_t x428 = -1;
	volatile int32_t t99 = 69784;

	t99 = (x425/((x426-x427)^x428));

	if (t99 != -2959) { NG(); } else { ; }
	
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


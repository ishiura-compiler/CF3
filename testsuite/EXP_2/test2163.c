#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x7 = INT16_MAX;
int8_t x12 = -1;
volatile int64_t x16 = -7LL;
uint8_t x18 = 2U;
volatile uint64_t t7 = 406055582LLU;
int8_t x42 = 13;
int32_t x44 = -84594;
volatile int32_t t9 = 90029;
volatile uint64_t x47 = 28LLU;
volatile uint64_t t10 = 113786575164LLU;
int16_t x49 = INT16_MIN;
int8_t x54 = INT8_MAX;
static int16_t x56 = INT16_MAX;
volatile uint64_t t12 = 48756284046251LLU;
int16_t x66 = -15451;
volatile uint32_t x68 = 79U;
int16_t x69 = INT16_MAX;
volatile int16_t x73 = INT16_MAX;
int32_t x81 = INT32_MIN;
static volatile int16_t x87 = -37;
int32_t x94 = -1;
static int64_t x95 = -5LL;
volatile uint32_t x98 = 893346U;
uint64_t x100 = UINT64_MAX;
int64_t x105 = INT64_MAX;
static int8_t x112 = 22;
static int64_t t26 = -437772LL;
int8_t x113 = -1;
uint32_t x115 = 0U;
uint64_t x117 = 12848004690LLU;
volatile uint32_t x128 = 13U;
volatile uint32_t x129 = UINT32_MAX;
int64_t x132 = 1444LL;
int64_t x133 = -3LL;
static int8_t x135 = -5;
int64_t t32 = 2230416LL;
static int16_t x141 = -1;
volatile int32_t x144 = INT32_MIN;
static uint32_t x151 = UINT32_MAX;
volatile int8_t x152 = -1;
int8_t x163 = 2;
int32_t x167 = INT32_MAX;
int64_t x169 = INT64_MIN;
int8_t x170 = 8;
volatile int64_t t41 = 3282087751LL;
int16_t x179 = INT16_MAX;
uint32_t x180 = 96U;
int64_t x182 = INT64_MAX;
int8_t x186 = 9;
int32_t x196 = INT32_MAX;
uint16_t x197 = UINT16_MAX;
int64_t x199 = INT64_MIN;
static int32_t x202 = -1;
int8_t x209 = -12;
static int16_t x211 = -64;
uint64_t t51 = 11812LLU;
uint8_t x215 = UINT8_MAX;
static int32_t x228 = INT32_MAX;
volatile int64_t t57 = -63224917230745LL;
int64_t x239 = INT64_MAX;
int16_t x240 = INT16_MIN;
int64_t t58 = 519103839948419LL;
volatile int8_t x242 = INT8_MIN;
int32_t x244 = -20764738;
int32_t t59 = 12537;
static int32_t x246 = INT32_MAX;
int64_t x250 = INT64_MAX;
static int16_t x260 = 5;
uint8_t x270 = 1U;
int16_t x272 = INT16_MIN;
int8_t x274 = -10;
int64_t t67 = -10044484341634057LL;
static int64_t t70 = 48468032LL;
static uint8_t x300 = 125U;
int8_t x301 = -50;
volatile int64_t x304 = INT64_MIN;
int64_t t73 = -101998244054554LL;
int64_t x306 = -921546LL;
int32_t x313 = INT32_MAX;
int32_t x317 = INT32_MAX;
volatile uint32_t x325 = 193502176U;
int8_t x351 = INT8_MIN;
int8_t x356 = INT8_MAX;
volatile uint32_t t88 = 58546U;
static uint64_t x368 = 54915987LLU;
uint64_t t89 = 14228LLU;
int32_t x371 = INT32_MIN;
uint32_t x375 = UINT32_MAX;
static volatile uint32_t t91 = 1253708U;
static uint8_t x383 = 0U;
volatile int64_t t93 = -99973LL;
volatile uint64_t t95 = 407LLU;
uint64_t t96 = 7437LLU;
int64_t t97 = -35470996457534LL;
volatile uint64_t x406 = UINT64_MAX;


void f0(void) {
	uint64_t x1 = 1007LLU;
	static volatile int64_t x2 = -1LL;
	uint8_t x3 = 0U;
	static int16_t x4 = -665;
	uint64_t t0 = 95232LLU;

	t0 = ((x1&(x2^x3))%x4);

	if (t0 != 1007LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -8470716441LL;
	int32_t x6 = INT32_MIN;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 2238017447LLU;

	t1 = ((x5&(x6^x7))%x8);

	if (t1 != 18446744065119625191LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MIN;
	static volatile int32_t x11 = INT32_MIN;
	int64_t t2 = 5897439586250LL;

	t2 = ((x9&(x10^x11))%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 182U;
	int16_t x14 = -1;
	static int16_t x15 = INT16_MIN;
	static volatile int64_t t3 = 4374074LL;

	t3 = ((x13&(x14^x15))%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	uint32_t x19 = 1991282707U;
	int32_t x20 = 73943;
	uint32_t t4 = 35914710U;

	t4 = ((x17&(x18^x19))%x20);

	if (t4 != 17U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 7;
	static int64_t x22 = INT64_MIN;
	uint16_t x23 = UINT16_MAX;
	volatile uint64_t x24 = 761849264468933022LLU;
	uint64_t t5 = 564701LLU;

	t5 = ((x21&(x22^x23))%x24);

	if (t5 != 7LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = 246LL;
	int32_t x27 = -12606780;
	int32_t x28 = INT32_MIN;
	static int64_t t6 = 552250007785039898LL;

	t6 = ((x25&(x26^x27))%x28);

	if (t6 != -12606976LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	uint64_t x30 = UINT64_MAX;
	int16_t x31 = INT16_MIN;
	uint16_t x32 = 1970U;

	t7 = ((x29&(x30^x31))%x32);

	if (t7 != 1247LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	static int8_t x38 = -1;
	int8_t x39 = INT8_MIN;
	uint32_t x40 = UINT32_MAX;
	volatile uint32_t t8 = 47735U;

	t8 = ((x37&(x38^x39))%x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	int8_t x43 = INT8_MIN;

	t9 = ((x41&(x42^x43))%x44);

	if (t9 != -115) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	static int64_t x46 = -48833989LL;
	static int16_t x48 = INT16_MAX;

	t10 = ((x45&(x46^x47))%x48);

	if (t10 != 21604LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x50 = 28805U;
	int64_t x51 = -1LL;
	uint32_t x52 = 2U;
	int64_t t11 = -1176211782459635LL;

	t11 = ((x49&(x50^x51))%x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MAX;
	uint64_t x55 = UINT64_MAX;

	t12 = ((x53&(x54^x55))%x56);

	if (t12 != 32647LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MAX;
	int64_t x58 = INT64_MAX;
	static uint32_t x59 = 212955181U;
	volatile int16_t x60 = 1;
	volatile int64_t t13 = 46782LL;

	t13 = ((x57&(x58^x59))%x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = -1;
	volatile int8_t x62 = INT8_MIN;
	static volatile int16_t x63 = 8;
	int64_t x64 = INT64_MIN;
	int64_t t14 = 190016LL;

	t14 = ((x61&(x62^x63))%x64);

	if (t14 != -120LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	int16_t x67 = INT16_MIN;
	volatile uint64_t t15 = 55211LLU;

	t15 = ((x65&(x66^x67))%x68);

	if (t15 != 16LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x70 = INT8_MIN;
	static uint32_t x71 = UINT32_MAX;
	uint16_t x72 = UINT16_MAX;
	uint32_t t16 = 383578U;

	t16 = ((x69&(x70^x71))%x72);

	if (t16 != 127U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x74 = 0LLU;
	static volatile uint16_t x75 = 2381U;
	int64_t x76 = -1556948361LL;
	volatile uint64_t t17 = 139249376211LLU;

	t17 = ((x73&(x74^x75))%x76);

	if (t17 != 2381LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = -1;
	int16_t x78 = 36;
	static volatile uint8_t x79 = 1U;
	static volatile uint32_t x80 = 10099U;
	uint32_t t18 = 6U;

	t18 = ((x77&(x78^x79))%x80);

	if (t18 != 37U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x82 = INT8_MIN;
	uint8_t x83 = UINT8_MAX;
	static int16_t x84 = INT16_MIN;
	volatile int32_t t19 = 440;

	t19 = ((x81&(x82^x83))%x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 61LLU;
	static int16_t x86 = -1;
	static int8_t x88 = -1;
	volatile uint64_t t20 = 32012436706943LLU;

	t20 = ((x85&(x86^x87))%x88);

	if (t20 != 36LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = 209121738868825LL;
	static volatile uint16_t x90 = 24299U;
	static int16_t x91 = INT16_MIN;
	int16_t x92 = INT16_MAX;
	int64_t t21 = 217793446LL;

	t21 = ((x89&(x90^x91))%x92);

	if (t21 != 9986LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x93 = INT32_MAX;
	int64_t x96 = INT64_MIN;
	volatile int64_t t22 = -21922784238LL;

	t22 = ((x93&(x94^x95))%x96);

	if (t22 != 4LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	volatile int64_t x99 = INT64_MAX;
	static uint64_t t23 = 607348759489197692LLU;

	t23 = ((x97&(x98^x99))%x100);

	if (t23 != 9223372036853882368LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = INT64_MIN;
	static int8_t x102 = INT8_MIN;
	static int16_t x103 = -1;
	uint16_t x104 = 16108U;
	volatile int64_t t24 = 1869242742472LL;

	t24 = ((x101&(x102^x103))%x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x106 = INT8_MIN;
	int8_t x107 = -1;
	static int16_t x108 = INT16_MAX;
	volatile int64_t t25 = -448588249775792034LL;

	t25 = ((x105&(x106^x107))%x108);

	if (t25 != 127LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	static volatile int16_t x110 = 652;
	int64_t x111 = 2009990456955178LL;

	t26 = ((x109&(x110^x111))%x112);

	if (t26 != 12LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x114 = 6U;
	static volatile uint64_t x116 = 4696126088392208504LLU;
	uint64_t t27 = 2838775800475LLU;

	t27 = ((x113&(x114^x115))%x116);

	if (t27 != 6LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x118 = INT8_MAX;
	volatile int32_t x119 = -1457;
	int8_t x120 = -1;
	uint64_t t28 = 1260278678LLU;

	t28 = ((x117&(x118^x119))%x120);

	if (t28 != 12848003600LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -1;
	int64_t x122 = INT64_MAX;
	int8_t x123 = INT8_MAX;
	static uint16_t x124 = UINT16_MAX;
	volatile int64_t t29 = -45611143052LL;

	t29 = ((x121&(x122^x123))%x124);

	if (t29 != 32640LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = 31599315580LL;
	static uint32_t x126 = 10118U;
	static int8_t x127 = -1;
	volatile int64_t t30 = 251LL;

	t30 = ((x125&(x126^x127))%x128);

	if (t30 != 7LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = INT8_MAX;
	int8_t x131 = -1;
	int64_t t31 = 476418124675LL;

	t31 = ((x129&(x130^x131))%x132);

	if (t31 != 1436LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x134 = 2LL;
	int16_t x136 = INT16_MAX;

	t32 = ((x133&(x134^x135))%x136);

	if (t32 != -7LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = -1;
	uint16_t x138 = 99U;
	int16_t x139 = 1;
	int16_t x140 = 8132;
	int32_t t33 = -409162;

	t33 = ((x137&(x138^x139))%x140);

	if (t33 != 98) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x142 = 5U;
	int64_t x143 = INT64_MIN;
	volatile int64_t t34 = 5643846157LL;

	t34 = ((x141&(x142^x143))%x144);

	if (t34 != -2147483643LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x145 = INT16_MIN;
	int16_t x146 = 9;
	volatile int32_t x147 = INT32_MIN;
	int16_t x148 = INT16_MIN;
	volatile int32_t t35 = 1;

	t35 = ((x145&(x146^x147))%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x149 = INT32_MIN;
	volatile int64_t x150 = 0LL;
	int64_t t36 = 16766725777LL;

	t36 = ((x149&(x150^x151))%x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x153 = -1;
	static int8_t x154 = INT8_MIN;
	uint32_t x155 = UINT32_MAX;
	volatile int64_t x156 = INT64_MAX;
	int64_t t37 = 21044707219LL;

	t37 = ((x153&(x154^x155))%x156);

	if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -11;
	int64_t x158 = 2383090116635158LL;
	int64_t x159 = INT64_MIN;
	volatile int64_t x160 = -6LL;
	int64_t t38 = 1LL;

	t38 = ((x157&(x158^x159))%x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	volatile uint64_t x162 = 6022694049LLU;
	static uint64_t x164 = UINT64_MAX;
	static volatile uint64_t t39 = 5500LLU;

	t39 = ((x161&(x162^x163))%x164);

	if (t39 != 4294967296LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 10LLU;
	uint16_t x166 = UINT16_MAX;
	volatile int8_t x168 = INT8_MIN;
	volatile uint64_t t40 = 3737584126837685611LLU;

	t40 = ((x165&(x166^x167))%x168);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x171 = INT64_MAX;
	volatile int16_t x172 = 1578;

	t41 = ((x169&(x170^x171))%x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x173 = 62;
	volatile int16_t x174 = -1;
	int64_t x175 = INT64_MIN;
	int8_t x176 = -1;
	int64_t t42 = 13942413396385399LL;

	t42 = ((x173&(x174^x175))%x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = UINT8_MAX;
	int8_t x178 = -1;
	static uint32_t t43 = 4433879U;

	t43 = ((x177&(x178^x179))%x180);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x181 = INT16_MIN;
	int16_t x183 = INT16_MIN;
	static int16_t x184 = -7647;
	int64_t t44 = 13954596LL;

	t44 = ((x181&(x182^x183))%x184);

	if (t44 != -2720LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x185 = 1U;
	int8_t x187 = INT8_MAX;
	volatile uint16_t x188 = 111U;
	volatile int32_t t45 = 39644;

	t45 = ((x185&(x186^x187))%x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -1;
	int16_t x190 = -1;
	uint16_t x191 = 4335U;
	uint64_t x192 = 11LLU;
	static uint64_t t46 = 6119961444181LLU;

	t46 = ((x189&(x190^x191))%x192);

	if (t46 != 3LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = UINT8_MAX;
	volatile uint8_t x194 = UINT8_MAX;
	uint64_t x195 = UINT64_MAX;
	volatile uint64_t t47 = 210451213033LLU;

	t47 = ((x193&(x194^x195))%x196);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x198 = 3LL;
	int64_t x200 = -251875920462023LL;
	int64_t t48 = 4LL;

	t48 = ((x197&(x198^x199))%x200);

	if (t48 != 3LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	static uint64_t x203 = 15354237212LLU;
	volatile int16_t x204 = INT16_MIN;
	uint64_t t49 = 434854214215LLU;

	t49 = ((x201&(x202^x203))%x204);

	if (t49 != 18446744056529682432LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x205 = 458LL;
	int64_t x206 = 748944855153LL;
	int16_t x207 = INT16_MAX;
	int32_t x208 = INT32_MAX;
	static int64_t t50 = 66624549882LL;

	t50 = ((x205&(x206^x207))%x208);

	if (t50 != 394LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x210 = INT8_MAX;
	uint64_t x212 = UINT64_MAX;

	t51 = ((x209&(x210^x211))%x212);

	if (t51 != 18446744073709551540LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x213 = 8704578480738LLU;
	int32_t x214 = INT32_MIN;
	int32_t x216 = INT32_MIN;
	volatile uint64_t t52 = 796397LLU;

	t52 = ((x213&(x214^x215))%x216);

	if (t52 != 8703751225442LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = 31452146287LL;
	volatile uint16_t x218 = 64U;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -1LL;
	int64_t t53 = 4871722242LL;

	t53 = ((x217&(x218^x219))%x220);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = -13;
	volatile int32_t x222 = INT32_MAX;
	uint8_t x223 = 3U;
	volatile int8_t x224 = -5;
	static volatile int32_t t54 = 65;

	t54 = ((x221&(x222^x223))%x224);

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x225 = 1;
	volatile uint16_t x226 = 6U;
	static int16_t x227 = -1;
	int32_t t55 = -230131;

	t55 = ((x225&(x226^x227))%x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = -229;
	uint8_t x230 = 29U;
	int64_t x231 = INT64_MIN;
	uint32_t x232 = 15U;
	static volatile int64_t t56 = -735631030512170103LL;

	t56 = ((x229&(x230^x231))%x232);

	if (t56 != -13LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = -15;
	uint8_t x234 = 17U;
	static int64_t x235 = INT64_MAX;
	volatile int8_t x236 = 19;

	t57 = ((x233&(x234^x235))%x236);

	if (t57 != 5LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x237 = 1595027226U;
	uint16_t x238 = UINT16_MAX;

	t58 = ((x237&(x238^x239))%x240);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x241 = -1;
	static int32_t x243 = INT32_MIN;

	t59 = ((x241&(x242^x243))%x244);

	if (t59 != 8715506) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = INT64_MIN;
	static uint8_t x247 = 6U;
	static int16_t x248 = INT16_MIN;
	int64_t t60 = -31516024LL;

	t60 = ((x245&(x246^x247))%x248);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = INT64_MIN;
	int32_t x251 = INT32_MAX;
	int32_t x252 = -1;
	int64_t t61 = 1785785LL;

	t61 = ((x249&(x250^x251))%x252);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = 2;
	int8_t x254 = -26;
	int32_t x255 = 112;
	int16_t x256 = INT16_MAX;
	volatile int32_t t62 = 164195133;

	t62 = ((x253&(x254^x255))%x256);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x257 = INT32_MAX;
	static int32_t x258 = INT32_MAX;
	int8_t x259 = INT8_MAX;
	volatile int32_t t63 = 226;

	t63 = ((x257&(x258^x259))%x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x261 = INT32_MIN;
	volatile uint32_t x262 = 7739836U;
	int32_t x263 = INT32_MAX;
	uint64_t x264 = 512202172206389LLU;
	uint64_t t64 = 56146703789136LLU;

	t64 = ((x261&(x262^x263))%x264);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x265 = INT16_MAX;
	static uint32_t x266 = UINT32_MAX;
	volatile int32_t x267 = INT32_MIN;
	volatile uint64_t x268 = 8572LLU;
	uint64_t t65 = 1199LLU;

	t65 = ((x265&(x266^x267))%x268);

	if (t65 != 7051LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = INT16_MAX;
	uint8_t x271 = UINT8_MAX;
	int32_t t66 = 602343457;

	t66 = ((x269&(x270^x271))%x272);

	if (t66 != 254) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = -5;
	uint16_t x275 = 349U;
	static int64_t x276 = -5548896LL;

	t67 = ((x273&(x274^x275))%x276);

	if (t67 != -341LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MIN;
	int16_t x279 = 17;
	uint32_t x280 = 30870U;
	static volatile uint32_t t68 = 5845956U;

	t68 = ((x277&(x278^x279))%x280);

	if (t68 != 12098U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = INT64_MIN;
	static volatile int16_t x282 = INT16_MIN;
	static uint32_t x283 = 8263825U;
	int32_t x284 = -1;
	int64_t t69 = -3162532219509481240LL;

	t69 = ((x281&(x282^x283))%x284);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x285 = 3;
	uint32_t x286 = UINT32_MAX;
	int16_t x287 = INT16_MAX;
	static int64_t x288 = 3101LL;

	t70 = ((x285&(x286^x287))%x288);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = 94;
	static uint32_t x294 = UINT32_MAX;
	int16_t x295 = INT16_MIN;
	volatile int16_t x296 = -988;
	volatile uint32_t t71 = 1U;

	t71 = ((x293&(x294^x295))%x296);

	if (t71 != 94U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = -68LL;
	int64_t x298 = INT64_MIN;
	int64_t x299 = -539432892002LL;
	volatile int64_t t72 = 1859208LL;

	t72 = ((x297&(x298^x299))%x300);

	if (t72 != 54LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x302 = UINT8_MAX;
	static int64_t x303 = -57336786070426774LL;

	t73 = ((x301&(x302^x303))%x304);

	if (t73 != -57336786070426748LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x305 = -1LL;
	int16_t x307 = -1;
	volatile int16_t x308 = INT16_MIN;
	static volatile int64_t t74 = -1620997826724LL;

	t74 = ((x305&(x306^x307))%x308);

	if (t74 != 4041LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = -1;
	int64_t x310 = -1LL;
	int8_t x311 = INT8_MAX;
	static uint64_t x312 = 2967105608LLU;
	volatile uint64_t t75 = 7LLU;

	t75 = ((x309&(x310^x311))%x312);

	if (t75 != 1810459056LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x314 = 2;
	uint16_t x315 = 421U;
	int16_t x316 = 6326;
	volatile int32_t t76 = 981653;

	t76 = ((x313&(x314^x315))%x316);

	if (t76 != 423) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x318 = 19639577U;
	uint32_t x319 = UINT32_MAX;
	uint8_t x320 = UINT8_MAX;
	volatile uint32_t t77 = 6U;

	t77 = ((x317&(x318^x319))%x320);

	if (t77 != 140U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x321 = -48036;
	static int8_t x322 = INT8_MIN;
	int32_t x323 = -836441;
	uint8_t x324 = UINT8_MAX;
	int32_t t78 = 13;

	t78 = ((x321&(x322^x323))%x324);

	if (t78 != 80) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x326 = 1;
	int8_t x327 = -14;
	static uint64_t x328 = 10207554LLU;
	static volatile uint64_t t79 = 7180746605414LLU;

	t79 = ((x325&(x326^x327))%x328);

	if (t79 != 9766204LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = UINT64_MAX;
	volatile uint8_t x330 = 68U;
	int8_t x331 = INT8_MIN;
	volatile int32_t x332 = 1986;
	uint64_t t80 = 342008LLU;

	t80 = ((x329&(x330^x331))%x332);

	if (t80 != 1942LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = -1LL;
	int8_t x334 = INT8_MIN;
	volatile uint8_t x335 = 11U;
	int64_t x336 = INT64_MIN;
	static volatile int64_t t81 = -260622916LL;

	t81 = ((x333&(x334^x335))%x336);

	if (t81 != -117LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = INT16_MIN;
	uint32_t x338 = UINT32_MAX;
	int64_t x339 = 8255999LL;
	int32_t x340 = 317;
	volatile int64_t t82 = 8317795917896LL;

	t82 = ((x337&(x338^x339))%x340);

	if (t82 != 229LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x341 = 0;
	int32_t x342 = -35483;
	volatile uint8_t x343 = 4U;
	int16_t x344 = INT16_MIN;
	int32_t t83 = 0;

	t83 = ((x341&(x342^x343))%x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MAX;
	volatile uint8_t x346 = 2U;
	int16_t x347 = -222;
	int8_t x348 = INT8_MAX;
	volatile int32_t t84 = -714267;

	t84 = ((x345&(x346^x347))%x348);

	if (t84 != 32) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x349 = INT16_MAX;
	static uint32_t x350 = 100356U;
	int32_t x352 = INT32_MAX;
	static uint32_t t85 = 49U;

	t85 = ((x349&(x350^x351))%x352);

	if (t85 != 30596U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x353 = UINT64_MAX;
	uint32_t x354 = 33543344U;
	static volatile int16_t x355 = INT16_MAX;
	uint64_t t86 = 115153292785666LLU;

	t86 = ((x353&(x354^x355))%x356);

	if (t86 != 52LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x357 = 2302U;
	int8_t x358 = -1;
	static volatile int8_t x359 = INT8_MIN;
	static volatile uint16_t x360 = 13U;
	int32_t t87 = -184;

	t87 = ((x357&(x358^x359))%x360);

	if (t87 != 9) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = UINT32_MAX;
	int8_t x362 = -42;
	uint16_t x363 = UINT16_MAX;
	int8_t x364 = -1;

	t88 = ((x361&(x362^x363))%x364);

	if (t88 != 4294901801U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x365 = UINT16_MAX;
	int16_t x366 = 968;
	int16_t x367 = INT16_MAX;

	t89 = ((x365&(x366^x367))%x368);

	if (t89 != 31799LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x369 = 5LL;
	volatile int8_t x370 = -4;
	volatile int8_t x372 = -1;
	volatile int64_t t90 = -50448930LL;

	t90 = ((x369&(x370^x371))%x372);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = INT8_MIN;
	static int8_t x374 = -1;
	uint16_t x376 = 11U;

	t91 = ((x373&(x374^x375))%x376);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x377 = 789132586U;
	uint32_t x378 = 1008420139U;
	int16_t x379 = INT16_MAX;
	volatile int8_t x380 = 1;
	uint32_t t92 = 468717648U;

	t92 = ((x377&(x378^x379))%x380);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x381 = 86;
	int64_t x382 = -1LL;
	uint32_t x384 = UINT32_MAX;

	t93 = ((x381&(x382^x383))%x384);

	if (t93 != 86LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x385 = 77U;
	int64_t x386 = INT64_MIN;
	static int64_t x387 = INT64_MIN;
	int64_t x388 = -3LL;
	static volatile int64_t t94 = 10486238390LL;

	t94 = ((x385&(x386^x387))%x388);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = -1;
	uint64_t x394 = 237936647LLU;
	int32_t x395 = -1;
	uint16_t x396 = 5642U;

	t95 = ((x393&(x394^x395))%x396);

	if (t95 != 3434LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = INT64_MAX;
	static int16_t x398 = INT16_MIN;
	static uint8_t x399 = 8U;
	static uint64_t x400 = UINT64_MAX;

	t96 = ((x397&(x398^x399))%x400);

	if (t96 != 9223372036854743048LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x401 = 1043812990U;
	int64_t x402 = INT64_MIN;
	int8_t x403 = 7;
	int32_t x404 = 50141990;

	t97 = ((x401&(x402^x403))%x404);

	if (t97 != 6LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x405 = -1;
	volatile int16_t x407 = INT16_MAX;
	uint64_t x408 = 76LLU;
	static volatile uint64_t t98 = 492407539263473LLU;

	t98 = ((x405&(x406^x407))%x408);

	if (t98 != 24LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x409 = -1;
	static uint32_t x410 = UINT32_MAX;
	uint64_t x411 = 65080849LLU;
	static int32_t x412 = -1;
	volatile uint64_t t99 = 1094LLU;

	t99 = ((x409&(x410^x411))%x412);

	if (t99 != 4229886446LLU) { NG(); } else { ; }
	
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


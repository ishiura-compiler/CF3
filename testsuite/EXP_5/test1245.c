#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x5 = 0;
volatile uint64_t x20 = UINT64_MAX;
static int64_t x21 = -55174427705712413LL;
int32_t x24 = INT32_MIN;
uint16_t x34 = UINT16_MAX;
int32_t x36 = INT32_MAX;
int64_t x44 = INT64_MIN;
volatile uint32_t x45 = 44866300U;
int16_t x55 = INT16_MIN;
static volatile int32_t t16 = -4302;
int32_t x72 = INT32_MIN;
int64_t x84 = -97275473LL;
static volatile int32_t t20 = 1;
int16_t x85 = -1;
static int8_t x89 = INT8_MIN;
volatile int16_t x90 = INT16_MIN;
int8_t x92 = -5;
static uint32_t x100 = UINT32_MAX;
uint32_t x102 = 884260U;
int64_t x106 = INT64_MIN;
volatile int16_t x107 = INT16_MAX;
static volatile uint32_t x110 = 6572U;
int64_t x112 = -23763LL;
static volatile int32_t t27 = 128138;
static int32_t x115 = INT32_MIN;
volatile int32_t t32 = -189154;
uint64_t x133 = 514341381381LLU;
int16_t x142 = INT16_MIN;
volatile int32_t x144 = INT32_MIN;
int32_t t36 = 822;
static volatile int8_t x155 = INT8_MIN;
int32_t t37 = 9;
int16_t x158 = INT16_MIN;
static int8_t x159 = 0;
int16_t x163 = INT16_MIN;
uint8_t x167 = 22U;
int64_t x168 = INT64_MIN;
int32_t t40 = 269201;
uint32_t x169 = 269U;
uint8_t x174 = UINT8_MAX;
int32_t x176 = -1;
static volatile int32_t t44 = -283283742;
int64_t x185 = -1LL;
int32_t x190 = INT32_MIN;
int32_t x192 = -854;
static volatile int32_t t49 = 20319388;
int32_t x205 = 22589418;
static uint32_t x208 = UINT32_MAX;
int32_t x215 = -1240;
int32_t x220 = INT32_MAX;
int32_t x221 = INT32_MAX;
int32_t t54 = -6931;
volatile int32_t x226 = INT32_MIN;
static volatile int16_t x227 = 1;
uint8_t x230 = 0U;
volatile int32_t x231 = INT32_MAX;
volatile int16_t x232 = -10;
int8_t x233 = -1;
uint64_t x236 = UINT64_MAX;
int32_t t57 = -127524;
volatile int32_t x237 = 185343550;
int64_t x240 = -737567LL;
static int32_t t58 = 33782;
int32_t x254 = INT32_MIN;
static uint16_t x258 = UINT16_MAX;
volatile int32_t t63 = -62;
uint32_t x263 = 3505688U;
int32_t x277 = -1;
int16_t x278 = 3;
volatile int32_t t72 = 100;
uint16_t x301 = UINT16_MAX;
int32_t x305 = INT32_MIN;
uint8_t x308 = 7U;
static int8_t x310 = -1;
uint32_t x314 = 9763U;
static int32_t x318 = INT32_MIN;
static int32_t x329 = -1;
static uint32_t x331 = 904350011U;
volatile int8_t x332 = 23;
int32_t x333 = INT32_MIN;
uint8_t x336 = 2U;
int16_t x340 = INT16_MIN;
volatile int32_t t83 = -230;
uint64_t x347 = 8LLU;
static int8_t x352 = 30;
int32_t t86 = -127;
int32_t x353 = INT32_MIN;
int32_t x357 = INT32_MIN;
volatile uint64_t x358 = 5659235215035555LLU;
int32_t x361 = 30581188;
volatile int32_t t89 = -151117108;
volatile int8_t x368 = 3;
static volatile int32_t t90 = -56054;
uint64_t x369 = 57444LLU;
volatile uint16_t x379 = 11U;
static uint32_t x384 = 340988U;
int32_t x388 = 68993819;
static uint16_t x394 = 7U;
volatile uint8_t x395 = 36U;


void f0(void) {
	volatile int64_t x1 = -1LL;
	static int16_t x2 = INT16_MIN;
	static int64_t x3 = 6251LL;
	static int64_t x4 = INT64_MAX;
	static volatile int32_t t0 = -596;

	t0 = (x1<=((x2==x3)%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x6 = 15U;
	int8_t x7 = INT8_MIN;
	volatile uint8_t x8 = UINT8_MAX;
	int32_t t1 = -89;

	t1 = (x5<=((x6==x7)%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int8_t x10 = INT8_MAX;
	uint64_t x11 = 996346100LLU;
	int16_t x12 = INT16_MIN;
	static int32_t t2 = 7;

	t2 = (x9<=((x10==x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = -1594LL;
	volatile int8_t x15 = 0;
	uint32_t x16 = UINT32_MAX;
	static volatile int32_t t3 = 24789;

	t3 = (x13<=((x14==x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int32_t x18 = -1;
	volatile int16_t x19 = INT16_MIN;
	int32_t t4 = 5;

	t4 = (x17<=((x18==x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x22 = 145U;
	int64_t x23 = INT64_MIN;
	volatile int32_t t5 = -1968;

	t5 = (x21<=((x22==x23)%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static int64_t x26 = -1LL;
	volatile int16_t x27 = 158;
	volatile int64_t x28 = 36LL;
	volatile int32_t t6 = 478157;

	t6 = (x25<=((x26==x27)%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MIN;
	volatile uint8_t x31 = 26U;
	volatile int8_t x32 = -1;
	volatile int32_t t7 = -55;

	t7 = (x29<=((x30==x31)%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 2620;
	uint64_t x35 = 1400590474LLU;
	int32_t t8 = -61945097;

	t8 = (x33<=((x34==x35)%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	uint16_t x38 = UINT16_MAX;
	int8_t x39 = -1;
	uint32_t x40 = 3191U;
	static volatile int32_t t9 = 41;

	t9 = (x37<=((x38==x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = UINT64_MAX;
	int64_t x42 = INT64_MIN;
	int16_t x43 = INT16_MAX;
	int32_t t10 = 17;

	t10 = (x41<=((x42==x43)%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x46 = INT16_MIN;
	volatile int16_t x47 = -1;
	int8_t x48 = -1;
	volatile int32_t t11 = 175954;

	t11 = (x45<=((x46==x47)%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = UINT16_MAX;
	static int32_t x50 = INT32_MAX;
	int16_t x51 = -1;
	volatile int16_t x52 = 247;
	int32_t t12 = 11491;

	t12 = (x49<=((x50==x51)%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = INT16_MAX;
	int16_t x54 = INT16_MAX;
	uint8_t x56 = UINT8_MAX;
	static int32_t t13 = -13871813;

	t13 = (x53<=((x54==x55)%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 3;
	int32_t x58 = INT32_MIN;
	int16_t x59 = -231;
	volatile int8_t x60 = -1;
	volatile int32_t t14 = 14448;

	t14 = (x57<=((x58==x59)%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 387;
	uint64_t x62 = UINT64_MAX;
	static int64_t x63 = INT64_MIN;
	int32_t x64 = -6275215;
	volatile int32_t t15 = 0;

	t15 = (x61<=((x62==x63)%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	volatile uint32_t x66 = UINT32_MAX;
	static int32_t x67 = INT32_MAX;
	static volatile int16_t x68 = INT16_MIN;

	t16 = (x65<=((x66==x67)%x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	uint8_t x70 = 6U;
	int8_t x71 = 28;
	int32_t t17 = 46884;

	t17 = (x69<=((x70==x71)%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 1;
	volatile int32_t x74 = INT32_MIN;
	int64_t x75 = INT64_MIN;
	int64_t x76 = -889183247LL;
	int32_t t18 = 32051;

	t18 = (x73<=((x74==x75)%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	static int16_t x78 = INT16_MIN;
	static int8_t x79 = INT8_MIN;
	int64_t x80 = 384837244LL;
	int32_t t19 = 6;

	t19 = (x77<=((x78==x79)%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	static int16_t x82 = 0;
	int32_t x83 = -1;

	t20 = (x81<=((x82==x83)%x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MAX;
	int8_t x87 = INT8_MIN;
	volatile int8_t x88 = INT8_MIN;
	int32_t t21 = 32842465;

	t21 = (x85<=((x86==x87)%x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x91 = INT32_MIN;
	int32_t t22 = -164;

	t22 = (x89<=((x90==x91)%x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	volatile int16_t x94 = INT16_MIN;
	uint32_t x95 = 113U;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = -10729;

	t23 = (x93<=((x94==x95)%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MAX;
	static int64_t x98 = INT64_MAX;
	static int16_t x99 = -567;
	volatile int32_t t24 = 19;

	t24 = (x97<=((x98==x99)%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = 21;
	int16_t x103 = INT16_MIN;
	int32_t x104 = INT32_MIN;
	volatile int32_t t25 = -98;

	t25 = (x101<=((x102==x103)%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	int8_t x108 = INT8_MAX;
	int32_t t26 = -1322;

	t26 = (x105<=((x106==x107)%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MAX;
	int32_t x111 = 10575254;

	t27 = (x109<=((x110==x111)%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 12U;
	uint32_t x114 = UINT32_MAX;
	int32_t x116 = INT32_MAX;
	static volatile int32_t t28 = 15961;

	t28 = (x113<=((x114==x115)%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	volatile int8_t x118 = INT8_MAX;
	int16_t x119 = INT16_MIN;
	static uint32_t x120 = 802084U;
	static int32_t t29 = 3064929;

	t29 = (x117<=((x118==x119)%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	volatile uint16_t x122 = UINT16_MAX;
	volatile int32_t x123 = INT32_MIN;
	uint64_t x124 = UINT64_MAX;
	int32_t t30 = 11;

	t30 = (x121<=((x122==x123)%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 12;
	uint16_t x126 = 355U;
	volatile uint16_t x127 = UINT16_MAX;
	static volatile uint8_t x128 = 25U;
	volatile int32_t t31 = 2;

	t31 = (x125<=((x126==x127)%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	static uint8_t x130 = 0U;
	int16_t x131 = -23;
	uint16_t x132 = 109U;

	t32 = (x129<=((x130==x131)%x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = INT8_MAX;
	volatile int32_t x135 = INT32_MIN;
	volatile int8_t x136 = 2;
	volatile int32_t t33 = -1;

	t33 = (x133<=((x134==x135)%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = 0;
	int32_t x143 = INT32_MAX;
	volatile int32_t t34 = -171509164;

	t34 = (x141<=((x142==x143)%x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	int8_t x146 = -1;
	uint32_t x147 = 10258U;
	static volatile uint16_t x148 = UINT16_MAX;
	volatile int32_t t35 = 1072672;

	t35 = (x145<=((x146==x147)%x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x149 = INT64_MIN;
	volatile int64_t x150 = -1LL;
	uint16_t x151 = 17431U;
	int64_t x152 = INT64_MAX;

	t36 = (x149<=((x150==x151)%x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MIN;
	static volatile int64_t x154 = -1LL;
	uint64_t x156 = UINT64_MAX;

	t37 = (x153<=((x154==x155)%x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x157 = 991320;
	volatile uint16_t x160 = 14191U;
	volatile int32_t t38 = 28728636;

	t38 = (x157<=((x158==x159)%x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 64245168U;
	int16_t x162 = -22;
	int64_t x164 = INT64_MIN;
	volatile int32_t t39 = -1;

	t39 = (x161<=((x162==x163)%x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MIN;
	uint32_t x166 = 1983326U;

	t40 = (x165<=((x166==x167)%x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x170 = 26603770U;
	int16_t x171 = -124;
	int64_t x172 = -137LL;
	int32_t t41 = 58;

	t41 = (x169<=((x170==x171)%x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = 5574155018LLU;
	uint64_t x175 = 21955625087LLU;
	volatile int32_t t42 = 3893527;

	t42 = (x173<=((x174==x175)%x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 114U;
	int8_t x178 = INT8_MAX;
	uint64_t x179 = UINT64_MAX;
	int8_t x180 = INT8_MAX;
	volatile int32_t t43 = -18952;

	t43 = (x177<=((x178==x179)%x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MIN;
	static volatile int32_t x182 = -1;
	int16_t x183 = -1;
	uint16_t x184 = UINT16_MAX;

	t44 = (x181<=((x182==x183)%x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x186 = 2U;
	static uint32_t x187 = 346817324U;
	uint64_t x188 = 6LLU;
	int32_t t45 = -134373;

	t45 = (x185<=((x186==x187)%x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = INT64_MIN;
	int64_t x191 = -1LL;
	static volatile int32_t t46 = 6350171;

	t46 = (x189<=((x190==x191)%x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x193 = 1;
	int64_t x194 = INT64_MAX;
	static int8_t x195 = INT8_MIN;
	uint32_t x196 = 245215331U;
	volatile int32_t t47 = -202;

	t47 = (x193<=((x194==x195)%x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x197 = -1;
	int64_t x198 = INT64_MAX;
	int16_t x199 = INT16_MIN;
	int16_t x200 = -126;
	static int32_t t48 = -1547177;

	t48 = (x197<=((x198==x199)%x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -187436LL;
	int8_t x202 = INT8_MAX;
	int16_t x203 = INT16_MAX;
	static int32_t x204 = -1;

	t49 = (x201<=((x202==x203)%x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x206 = UINT64_MAX;
	uint8_t x207 = 113U;
	static volatile int32_t t50 = -235619382;

	t50 = (x205<=((x206==x207)%x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x209 = INT16_MAX;
	int32_t x210 = INT32_MAX;
	volatile int64_t x211 = -1985014901397254374LL;
	volatile int32_t x212 = INT32_MIN;
	int32_t t51 = 2031996;

	t51 = (x209<=((x210==x211)%x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = 28U;
	int64_t x214 = -1562731057796LL;
	int16_t x216 = 11;
	static int32_t t52 = -9;

	t52 = (x213<=((x214==x215)%x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x217 = -1;
	int16_t x218 = -7803;
	int16_t x219 = INT16_MAX;
	static int32_t t53 = 1;

	t53 = (x217<=((x218==x219)%x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x222 = UINT16_MAX;
	volatile int64_t x223 = INT64_MIN;
	int32_t x224 = INT32_MIN;

	t54 = (x221<=((x222==x223)%x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = -60;
	static int32_t x228 = 29232;
	volatile int32_t t55 = 240176253;

	t55 = (x225<=((x226==x227)%x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x229 = UINT32_MAX;
	int32_t t56 = -10491541;

	t56 = (x229<=((x230==x231)%x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x234 = UINT16_MAX;
	volatile int16_t x235 = INT16_MIN;

	t57 = (x233<=((x234==x235)%x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x238 = 1U;
	int8_t x239 = -1;

	t58 = (x237<=((x238==x239)%x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x241 = 14953752U;
	int16_t x242 = INT16_MAX;
	static int32_t x243 = -7;
	static int16_t x244 = -73;
	static int32_t t59 = -41360457;

	t59 = (x241<=((x242==x243)%x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x245 = 4922U;
	int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MIN;
	volatile int64_t x248 = INT64_MIN;
	volatile int32_t t60 = 109405;

	t60 = (x245<=((x246==x247)%x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x249 = UINT8_MAX;
	int16_t x250 = INT16_MAX;
	uint16_t x251 = 948U;
	static int16_t x252 = -1;
	volatile int32_t t61 = -3860;

	t61 = (x249<=((x250==x251)%x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = INT16_MIN;
	volatile uint8_t x255 = 7U;
	int64_t x256 = INT64_MIN;
	volatile int32_t t62 = 48338;

	t62 = (x253<=((x254==x255)%x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MIN;
	int8_t x259 = -1;
	int64_t x260 = INT64_MIN;

	t63 = (x257<=((x258==x259)%x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x261 = 7807;
	int8_t x262 = 1;
	int8_t x264 = 3;
	volatile int32_t t64 = 165124194;

	t64 = (x261<=((x262==x263)%x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = -142736;
	int32_t x266 = -1;
	uint64_t x267 = 7598235LLU;
	uint64_t x268 = 10579707018606LLU;
	int32_t t65 = -6;

	t65 = (x265<=((x266==x267)%x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x269 = UINT16_MAX;
	volatile uint32_t x270 = 273362U;
	volatile uint64_t x271 = UINT64_MAX;
	uint64_t x272 = 2583974449LLU;
	int32_t t66 = 31514064;

	t66 = (x269<=((x270==x271)%x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = 0;
	int8_t x274 = -41;
	static int16_t x275 = -124;
	int32_t x276 = INT32_MIN;
	int32_t t67 = 4002542;

	t67 = (x273<=((x274==x275)%x276));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x279 = INT16_MIN;
	static uint32_t x280 = 870U;
	volatile int32_t t68 = -1603098;

	t68 = (x277<=((x278==x279)%x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x281 = INT32_MAX;
	uint16_t x282 = 3U;
	int16_t x283 = INT16_MIN;
	static uint64_t x284 = 461LLU;
	static volatile int32_t t69 = -153787;

	t69 = (x281<=((x282==x283)%x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MIN;
	uint32_t x286 = UINT32_MAX;
	int64_t x287 = -15125340LL;
	volatile int32_t x288 = INT32_MIN;
	int32_t t70 = 1;

	t70 = (x285<=((x286==x287)%x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x289 = UINT32_MAX;
	int32_t x290 = INT32_MIN;
	int32_t x291 = INT32_MAX;
	volatile int8_t x292 = INT8_MIN;
	int32_t t71 = 1022896;

	t71 = (x289<=((x290==x291)%x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = INT32_MAX;
	uint32_t x294 = UINT32_MAX;
	volatile int64_t x295 = INT64_MIN;
	int64_t x296 = -1LL;

	t72 = (x293<=((x294==x295)%x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = INT8_MAX;
	static int16_t x298 = 101;
	uint8_t x299 = 23U;
	int64_t x300 = -1LL;
	int32_t t73 = 2191310;

	t73 = (x297<=((x298==x299)%x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x302 = 9U;
	int64_t x303 = -1LL;
	uint8_t x304 = UINT8_MAX;
	int32_t t74 = 256568;

	t74 = (x301<=((x302==x303)%x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x306 = 26849U;
	uint16_t x307 = UINT16_MAX;
	static volatile int32_t t75 = -1622810;

	t75 = (x305<=((x306==x307)%x308));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x309 = -4;
	uint64_t x311 = 25079564138620278LLU;
	volatile uint8_t x312 = 3U;
	volatile int32_t t76 = -625;

	t76 = (x309<=((x310==x311)%x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x313 = INT64_MAX;
	uint16_t x315 = UINT16_MAX;
	static int64_t x316 = INT64_MIN;
	volatile int32_t t77 = 451;

	t77 = (x313<=((x314==x315)%x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MIN;
	int16_t x319 = -1;
	uint16_t x320 = UINT16_MAX;
	static volatile int32_t t78 = -36079;

	t78 = (x317<=((x318==x319)%x320));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x321 = -34;
	int16_t x322 = INT16_MIN;
	volatile uint32_t x323 = UINT32_MAX;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t79 = 14318122;

	t79 = (x321<=((x322==x323)%x324));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x325 = UINT8_MAX;
	static volatile uint8_t x326 = 1U;
	volatile uint64_t x327 = 2775LLU;
	uint32_t x328 = 29U;
	volatile int32_t t80 = 4021036;

	t80 = (x325<=((x326==x327)%x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x330 = -1;
	static volatile int32_t t81 = 3932;

	t81 = (x329<=((x330==x331)%x332));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x334 = UINT8_MAX;
	int16_t x335 = INT16_MAX;
	static volatile int32_t t82 = 418921;

	t82 = (x333<=((x334==x335)%x336));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x337 = 1758;
	int16_t x338 = INT16_MIN;
	uint64_t x339 = 35034885786LLU;

	t83 = (x337<=((x338==x339)%x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x342 = 1;
	int16_t x343 = INT16_MIN;
	uint64_t x344 = UINT64_MAX;
	int32_t t84 = 27296893;

	t84 = (x341<=((x342==x343)%x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x345 = UINT8_MAX;
	volatile int64_t x346 = 1310LL;
	int16_t x348 = INT16_MAX;
	int32_t t85 = -51;

	t85 = (x345<=((x346==x347)%x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MAX;

	t86 = (x349<=((x350==x351)%x352));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x354 = -22;
	int32_t x355 = 232546896;
	int8_t x356 = 7;
	static int32_t t87 = 2;

	t87 = (x353<=((x354==x355)%x356));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = INT16_MAX;
	volatile int32_t t88 = -48613;

	t88 = (x357<=((x358==x359)%x360));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x362 = INT32_MIN;
	uint8_t x363 = 9U;
	uint8_t x364 = 16U;

	t89 = (x361<=((x362==x363)%x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x365 = 11094214U;
	int16_t x366 = INT16_MIN;
	volatile uint32_t x367 = UINT32_MAX;

	t90 = (x365<=((x366==x367)%x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x370 = -1;
	uint8_t x371 = 13U;
	uint64_t x372 = UINT64_MAX;
	static int32_t t91 = 4940;

	t91 = (x369<=((x370==x371)%x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = 9551;
	int32_t x374 = -1;
	uint16_t x375 = UINT16_MAX;
	int8_t x376 = -3;
	volatile int32_t t92 = 6;

	t92 = (x373<=((x374==x375)%x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x377 = 293946197U;
	int64_t x378 = INT64_MIN;
	int64_t x380 = INT64_MIN;
	volatile int32_t t93 = 54073;

	t93 = (x377<=((x378==x379)%x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x381 = INT32_MAX;
	uint64_t x382 = UINT64_MAX;
	uint32_t x383 = 13410078U;
	int32_t t94 = 26783042;

	t94 = (x381<=((x382==x383)%x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = -526086234LL;
	int8_t x386 = 52;
	volatile int16_t x387 = INT16_MAX;
	int32_t t95 = -60;

	t95 = (x385<=((x386==x387)%x388));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x389 = 2877083338621449258LLU;
	volatile int8_t x390 = -1;
	static int8_t x391 = -1;
	static int32_t x392 = -83916;
	volatile int32_t t96 = 801703;

	t96 = (x389<=((x390==x391)%x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x393 = INT64_MAX;
	int8_t x396 = INT8_MIN;
	int32_t t97 = -244808;

	t97 = (x393<=((x394==x395)%x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x397 = INT8_MIN;
	uint32_t x398 = UINT32_MAX;
	static uint32_t x399 = 762262317U;
	int8_t x400 = -1;
	static int32_t t98 = -380673671;

	t98 = (x397<=((x398==x399)%x400));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x401 = -1;
	int32_t x402 = -30565988;
	uint64_t x403 = 776814076753878910LLU;
	uint16_t x404 = 22U;
	volatile int32_t t99 = 13910404;

	t99 = (x401<=((x402==x403)%x404));

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


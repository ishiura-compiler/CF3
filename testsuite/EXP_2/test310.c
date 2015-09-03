#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 7LLU;
volatile uint64_t x6 = UINT64_MAX;
int64_t x12 = 97767777LL;
int64_t x19 = INT64_MIN;
volatile int64_t x20 = INT64_MIN;
volatile uint32_t x21 = UINT32_MAX;
static uint16_t x22 = 331U;
int8_t x27 = INT8_MIN;
static volatile int32_t t9 = 1863676;
uint32_t x48 = 205664721U;
volatile int64_t x54 = -1LL;
volatile int64_t t11 = 335163LL;
int64_t t12 = 1022635090056LL;
int32_t x65 = 31208721;
int16_t x67 = -1;
int64_t t13 = -892LL;
int64_t x71 = 1198LL;
static volatile uint32_t t16 = 8U;
volatile uint64_t t17 = 179746660867LLU;
uint16_t x91 = UINT16_MAX;
volatile uint16_t x97 = UINT16_MAX;
int32_t x103 = -1;
int64_t x104 = -1LL;
uint32_t x108 = 24547U;
uint8_t x113 = UINT8_MAX;
int32_t x116 = -9450311;
static volatile uint64_t x117 = 60243863600LLU;
int8_t x123 = INT8_MAX;
uint32_t t30 = 671846U;
static uint8_t x145 = UINT8_MAX;
uint64_t x147 = UINT64_MAX;
int64_t x149 = INT64_MAX;
uint16_t x150 = 1563U;
int32_t x154 = -3184263;
int8_t x155 = -1;
int64_t t37 = -162796896824145LL;
int16_t x171 = -147;
uint32_t x172 = 425U;
uint64_t t40 = 392679098432802LLU;
volatile int32_t t41 = -240;
static int8_t x191 = INT8_MIN;
static int32_t t43 = -884;
static int8_t x194 = INT8_MIN;
int8_t x195 = -1;
volatile int16_t x203 = -46;
uint32_t t50 = 2U;
static uint32_t x224 = 13660736U;
static int16_t x225 = INT16_MIN;
uint64_t x228 = 7426746LLU;
volatile int64_t t53 = -30309LL;
static uint64_t x236 = 1180409579622843LLU;
static int64_t x239 = 12537505774247LL;
int8_t x247 = INT8_MIN;
volatile int32_t t58 = 54832;
int16_t x261 = INT16_MIN;
volatile int8_t x263 = INT8_MAX;
volatile int32_t x264 = -12;
static int32_t x271 = -1070;
volatile int32_t t61 = -1657;
int64_t x279 = -1LL;
volatile int64_t t62 = 2976727978LL;
uint64_t x286 = 258374911790317LLU;
static int32_t x288 = 820337;
static uint64_t t63 = 26274LLU;
volatile int16_t x290 = INT16_MAX;
int32_t x292 = INT32_MIN;
int64_t x294 = -32716594LL;
volatile uint8_t x297 = 14U;
uint64_t x298 = 593277740LLU;
volatile int8_t x306 = INT8_MAX;
volatile int32_t t68 = 360487636;
uint32_t x311 = 9107U;
static int8_t x315 = -1;
int64_t x321 = INT64_MIN;
int64_t x326 = 4060615811LL;
int32_t x328 = INT32_MAX;
int16_t x330 = INT16_MIN;
volatile int64_t t74 = 883576LL;
uint64_t x334 = UINT64_MAX;
static int16_t x344 = INT16_MIN;
int8_t x354 = -1;
volatile uint64_t t81 = 16046LLU;
static int64_t x364 = 18LL;
int16_t x365 = INT16_MAX;
int64_t x368 = INT64_MIN;
volatile int64_t t83 = -26637LL;
int16_t x376 = INT16_MIN;
int32_t x378 = 671;
int16_t x380 = -1;
volatile uint32_t x384 = 61722762U;
static int64_t t87 = 7597050LL;
volatile uint16_t x392 = 1051U;
static uint32_t x397 = UINT32_MAX;
int8_t x398 = INT8_MIN;
static volatile int32_t x400 = -1;
int32_t x402 = -1;
volatile int32_t t90 = 736499842;
uint64_t x405 = UINT64_MAX;
volatile uint64_t t91 = 3LLU;
uint32_t x411 = 380U;
uint16_t x412 = UINT16_MAX;
static int64_t t92 = -1306410638918LL;
volatile uint16_t x414 = UINT16_MAX;
int16_t x417 = INT16_MAX;
volatile int16_t x418 = INT16_MIN;
uint32_t x420 = 2365576U;
static int8_t x429 = 1;
uint64_t x434 = UINT64_MAX;
uint64_t t98 = 79112530142LLU;
volatile int32_t x438 = 47;
static uint8_t x439 = 94U;
uint64_t x440 = UINT64_MAX;
uint64_t t99 = 22260LLU;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	int16_t x3 = INT16_MAX;
	uint32_t x4 = 6U;
	volatile uint64_t t0 = 6609184301947164378LLU;

	t0 = ((x1&(x2-x3))&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 3896U;
	uint64_t x7 = 59400816939838LLU;
	static int16_t x8 = INT16_MAX;
	uint64_t t1 = 12LLU;

	t1 = ((x5&(x6-x7))&x8);

	if (t1 != 3072LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 7;
	uint16_t x10 = 1U;
	volatile int32_t x11 = 177469;
	volatile int64_t t2 = 256766141766241LL;

	t2 = ((x9&(x10-x11))&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	int16_t x14 = INT16_MIN;
	uint16_t x15 = 0U;
	int64_t x16 = INT64_MIN;
	int64_t t3 = INT64_MIN;

	t3 = ((x13&(x14-x15))&x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MAX;
	int32_t x18 = -829520;
	volatile int64_t t4 = 1486037453478150969LL;

	t4 = ((x17&(x18-x19))&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x23 = 3LLU;
	int16_t x24 = -1;
	uint64_t t5 = 16999917558481572LLU;

	t5 = ((x21&(x22-x23))&x24);

	if (t5 != 328LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	volatile uint8_t x26 = 2U;
	uint32_t x28 = 58U;
	int64_t t6 = -711176LL;

	t6 = ((x25&(x26-x27))&x28);

	if (t6 != 2LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = UINT64_MAX;
	uint32_t x30 = 368U;
	uint32_t x31 = 2393623U;
	uint16_t x32 = UINT16_MAX;
	uint64_t t7 = 461323LLU;

	t7 = ((x29&(x30-x31))&x32);

	if (t7 != 31577LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 85224LLU;
	volatile uint16_t x34 = 3532U;
	int16_t x35 = -1;
	int32_t x36 = -921211;
	uint64_t t8 = 2LLU;

	t8 = ((x33&(x34-x35))&x36);

	if (t8 != 128LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1;
	static int16_t x38 = 155;
	static int16_t x39 = -1;
	int32_t x40 = INT32_MIN;

	t9 = ((x37&(x38-x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	volatile int64_t x46 = INT64_MIN;
	static int8_t x47 = -1;
	static volatile int64_t t10 = 4231995816377242LL;

	t10 = ((x45&(x46-x47))&x48);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MIN;
	int16_t x55 = 156;
	static int32_t x56 = INT32_MIN;

	t11 = ((x53&(x54-x55))&x56);

	if (t11 != -2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x57 = 1060171U;
	int32_t x58 = INT32_MIN;
	int16_t x59 = -1480;
	int64_t x60 = -1LL;

	t12 = ((x57&(x58-x59))&x60);

	if (t12 != 1352LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x66 = -1LL;
	int8_t x68 = INT8_MIN;

	t13 = ((x65&(x66-x67))&x68);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	static int32_t x70 = -106;
	int16_t x72 = 1007;
	volatile int64_t t14 = 1085296391784484LL;

	t14 = ((x69&(x70-x71))&x72);

	if (t14 != 640LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MIN;
	static int8_t x75 = INT8_MIN;
	uint32_t x76 = UINT32_MAX;
	static volatile int64_t t15 = 2103648134542LL;

	t15 = ((x73&(x74-x75))&x76);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x77 = 47U;
	int32_t x78 = INT32_MIN;
	volatile int8_t x79 = INT8_MIN;
	int16_t x80 = -1;

	t16 = ((x77&(x78-x79))&x80);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MAX;
	static volatile uint32_t x82 = 15792016U;
	int64_t x83 = 120318205503LL;
	static uint64_t x84 = 220850293574499LLU;

	t17 = ((x81&(x82-x83))&x84);

	if (t17 != 65LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MAX;
	static int16_t x86 = INT16_MIN;
	uint16_t x87 = 31U;
	volatile uint32_t x88 = 640080U;
	uint32_t t18 = 2574U;

	t18 = ((x85&(x86-x87))&x88);

	if (t18 != 64U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = -9362458346182LL;
	volatile uint8_t x90 = UINT8_MAX;
	int8_t x92 = -1;
	volatile int64_t t19 = -10070378328LL;

	t19 = ((x89&(x90-x91))&x92);

	if (t19 != -9362458410752LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = -30;
	uint32_t x94 = 171425750U;
	int32_t x95 = -26;
	int8_t x96 = INT8_MAX;
	volatile uint32_t t20 = 3U;

	t20 = ((x93&(x94-x95))&x96);

	if (t20 != 96U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x98 = UINT8_MAX;
	int8_t x99 = INT8_MIN;
	int16_t x100 = INT16_MIN;
	static int32_t t21 = -37490118;

	t21 = ((x97&(x98-x99))&x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x101 = 2;
	uint64_t x102 = UINT64_MAX;
	volatile uint64_t t22 = 31121LLU;

	t22 = ((x101&(x102-x103))&x104);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 413U;
	uint32_t x106 = UINT32_MAX;
	int8_t x107 = -59;
	volatile uint32_t t23 = 3734883U;

	t23 = ((x105&(x106-x107))&x108);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x109 = -1LL;
	volatile int16_t x110 = INT16_MAX;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = -1LL;
	static uint64_t t24 = 84137395263849120LLU;

	t24 = ((x109&(x110-x111))&x112);

	if (t24 != 32768LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x114 = INT8_MAX;
	uint64_t x115 = 199683650LLU;
	static volatile uint64_t t25 = 14LLU;

	t25 = ((x113&(x114-x115))&x116);

	if (t25 != 57LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x118 = 924518U;
	int16_t x119 = -1;
	int32_t x120 = INT32_MIN;
	uint64_t t26 = 2LLU;

	t26 = ((x117&(x118-x119))&x120);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MIN;
	uint32_t x122 = 4942U;
	volatile int16_t x124 = INT16_MIN;
	int64_t t27 = 1873170189LL;

	t27 = ((x121&(x122-x123))&x124);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x125 = -1;
	uint32_t x126 = 5297635U;
	static uint16_t x127 = UINT16_MAX;
	static uint64_t x128 = UINT64_MAX;
	uint64_t t28 = 3123164563605912LLU;

	t28 = ((x125&(x126-x127))&x128);

	if (t28 != 5232100LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = 5U;
	static int64_t x130 = INT64_MIN;
	volatile int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MIN;
	int64_t t29 = 49146222172LL;

	t29 = ((x129&(x130-x131))&x132);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 48070822U;
	int32_t x138 = -32;
	uint8_t x139 = 9U;
	int16_t x140 = INT16_MAX;

	t30 = ((x137&(x138-x139))&x140);

	if (t30 != 134U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = 1169293725LLU;
	int16_t x143 = INT16_MAX;
	volatile int8_t x144 = -62;
	static uint64_t t31 = 492719LLU;

	t31 = ((x141&(x142-x143))&x144);

	if (t31 != 1169260544LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x146 = -428;
	uint16_t x148 = UINT16_MAX;
	uint64_t t32 = 14324034809215421LLU;

	t32 = ((x145&(x146-x147))&x148);

	if (t32 != 85LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x151 = 18464347U;
	volatile uint8_t x152 = UINT8_MAX;
	int64_t t33 = -1860664LL;

	t33 = ((x149&(x150-x151))&x152);

	if (t33 != 192LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MAX;
	static uint64_t x156 = 854806438425260LLU;
	uint64_t t34 = 2132382206243576134LLU;

	t34 = ((x153&(x154-x155))&x156);

	if (t34 != 854806437371944LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = 0;
	int16_t x158 = -1;
	static int32_t x159 = 6;
	int8_t x160 = -1;
	int32_t t35 = 0;

	t35 = ((x157&(x158-x159))&x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = 28U;
	int64_t x162 = -1LL;
	volatile int8_t x163 = INT8_MIN;
	uint16_t x164 = 3187U;
	static int64_t t36 = -786LL;

	t36 = ((x161&(x162-x163))&x164);

	if (t36 != 16LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 1105568213U;
	int8_t x166 = INT8_MIN;
	int64_t x167 = INT64_MIN;
	static volatile int64_t x168 = INT64_MIN;

	t37 = ((x165&(x166-x167))&x168);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	static uint16_t x170 = 8617U;
	uint32_t t38 = 4174U;

	t38 = ((x169&(x170-x171))&x172);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x173 = -2;
	int32_t x174 = -1;
	static int8_t x175 = INT8_MIN;
	int8_t x176 = -6;
	volatile int32_t t39 = 2493044;

	t39 = ((x173&(x174-x175))&x176);

	if (t39 != 122) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x177 = INT32_MIN;
	int16_t x178 = INT16_MIN;
	uint64_t x179 = 7134989223754LLU;
	volatile int8_t x180 = INT8_MIN;

	t40 = ((x177&(x178-x179))&x180);

	if (t40 != 18446736937621389312LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x181 = UINT16_MAX;
	static uint16_t x182 = 2U;
	volatile uint8_t x183 = UINT8_MAX;
	int32_t x184 = -1;

	t41 = ((x181&(x182-x183))&x184);

	if (t41 != 65283) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MIN;
	uint8_t x186 = 4U;
	uint8_t x187 = 0U;
	volatile int8_t x188 = INT8_MIN;
	static volatile int32_t t42 = 1438;

	t42 = ((x185&(x186-x187))&x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x189 = 1;
	int32_t x190 = 354823026;
	int32_t x192 = INT32_MIN;

	t43 = ((x189&(x190-x191))&x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x193 = INT32_MIN;
	int64_t x196 = INT64_MIN;
	int64_t t44 = INT64_MIN;

	t44 = ((x193&(x194-x195))&x196);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x197 = 19U;
	static uint32_t x198 = 242U;
	volatile int8_t x199 = INT8_MIN;
	uint8_t x200 = 4U;
	volatile uint32_t t45 = 2508365U;

	t45 = ((x197&(x198-x199))&x200);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x201 = -2;
	static int8_t x202 = INT8_MIN;
	static int8_t x204 = -27;
	int32_t t46 = -86814;

	t46 = ((x201&(x202-x203))&x204);

	if (t46 != -92) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = INT64_MAX;
	static int8_t x206 = INT8_MIN;
	uint64_t x207 = 20333LLU;
	int16_t x208 = INT16_MAX;
	static uint64_t t47 = 36720642364LLU;

	t47 = ((x205&(x206-x207))&x208);

	if (t47 != 12307LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x209 = UINT64_MAX;
	static volatile uint16_t x210 = 908U;
	volatile uint64_t x211 = 2103100946LLU;
	volatile int64_t x212 = -24LL;
	uint64_t t48 = 184803259LLU;

	t48 = ((x209&(x210-x211))&x212);

	if (t48 != 18446744071606451560LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = 26546LLU;
	int64_t x214 = 29119576711713362LL;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = UINT8_MAX;
	static uint64_t t49 = 70482456LLU;

	t49 = ((x213&(x214-x215))&x216);

	if (t49 != 146LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x217 = 29U;
	static int8_t x218 = 19;
	uint32_t x219 = UINT32_MAX;
	uint8_t x220 = 1U;

	t50 = ((x217&(x218-x219))&x220);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = INT64_MIN;
	static int16_t x222 = 0;
	int32_t x223 = INT32_MAX;
	int64_t t51 = 185LL;

	t51 = ((x221&(x222-x223))&x224);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x226 = UINT16_MAX;
	int8_t x227 = 1;
	volatile uint64_t t52 = 1877904671529864LLU;

	t52 = ((x225&(x226-x227))&x228);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x229 = INT8_MAX;
	int64_t x230 = INT64_MIN;
	int64_t x231 = -1LL;
	static int32_t x232 = -160766256;

	t53 = ((x229&(x230-x231))&x232);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x233 = INT64_MIN;
	int32_t x234 = 25;
	int64_t x235 = 17214LL;
	uint64_t t54 = 558586477127908LLU;

	t54 = ((x233&(x234-x235))&x236);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = INT8_MIN;
	volatile uint32_t x238 = UINT32_MAX;
	uint32_t x240 = 3U;
	volatile int64_t t55 = 11663989486LL;

	t55 = ((x237&(x238-x239))&x240);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = UINT64_MAX;
	static int32_t x242 = INT32_MIN;
	int16_t x243 = -1;
	uint8_t x244 = UINT8_MAX;
	uint64_t t56 = 26314LLU;

	t56 = ((x241&(x242-x243))&x244);

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = -2;
	int32_t x246 = 2918773;
	int8_t x248 = INT8_MIN;
	int32_t t57 = -56902807;

	t57 = ((x245&(x246-x247))&x248);

	if (t57 != 2918784) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x257 = INT16_MAX;
	uint8_t x258 = 2U;
	int8_t x259 = INT8_MAX;
	int32_t x260 = -1;

	t58 = ((x257&(x258-x259))&x260);

	if (t58 != 32643) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x262 = 1;
	static int32_t t59 = -1037549313;

	t59 = ((x261&(x262-x263))&x264);

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x269 = INT32_MIN;
	int16_t x270 = INT16_MIN;
	uint32_t x272 = 388257U;
	uint32_t t60 = 1U;

	t60 = ((x269&(x270-x271))&x272);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x273 = -4;
	int8_t x274 = 1;
	int16_t x275 = INT16_MAX;
	static volatile int8_t x276 = 1;

	t61 = ((x273&(x274-x275))&x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = -1;
	static uint8_t x278 = UINT8_MAX;
	int64_t x280 = -1LL;

	t62 = ((x277&(x278-x279))&x280);

	if (t62 != 256LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x285 = 0U;
	int16_t x287 = -1;

	t63 = ((x285&(x286-x287))&x288);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x289 = 808;
	uint8_t x291 = UINT8_MAX;
	int32_t t64 = -1000087;

	t64 = ((x289&(x290-x291))&x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = -80LL;
	uint32_t x295 = 151325U;
	int32_t x296 = -1;
	volatile int64_t t65 = 91LL;

	t65 = ((x293&(x294-x295))&x296);

	if (t65 != -32867920LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x299 = 4549304U;
	int8_t x300 = -1;
	volatile uint64_t t66 = 261718LLU;

	t66 = ((x297&(x298-x299))&x300);

	if (t66 != 4LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = -6487;
	uint16_t x302 = 224U;
	uint64_t x303 = UINT64_MAX;
	static volatile int64_t x304 = -1LL;
	volatile uint64_t t67 = 33600288232839421LLU;

	t67 = ((x301&(x302-x303))&x304);

	if (t67 != 161LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x305 = 1U;
	static int32_t x307 = INT32_MAX;
	static int16_t x308 = -48;

	t68 = ((x305&(x306-x307))&x308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MAX;
	int64_t x312 = INT64_MIN;
	volatile int64_t t69 = 3451106912696201LL;

	t69 = ((x309&(x310-x311))&x312);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = INT16_MIN;
	volatile int16_t x314 = -1;
	static int32_t x316 = -1;
	volatile int32_t t70 = 315393402;

	t70 = ((x313&(x314-x315))&x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = -164;
	int16_t x318 = INT16_MAX;
	int16_t x319 = INT16_MIN;
	static volatile int8_t x320 = INT8_MAX;
	volatile int32_t t71 = -7;

	t71 = ((x317&(x318-x319))&x320);

	if (t71 != 92) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x322 = UINT32_MAX;
	static volatile int64_t x323 = -15850LL;
	uint8_t x324 = 111U;
	int64_t t72 = -1089370LL;

	t72 = ((x321&(x322-x323))&x324);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x325 = 9U;
	uint32_t x327 = UINT32_MAX;
	volatile int64_t t73 = 212354LL;

	t73 = ((x325&(x326-x327))&x328);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = -1;
	uint32_t x331 = UINT32_MAX;
	int64_t x332 = -1LL;

	t74 = ((x329&(x330-x331))&x332);

	if (t74 != 4294934529LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x333 = -1;
	static volatile int16_t x335 = INT16_MAX;
	int8_t x336 = INT8_MIN;
	volatile uint64_t t75 = 1013155LLU;

	t75 = ((x333&(x334-x335))&x336);

	if (t75 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = INT64_MIN;
	int8_t x338 = 0;
	static volatile uint32_t x339 = 2U;
	int8_t x340 = INT8_MIN;
	volatile int64_t t76 = 68646330942477971LL;

	t76 = ((x337&(x338-x339))&x340);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = -1;
	static int64_t x342 = -632463530634476LL;
	uint16_t x343 = UINT16_MAX;
	volatile int64_t t77 = -12LL;

	t77 = ((x341&(x342-x343))&x344);

	if (t77 != -632463530721280LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = INT16_MIN;
	static volatile uint64_t x346 = UINT64_MAX;
	uint8_t x347 = UINT8_MAX;
	static volatile int32_t x348 = 29004635;
	static uint64_t t78 = 161LLU;

	t78 = ((x345&(x346-x347))&x348);

	if (t78 != 28999680LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x349 = INT32_MIN;
	static uint8_t x350 = 0U;
	volatile int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MAX;
	static volatile int32_t t79 = 4;

	t79 = ((x349&(x350-x351))&x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x353 = -1;
	uint16_t x355 = UINT16_MAX;
	uint16_t x356 = UINT16_MAX;
	static int32_t t80 = 822715;

	t80 = ((x353&(x354-x355))&x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x357 = -1;
	uint8_t x358 = 6U;
	uint64_t x359 = 24LLU;
	uint16_t x360 = 3U;

	t81 = ((x357&(x358-x359))&x360);

	if (t81 != 2LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x361 = -1;
	volatile uint8_t x362 = 25U;
	uint16_t x363 = 301U;
	volatile int64_t t82 = 957059LL;

	t82 = ((x361&(x362-x363))&x364);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x366 = INT16_MAX;
	int64_t x367 = -57LL;

	t83 = ((x365&(x366-x367))&x368);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x373 = 32586375267455820LLU;
	static int8_t x374 = -1;
	int8_t x375 = 1;
	uint64_t t84 = 77LLU;

	t84 = ((x373&(x374-x375))&x376);

	if (t84 != 32586375267450880LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x377 = UINT64_MAX;
	int16_t x379 = 476;
	volatile uint64_t t85 = 458495031488008989LLU;

	t85 = ((x377&(x378-x379))&x380);

	if (t85 != 195LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x381 = 2U;
	volatile int32_t x382 = INT32_MIN;
	volatile uint64_t x383 = 2847110523LLU;
	volatile uint64_t t86 = 55947941LLU;

	t86 = ((x381&(x382-x383))&x384);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x385 = INT16_MIN;
	int64_t x386 = -1LL;
	static int8_t x387 = INT8_MIN;
	int16_t x388 = -14;

	t87 = ((x385&(x386-x387))&x388);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = INT8_MIN;
	uint32_t x390 = 6U;
	int16_t x391 = INT16_MIN;
	uint32_t t88 = 1677368U;

	t88 = ((x389&(x390-x391))&x392);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x399 = UINT32_MAX;
	uint32_t t89 = 435U;

	t89 = ((x397&(x398-x399))&x400);

	if (t89 != 4294967169U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x401 = INT32_MAX;
	static int8_t x403 = -1;
	volatile int32_t x404 = INT32_MIN;

	t90 = ((x401&(x402-x403))&x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x406 = 10415888657LLU;
	uint32_t x407 = 383320460U;
	int8_t x408 = INT8_MIN;

	t91 = ((x405&(x406-x407))&x408);

	if (t91 != 10032568192LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x409 = -1LL;
	volatile int64_t x410 = INT64_MAX;

	t92 = ((x409&(x410-x411))&x412);

	if (t92 != 65155LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x413 = INT64_MIN;
	uint32_t x415 = 788U;
	volatile int8_t x416 = INT8_MIN;
	int64_t t93 = 538448LL;

	t93 = ((x413&(x414-x415))&x416);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x419 = 613926U;
	uint32_t t94 = 14U;

	t94 = ((x417&(x418-x419))&x420);

	if (t94 != 136U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x421 = INT32_MAX;
	int16_t x422 = 113;
	int64_t x423 = INT64_MAX;
	uint16_t x424 = 6U;
	int64_t t95 = -2754165623815500394LL;

	t95 = ((x421&(x422-x423))&x424);

	if (t95 != 2LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x425 = -8;
	int8_t x426 = INT8_MIN;
	int8_t x427 = -1;
	uint64_t x428 = UINT64_MAX;
	static uint64_t t96 = 1720536LLU;

	t96 = ((x425&(x426-x427))&x428);

	if (t96 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x430 = -1;
	uint8_t x431 = 16U;
	static int64_t x432 = -1LL;
	int64_t t97 = 49259269LL;

	t97 = ((x429&(x430-x431))&x432);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x433 = -1;
	int8_t x435 = INT8_MIN;
	uint32_t x436 = 52285446U;

	t98 = ((x433&(x434-x435))&x436);

	if (t98 != 6LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x437 = 205752U;

	t99 = ((x437&(x438-x439))&x440);

	if (t99 != 205712LLU) { NG(); } else { ; }
	
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


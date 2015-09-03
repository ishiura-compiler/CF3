#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 12U;
uint64_t x9 = 51LLU;
int8_t x19 = INT8_MIN;
int8_t x20 = INT8_MIN;
int32_t x25 = 65114;
int32_t t6 = 229249;
static int64_t x29 = -1LL;
volatile int64_t t7 = INT64_MIN;
int8_t x35 = INT8_MIN;
uint32_t t8 = 210638U;
volatile int64_t t9 = -10316756LL;
int16_t x44 = INT16_MIN;
int32_t t10 = 110686;
int8_t x45 = INT8_MIN;
int64_t x46 = INT64_MIN;
uint16_t x51 = 370U;
static uint16_t x57 = UINT16_MAX;
volatile int8_t x58 = -21;
int64_t t14 = -8174556LL;
static int32_t x65 = -1;
static int32_t x66 = -884;
int8_t x74 = -47;
int8_t x75 = -1;
uint64_t x79 = UINT64_MAX;
volatile uint64_t t19 = 3350683LLU;
int16_t x84 = -6;
int64_t x90 = -1LL;
volatile int32_t x94 = -903;
static int16_t x98 = 60;
volatile int64_t t24 = -2348358492864495674LL;
int8_t x102 = INT8_MIN;
volatile uint8_t x106 = UINT8_MAX;
int64_t x110 = -1LL;
uint16_t x111 = 120U;
volatile int8_t x120 = -1;
volatile int32_t x121 = -1533296;
static volatile int16_t x124 = INT16_MAX;
int8_t x130 = INT8_MIN;
int32_t x136 = -666;
uint32_t x142 = 130131723U;
uint32_t x145 = UINT32_MAX;
volatile uint32_t t36 = 90679955U;
int64_t x152 = 13622638582394LL;
uint16_t x155 = UINT16_MAX;
uint64_t t38 = 26466978535738406LLU;
static int64_t x157 = INT64_MAX;
uint32_t x160 = UINT32_MAX;
int64_t t39 = 243122LL;
uint64_t x162 = 347480664LLU;
int32_t t41 = -59768;
volatile uint8_t x171 = 2U;
uint16_t x175 = 367U;
int16_t x180 = INT16_MIN;
volatile uint8_t x182 = UINT8_MAX;
volatile uint32_t t45 = 737571517U;
int32_t x185 = 139454;
uint64_t x192 = UINT64_MAX;
volatile int8_t x194 = INT8_MIN;
int16_t x195 = -1;
volatile int8_t x200 = 0;
uint64_t x203 = 3LLU;
uint8_t x205 = UINT8_MAX;
int8_t x211 = INT8_MIN;
uint64_t x212 = 548215646828014937LLU;
volatile uint64_t t53 = 599584148949118822LLU;
volatile uint32_t t55 = 24642760U;
int16_t x229 = -1;
static int64_t x233 = 41LL;
int16_t x242 = INT16_MIN;
int64_t x243 = -12513362314774742LL;
int64_t x245 = -61LL;
int16_t x248 = INT16_MIN;
volatile int16_t x260 = INT16_MIN;
uint8_t x263 = 15U;
volatile int32_t x264 = -1;
uint32_t t65 = 9752U;
volatile uint64_t t66 = 146LLU;
static int64_t x269 = INT64_MAX;
static volatile int64_t x274 = INT64_MIN;
uint64_t x276 = 74LLU;
int32_t x281 = 813982055;
static int8_t x283 = INT8_MIN;
static uint8_t x284 = UINT8_MAX;
static int32_t x286 = INT32_MAX;
int16_t x287 = -1;
int16_t x288 = -105;
uint32_t x290 = UINT32_MAX;
volatile int16_t x293 = -1;
static uint32_t x295 = 83U;
uint32_t x301 = UINT32_MAX;
int8_t x306 = INT8_MAX;
uint8_t x311 = 0U;
static int8_t x312 = 0;
volatile int32_t x313 = -976936520;
static int32_t x314 = INT32_MIN;
uint8_t x316 = 5U;
int64_t x319 = INT64_MIN;
int64_t t79 = 13LL;
int64_t t80 = 7201867513LL;
uint8_t x325 = 5U;
uint64_t x329 = 248463594LLU;
volatile int32_t x331 = INT32_MAX;
uint64_t t82 = 3517306033512287605LLU;
static int64_t x334 = -1LL;
uint8_t x336 = UINT8_MAX;
static uint64_t x340 = 1LLU;
volatile int32_t x342 = INT32_MIN;
volatile uint8_t x345 = UINT8_MAX;
uint8_t x347 = 84U;
int64_t x348 = INT64_MAX;
int32_t t87 = INT32_MIN;
static int32_t x355 = INT32_MIN;
volatile uint32_t x364 = 19524872U;
uint8_t x365 = 18U;
int8_t x373 = 30;
volatile uint32_t x380 = UINT32_MAX;
uint32_t t94 = 24449U;
uint8_t x395 = 1U;
uint16_t x396 = 1U;
volatile int16_t x397 = -1;


void f0(void) {
	int32_t x2 = INT32_MIN;
	uint32_t x3 = UINT32_MAX;
	uint16_t x4 = 14U;
	volatile uint32_t t0 = 5U;

	t0 = ((x1&(x2^x3))&x4);

	if (t0 != 12U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 272439LLU;
	volatile int8_t x6 = INT8_MIN;
	int64_t x7 = -1LL;
	uint32_t x8 = 3740U;
	volatile uint64_t t1 = 231082759472443LLU;

	t1 = ((x5&(x6^x7))&x8);

	if (t1 != 20LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -6;
	uint8_t x11 = 12U;
	volatile int64_t x12 = -133636LL;
	volatile uint64_t t2 = 118307LLU;

	t2 = ((x9&(x10^x11))&x12);

	if (t2 != 48LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	static uint32_t x14 = UINT32_MAX;
	static volatile int64_t x15 = INT64_MIN;
	volatile uint64_t x16 = 1LLU;
	static uint64_t t3 = 963LLU;

	t3 = ((x13&(x14^x15))&x16);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	volatile int64_t x18 = -954696033131809171LL;
	volatile int64_t t4 = 533614191LL;

	t4 = ((x17&(x18^x19))&x20);

	if (t4 != 954696033131809152LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 623LLU;
	int32_t x22 = -98614;
	uint32_t x23 = 14047U;
	volatile int16_t x24 = INT16_MAX;
	volatile uint64_t t5 = 2479154LLU;

	t5 = ((x21&(x22^x23))&x24);

	if (t5 != 5LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = UINT8_MAX;
	static int32_t x27 = INT32_MAX;
	uint16_t x28 = 1U;

	t6 = ((x25&(x26^x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1;
	int8_t x31 = INT8_MAX;
	int64_t x32 = INT64_MIN;

	t7 = ((x29&(x30^x31))&x32);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 2U;
	uint32_t x34 = UINT32_MAX;
	int8_t x36 = -1;

	t8 = ((x33&(x34^x35))&x36);

	if (t8 != 2U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MIN;
	int64_t x39 = INT64_MIN;
	static int64_t x40 = INT64_MIN;

	t9 = ((x37&(x38^x39))&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int8_t x42 = INT8_MIN;
	static int8_t x43 = -24;

	t10 = ((x41&(x42^x43))&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x47 = 6;
	int16_t x48 = 1;
	int64_t t11 = -14578653077556LL;

	t11 = ((x45&(x46^x47))&x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -1;
	uint64_t x50 = UINT64_MAX;
	volatile uint32_t x52 = 6939U;
	volatile uint64_t t12 = 1LLU;

	t12 = ((x49&(x50^x51))&x52);

	if (t12 != 6665LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 1795;
	int32_t x54 = 856376;
	int8_t x55 = -1;
	static int64_t x56 = -1LL;
	volatile int64_t t13 = 10LL;

	t13 = ((x53&(x54^x55))&x56);

	if (t13 != 1539LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x59 = -1LL;
	int16_t x60 = INT16_MIN;

	t14 = ((x57&(x58^x59))&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	static int64_t x62 = INT64_MIN;
	static int32_t x63 = -1040736699;
	volatile uint8_t x64 = 3U;
	static volatile int64_t t15 = 423976788163LL;

	t15 = ((x61&(x62^x63))&x64);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x67 = INT8_MIN;
	uint32_t x68 = 54220157U;
	uint32_t t16 = 660U;

	t16 = ((x65&(x66^x67))&x68);

	if (t16 != 268U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 9U;
	uint8_t x70 = 74U;
	uint32_t x71 = UINT32_MAX;
	int32_t x72 = INT32_MAX;
	volatile uint32_t t17 = 59361543U;

	t17 = ((x69&(x70^x71))&x72);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -2;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -74;

	t18 = ((x73&(x74^x75))&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -20;
	int16_t x78 = INT16_MIN;
	uint32_t x80 = UINT32_MAX;

	t19 = ((x77&(x78^x79))&x80);

	if (t19 != 32748LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int32_t x82 = -44;
	uint64_t x83 = 188LLU;
	volatile uint64_t t20 = 136106556240LLU;

	t20 = ((x81&(x82^x83))&x84);

	if (t20 != 32616LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 1;
	int16_t x86 = -560;
	int8_t x87 = -1;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = 2351;

	t21 = ((x85&(x86^x87))&x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	uint32_t x91 = UINT32_MAX;
	static int8_t x92 = 8;
	int64_t t22 = 220LL;

	t22 = ((x89&(x90^x91))&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 782;
	static volatile int16_t x95 = INT16_MAX;
	static uint64_t x96 = UINT64_MAX;
	static volatile uint64_t t23 = 13718369746LLU;

	t23 = ((x93&(x94^x95))&x96);

	if (t23 != 774LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	static int64_t x99 = INT64_MIN;
	int8_t x100 = -1;

	t24 = ((x97&(x98^x99))&x100);

	if (t24 != -9223372036854775748LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -6;
	int64_t x103 = -55LL;
	int32_t x104 = -48904;
	static int64_t t25 = 1135196431996832168LL;

	t25 = ((x101&(x102^x103))&x104);

	if (t25 != 72LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint16_t x107 = 15U;
	volatile int32_t x108 = INT32_MIN;
	int32_t t26 = -227;

	t26 = ((x105&(x106^x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -261285LL;
	static int16_t x112 = -1;
	int64_t t27 = 95078926358LL;

	t27 = ((x109&(x110^x111))&x112);

	if (t27 != -261373LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = -1;
	int8_t x115 = INT8_MIN;
	volatile int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 226;

	t28 = ((x113&(x114^x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = 2;
	int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MIN;
	int32_t t29 = 1;

	t29 = ((x117&(x118^x119))&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = 23;
	volatile int16_t x123 = INT16_MIN;
	volatile int32_t t30 = -18238808;

	t30 = ((x121&(x122^x123))&x124);

	if (t30 != 16) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	int32_t x126 = -1;
	uint64_t x127 = 31LLU;
	volatile int32_t x128 = INT32_MAX;
	uint64_t t31 = 15736LLU;

	t31 = ((x125&(x126^x127))&x128);

	if (t31 != 2147483616LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 5U;
	uint8_t x131 = 0U;
	volatile int32_t x132 = INT32_MAX;
	volatile int32_t t32 = -1;

	t32 = ((x129&(x130^x131))&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MIN;
	static int8_t x134 = -15;
	volatile int64_t x135 = -472853912LL;
	static volatile int64_t t33 = 5022LL;

	t33 = ((x133&(x134^x135))&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	int32_t x138 = INT32_MIN;
	static volatile int8_t x139 = -1;
	volatile int16_t x140 = -1;
	volatile int32_t t34 = INT32_MAX;

	t34 = ((x137&(x138^x139))&x140);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	static int16_t x143 = INT16_MAX;
	uint8_t x144 = 5U;
	volatile int64_t t35 = 3080693863964128LL;

	t35 = ((x141&(x142^x143))&x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MAX;
	int16_t x147 = 6;
	static int8_t x148 = INT8_MIN;

	t36 = ((x145&(x146^x147))&x148);

	if (t36 != 32640U) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = 161573;
	static int16_t x150 = INT16_MIN;
	uint16_t x151 = 23U;
	int64_t t37 = -20271LL;

	t37 = ((x149&(x150^x151))&x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int64_t x154 = INT64_MAX;
	uint64_t x156 = UINT64_MAX;

	t38 = ((x153&(x154^x155))&x156);

	if (t38 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x158 = -1;
	int64_t x159 = INT64_MIN;

	t39 = ((x157&(x158^x159))&x160);

	if (t39 != 4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 1LLU;
	int32_t x163 = 349;
	int8_t x164 = -6;
	volatile uint64_t t40 = 271701312LLU;

	t40 = ((x161&(x162^x163))&x164);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -1;
	volatile int32_t x166 = INT32_MIN;
	volatile uint16_t x167 = 1868U;
	uint16_t x168 = UINT16_MAX;

	t41 = ((x165&(x166^x167))&x168);

	if (t41 != 1868) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = INT16_MAX;
	uint32_t x170 = UINT32_MAX;
	volatile int8_t x172 = INT8_MIN;
	volatile uint32_t t42 = 0U;

	t42 = ((x169&(x170^x171))&x172);

	if (t42 != 32640U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = -1;
	uint16_t x174 = UINT16_MAX;
	static int16_t x176 = INT16_MIN;
	static int32_t t43 = -163867;

	t43 = ((x173&(x174^x175))&x176);

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = 14817U;
	int32_t x178 = 1;
	int32_t x179 = -1;
	static volatile int32_t t44 = 29298934;

	t44 = ((x177&(x178^x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = UINT16_MAX;
	static uint8_t x183 = UINT8_MAX;
	uint32_t x184 = UINT32_MAX;

	t45 = ((x181&(x182^x183))&x184);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MAX;
	static int16_t x188 = 963;
	volatile int64_t t46 = -327872LL;

	t46 = ((x185&(x186^x187))&x188);

	if (t46 != 130LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MAX;
	int32_t x191 = 11109;
	volatile uint64_t t47 = 111LLU;

	t47 = ((x189&(x190^x191))&x192);

	if (t47 != 11008LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	static int8_t x196 = INT8_MAX;
	volatile int32_t t48 = -1257;

	t48 = ((x193&(x194^x195))&x196);

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	int64_t x198 = -1LL;
	uint64_t x199 = 859404LLU;
	uint64_t t49 = 7049LLU;

	t49 = ((x197&(x198^x199))&x200);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 14415617370LLU;
	int8_t x202 = INT8_MAX;
	static uint8_t x204 = 1U;
	volatile uint64_t t50 = 46001746794LLU;

	t50 = ((x201&(x202^x203))&x204);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x206 = UINT32_MAX;
	int16_t x207 = INT16_MIN;
	int32_t x208 = -1;
	volatile uint32_t t51 = 23813345U;

	t51 = ((x205&(x206^x207))&x208);

	if (t51 != 255U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 788U;
	volatile int64_t x210 = -1LL;
	volatile uint64_t t52 = 471835241556009LLU;

	t52 = ((x209&(x210^x211))&x212);

	if (t52 != 16LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 174;
	int32_t x214 = -1;
	int32_t x215 = 1;
	uint64_t x216 = UINT64_MAX;

	t53 = ((x213&(x214^x215))&x216);

	if (t53 != 174LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = UINT16_MAX;
	static int16_t x218 = INT16_MAX;
	volatile int64_t x219 = INT64_MIN;
	int64_t x220 = INT64_MIN;
	static int64_t t54 = -15762471480LL;

	t54 = ((x217&(x218^x219))&x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	int16_t x222 = -1;
	int32_t x223 = -1;
	uint32_t x224 = 60618U;

	t55 = ((x221&(x222^x223))&x224);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	int16_t x226 = -11;
	int16_t x227 = INT16_MIN;
	volatile int8_t x228 = 11;
	static volatile uint32_t t56 = 62354U;

	t56 = ((x225&(x226^x227))&x228);

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = INT8_MAX;
	int8_t x231 = -1;
	uint16_t x232 = 887U;
	int32_t t57 = -1;

	t57 = ((x229&(x230^x231))&x232);

	if (t57 != 768) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 1U;
	int8_t x235 = INT8_MAX;
	uint32_t x236 = 343839U;
	int64_t t58 = 27112859690656LL;

	t58 = ((x233&(x234^x235))&x236);

	if (t58 != 8LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x237 = 59U;
	int16_t x238 = INT16_MIN;
	volatile int16_t x239 = INT16_MIN;
	uint8_t x240 = 28U;
	static int32_t t59 = 215;

	t59 = ((x237&(x238^x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x244 = -1;
	volatile uint64_t t60 = 3LLU;

	t60 = ((x241&(x242^x243))&x244);

	if (t60 != 12513362314770218LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = -3060376481LL;
	static volatile int64_t x247 = INT64_MIN;
	volatile int64_t t61 = -6035433441LL;

	t61 = ((x245&(x246^x247))&x248);

	if (t61 != 9223372033794375680LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	volatile int16_t x250 = INT16_MIN;
	volatile uint32_t x251 = UINT32_MAX;
	uint16_t x252 = 1U;
	volatile int64_t t62 = 4376504556917LL;

	t62 = ((x249&(x250^x251))&x252);

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -174;
	int8_t x254 = INT8_MIN;
	int64_t x255 = 278330920319656LL;
	int8_t x256 = INT8_MIN;
	volatile int64_t t63 = -2LL;

	t63 = ((x253&(x254^x255))&x256);

	if (t63 != -278330920319744LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 100U;
	int32_t x258 = -407735;
	static int64_t x259 = -1LL;
	volatile int64_t t64 = 11922LL;

	t64 = ((x257&(x258^x259))&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	volatile uint8_t x262 = 8U;

	t65 = ((x261&(x262^x263))&x264);

	if (t65 != 7U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -2;
	volatile uint64_t x266 = 40LLU;
	volatile int16_t x267 = -139;
	int32_t x268 = 4838342;

	t66 = ((x265&(x266^x267))&x268);

	if (t66 != 4838212LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = -3344923758077LL;
	volatile int32_t x271 = -1;
	uint32_t x272 = UINT32_MAX;
	volatile int64_t t67 = 1677LL;

	t67 = ((x269&(x270^x271))&x272);

	if (t67 != 3439201788LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	int32_t x275 = INT32_MIN;
	volatile uint64_t t68 = 25388524449381LLU;

	t68 = ((x273&(x274^x275))&x276);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x277 = 9U;
	static uint64_t x278 = UINT64_MAX;
	volatile int64_t x279 = -1173892LL;
	volatile int32_t x280 = INT32_MIN;
	uint64_t t69 = 1779361004396521612LLU;

	t69 = ((x277&(x278^x279))&x280);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x282 = INT8_MIN;
	int32_t t70 = -22935;

	t70 = ((x281&(x282^x283))&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = INT64_MAX;
	int64_t t71 = -131211435519LL;

	t71 = ((x285&(x286^x287))&x288);

	if (t71 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 0;
	int64_t x291 = INT64_MIN;
	static uint16_t x292 = UINT16_MAX;
	volatile int64_t t72 = 17994100173239318LL;

	t72 = ((x289&(x290^x291))&x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = -1;
	int16_t x296 = -1;
	volatile uint32_t t73 = 94U;

	t73 = ((x293&(x294^x295))&x296);

	if (t73 != 4294967212U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int64_t x298 = 25182207LL;
	static volatile int64_t x299 = -24653LL;
	uint16_t x300 = 93U;
	volatile int64_t t74 = -26747LL;

	t74 = ((x297&(x298^x299))&x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = 1;
	uint64_t x303 = 12577LLU;
	static uint64_t x304 = 22133059675129323LLU;
	volatile uint64_t t75 = 1956LLU;

	t75 = ((x301&(x302^x303))&x304);

	if (t75 != 288LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = UINT64_MAX;
	volatile int8_t x307 = -1;
	volatile int16_t x308 = -1;
	static volatile uint64_t t76 = 32294980695LLU;

	t76 = ((x305&(x306^x307))&x308);

	if (t76 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	uint32_t x310 = 1006567U;
	uint32_t t77 = 1273277087U;

	t77 = ((x309&(x310^x311))&x312);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x315 = 19U;
	static volatile int32_t t78 = -90350;

	t78 = ((x313&(x314^x315))&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = 31742343;
	uint32_t x318 = 5U;
	static int16_t x320 = INT16_MIN;

	t79 = ((x317&(x318^x319))&x320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = -1;
	static volatile uint8_t x322 = 44U;
	static int16_t x323 = INT16_MIN;
	int64_t x324 = -2812008325989LL;

	t80 = ((x321&(x322^x323))&x324);

	if (t80 != -2812008333304LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = INT32_MAX;
	static uint16_t x327 = UINT16_MAX;
	static int16_t x328 = -1;
	int32_t t81 = -62408;

	t81 = ((x325&(x326^x327))&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x330 = INT64_MIN;
	uint8_t x332 = 0U;

	t82 = ((x329&(x330^x331))&x332);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = 4869U;
	uint32_t x335 = UINT32_MAX;
	int64_t t83 = -95LL;

	t83 = ((x333&(x334^x335))&x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	static volatile int16_t x338 = INT16_MIN;
	static uint32_t x339 = 2275U;
	volatile uint64_t t84 = 6280929513519LLU;

	t84 = ((x337&(x338^x339))&x340);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 40758313U;
	int8_t x343 = INT8_MIN;
	uint8_t x344 = UINT8_MAX;
	volatile uint32_t t85 = 5172U;

	t85 = ((x341&(x342^x343))&x344);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = 5748203606LL;
	static volatile int64_t t86 = -21849923085880350LL;

	t86 = ((x345&(x346^x347))&x348);

	if (t86 != 2LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	uint8_t x350 = UINT8_MAX;
	int16_t x351 = -14;
	int32_t x352 = INT32_MIN;

	t87 = ((x349&(x350^x351))&x352);

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 617232421397101LLU;
	int16_t x354 = -341;
	int8_t x356 = INT8_MIN;
	volatile uint64_t t88 = 9162529588671722923LLU;

	t88 = ((x353&(x354^x355))&x356);

	if (t88 != 523805184LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	uint32_t x358 = UINT32_MAX;
	int64_t x359 = -1LL;
	int64_t x360 = INT64_MAX;
	int64_t t89 = 7LL;

	t89 = ((x357&(x358^x359))&x360);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	static volatile int16_t x362 = INT16_MAX;
	static int8_t x363 = 0;
	static uint32_t t90 = 63185U;

	t90 = ((x361&(x362^x363))&x364);

	if (t90 != 8U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x366 = INT16_MIN;
	int32_t x367 = -1;
	static uint32_t x368 = UINT32_MAX;
	uint32_t t91 = 317569465U;

	t91 = ((x365&(x366^x367))&x368);

	if (t91 != 18U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 20593LL;
	static int8_t x370 = 1;
	int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MAX;
	int64_t t92 = 907553850519LL;

	t92 = ((x369&(x370^x371))&x372);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x374 = 579U;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;
	int64_t t93 = -1788831767380LL;

	t93 = ((x373&(x374^x375))&x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int16_t x378 = -1;
	uint16_t x379 = 25U;

	t94 = ((x377&(x378^x379))&x380);

	if (t94 != 2147483648U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	static volatile int64_t x382 = -4048LL;
	static int8_t x383 = INT8_MAX;
	volatile int16_t x384 = -121;
	volatile int64_t t95 = -548814951260203971LL;

	t95 = ((x381&(x382^x383))&x384);

	if (t95 != -4089LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 11216U;
	int8_t x386 = -1;
	int8_t x387 = INT8_MAX;
	int64_t x388 = -380202423LL;
	volatile int64_t t96 = -1083853282LL;

	t96 = ((x385&(x386^x387))&x388);

	if (t96 != 512LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = -1;
	static uint8_t x391 = 2U;
	uint64_t x392 = 3856LLU;
	volatile uint64_t t97 = 1607484505632397485LLU;

	t97 = ((x389&(x390^x391))&x392);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MIN;
	static volatile int32_t t98 = -39242195;

	t98 = ((x393&(x394^x395))&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x398 = INT8_MIN;
	int8_t x399 = INT8_MAX;
	int64_t x400 = INT64_MIN;
	volatile int64_t t99 = INT64_MIN;

	t99 = ((x397&(x398^x399))&x400);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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


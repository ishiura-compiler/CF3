#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = INT16_MAX;
int32_t x13 = 351;
uint8_t x14 = 9U;
uint64_t t3 = 40211637684878368LLU;
uint32_t x23 = UINT32_MAX;
uint32_t t4 = 401U;
static int64_t x25 = INT64_MAX;
int64_t x43 = INT64_MIN;
uint64_t x60 = 1LLU;
volatile uint64_t t12 = 38458LLU;
volatile uint64_t t16 = 6481LLU;
int32_t t17 = INT32_MIN;
int64_t x93 = INT64_MIN;
uint8_t x100 = 0U;
uint16_t x103 = 1565U;
uint8_t x105 = 63U;
static int32_t x107 = INT32_MIN;
int16_t x113 = INT16_MIN;
static int16_t x132 = INT16_MAX;
volatile int16_t x133 = INT16_MAX;
volatile int64_t t26 = 338681796LL;
static int8_t x141 = -50;
uint16_t x142 = UINT16_MAX;
int64_t x146 = -1566LL;
int32_t x147 = INT32_MIN;
int8_t x160 = -59;
uint8_t x163 = 0U;
int64_t t32 = -760274693045LL;
int64_t x169 = -2892LL;
int8_t x170 = INT8_MIN;
uint8_t x176 = 1U;
static uint64_t t39 = 2674396LLU;
int32_t x200 = -1;
static uint16_t x201 = 3615U;
int64_t t43 = 65629640915LL;
volatile uint64_t t44 = 1006266227030701LLU;
int8_t x224 = INT8_MAX;
volatile int32_t t45 = 51873035;
uint64_t x225 = UINT64_MAX;
uint8_t x226 = 12U;
static volatile uint64_t x229 = 31003763750LLU;
int8_t x231 = -2;
int16_t x232 = INT16_MIN;
static uint64_t t47 = 40409692137LLU;
static uint32_t x233 = 958219U;
uint32_t x236 = 50362U;
uint64_t x238 = 265613010LLU;
uint8_t x241 = 9U;
int8_t x248 = -1;
static uint8_t x255 = 1U;
static int64_t x256 = -83274868982LL;
static int8_t x259 = -1;
volatile uint64_t t53 = 4628984237709LLU;
static int32_t x263 = -1;
volatile int16_t x276 = INT16_MIN;
volatile uint32_t t56 = 5083060U;
uint64_t x279 = 52259095053425LLU;
uint64_t t57 = 95881172610372LLU;
static int64_t t58 = -2925093540LL;
int64_t t60 = 40484260LL;
static volatile uint64_t x298 = 262793LLU;
int64_t x302 = 289413904759920LL;
int32_t x303 = INT32_MIN;
uint16_t x309 = UINT16_MAX;
static int64_t x313 = INT64_MIN;
uint16_t x315 = 444U;
static int64_t x323 = INT64_MIN;
uint64_t x327 = 27699250LLU;
int32_t x329 = INT32_MIN;
static int64_t x334 = -17253489371936LL;
volatile int32_t x335 = -127123719;
uint32_t x336 = 24760144U;
volatile uint64_t t71 = 145LLU;
uint64_t x346 = 376937228751623LLU;
uint64_t x347 = 673379LLU;
static uint64_t t72 = 66LLU;
uint64_t t73 = 81499361564419196LLU;
int64_t x355 = 892748779LL;
int8_t x361 = 0;
int8_t x362 = INT8_MAX;
volatile uint64_t x368 = UINT64_MAX;
int32_t x370 = -6735087;
volatile int16_t x377 = -1296;
int16_t x388 = INT16_MIN;
volatile int32_t x389 = -30;
volatile uint64_t t84 = 16167LLU;
int32_t x404 = -16390162;
int8_t x406 = INT8_MIN;
static int64_t x408 = 49725LL;
uint64_t t88 = 964367198005LLU;
volatile int16_t x418 = INT16_MIN;
volatile uint64_t t93 = 850648492LLU;
static volatile int8_t x446 = INT8_MIN;
uint32_t t96 = 2911483U;
static volatile uint64_t x456 = 31494LLU;
uint64_t t97 = 52LLU;


void f0(void) {
	static int32_t x5 = 324;
	int8_t x6 = 25;
	uint32_t x7 = 1509U;
	volatile int8_t x8 = INT8_MIN;
	uint32_t t0 = 1558930859U;

	t0 = (x5/((x6&x7)-x8));

	if (t0 != 2U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	uint64_t x10 = 1021021652LLU;
	int64_t x12 = INT64_MIN;
	volatile uint64_t t1 = 1LLU;

	t1 = (x9/((x10&x11)-x12));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x15 = 2373;
	uint64_t x16 = 10186186LLU;
	static volatile uint64_t t2 = 305LLU;

	t2 = (x13/((x14&x15)-x16));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x17 = 30356669202870135LLU;
	int8_t x18 = -50;
	uint16_t x19 = UINT16_MAX;
	uint16_t x20 = UINT16_MAX;

	t3 = (x17/((x18&x19)-x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 1;
	uint8_t x22 = 0U;
	static int16_t x24 = -1;

	t4 = (x21/((x22&x23)-x24));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = 59U;
	int8_t x27 = INT8_MAX;
	static int64_t x28 = 1526460692445352LL;
	int64_t t5 = -202134813402574LL;

	t5 = (x25/((x26&x27)-x28));

	if (t5 != -6042LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	int32_t x30 = 4052;
	int32_t x31 = INT32_MAX;
	int32_t x32 = -46653246;
	int32_t t6 = -13966856;

	t6 = (x29/((x30&x31)-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x33 = 2U;
	volatile int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	int32_t x36 = INT32_MIN;
	int32_t t7 = 1;

	t7 = (x33/((x34&x35)-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x41 = UINT8_MAX;
	uint16_t x42 = UINT16_MAX;
	volatile uint16_t x44 = 5U;
	volatile int64_t t8 = -85393231091913LL;

	t8 = (x41/((x42&x43)-x44));

	if (t8 != -51LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x45 = 4360242U;
	static int16_t x46 = INT16_MIN;
	int16_t x47 = 9;
	volatile uint64_t x48 = UINT64_MAX;
	volatile uint64_t t9 = 947588LLU;

	t9 = (x45/((x46&x47)-x48));

	if (t9 != 4360242LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = 1;
	int8_t x54 = -1;
	int64_t x55 = INT64_MIN;
	int16_t x56 = -1;
	int64_t t10 = 474471613537960LL;

	t10 = (x53/((x54&x55)-x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x57 = 6U;
	int16_t x58 = 54;
	volatile int64_t x59 = 6LL;
	volatile uint64_t t11 = 4037903LLU;

	t11 = (x57/((x58&x59)-x60));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = 92U;
	int8_t x62 = INT8_MAX;
	int32_t x63 = INT32_MIN;
	volatile uint64_t x64 = 41006975210360LLU;

	t12 = (x61/((x62&x63)-x64));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = UINT16_MAX;
	int64_t x66 = INT64_MIN;
	static int64_t x67 = 1LL;
	uint8_t x68 = 118U;
	static int64_t t13 = -5938380799LL;

	t13 = (x65/((x66&x67)-x68));

	if (t13 != -555LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = 1U;
	static uint8_t x70 = 54U;
	int32_t x71 = -87839075;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t14 = -5525098;

	t14 = (x69/((x70&x71)-x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x73 = 21U;
	int32_t x74 = 424;
	int16_t x75 = -1811;
	int64_t x76 = 4916733109451145LL;
	int64_t t15 = 25LL;

	t15 = (x73/((x74&x75)-x76));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	int8_t x78 = -17;
	uint64_t x79 = 8537LLU;
	static uint32_t x80 = 2U;

	t16 = (x77/((x78&x79)-x80));

	if (t16 != 2165364957590040LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	volatile int32_t x86 = INT32_MIN;
	uint8_t x87 = 34U;
	static int32_t x88 = -1;

	t17 = (x85/((x86&x87)-x88));

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x94 = 5U;
	static volatile int64_t x95 = -5429784LL;
	int32_t x96 = -5;
	static volatile int64_t t18 = 13149390LL;

	t18 = (x93/((x94&x95)-x96));

	if (t18 != -1844674407370955161LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = -288493745413633LL;
	uint8_t x98 = 30U;
	static volatile int8_t x99 = INT8_MAX;
	int64_t t19 = 171666059785LL;

	t19 = (x97/((x98&x99)-x100));

	if (t19 != -9616458180454LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = -4193;
	int64_t x102 = -1LL;
	static int64_t x104 = -1LL;
	volatile int64_t t20 = 144303LL;

	t20 = (x101/((x102&x103)-x104));

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x106 = UINT16_MAX;
	volatile uint64_t x108 = 19596101767246339LLU;
	uint64_t t21 = 1525LLU;

	t21 = (x105/((x106&x107)-x108));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x109 = 53U;
	int32_t x110 = INT32_MIN;
	uint32_t x111 = 655026882U;
	volatile int64_t x112 = INT64_MAX;
	int64_t t22 = -1218971201LL;

	t22 = (x109/((x110&x111)-x112));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x114 = INT32_MAX;
	static int16_t x115 = INT16_MIN;
	static int16_t x116 = -3;
	static volatile int32_t t23 = 1;

	t23 = (x113/((x114&x115)-x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = -1LL;
	int32_t x122 = -1;
	static int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MIN;
	volatile int64_t t24 = 2134034880794LL;

	t24 = (x121/((x122&x123)-x124));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MAX;
	int8_t x131 = 8;
	volatile int32_t t25 = -63363;

	t25 = (x129/((x130&x131)-x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x134 = 5464453691366093LL;
	int16_t x135 = INT16_MIN;
	volatile int64_t x136 = 697412756259687LL;

	t26 = (x133/((x134&x135)-x136));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x143 = 0U;
	int32_t x144 = 49621448;
	volatile uint32_t t27 = 3855236U;

	t27 = (x141/((x142&x143)-x144));

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x145 = UINT8_MAX;
	static uint8_t x148 = 40U;
	static int64_t t28 = -89262072750LL;

	t28 = (x145/((x146&x147)-x148));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x149 = 30665776U;
	uint32_t x150 = 11U;
	volatile int8_t x151 = INT8_MAX;
	int8_t x152 = INT8_MIN;
	volatile uint32_t t29 = 16U;

	t29 = (x149/((x150&x151)-x152));

	if (t29 != 220617U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x153 = -1;
	volatile uint64_t x154 = 545003536560610503LLU;
	int32_t x155 = INT32_MAX;
	int16_t x156 = 1;
	uint64_t t30 = 728527223761817406LLU;

	t30 = (x153/((x154&x155)-x156));

	if (t30 != 20351223853LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x157 = 7U;
	uint16_t x158 = UINT16_MAX;
	static uint32_t x159 = 59U;
	uint32_t t31 = 15U;

	t31 = (x157/((x158&x159)-x160));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x161 = INT64_MAX;
	int32_t x162 = INT32_MIN;
	volatile uint32_t x164 = 240U;

	t32 = (x161/((x162&x163)-x164));

	if (t32 != 2147483768LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = 9;
	static volatile uint8_t x166 = 1U;
	static uint8_t x167 = 6U;
	int64_t x168 = -1LL;
	volatile int64_t t33 = 26853333825646914LL;

	t33 = (x165/((x166&x167)-x168));

	if (t33 != 9LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x171 = -1;
	int32_t x172 = -1;
	int64_t t34 = -11572946LL;

	t34 = (x169/((x170&x171)-x172));

	if (t34 != 22LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x173 = 1U;
	static volatile uint8_t x174 = UINT8_MAX;
	static volatile int8_t x175 = INT8_MIN;
	int32_t t35 = 1066606056;

	t35 = (x173/((x174&x175)-x176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x177 = -1;
	uint32_t x178 = UINT32_MAX;
	static uint64_t x179 = 477466255LLU;
	uint64_t x180 = 1LLU;
	static volatile uint64_t t36 = 186647LLU;

	t36 = (x177/((x178&x179)-x180));

	if (t36 != 38634655159LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = -221;
	volatile int16_t x182 = INT16_MIN;
	int32_t x183 = 1264673;
	int8_t x184 = -1;
	int32_t t37 = 12;

	t37 = (x181/((x182&x183)-x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x185 = UINT16_MAX;
	uint32_t x186 = UINT32_MAX;
	int8_t x187 = -1;
	uint8_t x188 = UINT8_MAX;
	uint32_t t38 = 186038U;

	t38 = (x185/((x186&x187)-x188));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x189 = INT8_MIN;
	int8_t x190 = 0;
	uint64_t x191 = 4998LLU;
	int8_t x192 = 1;

	t39 = (x189/((x190&x191)-x192));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MAX;
	int32_t x195 = INT32_MAX;
	int16_t x196 = -10;
	int64_t t40 = -165359LL;

	t40 = (x193/((x194&x195)-x196));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x197 = 13;
	int8_t x198 = INT8_MAX;
	uint8_t x199 = 2U;
	int32_t t41 = -1;

	t41 = (x197/((x198&x199)-x200));

	if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x202 = INT8_MIN;
	int64_t x203 = -1LL;
	int16_t x204 = -369;
	int64_t t42 = 25931109349238440LL;

	t42 = (x201/((x202&x203)-x204));

	if (t42 != 15LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x213 = INT32_MIN;
	volatile int16_t x214 = -1;
	int16_t x215 = 435;
	static int64_t x216 = -1556350LL;

	t43 = (x213/((x214&x215)-x216));

	if (t43 != -1379LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = -1;
	static uint64_t x218 = UINT64_MAX;
	int16_t x219 = -208;
	uint16_t x220 = UINT16_MAX;

	t44 = (x217/((x218&x219)-x220));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = INT16_MAX;
	uint16_t x222 = 121U;
	volatile int8_t x223 = INT8_MIN;

	t45 = (x221/((x222&x223)-x224));

	if (t45 != -258) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x227 = -144;
	int8_t x228 = INT8_MIN;
	uint64_t t46 = 4001362LLU;

	t46 = (x225/((x226&x227)-x228));

	if (t46 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x230 = 121U;

	t47 = (x229/((x230&x231)-x232));

	if (t47 != 942707LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x234 = -1LL;
	uint8_t x235 = 1U;
	static volatile int64_t t48 = -44517918LL;

	t48 = (x233/((x234&x235)-x236));

	if (t48 != -19LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x237 = 13309U;
	static int8_t x239 = INT8_MIN;
	static volatile int64_t x240 = -671LL;
	uint64_t t49 = 2668LLU;

	t49 = (x237/((x238&x239)-x240));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x242 = 85U;
	uint32_t x243 = UINT32_MAX;
	uint8_t x244 = UINT8_MAX;
	uint32_t t50 = 6700U;

	t50 = (x241/((x242&x243)-x244));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = -1;
	int64_t x246 = 739603LL;
	static uint64_t x247 = UINT64_MAX;
	uint64_t t51 = 433245182913LLU;

	t51 = (x245/((x246&x247)-x248));

	if (t51 != 24941379540550LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x253 = INT8_MAX;
	static volatile int64_t x254 = -1LL;
	volatile int64_t t52 = 267820052214198LL;

	t52 = (x253/((x254&x255)-x256));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x257 = UINT8_MAX;
	static uint64_t x258 = 2627620LLU;
	uint8_t x260 = UINT8_MAX;

	t53 = (x257/((x258&x259)-x260));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x261 = 7422U;
	static int16_t x262 = 11168;
	static int64_t x264 = -1LL;
	volatile int64_t t54 = -7496024399492363LL;

	t54 = (x261/((x262&x263)-x264));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x265 = INT64_MIN;
	uint16_t x266 = 12986U;
	uint32_t x267 = UINT32_MAX;
	volatile int32_t x268 = -1;
	volatile int64_t t55 = -26LL;

	t55 = (x265/((x266&x267)-x268));

	if (t55 != -710200357038174LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x273 = 1061U;
	int16_t x274 = -14345;
	static int32_t x275 = -248;

	t56 = (x273/((x274&x275)-x276));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x277 = INT64_MAX;
	volatile uint64_t x278 = 16507546598859LLU;
	int8_t x280 = -1;

	t57 = (x277/((x278&x279)-x280));

	if (t57 != 558801LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x281 = INT16_MIN;
	uint16_t x282 = 369U;
	static volatile uint8_t x283 = 0U;
	int64_t x284 = INT64_MAX;

	t58 = (x281/((x282&x283)-x284));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x285 = 6594979U;
	int64_t x286 = INT64_MAX;
	int32_t x287 = -65;
	static int32_t x288 = INT32_MAX;
	volatile int64_t t59 = 465020458183425191LL;

	t59 = (x285/((x286&x287)-x288));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MIN;
	static volatile uint32_t x295 = 6U;
	int64_t x296 = 5686404088661098LL;

	t60 = (x293/((x294&x295)-x296));

	if (t60 != 1622LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x297 = INT64_MIN;
	static int16_t x299 = INT16_MIN;
	int16_t x300 = INT16_MAX;
	volatile uint64_t t61 = 34845802673530059LLU;

	t61 = (x297/((x298&x299)-x300));

	if (t61 != 40210535654641LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x301 = UINT32_MAX;
	uint8_t x304 = UINT8_MAX;
	static volatile int64_t t62 = -1LL;

	t62 = (x301/((x302&x303)-x304));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x305 = 103U;
	volatile int64_t x306 = INT64_MIN;
	int16_t x307 = 589;
	static uint8_t x308 = UINT8_MAX;
	int64_t t63 = 7339036981494692LL;

	t63 = (x305/((x306&x307)-x308));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x310 = INT32_MIN;
	uint32_t x311 = UINT32_MAX;
	int64_t x312 = -1LL;
	int64_t t64 = 4531907816583688LL;

	t64 = (x309/((x310&x311)-x312));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x314 = 1;
	int16_t x316 = INT16_MIN;
	static int64_t t65 = 222156141325546LL;

	t65 = (x313/((x314&x315)-x316));

	if (t65 != -281474976710656LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x317 = 12699;
	uint32_t x318 = 3U;
	int64_t x319 = -1LL;
	volatile uint32_t x320 = 16U;
	static volatile int64_t t66 = -123484206LL;

	t66 = (x317/((x318&x319)-x320));

	if (t66 != -976LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x321 = INT8_MIN;
	volatile uint32_t x322 = UINT32_MAX;
	volatile int16_t x324 = -7;
	volatile int64_t t67 = -957517094099657LL;

	t67 = (x321/((x322&x323)-x324));

	if (t67 != -18LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x325 = UINT64_MAX;
	uint64_t x326 = 557196719841218280LLU;
	int64_t x328 = -1LL;
	static volatile uint64_t t68 = 4058130352407615777LLU;

	t68 = (x325/((x326&x327)-x328));

	if (t68 != 7401051766238LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x330 = 0U;
	static uint32_t x331 = UINT32_MAX;
	uint8_t x332 = UINT8_MAX;
	uint32_t t69 = 649756U;

	t69 = (x329/((x330&x331)-x332));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x333 = INT32_MIN;
	volatile int64_t t70 = -51135517LL;

	t70 = (x333/((x334&x335)-x336));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x337 = -5;
	uint32_t x338 = UINT32_MAX;
	int32_t x339 = INT32_MAX;
	volatile uint64_t x340 = 120LLU;

	t71 = (x337/((x338&x339)-x340));

	if (t71 != 8589935076LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = 4238;
	volatile uint8_t x348 = 47U;

	t72 = (x345/((x346&x347)-x348));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x349 = -200263066171702LL;
	uint16_t x350 = 0U;
	static int64_t x351 = INT64_MIN;
	static uint64_t x352 = UINT64_MAX;

	t73 = (x349/((x350&x351)-x352));

	if (t73 != 18446543810643379914LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x353 = 7U;
	int16_t x354 = 13;
	int32_t x356 = -1;
	volatile int64_t t74 = 1748925007666LL;

	t74 = (x353/((x354&x355)-x356));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MAX;
	volatile int16_t x359 = INT16_MIN;
	static int8_t x360 = 3;
	int64_t t75 = 584587991LL;

	t75 = (x357/((x358&x359)-x360));

	if (t75 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x363 = 7LL;
	static int16_t x364 = INT16_MIN;
	int64_t t76 = -639684329511580LL;

	t76 = (x361/((x362&x363)-x364));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x365 = 1;
	uint32_t x366 = UINT32_MAX;
	uint64_t x367 = 129230650585LLU;
	uint64_t t77 = 327921204403053817LLU;

	t77 = (x365/((x366&x367)-x368));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x369 = 5;
	uint64_t x371 = 218199019992586613LLU;
	static int8_t x372 = INT8_MIN;
	volatile uint64_t t78 = 786869349767337989LLU;

	t78 = (x369/((x370&x371)-x372));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x373 = 0U;
	int16_t x374 = -1;
	volatile int32_t x375 = -8343;
	int32_t x376 = -215;
	volatile uint32_t t79 = 3U;

	t79 = (x373/((x374&x375)-x376));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MIN;
	static volatile uint64_t x380 = UINT64_MAX;
	volatile uint64_t t80 = 68574038017764LLU;

	t80 = (x377/((x378&x379)-x380));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x381 = 17795448589525LLU;
	static int8_t x382 = -1;
	int16_t x383 = 0;
	volatile int8_t x384 = -1;
	volatile uint64_t t81 = 2163369411LLU;

	t81 = (x381/((x382&x383)-x384));

	if (t81 != 17795448589525LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x385 = 54;
	static int16_t x386 = INT16_MIN;
	uint8_t x387 = 1U;
	volatile int32_t t82 = -462347;

	t82 = (x385/((x386&x387)-x388));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = -1LL;
	static int32_t x392 = INT32_MIN;
	volatile uint64_t t83 = 5527237116457503235LLU;

	t83 = (x389/((x390&x391)-x392));

	if (t83 != 8589934595LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x393 = 6165U;
	int8_t x394 = 7;
	uint64_t x395 = UINT64_MAX;
	static uint16_t x396 = 1061U;

	t84 = (x393/((x394&x395)-x396));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x397 = -333432;
	int32_t x398 = INT32_MAX;
	uint16_t x399 = 1434U;
	uint64_t x400 = UINT64_MAX;
	static volatile uint64_t t85 = 360LLU;

	t85 = (x397/((x398&x399)-x400));

	if (t85 != 12854873918961127LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x401 = 129945U;
	uint16_t x402 = 5777U;
	volatile uint16_t x403 = 22U;
	uint32_t t86 = 2713U;

	t86 = (x401/((x402&x403)-x404));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x405 = INT16_MIN;
	uint64_t x407 = UINT64_MAX;
	uint64_t t87 = 1043310827190LLU;

	t87 = (x405/((x406&x407)-x408));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x409 = UINT64_MAX;
	int64_t x410 = 908054895LL;
	int64_t x411 = INT64_MIN;
	static uint32_t x412 = 27217233U;

	t88 = (x409/((x410&x411)-x412));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x413 = INT8_MIN;
	int8_t x414 = -3;
	uint64_t x415 = 17715253987204927LLU;
	uint64_t x416 = 1109249LLU;
	volatile uint64_t t89 = 17220LLU;

	t89 = (x413/((x414&x415)-x416));

	if (t89 != 1041LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x417 = UINT64_MAX;
	volatile uint8_t x419 = 99U;
	uint64_t x420 = 477LLU;
	volatile uint64_t t90 = 55139LLU;

	t90 = (x417/((x418&x419)-x420));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x425 = UINT64_MAX;
	uint32_t x426 = 227018U;
	volatile int8_t x427 = -1;
	uint8_t x428 = 1U;
	uint64_t t91 = 217254985LLU;

	t91 = (x425/((x426&x427)-x428));

	if (t91 != 81257104418213LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x429 = -22;
	volatile int8_t x430 = INT8_MIN;
	int8_t x431 = 5;
	volatile int16_t x432 = INT16_MIN;
	volatile int32_t t92 = 145743868;

	t92 = (x429/((x430&x431)-x432));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = INT16_MIN;
	int32_t x434 = -1;
	volatile uint64_t x435 = 1193129LLU;
	volatile uint16_t x436 = 28178U;

	t93 = (x433/((x434&x435)-x436));

	if (t93 != 15834781096981LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x437 = INT32_MIN;
	static int8_t x438 = INT8_MAX;
	int64_t x439 = INT64_MAX;
	int16_t x440 = 4;
	static volatile int64_t t94 = -15LL;

	t94 = (x437/((x438&x439)-x440));

	if (t94 != -17459216LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x445 = 136U;
	static uint64_t x447 = UINT64_MAX;
	int8_t x448 = -1;
	uint64_t t95 = 29332873775LLU;

	t95 = (x445/((x446&x447)-x448));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x449 = -1;
	uint32_t x450 = 322U;
	volatile int16_t x451 = -8084;
	int32_t x452 = 1723452;

	t96 = (x449/((x450&x451)-x452));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x453 = UINT8_MAX;
	static int8_t x454 = 0;
	volatile uint64_t x455 = UINT64_MAX;

	t97 = (x453/((x454&x455)-x456));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x457 = -1;
	volatile uint32_t x458 = 73400U;
	static int8_t x459 = 10;
	int8_t x460 = INT8_MIN;
	volatile uint32_t t98 = 760U;

	t98 = (x457/((x458&x459)-x460));

	if (t98 != 31580641U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x465 = -1;
	int16_t x466 = INT16_MIN;
	static int16_t x467 = -1;
	int64_t x468 = -1LL;
	int64_t t99 = 8009LL;

	t99 = (x465/((x466&x467)-x468));

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

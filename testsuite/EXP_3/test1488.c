#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
int64_t x3 = -43126LL;
uint64_t x4 = 30571849194LLU;
volatile int32_t t0 = -318;
int8_t x11 = INT8_MIN;
int32_t x16 = INT32_MIN;
int32_t t4 = -443697;
int8_t x28 = INT8_MIN;
int32_t x42 = INT32_MAX;
int32_t x50 = INT32_MIN;
uint16_t x51 = 629U;
volatile int8_t x52 = INT8_MAX;
volatile uint8_t x65 = UINT8_MAX;
volatile int32_t t10 = 26858;
int8_t x73 = INT8_MAX;
uint8_t x77 = 102U;
volatile uint8_t x79 = 47U;
uint32_t x86 = 363U;
int32_t x91 = -1;
int32_t x92 = INT32_MAX;
volatile int16_t x97 = -1;
int8_t x106 = -1;
volatile int32_t x107 = -1;
static volatile uint32_t t18 = 287U;
static int32_t x117 = 705928448;
volatile int32_t x120 = INT32_MIN;
uint16_t x121 = 15592U;
int32_t x122 = 1716824;
uint16_t x126 = 315U;
volatile uint16_t x135 = 22747U;
volatile int32_t x138 = INT32_MIN;
uint32_t x148 = 4U;
static volatile uint16_t x150 = UINT16_MAX;
int64_t x152 = INT64_MIN;
static uint16_t x156 = 2870U;
static int8_t x167 = INT8_MIN;
static uint64_t x168 = 3725397413752LLU;
volatile int32_t x170 = 22;
uint16_t x174 = UINT16_MAX;
int64_t x175 = 34156810978152252LL;
uint32_t x176 = UINT32_MAX;
int32_t t32 = 75936032;
volatile int16_t x187 = INT16_MAX;
static int32_t x191 = 3;
volatile int64_t t36 = -1108004054467773369LL;
int8_t x200 = INT8_MAX;
uint64_t x205 = 8227281739218LLU;
volatile uint64_t x212 = 2467461514124220LLU;
uint32_t x218 = 387U;
int16_t x225 = INT16_MIN;
volatile uint8_t x231 = 7U;
static int16_t x236 = 0;
int32_t x247 = INT32_MAX;
uint64_t x249 = 2491075091898LLU;
volatile int32_t x258 = INT32_MAX;
static uint64_t x266 = 206572207062874LLU;
volatile uint8_t x267 = 0U;
int64_t x268 = -1LL;
static uint64_t t53 = 13349103410469LLU;
uint16_t x278 = UINT16_MAX;
static int64_t x280 = 0LL;
static int32_t x293 = 169394379;
volatile int32_t t56 = 235;
int8_t x306 = -1;
int8_t x307 = 5;
volatile uint16_t x314 = 126U;
uint32_t t61 = 3U;
volatile uint8_t x325 = 1U;
volatile int64_t x327 = INT64_MIN;
static int64_t x328 = -25LL;
uint64_t t63 = 2360320497LLU;
int32_t x342 = INT32_MIN;
volatile int8_t x343 = 18;
int16_t x345 = 0;
int32_t x356 = -1;
int32_t t68 = -882105;
static uint64_t t70 = 6592196174627515LLU;
int32_t x366 = -1;
uint8_t x373 = UINT8_MAX;
int8_t x377 = INT8_MAX;
uint32_t x380 = 3007015U;
int32_t x383 = INT32_MAX;
static int32_t x421 = INT32_MIN;
int8_t x429 = INT8_MAX;
int8_t x449 = 1;
uint32_t x464 = UINT32_MAX;
static int8_t x468 = -1;
volatile uint64_t x473 = 1235928LLU;
int8_t x474 = -1;
volatile int64_t x476 = INT64_MAX;
int8_t x478 = INT8_MAX;
uint16_t x482 = 2628U;
static int64_t x484 = 377594642LL;
volatile int16_t x486 = 235;
volatile int32_t t94 = -3021897;
int32_t x496 = INT32_MIN;
volatile uint64_t t98 = 60539439524823437LLU;
uint64_t x509 = 306169LLU;
static int64_t x511 = INT64_MAX;


void f0(void) {
	int32_t x2 = 42843;

	t0 = ((x1&x2)<<(x3<x4));

	if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int64_t x6 = INT64_MIN;
	uint8_t x7 = 13U;
	int8_t x8 = INT8_MIN;
	int64_t t1 = 4411319LL;

	t1 = ((x5&x6)<<(x7<x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	int32_t x10 = -30171;
	volatile uint32_t x12 = 60210868U;
	int32_t t2 = -7970;

	t2 = ((x9&x10)<<(x11<x12));

	if (t2 != 2147453477) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	static int64_t x14 = -260719LL;
	uint32_t x15 = UINT32_MAX;
	static volatile int64_t t3 = -13658059708LL;

	t3 = ((x13&x14)<<(x15<x16));

	if (t3 != 17LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 0U;
	static int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MAX;
	int16_t x20 = -1;

	t4 = ((x17&x18)<<(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MAX;
	uint8_t x26 = UINT8_MAX;
	int32_t x27 = 1;
	volatile int32_t t5 = 11;

	t5 = ((x25&x26)<<(x27<x28));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = 85584253;
	volatile int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MIN;
	volatile int32_t t6 = -641605341;

	t6 = ((x41&x42)<<(x43<x44));

	if (t6 != 171168506) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x49 = 33U;
	volatile uint32_t t7 = 281927U;

	t7 = ((x49&x50)<<(x51<x52));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x53 = 1U;
	volatile int64_t x54 = INT64_MIN;
	static int32_t x55 = -8;
	static volatile uint32_t x56 = 525U;
	volatile int64_t t8 = -2923421649412LL;

	t8 = ((x53&x54)<<(x55<x56));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x61 = INT64_MIN;
	static uint64_t x62 = 1959548141LLU;
	volatile int8_t x63 = 6;
	int64_t x64 = -1LL;
	volatile uint64_t t9 = 247LLU;

	t9 = ((x61&x62)<<(x63<x64));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x66 = INT8_MIN;
	volatile uint8_t x67 = 0U;
	static volatile int16_t x68 = INT16_MAX;

	t10 = ((x65&x66)<<(x67<x68));

	if (t10 != 256) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x74 = -17;
	volatile int32_t x75 = INT32_MAX;
	int8_t x76 = INT8_MAX;
	static int32_t t11 = -89406357;

	t11 = ((x73&x74)<<(x75<x76));

	if (t11 != 111) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x78 = 15745575379259940LL;
	volatile int64_t x80 = -54080LL;
	int64_t t12 = 60LL;

	t12 = ((x77&x78)<<(x79<x80));

	if (t12 != 36LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x85 = INT64_MIN;
	volatile int32_t x87 = -124982;
	int64_t x88 = INT64_MIN;
	static int64_t t13 = 3LL;

	t13 = ((x85&x86)<<(x87<x88));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x89 = 1394193U;
	static int64_t x90 = -49339181627LL;
	int64_t t14 = 762686LL;

	t14 = ((x89&x90)<<(x91<x92));

	if (t14 != 690178LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x93 = 108U;
	static int8_t x94 = INT8_MIN;
	int64_t x95 = -1LL;
	volatile uint64_t x96 = UINT64_MAX;
	static volatile int32_t t15 = 0;

	t15 = ((x93&x94)<<(x95<x96));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x98 = UINT32_MAX;
	static uint16_t x99 = 2U;
	int64_t x100 = -1LL;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = ((x97&x98)<<(x99<x100));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x105 = 44198790LLU;
	uint16_t x108 = UINT16_MAX;
	uint64_t t17 = 707732241LLU;

	t17 = ((x105&x106)<<(x107<x108));

	if (t17 != 88397580LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x109 = 3240113U;
	uint16_t x110 = 20U;
	int64_t x111 = INT64_MAX;
	uint32_t x112 = UINT32_MAX;

	t18 = ((x109&x110)<<(x111<x112));

	if (t18 != 16U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x118 = INT32_MAX;
	uint8_t x119 = 4U;
	volatile int32_t t19 = 139054;

	t19 = ((x117&x118)<<(x119<x120));

	if (t19 != 705928448) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x123 = INT16_MIN;
	static int8_t x124 = INT8_MIN;
	int32_t t20 = 18;

	t20 = ((x121&x122)<<(x123<x124));

	if (t20 != 24720) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x125 = 5U;
	static int64_t x127 = INT64_MIN;
	int8_t x128 = -1;
	static volatile uint32_t t21 = 57023U;

	t21 = ((x125&x126)<<(x127<x128));

	if (t21 != 2U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x133 = 18U;
	int16_t x134 = -803;
	int16_t x136 = INT16_MAX;
	int32_t t22 = 490539287;

	t22 = ((x133&x134)<<(x135<x136));

	if (t22 != 32) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x137 = 0U;
	static int32_t x139 = INT32_MIN;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t23 = 70876190U;

	t23 = ((x137&x138)<<(x139<x140));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x141 = 14297U;
	int8_t x142 = 38;
	static volatile int64_t x143 = INT64_MIN;
	static volatile int16_t x144 = -55;
	static int32_t t24 = 1;

	t24 = ((x141&x142)<<(x143<x144));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x145 = 28U;
	volatile int32_t x146 = INT32_MAX;
	int16_t x147 = INT16_MIN;
	int32_t t25 = 2;

	t25 = ((x145&x146)<<(x147<x148));

	if (t25 != 28) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x149 = INT8_MIN;
	static int16_t x151 = -1;
	volatile int32_t t26 = 16759544;

	t26 = ((x149&x150)<<(x151<x152));

	if (t26 != 65408) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x153 = 62;
	uint16_t x154 = 2007U;
	int16_t x155 = -1;
	static volatile int32_t t27 = 1;

	t27 = ((x153&x154)<<(x155<x156));

	if (t27 != 44) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x157 = INT32_MIN;
	volatile int8_t x158 = INT8_MAX;
	volatile int8_t x159 = INT8_MIN;
	volatile uint8_t x160 = UINT8_MAX;
	volatile int32_t t28 = 178;

	t28 = ((x157&x158)<<(x159<x160));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x161 = INT32_MAX;
	volatile int8_t x162 = INT8_MAX;
	static uint16_t x163 = 985U;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t29 = 0;

	t29 = ((x161&x162)<<(x163<x164));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x165 = 371LLU;
	int8_t x166 = INT8_MIN;
	static volatile uint64_t t30 = 3366LLU;

	t30 = ((x165&x166)<<(x167<x168));

	if (t30 != 256LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x169 = INT32_MIN;
	static volatile int8_t x171 = INT8_MAX;
	volatile uint16_t x172 = UINT16_MAX;
	volatile int32_t t31 = 65276966;

	t31 = ((x169&x170)<<(x171<x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x173 = 1;

	t32 = ((x173&x174)<<(x175<x176));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x177 = 317563069U;
	int32_t x178 = INT32_MAX;
	int32_t x179 = -507;
	int32_t x180 = -1;
	volatile uint32_t t33 = 48147088U;

	t33 = ((x177&x178)<<(x179<x180));

	if (t33 != 635126138U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x181 = UINT64_MAX;
	int64_t x182 = 5033445416835LL;
	int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t34 = 1LLU;

	t34 = ((x181&x182)<<(x183<x184));

	if (t34 != 10066890833670LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x185 = 69277620U;
	uint64_t x186 = 255928652694525LLU;
	int64_t x188 = -30LL;
	uint64_t t35 = 54595135099875000LLU;

	t35 = ((x185&x186)<<(x187<x188));

	if (t35 != 2098100LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x189 = INT64_MIN;
	volatile int64_t x190 = 46489288LL;
	uint32_t x192 = 82843873U;

	t36 = ((x189&x190)<<(x191<x192));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x193 = 2U;
	uint64_t x194 = UINT64_MAX;
	volatile int8_t x195 = INT8_MAX;
	uint8_t x196 = UINT8_MAX;
	volatile uint64_t t37 = 9566097881LLU;

	t37 = ((x193&x194)<<(x195<x196));

	if (t37 != 4LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x197 = 972972LL;
	int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MAX;
	volatile int64_t t38 = -1414291463LL;

	t38 = ((x197&x198)<<(x199<x200));

	if (t38 != 972928LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x206 = 37037U;
	int8_t x207 = -1;
	static volatile int64_t x208 = INT64_MAX;
	volatile uint64_t t39 = 806926LLU;

	t39 = ((x205&x206)<<(x207<x208));

	if (t39 != 73984LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x209 = INT16_MIN;
	static volatile uint8_t x210 = UINT8_MAX;
	uint16_t x211 = 3U;
	volatile int32_t t40 = 118626352;

	t40 = ((x209&x210)<<(x211<x212));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x213 = 1;
	static uint8_t x214 = 1U;
	int64_t x215 = -1LL;
	int32_t x216 = 29551045;
	int32_t t41 = -905450;

	t41 = ((x213&x214)<<(x215<x216));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x217 = 187144979334566893LLU;
	uint32_t x219 = UINT32_MAX;
	int32_t x220 = INT32_MIN;
	static uint64_t t42 = 758255853354LLU;

	t42 = ((x217&x218)<<(x219<x220));

	if (t42 != 385LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x226 = INT32_MAX;
	static uint8_t x227 = 127U;
	int32_t x228 = -282339;
	volatile int32_t t43 = 0;

	t43 = ((x225&x226)<<(x227<x228));

	if (t43 != 2147450880) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x229 = 1614081226LLU;
	int32_t x230 = -2336;
	static int32_t x232 = INT32_MAX;
	uint64_t t44 = 47325477932019LLU;

	t44 = ((x229&x230)<<(x231<x232));

	if (t44 != 3228158336LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x233 = 0U;
	int32_t x234 = -1;
	volatile int64_t x235 = INT64_MIN;
	volatile int32_t t45 = 9976;

	t45 = ((x233&x234)<<(x235<x236));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x245 = INT16_MIN;
	volatile int8_t x246 = INT8_MAX;
	volatile uint8_t x248 = UINT8_MAX;
	static int32_t t46 = -1406895;

	t46 = ((x245&x246)<<(x247<x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x250 = UINT64_MAX;
	uint8_t x251 = 0U;
	int32_t x252 = 105589525;
	uint64_t t47 = 1503LLU;

	t47 = ((x249&x250)<<(x251<x252));

	if (t47 != 4982150183796LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x253 = INT32_MIN;
	static int16_t x254 = INT16_MAX;
	int8_t x255 = INT8_MIN;
	int8_t x256 = INT8_MIN;
	static int32_t t48 = -231654391;

	t48 = ((x253&x254)<<(x255<x256));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x257 = -1;
	volatile uint8_t x259 = UINT8_MAX;
	int8_t x260 = INT8_MIN;
	int32_t t49 = INT32_MAX;

	t49 = ((x257&x258)<<(x259<x260));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x261 = 81U;
	volatile uint16_t x262 = 4803U;
	volatile int8_t x263 = -4;
	static int16_t x264 = 111;
	uint32_t t50 = 4124780U;

	t50 = ((x261&x262)<<(x263<x264));

	if (t50 != 130U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x265 = 38892781LL;
	volatile uint64_t t51 = 0LLU;

	t51 = ((x265&x266)<<(x267<x268));

	if (t51 != 33633352LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x269 = UINT32_MAX;
	volatile int16_t x270 = -1;
	uint8_t x271 = UINT8_MAX;
	int64_t x272 = 1802978347347LL;
	static volatile uint32_t t52 = 1940902650U;

	t52 = ((x269&x270)<<(x271<x272));

	if (t52 != 4294967294U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x274 = 3050;
	volatile int16_t x275 = INT16_MAX;
	int32_t x276 = INT32_MIN;

	t53 = ((x273&x274)<<(x275<x276));

	if (t53 != 3050LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x277 = INT8_MIN;
	int32_t x279 = INT32_MAX;
	volatile int32_t t54 = 1670;

	t54 = ((x277&x278)<<(x279<x280));

	if (t54 != 65408) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x281 = INT8_MIN;
	uint8_t x282 = 1U;
	int64_t x283 = INT64_MIN;
	int64_t x284 = -1LL;
	static int32_t t55 = -277817561;

	t55 = ((x281&x282)<<(x283<x284));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x294 = 5183839;
	int32_t x295 = 20141421;
	int8_t x296 = INT8_MIN;

	t56 = ((x293&x294)<<(x295<x296));

	if (t56 != 524363) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x297 = 3;
	volatile int32_t x298 = INT32_MAX;
	volatile int64_t x299 = -1LL;
	volatile int32_t x300 = INT32_MAX;
	static int32_t t57 = -2007319;

	t57 = ((x297&x298)<<(x299<x300));

	if (t57 != 6) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x305 = 13U;
	int8_t x308 = -1;
	static uint32_t t58 = 306705508U;

	t58 = ((x305&x306)<<(x307<x308));

	if (t58 != 13U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x309 = INT8_MIN;
	volatile int16_t x310 = 1031;
	int32_t x311 = INT32_MAX;
	int8_t x312 = INT8_MIN;
	volatile int32_t t59 = 42749411;

	t59 = ((x309&x310)<<(x311<x312));

	if (t59 != 1024) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x313 = UINT8_MAX;
	uint16_t x315 = 1093U;
	volatile int16_t x316 = -663;
	int32_t t60 = 480000;

	t60 = ((x313&x314)<<(x315<x316));

	if (t60 != 126) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x317 = INT16_MIN;
	volatile uint32_t x318 = 2738173U;
	static int16_t x319 = INT16_MAX;
	static uint8_t x320 = 0U;

	t61 = ((x317&x318)<<(x319<x320));

	if (t61 != 2719744U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x326 = -99475LL;
	static int64_t t62 = 188520808570543LL;

	t62 = ((x325&x326)<<(x327<x328));

	if (t62 != 2LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x333 = 337208454U;
	uint64_t x334 = 2315710771921180819LLU;
	uint16_t x335 = UINT16_MAX;
	int8_t x336 = INT8_MAX;

	t63 = ((x333&x334)<<(x335<x336));

	if (t63 != 540802LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x337 = -321756539;
	uint64_t x338 = 120LLU;
	int32_t x339 = -4;
	int16_t x340 = 22;
	volatile uint64_t t64 = 48803LLU;

	t64 = ((x337&x338)<<(x339<x340));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x341 = 122U;
	static volatile int8_t x344 = INT8_MAX;
	volatile int32_t t65 = -21;

	t65 = ((x341&x342)<<(x343<x344));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x346 = 22370U;
	int8_t x347 = 1;
	int64_t x348 = INT64_MIN;
	int32_t t66 = -52044;

	t66 = ((x345&x346)<<(x347<x348));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x349 = UINT32_MAX;
	static int32_t x350 = -1;
	int16_t x351 = -1;
	int8_t x352 = -1;
	uint32_t t67 = UINT32_MAX;

	t67 = ((x349&x350)<<(x351<x352));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x353 = 198U;
	int32_t x354 = INT32_MIN;
	static int8_t x355 = INT8_MIN;

	t68 = ((x353&x354)<<(x355<x356));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x357 = INT16_MAX;
	int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MAX;
	int64_t x360 = INT64_MIN;
	int64_t t69 = 13779278696LL;

	t69 = ((x357&x358)<<(x359<x360));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x361 = UINT64_MAX;
	int16_t x362 = INT16_MIN;
	int64_t x363 = -1LL;
	int32_t x364 = INT32_MIN;

	t70 = ((x361&x362)<<(x363<x364));

	if (t70 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x365 = 11691833U;
	static int64_t x367 = -1LL;
	int16_t x368 = 17;
	volatile uint32_t t71 = 26269U;

	t71 = ((x365&x366)<<(x367<x368));

	if (t71 != 23383666U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x374 = -1;
	volatile int32_t x375 = -197025241;
	int8_t x376 = INT8_MIN;
	int32_t t72 = 3;

	t72 = ((x373&x374)<<(x375<x376));

	if (t72 != 510) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x378 = 3U;
	uint16_t x379 = UINT16_MAX;
	int32_t t73 = -38529620;

	t73 = ((x377&x378)<<(x379<x380));

	if (t73 != 6) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x381 = 26LL;
	volatile int8_t x382 = 0;
	int32_t x384 = -10892;
	volatile int64_t t74 = 381317230324LL;

	t74 = ((x381&x382)<<(x383<x384));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x385 = 3LL;
	int16_t x386 = INT16_MAX;
	uint16_t x387 = 33U;
	int8_t x388 = -1;
	volatile int64_t t75 = -1746489LL;

	t75 = ((x385&x386)<<(x387<x388));

	if (t75 != 3LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x389 = 10U;
	volatile int64_t x390 = INT64_MIN;
	uint64_t x391 = UINT64_MAX;
	uint8_t x392 = 0U;
	volatile int64_t t76 = -108193938225618262LL;

	t76 = ((x389&x390)<<(x391<x392));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x397 = 3528406557226166656LLU;
	volatile int64_t x398 = -3274072606163526392LL;
	uint16_t x399 = UINT16_MAX;
	static uint32_t x400 = 4103U;
	uint64_t t77 = 21216LLU;

	t77 = ((x397&x398)<<(x399<x400));

	if (t77 != 1193497888303941888LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x405 = 95U;
	int8_t x406 = INT8_MAX;
	static int64_t x407 = INT64_MIN;
	uint8_t x408 = 37U;
	volatile uint32_t t78 = 208020888U;

	t78 = ((x405&x406)<<(x407<x408));

	if (t78 != 190U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x409 = UINT32_MAX;
	int64_t x410 = -5781621LL;
	volatile int64_t x411 = INT64_MAX;
	int64_t x412 = -1LL;
	int64_t t79 = -16LL;

	t79 = ((x409&x410)<<(x411<x412));

	if (t79 != 4289185675LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x417 = 522328930U;
	int8_t x418 = INT8_MAX;
	uint64_t x419 = 9810340LLU;
	volatile int64_t x420 = 219409176021594LL;
	volatile uint32_t t80 = 0U;

	t80 = ((x417&x418)<<(x419<x420));

	if (t80 != 196U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x422 = 8371LLU;
	int8_t x423 = 12;
	static uint8_t x424 = 3U;
	volatile uint64_t t81 = 7524267LLU;

	t81 = ((x421&x422)<<(x423<x424));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x430 = 33889051454LL;
	uint32_t x431 = 24122U;
	uint32_t x432 = 18U;
	volatile int64_t t82 = 16034122416245LL;

	t82 = ((x429&x430)<<(x431<x432));

	if (t82 != 62LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x437 = -19396LL;
	uint8_t x438 = UINT8_MAX;
	static int32_t x439 = 329738;
	static int16_t x440 = INT16_MAX;
	volatile int64_t t83 = -45575714LL;

	t83 = ((x437&x438)<<(x439<x440));

	if (t83 != 60LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x441 = INT64_MIN;
	volatile uint8_t x442 = 90U;
	int64_t x443 = -1LL;
	static int8_t x444 = -45;
	volatile int64_t t84 = -1797889745421676LL;

	t84 = ((x441&x442)<<(x443<x444));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x445 = -1;
	static int8_t x446 = 1;
	int8_t x447 = INT8_MIN;
	volatile int16_t x448 = INT16_MIN;
	static int32_t t85 = 2685;

	t85 = ((x445&x446)<<(x447<x448));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x450 = 219U;
	static int32_t x451 = -1;
	int16_t x452 = INT16_MAX;
	static volatile int32_t t86 = 855926;

	t86 = ((x449&x450)<<(x451<x452));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x453 = 19U;
	int8_t x454 = -1;
	uint32_t x455 = 454993U;
	int8_t x456 = -1;
	volatile int32_t t87 = -4;

	t87 = ((x453&x454)<<(x455<x456));

	if (t87 != 38) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x461 = UINT8_MAX;
	static int64_t x462 = INT64_MAX;
	static int64_t x463 = INT64_MIN;
	int64_t t88 = 22420027363LL;

	t88 = ((x461&x462)<<(x463<x464));

	if (t88 != 510LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x465 = 1U;
	static volatile int16_t x466 = -1;
	int64_t x467 = 4589853390808150880LL;
	int32_t t89 = 102319733;

	t89 = ((x465&x466)<<(x467<x468));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x469 = INT32_MAX;
	uint16_t x470 = UINT16_MAX;
	int8_t x471 = INT8_MAX;
	int64_t x472 = -1LL;
	int32_t t90 = 3869;

	t90 = ((x469&x470)<<(x471<x472));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x475 = 68U;
	volatile uint64_t t91 = 17659186LLU;

	t91 = ((x473&x474)<<(x475<x476));

	if (t91 != 2471856LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x477 = 124535U;
	uint64_t x479 = 532727327592175LLU;
	uint64_t x480 = 60876101LLU;
	uint32_t t92 = 2204406U;

	t92 = ((x477&x478)<<(x479<x480));

	if (t92 != 119U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x481 = 14;
	static volatile int16_t x483 = -1;
	volatile int32_t t93 = 619328;

	t93 = ((x481&x482)<<(x483<x484));

	if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x485 = 46U;
	static uint32_t x487 = 246036629U;
	uint8_t x488 = UINT8_MAX;

	t94 = ((x485&x486)<<(x487<x488));

	if (t94 != 42) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x489 = UINT32_MAX;
	static int8_t x490 = INT8_MAX;
	static int16_t x491 = INT16_MAX;
	int32_t x492 = 7;
	volatile uint32_t t95 = 3724483U;

	t95 = ((x489&x490)<<(x491<x492));

	if (t95 != 127U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x493 = -1LL;
	uint64_t x494 = 3LLU;
	int8_t x495 = -1;
	uint64_t t96 = 134154020240LLU;

	t96 = ((x493&x494)<<(x495<x496));

	if (t96 != 3LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x497 = 29U;
	int64_t x498 = -509006LL;
	int64_t x499 = -1LL;
	int8_t x500 = -1;
	volatile int64_t t97 = -8068646534690LL;

	t97 = ((x497&x498)<<(x499<x500));

	if (t97 != 16LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x505 = INT16_MIN;
	uint64_t x506 = 1473808355007LLU;
	int32_t x507 = INT32_MIN;
	static int32_t x508 = 202;

	t98 = ((x505&x506)<<(x507<x508));

	if (t98 != 2947616669696LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x510 = 73U;
	int64_t x512 = -1LL;
	volatile uint64_t t99 = 124806928LLU;

	t99 = ((x509&x510)<<(x511<x512));

	if (t99 != 73LLU) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t t0 = UINT64_MAX;
int16_t x16 = INT16_MAX;
int32_t t3 = INT32_MIN;
static int16_t x17 = 1;
volatile uint64_t x20 = 466247411LLU;
uint64_t x24 = 1231108198LLU;
int64_t x26 = INT64_MIN;
volatile int32_t t7 = -805594174;
static uint16_t x38 = 3412U;
static volatile int8_t x39 = -1;
int16_t x40 = -1;
volatile uint64_t x43 = 570733651LLU;
int32_t x45 = INT32_MIN;
uint16_t x47 = 5U;
volatile uint16_t x49 = 2842U;
int32_t x51 = 32315;
uint8_t x54 = UINT8_MAX;
uint16_t x61 = 416U;
volatile int32_t t17 = 1072341682;
static int32_t x75 = 23183294;
int64_t x76 = 181208039097805568LL;
static uint8_t x87 = UINT8_MAX;
uint64_t x88 = 89688621910717LLU;
uint16_t x92 = 35U;
int16_t x95 = INT16_MAX;
static uint64_t x98 = UINT64_MAX;
int8_t x103 = INT8_MAX;
static volatile int32_t x104 = INT32_MAX;
volatile int32_t t25 = -1;
volatile uint32_t x107 = UINT32_MAX;
int32_t x108 = INT32_MIN;
int32_t t26 = -3282573;
volatile uint32_t x117 = UINT32_MAX;
int32_t x121 = -1;
int8_t x124 = 0;
volatile int32_t t31 = -2490;
uint32_t x136 = 0U;
int8_t x137 = 0;
uint64_t x143 = 733269085307911841LLU;
int32_t t35 = 168;
volatile int16_t x147 = -1;
int32_t t37 = 7;
static uint64_t x165 = UINT64_MAX;
volatile int16_t x168 = INT16_MIN;
int8_t x170 = 20;
int16_t x171 = -1;
int64_t x174 = -1LL;
static uint32_t x177 = 2128372U;
int16_t x179 = -1;
volatile uint32_t t44 = 29268014U;
volatile uint32_t t47 = 94778U;
static int8_t x197 = -1;
int8_t x198 = -40;
int32_t x206 = INT32_MAX;
volatile int32_t t52 = -952372;
int16_t x215 = INT16_MIN;
int32_t t53 = -822736;
static int8_t x217 = -1;
uint32_t x218 = 3610U;
static int32_t x219 = INT32_MIN;
volatile uint32_t x220 = UINT32_MAX;
volatile int32_t t54 = -1020243668;
uint16_t x225 = UINT16_MAX;
uint32_t x227 = 65U;
uint32_t x231 = UINT32_MAX;
int32_t x234 = 1665213;
static volatile int16_t x240 = INT16_MIN;
int64_t t59 = -46432426215LL;
volatile uint64_t x241 = 4LLU;
static int16_t x242 = INT16_MIN;
volatile uint64_t t60 = 658LLU;
int32_t x247 = 10313620;
int64_t x250 = -660419662272LL;
static int16_t x256 = INT16_MIN;
uint32_t x258 = UINT32_MAX;
volatile int32_t t64 = 598382;
int32_t x261 = 1281424;
int32_t t65 = -7;
volatile int64_t x267 = INT64_MIN;
int8_t x274 = INT8_MAX;
int32_t x279 = INT32_MIN;
volatile int32_t x281 = -1;
int8_t x283 = INT8_MAX;
volatile uint32_t x285 = 423781U;
int32_t t72 = -987552;
static int32_t x300 = 52364318;
int32_t t74 = 22323;
int64_t x309 = INT64_MIN;
int64_t x312 = -2609570LL;
int16_t x316 = INT16_MIN;
int32_t t78 = 1;
volatile int32_t t79 = INT32_MIN;
uint16_t x324 = UINT16_MAX;
volatile int32_t t81 = -369811588;
volatile uint64_t x336 = 1337LLU;
static volatile int32_t t83 = -1;
volatile int16_t x345 = 0;
int16_t x348 = INT16_MIN;
int32_t x354 = INT32_MIN;
int32_t x358 = -3373317;
int8_t x360 = INT8_MAX;
static uint64_t t89 = UINT64_MAX;
uint16_t x366 = 16U;
int16_t x373 = INT16_MIN;
int8_t x376 = INT8_MAX;
int32_t x378 = INT32_MIN;
int32_t t94 = -39405;
uint32_t x384 = UINT32_MAX;
int32_t t96 = 6827017;
int32_t x389 = 7847;
static volatile int32_t t98 = 541357554;
uint64_t x398 = 69690970348043LLU;
static int16_t x399 = -135;
int32_t t99 = 158306;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	volatile uint64_t x2 = 3274LLU;
	int32_t x3 = INT32_MAX;
	volatile int8_t x4 = INT8_MIN;

	t0 = (x1*((x2|x3)<x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int8_t x6 = -1;
	uint32_t x7 = UINT32_MAX;
	static int64_t x8 = INT64_MAX;
	int64_t t1 = INT64_MIN;

	t1 = (x5*((x6|x7)<x8));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	int8_t x10 = 0;
	int8_t x11 = 23;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 1195826;

	t2 = (x9*((x10|x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int16_t x14 = 2527;
	static volatile int64_t x15 = INT64_MIN;

	t3 = (x13*((x14|x15)<x16));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	uint32_t x19 = UINT32_MAX;
	int32_t t4 = -61300;

	t4 = (x17*((x18|x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 26;
	static uint8_t x22 = 3U;
	int16_t x23 = 1;
	volatile int32_t t5 = -21020;

	t5 = (x21*((x22|x23)<x24));

	if (t5 != 26) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static uint32_t x27 = UINT32_MAX;
	static uint64_t x28 = 1088837LLU;
	volatile int32_t t6 = -50819;

	t6 = (x25*((x26|x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -231;
	uint64_t x30 = UINT64_MAX;
	int16_t x31 = INT16_MIN;
	uint16_t x32 = 218U;

	t7 = (x29*((x30|x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	volatile uint16_t x34 = 339U;
	uint32_t x35 = UINT32_MAX;
	uint64_t x36 = 19164888718075371LLU;
	int32_t t8 = 940;

	t8 = (x33*((x34|x35)<x36));

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	static volatile uint64_t t9 = 217950325LLU;

	t9 = (x37*((x38|x39)<x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -15;
	static int8_t x42 = INT8_MAX;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -1;

	t10 = (x41*((x42|x43)<x44));

	if (t10 != -15) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 3763060LLU;
	static uint64_t x48 = UINT64_MAX;
	volatile int32_t t11 = INT32_MIN;

	t11 = (x45*((x46|x47)<x48));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x50 = -1;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -891850840;

	t12 = (x49*((x50|x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	volatile uint64_t x55 = 51LLU;
	volatile uint16_t x56 = 395U;
	int32_t t13 = -83881303;

	t13 = (x53*((x54|x55)<x56));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int16_t x58 = -1;
	static volatile int8_t x59 = -1;
	uint64_t x60 = 233641843710824100LLU;
	int32_t t14 = 228379;

	t14 = (x57*((x58|x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = INT8_MAX;
	uint64_t x63 = 37547676410282863LLU;
	int64_t x64 = 1LL;
	volatile int32_t t15 = -11348;

	t15 = (x61*((x62|x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 3544U;
	uint32_t x66 = 1U;
	int16_t x67 = 6;
	uint32_t x68 = 12753U;
	int32_t t16 = -850662532;

	t16 = (x65*((x66|x67)<x68));

	if (t16 != 3544) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1310;
	int8_t x70 = 1;
	static int64_t x71 = -3LL;
	int64_t x72 = INT64_MIN;

	t17 = (x69*((x70|x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	uint32_t x74 = UINT32_MAX;
	int32_t t18 = 493;

	t18 = (x73*((x74|x75)<x76));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static int8_t x78 = -2;
	static int32_t x79 = -1;
	uint8_t x80 = 81U;
	int32_t t19 = -5908;

	t19 = (x77*((x78|x79)<x80));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = 0;
	int64_t x82 = 1126706349495293559LL;
	int64_t x83 = INT64_MAX;
	uint64_t x84 = 8LLU;
	int32_t t20 = -7813;

	t20 = (x81*((x82|x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	static int64_t x86 = -9803629384118LL;
	volatile uint32_t t21 = 13696U;

	t21 = (x85*((x86|x87)<x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int32_t x90 = -1;
	uint16_t x91 = 78U;
	int32_t t22 = -122;

	t22 = (x89*((x90|x91)<x92));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 297359350300LLU;
	static uint32_t x94 = 3736U;
	int32_t x96 = INT32_MIN;
	volatile uint64_t t23 = 41161871173505333LLU;

	t23 = (x93*((x94|x95)<x96));

	if (t23 != 297359350300LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 108U;
	int32_t x99 = 470364175;
	volatile int64_t x100 = -4187LL;
	static volatile int32_t t24 = 495628;

	t24 = (x97*((x98|x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 240736;
	int64_t x102 = 59172282LL;

	t25 = (x101*((x102|x103)<x104));

	if (t25 != 240736) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 1U;
	static volatile int8_t x106 = INT8_MIN;

	t26 = (x105*((x106|x107)<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = 40049U;
	int16_t x110 = -28;
	uint16_t x111 = 529U;
	int16_t x112 = 3;
	uint32_t t27 = 3765248U;

	t27 = (x109*((x110|x111)<x112));

	if (t27 != 40049U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 5473LLU;
	static volatile int32_t x114 = -1;
	int64_t x115 = -1LL;
	int64_t x116 = INT64_MIN;
	static uint64_t t28 = 503746226LLU;

	t28 = (x113*((x114|x115)<x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = -1LL;
	uint64_t x119 = 58068077611538996LLU;
	int8_t x120 = 36;
	volatile uint32_t t29 = 43047U;

	t29 = (x117*((x118|x119)<x120));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = -524337401318LL;
	int8_t x123 = -1;
	volatile int32_t t30 = 19428;

	t30 = (x121*((x122|x123)<x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	volatile int8_t x126 = INT8_MIN;
	uint32_t x127 = UINT32_MAX;
	static int64_t x128 = INT64_MIN;

	t31 = (x125*((x126|x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 7956U;
	static int8_t x130 = -1;
	uint16_t x131 = UINT16_MAX;
	uint64_t x132 = UINT64_MAX;
	static uint32_t t32 = 1U;

	t32 = (x129*((x130|x131)<x132));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 2U;
	uint8_t x134 = 7U;
	uint64_t x135 = UINT64_MAX;
	static uint32_t t33 = 16031U;

	t33 = (x133*((x134|x135)<x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = INT64_MIN;
	uint32_t x139 = 113980210U;
	static int64_t x140 = INT64_MIN;
	int32_t t34 = -259597;

	t34 = (x137*((x138|x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int64_t x142 = INT64_MIN;
	int8_t x144 = INT8_MAX;

	t35 = (x141*((x142|x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	uint16_t x146 = 2578U;
	static uint32_t x148 = UINT32_MAX;
	uint64_t t36 = 96997LLU;

	t36 = (x145*((x146|x147)<x148));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -6;
	static volatile int64_t x150 = INT64_MIN;
	uint16_t x151 = 2669U;
	int64_t x152 = 773LL;

	t37 = (x149*((x150|x151)<x152));

	if (t37 != -6) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	uint64_t x154 = 406349215LLU;
	volatile int64_t x155 = 17413LL;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t38 = 908203;

	t38 = (x153*((x154|x155)<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 25627U;
	int8_t x158 = -1;
	int64_t x159 = INT64_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -1741;

	t39 = (x157*((x158|x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static int16_t x162 = INT16_MAX;
	static volatile int64_t x163 = -1LL;
	uint16_t x164 = 3U;
	int32_t t40 = 41;

	t40 = (x161*((x162|x163)<x164));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x166 = 236280857681682LLU;
	uint64_t x167 = 39727457LLU;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (x165*((x166|x167)<x168));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -34;
	volatile uint16_t x172 = 4847U;
	volatile int32_t t42 = 74249666;

	t42 = (x169*((x170|x171)<x172));

	if (t42 != -34) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MIN;
	static int32_t x175 = -1;
	int64_t x176 = -1LL;
	int32_t t43 = -11;

	t43 = (x173*((x174|x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = 69993LLU;
	uint64_t x180 = 0LLU;

	t44 = (x177*((x178|x179)<x180));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	static uint16_t x182 = 21674U;
	int64_t x183 = INT64_MAX;
	int16_t x184 = -1;
	static volatile int64_t t45 = -3310031384835248LL;

	t45 = (x181*((x182|x183)<x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 12277U;
	int16_t x186 = -49;
	int64_t x187 = 2132951781683LL;
	int8_t x188 = INT8_MIN;
	static uint32_t t46 = 21597493U;

	t46 = (x185*((x186|x187)<x188));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = 1U;
	uint8_t x190 = 0U;
	int16_t x191 = INT16_MAX;
	uint16_t x192 = 11U;

	t47 = (x189*((x190|x191)<x192));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MIN;
	volatile uint32_t x195 = 46U;
	int32_t x196 = -1;
	static volatile int32_t t48 = -725;

	t48 = (x193*((x194|x195)<x196));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x199 = INT16_MIN;
	int32_t x200 = INT32_MAX;
	volatile int32_t t49 = 43976529;

	t49 = (x197*((x198|x199)<x200));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = INT16_MIN;
	int32_t x202 = INT32_MIN;
	static volatile int32_t x203 = INT32_MAX;
	uint32_t x204 = 57U;
	static volatile int32_t t50 = -12535;

	t50 = (x201*((x202|x203)<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 2;
	uint8_t x207 = 13U;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = -998447851;

	t51 = (x205*((x206|x207)<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	int8_t x210 = INT8_MIN;
	int64_t x211 = -56955342LL;
	int8_t x212 = -40;

	t52 = (x209*((x210|x211)<x212));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = 27;
	int32_t x214 = INT32_MAX;
	uint16_t x216 = 383U;

	t53 = (x213*((x214|x215)<x216));

	if (t53 != 27) { NG(); } else { ; }
	
}

void f54(void) {


	t54 = (x217*((x218|x219)<x220));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = INT64_MIN;
	volatile uint32_t x222 = UINT32_MAX;
	uint8_t x223 = 1U;
	int64_t x224 = 3720190LL;
	volatile int64_t t55 = 0LL;

	t55 = (x221*((x222|x223)<x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x226 = -195609917688081LL;
	volatile uint32_t x228 = 3701166U;
	static volatile int32_t t56 = -250423;

	t56 = (x225*((x226|x227)<x228));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	int64_t x230 = 3684786LL;
	uint16_t x232 = 2U;
	volatile int32_t t57 = 95749;

	t57 = (x229*((x230|x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x233 = 207LLU;
	static uint8_t x235 = 3U;
	int32_t x236 = 36776004;
	volatile uint64_t t58 = 2502143967LLU;

	t58 = (x233*((x234|x235)<x236));

	if (t58 != 207LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = INT64_MIN;
	static uint32_t x238 = UINT32_MAX;
	int8_t x239 = -1;

	t59 = (x237*((x238|x239)<x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x243 = 2U;
	uint16_t x244 = 5U;

	t60 = (x241*((x242|x243)<x244));

	if (t60 != 4LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = -26;
	int8_t x248 = -3;
	int32_t t61 = -8228182;

	t61 = (x245*((x246|x247)<x248));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 0U;
	static int8_t x251 = INT8_MIN;
	volatile int16_t x252 = -1;
	int32_t t62 = -306882823;

	t62 = (x249*((x250|x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	static volatile int8_t x254 = INT8_MAX;
	int16_t x255 = -1547;
	volatile int64_t t63 = -4071796819009087LL;

	t63 = (x253*((x254|x255)<x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x257 = INT16_MIN;
	static uint64_t x259 = UINT64_MAX;
	int32_t x260 = -1;

	t64 = (x257*((x258|x259)<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x262 = UINT16_MAX;
	static int32_t x263 = -1;
	volatile int64_t x264 = 387215766LL;

	t65 = (x261*((x262|x263)<x264));

	if (t65 != 1281424) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -1;
	uint32_t x266 = 50U;
	int8_t x268 = INT8_MIN;
	int32_t t66 = 288;

	t66 = (x265*((x266|x267)<x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = 2U;
	static int64_t x270 = -43LL;
	volatile uint64_t x271 = 35844024610760895LLU;
	int32_t x272 = 342258350;
	int32_t t67 = 14184332;

	t67 = (x269*((x270|x271)<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	int64_t x275 = 2888347848868LL;
	volatile int32_t x276 = INT32_MAX;
	static volatile int32_t t68 = 0;

	t68 = (x273*((x274|x275)<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = -1;
	int32_t x280 = INT32_MAX;
	volatile int32_t t69 = 105508752;

	t69 = (x277*((x278|x279)<x280));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = 20;
	int64_t x284 = INT64_MAX;
	volatile int32_t t70 = 3;

	t70 = (x281*((x282|x283)<x284));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = INT16_MAX;
	uint8_t x287 = 23U;
	uint16_t x288 = 1818U;
	volatile uint32_t t71 = 5U;

	t71 = (x285*((x286|x287)<x288));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MIN;
	static uint8_t x291 = 48U;
	int32_t x292 = INT32_MIN;

	t72 = (x289*((x290|x291)<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	volatile int32_t x294 = INT32_MAX;
	static int8_t x295 = INT8_MAX;
	int64_t x296 = 4001LL;
	static uint32_t t73 = 972634U;

	t73 = (x293*((x294|x295)<x296));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = -1;
	static int8_t x298 = -5;
	int16_t x299 = INT16_MAX;

	t74 = (x297*((x298|x299)<x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 157832727525LLU;
	volatile int8_t x302 = -1;
	volatile uint8_t x303 = 26U;
	int8_t x304 = -2;
	volatile uint64_t t75 = 47246LLU;

	t75 = (x301*((x302|x303)<x304));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	static uint64_t x306 = 34217464118LLU;
	int8_t x307 = -1;
	int8_t x308 = 0;
	volatile int32_t t76 = -32835;

	t76 = (x305*((x306|x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x310 = 7508012690LLU;
	static uint16_t x311 = UINT16_MAX;
	int64_t t77 = INT64_MIN;

	t77 = (x309*((x310|x311)<x312));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MIN;
	int16_t x314 = -1;
	static uint64_t x315 = UINT64_MAX;

	t78 = (x313*((x314|x315)<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	uint64_t x318 = 0LLU;
	int8_t x319 = INT8_MAX;
	volatile int8_t x320 = INT8_MIN;

	t79 = (x317*((x318|x319)<x320));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	static uint32_t x322 = UINT32_MAX;
	uint8_t x323 = 58U;
	static int32_t t80 = -4;

	t80 = (x321*((x322|x323)<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 12;
	static int16_t x326 = 2;
	uint32_t x327 = 165U;
	volatile int32_t x328 = INT32_MIN;

	t81 = (x325*((x326|x327)<x328));

	if (t81 != 12) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	int64_t x330 = -1LL;
	uint64_t x331 = UINT64_MAX;
	int64_t x332 = INT64_MAX;
	int32_t t82 = 3;

	t82 = (x329*((x330|x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	int16_t x334 = INT16_MAX;
	int64_t x335 = 11344703200LL;

	t83 = (x333*((x334|x335)<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MAX;
	volatile int16_t x338 = INT16_MAX;
	volatile uint8_t x339 = UINT8_MAX;
	uint32_t x340 = 850359U;
	static int64_t t84 = INT64_MAX;

	t84 = (x337*((x338|x339)<x340));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	static int8_t x342 = INT8_MAX;
	int16_t x343 = INT16_MAX;
	uint16_t x344 = UINT16_MAX;
	int64_t t85 = -261LL;

	t85 = (x341*((x342|x343)<x344));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x346 = 238U;
	static uint16_t x347 = 15U;
	int32_t t86 = -15;

	t86 = (x345*((x346|x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 38080519991689330LLU;
	int8_t x350 = 1;
	static int32_t x351 = 1;
	uint16_t x352 = UINT16_MAX;
	uint64_t t87 = 22584LLU;

	t87 = (x349*((x350|x351)<x352));

	if (t87 != 38080519991689330LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	static int8_t x355 = 1;
	volatile int16_t x356 = INT16_MIN;
	int64_t t88 = INT64_MIN;

	t88 = (x353*((x354|x355)<x356));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x357 = UINT64_MAX;
	int32_t x359 = -465769;

	t89 = (x357*((x358|x359)<x360));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 0U;
	int64_t x362 = -26431LL;
	int16_t x363 = INT16_MIN;
	volatile int64_t x364 = -1LL;
	int32_t t90 = 12;

	t90 = (x361*((x362|x363)<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1;
	static uint32_t x367 = UINT32_MAX;
	uint32_t x368 = 6536U;
	static int32_t t91 = 33239131;

	t91 = (x365*((x366|x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int64_t x370 = -787317449LL;
	volatile int8_t x371 = INT8_MIN;
	volatile int64_t x372 = -1LL;
	int32_t t92 = 472;

	t92 = (x369*((x370|x371)<x372));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = INT32_MAX;
	int32_t x375 = -1;
	int32_t t93 = -3882891;

	t93 = (x373*((x374|x375)<x376));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	volatile int64_t x379 = INT64_MIN;
	volatile uint64_t x380 = 364376357562LLU;

	t94 = (x377*((x378|x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 14U;
	int16_t x382 = 3;
	static int16_t x383 = INT16_MIN;
	volatile int32_t t95 = -2071787;

	t95 = (x381*((x382|x383)<x384));

	if (t95 != 14) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 2U;
	uint16_t x386 = 60U;
	int64_t x387 = -1LL;
	uint16_t x388 = 274U;

	t96 = (x385*((x386|x387)<x388));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MIN;
	volatile int64_t x391 = INT64_MIN;
	volatile int8_t x392 = INT8_MAX;
	volatile int32_t t97 = 13572;

	t97 = (x389*((x390|x391)<x392));

	if (t97 != 7847) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = 0;
	int16_t x394 = INT16_MIN;
	int64_t x395 = 95421106205949LL;
	static volatile uint16_t x396 = 54U;

	t98 = (x393*((x394|x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x397 = -3;
	int32_t x400 = INT32_MIN;

	t99 = (x397*((x398|x399)<x400));

	if (t99 != 0) { NG(); } else { ; }
	
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


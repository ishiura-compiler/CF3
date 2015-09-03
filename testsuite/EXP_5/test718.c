#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t0 = 8653811938LLU;
static volatile int32_t x5 = -1;
int64_t t1 = 1210LL;
int16_t x13 = INT16_MAX;
uint8_t x16 = 4U;
int8_t x17 = -1;
static volatile int64_t x19 = INT64_MIN;
int64_t x21 = -24830433LL;
int16_t x22 = -1;
volatile int8_t x27 = 43;
static volatile uint32_t t5 = 2135256157U;
static int32_t x32 = -1;
volatile int32_t x35 = 5;
uint64_t x36 = 5LLU;
static int16_t x40 = 172;
volatile uint16_t x44 = UINT16_MAX;
static volatile int8_t x47 = INT8_MAX;
int32_t x52 = -576112574;
int32_t t11 = 36;
volatile int32_t x56 = INT32_MIN;
static int16_t x58 = INT16_MIN;
int32_t t13 = -92683;
static int8_t x78 = -2;
int32_t x85 = -12719531;
int64_t x96 = -877LL;
int8_t x105 = INT8_MAX;
uint32_t x107 = 3663U;
int32_t x109 = -363713848;
volatile int32_t t25 = 19;
static int16_t x117 = INT16_MAX;
static int8_t x122 = -1;
int16_t x124 = INT16_MAX;
volatile int32_t t27 = -12803;
int16_t x126 = -1;
static int32_t x141 = -1;
uint16_t x151 = 1621U;
int64_t x152 = -8330519711453LL;
volatile int32_t x153 = -1;
int8_t x168 = INT8_MAX;
static uint16_t x173 = UINT16_MAX;
int64_t x174 = -33084647231LL;
int8_t x184 = INT8_MAX;
int16_t x186 = -4128;
volatile int16_t x188 = -28;
uint8_t x189 = UINT8_MAX;
static uint32_t x194 = UINT32_MAX;
int16_t x198 = INT16_MIN;
int64_t x200 = INT64_MIN;
static int64_t x202 = -6LL;
volatile uint16_t x204 = UINT16_MAX;
volatile int64_t t47 = 1LL;
int32_t t48 = -6;
static int64_t x209 = INT64_MIN;
int32_t x211 = -1703842;
static volatile int64_t t49 = 26712590912264LL;
uint32_t x218 = 4288975U;
uint32_t x219 = UINT32_MAX;
int64_t x223 = -14405LL;
int16_t x226 = -1;
int32_t x227 = INT32_MIN;
static volatile uint8_t x237 = UINT8_MAX;
uint16_t x238 = UINT16_MAX;
uint32_t x240 = 1249659U;
static uint32_t t54 = 1U;
volatile int16_t x245 = 8;
int16_t x265 = -22;
int8_t x272 = -1;
uint8_t x275 = 94U;
int16_t x279 = -7;
int64_t x290 = -323368LL;
int16_t x292 = -7051;
int64_t t66 = -260799310640LL;
volatile uint64_t x301 = UINT64_MAX;
static uint64_t x302 = 26729530666LLU;
static int16_t x309 = -1;
int64_t x312 = INT64_MAX;
uint32_t x315 = 5394038U;
volatile uint32_t x319 = 12528U;
static uint32_t x326 = 14471U;
uint16_t x328 = UINT16_MAX;
int32_t x333 = 5399217;
static uint8_t x336 = 29U;
uint64_t t76 = 9539046309LLU;
int16_t x339 = INT16_MIN;
uint8_t x350 = 0U;
int8_t x358 = 9;
int8_t x367 = -1;
static volatile uint64_t x374 = 627138LLU;
volatile uint64_t x378 = 453730065LLU;
int8_t x392 = INT8_MIN;
uint64_t t91 = 34023970083545246LLU;
int16_t x405 = INT16_MIN;
int8_t x406 = INT8_MAX;
int64_t x410 = -1LL;
uint32_t x418 = UINT32_MAX;
volatile int32_t x420 = INT32_MIN;
uint32_t t95 = 12534794U;
uint64_t x422 = UINT64_MAX;
uint32_t t97 = 19910955U;
static uint32_t x431 = 1815568805U;
uint16_t x432 = 123U;
volatile uint32_t x436 = UINT32_MAX;


void f0(void) {
	volatile int32_t x1 = -249;
	static uint64_t x2 = 26433656LLU;
	int64_t x3 = INT64_MAX;
	volatile int16_t x4 = INT16_MAX;

	t0 = (x1*((x2%x3)/x4));

	if (t0 != 18446744073709350922LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x6 = 65743106U;
	int16_t x7 = -1;
	static int64_t x8 = INT64_MAX;

	t1 = (x5*((x6%x7)/x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x14 = 521U;
	static int16_t x15 = INT16_MAX;
	volatile int32_t t2 = -309315;

	t2 = (x13*((x14%x15)/x16));

	if (t2 != 4259710) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MAX;
	int64_t x20 = 36598LL;
	int64_t t3 = 121823410636LL;

	t3 = (x17*((x18%x19)/x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x23 = INT8_MAX;
	int16_t x24 = INT16_MAX;
	volatile int64_t t4 = -8831204061LL;

	t4 = (x21*((x22%x23)/x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = 2U;
	uint32_t x26 = 186U;
	uint16_t x28 = 2157U;

	t5 = (x25*((x26%x27)/x28));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = -1;
	static volatile int32_t x30 = -1;
	int8_t x31 = INT8_MIN;
	static int32_t t6 = 33598;

	t6 = (x29*((x30%x31)/x32));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 30935U;
	int16_t x34 = INT16_MIN;
	uint64_t t7 = 900245590129137LLU;

	t7 = (x33*((x34%x35)/x36));

	if (t7 != 18446744073709514494LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -17;
	int64_t x38 = 727206976941LL;
	int16_t x39 = -1;
	volatile int64_t t8 = -1704619803535159276LL;

	t8 = (x37*((x38%x39)/x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x41 = 7925U;
	int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	volatile int32_t t9 = -684;

	t9 = (x41*((x42%x43)/x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = 0;
	uint32_t x46 = 2054786U;
	volatile int16_t x48 = 734;
	static volatile uint32_t t10 = 158547043U;

	t10 = (x45*((x46%x47)/x48));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x49 = INT32_MIN;
	static int32_t x50 = INT32_MIN;
	int16_t x51 = 10318;

	t11 = (x49*((x50%x51)/x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = INT8_MAX;
	int16_t x54 = INT16_MIN;
	volatile int8_t x55 = INT8_MAX;
	static int32_t t12 = 3224;

	t12 = (x53*((x54%x55)/x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 8U;
	int32_t x59 = -1;
	int32_t x60 = 37;

	t13 = (x57*((x58%x59)/x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = 4661U;
	volatile int32_t x62 = 117301;
	int16_t x63 = -26;
	uint16_t x64 = UINT16_MAX;
	uint32_t t14 = 0U;

	t14 = (x61*((x62%x63)/x64));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -1;
	static int32_t x66 = INT32_MAX;
	int64_t x67 = -1LL;
	int64_t x68 = 91071772742LL;
	static int64_t t15 = 18984LL;

	t15 = (x65*((x66%x67)/x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -1;
	static volatile uint32_t x70 = 3U;
	int8_t x71 = 27;
	int16_t x72 = INT16_MAX;
	volatile uint32_t t16 = 574U;

	t16 = (x69*((x70%x71)/x72));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x73 = 45U;
	static int32_t x74 = INT32_MIN;
	static int32_t x75 = -1;
	uint16_t x76 = 19131U;
	volatile int32_t t17 = -45327;

	t17 = (x73*((x74%x75)/x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MAX;
	volatile int16_t x79 = -2763;
	int8_t x80 = INT8_MIN;
	int64_t t18 = 51169053962LL;

	t18 = (x77*((x78%x79)/x80));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x86 = 0;
	int16_t x87 = INT16_MAX;
	int64_t x88 = INT64_MAX;
	int64_t t19 = 200959929888LL;

	t19 = (x85*((x86%x87)/x88));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = 892161365;
	int8_t x90 = -1;
	volatile uint8_t x91 = 27U;
	int8_t x92 = INT8_MIN;
	int32_t t20 = -10792208;

	t20 = (x89*((x90%x91)/x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = INT32_MIN;
	volatile uint64_t t21 = 242956126136LLU;

	t21 = (x93*((x94%x95)/x96));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 30165151804LLU;
	int32_t x98 = INT32_MAX;
	int16_t x99 = INT16_MIN;
	volatile int8_t x100 = INT8_MIN;
	volatile uint64_t t22 = 72489069LLU;

	t22 = (x97*((x98%x99)/x100));

	if (t22 != 18446736381595841596LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x106 = INT64_MIN;
	int8_t x108 = INT8_MIN;
	int64_t t23 = 380711236755LL;

	t23 = (x105*((x106%x107)/x108));

	if (t23 != 3048LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x110 = -1;
	uint32_t x111 = UINT32_MAX;
	int32_t x112 = -1;
	uint32_t t24 = 2U;

	t24 = (x109*((x110%x111)/x112));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x113 = -5852905;
	uint16_t x114 = 172U;
	static int32_t x115 = INT32_MIN;
	volatile int32_t x116 = INT32_MAX;

	t25 = (x113*((x114%x115)/x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x118 = UINT16_MAX;
	uint16_t x119 = UINT16_MAX;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t26 = 884LLU;

	t26 = (x117*((x118%x119)/x120));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x121 = INT16_MIN;
	int8_t x123 = -1;

	t27 = (x121*((x122%x123)/x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = -8722;
	int8_t x127 = INT8_MAX;
	int32_t x128 = 2430747;
	static int32_t t28 = -343239;

	t28 = (x125*((x126%x127)/x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -233;
	uint64_t x130 = UINT64_MAX;
	static int64_t x131 = INT64_MAX;
	int32_t x132 = INT32_MAX;
	volatile uint64_t t29 = 435357380498289317LLU;

	t29 = (x129*((x130%x131)/x132));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	int8_t x134 = -1;
	int64_t x135 = -1LL;
	static uint64_t x136 = 42755LLU;
	uint64_t t30 = 5LLU;

	t30 = (x133*((x134%x135)/x136));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x137 = 61;
	uint16_t x138 = 26U;
	int8_t x139 = -1;
	int8_t x140 = -11;
	volatile int32_t t31 = 0;

	t31 = (x137*((x138%x139)/x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x142 = -233774836016LL;
	static uint16_t x143 = UINT16_MAX;
	volatile uint32_t x144 = 146726U;
	static volatile int64_t t32 = -43091096LL;

	t32 = (x141*((x142%x143)/x144));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x145 = 1U;
	int64_t x146 = INT64_MIN;
	static volatile int64_t x147 = -1LL;
	uint16_t x148 = 20100U;
	static int64_t t33 = 161747620806LL;

	t33 = (x145*((x146%x147)/x148));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x149 = INT8_MIN;
	int64_t x150 = -1LL;
	int64_t t34 = 3698813LL;

	t34 = (x149*((x150%x151)/x152));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x154 = INT32_MAX;
	static volatile uint16_t x155 = 879U;
	uint16_t x156 = 5771U;
	int32_t t35 = -1940841;

	t35 = (x153*((x154%x155)/x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = 2;
	volatile int32_t x158 = -6922;
	volatile int8_t x159 = -20;
	static int32_t x160 = 262571412;
	int32_t t36 = -21;

	t36 = (x157*((x158%x159)/x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x161 = 533;
	int16_t x162 = INT16_MIN;
	uint64_t x163 = 2924841415485425563LLU;
	int32_t x164 = INT32_MAX;
	volatile uint64_t t37 = 4LLU;

	t37 = (x161*((x162%x163)/x164));

	if (t37 != 222805768107LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	static uint8_t x166 = 56U;
	int32_t x167 = -1;
	volatile int64_t t38 = 7835300428183LL;

	t38 = (x165*((x166%x167)/x168));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = 4U;
	uint8_t x170 = UINT8_MAX;
	static int16_t x171 = INT16_MIN;
	int64_t x172 = 4161480LL;
	volatile int64_t t39 = -4079574384LL;

	t39 = (x169*((x170%x171)/x172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x175 = 5943006LLU;
	uint16_t x176 = 15U;
	volatile uint64_t t40 = 1715601376LLU;

	t40 = (x173*((x174%x175)/x176));

	if (t40 != 21432238725LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = INT64_MIN;
	int64_t x179 = -3LL;
	int16_t x180 = 9;
	static int64_t t41 = 8LL;

	t41 = (x177*((x178%x179)/x180));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x181 = INT32_MIN;
	static int64_t x182 = INT64_MIN;
	int32_t x183 = -1;
	static int64_t t42 = -389940LL;

	t42 = (x181*((x182%x183)/x184));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = 16548124842710LL;
	static int16_t x187 = 83;
	volatile int64_t t43 = 223458678182788LL;

	t43 = (x185*((x186%x187)/x188));

	if (t43 != 33096249685420LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x190 = -1;
	int16_t x191 = -48;
	static int64_t x192 = INT64_MAX;
	volatile int64_t t44 = -9760105361680LL;

	t44 = (x189*((x190%x191)/x192));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	int16_t x195 = 21;
	int32_t x196 = INT32_MAX;
	volatile uint32_t t45 = 49U;

	t45 = (x193*((x194%x195)/x196));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MIN;
	uint32_t x199 = 72U;
	volatile int64_t t46 = -1470473803LL;

	t46 = (x197*((x198%x199)/x200));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MIN;
	int8_t x203 = INT8_MIN;

	t47 = (x201*((x202%x203)/x204));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MAX;
	int32_t x206 = INT32_MIN;
	int16_t x207 = 6140;
	volatile int8_t x208 = INT8_MIN;

	t48 = (x205*((x206%x207)/x208));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x210 = INT8_MAX;
	static int32_t x212 = INT32_MAX;

	t49 = (x209*((x210%x211)/x212));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = 179;
	volatile int64_t x214 = INT64_MIN;
	volatile int8_t x215 = 1;
	int32_t x216 = INT32_MIN;
	int64_t t50 = 62529724996058655LL;

	t50 = (x213*((x214%x215)/x216));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x217 = UINT64_MAX;
	int64_t x220 = 29900375669434LL;
	uint64_t t51 = 48LLU;

	t51 = (x217*((x218%x219)/x220));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x221 = INT64_MAX;
	static int8_t x222 = INT8_MIN;
	int64_t x224 = INT64_MIN;
	int64_t t52 = 0LL;

	t52 = (x221*((x222%x223)/x224));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MIN;
	int32_t x228 = INT32_MAX;
	int64_t t53 = 12LL;

	t53 = (x225*((x226%x227)/x228));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x239 = INT8_MIN;

	t54 = (x237*((x238%x239)/x240));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x241 = INT16_MIN;
	volatile int8_t x242 = -4;
	int32_t x243 = INT32_MIN;
	uint8_t x244 = 2U;
	int32_t t55 = -23;

	t55 = (x241*((x242%x243)/x244));

	if (t55 != 65536) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x246 = INT64_MAX;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = 1;
	volatile int64_t t56 = 85LL;

	t56 = (x245*((x246%x247)/x248));

	if (t56 != 17179869176LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = INT8_MAX;
	static uint16_t x250 = UINT16_MAX;
	static volatile uint32_t x251 = 21527U;
	int32_t x252 = INT32_MAX;
	volatile uint32_t t57 = 142093937U;

	t57 = (x249*((x250%x251)/x252));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x253 = 459080230862346890LL;
	static volatile uint8_t x254 = UINT8_MAX;
	volatile uint64_t x255 = 32632213LLU;
	int32_t x256 = INT32_MIN;
	uint64_t t58 = 1467055705333782237LLU;

	t58 = (x253*((x254%x255)/x256));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = INT32_MIN;
	int64_t x258 = -3580590800LL;
	int64_t x259 = 26LL;
	int64_t x260 = 128278719LL;
	volatile int64_t t59 = -6661878651LL;

	t59 = (x257*((x258%x259)/x260));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x266 = INT64_MIN;
	int64_t x267 = INT64_MAX;
	uint32_t x268 = UINT32_MAX;
	volatile int64_t t60 = 3951721LL;

	t60 = (x265*((x266%x267)/x268));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = -1;
	int32_t x270 = 35928;
	int32_t x271 = 808;
	int32_t t61 = -3;

	t61 = (x269*((x270%x271)/x272));

	if (t61 != 376) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x273 = INT16_MIN;
	int32_t x274 = INT32_MAX;
	int32_t x276 = INT32_MIN;
	int32_t t62 = 105260245;

	t62 = (x273*((x274%x275)/x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x277 = 3U;
	int16_t x278 = INT16_MAX;
	static uint64_t x280 = 29502497363278547LLU;
	volatile uint64_t t63 = 329395312LLU;

	t63 = (x277*((x278%x279)/x280));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x281 = 25U;
	int16_t x282 = 0;
	volatile int64_t x283 = -7867257044831609LL;
	volatile int64_t x284 = INT64_MIN;
	int64_t t64 = 21960778602LL;

	t64 = (x281*((x282%x283)/x284));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = INT16_MAX;
	volatile int32_t x286 = INT32_MAX;
	int64_t x287 = INT64_MIN;
	static uint32_t x288 = UINT32_MAX;
	volatile int64_t t65 = -96616LL;

	t65 = (x285*((x286%x287)/x288));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x289 = INT32_MAX;
	int16_t x291 = INT16_MAX;

	t66 = (x289*((x290%x291)/x292));

	if (t66 != 8589934588LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = INT8_MAX;
	volatile uint16_t x298 = 593U;
	int16_t x299 = INT16_MIN;
	int16_t x300 = INT16_MIN;
	int32_t t67 = -490024611;

	t67 = (x297*((x298%x299)/x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x303 = INT64_MIN;
	int16_t x304 = INT16_MAX;
	static uint64_t t68 = 58572155LLU;

	t68 = (x301*((x302%x303)/x304));

	if (t68 != 18446744073708735871LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x305 = -1;
	volatile int8_t x306 = INT8_MIN;
	uint32_t x307 = 11046U;
	int16_t x308 = INT16_MAX;
	uint32_t t69 = 30U;

	t69 = (x305*((x306%x307)/x308));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x310 = 17461505211773LLU;
	volatile int64_t x311 = -1LL;
	volatile uint64_t t70 = 474742393786576263LLU;

	t70 = (x309*((x310%x311)/x312));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x313 = -1;
	volatile int32_t x314 = INT32_MIN;
	uint64_t x316 = 20724327481LLU;
	static volatile uint64_t t71 = 386559698825LLU;

	t71 = (x313*((x314%x315)/x316));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x317 = INT64_MAX;
	uint8_t x318 = 27U;
	volatile uint32_t x320 = 216U;
	int64_t t72 = 3665998154662LL;

	t72 = (x317*((x318%x319)/x320));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x321 = -5;
	static uint16_t x322 = 0U;
	uint32_t x323 = UINT32_MAX;
	static uint64_t x324 = 2472231994066822LLU;
	static uint64_t t73 = 356466194490LLU;

	t73 = (x321*((x322%x323)/x324));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x325 = INT64_MAX;
	uint64_t x327 = 1778268LLU;
	uint64_t t74 = 970319LLU;

	t74 = (x325*((x326%x327)/x328));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x329 = 14974U;
	volatile int64_t x330 = INT64_MIN;
	int64_t x331 = INT64_MIN;
	static volatile int8_t x332 = INT8_MIN;
	int64_t t75 = 973985LL;

	t75 = (x329*((x330%x331)/x332));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x334 = 26956LLU;
	static uint16_t x335 = 232U;

	t76 = (x333*((x334%x335)/x336));

	if (t76 != 5399217LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = 10;
	int32_t x338 = INT32_MAX;
	static volatile int64_t x340 = INT64_MIN;
	int64_t t77 = -1713801736274875500LL;

	t77 = (x337*((x338%x339)/x340));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x341 = 1106U;
	int64_t x342 = -6477981LL;
	volatile uint8_t x343 = UINT8_MAX;
	int16_t x344 = INT16_MAX;
	int64_t t78 = 255804435426LL;

	t78 = (x341*((x342%x343)/x344));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x349 = -3610;
	uint32_t x351 = UINT32_MAX;
	volatile int64_t x352 = INT64_MIN;
	int64_t t79 = 3251395LL;

	t79 = (x349*((x350%x351)/x352));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x353 = UINT32_MAX;
	uint16_t x354 = UINT16_MAX;
	volatile int8_t x355 = INT8_MAX;
	int64_t x356 = INT64_MIN;
	static int64_t t80 = -14378346851644LL;

	t80 = (x353*((x354%x355)/x356));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x357 = 59U;
	volatile int32_t x359 = 4377;
	int64_t x360 = -1LL;
	volatile int64_t t81 = -3112352LL;

	t81 = (x357*((x358%x359)/x360));

	if (t81 != -531LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x361 = INT64_MIN;
	int16_t x362 = -3;
	int64_t x363 = INT64_MIN;
	uint8_t x364 = UINT8_MAX;
	int64_t t82 = 105107LL;

	t82 = (x361*((x362%x363)/x364));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x365 = 6U;
	int64_t x366 = -87642LL;
	int16_t x368 = INT16_MIN;
	int64_t t83 = -99LL;

	t83 = (x365*((x366%x367)/x368));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = INT16_MAX;
	int32_t x375 = -1;
	int64_t x376 = 336LL;
	static uint64_t t84 = 41896229985LLU;

	t84 = (x373*((x374%x375)/x376));

	if (t84 != 61143222LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = -6;
	volatile int16_t x379 = -1;
	uint8_t x380 = 22U;
	volatile uint64_t t85 = 3345068LLU;

	t85 = (x377*((x378%x379)/x380));

	if (t85 != 18446744073585807058LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MAX;
	int32_t x383 = 17896;
	static int64_t x384 = 354765522176118LL;
	static int64_t t86 = -1339752216081LL;

	t86 = (x381*((x382%x383)/x384));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = -1LL;
	int16_t x386 = INT16_MAX;
	uint32_t x387 = 223U;
	volatile int64_t x388 = -2LL;
	volatile int64_t t87 = 2129420209205570LL;

	t87 = (x385*((x386%x387)/x388));

	if (t87 != 104LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x389 = INT8_MAX;
	int32_t x390 = -1;
	int8_t x391 = INT8_MAX;
	int32_t t88 = -505;

	t88 = (x389*((x390%x391)/x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = -122830586;
	static int16_t x394 = -1;
	int8_t x395 = -1;
	int64_t x396 = INT64_MIN;
	int64_t t89 = -1480LL;

	t89 = (x393*((x394%x395)/x396));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x397 = 526;
	uint64_t x398 = 111LLU;
	volatile int16_t x399 = -1;
	volatile int32_t x400 = 2;
	volatile uint64_t t90 = 485420527984137LLU;

	t90 = (x397*((x398%x399)/x400));

	if (t90 != 28930LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x401 = 1251221833440764157LLU;
	uint64_t x402 = UINT64_MAX;
	volatile int64_t x403 = 1158649685226742LL;
	static uint64_t x404 = 54791LLU;

	t91 = (x401*((x402%x403)/x404));

	if (t91 != 1812583883563745049LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x407 = UINT32_MAX;
	int8_t x408 = 1;
	volatile uint32_t t92 = 50212U;

	t92 = (x405*((x406%x407)/x408));

	if (t92 != 4290805760U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x409 = INT32_MAX;
	volatile int8_t x411 = INT8_MIN;
	uint8_t x412 = UINT8_MAX;
	int64_t t93 = -914588413960LL;

	t93 = (x409*((x410%x411)/x412));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x413 = 120978;
	static int16_t x414 = -1;
	int32_t x415 = INT32_MAX;
	int16_t x416 = 1;
	volatile int32_t t94 = 5321263;

	t94 = (x413*((x414%x415)/x416));

	if (t94 != -120978) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x417 = UINT32_MAX;
	static uint16_t x419 = 410U;

	t95 = (x417*((x418%x419)/x420));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x421 = 69U;
	int16_t x423 = INT16_MAX;
	int8_t x424 = INT8_MIN;
	volatile uint64_t t96 = 7008478902236736LLU;

	t96 = (x421*((x422%x423)/x424));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = -1;
	uint32_t x426 = 1408U;
	int32_t x427 = INT32_MAX;
	uint32_t x428 = 2870992U;

	t97 = (x425*((x426%x427)/x428));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x429 = 22755014;
	uint16_t x430 = UINT16_MAX;
	uint32_t t98 = 3702545U;

	t98 = (x429*((x430%x431)/x432));

	if (t98 != 3515732856U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x433 = 10;
	volatile int16_t x434 = INT16_MIN;
	int64_t x435 = INT64_MIN;
	volatile int64_t t99 = -19199LL;

	t99 = (x433*((x434%x435)/x436));

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


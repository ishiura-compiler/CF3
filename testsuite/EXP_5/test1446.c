#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = INT8_MIN;
static int8_t x16 = -1;
static int64_t x24 = INT64_MIN;
int32_t x29 = -1;
volatile int16_t x30 = INT16_MAX;
static volatile uint16_t x34 = 51U;
int8_t x36 = -30;
int32_t x46 = 1;
uint16_t x55 = 6761U;
volatile int32_t t14 = -114;
static int32_t x68 = 33341229;
uint8_t x71 = UINT8_MAX;
int32_t t17 = -12623152;
int16_t x74 = INT16_MAX;
uint16_t x76 = 31U;
static int8_t x77 = INT8_MAX;
int8_t x78 = INT8_MIN;
static uint8_t x83 = 50U;
uint32_t x95 = 3U;
static volatile int16_t x97 = 8;
uint8_t x99 = 4U;
volatile int32_t t26 = 5606865;
uint8_t x110 = 1U;
volatile int32_t t28 = -77962;
volatile int64_t t29 = -1LL;
int32_t x135 = INT32_MAX;
int16_t x138 = INT16_MAX;
int32_t t34 = 239;
int64_t x147 = -63307983LL;
int32_t t36 = -104888775;
int32_t x149 = -16169;
int16_t x153 = INT16_MAX;
int64_t x164 = -2498924LL;
uint64_t x165 = 896016373064LLU;
int64_t x166 = INT64_MIN;
uint16_t x169 = 7737U;
static uint64_t x176 = 0LLU;
static volatile int64_t x180 = INT64_MIN;
static volatile int32_t t44 = -15;
int16_t x186 = 4257;
uint16_t x187 = 1U;
static int32_t x194 = INT32_MAX;
int8_t x196 = INT8_MIN;
static int64_t x200 = -1LL;
static int16_t x202 = 1;
static int8_t x203 = INT8_MAX;
volatile uint32_t t50 = 107U;
int8_t x209 = INT8_MIN;
volatile int32_t t52 = 173742;
int8_t x216 = 1;
volatile uint32_t x218 = 628784874U;
static uint16_t x225 = 1U;
static uint8_t x226 = 81U;
volatile int8_t x228 = INT8_MIN;
int16_t x230 = INT16_MIN;
uint32_t x234 = 101671513U;
int64_t x235 = INT64_MIN;
uint64_t x244 = UINT64_MAX;
static uint32_t x247 = UINT32_MAX;
int64_t t61 = -438998247269LL;
static int64_t x250 = INT64_MIN;
int32_t x252 = INT32_MAX;
volatile uint32_t x258 = 708925U;
volatile int32_t t64 = 1;
static uint32_t x261 = 11841U;
int8_t x262 = -1;
int16_t x263 = INT16_MIN;
uint8_t x269 = 4U;
uint16_t x274 = 691U;
volatile int8_t x282 = INT8_MAX;
static volatile int16_t x285 = 1550;
volatile int32_t t71 = 0;
static int16_t x292 = -1;
int8_t x296 = INT8_MIN;
static int16_t x301 = -1;
uint64_t x302 = UINT64_MAX;
static uint32_t t76 = 3U;
int8_t x315 = -1;
uint16_t x316 = 6U;
uint32_t t79 = 0U;
int64_t x324 = INT64_MIN;
uint64_t x325 = UINT64_MAX;
uint32_t x329 = 69509899U;
volatile uint32_t t82 = 201941794U;
int64_t x333 = INT64_MIN;
int64_t x336 = INT64_MAX;
volatile int32_t x343 = INT32_MAX;
static int32_t x347 = -12;
uint16_t x359 = UINT16_MAX;
volatile int32_t t89 = -79902;
static int64_t x363 = -1LL;
uint32_t x367 = UINT32_MAX;
uint32_t x371 = UINT32_MAX;
volatile int32_t t92 = 291391353;
uint32_t x384 = UINT32_MAX;
int32_t x393 = -258645268;
int16_t x396 = INT16_MAX;
volatile int32_t t98 = 0;
uint64_t x400 = 1LLU;


void f0(void) {
	uint16_t x1 = 1193U;
	uint32_t x3 = 1U;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = -427;

	t0 = (x1*((x2<x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 0U;
	int32_t x6 = -1;
	int64_t x7 = INT64_MIN;
	int16_t x8 = INT16_MAX;
	int32_t t1 = 26212;

	t1 = (x5*((x6<x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	uint64_t x10 = 2905207LLU;
	volatile int32_t x11 = INT32_MIN;
	static volatile uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -235460;

	t2 = (x9*((x10<x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = INT16_MAX;
	static int64_t x14 = -1197465566770LL;
	int8_t x15 = 1;
	int32_t t3 = -13733927;

	t3 = (x13*((x14<x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	volatile uint8_t x18 = 6U;
	static uint64_t x19 = 366695LLU;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 3;

	t4 = (x17*((x18<x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = -2;
	int32_t x23 = -1;
	int64_t t5 = 1923828318LL;

	t5 = (x21*((x22<x23)==x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 544858000370861LL;
	static volatile int16_t x26 = INT16_MIN;
	int8_t x27 = -13;
	static int8_t x28 = INT8_MAX;
	volatile int64_t t6 = -46828LL;

	t6 = (x25*((x26<x27)==x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x31 = 2;
	static uint64_t x32 = UINT64_MAX;
	volatile int32_t t7 = 0;

	t7 = (x29*((x30<x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	static volatile uint64_t x35 = UINT64_MAX;
	volatile int32_t t8 = 3782312;

	t8 = (x33*((x34<x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -2912LL;
	int8_t x38 = INT8_MIN;
	int16_t x39 = 1;
	uint8_t x40 = 1U;
	static volatile int64_t t9 = 100079490LL;

	t9 = (x37*((x38<x39)==x40));

	if (t9 != -2912LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	static int64_t x42 = -39LL;
	volatile uint64_t x43 = UINT64_MAX;
	uint16_t x44 = 2471U;
	volatile int32_t t10 = 1;

	t10 = (x41*((x42<x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	volatile int32_t x47 = -1;
	uint8_t x48 = UINT8_MAX;
	static volatile int64_t t11 = 226430649925641401LL;

	t11 = (x45*((x46<x47)==x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	static int8_t x50 = -1;
	static volatile int32_t x51 = 57459;
	static volatile uint32_t x52 = 363996989U;
	volatile uint64_t t12 = 58295675932585442LLU;

	t12 = (x49*((x50<x51)==x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -11337LL;
	volatile int64_t x54 = -1191640601LL;
	int32_t x56 = -1;
	volatile int64_t t13 = -43115371180608683LL;

	t13 = (x53*((x54<x55)==x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	uint64_t x58 = 3821LLU;
	static volatile int32_t x59 = INT32_MAX;
	volatile uint32_t x60 = UINT32_MAX;

	t14 = (x57*((x58<x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -1LL;
	static uint64_t x62 = 3992884743229LLU;
	volatile int32_t x63 = INT32_MIN;
	uint32_t x64 = 170878387U;
	volatile int64_t t15 = -2750248690131001612LL;

	t15 = (x61*((x62<x63)==x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int16_t x66 = INT16_MIN;
	int64_t x67 = 169248151LL;
	static int32_t t16 = 125785;

	t16 = (x65*((x66<x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MIN;
	int64_t x70 = -1LL;
	uint64_t x72 = UINT64_MAX;

	t17 = (x69*((x70<x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 15742LLU;
	uint16_t x75 = 117U;
	uint64_t t18 = 1463LLU;

	t18 = (x73*((x74<x75)==x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x79 = 0U;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -467213398;

	t19 = (x77*((x78<x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	static int64_t x82 = 30004378644227LL;
	int8_t x84 = INT8_MIN;
	int32_t t20 = -1036088;

	t20 = (x81*((x82<x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 3U;
	static int64_t x86 = INT64_MAX;
	static int16_t x87 = 3307;
	int16_t x88 = 4563;
	int32_t t21 = -114897;

	t21 = (x85*((x86<x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 559565312;
	volatile int16_t x90 = -1;
	uint8_t x91 = 72U;
	uint16_t x92 = 29U;
	int32_t t22 = -1;

	t22 = (x89*((x90<x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x93 = INT64_MAX;
	int32_t x94 = INT32_MIN;
	uint32_t x96 = 9U;
	volatile int64_t t23 = 636664849386879LL;

	t23 = (x93*((x94<x95)==x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x98 = INT32_MIN;
	volatile int64_t x100 = 742252LL;
	int32_t t24 = -24542086;

	t24 = (x97*((x98<x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = -1;
	static int32_t x103 = -1;
	uint16_t x104 = 1U;
	volatile int32_t t25 = -6;

	t25 = (x101*((x102<x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = 111U;
	volatile int64_t x106 = INT64_MIN;
	static volatile uint32_t x107 = 673U;
	int64_t x108 = INT64_MIN;

	t26 = (x105*((x106<x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	volatile int32_t x111 = -1;
	uint8_t x112 = 1U;
	volatile int64_t t27 = -91010689917LL;

	t27 = (x109*((x110<x111)==x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 5U;
	static int32_t x114 = INT32_MIN;
	uint16_t x115 = 3772U;
	static int16_t x116 = -1075;

	t28 = (x113*((x114<x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = INT64_MIN;
	int64_t x118 = 4116292LL;
	volatile uint64_t x119 = 33530163329340LLU;
	int16_t x120 = 5786;

	t29 = (x117*((x118<x119)==x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 946485U;
	static volatile int32_t x122 = -1;
	volatile int16_t x123 = INT16_MIN;
	uint16_t x124 = UINT16_MAX;
	volatile uint32_t t30 = 3898629U;

	t30 = (x121*((x122<x123)==x124));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = INT16_MAX;
	int64_t x126 = INT64_MAX;
	volatile int32_t x127 = INT32_MIN;
	uint16_t x128 = 19581U;
	static volatile int32_t t31 = 15075195;

	t31 = (x125*((x126<x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = 3854337675250LLU;
	int16_t x130 = -100;
	int8_t x131 = INT8_MIN;
	int8_t x132 = -3;
	volatile uint64_t t32 = 1176029112961857LLU;

	t32 = (x129*((x130<x131)==x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 87U;
	int16_t x134 = 8;
	int16_t x136 = -1;
	volatile uint32_t t33 = 220U;

	t33 = (x133*((x134<x135)==x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	int64_t x139 = 1988076974864985380LL;
	static int64_t x140 = 529392LL;

	t34 = (x137*((x138<x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 45U;
	static volatile int16_t x142 = INT16_MIN;
	int32_t x143 = -3421854;
	int16_t x144 = 2300;
	volatile int32_t t35 = -36;

	t35 = (x141*((x142<x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = -601;
	uint8_t x146 = 1U;
	int8_t x148 = INT8_MIN;

	t36 = (x145*((x146<x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x150 = INT16_MIN;
	uint64_t x151 = 30335074071LLU;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t37 = -109;

	t37 = (x149*((x150<x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = -1;
	int32_t x155 = 993;
	int8_t x156 = 10;
	volatile int32_t t38 = 280;

	t38 = (x153*((x154<x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	int16_t x158 = -98;
	int8_t x159 = -21;
	uint16_t x160 = UINT16_MAX;
	int32_t t39 = -21060399;

	t39 = (x157*((x158<x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MAX;
	uint64_t x162 = 502930650705LLU;
	int32_t x163 = 357349;
	int64_t t40 = -266602393023542LL;

	t40 = (x161*((x162<x163)==x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x167 = INT32_MIN;
	uint8_t x168 = 3U;
	uint64_t t41 = 60077919LLU;

	t41 = (x165*((x166<x167)==x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x170 = UINT32_MAX;
	int8_t x171 = INT8_MIN;
	int32_t x172 = INT32_MIN;
	int32_t t42 = -57072309;

	t42 = (x169*((x170<x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = -1;
	int32_t x174 = 128589885;
	int64_t x175 = 7798528046LL;
	int32_t t43 = -89;

	t43 = (x173*((x174<x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 6U;
	static int32_t x178 = 3807;
	int8_t x179 = INT8_MAX;

	t44 = (x177*((x178<x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 5;
	uint32_t x182 = UINT32_MAX;
	int64_t x183 = -3940705960234350LL;
	int32_t x184 = INT32_MAX;
	int32_t t45 = 63996;

	t45 = (x181*((x182<x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MAX;
	int64_t x188 = -72LL;
	volatile int32_t t46 = -429311873;

	t46 = (x185*((x186<x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	int32_t x190 = INT32_MIN;
	int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = -121092;

	t47 = (x189*((x190<x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 3787U;
	int8_t x195 = INT8_MIN;
	static volatile int32_t t48 = -206;

	t48 = (x193*((x194<x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 0U;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = UINT16_MAX;
	int32_t t49 = 1;

	t49 = (x197*((x198<x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x201 = UINT32_MAX;
	volatile int16_t x204 = -236;

	t50 = (x201*((x202<x203)==x204));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -979;
	volatile uint32_t x206 = 31891255U;
	int32_t x207 = -1;
	uint32_t x208 = 188U;
	volatile int32_t t51 = 112426;

	t51 = (x205*((x206<x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x210 = -30;
	int32_t x211 = -986;
	int32_t x212 = INT32_MAX;

	t52 = (x209*((x210<x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 249U;
	volatile uint8_t x214 = 3U;
	uint32_t x215 = UINT32_MAX;
	volatile int32_t t53 = 6717906;

	t53 = (x213*((x214<x215)==x216));

	if (t53 != 249) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	int16_t x219 = 5;
	uint8_t x220 = UINT8_MAX;
	static volatile int32_t t54 = 177;

	t54 = (x217*((x218<x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x221 = -229855171515790LL;
	int32_t x222 = INT32_MAX;
	int32_t x223 = -1;
	volatile uint8_t x224 = 1U;
	volatile int64_t t55 = 10343456LL;

	t55 = (x221*((x222<x223)==x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x227 = 41;
	int32_t t56 = 53221;

	t56 = (x225*((x226<x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 2108112696LLU;
	uint64_t x231 = UINT64_MAX;
	static uint16_t x232 = 858U;
	uint64_t t57 = 401134971LLU;

	t57 = (x229*((x230<x231)==x232));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	int64_t x236 = INT64_MIN;
	volatile int32_t t58 = -856291;

	t58 = (x233*((x234<x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 14745;
	volatile int16_t x238 = -10040;
	int16_t x239 = -1;
	volatile int8_t x240 = -21;
	volatile int32_t t59 = 13810935;

	t59 = (x237*((x238<x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = 1708;
	static int32_t x242 = -33037069;
	static int16_t x243 = -8;
	int32_t t60 = 308493914;

	t60 = (x241*((x242<x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 764648864974LL;
	int64_t x246 = INT64_MIN;
	static int64_t x248 = INT64_MIN;

	t61 = (x245*((x246<x247)==x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	int64_t x251 = INT64_MIN;
	volatile int32_t t62 = 417;

	t62 = (x249*((x250<x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MIN;
	int16_t x254 = -655;
	int8_t x255 = 32;
	int8_t x256 = INT8_MIN;
	volatile int64_t t63 = -4273024615380560LL;

	t63 = (x253*((x254<x255)==x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = 0;
	static int64_t x259 = INT64_MIN;
	static int16_t x260 = -3447;

	t64 = (x257*((x258<x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x264 = -1LL;
	uint32_t t65 = 268U;

	t65 = (x261*((x262<x263)==x264));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 4U;
	int16_t x266 = -1;
	int64_t x267 = INT64_MAX;
	uint64_t x268 = 3673421527300889LLU;
	static int32_t t66 = 2;

	t66 = (x265*((x266<x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = INT8_MIN;
	static int64_t x271 = INT64_MIN;
	static uint16_t x272 = 8U;
	volatile int32_t t67 = -577836129;

	t67 = (x269*((x270<x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = 15U;
	int16_t x275 = INT16_MIN;
	uint64_t x276 = 429LLU;
	volatile int32_t t68 = -80147;

	t68 = (x273*((x274<x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = 192;
	uint64_t x278 = UINT64_MAX;
	uint64_t x279 = UINT64_MAX;
	volatile int32_t x280 = INT32_MIN;
	volatile int32_t t69 = 3381865;

	t69 = (x277*((x278<x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	volatile uint8_t x283 = 1U;
	volatile int16_t x284 = -2;
	volatile int64_t t70 = 7121774932310LL;

	t70 = (x281*((x282<x283)==x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x286 = -1LL;
	volatile int32_t x287 = -13361123;
	static int8_t x288 = -1;

	t71 = (x285*((x286<x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	int8_t x290 = INT8_MIN;
	volatile uint8_t x291 = 4U;
	int64_t t72 = -80748597LL;

	t72 = (x289*((x290<x291)==x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	static int64_t x294 = 7029810859LL;
	int8_t x295 = INT8_MIN;
	int32_t t73 = 490171;

	t73 = (x293*((x294<x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int32_t x298 = -1;
	int8_t x299 = -18;
	int32_t x300 = INT32_MIN;
	int32_t t74 = -116483;

	t74 = (x297*((x298<x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x303 = 6U;
	static int16_t x304 = -1;
	int32_t t75 = 0;

	t75 = (x301*((x302<x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x305 = UINT32_MAX;
	static uint32_t x306 = 1480U;
	static int64_t x307 = INT64_MIN;
	uint16_t x308 = 1196U;

	t76 = (x305*((x306<x307)==x308));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	static int64_t x310 = INT64_MAX;
	int8_t x311 = INT8_MIN;
	int16_t x312 = -1;
	volatile int64_t t77 = 13294424331LL;

	t77 = (x309*((x310<x311)==x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MAX;
	int64_t x314 = -1LL;
	static int32_t t78 = -149;

	t78 = (x313*((x314<x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	int8_t x318 = INT8_MIN;
	static volatile uint16_t x319 = 21817U;
	static volatile int64_t x320 = INT64_MIN;

	t79 = (x317*((x318<x319)==x320));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MIN;
	static int64_t x322 = 16677455017LL;
	int16_t x323 = -1616;
	int64_t t80 = 3912328919144344984LL;

	t80 = (x321*((x322<x323)==x324));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x326 = INT8_MIN;
	uint64_t x327 = 11527262099074LLU;
	int32_t x328 = INT32_MAX;
	static volatile uint64_t t81 = 11314164052300LLU;

	t81 = (x325*((x326<x327)==x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x330 = -2;
	int64_t x331 = INT64_MIN;
	int8_t x332 = -15;

	t82 = (x329*((x330<x331)==x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x334 = 29U;
	volatile int32_t x335 = 551823;
	volatile int64_t t83 = -1LL;

	t83 = (x333*((x334<x335)==x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = INT64_MIN;
	volatile int8_t x338 = -1;
	static volatile int8_t x339 = -1;
	uint8_t x340 = 25U;
	volatile int64_t t84 = 50476283006247107LL;

	t84 = (x337*((x338<x339)==x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int32_t x342 = 142;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t85 = -13034;

	t85 = (x341*((x342<x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	volatile int32_t x346 = INT32_MIN;
	int16_t x348 = -1;
	volatile int32_t t86 = 901002899;

	t86 = (x345*((x346<x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = INT16_MIN;
	static int64_t x350 = 134321076629679024LL;
	uint8_t x351 = UINT8_MAX;
	volatile int64_t x352 = -1LL;
	int32_t t87 = -24661839;

	t87 = (x349*((x350<x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x353 = INT32_MAX;
	int8_t x354 = INT8_MIN;
	uint16_t x355 = UINT16_MAX;
	int16_t x356 = 11;
	int32_t t88 = -86909;

	t88 = (x353*((x354<x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	volatile int64_t x358 = 107847575LL;
	int32_t x360 = INT32_MIN;

	t89 = (x357*((x358<x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 25138LLU;
	uint64_t x362 = UINT64_MAX;
	static int32_t x364 = INT32_MIN;
	uint64_t t90 = 384236100979253067LLU;

	t90 = (x361*((x362<x363)==x364));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	volatile int16_t x366 = INT16_MIN;
	int16_t x368 = -1;
	int32_t t91 = -501935;

	t91 = (x365*((x366<x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x369 = UINT16_MAX;
	int64_t x370 = -938LL;
	uint32_t x372 = UINT32_MAX;

	t92 = (x369*((x370<x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MAX;
	int8_t x374 = -2;
	int64_t x375 = -1LL;
	int8_t x376 = INT8_MAX;
	volatile int32_t t93 = -1;

	t93 = (x373*((x374<x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = UINT32_MAX;
	volatile uint64_t x378 = 15696594684756LLU;
	int8_t x379 = INT8_MIN;
	int64_t x380 = 128837LL;
	volatile uint32_t t94 = 2359540U;

	t94 = (x377*((x378<x379)==x380));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	int8_t x382 = 2;
	int16_t x383 = 58;
	int32_t t95 = -292584918;

	t95 = (x381*((x382<x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x385 = 3193U;
	uint16_t x386 = 1108U;
	uint16_t x387 = 4U;
	static int32_t x388 = INT32_MIN;
	volatile uint32_t t96 = 1239537U;

	t96 = (x385*((x386<x387)==x388));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MAX;
	static volatile uint64_t x390 = 384251904LLU;
	int64_t x391 = INT64_MAX;
	volatile int8_t x392 = 0;
	volatile int32_t t97 = -190097;

	t97 = (x389*((x390<x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x394 = UINT8_MAX;
	static volatile int16_t x395 = -10;

	t98 = (x393*((x394<x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	int8_t x398 = INT8_MIN;
	int32_t x399 = -1;
	volatile int32_t t99 = -286706;

	t99 = (x397*((x398<x399)==x400));

	if (t99 != 255) { NG(); } else { ; }
	
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


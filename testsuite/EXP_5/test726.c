#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = -1;
uint32_t x9 = 14U;
int64_t t3 = -29506776627907LL;
uint8_t x17 = 12U;
int32_t x18 = -4;
volatile int64_t t4 = -233516836576180718LL;
static uint32_t x22 = 159751U;
static uint64_t x25 = 5846LLU;
volatile int16_t x27 = 4776;
int32_t x33 = 29598713;
int16_t x36 = INT16_MIN;
static uint16_t x38 = 51U;
volatile uint16_t x39 = 28U;
static uint32_t x42 = 7U;
volatile uint8_t x45 = UINT8_MAX;
static volatile int32_t x48 = 359723;
volatile int16_t x57 = INT16_MIN;
static volatile uint64_t t14 = 502075604LLU;
int8_t x61 = INT8_MAX;
uint8_t x62 = UINT8_MAX;
volatile uint32_t x68 = 3U;
int8_t x70 = 6;
int32_t x74 = INT32_MIN;
static uint64_t x77 = 42139330574646LLU;
int16_t x88 = -1;
static uint64_t t22 = 11668740994988LLU;
volatile int16_t x103 = -1;
static int32_t x107 = -94580215;
volatile uint64_t t28 = 665168189273888944LLU;
uint32_t x117 = UINT32_MAX;
int8_t x128 = INT8_MIN;
int8_t x131 = INT8_MIN;
int16_t x134 = INT16_MIN;
volatile int8_t x135 = INT8_MAX;
int16_t x137 = INT16_MIN;
int32_t x140 = INT32_MIN;
uint64_t t35 = 6951588LLU;
volatile int8_t x149 = -1;
uint64_t x150 = 184426LLU;
uint64_t x155 = 201475743262266LLU;
int8_t x172 = 5;
volatile uint64_t t42 = 712026933LLU;
static volatile int64_t t43 = 101977044525116277LL;
static uint16_t x177 = 30697U;
static int32_t x182 = -1;
int32_t x190 = INT32_MAX;
int8_t x196 = -1;
int64_t x198 = 1LL;
volatile int64_t x199 = -7237876LL;
static uint16_t x201 = UINT16_MAX;
uint32_t x204 = 1960U;
volatile int8_t x206 = 19;
volatile int32_t t51 = -2;
uint16_t x209 = 1730U;
static int32_t x210 = -1;
int32_t x215 = -1;
int8_t x216 = -39;
uint16_t x220 = UINT16_MAX;
static volatile uint32_t t57 = 447753266U;
int64_t x235 = 120LL;
volatile int8_t x239 = -1;
int16_t x243 = -1;
volatile int16_t x249 = 6;
int8_t x251 = 4;
int32_t t62 = -63026;
int32_t x262 = INT32_MIN;
int32_t x264 = 194029;
static volatile int16_t x265 = INT16_MAX;
int32_t x267 = INT32_MIN;
int16_t x268 = INT16_MIN;
int16_t x272 = INT16_MAX;
static volatile int64_t t66 = -4195931005439109625LL;
int64_t x273 = INT64_MAX;
volatile int64_t t67 = 1322173797LL;
volatile uint64_t t70 = 1474260LLU;
int16_t x300 = 7594;
volatile int64_t t73 = 32145434LL;
uint8_t x303 = 55U;
static int16_t x306 = 171;
int8_t x308 = 13;
int8_t x309 = -1;
static int32_t t76 = 6656590;
int64_t x323 = -10LL;
volatile int32_t t80 = 565777;
int32_t t81 = 23;
int16_t x342 = INT16_MIN;
int8_t x343 = INT8_MIN;
static int64_t t83 = 7LL;
int64_t t84 = -12LL;
uint32_t x353 = 344325786U;
uint16_t x361 = 5U;
volatile int32_t x366 = -462526;
static int32_t x369 = 29159;
int16_t x370 = 0;
volatile int32_t t89 = 77991;
int16_t x374 = INT16_MIN;
static volatile uint64_t t90 = 63165656921458939LLU;
static volatile int64_t x379 = INT64_MIN;
uint8_t x382 = 2U;
static uint16_t x387 = 982U;
uint32_t x389 = 7321096U;
volatile int16_t x392 = INT16_MIN;
uint32_t x394 = UINT32_MAX;
int32_t x396 = -50006;
int16_t x397 = 14067;
static int8_t x398 = INT8_MIN;
volatile int8_t x399 = -16;
int32_t x411 = -1;


void f0(void) {
	int64_t x1 = -1LL;
	int32_t x3 = INT32_MAX;
	volatile int32_t x4 = INT32_MAX;
	volatile int64_t t0 = 0LL;

	t0 = (x1&((x2%x3)/x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint8_t x6 = 29U;
	static uint16_t x7 = UINT16_MAX;
	static int32_t x8 = INT32_MAX;
	int32_t t1 = -6522786;

	t1 = (x5&((x6%x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x10 = -10581;
	uint64_t x11 = UINT64_MAX;
	volatile int16_t x12 = INT16_MAX;
	static uint64_t t2 = 1963706420LLU;

	t2 = (x9&((x10%x11)/x12));

	if (t2 != 14LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 87;
	int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MIN;
	volatile int64_t x16 = -1LL;

	t3 = (x13&((x14%x15)/x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x19 = 14;
	int64_t x20 = -8112123632LL;

	t4 = (x17&((x18%x19)/x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint16_t x23 = UINT16_MAX;
	int32_t x24 = -1045594501;
	uint32_t t5 = 1035U;

	t5 = (x21&((x22%x23)/x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x26 = 0;
	volatile int16_t x28 = -1;
	uint64_t t6 = 3325829372115022LLU;

	t6 = (x25&((x26%x27)/x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile uint64_t x30 = 67502038429727836LLU;
	uint16_t x31 = 11183U;
	int16_t x32 = INT16_MIN;
	uint64_t t7 = 1378196429322727LLU;

	t7 = (x29&((x30%x31)/x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = UINT32_MAX;
	int16_t x35 = -1;
	static volatile uint32_t t8 = 261893U;

	t8 = (x33&((x34%x35)/x36));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 2100LL;
	static int16_t x40 = -1;
	volatile int64_t t9 = 15173924462LL;

	t9 = (x37&((x38%x39)/x40));

	if (t9 != 2080LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int16_t x43 = 2;
	volatile uint8_t x44 = 50U;
	uint32_t t10 = 4U;

	t10 = (x41&((x42%x43)/x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 2786U;
	static int8_t x47 = INT8_MIN;
	int32_t t11 = 19109402;

	t11 = (x45&((x46%x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	uint32_t x50 = 50633190U;
	uint32_t x51 = 412U;
	int8_t x52 = -1;
	volatile uint32_t t12 = 897524U;

	t12 = (x49&((x50%x51)/x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -1;
	volatile int16_t x54 = INT16_MIN;
	volatile int8_t x55 = INT8_MIN;
	uint64_t x56 = 454352624405LLU;
	uint64_t t13 = 76261914721996665LLU;

	t13 = (x53&((x54%x55)/x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = -1;
	int32_t x59 = -1;
	uint64_t x60 = 40LLU;

	t14 = (x57&((x58%x59)/x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x63 = 28328U;
	uint16_t x64 = 125U;
	volatile uint32_t t15 = 14U;

	t15 = (x61&((x62%x63)/x64));

	if (t15 != 2U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x65 = -1;
	uint8_t x66 = UINT8_MAX;
	volatile int64_t x67 = INT64_MIN;
	volatile int64_t t16 = -1230678LL;

	t16 = (x65&((x66%x67)/x68));

	if (t16 != 85LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -4;
	uint8_t x71 = 12U;
	int8_t x72 = 25;
	static int32_t t17 = -111377;

	t17 = (x69&((x70%x71)/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = 2;
	uint64_t x75 = 375LLU;
	uint64_t x76 = 10921247062799128LLU;
	volatile uint64_t t18 = 116033LLU;

	t18 = (x73&((x74%x75)/x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = 6455;
	uint8_t x79 = 1U;
	volatile int8_t x80 = INT8_MAX;
	static uint64_t t19 = 655687922075951578LLU;

	t19 = (x77&((x78%x79)/x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	volatile uint8_t x82 = 15U;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MIN;
	static int64_t t20 = -102758664498706LL;

	t20 = (x81&((x82%x83)/x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	uint64_t x86 = 671370688413786937LLU;
	uint8_t x87 = 3U;
	uint64_t t21 = 7225LLU;

	t21 = (x85&((x86%x87)/x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int32_t x90 = 1688;
	uint64_t x91 = UINT64_MAX;
	int16_t x92 = INT16_MIN;

	t22 = (x89&((x90%x91)/x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	int8_t x94 = 22;
	static uint64_t x95 = UINT64_MAX;
	int16_t x96 = -1;
	static volatile uint64_t t23 = 3LLU;

	t23 = (x93&((x94%x95)/x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x97 = 7737U;
	int16_t x98 = INT16_MIN;
	static int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MAX;
	static int32_t t24 = 1;

	t24 = (x97&((x98%x99)/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 8U;
	uint64_t x102 = 4204155LLU;
	int64_t x104 = INT64_MIN;
	static volatile uint64_t t25 = 388011817876LLU;

	t25 = (x101&((x102%x103)/x104));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -8;
	uint16_t x106 = 1U;
	uint8_t x108 = 45U;
	int32_t t26 = -494479164;

	t26 = (x105&((x106%x107)/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = UINT8_MAX;
	int16_t x110 = -5083;
	static int64_t x111 = INT64_MAX;
	uint64_t x112 = UINT64_MAX;
	uint64_t t27 = 6863634LLU;

	t27 = (x109&((x110%x111)/x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 38675895043LLU;
	uint8_t x114 = 0U;
	uint64_t x115 = 7756858806132277714LLU;
	volatile uint8_t x116 = 32U;

	t28 = (x113&((x114%x115)/x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x118 = -1;
	static int16_t x119 = -1;
	static uint16_t x120 = UINT16_MAX;
	uint32_t t29 = 1707066U;

	t29 = (x117&((x118%x119)/x120));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = -1;
	static int32_t x122 = -11;
	static int32_t x123 = -1;
	int8_t x124 = 21;
	int32_t t30 = 4100;

	t30 = (x121&((x122%x123)/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -710210577;
	uint64_t x126 = 765449122663LLU;
	static uint64_t x127 = 9695758172059LLU;
	uint64_t t31 = 9LLU;

	t31 = (x125&((x126%x127)/x128));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 348U;
	int32_t x130 = INT32_MIN;
	volatile int64_t x132 = INT64_MIN;
	volatile int64_t t32 = -1546LL;

	t32 = (x129&((x130%x131)/x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 99U;
	uint32_t x136 = 45889U;
	static volatile uint32_t t33 = 945885U;

	t33 = (x133&((x134%x135)/x136));

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x138 = 2295201U;
	int32_t x139 = 9;
	volatile uint32_t t34 = 275U;

	t34 = (x137&((x138%x139)/x140));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 2LLU;
	int64_t x142 = INT64_MIN;
	int64_t x143 = INT64_MIN;
	volatile int16_t x144 = INT16_MIN;

	t35 = (x141&((x142%x143)/x144));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MIN;
	int32_t x146 = -1;
	volatile uint32_t x147 = 32485U;
	volatile uint16_t x148 = 883U;
	volatile uint32_t t36 = 128082279U;

	t36 = (x145&((x146%x147)/x148));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x151 = INT8_MAX;
	static uint8_t x152 = UINT8_MAX;
	volatile uint64_t t37 = 12838560826LLU;

	t37 = (x149&((x150%x151)/x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = 11;
	volatile uint32_t x154 = 160940542U;
	volatile uint64_t x156 = UINT64_MAX;
	uint64_t t38 = 24123619696378LLU;

	t38 = (x153&((x154%x155)/x156));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	int32_t x158 = INT32_MAX;
	int64_t x159 = 100654784751359917LL;
	volatile int32_t x160 = 1;
	static int64_t t39 = 312LL;

	t39 = (x157&((x158%x159)/x160));

	if (t39 != 127LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 51565382U;
	int64_t x162 = INT64_MAX;
	int64_t x163 = INT64_MIN;
	volatile int8_t x164 = -1;
	volatile int64_t t40 = -5444521184174LL;

	t40 = (x161&((x162%x163)/x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	int8_t x166 = -13;
	int64_t x167 = INT64_MAX;
	int32_t x168 = INT32_MAX;
	int64_t t41 = -392123LL;

	t41 = (x165&((x166%x167)/x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 32890485826184000LL;
	static uint16_t x170 = UINT16_MAX;
	static volatile uint64_t x171 = UINT64_MAX;

	t42 = (x169&((x170%x171)/x172));

	if (t42 != 8960LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = 939U;
	volatile uint16_t x174 = 41U;
	int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MIN;

	t43 = (x173&((x174%x175)/x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x178 = 2205U;
	int32_t x179 = -692;
	int64_t x180 = INT64_MAX;
	volatile int64_t t44 = -3538LL;

	t44 = (x177&((x178%x179)/x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	uint32_t x183 = 1U;
	static uint64_t x184 = 172753571081491LLU;
	uint64_t t45 = 36768LLU;

	t45 = (x181&((x182%x183)/x184));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MAX;
	int32_t x187 = -1;
	int8_t x188 = INT8_MIN;
	volatile int32_t t46 = -338700412;

	t46 = (x185&((x186%x187)/x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	uint64_t x191 = 967986741800604LLU;
	int64_t x192 = 2225800262787007LL;
	volatile uint64_t t47 = 459121768LLU;

	t47 = (x189&((x190%x191)/x192));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MIN;
	int16_t x194 = -1;
	int16_t x195 = INT16_MIN;
	int32_t t48 = -1838;

	t48 = (x193&((x194%x195)/x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = INT8_MIN;
	volatile uint64_t x200 = 89106666186LLU;
	uint64_t t49 = 798329LLU;

	t49 = (x197&((x198%x199)/x200));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x202 = INT16_MIN;
	static int32_t x203 = INT32_MAX;
	uint32_t t50 = 1942402U;

	t50 = (x201&((x202%x203)/x204));

	if (t50 != 28605U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 14;
	int8_t x207 = INT8_MIN;
	uint16_t x208 = 3U;

	t51 = (x205&((x206%x207)/x208));

	if (t51 != 6) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x211 = -1LL;
	static int32_t x212 = INT32_MAX;
	volatile int64_t t52 = -29796LL;

	t52 = (x209&((x210%x211)/x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -2511244828LL;
	uint16_t x214 = UINT16_MAX;
	volatile int64_t t53 = -313274LL;

	t53 = (x213&((x214%x215)/x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	static uint64_t x218 = 0LLU;
	int16_t x219 = INT16_MIN;
	volatile uint64_t t54 = 47150172887LLU;

	t54 = (x217&((x218%x219)/x220));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	int64_t x222 = INT64_MIN;
	int32_t x223 = -1;
	uint8_t x224 = 105U;
	volatile int64_t t55 = -53LL;

	t55 = (x221&((x222%x223)/x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	static uint64_t x226 = UINT64_MAX;
	volatile int32_t x227 = INT32_MIN;
	uint32_t x228 = UINT32_MAX;
	volatile uint64_t t56 = 18286731792290LLU;

	t56 = (x225&((x226%x227)/x228));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x229 = INT32_MAX;
	uint32_t x230 = UINT32_MAX;
	static volatile int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MAX;

	t57 = (x229&((x230%x231)/x232));

	if (t57 != 258U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = -1;
	static uint8_t x234 = 1U;
	int64_t x236 = INT64_MIN;
	int64_t t58 = 2152100436707LL;

	t58 = (x233&((x234%x235)/x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x237 = INT64_MIN;
	static int32_t x238 = INT32_MAX;
	static uint16_t x240 = 8551U;
	volatile int64_t t59 = 32745LL;

	t59 = (x237&((x238%x239)/x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = -1LL;
	static int32_t x242 = -1;
	volatile uint8_t x244 = UINT8_MAX;
	int64_t t60 = -193796554268499090LL;

	t60 = (x241&((x242%x243)/x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 30364770551726LL;
	uint64_t x246 = 13024672355LLU;
	int64_t x247 = -1LL;
	uint64_t x248 = 97LLU;
	volatile uint64_t t61 = 525995920176LLU;

	t61 = (x245&((x246%x247)/x248));

	if (t61 != 134268812LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x250 = -1695;
	static int16_t x252 = -7146;

	t62 = (x249&((x250%x251)/x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	uint8_t x254 = UINT8_MAX;
	static int64_t x255 = INT64_MIN;
	static int8_t x256 = -1;
	volatile int64_t t63 = 2848053LL;

	t63 = (x253&((x254%x255)/x256));

	if (t63 != 4294967041LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x261 = UINT16_MAX;
	int32_t x263 = INT32_MIN;
	volatile int32_t t64 = 1853;

	t64 = (x261&((x262%x263)/x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x266 = -1;
	int32_t t65 = 22;

	t65 = (x265&((x266%x267)/x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x269 = 3265937994311896272LL;
	int64_t x270 = -1LL;
	static uint32_t x271 = 7U;

	t66 = (x269&((x270%x271)/x272));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x274 = 0;
	int32_t x275 = INT32_MIN;
	int16_t x276 = -1;

	t67 = (x273&((x274%x275)/x276));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = INT32_MAX;
	volatile int64_t x278 = INT64_MIN;
	volatile int16_t x279 = -1;
	int8_t x280 = INT8_MIN;
	int64_t t68 = 7715989720046579LL;

	t68 = (x277&((x278%x279)/x280));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = INT64_MIN;
	volatile int8_t x282 = -1;
	uint32_t x283 = 256327179U;
	uint32_t x284 = UINT32_MAX;
	volatile int64_t t69 = -409970714837LL;

	t69 = (x281&((x282%x283)/x284));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x285 = 115U;
	int32_t x286 = -1;
	uint64_t x287 = 4023476315669LLU;
	volatile int64_t x288 = INT64_MIN;

	t70 = (x285&((x286%x287)/x288));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x289 = UINT8_MAX;
	int16_t x290 = INT16_MIN;
	int32_t x291 = 28914;
	int16_t x292 = -83;
	volatile int32_t t71 = 66;

	t71 = (x289&((x290%x291)/x292));

	if (t71 != 46) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = INT8_MAX;
	int64_t x294 = -1LL;
	int32_t x295 = -1;
	int32_t x296 = INT32_MIN;
	int64_t t72 = 49LL;

	t72 = (x293&((x294%x295)/x296));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = INT64_MAX;
	int16_t x298 = INT16_MIN;
	volatile int32_t x299 = -1;

	t73 = (x297&((x298%x299)/x300));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x301 = 88409189U;
	static int8_t x302 = INT8_MAX;
	static volatile uint64_t x304 = UINT64_MAX;
	uint64_t t74 = 4LLU;

	t74 = (x301&((x302%x303)/x304));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x307 = 4673U;
	static volatile uint32_t t75 = 8141U;

	t75 = (x305&((x306%x307)/x308));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x310 = -769;
	volatile int16_t x311 = INT16_MAX;
	int32_t x312 = INT32_MIN;

	t76 = (x309&((x310%x311)/x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x313 = INT32_MIN;
	uint64_t x314 = UINT64_MAX;
	int16_t x315 = -3570;
	int16_t x316 = INT16_MIN;
	volatile uint64_t t77 = 59221818331862LLU;

	t77 = (x313&((x314%x315)/x316));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x317 = -39;
	volatile uint8_t x318 = 9U;
	int64_t x319 = INT64_MAX;
	int64_t x320 = -582965277LL;
	volatile int64_t t78 = -121305072233486LL;

	t78 = (x317&((x318%x319)/x320));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = -1;
	uint8_t x322 = UINT8_MAX;
	uint8_t x324 = 1U;
	static volatile int64_t t79 = 89234598409262114LL;

	t79 = (x321&((x322%x323)/x324));

	if (t79 != 5LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x325 = 1U;
	int16_t x326 = 2;
	volatile int8_t x327 = INT8_MIN;
	int32_t x328 = -1;

	t80 = (x325&((x326%x327)/x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = INT16_MAX;
	int32_t x330 = 1865;
	uint16_t x331 = 1U;
	int16_t x332 = -1;

	t81 = (x329&((x330%x331)/x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = 175U;
	volatile int8_t x338 = INT8_MIN;
	uint64_t x339 = UINT64_MAX;
	volatile uint16_t x340 = UINT16_MAX;
	volatile uint64_t t82 = 26LLU;

	t82 = (x337&((x338%x339)/x340));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x341 = -1;
	static int64_t x344 = INT64_MIN;

	t83 = (x341&((x342%x343)/x344));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = -1LL;
	int8_t x346 = -1;
	static int64_t x347 = INT64_MAX;
	static int16_t x348 = INT16_MIN;

	t84 = (x345&((x346%x347)/x348));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = -1;
	int64_t x350 = INT64_MAX;
	uint8_t x351 = UINT8_MAX;
	int16_t x352 = INT16_MIN;
	int64_t t85 = 17288848944805188LL;

	t85 = (x349&((x350%x351)/x352));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x354 = 71777185991531LLU;
	volatile int64_t x355 = INT64_MIN;
	volatile int32_t x356 = -29227667;
	uint64_t t86 = 1LLU;

	t86 = (x353&((x354%x355)/x356));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x362 = 5;
	volatile uint64_t x363 = 688922964959243263LLU;
	int64_t x364 = -21160790232LL;
	uint64_t t87 = 155884841051LLU;

	t87 = (x361&((x362%x363)/x364));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x365 = UINT64_MAX;
	int16_t x367 = INT16_MAX;
	volatile int64_t x368 = INT64_MIN;
	uint64_t t88 = 3LLU;

	t88 = (x365&((x366%x367)/x368));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x371 = 42U;
	uint8_t x372 = 5U;

	t89 = (x369&((x370%x371)/x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = -3546661011087878LL;
	uint64_t x375 = 96794755LLU;
	uint16_t x376 = 106U;

	t90 = (x373&((x374%x375)/x376));

	if (t90 != 104536LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x377 = 397814U;
	int8_t x378 = INT8_MIN;
	int8_t x380 = -12;
	int64_t t91 = -103582185001LL;

	t91 = (x377&((x378%x379)/x380));

	if (t91 != 2LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x381 = 3942483393LLU;
	int64_t x383 = INT64_MAX;
	uint8_t x384 = 3U;
	static uint64_t t92 = 5333202688LLU;

	t92 = (x381&((x382%x383)/x384));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x385 = 8120900992895541LLU;
	int64_t x386 = -4276438594500405304LL;
	int16_t x388 = INT16_MAX;
	volatile uint64_t t93 = 107LLU;

	t93 = (x385&((x386%x387)/x388));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x390 = 637699LLU;
	static uint8_t x391 = 2U;
	uint64_t t94 = 811790119591474LLU;

	t94 = (x389&((x390%x391)/x392));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x393 = UINT64_MAX;
	int32_t x395 = 7894209;
	volatile uint64_t t95 = 37813091761LLU;

	t95 = (x393&((x394%x395)/x396));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t96 = 8099U;

	t96 = (x397&((x398%x399)/x400));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x405 = 4LLU;
	volatile int32_t x406 = 1;
	int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MIN;
	uint64_t t97 = 10322LLU;

	t97 = (x405&((x406%x407)/x408));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = INT32_MIN;
	uint16_t x410 = UINT16_MAX;
	int64_t x412 = INT64_MIN;
	volatile int64_t t98 = 235682840155560LL;

	t98 = (x409&((x410%x411)/x412));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = INT64_MAX;
	static int16_t x414 = 6152;
	uint16_t x415 = 3316U;
	static uint32_t x416 = 222134067U;
	static int64_t t99 = -10966626LL;

	t99 = (x413&((x414%x415)/x416));

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


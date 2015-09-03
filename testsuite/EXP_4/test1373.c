#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
int32_t x3 = -780960;
static int16_t x11 = INT16_MIN;
int16_t x18 = INT16_MIN;
int16_t x24 = -63;
int32_t t4 = -5;
uint64_t x27 = 779556090LLU;
int32_t t5 = 8;
int32_t x32 = INT32_MIN;
volatile int16_t x34 = INT16_MIN;
int32_t t7 = -3;
int16_t x38 = 1794;
int8_t x43 = INT8_MIN;
int64_t x58 = -1LL;
uint8_t x61 = 2U;
static int32_t t14 = -186782273;
int8_t x65 = INT8_MAX;
static int16_t x66 = 4166;
int16_t x68 = 14661;
static int16_t x70 = INT16_MIN;
int8_t x73 = INT8_MIN;
int32_t t18 = -4933;
int32_t x82 = INT32_MIN;
int16_t x83 = 3368;
volatile int32_t t19 = 12470836;
volatile uint16_t x87 = 305U;
volatile int8_t x91 = INT8_MAX;
uint64_t x96 = UINT64_MAX;
static int8_t x99 = INT8_MAX;
int32_t x102 = 49;
int32_t x116 = -1;
static int32_t t27 = -52435780;
volatile uint16_t x123 = 880U;
uint32_t x127 = UINT32_MAX;
uint8_t x132 = 1U;
volatile int32_t t31 = -24853702;
volatile int64_t x133 = -1LL;
static int8_t x136 = -1;
int16_t x140 = INT16_MAX;
int8_t x155 = INT8_MIN;
int32_t t36 = -1;
int16_t x164 = 70;
int32_t t39 = -611;
static volatile int16_t x169 = INT16_MAX;
volatile int32_t t40 = -10;
volatile int64_t x173 = INT64_MIN;
volatile int32_t t41 = 121172;
volatile int16_t x179 = -1;
volatile uint32_t x195 = 134U;
static volatile int32_t t50 = -56043250;
static uint16_t x218 = 8043U;
uint32_t x220 = UINT32_MAX;
static volatile uint16_t x227 = 3941U;
int8_t x228 = 0;
int16_t x235 = -1;
uint8_t x238 = 40U;
volatile int32_t t57 = 16630;
int32_t x247 = -1;
volatile int32_t x248 = -3479;
int8_t x250 = INT8_MAX;
volatile uint32_t x252 = 59875550U;
static volatile uint8_t x254 = 51U;
int32_t t61 = 1070039328;
static int32_t x261 = -57;
int32_t t62 = -12;
int8_t x268 = INT8_MIN;
int8_t x271 = 0;
int8_t x277 = 9;
int64_t x281 = INT64_MIN;
int32_t x284 = INT32_MAX;
static int16_t x285 = 68;
int8_t x287 = INT8_MIN;
static volatile int16_t x291 = -1;
uint8_t x298 = UINT8_MAX;
int64_t x302 = -1LL;
int16_t x312 = INT16_MIN;
uint8_t x313 = UINT8_MAX;
volatile int8_t x316 = INT8_MIN;
volatile int32_t t74 = -21178039;
volatile int16_t x317 = INT16_MIN;
static int32_t x318 = 120646;
int8_t x320 = 1;
volatile uint32_t x325 = 55746U;
int64_t x331 = 105065450422453876LL;
uint64_t x336 = 80LLU;
static volatile int32_t t79 = -963680;
int32_t x339 = INT32_MIN;
volatile int32_t t80 = -274732775;
volatile int16_t x345 = 3612;
volatile int8_t x347 = -1;
volatile int32_t t82 = 953758;
static int8_t x361 = INT8_MIN;
int8_t x365 = INT8_MIN;
static int64_t x368 = INT64_MIN;
int32_t x373 = INT32_MIN;
int32_t x378 = INT32_MAX;
volatile int64_t x389 = INT64_MAX;
volatile int8_t x392 = INT8_MIN;
static int16_t x399 = INT16_MIN;
int16_t x400 = INT16_MIN;
volatile uint16_t x401 = 38U;
int64_t x403 = INT64_MAX;
uint16_t x409 = 3U;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static volatile int32_t x4 = -1;
	int32_t t0 = -113500379;

	t0 = (x1==(x2-(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	volatile int16_t x6 = INT16_MIN;
	int32_t x7 = -1;
	static uint8_t x8 = 11U;
	volatile int32_t t1 = -14;

	t1 = (x5==(x6-(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = 0;
	volatile uint32_t x10 = UINT32_MAX;
	int64_t x12 = 65681589LL;
	int32_t t2 = -14;

	t2 = (x9==(x10-(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	volatile int64_t x19 = -1LL;
	int64_t x20 = -1LL;
	volatile int32_t t3 = 14;

	t3 = (x17==(x18-(x19<x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = INT64_MAX;
	uint64_t x22 = UINT64_MAX;
	uint32_t x23 = 17U;

	t4 = (x21==(x22-(x23<x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 8506134269214LLU;
	int64_t x26 = INT64_MAX;
	uint32_t x28 = UINT32_MAX;

	t5 = (x25==(x26-(x27<x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 2538U;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = 286LL;
	static volatile int32_t t6 = -85704;

	t6 = (x29==(x30-(x31<x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 122;
	volatile uint32_t x35 = UINT32_MAX;
	int32_t x36 = INT32_MAX;

	t7 = (x33==(x34-(x35<x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 0U;
	int16_t x39 = -25;
	uint32_t x40 = 252063U;
	int32_t t8 = -357666;

	t8 = (x37==(x38-(x39<x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x41 = 17U;
	uint32_t x42 = 22U;
	int64_t x44 = -1LL;
	volatile int32_t t9 = -6333451;

	t9 = (x41==(x42-(x43<x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x45 = UINT16_MAX;
	int32_t x46 = 0;
	volatile int64_t x47 = 2939326376LL;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t10 = -35;

	t10 = (x45==(x46-(x47<x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 431329187412LLU;
	int32_t x50 = 28923;
	static uint64_t x51 = UINT64_MAX;
	static int64_t x52 = -8241074049LL;
	volatile int32_t t11 = 1298934;

	t11 = (x49==(x50-(x51<x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	volatile int8_t x54 = 0;
	int16_t x55 = -8568;
	static int32_t x56 = -1;
	int32_t t12 = 0;

	t12 = (x53==(x54-(x55<x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MAX;
	uint8_t x59 = 107U;
	static volatile uint64_t x60 = UINT64_MAX;
	int32_t t13 = -5130;

	t13 = (x57==(x58-(x59<x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = -1;
	int64_t x63 = INT64_MIN;
	uint8_t x64 = UINT8_MAX;

	t14 = (x61==(x62-(x63<x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x67 = -1;
	static volatile int32_t t15 = -1807529;

	t15 = (x65==(x66-(x67<x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -1;
	int8_t x71 = INT8_MAX;
	volatile int64_t x72 = -1LL;
	int32_t t16 = 5;

	t16 = (x69==(x70-(x71<x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = -1LL;
	int8_t x75 = INT8_MIN;
	int16_t x76 = 275;
	int32_t t17 = 1;

	t17 = (x73==(x74-(x75<x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 13U;
	static volatile uint8_t x78 = 3U;
	uint16_t x79 = 90U;
	int32_t x80 = -1;

	t18 = (x77==(x78-(x79<x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = INT64_MIN;
	static uint16_t x84 = 489U;

	t19 = (x81==(x82-(x83<x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	int64_t x86 = INT64_MIN;
	int8_t x88 = -1;
	int32_t t20 = -183973;

	t20 = (x85==(x86-(x87<x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MAX;
	uint16_t x90 = UINT16_MAX;
	uint64_t x92 = 140558LLU;
	int32_t t21 = 1;

	t21 = (x89==(x90-(x91<x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 134U;
	int32_t x94 = -1;
	int64_t x95 = INT64_MIN;
	volatile int32_t t22 = -253;

	t22 = (x93==(x94-(x95<x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	volatile int32_t x98 = -42524856;
	int8_t x100 = INT8_MIN;
	static int32_t t23 = 1393306;

	t23 = (x97==(x98-(x99<x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = INT32_MIN;
	int16_t x103 = INT16_MIN;
	int64_t x104 = -15743676252LL;
	volatile int32_t t24 = 71473;

	t24 = (x101==(x102-(x103<x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -1;
	uint64_t x106 = UINT64_MAX;
	int8_t x107 = INT8_MAX;
	uint64_t x108 = 12653100740880437LLU;
	volatile int32_t t25 = -174003;

	t25 = (x105==(x106-(x107<x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 22U;
	uint64_t x110 = 1995218LLU;
	int8_t x111 = 22;
	static int64_t x112 = INT64_MAX;
	volatile int32_t t26 = -361060497;

	t26 = (x109==(x110-(x111<x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = -998023LL;
	int32_t x114 = INT32_MIN;
	uint64_t x115 = UINT64_MAX;

	t27 = (x113==(x114-(x115<x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -1;
	int8_t x118 = INT8_MIN;
	static int64_t x119 = 413787419237LL;
	volatile int8_t x120 = -1;
	int32_t t28 = 866357712;

	t28 = (x117==(x118-(x119<x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x121 = 40188;
	static volatile int8_t x122 = INT8_MAX;
	int32_t x124 = 745419615;
	volatile int32_t t29 = 3899;

	t29 = (x121==(x122-(x123<x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -1760430;
	uint16_t x126 = 5017U;
	volatile int64_t x128 = -1LL;
	volatile int32_t t30 = 92603816;

	t30 = (x125==(x126-(x127<x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x129 = UINT8_MAX;
	uint8_t x130 = 56U;
	static volatile int16_t x131 = INT16_MAX;

	t31 = (x129==(x130-(x131<x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x134 = 124U;
	uint8_t x135 = 1U;
	volatile int32_t t32 = -175;

	t32 = (x133==(x134-(x135<x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = UINT8_MAX;
	static uint16_t x138 = 1U;
	static uint32_t x139 = 445467741U;
	volatile int32_t t33 = -108728129;

	t33 = (x137==(x138-(x139<x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x145 = 974LLU;
	uint16_t x146 = UINT16_MAX;
	static volatile int16_t x147 = -1;
	int32_t x148 = 654836;
	volatile int32_t t34 = 31;

	t34 = (x145==(x146-(x147<x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -31LL;
	static volatile uint16_t x150 = UINT16_MAX;
	int8_t x151 = INT8_MIN;
	uint64_t x152 = UINT64_MAX;
	static int32_t t35 = 9736;

	t35 = (x149==(x150-(x151<x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = UINT64_MAX;
	int8_t x154 = 0;
	int32_t x156 = INT32_MIN;

	t36 = (x153==(x154-(x155<x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = -1;
	int32_t x158 = -1;
	int64_t x159 = INT64_MIN;
	volatile uint32_t x160 = 20U;
	int32_t t37 = -2584;

	t37 = (x157==(x158-(x159<x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = UINT8_MAX;
	int32_t x162 = -2;
	static int16_t x163 = INT16_MIN;
	static int32_t t38 = 98905;

	t38 = (x161==(x162-(x163<x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = -1;
	static uint16_t x166 = 19U;
	int64_t x167 = INT64_MIN;
	int16_t x168 = 12;

	t39 = (x165==(x166-(x167<x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x170 = UINT32_MAX;
	int64_t x171 = -1LL;
	int32_t x172 = INT32_MAX;

	t40 = (x169==(x170-(x171<x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = -113620466820657541LL;
	static int64_t x175 = INT64_MIN;
	int32_t x176 = INT32_MIN;

	t41 = (x173==(x174-(x175<x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x177 = INT64_MIN;
	uint8_t x178 = UINT8_MAX;
	uint8_t x180 = 0U;
	volatile int32_t t42 = 161305;

	t42 = (x177==(x178-(x179<x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = -14693937LL;
	int8_t x182 = -2;
	int64_t x183 = -1LL;
	static volatile uint64_t x184 = 108184872324LLU;
	int32_t t43 = -36;

	t43 = (x181==(x182-(x183<x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 1471U;
	volatile int8_t x186 = -1;
	volatile uint64_t x187 = 0LLU;
	static int32_t x188 = -3;
	volatile int32_t t44 = 12;

	t44 = (x185==(x186-(x187<x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MIN;
	int8_t x190 = INT8_MIN;
	int32_t x191 = INT32_MAX;
	int64_t x192 = -6LL;
	int32_t t45 = -3;

	t45 = (x189==(x190-(x191<x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = UINT8_MAX;
	static int64_t x194 = INT64_MAX;
	uint8_t x196 = 1U;
	static volatile int32_t t46 = -481;

	t46 = (x193==(x194-(x195<x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = 8;
	volatile uint16_t x202 = 0U;
	volatile int64_t x203 = 6231241040LL;
	static volatile int64_t x204 = INT64_MAX;
	static int32_t t47 = 2825;

	t47 = (x201==(x202-(x203<x204)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = 147388U;
	int32_t x206 = -36;
	int16_t x207 = INT16_MAX;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t48 = 186769;

	t48 = (x205==(x206-(x207<x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MAX;
	static int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MIN;
	int8_t x212 = -1;
	int32_t t49 = 1011880;

	t49 = (x209==(x210-(x211<x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = -1;
	uint16_t x214 = 27509U;
	int16_t x215 = INT16_MIN;
	int16_t x216 = INT16_MIN;

	t50 = (x213==(x214-(x215<x216)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x217 = INT8_MAX;
	volatile int8_t x219 = -1;
	static int32_t t51 = 249590;

	t51 = (x217==(x218-(x219<x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x221 = UINT32_MAX;
	static uint64_t x222 = 78445685LLU;
	int16_t x223 = -1;
	static uint64_t x224 = 217494379LLU;
	static int32_t t52 = -514;

	t52 = (x221==(x222-(x223<x224)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MIN;
	int32_t t53 = -5;

	t53 = (x225==(x226-(x227<x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 14U;
	int64_t x230 = INT64_MAX;
	int32_t x231 = 1;
	int64_t x232 = 1938582LL;
	volatile int32_t t54 = -17119806;

	t54 = (x229==(x230-(x231<x232)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x233 = -81;
	uint64_t x234 = 91LLU;
	int16_t x236 = INT16_MIN;
	static volatile int32_t t55 = -3258;

	t55 = (x233==(x234-(x235<x236)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = UINT32_MAX;
	volatile uint64_t x239 = UINT64_MAX;
	volatile int32_t x240 = -1;
	int32_t t56 = 250;

	t56 = (x237==(x238-(x239<x240)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = 711;
	static uint8_t x242 = 5U;
	static uint16_t x243 = 367U;
	int32_t x244 = INT32_MIN;

	t57 = (x241==(x242-(x243<x244)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MAX;
	uint8_t x246 = 4U;
	volatile int32_t t58 = 7435;

	t58 = (x245==(x246-(x247<x248)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x249 = 13577U;
	int32_t x251 = -5313;
	int32_t t59 = -1851378;

	t59 = (x249==(x250-(x251<x252)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x253 = UINT64_MAX;
	int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MIN;
	int32_t t60 = -15;

	t60 = (x253==(x254-(x255<x256)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x257 = -1LL;
	int64_t x258 = INT64_MAX;
	static uint8_t x259 = 7U;
	uint16_t x260 = 4U;

	t61 = (x257==(x258-(x259<x260)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x262 = -1;
	int16_t x263 = -1;
	int8_t x264 = 0;

	t62 = (x261==(x262-(x263<x264)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = -7;
	int16_t x266 = INT16_MIN;
	static uint8_t x267 = UINT8_MAX;
	volatile int32_t t63 = -81000152;

	t63 = (x265==(x266-(x267<x268)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x269 = 15086U;
	static int32_t x270 = 12138430;
	uint64_t x272 = 3368621512LLU;
	volatile int32_t t64 = -258;

	t64 = (x269==(x270-(x271<x272)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = -1LL;
	static uint32_t x274 = UINT32_MAX;
	uint32_t x275 = 64476696U;
	int32_t x276 = INT32_MAX;
	volatile int32_t t65 = 5973526;

	t65 = (x273==(x274-(x275<x276)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x278 = -2644;
	int32_t x279 = 99;
	static volatile int32_t x280 = -7;
	int32_t t66 = 51710413;

	t66 = (x277==(x278-(x279<x280)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x282 = 164267U;
	uint8_t x283 = 12U;
	static int32_t t67 = 17230531;

	t67 = (x281==(x282-(x283<x284)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x286 = 143;
	volatile uint64_t x288 = 586349552LLU;
	int32_t t68 = 511;

	t68 = (x285==(x286-(x287<x288)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = INT32_MIN;
	static uint64_t x290 = UINT64_MAX;
	uint32_t x292 = 127452077U;
	static volatile int32_t t69 = -1;

	t69 = (x289==(x290-(x291<x292)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x297 = -1291;
	int32_t x299 = -42077860;
	int8_t x300 = 0;
	int32_t t70 = 1;

	t70 = (x297==(x298-(x299<x300)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	int16_t x303 = -1;
	int32_t x304 = 14513;
	volatile int32_t t71 = 1148735;

	t71 = (x301==(x302-(x303<x304)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x305 = INT32_MIN;
	int8_t x306 = -1;
	uint8_t x307 = 42U;
	int32_t x308 = -1035443151;
	static int32_t t72 = 0;

	t72 = (x305==(x306-(x307<x308)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MAX;
	uint8_t x310 = 11U;
	uint64_t x311 = 16288019629825LLU;
	volatile int32_t t73 = -56306254;

	t73 = (x309==(x310-(x311<x312)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x314 = UINT16_MAX;
	int32_t x315 = -1;

	t74 = (x313==(x314-(x315<x316)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x319 = INT8_MIN;
	int32_t t75 = 2176840;

	t75 = (x317==(x318-(x319<x320)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x321 = -1;
	int64_t x322 = -1LL;
	int16_t x323 = -1;
	int32_t x324 = -1;
	int32_t t76 = 666113100;

	t76 = (x321==(x322-(x323<x324)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x326 = -1LL;
	int16_t x327 = 1615;
	uint16_t x328 = 6038U;
	int32_t t77 = 10;

	t77 = (x325==(x326-(x327<x328)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x329 = -1;
	volatile int32_t x330 = 76;
	static int8_t x332 = -3;
	int32_t t78 = 2;

	t78 = (x329==(x330-(x331<x332)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x333 = 4642U;
	int8_t x334 = INT8_MIN;
	static int64_t x335 = -1LL;

	t79 = (x333==(x334-(x335<x336)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MIN;
	int64_t x338 = -3558LL;
	volatile int16_t x340 = INT16_MIN;

	t80 = (x337==(x338-(x339<x340)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = -1;
	volatile uint64_t x342 = 24760445888748648LLU;
	uint8_t x343 = 0U;
	int64_t x344 = -2855326LL;
	static volatile int32_t t81 = -938;

	t81 = (x341==(x342-(x343<x344)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x346 = INT8_MAX;
	int64_t x348 = INT64_MIN;

	t82 = (x345==(x346-(x347<x348)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x349 = 1856320;
	uint16_t x350 = 10U;
	uint8_t x351 = 3U;
	int16_t x352 = 7;
	int32_t t83 = 3;

	t83 = (x349==(x350-(x351<x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x353 = 417176509LL;
	uint8_t x354 = 51U;
	int64_t x355 = INT64_MAX;
	int32_t x356 = INT32_MIN;
	volatile int32_t t84 = -51209324;

	t84 = (x353==(x354-(x355<x356)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x357 = 1U;
	int32_t x358 = INT32_MIN;
	int64_t x359 = INT64_MAX;
	int32_t x360 = INT32_MAX;
	int32_t t85 = -1819;

	t85 = (x357==(x358-(x359<x360)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x362 = 3613U;
	int8_t x363 = -1;
	int64_t x364 = -1LL;
	volatile int32_t t86 = -42;

	t86 = (x361==(x362-(x363<x364)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x366 = 76553260LL;
	volatile uint32_t x367 = 219U;
	volatile int32_t t87 = -60360527;

	t87 = (x365==(x366-(x367<x368)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = -1LL;
	volatile int64_t x370 = -112300620235199898LL;
	int16_t x371 = 1;
	int16_t x372 = INT16_MIN;
	volatile int32_t t88 = -40;

	t88 = (x369==(x370-(x371<x372)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x374 = 1;
	int32_t x375 = INT32_MAX;
	static int32_t x376 = -515115;
	int32_t t89 = -3;

	t89 = (x373==(x374-(x375<x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x377 = 1737U;
	uint32_t x379 = 107715033U;
	volatile uint8_t x380 = 4U;
	volatile int32_t t90 = 18518;

	t90 = (x377==(x378-(x379<x380)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x381 = UINT8_MAX;
	int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	uint8_t x384 = UINT8_MAX;
	int32_t t91 = -3;

	t91 = (x381==(x382-(x383<x384)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x385 = 818913U;
	volatile uint8_t x386 = 73U;
	uint32_t x387 = 256178U;
	int16_t x388 = INT16_MAX;
	volatile int32_t t92 = -41905;

	t92 = (x385==(x386-(x387<x388)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x390 = INT64_MIN;
	int64_t x391 = INT64_MAX;
	volatile int32_t t93 = -19472;

	t93 = (x389==(x390-(x391<x392)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = -764306;
	volatile uint64_t x394 = 964084744LLU;
	uint32_t x395 = 96590U;
	static int8_t x396 = INT8_MIN;
	volatile int32_t t94 = 6569239;

	t94 = (x393==(x394-(x395<x396)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = 128U;
	static volatile int32_t t95 = 3025416;

	t95 = (x397==(x398-(x399<x400)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x402 = INT16_MAX;
	uint8_t x404 = UINT8_MAX;
	static volatile int32_t t96 = 881912805;

	t96 = (x401==(x402-(x403<x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = INT32_MIN;
	static int16_t x406 = INT16_MAX;
	int8_t x407 = INT8_MIN;
	volatile int32_t x408 = 0;
	volatile int32_t t97 = 1792034;

	t97 = (x405==(x406-(x407<x408)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x410 = 23086U;
	uint64_t x411 = 12LLU;
	volatile int16_t x412 = INT16_MIN;
	volatile int32_t t98 = -1;

	t98 = (x409==(x410-(x411<x412)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = -1;
	int32_t x414 = INT32_MIN;
	volatile uint32_t x415 = UINT32_MAX;
	uint8_t x416 = 60U;
	int32_t t99 = -14524;

	t99 = (x413==(x414-(x415<x416)));

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


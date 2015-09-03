#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x18 = -1;
int16_t x21 = -1;
int64_t x22 = -1LL;
int8_t x32 = INT8_MIN;
static int16_t x35 = -1;
volatile uint64_t x36 = UINT64_MAX;
volatile uint32_t t8 = 16430U;
uint32_t x42 = 11152562U;
int8_t x44 = -1;
int32_t x45 = INT32_MIN;
int8_t x46 = INT8_MIN;
int16_t x50 = INT16_MIN;
volatile int32_t t11 = -422;
uint32_t x53 = UINT32_MAX;
int64_t x54 = -65119088816949LL;
static int8_t x57 = 63;
uint32_t x67 = UINT32_MAX;
volatile uint32_t t16 = 2U;
volatile int32_t t19 = -597;
int16_t x87 = -6;
static volatile int32_t x101 = INT32_MAX;
static int32_t t27 = 875;
uint32_t t30 = UINT32_MAX;
int64_t x143 = INT64_MIN;
uint64_t x144 = 13999293LLU;
volatile int32_t t33 = 1034780321;
uint64_t x149 = 14581LLU;
int64_t x152 = -1LL;
static int16_t x154 = -1;
int32_t t39 = -27350892;
int16_t x179 = -1;
uint8_t x190 = 56U;
int8_t x200 = INT8_MIN;
int64_t x201 = INT64_MAX;
int32_t x204 = -1;
volatile int8_t x210 = 7;
static uint16_t x219 = UINT16_MAX;
int16_t x226 = INT16_MIN;
int32_t t52 = -4512;
int64_t x232 = INT64_MAX;
int32_t x233 = INT32_MIN;
volatile uint64_t x235 = UINT64_MAX;
static int32_t x238 = INT32_MIN;
int16_t x246 = -13;
static uint64_t x249 = 6322421LLU;
int8_t x250 = -1;
volatile int64_t t59 = -683257107LL;
int64_t x257 = INT64_MIN;
static int32_t x260 = INT32_MIN;
volatile int64_t t60 = INT64_MIN;
volatile int32_t t61 = 30;
int64_t x267 = -1LL;
int32_t x276 = INT32_MIN;
volatile uint32_t x280 = UINT32_MAX;
static uint8_t x281 = UINT8_MAX;
static uint32_t x284 = 438162U;
volatile int16_t x290 = 1;
volatile int32_t x293 = INT32_MAX;
static uint64_t x294 = 2019894LLU;
int32_t t67 = INT32_MAX;
volatile int32_t x299 = 195;
volatile int8_t x300 = -7;
uint64_t x318 = UINT64_MAX;
uint8_t x319 = 22U;
volatile int32_t t70 = -1;
static uint32_t x327 = UINT32_MAX;
int32_t t72 = -9772825;
static int32_t t74 = 5623475;
volatile int8_t x340 = INT8_MAX;
uint32_t x344 = 11U;
uint64_t x347 = 31274LLU;
int16_t x354 = 0;
static int16_t x366 = INT16_MIN;
int16_t x376 = -3145;
volatile int32_t x378 = INT32_MAX;
int32_t x389 = 92;
int64_t x392 = INT64_MIN;
volatile int32_t t87 = -8475;
int32_t x393 = 171532;
int16_t x394 = 1;
int16_t x396 = INT16_MIN;
static int64_t x401 = -1LL;
int32_t x404 = -3191;
volatile int64_t t90 = 19583780625534LL;
int32_t t93 = 9209859;
uint32_t x418 = 13010744U;
int32_t x425 = INT32_MIN;
int8_t x440 = -1;
static int8_t x441 = -1;
int64_t x443 = -120999900592260757LL;


void f0(void) {
	uint16_t x1 = 3U;
	int32_t x2 = 0;
	static int32_t x3 = INT32_MIN;
	uint64_t x4 = UINT64_MAX;
	static int32_t t0 = 1;

	t0 = (x1*(x2<=(x3-x4)));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = -1;
	int64_t x7 = INT64_MIN;
	uint8_t x8 = 0U;
	volatile int32_t t1 = 6;

	t1 = (x5*(x6<=(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x9 = 79U;
	static int8_t x10 = INT8_MAX;
	static int32_t x11 = INT32_MIN;
	volatile int16_t x12 = INT16_MIN;
	int32_t t2 = -8193441;

	t2 = (x9*(x10<=(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int8_t x14 = INT8_MIN;
	static uint32_t x15 = 1766649U;
	uint8_t x16 = 0U;
	uint64_t t3 = 121LLU;

	t3 = (x13*(x14<=(x15-x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	uint32_t x19 = 136U;
	static int16_t x20 = -563;
	volatile int32_t t4 = 0;

	t4 = (x17*(x18<=(x19-x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x23 = INT16_MAX;
	uint16_t x24 = 0U;
	volatile int32_t t5 = -3691;

	t5 = (x21*(x22<=(x23-x24)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	int32_t x30 = -1;
	int8_t x31 = 0;
	static uint32_t t6 = UINT32_MAX;

	t6 = (x29*(x30<=(x31-x32)));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = UINT8_MAX;
	int32_t x34 = INT32_MIN;
	volatile int32_t t7 = -4;

	t7 = (x33*(x34<=(x35-x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x38 = -35;
	volatile int16_t x39 = 0;
	int32_t x40 = INT32_MAX;

	t8 = (x37*(x38<=(x39-x40)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x41 = 2146U;
	static int32_t x43 = 10;
	static int32_t t9 = 564956;

	t9 = (x41*(x42<=(x43-x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x47 = UINT16_MAX;
	static int8_t x48 = -1;
	volatile int32_t t10 = INT32_MIN;

	t10 = (x45*(x46<=(x47-x48)));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = -1;
	int64_t x51 = -1LL;
	int64_t x52 = -1LL;

	t11 = (x49*(x50<=(x51-x52)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x55 = 118U;
	int64_t x56 = 129465122800LL;
	static volatile uint32_t t12 = UINT32_MAX;

	t12 = (x53*(x54<=(x55-x56)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x58 = -1;
	uint8_t x59 = UINT8_MAX;
	int32_t x60 = INT32_MAX;
	static int32_t t13 = 412;

	t13 = (x57*(x58<=(x59-x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x61 = 97U;
	int16_t x62 = 11;
	uint64_t x63 = UINT64_MAX;
	static int8_t x64 = -2;
	int32_t t14 = 6;

	t14 = (x61*(x62<=(x63-x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 475U;
	volatile int64_t x66 = INT64_MIN;
	uint16_t x68 = 3001U;
	static uint32_t t15 = 980U;

	t15 = (x65*(x66<=(x67-x68)));

	if (t15 != 475U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x69 = 4748U;
	volatile int8_t x70 = -1;
	volatile int16_t x71 = -1;
	int8_t x72 = -1;

	t16 = (x69*(x70<=(x71-x72)));

	if (t16 != 4748U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 72U;
	uint8_t x74 = UINT8_MAX;
	static uint16_t x75 = 5U;
	static int64_t x76 = -3990606LL;
	static int32_t t17 = 528;

	t17 = (x73*(x74<=(x75-x76)));

	if (t17 != 72) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 19U;
	volatile int8_t x78 = INT8_MIN;
	uint16_t x79 = 4U;
	int64_t x80 = 947324707916671LL;
	volatile int32_t t18 = -1723;

	t18 = (x77*(x78<=(x79-x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = UINT8_MAX;
	uint64_t x82 = UINT64_MAX;
	uint32_t x83 = UINT32_MAX;
	volatile uint8_t x84 = 4U;

	t19 = (x81*(x82<=(x83-x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x85 = 393U;
	int32_t x86 = 1;
	volatile int64_t x88 = -4183623161159315116LL;
	static volatile uint32_t t20 = 396209417U;

	t20 = (x85*(x86<=(x87-x88)));

	if (t20 != 393U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x89 = INT16_MIN;
	uint16_t x90 = 34U;
	uint8_t x91 = UINT8_MAX;
	static int64_t x92 = -24633636963087LL;
	static int32_t t21 = 6;

	t21 = (x89*(x90<=(x91-x92)));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x93 = 216529055U;
	volatile int64_t x94 = 7319875378LL;
	uint8_t x95 = 2U;
	volatile uint32_t x96 = UINT32_MAX;
	uint32_t t22 = 12878624U;

	t22 = (x93*(x94<=(x95-x96)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	volatile int8_t x98 = INT8_MAX;
	uint64_t x99 = UINT64_MAX;
	int8_t x100 = 0;
	volatile int64_t t23 = INT64_MIN;

	t23 = (x97*(x98<=(x99-x100)));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x102 = -38;
	int8_t x103 = INT8_MAX;
	uint8_t x104 = 119U;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x101*(x102<=(x103-x104)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = 215473685730LL;
	static int16_t x106 = 8416;
	int32_t x107 = -1;
	volatile int64_t x108 = INT64_MAX;
	int64_t t25 = 2LL;

	t25 = (x105*(x106<=(x107-x108)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x109 = 1587U;
	volatile int16_t x110 = -3;
	static int32_t x111 = -1;
	volatile int32_t x112 = INT32_MIN;
	volatile int32_t t26 = -256988;

	t26 = (x109*(x110<=(x111-x112)));

	if (t26 != 1587) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 6U;
	volatile uint8_t x114 = 3U;
	volatile uint32_t x115 = 2396U;
	static volatile uint8_t x116 = 107U;

	t27 = (x113*(x114<=(x115-x116)));

	if (t27 != 6) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x117 = 2107495214285LL;
	volatile int8_t x118 = -1;
	uint64_t x119 = UINT64_MAX;
	static int8_t x120 = INT8_MIN;
	static volatile int64_t t28 = -1699433337729864LL;

	t28 = (x117*(x118<=(x119-x120)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = -156;
	static int8_t x122 = -1;
	int64_t x123 = INT64_MAX;
	uint64_t x124 = 276LLU;
	static int32_t t29 = -457290;

	t29 = (x121*(x122<=(x123-x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = UINT32_MAX;
	static volatile int64_t x126 = 8865425995LL;
	uint8_t x127 = 0U;
	volatile int64_t x128 = -565815846184204LL;

	t30 = (x125*(x126<=(x127-x128)));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x129 = 2;
	uint64_t x130 = 1262464709LLU;
	volatile int32_t x131 = INT32_MAX;
	int64_t x132 = -1LL;
	int32_t t31 = 138579615;

	t31 = (x129*(x130<=(x131-x132)));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 105LLU;
	int32_t x134 = 5;
	uint32_t x135 = 3U;
	int8_t x136 = -1;
	volatile uint64_t t32 = 1513034608LLU;

	t32 = (x133*(x134<=(x135-x136)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x141 = 613U;
	int8_t x142 = INT8_MIN;

	t33 = (x141*(x142<=(x143-x144)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x145 = -1;
	int32_t x146 = -2919616;
	volatile uint64_t x147 = 50643877211LLU;
	volatile uint32_t x148 = 126831060U;
	volatile int32_t t34 = 31;

	t34 = (x145*(x146<=(x147-x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x150 = -1;
	int64_t x151 = -1LL;
	uint64_t t35 = 345750383105LLU;

	t35 = (x149*(x150<=(x151-x152)));

	if (t35 != 14581LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = 229509;
	int64_t x155 = -1LL;
	uint32_t x156 = 7U;
	volatile int32_t t36 = 2148;

	t36 = (x153*(x154<=(x155-x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = 5U;
	int8_t x158 = -7;
	int64_t x159 = -1LL;
	int8_t x160 = INT8_MAX;
	int32_t t37 = 2641;

	t37 = (x157*(x158<=(x159-x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = -1LL;
	int8_t x166 = -62;
	uint16_t x167 = 0U;
	int16_t x168 = 1;
	static volatile int64_t t38 = 525451071402661LL;

	t38 = (x165*(x166<=(x167-x168)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x169 = INT32_MIN;
	static int32_t x170 = 54;
	int16_t x171 = -13;
	volatile int16_t x172 = 288;

	t39 = (x169*(x170<=(x171-x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x173 = -1901217241540LL;
	static uint64_t x174 = UINT64_MAX;
	static int64_t x175 = INT64_MIN;
	int32_t x176 = INT32_MIN;
	volatile int64_t t40 = -2039405261881LL;

	t40 = (x173*(x174<=(x175-x176)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x177 = -1LL;
	int8_t x178 = 1;
	int64_t x180 = -149242309686LL;
	int64_t t41 = -206LL;

	t41 = (x177*(x178<=(x179-x180)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = 7241959LL;
	static volatile int8_t x182 = -1;
	volatile uint16_t x183 = 1U;
	int64_t x184 = INT64_MAX;
	volatile int64_t t42 = 3274353654479LL;

	t42 = (x181*(x182<=(x183-x184)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x185 = 1053142466641LL;
	static volatile uint8_t x186 = 2U;
	int16_t x187 = INT16_MAX;
	volatile int16_t x188 = INT16_MIN;
	volatile int64_t t43 = -3407712200725LL;

	t43 = (x185*(x186<=(x187-x188)));

	if (t43 != 1053142466641LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x189 = 80U;
	int64_t x191 = 3686535712132113999LL;
	static uint8_t x192 = 0U;
	volatile int32_t t44 = 108245950;

	t44 = (x189*(x190<=(x191-x192)));

	if (t44 != 80) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x193 = 2248309;
	uint64_t x194 = 30654779LLU;
	uint32_t x195 = 97555505U;
	uint32_t x196 = 108949625U;
	static int32_t t45 = 2065553;

	t45 = (x193*(x194<=(x195-x196)));

	if (t45 != 2248309) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x197 = INT8_MAX;
	int16_t x198 = INT16_MIN;
	int64_t x199 = -3993967721122LL;
	volatile int32_t t46 = -7;

	t46 = (x197*(x198<=(x199-x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x202 = 25U;
	static int16_t x203 = -1;
	int64_t t47 = -57194000489LL;

	t47 = (x201*(x202<=(x203-x204)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = 6U;
	volatile uint64_t x206 = 376169922802936LLU;
	uint32_t x207 = UINT32_MAX;
	volatile int16_t x208 = INT16_MIN;
	static volatile int32_t t48 = 1760;

	t48 = (x205*(x206<=(x207-x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x209 = INT64_MAX;
	volatile int16_t x211 = 1;
	static uint16_t x212 = 0U;
	volatile int64_t t49 = -2546254250288LL;

	t49 = (x209*(x210<=(x211-x212)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x217 = -1LL;
	int8_t x218 = -1;
	int8_t x220 = 2;
	int64_t t50 = 0LL;

	t50 = (x217*(x218<=(x219-x220)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x221 = INT32_MIN;
	static uint8_t x222 = 29U;
	static uint32_t x223 = UINT32_MAX;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t51 = INT32_MIN;

	t51 = (x221*(x222<=(x223-x224)));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x225 = UINT8_MAX;
	uint32_t x227 = 8105U;
	volatile int8_t x228 = INT8_MAX;

	t52 = (x225*(x226<=(x227-x228)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = -167;
	int16_t x230 = INT16_MAX;
	uint32_t x231 = UINT32_MAX;
	int32_t t53 = -1;

	t53 = (x229*(x230<=(x231-x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x234 = 1U;
	volatile int8_t x236 = INT8_MIN;
	volatile int32_t t54 = INT32_MIN;

	t54 = (x233*(x234<=(x235-x236)));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x237 = UINT64_MAX;
	uint32_t x239 = 85U;
	static int64_t x240 = -1LL;
	static uint64_t t55 = UINT64_MAX;

	t55 = (x237*(x238<=(x239-x240)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x241 = 1082U;
	uint32_t x242 = 0U;
	uint64_t x243 = 19065126447279LLU;
	int32_t x244 = -1;
	static int32_t t56 = -19100250;

	t56 = (x241*(x242<=(x243-x244)));

	if (t56 != 1082) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x245 = -1;
	uint32_t x247 = UINT32_MAX;
	volatile int64_t x248 = INT64_MAX;
	volatile int32_t t57 = -65368;

	t57 = (x245*(x246<=(x247-x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MIN;
	uint64_t t58 = 22168LLU;

	t58 = (x249*(x250<=(x251-x252)));

	if (t58 != 6322421LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = 6;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = UINT16_MAX;

	t59 = (x253*(x254<=(x255-x256)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x258 = INT32_MIN;
	volatile uint32_t x259 = 99148339U;

	t60 = (x257*(x258<=(x259-x260)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = 0;
	int16_t x262 = INT16_MAX;
	static uint64_t x263 = 62894374749433632LLU;
	volatile uint64_t x264 = 6079155123LLU;

	t61 = (x261*(x262<=(x263-x264)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x265 = 1U;
	int16_t x266 = -1;
	uint8_t x268 = UINT8_MAX;
	static volatile int32_t t62 = 891;

	t62 = (x265*(x266<=(x267-x268)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = 4U;
	volatile int8_t x274 = INT8_MIN;
	int64_t x275 = -1LL;
	volatile int32_t t63 = 223785510;

	t63 = (x273*(x274<=(x275-x276)));

	if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = -6;
	int8_t x278 = INT8_MAX;
	static int32_t x279 = -96784;
	volatile int32_t t64 = 859156686;

	t64 = (x277*(x278<=(x279-x280)));

	if (t64 != -6) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x282 = 8404LLU;
	volatile uint8_t x283 = 45U;
	int32_t t65 = -765;

	t65 = (x281*(x282<=(x283-x284)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x289 = 56451LLU;
	volatile int8_t x291 = INT8_MIN;
	int16_t x292 = -1;
	volatile uint64_t t66 = 747LLU;

	t66 = (x289*(x290<=(x291-x292)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x295 = INT8_MIN;
	int16_t x296 = 6;

	t67 = (x293*(x294<=(x295-x296)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x297 = 26U;
	volatile int16_t x298 = 0;
	static int32_t t68 = -74;

	t68 = (x297*(x298<=(x299-x300)));

	if (t68 != 26) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x301 = UINT32_MAX;
	int64_t x302 = -124523139876068893LL;
	uint8_t x303 = 8U;
	uint16_t x304 = UINT16_MAX;
	uint32_t t69 = UINT32_MAX;

	t69 = (x301*(x302<=(x303-x304)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = INT32_MIN;
	uint16_t x320 = 61U;

	t70 = (x317*(x318<=(x319-x320)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = -7394;
	int64_t x322 = 5552355606422483LL;
	uint16_t x323 = 17U;
	int8_t x324 = 1;
	volatile int32_t t71 = 48330;

	t71 = (x321*(x322<=(x323-x324)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = INT8_MIN;
	volatile int64_t x326 = 2061701051850715LL;
	static volatile int64_t x328 = INT64_MAX;

	t72 = (x325*(x326<=(x327-x328)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x329 = INT64_MIN;
	int16_t x330 = 0;
	static volatile int8_t x331 = INT8_MIN;
	uint8_t x332 = 59U;
	volatile int64_t t73 = -2831082966106LL;

	t73 = (x329*(x330<=(x331-x332)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x333 = UINT8_MAX;
	int64_t x334 = -95256062LL;
	int16_t x335 = -1;
	int8_t x336 = INT8_MAX;

	t74 = (x333*(x334<=(x335-x336)));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x337 = 8434283175703LL;
	int64_t x338 = 1LL;
	uint8_t x339 = UINT8_MAX;
	int64_t t75 = 17315LL;

	t75 = (x337*(x338<=(x339-x340)));

	if (t75 != 8434283175703LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x341 = -1;
	volatile uint8_t x342 = UINT8_MAX;
	int16_t x343 = 27;
	int32_t t76 = -544;

	t76 = (x341*(x342<=(x343-x344)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x345 = INT64_MIN;
	int64_t x346 = INT64_MIN;
	static volatile int64_t x348 = -335709362169LL;
	static int64_t t77 = -16617359018213671LL;

	t77 = (x345*(x346<=(x347-x348)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x349 = 4U;
	int16_t x350 = -1;
	int8_t x351 = -47;
	int64_t x352 = INT64_MIN;
	int32_t t78 = -3;

	t78 = (x349*(x350<=(x351-x352)));

	if (t78 != 4) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x353 = INT32_MIN;
	static int32_t x355 = 380;
	uint32_t x356 = 6U;
	volatile int32_t t79 = INT32_MIN;

	t79 = (x353*(x354<=(x355-x356)));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x357 = 27778556653391311LLU;
	int16_t x358 = -53;
	uint16_t x359 = UINT16_MAX;
	uint8_t x360 = UINT8_MAX;
	uint64_t t80 = 426393LLU;

	t80 = (x357*(x358<=(x359-x360)));

	if (t80 != 27778556653391311LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x365 = 3506592585872431574LL;
	uint8_t x367 = UINT8_MAX;
	uint8_t x368 = 37U;
	volatile int64_t t81 = 2LL;

	t81 = (x365*(x366<=(x367-x368)));

	if (t81 != 3506592585872431574LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x369 = INT16_MIN;
	uint16_t x370 = UINT16_MAX;
	uint64_t x371 = 5816496863688435675LLU;
	volatile uint64_t x372 = 68114859LLU;
	static int32_t t82 = 467203550;

	t82 = (x369*(x370<=(x371-x372)));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x373 = -1;
	uint16_t x374 = 9138U;
	int32_t x375 = INT32_MIN;
	int32_t t83 = -538345797;

	t83 = (x373*(x374<=(x375-x376)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x377 = INT16_MAX;
	int64_t x379 = INT64_MIN;
	int32_t x380 = -1;
	int32_t t84 = 859;

	t84 = (x377*(x378<=(x379-x380)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x381 = 25U;
	int32_t x382 = INT32_MAX;
	static int16_t x383 = -1;
	int32_t x384 = INT32_MAX;
	static volatile uint32_t t85 = 80789U;

	t85 = (x381*(x382<=(x383-x384)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = -1;
	uint16_t x386 = 50U;
	int32_t x387 = INT32_MIN;
	int64_t x388 = -1LL;
	static int32_t t86 = -680316;

	t86 = (x385*(x386<=(x387-x388)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x390 = 1746U;
	int64_t x391 = INT64_MIN;

	t87 = (x389*(x390<=(x391-x392)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x395 = INT8_MIN;
	volatile int32_t t88 = 1;

	t88 = (x393*(x394<=(x395-x396)));

	if (t88 != 171532) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x397 = 2495U;
	int64_t x398 = INT64_MIN;
	int8_t x399 = -1;
	int16_t x400 = 9;
	volatile int32_t t89 = -20146;

	t89 = (x397*(x398<=(x399-x400)));

	if (t89 != 2495) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x402 = -6287;
	uint8_t x403 = 31U;

	t90 = (x401*(x402<=(x403-x404)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x405 = -1;
	int32_t x406 = -1;
	volatile int32_t x407 = INT32_MAX;
	static uint16_t x408 = 4690U;
	volatile int32_t t91 = -69;

	t91 = (x405*(x406<=(x407-x408)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x409 = 7U;
	int16_t x410 = 6049;
	int8_t x411 = -1;
	static int32_t x412 = INT32_MIN;
	int32_t t92 = -800;

	t92 = (x409*(x410<=(x411-x412)));

	if (t92 != 7) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = -1;
	volatile int64_t x414 = 53503510573LL;
	int8_t x415 = -15;
	volatile uint32_t x416 = 6U;

	t93 = (x413*(x414<=(x415-x416)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x417 = -1;
	int64_t x419 = 12529153LL;
	static uint16_t x420 = 30928U;
	static volatile int32_t t94 = 19307;

	t94 = (x417*(x418<=(x419-x420)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x421 = UINT64_MAX;
	int16_t x422 = -1;
	static uint32_t x423 = UINT32_MAX;
	static int16_t x424 = 765;
	uint64_t t95 = 53495938LLU;

	t95 = (x421*(x422<=(x423-x424)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x426 = INT32_MIN;
	int8_t x427 = -1;
	int32_t x428 = 29;
	int32_t t96 = INT32_MIN;

	t96 = (x425*(x426<=(x427-x428)));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x433 = 69829U;
	static int16_t x434 = INT16_MIN;
	static int16_t x435 = INT16_MIN;
	static volatile uint8_t x436 = 15U;
	volatile uint32_t t97 = 5U;

	t97 = (x433*(x434<=(x435-x436)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x437 = -1;
	uint8_t x438 = UINT8_MAX;
	uint16_t x439 = 6616U;
	volatile int32_t t98 = 662643;

	t98 = (x437*(x438<=(x439-x440)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x442 = INT32_MIN;
	volatile int16_t x444 = -15;
	int32_t t99 = -8331407;

	t99 = (x441*(x442<=(x443-x444)));

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


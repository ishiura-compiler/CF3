#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x12 = INT16_MIN;
volatile int32_t x22 = INT32_MIN;
volatile uint8_t x25 = 3U;
int32_t t6 = -760214;
volatile int64_t x36 = INT64_MIN;
int16_t x39 = INT16_MAX;
int16_t x41 = -1;
static int32_t t10 = -1067805807;
static uint8_t x49 = 2U;
volatile int32_t t12 = -2002;
int32_t x63 = INT32_MIN;
int32_t x64 = INT32_MIN;
volatile int32_t x75 = 103827;
volatile int32_t t19 = 0;
int32_t x83 = 12;
volatile int32_t t20 = 21165;
volatile int8_t x85 = INT8_MIN;
int8_t x87 = -56;
int32_t x92 = INT32_MIN;
static uint64_t x99 = 196LLU;
uint16_t x101 = 45U;
int64_t x104 = INT64_MIN;
uint8_t x112 = UINT8_MAX;
uint32_t x124 = 3598321U;
int32_t x128 = 3;
int32_t t31 = 14559;
volatile int32_t t32 = 7171022;
uint32_t x133 = 332165078U;
volatile int64_t x136 = INT64_MIN;
int64_t x137 = -1650598779LL;
uint16_t x140 = 211U;
int8_t x151 = INT8_MAX;
int32_t x152 = -1168875;
int32_t x159 = INT32_MIN;
uint16_t x164 = 1U;
uint64_t x168 = 3613LLU;
static uint64_t x170 = UINT64_MAX;
int32_t t42 = 630243666;
int32_t t43 = -7950266;
int16_t x180 = INT16_MAX;
int32_t t44 = -803740054;
uint8_t x183 = 9U;
static volatile int32_t t45 = 120;
int32_t x189 = 12844387;
int8_t x194 = -1;
uint32_t x195 = UINT32_MAX;
uint64_t x197 = 103610313378607221LLU;
static int16_t x198 = -10854;
int8_t x201 = INT8_MAX;
uint16_t x212 = UINT16_MAX;
static uint16_t x214 = 351U;
int64_t x216 = 13579LL;
int32_t x218 = INT32_MIN;
int64_t x222 = 1644LL;
volatile int16_t x230 = -1;
volatile int32_t t56 = -42;
uint8_t x233 = 35U;
int32_t x240 = INT32_MAX;
uint64_t x245 = 5805973677441480LLU;
int32_t x249 = -26;
uint8_t x251 = UINT8_MAX;
uint32_t x256 = UINT32_MAX;
volatile int16_t x258 = INT16_MIN;
static volatile uint8_t x260 = 8U;
volatile int32_t t63 = 78;
int8_t x261 = INT8_MIN;
int64_t x269 = 32LL;
uint32_t x270 = UINT32_MAX;
int64_t x273 = INT64_MIN;
int64_t x276 = INT64_MIN;
int64_t x278 = -1593886233741480435LL;
uint8_t x279 = 1U;
int16_t x284 = 9;
int32_t x291 = INT32_MIN;
static uint64_t x292 = UINT64_MAX;
uint16_t x294 = 15U;
uint16_t x300 = UINT16_MAX;
volatile int32_t t74 = 3799752;
int32_t t75 = -527481;
int32_t t77 = 216319740;
int16_t x320 = 61;
uint16_t x323 = 1745U;
int64_t x327 = -1LL;
int32_t t80 = 154615;
int16_t x331 = INT16_MAX;
int8_t x336 = -2;
int32_t x341 = INT32_MAX;
int32_t x342 = INT32_MIN;
int32_t x343 = -1;
volatile int32_t t84 = 255;
uint32_t x345 = UINT32_MAX;
uint16_t x347 = 0U;
static int16_t x354 = 912;
int64_t x355 = INT64_MAX;
volatile uint64_t x358 = 18219LLU;
uint8_t x359 = 7U;
static volatile int32_t t88 = -1142;
uint8_t x363 = UINT8_MAX;
int64_t x365 = 6908LL;
int16_t x367 = INT16_MIN;
volatile uint16_t x370 = 1342U;
static int32_t x374 = INT32_MIN;
int32_t x381 = -1;
static volatile uint64_t x382 = 6LLU;
volatile int32_t t95 = -814035942;
int8_t x390 = INT8_MIN;
static int32_t x391 = -1;
static uint8_t x396 = UINT8_MAX;
volatile int32_t t97 = -12465394;
uint32_t x404 = 32780650U;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	uint64_t x2 = 59802LLU;
	uint8_t x3 = UINT8_MAX;
	int16_t x4 = -15378;
	static volatile int32_t t0 = 557;

	t0 = (x1<(x2+(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint16_t x6 = UINT16_MAX;
	uint32_t x7 = 1U;
	uint64_t x8 = 279965613629LLU;
	int32_t t1 = 0;

	t1 = (x5<(x6+(x7<=x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int32_t x10 = INT32_MAX;
	volatile int16_t x11 = -1;
	static volatile int32_t t2 = 9;

	t2 = (x9<(x10+(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	int32_t x14 = INT32_MIN;
	int8_t x15 = INT8_MIN;
	volatile uint32_t x16 = 42U;
	int32_t t3 = -236961;

	t3 = (x13<(x14+(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 1;
	int64_t x18 = 1515203696LL;
	uint64_t x19 = UINT64_MAX;
	int64_t x20 = 1376927559585224LL;
	volatile int32_t t4 = -259;

	t4 = (x17<(x18+(x19<=x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MAX;
	volatile int32_t x23 = INT32_MAX;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -17260;

	t5 = (x21<(x22+(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	int16_t x27 = -2607;
	int8_t x28 = INT8_MIN;

	t6 = (x25<(x26+(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	int32_t x30 = INT32_MIN;
	static int64_t x31 = -1LL;
	uint32_t x32 = UINT32_MAX;
	int32_t t7 = -137909;

	t7 = (x29<(x30+(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int32_t x34 = -1;
	int16_t x35 = INT16_MIN;
	int32_t t8 = 19507;

	t8 = (x33<(x34+(x35<=x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MAX;
	uint8_t x40 = 15U;
	volatile int32_t t9 = 0;

	t9 = (x37<(x38+(x39<=x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = UINT32_MAX;
	volatile int8_t x43 = 2;
	static int64_t x44 = 68050461867251330LL;

	t10 = (x41<(x42+(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	uint64_t x46 = 2493990939765566LLU;
	int32_t x47 = INT32_MIN;
	uint64_t x48 = 10281353546LLU;
	static volatile int32_t t11 = -2;

	t11 = (x45<(x46+(x47<=x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x50 = 735;
	static int64_t x51 = INT64_MIN;
	static int8_t x52 = INT8_MIN;

	t12 = (x49<(x50+(x51<=x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int16_t x54 = -11625;
	int64_t x55 = INT64_MAX;
	int8_t x56 = -1;
	static volatile int32_t t13 = 370498191;

	t13 = (x53<(x54+(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MAX;
	int64_t x58 = INT64_MIN;
	volatile uint8_t x59 = UINT8_MAX;
	int16_t x60 = -201;
	int32_t t14 = -6;

	t14 = (x57<(x58+(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 113U;
	uint8_t x62 = 1U;
	volatile int32_t t15 = -960403673;

	t15 = (x61<(x62+(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MAX;
	int16_t x66 = INT16_MIN;
	volatile int32_t x67 = -7970847;
	static int64_t x68 = INT64_MIN;
	volatile int32_t t16 = -308;

	t16 = (x65<(x66+(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 3799U;
	uint16_t x70 = 51U;
	volatile int8_t x71 = INT8_MAX;
	int8_t x72 = 1;
	static int32_t t17 = 11198700;

	t17 = (x69<(x70+(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int64_t x74 = INT64_MIN;
	volatile int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 188471920;

	t18 = (x73<(x74+(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = INT64_MAX;
	uint8_t x79 = UINT8_MAX;
	int8_t x80 = 0;

	t19 = (x77<(x78+(x79<=x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = -1LL;
	int32_t x84 = INT32_MIN;

	t20 = (x81<(x82+(x83<=x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = UINT8_MAX;
	uint32_t x88 = 1U;
	volatile int32_t t21 = 288;

	t21 = (x85<(x86+(x87<=x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 126089799U;
	int16_t x90 = INT16_MIN;
	int64_t x91 = -51397676LL;
	volatile int32_t t22 = 169403;

	t22 = (x89<(x90+(x91<=x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 2704LLU;
	static int16_t x94 = 2;
	volatile uint64_t x95 = UINT64_MAX;
	int8_t x96 = -48;
	int32_t t23 = 211011;

	t23 = (x93<(x94+(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	static uint32_t x98 = 1574501U;
	int8_t x100 = 2;
	volatile int32_t t24 = -91921;

	t24 = (x97<(x98+(x99<=x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = INT64_MIN;
	volatile uint16_t x103 = 1431U;
	static int32_t t25 = 13725;

	t25 = (x101<(x102+(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = INT16_MAX;
	uint64_t x106 = UINT64_MAX;
	volatile int64_t x107 = -22727683LL;
	int64_t x108 = -1LL;
	volatile int32_t t26 = -553;

	t26 = (x105<(x106+(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = 1053957235529LLU;
	int32_t x110 = 523232242;
	static int32_t x111 = -396820075;
	static volatile int32_t t27 = -12;

	t27 = (x109<(x110+(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	int64_t x114 = -1LL;
	uint8_t x115 = 14U;
	int16_t x116 = INT16_MAX;
	int32_t t28 = -10554381;

	t28 = (x113<(x114+(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MIN;
	volatile uint32_t x118 = UINT32_MAX;
	static int16_t x119 = 0;
	int32_t x120 = INT32_MAX;
	int32_t t29 = 138296;

	t29 = (x117<(x118+(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -79;
	int32_t x122 = -1;
	uint16_t x123 = 70U;
	int32_t t30 = -335;

	t30 = (x121<(x122+(x123<=x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = INT16_MIN;
	static int64_t x126 = INT64_MIN;
	int32_t x127 = INT32_MIN;

	t31 = (x125<(x126+(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	uint32_t x130 = UINT32_MAX;
	static int16_t x131 = INT16_MIN;
	int8_t x132 = INT8_MIN;

	t32 = (x129<(x130+(x131<=x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 4U;
	uint64_t x135 = 13094610832LLU;
	int32_t t33 = 0;

	t33 = (x133<(x134+(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = 3U;
	int32_t x139 = INT32_MAX;
	volatile int32_t t34 = -697057999;

	t34 = (x137<(x138+(x139<=x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 3U;
	volatile int64_t x142 = INT64_MIN;
	uint8_t x143 = 62U;
	int16_t x144 = -19;
	int32_t t35 = -579;

	t35 = (x141<(x142+(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	int16_t x146 = 12;
	int64_t x147 = -1LL;
	int32_t x148 = INT32_MIN;
	static volatile int32_t t36 = -3185166;

	t36 = (x145<(x146+(x147<=x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	static int32_t x150 = INT32_MIN;
	volatile int32_t t37 = -1359664;

	t37 = (x149<(x150+(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x153 = 3U;
	int8_t x154 = INT8_MIN;
	int16_t x155 = 235;
	uint64_t x156 = 5590LLU;
	int32_t t38 = 11;

	t38 = (x153<(x154+(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MAX;
	int16_t x158 = -1;
	int8_t x160 = 15;
	static volatile int32_t t39 = 8164;

	t39 = (x157<(x158+(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	static int32_t x162 = INT32_MIN;
	volatile int64_t x163 = -1LL;
	int32_t t40 = -2135848;

	t40 = (x161<(x162+(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	uint16_t x166 = 0U;
	int16_t x167 = INT16_MIN;
	volatile int32_t t41 = 247202;

	t41 = (x165<(x166+(x167<=x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	volatile uint16_t x171 = UINT16_MAX;
	uint64_t x172 = 353LLU;

	t42 = (x169<(x170+(x171<=x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	volatile int16_t x174 = INT16_MIN;
	volatile int16_t x175 = INT16_MIN;
	int64_t x176 = INT64_MIN;

	t43 = (x173<(x174+(x175<=x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = -1LL;
	int16_t x178 = 8;
	int64_t x179 = INT64_MAX;

	t44 = (x177<(x178+(x179<=x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x181 = INT32_MIN;
	int16_t x182 = 8084;
	static volatile int32_t x184 = -2081;

	t45 = (x181<(x182+(x183<=x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = 1;
	static volatile int16_t x186 = INT16_MAX;
	static int8_t x187 = INT8_MAX;
	uint16_t x188 = 8U;
	int32_t t46 = -3683;

	t46 = (x185<(x186+(x187<=x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x190 = 14235U;
	uint8_t x191 = 2U;
	static int64_t x192 = INT64_MIN;
	static int32_t t47 = 49707804;

	t47 = (x189<(x190+(x191<=x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	volatile uint8_t x196 = UINT8_MAX;
	int32_t t48 = -50160496;

	t48 = (x193<(x194+(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x199 = UINT64_MAX;
	int32_t x200 = -514;
	int32_t t49 = 16675;

	t49 = (x197<(x198+(x199<=x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x202 = UINT64_MAX;
	uint32_t x203 = UINT32_MAX;
	static int64_t x204 = INT64_MAX;
	int32_t t50 = -4782;

	t50 = (x201<(x202+(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MAX;
	volatile uint8_t x210 = UINT8_MAX;
	int16_t x211 = INT16_MIN;
	static volatile int32_t t51 = 253;

	t51 = (x209<(x210+(x211<=x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x213 = INT8_MIN;
	uint16_t x215 = UINT16_MAX;
	static int32_t t52 = -4;

	t52 = (x213<(x214+(x215<=x216)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x217 = INT16_MIN;
	static int64_t x219 = -1LL;
	int16_t x220 = INT16_MIN;
	static volatile int32_t t53 = -110743;

	t53 = (x217<(x218+(x219<=x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x221 = 14054;
	int64_t x223 = INT64_MIN;
	static int8_t x224 = INT8_MIN;
	volatile int32_t t54 = -2;

	t54 = (x221<(x222+(x223<=x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x225 = UINT64_MAX;
	static volatile int64_t x226 = INT64_MIN;
	uint64_t x227 = UINT64_MAX;
	uint8_t x228 = 19U;
	volatile int32_t t55 = 4;

	t55 = (x225<(x226+(x227<=x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MIN;
	int64_t x231 = -101016157LL;
	volatile int16_t x232 = INT16_MIN;

	t56 = (x229<(x230+(x231<=x232)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x234 = INT32_MIN;
	volatile uint16_t x235 = 3887U;
	static int64_t x236 = INT64_MIN;
	volatile int32_t t57 = -52;

	t57 = (x233<(x234+(x235<=x236)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = 106472LL;
	int32_t x238 = INT32_MIN;
	static volatile uint8_t x239 = UINT8_MAX;
	int32_t t58 = -7185;

	t58 = (x237<(x238+(x239<=x240)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = 1418;
	uint8_t x242 = UINT8_MAX;
	int8_t x243 = INT8_MAX;
	uint8_t x244 = 17U;
	int32_t t59 = 10947;

	t59 = (x241<(x242+(x243<=x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x246 = INT64_MIN;
	int64_t x247 = -21282909219240LL;
	int32_t x248 = -119849;
	volatile int32_t t60 = 350325;

	t60 = (x245<(x246+(x247<=x248)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x250 = 1770;
	volatile int16_t x252 = INT16_MIN;
	volatile int32_t t61 = 2;

	t61 = (x249<(x250+(x251<=x252)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = 16U;
	static int32_t x254 = INT32_MIN;
	volatile int8_t x255 = 19;
	static volatile int32_t t62 = -351;

	t62 = (x253<(x254+(x255<=x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x257 = UINT16_MAX;
	int32_t x259 = -1;

	t63 = (x257<(x258+(x259<=x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x262 = 178LLU;
	int8_t x263 = INT8_MIN;
	int64_t x264 = INT64_MAX;
	volatile int32_t t64 = 14971;

	t64 = (x261<(x262+(x263<=x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MIN;
	volatile int64_t x266 = INT64_MIN;
	uint8_t x267 = UINT8_MAX;
	int8_t x268 = INT8_MAX;
	int32_t t65 = -1;

	t65 = (x265<(x266+(x267<=x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x271 = 81911145802383LLU;
	int8_t x272 = -2;
	int32_t t66 = -102285;

	t66 = (x269<(x270+(x271<=x272)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x274 = 5938935665331LLU;
	int64_t x275 = INT64_MIN;
	int32_t t67 = -37;

	t67 = (x273<(x274+(x275<=x276)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x277 = -1;
	int16_t x280 = INT16_MIN;
	static volatile int32_t t68 = -106432;

	t68 = (x277<(x278+(x279<=x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = -1;
	uint32_t x282 = 113U;
	uint16_t x283 = 3U;
	int32_t t69 = 12341;

	t69 = (x281<(x282+(x283<=x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = 44466755907412LL;
	int32_t x286 = INT32_MIN;
	int8_t x287 = 26;
	volatile int8_t x288 = INT8_MIN;
	volatile int32_t t70 = -59753324;

	t70 = (x285<(x286+(x287<=x288)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = INT8_MIN;
	int64_t x290 = INT64_MIN;
	int32_t t71 = -12191971;

	t71 = (x289<(x290+(x291<=x292)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x293 = UINT8_MAX;
	uint64_t x295 = 3374540729572574982LLU;
	int64_t x296 = INT64_MAX;
	int32_t t72 = 4091436;

	t72 = (x293<(x294+(x295<=x296)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = 883403681182088LL;
	int64_t x299 = INT64_MIN;
	volatile int32_t t73 = 26;

	t73 = (x297<(x298+(x299<=x300)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x301 = 9U;
	uint16_t x302 = 98U;
	static uint8_t x303 = 13U;
	uint64_t x304 = UINT64_MAX;

	t74 = (x301<(x302+(x303<=x304)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = -1LL;
	int32_t x306 = INT32_MIN;
	static int32_t x307 = -133668241;
	int8_t x308 = 52;

	t75 = (x305<(x306+(x307<=x308)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = 1258109141163119LL;
	uint32_t x310 = 4994882U;
	uint32_t x311 = 11717U;
	volatile uint16_t x312 = UINT16_MAX;
	int32_t t76 = -153628;

	t76 = (x309<(x310+(x311<=x312)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x313 = INT32_MAX;
	uint8_t x314 = 30U;
	volatile uint16_t x315 = 234U;
	int32_t x316 = INT32_MAX;

	t77 = (x313<(x314+(x315<=x316)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = -1;
	static uint16_t x318 = 25U;
	int32_t x319 = INT32_MIN;
	volatile int32_t t78 = -22152;

	t78 = (x317<(x318+(x319<=x320)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x321 = 12LLU;
	static uint64_t x322 = 2LLU;
	volatile int32_t x324 = 26153010;
	int32_t t79 = -110720824;

	t79 = (x321<(x322+(x323<=x324)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x325 = 0U;
	int16_t x326 = -1;
	int16_t x328 = -1;

	t80 = (x325<(x326+(x327<=x328)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = -6;
	int8_t x330 = -6;
	static volatile int8_t x332 = INT8_MIN;
	static int32_t t81 = -24087508;

	t81 = (x329<(x330+(x331<=x332)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x333 = UINT64_MAX;
	volatile int64_t x334 = INT64_MIN;
	uint64_t x335 = 1LLU;
	static volatile int32_t t82 = 53906830;

	t82 = (x333<(x334+(x335<=x336)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x337 = 1;
	static uint16_t x338 = 11861U;
	int16_t x339 = -1229;
	int8_t x340 = INT8_MIN;
	volatile int32_t t83 = 13;

	t83 = (x337<(x338+(x339<=x340)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x344 = UINT64_MAX;

	t84 = (x341<(x342+(x343<=x344)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x346 = -1LL;
	int32_t x348 = 7;
	volatile int32_t t85 = 21593;

	t85 = (x345<(x346+(x347<=x348)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x349 = UINT8_MAX;
	static uint64_t x350 = 1117956LLU;
	uint16_t x351 = 9U;
	uint16_t x352 = 1U;
	static int32_t t86 = 15792;

	t86 = (x349<(x350+(x351<=x352)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = 0;
	static int8_t x356 = 14;
	int32_t t87 = -19541;

	t87 = (x353<(x354+(x355<=x356)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x357 = UINT16_MAX;
	int32_t x360 = INT32_MIN;

	t88 = (x357<(x358+(x359<=x360)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = INT64_MAX;
	static volatile int64_t x362 = -129111175104444LL;
	volatile int16_t x364 = INT16_MIN;
	volatile int32_t t89 = -156;

	t89 = (x361<(x362+(x363<=x364)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x366 = INT16_MIN;
	int64_t x368 = 662757495059860081LL;
	volatile int32_t t90 = -25694;

	t90 = (x365<(x366+(x367<=x368)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = 20;
	int8_t x371 = -1;
	int32_t x372 = -1;
	int32_t t91 = -82;

	t91 = (x369<(x370+(x371<=x372)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x373 = 572704418386260446LLU;
	volatile int32_t x375 = INT32_MIN;
	int32_t x376 = -1;
	int32_t t92 = 1;

	t92 = (x373<(x374+(x375<=x376)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = INT8_MIN;
	volatile int16_t x378 = INT16_MAX;
	uint64_t x379 = UINT64_MAX;
	static uint16_t x380 = 4U;
	volatile int32_t t93 = 199;

	t93 = (x377<(x378+(x379<=x380)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x383 = -1;
	uint32_t x384 = 0U;
	int32_t t94 = 758;

	t94 = (x381<(x382+(x383<=x384)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x385 = 9;
	uint16_t x386 = 54U;
	int16_t x387 = INT16_MAX;
	volatile int8_t x388 = -1;

	t95 = (x385<(x386+(x387<=x388)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x389 = 73135513U;
	volatile int32_t x392 = INT32_MIN;
	int32_t t96 = -940712619;

	t96 = (x389<(x390+(x391<=x392)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = INT32_MAX;
	static int64_t x394 = -1LL;
	uint64_t x395 = 996260288LLU;

	t97 = (x393<(x394+(x395<=x396)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x397 = UINT8_MAX;
	uint16_t x398 = 4081U;
	int8_t x399 = 2;
	static uint32_t x400 = UINT32_MAX;
	int32_t t98 = -492;

	t98 = (x397<(x398+(x399<=x400)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = INT64_MIN;
	int16_t x402 = INT16_MIN;
	int32_t x403 = INT32_MAX;
	int32_t t99 = -29;

	t99 = (x401<(x402+(x403<=x404)));

	if (t99 != 1) { NG(); } else { ; }
	
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


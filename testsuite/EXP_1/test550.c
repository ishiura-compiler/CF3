#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = -1LL;
int16_t x15 = INT16_MIN;
volatile int8_t x18 = -1;
volatile int64_t x22 = INT64_MIN;
static uint32_t x26 = 377279U;
int8_t x32 = INT8_MAX;
int8_t x34 = -1;
volatile int64_t t7 = -860699421LL;
int32_t x37 = -1;
int16_t x40 = INT16_MAX;
int64_t x44 = 7026511076009LL;
int64_t x57 = INT64_MAX;
int8_t x58 = INT8_MIN;
int64_t x69 = INT64_MIN;
int16_t x76 = 2632;
volatile int64_t t18 = 311463771966800077LL;
int32_t x83 = INT32_MIN;
uint16_t x84 = UINT16_MAX;
int8_t x86 = INT8_MIN;
uint16_t x89 = UINT16_MAX;
int32_t x91 = INT32_MAX;
int32_t t21 = -98156;
uint32_t x95 = 3U;
volatile uint32_t t22 = 0U;
volatile uint32_t t23 = 2U;
int64_t x101 = 912453LL;
int64_t x104 = -1LL;
int32_t x105 = INT32_MIN;
static volatile int32_t x110 = INT32_MAX;
int32_t x111 = -1;
static int64_t x115 = INT64_MIN;
int64_t t27 = -1399LL;
volatile int64_t t29 = 147736035755866028LL;
int64_t x126 = INT64_MAX;
static volatile int64_t t30 = 5339797471689LL;
int16_t x130 = INT16_MIN;
static uint32_t x131 = UINT32_MAX;
int16_t x134 = INT16_MAX;
int8_t x138 = -1;
uint8_t x147 = 21U;
static int32_t x149 = 456289810;
int8_t x152 = INT8_MAX;
int32_t t36 = 317561;
uint64_t x155 = 762388952LLU;
uint64_t t40 = 527LLU;
int32_t x192 = -7;
volatile int8_t x194 = 1;
int64_t x205 = -1LL;
volatile uint16_t x214 = UINT16_MAX;
volatile int32_t x219 = 58741270;
volatile int64_t x223 = -304LL;
uint64_t x226 = UINT64_MAX;
static int32_t x234 = -1;
static int64_t x235 = 2038LL;
int8_t x236 = INT8_MAX;
static volatile uint64_t t54 = 22202552839LLU;
int16_t x242 = INT16_MIN;
int64_t x247 = -1LL;
static volatile uint32_t x251 = 34U;
int8_t x255 = INT8_MIN;
int32_t t58 = -118785949;
uint8_t x264 = UINT8_MAX;
static int64_t x271 = INT64_MIN;
static int16_t x280 = INT16_MIN;
int32_t t64 = 14548;
static int8_t x287 = -1;
static int32_t x304 = -482;
int32_t x309 = INT32_MIN;
static uint8_t x314 = UINT8_MAX;
uint8_t x315 = 3U;
volatile int8_t x317 = INT8_MIN;
volatile int64_t t75 = -577292923LL;
int16_t x328 = INT16_MIN;
volatile uint64_t t78 = 39145484LLU;
volatile uint8_t x340 = 21U;
int32_t t79 = -11;
static int64_t x345 = INT64_MAX;
static int8_t x349 = -1;
uint16_t x352 = 2U;
volatile uint64_t t82 = 234722541034LLU;
volatile int32_t t83 = -258737279;
volatile uint64_t t84 = 5260269001LLU;
static uint64_t t86 = 489LLU;
uint32_t x374 = 378826854U;
int16_t x375 = -1;
volatile uint64_t x380 = 2786938797LLU;
uint16_t x381 = UINT16_MAX;
int32_t x383 = 8073;
static uint32_t x390 = 742290888U;
int16_t x393 = INT16_MIN;
int32_t x397 = -1;
int32_t x398 = INT32_MIN;
volatile uint64_t t93 = 252257030611LLU;
volatile uint16_t x411 = 1769U;
volatile int32_t x425 = INT32_MIN;
uint64_t t99 = 17356852336715LLU;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	static int8_t x2 = 2;
	int64_t x3 = -97499614868670LL;
	int32_t x4 = -1;
	static volatile int64_t t0 = -14LL;

	t0 = (((x1/x2)/x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 5308;
	uint32_t x6 = 91535U;
	volatile uint64_t x7 = 9LLU;
	volatile uint64_t t1 = 2LLU;

	t1 = (((x5/x6)/x7)/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x13 = 826U;
	int16_t x14 = -1;
	int32_t x16 = -1;
	static int32_t t2 = -31814865;

	t2 = (((x13/x14)/x15)/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x17 = UINT32_MAX;
	int64_t x19 = -1657LL;
	uint16_t x20 = 5521U;
	int64_t t3 = 935534361003919LL;

	t3 = (((x17/x18)/x19)/x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 1;
	static int8_t x23 = INT8_MIN;
	static uint8_t x24 = 4U;
	static volatile int64_t t4 = 6585LL;

	t4 = (((x21/x22)/x23)/x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = -1;
	static int16_t x27 = -1;
	int8_t x28 = INT8_MAX;
	uint32_t t5 = 31999345U;

	t5 = (((x25/x26)/x27)/x28);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	static int16_t x30 = 12200;
	int32_t x31 = 542143;
	static volatile int32_t t6 = 1;

	t6 = (((x29/x30)/x31)/x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = -3225;
	int64_t x35 = INT64_MIN;
	int32_t x36 = -1;

	t7 = (((x33/x34)/x35)/x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = 1905373840018752LL;
	int16_t x39 = -1;
	int64_t t8 = 0LL;

	t8 = (((x37/x38)/x39)/x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -91;
	static int32_t x42 = -530690542;
	int64_t x43 = 40063LL;
	int64_t t9 = 1102323819346854LL;

	t9 = (((x41/x42)/x43)/x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 368950158285294LLU;
	int16_t x46 = -1;
	int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MIN;
	static uint64_t t10 = 35LLU;

	t10 = (((x45/x46)/x47)/x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x49 = 1550556623767LLU;
	static uint64_t x50 = 7863LLU;
	volatile int64_t x51 = -7358LL;
	uint32_t x52 = 267607U;
	volatile uint64_t t11 = 13369877LLU;

	t11 = (((x49/x50)/x51)/x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -1;
	int32_t x54 = INT32_MIN;
	uint16_t x55 = 13744U;
	int8_t x56 = 1;
	static volatile int32_t t12 = -49336;

	t12 = (((x53/x54)/x55)/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x59 = -1;
	uint16_t x60 = 365U;
	volatile int64_t t13 = -45LL;

	t13 = (((x57/x58)/x59)/x60);

	if (t13 != 197418065857336LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = 135;
	uint64_t x62 = 2161802346515LLU;
	int64_t x63 = -1424370928812612356LL;
	int8_t x64 = 9;
	uint64_t t14 = 153LLU;

	t14 = (((x61/x62)/x63)/x64);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	static uint32_t x66 = UINT32_MAX;
	static int32_t x67 = 350;
	int64_t x68 = 440810886895440055LL;
	int64_t t15 = -28863401982101675LL;

	t15 = (((x65/x66)/x67)/x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x70 = 26864287LLU;
	static int64_t x71 = -1LL;
	uint8_t x72 = 34U;
	uint64_t t16 = 1LLU;

	t16 = (((x69/x70)/x71)/x72);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MAX;
	volatile uint64_t t17 = 54LLU;

	t17 = (((x73/x74)/x75)/x76);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = -2;
	int8_t x79 = -1;
	int64_t x80 = -1LL;

	t18 = (((x77/x78)/x79)/x80);

	if (t18 != 16384LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 1;
	int8_t x82 = INT8_MAX;
	volatile int32_t t19 = -2285;

	t19 = (((x81/x82)/x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = INT8_MIN;
	uint16_t x87 = UINT16_MAX;
	int32_t x88 = -1;
	volatile int32_t t20 = -4;

	t20 = (((x85/x86)/x87)/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x90 = INT32_MAX;
	volatile int8_t x92 = INT8_MIN;

	t21 = (((x89/x90)/x91)/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x93 = 56U;
	int8_t x94 = INT8_MIN;
	static uint8_t x96 = 22U;

	t22 = (((x93/x94)/x95)/x96);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = -1;
	uint8_t x98 = UINT8_MAX;
	uint32_t x99 = 945354541U;
	int32_t x100 = INT32_MAX;

	t23 = (((x97/x98)/x99)/x100);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x102 = INT64_MIN;
	int64_t x103 = -1LL;
	int64_t t24 = 0LL;

	t24 = (((x101/x102)/x103)/x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x106 = -250;
	int16_t x107 = INT16_MIN;
	volatile int8_t x108 = -1;
	static int32_t t25 = -53024;

	t25 = (((x105/x106)/x107)/x108);

	if (t25 != 262) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 3130LLU;
	int8_t x112 = INT8_MIN;
	volatile uint64_t t26 = 271869LLU;

	t26 = (((x109/x110)/x111)/x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MAX;
	static int32_t x114 = INT32_MIN;
	uint8_t x116 = 1U;

	t27 = (((x113/x114)/x115)/x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -1063908831365LL;
	int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MIN;
	int16_t x120 = INT16_MIN;
	int64_t t28 = 27LL;

	t28 = (((x117/x118)/x119)/x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = 9;
	int32_t x122 = INT32_MIN;
	int64_t x123 = INT64_MAX;
	int16_t x124 = INT16_MIN;

	t29 = (((x121/x122)/x123)/x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 655919531U;
	static int64_t x127 = INT64_MAX;
	int64_t x128 = -1LL;

	t30 = (((x125/x126)/x127)/x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	uint32_t x132 = 999U;
	static uint32_t t31 = 208758865U;

	t31 = (((x129/x130)/x131)/x132);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -1;
	int64_t x135 = INT64_MAX;
	int8_t x136 = INT8_MIN;
	int64_t t32 = -738160456LL;

	t32 = (((x133/x134)/x135)/x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x137 = INT8_MIN;
	int32_t x139 = -152;
	volatile uint16_t x140 = UINT16_MAX;
	volatile int32_t t33 = -12913500;

	t33 = (((x137/x138)/x139)/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = 48258116U;
	int64_t x142 = INT64_MIN;
	uint8_t x143 = 2U;
	int16_t x144 = -1;
	volatile int64_t t34 = -15338429791027786LL;

	t34 = (((x141/x142)/x143)/x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x145 = -1;
	int8_t x146 = INT8_MAX;
	int16_t x148 = 75;
	static volatile int32_t t35 = -962814772;

	t35 = (((x145/x146)/x147)/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x150 = INT32_MAX;
	static uint16_t x151 = UINT16_MAX;

	t36 = (((x149/x150)/x151)/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	static int64_t x154 = -1LL;
	volatile uint64_t x156 = UINT64_MAX;
	uint64_t t37 = 5002068326510LLU;

	t37 = (((x153/x154)/x155)/x156);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = 0;
	int32_t x158 = INT32_MIN;
	int16_t x159 = 62;
	static volatile int64_t x160 = INT64_MIN;
	volatile int64_t t38 = -6561146LL;

	t38 = (((x157/x158)/x159)/x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MIN;
	uint32_t x162 = UINT32_MAX;
	int16_t x163 = INT16_MIN;
	int16_t x164 = INT16_MIN;
	volatile int64_t t39 = 7477159277124LL;

	t39 = (((x161/x162)/x163)/x164);

	if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 10U;
	int8_t x166 = -1;
	static uint8_t x167 = 84U;
	uint64_t x168 = 1022906846978LLU;

	t40 = (((x165/x166)/x167)/x168);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MAX;
	int64_t x174 = INT64_MAX;
	static int64_t x175 = INT64_MIN;
	int32_t x176 = INT32_MAX;
	static volatile int64_t t41 = -96LL;

	t41 = (((x173/x174)/x175)/x176);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = 0U;
	uint8_t x182 = 93U;
	int8_t x183 = INT8_MAX;
	uint64_t x184 = 11563829LLU;
	uint64_t t42 = 10293293463128402LLU;

	t42 = (((x181/x182)/x183)/x184);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = UINT16_MAX;
	uint8_t x186 = 1U;
	static uint8_t x187 = 12U;
	int8_t x188 = INT8_MIN;
	int32_t t43 = -34773;

	t43 = (((x185/x186)/x187)/x188);

	if (t43 != -42) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = INT64_MIN;
	uint8_t x190 = UINT8_MAX;
	volatile int64_t x191 = INT64_MIN;
	volatile int64_t t44 = -31119LL;

	t44 = (((x189/x190)/x191)/x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x193 = INT64_MAX;
	volatile uint32_t x195 = 22U;
	volatile int8_t x196 = INT8_MAX;
	static int64_t t45 = 68579486160877042LL;

	t45 = (((x193/x194)/x195)/x196);

	if (t45 != 3301135303097629LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = -1;
	uint64_t x198 = UINT64_MAX;
	int8_t x199 = INT8_MAX;
	int32_t x200 = INT32_MAX;
	static volatile uint64_t t46 = 26353035328198LLU;

	t46 = (((x197/x198)/x199)/x200);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x206 = 32U;
	uint8_t x207 = 9U;
	int64_t x208 = INT64_MIN;
	int64_t t47 = 8401271728LL;

	t47 = (((x205/x206)/x207)/x208);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = INT64_MIN;
	uint8_t x211 = 3U;
	int8_t x212 = INT8_MIN;
	volatile int64_t t48 = -80815984LL;

	t48 = (((x209/x210)/x211)/x212);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x213 = 2U;
	uint64_t x215 = UINT64_MAX;
	static int16_t x216 = INT16_MIN;
	uint64_t t49 = 906LLU;

	t49 = (((x213/x214)/x215)/x216);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = -502;
	uint32_t x218 = UINT32_MAX;
	int16_t x220 = -375;
	volatile uint32_t t50 = 5522U;

	t50 = (((x217/x218)/x219)/x220);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MIN;
	int64_t x224 = INT64_MIN;
	volatile int64_t t51 = 313526240643LL;

	t51 = (((x221/x222)/x223)/x224);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x225 = INT32_MIN;
	static int32_t x227 = -35;
	int8_t x228 = INT8_MIN;
	uint64_t t52 = 55623216228892LLU;

	t52 = (((x225/x226)/x227)/x228);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = -5;
	static int64_t t53 = -28796964LL;

	t53 = (((x233/x234)/x235)/x236);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x237 = INT16_MIN;
	volatile uint64_t x238 = UINT64_MAX;
	int32_t x239 = 15772805;
	volatile int16_t x240 = 23;

	t54 = (((x237/x238)/x239)/x240);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = -1;
	int8_t x243 = INT8_MIN;
	volatile uint16_t x244 = UINT16_MAX;
	volatile int32_t t55 = 20136484;

	t55 = (((x241/x242)/x243)/x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = 1;
	int16_t x246 = INT16_MIN;
	int16_t x248 = 7141;
	volatile int64_t t56 = 38856558LL;

	t56 = (((x245/x246)/x247)/x248);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = -1LL;
	static int16_t x250 = INT16_MIN;
	static volatile int32_t x252 = INT32_MIN;
	volatile int64_t t57 = 7567545773LL;

	t57 = (((x249/x250)/x251)/x252);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x253 = -1;
	int32_t x254 = INT32_MIN;
	static int16_t x256 = INT16_MIN;

	t58 = (((x253/x254)/x255)/x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x257 = 31507LLU;
	int16_t x258 = INT16_MAX;
	uint64_t x259 = 1307263220772996LLU;
	uint64_t x260 = 223615595714488952LLU;
	volatile uint64_t t59 = 131775880710LLU;

	t59 = (((x257/x258)/x259)/x260);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MIN;
	static int32_t x262 = INT32_MIN;
	static uint32_t x263 = 1208162U;
	uint32_t t60 = 922251422U;

	t60 = (((x261/x262)/x263)/x264);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = 1;
	int32_t x267 = INT32_MIN;
	uint64_t x268 = 268244361385LLU;
	volatile uint64_t t61 = 48390362LLU;

	t61 = (((x265/x266)/x267)/x268);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x269 = UINT16_MAX;
	uint16_t x270 = UINT16_MAX;
	int32_t x272 = INT32_MAX;
	static volatile int64_t t62 = -264LL;

	t62 = (((x269/x270)/x271)/x272);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = -1;
	uint64_t x274 = 18581140232897074LLU;
	int64_t x275 = INT64_MIN;
	volatile uint16_t x276 = 1806U;
	volatile uint64_t t63 = 1919885773087158063LLU;

	t63 = (((x273/x274)/x275)/x276);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = INT32_MIN;
	uint16_t x278 = 516U;
	int16_t x279 = -7570;

	t64 = (((x277/x278)/x279)/x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x281 = -1;
	uint32_t x282 = UINT32_MAX;
	volatile uint16_t x283 = UINT16_MAX;
	volatile int64_t x284 = -6LL;
	int64_t t65 = 19314LL;

	t65 = (((x281/x282)/x283)/x284);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = 6522;
	uint32_t x286 = 85466150U;
	int8_t x288 = 1;
	volatile uint32_t t66 = 60U;

	t66 = (((x285/x286)/x287)/x288);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x289 = 615;
	uint32_t x290 = 459131U;
	int64_t x291 = INT64_MAX;
	volatile uint16_t x292 = 26U;
	volatile int64_t t67 = -12410911118LL;

	t67 = (((x289/x290)/x291)/x292);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = -1LL;
	int8_t x294 = INT8_MAX;
	int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MAX;
	volatile int64_t t68 = 94447610480729LL;

	t68 = (((x293/x294)/x295)/x296);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x297 = 62419273LLU;
	uint64_t x298 = UINT64_MAX;
	int32_t x299 = INT32_MIN;
	static int64_t x300 = -1LL;
	uint64_t t69 = 10227050186LLU;

	t69 = (((x297/x298)/x299)/x300);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = INT32_MAX;
	static uint64_t x302 = 60316LLU;
	int64_t x303 = -61LL;
	volatile uint64_t t70 = 2860284294200786969LLU;

	t70 = (((x301/x302)/x303)/x304);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = INT64_MIN;
	static volatile int16_t x306 = INT16_MIN;
	uint16_t x307 = 1748U;
	int16_t x308 = INT16_MAX;
	volatile int64_t t71 = 0LL;

	t71 = (((x305/x306)/x307)/x308);

	if (t71 != 4914300LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x310 = 58068442427LLU;
	static int64_t x311 = INT64_MAX;
	int32_t x312 = -33173;
	static volatile uint64_t t72 = 220725LLU;

	t72 = (((x309/x310)/x311)/x312);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = -11698814067LL;
	volatile uint16_t x316 = 22763U;
	volatile int64_t t73 = 1025374903556035LL;

	t73 = (((x313/x314)/x315)/x316);

	if (t73 != -671LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x318 = INT32_MIN;
	uint16_t x319 = 1U;
	uint32_t x320 = UINT32_MAX;
	static volatile uint32_t t74 = 158420U;

	t74 = (((x317/x318)/x319)/x320);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = -1LL;
	static int64_t x322 = -761761LL;
	int16_t x323 = -1;
	int32_t x324 = -1;

	t75 = (((x321/x322)/x323)/x324);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = 106205663581608984LL;
	uint32_t x326 = 15495223U;
	int64_t x327 = -1LL;
	volatile int64_t t76 = 160181930962LL;

	t76 = (((x325/x326)/x327)/x328);

	if (t76 != 209170LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = INT32_MAX;
	volatile int8_t x330 = INT8_MAX;
	int64_t x331 = INT64_MAX;
	int16_t x332 = -1;
	int64_t t77 = -390366088279LL;

	t77 = (((x329/x330)/x331)/x332);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = UINT64_MAX;
	int32_t x334 = INT32_MAX;
	uint8_t x335 = UINT8_MAX;
	uint32_t x336 = 2711833U;

	t78 = (((x333/x334)/x335)/x336);

	if (t78 != 12LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MIN;
	uint8_t x338 = 1U;
	int8_t x339 = -5;

	t79 = (((x337/x338)/x339)/x340);

	if (t79 != 312) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x341 = UINT16_MAX;
	int8_t x342 = INT8_MIN;
	volatile int32_t x343 = 96700;
	int64_t x344 = INT64_MAX;
	int64_t t80 = 4479464415669329LL;

	t80 = (((x341/x342)/x343)/x344);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x346 = 19045U;
	uint16_t x347 = UINT16_MAX;
	static uint16_t x348 = 8009U;
	volatile int64_t t81 = 88229332908783LL;

	t81 = (((x345/x346)/x347)/x348);

	if (t81 != 922692LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = 9323619615538652LL;

	t82 = (((x349/x350)/x351)/x352);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x353 = UINT16_MAX;
	int8_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	volatile uint8_t x356 = UINT8_MAX;

	t83 = (((x353/x354)/x355)/x356);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x357 = 40U;
	uint64_t x358 = 1872237152062249579LLU;
	static uint32_t x359 = 1445046017U;
	uint32_t x360 = UINT32_MAX;

	t84 = (((x357/x358)/x359)/x360);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = 7;
	int32_t x362 = 10789127;
	int32_t x363 = INT32_MAX;
	int32_t x364 = -1;
	volatile int32_t t85 = -15167948;

	t85 = (((x361/x362)/x363)/x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x369 = INT64_MIN;
	uint16_t x370 = UINT16_MAX;
	volatile uint64_t x371 = UINT64_MAX;
	int32_t x372 = -1;

	t86 = (((x369/x370)/x371)/x372);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x373 = 17;
	static volatile uint64_t x376 = 33LLU;
	static volatile uint64_t t87 = 170337LLU;

	t87 = (((x373/x374)/x375)/x376);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x377 = 2U;
	int32_t x378 = -672971;
	int64_t x379 = 2151459803182691LL;
	static volatile uint64_t t88 = 23636LLU;

	t88 = (((x377/x378)/x379)/x380);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x382 = UINT8_MAX;
	int64_t x384 = INT64_MIN;
	int64_t t89 = 2448582125LL;

	t89 = (((x381/x382)/x383)/x384);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = INT32_MIN;
	uint16_t x391 = 200U;
	static volatile int64_t x392 = INT64_MAX;
	static volatile int64_t t90 = -34860LL;

	t90 = (((x389/x390)/x391)/x392);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x394 = -1LL;
	static int8_t x395 = INT8_MIN;
	uint64_t x396 = 43496939LLU;
	static volatile uint64_t t91 = 34285673362297LLU;

	t91 = (((x393/x394)/x395)/x396);

	if (t91 != 424092924647LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x399 = INT64_MAX;
	uint16_t x400 = UINT16_MAX;
	volatile int64_t t92 = -30363763028528LL;

	t92 = (((x397/x398)/x399)/x400);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = INT8_MAX;
	int32_t x402 = -1;
	uint8_t x403 = 19U;
	uint64_t x404 = 637981687LLU;

	t93 = (((x401/x402)/x403)/x404);

	if (t93 != 28914221911LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x405 = INT64_MIN;
	int8_t x406 = -13;
	int16_t x407 = INT16_MIN;
	volatile int64_t x408 = 7760166823565LL;
	static volatile int64_t t94 = -169041532037LL;

	t94 = (((x405/x406)/x407)/x408);

	if (t94 != -2LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x409 = INT64_MIN;
	int32_t x410 = INT32_MAX;
	int32_t x412 = -1;
	int64_t t95 = 1104061529985960695LL;

	t95 = (((x409/x410)/x411)/x412);

	if (t95 != 2427906LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x413 = 7125336U;
	static int64_t x414 = INT64_MAX;
	int16_t x415 = -1;
	volatile uint32_t x416 = 3024062U;
	volatile int64_t t96 = -14855819273254LL;

	t96 = (((x413/x414)/x415)/x416);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x417 = INT16_MIN;
	volatile int8_t x418 = -1;
	volatile int32_t x419 = -860;
	int16_t x420 = 1;
	static volatile int32_t t97 = 0;

	t97 = (((x417/x418)/x419)/x420);

	if (t97 != -38) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = INT16_MAX;
	uint64_t x422 = UINT64_MAX;
	int8_t x423 = INT8_MIN;
	volatile uint32_t x424 = 1U;
	uint64_t t98 = 25915LLU;

	t98 = (((x421/x422)/x423)/x424);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x426 = UINT64_MAX;
	int64_t x427 = INT64_MAX;
	static int8_t x428 = INT8_MIN;

	t99 = (((x425/x426)/x427)/x428);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


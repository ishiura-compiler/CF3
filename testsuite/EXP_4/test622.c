#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MIN;
int32_t t0 = -34;
volatile uint16_t x10 = 0U;
static volatile uint32_t x11 = 285703786U;
uint8_t x17 = 23U;
int64_t x31 = -1LL;
int64_t x32 = 267574029395LL;
volatile uint64_t t8 = 116431164LLU;
int32_t x40 = -735855;
int32_t x45 = INT32_MAX;
static int16_t x53 = INT16_MIN;
volatile int16_t x56 = -13;
static uint64_t x58 = 48336093538855LLU;
uint8_t x59 = 65U;
uint64_t x62 = 230497992346LLU;
volatile int32_t t15 = -74400257;
int32_t x73 = -24;
volatile int32_t t17 = 15;
int32_t t18 = 3;
static int32_t t19 = 327815866;
uint32_t x90 = UINT32_MAX;
int64_t x91 = INT64_MAX;
volatile int8_t x92 = -1;
static uint32_t x93 = 11U;
uint32_t x98 = UINT32_MAX;
int8_t x104 = INT8_MIN;
int32_t t24 = -345;
int8_t x106 = INT8_MIN;
int32_t x110 = INT32_MIN;
int64_t x111 = INT64_MIN;
uint8_t x113 = 2U;
int64_t x117 = -8LL;
int32_t x119 = INT32_MIN;
int32_t x124 = 6;
int8_t x128 = 22;
static volatile int16_t x130 = INT16_MIN;
volatile uint8_t x132 = 2U;
uint32_t x136 = 8028U;
uint8_t x142 = 6U;
volatile uint64_t x144 = UINT64_MAX;
int64_t x147 = -1LL;
int64_t x158 = INT64_MAX;
int8_t x159 = INT8_MIN;
int32_t x181 = INT32_MAX;
int32_t x185 = INT32_MIN;
int16_t x188 = -15;
int8_t x196 = -1;
volatile uint64_t t47 = 81202390LLU;
int32_t x197 = INT32_MIN;
int32_t x199 = 22091;
uint64_t x203 = 16192856534640148LLU;
int64_t x207 = -1LL;
static int16_t x208 = INT16_MIN;
int8_t x214 = 38;
volatile uint8_t x219 = UINT8_MAX;
uint32_t x220 = 12686U;
int32_t t54 = -2076868;
int8_t x231 = INT8_MIN;
static int32_t x232 = INT32_MIN;
uint32_t x250 = UINT32_MAX;
int16_t x253 = -6;
int64_t x265 = -1163114136087806LL;
int16_t x268 = INT16_MIN;
uint64_t x272 = 34580753645075717LLU;
volatile int64_t t66 = 18351LL;
int8_t x286 = INT8_MIN;
int8_t x287 = INT8_MIN;
int32_t x302 = INT32_MIN;
int16_t x303 = INT16_MIN;
static int16_t x308 = 47;
uint32_t x309 = 650762656U;
int8_t x310 = INT8_MIN;
static int64_t x326 = INT64_MIN;
int16_t x328 = -6830;
int32_t x332 = -1;
int64_t x341 = -77631384596746180LL;
int32_t x345 = INT32_MAX;
volatile int32_t t81 = -229449770;
volatile uint32_t x353 = 89U;
static uint32_t t83 = 353688612U;
int16_t x360 = INT16_MAX;
uint64_t t84 = 10702609861642LLU;
int16_t x366 = INT16_MIN;
uint8_t x368 = 20U;
int16_t x378 = INT16_MAX;
static uint8_t x384 = 10U;
volatile int32_t t89 = 1146;
volatile uint32_t t92 = 1U;
volatile uint8_t x397 = 86U;
static volatile uint32_t x399 = 284233446U;
int32_t x400 = INT32_MIN;
static int16_t x416 = INT16_MIN;
int64_t x419 = -24897143724LL;
int32_t x423 = 21295;
int16_t x424 = INT16_MIN;
int32_t t99 = -369785;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	static uint32_t x2 = 6280U;
	volatile uint16_t x4 = 1U;

	t0 = (x1&(x2<(x3/x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 23571U;
	int8_t x6 = INT8_MIN;
	volatile uint8_t x7 = 1U;
	static int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 2641428;

	t1 = (x5&(x6<(x7/x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 1;
	uint64_t x12 = 148LLU;
	static volatile int32_t t2 = -12337;

	t2 = (x9&(x10<(x11/x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -384LL;
	uint16_t x14 = 24U;
	int64_t x15 = INT64_MIN;
	int8_t x16 = -38;
	int64_t t3 = 84183806LL;

	t3 = (x13&(x14<(x15/x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MAX;
	int64_t x19 = -1LL;
	uint8_t x20 = 118U;
	volatile int32_t t4 = 0;

	t4 = (x17&(x18<(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	int16_t x22 = INT16_MIN;
	uint8_t x23 = UINT8_MAX;
	int8_t x24 = -1;
	volatile int32_t t5 = -440267;

	t5 = (x21&(x22<(x23/x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MAX;
	static uint64_t x26 = 5LLU;
	uint16_t x27 = 788U;
	int64_t x28 = -29997900905541503LL;
	int32_t t6 = -10991;

	t6 = (x25&(x26<(x27/x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 12468613282635123LL;
	static int32_t x30 = 1;
	int64_t t7 = -8488584679649268LL;

	t7 = (x29&(x30<(x31/x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 498099881719214626LLU;
	int64_t x34 = -1LL;
	static int64_t x35 = 5918484LL;
	int64_t x36 = -186383050729552LL;

	t8 = (x33&(x34<(x35/x36)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 25432442453971LLU;
	int32_t x38 = -1;
	int8_t x39 = INT8_MAX;
	static uint64_t t9 = 9LLU;

	t9 = (x37&(x38<(x39/x40)));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 1;
	static volatile int64_t x42 = INT64_MIN;
	int8_t x43 = -1;
	int32_t x44 = INT32_MIN;
	int32_t t10 = 81;

	t10 = (x41&(x42<(x43/x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 11649469U;
	uint16_t x47 = 51U;
	volatile int16_t x48 = INT16_MIN;
	int32_t t11 = -2541430;

	t11 = (x45&(x46<(x47/x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = 30301;
	int32_t x50 = -438220;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = -2580;

	t12 = (x49&(x50<(x51/x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x54 = INT64_MAX;
	volatile uint32_t x55 = 345U;
	int32_t t13 = -6;

	t13 = (x53&(x54<(x55/x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -2;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = -70306;

	t14 = (x57&(x58<(x59/x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MAX;
	uint16_t x63 = 13U;
	int64_t x64 = 841639673677884LL;

	t15 = (x61&(x62<(x63/x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	int32_t x70 = INT32_MIN;
	static int16_t x71 = -1;
	uint16_t x72 = UINT16_MAX;
	static int64_t t16 = -149297413678174116LL;

	t16 = (x69&(x70<(x71/x72)));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = -342231;
	volatile int64_t x75 = -260937LL;
	int16_t x76 = -334;

	t17 = (x73&(x74<(x75/x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -1;
	int8_t x78 = -1;
	static int16_t x79 = INT16_MIN;
	int8_t x80 = -1;

	t18 = (x77&(x78<(x79/x80)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	static int64_t x82 = 66642912170LL;
	int16_t x83 = 1316;
	int16_t x84 = -4003;

	t19 = (x81&(x82<(x83/x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	volatile int64_t x86 = INT64_MAX;
	static uint8_t x87 = 1U;
	uint32_t x88 = 1993458170U;
	volatile int64_t t20 = -1349838537LL;

	t20 = (x85&(x86<(x87/x88)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	volatile int32_t t21 = 55657;

	t21 = (x89&(x90<(x91/x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = -1;
	int8_t x95 = INT8_MAX;
	uint8_t x96 = UINT8_MAX;
	static volatile uint32_t t22 = 6U;

	t22 = (x93&(x94<(x95/x96)));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	uint64_t x99 = 5LLU;
	static volatile int64_t x100 = -472103566LL;
	volatile int64_t t23 = -1360729062296LL;

	t23 = (x97&(x98<(x99/x100)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = UINT16_MAX;
	static volatile int32_t x102 = INT32_MIN;
	int8_t x103 = -1;

	t24 = (x101&(x102<(x103/x104)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x105 = UINT64_MAX;
	int16_t x107 = 9;
	static int64_t x108 = INT64_MIN;
	uint64_t t25 = 32223LLU;

	t25 = (x105&(x106<(x107/x108)));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = UINT16_MAX;
	static int64_t x112 = 258LL;
	volatile int32_t t26 = 23751348;

	t26 = (x109&(x110<(x111/x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x114 = -1;
	int64_t x115 = -1LL;
	volatile int16_t x116 = -9;
	volatile int32_t t27 = 1974889;

	t27 = (x113&(x114<(x115/x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x118 = 66472021U;
	uint32_t x120 = 3459U;
	volatile int64_t t28 = -421174186782085443LL;

	t28 = (x117&(x118<(x119/x120)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	volatile int16_t x122 = INT16_MIN;
	int32_t x123 = INT32_MIN;
	int64_t t29 = 4LL;

	t29 = (x121&(x122<(x123/x124)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -61;
	int64_t x126 = 2420LL;
	uint16_t x127 = 12152U;
	volatile int32_t t30 = 1516111;

	t30 = (x125&(x126<(x127/x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x129 = UINT8_MAX;
	int32_t x131 = 2978;
	int32_t t31 = -771;

	t31 = (x129&(x130<(x131/x132)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = 468;
	int32_t x134 = -5482175;
	int32_t x135 = -63305455;
	volatile int32_t t32 = 0;

	t32 = (x133&(x134<(x135/x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 2U;
	uint8_t x138 = 16U;
	static int8_t x139 = INT8_MAX;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t33 = 5;

	t33 = (x137&(x138<(x139/x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -9804;
	static int8_t x143 = -1;
	volatile int32_t t34 = -104;

	t34 = (x141&(x142<(x143/x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x145 = 14LLU;
	int8_t x146 = 0;
	static int32_t x148 = -42473496;
	volatile uint64_t t35 = 1310686975260542LLU;

	t35 = (x145&(x146<(x147/x148)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x149 = -1;
	uint64_t x150 = 167396LLU;
	static uint64_t x151 = 3LLU;
	static int8_t x152 = INT8_MAX;
	volatile int32_t t36 = 2;

	t36 = (x149&(x150<(x151/x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x153 = UINT8_MAX;
	uint16_t x154 = UINT16_MAX;
	volatile int8_t x155 = -1;
	int16_t x156 = -1;
	volatile int32_t t37 = 1386;

	t37 = (x153&(x154<(x155/x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = UINT8_MAX;
	volatile uint16_t x160 = UINT16_MAX;
	int32_t t38 = -56;

	t38 = (x157&(x158<(x159/x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -1LL;
	static int8_t x162 = 0;
	volatile uint16_t x163 = UINT16_MAX;
	int64_t x164 = -993LL;
	volatile int64_t t39 = -156643532LL;

	t39 = (x161&(x162<(x163/x164)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = INT32_MAX;
	int32_t x166 = -1;
	int8_t x167 = INT8_MIN;
	volatile int64_t x168 = INT64_MIN;
	volatile int32_t t40 = -7355;

	t40 = (x165&(x166<(x167/x168)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x169 = INT32_MAX;
	int64_t x170 = 9LL;
	uint16_t x171 = UINT16_MAX;
	volatile int32_t x172 = INT32_MIN;
	int32_t t41 = 988499010;

	t41 = (x169&(x170<(x171/x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = INT8_MIN;
	volatile uint64_t x174 = 403195101580LLU;
	static int32_t x175 = INT32_MIN;
	int8_t x176 = INT8_MAX;
	volatile int32_t t42 = -270709174;

	t42 = (x173&(x174<(x175/x176)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MIN;
	static uint8_t x178 = 121U;
	int32_t x179 = -1;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t43 = 2836;

	t43 = (x177&(x178<(x179/x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x182 = 14LL;
	volatile uint16_t x183 = 6232U;
	uint16_t x184 = UINT16_MAX;
	static volatile int32_t t44 = -1224235;

	t44 = (x181&(x182<(x183/x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x186 = -1;
	int64_t x187 = 24LL;
	volatile int32_t t45 = -100590314;

	t45 = (x185&(x186<(x187/x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x189 = INT8_MAX;
	static uint32_t x190 = 4422183U;
	int64_t x191 = 224417LL;
	uint16_t x192 = 68U;
	volatile int32_t t46 = -35202;

	t46 = (x189&(x190<(x191/x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 444143019421099LLU;
	int16_t x194 = 707;
	uint32_t x195 = 359333U;

	t47 = (x193&(x194<(x195/x196)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x198 = INT16_MIN;
	int32_t x200 = INT32_MAX;
	volatile int32_t t48 = 27937;

	t48 = (x197&(x198<(x199/x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	static int64_t x202 = -1LL;
	int16_t x204 = INT16_MAX;
	volatile int32_t t49 = -2;

	t49 = (x201&(x202<(x203/x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x205 = -1;
	int32_t x206 = INT32_MIN;
	int32_t t50 = -49;

	t50 = (x205&(x206<(x207/x208)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = INT64_MAX;
	int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MIN;
	volatile uint64_t x212 = 186981540283LLU;
	static int64_t t51 = -1078422971694077LL;

	t51 = (x209&(x210<(x211/x212)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MIN;
	static uint8_t x215 = UINT8_MAX;
	volatile int16_t x216 = INT16_MIN;
	int32_t t52 = -1490;

	t52 = (x213&(x214<(x215/x216)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 3U;
	static uint16_t x218 = 24U;
	int32_t t53 = 72969752;

	t53 = (x217&(x218<(x219/x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x225 = 7U;
	int16_t x226 = INT16_MAX;
	int8_t x227 = -58;
	int8_t x228 = 4;

	t54 = (x225&(x226<(x227/x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MAX;
	int32_t t55 = 1;

	t55 = (x229&(x230<(x231/x232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = UINT64_MAX;
	int8_t x234 = -6;
	static int16_t x235 = INT16_MAX;
	int8_t x236 = 6;
	volatile uint64_t t56 = 263096198LLU;

	t56 = (x233&(x234<(x235/x236)));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x237 = 3;
	int8_t x238 = INT8_MIN;
	static int8_t x239 = 0;
	int32_t x240 = -1;
	static volatile int32_t t57 = 6250761;

	t57 = (x237&(x238<(x239/x240)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x241 = 99U;
	uint8_t x242 = 3U;
	uint64_t x243 = 3711252070067LLU;
	int32_t x244 = -6207;
	volatile int32_t t58 = 1114;

	t58 = (x241&(x242<(x243/x244)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x245 = 97925LLU;
	int64_t x246 = INT64_MIN;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = 21;
	volatile uint64_t t59 = 13377LLU;

	t59 = (x245&(x246<(x247/x248)));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = 486;
	int16_t x251 = 0;
	volatile uint32_t x252 = 702719U;
	int32_t t60 = 197650;

	t60 = (x249&(x250<(x251/x252)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x254 = 383926053LLU;
	uint16_t x255 = 15U;
	uint64_t x256 = 22651004004LLU;
	static int32_t t61 = 2379;

	t61 = (x253&(x254<(x255/x256)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = -1;
	int64_t x258 = INT64_MIN;
	uint16_t x259 = 25U;
	int64_t x260 = INT64_MIN;
	int32_t t62 = 588494047;

	t62 = (x257&(x258<(x259/x260)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x261 = 2;
	int64_t x262 = -1LL;
	int32_t x263 = -1;
	int64_t x264 = INT64_MIN;
	volatile int32_t t63 = 45605497;

	t63 = (x261&(x262<(x263/x264)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x266 = 0;
	uint8_t x267 = 0U;
	volatile int64_t t64 = 339821823377568841LL;

	t64 = (x265&(x266<(x267/x268)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = 20062843959LLU;
	int32_t x270 = INT32_MIN;
	int32_t x271 = INT32_MIN;
	static uint64_t t65 = 50414001LLU;

	t65 = (x269&(x270<(x271/x272)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = -12664856185702LL;
	int16_t x274 = 500;
	uint8_t x275 = 65U;
	int8_t x276 = INT8_MAX;

	t66 = (x273&(x274<(x275/x276)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x277 = 122U;
	uint8_t x278 = 61U;
	int16_t x279 = INT16_MIN;
	int32_t x280 = INT32_MIN;
	volatile uint32_t t67 = 47U;

	t67 = (x277&(x278<(x279/x280)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x281 = INT64_MAX;
	int64_t x282 = -1LL;
	int64_t x283 = -181570574556LL;
	uint32_t x284 = 120988991U;
	volatile int64_t t68 = -96747070434361744LL;

	t68 = (x281&(x282<(x283/x284)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = 258792641647583785LLU;
	volatile uint32_t x288 = 1030620023U;
	uint64_t t69 = 7836613819531LLU;

	t69 = (x285&(x286<(x287/x288)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = 781099437U;
	static int32_t x290 = INT32_MAX;
	int32_t x291 = -5;
	int32_t x292 = 98825;
	volatile uint32_t t70 = 1807U;

	t70 = (x289&(x290<(x291/x292)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x297 = -15784903;
	int16_t x298 = 1;
	volatile int16_t x299 = -2828;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t71 = 23260;

	t71 = (x297&(x298<(x299/x300)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x301 = 7U;
	uint64_t x304 = 2426178786LLU;
	volatile int32_t t72 = 5;

	t72 = (x301&(x302<(x303/x304)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x305 = INT8_MAX;
	int64_t x306 = -108890LL;
	static int8_t x307 = -3;
	int32_t t73 = 54557167;

	t73 = (x305&(x306<(x307/x308)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x311 = INT8_MIN;
	uint64_t x312 = 65279LLU;
	static volatile uint32_t t74 = 31U;

	t74 = (x309&(x310<(x311/x312)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x317 = INT64_MAX;
	int32_t x318 = 2;
	volatile int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MIN;
	int64_t t75 = 119578559127LL;

	t75 = (x317&(x318<(x319/x320)));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x321 = INT16_MIN;
	int8_t x322 = -1;
	volatile int16_t x323 = INT16_MAX;
	static uint32_t x324 = UINT32_MAX;
	int32_t t76 = -26666705;

	t76 = (x321&(x322<(x323/x324)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x325 = 92U;
	uint16_t x327 = 827U;
	volatile int32_t t77 = -4008020;

	t77 = (x325&(x326<(x327/x328)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x329 = 228360471309LL;
	int64_t x330 = INT64_MIN;
	volatile int16_t x331 = INT16_MAX;
	volatile int64_t t78 = -216005LL;

	t78 = (x329&(x330<(x331/x332)));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = 1;
	uint64_t x338 = 3307024796166362620LLU;
	uint8_t x339 = UINT8_MAX;
	int64_t x340 = -1LL;
	static volatile int32_t t79 = 4;

	t79 = (x337&(x338<(x339/x340)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x342 = INT16_MIN;
	volatile int16_t x343 = -679;
	int32_t x344 = INT32_MIN;
	int64_t t80 = 563LL;

	t80 = (x341&(x342<(x343/x344)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x346 = INT8_MAX;
	int16_t x347 = 37;
	volatile uint64_t x348 = 1334053995445217055LLU;

	t81 = (x345&(x346<(x347/x348)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x349 = 15351429330946532LLU;
	uint16_t x350 = 0U;
	int16_t x351 = INT16_MIN;
	int16_t x352 = -1;
	volatile uint64_t t82 = 316LLU;

	t82 = (x349&(x350<(x351/x352)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x354 = 0U;
	uint16_t x355 = 0U;
	static volatile uint64_t x356 = 1LLU;

	t83 = (x353&(x354<(x355/x356)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x357 = 28926825LLU;
	int8_t x358 = -2;
	uint64_t x359 = UINT64_MAX;

	t84 = (x357&(x358<(x359/x360)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x361 = 366832748652480LLU;
	static int16_t x362 = -1;
	int16_t x363 = INT16_MAX;
	static volatile int8_t x364 = -1;
	uint64_t t85 = 203129049722182599LLU;

	t85 = (x361&(x362<(x363/x364)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x365 = 2779521LLU;
	volatile uint16_t x367 = UINT16_MAX;
	volatile uint64_t t86 = 295LLU;

	t86 = (x365&(x366<(x367/x368)));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = INT16_MAX;
	int16_t x370 = INT16_MAX;
	volatile int32_t x371 = INT32_MIN;
	volatile int32_t x372 = 5;
	int32_t t87 = -36770;

	t87 = (x369&(x370<(x371/x372)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x377 = INT32_MIN;
	uint8_t x379 = 76U;
	uint16_t x380 = 104U;
	int32_t t88 = 871550895;

	t88 = (x377&(x378<(x379/x380)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x381 = INT16_MIN;
	uint8_t x382 = 7U;
	volatile int64_t x383 = 8233761285868LL;

	t89 = (x381&(x382<(x383/x384)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x385 = 55496U;
	uint16_t x386 = 28U;
	volatile int64_t x387 = -1LL;
	static int64_t x388 = INT64_MAX;
	uint32_t t90 = 6600569U;

	t90 = (x385&(x386<(x387/x388)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = INT16_MIN;
	int32_t x390 = -1;
	volatile int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MIN;
	int32_t t91 = -808;

	t91 = (x389&(x390<(x391/x392)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x393 = 3U;
	volatile int16_t x394 = 188;
	uint64_t x395 = UINT64_MAX;
	int8_t x396 = -9;

	t92 = (x393&(x394<(x395/x396)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x398 = -1LL;
	int32_t t93 = 3;

	t93 = (x397&(x398<(x399/x400)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x401 = 2U;
	int8_t x402 = 1;
	int32_t x403 = 6;
	int8_t x404 = INT8_MIN;
	volatile int32_t t94 = -1;

	t94 = (x401&(x402<(x403/x404)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x405 = -1;
	uint16_t x406 = 1U;
	uint16_t x407 = 11U;
	volatile int32_t x408 = -1;
	volatile int32_t t95 = -7751;

	t95 = (x405&(x406<(x407/x408)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x409 = UINT16_MAX;
	int32_t x410 = 114139030;
	int8_t x411 = -1;
	uint16_t x412 = 5753U;
	volatile int32_t t96 = 652151;

	t96 = (x409&(x410<(x411/x412)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x413 = UINT16_MAX;
	int16_t x414 = 0;
	uint32_t x415 = UINT32_MAX;
	volatile int32_t t97 = 4874718;

	t97 = (x413&(x414<(x415/x416)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x417 = 9469916591849LL;
	int8_t x418 = 25;
	int32_t x420 = INT32_MIN;
	int64_t t98 = 697029190221651154LL;

	t98 = (x417&(x418<(x419/x420)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x421 = 316;
	uint8_t x422 = 6U;

	t99 = (x421&(x422<(x423/x424)));

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


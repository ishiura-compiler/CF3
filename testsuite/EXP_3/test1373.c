#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x16 = 8;
volatile int32_t t2 = 1;
int64_t x20 = 495724715090LL;
static uint8_t x26 = 1U;
uint32_t x31 = UINT32_MAX;
int32_t x32 = INT32_MIN;
volatile int32_t t6 = -9772;
uint32_t x35 = 7U;
static volatile int64_t x36 = INT64_MIN;
static volatile int32_t t7 = 364916;
static volatile uint32_t x38 = 1095398109U;
int8_t x39 = 7;
int8_t x42 = INT8_MIN;
int16_t x47 = INT16_MIN;
uint16_t x48 = 34U;
int8_t x54 = INT8_MIN;
uint64_t x60 = 883691LLU;
volatile int32_t x64 = INT32_MAX;
static volatile uint32_t x70 = 580412U;
static int8_t x85 = 0;
volatile int32_t t17 = 517462028;
int64_t x93 = 0LL;
static volatile int8_t x96 = 0;
volatile uint16_t x103 = 16677U;
uint8_t x106 = 0U;
uint16_t x113 = 386U;
volatile uint8_t x115 = 24U;
uint32_t x133 = 63951U;
static int64_t x148 = -1LL;
static int32_t x149 = -1;
int64_t x161 = -593782LL;
int32_t x178 = 1;
volatile int32_t t37 = -43;
volatile int32_t t38 = -4407596;
static int64_t x199 = -1LL;
static uint8_t x212 = UINT8_MAX;
uint64_t x215 = UINT64_MAX;
static int32_t x222 = 1229748;
uint16_t x238 = 1U;
uint16_t x239 = 1182U;
int64_t x242 = -1LL;
volatile int32_t t48 = -15;
volatile int8_t x253 = INT8_MAX;
int32_t x254 = -1;
uint8_t x256 = 9U;
static volatile int32_t x262 = 45574;
static volatile int32_t t52 = 4879;
uint8_t x268 = UINT8_MAX;
int16_t x269 = -13;
int64_t x271 = INT64_MAX;
static int32_t t54 = 1548;
int32_t t55 = -7189699;
static volatile int8_t x284 = INT8_MIN;
static volatile int32_t x290 = -1;
int8_t x302 = INT8_MIN;
int16_t x306 = -19;
static int16_t x307 = 159;
volatile int32_t t63 = -934;
int32_t x312 = INT32_MAX;
static int64_t x313 = -15455751LL;
int32_t t65 = 58708534;
int16_t x326 = INT16_MIN;
uint32_t x327 = 1433U;
uint8_t x330 = 14U;
int64_t x334 = 14076179079633213LL;
int16_t x335 = INT16_MAX;
static volatile int32_t t69 = 857551;
int8_t x342 = INT8_MIN;
uint32_t x346 = 8577310U;
int64_t x354 = INT64_MIN;
uint64_t x357 = UINT64_MAX;
volatile int64_t x360 = -1LL;
volatile int8_t x364 = -1;
volatile int32_t t75 = -15205311;
static volatile int32_t x375 = 495;
int32_t t76 = -357442526;
uint8_t x386 = UINT8_MAX;
int64_t x388 = INT64_MIN;
volatile int32_t t80 = -266;
int8_t x406 = INT8_MIN;
volatile int32_t t84 = -8512571;
int8_t x411 = 8;
volatile int32_t t85 = -30;
int8_t x415 = INT8_MIN;
volatile int64_t x419 = 3673589LL;
int16_t x420 = 305;
int64_t x423 = -38815LL;
uint8_t x429 = UINT8_MAX;
uint8_t x438 = 24U;
int8_t x439 = INT8_MAX;
volatile int32_t t92 = 129;
uint16_t x443 = 114U;
int8_t x446 = INT8_MIN;
static int8_t x447 = INT8_MIN;
uint32_t x449 = UINT32_MAX;
int32_t x456 = 86000169;
static int8_t x465 = -7;


void f0(void) {
	static int32_t x5 = INT32_MIN;
	uint64_t x6 = 457540686043LLU;
	int32_t x7 = -73;
	volatile int32_t x8 = 666476;
	volatile int32_t t0 = -25484306;

	t0 = ((x5-x6)==(x7<x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = INT8_MIN;
	volatile int64_t x10 = -10750630LL;
	int64_t x11 = INT64_MIN;
	static int32_t x12 = 67332;
	volatile int32_t t1 = -4662261;

	t1 = ((x9-x10)==(x11<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = 560548029944926LL;
	static uint64_t x15 = 7LLU;

	t2 = ((x13-x14)==(x15<x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	int64_t x18 = -1LL;
	int32_t x19 = INT32_MAX;
	volatile int32_t t3 = -35963037;

	t3 = ((x17-x18)==(x19<x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MIN;
	int32_t x23 = 6888289;
	static int64_t x24 = INT64_MIN;
	volatile int32_t t4 = -1;

	t4 = ((x21-x22)==(x23<x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 28;
	uint32_t x27 = 8245321U;
	static int16_t x28 = INT16_MAX;
	volatile int32_t t5 = 24295276;

	t5 = ((x25-x26)==(x27<x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = -1LL;
	int64_t x30 = -8952097LL;

	t6 = ((x29-x30)==(x31<x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	volatile int32_t x34 = -3;

	t7 = ((x33-x34)==(x35<x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x37 = 1143;
	static volatile uint64_t x40 = UINT64_MAX;
	int32_t t8 = 251613;

	t8 = ((x37-x38)==(x39<x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x41 = 41U;
	static int16_t x43 = 355;
	int64_t x44 = INT64_MIN;
	int32_t t9 = -10594280;

	t9 = ((x41-x42)==(x43<x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 4568568044376LLU;
	static int32_t x46 = INT32_MIN;
	volatile int32_t t10 = -11656723;

	t10 = ((x45-x46)==(x47<x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -229;
	volatile int8_t x50 = INT8_MAX;
	int32_t x51 = -1;
	static uint16_t x52 = UINT16_MAX;
	volatile int32_t t11 = 10542;

	t11 = ((x49-x50)==(x51<x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = 0;
	static volatile int32_t x55 = INT32_MIN;
	uint8_t x56 = 0U;
	static volatile int32_t t12 = 3;

	t12 = ((x53-x54)==(x55<x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	int8_t x59 = -1;
	int32_t t13 = -65230;

	t13 = ((x57-x58)==(x59<x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 8133;
	int16_t x62 = -1;
	static int64_t x63 = -4411LL;
	static volatile int32_t t14 = 1129;

	t14 = ((x61-x62)==(x63<x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x65 = 488147U;
	int8_t x66 = INT8_MAX;
	uint64_t x67 = 8895519LLU;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t15 = -317182;

	t15 = ((x65-x66)==(x67<x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 28U;
	uint64_t x71 = 3722017LLU;
	static int8_t x72 = INT8_MAX;
	int32_t t16 = -257;

	t16 = ((x69-x70)==(x71<x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x86 = 2;
	int32_t x87 = -1;
	uint16_t x88 = 27U;

	t17 = ((x85-x86)==(x87<x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = INT64_MIN;
	static int64_t x91 = -4881LL;
	volatile int64_t x92 = INT64_MIN;
	int32_t t18 = -228359;

	t18 = ((x89-x90)==(x91<x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x94 = 12U;
	volatile int16_t x95 = -5219;
	volatile int32_t t19 = -18368;

	t19 = ((x93-x94)==(x95<x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = INT32_MIN;
	volatile int64_t x102 = -1510LL;
	volatile int16_t x104 = INT16_MIN;
	int32_t t20 = 51;

	t20 = ((x101-x102)==(x103<x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = INT8_MAX;
	int32_t x107 = INT32_MAX;
	int64_t x108 = -981343902241LL;
	volatile int32_t t21 = 53;

	t21 = ((x105-x106)==(x107<x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x109 = INT64_MIN;
	static uint64_t x110 = UINT64_MAX;
	static volatile int8_t x111 = -34;
	volatile int64_t x112 = INT64_MAX;
	volatile int32_t t22 = -923456786;

	t22 = ((x109-x110)==(x111<x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x114 = 16206172U;
	int8_t x116 = INT8_MIN;
	volatile int32_t t23 = 1;

	t23 = ((x113-x114)==(x115<x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x129 = 53;
	int8_t x130 = -1;
	int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MIN;
	volatile int32_t t24 = 2;

	t24 = ((x129-x130)==(x131<x132));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	int64_t x136 = -1LL;
	int32_t t25 = 1;

	t25 = ((x133-x134)==(x135<x136));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x137 = 1724690534566LLU;
	int16_t x138 = INT16_MIN;
	int8_t x139 = -8;
	int64_t x140 = INT64_MAX;
	int32_t t26 = -87532;

	t26 = ((x137-x138)==(x139<x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x141 = 3U;
	static int16_t x142 = INT16_MIN;
	static volatile int8_t x143 = INT8_MAX;
	volatile uint16_t x144 = UINT16_MAX;
	int32_t t27 = 0;

	t27 = ((x141-x142)==(x143<x144));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x145 = -4LL;
	int16_t x146 = INT16_MIN;
	volatile int8_t x147 = -1;
	int32_t t28 = 143;

	t28 = ((x145-x146)==(x147<x148));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x150 = INT32_MIN;
	int16_t x151 = INT16_MAX;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t29 = -2131723;

	t29 = ((x149-x150)==(x151<x152));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x153 = INT32_MAX;
	static volatile uint32_t x154 = 1744693U;
	int64_t x155 = INT64_MAX;
	uint64_t x156 = 34966940481LLU;
	int32_t t30 = 1;

	t30 = ((x153-x154)==(x155<x156));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x157 = 1;
	int64_t x158 = INT64_MAX;
	volatile uint16_t x159 = 252U;
	volatile int32_t x160 = -340179638;
	int32_t t31 = -4122;

	t31 = ((x157-x158)==(x159<x160));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x162 = INT16_MAX;
	int32_t x163 = -1;
	int64_t x164 = INT64_MAX;
	int32_t t32 = 134488826;

	t32 = ((x161-x162)==(x163<x164));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x169 = UINT64_MAX;
	uint16_t x170 = 3U;
	volatile uint32_t x171 = 2126356138U;
	int32_t x172 = INT32_MIN;
	int32_t t33 = -55215191;

	t33 = ((x169-x170)==(x171<x172));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x173 = 0;
	int8_t x174 = INT8_MIN;
	static int32_t x175 = INT32_MIN;
	int32_t x176 = -4183;
	volatile int32_t t34 = 523702;

	t34 = ((x173-x174)==(x175<x176));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = -1;
	uint32_t x179 = UINT32_MAX;
	volatile int64_t x180 = -1LL;
	volatile int32_t t35 = -3454010;

	t35 = ((x177-x178)==(x179<x180));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x181 = 0;
	volatile int8_t x182 = 2;
	int64_t x183 = -1LL;
	volatile int64_t x184 = INT64_MAX;
	volatile int32_t t36 = 416;

	t36 = ((x181-x182)==(x183<x184));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x185 = UINT8_MAX;
	uint32_t x186 = 19U;
	static int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MAX;

	t37 = ((x185-x186)==(x187<x188));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = INT16_MAX;
	int64_t x194 = INT64_MAX;
	static int8_t x195 = 29;
	static int64_t x196 = INT64_MIN;

	t38 = ((x193-x194)==(x195<x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x197 = 73LL;
	volatile int8_t x198 = -1;
	uint64_t x200 = 6300097879LLU;
	int32_t t39 = 2;

	t39 = ((x197-x198)==(x199<x200));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x205 = -5;
	volatile int8_t x206 = INT8_MIN;
	int32_t x207 = -1;
	int8_t x208 = INT8_MIN;
	int32_t t40 = 2317;

	t40 = ((x205-x206)==(x207<x208));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = -2;
	int16_t x210 = -1;
	int32_t x211 = -1984906;
	int32_t t41 = -847740043;

	t41 = ((x209-x210)==(x211<x212));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x213 = 781186421U;
	volatile int32_t x214 = 27;
	uint8_t x216 = 1U;
	volatile int32_t t42 = -16734429;

	t42 = ((x213-x214)==(x215<x216));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x221 = 243972U;
	uint16_t x223 = 8U;
	uint64_t x224 = 11884207776LLU;
	volatile int32_t t43 = 92;

	t43 = ((x221-x222)==(x223<x224));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x229 = 2;
	uint32_t x230 = UINT32_MAX;
	int16_t x231 = -1;
	static int64_t x232 = 1428199LL;
	volatile int32_t t44 = -4228072;

	t44 = ((x229-x230)==(x231<x232));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x233 = INT32_MAX;
	int64_t x234 = -1LL;
	int64_t x235 = 1185994877793LL;
	int16_t x236 = -1;
	static int32_t t45 = -7445237;

	t45 = ((x233-x234)==(x235<x236));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x237 = -45868LL;
	static int8_t x240 = INT8_MAX;
	volatile int32_t t46 = -610;

	t46 = ((x237-x238)==(x239<x240));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x241 = UINT32_MAX;
	static int16_t x243 = INT16_MAX;
	int16_t x244 = INT16_MIN;
	static volatile int32_t t47 = -58488;

	t47 = ((x241-x242)==(x243<x244));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x245 = 1U;
	uint32_t x246 = 29635U;
	int64_t x247 = -1LL;
	uint32_t x248 = UINT32_MAX;

	t48 = ((x245-x246)==(x247<x248));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x249 = INT32_MAX;
	volatile uint16_t x250 = 6U;
	int16_t x251 = INT16_MAX;
	int32_t x252 = INT32_MIN;
	static int32_t t49 = -875499067;

	t49 = ((x249-x250)==(x251<x252));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x255 = INT16_MIN;
	static volatile int32_t t50 = -11233995;

	t50 = ((x253-x254)==(x255<x256));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x257 = INT32_MIN;
	int64_t x258 = -1LL;
	static uint64_t x259 = 273015481648LLU;
	int32_t x260 = -1;
	volatile int32_t t51 = 16167596;

	t51 = ((x257-x258)==(x259<x260));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x261 = -7;
	int8_t x263 = INT8_MIN;
	uint64_t x264 = UINT64_MAX;

	t52 = ((x261-x262)==(x263<x264));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x265 = 734350523U;
	int32_t x266 = INT32_MIN;
	static uint32_t x267 = 508863U;
	int32_t t53 = -60577958;

	t53 = ((x265-x266)==(x267<x268));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x270 = -5;
	uint8_t x272 = 26U;

	t54 = ((x269-x270)==(x271<x272));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x273 = UINT16_MAX;
	int8_t x274 = 4;
	int16_t x275 = 930;
	int32_t x276 = INT32_MAX;

	t55 = ((x273-x274)==(x275<x276));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x277 = INT32_MAX;
	int16_t x278 = 4390;
	int32_t x279 = INT32_MAX;
	uint32_t x280 = 815U;
	int32_t t56 = -23;

	t56 = ((x277-x278)==(x279<x280));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x281 = INT32_MAX;
	int16_t x282 = 1005;
	uint32_t x283 = 204645913U;
	int32_t t57 = 1643863;

	t57 = ((x281-x282)==(x283<x284));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x285 = 9929249U;
	uint32_t x286 = 968483U;
	volatile int64_t x287 = INT64_MIN;
	int16_t x288 = -1;
	volatile int32_t t58 = -8267;

	t58 = ((x285-x286)==(x287<x288));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x289 = -1;
	volatile int8_t x291 = -1;
	volatile int32_t x292 = INT32_MIN;
	int32_t t59 = 16985967;

	t59 = ((x289-x290)==(x291<x292));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x293 = 359;
	int16_t x294 = INT16_MIN;
	volatile int64_t x295 = INT64_MAX;
	uint32_t x296 = UINT32_MAX;
	int32_t t60 = 83;

	t60 = ((x293-x294)==(x295<x296));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x297 = -1LL;
	int32_t x298 = -207;
	static int32_t x299 = INT32_MAX;
	volatile int16_t x300 = -193;
	int32_t t61 = 59;

	t61 = ((x297-x298)==(x299<x300));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = -1;
	uint16_t x303 = 3U;
	int16_t x304 = INT16_MIN;
	static int32_t t62 = 129256507;

	t62 = ((x301-x302)==(x303<x304));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x305 = 118137704;
	int16_t x308 = -2011;

	t63 = ((x305-x306)==(x307<x308));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x309 = INT16_MIN;
	int16_t x310 = -1;
	static volatile int32_t x311 = -39;
	int32_t t64 = 0;

	t64 = ((x309-x310)==(x311<x312));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x314 = 551042856LLU;
	static int8_t x315 = INT8_MIN;
	int32_t x316 = 11;

	t65 = ((x313-x314)==(x315<x316));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x325 = INT8_MIN;
	int64_t x328 = INT64_MAX;
	volatile int32_t t66 = -49897621;

	t66 = ((x325-x326)==(x327<x328));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x329 = -1;
	uint8_t x331 = UINT8_MAX;
	volatile uint16_t x332 = 7U;
	volatile int32_t t67 = 136;

	t67 = ((x329-x330)==(x331<x332));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x333 = UINT64_MAX;
	int8_t x336 = INT8_MIN;
	int32_t t68 = -60852112;

	t68 = ((x333-x334)==(x335<x336));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x337 = INT8_MAX;
	int8_t x338 = -28;
	uint32_t x339 = UINT32_MAX;
	uint32_t x340 = 10094U;

	t69 = ((x337-x338)==(x339<x340));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x341 = INT16_MAX;
	volatile int64_t x343 = INT64_MIN;
	volatile uint32_t x344 = UINT32_MAX;
	int32_t t70 = 108108625;

	t70 = ((x341-x342)==(x343<x344));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x345 = -3200307778571LL;
	static uint64_t x347 = UINT64_MAX;
	int16_t x348 = INT16_MIN;
	int32_t t71 = -29737;

	t71 = ((x345-x346)==(x347<x348));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x353 = -111LL;
	volatile uint64_t x355 = 1918026454805206355LLU;
	int16_t x356 = INT16_MIN;
	int32_t t72 = 900492;

	t72 = ((x353-x354)==(x355<x356));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x358 = -1056863969;
	static int32_t x359 = INT32_MAX;
	static volatile int32_t t73 = 134296;

	t73 = ((x357-x358)==(x359<x360));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x361 = INT64_MAX;
	volatile uint16_t x362 = 0U;
	uint64_t x363 = UINT64_MAX;
	volatile int32_t t74 = -1827984;

	t74 = ((x361-x362)==(x363<x364));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x369 = 125U;
	int16_t x370 = INT16_MAX;
	uint64_t x371 = UINT64_MAX;
	static uint16_t x372 = 208U;

	t75 = ((x369-x370)==(x371<x372));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x373 = 6U;
	uint32_t x374 = UINT32_MAX;
	static int32_t x376 = INT32_MAX;

	t76 = ((x373-x374)==(x375<x376));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x377 = INT8_MIN;
	int64_t x378 = -41746966240LL;
	uint8_t x379 = UINT8_MAX;
	int8_t x380 = -49;
	static volatile int32_t t77 = 12712259;

	t77 = ((x377-x378)==(x379<x380));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x381 = INT8_MIN;
	static int8_t x382 = -12;
	int64_t x383 = INT64_MIN;
	uint32_t x384 = 355669U;
	int32_t t78 = -55249;

	t78 = ((x381-x382)==(x383<x384));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x385 = UINT32_MAX;
	volatile int64_t x387 = INT64_MIN;
	int32_t t79 = 0;

	t79 = ((x385-x386)==(x387<x388));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x389 = -1;
	int64_t x390 = INT64_MAX;
	volatile int64_t x391 = INT64_MIN;
	volatile int64_t x392 = INT64_MIN;

	t80 = ((x389-x390)==(x391<x392));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x393 = INT8_MIN;
	int16_t x394 = 93;
	int64_t x395 = -1LL;
	static int32_t x396 = INT32_MAX;
	volatile int32_t t81 = -101;

	t81 = ((x393-x394)==(x395<x396));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x397 = 2U;
	int32_t x398 = INT32_MIN;
	int64_t x399 = -1101558364595732LL;
	uint8_t x400 = 15U;
	int32_t t82 = 5368653;

	t82 = ((x397-x398)==(x399<x400));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x401 = INT16_MIN;
	int8_t x402 = 0;
	uint64_t x403 = 1LLU;
	uint64_t x404 = 521313LLU;
	volatile int32_t t83 = -224623;

	t83 = ((x401-x402)==(x403<x404));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x405 = UINT16_MAX;
	int64_t x407 = INT64_MIN;
	int32_t x408 = INT32_MIN;

	t84 = ((x405-x406)==(x407<x408));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x409 = INT16_MIN;
	uint64_t x410 = UINT64_MAX;
	int8_t x412 = 0;

	t85 = ((x409-x410)==(x411<x412));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x413 = 0U;
	uint8_t x414 = UINT8_MAX;
	int64_t x416 = -1LL;
	volatile int32_t t86 = 2787208;

	t86 = ((x413-x414)==(x415<x416));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x417 = 1;
	static uint64_t x418 = 165LLU;
	volatile int32_t t87 = 15167;

	t87 = ((x417-x418)==(x419<x420));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x421 = INT8_MAX;
	volatile uint64_t x422 = 2083957594LLU;
	int64_t x424 = INT64_MIN;
	int32_t t88 = 79099;

	t88 = ((x421-x422)==(x423<x424));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x425 = -1;
	int8_t x426 = INT8_MIN;
	static uint8_t x427 = UINT8_MAX;
	uint64_t x428 = 915918615LLU;
	volatile int32_t t89 = 4511;

	t89 = ((x425-x426)==(x427<x428));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x430 = -54451578560LL;
	volatile uint64_t x431 = 854LLU;
	uint64_t x432 = 286LLU;
	volatile int32_t t90 = 4978;

	t90 = ((x429-x430)==(x431<x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x433 = 1;
	uint16_t x434 = UINT16_MAX;
	int8_t x435 = INT8_MIN;
	volatile int16_t x436 = INT16_MIN;
	static volatile int32_t t91 = 19;

	t91 = ((x433-x434)==(x435<x436));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = 80355158920439290LL;
	uint8_t x440 = UINT8_MAX;

	t92 = ((x437-x438)==(x439<x440));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x441 = -1LL;
	uint32_t x442 = 36U;
	int8_t x444 = -1;
	volatile int32_t t93 = 302220;

	t93 = ((x441-x442)==(x443<x444));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x445 = INT8_MAX;
	volatile int64_t x448 = -1LL;
	static int32_t t94 = -12964;

	t94 = ((x445-x446)==(x447<x448));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x450 = 159491329535LLU;
	volatile int32_t x451 = INT32_MIN;
	int16_t x452 = 1;
	volatile int32_t t95 = -1581758;

	t95 = ((x449-x450)==(x451<x452));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x453 = UINT16_MAX;
	static uint8_t x454 = UINT8_MAX;
	int16_t x455 = -1;
	volatile int32_t t96 = 113046728;

	t96 = ((x453-x454)==(x455<x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x457 = 3;
	static volatile int8_t x458 = -3;
	int8_t x459 = INT8_MAX;
	static int32_t x460 = INT32_MIN;
	int32_t t97 = 132297758;

	t97 = ((x457-x458)==(x459<x460));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x461 = -1;
	uint8_t x462 = 17U;
	static int8_t x463 = -1;
	int8_t x464 = 0;
	int32_t t98 = -3653;

	t98 = ((x461-x462)==(x463<x464));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x466 = INT32_MIN;
	uint64_t x467 = 1593LLU;
	volatile int16_t x468 = 907;
	volatile int32_t t99 = -28945;

	t99 = ((x465-x466)==(x467<x468));

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


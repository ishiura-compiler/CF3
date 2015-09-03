#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 28482261425LLU;
uint64_t t0 = 37340LLU;
int8_t x10 = -5;
static int16_t x11 = INT16_MIN;
volatile int32_t t2 = -7;
int8_t x13 = INT8_MIN;
uint16_t x16 = UINT16_MAX;
int64_t t4 = -28256990479LL;
static uint64_t x21 = UINT64_MAX;
int8_t x32 = -1;
static int32_t x35 = INT32_MIN;
uint8_t x37 = UINT8_MAX;
volatile int32_t x42 = -1;
uint16_t x43 = UINT16_MAX;
int32_t x50 = INT32_MAX;
static int64_t x52 = -622LL;
int32_t x80 = -1;
static volatile int64_t x87 = -1LL;
uint16_t x88 = 155U;
volatile int64_t x92 = 441354148975205LL;
int16_t x93 = INT16_MAX;
volatile int64_t x94 = 1464265187LL;
volatile uint64_t x103 = UINT64_MAX;
volatile uint32_t x111 = 310090U;
int32_t x116 = INT32_MAX;
static int32_t x120 = INT32_MIN;
uint64_t t29 = 4367444LLU;
int32_t x128 = INT32_MAX;
static int32_t x130 = -6542;
volatile uint16_t x132 = 2493U;
int16_t x144 = INT16_MIN;
int64_t x149 = INT64_MIN;
volatile int8_t x150 = INT8_MAX;
int32_t t40 = -830917;
uint16_t x170 = 7255U;
static int32_t x172 = -615;
int8_t x189 = 5;
uint16_t x190 = 3U;
volatile uint8_t x206 = 3U;
uint32_t x207 = 10410U;
uint32_t t50 = 30U;
int32_t x215 = -1;
volatile int32_t t53 = -265736355;
static int32_t x223 = INT32_MIN;
int32_t t55 = -188;
int16_t x229 = -1;
static uint16_t x231 = 1U;
volatile int64_t x243 = INT64_MAX;
volatile int8_t x244 = -1;
int32_t x247 = INT32_MIN;
uint64_t x249 = UINT64_MAX;
volatile int32_t t61 = 34809;
uint64_t x264 = UINT64_MAX;
int32_t t65 = 292448;
int8_t x269 = -1;
int8_t x272 = -1;
uint16_t x278 = 3487U;
uint64_t x282 = UINT64_MAX;
int16_t x284 = -1;
volatile uint32_t x286 = UINT32_MAX;
uint16_t x292 = 5U;
int32_t x296 = -21;
int64_t x297 = -1LL;
uint64_t x298 = UINT64_MAX;
int16_t x304 = INT16_MAX;
int32_t x306 = 63;
uint8_t x312 = UINT8_MAX;
int16_t x313 = INT16_MIN;
volatile uint64_t x315 = 373016729948678925LLU;
static uint8_t x316 = 0U;
static uint64_t t77 = 365342951553958058LLU;
uint8_t x320 = 10U;
int32_t x326 = 7;
volatile int8_t x328 = INT8_MAX;
int64_t x332 = 689564LL;
static int16_t x333 = -1;
static volatile uint64_t x337 = 83560679LLU;
volatile int32_t x342 = -1;
uint32_t x351 = UINT32_MAX;
uint8_t x355 = 7U;
int64_t t90 = -560785475536834LL;
uint8_t x369 = 1U;
static int8_t x371 = -1;
int8_t x374 = INT8_MIN;
volatile int64_t x377 = INT64_MAX;
int32_t t93 = -794467;
static int16_t x382 = 1032;
static int32_t x386 = 4;
static int64_t x387 = -65723097445709048LL;
volatile int64_t x392 = INT64_MIN;
static volatile uint64_t x397 = 232832523LLU;
int64_t x398 = INT64_MAX;
static int64_t x399 = INT64_MIN;
int64_t t98 = 232775787226502987LL;
int32_t x404 = 1544;


void f0(void) {
	static int8_t x1 = 0;
	int32_t x2 = -39;
	static uint32_t x4 = 1U;

	t0 = ((x1==x2)+(x3|x4));

	if (t0 != 28482261425LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int64_t x6 = INT64_MIN;
	int8_t x7 = 0;
	uint16_t x8 = UINT16_MAX;
	static int32_t t1 = -30614084;

	t1 = ((x5==x6)+(x7|x8));

	if (t1 != 65536) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -137348049615953LL;
	volatile int16_t x12 = -3;

	t2 = ((x9==x10)+(x11|x12));

	if (t2 != -3) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	uint16_t x15 = 14U;
	int32_t t3 = -62130767;

	t3 = ((x13==x14)+(x15|x16));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 21U;
	int64_t x18 = INT64_MAX;
	volatile int32_t x19 = 243996;
	int64_t x20 = INT64_MIN;

	t4 = ((x17==x18)+(x19|x20));

	if (t4 != -9223372036854531812LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MAX;
	volatile int8_t x23 = -30;
	volatile uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -7608804;

	t5 = ((x21==x22)+(x23|x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = 14608850256LL;
	int32_t x26 = INT32_MIN;
	int8_t x27 = INT8_MIN;
	volatile uint8_t x28 = 4U;
	int32_t t6 = -424;

	t6 = ((x25==x26)+(x27|x28));

	if (t6 != -124) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 1U;
	static int32_t x30 = INT32_MAX;
	uint32_t x31 = 12U;
	uint32_t t7 = UINT32_MAX;

	t7 = ((x29==x30)+(x31|x32));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 7;
	int64_t x34 = INT64_MIN;
	volatile int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 1;

	t8 = ((x33==x34)+(x35|x36));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = -1;
	static int8_t x39 = INT8_MAX;
	int16_t x40 = INT16_MAX;
	int32_t t9 = -6;

	t9 = ((x37==x38)+(x39|x40));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	volatile uint8_t x44 = 48U;
	int32_t t10 = 514721012;

	t10 = ((x41==x42)+(x43|x44));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int64_t x46 = INT64_MIN;
	uint32_t x47 = 31U;
	int32_t x48 = 725;
	uint32_t t11 = 2952U;

	t11 = ((x45==x46)+(x47|x48));

	if (t11 != 735U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int8_t x51 = 0;
	int64_t t12 = 0LL;

	t12 = ((x49==x50)+(x51|x52));

	if (t12 != -622LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 49U;
	int64_t x54 = -1483654417226978LL;
	static uint32_t x55 = 16954U;
	int16_t x56 = 1;
	volatile uint32_t t13 = 3U;

	t13 = ((x53==x54)+(x55|x56));

	if (t13 != 16955U) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MIN;
	uint32_t x58 = 108416953U;
	int16_t x59 = INT16_MIN;
	volatile int16_t x60 = INT16_MAX;
	int32_t t14 = -441;

	t14 = ((x57==x58)+(x59|x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MAX;
	static int32_t x66 = INT32_MIN;
	static volatile int16_t x67 = -1;
	int16_t x68 = INT16_MAX;
	int32_t t15 = 8;

	t15 = ((x65==x66)+(x67|x68));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	uint16_t x70 = 26871U;
	static int16_t x71 = INT16_MAX;
	volatile uint8_t x72 = UINT8_MAX;
	int32_t t16 = -4;

	t16 = ((x69==x70)+(x71|x72));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = -3;
	uint16_t x74 = 11424U;
	volatile int8_t x75 = INT8_MIN;
	volatile uint32_t x76 = 22U;
	volatile uint32_t t17 = 4U;

	t17 = ((x73==x74)+(x75|x76));

	if (t17 != 4294967190U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x77 = INT8_MIN;
	static int64_t x78 = -181915173296816LL;
	uint8_t x79 = UINT8_MAX;
	static volatile int32_t t18 = 41837;

	t18 = ((x77==x78)+(x79|x80));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x81 = UINT16_MAX;
	static int16_t x82 = -1;
	int8_t x83 = INT8_MAX;
	static int32_t x84 = INT32_MIN;
	volatile int32_t t19 = -11332470;

	t19 = ((x81==x82)+(x83|x84));

	if (t19 != -2147483521) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = -45LL;
	static int32_t x86 = INT32_MAX;
	static int64_t t20 = 9955665878747LL;

	t20 = ((x85==x86)+(x87|x88));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	uint16_t x90 = 419U;
	uint16_t x91 = 25U;
	volatile int64_t t21 = -122228376LL;

	t21 = ((x89==x90)+(x91|x92));

	if (t21 != 441354148975229LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x95 = INT32_MIN;
	static uint8_t x96 = 0U;
	int32_t t22 = INT32_MIN;

	t22 = ((x93==x94)+(x95|x96));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = -1;
	int8_t x98 = -1;
	int64_t x99 = -1LL;
	static volatile int8_t x100 = INT8_MIN;
	volatile int64_t t23 = 1547709714180883LL;

	t23 = ((x97==x98)+(x99|x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MAX;
	static uint8_t x102 = 12U;
	volatile int16_t x104 = -1;
	uint64_t t24 = UINT64_MAX;

	t24 = ((x101==x102)+(x103|x104));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x105 = 5;
	int64_t x106 = 10806560816LL;
	uint64_t x107 = 0LLU;
	int8_t x108 = INT8_MIN;
	volatile uint64_t t25 = 69563058LLU;

	t25 = ((x105==x106)+(x107|x108));

	if (t25 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x109 = INT64_MIN;
	static uint16_t x110 = 1U;
	int8_t x112 = INT8_MAX;
	volatile uint32_t t26 = 0U;

	t26 = ((x109==x110)+(x111|x112));

	if (t26 != 310143U) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x113 = INT32_MIN;
	uint32_t x114 = UINT32_MAX;
	int32_t x115 = INT32_MIN;
	volatile int32_t t27 = -10802;

	t27 = ((x113==x114)+(x115|x116));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = INT8_MIN;
	volatile int32_t x118 = INT32_MIN;
	int32_t x119 = 5395;
	volatile int32_t t28 = -357263198;

	t28 = ((x117==x118)+(x119|x120));

	if (t28 != -2147478253) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -1;
	int8_t x122 = INT8_MAX;
	uint8_t x123 = UINT8_MAX;
	uint64_t x124 = 1464831407720417843LLU;

	t29 = ((x121==x122)+(x123|x124));

	if (t29 != 1464831407720418047LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = INT32_MAX;
	static int32_t x126 = -1;
	static volatile uint64_t x127 = 285110798095615669LLU;
	uint64_t t30 = 24259616390133198LLU;

	t30 = ((x125==x126)+(x127|x128));

	if (t30 != 285110799670706175LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 23079994LLU;
	int64_t x131 = -1LL;
	volatile int64_t t31 = -1922LL;

	t31 = ((x129==x130)+(x131|x132));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 47U;
	int64_t x134 = -26469215940163LL;
	static volatile int64_t x135 = INT64_MIN;
	uint64_t x136 = 10514028556975LLU;
	volatile uint64_t t32 = 15749904LLU;

	t32 = ((x133==x134)+(x135|x136));

	if (t32 != 9223382550883332783LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = INT64_MIN;
	int64_t x138 = -1LL;
	volatile uint8_t x139 = 2U;
	uint64_t x140 = 1319708927LLU;
	uint64_t t33 = 8800LLU;

	t33 = ((x137==x138)+(x139|x140));

	if (t33 != 1319708927LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x141 = INT16_MAX;
	int16_t x142 = INT16_MIN;
	static int32_t x143 = -1;
	int32_t t34 = -3458529;

	t34 = ((x141==x142)+(x143|x144));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x145 = 6;
	static int64_t x146 = -1LL;
	static int32_t x147 = INT32_MIN;
	int16_t x148 = INT16_MIN;
	static int32_t t35 = -458;

	t35 = ((x145==x146)+(x147|x148));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x151 = 1U;
	uint64_t x152 = 21077731923LLU;
	volatile uint64_t t36 = 814942LLU;

	t36 = ((x149==x150)+(x151|x152));

	if (t36 != 21077731923LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MAX;
	uint8_t x154 = 0U;
	int8_t x155 = INT8_MAX;
	volatile int8_t x156 = INT8_MIN;
	volatile int32_t t37 = 201;

	t37 = ((x153==x154)+(x155|x156));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = 39498U;
	volatile uint8_t x158 = 118U;
	uint64_t x159 = 2478855118LLU;
	uint32_t x160 = 1107413U;
	uint64_t t38 = 144041003823949872LLU;

	t38 = ((x157==x158)+(x159|x160));

	if (t38 != 2479945695LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = UINT64_MAX;
	int32_t x162 = 913691;
	int16_t x163 = INT16_MIN;
	volatile int32_t x164 = -253312;
	int32_t t39 = 29325;

	t39 = ((x161==x162)+(x163|x164));

	if (t39 != -23936) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MIN;
	int64_t x166 = 325396541LL;
	static int8_t x167 = INT8_MIN;
	static int16_t x168 = 1;

	t40 = ((x165==x166)+(x167|x168));

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	volatile uint64_t x171 = 1LLU;
	static uint64_t t41 = 128457516860716568LLU;

	t41 = ((x169==x170)+(x171|x172));

	if (t41 != 18446744073709551001LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 27U;
	static volatile int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MAX;
	uint32_t x176 = 312743U;
	volatile uint32_t t42 = 117868U;

	t42 = ((x173==x174)+(x175|x176));

	if (t42 != 327679U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x177 = -1;
	int64_t x178 = INT64_MAX;
	int64_t x179 = INT64_MIN;
	volatile int64_t x180 = INT64_MIN;
	static volatile int64_t t43 = INT64_MIN;

	t43 = ((x177==x178)+(x179|x180));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = UINT16_MAX;
	uint64_t x182 = 265017383143686LLU;
	uint64_t x183 = 1LLU;
	static uint64_t x184 = 125725494818407LLU;
	static volatile uint64_t t44 = 28LLU;

	t44 = ((x181==x182)+(x183|x184));

	if (t44 != 125725494818407LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MIN;
	uint16_t x186 = 24224U;
	static int16_t x187 = -1;
	volatile uint16_t x188 = 162U;
	volatile int32_t t45 = -25585238;

	t45 = ((x185==x186)+(x187|x188));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x191 = INT8_MIN;
	static volatile int16_t x192 = 2585;
	int32_t t46 = -28863378;

	t46 = ((x189==x190)+(x191|x192));

	if (t46 != -103) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = -1LL;
	static uint32_t x194 = 40438U;
	volatile int8_t x195 = 6;
	int8_t x196 = 20;
	int32_t t47 = -3;

	t47 = ((x193==x194)+(x195|x196));

	if (t47 != 22) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = UINT8_MAX;
	static uint8_t x198 = UINT8_MAX;
	uint8_t x199 = UINT8_MAX;
	static int8_t x200 = -38;
	volatile int32_t t48 = 21;

	t48 = ((x197==x198)+(x199|x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -87511465LL;
	volatile int32_t x202 = INT32_MIN;
	uint16_t x203 = UINT16_MAX;
	static uint64_t x204 = 334317LLU;
	volatile uint64_t t49 = 32788119516782LLU;

	t49 = ((x201==x202)+(x203|x204));

	if (t49 != 393215LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x205 = -28;
	int32_t x208 = -1432;

	t50 = ((x205==x206)+(x207|x208));

	if (t50 != 4294965994U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = -7;
	int32_t x210 = INT32_MIN;
	int64_t x211 = 7133827225616361LL;
	static uint64_t x212 = 10956LLU;
	volatile uint64_t t51 = 49LLU;

	t51 = ((x209==x210)+(x211|x212));

	if (t51 != 7133827225616365LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = UINT64_MAX;
	int16_t x214 = INT16_MIN;
	int16_t x216 = -249;
	volatile int32_t t52 = -464111;

	t52 = ((x213==x214)+(x215|x216));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 31U;
	int64_t x218 = INT64_MAX;
	static int16_t x219 = -1525;
	uint16_t x220 = UINT16_MAX;

	t53 = ((x217==x218)+(x219|x220));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MIN;
	static uint16_t x222 = UINT16_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t54 = 1;

	t54 = ((x221==x222)+(x223|x224));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	static int8_t x226 = 0;
	int32_t x227 = INT32_MIN;
	int32_t x228 = -1;

	t55 = ((x225==x226)+(x227|x228));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x230 = 147919569953LLU;
	volatile int32_t x232 = -1;
	int32_t t56 = 495449646;

	t56 = ((x229==x230)+(x231|x232));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x233 = 3U;
	int8_t x234 = -1;
	volatile int8_t x235 = INT8_MAX;
	uint32_t x236 = 246578U;
	uint32_t t57 = 124U;

	t57 = ((x233==x234)+(x235|x236));

	if (t57 != 246655U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = 3;
	volatile int16_t x238 = 172;
	static volatile uint32_t x239 = 47577U;
	static volatile uint32_t x240 = 4119627U;
	uint32_t t58 = 132U;

	t58 = ((x237==x238)+(x239|x240));

	if (t58 != 4128219U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = UINT32_MAX;
	static int8_t x242 = INT8_MAX;
	volatile int64_t t59 = -4LL;

	t59 = ((x241==x242)+(x243|x244));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = 99U;
	int16_t x246 = 47;
	int32_t x248 = -24;
	volatile int32_t t60 = 842;

	t60 = ((x245==x246)+(x247|x248));

	if (t60 != -24) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x250 = INT64_MIN;
	int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MAX;

	t61 = ((x249==x250)+(x251|x252));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = 2U;
	int8_t x254 = INT8_MIN;
	uint16_t x255 = 14U;
	static int8_t x256 = 2;
	volatile int32_t t62 = -1685;

	t62 = ((x253==x254)+(x255|x256));

	if (t62 != 14) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x257 = INT16_MIN;
	static volatile uint64_t x258 = 618154LLU;
	static uint16_t x259 = 20U;
	int8_t x260 = -1;
	volatile int32_t t63 = -116860;

	t63 = ((x257==x258)+(x259|x260));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MIN;
	int8_t x262 = -1;
	static uint8_t x263 = 1U;
	static volatile uint64_t t64 = UINT64_MAX;

	t64 = ((x261==x262)+(x263|x264));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 9U;
	int8_t x266 = INT8_MIN;
	static uint8_t x267 = 90U;
	volatile int16_t x268 = INT16_MAX;

	t65 = ((x265==x266)+(x267|x268));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x270 = -1;
	int16_t x271 = -10;
	volatile int32_t t66 = 81922774;

	t66 = ((x269==x270)+(x271|x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x273 = INT8_MAX;
	uint16_t x274 = 31U;
	volatile int64_t x275 = 55725LL;
	int32_t x276 = INT32_MIN;
	int64_t t67 = -1716885964159LL;

	t67 = ((x273==x274)+(x275|x276));

	if (t67 != -2147427923LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = INT64_MAX;
	uint8_t x279 = 21U;
	int64_t x280 = INT64_MIN;
	volatile int64_t t68 = -231LL;

	t68 = ((x277==x278)+(x279|x280));

	if (t68 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x281 = UINT64_MAX;
	int32_t x283 = -1;
	volatile int32_t t69 = 4090357;

	t69 = ((x281==x282)+(x283|x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = -1;
	uint64_t x287 = 4211300481719627LLU;
	static int16_t x288 = -1;
	static volatile uint64_t t70 = 3661255138831867476LLU;

	t70 = ((x285==x286)+(x287|x288));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = UINT16_MAX;
	int32_t x290 = -1;
	volatile int8_t x291 = INT8_MIN;
	volatile int32_t t71 = -28823542;

	t71 = ((x289==x290)+(x291|x292));

	if (t71 != -123) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = INT8_MIN;
	int64_t x294 = INT64_MAX;
	int8_t x295 = INT8_MIN;
	volatile int32_t t72 = -249860992;

	t72 = ((x293==x294)+(x295|x296));

	if (t72 != -21) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x299 = INT16_MIN;
	int16_t x300 = INT16_MIN;
	int32_t t73 = 499;

	t73 = ((x297==x298)+(x299|x300));

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x301 = 40;
	volatile int16_t x302 = INT16_MIN;
	uint64_t x303 = 3LLU;
	uint64_t t74 = 54264LLU;

	t74 = ((x301==x302)+(x303|x304));

	if (t74 != 32767LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = -1;
	int32_t x307 = INT32_MIN;
	uint8_t x308 = 89U;
	volatile int32_t t75 = -397097;

	t75 = ((x305==x306)+(x307|x308));

	if (t75 != -2147483559) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = -1996;
	static int8_t x310 = -1;
	static volatile int8_t x311 = 0;
	int32_t t76 = -723;

	t76 = ((x309==x310)+(x311|x312));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x314 = -388180;

	t77 = ((x313==x314)+(x315|x316));

	if (t77 != 373016729948678925LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = -3165144LL;
	int64_t x318 = -3464717820624447LL;
	uint32_t x319 = 555568347U;
	uint32_t t78 = 22023081U;

	t78 = ((x317==x318)+(x319|x320));

	if (t78 != 555568347U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = -1;
	static uint16_t x322 = UINT16_MAX;
	uint32_t x323 = 6U;
	uint64_t x324 = 83548155688LLU;
	volatile uint64_t t79 = 564731444259LLU;

	t79 = ((x321==x322)+(x323|x324));

	if (t79 != 83548155694LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = 10;
	uint64_t x327 = 6467837822191602704LLU;
	uint64_t t80 = 2LLU;

	t80 = ((x325==x326)+(x327|x328));

	if (t80 != 6467837822191602815LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = INT16_MIN;
	uint8_t x330 = UINT8_MAX;
	volatile int8_t x331 = INT8_MIN;
	int64_t t81 = 75LL;

	t81 = ((x329==x330)+(x331|x332));

	if (t81 != -100LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x334 = 1;
	int16_t x335 = 3;
	int32_t x336 = INT32_MAX;
	volatile int32_t t82 = INT32_MAX;

	t82 = ((x333==x334)+(x335|x336));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x338 = -1;
	int16_t x339 = -7;
	volatile uint16_t x340 = UINT16_MAX;
	volatile int32_t t83 = 1012156264;

	t83 = ((x337==x338)+(x339|x340));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x341 = UINT8_MAX;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t84 = 14494;

	t84 = ((x341==x342)+(x343|x344));

	if (t84 != -32513) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x345 = INT16_MIN;
	int32_t x346 = INT32_MIN;
	int64_t x347 = -1LL;
	volatile uint8_t x348 = 6U;
	volatile int64_t t85 = 2LL;

	t85 = ((x345==x346)+(x347|x348));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x349 = 197U;
	uint16_t x350 = 1U;
	static volatile int64_t x352 = 395353436698989475LL;
	int64_t t86 = 3285154064287324550LL;

	t86 = ((x349==x350)+(x351|x352));

	if (t86 != 395353440403849215LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = INT32_MIN;
	int8_t x354 = 50;
	static int16_t x356 = INT16_MIN;
	int32_t t87 = 286666;

	t87 = ((x353==x354)+(x355|x356));

	if (t87 != -32761) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = INT64_MIN;
	volatile int8_t x358 = INT8_MIN;
	int8_t x359 = -1;
	int16_t x360 = INT16_MIN;
	volatile int32_t t88 = 19;

	t88 = ((x357==x358)+(x359|x360));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = INT16_MIN;
	volatile int8_t x362 = INT8_MIN;
	int64_t x363 = 0LL;
	int64_t x364 = INT64_MIN;
	volatile int64_t t89 = INT64_MIN;

	t89 = ((x361==x362)+(x363|x364));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = INT64_MAX;
	uint16_t x366 = UINT16_MAX;
	int32_t x367 = 100436;
	int64_t x368 = 58LL;

	t90 = ((x365==x366)+(x367|x368));

	if (t90 != 100478LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x370 = INT8_MIN;
	int64_t x372 = INT64_MAX;
	int64_t t91 = -10398930390LL;

	t91 = ((x369==x370)+(x371|x372));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = -27;
	int8_t x375 = -46;
	int16_t x376 = -1;
	volatile int32_t t92 = 2956383;

	t92 = ((x373==x374)+(x375|x376));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x378 = 1LLU;
	int32_t x379 = -1;
	int8_t x380 = 1;

	t93 = ((x377==x378)+(x379|x380));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x381 = INT32_MIN;
	uint16_t x383 = 145U;
	uint8_t x384 = 26U;
	int32_t t94 = 179382;

	t94 = ((x381==x382)+(x383|x384));

	if (t94 != 155) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x385 = INT32_MAX;
	uint16_t x388 = 322U;
	volatile int64_t t95 = 476913733LL;

	t95 = ((x385==x386)+(x387|x388));

	if (t95 != -65723097445708982LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x389 = 54U;
	uint32_t x390 = 45U;
	volatile uint32_t x391 = 36688U;
	static int64_t t96 = -1LL;

	t96 = ((x389==x390)+(x391|x392));

	if (t96 != -9223372036854739120LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x393 = UINT8_MAX;
	int32_t x394 = 4759;
	int64_t x395 = -108LL;
	int8_t x396 = INT8_MIN;
	int64_t t97 = 34759636409LL;

	t97 = ((x393==x394)+(x395|x396));

	if (t97 != -108LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x400 = -1;

	t98 = ((x397==x398)+(x399|x400));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = -2;
	volatile uint32_t x402 = 130883U;
	uint16_t x403 = UINT16_MAX;
	int32_t t99 = -12113;

	t99 = ((x401==x402)+(x403|x404));

	if (t99 != 65535) { NG(); } else { ; }
	
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


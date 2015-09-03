#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 2684U;
uint64_t x9 = UINT64_MAX;
int8_t x13 = INT8_MIN;
uint16_t x14 = 24414U;
static uint8_t x19 = UINT8_MAX;
int16_t x20 = 204;
uint64_t t5 = 6697191896725415194LLU;
volatile int16_t x50 = INT16_MIN;
static int32_t t8 = 16881;
uint16_t x58 = UINT16_MAX;
int64_t x62 = INT64_MIN;
uint64_t t11 = 824748458804165350LLU;
uint16_t x66 = 3374U;
static uint32_t x69 = 1698U;
int32_t x73 = INT32_MIN;
int64_t x74 = -135848LL;
int64_t t14 = 2803LL;
int64_t x94 = INT64_MIN;
int16_t x95 = INT16_MIN;
int8_t x103 = INT8_MIN;
int64_t x107 = INT64_MAX;
int64_t x110 = -1LL;
volatile uint64_t t20 = 150368LLU;
volatile int16_t x119 = INT16_MAX;
uint8_t x132 = 79U;
static int32_t x133 = 512975606;
uint64_t x137 = 447LLU;
int32_t x148 = INT32_MIN;
int8_t x161 = 2;
volatile int64_t x166 = -4159663238354LL;
int8_t x174 = -1;
static int32_t x176 = -261514;
volatile int64_t t33 = -137900965LL;
int16_t x177 = INT16_MAX;
uint64_t t34 = 13350532LLU;
static volatile int8_t x183 = INT8_MIN;
static int8_t x186 = -1;
int64_t x189 = INT64_MAX;
int32_t x191 = -1;
uint32_t x196 = UINT32_MAX;
static volatile uint64_t t38 = 1168538LLU;
int64_t x200 = -1470LL;
static int16_t x209 = INT16_MAX;
int16_t x213 = 196;
static volatile int32_t x220 = INT32_MIN;
int8_t x225 = -1;
volatile uint32_t t46 = 6590626U;
uint32_t x233 = 7052745U;
int32_t x236 = -1;
static int16_t x237 = INT16_MIN;
static volatile uint8_t x241 = UINT8_MAX;
int8_t x242 = INT8_MIN;
int16_t x247 = INT16_MAX;
int8_t x248 = INT8_MAX;
static uint64_t t53 = 6953899442507LLU;
uint8_t x271 = UINT8_MAX;
int32_t t54 = -393585703;
volatile uint64_t t55 = 52LLU;
uint8_t x282 = UINT8_MAX;
uint64_t t58 = 141880621LLU;
static uint8_t x291 = UINT8_MAX;
volatile int32_t x293 = INT32_MIN;
int8_t x295 = INT8_MAX;
int8_t x298 = -1;
int16_t x299 = INT16_MIN;
volatile uint8_t x301 = 27U;
uint16_t x302 = 108U;
uint8_t x304 = 124U;
static int64_t x309 = 936226913706LL;
static volatile uint32_t x311 = 67307U;
volatile int64_t t64 = 1195154LL;
volatile int32_t x324 = INT32_MIN;
int16_t x326 = -1;
int64_t x331 = -4177473322339LL;
int32_t x332 = 675;
static uint16_t x335 = 22U;
static volatile int64_t t69 = 521384740220LL;
uint32_t x338 = 171430076U;
int8_t x340 = INT8_MAX;
int8_t x348 = INT8_MIN;
static volatile int64_t x353 = 728862620LL;
int8_t x355 = -1;
volatile int64_t t75 = -1240052LL;
int8_t x365 = -1;
volatile int8_t x379 = INT8_MIN;
int16_t x383 = INT16_MIN;
uint64_t t80 = 8025797740059LLU;
uint16_t x393 = 13U;
int8_t x394 = -1;
int16_t x397 = -1;
int8_t x401 = INT8_MIN;
int32_t x403 = -1;
uint64_t x404 = 418872804LLU;
int64_t x405 = -1LL;
int32_t x407 = -1;
static int16_t x411 = INT16_MIN;
static int8_t x412 = -46;
static volatile int32_t x436 = -1;
int8_t x454 = -1;
int64_t t91 = -3393768821477337327LL;
volatile int64_t t92 = -252578974LL;
uint32_t x469 = 118963U;
volatile int8_t x471 = INT8_MIN;
static uint64_t x473 = 6306826100180733LLU;
volatile int16_t x480 = INT16_MIN;
volatile uint32_t t95 = 3306U;
uint64_t x481 = 424809935781LLU;
volatile uint64_t t96 = 63667855373232090LLU;
volatile uint8_t x488 = 3U;
static volatile uint64_t t98 = 14LLU;
int16_t x494 = 544;
volatile int16_t x495 = -1;
volatile int64_t t99 = 81438092607258LL;


void f0(void) {
	int64_t x1 = -481LL;
	uint16_t x2 = 2460U;
	int8_t x4 = 0;
	volatile int64_t t0 = 20LL;

	t0 = ((x1|(x2^x3))*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = -1;
	int32_t x11 = INT32_MIN;
	static int32_t x12 = INT32_MAX;
	static volatile uint64_t t1 = 11068809328547177LLU;

	t1 = ((x9|(x10^x11))*x12);

	if (t1 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x15 = INT64_MAX;
	int8_t x16 = INT8_MIN;
	int64_t t2 = -474384LL;

	t2 = ((x13|(x14^x15))*x16);

	if (t2 != 12160LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = -72;
	int64_t x18 = INT64_MIN;
	volatile int64_t t3 = 760322713LL;

	t3 = ((x17|(x18^x19))*x20);

	if (t3 != -204LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = 13U;
	uint64_t x26 = 50LLU;
	int32_t x27 = 3443;
	int32_t x28 = INT32_MAX;
	volatile uint64_t t4 = 508682674785698LLU;

	t4 = ((x25|(x26^x27))*x28);

	if (t4 != 7312181818035LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = 2;
	int16_t x30 = 0;
	volatile uint64_t x31 = UINT64_MAX;
	int8_t x32 = INT8_MIN;

	t5 = ((x29|(x30^x31))*x32);

	if (t5 != 128LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = 7;
	int32_t x43 = -1;
	int8_t x44 = INT8_MIN;
	int64_t t6 = 51914284LL;

	t6 = ((x41|(x42^x43))*x44);

	if (t6 != 128LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = -6033;
	int32_t x46 = INT32_MIN;
	uint16_t x47 = 202U;
	volatile uint32_t x48 = UINT32_MAX;
	uint32_t t7 = 21U;

	t7 = ((x45|(x46^x47))*x48);

	if (t7 != 5905U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x49 = INT16_MIN;
	int32_t x51 = 7858;
	uint16_t x52 = 32367U;

	t8 = ((x49|(x50^x51))*x52);

	if (t8 != -806261970) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = -1;
	uint8_t x55 = 5U;
	uint64_t x56 = 16246466892428LLU;
	uint64_t t9 = 31089LLU;

	t9 = ((x53|(x54^x55))*x56);

	if (t9 != 18446646594908197048LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 1U;
	int8_t x59 = -4;
	int16_t x60 = -1;
	static volatile int32_t t10 = 61;

	t10 = ((x57|(x58^x59))*x60);

	if (t10 != 65533) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x61 = 14LLU;
	static int64_t x63 = 31779LL;
	static int8_t x64 = INT8_MIN;

	t11 = ((x61|(x62^x63))*x64);

	if (t11 != 18446744073705482368LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = INT16_MAX;
	static int8_t x67 = -60;
	int32_t x68 = 1043;
	static volatile int32_t t12 = 3;

	t12 = ((x65|(x66^x67))*x68);

	if (t12 != -1043) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x70 = 224U;
	volatile int16_t x71 = -1;
	uint32_t x72 = 1329370U;
	volatile uint32_t t13 = 71348U;

	t13 = ((x69|(x70^x71))*x72);

	if (t13 != 4208558246U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x75 = -1;
	static volatile uint32_t x76 = 146490U;

	t14 = ((x73|(x74^x75))*x76);

	if (t14 != -314564979368490LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = 0;
	int16_t x78 = -1;
	uint16_t x79 = 740U;
	static int16_t x80 = -1;
	volatile int32_t t15 = 2;

	t15 = ((x77|(x78^x79))*x80);

	if (t15 != 741) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x89 = 62LL;
	int64_t x90 = INT64_MAX;
	volatile int64_t x91 = -1LL;
	volatile int32_t x92 = -1;
	static volatile int64_t t16 = -5813561824808LL;

	t16 = ((x89|(x90^x91))*x92);

	if (t16 != 9223372036854775746LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x93 = UINT64_MAX;
	int64_t x96 = INT64_MIN;
	volatile uint64_t t17 = 458511086955LLU;

	t17 = ((x93|(x94^x95))*x96);

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x101 = 3U;
	int64_t x102 = 5747119808LL;
	volatile int8_t x104 = -1;
	static volatile int64_t t18 = 12277361330211LL;

	t18 = ((x101|(x102^x103))*x104);

	if (t18 != 5747119805LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x105 = 2U;
	static volatile int16_t x106 = INT16_MIN;
	int64_t x108 = -1LL;
	volatile int64_t t19 = -71043283939419LL;

	t19 = ((x105|(x106^x107))*x108);

	if (t19 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = 5;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = 2159215805356LLU;

	t20 = ((x109|(x110^x111))*x112);

	if (t20 != 274220407280212LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x113 = 21011054252144LLU;
	volatile int16_t x114 = INT16_MIN;
	static uint8_t x115 = 1U;
	int8_t x116 = 3;
	uint64_t t21 = 92LLU;

	t21 = ((x113|(x114^x115))*x116);

	if (t21 != 18446744073709515091LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = 6607;
	volatile int8_t x118 = -1;
	volatile int64_t x120 = 5LL;
	static int64_t t22 = -350LL;

	t22 = ((x117|(x118^x119))*x120);

	if (t22 != -130805LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = 105367949398472466LLU;
	int64_t x122 = -15356070LL;
	int8_t x123 = INT8_MAX;
	uint8_t x124 = 43U;
	uint64_t t23 = 3264877LLU;

	t23 = ((x121|(x122^x123))*x124);

	if (t23 != 18446744073439010365LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = -10685;
	int8_t x126 = INT8_MIN;
	uint32_t x127 = 637032U;
	static volatile int8_t x128 = INT8_MIN;
	uint32_t t24 = 2952053U;

	t24 = ((x125|(x126^x127))*x128);

	if (t24 != 1313408U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = -1;
	static int32_t x130 = INT32_MIN;
	int16_t x131 = INT16_MIN;
	volatile int32_t t25 = 27;

	t25 = ((x129|(x130^x131))*x132);

	if (t25 != -79) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x134 = -1LL;
	uint64_t x135 = UINT64_MAX;
	int32_t x136 = -41922;
	uint64_t t26 = 435LLU;

	t26 = ((x133|(x134^x135))*x136);

	if (t26 != 18446722568746196884LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x138 = 15U;
	int64_t x139 = -5970914099143074LL;
	volatile uint64_t x140 = 1507733728LLU;
	static uint64_t t27 = 111749457045525149LLU;

	t27 = ((x137|(x138^x139))*x140);

	if (t27 != 15936024352632721184LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = -37;
	int64_t x146 = INT64_MIN;
	uint8_t x147 = 1U;
	volatile int64_t t28 = -122179706022481LL;

	t28 = ((x145|(x146^x147))*x148);

	if (t28 != 79456894976LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = INT32_MIN;
	int8_t x150 = 2;
	volatile uint32_t x151 = 1227138976U;
	uint16_t x152 = 3U;
	volatile uint32_t t29 = 470366512U;

	t29 = ((x149|(x150^x151))*x152);

	if (t29 != 1533933286U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x153 = -1;
	volatile uint16_t x154 = UINT16_MAX;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = UINT8_MAX;
	int32_t t30 = -68774;

	t30 = ((x153|(x154^x155))*x156);

	if (t30 != -255) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x162 = 896399U;
	volatile uint8_t x163 = 7U;
	uint8_t x164 = 68U;
	static uint32_t t31 = 224733529U;

	t31 = ((x161|(x162^x163))*x164);

	if (t31 != 60954792U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x165 = INT16_MIN;
	int32_t x167 = -1;
	uint32_t x168 = UINT32_MAX;
	int64_t t32 = -1LL;

	t32 = ((x165|(x166^x167))*x168);

	if (t32 != -21092584385745LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = INT16_MIN;
	int64_t x175 = INT64_MIN;

	t33 = ((x173|(x174^x175))*x176);

	if (t33 != 261514LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x178 = UINT8_MAX;
	uint64_t x179 = UINT64_MAX;
	static int32_t x180 = -1;

	t34 = ((x177|(x178^x179))*x180);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x181 = UINT16_MAX;
	volatile int8_t x182 = INT8_MAX;
	static uint32_t x184 = UINT32_MAX;
	volatile uint32_t t35 = 4973U;

	t35 = ((x181|(x182^x183))*x184);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x185 = 7U;
	int8_t x187 = 1;
	uint64_t x188 = 329LLU;
	volatile uint64_t t36 = 1LLU;

	t36 = ((x185|(x186^x187))*x188);

	if (t36 != 18446744073709551287LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x190 = 4;
	int32_t x192 = -1;
	volatile int64_t t37 = -12997419335594LL;

	t37 = ((x189|(x190^x191))*x192);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x194 = INT8_MAX;
	int64_t x195 = 17420574866292251LL;

	t38 = ((x193|(x194^x195))*x196);

	if (t38 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x197 = INT16_MIN;
	int8_t x198 = -1;
	uint32_t x199 = 1752U;
	int64_t t39 = 13819674640056232LL;

	t39 = ((x197|(x198^x199))*x200);

	if (t39 != -6313599348210LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x201 = INT16_MAX;
	int64_t x202 = -100710512LL;
	volatile uint8_t x203 = UINT8_MAX;
	int32_t x204 = INT32_MIN;
	volatile int64_t t40 = -5434440465987LL;

	t40 = ((x201|(x202^x203))*x204);

	if (t40 != 216243153005445120LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x210 = INT32_MIN;
	int64_t x211 = -1661LL;
	uint16_t x212 = 0U;
	int64_t t41 = 237107631399630829LL;

	t41 = ((x209|(x210^x211))*x212);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x214 = 75190921U;
	int16_t x215 = INT16_MAX;
	volatile uint16_t x216 = UINT16_MAX;
	static uint32_t t42 = 561481U;

	t42 = ((x213|(x214^x215))*x216);

	if (t42 != 695915018U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	volatile int64_t x219 = INT64_MIN;
	volatile int64_t t43 = -273393604209714971LL;

	t43 = ((x217|(x218^x219))*x220);

	if (t43 != 274877906944LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = INT8_MIN;
	uint32_t x222 = UINT32_MAX;
	uint64_t x223 = 1648LLU;
	uint32_t x224 = 8931974U;
	uint64_t t44 = 1453059LLU;

	t44 = ((x221|(x222^x223))*x224);

	if (t44 != 18446744072700238554LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x226 = 181249194;
	int8_t x227 = 2;
	static uint16_t x228 = UINT16_MAX;
	volatile int32_t t45 = 24;

	t45 = ((x225|(x226^x227))*x228);

	if (t45 != -65535) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x229 = 4U;
	static volatile int8_t x230 = INT8_MIN;
	uint32_t x231 = UINT32_MAX;
	int16_t x232 = 8;

	t46 = ((x229|(x230^x231))*x232);

	if (t46 != 1016U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MAX;
	int64_t t47 = 1523LL;

	t47 = ((x233|(x234^x235))*x236);

	if (t47 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x238 = INT16_MIN;
	int32_t x239 = INT32_MIN;
	static int32_t x240 = 0;
	int32_t t48 = 18238;

	t48 = ((x237|(x238^x239))*x240);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x243 = INT64_MAX;
	int8_t x244 = 1;
	volatile int64_t t49 = -4471399757129284LL;

	t49 = ((x241|(x242^x243))*x244);

	if (t49 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x245 = 42494319547266047LL;
	uint16_t x246 = 1U;
	static volatile int64_t t50 = 445504LL;

	t50 = ((x245|(x246^x247))*x248);

	if (t50 != 5396778582505258881LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x249 = 1377U;
	volatile uint64_t x250 = UINT64_MAX;
	static volatile uint16_t x251 = 848U;
	int32_t x252 = -16534220;
	uint64_t t51 = 50950118LLU;

	t51 = ((x249|(x250^x251))*x252);

	if (t51 != 8746602380LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x253 = UINT8_MAX;
	volatile uint32_t x254 = 85794503U;
	int32_t x255 = INT32_MAX;
	uint16_t x256 = UINT16_MAX;
	uint32_t t52 = 60697U;

	t52 = ((x253|(x254^x255))*x256);

	if (t52 != 1729895937U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x261 = 1;
	int32_t x262 = 177972203;
	uint16_t x263 = UINT16_MAX;
	uint64_t x264 = 215616187211836LLU;

	t53 = ((x261|(x262^x263))*x264);

	if (t53 != 494985552187569388LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x269 = 0;
	uint8_t x270 = UINT8_MAX;
	volatile int32_t x272 = 24644;

	t54 = ((x269|(x270^x271))*x272);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x273 = -1;
	static uint64_t x274 = 1097235890720978LLU;
	int16_t x275 = INT16_MIN;
	uint16_t x276 = UINT16_MAX;

	t55 = ((x273|(x274^x275))*x276);

	if (t55 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x277 = -1LL;
	uint16_t x278 = UINT16_MAX;
	static int16_t x279 = -1675;
	static volatile int64_t x280 = -1069574LL;
	int64_t t56 = 4630180LL;

	t56 = ((x277|(x278^x279))*x280);

	if (t56 != 1069574LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x281 = INT16_MIN;
	int8_t x283 = INT8_MIN;
	static int16_t x284 = 6;
	int32_t t57 = 125852;

	t57 = ((x281|(x282^x283))*x284);

	if (t57 != -774) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x285 = UINT8_MAX;
	uint16_t x286 = UINT16_MAX;
	int8_t x287 = -1;
	uint64_t x288 = 4252582LLU;

	t58 = ((x285|(x286^x287))*x288);

	if (t58 != 18446743796096746074LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x289 = 988U;
	volatile int16_t x290 = -1;
	uint64_t x292 = 904860533291LLU;
	uint64_t t59 = 95439084LLU;

	t59 = ((x289|(x290^x291))*x292);

	if (t59 != 18446711498730353140LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x294 = -1LL;
	int32_t x296 = -1;
	volatile int64_t t60 = 31538737295346LL;

	t60 = ((x293|(x294^x295))*x296);

	if (t60 != 128LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x297 = 12154U;
	static uint16_t x300 = 6572U;
	static volatile int32_t t61 = -828;

	t61 = ((x297|(x298^x299))*x300);

	if (t61 != 215344724) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x303 = UINT64_MAX;
	volatile uint64_t t62 = 58271LLU;

	t62 = ((x301|(x302^x303))*x304);

	if (t62 != 18446744073709539092LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x310 = -1050345184;
	static int32_t x312 = -13;
	volatile int64_t t63 = -464868460243056LL;

	t63 = ((x309|(x310^x311))*x312);

	if (t63 != -12170953293551LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x313 = 0;
	int8_t x314 = INT8_MAX;
	static uint32_t x315 = 4258614U;
	static volatile int64_t x316 = -1LL;

	t64 = ((x313|(x314^x315))*x316);

	if (t64 != -4258633LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = -33012132;
	uint8_t x318 = 4U;
	static uint32_t x319 = 20178U;
	uint8_t x320 = UINT8_MAX;
	volatile uint32_t t65 = 8728595U;

	t65 = ((x317|(x318^x319))*x320);

	if (t65 != 172396322U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x321 = 63271909LLU;
	int16_t x322 = INT16_MAX;
	int16_t x323 = -1;
	volatile uint64_t t66 = 24672056LLU;

	t66 = ((x321|(x322^x323))*x324);

	if (t66 != 6655051825152LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x325 = 0U;
	uint64_t x327 = UINT64_MAX;
	static int32_t x328 = -5;
	uint64_t t67 = 82722069926636LLU;

	t67 = ((x325|(x326^x327))*x328);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x329 = 9LLU;
	uint32_t x330 = UINT32_MAX;
	uint64_t t68 = 3LLU;

	t68 = ((x329|(x330^x331))*x332);

	if (t68 != 18443925113013399841LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x333 = -1LL;
	static int16_t x334 = INT16_MAX;
	static int16_t x336 = INT16_MAX;

	t69 = ((x333|(x334^x335))*x336);

	if (t69 != -32767LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x337 = 0U;
	volatile int64_t x339 = 191028769555456LL;
	volatile int64_t t70 = 6330088267LL;

	t70 = ((x337|(x338^x339))*x340);

	if (t70 != 24260640556583236LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x345 = UINT16_MAX;
	int16_t x346 = 10;
	static int8_t x347 = 6;
	volatile int32_t t71 = -172;

	t71 = ((x345|(x346^x347))*x348);

	if (t71 != -8388480) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x349 = -1;
	int64_t x350 = INT64_MIN;
	int32_t x351 = INT32_MAX;
	int8_t x352 = INT8_MAX;
	volatile int64_t t72 = -19782900935478LL;

	t72 = ((x349|(x350^x351))*x352);

	if (t72 != -127LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x354 = -1;
	int32_t x356 = 13796570;
	volatile int64_t t73 = 42LL;

	t73 = ((x353|(x354^x355))*x356);

	if (t73 != 10055804157213400LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x357 = -1;
	int64_t x358 = 24648LL;
	volatile uint16_t x359 = UINT16_MAX;
	uint64_t x360 = 6LLU;
	uint64_t t74 = 41373616LLU;

	t74 = ((x357|(x358^x359))*x360);

	if (t74 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x361 = INT16_MIN;
	volatile int32_t x362 = -761;
	int64_t x363 = -7438LL;
	volatile uint8_t x364 = 94U;

	t75 = ((x361|(x362^x363))*x364);

	if (t75 != -2311178LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x366 = INT64_MIN;
	int32_t x367 = INT32_MIN;
	int32_t x368 = INT32_MIN;
	static int64_t t76 = 2LL;

	t76 = ((x365|(x366^x367))*x368);

	if (t76 != 2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x373 = 59U;
	uint32_t x374 = 41691958U;
	static int8_t x375 = INT8_MIN;
	volatile uint32_t x376 = UINT32_MAX;
	uint32_t t77 = 4U;

	t77 = ((x373|(x374^x375))*x376);

	if (t77 != 41691969U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x377 = 3LLU;
	uint32_t x378 = 7943895U;
	volatile int64_t x380 = 1607822084482622817LL;
	volatile uint64_t t78 = 0LLU;

	t78 = ((x377|(x378^x379))*x380);

	if (t78 != 4891193341013433591LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x381 = 5;
	int8_t x382 = -14;
	uint64_t x384 = 465992400LLU;
	uint64_t t79 = 1835418571LLU;

	t79 = ((x381|(x382^x383))*x384);

	if (t79 != 15265445031600LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x385 = UINT64_MAX;
	int32_t x386 = INT32_MAX;
	uint32_t x387 = 453U;
	uint64_t x388 = 12798LLU;

	t80 = ((x385|(x386^x387))*x388);

	if (t80 != 18446744073709538818LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x389 = -2;
	int16_t x390 = -1756;
	volatile uint32_t x391 = UINT32_MAX;
	volatile int8_t x392 = INT8_MIN;
	volatile uint32_t t81 = 50295U;

	t81 = ((x389|(x390^x391))*x392);

	if (t81 != 128U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x395 = INT16_MAX;
	volatile int16_t x396 = 68;
	volatile int32_t t82 = 9;

	t82 = ((x393|(x394^x395))*x396);

	if (t82 != -2227340) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x398 = INT64_MIN;
	int64_t x399 = 12548365LL;
	int16_t x400 = -1;
	volatile int64_t t83 = -83956920732LL;

	t83 = ((x397|(x398^x399))*x400);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x402 = INT16_MAX;
	static volatile uint64_t t84 = 88734562LLU;

	t84 = ((x401|(x402^x403))*x404);

	if (t84 != 18446744020093832704LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x406 = 2U;
	static uint64_t x408 = 21LLU;
	volatile uint64_t t85 = 16234385373LLU;

	t85 = ((x405|(x406^x407))*x408);

	if (t85 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x409 = INT8_MAX;
	uint16_t x410 = 26U;
	static int32_t t86 = 1777283;

	t86 = ((x409|(x410^x411))*x412);

	if (t86 != 1501486) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x413 = -1;
	uint32_t x414 = 279U;
	int64_t x415 = INT64_MAX;
	int8_t x416 = INT8_MAX;
	volatile int64_t t87 = 2807899LL;

	t87 = ((x413|(x414^x415))*x416);

	if (t87 != -127LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x425 = UINT8_MAX;
	static int8_t x426 = INT8_MAX;
	int16_t x427 = -1;
	uint8_t x428 = UINT8_MAX;
	static int32_t t88 = -1276996;

	t88 = ((x425|(x426^x427))*x428);

	if (t88 != -255) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x433 = 63U;
	int64_t x434 = INT64_MAX;
	uint32_t x435 = 7940992U;
	volatile int64_t t89 = 0LL;

	t89 = ((x433|(x434^x435))*x436);

	if (t89 != -9223372036846834815LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x445 = UINT64_MAX;
	static int64_t x446 = INT64_MIN;
	int8_t x447 = 2;
	int64_t x448 = -14579110711LL;
	uint64_t t90 = 1589538864LLU;

	t90 = ((x445|(x446^x447))*x448);

	if (t90 != 14579110711LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x453 = 781890812;
	uint8_t x455 = UINT8_MAX;
	volatile int64_t x456 = -299424375LL;

	t91 = ((x453|(x454^x455))*x456);

	if (t91 != 1197697500LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x465 = 482;
	static int8_t x466 = INT8_MIN;
	uint8_t x467 = 3U;
	static int64_t x468 = 55LL;

	t92 = ((x465|(x466^x467))*x468);

	if (t92 != -1595LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x470 = 3941126297210LL;
	uint16_t x472 = UINT16_MAX;
	volatile int64_t t93 = 404LL;

	t93 = ((x469|(x470^x471))*x472);

	if (t93 != -258281708390382075LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x474 = 5672291441955279LL;
	int16_t x475 = INT16_MIN;
	volatile int64_t x476 = INT64_MIN;
	volatile uint64_t t94 = 413289634LLU;

	t94 = ((x473|(x474^x475))*x476);

	if (t94 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x477 = UINT32_MAX;
	int32_t x478 = INT32_MIN;
	int8_t x479 = 9;

	t95 = ((x477|(x478^x479))*x480);

	if (t95 != 32768U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x482 = INT64_MIN;
	int16_t x483 = -1;
	int16_t x484 = -1;

	t96 = ((x481|(x482^x483))*x484);

	if (t96 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x485 = -1;
	int64_t x486 = -394708611878LL;
	static int64_t x487 = 5LL;
	static int64_t t97 = -4413739299973564LL;

	t97 = ((x485|(x486^x487))*x488);

	if (t97 != -3LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x489 = UINT64_MAX;
	int16_t x490 = INT16_MAX;
	int8_t x491 = 43;
	static volatile int32_t x492 = INT32_MAX;

	t98 = ((x489|(x490^x491))*x492);

	if (t98 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x493 = INT64_MIN;
	int8_t x496 = INT8_MAX;

	t99 = ((x493|(x494^x495))*x496);

	if (t99 != -69215LL) { NG(); } else { ; }
	
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


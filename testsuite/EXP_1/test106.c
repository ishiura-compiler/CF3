#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 0U;
uint32_t x7 = 5585022U;
volatile int8_t x17 = -1;
uint8_t x20 = UINT8_MAX;
uint64_t x23 = 209819184845LLU;
static uint32_t x27 = UINT32_MAX;
int64_t x29 = -5LL;
volatile int64_t x30 = 5414LL;
int8_t x34 = INT8_MAX;
static int32_t x43 = -3;
uint32_t x44 = 21338U;
uint32_t x49 = 427510U;
int64_t x53 = INT64_MAX;
int8_t x59 = INT8_MIN;
uint16_t x60 = 121U;
int32_t x63 = 14339267;
volatile int32_t t14 = 92786;
volatile uint32_t x68 = UINT32_MAX;
uint32_t t15 = 1797781435U;
int8_t x71 = INT8_MIN;
volatile int8_t x75 = -1;
int64_t x81 = INT64_MIN;
int64_t x83 = -14639LL;
int16_t x84 = INT16_MAX;
uint32_t x86 = 1907U;
uint8_t x94 = UINT8_MAX;
uint64_t x98 = 101197511366066993LLU;
uint8_t x100 = 58U;
volatile int32_t t22 = 726;
volatile int8_t x114 = INT8_MIN;
volatile int32_t x117 = -1;
static int64_t x122 = INT64_MIN;
int64_t x124 = 3423922726LL;
volatile int16_t x125 = INT16_MIN;
volatile int32_t t30 = -1772;
static volatile uint32_t x138 = 47606876U;
uint16_t x140 = UINT16_MAX;
static uint32_t x154 = UINT32_MAX;
static int64_t x158 = 249676027LL;
int64_t x172 = INT64_MAX;
static int64_t t35 = 17LL;
volatile int32_t x177 = -4056250;
uint8_t x183 = UINT8_MAX;
static int16_t x193 = 16305;
uint64_t x215 = 225LLU;
static int8_t x217 = 1;
static int8_t x219 = INT8_MIN;
static int8_t x220 = INT8_MIN;
int32_t x231 = 3803;
volatile int8_t x243 = 37;
static volatile int64_t x244 = INT64_MAX;
int8_t x245 = -1;
int64_t x253 = 98795LL;
int32_t t51 = 718710754;
volatile int32_t x262 = 95;
int8_t x265 = -39;
static int32_t t53 = 991386;
static int16_t x274 = -1;
static int64_t x281 = -1LL;
int16_t x282 = INT16_MIN;
volatile int16_t x284 = INT16_MAX;
int16_t x285 = -1;
volatile int8_t x294 = 7;
uint32_t x295 = 789U;
uint16_t x301 = 7U;
volatile int16_t x302 = INT16_MIN;
uint32_t x307 = UINT32_MAX;
int8_t x310 = INT8_MIN;
int64_t x323 = -1LL;
uint64_t x331 = 513774003397245LLU;
int8_t x344 = 1;
int8_t x348 = 3;
volatile int32_t t72 = -31747074;
uint32_t x395 = UINT32_MAX;
volatile uint16_t x398 = 5454U;
volatile uint32_t x399 = UINT32_MAX;
static int32_t t80 = -27042;
uint32_t x410 = 206390U;
uint32_t t81 = 11090U;
int32_t t83 = -198781;
int16_t x426 = -3;
uint16_t x427 = UINT16_MAX;
volatile uint64_t t84 = 1692763LLU;
static int8_t x430 = -11;
int32_t x447 = INT32_MIN;
int32_t x457 = INT32_MAX;
uint64_t x458 = UINT64_MAX;
static int32_t x461 = INT32_MIN;
static uint8_t x464 = UINT8_MAX;
volatile int32_t x481 = -1;
static volatile uint64_t x486 = 3392785705788LLU;
static int32_t t98 = 5163;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	volatile uint8_t x2 = 29U;
	int16_t x3 = -1;
	int32_t x4 = 1;
	volatile int32_t t0 = -1;

	t0 = (((x1+x2)<x3)-x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MAX;
	int64_t x8 = 22434067144428515LL;
	int64_t t1 = -528746233105LL;

	t1 = (((x5+x6)<x7)-x8);

	if (t1 != -22434067144428514LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int64_t x10 = INT64_MAX;
	int64_t x11 = INT64_MIN;
	static uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 870446597LLU;

	t2 = (((x9+x10)<x11)-x12);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -936;
	static int8_t x14 = INT8_MIN;
	int32_t x15 = INT32_MIN;
	volatile int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -1114882;

	t3 = (((x13+x14)<x15)-x16);

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -9;
	uint32_t x19 = UINT32_MAX;
	int32_t t4 = 1;

	t4 = (((x17+x18)<x19)-x20);

	if (t4 != -254) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static uint64_t x22 = UINT64_MAX;
	static volatile int16_t x24 = INT16_MIN;
	int32_t t5 = -7877170;

	t5 = (((x21+x22)<x23)-x24);

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int64_t x26 = -15LL;
	int64_t x28 = -1LL;
	int64_t t6 = 12610299557310LL;

	t6 = (((x25+x26)<x27)-x28);

	if (t6 != 2LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x31 = INT16_MIN;
	int8_t x32 = -1;
	int32_t t7 = -3;

	t7 = (((x29+x30)<x31)-x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 191U;
	int32_t x35 = INT32_MIN;
	static int8_t x36 = 2;
	volatile int32_t t8 = 469;

	t8 = (((x33+x34)<x35)-x36);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 14959;
	int64_t x42 = -1LL;
	static volatile uint32_t t9 = 27U;

	t9 = (((x41+x42)<x43)-x44);

	if (t9 != 4294945958U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 124113813223LLU;
	int64_t x46 = INT64_MAX;
	volatile int64_t x47 = INT64_MIN;
	volatile int64_t x48 = INT64_MAX;
	static int64_t t10 = -3760395148662237LL;

	t10 = (((x45+x46)<x47)-x48);

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x50 = 0U;
	int16_t x51 = 542;
	volatile uint16_t x52 = UINT16_MAX;
	static volatile int32_t t11 = -15436;

	t11 = (((x49+x50)<x51)-x52);

	if (t11 != -65535) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MAX;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t12 = 5;

	t12 = (((x53+x54)<x55)-x56);

	if (t12 != -255) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MAX;
	int32_t x58 = 181911;
	int32_t t13 = 104280;

	t13 = (((x57+x58)<x59)-x60);

	if (t13 != -121) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MAX;
	int8_t x62 = -1;
	static int16_t x64 = -4;

	t14 = (((x61+x62)<x63)-x64);

	if (t14 != 5) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 16;
	int8_t x66 = -1;
	int8_t x67 = INT8_MIN;

	t15 = (((x65+x66)<x67)-x68);

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 2009906874U;
	int16_t x70 = INT16_MAX;
	uint64_t x72 = UINT64_MAX;
	static volatile uint64_t t16 = 14LLU;

	t16 = (((x69+x70)<x71)-x72);

	if (t16 != 2LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = UINT32_MAX;
	uint16_t x74 = 964U;
	static int32_t x76 = -125;
	int32_t t17 = -9577;

	t17 = (((x73+x74)<x75)-x76);

	if (t17 != 126) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = -51;
	static uint32_t x78 = 31400U;
	static int8_t x79 = INT8_MIN;
	static uint16_t x80 = 17U;
	volatile int32_t t18 = -184006685;

	t18 = (((x77+x78)<x79)-x80);

	if (t18 != -16) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x82 = INT64_MAX;
	volatile int32_t t19 = 3295048;

	t19 = (((x81+x82)<x83)-x84);

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 1U;
	int16_t x87 = -12;
	uint32_t x88 = 728U;
	uint32_t t20 = 21U;

	t20 = (((x85+x86)<x87)-x88);

	if (t20 != 4294966569U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MAX;
	static int8_t x95 = -1;
	int8_t x96 = INT8_MIN;
	int32_t t21 = 681027;

	t21 = (((x93+x94)<x95)-x96);

	if (t21 != 128) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 220000749LLU;
	int32_t x99 = INT32_MAX;

	t22 = (((x97+x98)<x99)-x100);

	if (t22 != -58) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x101 = 27458U;
	int16_t x102 = 6;
	int8_t x103 = -1;
	volatile int8_t x104 = INT8_MIN;
	volatile int32_t t23 = -570043;

	t23 = (((x101+x102)<x103)-x104);

	if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -376941LL;
	int8_t x106 = -1;
	int8_t x107 = INT8_MIN;
	static int8_t x108 = INT8_MAX;
	int32_t t24 = 1206;

	t24 = (((x105+x106)<x107)-x108);

	if (t24 != -126) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x109 = 37U;
	int16_t x110 = -1;
	uint8_t x111 = 30U;
	int8_t x112 = 0;
	int32_t t25 = -196491557;

	t25 = (((x109+x110)<x111)-x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x113 = INT32_MAX;
	uint8_t x115 = 5U;
	int32_t x116 = -95046198;
	int32_t t26 = -206;

	t26 = (((x113+x114)<x115)-x116);

	if (t26 != 95046198) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x118 = -1LL;
	uint8_t x119 = 29U;
	int16_t x120 = INT16_MAX;
	static volatile int32_t t27 = -124;

	t27 = (((x117+x118)<x119)-x120);

	if (t27 != -32766) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = 12;
	int8_t x123 = INT8_MIN;
	int64_t t28 = 1LL;

	t28 = (((x121+x122)<x123)-x124);

	if (t28 != -3423922725LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x126 = -1;
	static int64_t x127 = 262052019203LL;
	int8_t x128 = INT8_MAX;
	int32_t t29 = 1;

	t29 = (((x125+x126)<x127)-x128);

	if (t29 != -126) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = -1416006928930067083LL;
	int8_t x134 = INT8_MAX;
	int32_t x135 = 4658;
	int32_t x136 = INT32_MAX;

	t30 = (((x133+x134)<x135)-x136);

	if (t30 != -2147483646) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x137 = INT32_MAX;
	int32_t x139 = -1;
	int32_t t31 = 9872897;

	t31 = (((x137+x138)<x139)-x140);

	if (t31 != -65534) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x145 = 2U;
	volatile int8_t x146 = -3;
	int32_t x147 = INT32_MIN;
	int64_t x148 = INT64_MAX;
	volatile int64_t t32 = 11LL;

	t32 = (((x145+x146)<x147)-x148);

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = INT8_MIN;
	uint16_t x155 = 1144U;
	uint64_t x156 = 447038173LLU;
	uint64_t t33 = 1LLU;

	t33 = (((x153+x154)<x155)-x156);

	if (t33 != 18446744073262513443LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = INT32_MIN;
	int64_t x159 = -1LL;
	int8_t x160 = INT8_MIN;
	volatile int32_t t34 = 333;

	t34 = (((x157+x158)<x159)-x160);

	if (t34 != 129) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x169 = 6884432352326363LLU;
	uint8_t x170 = 1U;
	int32_t x171 = INT32_MAX;

	t35 = (((x169+x170)<x171)-x172);

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x173 = 5U;
	int8_t x174 = -1;
	int16_t x175 = -1;
	int8_t x176 = -1;
	volatile int32_t t36 = 0;

	t36 = (((x173+x174)<x175)-x176);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x178 = 121731195U;
	static uint64_t x179 = 933861883LLU;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t37 = -370423751;

	t37 = (((x177+x178)<x179)-x180);

	if (t37 != 32769) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x181 = 830370408LLU;
	volatile int64_t x182 = -1LL;
	int8_t x184 = 1;
	int32_t t38 = 12441072;

	t38 = (((x181+x182)<x183)-x184);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x189 = -48;
	int16_t x190 = 81;
	uint16_t x191 = 182U;
	uint64_t x192 = 109055255LLU;
	volatile uint64_t t39 = 2020LLU;

	t39 = (((x189+x190)<x191)-x192);

	if (t39 != 18446744073600496362LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x194 = 191563U;
	volatile uint64_t x195 = UINT64_MAX;
	int8_t x196 = INT8_MIN;
	volatile int32_t t40 = 1567665;

	t40 = (((x193+x194)<x195)-x196);

	if (t40 != 129) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MAX;
	uint64_t x199 = UINT64_MAX;
	int8_t x200 = -1;
	int32_t t41 = 2765;

	t41 = (((x197+x198)<x199)-x200);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = -1709;
	int8_t x210 = INT8_MAX;
	uint32_t x211 = 6816903U;
	int32_t x212 = 8;
	volatile int32_t t42 = -18930;

	t42 = (((x209+x210)<x211)-x212);

	if (t42 != -8) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = -1;
	static int16_t x214 = INT16_MIN;
	volatile int8_t x216 = -1;
	int32_t t43 = 15658596;

	t43 = (((x213+x214)<x215)-x216);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x218 = -1;
	static int32_t t44 = -69747;

	t44 = (((x217+x218)<x219)-x220);

	if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x225 = 1232935216LLU;
	int8_t x226 = -1;
	static int16_t x227 = INT16_MAX;
	int8_t x228 = 1;
	volatile int32_t t45 = 179;

	t45 = (((x225+x226)<x227)-x228);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x229 = -1;
	volatile uint32_t x230 = 2127U;
	static int64_t x232 = INT64_MAX;
	volatile int64_t t46 = 95361LL;

	t46 = (((x229+x230)<x231)-x232);

	if (t46 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = -1;
	int16_t x234 = INT16_MIN;
	volatile int32_t x235 = INT32_MIN;
	uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t47 = 1871044829125LLU;

	t47 = (((x233+x234)<x235)-x236);

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x241 = 6;
	static volatile uint8_t x242 = UINT8_MAX;
	static volatile int64_t t48 = 30398643541386LL;

	t48 = (((x241+x242)<x243)-x244);

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x246 = 259350LLU;
	static int32_t x247 = INT32_MAX;
	int16_t x248 = INT16_MAX;
	int32_t t49 = 964985682;

	t49 = (((x245+x246)<x247)-x248);

	if (t49 != -32766) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x249 = -346336LL;
	static uint16_t x250 = UINT16_MAX;
	uint64_t x251 = 136274341461469LLU;
	int8_t x252 = -1;
	static volatile int32_t t50 = -42375597;

	t50 = (((x249+x250)<x251)-x252);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x254 = 59U;
	uint16_t x255 = 1340U;
	int16_t x256 = INT16_MIN;

	t51 = (((x253+x254)<x255)-x256);

	if (t51 != 32768) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x261 = INT8_MIN;
	static int16_t x263 = -1;
	volatile int64_t x264 = INT64_MAX;
	int64_t t52 = -267LL;

	t52 = (((x261+x262)<x263)-x264);

	if (t52 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x266 = INT8_MIN;
	static int16_t x267 = INT16_MIN;
	uint8_t x268 = UINT8_MAX;

	t53 = (((x265+x266)<x267)-x268);

	if (t53 != -255) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x269 = 227596633;
	int8_t x270 = INT8_MIN;
	int8_t x271 = -1;
	uint16_t x272 = 2270U;
	int32_t t54 = -977;

	t54 = (((x269+x270)<x271)-x272);

	if (t54 != -2270) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x273 = INT32_MAX;
	volatile int16_t x275 = INT16_MIN;
	uint8_t x276 = 4U;
	volatile int32_t t55 = -375333002;

	t55 = (((x273+x274)<x275)-x276);

	if (t55 != -4) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x277 = 3007245546301359242LLU;
	int32_t x278 = -1840124;
	int32_t x279 = 1;
	uint32_t x280 = UINT32_MAX;
	volatile uint32_t t56 = 468U;

	t56 = (((x277+x278)<x279)-x280);

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x283 = UINT16_MAX;
	static int32_t t57 = -5081245;

	t57 = (((x281+x282)<x283)-x284);

	if (t57 != -32766) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x286 = INT16_MIN;
	uint32_t x287 = 5266633U;
	int64_t x288 = 96060LL;
	volatile int64_t t58 = 3542822684782LL;

	t58 = (((x285+x286)<x287)-x288);

	if (t58 != -96060LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x289 = UINT16_MAX;
	static uint8_t x290 = 4U;
	int64_t x291 = -1151632296555LL;
	uint32_t x292 = 103U;
	volatile uint32_t t59 = 1569136111U;

	t59 = (((x289+x290)<x291)-x292);

	if (t59 != 4294967193U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x293 = 37U;
	static int16_t x296 = -1;
	int32_t t60 = 822883;

	t60 = (((x293+x294)<x295)-x296);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x303 = -224257894799LL;
	int16_t x304 = -6;
	int32_t t61 = -1;

	t61 = (((x301+x302)<x303)-x304);

	if (t61 != 6) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int16_t x306 = -1;
	int8_t x308 = -2;
	int32_t t62 = 989995262;

	t62 = (((x305+x306)<x307)-x308);

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x309 = UINT32_MAX;
	volatile int8_t x311 = -40;
	int16_t x312 = 4;
	volatile int32_t t63 = 215;

	t63 = (((x309+x310)<x311)-x312);

	if (t63 != -3) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x313 = INT8_MIN;
	uint8_t x314 = 116U;
	int32_t x315 = 48121350;
	int32_t x316 = -45533335;
	volatile int32_t t64 = -990495994;

	t64 = (((x313+x314)<x315)-x316);

	if (t64 != 45533336) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x321 = -1;
	static volatile uint16_t x322 = 31822U;
	int64_t x324 = -1LL;
	volatile int64_t t65 = 138205427LL;

	t65 = (((x321+x322)<x323)-x324);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x325 = 3257120U;
	uint32_t x326 = 771328929U;
	volatile uint32_t x327 = 63378U;
	volatile int8_t x328 = 0;
	volatile int32_t t66 = 32;

	t66 = (((x325+x326)<x327)-x328);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x329 = -1;
	uint8_t x330 = 49U;
	uint16_t x332 = UINT16_MAX;
	int32_t t67 = 491;

	t67 = (((x329+x330)<x331)-x332);

	if (t67 != -65534) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x341 = 396LLU;
	uint8_t x342 = UINT8_MAX;
	volatile uint16_t x343 = UINT16_MAX;
	int32_t t68 = 1194;

	t68 = (((x341+x342)<x343)-x344);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x345 = 1U;
	uint32_t x346 = UINT32_MAX;
	int64_t x347 = INT64_MIN;
	int32_t t69 = -1;

	t69 = (((x345+x346)<x347)-x348);

	if (t69 != -3) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x349 = INT8_MIN;
	uint16_t x350 = 666U;
	int32_t x351 = -3;
	int8_t x352 = INT8_MAX;
	static volatile int32_t t70 = 24589;

	t70 = (((x349+x350)<x351)-x352);

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MAX;
	int32_t x355 = INT32_MAX;
	int32_t x356 = INT32_MAX;
	volatile int32_t t71 = -5;

	t71 = (((x353+x354)<x355)-x356);

	if (t71 != -2147483646) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x361 = INT32_MAX;
	int64_t x362 = INT64_MIN;
	volatile int8_t x363 = 0;
	int8_t x364 = INT8_MIN;

	t72 = (((x361+x362)<x363)-x364);

	if (t72 != 129) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x365 = -2;
	int8_t x366 = 1;
	static int32_t x367 = -3205455;
	int16_t x368 = INT16_MIN;
	static int32_t t73 = -256610;

	t73 = (((x365+x366)<x367)-x368);

	if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x369 = UINT16_MAX;
	uint64_t x370 = 382161964796818LLU;
	uint16_t x371 = UINT16_MAX;
	static int16_t x372 = INT16_MIN;
	static int32_t t74 = -1913609;

	t74 = (((x369+x370)<x371)-x372);

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x373 = -1;
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = INT32_MIN;
	uint64_t x376 = UINT64_MAX;
	uint64_t t75 = 58687LLU;

	t75 = (((x373+x374)<x375)-x376);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x381 = 20;
	int8_t x382 = -1;
	uint64_t x383 = UINT64_MAX;
	uint8_t x384 = 25U;
	volatile int32_t t76 = -297;

	t76 = (((x381+x382)<x383)-x384);

	if (t76 != -24) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x389 = 9U;
	uint64_t x390 = 15509LLU;
	static uint8_t x391 = 16U;
	int16_t x392 = -3725;
	int32_t t77 = -7;

	t77 = (((x389+x390)<x391)-x392);

	if (t77 != 3725) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x393 = INT64_MIN;
	uint8_t x394 = UINT8_MAX;
	int64_t x396 = -69LL;
	int64_t t78 = 4040451568071LL;

	t78 = (((x393+x394)<x395)-x396);

	if (t78 != 70LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x397 = INT8_MIN;
	int8_t x400 = INT8_MIN;
	static volatile int32_t t79 = 655781;

	t79 = (((x397+x398)<x399)-x400);

	if (t79 != 129) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x405 = 205;
	static int32_t x406 = -636555946;
	int64_t x407 = INT64_MIN;
	int32_t x408 = -108;

	t80 = (((x405+x406)<x407)-x408);

	if (t80 != 108) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x409 = INT64_MIN;
	int16_t x411 = 7;
	volatile uint32_t x412 = UINT32_MAX;

	t81 = (((x409+x410)<x411)-x412);

	if (t81 != 2U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x413 = UINT16_MAX;
	int8_t x414 = INT8_MIN;
	uint64_t x415 = 129433611012LLU;
	int16_t x416 = INT16_MIN;
	static volatile int32_t t82 = 329505983;

	t82 = (((x413+x414)<x415)-x416);

	if (t82 != 32769) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x417 = -458;
	static uint8_t x418 = 97U;
	int64_t x419 = INT64_MAX;
	int16_t x420 = INT16_MAX;

	t83 = (((x417+x418)<x419)-x420);

	if (t83 != -32766) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x425 = INT16_MAX;
	volatile uint64_t x428 = UINT64_MAX;

	t84 = (((x425+x426)<x427)-x428);

	if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x429 = 85;
	volatile int16_t x431 = -1;
	static uint16_t x432 = 12319U;
	int32_t t85 = 127899694;

	t85 = (((x429+x430)<x431)-x432);

	if (t85 != -12319) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x433 = UINT16_MAX;
	volatile int8_t x434 = INT8_MAX;
	int32_t x435 = -432514259;
	int16_t x436 = INT16_MIN;
	volatile int32_t t86 = -22942;

	t86 = (((x433+x434)<x435)-x436);

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x437 = UINT16_MAX;
	int8_t x438 = -1;
	volatile uint64_t x439 = UINT64_MAX;
	uint32_t x440 = UINT32_MAX;
	static volatile uint32_t t87 = 1541032142U;

	t87 = (((x437+x438)<x439)-x440);

	if (t87 != 2U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MIN;
	int64_t x448 = 1LL;
	int64_t t88 = -81LL;

	t88 = (((x445+x446)<x447)-x448);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x449 = 9218U;
	int16_t x450 = -5;
	int32_t x451 = -938;
	int64_t x452 = 556LL;
	static int64_t t89 = 16633106677LL;

	t89 = (((x449+x450)<x451)-x452);

	if (t89 != -556LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x459 = INT64_MAX;
	uint8_t x460 = UINT8_MAX;
	volatile int32_t t90 = -960;

	t90 = (((x457+x458)<x459)-x460);

	if (t90 != -254) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x462 = 28;
	uint32_t x463 = UINT32_MAX;
	int32_t t91 = 622;

	t91 = (((x461+x462)<x463)-x464);

	if (t91 != -254) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x465 = 1U;
	static uint8_t x466 = UINT8_MAX;
	int64_t x467 = INT64_MIN;
	static uint32_t x468 = 26245U;
	uint32_t t92 = 4U;

	t92 = (((x465+x466)<x467)-x468);

	if (t92 != 4294941051U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x469 = 224;
	volatile int32_t x470 = INT32_MIN;
	int32_t x471 = -1;
	static volatile int64_t x472 = INT64_MAX;
	int64_t t93 = 242704886612533LL;

	t93 = (((x469+x470)<x471)-x472);

	if (t93 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x482 = 2352U;
	uint8_t x483 = 0U;
	volatile int16_t x484 = 0;
	volatile int32_t t94 = -4;

	t94 = (((x481+x482)<x483)-x484);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x485 = UINT64_MAX;
	volatile int32_t x487 = INT32_MIN;
	int32_t x488 = 22;
	int32_t t95 = 827;

	t95 = (((x485+x486)<x487)-x488);

	if (t95 != -21) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x489 = INT8_MAX;
	static uint8_t x490 = 90U;
	int16_t x491 = 1;
	int64_t x492 = -1LL;
	volatile int64_t t96 = -661177901874183297LL;

	t96 = (((x489+x490)<x491)-x492);

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x493 = INT16_MIN;
	int8_t x494 = 62;
	int32_t x495 = -1;
	static volatile uint8_t x496 = 0U;
	int32_t t97 = 551;

	t97 = (((x493+x494)<x495)-x496);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x497 = 7807792668LL;
	static int8_t x498 = 0;
	int32_t x499 = INT32_MIN;
	int8_t x500 = -5;

	t98 = (((x497+x498)<x499)-x500);

	if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x501 = UINT32_MAX;
	static uint8_t x502 = 3U;
	uint64_t x503 = UINT64_MAX;
	uint32_t x504 = 50701U;
	volatile uint32_t t99 = 127U;

	t99 = (((x501+x502)<x503)-x504);

	if (t99 != 4294916596U) { NG(); } else { ; }
	
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


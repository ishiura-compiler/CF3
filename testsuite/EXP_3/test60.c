#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 6766266602272991LLU;
int64_t x10 = 69999658013982LL;
int16_t x14 = -57;
int16_t x18 = INT16_MIN;
int16_t x27 = -5386;
uint32_t x33 = 5907438U;
int16_t x34 = 4;
static int32_t x35 = INT32_MIN;
volatile int64_t x36 = 30167827LL;
int32_t t9 = 15;
static volatile uint8_t x47 = UINT8_MAX;
static int32_t t11 = -29414923;
uint16_t x49 = 15U;
int64_t x52 = -162576376553843LL;
int64_t x55 = -1LL;
int8_t x64 = INT8_MIN;
int64_t x66 = -1LL;
static volatile uint32_t x68 = 5933U;
uint32_t x72 = UINT32_MAX;
uint32_t x88 = UINT32_MAX;
static volatile int32_t t22 = -31;
volatile int64_t x96 = -1LL;
static uint64_t x104 = UINT64_MAX;
int16_t x107 = INT16_MIN;
int8_t x109 = INT8_MAX;
int8_t x110 = -1;
uint8_t x119 = 0U;
static volatile int32_t t28 = -102494;
int64_t x138 = INT64_MAX;
uint64_t x142 = 2007LLU;
int64_t x143 = 7LL;
volatile int8_t x147 = -1;
int8_t x156 = INT8_MIN;
int8_t x162 = INT8_MIN;
int64_t x165 = INT64_MAX;
int8_t x168 = INT8_MIN;
int8_t x173 = -1;
static volatile int16_t x179 = INT16_MIN;
volatile int8_t x191 = 11;
static int16_t x194 = -1;
static volatile int32_t t46 = -128907;
uint64_t x198 = 568414849882885LLU;
int64_t x214 = -1LL;
volatile uint16_t x224 = UINT16_MAX;
int16_t x231 = -2058;
static int32_t x237 = INT32_MIN;
static uint16_t x248 = 1U;
volatile uint8_t x250 = 104U;
int16_t x251 = INT16_MIN;
int32_t x262 = INT32_MIN;
volatile int32_t t62 = -227428362;
int16_t x266 = INT16_MIN;
uint64_t x271 = UINT64_MAX;
volatile uint16_t x274 = UINT16_MAX;
static volatile int64_t x281 = INT64_MIN;
uint32_t x282 = 4117U;
int64_t x288 = -133289795020LL;
volatile int32_t x294 = -1;
static int32_t t69 = 16250559;
int16_t x297 = INT16_MAX;
int16_t x298 = INT16_MIN;
static uint16_t x300 = UINT16_MAX;
int64_t x304 = INT64_MAX;
uint16_t x306 = 1000U;
static int16_t x315 = 3;
uint16_t x325 = 17U;
static int32_t x337 = -1;
int32_t x342 = -1;
volatile int64_t x343 = INT64_MAX;
static int8_t x348 = INT8_MIN;
int32_t x353 = -482886;
static volatile int32_t t82 = -436511;
static volatile int32_t t83 = -52596;
static int64_t x372 = 647233LL;
volatile int32_t t87 = 23699;
static uint16_t x378 = 30U;
int32_t x382 = INT32_MIN;
uint8_t x383 = 5U;
int8_t x391 = INT8_MAX;
volatile int32_t x392 = -1;
uint64_t x393 = UINT64_MAX;
uint16_t x397 = 135U;
int32_t x398 = -1;
volatile int32_t x401 = 2;
uint32_t x402 = 5U;
volatile uint16_t x404 = UINT16_MAX;
static uint32_t x411 = 0U;
int8_t x412 = INT8_MIN;
int64_t x416 = INT64_MAX;
int8_t x417 = INT8_MIN;
int64_t x422 = INT64_MAX;
uint8_t x427 = 25U;
int16_t x428 = -1;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	uint8_t x2 = 35U;
	int16_t x3 = 2731;
	volatile int32_t t0 = -2002;

	t0 = ((x1%x2)==(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	volatile int8_t x6 = -1;
	volatile int8_t x7 = INT8_MIN;
	volatile uint8_t x8 = 7U;
	int32_t t1 = -886452;

	t1 = ((x5%x6)==(x7+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static int64_t x11 = -2731LL;
	volatile int32_t x12 = INT32_MIN;
	int32_t t2 = -6;

	t2 = ((x9%x10)==(x11+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -6;
	int8_t x15 = INT8_MAX;
	int64_t x16 = INT64_MIN;
	static int32_t t3 = -1613005;

	t3 = ((x13%x14)==(x15+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x17 = 1721551579U;
	static uint32_t x19 = UINT32_MAX;
	int32_t x20 = -1;
	volatile int32_t t4 = 225;

	t4 = ((x17%x18)==(x19+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 12187593611553LL;
	int32_t x22 = INT32_MIN;
	int8_t x23 = INT8_MIN;
	volatile int8_t x24 = INT8_MAX;
	int32_t t5 = -1165458;

	t5 = ((x21%x22)==(x23+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 6621580624782644LLU;
	uint64_t x26 = 524383346LLU;
	int8_t x28 = INT8_MIN;
	static volatile int32_t t6 = 2;

	t6 = ((x25%x26)==(x27+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	int8_t x30 = INT8_MIN;
	uint8_t x31 = 78U;
	static uint16_t x32 = 1867U;
	volatile int32_t t7 = -1317959;

	t7 = ((x29%x30)==(x31+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t t8 = 261;

	t8 = ((x33%x34)==(x35+x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -53LL;
	volatile uint64_t x38 = 133499952LLU;
	volatile int8_t x39 = INT8_MAX;
	volatile int16_t x40 = INT16_MIN;

	t9 = ((x37%x38)==(x39+x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = 600;
	static int8_t x42 = INT8_MIN;
	int32_t x43 = INT32_MAX;
	int16_t x44 = -59;
	volatile int32_t t10 = 7734;

	t10 = ((x41%x42)==(x43+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	static int64_t x46 = 1LL;
	static int32_t x48 = INT32_MIN;

	t11 = ((x45%x46)==(x47+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -1;
	int32_t x51 = INT32_MAX;
	int32_t t12 = -167;

	t12 = ((x49%x50)==(x51+x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = UINT16_MAX;
	volatile int32_t x54 = -730862012;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 11;

	t13 = ((x53%x54)==(x55+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	uint32_t x58 = 4U;
	int8_t x59 = -1;
	int64_t x60 = -10LL;
	int32_t t14 = 125;

	t14 = ((x57%x58)==(x59+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	uint8_t x62 = 98U;
	int16_t x63 = INT16_MAX;
	int32_t t15 = 736;

	t15 = ((x61%x62)==(x63+x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int8_t x67 = -1;
	int32_t t16 = -110997180;

	t16 = ((x65%x66)==(x67+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	volatile int32_t x71 = 455453;
	int32_t t17 = 235;

	t17 = ((x69%x70)==(x71+x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static int64_t x74 = -1LL;
	static uint64_t x75 = 13876657LLU;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 1261;

	t18 = ((x73%x74)==(x75+x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 83U;
	static volatile uint64_t x78 = 422967271820199960LLU;
	uint32_t x79 = 77535U;
	volatile int32_t x80 = INT32_MIN;
	int32_t t19 = -890764155;

	t19 = ((x77%x78)==(x79+x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x81 = 41;
	static uint16_t x82 = 21U;
	int32_t x83 = -1;
	volatile uint64_t x84 = 20508006860824LLU;
	int32_t t20 = -894138;

	t20 = ((x81%x82)==(x83+x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 5620U;
	int32_t x86 = -43770;
	int64_t x87 = INT64_MIN;
	volatile int32_t t21 = 4;

	t21 = ((x85%x86)==(x87+x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	static volatile uint16_t x90 = 910U;
	static int32_t x91 = INT32_MAX;
	volatile int32_t x92 = -6590461;

	t22 = ((x89%x90)==(x91+x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	uint16_t x94 = UINT16_MAX;
	static uint32_t x95 = 869306799U;
	int32_t t23 = -969;

	t23 = ((x93%x94)==(x95+x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -1;
	static int16_t x102 = 1924;
	static int8_t x103 = -1;
	int32_t t24 = 358788;

	t24 = ((x101%x102)==(x103+x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = INT16_MIN;
	static int8_t x106 = -1;
	uint64_t x108 = UINT64_MAX;
	volatile int32_t t25 = 1098;

	t25 = ((x105%x106)==(x107+x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x111 = INT32_MIN;
	uint8_t x112 = 14U;
	volatile int32_t t26 = 5;

	t26 = ((x109%x110)==(x111+x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	int32_t x114 = -1;
	int16_t x115 = INT16_MIN;
	volatile int8_t x116 = INT8_MIN;
	volatile int32_t t27 = -1;

	t27 = ((x113%x114)==(x115+x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 203828LLU;
	uint32_t x118 = UINT32_MAX;
	int64_t x120 = 0LL;

	t28 = ((x117%x118)==(x119+x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x121 = UINT16_MAX;
	uint32_t x122 = UINT32_MAX;
	static int32_t x123 = 60;
	uint8_t x124 = 3U;
	int32_t t29 = 193;

	t29 = ((x121%x122)==(x123+x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	static int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MIN;
	static int16_t x132 = INT16_MIN;
	static int32_t t30 = 10;

	t30 = ((x129%x130)==(x131+x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MAX;
	int64_t x134 = -2055240366659733606LL;
	uint8_t x135 = UINT8_MAX;
	static uint8_t x136 = UINT8_MAX;
	volatile int32_t t31 = -6787;

	t31 = ((x133%x134)==(x135+x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 84U;
	int16_t x139 = -40;
	static int32_t x140 = -1;
	volatile int32_t t32 = -269976546;

	t32 = ((x137%x138)==(x139+x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x141 = UINT32_MAX;
	static uint16_t x144 = UINT16_MAX;
	volatile int32_t t33 = 53766786;

	t33 = ((x141%x142)==(x143+x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x145 = -1;
	int64_t x146 = -1LL;
	uint32_t x148 = 520909U;
	volatile int32_t t34 = -1;

	t34 = ((x145%x146)==(x147+x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = UINT16_MAX;
	volatile int8_t x150 = -8;
	uint64_t x151 = UINT64_MAX;
	uint8_t x152 = 3U;
	int32_t t35 = 20;

	t35 = ((x149%x150)==(x151+x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = INT8_MIN;
	static uint8_t x154 = 108U;
	int32_t x155 = INT32_MAX;
	volatile int32_t t36 = 473;

	t36 = ((x153%x154)==(x155+x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x157 = 6421860U;
	static int64_t x158 = INT64_MIN;
	int8_t x159 = 0;
	uint64_t x160 = 21796LLU;
	volatile int32_t t37 = -1261;

	t37 = ((x157%x158)==(x159+x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x161 = 118LLU;
	int8_t x163 = INT8_MIN;
	int32_t x164 = 2060474;
	volatile int32_t t38 = 191;

	t38 = ((x161%x162)==(x163+x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x166 = INT32_MIN;
	int16_t x167 = -15576;
	static volatile int32_t t39 = -89;

	t39 = ((x165%x166)==(x167+x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x169 = 7480557870252444LLU;
	int32_t x170 = INT32_MIN;
	int8_t x171 = INT8_MIN;
	int16_t x172 = INT16_MIN;
	volatile int32_t t40 = 206;

	t40 = ((x169%x170)==(x171+x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x174 = 885;
	int16_t x175 = INT16_MAX;
	int8_t x176 = 1;
	int32_t t41 = -6910363;

	t41 = ((x173%x174)==(x175+x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = -1;
	volatile int16_t x178 = INT16_MIN;
	static int16_t x180 = INT16_MAX;
	volatile int32_t t42 = 12;

	t42 = ((x177%x178)==(x179+x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MAX;
	int8_t x182 = -1;
	uint64_t x183 = 3313029172LLU;
	volatile int32_t x184 = -1;
	static int32_t t43 = -3488498;

	t43 = ((x181%x182)==(x183+x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x185 = -1;
	static int32_t x186 = -1;
	uint8_t x187 = 26U;
	volatile int16_t x188 = INT16_MIN;
	static int32_t t44 = 130228;

	t44 = ((x185%x186)==(x187+x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 5722657951134098992LLU;
	volatile uint32_t x190 = 266815U;
	int32_t x192 = INT32_MIN;
	int32_t t45 = -1;

	t45 = ((x189%x190)==(x191+x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = UINT32_MAX;
	uint16_t x195 = 3712U;
	int8_t x196 = -1;

	t46 = ((x193%x194)==(x195+x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x197 = INT32_MIN;
	int16_t x199 = INT16_MAX;
	volatile int64_t x200 = INT64_MIN;
	int32_t t47 = 28442;

	t47 = ((x197%x198)==(x199+x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	static volatile uint32_t x202 = 2081657669U;
	int64_t x203 = INT64_MIN;
	uint32_t x204 = 438U;
	volatile int32_t t48 = 978008257;

	t48 = ((x201%x202)==(x203+x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x205 = UINT16_MAX;
	int32_t x206 = -151489;
	volatile uint64_t x207 = 17050275525623084LLU;
	int16_t x208 = INT16_MIN;
	int32_t t49 = 100725690;

	t49 = ((x205%x206)==(x207+x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MAX;
	int32_t x210 = -1;
	volatile int16_t x211 = 169;
	int8_t x212 = 0;
	int32_t t50 = 26627546;

	t50 = ((x209%x210)==(x211+x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = -390934544610LL;
	int8_t x215 = INT8_MIN;
	volatile uint8_t x216 = 10U;
	volatile int32_t t51 = -546;

	t51 = ((x213%x214)==(x215+x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = 10804U;
	volatile uint32_t x222 = UINT32_MAX;
	volatile int16_t x223 = 0;
	static volatile int32_t t52 = 311398;

	t52 = ((x221%x222)==(x223+x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = -1;
	static int8_t x226 = INT8_MIN;
	uint16_t x227 = 12940U;
	int64_t x228 = INT64_MIN;
	int32_t t53 = 1;

	t53 = ((x225%x226)==(x227+x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = 19;
	static int64_t x230 = -1LL;
	static uint64_t x232 = 249243LLU;
	volatile int32_t t54 = 7;

	t54 = ((x229%x230)==(x231+x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = INT8_MIN;
	static volatile uint8_t x234 = 2U;
	int64_t x235 = INT64_MIN;
	static uint8_t x236 = UINT8_MAX;
	static volatile int32_t t55 = -981283;

	t55 = ((x233%x234)==(x235+x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x238 = 118875568265105LLU;
	int8_t x239 = INT8_MIN;
	uint64_t x240 = UINT64_MAX;
	volatile int32_t t56 = 181787737;

	t56 = ((x237%x238)==(x239+x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x241 = -667;
	uint32_t x242 = 255406U;
	static uint16_t x243 = UINT16_MAX;
	int32_t x244 = -1;
	volatile int32_t t57 = 248131;

	t57 = ((x241%x242)==(x243+x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x245 = UINT8_MAX;
	static int64_t x246 = INT64_MAX;
	static uint64_t x247 = UINT64_MAX;
	int32_t t58 = 478432;

	t58 = ((x245%x246)==(x247+x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = INT64_MAX;
	volatile int32_t x252 = -1;
	int32_t t59 = 148073232;

	t59 = ((x249%x250)==(x251+x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = 165890U;
	static int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = 13U;
	int32_t t60 = 41552;

	t60 = ((x253%x254)==(x255+x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x257 = 176;
	static volatile int16_t x258 = INT16_MIN;
	static volatile int32_t x259 = -1;
	int8_t x260 = INT8_MAX;
	int32_t t61 = -10662649;

	t61 = ((x257%x258)==(x259+x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x261 = INT16_MAX;
	uint64_t x263 = UINT64_MAX;
	uint8_t x264 = UINT8_MAX;

	t62 = ((x261%x262)==(x263+x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x265 = -1;
	uint8_t x267 = 0U;
	uint64_t x268 = 679LLU;
	static volatile int32_t t63 = 1;

	t63 = ((x265%x266)==(x267+x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MIN;
	uint64_t x270 = UINT64_MAX;
	volatile uint64_t x272 = 1LLU;
	volatile int32_t t64 = 18322340;

	t64 = ((x269%x270)==(x271+x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x273 = 35U;
	int64_t x275 = -711416400LL;
	static int16_t x276 = -1;
	int32_t t65 = -8910;

	t65 = ((x273%x274)==(x275+x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = 29;
	static volatile int16_t x278 = -1;
	uint8_t x279 = 6U;
	static volatile uint64_t x280 = 1907351454LLU;
	volatile int32_t t66 = 104259;

	t66 = ((x277%x278)==(x279+x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x283 = -1;
	static int64_t x284 = INT64_MAX;
	int32_t t67 = 4;

	t67 = ((x281%x282)==(x283+x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = INT64_MIN;
	volatile int32_t x286 = INT32_MIN;
	int32_t x287 = 7162193;
	static volatile int32_t t68 = -1;

	t68 = ((x285%x286)==(x287+x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = -1LL;
	static uint8_t x295 = UINT8_MAX;
	volatile int16_t x296 = -1;

	t69 = ((x293%x294)==(x295+x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x299 = -9LL;
	int32_t t70 = -50995;

	t70 = ((x297%x298)==(x299+x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MAX;
	int32_t x302 = 9989;
	int8_t x303 = INT8_MIN;
	int32_t t71 = -1131;

	t71 = ((x301%x302)==(x303+x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = INT32_MAX;
	static int32_t x307 = -1;
	static int8_t x308 = INT8_MAX;
	int32_t t72 = -32;

	t72 = ((x305%x306)==(x307+x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MIN;
	volatile int8_t x310 = INT8_MIN;
	static int16_t x311 = -114;
	int64_t x312 = -1LL;
	int32_t t73 = 5;

	t73 = ((x309%x310)==(x311+x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MAX;
	static volatile int8_t x314 = -1;
	int16_t x316 = INT16_MIN;
	int32_t t74 = -14870923;

	t74 = ((x313%x314)==(x315+x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x326 = INT32_MIN;
	int16_t x327 = 988;
	int8_t x328 = -1;
	volatile int32_t t75 = -6;

	t75 = ((x325%x326)==(x327+x328));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x329 = UINT8_MAX;
	static int64_t x330 = -4670055646713LL;
	uint8_t x331 = UINT8_MAX;
	int64_t x332 = INT64_MIN;
	volatile int32_t t76 = 30;

	t76 = ((x329%x330)==(x331+x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x333 = 6U;
	int16_t x334 = 415;
	volatile int64_t x335 = -1LL;
	int8_t x336 = INT8_MIN;
	volatile int32_t t77 = 183030;

	t77 = ((x333%x334)==(x335+x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x338 = -258;
	volatile int16_t x339 = 40;
	int8_t x340 = INT8_MIN;
	int32_t t78 = -1;

	t78 = ((x337%x338)==(x339+x340));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x341 = UINT32_MAX;
	int8_t x344 = INT8_MIN;
	volatile int32_t t79 = 590762;

	t79 = ((x341%x342)==(x343+x344));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = 1;
	volatile uint64_t x346 = UINT64_MAX;
	int16_t x347 = INT16_MIN;
	static int32_t t80 = 3222780;

	t80 = ((x345%x346)==(x347+x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x349 = -67015;
	static volatile uint64_t x350 = UINT64_MAX;
	volatile int64_t x351 = -281099323390823838LL;
	volatile int32_t x352 = INT32_MIN;
	static int32_t t81 = -123009;

	t81 = ((x349%x350)==(x351+x352));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x354 = 104U;
	volatile int8_t x355 = INT8_MAX;
	static uint64_t x356 = 13805LLU;

	t82 = ((x353%x354)==(x355+x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x357 = 12;
	static int32_t x358 = 1;
	static uint8_t x359 = 62U;
	int32_t x360 = INT32_MIN;

	t83 = ((x357%x358)==(x359+x360));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x361 = UINT32_MAX;
	volatile uint32_t x362 = 1236681584U;
	volatile uint64_t x363 = 102182648902743LLU;
	static uint32_t x364 = UINT32_MAX;
	volatile int32_t t84 = -78723;

	t84 = ((x361%x362)==(x363+x364));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x365 = 0;
	static int32_t x366 = INT32_MIN;
	static uint32_t x367 = UINT32_MAX;
	int64_t x368 = INT64_MIN;
	static volatile int32_t t85 = -6;

	t85 = ((x365%x366)==(x367+x368));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x369 = -1LL;
	static uint32_t x370 = 407U;
	int8_t x371 = -1;
	int32_t t86 = -1862428;

	t86 = ((x369%x370)==(x371+x372));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x373 = INT64_MIN;
	int32_t x374 = -1;
	static int8_t x375 = -1;
	uint64_t x376 = 58973545220LLU;

	t87 = ((x373%x374)==(x375+x376));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x377 = UINT8_MAX;
	int16_t x379 = 10;
	int16_t x380 = INT16_MIN;
	int32_t t88 = -1;

	t88 = ((x377%x378)==(x379+x380));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x381 = 1LLU;
	int16_t x384 = INT16_MIN;
	int32_t t89 = -10465991;

	t89 = ((x381%x382)==(x383+x384));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = -51;
	volatile int64_t x390 = 6LL;
	int32_t t90 = -88949;

	t90 = ((x389%x390)==(x391+x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x394 = INT8_MIN;
	static int64_t x395 = 1163861291LL;
	int8_t x396 = INT8_MAX;
	volatile int32_t t91 = 62;

	t91 = ((x393%x394)==(x395+x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x399 = INT16_MIN;
	uint8_t x400 = 7U;
	int32_t t92 = 187566;

	t92 = ((x397%x398)==(x399+x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x403 = UINT8_MAX;
	volatile int32_t t93 = -361387626;

	t93 = ((x401%x402)==(x403+x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x405 = UINT32_MAX;
	static int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MAX;
	volatile int8_t x408 = INT8_MIN;
	int32_t t94 = 365428;

	t94 = ((x405%x406)==(x407+x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x409 = 29751583056227LL;
	static int64_t x410 = -1LL;
	volatile int32_t t95 = 113819;

	t95 = ((x409%x410)==(x411+x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = -49;
	static int64_t x415 = INT64_MIN;
	volatile int32_t t96 = 7157;

	t96 = ((x413%x414)==(x415+x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x418 = 2;
	int64_t x419 = 8438892070274469LL;
	volatile int16_t x420 = -41;
	int32_t t97 = -1;

	t97 = ((x417%x418)==(x419+x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x421 = -1;
	int16_t x423 = INT16_MIN;
	int8_t x424 = 59;
	volatile int32_t t98 = -3317;

	t98 = ((x421%x422)==(x423+x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x425 = 2U;
	uint16_t x426 = 155U;
	volatile int32_t t99 = -106465;

	t99 = ((x425%x426)==(x427+x428));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = INT64_MIN;
int32_t x18 = 117;
volatile int32_t t4 = 7290533;
uint64_t x26 = UINT64_MAX;
volatile uint64_t x28 = UINT64_MAX;
int64_t t6 = -93802751LL;
static volatile uint16_t x33 = 794U;
int32_t x36 = -216477;
int8_t x39 = INT8_MIN;
static volatile int32_t x64 = -801597;
uint32_t x69 = UINT32_MAX;
uint64_t x71 = 13276835LLU;
int64_t t15 = INT64_MAX;
volatile int32_t t17 = 1;
static volatile int64_t x81 = INT64_MIN;
uint16_t x84 = 15U;
static int32_t t19 = 35663;
int16_t x89 = INT16_MAX;
uint16_t x91 = UINT16_MAX;
volatile int32_t x99 = -25406;
static uint64_t x101 = UINT64_MAX;
static volatile int64_t x102 = INT64_MIN;
uint16_t x106 = 88U;
int64_t x108 = INT64_MIN;
int64_t t24 = INT64_MIN;
int16_t x109 = INT16_MIN;
uint64_t x115 = 17103506101678LLU;
static uint64_t x133 = 7966885195908963151LLU;
static volatile int16_t x137 = -85;
int64_t x141 = 66552849LL;
static volatile int8_t x143 = -1;
volatile int32_t t32 = INT32_MIN;
static int32_t x151 = INT32_MIN;
int32_t x154 = INT32_MAX;
static int64_t x155 = 1538234983863526872LL;
int8_t x156 = INT8_MIN;
static int64_t x158 = -1LL;
uint16_t x168 = UINT16_MAX;
int16_t x169 = INT16_MIN;
int8_t x171 = 9;
volatile int16_t x172 = -1;
int8_t x174 = INT8_MAX;
int8_t x176 = -1;
uint32_t x181 = 2620U;
int64_t x183 = INT64_MIN;
int16_t x185 = -1;
int32_t x188 = 0;
volatile int32_t t43 = INT32_MIN;
static uint32_t x197 = 4992261U;
uint64_t t44 = 117908247868LLU;
volatile int16_t x202 = -12574;
uint16_t x203 = 393U;
volatile uint32_t x204 = 10114U;
uint64_t x205 = 375892869LLU;
uint64_t x212 = 5792101LLU;
volatile int8_t x214 = INT8_MIN;
int32_t x216 = -6801;
volatile uint16_t x219 = UINT16_MAX;
volatile int32_t x220 = -169;
static volatile int8_t x237 = -1;
static int32_t t54 = 0;
int64_t x261 = INT64_MAX;
volatile int32_t x267 = INT32_MIN;
int8_t x272 = INT8_MIN;
static uint8_t x275 = 4U;
int32_t x276 = INT32_MIN;
static int32_t x278 = INT32_MIN;
int16_t x281 = 16077;
int8_t x283 = INT8_MAX;
int8_t x285 = 1;
int64_t x307 = INT64_MIN;
volatile int32_t t72 = -3463;
uint16_t x317 = 32U;
static uint16_t x320 = UINT16_MAX;
int32_t x325 = 46913;
uint64_t x326 = 3256298LLU;
int16_t x329 = -1;
int8_t x331 = INT8_MAX;
static uint8_t x334 = 5U;
uint8_t x335 = 1U;
int32_t x336 = -1;
int64_t x339 = -6158780LL;
int8_t x345 = INT8_MIN;
static int8_t x347 = -1;
static int32_t x348 = -1;
uint32_t x351 = 9300U;
int32_t t82 = 37056999;
uint8_t x378 = UINT8_MAX;
int64_t x380 = 11763LL;
int8_t x383 = -3;
int8_t x384 = INT8_MIN;
static volatile int32_t t89 = 0;
static uint64_t x385 = UINT64_MAX;
volatile uint8_t x386 = 4U;
uint32_t t90 = 1966U;
uint16_t x395 = 14374U;
int64_t x397 = -1504LL;
static int32_t x401 = INT32_MAX;
int8_t x404 = 1;
uint32_t x410 = UINT32_MAX;
volatile int64_t x412 = -1LL;
int16_t x422 = -1;
int8_t x423 = INT8_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int32_t x2 = INT32_MAX;
	static int16_t x3 = INT16_MIN;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 2346;

	t0 = (((x1%x2)<=x3)+x4);

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = 1U;
	int32_t x7 = 628353;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 3;

	t1 = (((x5%x6)<=x7)+x8);

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int64_t x10 = -1LL;
	int64_t x11 = INT64_MAX;
	uint16_t x12 = 0U;
	volatile int32_t t2 = 240798494;

	t2 = (((x9%x10)<=x11)+x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	int64_t x19 = 3146LL;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t3 = -296;

	t3 = (((x17%x18)<=x19)+x20);

	if (t3 != 65536) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 2932;
	volatile uint8_t x22 = UINT8_MAX;
	uint16_t x23 = 14524U;
	int16_t x24 = INT16_MIN;

	t4 = (((x21%x22)<=x23)+x24);

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = 2LLU;
	static int16_t x27 = INT16_MIN;
	volatile uint64_t t5 = 309294017LLU;

	t5 = (((x25%x26)<=x27)+x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	uint16_t x30 = 2U;
	uint16_t x31 = 59U;
	int64_t x32 = -16980852253032LL;

	t6 = (((x29%x30)<=x31)+x32);

	if (t6 != -16980852253031LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = -48546LL;
	uint32_t x35 = 892322179U;
	volatile int32_t t7 = -1;

	t7 = (((x33%x34)<=x35)+x36);

	if (t7 != -216476) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 95U;
	int32_t x38 = -1;
	int8_t x40 = INT8_MIN;
	int32_t t8 = 173127;

	t8 = (((x37%x38)<=x39)+x40);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MIN;
	uint32_t x43 = UINT32_MAX;
	uint8_t x44 = 1U;
	int32_t t9 = -17560540;

	t9 = (((x41%x42)<=x43)+x44);

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MIN;
	int32_t x46 = INT32_MAX;
	static int16_t x47 = INT16_MIN;
	volatile int8_t x48 = INT8_MAX;
	volatile int32_t t10 = -102;

	t10 = (((x45%x46)<=x47)+x48);

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 114U;
	static volatile int16_t x54 = -1;
	uint32_t x55 = UINT32_MAX;
	volatile uint16_t x56 = 11031U;
	int32_t t11 = -99;

	t11 = (((x53%x54)<=x55)+x56);

	if (t11 != 11032) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x57 = 1;
	int16_t x58 = -155;
	uint32_t x59 = 4525243U;
	volatile uint8_t x60 = 4U;
	static volatile int32_t t12 = 236227;

	t12 = (((x57%x58)<=x59)+x60);

	if (t12 != 5) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = INT64_MAX;
	int32_t x62 = -1;
	uint8_t x63 = 77U;
	int32_t t13 = -850683;

	t13 = (((x61%x62)<=x63)+x64);

	if (t13 != -801596) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x65 = INT64_MAX;
	static int16_t x66 = INT16_MIN;
	uint64_t x67 = 7941807515651178LLU;
	int64_t x68 = INT64_MIN;
	static int64_t t14 = -2130329919707432830LL;

	t14 = (((x65%x66)<=x67)+x68);

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = INT64_MIN;
	int64_t x72 = INT64_MAX;

	t15 = (((x69%x70)<=x71)+x72);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x73 = 1;
	volatile int32_t x74 = -1740;
	int8_t x75 = INT8_MAX;
	int8_t x76 = INT8_MAX;
	int32_t t16 = -267;

	t16 = (((x73%x74)<=x75)+x76);

	if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 13767087U;
	static uint16_t x78 = 31253U;
	int8_t x79 = INT8_MAX;
	int16_t x80 = INT16_MIN;

	t17 = (((x77%x78)<=x79)+x80);

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x82 = UINT32_MAX;
	static int32_t x83 = INT32_MIN;
	static volatile int32_t t18 = -129055447;

	t18 = (((x81%x82)<=x83)+x84);

	if (t18 != 16) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x85 = 255586336U;
	int8_t x86 = -36;
	int8_t x87 = INT8_MIN;
	static uint8_t x88 = 32U;

	t19 = (((x85%x86)<=x87)+x88);

	if (t19 != 33) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x90 = UINT32_MAX;
	int8_t x92 = INT8_MIN;
	int32_t t20 = 0;

	t20 = (((x89%x90)<=x91)+x92);

	if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x93 = INT32_MIN;
	static int64_t x94 = INT64_MAX;
	static int8_t x95 = INT8_MIN;
	volatile int64_t x96 = -4586929LL;
	int64_t t21 = 23808079603464340LL;

	t21 = (((x93%x94)<=x95)+x96);

	if (t21 != -4586928LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	uint64_t x98 = UINT64_MAX;
	uint32_t x100 = 239634752U;
	uint32_t t22 = 20U;

	t22 = (((x97%x98)<=x99)+x100);

	if (t22 != 239634752U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x103 = INT16_MAX;
	int16_t x104 = 4642;
	volatile int32_t t23 = -124;

	t23 = (((x101%x102)<=x103)+x104);

	if (t23 != 4642) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = -1;
	int16_t x107 = -337;

	t24 = (((x105%x106)<=x107)+x108);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x110 = UINT8_MAX;
	static uint16_t x111 = UINT16_MAX;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t25 = 115291;

	t25 = (((x109%x110)<=x111)+x112);

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x113 = INT64_MIN;
	int64_t x114 = INT64_MIN;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t26 = -26851813;

	t26 = (((x113%x114)<=x115)+x116);

	if (t26 != 256) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = 36;
	int16_t x118 = -1;
	int64_t x119 = -966977727482709031LL;
	static int8_t x120 = INT8_MIN;
	volatile int32_t t27 = -6874145;

	t27 = (((x117%x118)<=x119)+x120);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MAX;
	volatile int64_t x127 = INT64_MIN;
	int32_t x128 = INT32_MAX;
	volatile int32_t t28 = INT32_MAX;

	t28 = (((x125%x126)<=x127)+x128);

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MIN;
	uint8_t x130 = 3U;
	int16_t x131 = 0;
	int8_t x132 = INT8_MAX;
	int32_t t29 = 18506135;

	t29 = (((x129%x130)<=x131)+x132);

	if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x134 = UINT8_MAX;
	int64_t x135 = INT64_MAX;
	int16_t x136 = 4143;
	static volatile int32_t t30 = -60271;

	t30 = (((x133%x134)<=x135)+x136);

	if (t30 != 4144) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x138 = -213091;
	uint64_t x139 = UINT64_MAX;
	volatile uint16_t x140 = 172U;
	volatile int32_t t31 = -9202;

	t31 = (((x137%x138)<=x139)+x140);

	if (t31 != 173) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x142 = UINT32_MAX;
	int32_t x144 = INT32_MIN;

	t32 = (((x141%x142)<=x143)+x144);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x145 = 5U;
	uint64_t x146 = UINT64_MAX;
	uint32_t x147 = 105618701U;
	volatile int64_t x148 = INT64_MIN;
	int64_t t33 = -54595272520424902LL;

	t33 = (((x145%x146)<=x147)+x148);

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MAX;
	int64_t x150 = INT64_MAX;
	volatile int32_t x152 = 2;
	int32_t t34 = 160;

	t34 = (((x149%x150)<=x151)+x152);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = 15174U;
	static int32_t t35 = -731;

	t35 = (((x153%x154)<=x155)+x156);

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MIN;
	volatile int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MIN;
	int32_t t36 = 12;

	t36 = (((x157%x158)<=x159)+x160);

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = -1;
	int16_t x166 = 1;
	static volatile uint16_t x167 = 59U;
	int32_t t37 = 20;

	t37 = (((x165%x166)<=x167)+x168);

	if (t37 != 65536) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x170 = INT8_MAX;
	int32_t t38 = 143125881;

	t38 = (((x169%x170)<=x171)+x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MAX;
	int64_t x175 = 242145264311587365LL;
	static volatile int32_t t39 = 52213333;

	t39 = (((x173%x174)<=x175)+x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = 1548;
	volatile int16_t x178 = INT16_MAX;
	volatile int32_t x179 = -22;
	static int16_t x180 = INT16_MIN;
	volatile int32_t t40 = -215;

	t40 = (((x177%x178)<=x179)+x180);

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x182 = 23753;
	uint16_t x184 = 15U;
	volatile int32_t t41 = 18577427;

	t41 = (((x181%x182)<=x183)+x184);

	if (t41 != 15) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x186 = INT8_MIN;
	uint64_t x187 = 70LLU;
	int32_t t42 = 28765;

	t42 = (((x185%x186)<=x187)+x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x193 = 22347100285988690LLU;
	uint64_t x194 = 33516415877713929LLU;
	volatile int8_t x195 = 27;
	int32_t x196 = INT32_MIN;

	t43 = (((x193%x194)<=x195)+x196);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x198 = INT16_MAX;
	uint64_t x199 = 828658707LLU;
	uint64_t x200 = UINT64_MAX;

	t44 = (((x197%x198)<=x199)+x200);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x201 = UINT64_MAX;
	volatile uint32_t t45 = 64U;

	t45 = (((x201%x202)<=x203)+x204);

	if (t45 != 10114U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x206 = 1;
	int16_t x207 = -1;
	volatile uint8_t x208 = 7U;
	int32_t t46 = 59829081;

	t46 = (((x205%x206)<=x207)+x208);

	if (t46 != 8) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MAX;
	int8_t x210 = -6;
	int64_t x211 = INT64_MIN;
	static volatile uint64_t t47 = 1036415893703090623LLU;

	t47 = (((x209%x210)<=x211)+x212);

	if (t47 != 5792101LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x215 = 8;
	int32_t t48 = 1324;

	t48 = (((x213%x214)<=x215)+x216);

	if (t48 != -6801) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = INT8_MIN;
	volatile int8_t x218 = 56;
	static int32_t t49 = 541933;

	t49 = (((x217%x218)<=x219)+x220);

	if (t49 != -168) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x221 = 30328U;
	uint32_t x222 = 203332713U;
	int16_t x223 = INT16_MAX;
	int8_t x224 = 1;
	static int32_t t50 = -3838;

	t50 = (((x221%x222)<=x223)+x224);

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = INT32_MIN;
	static uint8_t x226 = 6U;
	static int32_t x227 = -1;
	static int8_t x228 = 0;
	volatile int32_t t51 = 270140;

	t51 = (((x225%x226)<=x227)+x228);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x229 = 0U;
	uint8_t x230 = UINT8_MAX;
	static volatile int8_t x231 = -1;
	volatile int8_t x232 = INT8_MIN;
	int32_t t52 = 615478;

	t52 = (((x229%x230)<=x231)+x232);

	if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x233 = 1U;
	uint16_t x234 = 2612U;
	int64_t x235 = -1LL;
	uint32_t x236 = 227U;
	volatile uint32_t t53 = 986473271U;

	t53 = (((x233%x234)<=x235)+x236);

	if (t53 != 227U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x238 = -3;
	int64_t x239 = 845312278LL;
	int32_t x240 = INT32_MIN;

	t54 = (((x237%x238)<=x239)+x240);

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x241 = 184U;
	static volatile int64_t x242 = INT64_MAX;
	int16_t x243 = INT16_MIN;
	volatile uint16_t x244 = 11U;
	volatile int32_t t55 = 251;

	t55 = (((x241%x242)<=x243)+x244);

	if (t55 != 11) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = -1;
	int16_t x246 = 203;
	volatile int64_t x247 = INT64_MAX;
	int16_t x248 = -1;
	int32_t t56 = -101;

	t56 = (((x245%x246)<=x247)+x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = -1;
	int64_t x250 = INT64_MIN;
	int8_t x251 = INT8_MIN;
	uint16_t x252 = 11519U;
	static volatile int32_t t57 = 6;

	t57 = (((x249%x250)<=x251)+x252);

	if (t57 != 11519) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x253 = UINT16_MAX;
	int8_t x254 = 8;
	int16_t x255 = INT16_MIN;
	int32_t x256 = -1;
	static volatile int32_t t58 = -227526;

	t58 = (((x253%x254)<=x255)+x256);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x257 = 190807LL;
	uint8_t x258 = 13U;
	static uint8_t x259 = 0U;
	int16_t x260 = 7988;
	int32_t t59 = -197592;

	t59 = (((x257%x258)<=x259)+x260);

	if (t59 != 7988) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x262 = 117U;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = 63313339;
	int32_t t60 = 20;

	t60 = (((x261%x262)<=x263)+x264);

	if (t60 != 63313340) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x265 = 0U;
	static volatile uint64_t x266 = 20706873LLU;
	volatile uint64_t x268 = UINT64_MAX;
	volatile uint64_t t61 = 993128LLU;

	t61 = (((x265%x266)<=x267)+x268);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = 3327965783403429LLU;
	int32_t x270 = INT32_MIN;
	uint64_t x271 = UINT64_MAX;
	volatile int32_t t62 = -7788633;

	t62 = (((x269%x270)<=x271)+x272);

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = 3;
	uint32_t x274 = 253346U;
	volatile int32_t t63 = 0;

	t63 = (((x273%x274)<=x275)+x276);

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = INT16_MAX;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = -1;
	volatile int32_t t64 = -6082;

	t64 = (((x277%x278)<=x279)+x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x282 = 282U;
	static int8_t x284 = INT8_MAX;
	static volatile int32_t t65 = -651367282;

	t65 = (((x281%x282)<=x283)+x284);

	if (t65 != 128) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x286 = 122602U;
	volatile int8_t x287 = -1;
	volatile uint32_t x288 = 2559482U;
	volatile uint32_t t66 = 47U;

	t66 = (((x285%x286)<=x287)+x288);

	if (t66 != 2559483U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x293 = 104U;
	static int32_t x294 = INT32_MIN;
	int32_t x295 = INT32_MIN;
	static int16_t x296 = 165;
	static int32_t t67 = 1;

	t67 = (((x293%x294)<=x295)+x296);

	if (t67 != 165) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x297 = INT64_MAX;
	int8_t x298 = -1;
	uint16_t x299 = UINT16_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t68 = -682550;

	t68 = (((x297%x298)<=x299)+x300);

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = INT16_MIN;
	uint32_t x302 = 2U;
	uint64_t x303 = 994LLU;
	int32_t x304 = 0;
	int32_t t69 = -127154;

	t69 = (((x301%x302)<=x303)+x304);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x305 = UINT8_MAX;
	uint8_t x306 = 71U;
	int16_t x308 = INT16_MIN;
	int32_t t70 = 1456;

	t70 = (((x305%x306)<=x307)+x308);

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x309 = INT32_MAX;
	volatile int32_t x310 = INT32_MIN;
	int64_t x311 = -1LL;
	int32_t x312 = INT32_MAX;
	volatile int32_t t71 = INT32_MAX;

	t71 = (((x309%x310)<=x311)+x312);

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x313 = UINT64_MAX;
	volatile int64_t x314 = -545667697LL;
	int64_t x315 = 23067165902LL;
	int8_t x316 = INT8_MIN;

	t72 = (((x313%x314)<=x315)+x316);

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x318 = -3193494001954513LL;
	int16_t x319 = INT16_MAX;
	int32_t t73 = 58;

	t73 = (((x317%x318)<=x319)+x320);

	if (t73 != 65536) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x321 = -86687;
	uint64_t x322 = UINT64_MAX;
	volatile int32_t x323 = -6;
	int8_t x324 = INT8_MIN;
	volatile int32_t t74 = 42;

	t74 = (((x321%x322)<=x323)+x324);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x327 = 3366U;
	int64_t x328 = INT64_MIN;
	int64_t t75 = INT64_MIN;

	t75 = (((x325%x326)<=x327)+x328);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x330 = INT32_MIN;
	static uint16_t x332 = 1409U;
	volatile int32_t t76 = 799986722;

	t76 = (((x329%x330)<=x331)+x332);

	if (t76 != 1410) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = INT64_MIN;
	int32_t t77 = -125;

	t77 = (((x333%x334)<=x335)+x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x337 = -350;
	int16_t x338 = INT16_MIN;
	static volatile int8_t x340 = -1;
	volatile int32_t t78 = -501;

	t78 = (((x337%x338)<=x339)+x340);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x341 = 80U;
	static int8_t x342 = INT8_MAX;
	int64_t x343 = -1LL;
	static int64_t x344 = INT64_MIN;
	static volatile int64_t t79 = INT64_MIN;

	t79 = (((x341%x342)<=x343)+x344);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x346 = UINT32_MAX;
	volatile int32_t t80 = -455715;

	t80 = (((x345%x346)<=x347)+x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x349 = UINT64_MAX;
	uint32_t x350 = 39019U;
	static int32_t x352 = INT32_MIN;
	int32_t t81 = INT32_MIN;

	t81 = (((x349%x350)<=x351)+x352);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x353 = 5888609197LLU;
	volatile int64_t x354 = 22954644131210LL;
	volatile int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MIN;

	t82 = (((x353%x354)<=x355)+x356);

	if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x357 = INT8_MIN;
	uint16_t x358 = 6U;
	int32_t x359 = -1;
	static int32_t x360 = INT32_MIN;
	static volatile int32_t t83 = -5048;

	t83 = (((x357%x358)<=x359)+x360);

	if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x361 = 65806U;
	volatile uint32_t x362 = 67232902U;
	static int64_t x363 = INT64_MIN;
	int32_t x364 = 29471202;
	volatile int32_t t84 = 508143;

	t84 = (((x361%x362)<=x363)+x364);

	if (t84 != 29471202) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = INT32_MAX;
	int32_t x367 = INT32_MIN;
	static int8_t x368 = INT8_MIN;
	volatile int32_t t85 = 6;

	t85 = (((x365%x366)<=x367)+x368);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x369 = -1;
	int64_t x370 = 9642495967742LL;
	int16_t x371 = INT16_MIN;
	static int8_t x372 = -1;
	volatile int32_t t86 = 0;

	t86 = (((x369%x370)<=x371)+x372);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x373 = -18;
	static uint64_t x374 = 13322375772760LLU;
	uint16_t x375 = 548U;
	volatile uint32_t x376 = 7U;
	volatile uint32_t t87 = 1022613703U;

	t87 = (((x373%x374)<=x375)+x376);

	if (t87 != 7U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x377 = 640611303401LL;
	uint8_t x379 = 9U;
	int64_t t88 = -1LL;

	t88 = (((x377%x378)<=x379)+x380);

	if (t88 != 11763LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x381 = UINT8_MAX;
	uint64_t x382 = 4749296855LLU;

	t89 = (((x381%x382)<=x383)+x384);

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x387 = INT16_MIN;
	uint32_t x388 = 35U;

	t90 = (((x385%x386)<=x387)+x388);

	if (t90 != 36U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x393 = 4U;
	static int16_t x394 = 1;
	int64_t x396 = -96354918445LL;
	int64_t t91 = -22781483022379LL;

	t91 = (((x393%x394)<=x395)+x396);

	if (t91 != -96354918444LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x398 = INT8_MIN;
	uint32_t x399 = UINT32_MAX;
	static volatile int64_t x400 = INT64_MIN;
	volatile int64_t t92 = -4444726554920LL;

	t92 = (((x397%x398)<=x399)+x400);

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x402 = UINT32_MAX;
	static int64_t x403 = INT64_MAX;
	int32_t t93 = -33336492;

	t93 = (((x401%x402)<=x403)+x404);

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x405 = INT32_MIN;
	volatile int64_t x406 = INT64_MAX;
	int32_t x407 = INT32_MIN;
	int16_t x408 = INT16_MIN;
	volatile int32_t t94 = 189424164;

	t94 = (((x405%x406)<=x407)+x408);

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = -1;
	uint8_t x411 = UINT8_MAX;
	static int64_t t95 = -60746LL;

	t95 = (((x409%x410)<=x411)+x412);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x413 = 13U;
	uint32_t x414 = UINT32_MAX;
	uint16_t x415 = 0U;
	static int32_t x416 = -1;
	int32_t t96 = 0;

	t96 = (((x413%x414)<=x415)+x416);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x417 = INT8_MIN;
	uint64_t x418 = 16898570LLU;
	volatile int16_t x419 = 3;
	static int32_t x420 = INT32_MIN;
	volatile int32_t t97 = INT32_MIN;

	t97 = (((x417%x418)<=x419)+x420);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = 18;
	static int8_t x424 = -22;
	static int32_t t98 = -858;

	t98 = (((x421%x422)<=x423)+x424);

	if (t98 != -21) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = INT64_MAX;
	volatile int32_t x426 = -12500;
	static volatile int16_t x427 = 5;
	volatile int16_t x428 = 1;
	int32_t t99 = 3595675;

	t99 = (((x425%x426)<=x427)+x428);

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


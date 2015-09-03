#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -58;
int16_t x7 = 0;
volatile int16_t x16 = 41;
static uint64_t t3 = 980125862LLU;
uint16_t x23 = 1575U;
volatile int32_t t5 = -38224;
volatile int32_t x25 = INT32_MIN;
uint64_t x28 = 3167467LLU;
volatile uint64_t x32 = 8945391321868761LLU;
int8_t x33 = INT8_MIN;
uint8_t x37 = 23U;
int64_t x47 = INT64_MIN;
uint8_t x58 = 23U;
static volatile int64_t t14 = -322778364844586616LL;
static uint16_t x62 = 119U;
volatile uint8_t x64 = 35U;
volatile uint32_t x70 = 1837U;
volatile int32_t x72 = INT32_MIN;
int16_t x76 = 0;
int32_t x79 = -1;
static volatile int32_t x82 = INT32_MIN;
volatile uint32_t t20 = 1057719566U;
static int16_t x85 = -1;
int8_t x86 = -1;
int32_t t21 = 123490;
static uint8_t x92 = 43U;
volatile uint32_t t23 = 3U;
volatile uint8_t x101 = UINT8_MAX;
volatile int32_t t25 = -778303632;
int64_t x105 = 1787LL;
static uint8_t x106 = 18U;
volatile int8_t x107 = INT8_MIN;
int64_t t26 = 13LL;
static volatile int16_t x109 = -572;
uint16_t x113 = 107U;
int8_t x115 = INT8_MAX;
int32_t x116 = -251502;
volatile uint64_t t28 = 2LLU;
uint32_t x118 = UINT32_MAX;
int32_t x122 = INT32_MIN;
uint16_t x123 = UINT16_MAX;
static uint16_t x130 = UINT16_MAX;
uint32_t x135 = 7824700U;
int8_t x136 = INT8_MIN;
volatile int64_t x139 = INT64_MAX;
int32_t x147 = 129549838;
static volatile int32_t t36 = -596914;
volatile uint32_t x151 = UINT32_MAX;
volatile int32_t t37 = -85250858;
int32_t x154 = -284743;
static int64_t x160 = INT64_MAX;
volatile int32_t t39 = 1;
uint32_t x165 = 124148839U;
int8_t x194 = -3;
uint8_t x201 = 75U;
static int8_t x202 = INT8_MIN;
int16_t x203 = INT16_MIN;
int8_t x217 = 0;
volatile int64_t x232 = -4361840535242221408LL;
static int16_t x242 = -1;
volatile int32_t x247 = INT32_MAX;
volatile uint64_t x253 = 21438LLU;
volatile int32_t t63 = -2013;
int8_t x261 = INT8_MIN;
static int32_t x264 = INT32_MIN;
uint32_t x268 = 88013795U;
volatile int64_t x274 = INT64_MIN;
static uint64_t x277 = UINT64_MAX;
int8_t x285 = -1;
static int32_t x286 = INT32_MAX;
int64_t x300 = 764785704846686986LL;
int64_t x304 = 22116252987390655LL;
static int32_t t74 = -7;
uint32_t t75 = 1778170202U;
volatile uint16_t x309 = UINT16_MAX;
uint16_t x319 = 358U;
int16_t x322 = -3285;
volatile uint32_t x334 = 37003828U;
int8_t x337 = 5;
int32_t t83 = -1;
uint64_t x341 = UINT64_MAX;
volatile uint64_t t84 = 1427818618699052LLU;
static uint16_t x347 = UINT16_MAX;
int16_t x349 = -32;
static volatile int8_t x361 = 1;
int8_t x362 = -41;
volatile int32_t x365 = INT32_MIN;
static int32_t x368 = 175;
static int8_t x375 = INT8_MAX;
int8_t x385 = INT8_MIN;
int16_t x386 = INT16_MAX;
int8_t x389 = INT8_MIN;
uint8_t x390 = UINT8_MAX;
static uint32_t x392 = UINT32_MAX;
int32_t t96 = 1056884382;
int16_t x393 = 786;
static uint64_t x394 = UINT64_MAX;
int32_t x395 = INT32_MAX;
int64_t x400 = INT64_MIN;
uint32_t x401 = 403U;
static volatile int64_t t99 = 384979LL;


void f0(void) {
	int8_t x1 = -1;
	static uint64_t x2 = 6414LLU;
	static int8_t x3 = -30;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 1784580207155945030LLU;

	t0 = ((x1%x2)-(x3<=x4));

	if (t0 != 4046LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x6 = INT64_MIN;
	int8_t x8 = INT8_MIN;
	volatile int64_t t1 = 5082LL;

	t1 = ((x5%x6)-(x7<=x8));

	if (t1 != -58LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 4U;
	int32_t x10 = 1264;
	int64_t x11 = INT64_MIN;
	int32_t x12 = INT32_MAX;
	static int32_t t2 = 92;

	t2 = ((x9%x10)-(x11<=x12));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 423650937668593483LLU;
	uint16_t x14 = 3129U;
	volatile int32_t x15 = -141;

	t3 = ((x13%x14)-(x15<=x16));

	if (t3 != 2451LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	volatile int64_t x18 = -8253166016056113LL;
	int32_t x19 = -28;
	static int16_t x20 = -3;
	volatile int64_t t4 = 221324739LL;

	t4 = ((x17%x18)-(x19<=x20));

	if (t4 != -2147483649LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = UINT8_MAX;
	volatile uint16_t x22 = 1524U;
	int32_t x24 = -1;

	t5 = ((x21%x22)-(x23<=x24));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x26 = 2126478U;
	static uint32_t x27 = 11688U;
	volatile uint32_t t6 = 986700281U;

	t6 = ((x25%x26)-(x27<=x28));

	if (t6 != 1867345U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	uint64_t x30 = 58126900567LLU;
	static uint8_t x31 = UINT8_MAX;
	uint64_t t7 = 4733851257868LLU;

	t7 = ((x29%x30)-(x31<=x32));

	if (t7 != 2147483646LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x34 = -1;
	volatile int16_t x35 = -1;
	int16_t x36 = INT16_MAX;
	int32_t t8 = 1346584;

	t8 = ((x33%x34)-(x35<=x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = INT16_MIN;
	volatile uint8_t x39 = 18U;
	volatile int16_t x40 = -8795;
	volatile int32_t t9 = 1;

	t9 = ((x37%x38)-(x39<=x40));

	if (t9 != 23) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	static volatile int64_t x42 = INT64_MIN;
	uint32_t x43 = UINT32_MAX;
	volatile int64_t x44 = -1LL;
	int64_t t10 = 156LL;

	t10 = ((x41%x42)-(x43<=x44));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	static int16_t x46 = -1;
	static int8_t x48 = -1;
	volatile int64_t t11 = 2356948296LL;

	t11 = ((x45%x46)-(x47<=x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	int16_t x50 = 6;
	static int8_t x51 = INT8_MAX;
	uint32_t x52 = 3111124U;
	int64_t t12 = -11608661LL;

	t12 = ((x49%x50)-(x51<=x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -53711418342LL;
	uint64_t x54 = 72873LLU;
	int8_t x55 = 30;
	int32_t x56 = -1;
	volatile uint64_t t13 = 159619406061LLU;

	t13 = ((x53%x54)-(x55<=x56));

	if (t13 != 15160LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 40579LL;
	static int32_t x59 = INT32_MIN;
	static volatile int16_t x60 = INT16_MAX;

	t14 = ((x57%x58)-(x59<=x60));

	if (t14 != 6LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 6772U;
	int64_t x63 = -163LL;
	volatile int32_t t15 = -494267336;

	t15 = ((x61%x62)-(x63<=x64));

	if (t15 != 107) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = 1;
	volatile int32_t x66 = -85571;
	volatile uint32_t x67 = 37U;
	uint8_t x68 = 0U;
	int32_t t16 = -5463362;

	t16 = ((x65%x66)-(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int16_t x71 = INT16_MIN;
	uint32_t t17 = 1290840U;

	t17 = ((x69%x70)-(x71<=x72));

	if (t17 != 1256U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 31590U;
	volatile uint64_t x74 = UINT64_MAX;
	int64_t x75 = 103570551431LL;
	volatile uint64_t t18 = 70900983444LLU;

	t18 = ((x73%x74)-(x75<=x76));

	if (t18 != 31590LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	uint8_t x78 = 18U;
	static int64_t x80 = 1742120127258219LL;
	volatile int32_t t19 = -144993887;

	t19 = ((x77%x78)-(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	int8_t x83 = -1;
	int32_t x84 = INT32_MIN;

	t20 = ((x81%x82)-(x83<=x84));

	if (t20 != 2147483647U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x87 = 75U;
	static int64_t x88 = INT64_MAX;

	t21 = ((x85%x86)-(x87<=x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	volatile uint16_t x90 = UINT16_MAX;
	uint8_t x91 = UINT8_MAX;
	int32_t t22 = -5388154;

	t22 = ((x89%x90)-(x91<=x92));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 745923900U;
	volatile uint16_t x94 = UINT16_MAX;
	volatile int32_t x95 = -17;
	int16_t x96 = 443;

	t23 = ((x93%x94)-(x95<=x96));

	if (t23 != 4529U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -58;
	int32_t x98 = 1395;
	int8_t x99 = 7;
	int32_t x100 = -1;
	int32_t t24 = -72818556;

	t24 = ((x97%x98)-(x99<=x100));

	if (t24 != -58) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MAX;
	int64_t x104 = 560416935755391LL;

	t25 = ((x101%x102)-(x103<=x104));

	if (t25 != 126) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x108 = -37738465;

	t26 = ((x105%x106)-(x107<=x108));

	if (t26 != 5LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x110 = 71136932349734204LL;
	volatile uint32_t x111 = 1886231752U;
	uint8_t x112 = UINT8_MAX;
	int64_t t27 = -657LL;

	t27 = ((x109%x110)-(x111<=x112));

	if (t27 != -572LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x114 = 145127650378LLU;

	t28 = ((x113%x114)-(x115<=x116));

	if (t28 != 107LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 81U;
	static int8_t x119 = 6;
	uint64_t x120 = UINT64_MAX;
	volatile uint32_t t29 = 961200915U;

	t29 = ((x117%x118)-(x119<=x120));

	if (t29 != 80U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	int16_t x124 = 1057;
	volatile uint64_t t30 = 268193997823363LLU;

	t30 = ((x121%x122)-(x123<=x124));

	if (t30 != 2147483647LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	static uint32_t x126 = UINT32_MAX;
	int16_t x127 = INT16_MIN;
	volatile uint16_t x128 = UINT16_MAX;
	volatile int64_t t31 = -6992060LL;

	t31 = ((x125%x126)-(x127<=x128));

	if (t31 != -2147483649LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MIN;
	volatile int32_t t32 = 33429668;

	t32 = ((x129%x130)-(x131<=x132));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MAX;
	volatile int64_t t33 = -7LL;

	t33 = ((x133%x134)-(x135<=x136));

	if (t33 != -3LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	static uint8_t x138 = UINT8_MAX;
	volatile int16_t x140 = -1;
	volatile int32_t t34 = -2;

	t34 = ((x137%x138)-(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	static int8_t x142 = INT8_MIN;
	int64_t x143 = -98267LL;
	int32_t x144 = -1;
	volatile uint64_t t35 = 20281LLU;

	t35 = ((x141%x142)-(x143<=x144));

	if (t35 != 126LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = 257;
	volatile int16_t x146 = INT16_MAX;
	volatile uint32_t x148 = 1576814186U;

	t36 = ((x145%x146)-(x147<=x148));

	if (t36 != 256) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -319;
	int16_t x150 = -1;
	int8_t x152 = INT8_MAX;

	t37 = ((x149%x150)-(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 835U;
	static uint32_t x155 = 211U;
	static int64_t x156 = INT64_MAX;
	uint32_t t38 = 3934U;

	t38 = ((x153%x154)-(x155<=x156));

	if (t38 != 834U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x157 = 1U;
	int8_t x158 = 4;
	int8_t x159 = -1;

	t39 = ((x157%x158)-(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = 2802;
	int32_t x162 = INT32_MAX;
	int64_t x163 = INT64_MIN;
	volatile int16_t x164 = -1242;
	volatile int32_t t40 = 0;

	t40 = ((x161%x162)-(x163<=x164));

	if (t40 != 2801) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = 7U;
	int64_t x167 = INT64_MIN;
	uint64_t x168 = UINT64_MAX;
	uint32_t t41 = 1390357U;

	t41 = ((x165%x166)-(x167<=x168));

	if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = UINT8_MAX;
	int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MAX;
	int16_t x172 = INT16_MIN;
	int64_t t42 = -10039993629022LL;

	t42 = ((x169%x170)-(x171<=x172));

	if (t42 != 255LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MIN;
	static int16_t x174 = INT16_MIN;
	int16_t x175 = -1;
	static uint8_t x176 = 1U;
	int32_t t43 = -805587;

	t43 = ((x173%x174)-(x175<=x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 83U;
	int32_t x178 = -1;
	volatile uint16_t x179 = UINT16_MAX;
	volatile uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = 49321;

	t44 = ((x177%x178)-(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = 1268703;
	int32_t x186 = INT32_MIN;
	static int64_t x187 = INT64_MIN;
	static int16_t x188 = INT16_MAX;
	int32_t t45 = -14473473;

	t45 = ((x185%x186)-(x187<=x188));

	if (t45 != 1268702) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 32150U;
	int64_t x190 = -1266400772250047103LL;
	int64_t x191 = 17933877707LL;
	uint16_t x192 = 0U;
	static volatile int64_t t46 = -174044523LL;

	t46 = ((x189%x190)-(x191<=x192));

	if (t46 != 32150LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	static int64_t x195 = INT64_MIN;
	int64_t x196 = -7532494LL;
	volatile int32_t t47 = -26;

	t47 = ((x193%x194)-(x195<=x196));

	if (t47 != -3) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = UINT16_MAX;
	int32_t x198 = -722348707;
	volatile uint8_t x199 = 50U;
	int8_t x200 = 1;
	int32_t t48 = -5;

	t48 = ((x197%x198)-(x199<=x200));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x204 = INT8_MAX;
	static volatile int32_t t49 = 637;

	t49 = ((x201%x202)-(x203<=x204));

	if (t49 != 74) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MAX;
	uint16_t x207 = 716U;
	static uint64_t x208 = 28573977360015103LLU;
	volatile int32_t t50 = -250;

	t50 = ((x205%x206)-(x207<=x208));

	if (t50 != -129) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = 237118533U;
	volatile int64_t x210 = INT64_MIN;
	static int64_t x211 = -1LL;
	uint64_t x212 = UINT64_MAX;
	static int64_t t51 = -37586617805903LL;

	t51 = ((x209%x210)-(x211<=x212));

	if (t51 != 237118532LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MIN;
	static volatile int32_t x214 = INT32_MIN;
	int64_t x215 = 85254375190160LL;
	static volatile int16_t x216 = INT16_MAX;
	volatile int32_t t52 = 1181;

	t52 = ((x213%x214)-(x215<=x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x218 = 123U;
	int16_t x219 = -1;
	int32_t x220 = -1;
	uint32_t t53 = UINT32_MAX;

	t53 = ((x217%x218)-(x219<=x220));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x221 = 1;
	int8_t x222 = -1;
	static uint64_t x223 = 1464LLU;
	static uint8_t x224 = 3U;
	volatile int32_t t54 = 4565616;

	t54 = ((x221%x222)-(x223<=x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x225 = INT64_MIN;
	int8_t x226 = INT8_MIN;
	uint16_t x227 = 10772U;
	int16_t x228 = 3;
	volatile int64_t t55 = 270050216460726302LL;

	t55 = ((x225%x226)-(x227<=x228));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = INT16_MAX;
	int8_t x230 = INT8_MIN;
	int64_t x231 = INT64_MIN;
	int32_t t56 = 1068966818;

	t56 = ((x229%x230)-(x231<=x232));

	if (t56 != 126) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MIN;
	uint16_t x234 = 1U;
	int64_t x235 = INT64_MAX;
	int64_t x236 = INT64_MIN;
	volatile int64_t t57 = -48LL;

	t57 = ((x233%x234)-(x235<=x236));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = 0;
	uint16_t x238 = UINT16_MAX;
	uint16_t x239 = UINT16_MAX;
	volatile int16_t x240 = 61;
	static volatile int32_t t58 = 5;

	t58 = ((x237%x238)-(x239<=x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = 553515U;
	int8_t x243 = -1;
	static volatile int32_t x244 = 0;
	volatile uint32_t t59 = 80U;

	t59 = ((x241%x242)-(x243<=x244));

	if (t59 != 553514U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x245 = INT64_MAX;
	int16_t x246 = INT16_MAX;
	static int16_t x248 = INT16_MIN;
	static int64_t t60 = -88784847LL;

	t60 = ((x245%x246)-(x247<=x248));

	if (t60 != 7LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x249 = -2;
	uint8_t x250 = UINT8_MAX;
	volatile int32_t x251 = -5442;
	int8_t x252 = 0;
	volatile int32_t t61 = 782719254;

	t61 = ((x249%x250)-(x251<=x252));

	if (t61 != -3) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x254 = 715681;
	uint16_t x255 = 0U;
	volatile int32_t x256 = INT32_MIN;
	uint64_t t62 = 671649577LLU;

	t62 = ((x253%x254)-(x255<=x256));

	if (t62 != 21438LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x257 = INT32_MAX;
	volatile int16_t x258 = INT16_MIN;
	uint16_t x259 = 5U;
	int16_t x260 = -1;

	t63 = ((x257%x258)-(x259<=x260));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x262 = -11431LL;
	int64_t x263 = 1383492763LL;
	volatile int64_t t64 = 1054LL;

	t64 = ((x261%x262)-(x263<=x264));

	if (t64 != -128LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = -48663098;
	uint8_t x266 = 15U;
	int64_t x267 = -224LL;
	static int32_t t65 = -475087262;

	t65 = ((x265%x266)-(x267<=x268));

	if (t65 != -9) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MAX;
	int32_t x270 = -28;
	static int32_t x271 = INT32_MAX;
	uint16_t x272 = UINT16_MAX;
	int32_t t66 = -317217;

	t66 = ((x269%x270)-(x271<=x272));

	if (t66 != 15) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x273 = 67U;
	int16_t x275 = -1;
	int16_t x276 = INT16_MAX;
	int64_t t67 = 15934288053LL;

	t67 = ((x273%x274)-(x275<=x276));

	if (t67 != 66LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x278 = 7149;
	int64_t x279 = INT64_MIN;
	static uint32_t x280 = 843U;
	uint64_t t68 = 358408883647LLU;

	t68 = ((x277%x278)-(x279<=x280));

	if (t68 != 5063LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = -1;
	int32_t x283 = INT32_MIN;
	uint32_t x284 = UINT32_MAX;
	static volatile int64_t t69 = 2045533411856372486LL;

	t69 = ((x281%x282)-(x283<=x284));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x287 = -1LL;
	int8_t x288 = -1;
	int32_t t70 = -31486;

	t70 = ((x285%x286)-(x287<=x288));

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = -8;
	int8_t x290 = 59;
	uint32_t x291 = UINT32_MAX;
	int16_t x292 = -1;
	int32_t t71 = -4048724;

	t71 = ((x289%x290)-(x291<=x292));

	if (t71 != -9) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x293 = 12U;
	static int16_t x294 = 83;
	int8_t x295 = INT8_MAX;
	static volatile int8_t x296 = INT8_MIN;
	int32_t t72 = -868;

	t72 = ((x293%x294)-(x295<=x296));

	if (t72 != 12) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = 873U;
	static int8_t x298 = INT8_MAX;
	int8_t x299 = -4;
	volatile int32_t t73 = 75117;

	t73 = ((x297%x298)-(x299<=x300));

	if (t73 != 110) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x301 = -1;
	int16_t x302 = INT16_MIN;
	uint16_t x303 = 759U;

	t74 = ((x301%x302)-(x303<=x304));

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = INT16_MAX;
	uint32_t x306 = 257254U;
	int64_t x307 = INT64_MAX;
	static uint16_t x308 = 3936U;

	t75 = ((x305%x306)-(x307<=x308));

	if (t75 != 32767U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x310 = 3215LL;
	int64_t x311 = -1LL;
	static uint64_t x312 = 361LLU;
	int64_t t76 = -1171736LL;

	t76 = ((x309%x310)-(x311<=x312));

	if (t76 != 1235LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = -12550633;
	int32_t x314 = INT32_MAX;
	uint32_t x315 = 14156900U;
	int32_t x316 = 224869430;
	int32_t t77 = 417810113;

	t77 = ((x313%x314)-(x315<=x316));

	if (t77 != -12550634) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x317 = 93U;
	int32_t x318 = INT32_MIN;
	int32_t x320 = INT32_MAX;
	int32_t t78 = -22;

	t78 = ((x317%x318)-(x319<=x320));

	if (t78 != 92) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = -8919LL;
	int32_t x323 = INT32_MAX;
	int16_t x324 = INT16_MIN;
	volatile int64_t t79 = -41138990685LL;

	t79 = ((x321%x322)-(x323<=x324));

	if (t79 != -2349LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = INT64_MIN;
	static uint8_t x326 = 19U;
	uint16_t x327 = 32362U;
	int64_t x328 = INT64_MIN;
	int64_t t80 = 346780869391164LL;

	t80 = ((x325%x326)-(x327<=x328));

	if (t80 != -18LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = -1LL;
	static int16_t x330 = -1;
	uint64_t x331 = 1863299031768LLU;
	uint8_t x332 = 0U;
	volatile int64_t t81 = -383466LL;

	t81 = ((x329%x330)-(x331<=x332));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x333 = 6;
	volatile int64_t x335 = INT64_MIN;
	int32_t x336 = -4;
	volatile uint32_t t82 = 10672U;

	t82 = ((x333%x334)-(x335<=x336));

	if (t82 != 5U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x338 = INT32_MAX;
	volatile int8_t x339 = INT8_MIN;
	int32_t x340 = -3639;

	t83 = ((x337%x338)-(x339<=x340));

	if (t83 != 5) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x342 = INT8_MIN;
	static volatile uint16_t x343 = UINT16_MAX;
	int64_t x344 = -1LL;

	t84 = ((x341%x342)-(x343<=x344));

	if (t84 != 127LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x345 = 26560802804927LLU;
	int16_t x346 = 1;
	int16_t x348 = 191;
	volatile uint64_t t85 = 8420617015535LLU;

	t85 = ((x345%x346)-(x347<=x348));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x350 = 12U;
	int8_t x351 = 2;
	int32_t x352 = 1985;
	volatile int32_t t86 = 126082018;

	t86 = ((x349%x350)-(x351<=x352));

	if (t86 != -9) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = INT16_MIN;
	uint16_t x354 = 5U;
	int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MIN;
	int32_t t87 = -610903;

	t87 = ((x353%x354)-(x355<=x356));

	if (t87 != -4) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x357 = 32U;
	uint64_t x358 = UINT64_MAX;
	static int32_t x359 = -1;
	static uint64_t x360 = 8359415157646LLU;
	static volatile uint64_t t88 = 12334184372264434LLU;

	t88 = ((x357%x358)-(x359<=x360));

	if (t88 != 32LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x363 = UINT32_MAX;
	int32_t x364 = INT32_MIN;
	int32_t t89 = -18;

	t89 = ((x361%x362)-(x363<=x364));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x366 = -482615450LL;
	uint64_t x367 = UINT64_MAX;
	int64_t t90 = -2750608468815LL;

	t90 = ((x365%x366)-(x367<=x368));

	if (t90 != -217021848LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x369 = INT16_MIN;
	uint16_t x370 = UINT16_MAX;
	uint16_t x371 = 2945U;
	volatile uint8_t x372 = 0U;
	volatile int32_t t91 = -321070113;

	t91 = ((x369%x370)-(x371<=x372));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x373 = 8U;
	volatile uint8_t x374 = 120U;
	uint8_t x376 = 41U;
	int32_t t92 = -2039;

	t92 = ((x373%x374)-(x375<=x376));

	if (t92 != 8) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x377 = 1U;
	uint64_t x378 = UINT64_MAX;
	int32_t x379 = INT32_MIN;
	static volatile int16_t x380 = INT16_MIN;
	uint64_t t93 = 798LLU;

	t93 = ((x377%x378)-(x379<=x380));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = -1;
	volatile int32_t x382 = 121;
	int32_t x383 = INT32_MAX;
	volatile uint32_t x384 = 21U;
	static volatile int32_t t94 = 51992;

	t94 = ((x381%x382)-(x383<=x384));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x387 = -1;
	int64_t x388 = INT64_MAX;
	static int32_t t95 = 975;

	t95 = ((x385%x386)-(x387<=x388));

	if (t95 != -129) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x391 = 3794635U;

	t96 = ((x389%x390)-(x391<=x392));

	if (t96 != -129) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x396 = UINT16_MAX;
	uint64_t t97 = 132276830204129LLU;

	t97 = ((x393%x394)-(x395<=x396));

	if (t97 != 786LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = -13389;
	int16_t x398 = INT16_MIN;
	uint64_t x399 = UINT64_MAX;
	int32_t t98 = 21801;

	t98 = ((x397%x398)-(x399<=x400));

	if (t98 != -13389) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x402 = INT64_MAX;
	uint16_t x403 = 1U;
	uint16_t x404 = UINT16_MAX;

	t99 = ((x401%x402)-(x403<=x404));

	if (t99 != 402LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = -1;
int64_t x7 = -433099926606464180LL;
volatile uint64_t x10 = UINT64_MAX;
uint16_t x13 = UINT16_MAX;
uint16_t x15 = 1021U;
volatile int32_t t3 = -795;
static int8_t x17 = INT8_MIN;
uint64_t t6 = 202687442LLU;
uint16_t x40 = UINT16_MAX;
volatile uint32_t x43 = UINT32_MAX;
volatile uint8_t x44 = UINT8_MAX;
int16_t x48 = 53;
uint8_t x49 = UINT8_MAX;
uint64_t x55 = UINT64_MAX;
volatile int8_t x62 = 15;
int16_t x63 = INT16_MIN;
int16_t x71 = INT16_MIN;
int64_t t17 = -21370240LL;
volatile int8_t x73 = 40;
static uint64_t t18 = 535389354654LLU;
static volatile int16_t x84 = 1;
volatile int32_t t21 = 175855627;
uint32_t x96 = 2890U;
int32_t x99 = INT32_MAX;
int32_t x109 = INT32_MIN;
static volatile uint32_t t27 = 0U;
static int16_t x117 = INT16_MIN;
uint64_t t28 = 8569245LLU;
int8_t x131 = INT8_MAX;
int64_t x132 = -167205LL;
int16_t x133 = INT16_MAX;
uint64_t t33 = 28618256459LLU;
int8_t x142 = INT8_MIN;
static uint32_t x143 = 16597U;
volatile int8_t x155 = INT8_MIN;
int16_t x156 = -514;
static volatile int16_t x158 = 1;
int64_t x159 = -47337619877622LL;
uint32_t x164 = 260454U;
int16_t x167 = INT16_MIN;
uint8_t x170 = 1U;
int32_t t41 = 77;
int32_t x173 = 16312181;
uint64_t t42 = 8LLU;
int64_t t45 = -6536566LL;
uint64_t x189 = UINT64_MAX;
static uint64_t x194 = 269136878757LLU;
volatile uint16_t x196 = 0U;
uint64_t t47 = 7356644361LLU;
volatile int32_t x197 = 861625;
uint64_t x204 = UINT64_MAX;
volatile int32_t x205 = INT32_MIN;
uint32_t t50 = 2810250U;
static uint32_t x214 = 1U;
volatile int64_t t53 = -13995079196LL;
int64_t x225 = INT64_MIN;
static uint16_t x229 = 0U;
int32_t t56 = -8031;
int16_t x240 = -1;
static volatile uint16_t x241 = 10594U;
int8_t x243 = -1;
int16_t x258 = INT16_MIN;
int8_t x259 = INT8_MAX;
uint16_t x263 = UINT16_MAX;
int64_t x267 = INT64_MAX;
uint64_t t64 = 5LLU;
int16_t x270 = 82;
volatile int64_t x271 = -3401023911LL;
int64_t x281 = INT64_MIN;
int32_t x282 = 1;
uint32_t x284 = UINT32_MAX;
uint64_t x297 = UINT64_MAX;
static int32_t x301 = -1;
int8_t x302 = 1;
int16_t x308 = INT16_MAX;
static volatile uint64_t t74 = 652404LLU;
volatile int16_t x318 = -1;
uint8_t x319 = UINT8_MAX;
volatile int64_t t75 = -15303239484LL;
volatile int16_t x325 = -1;
volatile int64_t t77 = 174737055092355LL;
static volatile uint64_t t80 = 286460LLU;
volatile int16_t x345 = INT16_MIN;
int16_t x348 = 1978;
uint32_t t82 = 54U;
int8_t x354 = INT8_MIN;
volatile uint64_t t84 = 226081746365538235LLU;
volatile uint16_t x361 = 332U;
uint64_t x368 = 4022297642LLU;
uint16_t x369 = 0U;
static int8_t x372 = -1;
int64_t x376 = -1LL;
int16_t x377 = -1;
int32_t x379 = 1298989;
int64_t x380 = -1LL;
volatile uint32_t t92 = 914U;
static volatile int32_t x389 = -1;
static int64_t x395 = INT64_MIN;
int64_t t94 = 60LL;
static int16_t x397 = INT16_MIN;
volatile int64_t x401 = INT64_MIN;
uint64_t x405 = 71354723484756531LLU;
volatile int32_t t98 = 15;
volatile int32_t t99 = -10;


void f0(void) {
	uint16_t x1 = 164U;
	int64_t x2 = 890562863749LL;
	int8_t x3 = -1;
	int8_t x4 = -1;
	static volatile int64_t t0 = -62343545920253774LL;

	t0 = (((x1%x2)&x3)-x4);

	if (t0 != 165LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int32_t x8 = -715249122;
	int64_t t1 = -3983871639789881526LL;

	t1 = (((x5%x6)&x7)-x8);

	if (t1 != 715249122LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -2145529884480LL;
	static int64_t x11 = -1LL;
	static int16_t x12 = INT16_MIN;
	volatile uint64_t t2 = 370LLU;

	t2 = (((x9%x10)&x11)-x12);

	if (t2 != 18446741928179699904LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -1;
	int8_t x16 = 0;

	t3 = (((x13%x14)&x15)-x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x18 = UINT8_MAX;
	uint32_t x19 = 35269255U;
	int8_t x20 = INT8_MIN;
	static volatile uint32_t t4 = 331U;

	t4 = (((x17%x18)&x19)-x20);

	if (t4 != 35269376U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint64_t x22 = 21LLU;
	static volatile uint16_t x23 = 87U;
	static int16_t x24 = -30;
	volatile uint64_t t5 = 379033955535781492LLU;

	t5 = (((x21%x22)&x23)-x24);

	if (t5 != 37LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 0U;
	static uint64_t x26 = UINT64_MAX;
	uint16_t x27 = 0U;
	int64_t x28 = -7LL;

	t6 = (((x25%x26)&x27)-x28);

	if (t6 != 7LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = -1LL;
	uint8_t x30 = UINT8_MAX;
	int32_t x31 = -6640;
	uint32_t x32 = 3523209U;
	volatile int64_t t7 = -7283328702663LL;

	t7 = (((x29%x30)&x31)-x32);

	if (t7 != -3529849LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -24274874;
	int16_t x34 = INT16_MAX;
	static int32_t x35 = INT32_MAX;
	uint64_t x36 = 120066948406660278LLU;
	static uint64_t t8 = 2057560002724LLU;

	t8 = (((x33%x34)&x35)-x36);

	if (t8 != 18326677127450347692LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MAX;
	volatile int64_t t9 = 3537LL;

	t9 = (((x37%x38)&x39)-x40);

	if (t9 != -65408LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 430U;
	int32_t x42 = 657;
	volatile uint32_t t10 = 35U;

	t10 = (((x41%x42)&x43)-x44);

	if (t10 != 175U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static int16_t x46 = INT16_MIN;
	uint64_t x47 = 2LLU;
	volatile uint64_t t11 = 3LLU;

	t11 = (((x45%x46)&x47)-x48);

	if (t11 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	int8_t x51 = INT8_MAX;
	volatile uint32_t x52 = UINT32_MAX;
	volatile uint32_t t12 = 1973502U;

	t12 = (((x49%x50)&x51)-x52);

	if (t12 != 128U) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	uint64_t x54 = 7763249657486407533LLU;
	int16_t x56 = -1;
	volatile uint64_t t13 = 17847701935LLU;

	t13 = (((x53%x54)&x55)-x56);

	if (t13 != 1460122379368368276LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	uint64_t x58 = 12LLU;
	int8_t x59 = -10;
	static int32_t x60 = INT32_MIN;
	static volatile uint64_t t14 = 170LLU;

	t14 = (((x57%x58)&x59)-x60);

	if (t14 != 2147483650LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int32_t x64 = 48;
	int32_t t15 = -259174678;

	t15 = (((x61%x62)&x63)-x64);

	if (t15 != -32816) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	int64_t x66 = INT64_MIN;
	uint32_t x67 = UINT32_MAX;
	int8_t x68 = INT8_MAX;
	int64_t t16 = -16861234555023LL;

	t16 = (((x65%x66)&x67)-x68);

	if (t16 != 4294934401LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 52244418054LL;
	static int8_t x70 = INT8_MIN;
	int64_t x72 = -1LL;

	t17 = (((x69%x70)&x71)-x72);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = 57485539268861933LLU;
	int16_t x75 = INT16_MAX;
	int64_t x76 = -1LL;

	t18 = (((x73%x74)&x75)-x76);

	if (t18 != 41LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = INT16_MIN;
	int32_t x80 = -1;
	uint32_t t19 = 7U;

	t19 = (((x77%x78)&x79)-x80);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MAX;
	static uint8_t x83 = 15U;
	int32_t t20 = 583;

	t20 = (((x81%x82)&x83)-x84);

	if (t20 != 14) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x85 = INT32_MIN;
	volatile int16_t x86 = -1;
	int8_t x87 = -7;
	volatile int16_t x88 = -1;

	t21 = (((x85%x86)&x87)-x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x93 = 19566861616013LLU;
	int16_t x94 = 122;
	int64_t x95 = -1LL;
	volatile uint64_t t22 = 327579760703LLU;

	t22 = (((x93%x94)&x95)-x96);

	if (t22 != 18446744073709548807LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = -1;
	int64_t x100 = -1LL;
	volatile int64_t t23 = -4103079777LL;

	t23 = (((x97%x98)&x99)-x100);

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MAX;
	volatile uint64_t x102 = 1899LLU;
	uint16_t x103 = 4318U;
	int64_t x104 = INT64_MIN;
	uint64_t t24 = 26LLU;

	t24 = (((x101%x102)&x103)-x104);

	if (t24 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x105 = 19U;
	uint32_t x106 = UINT32_MAX;
	volatile uint32_t x107 = 719U;
	int16_t x108 = INT16_MAX;
	volatile uint32_t t25 = 3U;

	t25 = (((x105%x106)&x107)-x108);

	if (t25 != 4294934532U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = 27;
	volatile uint8_t x111 = UINT8_MAX;
	int32_t x112 = 463;
	int32_t t26 = 0;

	t26 = (((x109%x110)&x111)-x112);

	if (t26 != -218) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = 538406901U;
	uint16_t x114 = 86U;
	int8_t x115 = 2;
	int8_t x116 = -1;

	t27 = (((x113%x114)&x115)-x116);

	if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x118 = 1;
	int32_t x119 = INT32_MIN;
	uint64_t x120 = 233893590LLU;

	t28 = (((x117%x118)&x119)-x120);

	if (t28 != 18446744073475658026LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = 409349142;
	int64_t x122 = -281LL;
	uint8_t x123 = 50U;
	uint8_t x124 = 3U;
	int64_t t29 = -1LL;

	t29 = (((x121%x122)&x123)-x124);

	if (t29 != 13LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 6U;
	int8_t x126 = -19;
	static int64_t x127 = INT64_MIN;
	static uint8_t x128 = UINT8_MAX;
	int64_t t30 = 3690304366587LL;

	t30 = (((x125%x126)&x127)-x128);

	if (t30 != -255LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = UINT16_MAX;
	uint32_t x130 = 1304837303U;
	volatile int64_t t31 = 15766464871318LL;

	t31 = (((x129%x130)&x131)-x132);

	if (t31 != 167332LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x134 = INT8_MIN;
	uint64_t x135 = 8041948LLU;
	volatile uint8_t x136 = 0U;
	uint64_t t32 = 1050665157LLU;

	t32 = (((x133%x134)&x135)-x136);

	if (t32 != 92LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 29U;
	static uint64_t x138 = 524683432510084413LLU;
	int32_t x139 = -1;
	int64_t x140 = INT64_MIN;

	t33 = (((x137%x138)&x139)-x140);

	if (t33 != 9223372036854775837LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = 46520U;
	uint32_t x144 = 17U;
	static uint32_t t34 = 6711U;

	t34 = (((x141%x142)&x143)-x144);

	if (t34 != 127U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	static int32_t x146 = INT32_MIN;
	int32_t x147 = -1;
	uint8_t x148 = UINT8_MAX;
	int32_t t35 = -299932;

	t35 = (((x145%x146)&x147)-x148);

	if (t35 != -255) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x149 = INT64_MIN;
	volatile int32_t x150 = INT32_MIN;
	static int32_t x151 = INT32_MIN;
	int32_t x152 = -1;
	volatile int64_t t36 = -33198213548416LL;

	t36 = (((x149%x150)&x151)-x152);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = 1U;
	int8_t x154 = INT8_MIN;
	volatile int32_t t37 = 27;

	t37 = (((x153%x154)&x155)-x156);

	if (t37 != 514) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = 1;
	int16_t x160 = INT16_MIN;
	static int64_t t38 = -27846409228653LL;

	t38 = (((x157%x158)&x159)-x160);

	if (t38 != 32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -36;
	int64_t x162 = -1LL;
	int32_t x163 = INT32_MIN;
	int64_t t39 = -204892095557502LL;

	t39 = (((x161%x162)&x163)-x164);

	if (t39 != -260454LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 69828LLU;
	uint16_t x166 = UINT16_MAX;
	int16_t x168 = -1;
	uint64_t t40 = 702617LLU;

	t40 = (((x165%x166)&x167)-x168);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x169 = -32;
	int32_t x171 = -1;
	uint16_t x172 = 1861U;

	t41 = (((x169%x170)&x171)-x172);

	if (t41 != -1861) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x174 = -41895815357975LL;
	static uint64_t x175 = 1036151712072LLU;
	uint8_t x176 = 17U;

	t42 = (((x173%x174)&x175)-x176);

	if (t42 != 7364911LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = -1;
	uint8_t x178 = UINT8_MAX;
	int64_t x179 = -1LL;
	volatile int64_t x180 = 185316127739LL;
	volatile int64_t t43 = 32833LL;

	t43 = (((x177%x178)&x179)-x180);

	if (t43 != -185316127740LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = 40U;
	int16_t x182 = -51;
	int8_t x183 = INT8_MAX;
	int32_t x184 = -1;
	int32_t t44 = 24843286;

	t44 = (((x181%x182)&x183)-x184);

	if (t44 != 41) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = -723;
	int64_t x186 = 42LL;
	int32_t x187 = -86222096;
	int32_t x188 = 148921;

	t45 = (((x185%x186)&x187)-x188);

	if (t45 != -86371017LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x190 = 3413U;
	static volatile uint32_t x191 = UINT32_MAX;
	volatile int8_t x192 = INT8_MIN;
	uint64_t t46 = 460LLU;

	t46 = (((x189%x190)&x191)-x192);

	if (t46 != 3159LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	int16_t x195 = INT16_MIN;

	t47 = (((x193%x194)&x195)-x196);

	if (t47 != 131690823680LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x198 = 668941763250LLU;
	static uint64_t x199 = UINT64_MAX;
	uint64_t x200 = 866130LLU;
	uint64_t t48 = 229317756079021LLU;

	t48 = (((x197%x198)&x199)-x200);

	if (t48 != 18446744073709547111LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = -512;
	static int32_t x202 = -34;
	static uint64_t x203 = 17226704760483LLU;
	uint64_t t49 = 128971184599288132LLU;

	t49 = (((x201%x202)&x203)-x204);

	if (t49 != 17226704760483LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MAX;
	uint32_t x208 = 1775U;

	t50 = (((x205%x206)&x207)-x208);

	if (t50 != 4294965521U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = UINT16_MAX;
	volatile uint64_t x210 = 1LLU;
	int64_t x211 = -1LL;
	static uint8_t x212 = 0U;
	volatile uint64_t t51 = 31675LLU;

	t51 = (((x209%x210)&x211)-x212);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x213 = UINT16_MAX;
	uint64_t x215 = 234946961907988934LLU;
	static volatile int8_t x216 = -1;
	volatile uint64_t t52 = 289422LLU;

	t52 = (((x213%x214)&x215)-x216);

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = INT64_MAX;
	int32_t x218 = -986;
	volatile uint8_t x219 = 9U;
	int32_t x220 = INT32_MIN;

	t53 = (((x217%x218)&x219)-x220);

	if (t53 != 2147483657LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = 8362;
	int64_t x222 = INT64_MAX;
	uint8_t x223 = UINT8_MAX;
	static volatile int8_t x224 = 4;
	int64_t t54 = 16653736241283427LL;

	t54 = (((x221%x222)&x223)-x224);

	if (t54 != 166LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x226 = INT8_MAX;
	int16_t x227 = INT16_MAX;
	uint64_t x228 = 6667883394259LLU;
	static uint64_t t55 = 27LLU;

	t55 = (((x225%x226)&x227)-x228);

	if (t55 != 18446737405826190124LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x230 = 26U;
	static int16_t x231 = -1;
	int16_t x232 = -61;

	t56 = (((x229%x230)&x231)-x232);

	if (t56 != 61) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = -48;
	int8_t x234 = INT8_MIN;
	int16_t x235 = 23;
	int64_t x236 = 1052152956407LL;
	static volatile int64_t t57 = -1754438LL;

	t57 = (((x233%x234)&x235)-x236);

	if (t57 != -1052152956391LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MAX;
	static uint64_t x238 = 3245280936393002469LLU;
	static int16_t x239 = -1;
	static volatile uint64_t t58 = 1LLU;

	t58 = (((x237%x238)&x239)-x240);

	if (t58 != 2732810164068770870LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x242 = 15405;
	int8_t x244 = INT8_MIN;
	static int32_t t59 = -18;

	t59 = (((x241%x242)&x243)-x244);

	if (t59 != 10722) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = -1;
	uint16_t x247 = 2U;
	static volatile uint64_t x248 = 895730478LLU;
	uint64_t t60 = 0LLU;

	t60 = (((x245%x246)&x247)-x248);

	if (t60 != 18446744072813821138LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = -111;
	uint16_t x250 = 7287U;
	static volatile int16_t x251 = -1;
	static int16_t x252 = 861;
	volatile int32_t t61 = 47011;

	t61 = (((x249%x250)&x251)-x252);

	if (t61 != -972) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MIN;
	static uint32_t x260 = UINT32_MAX;
	uint32_t t62 = 12U;

	t62 = (((x257%x258)&x259)-x260);

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x261 = UINT64_MAX;
	volatile int32_t x262 = -1;
	static int16_t x264 = INT16_MIN;
	uint64_t t63 = 236244079763LLU;

	t63 = (((x261%x262)&x263)-x264);

	if (t63 != 32768LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x265 = -4;
	volatile uint64_t x266 = UINT64_MAX;
	int32_t x268 = -1;

	t64 = (((x265%x266)&x267)-x268);

	if (t64 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = INT8_MAX;
	int8_t x272 = INT8_MIN;
	int64_t t65 = 951873200500625LL;

	t65 = (((x269%x270)&x271)-x272);

	if (t65 != 137LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x277 = 14LLU;
	static int16_t x278 = -6664;
	static uint8_t x279 = 0U;
	static uint64_t x280 = 4LLU;
	volatile uint64_t t66 = 6LLU;

	t66 = (((x277%x278)&x279)-x280);

	if (t66 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x283 = INT32_MIN;
	volatile int64_t t67 = 3361276533583LL;

	t67 = (((x281%x282)&x283)-x284);

	if (t67 != -4294967295LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x285 = 0U;
	volatile int64_t x286 = INT64_MAX;
	int32_t x287 = -41748007;
	uint64_t x288 = 1131621656422363LLU;
	volatile uint64_t t68 = 22223749819604663LLU;

	t68 = (((x285%x286)&x287)-x288);

	if (t68 != 18445612452053129253LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MIN;
	int8_t x290 = -1;
	static uint32_t x291 = UINT32_MAX;
	int8_t x292 = 1;
	uint32_t t69 = UINT32_MAX;

	t69 = (((x289%x290)&x291)-x292);

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x298 = UINT8_MAX;
	int32_t x299 = -1;
	int16_t x300 = -1;
	uint64_t t70 = 53616234220659012LLU;

	t70 = (((x297%x298)&x299)-x300);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x303 = 69919646;
	uint8_t x304 = 56U;
	volatile int32_t t71 = -848230;

	t71 = (((x301%x302)&x303)-x304);

	if (t71 != -56) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x305 = 0U;
	int8_t x306 = 63;
	int32_t x307 = INT32_MAX;
	int32_t t72 = -18810;

	t72 = (((x305%x306)&x307)-x308);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	int32_t x311 = INT32_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile int64_t t73 = 110735LL;

	t73 = (((x309%x310)&x311)-x312);

	if (t73 != -2147483775LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x313 = 6185676129LLU;
	uint64_t x314 = 8029500540LLU;
	uint32_t x315 = UINT32_MAX;
	volatile uint64_t x316 = 225847605LLU;

	t74 = (((x313%x314)&x315)-x316);

	if (t74 != 1664861228LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = 119LL;
	int16_t x320 = INT16_MIN;

	t75 = (((x317%x318)&x319)-x320);

	if (t75 != 32768LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x321 = -5;
	int32_t x322 = INT32_MIN;
	uint64_t x323 = UINT64_MAX;
	int64_t x324 = INT64_MIN;
	uint64_t t76 = 1431046374483251382LLU;

	t76 = (((x321%x322)&x323)-x324);

	if (t76 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x326 = -1;
	static int64_t x327 = 236LL;
	uint32_t x328 = UINT32_MAX;

	t77 = (((x325%x326)&x327)-x328);

	if (t77 != -4294967295LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x329 = INT64_MIN;
	uint64_t x330 = 2747353336LLU;
	int8_t x331 = INT8_MIN;
	int32_t x332 = INT32_MAX;
	uint64_t t78 = 172464046LLU;

	t78 = (((x329%x330)&x331)-x332);

	if (t78 != 18446744072774351745LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = -1;
	uint64_t x334 = 136768578LLU;
	static int64_t x335 = -126054556442838LL;
	uint16_t x336 = UINT16_MAX;
	uint64_t t79 = 119401439327487286LLU;

	t79 = (((x333%x334)&x335)-x336);

	if (t79 != 37687051LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x337 = UINT64_MAX;
	uint16_t x338 = 13U;
	int64_t x339 = INT64_MIN;
	volatile int8_t x340 = 5;

	t80 = (((x337%x338)&x339)-x340);

	if (t80 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x341 = -1;
	int16_t x342 = 61;
	int16_t x343 = INT16_MAX;
	int16_t x344 = INT16_MIN;
	volatile int32_t t81 = 11;

	t81 = (((x341%x342)&x343)-x344);

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x346 = 3U;
	uint32_t x347 = UINT32_MAX;

	t82 = (((x345%x346)&x347)-x348);

	if (t82 != 4294965316U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = INT32_MAX;
	int16_t x350 = INT16_MAX;
	volatile int64_t x351 = 881617LL;
	int64_t x352 = -500510469491418LL;
	int64_t t83 = -112090728874374LL;

	t83 = (((x349%x350)&x351)-x352);

	if (t83 != 500510469491419LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x353 = INT16_MAX;
	volatile uint8_t x355 = 103U;
	uint64_t x356 = 13108687999LLU;

	t84 = (((x353%x354)&x355)-x356);

	if (t84 != 18446744060600863720LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x357 = 3217LLU;
	volatile uint32_t x358 = 5656U;
	int8_t x359 = INT8_MIN;
	static int16_t x360 = -15;
	volatile uint64_t t85 = 97280LLU;

	t85 = (((x357%x358)&x359)-x360);

	if (t85 != 3215LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x362 = INT32_MIN;
	int8_t x363 = -1;
	int8_t x364 = 5;
	int32_t t86 = -124;

	t86 = (((x361%x362)&x363)-x364);

	if (t86 != 327) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MAX;
	int8_t x366 = 50;
	static uint16_t x367 = 3U;
	static uint64_t t87 = 14361435LLU;

	t87 = (((x365%x366)&x367)-x368);

	if (t87 != 18446744069687253975LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x370 = UINT64_MAX;
	int16_t x371 = INT16_MIN;
	static uint64_t t88 = 49LLU;

	t88 = (((x369%x370)&x371)-x372);

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x373 = -1657;
	static uint64_t x374 = 1LLU;
	int32_t x375 = INT32_MAX;
	uint64_t t89 = 66LLU;

	t89 = (((x373%x374)&x375)-x376);

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x378 = INT16_MIN;
	static int64_t t90 = 39430428316559916LL;

	t90 = (((x377%x378)&x379)-x380);

	if (t90 != 1298990LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MAX;
	static volatile int64_t x383 = INT64_MIN;
	static volatile int16_t x384 = -156;
	volatile int64_t t91 = -3322020288637235LL;

	t91 = (((x381%x382)&x383)-x384);

	if (t91 != -9223372036854775652LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x385 = INT32_MIN;
	int32_t x386 = 3720573;
	uint32_t x387 = 4089839U;
	int8_t x388 = INT8_MIN;

	t92 = (((x385%x386)&x387)-x388);

	if (t92 != 3409709U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x390 = INT8_MIN;
	int32_t x391 = 57043138;
	uint64_t x392 = 66073293LLU;
	static volatile uint64_t t93 = 196403LLU;

	t93 = (((x389%x390)&x391)-x392);

	if (t93 != 18446744073700521461LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = 2788;
	int16_t x394 = INT16_MIN;
	static uint32_t x396 = UINT32_MAX;

	t94 = (((x393%x394)&x395)-x396);

	if (t94 != -4294967295LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x398 = 78U;
	static volatile uint16_t x399 = UINT16_MAX;
	int8_t x400 = 1;
	volatile int32_t t95 = 18774847;

	t95 = (((x397%x398)&x399)-x400);

	if (t95 != 65527) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x402 = 497287;
	uint64_t x403 = UINT64_MAX;
	uint32_t x404 = 126U;
	uint64_t t96 = 38296LLU;

	t96 = (((x401%x402)&x403)-x404);

	if (t96 != 18446744073709302002LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x406 = 3817946558LLU;
	int32_t x407 = 28795;
	int16_t x408 = INT16_MIN;
	volatile uint64_t t97 = 338553145494897LLU;

	t97 = (((x405%x406)&x407)-x408);

	if (t97 != 57353LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = INT16_MAX;
	int32_t x410 = INT32_MAX;
	uint8_t x411 = 11U;
	uint8_t x412 = UINT8_MAX;

	t98 = (((x409%x410)&x411)-x412);

	if (t98 != -244) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = INT16_MAX;
	static int16_t x418 = INT16_MIN;
	int32_t x419 = INT32_MAX;
	volatile uint16_t x420 = 26913U;

	t99 = (((x417%x418)&x419)-x420);

	if (t99 != 5854) { NG(); } else { ; }
	
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


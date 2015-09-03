#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -1;
int32_t x3 = 9805;
static uint8_t x14 = 120U;
uint32_t x23 = UINT32_MAX;
int64_t x27 = INT64_MIN;
uint32_t x30 = UINT32_MAX;
static volatile int32_t t7 = 294;
uint16_t x34 = 3U;
int8_t x35 = INT8_MAX;
volatile int16_t x45 = INT16_MAX;
volatile int64_t x48 = 101584676646780147LL;
int32_t x52 = INT32_MIN;
int8_t x54 = 61;
volatile int8_t x56 = 5;
uint16_t x62 = UINT16_MAX;
int16_t x63 = -1;
int32_t x66 = INT32_MIN;
static uint16_t x67 = UINT16_MAX;
int16_t x68 = -7;
uint16_t x73 = 94U;
uint8_t x75 = 2U;
volatile int64_t x79 = 117975263206LL;
int32_t x87 = INT32_MIN;
volatile int16_t x93 = 11;
int8_t x97 = -6;
uint64_t x106 = UINT64_MAX;
int32_t x113 = INT32_MIN;
uint16_t x115 = 3U;
uint8_t x122 = 69U;
int16_t x131 = INT16_MIN;
uint8_t x133 = 0U;
uint32_t x148 = 71U;
volatile int32_t t37 = -47;
int32_t t38 = -18743;
int32_t x160 = INT32_MIN;
static int16_t x162 = INT16_MIN;
uint64_t x167 = 4144490674517678LLU;
volatile int64_t x177 = INT64_MAX;
uint8_t x178 = UINT8_MAX;
int16_t x185 = INT16_MIN;
static volatile int32_t t46 = -638;
int8_t x200 = INT8_MIN;
uint16_t x201 = 954U;
static uint8_t x206 = 119U;
int32_t t52 = -5;
int32_t x213 = 111031918;
static volatile int32_t t53 = -336576782;
int16_t x217 = -1;
int8_t x218 = INT8_MAX;
static int16_t x221 = INT16_MAX;
int8_t x223 = 13;
uint8_t x224 = UINT8_MAX;
int32_t x228 = -1;
int64_t x229 = INT64_MIN;
volatile int32_t t57 = -766053;
int8_t x238 = INT8_MAX;
int64_t x243 = INT64_MIN;
volatile int32_t x257 = INT32_MIN;
int8_t x258 = INT8_MIN;
int16_t x264 = INT16_MIN;
volatile int8_t x265 = INT8_MIN;
int64_t x272 = 954081858LL;
volatile int32_t t67 = 685576;
static int32_t x273 = -15077587;
static int32_t x286 = INT32_MIN;
static int64_t x288 = -1LL;
volatile int32_t t71 = 81460385;
int32_t x292 = INT32_MIN;
static int16_t x299 = INT16_MIN;
static int32_t x311 = INT32_MIN;
static volatile int32_t t76 = 138166;
uint8_t x315 = UINT8_MAX;
int16_t x329 = -1;
int8_t x334 = INT8_MIN;
volatile int32_t x336 = -521;
uint64_t x340 = 20201767100719LLU;
int32_t x344 = INT32_MAX;
volatile int32_t t84 = -2437042;
uint16_t x351 = 20U;
int16_t x353 = 0;
static int32_t x364 = INT32_MIN;
static volatile uint8_t x367 = UINT8_MAX;
int32_t t89 = -819043101;
static int8_t x369 = INT8_MIN;
int16_t x372 = 1;
int8_t x373 = INT8_MIN;
static int64_t x379 = INT64_MIN;
int64_t x383 = -1LL;
int16_t x394 = INT16_MIN;
volatile uint64_t x398 = UINT64_MAX;
static volatile int32_t t96 = 452300;
static uint32_t x401 = 13U;
int32_t t97 = -445;
static volatile int16_t x408 = 13699;
static int64_t x409 = INT64_MIN;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int64_t x4 = 2334738818030596494LL;
	volatile int32_t t0 = -789;

	t0 = (((x1|x2)%x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	int64_t x6 = INT64_MAX;
	static int8_t x7 = -21;
	int16_t x8 = -1405;
	static int32_t t1 = 223;

	t1 = (((x5|x6)%x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MAX;
	int64_t x10 = -1LL;
	uint8_t x11 = 2U;
	uint64_t x12 = 341727LLU;
	volatile int32_t t2 = -21;

	t2 = (((x9|x10)%x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 333U;
	static int32_t x15 = INT32_MIN;
	int8_t x16 = -1;
	int32_t t3 = -19659;

	t3 = (((x13|x14)%x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 13;
	int16_t x18 = INT16_MAX;
	volatile int64_t x19 = -446LL;
	uint64_t x20 = 96343LLU;
	volatile int32_t t4 = 44;

	t4 = (((x17|x18)%x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 16U;
	static int8_t x22 = INT8_MIN;
	volatile uint32_t x24 = UINT32_MAX;
	volatile int32_t t5 = 26258;

	t5 = (((x21|x22)%x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 913LLU;
	static int16_t x26 = INT16_MIN;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 521975914;

	t6 = (((x25|x26)%x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = UINT8_MAX;
	static int8_t x31 = INT8_MIN;
	volatile int64_t x32 = INT64_MIN;

	t7 = (((x29|x30)%x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 32566780U;
	int64_t x36 = 20LL;
	volatile int32_t t8 = 260;

	t8 = (((x33|x34)%x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = 1;
	int8_t x38 = INT8_MIN;
	int16_t x39 = -1;
	int32_t x40 = -1;
	static int32_t t9 = -1;

	t9 = (((x37|x38)%x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 421341LLU;
	volatile int64_t x42 = INT64_MAX;
	int32_t x43 = -1;
	uint64_t x44 = UINT64_MAX;
	int32_t t10 = -267498;

	t10 = (((x41|x42)%x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 826U;
	uint64_t x47 = UINT64_MAX;
	volatile int32_t t11 = 50893537;

	t11 = (((x45|x46)%x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 2928;
	static int64_t x50 = 4624564LL;
	int64_t x51 = INT64_MIN;
	int32_t t12 = 9396065;

	t12 = (((x49|x50)%x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int64_t x55 = INT64_MIN;
	int32_t t13 = -54;

	t13 = (((x53|x54)%x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -149112;
	int8_t x58 = INT8_MAX;
	uint8_t x59 = UINT8_MAX;
	uint64_t x60 = 7341645437998LLU;
	static volatile int32_t t14 = 620082;

	t14 = (((x57|x58)%x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 6U;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 127;

	t15 = (((x61|x62)%x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 8369;
	volatile int32_t t16 = -634684369;

	t16 = (((x65|x66)%x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MIN;
	volatile int8_t x70 = 2;
	static volatile int32_t x71 = 9168880;
	int32_t x72 = 103559747;
	static volatile int32_t t17 = 12;

	t17 = (((x69|x70)%x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x74 = INT8_MIN;
	uint8_t x76 = 5U;
	volatile int32_t t18 = 0;

	t18 = (((x73|x74)%x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 10936998303218LLU;
	int16_t x78 = -1;
	volatile int16_t x80 = -2487;
	int32_t t19 = -395;

	t19 = (((x77|x78)%x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 260683LLU;
	volatile int64_t x82 = INT64_MAX;
	volatile int64_t x83 = 13385LL;
	static int32_t x84 = INT32_MIN;
	volatile int32_t t20 = -4;

	t20 = (((x81|x82)%x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	static int64_t x86 = INT64_MAX;
	int64_t x88 = -1LL;
	int32_t t21 = 3;

	t21 = (((x85|x86)%x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 1U;
	int32_t x90 = -38482;
	uint16_t x91 = UINT16_MAX;
	static int64_t x92 = 64984281357877423LL;
	volatile int32_t t22 = -15413358;

	t22 = (((x89|x90)%x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -24;
	volatile int8_t x95 = -1;
	uint64_t x96 = 1801LLU;
	int32_t t23 = 1;

	t23 = (((x93|x94)%x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = 216537939;
	int32_t x99 = INT32_MAX;
	static uint16_t x100 = UINT16_MAX;
	static int32_t t24 = -20;

	t24 = (((x97|x98)%x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 7678016090LLU;
	static uint64_t x102 = 754LLU;
	int32_t x103 = -1;
	int8_t x104 = -1;
	int32_t t25 = 113507;

	t25 = (((x101|x102)%x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = 18U;
	int16_t x107 = INT16_MIN;
	int8_t x108 = -1;
	int32_t t26 = 821;

	t26 = (((x105|x106)%x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = 1232952940U;
	volatile uint8_t x110 = 0U;
	uint8_t x111 = 77U;
	uint16_t x112 = 2U;
	int32_t t27 = 10901;

	t27 = (((x109|x110)%x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = 16444116;
	uint16_t x116 = 697U;
	int32_t t28 = 2;

	t28 = (((x113|x114)%x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MIN;
	int64_t x118 = -97211LL;
	static uint8_t x119 = UINT8_MAX;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = 3;

	t29 = (((x117|x118)%x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = UINT16_MAX;
	uint32_t x123 = UINT32_MAX;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t30 = 179176220;

	t30 = (((x121|x122)%x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int32_t x126 = 145795770;
	int32_t x127 = -1;
	volatile uint8_t x128 = 10U;
	int32_t t31 = -34;

	t31 = (((x125|x126)%x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int16_t x130 = INT16_MIN;
	volatile uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = -216777984;

	t32 = (((x129|x130)%x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = UINT32_MAX;
	int8_t x135 = INT8_MIN;
	static int32_t x136 = -1;
	static volatile int32_t t33 = -179129;

	t33 = (((x133|x134)%x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MIN;
	int32_t x138 = -1;
	static uint32_t x139 = UINT32_MAX;
	int16_t x140 = 5773;
	volatile int32_t t34 = -3629232;

	t34 = (((x137|x138)%x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	uint32_t x142 = 1318872982U;
	static volatile int8_t x143 = INT8_MAX;
	int32_t x144 = 23;
	int32_t t35 = -773050571;

	t35 = (((x141|x142)%x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int16_t x146 = -1;
	static volatile int16_t x147 = INT16_MIN;
	static int32_t t36 = 265001;

	t36 = (((x145|x146)%x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	uint32_t x150 = UINT32_MAX;
	volatile uint32_t x151 = 3539879U;
	volatile int16_t x152 = -14;

	t37 = (((x149|x150)%x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -23;
	uint16_t x154 = 0U;
	int16_t x155 = 1;
	int16_t x156 = INT16_MAX;

	t38 = (((x153|x154)%x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = 25;
	int8_t x158 = -1;
	uint64_t x159 = 126356220658543897LLU;
	volatile int32_t t39 = -258903174;

	t39 = (((x157|x158)%x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 1U;
	static volatile int8_t x163 = -1;
	int8_t x164 = INT8_MAX;
	int32_t t40 = 3639;

	t40 = (((x161|x162)%x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -1;
	uint16_t x166 = UINT16_MAX;
	static int16_t x168 = 8716;
	static volatile int32_t t41 = -17;

	t41 = (((x165|x166)%x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x169 = UINT8_MAX;
	int32_t x170 = 490150606;
	static uint16_t x171 = 2530U;
	volatile uint32_t x172 = 0U;
	volatile int32_t t42 = 4704801;

	t42 = (((x169|x170)%x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x173 = -776;
	static int32_t x174 = INT32_MIN;
	volatile int8_t x175 = -1;
	static uint16_t x176 = 7021U;
	volatile int32_t t43 = 2532558;

	t43 = (((x173|x174)%x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x179 = UINT64_MAX;
	static int8_t x180 = INT8_MIN;
	static volatile int32_t t44 = 941363330;

	t44 = (((x177|x178)%x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	int32_t x182 = INT32_MIN;
	int8_t x183 = -1;
	uint64_t x184 = 408LLU;
	volatile int32_t t45 = 44998866;

	t45 = (((x181|x182)%x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x186 = UINT8_MAX;
	static volatile uint8_t x187 = 3U;
	int32_t x188 = -1;

	t46 = (((x185|x186)%x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 2U;
	int64_t x190 = INT64_MIN;
	volatile uint16_t x191 = UINT16_MAX;
	static volatile uint32_t x192 = UINT32_MAX;
	volatile int32_t t47 = -3753832;

	t47 = (((x189|x190)%x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x193 = UINT16_MAX;
	int8_t x194 = INT8_MIN;
	uint8_t x195 = 57U;
	volatile int8_t x196 = -1;
	int32_t t48 = -68370378;

	t48 = (((x193|x194)%x195)==x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 15U;
	static uint64_t x198 = 24116027270LLU;
	int64_t x199 = -1LL;
	volatile int32_t t49 = -993783;

	t49 = (((x197|x198)%x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x202 = UINT32_MAX;
	volatile int8_t x203 = -1;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -3;

	t50 = (((x201|x202)%x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = 128LL;
	static int8_t x207 = INT8_MAX;
	volatile uint64_t x208 = UINT64_MAX;
	static int32_t t51 = -240832015;

	t51 = (((x205|x206)%x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	static uint16_t x210 = 6472U;
	uint8_t x211 = UINT8_MAX;
	static volatile int32_t x212 = -124628;

	t52 = (((x209|x210)%x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x214 = 11250085806LLU;
	uint8_t x215 = 6U;
	volatile int8_t x216 = -3;

	t53 = (((x213|x214)%x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x219 = 835U;
	static uint64_t x220 = 17310130459054LLU;
	int32_t t54 = -3;

	t54 = (((x217|x218)%x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = INT16_MIN;
	volatile int32_t t55 = 4;

	t55 = (((x221|x222)%x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = -1LL;
	int64_t x226 = INT64_MIN;
	volatile uint16_t x227 = 7U;
	volatile int32_t t56 = 4513799;

	t56 = (((x225|x226)%x227)==x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MIN;
	volatile int16_t x231 = INT16_MIN;
	int8_t x232 = 18;

	t57 = (((x229|x230)%x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int32_t x234 = -1267318;
	int8_t x235 = INT8_MIN;
	uint32_t x236 = 7022276U;
	static volatile int32_t t58 = -1587359;

	t58 = (((x233|x234)%x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MIN;
	volatile uint32_t x239 = UINT32_MAX;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -476;

	t59 = (((x237|x238)%x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 0U;
	int32_t x242 = 138128;
	int64_t x244 = 1LL;
	int32_t t60 = -15651471;

	t60 = (((x241|x242)%x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	int64_t x246 = INT64_MAX;
	int64_t x247 = -1LL;
	uint8_t x248 = UINT8_MAX;
	int32_t t61 = -91200;

	t61 = (((x245|x246)%x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	int32_t x250 = 21;
	volatile uint64_t x251 = UINT64_MAX;
	static uint16_t x252 = 3528U;
	static int32_t t62 = 0;

	t62 = (((x249|x250)%x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -29;
	volatile uint8_t x254 = UINT8_MAX;
	int8_t x255 = 1;
	static volatile int16_t x256 = INT16_MAX;
	volatile int32_t t63 = -418615;

	t63 = (((x253|x254)%x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x259 = UINT64_MAX;
	volatile uint64_t x260 = 42LLU;
	static volatile int32_t t64 = 1;

	t64 = (((x257|x258)%x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	uint32_t x262 = 31U;
	volatile uint32_t x263 = UINT32_MAX;
	int32_t t65 = 106075;

	t65 = (((x261|x262)%x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x266 = -1LL;
	uint16_t x267 = 191U;
	uint16_t x268 = 56U;
	static volatile int32_t t66 = -536660583;

	t66 = (((x265|x266)%x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	volatile int16_t x270 = INT16_MIN;
	uint64_t x271 = UINT64_MAX;

	t67 = (((x269|x270)%x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MAX;
	int8_t x275 = -1;
	uint32_t x276 = UINT32_MAX;
	static int32_t t68 = 1;

	t68 = (((x273|x274)%x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	int16_t x278 = -1;
	uint32_t x279 = 7613U;
	static uint8_t x280 = 121U;
	volatile int32_t t69 = -26;

	t69 = (((x277|x278)%x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	uint8_t x282 = 2U;
	uint64_t x283 = UINT64_MAX;
	int16_t x284 = INT16_MAX;
	volatile int32_t t70 = -1;

	t70 = (((x281|x282)%x283)==x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 5;
	volatile uint32_t x287 = 116093460U;

	t71 = (((x285|x286)%x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MIN;
	int16_t x290 = -1;
	int32_t x291 = INT32_MAX;
	volatile int32_t t72 = 59375436;

	t72 = (((x289|x290)%x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = UINT8_MAX;
	uint64_t x294 = 3855196571137LLU;
	volatile uint8_t x295 = 5U;
	volatile int8_t x296 = INT8_MIN;
	int32_t t73 = 39;

	t73 = (((x293|x294)%x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int16_t x298 = -750;
	uint32_t x300 = 52354622U;
	static int32_t t74 = -189;

	t74 = (((x297|x298)%x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	int16_t x302 = 190;
	int16_t x303 = -1;
	int8_t x304 = INT8_MAX;
	volatile int32_t t75 = -7910;

	t75 = (((x301|x302)%x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x309 = -1LL;
	int64_t x310 = -16LL;
	uint32_t x312 = UINT32_MAX;

	t76 = (((x309|x310)%x311)==x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x313 = 54583015915335LLU;
	static int8_t x314 = 30;
	static uint16_t x316 = 223U;
	static volatile int32_t t77 = -2728679;

	t77 = (((x313|x314)%x315)==x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = INT8_MAX;
	int8_t x318 = -1;
	int8_t x319 = INT8_MIN;
	uint8_t x320 = 31U;
	int32_t t78 = 1398;

	t78 = (((x317|x318)%x319)==x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x325 = UINT8_MAX;
	volatile int16_t x326 = -1;
	int32_t x327 = -42;
	static int64_t x328 = -306339783LL;
	static volatile int32_t t79 = 0;

	t79 = (((x325|x326)%x327)==x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x330 = INT32_MIN;
	int8_t x331 = INT8_MAX;
	volatile int64_t x332 = -158959910895095571LL;
	int32_t t80 = 2057424;

	t80 = (((x329|x330)%x331)==x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x333 = -114;
	volatile int32_t x335 = INT32_MAX;
	int32_t t81 = -31219;

	t81 = (((x333|x334)%x335)==x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = -214LL;
	uint32_t x338 = 141116340U;
	volatile int64_t x339 = INT64_MIN;
	volatile int32_t t82 = 3797428;

	t82 = (((x337|x338)%x339)==x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = INT32_MIN;
	int64_t x342 = -1LL;
	int32_t x343 = -7;
	int32_t t83 = 1;

	t83 = (((x341|x342)%x343)==x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = INT8_MIN;
	uint32_t x346 = UINT32_MAX;
	static int16_t x347 = INT16_MIN;
	uint32_t x348 = UINT32_MAX;

	t84 = (((x345|x346)%x347)==x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = 399148575U;
	volatile int16_t x350 = INT16_MAX;
	uint8_t x352 = 4U;
	static volatile int32_t t85 = -1;

	t85 = (((x349|x350)%x351)==x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x354 = -1LL;
	static int16_t x355 = -1;
	int16_t x356 = INT16_MIN;
	int32_t t86 = -1;

	t86 = (((x353|x354)%x355)==x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x357 = 2093418382044LLU;
	uint8_t x358 = UINT8_MAX;
	uint16_t x359 = 5U;
	static int32_t x360 = -1;
	volatile int32_t t87 = 988535;

	t87 = (((x357|x358)%x359)==x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x361 = 424U;
	int8_t x362 = -1;
	static int16_t x363 = INT16_MIN;
	static volatile int32_t t88 = 0;

	t88 = (((x361|x362)%x363)==x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x365 = INT32_MIN;
	int32_t x366 = 4860;
	volatile int64_t x368 = -1LL;

	t89 = (((x365|x366)%x367)==x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x370 = 7460;
	int8_t x371 = -6;
	volatile int32_t t90 = 168;

	t90 = (((x369|x370)%x371)==x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x374 = INT32_MAX;
	static uint32_t x375 = 609U;
	int16_t x376 = -3269;
	volatile int32_t t91 = 1000;

	t91 = (((x373|x374)%x375)==x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x377 = 114U;
	int16_t x378 = -20;
	int64_t x380 = -1LL;
	int32_t t92 = -14;

	t92 = (((x377|x378)%x379)==x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x381 = INT64_MAX;
	uint8_t x382 = UINT8_MAX;
	static volatile int16_t x384 = INT16_MIN;
	int32_t t93 = -964;

	t93 = (((x381|x382)%x383)==x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = -29;
	int64_t x387 = INT64_MAX;
	volatile int8_t x388 = -1;
	volatile int32_t t94 = 44177020;

	t94 = (((x385|x386)%x387)==x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = -1;
	int64_t x395 = -1LL;
	uint32_t x396 = UINT32_MAX;
	int32_t t95 = -1603;

	t95 = (((x393|x394)%x395)==x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = INT64_MAX;
	uint32_t x399 = 7U;
	int64_t x400 = INT64_MAX;

	t96 = (((x397|x398)%x399)==x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x402 = 1;
	int32_t x403 = INT32_MIN;
	static int8_t x404 = INT8_MAX;

	t97 = (((x401|x402)%x403)==x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x405 = 14LLU;
	volatile int64_t x406 = INT64_MAX;
	uint64_t x407 = 32533LLU;
	volatile int32_t t98 = -1;

	t98 = (((x405|x406)%x407)==x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x410 = 146322396U;
	int64_t x411 = -1LL;
	int16_t x412 = INT16_MIN;
	volatile int32_t t99 = -3;

	t99 = (((x409|x410)%x411)==x412);

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


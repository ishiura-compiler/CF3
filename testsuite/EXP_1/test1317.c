#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
int32_t t0 = 3611928;
volatile int16_t x14 = INT16_MAX;
volatile int64_t t2 = 277170491446LL;
int32_t t3 = 43174109;
uint16_t x21 = 1U;
uint16_t x30 = 9U;
volatile uint32_t t7 = 63U;
static int8_t x37 = INT8_MIN;
volatile int32_t x41 = 438;
int8_t x42 = INT8_MIN;
int8_t x45 = 18;
uint8_t x47 = UINT8_MAX;
static volatile int64_t x49 = INT64_MIN;
volatile int16_t x56 = -1;
static uint32_t x61 = UINT32_MAX;
int32_t t14 = 228;
int8_t x65 = 41;
int8_t x69 = -1;
int8_t x73 = -1;
volatile uint64_t x81 = UINT64_MAX;
int64_t t19 = -288350165LL;
uint32_t x87 = 1U;
static uint32_t t20 = 4176U;
int64_t x90 = INT64_MAX;
uint16_t x91 = UINT16_MAX;
int32_t x95 = -1;
uint16_t x102 = UINT16_MAX;
int16_t x103 = INT16_MIN;
int8_t x108 = 26;
int32_t t25 = -29;
uint32_t x109 = UINT32_MAX;
static volatile int64_t x112 = INT64_MIN;
int64_t t26 = -1928898823LL;
int8_t x114 = 5;
static int8_t x119 = INT8_MIN;
int8_t x124 = INT8_MIN;
int64_t x131 = -24542828654LL;
int64_t x133 = 209804LL;
uint8_t x137 = 2U;
uint8_t x140 = 48U;
uint16_t x141 = 3U;
int16_t x142 = 0;
int16_t x149 = -11;
int32_t x158 = INT32_MIN;
static int32_t x160 = INT32_MIN;
int32_t x163 = 64112;
static volatile int32_t t39 = 220575;
static int16_t x166 = 4;
uint32_t t40 = 241560U;
uint64_t x171 = 1LLU;
int64_t x176 = -1742LL;
uint16_t x183 = UINT16_MAX;
int16_t x186 = -1;
uint8_t x191 = UINT8_MAX;
int32_t x195 = INT32_MAX;
int16_t x198 = -92;
int64_t x199 = 3114166219LL;
int16_t x201 = -1;
uint32_t x206 = 6098514U;
static int64_t t50 = -262903700178381759LL;
uint16_t x209 = 30U;
int64_t t51 = 797405LL;
static volatile uint32_t x216 = 37546403U;
static uint16_t x217 = UINT16_MAX;
int64_t x218 = INT64_MIN;
int32_t x229 = -1;
int16_t x234 = -370;
volatile int64_t t58 = 821228001770LL;
static int64_t t60 = -12LL;
int8_t x249 = -1;
int16_t x250 = 1;
int64_t x255 = -944216360677LL;
static volatile int64_t t66 = -2LL;
uint64_t x274 = UINT64_MAX;
static uint32_t x275 = 6410U;
uint32_t t67 = 24909247U;
int8_t x282 = INT8_MIN;
static int32_t t69 = -21;
int16_t x285 = INT16_MIN;
int16_t x287 = 1605;
int64_t x288 = INT64_MIN;
int32_t x293 = -1;
uint64_t t72 = 13943395881LLU;
static volatile uint64_t x299 = 1497067899LLU;
uint32_t x301 = UINT32_MAX;
uint8_t x304 = 7U;
int32_t t74 = 14590446;
int64_t x309 = INT64_MIN;
int64_t t76 = 40241263LL;
uint8_t x320 = 106U;
int64_t x322 = 42339LL;
volatile uint32_t x332 = 21033U;
volatile uint64_t t81 = 653925257281771190LLU;
static int32_t x335 = -47;
volatile int32_t t82 = -5733;
int32_t t83 = 5366529;
volatile uint32_t x344 = UINT32_MAX;
int64_t t84 = 16734422LL;
int32_t x345 = -1;
int32_t x349 = -1;
volatile int64_t t86 = -2639936399063LL;
int32_t t88 = 142;
volatile int16_t x361 = INT16_MIN;
int64_t x362 = 24LL;
int64_t x364 = INT64_MIN;
volatile uint8_t x368 = 8U;
uint64_t t91 = 715LLU;
uint64_t x377 = 82048843775LLU;
static int8_t x388 = INT8_MAX;
volatile int16_t x402 = INT16_MAX;


void f0(void) {
	uint32_t x1 = 2016085U;
	uint64_t x2 = 4068995535968LLU;
	int32_t x3 = INT32_MAX;

	t0 = (((x1==x2)&x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MAX;
	static uint8_t x10 = 12U;
	uint8_t x11 = UINT8_MAX;
	int16_t x12 = INT16_MAX;
	int32_t t1 = 24718321;

	t1 = (((x9==x10)&x11)/x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	int32_t x15 = -1;
	int64_t x16 = INT64_MIN;

	t2 = (((x13==x14)&x15)/x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -102388072;
	static volatile int32_t x18 = -1;
	static volatile int16_t x19 = INT16_MAX;
	int8_t x20 = INT8_MIN;

	t3 = (((x17==x18)&x19)/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x22 = 60511594U;
	int8_t x23 = INT8_MAX;
	volatile uint16_t x24 = 23036U;
	int32_t t4 = -441;

	t4 = (((x21==x22)&x23)/x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -3136;
	int32_t x26 = INT32_MIN;
	uint16_t x27 = 1U;
	int8_t x28 = -2;
	int32_t t5 = -3254;

	t5 = (((x25==x26)&x27)/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	static volatile int64_t x31 = -1LL;
	int8_t x32 = -1;
	int64_t t6 = 45363473373LL;

	t6 = (((x29==x30)&x31)/x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = UINT64_MAX;
	int8_t x34 = 1;
	uint32_t x35 = UINT32_MAX;
	int8_t x36 = -1;

	t7 = (((x33==x34)&x35)/x36);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = INT16_MIN;
	static uint8_t x39 = UINT8_MAX;
	int32_t x40 = INT32_MIN;
	int32_t t8 = -26860408;

	t8 = (((x37==x38)&x39)/x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x43 = 60U;
	int32_t x44 = -1;
	volatile int32_t t9 = -1;

	t9 = (((x41==x42)&x43)/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x46 = 51229;
	int8_t x48 = 1;
	int32_t t10 = -132697;

	t10 = (((x45==x46)&x47)/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = INT8_MAX;
	static volatile int32_t x51 = -1;
	int64_t x52 = -14968713507646982LL;
	volatile int64_t t11 = -12123258LL;

	t11 = (((x49==x50)&x51)/x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MAX;
	int64_t x54 = -1LL;
	int8_t x55 = INT8_MIN;
	static int32_t t12 = -85797570;

	t12 = (((x53==x54)&x55)/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 57U;
	volatile int32_t x58 = INT32_MIN;
	volatile int8_t x59 = 0;
	int16_t x60 = INT16_MIN;
	int32_t t13 = 296;

	t13 = (((x57==x58)&x59)/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x62 = 41U;
	volatile int16_t x63 = -8;
	int32_t x64 = INT32_MIN;

	t14 = (((x61==x62)&x63)/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x66 = 11U;
	uint16_t x67 = 48U;
	int64_t x68 = INT64_MAX;
	int64_t t15 = -5LL;

	t15 = (((x65==x66)&x67)/x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x70 = -2404;
	uint32_t x71 = UINT32_MAX;
	int32_t x72 = 3;
	uint32_t t16 = 5U;

	t16 = (((x69==x70)&x71)/x72);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = INT64_MIN;
	static int8_t x75 = 15;
	uint32_t x76 = UINT32_MAX;
	static volatile uint32_t t17 = 2U;

	t17 = (((x73==x74)&x75)/x76);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = INT8_MIN;
	uint16_t x78 = 0U;
	static int64_t x79 = INT64_MAX;
	static volatile int64_t x80 = INT64_MIN;
	volatile int64_t t18 = -937064449531248LL;

	t18 = (((x77==x78)&x79)/x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = INT32_MIN;
	int16_t x83 = INT16_MAX;
	static int64_t x84 = INT64_MIN;

	t19 = (((x81==x82)&x83)/x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 27928792213LLU;
	int16_t x86 = -1;
	int32_t x88 = 938;

	t20 = (((x85==x86)&x87)/x88);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -61;
	uint64_t x92 = 624LLU;
	volatile uint64_t t21 = 971337LLU;

	t21 = (((x89==x90)&x91)/x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 1;
	int8_t x94 = -1;
	int16_t x96 = INT16_MAX;
	int32_t t22 = 178211020;

	t22 = (((x93==x94)&x95)/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 0U;
	int32_t x98 = INT32_MAX;
	int8_t x99 = 0;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t23 = 4;

	t23 = (((x97==x98)&x99)/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = 779531;
	uint64_t x104 = UINT64_MAX;
	uint64_t t24 = 8571LLU;

	t24 = (((x101==x102)&x103)/x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 0U;
	volatile int32_t x106 = -1;
	int32_t x107 = 7668;

	t25 = (((x105==x106)&x107)/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x110 = 318U;
	volatile uint32_t x111 = 5892U;

	t26 = (((x109==x110)&x111)/x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	uint8_t x115 = 23U;
	int64_t x116 = -1219751429903LL;
	int64_t t27 = -55LL;

	t27 = (((x113==x114)&x115)/x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	uint32_t x118 = 595788U;
	uint16_t x120 = 31U;
	static volatile int32_t t28 = 2;

	t28 = (((x117==x118)&x119)/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MAX;
	int32_t x122 = 3728201;
	int8_t x123 = INT8_MIN;
	int32_t t29 = -20;

	t29 = (((x121==x122)&x123)/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 6674251U;
	int64_t x126 = INT64_MAX;
	int64_t x127 = INT64_MIN;
	int64_t x128 = -1LL;
	int64_t t30 = 232423865LL;

	t30 = (((x125==x126)&x127)/x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 58389U;
	int64_t x130 = 0LL;
	int64_t x132 = INT64_MAX;
	volatile int64_t t31 = 20641LL;

	t31 = (((x129==x130)&x131)/x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x134 = INT64_MIN;
	volatile int8_t x135 = INT8_MIN;
	volatile int64_t x136 = INT64_MAX;
	static int64_t t32 = 417816LL;

	t32 = (((x133==x134)&x135)/x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x138 = INT16_MIN;
	int16_t x139 = -1;
	int32_t t33 = -128842296;

	t33 = (((x137==x138)&x139)/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x143 = 10U;
	volatile uint32_t x144 = 9U;
	uint32_t t34 = 3104U;

	t34 = (((x141==x142)&x143)/x144);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = -1LL;
	int16_t x146 = 2;
	int8_t x147 = INT8_MAX;
	int8_t x148 = -1;
	int32_t t35 = -36098717;

	t35 = (((x145==x146)&x147)/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x150 = UINT8_MAX;
	volatile int64_t x151 = INT64_MIN;
	uint8_t x152 = 13U;
	int64_t t36 = -627285819455686382LL;

	t36 = (((x149==x150)&x151)/x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = UINT32_MAX;
	volatile uint8_t x154 = UINT8_MAX;
	static int8_t x155 = -1;
	int8_t x156 = -1;
	volatile int32_t t37 = -1;

	t37 = (((x153==x154)&x155)/x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = 56;
	uint32_t x159 = 2488537U;
	uint32_t t38 = 2U;

	t38 = (((x157==x158)&x159)/x160);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MAX;
	int32_t x164 = -1;

	t39 = (((x161==x162)&x163)/x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	static uint32_t x168 = UINT32_MAX;

	t40 = (((x165==x166)&x167)/x168);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x169 = UINT16_MAX;
	uint64_t x170 = UINT64_MAX;
	uint8_t x172 = UINT8_MAX;
	static volatile uint64_t t41 = 13LLU;

	t41 = (((x169==x170)&x171)/x172);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -1;
	int64_t x174 = INT64_MAX;
	int32_t x175 = -23895;
	int64_t t42 = -1011792660679403LL;

	t42 = (((x173==x174)&x175)/x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = 13U;
	int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MIN;
	int64_t x180 = 20LL;
	int64_t t43 = 3LL;

	t43 = (((x177==x178)&x179)/x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = UINT32_MAX;
	int8_t x182 = INT8_MIN;
	int32_t x184 = -1;
	int32_t t44 = -841367;

	t44 = (((x181==x182)&x183)/x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x185 = INT32_MIN;
	uint64_t x187 = 596275076LLU;
	int8_t x188 = 1;
	static volatile uint64_t t45 = 39463LLU;

	t45 = (((x185==x186)&x187)/x188);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -32694229;
	uint64_t x190 = 80540003030885LLU;
	volatile int8_t x192 = -30;
	static volatile int32_t t46 = 1077;

	t46 = (((x189==x190)&x191)/x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x193 = -1LL;
	int32_t x194 = 0;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t47 = -15978;

	t47 = (((x193==x194)&x195)/x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x197 = -1LL;
	int64_t x200 = INT64_MIN;
	int64_t t48 = -57612870LL;

	t48 = (((x197==x198)&x199)/x200);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x202 = UINT64_MAX;
	static volatile int16_t x203 = INT16_MAX;
	static uint16_t x204 = UINT16_MAX;
	static volatile int32_t t49 = 3375;

	t49 = (((x201==x202)&x203)/x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x205 = -1;
	volatile uint16_t x207 = 1895U;
	int64_t x208 = INT64_MIN;

	t50 = (((x205==x206)&x207)/x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x210 = INT64_MAX;
	volatile uint16_t x211 = 4U;
	volatile int64_t x212 = INT64_MAX;

	t51 = (((x209==x210)&x211)/x212);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x213 = 1089U;
	uint32_t x214 = 809771U;
	int16_t x215 = -1;
	uint32_t t52 = 26401U;

	t52 = (((x213==x214)&x215)/x216);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x219 = UINT16_MAX;
	int16_t x220 = -1;
	static int32_t t53 = -5608;

	t53 = (((x217==x218)&x219)/x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 13U;
	uint32_t x222 = UINT32_MAX;
	int32_t x223 = 10;
	int16_t x224 = INT16_MIN;
	volatile int32_t t54 = -17940609;

	t54 = (((x221==x222)&x223)/x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x225 = UINT8_MAX;
	int8_t x226 = -1;
	uint64_t x227 = UINT64_MAX;
	int64_t x228 = -1LL;
	uint64_t t55 = 5169690882651882LLU;

	t55 = (((x225==x226)&x227)/x228);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x230 = UINT64_MAX;
	volatile int32_t x231 = INT32_MIN;
	int32_t x232 = INT32_MAX;
	volatile int32_t t56 = 2891;

	t56 = (((x229==x230)&x231)/x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x233 = 3U;
	int64_t x235 = INT64_MIN;
	static uint32_t x236 = UINT32_MAX;
	int64_t t57 = 0LL;

	t57 = (((x233==x234)&x235)/x236);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = 21730U;
	int8_t x238 = INT8_MIN;
	static uint8_t x239 = UINT8_MAX;
	int64_t x240 = INT64_MIN;

	t58 = (((x237==x238)&x239)/x240);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = -1;
	uint16_t x242 = 351U;
	static uint8_t x243 = UINT8_MAX;
	static int64_t x244 = INT64_MIN;
	int64_t t59 = -3977LL;

	t59 = (((x241==x242)&x243)/x244);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x245 = 0U;
	static uint16_t x246 = 11543U;
	volatile uint8_t x247 = 0U;
	int64_t x248 = -1LL;

	t60 = (((x245==x246)&x247)/x248);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x251 = UINT64_MAX;
	int16_t x252 = -1;
	uint64_t t61 = 27LLU;

	t61 = (((x249==x250)&x251)/x252);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = -1;
	static uint32_t x254 = UINT32_MAX;
	int64_t x256 = INT64_MIN;
	volatile int64_t t62 = -1376412212463LL;

	t62 = (((x253==x254)&x255)/x256);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x257 = -1;
	int32_t x258 = -125556;
	int8_t x259 = -1;
	int8_t x260 = 13;
	volatile int32_t t63 = -217436723;

	t63 = (((x257==x258)&x259)/x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MIN;
	uint32_t x262 = 79U;
	uint64_t x263 = UINT64_MAX;
	uint32_t x264 = 66755297U;
	uint64_t t64 = 205880031023305645LLU;

	t64 = (((x261==x262)&x263)/x264);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -51;
	static int64_t x266 = INT64_MAX;
	uint8_t x267 = 9U;
	volatile int32_t x268 = INT32_MIN;
	int32_t t65 = 4;

	t65 = (((x265==x266)&x267)/x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x269 = UINT16_MAX;
	int16_t x270 = -1;
	static volatile int64_t x271 = -1LL;
	int8_t x272 = INT8_MIN;

	t66 = (((x269==x270)&x271)/x272);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x273 = 36;
	int8_t x276 = INT8_MAX;

	t67 = (((x273==x274)&x275)/x276);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x277 = 1;
	uint8_t x278 = 5U;
	uint64_t x279 = 97LLU;
	int8_t x280 = 1;
	volatile uint64_t t68 = 942LLU;

	t68 = (((x277==x278)&x279)/x280);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x281 = UINT16_MAX;
	static int32_t x283 = INT32_MIN;
	int16_t x284 = -1;

	t69 = (((x281==x282)&x283)/x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x286 = INT8_MIN;
	int64_t t70 = -111523457577LL;

	t70 = (((x285==x286)&x287)/x288);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = -1LL;
	int64_t x290 = INT64_MIN;
	int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MIN;
	int32_t t71 = 1;

	t71 = (((x289==x290)&x291)/x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x294 = INT8_MAX;
	uint64_t x295 = UINT64_MAX;
	static volatile int64_t x296 = INT64_MIN;

	t72 = (((x293==x294)&x295)/x296);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x297 = INT64_MIN;
	uint8_t x298 = UINT8_MAX;
	int8_t x300 = -13;
	volatile uint64_t t73 = 384LLU;

	t73 = (((x297==x298)&x299)/x300);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x302 = -1;
	static int8_t x303 = INT8_MIN;

	t74 = (((x301==x302)&x303)/x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x305 = 6U;
	int8_t x306 = -1;
	int64_t x307 = -6789235123LL;
	int16_t x308 = INT16_MIN;
	int64_t t75 = -646LL;

	t75 = (((x305==x306)&x307)/x308);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x310 = 77215155LLU;
	int64_t x311 = INT64_MIN;
	int8_t x312 = 24;

	t76 = (((x309==x310)&x311)/x312);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = -1;
	int16_t x314 = -15401;
	static int8_t x315 = -53;
	volatile int8_t x316 = -13;
	int32_t t77 = -42;

	t77 = (((x313==x314)&x315)/x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x317 = 5U;
	static uint8_t x318 = 3U;
	static int64_t x319 = -1LL;
	static int64_t t78 = -1157926481039598LL;

	t78 = (((x317==x318)&x319)/x320);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = 1;
	static volatile int64_t x323 = INT64_MIN;
	int32_t x324 = INT32_MIN;
	int64_t t79 = 1790LL;

	t79 = (((x321==x322)&x323)/x324);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x325 = UINT16_MAX;
	uint16_t x326 = 1440U;
	int32_t x327 = -316;
	int8_t x328 = INT8_MAX;
	volatile int32_t t80 = 1;

	t80 = (((x325==x326)&x327)/x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = INT8_MIN;
	volatile uint16_t x330 = 47U;
	uint64_t x331 = UINT64_MAX;

	t81 = (((x329==x330)&x331)/x332);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = -1LL;
	int8_t x336 = INT8_MAX;

	t82 = (((x333==x334)&x335)/x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = -1636LL;
	uint16_t x338 = 23618U;
	uint16_t x339 = 272U;
	static uint16_t x340 = 12U;

	t83 = (((x337==x338)&x339)/x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = -1;
	int32_t x342 = INT32_MIN;
	int64_t x343 = 7263021913076339LL;

	t84 = (((x341==x342)&x343)/x344);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x346 = -1;
	static int32_t x347 = INT32_MIN;
	int8_t x348 = 25;
	int32_t t85 = -10721;

	t85 = (((x345==x346)&x347)/x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x350 = INT32_MAX;
	int64_t x351 = INT64_MIN;
	int64_t x352 = INT64_MIN;

	t86 = (((x349==x350)&x351)/x352);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = -1;
	int32_t x354 = INT32_MIN;
	uint64_t x355 = UINT64_MAX;
	int64_t x356 = -1784089853LL;
	volatile uint64_t t87 = 6LLU;

	t87 = (((x353==x354)&x355)/x356);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = INT8_MIN;
	int64_t x358 = -1LL;
	int32_t x359 = INT32_MIN;
	uint16_t x360 = 39U;

	t88 = (((x357==x358)&x359)/x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x363 = -1;
	volatile int64_t t89 = 413LL;

	t89 = (((x361==x362)&x363)/x364);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = -498842341353LL;
	volatile uint32_t x366 = 1652U;
	int8_t x367 = INT8_MAX;
	volatile int32_t t90 = 727;

	t90 = (((x365==x366)&x367)/x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x369 = INT8_MIN;
	static volatile int8_t x370 = INT8_MIN;
	int64_t x371 = 2252964427948LL;
	uint64_t x372 = 432LLU;

	t91 = (((x369==x370)&x371)/x372);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = INT8_MAX;
	volatile int8_t x374 = INT8_MIN;
	int64_t x375 = -1262738888119208892LL;
	volatile int16_t x376 = 114;
	volatile int64_t t92 = -107187788538610LL;

	t92 = (((x373==x374)&x375)/x376);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x378 = -1LL;
	int8_t x379 = INT8_MIN;
	volatile int32_t x380 = INT32_MAX;
	volatile int32_t t93 = 6745916;

	t93 = (((x377==x378)&x379)/x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = -20;
	uint16_t x382 = 0U;
	int16_t x383 = INT16_MAX;
	uint16_t x384 = 4397U;
	volatile int32_t t94 = -47708300;

	t94 = (((x381==x382)&x383)/x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x385 = 14;
	int32_t x386 = INT32_MIN;
	volatile uint32_t x387 = 129909430U;
	uint32_t t95 = 94509206U;

	t95 = (((x385==x386)&x387)/x388);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x389 = -1625065013468057LL;
	volatile int32_t x390 = 2;
	volatile int32_t x391 = INT32_MIN;
	int8_t x392 = -7;
	volatile int32_t t96 = 342;

	t96 = (((x389==x390)&x391)/x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x393 = 490329583LLU;
	volatile int64_t x394 = -139882LL;
	int16_t x395 = INT16_MIN;
	uint32_t x396 = 89U;
	uint32_t t97 = 815U;

	t97 = (((x393==x394)&x395)/x396);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x397 = 839181740;
	int8_t x398 = INT8_MIN;
	int8_t x399 = INT8_MAX;
	uint8_t x400 = 24U;
	static volatile int32_t t98 = 26416;

	t98 = (((x397==x398)&x399)/x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x401 = 29097U;
	int8_t x403 = -9;
	int8_t x404 = INT8_MIN;
	int32_t t99 = 5482199;

	t99 = (((x401==x402)&x403)/x404);

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


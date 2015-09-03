#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
static int32_t x4 = INT32_MAX;
int16_t x6 = -6253;
int32_t x7 = INT32_MIN;
int64_t x10 = -16LL;
volatile int64_t t2 = 653864462LL;
volatile int32_t t3 = 41;
int64_t t4 = -2858273852670714LL;
int32_t x24 = -38598;
int32_t t5 = 5737;
volatile int16_t x25 = INT16_MIN;
int32_t t6 = 516;
int8_t x40 = INT8_MAX;
int32_t x49 = INT32_MAX;
int8_t x55 = -2;
volatile int8_t x58 = INT8_MIN;
uint16_t x64 = UINT16_MAX;
int32_t x66 = -1;
int8_t x67 = -20;
uint32_t t16 = 14543U;
volatile uint16_t x76 = UINT16_MAX;
int64_t x77 = INT64_MIN;
uint32_t x90 = 14U;
int8_t x94 = -1;
int8_t x100 = -1;
static uint64_t x107 = 4363LLU;
int32_t x111 = INT32_MIN;
int8_t x113 = INT8_MIN;
int8_t x117 = 3;
int32_t t31 = 1055;
static volatile uint64_t x131 = UINT64_MAX;
int64_t x139 = INT64_MAX;
int32_t x140 = INT32_MIN;
int32_t x147 = -19;
volatile int16_t x148 = -18;
int32_t x152 = -1;
volatile int32_t t37 = -3;
int32_t x154 = 787753;
int16_t x156 = INT16_MAX;
static uint32_t x157 = UINT32_MAX;
int32_t x159 = -471303;
static int8_t x161 = INT8_MAX;
volatile int64_t x162 = -1LL;
int64_t x165 = INT64_MIN;
volatile int8_t x168 = INT8_MAX;
volatile int64_t t41 = INT64_MIN;
int64_t x174 = 84470563001007078LL;
static uint64_t x183 = UINT64_MAX;
int64_t x187 = -5335LL;
static uint64_t t46 = UINT64_MAX;
static int64_t x190 = INT64_MAX;
volatile uint32_t t47 = UINT32_MAX;
volatile int64_t x194 = INT64_MIN;
int32_t x198 = 52382582;
uint16_t x199 = 6134U;
int64_t x200 = INT64_MIN;
int64_t x201 = -1LL;
int32_t x203 = -1;
int64_t x205 = INT64_MAX;
int8_t x206 = -1;
int32_t x209 = INT32_MIN;
volatile uint64_t x210 = 13874LLU;
uint16_t x216 = 272U;
uint32_t t53 = 9764U;
int32_t t55 = 152;
volatile int32_t t56 = -15672168;
uint16_t x231 = UINT16_MAX;
static uint16_t x233 = 5U;
int8_t x234 = INT8_MIN;
static int32_t x235 = 423938188;
volatile int32_t x236 = INT32_MAX;
int8_t x242 = 1;
int8_t x250 = -1;
static uint64_t x254 = 5423159761LLU;
uint32_t x266 = 5372U;
uint8_t x275 = 2U;
uint8_t x278 = 2U;
volatile int64_t t67 = INT64_MAX;
uint8_t x282 = 4U;
int16_t x283 = -1;
int32_t t68 = -28237873;
static volatile uint32_t x285 = 953032454U;
int32_t x289 = -1;
uint32_t x290 = 18659513U;
int64_t x295 = -1LL;
uint16_t x301 = 10189U;
int32_t t73 = -1;
int16_t x305 = INT16_MIN;
int8_t x307 = INT8_MIN;
volatile uint8_t x308 = UINT8_MAX;
static int16_t x309 = -193;
int64_t x311 = -702439194205500374LL;
uint32_t x314 = 1047U;
volatile uint64_t x315 = 743388896132LLU;
uint8_t x317 = 20U;
volatile int16_t x322 = INT16_MAX;
uint32_t t78 = 5484U;
int8_t x326 = 60;
static int32_t x328 = -179290;
int64_t x330 = 3443844171947519552LL;
int64_t t83 = 15LL;
int16_t x346 = 0;
volatile int16_t x347 = INT16_MIN;
int32_t t84 = 14;
uint16_t x349 = UINT16_MAX;
int32_t t85 = -25775;
static int8_t x357 = 2;
int32_t x358 = -1;
volatile int32_t t88 = 526364;
int64_t x365 = -3705170198771493LL;
int32_t x367 = INT32_MIN;
uint64_t t89 = 778881LLU;
int16_t x369 = -3;
static int64_t x370 = INT64_MAX;
int16_t x377 = 28;
static int16_t x378 = INT16_MAX;
static int64_t x382 = -1LL;
volatile int32_t x384 = -1;
volatile int8_t x387 = -1;
static int64_t x400 = INT64_MIN;
static int8_t x406 = -57;
static volatile int64_t x408 = INT64_MIN;
static int64_t x412 = 41801457033115250LL;


void f0(void) {
	int16_t x2 = -110;
	int32_t x3 = INT32_MIN;
	static int32_t t0 = 1474286;

	t0 = (x1|((x2==x3)%x4));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	static volatile int16_t x8 = 482;
	int32_t t1 = 48227722;

	t1 = (x5|((x6==x7)%x8));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	volatile int8_t x11 = -1;
	int64_t x12 = INT64_MAX;

	t2 = (x9|((x10==x11)%x12));

	if (t2 != 4294967295LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int16_t x14 = -19;
	int32_t x15 = -49997356;
	int8_t x16 = INT8_MAX;

	t3 = (x13|((x14==x15)%x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x17 = INT8_MIN;
	int64_t x18 = 1908203LL;
	uint8_t x19 = UINT8_MAX;
	volatile int64_t x20 = -1LL;

	t4 = (x17|((x18==x19)%x20));

	if (t4 != -128LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	int32_t x22 = -1;
	uint64_t x23 = 536014784263LLU;

	t5 = (x21|((x22==x23)%x24));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x26 = 44178;
	int32_t x27 = -1;
	int16_t x28 = -2;

	t6 = (x25|((x26==x27)%x28));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 10U;
	int32_t x30 = INT32_MIN;
	uint32_t x31 = UINT32_MAX;
	uint64_t x32 = 63948939912052LLU;
	volatile uint64_t t7 = 3105176736556458LLU;

	t7 = (x29|((x30==x31)%x32));

	if (t7 != 10LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int16_t x34 = INT16_MAX;
	uint64_t x35 = UINT64_MAX;
	static int16_t x36 = -518;
	volatile int32_t t8 = -7;

	t8 = (x33|((x34==x35)%x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = 1;
	static int8_t x38 = 3;
	int16_t x39 = -1;
	int32_t t9 = 21;

	t9 = (x37|((x38==x39)%x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	uint8_t x42 = 1U;
	int32_t x43 = -1;
	static int64_t x44 = INT64_MAX;
	volatile int64_t t10 = -105893201LL;

	t10 = (x41|((x42==x43)%x44));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 61U;
	int64_t x46 = INT64_MAX;
	uint8_t x47 = 78U;
	uint64_t x48 = 3940365LLU;
	uint64_t t11 = 800808767229LLU;

	t11 = (x45|((x46==x47)%x48));

	if (t11 != 61LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -1;
	static uint32_t x51 = 177U;
	static volatile int32_t x52 = -28093;
	int32_t t12 = INT32_MAX;

	t12 = (x49|((x50==x51)%x52));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 2137U;
	volatile int64_t x54 = -1LL;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 106433;

	t13 = (x53|((x54==x55)%x56));

	if (t13 != 2137) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = 54;
	uint32_t x59 = 75716278U;
	int64_t x60 = -1LL;
	static int64_t t14 = 5756495365656LL;

	t14 = (x57|((x58==x59)%x60));

	if (t14 != 54LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int16_t x62 = 6;
	int16_t x63 = -200;
	int32_t t15 = -113691;

	t15 = (x61|((x62==x63)%x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	uint32_t x68 = UINT32_MAX;

	t16 = (x65|((x66==x67)%x68));

	if (t16 != 255U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 117819815U;
	volatile int8_t x70 = -43;
	int8_t x71 = -1;
	uint8_t x72 = 8U;
	volatile uint32_t t17 = 1445286U;

	t17 = (x69|((x70==x71)%x72));

	if (t17 != 117819815U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -1;
	uint16_t x74 = UINT16_MAX;
	int64_t x75 = -1LL;
	int32_t t18 = -11895;

	t18 = (x73|((x74==x75)%x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -41;
	int32_t x79 = INT32_MAX;
	int64_t x80 = 836650472499760LL;
	int64_t t19 = INT64_MIN;

	t19 = (x77|((x78==x79)%x80));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MIN;
	static int8_t x83 = -3;
	static uint8_t x84 = 5U;
	static volatile int64_t t20 = INT64_MIN;

	t20 = (x81|((x82==x83)%x84));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = 365812176;
	static int16_t x86 = -29;
	int16_t x87 = -1;
	volatile int64_t x88 = 3463LL;
	int64_t t21 = -1614099154LL;

	t21 = (x85|((x86==x87)%x88));

	if (t21 != 365812176LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = 1;
	int16_t x91 = INT16_MAX;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -589236;

	t22 = (x89|((x90==x91)%x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = 0;
	int8_t x95 = INT8_MIN;
	int32_t x96 = INT32_MIN;
	int32_t t23 = 19;

	t23 = (x93|((x94==x95)%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 105U;
	volatile int16_t x98 = -304;
	volatile int16_t x99 = -16363;
	int32_t t24 = -4186;

	t24 = (x97|((x98==x99)%x100));

	if (t24 != 105) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x101 = INT64_MIN;
	volatile int16_t x102 = INT16_MIN;
	uint32_t x103 = UINT32_MAX;
	int8_t x104 = -1;
	volatile int64_t t25 = INT64_MIN;

	t25 = (x101|((x102==x103)%x104));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	volatile uint16_t x106 = 25U;
	volatile int8_t x108 = INT8_MIN;
	static int32_t t26 = -432582685;

	t26 = (x105|((x106==x107)%x108));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	static volatile int8_t x110 = 1;
	static volatile int16_t x112 = -1;
	int64_t t27 = INT64_MAX;

	t27 = (x109|((x110==x111)%x112));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = 2U;
	int64_t x115 = -1562479377605LL;
	static int32_t x116 = INT32_MIN;
	int32_t t28 = -365;

	t28 = (x113|((x114==x115)%x116));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x118 = 1U;
	static int64_t x119 = INT64_MAX;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = -361553;

	t29 = (x117|((x118==x119)%x120));

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static volatile int8_t x122 = INT8_MIN;
	int32_t x123 = INT32_MAX;
	static volatile int16_t x124 = -51;
	volatile int32_t t30 = -6337303;

	t30 = (x121|((x122==x123)%x124));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	uint64_t x126 = 32842412610445LLU;
	static int64_t x127 = INT64_MAX;
	int32_t x128 = INT32_MIN;

	t31 = (x125|((x126==x127)%x128));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = 30;
	static int8_t x132 = INT8_MIN;
	int32_t t32 = 136164234;

	t32 = (x129|((x130==x131)%x132));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = 16U;
	int8_t x134 = INT8_MIN;
	uint16_t x135 = 14U;
	int8_t x136 = -3;
	int32_t t33 = 3519178;

	t33 = (x133|((x134==x135)%x136));

	if (t33 != 16) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -3;
	uint8_t x138 = 8U;
	int32_t t34 = -112;

	t34 = (x137|((x138==x139)%x140));

	if (t34 != -3) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x141 = -1;
	int16_t x142 = 1;
	volatile int16_t x143 = INT16_MIN;
	uint64_t x144 = 308155379281712LLU;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = (x141|((x142==x143)%x144));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	volatile int16_t x146 = INT16_MIN;
	int64_t t36 = INT64_MIN;

	t36 = (x145|((x146==x147)%x148));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int64_t x150 = INT64_MIN;
	int32_t x151 = -1;

	t37 = (x149|((x150==x151)%x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 23461U;
	volatile int8_t x155 = INT8_MAX;
	static volatile uint32_t t38 = 11707868U;

	t38 = (x153|((x154==x155)%x156));

	if (t38 != 23461U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MIN;
	static int8_t x160 = INT8_MAX;
	uint32_t t39 = UINT32_MAX;

	t39 = (x157|((x158==x159)%x160));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x163 = -1;
	int32_t x164 = -6478143;
	volatile int32_t t40 = -21616;

	t40 = (x161|((x162==x163)%x164));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = 3;
	static volatile int16_t x167 = 25;

	t41 = (x165|((x166==x167)%x168));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	uint32_t x170 = UINT32_MAX;
	int64_t x171 = INT64_MIN;
	int32_t x172 = 55226;
	int32_t t42 = INT32_MAX;

	t42 = (x169|((x170==x171)%x172));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 29LLU;
	uint8_t x175 = 29U;
	static uint64_t x176 = 258956368485LLU;
	uint64_t t43 = 6336573LLU;

	t43 = (x173|((x174==x175)%x176));

	if (t43 != 29LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	volatile uint32_t x178 = UINT32_MAX;
	int8_t x179 = INT8_MIN;
	int16_t x180 = -1;
	static volatile int32_t t44 = 207;

	t44 = (x177|((x178==x179)%x180));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MIN;
	int64_t x182 = INT64_MAX;
	int8_t x184 = INT8_MAX;
	static volatile int32_t t45 = INT32_MIN;

	t45 = (x181|((x182==x183)%x184));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = UINT64_MAX;
	static volatile uint32_t x186 = UINT32_MAX;
	volatile int64_t x188 = 2051198LL;

	t46 = (x185|((x186==x187)%x188));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	static uint16_t x191 = 259U;
	volatile int32_t x192 = -1;

	t47 = (x189|((x190==x191)%x192));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x193 = UINT16_MAX;
	int16_t x195 = -13;
	uint64_t x196 = UINT64_MAX;
	uint64_t t48 = 7844238LLU;

	t48 = (x193|((x194==x195)%x196));

	if (t48 != 65535LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = 7;
	volatile int64_t t49 = 241612LL;

	t49 = (x197|((x198==x199)%x200));

	if (t49 != 7LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x202 = 120U;
	int32_t x204 = -1;
	volatile int64_t t50 = -11289776546238LL;

	t50 = (x201|((x202==x203)%x204));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x207 = -1;
	int16_t x208 = -1;
	static int64_t t51 = INT64_MAX;

	t51 = (x205|((x206==x207)%x208));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x211 = INT64_MIN;
	volatile int8_t x212 = INT8_MIN;
	static volatile int32_t t52 = INT32_MIN;

	t52 = (x209|((x210==x211)%x212));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = 1U;
	uint8_t x214 = UINT8_MAX;
	int8_t x215 = INT8_MIN;

	t53 = (x213|((x214==x215)%x216));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	int16_t x218 = -2470;
	static volatile uint64_t x219 = UINT64_MAX;
	volatile int16_t x220 = INT16_MIN;
	int32_t t54 = 246807391;

	t54 = (x217|((x218==x219)%x220));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 1U;
	int64_t x222 = 13769253LL;
	int8_t x223 = INT8_MAX;
	int32_t x224 = INT32_MIN;

	t55 = (x221|((x222==x223)%x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	static int64_t x226 = -1LL;
	volatile int64_t x227 = INT64_MAX;
	int32_t x228 = 1;

	t56 = (x225|((x226==x227)%x228));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	uint64_t x230 = 426706688050878LLU;
	int16_t x232 = -409;
	int32_t t57 = 11089;

	t57 = (x229|((x230==x231)%x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t t58 = 7465;

	t58 = (x233|((x234==x235)%x236));

	if (t58 != 5) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x237 = 16U;
	volatile int8_t x238 = INT8_MIN;
	uint8_t x239 = UINT8_MAX;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t59 = 438191;

	t59 = (x237|((x238==x239)%x240));

	if (t59 != 16) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	volatile int8_t x243 = 9;
	uint8_t x244 = 13U;
	volatile int32_t t60 = INT32_MIN;

	t60 = (x241|((x242==x243)%x244));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	volatile uint32_t x246 = 491130665U;
	int16_t x247 = INT16_MIN;
	static uint16_t x248 = UINT16_MAX;
	volatile int32_t t61 = 10000734;

	t61 = (x245|((x246==x247)%x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int16_t x251 = 1;
	int8_t x252 = INT8_MIN;
	uint64_t t62 = UINT64_MAX;

	t62 = (x249|((x250==x251)%x252));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	uint64_t x255 = 2801LLU;
	static uint32_t x256 = 180887U;
	int64_t t63 = INT64_MIN;

	t63 = (x253|((x254==x255)%x256));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = INT64_MAX;
	static uint8_t x263 = 1U;
	int8_t x264 = INT8_MAX;
	volatile int32_t t64 = INT32_MIN;

	t64 = (x261|((x262==x263)%x264));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 3U;
	static volatile int64_t x267 = INT64_MIN;
	static int32_t x268 = INT32_MAX;
	static int32_t t65 = -1716;

	t65 = (x265|((x266==x267)%x268));

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = 1;
	static uint8_t x274 = UINT8_MAX;
	int64_t x276 = INT64_MIN;
	int64_t t66 = -353LL;

	t66 = (x273|((x274==x275)%x276));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x277 = INT64_MAX;
	uint64_t x279 = 58697548691923LLU;
	int16_t x280 = 1290;

	t67 = (x277|((x278==x279)%x280));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = 1;
	int8_t x284 = INT8_MIN;

	t68 = (x281|((x282==x283)%x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x286 = -3;
	volatile uint16_t x287 = UINT16_MAX;
	static int32_t x288 = INT32_MIN;
	static volatile uint32_t t69 = 44257U;

	t69 = (x285|((x286==x287)%x288));

	if (t69 != 953032454U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x291 = INT32_MIN;
	static volatile int16_t x292 = INT16_MIN;
	volatile int32_t t70 = -54015;

	t70 = (x289|((x290==x291)%x292));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = 0;
	static int16_t x294 = INT16_MIN;
	uint32_t x296 = 2U;
	volatile uint32_t t71 = 36244U;

	t71 = (x293|((x294==x295)%x296));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MAX;
	int8_t x298 = INT8_MIN;
	uint16_t x299 = 846U;
	uint64_t x300 = UINT64_MAX;
	uint64_t t72 = 4286304942LLU;

	t72 = (x297|((x298==x299)%x300));

	if (t72 != 2147483647LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x302 = 22U;
	int16_t x303 = -1;
	static uint8_t x304 = UINT8_MAX;

	t73 = (x301|((x302==x303)%x304));

	if (t73 != 10189) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x306 = INT16_MIN;
	volatile int32_t t74 = -9424;

	t74 = (x305|((x306==x307)%x308));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x310 = UINT16_MAX;
	int64_t x312 = INT64_MIN;
	int64_t t75 = 46458106406LL;

	t75 = (x309|((x310==x311)%x312));

	if (t75 != -193LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = UINT32_MAX;
	static int64_t x316 = -194187018735LL;
	int64_t t76 = -3820123157834270768LL;

	t76 = (x313|((x314==x315)%x316));

	if (t76 != 4294967295LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x318 = INT8_MIN;
	int32_t x319 = 283;
	static int8_t x320 = INT8_MIN;
	int32_t t77 = -318426;

	t77 = (x317|((x318==x319)%x320));

	if (t77 != 20) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x321 = 8U;
	int32_t x323 = INT32_MAX;
	int32_t x324 = -1;

	t78 = (x321|((x322==x323)%x324));

	if (t78 != 8U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MIN;
	uint8_t x327 = UINT8_MAX;
	int64_t t79 = INT64_MIN;

	t79 = (x325|((x326==x327)%x328));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x329 = -1;
	uint8_t x331 = 12U;
	volatile uint32_t x332 = UINT32_MAX;
	uint32_t t80 = UINT32_MAX;

	t80 = (x329|((x330==x331)%x332));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MIN;
	static uint16_t x334 = UINT16_MAX;
	volatile int8_t x335 = -1;
	volatile uint16_t x336 = 36U;
	int32_t t81 = 1711832;

	t81 = (x333|((x334==x335)%x336));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x337 = UINT16_MAX;
	uint32_t x338 = 55884U;
	uint8_t x339 = 30U;
	volatile uint8_t x340 = UINT8_MAX;
	int32_t t82 = 80;

	t82 = (x337|((x338==x339)%x340));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x341 = INT8_MAX;
	int8_t x342 = INT8_MAX;
	int32_t x343 = INT32_MAX;
	int64_t x344 = INT64_MIN;

	t83 = (x341|((x342==x343)%x344));

	if (t83 != 127LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = -1;
	int32_t x348 = -13270;

	t84 = (x345|((x346==x347)%x348));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x350 = 2761532U;
	uint16_t x351 = 222U;
	int8_t x352 = 17;

	t85 = (x349|((x350==x351)%x352));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x353 = INT8_MIN;
	uint64_t x354 = UINT64_MAX;
	static volatile int64_t x355 = INT64_MIN;
	static uint64_t x356 = UINT64_MAX;
	volatile uint64_t t86 = 3167LLU;

	t86 = (x353|((x354==x355)%x356));

	if (t86 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x359 = 370574671194LLU;
	int32_t x360 = -23684;
	static volatile int32_t t87 = 14;

	t87 = (x357|((x358==x359)%x360));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x361 = UINT8_MAX;
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = INT16_MIN;
	int32_t x364 = INT32_MIN;

	t88 = (x361|((x362==x363)%x364));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x366 = 21;
	uint64_t x368 = UINT64_MAX;

	t89 = (x365|((x366==x367)%x368));

	if (t89 != 18443038903510780123LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x371 = UINT8_MAX;
	int32_t x372 = -568;
	volatile int32_t t90 = 1899751;

	t90 = (x369|((x370==x371)%x372));

	if (t90 != -3) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x379 = UINT64_MAX;
	int64_t x380 = -1LL;
	static int64_t t91 = 187097LL;

	t91 = (x377|((x378==x379)%x380));

	if (t91 != 28LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = INT32_MAX;
	uint8_t x383 = 1U;
	volatile int32_t t92 = INT32_MAX;

	t92 = (x381|((x382==x383)%x384));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x385 = 55U;
	int32_t x386 = 27924;
	static uint8_t x388 = UINT8_MAX;
	int32_t t93 = -1816255;

	t93 = (x385|((x386==x387)%x388));

	if (t93 != 55) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x389 = INT8_MIN;
	static uint64_t x390 = 109796LLU;
	uint32_t x391 = 3U;
	uint16_t x392 = 753U;
	volatile int32_t t94 = 115;

	t94 = (x389|((x390==x391)%x392));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = 28;
	int64_t x398 = INT64_MIN;
	uint64_t x399 = 1427LLU;
	static int64_t t95 = 178138955LL;

	t95 = (x397|((x398==x399)%x400));

	if (t95 != 28LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	uint64_t x402 = 32046314090469946LLU;
	int64_t x403 = -1LL;
	static int32_t x404 = 1;
	volatile int32_t t96 = -28771;

	t96 = (x401|((x402==x403)%x404));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x405 = 2;
	static uint8_t x407 = UINT8_MAX;
	volatile int64_t t97 = 2133914LL;

	t97 = (x405|((x406==x407)%x408));

	if (t97 != 2LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = -1;
	uint16_t x410 = UINT16_MAX;
	uint8_t x411 = 105U;
	volatile int64_t t98 = 16349LL;

	t98 = (x409|((x410==x411)%x412));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x413 = 421012;
	int64_t x414 = INT64_MAX;
	uint64_t x415 = UINT64_MAX;
	int8_t x416 = INT8_MAX;
	volatile int32_t t99 = -819;

	t99 = (x413|((x414==x415)%x416));

	if (t99 != 421012) { NG(); } else { ; }
	
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


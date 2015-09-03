#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MAX;
uint32_t x7 = 1U;
int32_t x9 = INT32_MAX;
volatile int8_t x20 = -1;
int64_t x23 = -1LL;
static uint32_t x24 = UINT32_MAX;
int8_t x28 = INT8_MIN;
int32_t t8 = -106083;
static volatile uint64_t x38 = UINT64_MAX;
int32_t x40 = INT32_MAX;
static int32_t t9 = 7;
static int64_t x43 = -114498592602LL;
static uint64_t x44 = 60117361LLU;
int32_t x48 = INT32_MAX;
uint16_t x60 = 2U;
volatile uint16_t x63 = UINT16_MAX;
uint32_t x66 = UINT32_MAX;
uint32_t x75 = 6018U;
int16_t x79 = -237;
volatile int8_t x80 = INT8_MIN;
uint16_t x82 = 2017U;
volatile int32_t x85 = -1;
uint32_t x86 = 186305U;
static volatile uint16_t x93 = 34U;
int32_t t23 = 105357;
int8_t x99 = -7;
uint8_t x106 = 5U;
int32_t x107 = INT32_MIN;
volatile int32_t t27 = 7;
static uint16_t x113 = 1U;
static int32_t t28 = 77022555;
int32_t t29 = -5947133;
uint8_t x122 = 39U;
volatile int8_t x124 = INT8_MIN;
static volatile int64_t x126 = -1LL;
volatile int32_t t31 = 66;
uint16_t x131 = UINT16_MAX;
static volatile int32_t t33 = 224;
int32_t x137 = -1;
volatile uint32_t x139 = UINT32_MAX;
int32_t x140 = 58946;
int32_t t34 = -24619564;
static volatile uint8_t x149 = 25U;
int32_t x151 = -1;
volatile int32_t t37 = 822;
volatile int32_t t40 = 17;
static volatile int32_t t41 = -98;
static volatile int32_t t42 = -200515;
int16_t x174 = INT16_MAX;
int8_t x175 = INT8_MAX;
static int64_t x185 = 11LL;
int16_t x186 = -11153;
uint32_t x187 = UINT32_MAX;
volatile int8_t x188 = -41;
uint64_t x194 = 8343306688301758247LLU;
int32_t x196 = -1;
volatile int16_t x197 = INT16_MIN;
int32_t x198 = INT32_MIN;
int64_t x199 = -1LL;
int64_t x200 = -17149LL;
static int16_t x211 = -1;
uint8_t x214 = UINT8_MAX;
int32_t t53 = 9578055;
int16_t x221 = 11;
int64_t x222 = -1LL;
uint16_t x223 = 931U;
static volatile int32_t t59 = 0;
volatile int32_t t61 = 140;
volatile int8_t x251 = INT8_MAX;
uint32_t x252 = UINT32_MAX;
volatile int32_t t63 = -1241420;
volatile int8_t x258 = -19;
uint32_t x259 = 38U;
volatile int32_t t65 = -5823;
int8_t x268 = INT8_MIN;
int32_t t66 = 86794;
uint8_t x272 = 3U;
int64_t x279 = -1734311647801LL;
volatile uint8_t x281 = 18U;
int32_t t71 = -196668397;
volatile int32_t x295 = INT32_MAX;
volatile int32_t t74 = 11780428;
uint64_t x301 = 401739883LLU;
volatile int16_t x303 = 1;
static volatile int32_t t77 = -30;
int32_t x316 = -1;
static volatile uint16_t x318 = 5103U;
static volatile int32_t t79 = -5077;
uint16_t x321 = UINT16_MAX;
uint8_t x325 = 3U;
int64_t x328 = INT64_MIN;
uint8_t x329 = 6U;
int8_t x342 = INT8_MIN;
int32_t x344 = -1;
volatile int32_t t86 = 6775311;
int64_t x349 = -1LL;
uint64_t x350 = 62754442960LLU;
volatile int32_t t88 = -431;
static volatile uint32_t x358 = 116U;
volatile uint64_t x364 = 19LLU;
int64_t x365 = INT64_MIN;
int32_t x367 = INT32_MIN;
int32_t x375 = -1;
int64_t x378 = INT64_MIN;
int32_t x384 = 287863367;
static int16_t x385 = INT16_MAX;
int8_t x391 = -1;
int16_t x398 = -5715;


void f0(void) {
	static int64_t x1 = -1LL;
	int16_t x2 = -1;
	volatile uint32_t x3 = UINT32_MAX;
	uint32_t x4 = 1691612U;
	int32_t t0 = -56638;

	t0 = ((x1<=x2)<<(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 379685448LLU;
	uint16_t x8 = 8113U;
	int32_t t1 = 14754;

	t1 = ((x5<=x6)<<(x7<=x8));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MIN;
	static uint32_t x11 = 1U;
	int8_t x12 = INT8_MIN;
	int32_t t2 = -1288458;

	t2 = ((x9<=x10)<<(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 36577134638LL;
	static int64_t x14 = INT64_MAX;
	int32_t x15 = 603054439;
	int8_t x16 = INT8_MIN;
	static int32_t t3 = -783;

	t3 = ((x13<=x14)<<(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 4194;
	int8_t x18 = -1;
	static volatile uint32_t x19 = 0U;
	int32_t t4 = 1;

	t4 = ((x17<=x18)<<(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	int64_t x22 = INT64_MIN;
	volatile int32_t t5 = -3311676;

	t5 = ((x21<=x22)<<(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 18784U;
	uint8_t x26 = UINT8_MAX;
	volatile int16_t x27 = INT16_MIN;
	int32_t t6 = 89;

	t6 = ((x25<=x26)<<(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	int32_t x30 = INT32_MIN;
	volatile int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MIN;
	static int32_t t7 = 503713;

	t7 = ((x29<=x30)<<(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint16_t x34 = 13732U;
	int64_t x35 = 30083007LL;
	uint16_t x36 = 26397U;

	t8 = ((x33<=x34)<<(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	int16_t x39 = -1;

	t9 = ((x37<=x38)<<(x39<=x40));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -1;
	int8_t x42 = 0;
	volatile int32_t t10 = -13536155;

	t10 = ((x41<=x42)<<(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int32_t x46 = 41;
	uint16_t x47 = 14812U;
	int32_t t11 = 11917316;

	t11 = ((x45<=x46)<<(x47<=x48));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint16_t x50 = 12949U;
	uint8_t x51 = 0U;
	uint8_t x52 = 22U;
	static int32_t t12 = 243;

	t12 = ((x49<=x50)<<(x51<=x52));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MAX;
	int64_t x54 = 3744803621021LL;
	int8_t x55 = 5;
	int8_t x56 = -1;
	int32_t t13 = -990124;

	t13 = ((x53<=x54)<<(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile int8_t x58 = -1;
	int16_t x59 = -1;
	volatile int32_t t14 = -6;

	t14 = ((x57<=x58)<<(x59<=x60));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int16_t x62 = INT16_MIN;
	int64_t x64 = INT64_MIN;
	int32_t t15 = 174;

	t15 = ((x61<=x62)<<(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 10089U;
	volatile int64_t x67 = INT64_MIN;
	volatile int64_t x68 = INT64_MAX;
	static volatile int32_t t16 = 2;

	t16 = ((x65<=x66)<<(x67<=x68));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	uint8_t x70 = 28U;
	static uint16_t x71 = UINT16_MAX;
	static uint8_t x72 = 0U;
	volatile int32_t t17 = -656;

	t17 = ((x69<=x70)<<(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	volatile int8_t x74 = INT8_MAX;
	static volatile int32_t x76 = 224043;
	volatile int32_t t18 = -1053789999;

	t18 = ((x73<=x74)<<(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = 1;
	volatile int32_t t19 = -1964;

	t19 = ((x77<=x78)<<(x79<=x80));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -484LL;
	int32_t x83 = INT32_MIN;
	int8_t x84 = -2;
	static volatile int32_t t20 = 1429;

	t20 = ((x81<=x82)<<(x83<=x84));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x87 = 18932924303549779LLU;
	int64_t x88 = -1LL;
	int32_t t21 = -108601;

	t21 = ((x85<=x86)<<(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = 41LL;
	int32_t x90 = -1;
	static int32_t x91 = INT32_MIN;
	uint8_t x92 = 38U;
	static int32_t t22 = -519924;

	t22 = ((x89<=x90)<<(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x94 = 1U;
	volatile uint64_t x95 = UINT64_MAX;
	static uint8_t x96 = 48U;

	t23 = ((x93<=x94)<<(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MIN;
	volatile int16_t x98 = INT16_MIN;
	static int64_t x100 = INT64_MIN;
	static int32_t t24 = 0;

	t24 = ((x97<=x98)<<(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 128;
	int32_t x102 = -55875;
	int16_t x103 = INT16_MAX;
	volatile int64_t x104 = INT64_MIN;
	int32_t t25 = -10542;

	t25 = ((x101<=x102)<<(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -5;
	uint32_t x108 = UINT32_MAX;
	int32_t t26 = 31299672;

	t26 = ((x105<=x106)<<(x107<=x108));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int16_t x110 = INT16_MIN;
	uint32_t x111 = 1596799U;
	static uint8_t x112 = 90U;

	t27 = ((x109<=x110)<<(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x114 = 4LLU;
	int64_t x115 = 121LL;
	int64_t x116 = 980348501230814444LL;

	t28 = ((x113<=x114)<<(x115<=x116));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MAX;
	int64_t x118 = -1LL;
	int16_t x119 = INT16_MIN;
	int64_t x120 = INT64_MIN;

	t29 = ((x117<=x118)<<(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	int32_t x123 = -1;
	volatile int32_t t30 = -12607266;

	t30 = ((x121<=x122)<<(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	static int8_t x127 = -7;
	static int64_t x128 = INT64_MIN;

	t31 = ((x125<=x126)<<(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 2;
	int16_t x130 = 28;
	static int16_t x132 = INT16_MIN;
	volatile int32_t t32 = 13849;

	t32 = ((x129<=x130)<<(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	static int8_t x134 = INT8_MAX;
	static int8_t x135 = INT8_MAX;
	volatile int8_t x136 = INT8_MAX;

	t33 = ((x133<=x134)<<(x135<=x136));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x138 = 133U;

	t34 = ((x137<=x138)<<(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	int64_t x142 = INT64_MIN;
	static int16_t x143 = -1;
	volatile int16_t x144 = -1;
	static int32_t t35 = -510754011;

	t35 = ((x141<=x142)<<(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -4;
	int64_t x146 = 1776339022683675516LL;
	static uint64_t x147 = 7614696108LLU;
	int16_t x148 = -1;
	volatile int32_t t36 = 172958;

	t36 = ((x145<=x146)<<(x147<=x148));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MIN;
	int32_t x152 = INT32_MIN;

	t37 = ((x149<=x150)<<(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MAX;
	int32_t x154 = INT32_MAX;
	int16_t x155 = INT16_MAX;
	static int32_t x156 = 109;
	int32_t t38 = 73097;

	t38 = ((x153<=x154)<<(x155<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	uint8_t x158 = 1U;
	int64_t x159 = INT64_MIN;
	static uint64_t x160 = 9LLU;
	volatile int32_t t39 = 5369563;

	t39 = ((x157<=x158)<<(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	int8_t x162 = INT8_MIN;
	static int64_t x163 = -728034119563LL;
	int8_t x164 = 12;

	t40 = ((x161<=x162)<<(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 25845LLU;
	volatile int64_t x166 = INT64_MIN;
	int8_t x167 = -3;
	uint16_t x168 = 1714U;

	t41 = ((x165<=x166)<<(x167<=x168));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -7545;
	volatile int32_t x170 = -25;
	int8_t x171 = -13;
	int8_t x172 = -1;

	t42 = ((x169<=x170)<<(x171<=x172));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	static int64_t x176 = -230945353LL;
	int32_t t43 = 14920286;

	t43 = ((x173<=x174)<<(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	static uint8_t x178 = 1U;
	static int64_t x179 = INT64_MAX;
	int8_t x180 = -6;
	static int32_t t44 = -206;

	t44 = ((x177<=x178)<<(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	int32_t x182 = INT32_MAX;
	uint32_t x183 = UINT32_MAX;
	int16_t x184 = INT16_MAX;
	static int32_t t45 = -954;

	t45 = ((x181<=x182)<<(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t t46 = 15;

	t46 = ((x185<=x186)<<(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MIN;
	int16_t x191 = INT16_MAX;
	volatile int64_t x192 = -102141246426319482LL;
	int32_t t47 = -199240;

	t47 = ((x189<=x190)<<(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	volatile int8_t x195 = INT8_MAX;
	int32_t t48 = 7682;

	t48 = ((x193<=x194)<<(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t t49 = 23056420;

	t49 = ((x197<=x198)<<(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -3055;
	uint32_t x202 = 31220U;
	uint32_t x203 = 2113U;
	volatile int32_t x204 = 1143072;
	volatile int32_t t50 = 112299430;

	t50 = ((x201<=x202)<<(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	uint16_t x206 = UINT16_MAX;
	int8_t x207 = -30;
	int8_t x208 = INT8_MIN;
	volatile int32_t t51 = 146138;

	t51 = ((x205<=x206)<<(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = -7;
	int64_t x210 = INT64_MIN;
	int8_t x212 = INT8_MIN;
	static volatile int32_t t52 = 512018;

	t52 = ((x209<=x210)<<(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 4U;
	static volatile uint16_t x215 = 4752U;
	int8_t x216 = -1;

	t53 = ((x213<=x214)<<(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	volatile int64_t x218 = INT64_MIN;
	uint16_t x219 = UINT16_MAX;
	static int32_t x220 = -1;
	int32_t t54 = 713906;

	t54 = ((x217<=x218)<<(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x224 = INT16_MAX;
	volatile int32_t t55 = -210;

	t55 = ((x221<=x222)<<(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	uint64_t x226 = UINT64_MAX;
	static int32_t x227 = 137;
	int8_t x228 = INT8_MAX;
	int32_t t56 = -58201291;

	t56 = ((x225<=x226)<<(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 1;
	int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MAX;
	volatile int64_t x232 = 4249LL;
	int32_t t57 = -3;

	t57 = ((x229<=x230)<<(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	static uint8_t x234 = 5U;
	static int8_t x235 = INT8_MIN;
	uint8_t x236 = UINT8_MAX;
	int32_t t58 = -1042331305;

	t58 = ((x233<=x234)<<(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 38;
	uint64_t x238 = 187LLU;
	int16_t x239 = INT16_MIN;
	int32_t x240 = 4362639;

	t59 = ((x237<=x238)<<(x239<=x240));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = -1;
	int8_t x242 = INT8_MIN;
	static volatile uint64_t x243 = UINT64_MAX;
	int64_t x244 = INT64_MIN;
	volatile int32_t t60 = -6101318;

	t60 = ((x241<=x242)<<(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MIN;
	int16_t x246 = 360;
	static int64_t x247 = 15LL;
	int8_t x248 = -56;

	t61 = ((x245<=x246)<<(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 4020080LL;
	uint32_t x250 = 14740U;
	volatile int32_t t62 = -2530037;

	t62 = ((x249<=x250)<<(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x253 = INT8_MIN;
	uint16_t x254 = 0U;
	int8_t x255 = -1;
	int32_t x256 = INT32_MIN;

	t63 = ((x253<=x254)<<(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MIN;
	static int32_t x260 = INT32_MAX;
	volatile int32_t t64 = -59215;

	t64 = ((x257<=x258)<<(x259<=x260));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	static int16_t x262 = 3;
	int8_t x263 = -1;
	volatile int64_t x264 = 826349690579356345LL;

	t65 = ((x261<=x262)<<(x263<=x264));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = 6260;
	volatile int32_t x266 = -115011798;
	uint8_t x267 = UINT8_MAX;

	t66 = ((x265<=x266)<<(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x269 = -1;
	int8_t x270 = -1;
	uint16_t x271 = 0U;
	volatile int32_t t67 = 5476;

	t67 = ((x269<=x270)<<(x271<=x272));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = UINT16_MAX;
	int8_t x274 = INT8_MAX;
	int64_t x275 = 1LL;
	volatile int16_t x276 = 0;
	int32_t t68 = -670;

	t68 = ((x273<=x274)<<(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = 49603525157LL;
	int64_t x278 = -1LL;
	int8_t x280 = INT8_MIN;
	int32_t t69 = 8942;

	t69 = ((x277<=x278)<<(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x282 = -1008;
	uint64_t x283 = 189564422731295145LLU;
	volatile int64_t x284 = INT64_MIN;
	int32_t t70 = -15320034;

	t70 = ((x281<=x282)<<(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	static int16_t x286 = INT16_MIN;
	int16_t x287 = -1;
	int32_t x288 = 477;

	t71 = ((x285<=x286)<<(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MIN;
	int16_t x291 = -76;
	uint32_t x292 = 1U;
	volatile int32_t t72 = 0;

	t72 = ((x289<=x290)<<(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x293 = 1216112039277880LLU;
	int32_t x294 = INT32_MAX;
	uint16_t x296 = 27U;
	static int32_t t73 = -640;

	t73 = ((x293<=x294)<<(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = 1;
	int8_t x298 = INT8_MAX;
	volatile uint16_t x299 = UINT16_MAX;
	int32_t x300 = -1;

	t74 = ((x297<=x298)<<(x299<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = 7;
	uint8_t x304 = UINT8_MAX;
	int32_t t75 = 341761;

	t75 = ((x301<=x302)<<(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = -1;
	int16_t x306 = -1;
	int16_t x307 = -1716;
	int64_t x308 = INT64_MAX;
	volatile int32_t t76 = -59647467;

	t76 = ((x305<=x306)<<(x307<=x308));

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -2;
	int32_t x310 = INT32_MAX;
	uint8_t x311 = UINT8_MAX;
	int32_t x312 = -977681145;

	t77 = ((x309<=x310)<<(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	volatile uint16_t x314 = 322U;
	volatile int16_t x315 = 9114;
	int32_t t78 = -92918;

	t78 = ((x313<=x314)<<(x315<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = 1U;
	int16_t x319 = INT16_MAX;
	static int8_t x320 = -3;

	t79 = ((x317<=x318)<<(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = INT16_MIN;
	int64_t x323 = 8378913134745LL;
	int32_t x324 = -1;
	static volatile int32_t t80 = 44;

	t80 = ((x321<=x322)<<(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x326 = INT8_MIN;
	uint64_t x327 = UINT64_MAX;
	volatile int32_t t81 = -122;

	t81 = ((x325<=x326)<<(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x330 = 310;
	int64_t x331 = -18513664371338LL;
	int32_t x332 = -1;
	static volatile int32_t t82 = 123;

	t82 = ((x329<=x330)<<(x331<=x332));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = -529422513948681099LL;
	uint8_t x335 = 4U;
	int8_t x336 = 0;
	int32_t t83 = 47699752;

	t83 = ((x333<=x334)<<(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = UINT64_MAX;
	uint8_t x338 = 3U;
	int16_t x339 = -1;
	volatile int32_t x340 = 111740;
	volatile int32_t t84 = -1;

	t84 = ((x337<=x338)<<(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	uint16_t x343 = UINT16_MAX;
	volatile int32_t t85 = -2806456;

	t85 = ((x341<=x342)<<(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 820U;
	uint64_t x346 = 1553613702241664636LLU;
	int16_t x347 = INT16_MIN;
	static int32_t x348 = 1;

	t86 = ((x345<=x346)<<(x347<=x348));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x351 = UINT64_MAX;
	volatile int8_t x352 = -1;
	static int32_t t87 = 0;

	t87 = ((x349<=x350)<<(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = UINT32_MAX;
	uint8_t x354 = UINT8_MAX;
	int16_t x355 = 0;
	volatile uint32_t x356 = 39U;

	t88 = ((x353<=x354)<<(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = 3517639310029034LLU;
	static uint64_t x359 = 738000965039671079LLU;
	uint16_t x360 = 14U;
	static int32_t t89 = -4105379;

	t89 = ((x357<=x358)<<(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	int64_t x362 = INT64_MAX;
	volatile int8_t x363 = INT8_MIN;
	int32_t t90 = -60719;

	t90 = ((x361<=x362)<<(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = 44663LL;
	volatile int16_t x368 = -1;
	static int32_t t91 = -191954587;

	t91 = ((x365<=x366)<<(x367<=x368));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	int32_t x370 = INT32_MAX;
	int16_t x371 = -1;
	static uint64_t x372 = 3LLU;
	static int32_t t92 = -21164279;

	t92 = ((x369<=x370)<<(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 3941LLU;
	static volatile int8_t x374 = INT8_MIN;
	int64_t x376 = INT64_MIN;
	int32_t t93 = -143259;

	t93 = ((x373<=x374)<<(x375<=x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	volatile uint32_t x379 = UINT32_MAX;
	int8_t x380 = 1;
	int32_t t94 = 10244;

	t94 = ((x377<=x378)<<(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MIN;
	uint64_t x382 = 445662606527469LLU;
	int32_t x383 = -1;
	static volatile int32_t t95 = 1889;

	t95 = ((x381<=x382)<<(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = INT32_MIN;
	volatile int32_t x387 = -1;
	static volatile int32_t x388 = -1;
	int32_t t96 = 61;

	t96 = ((x385<=x386)<<(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x389 = UINT64_MAX;
	int16_t x390 = 2;
	int32_t x392 = -787;
	volatile int32_t t97 = -12;

	t97 = ((x389<=x390)<<(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = -1;
	int64_t x394 = -4674463345426423LL;
	int64_t x395 = INT64_MIN;
	int16_t x396 = INT16_MAX;
	int32_t t98 = 3701338;

	t98 = ((x393<=x394)<<(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MIN;
	int16_t x399 = INT16_MIN;
	uint64_t x400 = UINT64_MAX;
	int32_t t99 = 1067;

	t99 = ((x397<=x398)<<(x399<=x400));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
int8_t x6 = INT8_MAX;
int32_t t1 = 1443714;
volatile int32_t t2 = 1;
uint16_t x21 = 84U;
int32_t t5 = -36144;
volatile int8_t x25 = INT8_MAX;
int32_t t6 = 0;
int8_t x30 = INT8_MAX;
static int8_t x34 = 7;
uint8_t x39 = UINT8_MAX;
int64_t x41 = 591332770319047311LL;
int64_t x47 = INT64_MIN;
int32_t x55 = INT32_MAX;
volatile uint32_t x57 = UINT32_MAX;
int32_t x62 = -1;
int32_t x83 = -1;
uint32_t x86 = 128129U;
static volatile int8_t x87 = -8;
uint16_t x90 = 407U;
volatile int32_t t22 = -25344543;
int16_t x101 = INT16_MIN;
uint8_t x104 = UINT8_MAX;
int64_t x107 = 437LL;
int32_t t28 = 5579;
static int8_t x134 = -1;
int8_t x136 = 49;
int64_t x138 = -946763LL;
volatile int32_t x139 = 5832292;
static volatile int64_t x140 = INT64_MIN;
volatile int32_t x143 = INT32_MIN;
int64_t x145 = INT64_MIN;
volatile int32_t t36 = -56183230;
volatile uint8_t x155 = 18U;
int16_t x157 = 0;
int32_t x158 = INT32_MAX;
int32_t x168 = -3937432;
static volatile int32_t t44 = 0;
int16_t x185 = INT16_MIN;
int16_t x186 = INT16_MIN;
int32_t x188 = -1;
volatile int32_t t46 = 482221;
int8_t x189 = -1;
volatile int32_t t49 = 6971632;
static uint64_t x204 = 583720LLU;
volatile int8_t x206 = INT8_MAX;
static int64_t x214 = INT64_MIN;
int32_t x219 = INT32_MAX;
volatile int32_t t55 = -224187572;
uint32_t x225 = 632012934U;
static uint64_t x227 = 536600824911LLU;
int16_t x229 = INT16_MIN;
static int32_t x231 = INT32_MIN;
int32_t t57 = 3;
uint16_t x234 = 26085U;
uint32_t x236 = UINT32_MAX;
int32_t t58 = -375;
uint8_t x240 = 2U;
static int64_t x244 = 202369776828LL;
static volatile uint8_t x248 = UINT8_MAX;
uint32_t x249 = 22565827U;
static uint8_t x256 = 119U;
uint8_t x257 = UINT8_MAX;
int32_t x260 = -1;
int32_t x262 = INT32_MIN;
static volatile int32_t t66 = -2;
int32_t x270 = INT32_MIN;
volatile int16_t x272 = INT16_MAX;
static volatile int32_t x276 = INT32_MAX;
int16_t x279 = -6;
uint64_t x283 = UINT64_MAX;
static int64_t x284 = INT64_MIN;
int32_t x297 = -4087933;
int32_t t74 = 4;
int16_t x301 = INT16_MIN;
uint8_t x307 = UINT8_MAX;
uint32_t x311 = 1112464U;
int64_t x323 = INT64_MIN;
static int32_t t80 = 203;
int16_t x326 = INT16_MAX;
uint64_t x332 = 14766571LLU;
uint16_t x335 = 3901U;
int64_t x346 = -18815227402LL;
static int8_t x357 = 0;
int32_t t89 = -179;
volatile uint32_t x365 = 210U;
int32_t x368 = 22;
uint8_t x370 = 1U;
volatile int16_t x374 = INT16_MIN;
static volatile int16_t x377 = INT16_MIN;
int8_t x380 = -2;
volatile int32_t x382 = INT32_MIN;
uint64_t x383 = 120459219062LLU;
uint64_t x384 = 115452561319LLU;
int32_t x388 = INT32_MAX;
int32_t t96 = 0;
int32_t t97 = -3;
uint8_t x397 = 1U;


void f0(void) {
	int16_t x1 = -1;
	int32_t x3 = -22;
	volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -279776;

	t0 = ((x1<=x2)-(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 738U;
	int64_t x7 = INT64_MAX;
	volatile uint8_t x8 = 2U;

	t1 = ((x5<=x6)-(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x9 = 4U;
	int64_t x10 = INT64_MAX;
	uint16_t x11 = 709U;
	int8_t x12 = -1;

	t2 = ((x9<=x10)-(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	int16_t x14 = 71;
	static int16_t x15 = INT16_MIN;
	uint16_t x16 = 78U;
	volatile int32_t t3 = -851033;

	t3 = ((x13<=x14)-(x15<x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -16300;
	volatile int8_t x18 = INT8_MAX;
	uint32_t x19 = UINT32_MAX;
	int8_t x20 = -7;
	static volatile int32_t t4 = 1;

	t4 = ((x17<=x18)-(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -1LL;
	uint64_t x23 = 170174831233339756LLU;
	int32_t x24 = 3;

	t5 = ((x21<=x22)-(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	uint16_t x27 = 0U;
	int64_t x28 = -162850981394308649LL;

	t6 = ((x25<=x26)-(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	static volatile int16_t x31 = INT16_MIN;
	uint8_t x32 = 6U;
	volatile int32_t t7 = -511389593;

	t7 = ((x29<=x30)-(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint8_t x35 = UINT8_MAX;
	uint16_t x36 = UINT16_MAX;
	static volatile int32_t t8 = 5162107;

	t8 = ((x33<=x34)-(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int64_t x38 = -1LL;
	volatile int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -55;

	t9 = ((x37<=x38)-(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 1453U;
	volatile int64_t x43 = INT64_MIN;
	static volatile uint8_t x44 = 0U;
	static volatile int32_t t10 = 14308394;

	t10 = ((x41<=x42)-(x43<x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int8_t x46 = -1;
	int64_t x48 = 39811126705LL;
	int32_t t11 = -12761977;

	t11 = ((x45<=x46)-(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	volatile uint16_t x50 = UINT16_MAX;
	int8_t x51 = 0;
	uint16_t x52 = 563U;
	static volatile int32_t t12 = 1;

	t12 = ((x49<=x50)-(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = 278U;
	static volatile int32_t x54 = INT32_MIN;
	int8_t x56 = 1;
	int32_t t13 = -141425;

	t13 = ((x53<=x54)-(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x58 = INT32_MIN;
	volatile int8_t x59 = 12;
	volatile int8_t x60 = -1;
	volatile int32_t t14 = 36672936;

	t14 = ((x57<=x58)-(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 19U;
	static int32_t x63 = -5579678;
	int64_t x64 = -1LL;
	int32_t t15 = 1;

	t15 = ((x61<=x62)-(x63<x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	volatile int32_t x66 = INT32_MIN;
	int32_t x67 = 2683889;
	volatile int32_t x68 = INT32_MAX;
	int32_t t16 = 109;

	t16 = ((x65<=x66)-(x67<x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	static int8_t x70 = 1;
	static int8_t x71 = INT8_MIN;
	int16_t x72 = -1;
	int32_t t17 = 39727;

	t17 = ((x69<=x70)-(x71<x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	volatile uint64_t x74 = 99104846LLU;
	int8_t x75 = INT8_MIN;
	volatile int64_t x76 = INT64_MIN;
	static int32_t t18 = 10501;

	t18 = ((x73<=x74)-(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint32_t x78 = 22U;
	int16_t x79 = INT16_MAX;
	uint32_t x80 = UINT32_MAX;
	static int32_t t19 = -14;

	t19 = ((x77<=x78)-(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = UINT8_MAX;
	int8_t x82 = 0;
	int32_t x84 = 37900294;
	static volatile int32_t t20 = 0;

	t20 = ((x81<=x82)-(x83<x84));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -22436654;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = -52;

	t21 = ((x85<=x86)-(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x89 = INT32_MIN;
	uint8_t x91 = 1U;
	int16_t x92 = -1780;

	t22 = ((x89<=x90)-(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = 88LLU;
	static uint16_t x94 = UINT16_MAX;
	volatile int64_t x95 = INT64_MIN;
	int8_t x96 = -1;
	volatile int32_t t23 = 2899071;

	t23 = ((x93<=x94)-(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 13U;
	volatile uint64_t x98 = UINT64_MAX;
	uint64_t x99 = UINT64_MAX;
	uint16_t x100 = 1147U;
	static volatile int32_t t24 = -107028774;

	t24 = ((x97<=x98)-(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MIN;
	uint8_t x103 = 57U;
	int32_t t25 = -14365269;

	t25 = ((x101<=x102)-(x103<x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = UINT8_MAX;
	volatile uint32_t x106 = UINT32_MAX;
	int32_t x108 = INT32_MIN;
	volatile int32_t t26 = 3757161;

	t26 = ((x105<=x106)-(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 32798732499031LL;
	static int32_t x110 = -863975;
	int16_t x111 = 6263;
	static int8_t x112 = INT8_MIN;
	static int32_t t27 = 5875;

	t27 = ((x109<=x110)-(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint64_t x114 = UINT64_MAX;
	int64_t x115 = -1LL;
	static uint16_t x116 = 35U;

	t28 = ((x113<=x114)-(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = -1;
	int64_t x119 = -1LL;
	volatile uint32_t x120 = 8385U;
	volatile int32_t t29 = -509778856;

	t29 = ((x117<=x118)-(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = 15;
	volatile uint32_t x122 = 2023U;
	int64_t x123 = INT64_MIN;
	int16_t x124 = -3;
	volatile int32_t t30 = -4019244;

	t30 = ((x121<=x122)-(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	int64_t x126 = INT64_MAX;
	static uint64_t x127 = UINT64_MAX;
	static uint32_t x128 = UINT32_MAX;
	int32_t t31 = -15018391;

	t31 = ((x125<=x126)-(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 112LL;
	int64_t x130 = 4550665LL;
	uint64_t x131 = 436073997070594514LLU;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = -143;

	t32 = ((x129<=x130)-(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	int16_t x135 = -1;
	static volatile int32_t t33 = 9380;

	t33 = ((x133<=x134)-(x135<x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	volatile int32_t t34 = 9445;

	t34 = ((x137<=x138)-(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = -1LL;
	uint16_t x144 = 0U;
	int32_t t35 = 8;

	t35 = ((x141<=x142)-(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = 4006;
	static int32_t x147 = -57427;
	int32_t x148 = INT32_MAX;

	t36 = ((x145<=x146)-(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static volatile uint32_t x150 = 2U;
	uint32_t x151 = UINT32_MAX;
	int8_t x152 = INT8_MIN;
	static volatile int32_t t37 = -3106246;

	t37 = ((x149<=x150)-(x151<x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = -58LL;
	int8_t x154 = -1;
	int32_t x156 = INT32_MIN;
	static volatile int32_t t38 = -36;

	t38 = ((x153<=x154)-(x155<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x159 = -1;
	volatile uint32_t x160 = UINT32_MAX;
	int32_t t39 = -27160;

	t39 = ((x157<=x158)-(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x161 = UINT32_MAX;
	int8_t x162 = INT8_MIN;
	volatile int32_t x163 = 23880827;
	static uint32_t x164 = UINT32_MAX;
	static volatile int32_t t40 = 1081684;

	t40 = ((x161<=x162)-(x163<x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	volatile int32_t x166 = -866123586;
	int64_t x167 = INT64_MAX;
	static volatile int32_t t41 = -1825119;

	t41 = ((x165<=x166)-(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -725001;
	int64_t x170 = -1030084622152613LL;
	static uint8_t x171 = UINT8_MAX;
	static uint16_t x172 = 2U;
	static volatile int32_t t42 = 1;

	t42 = ((x169<=x170)-(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	volatile int64_t x174 = INT64_MAX;
	int8_t x175 = -1;
	volatile int64_t x176 = INT64_MAX;
	static volatile int32_t t43 = 190710;

	t43 = ((x173<=x174)-(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -9;
	int8_t x178 = -1;
	uint16_t x179 = 47U;
	int8_t x180 = INT8_MAX;

	t44 = ((x177<=x178)-(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x182 = 1807102744503516LL;
	static int64_t x183 = 239649244334180LL;
	int64_t x184 = INT64_MAX;
	int32_t t45 = -34;

	t45 = ((x181<=x182)-(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x187 = 524126692LLU;

	t46 = ((x185<=x186)-(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x190 = -1LL;
	int64_t x191 = -1LL;
	volatile int16_t x192 = -1;
	int32_t t47 = -91;

	t47 = ((x189<=x190)-(x191<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 1632362LLU;
	uint8_t x194 = UINT8_MAX;
	uint64_t x195 = 3864LLU;
	int64_t x196 = 35LL;
	volatile int32_t t48 = -1912;

	t48 = ((x193<=x194)-(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	volatile uint8_t x198 = 3U;
	int16_t x199 = INT16_MAX;
	static uint16_t x200 = 0U;

	t49 = ((x197<=x198)-(x199<x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	uint64_t x202 = 2414LLU;
	static int16_t x203 = INT16_MAX;
	static volatile int32_t t50 = -1835;

	t50 = ((x201<=x202)-(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 2161490009LLU;
	int32_t x207 = -1;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = -46022082;

	t51 = ((x205<=x206)-(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	static int16_t x210 = 182;
	static int32_t x211 = INT32_MAX;
	volatile int64_t x212 = INT64_MAX;
	int32_t t52 = 619651;

	t52 = ((x209<=x210)-(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = -27;
	static uint32_t x215 = UINT32_MAX;
	int64_t x216 = INT64_MIN;
	int32_t t53 = -9376;

	t53 = ((x213<=x214)-(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	static int64_t x218 = 35LL;
	volatile int8_t x220 = 63;
	int32_t t54 = -2420;

	t54 = ((x217<=x218)-(x219<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = -1;
	int64_t x222 = INT64_MAX;
	static int8_t x223 = INT8_MAX;
	uint64_t x224 = 3LLU;

	t55 = ((x221<=x222)-(x223<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = -13;
	static int32_t x228 = INT32_MIN;
	int32_t t56 = -1;

	t56 = ((x225<=x226)-(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = INT8_MIN;
	uint8_t x232 = UINT8_MAX;

	t57 = ((x229<=x230)-(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 629537230LLU;
	int64_t x235 = INT64_MIN;

	t58 = ((x233<=x234)-(x235<x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 31U;
	uint64_t x238 = 267927578LLU;
	uint64_t x239 = 2LLU;
	volatile int32_t t59 = -151;

	t59 = ((x237<=x238)-(x239<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 16320085LLU;
	int32_t x242 = INT32_MIN;
	static int16_t x243 = INT16_MIN;
	int32_t t60 = -5448276;

	t60 = ((x241<=x242)-(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MIN;
	int32_t x247 = 10805;
	volatile int32_t t61 = 1;

	t61 = ((x245<=x246)-(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x250 = 209U;
	uint64_t x251 = 266887967LLU;
	int16_t x252 = -1;
	static volatile int32_t t62 = 174719;

	t62 = ((x249<=x250)-(x251<x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MAX;
	uint8_t x254 = 20U;
	int64_t x255 = 4280LL;
	int32_t t63 = 12640834;

	t63 = ((x253<=x254)-(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = -58;
	uint8_t x259 = 91U;
	volatile int32_t t64 = 1843;

	t64 = ((x257<=x258)-(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MIN;
	volatile int64_t x263 = -1LL;
	uint8_t x264 = 11U;
	int32_t t65 = -94;

	t65 = ((x261<=x262)-(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MAX;
	int8_t x266 = INT8_MAX;
	volatile int16_t x267 = INT16_MIN;
	static int8_t x268 = INT8_MIN;

	t66 = ((x265<=x266)-(x267<x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	int8_t x271 = -1;
	static int32_t t67 = 425929512;

	t67 = ((x269<=x270)-(x271<x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	int32_t x274 = 43307;
	int8_t x275 = -8;
	int32_t t68 = -944;

	t68 = ((x273<=x274)-(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 0;
	int32_t x278 = -1;
	int64_t x280 = INT64_MIN;
	int32_t t69 = -758;

	t69 = ((x277<=x278)-(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 13;
	int8_t x282 = -10;
	volatile int32_t t70 = 37149;

	t70 = ((x281<=x282)-(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = 1;
	static volatile uint16_t x286 = 89U;
	uint16_t x287 = 109U;
	int64_t x288 = INT64_MIN;
	volatile int32_t t71 = 37924716;

	t71 = ((x285<=x286)-(x287<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 199U;
	volatile int64_t x290 = INT64_MIN;
	static volatile int16_t x291 = INT16_MIN;
	volatile int64_t x292 = INT64_MAX;
	static int32_t t72 = -779317694;

	t72 = ((x289<=x290)-(x291<x292));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	volatile int8_t x294 = INT8_MIN;
	static uint64_t x295 = 992LLU;
	static int64_t x296 = -1LL;
	static int32_t t73 = 601941;

	t73 = ((x293<=x294)-(x295<x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = -1;
	int64_t x299 = INT64_MAX;
	volatile uint16_t x300 = UINT16_MAX;

	t74 = ((x297<=x298)-(x299<x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x302 = -32124925LL;
	static uint64_t x303 = UINT64_MAX;
	volatile int8_t x304 = INT8_MIN;
	int32_t t75 = 1;

	t75 = ((x301<=x302)-(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x305 = -37170275514277LL;
	int8_t x306 = -1;
	int8_t x308 = 0;
	int32_t t76 = -60487376;

	t76 = ((x305<=x306)-(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 5444;
	int8_t x310 = -1;
	volatile int8_t x312 = INT8_MAX;
	static volatile int32_t t77 = -2;

	t77 = ((x309<=x310)-(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = -29;
	static volatile int64_t x314 = 1763976543LL;
	uint64_t x315 = 1408011789876LLU;
	int16_t x316 = 0;
	static int32_t t78 = -1;

	t78 = ((x313<=x314)-(x315<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MIN;
	int8_t x318 = -2;
	int32_t x319 = 6;
	int32_t x320 = INT32_MAX;
	int32_t t79 = 1117816;

	t79 = ((x317<=x318)-(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	uint32_t x322 = UINT32_MAX;
	int64_t x324 = INT64_MIN;

	t80 = ((x321<=x322)-(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	static uint64_t x327 = 19LLU;
	int32_t x328 = INT32_MIN;
	int32_t t81 = -47194708;

	t81 = ((x325<=x326)-(x327<x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	int64_t x330 = INT64_MIN;
	uint16_t x331 = 1U;
	volatile int32_t t82 = 40;

	t82 = ((x329<=x330)-(x331<x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = -17;
	int16_t x334 = INT16_MIN;
	int64_t x336 = INT64_MAX;
	volatile int32_t t83 = 211;

	t83 = ((x333<=x334)-(x335<x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = 78U;
	uint64_t x338 = UINT64_MAX;
	int64_t x339 = -1LL;
	volatile uint64_t x340 = 61027489LLU;
	int32_t t84 = 53;

	t84 = ((x337<=x338)-(x339<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x341 = 478103737LLU;
	uint64_t x342 = 796780231LLU;
	uint8_t x343 = 16U;
	uint32_t x344 = 3558U;
	static volatile int32_t t85 = 177894;

	t85 = ((x341<=x342)-(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = -1;
	uint64_t x347 = 2773126514864LLU;
	uint64_t x348 = 405869728939839112LLU;
	int32_t t86 = 24853310;

	t86 = ((x345<=x346)-(x347<x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MIN;
	int8_t x351 = 1;
	int64_t x352 = INT64_MAX;
	static volatile int32_t t87 = 8299;

	t87 = ((x349<=x350)-(x351<x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 1376554577551654LLU;
	int8_t x354 = 0;
	int8_t x355 = INT8_MIN;
	uint64_t x356 = 13LLU;
	int32_t t88 = -5;

	t88 = ((x353<=x354)-(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = INT16_MIN;
	uint16_t x359 = 66U;
	int16_t x360 = 41;

	t89 = ((x357<=x358)-(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	volatile int32_t x362 = -1;
	uint64_t x363 = 1LLU;
	static volatile int32_t x364 = 117668;
	int32_t t90 = -24459;

	t90 = ((x361<=x362)-(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = INT64_MIN;
	int64_t x367 = 0LL;
	volatile int32_t t91 = 3552942;

	t91 = ((x365<=x366)-(x367<x368));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = -2986;
	int8_t x371 = INT8_MIN;
	uint64_t x372 = 1LLU;
	volatile int32_t t92 = -13;

	t92 = ((x369<=x370)-(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = -1;
	volatile int32_t x375 = INT32_MIN;
	static uint16_t x376 = UINT16_MAX;
	int32_t t93 = 22858;

	t93 = ((x373<=x374)-(x375<x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x378 = INT16_MIN;
	volatile int16_t x379 = INT16_MIN;
	static int32_t t94 = -1581699;

	t94 = ((x377<=x378)-(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = UINT16_MAX;
	int32_t t95 = -9674;

	t95 = ((x381<=x382)-(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = -102;
	uint64_t x386 = 8488927937750741341LLU;
	uint16_t x387 = 206U;

	t96 = ((x385<=x386)-(x387<x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x389 = 11LLU;
	int32_t x390 = INT32_MAX;
	int8_t x391 = 0;
	int16_t x392 = -982;

	t97 = ((x389<=x390)-(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 44U;
	int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MIN;
	int16_t x396 = 1849;
	volatile int32_t t98 = 3666230;

	t98 = ((x393<=x394)-(x395<x396));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x398 = INT64_MAX;
	int32_t x399 = -1;
	int8_t x400 = -11;
	static int32_t t99 = 13371183;

	t99 = ((x397<=x398)-(x399<x400));

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


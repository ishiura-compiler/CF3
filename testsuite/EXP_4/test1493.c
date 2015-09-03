#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = INT32_MIN;
uint16_t x4 = 2545U;
int32_t t0 = -2021492;
int8_t x9 = INT8_MIN;
int64_t x11 = -620240203304579800LL;
volatile int16_t x14 = INT16_MAX;
int32_t x18 = -436034;
static volatile int16_t x19 = 6;
volatile int16_t x30 = -1;
int32_t x33 = -1;
volatile uint16_t x37 = 1560U;
uint32_t x38 = UINT32_MAX;
uint32_t x41 = 6927U;
int64_t x43 = 2426895624983LL;
int8_t x59 = 48;
static int16_t x61 = 24;
volatile int32_t x63 = 14267;
volatile uint16_t x67 = 109U;
uint8_t x71 = 16U;
static volatile int32_t t17 = -488;
static int16_t x74 = -1;
uint32_t x75 = 226329U;
int32_t t18 = -12;
static int64_t x79 = 3045146305162553LL;
volatile uint64_t x81 = UINT64_MAX;
volatile uint64_t t20 = 3LLU;
volatile int32_t t21 = 421891;
int8_t x92 = INT8_MIN;
int32_t x93 = INT32_MAX;
int16_t x95 = INT16_MIN;
int32_t t24 = 1;
volatile int16_t x109 = INT16_MIN;
int32_t t27 = -172085517;
static uint8_t x113 = UINT8_MAX;
int32_t x114 = INT32_MIN;
int64_t x117 = -1LL;
uint32_t x128 = 26102U;
uint64_t x132 = 104152LLU;
static volatile int64_t x138 = INT64_MAX;
volatile int64_t t34 = 67281358904166296LL;
int8_t x141 = INT8_MAX;
int64_t x143 = 898632LL;
uint16_t x148 = UINT16_MAX;
volatile int32_t x151 = INT32_MAX;
uint64_t x160 = 189142560409979303LLU;
int8_t x164 = -1;
int16_t x170 = -12901;
uint16_t x176 = UINT16_MAX;
static volatile int32_t t43 = 166434070;
int16_t x178 = INT16_MAX;
static int64_t x179 = INT64_MIN;
int8_t x180 = INT8_MIN;
volatile int32_t t47 = 29823;
static int8_t x196 = -1;
volatile int64_t t48 = 2254572040800927770LL;
int64_t t53 = 145555430LL;
int32_t x219 = -1;
int8_t x224 = -1;
uint32_t x228 = 58U;
volatile int32_t t57 = 48531760;
static int16_t x240 = -11;
static int64_t x244 = INT64_MIN;
uint16_t x248 = 4771U;
uint32_t x250 = 31407272U;
int64_t x257 = 102351794869512849LL;
uint64_t x260 = UINT64_MAX;
int32_t x263 = INT32_MAX;
int64_t x270 = -1LL;
int32_t x273 = INT32_MIN;
int64_t x279 = 13876880841LL;
static volatile int32_t t69 = 368;
int16_t x281 = INT16_MIN;
uint64_t x284 = 1028715970898LLU;
static uint8_t x285 = 6U;
int32_t x287 = INT32_MAX;
volatile uint8_t x290 = 0U;
int8_t x291 = INT8_MIN;
int32_t t72 = -26;
int32_t x294 = INT32_MIN;
static int64_t x296 = -413335479651LL;
static int8_t x302 = 1;
static uint8_t x309 = 35U;
static int16_t x315 = INT16_MIN;
int32_t x318 = INT32_MAX;
static volatile uint16_t x322 = UINT16_MAX;
int64_t x327 = INT64_MAX;
int8_t x329 = INT8_MIN;
int32_t x336 = INT32_MAX;
uint32_t x337 = UINT32_MAX;
static int64_t x338 = -1LL;
volatile int32_t x344 = INT32_MIN;
volatile int32_t x345 = INT32_MIN;
int8_t x350 = INT8_MIN;
int64_t t87 = 320896675237347640LL;
int32_t x353 = INT32_MIN;
int64_t x358 = INT64_MIN;
uint8_t x364 = UINT8_MAX;
volatile uint64_t t90 = 64374LLU;
static int16_t x367 = INT16_MIN;
static int16_t x372 = -1549;
int32_t t93 = 15629718;
uint8_t x378 = 118U;
static int16_t x382 = -1;
int64_t x384 = -1LL;
uint8_t x390 = 3U;
uint16_t x392 = UINT16_MAX;
volatile int32_t t97 = 93;
static volatile uint64_t t98 = 1000967319LLU;


void f0(void) {
	int32_t x1 = 167509651;
	static uint8_t x2 = 114U;

	t0 = (x1&(x2&(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t x6 = INT64_MAX;
	int16_t x7 = -1;
	volatile uint16_t x8 = 19058U;
	static volatile int64_t t1 = 20195559550348LL;

	t1 = (x5&(x6&(x7<x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -48;

	t2 = (x9&(x10&(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	static uint16_t x15 = UINT16_MAX;
	static int8_t x16 = INT8_MIN;
	int32_t t3 = -5;

	t3 = (x13&(x14&(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 40U;
	static volatile int32_t x20 = INT32_MIN;
	int32_t t4 = 0;

	t4 = (x17&(x18&(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -8;
	int64_t x22 = INT64_MIN;
	static uint8_t x23 = UINT8_MAX;
	uint64_t x24 = 74LLU;
	static volatile int64_t t5 = -317126969697724514LL;

	t5 = (x21&(x22&(x23<x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	int32_t x26 = -1;
	uint32_t x27 = 1493310U;
	volatile int32_t x28 = INT32_MIN;
	static volatile int32_t t6 = 2402;

	t6 = (x25&(x26&(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int64_t x31 = INT64_MIN;
	int64_t x32 = -1LL;
	int32_t t7 = 789;

	t7 = (x29&(x30&(x31<x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x34 = 8;
	int32_t x35 = -1;
	int16_t x36 = 520;
	int32_t t8 = -475;

	t8 = (x33&(x34&(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x39 = 19U;
	int16_t x40 = -3;
	volatile uint32_t t9 = 168U;

	t9 = (x37&(x38&(x39<x40)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	uint32_t x44 = UINT32_MAX;
	uint32_t t10 = 4283370U;

	t10 = (x41&(x42&(x43<x44)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static int64_t x46 = INT64_MIN;
	static uint16_t x47 = 6856U;
	volatile uint64_t x48 = 22547LLU;
	volatile int64_t t11 = -603758360334560550LL;

	t11 = (x45&(x46&(x47<x48)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = UINT32_MAX;
	uint32_t x50 = 316233U;
	volatile uint64_t x51 = UINT64_MAX;
	int32_t x52 = INT32_MAX;
	uint32_t t12 = 848033U;

	t12 = (x49&(x50&(x51<x52)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 61U;
	volatile uint16_t x54 = UINT16_MAX;
	static int8_t x55 = INT8_MIN;
	uint64_t x56 = 10647888912LLU;
	int32_t t13 = 1023919833;

	t13 = (x53&(x54&(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = -49412838706765LL;
	int32_t x60 = -17013;
	int64_t t14 = 29301785691835363LL;

	t14 = (x57&(x58&(x59<x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x62 = 123078266LLU;
	int8_t x64 = INT8_MAX;
	static uint64_t t15 = 305130110LLU;

	t15 = (x61&(x62&(x63<x64)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 5999U;
	int64_t x66 = INT64_MAX;
	int32_t x68 = INT32_MIN;
	volatile int64_t t16 = 3276724LL;

	t16 = (x65&(x66&(x67<x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 483;
	int16_t x70 = 77;
	int64_t x72 = -1LL;

	t17 = (x69&(x70&(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static int32_t x76 = INT32_MIN;

	t18 = (x73&(x74&(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 14U;
	int8_t x78 = INT8_MAX;
	static uint32_t x80 = 774987950U;
	int32_t t19 = -1408;

	t19 = (x77&(x78&(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x82 = -1LL;
	int32_t x83 = INT32_MIN;
	volatile int32_t x84 = 31;

	t20 = (x81&(x82&(x83<x84)));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -480841;
	static int16_t x86 = 17;
	uint64_t x87 = 1958293LLU;
	uint64_t x88 = 161801071LLU;

	t21 = (x85&(x86&(x87<x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x89 = UINT64_MAX;
	volatile int64_t x90 = INT64_MIN;
	int64_t x91 = 1911499399822150LL;
	uint64_t t22 = 4671258LLU;

	t22 = (x89&(x90&(x91<x92)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -9091;
	volatile int8_t x96 = -12;
	int32_t t23 = -826537;

	t23 = (x93&(x94&(x95<x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	int16_t x98 = 7016;
	uint64_t x99 = 9LLU;
	volatile uint16_t x100 = UINT16_MAX;

	t24 = (x97&(x98&(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 21;
	uint64_t x102 = 106058370982164814LLU;
	static int64_t x103 = INT64_MAX;
	int64_t x104 = INT64_MIN;
	uint64_t t25 = 2303972651372135LLU;

	t25 = (x101&(x102&(x103<x104)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	uint8_t x106 = UINT8_MAX;
	uint64_t x107 = 149729441LLU;
	int16_t x108 = INT16_MIN;
	int32_t t26 = 10288;

	t26 = (x105&(x106&(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = -1;
	volatile int64_t x111 = INT64_MAX;
	uint64_t x112 = 585965LLU;

	t27 = (x109&(x110&(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x115 = INT32_MIN;
	static volatile uint64_t x116 = 112540053632288LLU;
	volatile int32_t t28 = -501;

	t28 = (x113&(x114&(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -1;
	uint32_t x119 = 1687849611U;
	uint16_t x120 = 901U;
	int64_t t29 = 2145481247350LL;

	t29 = (x117&(x118&(x119<x120)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	static int32_t x122 = -1;
	int8_t x123 = 0;
	uint64_t x124 = UINT64_MAX;
	int32_t t30 = 32537999;

	t30 = (x121&(x122&(x123<x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	static int32_t x126 = 10;
	int8_t x127 = -11;
	int32_t t31 = 223256412;

	t31 = (x125&(x126&(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MAX;
	static int32_t x130 = INT32_MIN;
	int8_t x131 = INT8_MAX;
	int32_t t32 = -149609150;

	t32 = (x129&(x130&(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	volatile uint16_t x134 = 2714U;
	uint64_t x135 = 892293343834636324LLU;
	uint32_t x136 = 438401641U;
	volatile int32_t t33 = 5;

	t33 = (x133&(x134&(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = UINT32_MAX;
	int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MIN;

	t34 = (x137&(x138&(x139<x140)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x142 = 38U;
	uint32_t x144 = UINT32_MAX;
	static int32_t t35 = 21109390;

	t35 = (x141&(x142&(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	int8_t x146 = -7;
	volatile int8_t x147 = 44;
	static volatile int32_t t36 = -100120;

	t36 = (x145&(x146&(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	uint32_t x150 = UINT32_MAX;
	int32_t x152 = -138153;
	static uint32_t t37 = 90217761U;

	t37 = (x149&(x150&(x151<x152)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MAX;
	volatile int64_t x155 = INT64_MIN;
	static int16_t x156 = INT16_MAX;
	static volatile int64_t t38 = 45LL;

	t38 = (x153&(x154&(x155<x156)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 15166;
	volatile uint32_t x158 = 70724U;
	int32_t x159 = -1;
	uint32_t t39 = 89328U;

	t39 = (x157&(x158&(x159<x160)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 0;
	int16_t x162 = INT16_MAX;
	volatile uint32_t x163 = 32201U;
	static volatile int32_t t40 = 1;

	t40 = (x161&(x162&(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MAX;
	uint64_t x166 = UINT64_MAX;
	uint32_t x167 = 398620U;
	uint32_t x168 = UINT32_MAX;
	uint64_t t41 = 101253340967LLU;

	t41 = (x165&(x166&(x167<x168)));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	static uint64_t x171 = 816LLU;
	static int32_t x172 = INT32_MIN;
	volatile int64_t t42 = 4953811LL;

	t42 = (x169&(x170&(x171<x172)));

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 2U;
	int32_t x174 = -1;
	volatile uint16_t x175 = UINT16_MAX;

	t43 = (x173&(x174&(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = -196;
	int32_t t44 = -4352354;

	t44 = (x177&(x178&(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = 24781U;
	static int64_t x182 = 204937326778LL;
	int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MIN;
	int64_t t45 = -4713LL;

	t45 = (x181&(x182&(x183<x184)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -48;
	uint64_t x186 = 16606753116702LLU;
	uint8_t x187 = 37U;
	static int32_t x188 = -1;
	volatile uint64_t t46 = 14004558617LLU;

	t46 = (x185&(x186&(x187<x188)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MAX;
	int16_t x191 = -1;
	uint16_t x192 = 1U;

	t47 = (x189&(x190&(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	int64_t x194 = INT64_MIN;
	uint32_t x195 = 26U;

	t48 = (x193&(x194&(x195<x196)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	int32_t x198 = INT32_MIN;
	uint64_t x199 = 3286278460326881LLU;
	int8_t x200 = INT8_MIN;
	int32_t t49 = -168;

	t49 = (x197&(x198&(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 0U;
	static volatile int8_t x202 = INT8_MAX;
	static uint8_t x203 = 1U;
	volatile int32_t x204 = -278747683;
	volatile uint32_t t50 = 13U;

	t50 = (x201&(x202&(x203<x204)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	static volatile uint16_t x206 = 543U;
	int8_t x207 = INT8_MIN;
	volatile uint64_t x208 = UINT64_MAX;
	volatile int32_t t51 = -5;

	t51 = (x205&(x206&(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1634;
	static uint8_t x210 = 109U;
	int8_t x211 = INT8_MAX;
	int16_t x212 = -899;
	volatile int32_t t52 = 63;

	t52 = (x209&(x210&(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	int32_t x214 = INT32_MIN;
	volatile int64_t x215 = -41412678137LL;
	static int16_t x216 = -1;

	t53 = (x213&(x214&(x215<x216)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -40;
	static uint8_t x218 = 55U;
	volatile uint32_t x220 = UINT32_MAX;
	int32_t t54 = 13011;

	t54 = (x217&(x218&(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x221 = 16474319U;
	int8_t x222 = -1;
	int8_t x223 = 1;
	volatile uint32_t t55 = 7U;

	t55 = (x221&(x222&(x223<x224)));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -98;
	static int16_t x226 = -1;
	int8_t x227 = 0;
	int32_t t56 = 7965;

	t56 = (x225&(x226&(x227<x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	int8_t x230 = -1;
	int8_t x231 = 63;
	static int64_t x232 = 198625LL;

	t57 = (x229&(x230&(x231<x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = -1LL;
	static uint64_t x234 = 81677935785838919LLU;
	static int8_t x235 = INT8_MIN;
	static int8_t x236 = -1;
	volatile uint64_t t58 = 3516621LLU;

	t58 = (x233&(x234&(x235<x236)));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	uint16_t x238 = 6U;
	int16_t x239 = -10;
	volatile int32_t t59 = -1;

	t59 = (x237&(x238&(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	volatile uint32_t x242 = 1U;
	int16_t x243 = -56;
	static volatile int64_t t60 = 120460710581LL;

	t60 = (x241&(x242&(x243<x244)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	uint64_t x246 = 678710763070515LLU;
	int64_t x247 = INT64_MAX;
	uint64_t t61 = 1653962967274955LLU;

	t61 = (x245&(x246&(x247<x248)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 685409322935225LLU;
	int8_t x251 = INT8_MAX;
	int8_t x252 = INT8_MIN;
	uint64_t t62 = 1491778721007LLU;

	t62 = (x249&(x250&(x251<x252)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = 2163589161767421LLU;
	int16_t x254 = INT16_MIN;
	static int8_t x255 = INT8_MAX;
	static uint16_t x256 = UINT16_MAX;
	uint64_t t63 = 12LLU;

	t63 = (x253&(x254&(x255<x256)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = INT8_MAX;
	int64_t x259 = INT64_MAX;
	volatile int64_t t64 = -1620761025455789940LL;

	t64 = (x257&(x258&(x259<x260)));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 0LL;
	static uint32_t x262 = UINT32_MAX;
	uint32_t x264 = 75U;
	int64_t t65 = -146844233335LL;

	t65 = (x261&(x262&(x263<x264)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = -2657;
	int8_t x266 = -1;
	static int32_t x267 = INT32_MAX;
	int8_t x268 = 1;
	int32_t t66 = -2594470;

	t66 = (x265&(x266&(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 293433270800LL;
	uint8_t x271 = 33U;
	int16_t x272 = -1;
	int64_t t67 = 6305927LL;

	t67 = (x269&(x270&(x271<x272)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x274 = 128794208671454LLU;
	int16_t x275 = 6;
	static int8_t x276 = -29;
	uint64_t t68 = 19993659LLU;

	t68 = (x273&(x274&(x275<x276)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = 31;
	static int8_t x278 = INT8_MIN;
	int16_t x280 = INT16_MIN;

	t69 = (x277&(x278&(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 68U;
	int8_t x283 = INT8_MIN;
	volatile int32_t t70 = 33;

	t70 = (x281&(x282&(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x286 = 3;
	static int16_t x288 = INT16_MIN;
	static int32_t t71 = -718144;

	t71 = (x285&(x286&(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x289 = INT32_MIN;
	uint16_t x292 = UINT16_MAX;

	t72 = (x289&(x290&(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	uint16_t x295 = UINT16_MAX;
	volatile int32_t t73 = -4524;

	t73 = (x293&(x294&(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	uint32_t x298 = 177965651U;
	static int32_t x299 = -59;
	int8_t x300 = INT8_MIN;
	volatile int64_t t74 = -264913706035LL;

	t74 = (x297&(x298&(x299<x300)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = -5;
	volatile uint64_t x303 = 2LLU;
	uint32_t x304 = 30586U;
	volatile int32_t t75 = 0;

	t75 = (x301&(x302&(x303<x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = INT32_MAX;
	int32_t x306 = 184;
	volatile int32_t x307 = -21240952;
	int32_t x308 = INT32_MIN;
	volatile int32_t t76 = 511431108;

	t76 = (x305&(x306&(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = -1;
	int16_t x311 = INT16_MIN;
	static int64_t x312 = -1LL;
	int32_t t77 = 503;

	t77 = (x309&(x310&(x311<x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = 13;
	static int8_t x314 = INT8_MAX;
	uint16_t x316 = 1717U;
	int32_t t78 = -12;

	t78 = (x313&(x314&(x315<x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	int8_t x319 = INT8_MAX;
	uint32_t x320 = 1003711U;
	volatile int64_t t79 = 185057490LL;

	t79 = (x317&(x318&(x319<x320)));

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int32_t x323 = -730;
	int16_t x324 = INT16_MAX;
	volatile int32_t t80 = 5733385;

	t80 = (x321&(x322&(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MAX;
	int16_t x326 = -1;
	int64_t x328 = INT64_MAX;
	static volatile int64_t t81 = 13140945568LL;

	t81 = (x325&(x326&(x327<x328)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x330 = INT8_MIN;
	uint64_t x331 = UINT64_MAX;
	uint8_t x332 = 5U;
	volatile int32_t t82 = 1;

	t82 = (x329&(x330&(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = -100759918491LL;
	int32_t x334 = INT32_MIN;
	int16_t x335 = INT16_MIN;
	int64_t t83 = 354343LL;

	t83 = (x333&(x334&(x335<x336)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x339 = INT64_MAX;
	static int64_t x340 = INT64_MAX;
	volatile int64_t t84 = 572145851826619815LL;

	t84 = (x337&(x338&(x339<x340)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 9U;
	int16_t x342 = 6;
	static int8_t x343 = -13;
	volatile int32_t t85 = 21102897;

	t85 = (x341&(x342&(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = UINT64_MAX;
	volatile uint64_t x347 = 1923211880272LLU;
	volatile uint64_t x348 = UINT64_MAX;
	uint64_t t86 = 707226LLU;

	t86 = (x345&(x346&(x347<x348)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	uint16_t x351 = UINT16_MAX;
	int64_t x352 = -1LL;

	t87 = (x349&(x350&(x351<x352)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = -19152;
	uint16_t x355 = UINT16_MAX;
	static int64_t x356 = INT64_MIN;
	static int32_t t88 = -803859009;

	t88 = (x353&(x354&(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	int16_t x359 = INT16_MAX;
	int32_t x360 = -660;
	volatile int64_t t89 = 6978LL;

	t89 = (x357&(x358&(x359<x360)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 44592284646LLU;
	volatile uint16_t x362 = 30727U;
	static volatile uint32_t x363 = UINT32_MAX;

	t90 = (x361&(x362&(x363<x364)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = -3;
	static int32_t x366 = INT32_MAX;
	volatile uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = -29119;

	t91 = (x365&(x366&(x367<x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MIN;
	static int8_t x371 = INT8_MAX;
	static int64_t t92 = 3640461LL;

	t92 = (x369&(x370&(x371<x372)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = -1;
	volatile uint16_t x374 = UINT16_MAX;
	uint8_t x375 = 4U;
	int32_t x376 = -3949;

	t93 = (x373&(x374&(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 0;
	uint8_t x379 = 123U;
	int32_t x380 = 60742;
	int32_t t94 = 449488;

	t94 = (x377&(x378&(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -598;
	volatile int8_t x383 = INT8_MAX;
	volatile int32_t t95 = 14151;

	t95 = (x381&(x382&(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 1262U;
	uint64_t x386 = UINT64_MAX;
	int16_t x387 = INT16_MIN;
	int8_t x388 = -1;
	uint64_t t96 = 223976248LLU;

	t96 = (x385&(x386&(x387<x388)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -2492;
	static int8_t x391 = -1;

	t97 = (x389&(x390&(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x393 = 751LLU;
	int64_t x394 = INT64_MAX;
	uint64_t x395 = 483228612344157LLU;
	int8_t x396 = -8;

	t98 = (x393&(x394&(x395<x396)));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 7U;
	static int32_t x398 = INT32_MIN;
	int64_t x399 = -1LL;
	int16_t x400 = INT16_MIN;
	uint32_t t99 = 5U;

	t99 = (x397&(x398&(x399<x400)));

	if (t99 != 0U) { NG(); } else { ; }
	
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


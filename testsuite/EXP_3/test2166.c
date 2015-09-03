#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 23;
volatile uint8_t x9 = UINT8_MAX;
int64_t x12 = INT64_MIN;
int32_t t2 = -3;
int64_t x15 = -12650166736358LL;
int16_t x31 = INT16_MIN;
int8_t x34 = 9;
int16_t x36 = -134;
static int32_t t8 = -3;
uint32_t x42 = 103038U;
int8_t x45 = INT8_MIN;
uint16_t x47 = 20U;
int64_t x52 = INT64_MIN;
int16_t x55 = 245;
int32_t t13 = 54;
static uint64_t x60 = UINT64_MAX;
int32_t t15 = 3525278;
int8_t x65 = INT8_MAX;
uint64_t x67 = UINT64_MAX;
static int16_t x69 = INT16_MIN;
volatile int32_t t17 = 89002;
uint8_t x77 = UINT8_MAX;
volatile int32_t x78 = 7293;
int32_t t19 = -818;
int8_t x82 = -1;
uint16_t x85 = 212U;
static int16_t x86 = INT16_MIN;
uint64_t x92 = 214200386944468771LLU;
int32_t x94 = INT32_MIN;
static int32_t x95 = -1;
int32_t t24 = 89808768;
int8_t x101 = INT8_MIN;
volatile int32_t t26 = 43574;
int32_t x112 = INT32_MIN;
int32_t x113 = INT32_MIN;
volatile int32_t x114 = -1;
volatile int32_t t29 = 12711;
volatile uint16_t x126 = 832U;
static int32_t x129 = 162;
static int32_t x131 = INT32_MIN;
static volatile int64_t x140 = INT64_MIN;
volatile uint16_t x142 = UINT16_MAX;
static int16_t x147 = INT16_MIN;
int64_t x150 = 615595853LL;
volatile int8_t x152 = INT8_MIN;
uint8_t x153 = UINT8_MAX;
volatile int32_t t38 = -75330750;
int32_t x159 = INT32_MIN;
static int32_t x163 = -1;
int64_t x166 = INT64_MAX;
int8_t x168 = 11;
int16_t x170 = INT16_MAX;
volatile int64_t x173 = INT64_MIN;
static volatile int8_t x182 = INT8_MIN;
int64_t x187 = INT64_MIN;
volatile int32_t t46 = 29994;
int64_t x192 = INT64_MAX;
int32_t t47 = -697012161;
int16_t x195 = -1121;
uint32_t x211 = 124546645U;
uint64_t x223 = 1556875003174435862LLU;
static int32_t x226 = -12;
int64_t x232 = -1LL;
volatile int32_t t58 = -212;
int64_t x239 = 245786631615748227LL;
int32_t t62 = -5223150;
int64_t x257 = INT64_MIN;
volatile int32_t t65 = -112325692;
int16_t x270 = INT16_MIN;
int64_t x272 = -89555LL;
static uint16_t x274 = UINT16_MAX;
int32_t t69 = 841;
volatile uint8_t x282 = 2U;
int32_t t71 = 49851114;
volatile int8_t x289 = INT8_MIN;
int32_t t72 = 506669168;
static int32_t x296 = 19885;
int32_t t76 = -39;
int64_t x311 = INT64_MIN;
static volatile int32_t t78 = 31;
int32_t t80 = 79851266;
volatile int32_t t81 = 140323;
int32_t x338 = -1;
int8_t x339 = INT8_MIN;
int8_t x340 = -6;
uint32_t x342 = 57778822U;
int32_t x343 = INT32_MAX;
uint32_t x348 = 1206213117U;
int64_t x352 = 150204LL;
static uint8_t x354 = UINT8_MAX;
int32_t t88 = -2;
uint16_t x364 = 1U;
int32_t x378 = -41209699;
volatile int32_t t94 = 92550;
uint32_t x389 = 2U;
uint16_t x395 = 3U;
int16_t x398 = -840;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint32_t x2 = 31665U;
	volatile int8_t x3 = INT8_MIN;
	uint64_t x4 = 1334973LLU;

	t0 = ((x1&x2)==(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 28U;
	static uint16_t x6 = UINT16_MAX;
	static int8_t x7 = INT8_MIN;
	static int64_t x8 = INT64_MAX;
	static volatile int32_t t1 = 1550;

	t1 = ((x5&x6)==(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	static uint16_t x11 = 15822U;

	t2 = ((x9&x10)==(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int8_t x14 = -1;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -551001;

	t3 = ((x13&x14)==(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	volatile int8_t x18 = -5;
	static int16_t x19 = 6913;
	uint16_t x20 = 21757U;
	volatile int32_t t4 = -76672;

	t4 = ((x17&x18)==(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 2466672681000770LLU;
	int32_t x22 = INT32_MIN;
	volatile uint8_t x23 = UINT8_MAX;
	uint16_t x24 = 98U;
	volatile int32_t t5 = -546;

	t5 = ((x21&x22)==(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = INT16_MAX;
	int8_t x26 = -1;
	uint32_t x27 = 60914U;
	volatile int16_t x28 = 2;
	int32_t t6 = -1;

	t6 = ((x25&x26)==(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int64_t x30 = -1LL;
	static volatile int64_t x32 = INT64_MIN;
	volatile int32_t t7 = 5563;

	t7 = ((x29&x30)==(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile int32_t x35 = -1;

	t8 = ((x33&x34)==(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 1U;
	int32_t x38 = INT32_MAX;
	volatile uint16_t x39 = 1313U;
	volatile int64_t x40 = -1LL;
	volatile int32_t t9 = 1740;

	t9 = ((x37&x38)==(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int64_t x43 = -33295926413LL;
	int64_t x44 = 254477293374LL;
	int32_t t10 = 2;

	t10 = ((x41&x42)==(x43^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = UINT32_MAX;
	static uint64_t x48 = 77303LLU;
	volatile int32_t t11 = 1;

	t11 = ((x45&x46)==(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MIN;
	int8_t x50 = INT8_MIN;
	volatile int64_t x51 = -1LL;
	int32_t t12 = 29490;

	t12 = ((x49&x50)==(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = UINT8_MAX;
	static int64_t x54 = INT64_MIN;
	static int64_t x56 = INT64_MIN;

	t13 = ((x53&x54)==(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 5059U;
	int64_t x58 = 434LL;
	uint8_t x59 = 0U;
	int32_t t14 = -4;

	t14 = ((x57&x58)==(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 49;
	int16_t x62 = 0;
	int8_t x63 = INT8_MAX;
	static uint8_t x64 = 7U;

	t15 = ((x61&x62)==(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 1U;
	int32_t x68 = INT32_MIN;
	static volatile int32_t t16 = 482;

	t16 = ((x65&x66)==(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = UINT8_MAX;
	uint16_t x71 = 42U;
	static volatile uint32_t x72 = 191837800U;

	t17 = ((x69&x70)==(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 1887;
	uint16_t x74 = UINT16_MAX;
	uint32_t x75 = 115U;
	int16_t x76 = -158;
	volatile int32_t t18 = -12;

	t18 = ((x73&x74)==(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x79 = 30917159;
	int8_t x80 = INT8_MIN;

	t19 = ((x77&x78)==(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -1;
	int64_t x83 = INT64_MIN;
	volatile int32_t x84 = INT32_MAX;
	int32_t t20 = 94718;

	t20 = ((x81&x82)==(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x87 = 8475268695331026123LLU;
	static uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = -734668059;

	t21 = ((x85&x86)==(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 126495U;
	int8_t x90 = -7;
	static int8_t x91 = INT8_MIN;
	int32_t t22 = -76;

	t22 = ((x89&x90)==(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int16_t x96 = INT16_MIN;
	static int32_t t23 = 0;

	t23 = ((x93&x94)==(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	volatile uint8_t x98 = UINT8_MAX;
	volatile int16_t x99 = INT16_MAX;
	uint32_t x100 = 116232349U;

	t24 = ((x97&x98)==(x99^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MIN;
	volatile uint32_t x103 = 61739U;
	int8_t x104 = INT8_MAX;
	int32_t t25 = 117;

	t25 = ((x101&x102)==(x103^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MIN;
	uint16_t x106 = 4008U;
	int8_t x107 = -1;
	volatile int16_t x108 = -1285;

	t26 = ((x105&x106)==(x107^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 329U;
	static int64_t x110 = INT64_MIN;
	static uint32_t x111 = UINT32_MAX;
	volatile int32_t t27 = -145;

	t27 = ((x109&x110)==(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x115 = 7U;
	volatile int64_t x116 = -1LL;
	static volatile int32_t t28 = 0;

	t28 = ((x113&x114)==(x115^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 54;
	volatile int8_t x118 = -15;
	volatile uint8_t x119 = 0U;
	uint64_t x120 = 138333398LLU;

	t29 = ((x117&x118)==(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -52;
	int64_t x122 = INT64_MAX;
	static uint64_t x123 = UINT64_MAX;
	int8_t x124 = 15;
	static int32_t t30 = 16774;

	t30 = ((x121&x122)==(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = 11U;
	static int32_t x127 = INT32_MIN;
	static int8_t x128 = INT8_MIN;
	int32_t t31 = -8336680;

	t31 = ((x125&x126)==(x127^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = 3U;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t32 = 327823;

	t32 = ((x129&x130)==(x131^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 376U;
	int64_t x134 = INT64_MIN;
	volatile int64_t x135 = 26535031272249LL;
	volatile uint32_t x136 = 49U;
	volatile int32_t t33 = 2907612;

	t33 = ((x133&x134)==(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 58U;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	volatile int32_t t34 = -9;

	t34 = ((x137&x138)==(x139^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -1;
	static int64_t x143 = INT64_MIN;
	uint8_t x144 = 27U;
	static volatile int32_t t35 = 0;

	t35 = ((x141&x142)==(x143^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	static int16_t x146 = INT16_MIN;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = -6187866;

	t36 = ((x145&x146)==(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 13U;
	static int32_t x151 = 30791;
	volatile int32_t t37 = 5139;

	t37 = ((x149&x150)==(x151^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = -1LL;
	int16_t x155 = -116;
	uint64_t x156 = 7906245292212074200LLU;

	t38 = ((x153&x154)==(x155^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = -1;
	int8_t x158 = 11;
	uint64_t x160 = UINT64_MAX;
	int32_t t39 = 0;

	t39 = ((x157&x158)==(x159^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static int32_t x162 = INT32_MIN;
	uint64_t x164 = UINT64_MAX;
	volatile int32_t t40 = -4494;

	t40 = ((x161&x162)==(x163^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	volatile int8_t x167 = INT8_MIN;
	static int32_t t41 = 73;

	t41 = ((x165&x166)==(x167^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x169 = UINT8_MAX;
	static uint16_t x171 = UINT16_MAX;
	volatile uint8_t x172 = 21U;
	int32_t t42 = 15088283;

	t42 = ((x169&x170)==(x171^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = 1941U;
	static int16_t x175 = 0;
	int64_t x176 = -1LL;
	int32_t t43 = -7;

	t43 = ((x173&x174)==(x175^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	int8_t x178 = INT8_MIN;
	static int64_t x179 = INT64_MIN;
	uint8_t x180 = UINT8_MAX;
	int32_t t44 = -8;

	t44 = ((x177&x178)==(x179^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MIN;
	int64_t x183 = -101776113016189764LL;
	volatile int32_t x184 = INT32_MAX;
	int32_t t45 = 49574437;

	t45 = ((x181&x182)==(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MIN;
	uint16_t x186 = UINT16_MAX;
	static int64_t x188 = 3910320380317LL;

	t46 = ((x185&x186)==(x187^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	uint16_t x190 = UINT16_MAX;
	uint64_t x191 = UINT64_MAX;

	t47 = ((x189&x190)==(x191^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MIN;
	int32_t x194 = INT32_MIN;
	uint8_t x196 = 14U;
	int32_t t48 = -13;

	t48 = ((x193&x194)==(x195^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	uint16_t x198 = 75U;
	int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MAX;
	int32_t t49 = 42406520;

	t49 = ((x197&x198)==(x199^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int16_t x202 = 7298;
	volatile uint8_t x203 = 0U;
	volatile int8_t x204 = INT8_MIN;
	int32_t t50 = 732515;

	t50 = ((x201&x202)==(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	volatile int16_t x206 = INT16_MIN;
	static int8_t x207 = -1;
	volatile int8_t x208 = INT8_MIN;
	static int32_t t51 = -6841;

	t51 = ((x205&x206)==(x207^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MIN;
	uint8_t x212 = 1U;
	static int32_t t52 = -1;

	t52 = ((x209&x210)==(x211^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 30U;
	int8_t x214 = -1;
	uint32_t x215 = UINT32_MAX;
	int64_t x216 = -11050585LL;
	volatile int32_t t53 = -306833;

	t53 = ((x213&x214)==(x215^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static volatile uint64_t x218 = UINT64_MAX;
	int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = -23674465;

	t54 = ((x217&x218)==(x219^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	int64_t x222 = INT64_MIN;
	int16_t x224 = INT16_MIN;
	int32_t t55 = 0;

	t55 = ((x221&x222)==(x223^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	uint16_t x227 = UINT16_MAX;
	int16_t x228 = INT16_MAX;
	int32_t t56 = -70878598;

	t56 = ((x225&x226)==(x227^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x229 = 17U;
	volatile uint32_t x230 = 2U;
	int32_t x231 = INT32_MAX;
	volatile int32_t t57 = 50002610;

	t57 = ((x229&x230)==(x231^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = -1;
	static int64_t x234 = INT64_MAX;
	static volatile uint8_t x235 = 13U;
	static volatile int8_t x236 = INT8_MAX;

	t58 = ((x233&x234)==(x235^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	uint8_t x238 = UINT8_MAX;
	volatile int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -17613909;

	t59 = ((x237&x238)==(x239^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = -3;
	volatile int16_t x242 = INT16_MAX;
	uint8_t x243 = 15U;
	int64_t x244 = INT64_MAX;
	volatile int32_t t60 = -1;

	t60 = ((x241&x242)==(x243^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MIN;
	int64_t x247 = -320588134408390LL;
	uint8_t x248 = 75U;
	int32_t t61 = 16;

	t61 = ((x245&x246)==(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 18;
	static int8_t x250 = INT8_MIN;
	int16_t x251 = 1;
	uint8_t x252 = UINT8_MAX;

	t62 = ((x249&x250)==(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 13472U;
	int32_t x254 = -1;
	int64_t x255 = -1LL;
	int64_t x256 = -1LL;
	volatile int32_t t63 = 14675994;

	t63 = ((x253&x254)==(x255^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x258 = UINT64_MAX;
	int8_t x259 = INT8_MIN;
	int32_t x260 = 0;
	volatile int32_t t64 = -402454;

	t64 = ((x257&x258)==(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 6;
	int32_t x262 = INT32_MAX;
	uint32_t x263 = 22U;
	int32_t x264 = INT32_MIN;

	t65 = ((x261&x262)==(x263^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	uint16_t x266 = UINT16_MAX;
	uint64_t x267 = 22914946555642LLU;
	int32_t x268 = 464;
	int32_t t66 = 14870274;

	t66 = ((x265&x266)==(x267^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	uint32_t x271 = UINT32_MAX;
	int32_t t67 = 22;

	t67 = ((x269&x270)==(x271^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	static int16_t x276 = INT16_MIN;
	int32_t t68 = 200977;

	t68 = ((x273&x274)==(x275^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 1321U;
	static uint32_t x278 = UINT32_MAX;
	static int64_t x279 = 111646798231225143LL;
	int32_t x280 = 12;

	t69 = ((x277&x278)==(x279^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -4714;
	volatile uint32_t x283 = 58831U;
	static int8_t x284 = -21;
	static volatile int32_t t70 = -5;

	t70 = ((x281&x282)==(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = INT64_MIN;
	volatile int64_t x286 = INT64_MIN;
	volatile int32_t x287 = -1;
	int16_t x288 = INT16_MIN;

	t71 = ((x285&x286)==(x287^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = -1;
	static volatile int8_t x291 = -13;
	volatile int64_t x292 = -3736313871LL;

	t72 = ((x289&x290)==(x291^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 44U;
	volatile uint8_t x294 = 8U;
	int32_t x295 = -1;
	static volatile int32_t t73 = 4;

	t73 = ((x293&x294)==(x295^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = 280996096064761LLU;
	static int16_t x298 = 0;
	int64_t x299 = INT64_MIN;
	int8_t x300 = INT8_MAX;
	volatile int32_t t74 = 66674823;

	t74 = ((x297&x298)==(x299^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = -26;
	int8_t x303 = -28;
	int32_t x304 = 484773167;
	volatile int32_t t75 = -101774695;

	t75 = ((x301&x302)==(x303^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = -55;
	uint8_t x306 = 17U;
	volatile int64_t x307 = -8LL;
	int64_t x308 = -1LL;

	t76 = ((x305&x306)==(x307^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = UINT16_MAX;
	static int64_t x310 = -1LL;
	int8_t x312 = INT8_MIN;
	volatile int32_t t77 = 1308092;

	t77 = ((x309&x310)==(x311^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	static int8_t x314 = INT8_MAX;
	volatile uint64_t x315 = 1039363516565LLU;
	int8_t x316 = 1;

	t78 = ((x313&x314)==(x315^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -3200555874456179LL;
	int8_t x318 = INT8_MIN;
	int16_t x319 = INT16_MAX;
	volatile int64_t x320 = -2058390LL;
	static volatile int32_t t79 = -56285;

	t79 = ((x317&x318)==(x319^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -13;
	volatile uint64_t x322 = 62379LLU;
	static int64_t x323 = INT64_MAX;
	uint32_t x324 = 821797U;

	t80 = ((x321&x322)==(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	int32_t x326 = -1;
	uint64_t x327 = UINT64_MAX;
	int16_t x328 = INT16_MAX;

	t81 = ((x325&x326)==(x327^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = -1;
	uint8_t x330 = 61U;
	int8_t x331 = INT8_MAX;
	volatile int8_t x332 = INT8_MIN;
	int32_t t82 = 4;

	t82 = ((x329&x330)==(x331^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x333 = -2346126462LL;
	int16_t x334 = 1033;
	int64_t x335 = 97018LL;
	int16_t x336 = INT16_MIN;
	volatile int32_t t83 = -7;

	t83 = ((x333&x334)==(x335^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = 10102967LL;
	int32_t t84 = 82;

	t84 = ((x337&x338)==(x339^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	volatile int8_t x344 = -3;
	int32_t t85 = 8285352;

	t85 = ((x341&x342)==(x343^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	uint64_t x346 = 0LLU;
	static int8_t x347 = -1;
	int32_t t86 = 948125347;

	t86 = ((x345&x346)==(x347^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	volatile uint8_t x350 = UINT8_MAX;
	static uint8_t x351 = 116U;
	int32_t t87 = -101362;

	t87 = ((x349&x350)==(x351^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	uint64_t x355 = UINT64_MAX;
	int32_t x356 = -1;

	t88 = ((x353&x354)==(x355^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 402356105939LLU;
	int64_t x358 = INT64_MIN;
	uint16_t x359 = UINT16_MAX;
	static int64_t x360 = INT64_MAX;
	int32_t t89 = -1;

	t89 = ((x357&x358)==(x359^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	uint64_t x362 = UINT64_MAX;
	static uint64_t x363 = UINT64_MAX;
	int32_t t90 = -911846458;

	t90 = ((x361&x362)==(x363^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = -1;
	uint16_t x366 = 1557U;
	volatile uint16_t x367 = 69U;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 12650633;

	t91 = ((x365&x366)==(x367^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = -863;
	volatile int32_t x370 = INT32_MIN;
	int8_t x371 = -33;
	uint16_t x372 = UINT16_MAX;
	int32_t t92 = -219;

	t92 = ((x369&x370)==(x371^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	volatile int8_t x374 = -1;
	int8_t x375 = -1;
	volatile int64_t x376 = -70LL;
	volatile int32_t t93 = -11981596;

	t93 = ((x373&x374)==(x375^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = 300U;
	int64_t x379 = INT64_MAX;
	static volatile int64_t x380 = INT64_MAX;

	t94 = ((x377&x378)==(x379^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	static int8_t x382 = INT8_MIN;
	uint32_t x383 = UINT32_MAX;
	int64_t x384 = -1926019270LL;
	int32_t t95 = -435075;

	t95 = ((x381&x382)==(x383^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1768264;
	static int32_t x386 = 0;
	uint16_t x387 = 21U;
	uint16_t x388 = UINT16_MAX;
	static int32_t t96 = -70521193;

	t96 = ((x385&x386)==(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = INT8_MAX;
	static uint8_t x391 = 79U;
	volatile int16_t x392 = INT16_MIN;
	int32_t t97 = -28;

	t97 = ((x389&x390)==(x391^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -22;
	int8_t x394 = INT8_MIN;
	volatile int32_t x396 = -1;
	volatile int32_t t98 = 3387931;

	t98 = ((x393&x394)==(x395^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = 7;
	static uint64_t x399 = UINT64_MAX;
	volatile int16_t x400 = 0;
	int32_t t99 = -2824089;

	t99 = ((x397&x398)==(x399^x400));

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


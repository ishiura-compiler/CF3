#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x5 = 6U;
static int32_t t1 = -250987195;
uint32_t x12 = UINT32_MAX;
static uint8_t x16 = 56U;
int64_t x17 = INT64_MAX;
int16_t x18 = -1;
volatile int32_t x24 = INT32_MAX;
uint16_t x25 = UINT16_MAX;
uint32_t x35 = 71917U;
uint64_t x39 = 151684LLU;
static int64_t x40 = -3451LL;
int64_t x41 = INT64_MAX;
volatile int64_t x48 = -85652703LL;
int64_t t11 = 10641956836LL;
int8_t x54 = -1;
volatile uint64_t x55 = 394432LLU;
int32_t t15 = 387;
uint16_t x66 = 879U;
volatile int32_t x67 = INT32_MAX;
static int32_t x70 = INT32_MIN;
static uint16_t x72 = UINT16_MAX;
int16_t x74 = -1;
volatile uint64_t x75 = 0LLU;
uint64_t t18 = 4162223160805LLU;
volatile int8_t x86 = INT8_MAX;
static int32_t x88 = -9;
int64_t t22 = 19349218990959850LL;
static uint32_t x98 = UINT32_MAX;
static uint32_t t25 = 2401U;
static uint32_t x106 = UINT32_MAX;
int64_t t26 = -14492916LL;
int64_t x112 = -1LL;
static volatile int32_t t28 = -101;
int8_t x121 = 7;
int64_t x123 = 1163478227LL;
int64_t x124 = -7573LL;
static int32_t x135 = -1;
static uint16_t x136 = UINT16_MAX;
int8_t x140 = INT8_MIN;
uint16_t x146 = 5U;
int32_t x156 = -1;
int16_t x159 = 1;
static uint16_t x163 = 39U;
static uint16_t x164 = 27U;
volatile int16_t x166 = 2;
int64_t t40 = -14774LL;
volatile uint16_t x177 = 10U;
uint64_t x188 = 9152103284LLU;
int32_t x190 = -338;
static uint16_t x193 = 7340U;
volatile int32_t x194 = -234445298;
int64_t x196 = 168232522044LL;
int64_t x207 = INT64_MIN;
int64_t x208 = INT64_MIN;
uint64_t t51 = 12240288737171LLU;
int8_t x213 = INT8_MIN;
static int64_t x215 = -1LL;
static int64_t x218 = INT64_MIN;
int8_t x221 = 0;
static volatile int16_t x222 = INT16_MIN;
int32_t x223 = 29818932;
int8_t x234 = 25;
static int8_t x235 = INT8_MIN;
uint32_t x241 = 284998593U;
volatile uint32_t x249 = UINT32_MAX;
volatile int16_t x255 = INT16_MIN;
int16_t x262 = INT16_MIN;
uint32_t x263 = 1U;
volatile int64_t x264 = -1LL;
static int16_t x266 = -2;
volatile int8_t x267 = INT8_MIN;
static int8_t x271 = -1;
uint8_t x272 = 3U;
volatile uint32_t t65 = 65389U;
static int64_t x278 = -1LL;
uint16_t x279 = UINT16_MAX;
int32_t x283 = -13;
uint64_t x288 = 29276287LLU;
int16_t x292 = INT16_MIN;
volatile uint16_t x309 = 2U;
uint16_t x310 = 32U;
uint8_t x311 = 79U;
int32_t t75 = 1558993;
int32_t x313 = INT32_MAX;
uint32_t t77 = 10U;
static int16_t x323 = -1;
volatile int16_t x326 = INT16_MAX;
uint32_t x328 = UINT32_MAX;
volatile int8_t x337 = 0;
uint64_t x344 = 11815459402323LLU;
volatile int8_t x345 = INT8_MIN;
uint8_t x347 = 1U;
uint32_t x351 = 5U;
volatile int8_t x357 = INT8_MAX;
int64_t t87 = 117992946167LL;
volatile int16_t x361 = INT16_MIN;
int64_t x362 = -1LL;
int64_t t88 = -37373LL;
volatile int64_t x366 = INT64_MAX;
volatile uint64_t t90 = 1785LLU;
int64_t t91 = 274496649596LL;
int8_t x379 = -1;
volatile int32_t t92 = -1723625;
int64_t x382 = INT64_MAX;
int16_t x386 = -5215;
volatile uint16_t x388 = 7391U;
uint64_t t94 = 366273762LLU;
volatile int64_t t96 = -98889LL;
static int8_t x397 = -1;
volatile int8_t x404 = -25;
static int32_t x405 = -1;
uint64_t x407 = 97169513LLU;
static volatile uint64_t t99 = 11956637LLU;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	uint64_t x2 = UINT64_MAX;
	volatile uint32_t x3 = 11295U;
	int16_t x4 = -1;
	static volatile uint64_t t0 = 1659LLU;

	t0 = (x1&(x2&(x3/x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -53;
	uint8_t x7 = UINT8_MAX;
	int8_t x8 = 1;

	t1 = (x5&(x6&(x7/x8)));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static int64_t x10 = INT64_MIN;
	static uint64_t x11 = 20685487689118LLU;
	static uint64_t t2 = 252662183LLU;

	t2 = (x9&(x10&(x11/x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 0;
	uint16_t x14 = 0U;
	int32_t x15 = -1;
	volatile int32_t t3 = 0;

	t3 = (x13&(x14&(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x19 = -13;
	volatile int32_t x20 = INT32_MIN;
	volatile int64_t t4 = -33137762LL;

	t4 = (x17&(x18&(x19/x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int64_t x22 = 2LL;
	int64_t x23 = INT64_MAX;
	int64_t t5 = -3846788113056186LL;

	t5 = (x21&(x22&(x23/x24)));

	if (t5 != 2LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -1;
	volatile int16_t x27 = INT16_MIN;
	static volatile int32_t x28 = INT32_MIN;
	int32_t t6 = -76;

	t6 = (x25&(x26&(x27/x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -30;
	uint64_t x30 = 19953326563626LLU;
	int16_t x31 = INT16_MIN;
	static int64_t x32 = 5LL;
	static uint64_t t7 = 6979111699658528911LLU;

	t7 = (x29&(x30&(x31/x32)));

	if (t7 != 19953326563362LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -5100LL;
	volatile int64_t x34 = INT64_MAX;
	int64_t x36 = INT64_MIN;
	volatile int64_t t8 = -149987428768029519LL;

	t8 = (x33&(x34&(x35/x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 13042;
	volatile uint32_t x38 = 0U;
	volatile uint64_t t9 = 5977LLU;

	t9 = (x37&(x38&(x39/x40)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 59U;
	int16_t x43 = -22;
	static volatile int32_t x44 = -1;
	volatile int64_t t10 = -12LL;

	t10 = (x41&(x42&(x43/x44)));

	if (t10 != 18LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -1LL;
	int8_t x46 = INT8_MIN;
	volatile int64_t x47 = INT64_MIN;

	t11 = (x45&(x46&(x47/x48)));

	if (t11 != 107683373824LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	static int64_t x50 = INT64_MAX;
	static uint64_t x51 = UINT64_MAX;
	volatile int16_t x52 = -1;
	volatile uint64_t t12 = 1LLU;

	t12 = (x49&(x50&(x51/x52)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = 850LLU;
	uint16_t x56 = UINT16_MAX;
	volatile uint64_t t13 = 7170259652919700LLU;

	t13 = (x53&(x54&(x55/x56)));

	if (t13 != 2LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	static uint16_t x58 = UINT16_MAX;
	int16_t x59 = -29;
	uint64_t x60 = UINT64_MAX;
	static uint64_t t14 = 21728LLU;

	t14 = (x57&(x58&(x59/x60)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = 4U;
	uint16_t x62 = UINT16_MAX;
	uint8_t x63 = 98U;
	uint8_t x64 = 1U;

	t15 = (x61&(x62&(x63/x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int64_t x68 = -18721847319409957LL;
	volatile uint64_t t16 = 812LLU;

	t16 = (x65&(x66&(x67/x68)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int64_t x71 = 23LL;
	static volatile int64_t t17 = -429504911LL;

	t17 = (x69&(x70&(x71/x72)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	static volatile int8_t x76 = INT8_MAX;

	t18 = (x73&(x74&(x75/x76)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = UINT16_MAX;
	int8_t x78 = INT8_MIN;
	uint64_t x79 = 1121287174882871862LLU;
	uint64_t x80 = 204931829LLU;
	volatile uint64_t t19 = 729371LLU;

	t19 = (x77&(x78&(x79/x80)));

	if (t19 != 43392LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = UINT16_MAX;
	int64_t x82 = -1LL;
	int8_t x83 = INT8_MAX;
	uint64_t x84 = UINT64_MAX;
	uint64_t t20 = 260987274379646566LLU;

	t20 = (x81&(x82&(x83/x84)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	volatile int64_t x87 = INT64_MIN;
	volatile int64_t t21 = -4610824371856803300LL;

	t21 = (x85&(x86&(x87/x88)));

	if (t21 != 56LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	volatile int64_t x90 = -53LL;
	volatile int16_t x91 = 0;
	int32_t x92 = INT32_MIN;

	t22 = (x89&(x90&(x91/x92)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = -5;
	volatile uint32_t x94 = UINT32_MAX;
	int64_t x95 = 1236LL;
	volatile int16_t x96 = INT16_MIN;
	int64_t t23 = 1664557574421879LL;

	t23 = (x93&(x94&(x95/x96)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 605832192U;
	static int32_t x99 = INT32_MIN;
	uint64_t x100 = 1504420161192LLU;
	volatile uint64_t t24 = 765LLU;

	t24 = (x97&(x98&(x99/x100)));

	if (t24 != 1572864LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -6;
	static volatile int32_t x102 = INT32_MIN;
	volatile uint32_t x103 = UINT32_MAX;
	volatile int16_t x104 = 3814;

	t25 = (x101&(x102&(x103/x104)));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 7;
	static int8_t x107 = INT8_MIN;
	volatile int64_t x108 = INT64_MIN;

	t26 = (x105&(x106&(x107/x108)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = INT64_MIN;
	int32_t x110 = -1;
	uint64_t x111 = UINT64_MAX;
	static uint64_t t27 = 495464LLU;

	t27 = (x109&(x110&(x111/x112)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	int16_t x114 = -1;
	int32_t x115 = -1;
	int16_t x116 = INT16_MAX;

	t28 = (x113&(x114&(x115/x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x122 = UINT32_MAX;
	volatile int64_t t29 = -193578LL;

	t29 = (x121&(x122&(x123/x124)));

	if (t29 != 5LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x125 = 141317099277LLU;
	static uint32_t x126 = 350U;
	int16_t x127 = INT16_MIN;
	int32_t x128 = INT32_MAX;
	volatile uint64_t t30 = 1LLU;

	t30 = (x125&(x126&(x127/x128)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = UINT64_MAX;
	int64_t x130 = INT64_MIN;
	uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MAX;
	static volatile uint64_t t31 = 13LLU;

	t31 = (x129&(x130&(x131/x132)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 373U;
	uint64_t x134 = UINT64_MAX;
	uint64_t t32 = 3736929746186LLU;

	t32 = (x133&(x134&(x135/x136)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 22U;
	static int8_t x138 = 15;
	int16_t x139 = INT16_MAX;
	int32_t t33 = -965;

	t33 = (x137&(x138&(x139/x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x141 = 669856657122355LLU;
	int16_t x142 = INT16_MIN;
	int64_t x143 = -3438354422898LL;
	uint8_t x144 = 6U;
	static volatile uint64_t t34 = 1241691LLU;

	t34 = (x141&(x142&(x143/x144)));

	if (t34 != 669851689418752LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	int8_t x147 = -1;
	uint8_t x148 = 3U;
	volatile int32_t t35 = 136;

	t35 = (x145&(x146&(x147/x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x149 = -1;
	uint32_t x150 = 74350U;
	volatile uint32_t x151 = 3U;
	volatile int32_t x152 = 302593274;
	volatile uint32_t t36 = 55478669U;

	t36 = (x149&(x150&(x151/x152)));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -169684147171866LL;
	int16_t x154 = INT16_MIN;
	static int32_t x155 = -1;
	volatile int64_t t37 = 10827899LL;

	t37 = (x153&(x154&(x155/x156)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = 28625U;
	int32_t x158 = -1;
	static int16_t x160 = INT16_MIN;
	uint32_t t38 = 381U;

	t38 = (x157&(x158&(x159/x160)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MIN;
	int64_t x162 = INT64_MIN;
	int64_t t39 = -38LL;

	t39 = (x161&(x162&(x163/x164)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MAX;
	int32_t x167 = -42382161;
	uint32_t x168 = 519U;

	t40 = (x165&(x166&(x167/x168)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MIN;
	uint8_t x170 = 13U;
	int16_t x171 = 3;
	static volatile int8_t x172 = INT8_MIN;
	volatile int64_t t41 = 64770587817683LL;

	t41 = (x169&(x170&(x171/x172)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = 9LL;
	int16_t x174 = -62;
	volatile uint16_t x175 = 8U;
	int32_t x176 = -1;
	volatile int64_t t42 = -241858LL;

	t42 = (x173&(x174&(x175/x176)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x178 = -1;
	static int16_t x179 = 0;
	int64_t x180 = INT64_MIN;
	int64_t t43 = 958LL;

	t43 = (x177&(x178&(x179/x180)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 3544399915265LLU;
	int32_t x182 = INT32_MAX;
	static int16_t x183 = -3;
	int64_t x184 = -1LL;
	static uint64_t t44 = 4192766443804568LLU;

	t44 = (x181&(x182&(x183/x184)));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 27U;
	int16_t x186 = INT16_MIN;
	static volatile uint16_t x187 = UINT16_MAX;
	uint64_t t45 = 1695666445759156339LLU;

	t45 = (x185&(x186&(x187/x188)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x189 = UINT32_MAX;
	int32_t x191 = INT32_MAX;
	uint16_t x192 = UINT16_MAX;
	volatile uint32_t t46 = 3U;

	t46 = (x189&(x190&(x191/x192)));

	if (t46 != 32768U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x195 = 194U;
	volatile int64_t t47 = -6LL;

	t47 = (x193&(x194&(x195/x196)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = 1;
	uint16_t x198 = 4295U;
	int32_t x199 = INT32_MAX;
	int32_t x200 = 1;
	static volatile int32_t t48 = 253827551;

	t48 = (x197&(x198&(x199/x200)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = INT8_MAX;
	uint64_t x202 = UINT64_MAX;
	int16_t x203 = INT16_MIN;
	uint16_t x204 = 670U;
	uint64_t t49 = 118802487LLU;

	t49 = (x201&(x202&(x203/x204)));

	if (t49 != 80LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = 1124611399LLU;
	uint64_t x206 = 17660945320170LLU;
	uint64_t t50 = 4157LLU;

	t50 = (x205&(x206&(x207/x208)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x209 = 27U;
	volatile int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MAX;
	volatile uint64_t x212 = UINT64_MAX;

	t51 = (x209&(x210&(x211/x212)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x214 = -640287451287601195LL;
	int64_t x216 = -4171334206LL;
	volatile int64_t t52 = -6421030938824LL;

	t52 = (x213&(x214&(x215/x216)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = UINT32_MAX;
	static volatile uint16_t x219 = 1U;
	int16_t x220 = -1;
	int64_t t53 = 269LL;

	t53 = (x217&(x218&(x219/x220)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x224 = 1;
	int32_t t54 = 1;

	t54 = (x221&(x222&(x223/x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x225 = INT64_MIN;
	static int8_t x226 = -1;
	int64_t x227 = -181715406000500597LL;
	int8_t x228 = INT8_MIN;
	volatile int64_t t55 = -2LL;

	t55 = (x225&(x226&(x227/x228)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	volatile int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MIN;
	int64_t x232 = -12896903569LL;
	int64_t t56 = -1785LL;

	t56 = (x229&(x230&(x231/x232)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MIN;
	uint8_t x236 = 114U;
	volatile int32_t t57 = -3322;

	t57 = (x233&(x234&(x235/x236)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x242 = INT16_MIN;
	int32_t x243 = -170;
	volatile uint16_t x244 = 7013U;
	static volatile uint32_t t58 = 496319U;

	t58 = (x241&(x242&(x243/x244)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x245 = 2U;
	uint64_t x246 = 13796062LLU;
	int16_t x247 = 1370;
	volatile uint16_t x248 = UINT16_MAX;
	uint64_t t59 = 611002312928716168LLU;

	t59 = (x245&(x246&(x247/x248)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x250 = 76;
	int8_t x251 = INT8_MAX;
	uint16_t x252 = 7U;
	static uint32_t t60 = 41119087U;

	t60 = (x249&(x250&(x251/x252)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x253 = INT16_MIN;
	int8_t x254 = -1;
	int8_t x256 = 27;
	volatile int32_t t61 = -5;

	t61 = (x253&(x254&(x255/x256)));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = -1LL;
	static volatile int16_t x258 = INT16_MIN;
	int32_t x259 = -1;
	int8_t x260 = 1;
	volatile int64_t t62 = -53285270LL;

	t62 = (x257&(x258&(x259/x260)));

	if (t62 != -32768LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x261 = INT64_MIN;
	int64_t t63 = INT64_MIN;

	t63 = (x261&(x262&(x263/x264)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = INT8_MIN;
	volatile int64_t x268 = 3857LL;
	volatile int64_t t64 = 273731550282208803LL;

	t64 = (x265&(x266&(x267/x268)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = -897;
	uint32_t x270 = 16234U;

	t65 = (x269&(x270&(x271/x272)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x273 = INT64_MIN;
	int16_t x274 = -234;
	static int64_t x275 = -1LL;
	int16_t x276 = 3960;
	int64_t t66 = 979832472921624LL;

	t66 = (x273&(x274&(x275/x276)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = INT16_MIN;
	int16_t x280 = -1;
	volatile int64_t t67 = -27181600451887LL;

	t67 = (x277&(x278&(x279/x280)));

	if (t67 != -65536LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = INT32_MIN;
	volatile int32_t x282 = 1310555;
	uint32_t x284 = 54U;
	static uint32_t t68 = 5873361U;

	t68 = (x281&(x282&(x283/x284)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x285 = -2;
	volatile uint64_t x286 = 4083238487637122780LLU;
	int32_t x287 = INT32_MIN;
	uint64_t t69 = 1166573LLU;

	t69 = (x285&(x286&(x287/x288)));

	if (t69 != 549827124940LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x289 = INT32_MAX;
	int64_t x290 = -1LL;
	static int32_t x291 = -1;
	volatile int64_t t70 = 421132870468LL;

	t70 = (x289&(x290&(x291/x292)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = INT64_MIN;
	uint64_t x294 = 194998260515242403LLU;
	volatile int64_t x295 = INT64_MIN;
	int16_t x296 = -12654;
	volatile uint64_t t71 = 12418895LLU;

	t71 = (x293&(x294&(x295/x296)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x297 = 6514313;
	int16_t x298 = 35;
	int8_t x299 = INT8_MIN;
	int64_t x300 = INT64_MIN;
	int64_t t72 = 3890034LL;

	t72 = (x297&(x298&(x299/x300)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MIN;
	static uint64_t x302 = 1820428306366LLU;
	uint16_t x303 = UINT16_MAX;
	uint8_t x304 = UINT8_MAX;
	uint64_t t73 = 6447598909215550LLU;

	t73 = (x301&(x302&(x303/x304)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = -1;
	int16_t x306 = INT16_MAX;
	uint64_t x307 = 255476LLU;
	volatile int64_t x308 = -372LL;
	volatile uint64_t t74 = 29181610018762LLU;

	t74 = (x305&(x306&(x307/x308)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x312 = INT16_MIN;

	t75 = (x309&(x310&(x311/x312)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x314 = UINT16_MAX;
	int64_t x315 = -1LL;
	int8_t x316 = 6;
	static volatile int64_t t76 = 14536LL;

	t76 = (x313&(x314&(x315/x316)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = 4628;
	int32_t x318 = INT32_MIN;
	uint8_t x319 = UINT8_MAX;
	volatile uint32_t x320 = 1985073U;

	t77 = (x317&(x318&(x319/x320)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = INT16_MAX;
	volatile int8_t x322 = INT8_MAX;
	int16_t x324 = INT16_MAX;
	static volatile int32_t t78 = 146;

	t78 = (x321&(x322&(x323/x324)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = 1;
	uint64_t x327 = UINT64_MAX;
	uint64_t t79 = 338877195857LLU;

	t79 = (x325&(x326&(x327/x328)));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x329 = 2651262U;
	uint64_t x330 = 206875898759812522LLU;
	int8_t x331 = INT8_MIN;
	static int8_t x332 = 2;
	uint64_t t80 = 117LLU;

	t80 = (x329&(x330&(x331/x332)));

	if (t80 != 2626560LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x333 = UINT64_MAX;
	int32_t x334 = -1;
	int8_t x335 = -8;
	int32_t x336 = -1;
	uint64_t t81 = 10191LLU;

	t81 = (x333&(x334&(x335/x336)));

	if (t81 != 8LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x338 = INT8_MIN;
	int16_t x339 = 45;
	uint64_t x340 = 84577427076017835LLU;
	uint64_t t82 = 610414841696LLU;

	t82 = (x337&(x338&(x339/x340)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x342 = INT8_MIN;
	static volatile uint16_t x343 = UINT16_MAX;
	volatile uint64_t t83 = 233LLU;

	t83 = (x341&(x342&(x343/x344)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x346 = INT16_MAX;
	volatile uint8_t x348 = UINT8_MAX;
	static int32_t t84 = 251054457;

	t84 = (x345&(x346&(x347/x348)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = 409039905U;
	int8_t x350 = -48;
	static int32_t x352 = INT32_MIN;
	uint32_t t85 = 1804U;

	t85 = (x349&(x350&(x351/x352)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x353 = -1;
	uint16_t x354 = UINT16_MAX;
	int64_t x355 = 568194454958777064LL;
	uint8_t x356 = 46U;
	int64_t t86 = 3657850560065565LL;

	t86 = (x353&(x354&(x355/x356)));

	if (t86 != 17290LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x358 = INT16_MIN;
	volatile int64_t x359 = INT64_MAX;
	static uint32_t x360 = 6635687U;

	t87 = (x357&(x358&(x359/x360)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x363 = -1;
	int8_t x364 = 4;

	t88 = (x361&(x362&(x363/x364)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x365 = 39U;
	int32_t x367 = -12433;
	int32_t x368 = INT32_MIN;
	static int64_t t89 = 5556813LL;

	t89 = (x365&(x366&(x367/x368)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x369 = INT32_MAX;
	volatile int64_t x370 = -1LL;
	uint64_t x371 = UINT64_MAX;
	static uint32_t x372 = UINT32_MAX;

	t90 = (x369&(x370&(x371/x372)));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x373 = INT16_MIN;
	int64_t x374 = -1LL;
	uint16_t x375 = 72U;
	volatile int64_t x376 = 1482360LL;

	t91 = (x373&(x374&(x375/x376)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = -6;
	int8_t x378 = 1;
	uint8_t x380 = 3U;

	t92 = (x377&(x378&(x379/x380)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x381 = 122U;
	static volatile int8_t x383 = -1;
	int32_t x384 = -1;
	volatile int64_t t93 = -55530049123436LL;

	t93 = (x381&(x382&(x383/x384)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x385 = 549427104543LLU;
	int8_t x387 = -4;

	t94 = (x385&(x386&(x387/x388)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x389 = 17U;
	int32_t x390 = 19961;
	uint16_t x391 = UINT16_MAX;
	static int8_t x392 = INT8_MAX;
	int32_t t95 = 1463123;

	t95 = (x389&(x390&(x391/x392)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x393 = -14560885LL;
	volatile int32_t x394 = INT32_MAX;
	uint8_t x395 = 26U;
	uint16_t x396 = 108U;

	t96 = (x393&(x394&(x395/x396)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x398 = INT8_MIN;
	int64_t x399 = -1LL;
	uint16_t x400 = UINT16_MAX;
	int64_t t97 = 2065553628130891LL;

	t97 = (x397&(x398&(x399/x400)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x401 = 41659U;
	uint32_t x402 = 20U;
	int16_t x403 = -1;
	volatile uint32_t t98 = 1424681U;

	t98 = (x401&(x402&(x403/x404)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x406 = UINT8_MAX;
	uint64_t x408 = 1023373553240076LLU;

	t99 = (x405&(x406&(x407/x408)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

